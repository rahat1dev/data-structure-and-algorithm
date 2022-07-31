#include <bits/stdc++.h>

using namespace std;

int binarySearch(int *array,int x,int low,int hight) {
    if(low <= hight) {
        int mid = (low+hight) / 2;
        if(array[mid] == x) return mid;
         //search the left half
        if(array[mid] < x) 
         return binarySearch(array,x,mid+1,hight);
         //search the right half
         return binarySearch(array,x,low,mid-1);
    }
    return -1;
}

int main(void) 
{
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,100,103,111,112,500,1000};
    int n = sizeof(array) / sizeof(array[0]);

    int x;
    cout<<"Input searching value: ";

    int index = binarySearch(array,x,0,n-1);

    if(index == -1) {
        cout<<"Not found!"<<endl;
    }else {
        cout<<"Array index number: "<<index<<endl;
    }
}