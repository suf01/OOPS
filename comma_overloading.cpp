#include<bits/stdc++.h>
using namespace std;

class test{
    int x , y ;
 
public:
    test(int a = 0, int b = 0){
        x = a;
        y = b;
    }

    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
    }

    test operator ,(test t1){
        test ret_val;
        ret_val.x = t1.x;
        ret_val.y = t1.y;

        return ret_val;
    }
};

int main(){
    test a(8,4), b(5,6), c(9,9), d;
    d = (a,b,c);

    d.display();
}
