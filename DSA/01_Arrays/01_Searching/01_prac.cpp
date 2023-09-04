#include <iostream>
using namespace std;
int main() {
    //int arr[5]={1}            way to intialize all values of array by same no.
    int sum=0 ,avg,arr[5]={1,2,4,4,5};
    // cout <<"enter members of Array:"<<endl;
    // for (int i=0;i<5;i++)
    // {
    //   cout<<"enter "<<i+1<<" number : ";
    //    cin >> arr[i] ; 
    // }
    
    cout<<"The numbers are -- ";
    for (int i=0;i<5;i++){
    cout<<arr[i]<<" "<<endl;
        sum=sum+arr[i];
    } 
        avg=sum/5;
    cout <<"Sum of all members of the arrY Is:"<<sum<<endl;
    cout <<"Average of all members of the array Is:"<<avg;
    }