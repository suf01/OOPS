#include<bits/stdc++.h>
using namespace std;

class instrument{
public:
    virtual void MakeSound() = 0;
};

class keys: public instrument{
public:
    void MakeSound(){
        cout<<"keyboard is playing...\n";
    }
};

class piano: public instrument{
public:
    void MakeSound(){
        cout<<"piano is playing.....\n";
    }
};

int main(){
    instrument* i1 = new keys;
    i1->MakeSound();

    instrument* i2 = new piano;
    i2->MakeSound();

    instrument* inst_ments[2] = {i1, i2};

    for(int i = 0; i < 2; i++){
        inst_ments[i]->MakeSound();
    }
}