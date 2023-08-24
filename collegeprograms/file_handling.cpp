#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream inputfile("input.txt");
    ofstream outputfile("output.txt");
    if(inputfile.is_open() && outputfile.is_open())
    {string line;
    while(getline(inputfile,line))
    {outputfile<<line<<endl;}
    inputfile.close();
    outputfile.close();
    cout<<"File read and write completed "<<endl;
    }
    else{cout<<"failed to open file"<<endl;}
    return 0;
}