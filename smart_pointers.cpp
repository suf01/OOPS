#include<bits/stdc++.h>
using namespace std;

/* #include<memory>
   when we allocate memory using raw pointer we use new and delete, we have to dellocate
   the memory ourselves when we want to free that memory using delete,
   smart pointer is a way to automate this process, java and C# have garbage collectors
   to do this, in C++ we have smart pointers
   There are 3 types of smart pointers
   1. unique pointer
   2. shared pointer
   3. weak pointer
   unique pointer:
                  * Its a scoped pointer, when the pointer goes out of scope it gets
                    destoryed and call delete
                  * They have to be unique, they cannot be copyed to another pointer etc,
                    (because when that goes out of scope it gets deleted and were literally
                     pointer to nothing)
    
   shared pointer:
                  * It uses reference counting, it keeps count of how many references you
                    have to the pointer, when the reference count gets to 0 it gets deleted
                  * just always make use of make_shared<int>() or make_unique<int>()
                  * when you make shared pointer it increments ref count
   weak pointer:
                  * It can copy a shared pointer except that it doesn't increment
                    the ref count
*/

class Entity{
public:
	Entity(){
		cout<<"Entity created..."<<endl;
	}

	~Entity(){
		cout<<"Entity destoryed..."<<endl;
	}

	void print(){
		cout<<"This is Entity class."<<endl;
	}
};

int main(){
	/*
	unique_ptr<int> unPtr = make_unique<int>(33);
	cout << *unPtr << endl;
	*/

	{
	//unique_ptr<Entity> UnPtr(new Entity());
        //UnPtr->print();
	
	unique_ptr<Entity> UnPtr = make_unique<Entity>();
        UnPtr->print();
        }

    
        {
    	    shared_ptr<Entity> e0;
    	    {
    	        shared_ptr<Entity> e1 = make_shared<Entity>();
    		e0 = e1;
    	    }// doesnot get destoryed here
        }// gets destoryed here

        {
    	     weak_ptr<Entity> e2;
    	     {
    	 	shared_ptr<Entity> e3 = make_shared<Entity>();
    		e2 = e3;
    	     }// gets destoryed here
    	     // now e2 pointer to null
        }
}
