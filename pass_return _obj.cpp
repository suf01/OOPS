#include<bits/stdc++.h>
using namespace std;

class complexx{
private:
    float x, y;

public:
    complexx(float x = 0, float y = 0){
        this->x = x;
        this->y = y;
    }

    void get_data(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }

    float get_real(){
        return x;
    }

    float get_imag(){
        return y;
    }
};

complexx addition_comp(complexx c1, complexx c2){
    float r = c1.get_real()+c2.get_real();
    float i = c1.get_imag()+c2.get_imag();

    complexx temp(r, i);

    return temp;
}

int main(){
    complexx a(1.0, 2.0);
    complexx b(2.0, 4.0);

    a.get_data();
    b.get_data();
    
    complexx c;
    c = addition_comp(a, b);

    complexx *obj = &c;

    obj->get_data();
}