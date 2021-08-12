// link to the problem -> https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1#

// Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

// Input : 
// N = 8
// arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output : 
// 1  3  2  11  6  -1  -7  -5

// Input : 
// N=8
// arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
// Output :
// 7  9  10  11  -5  -3  -4  -1

// <*---------------------- SOLUTION -------------------------------*>

#include<bits/stdc++.h>
using namespace std;

vector<int> moveAllNegativeElementToEnd(vector<int>);
void printArray(vector<int>);

int main(){
    int n; // Enter the total number of elements
    int getVal;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){ // loop to input the elements
       cin>>getVal;
       arr.push_back(getVal);
    }
    cout<<"original : ";printArray(arr);cout<<endl;
    cout<<"altered : "; printArray(moveAllNegativeElementToEnd(arr));cout<<endl;
    return 0;
}

vector<int> moveAllNegativeElementToEnd(vector<int> arr){
        vector<int> temp; // this is a temporary storgae to fist add the positive element and then the negative elements
        for(int i=0;i<arr.size();i++){ // this loop is to add postive and 0 elements
            if(arr[i]>=0){
                temp.push_back(arr[i]);
            }
        }
        for(int i=0;i<arr.size();i++){ // this loop is to add the negative elements
            if(arr[i]<0){
                temp.push_back(arr[i]);
            }
        }
    return temp;
}

void printArray(vector<int> arr){ // this function is to print the elements
    cout<<"[ ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<", ";
    }
    cout<<"]";
    return ;
}