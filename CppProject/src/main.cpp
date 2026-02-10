#include <iostream>
#include <thread>
#include <chrono>

//引用include下面的Counter_1.h和Counter_2.h头文件
#include "../include/Counter_1.h"
#include "../include/Counter_2.h"
// ".."表示上一级目录,采用相對路徑的方式引用頭文件


int main() {

    int Total_Iterations = 0 ;
    const int Max_Iterations = 20;

    int Value_From_Counter_1 = 0; 
    int Value_From_Counter_2 = 0;

    while (Total_Iterations < Max_Iterations)
    {
        //記得要按照 C++ 標準來寫

        
        IncrementCounter_1(Value_From_Counter_2);
        Value_From_Counter_1 = GetCounter_1(); 
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        Total_Iterations = GetCounter_1();
        /*
        this_thread :: 是C++11引入的一个命名空间，包含了与线程相关的函数和类
        sleep_for()函数是std::this_thread命名空间中的一个函数，用于使当前线程休眠指定的时间段
        std::chrono::milliseconds(500)表示休眠500毫秒
        */

        //std::cout << "[Notification] from main() : Total_Iterations = " << Total_Iterations << std::endl;

        IncrementCounter_2(Value_From_Counter_1);
        Value_From_Counter_2 = GetCounter_2(); 
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        Total_Iterations = GetCounter_2();
    }

    std::cout << "[Notification] from main() : Total_Iterations = " << Total_Iterations << std::endl;
    return 0;
}
