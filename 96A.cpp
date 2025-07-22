#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 1;
    bool isDang = false;
    int length = s.size();
    if (length>=7)
    {
        for (int i = 0; i < length-1; i++)
        {
            if (s[i]==s[i+1])
            {
                count++;
                if (count>=7)
                {
                    cout << "YES" << endl;
                    isDang = true;
                    break;
                }
            }
            else{
                count = 1;
            }
        }
    }
    
    if (isDang==false)
    {
        cout << "NO" << endl;
    }
    return 0;
}