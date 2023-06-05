//class, data should be not in the public, it may misused in the main 
//Accessors and Mutators 

#include<iostream>
using namespace std;

class Rectangle {
    private:
    int length,breadth; // Making data members as private. Read and write of private isn't allowed.
    public:
  /*    	void setLength(int l){
            length = l; // Assigns the int l to the private data member length's value
        }
    	void setBreadth(int b){
            breadth = b; // Assigns the int l to the private data member length's value
        }
        
        */
  
  void setLength(int l){
            if( l >= 0) // For checking if the value being entered is as per our liking
                length = l;
            else length = 0; // Valid default value
        }
    	void setBreadth(int b){
            if( b >= 0) // For checking if the value being entered is as per our liking
                breadth = b;
            else breadth = 0;
        }
    	int getLength(){
            return length; // Returns the value of length which is a private data member
        }
    	int getBreadth(){
            return breadth; // Returns the value of breadth which is a private data member
        }
  
    	int area(){
            return length * breadth;
        }
    	int perimeter(){
            return 2*(length+breadth) ;
        }

};
int main(){
    Rectangle r;
    r.setLength(5); // Object r has length = 10 which we set using function and not directly
    r.setBreadth(10); // Direct access of private data members isn't allowed so we use function
    cout<<r.area()<<endl;
}
