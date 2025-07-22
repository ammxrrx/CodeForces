#include <iostream>
using namespace std;

int main(){
    int col;
    cin >> col;
    int *arr;
    arr = new int[col];
    for (int i = 0; i < col; i++)
    {
        cin >> arr[i];
    }
    int temp;
    
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j< col-1; j++)
        {
            
                if (arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];                //bubble sort
                    arr[j + 1] = temp;
                }
            
        }
    }
    
    for (int i = 0; i < col; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}