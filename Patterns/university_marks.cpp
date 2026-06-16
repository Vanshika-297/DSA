#include<iostream>>
using namespace std;
int main(){
    int subjects;
    int marks;
    int total_marks=0;
    float percentage;
    int highest_marks=0;

    cout<<"Enter number of subjects:\n";
    cin>>subjects;
    for(int i=0;i<=subjects;i++){
        cout<<"Enter marks:\n";
        cin>>marks;
        total_marks=total_marks+marks;
        if(marks>highest_marks){
            highest_marks=marks;
        }
        cout<<total_marks<<"\n";
        percentage;
    }
}