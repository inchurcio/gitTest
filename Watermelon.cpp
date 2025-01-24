#include <iostream>
using namespace std;

int main(){
    int w;

    cin >> w;

    if(w>2){
        if(w%2 == 0){
            cout << "Yes";
        }else{
            cout << "No";
        }
    }else{
        cout << "No";
    }
    
    return 0;
}
