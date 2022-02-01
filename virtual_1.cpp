#include<bits/stdc++.h>
using namespace std;

class base{
public:
    void display(){
        cout<<"In base class\n";
    }

    virtual void show(){
        cout<<"In base class\n";
    }
};

class derived: public base{
public:
    void display(){
        cout<<"In derived class\n";
    }

    void show() override{
        cout<<"In derived class\n";
    }
};

int main(){
    base* obj = new base;

    obj->display();
    obj->show();

    derived* objD = new derived;
    obj = objD;

    obj->display();
    obj->show();
}