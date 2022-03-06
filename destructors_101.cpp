#include<bits/stdc++.h>
using namespace std;

class entity{
private:
    int x, y;
public:
    entity(int a, int b){
        x = a;
        y = b;
        cout<<"Contructor is called....."<<endl;
    }

    ~entity(){
        cout<<"Destructor is called....."<<endl;
    }

    void get_data(){
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};


//if we do this in main, when the scope ends the program gets shut
void Func(){
    entity e(10, 3);
    e.get_data();
    // e.~entity();
}

int main(){
    Func();
}