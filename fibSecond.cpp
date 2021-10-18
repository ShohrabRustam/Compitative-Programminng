#include<iostream>
using namespace std;
int fib(int m){
    if(m<=1){
        return m;
    }
    return fib(m-1)+fib(m-2);
}
int main(){
    int n;
    cin >>n;
    int result = fib (n);
    cout <<result;
}