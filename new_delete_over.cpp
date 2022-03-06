#include<bits/stdc++.h>
using namespace std;

class test{
    int x;

public:
    test(int a = 0){
        x = a;
    }

    void* operator new(size_t size){
        cout<<"overloading new operator"<<endl;
        void *p = malloc(size);
        return p;
    }

    void operator delete(void *p){
        cout<<"overloading delete"<<endl;
        free(p);
    }
};

int main(){
    test *t = new test;
    delete t;
}