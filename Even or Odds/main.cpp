#include<iostream>

using namespace std;

int main()

{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num%2==0)
        cout<<"\nEven Number.";
    else
        cout<<"\nOdd Number.";
    cout<<endl;
    return 0;
}
