//area of circle
#include<iostream>

using namespace std;

int main(){
float r,area;
cout<<"Enter r";
cin>>r;
area =3.14f*r*r;
cout<<area;
return 0;
}

//speed

#include<iostream>

using namespace std;

int main(){
    int u,v,a;
    float speed;
    cout<<"enter 3 number";
    cin>>u>>v>>a;
    speed =(v*v-u*u)/(2*a);
    cout<<"speed"<<speed<<endl;

return 0;
}

//multiply
#include<iostream>

using namespace std;

int main(){
    int fact=10,y=5;
    fact*=y;
    cout<<fact;

return 0;
}

