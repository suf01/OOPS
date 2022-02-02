#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, deno;
    cin>>num>>deno;

    int result = 0;

    try{
        if(deno == 0){
            throw deno;
        }
        result = num/deno;
    }

    catch(int d){
        cout<<"division not possible as deno is "<<d<<endl;
    }
    cout<<"division = "<<result<<endl;
}