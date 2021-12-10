#include<bits/stdc++.h>
using namespace std;

class sample{
private:
	int a, b;

public:
	sample(int a, int b){
		this->a = a;
		this->b = b;
	}

	sample(sample &obj){
		a = obj.a;
		b = obj.b;
	}

	void printfunc(){
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
	}
};

int main(){

	sample obj1(3, 2);
	obj1.printfunc();

	sample obj2(obj1);
	obj2.printfunc();
}