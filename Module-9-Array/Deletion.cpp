#include <bits/stdc++.h>

using namespace std;

void printArray(int ar[],int size) {
    for(int i = 0; i < size; i++) {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    int size;
    cin>>size;

    int ar[size];

    for(int i = 0; i < size; i--) {
        cin>>ar[i];
    }

    int pos,value;

    cin>>pos>>value;

     if(pos == size-1) {
        size--;
     }else {
        for(int i = pos+1; i < size; i++) {
            ar[i-1] = ar[i];
        }
        size--;
     }

    printArray(ar,size);



}