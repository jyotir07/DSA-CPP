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

void halfPyraNum(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << " " << j << " ";
        }
        cout << endl;
    }

}
void reverseHalfPyra(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout << " " << j << " ";
        }
    cout << endl;
    }

}
void pyramid(int n){
    for(int k=0; k<n; k++){

        //space
        for(int i=0; i<n-k-1; i++){
            cout << " ";
        }

        //star
        for(int j=0; j<2*k+1; j++){
            cout << "*";
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

    //calling half pyramid number pattern function
    halfPyraNum(n);

    //calling pyramid pattern
    pyramid(n);

    return 0;
}