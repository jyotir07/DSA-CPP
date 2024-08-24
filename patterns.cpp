#include<bits./stdc++.h>

using namespace std;

void squarePattern(int n){

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << " * ";
        }
        cout << endl;
    }
}
void halfPyramid(int n){
    for (int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout << " * ";
        }
        cout << endl;
    }
}
void reverseHalfPyra(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout << " " << "*" << " ";
        }
    cout << endl;
    }

}
int main(){
     int n;
    cin >> n;
    //calling square pattern function
    squarePattern(n);

    //calling half pyramid pattern
    halfPyramid(n);

    //calling reverse pyramid pattern
    reverseHalfPyra(n);
}