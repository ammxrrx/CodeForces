#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr;
    arr=new int[n];
    double avg=0;
    for (int i = 0; i <n; i++)
    {
        cin>> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        avg+=arr[i];
    }
    avg/=n;
    cout<<avg<<setprecision(12)<<endl;
    return 0;
}