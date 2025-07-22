#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int plus=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='+')
        {
            plus++;
        }
    }
    int c=0;
    int *arr;
    arr = new int[plus + 1];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='1')
        {
            arr[c] = 1;
            c++;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='2')
        {
            arr[c] = 2;
            c++;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='3')
        {
            arr[c] = 3;
            c++;
        }
    }
    for (int i = 0; i < plus+1; i++)
    {
        if (i==plus)
        {
            cout << arr[i] << endl;
        }
        else{
            cout << arr[i] << "+";
        }
    }
    delete arr;
    return 0;
}