#include<bits/stdc++.h>
using namespace std;

class complexx{
private:
	int real, imag;

public:
	complexx(int r = 0, int i = 0){
		real = r;
		imag = i;
	}

	void printcomplex(){
		cout<<real<<"+"<<imag<<"i"<<endl;
	}

	complexx operator +(complexx c){
		complexx temp;
		temp.real = real + c.real; // real = c1.real, c.real = c2.real
		temp.imag = imag + c.imag; // imag = c1.imag, c.imag = c2.imag

		return temp;
	}

};

int main(){
	complexx c1(1, 3);
	complexx c2(3, 5);
	complexx c3;

	c3 = c1 + c2; // c1.add(c2)

	c3.printcomplex();
}
