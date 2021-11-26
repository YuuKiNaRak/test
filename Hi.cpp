#include <iostream>
//ใครให้ดู
#include <cmath>
using namespace std;

string mixText(string x, string y){
    int L1 = x.size();
    int L2 = y.size();
    
    if(L1 != L2){
        cout << "E";
    }
    else{
        int i =0;
        while(i < L1){
            cout << x[i] << y[i] ;
            i++;
        }
        
    }
}
int main(){
    cout << "RUn\n" ;
    string A,B;
    cin >> A;
    cin >> B;
    mixText(A,B);
}
    