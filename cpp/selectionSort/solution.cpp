#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[100];
    cout<< "Enter n: ";cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // selection sort
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


