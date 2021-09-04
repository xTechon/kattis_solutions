#include <iostream>

using namespace std;

int main(){
    int n, p;
    string overflow;
    cin >> n >> p;
    for (int i=0; i<n; i++){
        getline(cin, overflow);
    }
    cout << p;
    return 0;
}
