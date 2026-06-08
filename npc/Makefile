# ***************************************************************************************
# NPC Makefile - 使用 Verilator 将 Verilog 编译为 C++ 仿真可执行文件
# ***************************************************************************************

# ============================== 路径变量 ==============================

# NPC 项目的根目录，通过 realpath 获取绝对路径
NPC_HOME := $(shell pwd)

# Verilog 源码目录
VSRC_DIR := $(NPC_HOME)/vsrc

# C++ 源码目录
CSRC_DIR := $(NPC_HOME)/csrc

# Verilator 构建输出目录
BUILD_DIR := $(NPC_HOME)/build

# 最终生成的仿真可执行文件路径
TARGET := $(BUILD_DIR)/npc

# ============================== 源文件收集 ==============================

# define.v 必须排在最前面，其他 .v 文件依赖其中的宏定义
VSRCS := $(VSRC_DIR)/define.v $(filter-out $(VSRC_DIR)/define.v, $(wildcard $(VSRC_DIR)/*.v))

# 自动收集所有 C++ 源文件
CSRCS := $(wildcard $(CSRC_DIR)/*.cpp) $(wildcard $(CSRC_DIR)/*/*.cpp)

# ============================== Verilator 参数 ==============================

# Verilator 基本编译选项
VERILATOR_FLAGS := --cc \
	--exe \
	--build \
	--top-module custom_cpu \
	-I$(VSRC_DIR) \
	--trace \
	-Wno-TIMESCALEMOD \
	-Wno-fatal

# 传递给 C++ 编译器的选项
# -I: 让 C++ 能 include sdb.h; -g: 调试信息; -O2: 优化
# -lreadline: 链接 readline 库（sdb 调试器需要）
VERILATOR_FLAGS += -CFLAGS "-I$(CSRC_DIR)/include -g -O2" \
	-LDFLAGS "-lreadline"

# ============================== 构建目标 ==============================

# 默认目标：编译生成仿真可执行文件
all: $(TARGET)

# 使用 Verilator 编译
$(TARGET): $(VSRCS) $(CSRCS)
	@mkdir -p $(BUILD_DIR)
	verilator $(VERILATOR_FLAGS) $(VSRCS) $(CSRCS) -o $(TARGET)

# sim 目标：先通过 git_commit 记录 RTL 变更，再编译运行
# IMG 变量由外部传入，指定要加载的二进制文件路径
sim:
	$(call git_commit, "sim RTL")  # DO NOT REMOVE THIS LINE!!!
	@$(MAKE) all
	@echo "Running simulation with image: $(IMG)"
	$(TARGET) $(IMG)

# run 目标：直接运行已编译的仿真（不重新编译）
run:
	$(TARGET) $(IMG)

# clean 目标：清理所有构建产物
clean:
	rm -rf $(BUILD_DIR)

# ============================== 引入父级 Makefile ==============================

# 引入 ysyx-workbench 根目录的 Makefile，提供 git_commit 等公共功能
include ../Makefile

.PHONY: all sim run clean
