#include<bits/stdc++.h>
using namespace std;

class entity{
public:
	virtual void getdata(){
		cout<<"entity"<<endl;
	}
};

class player: public entity{
public:
	void getdata(){
		cout<<"player"<<endl;
	}
};

void printfunc(entity *obj){
	obj->getdata();
}

int main(){
	entity *e = new entity();
	printfunc(e);

	player *p = new player();
	printfunc(p);
}
