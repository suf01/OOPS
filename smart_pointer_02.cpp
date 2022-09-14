#include<bits/stdc++.h>
using namespace std;

class Entity{
public:
	Entity(){
		cout<<"constructor of Entity"<<endl;
	}

	~Entity(){
		cout<<"destructor of Entity"<<endl;
	}
};

int main(){
	
	//unique_ptr<int> unPtr1(new int(2));

	unique_ptr<int> unPtr1 = make_unique<int>(9);
	cout<<*unPtr1<<endl;

	// you cannot copy unique pointer but you can move the ownership

	unique_ptr<int> unPtr2 = move(unPtr1);
	cout<<*unPtr2<<endl;

	// now unPtr1 points to null
	cout<<*unPtr1<<endl;

	//comment from main to till here for code below to execute
	
	{
	    shared_ptr<Entity> e1 = make_shared<Entity>();
	    cout<<e1.use_count()<<endl;
	    shared_ptr<Entity> e2 = e1;

	    //same
	    cout<<e1.use_count()<<endl;
	    cout<<e2.use_count()<<endl;
    }
}
