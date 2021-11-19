#include<bits/stdc++.h>
using namespace std;

class student{
public: 

	int roll;
	string name;

	student(int r, string n){
		roll = r;
		name = n;
	}
};

ostream& operator<<(ostream &COUT, student ob){
	COUT<<"Name: "<<ob.name<<endl;
	COUT<<"Roll no: "<<ob.roll;

	return COUT;
}

int main(){
	student s(5, "raj");
	cout<<s;
}

/*
types of errors during function overloading
1. type converstion
2. default parameters
3. pass by reference
*/