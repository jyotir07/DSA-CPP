#include<bits/stdc++.h>
//to include all the libraries use <bits/stdc++.h>

//To not use std before every function
using namespace std;

int main () {
  //input age and tell if adult or not
  int age;

  cin >> age;

  //if statements for checking logic
  if(age < 18){
    cout <<  "Not eligeble for the job.";
  }
  else if(age >= 18 && age < 55){
    cout << "Eligible for the job.";
  }
  else if(age >= 55 && age < 57){
    cout << "Eligible for the job, but retiring soon.";
  }
  else{
    cout << "Retirement time";
  }
  return 0;
}