#include <stdio.h>
#include "lib_calc.h"

int main(int argc, const char* argv[]) {
    /* 打印 Hello World! */
    printf("Hello World!\r\n");
    printf("argc: %d \r\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s \r\n", i, argv[i]);
    }

    /* 调用 lib_calc 库中的函数 */
    printf("==============================\r\n");
    int res = add(1, 2);
    printf("add result: %d \r\n", res);
    return 0;
}