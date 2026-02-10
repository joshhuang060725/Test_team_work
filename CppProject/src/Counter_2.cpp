#include "../include/Counter_2.h"
#include <iostream>

static int counter_2 = 0;

void IncrementCounter_2(int Value_From_Counter_1) {
    counter_2 = Value_From_Counter_1 + 1 ; // 增加Counter_2的值
    std::cout <<"[Notification] Counter_2 = "<< counter_2 << std::endl; // 输出Counter_2的当前值
}

int GetCounter_2() {
    return counter_2;
}
