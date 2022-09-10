#include<iostream>
using namespace std;
 
int main(){

    const int size = 5;
    int arr[size],ele,i,new_arr[size],rev=size;

    cout<<"Enter the element in the array :- \n";

    for(i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element in the array :";
        cin>>arr[i];
    }

    for(i=0;i<size;i++){
        new_arr[i] = arr[rev];
        rev--;

        cout<<"\nNew array at "<<i+1<<" position is "<<new_arr[i];
    }

    return 0;
}