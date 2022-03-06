#include<bits/stdc++.h>
using namespace std;

class entity{
private:
	int x;
public:
	entity(int val = 0){
		x = val;
	}

	void printentity(){
		cout<<x<<endl;
	}

	//pre increment
	entity operator ++(){ 
		entity temp;
		temp.x = ++x; //or else ++x /n return x
		return temp;
	}

	//post increment
	void operator ++(int){
		x++;
	}
};

int main(){

	entity e(9);
	entity e1;

	e1 = ++e;
	e1.printentity();

}
