#include<bits/stdc++.h>
using namespace std;

class base{

};

class derived: public base{

};

int main(){
    try{
        throw derived();
    }

    catch(derived d){
        cout<<"exception caught in derived class\n";
    }

    catch(base b){
        cout<<"exception caught in base class\n";
    }

    catch(...){
        cout<<"exception caught\n";
    }
}