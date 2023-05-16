// Increment 
// 1. pre inc ++x;
// 2. post inc x++;

// Decrement 
// 1. pre dec --x;
// 2. post dec x--;

int x=5,y;

y =++x;//x=6,y=6 - In this the first incremented and then it is assigned 

y = x++; //x=6,y=5 - In this the value is first assigned and it x is incremented 

//example 

int x=5,y=10,z;

z = x++ * y; // z= 50, y=10, x=6 //multiplied first and incremented 
z= ++x *y; // z= 60,x=6,y=10 // incremented and multiplied
