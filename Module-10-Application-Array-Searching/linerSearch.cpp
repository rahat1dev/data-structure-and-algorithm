#include <bits/stdc++.h>

using namespace std;

int main()
{

    int size;
    cin >> size;

    int ar[size];

    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    char c;
     cout << "Do You want to Search (Y/N): ";
    cin>>c;

    while (toupper(c) == 'Y')
    {
        int chackvalue;
        cout << "Please enter the value you want to search: ";
        cin >> chackvalue;

        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (ar[i] == chackvalue)
            {
                cout << " Index No: " << i << " positon: " << i + 1 << endl;
                flag = 1;
            }
        }

        if (flag == 0)
            cout << "NOT FOUND!" << endl;
        char c;
        cout << "Do You want to Continue Search (Y/N): ";
        cin>>c;
    }
}