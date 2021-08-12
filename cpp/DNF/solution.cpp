// The Dutch National Flag Algorithm to sort an unsorted array of 0s,1s,2s withouth using STL

// This is the Dutch National Flag Algorith where an unsorted array of three items can be sorted in an order
// Here in this example I will sort an unsorted array of 0s 1s and 2s in a Time Complexity of: O(n) and a Space Complexity of O(1)

// In this sorting algorith there are three pointers :
// 1. lo
// 2. mid
// 3. hi
// from the starting index of the array i.e. 0 to lo we are gonna store a specific item in this case 0
// from lo to hi we are gonna store another item in this case 1
// and finnaly from hi to the last index i.e. array.length -1 we are gonna store the final element
// The reason whi its called the Dutch National Flag Algorithm is that just like the Dutch Flag it also contains three colors or in this case pointers

// STEP 1:
// Initially lo and mid point to 0 index
// and hi points to the very last index

// STEP 2:
// we increment mid as it traverses the array ,and we then increment the first pointer when we encounter the first element i.e.0  and swap the current value of mid with it
// i.e once we encounter the first element we swap arr[mid] with arr[lo] and we increment both of them i.e. mid++ lo++

// once we encounter the element we want in the middle in this case 1 we simply increment the value of mid and do nothing i.e. mid++

// when we encounter the last element we swap the current value of the array at mid and decrement the value of hi by 1 i.e. swap arr[mid] and arr[hi] and do hi--
// NOTE: that in the case when we encounter the last element we dont increment mid

// The loop iterated while mid<=hi holds true

// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> DNFSort(vector<int>);
void printArray(vector<int>);

int main()
{

    int check;
    int n;
    int getVal;
    int itr = 0;
    vector<int> unsortedArray;
    cout << "Enter n:";
    cin >> n;
    while (itr < n)
    {
        cout << "Enter the value: ";
        cin >> getVal;
        if (getVal == 0 || getVal == 1 || getVal == 2)
        {
            unsortedArray.push_back(getVal);
            itr++;
        }
        else
        {
            cout << "Enter only 0s 1s and 2s: ";
        }
    }

    cout << "Original Array: ";
    printArray(unsortedArray);
    cout << endl;
    cout << "Sorted Array: ";
    printArray(DNFSort(unsortedArray));
    cout << endl;
    return 0;
}

vector<int> DNFSort(vector<int> arr)
{
    int hi = arr.size() - 1;
    int lo = 0, mid = 0;
    while (mid <= hi)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[lo++], arr[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[hi--], arr[mid]);
            break;
        }
    }
    return arr;
}
void printArray(vector<int> arr)
{
    cout << "[ ";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "]";
    return;
}
