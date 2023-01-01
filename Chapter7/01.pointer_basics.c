#include <stdio.h>
#include <io_utils.h>

int main() {
    int a;
    scanf("%d", &a); // 从标准流读取数据，并保存到对应地址的变量中

    // int * 是一种类型, 整型指针变量
    int *p = &a; // 指针变量 p, p 保存的是地址
    PRINT_HEX(p); // 0x7d3ff7c4
    PRINT_HEX(&a); // 0x7d3ff7c4

    PRINT_INT(sizeof(int *)); // 8

    PRINT_INT(*p); // 11, *p 间接寻址, p 是 a 的地址, *p 就是 a
    PRINT_INT(a); // 11

    PRINT_INT((int *) 0x7d3ff7c4); // 2101344196

    int **pp = &p; // 指向 整型指针 的指针
    // *pp => p;
    PRINT_HEX(*pp); // p 的地址
    PRINT_INT(**pp); // 指向 p
    return 0;
}
