#include<bits/stdc++.h>
using namespace std;

template<typename T, typename U>

class weight{
private:
    T kg;
    U grams;
public:
    void set_data(T x, U y){
        kg = x;
        grams = y;
    }

    T get_data_kg(){
        return kg;
    }
    U get_data_grams(){
        return grams;
    }
};

int main(){
    weight<int, float> obj1;
    obj1.set_data(5, 0.55);
    cout<<obj1.get_data_kg()<<"+";
    cout<<obj1.get_data_grams();
}

