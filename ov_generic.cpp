#include<bits/stdc++.h>
using namespace std;

template<typename T>

void entity(T x){
    cout<<"entity with one parameter "<<x<<endl;
}

template<typename T, typename U>

void entity(T x, U y){
    cout<<"entity with two parameters "<<x<<" "<<y<<endl;
}

int main(){
    entity("adsd");
    entity(5, 33);
    entity(4,.99);
}

