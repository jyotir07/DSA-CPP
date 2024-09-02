#include <bits./stdc++.h>

using namespace std;

int checkGcd(int n1, int n2){
    int gcd;
    for (int i = 1; i<=min(n1, n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    cout << gcd;
    return gcd;
}
int betterGcd(int a, int b){
    while (a > 0 && b > 0){
        if (a > b) a = a%b;
        else b = b%a;
    }
    if ( a == 0) return b;
    else return b;
}
int main (){
    int n1, n2;
    cin >> n1 >> n2;
    checkGcd(n1, n2);
    cout << endl;
    int answer = betterGcd(n1, n2);
    cout << answer;
    return 0;
}