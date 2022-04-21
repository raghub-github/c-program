#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
       //   cout << v.at(i) << " ";  / same
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;  // vector of 0 length
    //  vector<int> vec1(4);  // vector of 4 length
    int element;
    cout << "Enter the size of your vector" << endl;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add this vector" << endl;
        cin >> element;
        vec1.push_back(element);
    }
    //  vec1.pop_back();   // pop_bace() method is used to remove the last element of the vector
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter+1,3, 544);  // 3 means 544 element is add 3 times continiously
    display(vec1);

    return 0;
}