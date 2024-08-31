#include<bits./stdc++.h>
using namespace std;

int armstrongNum(int x) {
    int sum = 0;
    while (x > 0){
        int lastDigit = x % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        x = x/10;
    }
    cout << sum;
    return x;
}

//driver code
int main(){
    int x;
    cin >> x;
    armstrongNum(x);
    return 0;
}