#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"enter size: ";
    int n;
    cin>>n;
    
    vector<int> numbers(n);
    
    cout<<"Enter List: ";
    for(int i=0; i<n; i++){
        int t;
        cin>>numbers[i];
    }
    
    map<int, int> count;

    for (int i = 1; i <= 9; i++) {
        count[i] = 0;
        for (int num : numbers) {
            if (num % i == 0) {
                count[i]++;
            }
        }
    }

    bool first = true;
    for (auto& pair : count) {
        if (!first) {
            cout << ", ";
        }
        cout << "{" << pair.first << ": " << pair.second << "}";
        first = false;
    }
    cout << endl;

    return 0;
}
