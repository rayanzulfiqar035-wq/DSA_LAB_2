#include<iostream>
using namespace std ;



int main(){
    
    int n ;
    int* marks ;
    int sum = 0;
    float average = 0 ;
    int pass_count = 0;
    while(true){
        cout<<"Respected Teacher kindly give the number of students : " ;
        cin>>n;
        if(n>0){  //ATGC
              marks = new int[n]; 
              break ;
        }
        if(n == 0){
            cout<<"Error; no allocation or mark input"<<endl;
        }
        else{
            cout<<"Enter a valid number";
        }
    }
    
    for(int i = 0 ; i< n ; i++){
        while(true){
        cout<<"Enter marks "<<i+1 <<" Student : ";
        cin>>*(marks + i);
        if(*(marks + i)< 0 && *(marks +i)>100){
            cout<<"Entered valid marks";
        }
        else {
            break;
        }
        }

    }

    for(int i = 0 ; i<n ; i++){
        cout<<*(marks + i )<<" ";
        sum += *(marks + i);
        if(*(marks + i) >= 50 ){
            pass_count+=1;
        }
    }
    cout<<endl;

    average = ((sum)/float(n)) ;

    cout<<"Total : "<<sum <<endl ;
    cout<<"Average : "<<average<<endl;
    cout<<"Pass Count :"<<pass_count<<endl;

    delete[]marks;
    marks = nullptr;



    return 0 ;
}