#include <stdio.h>
#include <stdlib.h>
#include <io_utils.h>

#define PLAYER_COUNT 10

void InitPointer(int **ptr, int length, int default_value) {
    // malloc 内存分配在堆区， 数组是分配在栈上
    // malloc 不会初始化
    *ptr = malloc(sizeof(int) * length);
    for (int i = 0; i < length; ++i) {
        (*ptr)[i] = default_value;
    }
}

int main() {
    int *players;
    //InitPointer(&players, PLAYER_COUNT, 0);
    players = calloc(PLAYER_COUNT, sizeof(int));
    for (int i = 0; i < PLAYER_COUNT; ++i) {
        PRINT_INT(players[i]);
        players[i] = i;
    }
    PRINT_INT_ARRAY(players, PLAYER_COUNT);

    players = realloc(players, PLAYER_COUNT * 2 * sizeof(int));
    PRINT_INT_ARRAY(players, PLAYER_COUNT * 2);

    if (players) {

        free(players); // 释放堆区的内存
    } else {

    }


    return 0;
}
