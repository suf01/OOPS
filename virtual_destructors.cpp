#include<bits/stdc++.h>
using namespace std;

class base{
public:
	base(){
		cout<<"Base constructor"<<endl;
	}

	virtual ~base(){
		cout<<"Base destructor"<<endl;
	}
};

class derived: public base{
public:
	derived(){
		cout<<"Derived constructor"<<endl;
	}

	~derived(){
		cout<<"Derived destructor"<<endl;
	}
};

int main(){
	base* ptr = new derived;
	delete ptr;
}
