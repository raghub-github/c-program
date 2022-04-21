#include<iostream>
#include<fstream>

/*
The  useful classes for working with files in c++ are:
1. fstreambase
2. ifstream --> deriverd fom fstreambase
3. ofstream --> deriverd fom fstreambase
*/

// In order work with files in c++, you will have to open it, there two ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class 

using namespace std;

int main(){
    // Opening file using constructor and Writing it
    // string st = "c++ tutorial";  // write operation
    // ofstream ctext("sample.txt");
    // ctext<<st;

    // Opening files using constructor and reading to it
    string st2;
    ifstream cread("sample2.txt"); // read operation
    // cread>>st2;  // to get only one word
    getline(cread, st2);  // to get the full line
    cout<<st2;

    return 0;
}