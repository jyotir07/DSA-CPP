#include <bits./stdc++.h>

using namespace std;

int funcDiv(int x){
    for(int i=1; i<=x; i++){
        if(x%i == 0){
            cout << i << " ";
        }
    }
}
//useable logic-2
int betterDiv(int x){
    vector<int> ls;


    for(int i=1; i*i <= x; i++){ //solve how only half the divisors are getting printed
        if(x%i == 0){
            ls.push_back(i);
            if((x%i) == i){
                ls.push_back(x/2);
            }
        } 
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
}

int primeCount(int x){
    int count = 0;
    for(int i=1; i<=x; i++){
        if(x%i == 0){
            count++;
        }
    }
    return count;
}
void checkPrime(int x){
    int count = primeCount(x);
    if(count == 2){
        cout << "Prime number detected!";
    }
    else {
        cout << "No prime number detected.";
    }
}

int main (){
    int x;
    cin >> x;
    funcDiv(x);
    cout << endl;
    betterDiv(x);
    cout << endl;
    checkPrime(x);
    return 0;
}