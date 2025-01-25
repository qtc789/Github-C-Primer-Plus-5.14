// 5.14.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<ctime> // clock_t type

int main()
{
    using namespace std;
    cout << "enter the delay time, in seconds:    ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;//convert to clock ticks
    cout << "starting\a\n";//\a是警报
    clock_t start = clock();
    while (clock() - start < delay);
    cout << "done\a\n";

    
}

