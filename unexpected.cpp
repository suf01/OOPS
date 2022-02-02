#include<bits/stdc++.h>
using namespace std;

int main(){
    try{
        throw 'ABC';
    }

    catch(int x){
        cout<<"expection caught\n";
    }

    /*when no try functions throws an exception
    but no catch function is available to catch that expetion

    unexpected() function is called which invokes terminate() or abort() funtions 
    */

}