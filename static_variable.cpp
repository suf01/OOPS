#include<bits/stdc++.h>
using namespace std;

// when we define a variable as static, the memory to that variable is allocated only once and it is reversed for the entire lifetime of the program.
void func(){
	static int val = 1;
	cout<<val<<" ";
	val++;
}

int main(){
	for(int i = 0; i < 5; i++){
		func();
	}
}
