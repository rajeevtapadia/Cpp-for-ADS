#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){
    // syntax:
    // [classname]<data_type> [object_name] = values;
    vector<int> v1 = {1,3,4,5,6};

    // doesn't work like this
    // vector v2 = new vector();

    v1.push_back(30);
    v1.push_back(34);

    // v1.pop_back();

    // this pointer and the i object is not the same
    // vector<int> *itr;
    vector<int>::iterator i;

    for(i = v1.begin(); i != v1.end(); i++)
        cout<<++*i<<endl;
        
    // for each loop
    // for(int j:v1)
    //     cout<<j<<endl;


    // list
    list<int> l = {1,2,3,4,5,6};

    l.push_back(10);

    list<int>::iterator k;

    for(k = l.begin(); k != l.end(); k++)
        cout<<*k<<endl;
}