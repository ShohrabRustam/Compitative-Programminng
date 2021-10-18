#include<iostream>
using namespace std;
int gridTravlerProblem(int n,int m){
    if(n==0 || m==0){
        return 0;
    }
    else if(n==1 && m==1){
        return 1;
    }
    return gridTravlerProblem(n-1,m) + gridTravlerProblem(n,m-1);
}
int main(){
    int n,m;
    cin >>n>>m;
    int result = gridTravlerProblem(n,m);
    cout<<result;
}