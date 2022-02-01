#include<bits/stdc++.h>
using namespace std;

template<typename T>
/*
template<typename Type>
template<class T>
*/

void Swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 5;
    int b = 7;

    Swap<int>(a, b);
    cout<<a<<" "<<b<<endl;

    char c = 'c';
    char d = 'd';

    Swap<char>(c, d);
    cout<<c<<" "<<d<<endl;
}