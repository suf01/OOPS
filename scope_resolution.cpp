#include<bits/stdc++.h>
using namespace std;

/* *To access global variables when local and global var have same name
   *To define functions outside of class
   *To access static members of class
*/

class entity{
private:
    int x, y;
public:
    void set_data(int, int);
    void get_data();
};

void entity :: set_data(int a, int b){
    x = a;
    y = b;
}

void entity :: get_data(){
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}

int main(){
    entity A;
    A.set_data(5, 6);

    A.get_data();
}
