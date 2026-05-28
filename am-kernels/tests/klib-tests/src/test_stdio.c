#include "../include/klibtest.h"

//由于sprintf实际上和vsprintf是一样的，所以只用测试sprintf和snprintf就可以
void test_stdio() {
     //  // putstr("--- Testing stdio.c functions ---\n");

    char buf[128];

    // test sprintf with %s
    sprintf(buf, "Hello %s", "World");
    assert(strcmp(buf, "Hello World") == 0);

    // test sprintf with %d
    sprintf(buf, "Number: %d", 12345);
    assert(strcmp(buf, "Number: 12345") == 0);
    sprintf(buf, "Negative: %d", -6789);
    assert(strcmp(buf, "Negative: -6789") == 0);

    // test sprintf with multiple formats
    sprintf(buf, "String: %s, Number: %d", "Test", 42);
    assert(strcmp(buf, "String: Test, Number: 42") == 0);

    // test snprintf
    memset(buf, 'A', sizeof(buf));
    //snprintf写入的是6-1=5个字符，最后一个字符是\0
    snprintf(buf, 6, "Hello World");
    assert(strcmp(buf, "Hello") == 0); // up to 5 chars + \0

    // test printf indirectly if you want by manual viewing, 
    // but the automated ones are mostly sprintf/snprintf.
     // printf("printf test format: %s = %d\n", "Forty-two", 42);

     //  // putstr("--- stdio.c passed ---\n\n");
}
