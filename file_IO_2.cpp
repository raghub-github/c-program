#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // Connecting our file with hout system
    ofstream hout("sample2.txt");

    // Creating a name string and filling it with the string entered by the user
    cout<<"Enter your name"<<endl;
    string name;
    cin>>name;

    // Writing a string to the file
    hout <<"My name is "+name;
    hout.close();

    ifstream red("sample2.txt");
    string content;
    getline(red, content);
    cout<<content;

    return 0;
}