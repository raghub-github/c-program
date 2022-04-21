#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function objects (Functor): Function wrapped in a class so that it available like an object
    int arr[] = {1, 4, 5, 71, 8};
    //  sort(arr, arr+5);
    sort(arr, arr+5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}