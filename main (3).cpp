#include <iostream>
#include<thread>
using namespace std;
void fanc(int i){
    cout<<"Ali"<<i<<endl;
}
int main()
{
    for(int i=0; i<10; ++i){
        thread t0(fanc,i);
        t0.join();
    }
    return 0;
}