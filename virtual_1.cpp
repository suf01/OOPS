#include<bits/stdc++.h>
using namespace std;

/*
  when we declear virtual function every class which has virtual function or every derived class which has virtual function, a Vtable is created for it,
  vtable links virtual functions with their respective class, with the help of vpointer, vpointer is automatically created for very class that that virtual in it.
  vpointer gets created in the constructor.
  
  virtual functions are static arrays
*/

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
