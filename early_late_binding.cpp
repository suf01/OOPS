#include<bits/stdc++.h>
using namespace std;

/* Early/ static binding
int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){

    cout<<sum(1,2)<<endl;
    cout<<sum(1,2,3);
}
*/


// Dynamic/ Late binding
class User{
public:
    virtual void getPremission(){
        cout<<"User has limited access...\n";
    }
};

class SuperUser: public User{
public:  
    void getPremission() override{
        cout<<"SuperUser can see all info...\n";
  
    }
};

int main(){
    
    User u;
    SuperUser s;

    list<User*> users;

    users.push_back(&u);
    users.push_back(&s);

    for(User* usr_ptr: users){
        usr_ptr->getPremission();
    }
}