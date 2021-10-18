#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

// First Progarm Problem

int first(){
    string a[3][5] = {"AA", "BB", "AA", "EE", "BB", "GG", "LL", "KK", "CC", "DD", "FF", "BB", "EE", "AA", "KK"};
    srand(time(0));
    for(int i=0;i<3;i++)
    {
     for(int i=0;i<5;i++){   
    int r = rand()%3;
    int c = rand()%5;
    cout<<a[r][c]<<" ";
     }
     cout<<endl;
    }
    return 0;
}

// Second Program Problem

int Second(){
    string str;
    cin>>str;
    // we consider all in upper case as an example
    int s[26]={0};
    int l = str.length();
    
    for(int i=0;i<l;i++){
        int k=str[i];
        s[k-65]= s[k-65] + 1;
    }
    cout<<"Has"<<endl;
for(int i=0;i<l;i++){
    if(s[str[i]-65]!=0)
    cout<<str[i]<<":"<<s[str[i]-65]<<endl;
    s[str[i]-65]=0;
}

// Third Program Problem

int Third()
{
 int length=5;
 int a[26];
  for(int i=0;i<26;i++){
     a[i]=i+1;
 }
 srand(time(0));
 char str[5];
 int i=0;
 while(length){
    int n = rand()%26;
    if(a[n]!=0){
        str[i] = a[n]+65;
        a[n]=0;
        length--;
        i++;
        }
    length=length;
 }
 cout<<str;
return 0;
}

//Forth Program Problem
struct Fruit{
    string name;
    float prob;
};
int Forth(){
 Fruit fru[4]={"MANGO",0.25,"BANANA",0.50,"APPLE", 0.15,"ORANGE",0.10};
srand(time(0));
string s[10];
for(int i=0;i<10;i++){
    int n=rand()%4;
    s[i] = fru[n].name;
}
for(int i=0;i<10;i++){
    cout<<s[i]<<" ";
}
 return 0;
}
int main()
{
    first();
    Second();
    Third();
    Forth();
}