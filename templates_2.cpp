#include<bits/stdc++.h>
using namespace std;


/*
template <typename T>

T add(T x, T y){
    return (x+y);
}
*/

template <typename T, typename U>

U add(T w, U z){
    return (w+z);
}

int main(){
    cout<<add<int>(3,4)<<endl;
    cout<<add<int, float>(4, 6.1);
}