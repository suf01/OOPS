#include<bits/stdc++.h>
using namespace std;

class example{
private:
	int x, y;
public:
	example(){
		x = 0;
		y = 0;
	}
	example(int a, int b){
		x = a;
		y = b;
	}

	void display(){
		cout<<x<<" "<<y<<endl;
	}

	friend void increment(example &ob);
};

void increment(example &ob){
	ob.x += 1;
	ob.y += 1;
}

int main(){
	example a;
	a.display();
	increment(a);
	a.display();

}