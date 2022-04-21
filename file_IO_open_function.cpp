#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // ofstream out;
    // out.open("sample.txt");
    // out<<"This is me";
    // out.close();

    ifstream in;
    in.open("sample.txt");
    string st;
    // in>>st;
    // cout<<st;

    while (in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    return 0;
}