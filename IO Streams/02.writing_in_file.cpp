#include <iostream>
#include <fstream>
using namespace std;

int main(){

ofstream ofs("My.txt",ios::trunc);
ofs<<"Tharun"<<endl;
ofs<<25<<endl;
ofs<<"CS"<<endl;

ofs.close();


}
