#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l,j=r-1;
    while(pivot==arr[r]){
    
     while(arr[i]<pivot){
        i++;
     }
     while(arr[j]>pivot){
        j--;
     }
     if(i<j){
        swap(arr[i],arr[j]);
     }
     else{
        swap(arr[i],arr[r]);
        return i;
     }
   }
}

void quicksort(int arr[],int l,int r){
    if(l<r){
        int div=partition(arr,l,r);
        quicksort(arr,l,div-1);
        quicksort(arr,div+1,r);
    }
}


int main(){

int arr[]={4,8,6,5,9,2,1};

quicksort(arr,0,6);

for(int i=0;i<7;i++){
cout<<arr[i]<<" ";
}


}