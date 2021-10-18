#include <iostream>
using namespace std;
#include <stdio.h>
int F[10];//global declare
int rfib(int n)
{
    if (n <= 1)
        return n;
    return rfib(n - 2) + rfib(n - 1);
}
int mfib(int n)
{
    // if (n <= 1)
    //     return n;
    // return rfib(n - 2) + rfib(n - 1);
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = mfib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = mfib(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}
int main()
{
    int i;
    for (i = 0; i < 10; i++)
        F[i] = -1;
    cout<<mfib(5)<<endl;
    return 0;
}