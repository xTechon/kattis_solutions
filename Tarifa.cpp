#include <iostream>

using namespace std;

int main(){
    int limit=0, numMonth=0, ava=0, use=0;
    cin >> limit >> numMonth;
    int i;
    for (i=0; i < numMonth; i++){
        cin >> use;
        ava += limit - use;
    }
    ava += limit;
    cout << ava;
    return 0;
}
