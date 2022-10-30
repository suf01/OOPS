#include<bits/stdc++.h>
using namespace std;

//public = public->public, protected->protected, private->null
//protected = public->protected, protected->protected, private->null
//private = public->private, protected->private, private->null

/*
 types of inheritence
 1.single
 2.multi level
 3.multiple
 4.herierchical
 5.hybrid
*/


class human{
private:
	string name;
	int age;

public:
	human(string name, int age){
		this->name = name;
		this->age = age;
	}

	void get_data(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}
};

class student: public human{
	int roll;
public:
	student(string name, int age, int roll): human(name, age){
		this->roll = roll;
	}

	//function overriding -> compile time
	void get_data(){
		human::get_data();
		cout<<"roll: "<<roll<<endl;
	}
};

int main(){
	human h1("abc", 30);
	student s1("fgh", 19, 100);

	h1.get_data();
	cout<<endl;
	s1.get_data();
}
