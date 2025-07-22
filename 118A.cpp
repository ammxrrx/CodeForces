#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    string newS = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (!(s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I'||s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'))
        {
            newS += ".";
            newS += s[i];
        }
    }
    for (int i = 0; i < newS.size(); i++)
    {
        if (newS[i]>=65&&newS[i]<=90)
        {
            newS[i] = newS[i] + 32;
        }
    }
    cout << newS << endl;   
    return 0;
}