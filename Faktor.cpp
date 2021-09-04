#include <iostream>

using namespace std;

int main(){
    int I=0,A=0,C=0;
    cin >> A >> I;
    if (A != 1){
        C = (A*(I-1)) + 1;
    }else C=A*I;
    cout << C << endl;
    return 0;
}
