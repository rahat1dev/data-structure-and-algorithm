#include <bits/stdc++.h>

using namespace std;

void printArray(int ar[],int size) {
    for(int i = 0; i < size; i++) {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

void insertionArray(int pos, int value,int n,int array[]) {
    if(pos < 0 || pos > n) {
        cout<<"Invalid Index!"<<endl;
    } else {
        for(int i = n-1; i >= pos; i--) {
            array[i+1] = array[i];
        }
        array[pos] = value;
    }
}

int main() 
{
    int n;
    cout<<"Input array size: ";
    cin>>n;
    int array[n];
    //input array ----->
    cout<<"Input array of element"<<endl;
    for(int i = 0; i < n; i++) {
        cin>>array[i];
    }
    //print array ----->
    printArray(array,n);

    int pos,value;
    cout<<"Position of the Insertion: ";
    cin>>pos;
    cout<<"Value of th Insertion: ";
    cin>>value;
    insertionArray(pos,value,n,array);
    printArray(array,n+1);


}