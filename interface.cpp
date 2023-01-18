#include<bits/stdc++.h>
using namespace std;

class printable{
public:
	virtual void getdata() = 0;
};

class entity: public printable{
public:
	void getdata() override{
		cout<<"entity"<<endl;
	}
};

class player: public entity{
public:
	void getdata() override{
		cout<<"player"<<endl;
	}
};

int main(){
	printable *e = new entity();
	e->getdata();
	player *p = new player();
	p->getdata();
}
