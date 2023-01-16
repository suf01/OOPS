#include<bits/stdc++.h>
using namespace std;

class example{
private:
    int x;
    static int count;

public:
    example(int a = 0){
        x = a;
    }

    void display(){
        cout<<"x = "<<x<<endl;
    }

    static void display_static(){
        cout<<"static var = "<<count<<endl;
    }
};

// int example :: count;
int example :: count = 5;

int main(){
    example A;
    example B(4);

    /* when public
    cout<<example::count;

    To change or assign val to static
    example::count = 100;
    */
    A.display();
    B.display();

    example :: display_static();
    /*static members functions cannot use non static members because
    because they donot have a class instance
    */ 
}
