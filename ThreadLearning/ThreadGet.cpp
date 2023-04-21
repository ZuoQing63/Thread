#include <iostream>
#include <future>

int thread_1(int number)
{
    return number;
}

long thread_2(int number)
{
    long sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    return sum;
}

long thread_3(int number)
{
    long Multi = 1;
    for (int i = 1; i <= number; i++)
    {
        Multi *= i;
    }
    return Multi;
}

int main(int* argc, char** argv)
{
    int number = 10;
    std::future<int> first = std::async(thread_1, number);
    std::future<long> second = std::async(thread_2, number);
    std::future<long> third = std::async(thread_3, number);

    std::cout << "Number is " << first.get() << "." << std::endl;
    std::cout << "Sum of {1, 2, ..., number} is " << second.get() << "." << std::endl;
    std::cout << "Multi of {1, 2, ..., number} is " << third.get() << "." << std::endl;

    return 0;
}