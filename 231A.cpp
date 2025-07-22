#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int c=0;
    int count=0;
    int numberContestents=3;
    cout << "Enter the number of problems: " << endl;
    cin >> n;
    if (n<0||n>1000)
    {
        cout << "Invalid number" << endl;
        return 0;
    }
    int **arr;
    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[numberContestents];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < numberContestents; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j]==1)
            {
                c++;
            }
        }
        if (c>=2)
        {
            count++;
        }
        c = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < numberContestents; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }

    cout << "Problems to be solved: " << count << endl;

    for (int i = 0; i < n; i++) {
        delete[] arr[i];  
    }
    delete[] arr;
    return 0;
}