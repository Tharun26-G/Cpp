#include <iostream>
#include <fstream>
using namespace std;

int main(){

ifstream infile;
infile.open("My.txt");
if(!infile.is_open()) //checking the file to be open
    cout<<"file cannot be opened";

    string str;
    int x;
    infile>>str;
    infile>>x;
    cout<<str<<" "<<x;

    if(infile.eof())
        cout<<"end of file reached";
    infile.close();


}
