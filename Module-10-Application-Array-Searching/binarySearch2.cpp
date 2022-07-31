#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int key,int low,int hight) {
    while(low <= hight) {
        int mid = (low+hight) / 2;

        if(arr[mid] == key) return mid;
        if(arr[mid] < key) low = mid+1;
        else hight = mid-1;
    }
    return -1;
}

int main(void) 
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout<<"Input serching value: ";
    cin>>key;

    int indexNumber = binarySearch(arr,key,0,n-1);

    if(indexNumber != -1) {
        cout<<"Array index number: "<<indexNumber<<endl;
    }else {
        cout<<"Not found!"<<endl;
    }
}