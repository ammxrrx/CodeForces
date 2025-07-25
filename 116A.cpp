#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;              //number of stops
    int a,b;            //number of passengers exiting at a stop; no of passengers entering at a stop
    cin>>n;
    vector<int> row;
    vector<int> col;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        cin>>b;
        row.push_back(a);
        col.push_back(b);
    }
    int capacity=0;
    int maxCapacity=0;      
    for (int i = 0; i < n; i++)
    {
        capacity+=col[i];
        capacity-=row[i];
        if (maxCapacity<capacity)
        {
            maxCapacity=capacity;
        }
        
    }
    cout<<maxCapacity<<endl;
    return 0;
}