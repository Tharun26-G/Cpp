//without operator overloading
#include <iostream>
using namespace std;


class Complex{
private:
    int real;
    int img;

public:
    Complex(int r=0,int i=0){
    this->real=r;
    this->img=i;
    }

    Complex add(Complex x){
    Complex tmp;
    tmp.real=real+x.real;
    tmp.img=img+x.img;
    return tmp;
    }
     int get_real()
    {
        return this->real;
    }
    int get_img()
    {
        return this->img;
    }
};


int main(){
Complex c1(2,7);
Complex c2(5,4);
Complex c3;

c3=c1.add(c2); //using add function 
cout<<c3.get_real() << " + " << c3.get_img()<<"i"<<endl;
}




//with operator overloading
#include <iostream>
using namespace std;


class Complex{
private:
    int real;
    int img;

public:
    Complex(int r=0,int i=0){
    this->real=r;
    this->img=i;
    }

    Complex operator+(Complex x){ //operator has been declared, so we can directly use the operator 
    Complex tmp;
    tmp.real=real+x.real;
    tmp.img=img+x.img;
    return tmp;
    }
     int get_real()
    {
        return this->real;
    }
    int get_img()
    {
        return this->img;
    }
};


int main(){
Complex c1(2,7);
Complex c2(5,4);
Complex c3;

c3=c1+(c2); // + is used 
cout<<c3.get_real() << " + " << c3.get_img()<<"i"<<endl;
}
