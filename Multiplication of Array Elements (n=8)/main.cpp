#include<iostream>

using namespace std;

int main()

{
   int arr[8], i, mul=1;
   cout<<"Enter 8 Elements for the Array: ";
   for(i=0; i<8; i++)
      cin>>arr[i];
   for(i=0; i<8; i++)
      mul = mul*arr[i];
   cout<<"\nMultiplication Result of all 8 Elements = "<<mul;
   cout<<endl;
   return 0;
}
