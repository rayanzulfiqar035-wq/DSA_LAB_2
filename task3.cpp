#include<iostream>
using namespace std ;
int main(){

    int sales[2][3];
    int (*rowPtr)[3] = sales;
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j< 3 ;j++){
            cout<<"Enter the "<<j+1 <<" day entry for "<<i+1<<" branch : ";
            cin>>*(*(rowPtr + i) +j) ;
            while(true){
                if(*(*(rowPtr + i) +j) < 0){
                    cout<<"Invalid value.\nEnter again : "<<endl;
                    cin>> *(*(rowPtr + i) +j) ;
                }
                else{
                    break;
                }
            }

        }
    }

    cout<<"-----Total-----"<<endl;
    for(int i = 0 ; i < 2 ; i++){
        int sum = 0 ;
        for(int j = 0 ; j< 3 ;j++){
            sum+=*(*(rowPtr + i) +j);
        }
        cout<<"Branch "<<i+1<<" : "<<sum<<endl;
    }

    for(int i = 0 ; i<3 ; i++){
        int day = 0 ;
        for(int j = 0 ; j<2 ; j++){
            day+=*(*(rowPtr + j) +i);
        }
        cout<<i+1<<" Day Sale : "<<day<<endl;
    }


    return 0 ;
}