#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
int main()
{
    cout<<"Anup\n";
    this_thread::sleep_for (std::chrono::minutes(1));
    cout <<"anup\n";
    return 0;
}