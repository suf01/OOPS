#include<bits/stdc++.h>
using namespace std;

class entity{
private:
    int x, y;
public:
    entity(int a, int b){
        x = a;
        y = b;
    }

    void get_data(){
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};

class limited_function_1{
private:
    limited_function_1(){

    }
public:
    static void only_function(){
        cout<<"This is limited function class 1"<<endl;
    }
};

class limited_function_2{
public:

    limited_function_2() = delete;

    static void only_function(){
        cout<<"This is limited function class 2"<<endl;
    }
};

int main(){
    entity A(1, 4);
    /* not allowed
    limited_function_1 t;
    limited_function_2 r;
    */
    limited_function_1 :: only_function();
    limited_function_2 :: only_function();
}