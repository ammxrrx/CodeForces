#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr1;
    arr1 = new int[n ];
    int *arr2;
    arr2 = new int[n ];
    int *arr3;
    arr3 = new int[n ];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        cin >> arr2[i];
        cin >> arr3[i];
    }
    int x=0, y=0, z=0;
    for (int i = 0; i < n; i++)
    {
        x += arr1[i];
        y += arr2[i];
        z += arr3[i];
    }
    if (x==0&&y==0&&z==0)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    delete arr1;
    delete arr2;
    delete arr3;
    return 0;
}