#include <iostream>
using namespace std;

int main(){
    int n, k, nextRound = 0;

    cin >> n >> k;

    int P[n];

    for(int i=0; i<n; i++){
        cin >> P[i];
    }

    for(int i=0; i<n; i++){
        if(P[i]>0 && P[i] >= P[k-1]){
            nextRound++;
        }
    }
    
    cout << nextRound;

    return 0;
}