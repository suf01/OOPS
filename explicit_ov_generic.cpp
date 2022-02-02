#include<bits/stdc++.h>
using namespace std;

template<typename T>

void entity(T x){
    cout<<"value in generic = "<<x<<endl;
}

void entity(int x){
    cout<<"value in normal = "<<x<<endl;
}

int main(){
    entity("adsd");
    entity(5);
}

