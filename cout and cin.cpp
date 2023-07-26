#include <iostream>

using namespace std;

int main(){
    // add two nos
    int a, b, c;
    // cout<<"enter a, b:\n";
    // cin>>a>>b;
    // c = a + b;
    // cout<<"result: "<< c << "\n";

    // display greeting
    // char str[50];
    string str;
    cout<<"Enter you Name: ";
    // will only read till the first space
    // cin>>str;
    getline(cin, str);
    cout<<"hello "<<str<<endl;

    return 0;
}