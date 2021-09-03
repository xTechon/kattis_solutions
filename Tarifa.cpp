#include <iostream>

using namespace std;

int main(){
    int limit, numMonth, ava, use;
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
