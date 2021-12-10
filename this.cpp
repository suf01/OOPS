#include<bits/stdc++.h>
using namespace std;

void printfunction(Entity* e){
	//print
}

class Entity{
public:
	int x, y;

	/*
	Entity(int x, int y) 
	   : x(x), y(y);
	*/

	Entity(int x, int y){
		//Entity* const e = this;
		//Entity* e = this;

		this->x = x;
		this->y = y;

		printfunction(this); // for printfunction(Entity* e);
		//printfunction(*this); for printfunctio(const Entity& e);
	}

	int getX() const{
		//const Entity* e = this;
		//const Entity* const e = this;

		return x;
	}
};

int main(){

}