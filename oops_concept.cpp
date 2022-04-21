#include<iostream>
using namespace std;

class binary{
    private:
     string s;
     void chk_bin (void);
public: 
 void read (void);
 void once_compliment(void);
 void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary ::  chk_bin (void){
    for (int i = 0; i < s.length(); i++)
    {
       if (s.at(i)!='0' && s.at(i)!='1')
       {
           cout<<"Incorrect binary format"<<endl;
           exit(0);
       }
    }
    
}

void binary :: once_compliment(void){

    chk_bin();   // we can call the method in another method without creating any object

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
    
}

void binary :: display(void){
    cout<<"displaying your binary number after once_compliment"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main(){
// OOPs - classes and object
// structures had limitations
//      -- member are public
//      -- no methods

binary b;
b.read();
// b.chk_bin();
b.once_compliment();
b.display();
return 0;
}