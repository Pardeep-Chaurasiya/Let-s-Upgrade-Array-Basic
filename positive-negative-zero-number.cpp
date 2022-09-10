#include<iostream>
using namespace std;
 
int main(){

    const int size = 10;
    int arr[size] = {10,20,30,40,0,-10,-20,-30,-50,0},positive=0,negative=0,zero=0,i;

    cout<<"\nElement in the array :- ";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    
    for(i=0;i<size;i++){
        if(arr[i]>0)
            positive++;
        else if(arr[i]<0)
            negative++;
        else    
            zero++;
    }

    cout<<"\n\n No. of positive element in the array is :- "<<positive;
    cout<<"\n No. of negative element in the array is :- "<<negative;
    cout<<"\n No. of zero element in the array is :- "<<zero;

    return 0;
}