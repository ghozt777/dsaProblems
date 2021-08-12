#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int>);
void printArray(vector<int>);

int main(){
    vector<int> unsortedArray;
    int n,getVal;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>getVal;
        unsortedArray.push_back(getVal);
    }
    printArray(insertionSort(unsortedArray));
    return 0;
}

vector<int> insertionSort(vector<int> arr){
    int j,key;
    for(int i=1;i<arr.size();i++){
        key = arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return arr;
}

void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return ;
}