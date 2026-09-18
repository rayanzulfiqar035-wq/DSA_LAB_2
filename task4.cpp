#include<iostream>
using namespace std ;
int main(){
    int students ;
    int subjects ;
    int** marks;
    int top_student = 0;
    int top_marks = 0;
    while(true){
        cout<<"Enter number of Students : ";
        cin>>students;
        if(students<=0){
            cout<<"Invalid input."<<endl;
        }
        else{
            marks = new int*[students];
            break;
        }
    }
    while(true){
        cout<<"Enter number of Subjects : ";
        cin>>subjects;
        if(subjects<=0){
            cout<<"Invalid input."<<endl;
        }
        else{
            for(int i = 0 ; i < students ; i++){
                marks[i] = new int[subjects];
            }
            break;
        }

    }

    for(int i = 0 ; i< students ; i++){
        for(int j = 0 ; j < subjects ; j++){
            cout<<j+1<<" Subject marks for "<<i+1<<" Student : ";
            cin>>*(*(marks + i) + j);
        }
    }


       for(int i = 0 ; i< students ; i++){
        int sum = 0 ;
         for(int j = 0 ; j < subjects ; j++){
            sum+=*(*(marks + i) + j);

        }            
        if(sum > top_marks){
            top_marks = sum ;
            top_student = i+1;
        }
        cout<<"Total of "<<i+1<<" Student : "<<sum<<endl ;
 }

    cout<<"Top Student : "<<top_student<<endl;
    cout<<"Top Marks : "<<top_marks<<endl;

    for(int i = 0 ; i < students ; i++){

        delete[]marks[i];
    }
    marks = nullptr;

    return 0;

}