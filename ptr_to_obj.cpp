#include<bits/stdc++.h>
using namespace std;

class entity{
	int x, y;

public:
	entity(int x = 1, int y = 1){
		this->x = x;
		this->y = y;
	}

	void printfunc(){
		cout<<"x = "<<x<<endl;
		cout<<"y = "<<y<<endl;
	}
};

int main(){
	entity ob1(9, 8);

	entity *ptr = &ob1;
	ptr->printfunc();

	return 0;

}
