#include<bits/stdc++.h>
using namespace std;

class entity{
public:
	int x;
	entity(int x){
		this->x = x;
	}

	int get_data(){
		x = 1000; //valid
		cout<<"inside without const function"<<endl;
		return x;
	}

	// promises to not change any of the class data members
	int get_data() const{
		// x = 1000; not valid
		cout<<"inside const function"<<endl;
		return x;
	}
};

//calls function without const, since the object is not passed with reference
/*
void print(entity e){
	int temp = e.get_data();
	cout<<temp<<endl;
}
*/

//same
// when object is created on stack
// (const entity &ob)
// (entity const &ob)

// when object is created on heap
// (const entity *ob)
// (entity const *ob)

void print(const entity &ob){
	cout<<ob.get_data()<<endl;
}

void print(const entity *ob){
	cout<<ob->get_data()<<endl;
}


int main(){
	// have to call with &
	entity e(10);
	print(e);

	//have to call with *
	entity *e1 = new entity(1);
	print(e1);
}
