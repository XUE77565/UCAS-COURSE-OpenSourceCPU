#include "../include/klibtest.h"

void test_string() {
    //  // putstr("--- Testing string.c functions ---\n");

    // test strlen
    assert(strlen("") == 0);
    assert(strlen("hello") == 5);

     // putstr("STRLEN PASS");

    // test memset
    char buf[128];
    memset(buf, 'A', 10);
    buf[10] = '\0';
    assert(strcmp(buf, "AAAAAAAAAA") == 0);

     // putstr("MEMSET PASS");

    //test strcmp
    assert(strcmp("abc", "abc") == 0);
    assert(strcmp("abc", "abd") < 0);
    assert(strcmp("abd", "abc") > 0);
     // putstr("STRCMP PASS");

    // test strcpy
    strcpy(buf, "world");
    assert(strcmp(buf, "world") == 0);
    assert(strcmp(buf, "worlc") > 0);
    assert(strcmp(buf, "worle") < 0);

     // putstr("STRCPY PASS");

    // test strncpy and strncmp
    memset(buf, 0, sizeof(buf));
    strncpy(buf, "hello world", 5);
    assert(strlen(buf) == 5);
    assert(strncmp(buf, "hello", 5) == 0);
    assert(strncmp("hello", "hellz", 4) == 0);
    assert(strncmp("hello", "hellz", 5) < 0);

     // putstr("STRNCPY and STRNCMP PASS");

    // test strcat
    strcpy(buf, "hello");
    strcat(buf, " world");
    assert(strcmp(buf, "hello world") == 0);

    // test memcpy and memcmp
    char src[] = "1234567890";
    memcpy(buf, src, 10);
    assert(memcmp(buf, src, 10) == 0);
    assert(memcmp(buf, "1234567891", 10) < 0);

     // putstr("MEMCPY and MEMCMP PASS");

    // test memmove
    strcpy(buf, "1234567890");
    // move right (overlap)
    memmove(buf + 2, buf, 5); // "1212345890"
    assert(strcmp(buf, "1212345890") == 0);
    // move left (overlap)
    strcpy(buf, "1234567890");
    memmove(buf, buf + 2, 5); // "3456767890"
    assert(strcmp(buf, "3456767890") == 0);

     //  // putstr("--- string.c passed ---\n\n");
}
