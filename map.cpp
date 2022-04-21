#include<iostream>
#include<map>
using namespace std;

//  Map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["harry"] = 78;
    marksMap["samir"] = 54;
    marksMap["uttam"] = 85;

    marksMap.insert({{"safali", 64}, {"madhumita", 22}});
    
    map<string, int> :: iterator itr;
    for (itr=marksMap.begin(); itr!=marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    
    return 0;
}