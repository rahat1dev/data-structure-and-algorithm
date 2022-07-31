#include <bits/stdc++.h>

using namespace std;

int binarySearch(int ar[],int key,int low,int hight) {
    while(low <= hight) {
        int mid = (low+hight) / 2;

        if(ar[mid] == key) return mid;
        if(ar[mid] < key) low = mid+1;
        else hight = mid-1;
    }
    return -1;
}

int main(void) 
{
    int ar[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(ar) / sizeof(ar[0]);
    int key;
    cout<<"Enter serching value: ";
    cin>>key;
    int indexNumber = binarySearch(ar,key,0,n-1);

    if(indexNumber != -1) {
        cout<<"Array index number: "<<indexNumber<<endl;
    }else {
        cout<<"NOT FOUND!"<<endl;
    }
    return 0;
}