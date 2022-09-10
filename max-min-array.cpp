#include<iostream>
using namespace std;
 
int main(){

    const int size=10;

    int arr[size]={10,20,-3000,4000,50,-600,70,80,-90,-100},max,min,i;

    cout<<"\nElement in the array are :- ";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";

    max = arr[0];
    min = arr[0];

    for(i=0;i<size;i++){
        
        if(arr[i]>max){
            max=arr[i];
        }

        if(arr[i]<min)
            min=arr[i];
    }

    cout<<"\n\nMaximum element in the array is :- "<<max;
    cout<<"\nMinimum element in the array is :- "<<min;


    return 0;
}