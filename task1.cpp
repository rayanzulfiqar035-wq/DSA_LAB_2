#include<iostream>
using namespace std;

int main(){

   int sales [5];
   int* p = sales; 
   int sum = 0;

   for(int i = 0 ; i < 5 ; i++){
    cout<<"Enter the value of "<<i+1<<" day sale : ";
    cin>>*(p+i) ;
   }
    cout<<"Sales : ";
   for(int i = 0 ; i < 5 ; i++){
    cout<<*(p+i)<<" ";
    sum += *(p+i);
   }
   cout<<endl;

   cout<<"Total Sales : "<<sum<<endl;

   *(p+2) += 2;

   sum = 0 ;
   
   cout<<"Updated array : ";
    for(int i = 0 ; i < 5 ; i++){
    cout<<*(p+i)<<" ";
    sum += *(p+i);
   }
   cout<<endl;

   cout<<"Updated Sum : "<<sum ;


    return 0;
}