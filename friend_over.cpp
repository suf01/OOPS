#include<bits/stdc++.h>
using namespace std;

class test1;
class test2;

class test1{
    int a;
public:

    test1(int a){
        this->a = a;
    }

    friend void operator > (test1, test2);
};

class test2{
    int b;
public:

    test2(int b){
        this->b = b;
    }

    friend void operator > (test1, test2);
};

void operator > (test1 obj1, test2 obj2){
    if(obj1.a > obj2.b){
        cout<<"A is larger\n";
    }else{
        cout<<"B is larger\n";
    }
}

int main(){
    test1 ob1(4);
    test2 ob2(5);

    ob1>ob2;
}

