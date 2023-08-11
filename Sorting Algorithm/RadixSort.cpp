#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[],int n,int pos){
    int freq[10]={0};
    for(int i=0;i<n;i++){
        int elem=(arr[i]/pos)%10;

        freq[elem]++;
    }
    for(int i=0;i<10;i++){
        freq[i]=freq[i]+freq[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[freq[(arr[i]/pos)%10]-1]=arr[i];
        freq[(arr[i]/pos)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxElem=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxElem){
            maxElem=arr[i];
        }
    }
    int pos=1;
    while(maxElem/pos>0){
        countSort(arr,n,pos);
        pos*=10;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


