/*
#include <iostream>
#include <thread>

void thread_1(int number)
{
    std::cout << "Number is " << number << "." << std::endl;
}

void thread_2(int number)
{
    long sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    std::cout << "Sum of {1, 2, ..., number} is " << sum << "." << std::endl;
}

void thread_3(int number)
{
    long Multi = 1;
    for (int i = 1; i <= number; i++)
    {
        Multi *= i;
    }
    std::cout << "Multi of {1, 2, ..., number} is " << Multi << "." << std::endl;
}

int main(int *argc, char** argv)
{
    int number = 10;
    std::thread first(thread_1, number);
    std::thread second(thread_2, number);
    std::thread third(thread_3, number);

    first.join();
    second.join();
    third.join();

    return 0;
}
*/