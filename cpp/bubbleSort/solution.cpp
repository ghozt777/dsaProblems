// <*------------------------------------- BUBBLE SORT ------------------------------------------------------------------------------------------------------------*>

// the enire concept of bubble sort is to check the dajacent element and swap if the adjacent element is smaller than the current element 
// the loop runs from 0 to n-2
// n = arr.size()-1 or the last index
// also the function when inside the external loop checks a flag that represents wether a swap occured or not
// if there is no swap then the array is sorted and there is no further need to continue the loop
// hence it breaks from the loop
// This Sorting Algorithm has a Time Complexity of : O(n^2) or quadratic time complexity;
// and a space complexity of O(1) or static space complexity

// in bubble sort the array gets sorted from the right 
// that means that the rightmost element in the array represent the sorted part of the array
// eg: [x,x,x,x,x,|y,y,y,y] : the x's represent the unsorted part of the array and the y's represent the sorted part of the array

#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>);
void printArray(vector<int>);

int main(){
    vector<int> unsortedArray{89,-872,2721,-2728,0,1278}; // test case , expected o/p : -2728 -872 0 89 1278 2721 
    cout<<"original array: ";printArray(unsortedArray);cout<<endl;
    cout<<"sorted array: ";  printArray(bubbleSort(unsortedArray));cout<<endl;
    return 0;
}


vector<int> bubbleSort(vector<int> arr){
    bool flag;                              // the porpose of the flag is to check wether any swap happened or not if it happened then there is for the array to be more sorted
                                            // if the flag is false then there is swap that occured and hence the array is sorted and there is no further need to contunue the loop hece it breaks
    for(int i=0;i<arr.size();i++){
        flag = false;
        for(int j=0;j<arr.size()-1-i;j++){  // it runs till arr.size() -2 because it checks the adjacent element and hece for i=arr.size()-2 the next element has the index arr.seize()-1 or the last index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(!flag)break;
    }
    return arr;
}

void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return ;
}