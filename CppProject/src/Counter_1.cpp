#include "../include/Counter_1.h"
#include <iostream>
static int counter_1 = 0; // 定义Counter_1的静态变量

void IncrementCounter_1(int Value_From_Counter_2) {
    counter_1 = Value_From_Counter_2 + 1 ; // 增加Counter_1的值
    std::cout <<"[Notification] Counter_1 = "<< counter_1 << std::endl; // 输出Counter_1的当前值
}

int GetCounter_1() {
    return counter_1; // 返回Counter_1的当前值
}