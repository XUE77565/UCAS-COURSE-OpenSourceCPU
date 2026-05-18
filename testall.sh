#!/bin/bash

# 如果发生错误，立即退出脚本
set -e
# 开启 pipefail：如果管道流中后续命令（如 awk）报错返回 1，则整个管道流视为报错 1，从而触发 set -e 退出
set -o pipefail

cd am-kernels/tests/cpu-tests

# 遍历 tests 目录下的所有 .c 文件
for file in tests/*.c; do
  # 提取不包含路径和后缀的文件名 (例如: 讲 tests/add.c 提取为 add)
  name=$(basename "$file" .c)

  # 跳过hello-str和string
  if [[ "$name" == "hello-str" || "$name" == "string" ]]; then
    # echo "=================================================="
    # echo "Skipping test: $name (not supported in NEMU)"
    # echo "=================================================="
    continue
  fi
  
  echo "=================================================="
  echo "Running test: $name"
  echo "=================================================="
  
  # 自动向 NEMU 喂入 c 和 q。
  # 直接将输出通过管道交给 awk 处理，awk 会原样逐行打印终端输出 {print}。
  # 一旦在此期间检测到 "is not implemented" 或者 Makefile 自带的 FAIL 报错，
  # awk 会悄悄记下标记 err=1，并在结束流时返回退出了状态码 1。
  # 因为我们加了 set -o pipefail 和 set -e，一旦状态为 1，整个脚本都会干净利落地中止。
  echo -e "c\nq" | make ARCH=riscv32-nemu ALL="$name" run | awk '{print} /is not implemented/ || /\*\*\*FAIL\*\*\*/ {err=1} END{exit err}'

  # 由于配置了 set -e 和 pipefail，只有当上一条测试完美通过时，脚本才会继续执行到这里。
  # 此时自动清理该测试及其相关的由 AM 框架生成的产物 (通常带有前缀 $name-)。
  # 注意：如果测试失败，脚本已经直接中止退出，保留着报错现场的中间文件供你调试！
  rm -f "build/${name}-"* "Makefile.${name}" 

done

echo "=================================================="
echo "All tests finished successfully!"
echo "=================================================="
