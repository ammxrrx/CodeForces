#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    cout << "Enter UserName: " << endl;
    cin >> username;

    int count = 0;

    for (int i = 0; i < username.length(); i++) {
        bool alreadyCounted = false;
        for (int j = 0; j < i; j++) {
            if (username[i] == username[j]) {
                alreadyCounted = true;
                break;
            }
        }
        if (!alreadyCounted) {
            count++;
        }
    }

    if (count % 2 == 0) {
        cout << "Chat with her!" << endl;
    } else {
        cout << "Ignore him!" << endl;
    }

    return 0;
}
