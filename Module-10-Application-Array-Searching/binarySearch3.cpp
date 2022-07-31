#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[],int x,int low,int hight) {
    while(low <= hight) {
        int mid = (low+hight) / 2;

        if(array[mid] == x) return mid;
        if(array[mid] < x) low = mid+1;
        else hight = mid-1;
    }
    return -1;
}

int main() 
{
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,100,103,111,112,500,1000};
    int n = sizeof(array) / sizeof(array[0]);
    int x;
    cout<<"Input searching value: ";
    cin>>x;

    int indexNumber = binarySearch(array,x,0,n-1);

    if(indexNumber != -1) {
        cout<<"Array index number: "<<indexNumber<<endl;
    }else {
        cout<<"Not found!"<<endl;
    }
}