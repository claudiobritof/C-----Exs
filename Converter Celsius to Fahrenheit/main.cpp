#include<iostream>

using namespace std;

int main()

{
    float celsius, fahrenheit;
    cout<<"Enter Temperature (Celsius): ";
    cin>>celsius;
    fahrenheit = (celsius*1.8)+32;
    cout<<"\nTemperature in Fahrenheit: "<<fahrenheit;
    cout<<endl;
    return 0;
}
