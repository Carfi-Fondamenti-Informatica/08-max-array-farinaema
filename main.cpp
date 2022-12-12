#include <iostream>
using namespace std;

int main(){

    int i, a;
    cin >> a;
    float m[a];
    for(i=0; i<a; i++){

        cin >> m[i];
    }

    cout << max(m, a) << endl;

}
