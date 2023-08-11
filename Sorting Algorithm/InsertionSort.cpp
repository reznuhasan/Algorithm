#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //5 4 3 2 1
    for(int i=1;i<n;i++){
       int key=arr[i];//4
       int j=i-1;//0
       while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];//5 5 3 2 1
        j--;//-1
       }
       arr[j+1]=key;//4 5 3 2 1->step->

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


