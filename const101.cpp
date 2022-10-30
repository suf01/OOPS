#include<bits/stdc++.h>
using namespace std;

int main(){

	const int maxi = 100;
	int *a = new int;
	a = (int*)&maxi;

	//valid since *a is not a [const int*] or [int const *]
	*a = 1000;
	cout<<*a<<endl;

	//not valid to change the value at that address, but can change address
	//const is before *
	const int *b = new int;
	//same as int const * b = new int;
	b = (int*)&maxi; // valid
	*b = 1000000; // error

    //can change value but not address
	int * const c = new int;
	*c = 20; // valid
	c = (int*)&maxi;// error
	cout<<*c<<endl;

	//cannot change address and value;
	const int * const d = new int;
	d = (int*)&maxi; // error
	*d = 20; // error
}
