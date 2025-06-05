#include <iostream>
using namespace std;
#include <stdio.h>
#include <chrono>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <time.h>

//Function to shuffle the password string so obtained
void shuffle(string password[], int length){
  string temp;
  int randomindex = 0;
  for (int i = 0; i < length; i++){
    randomindex = rand()%length;
    temp = password[i];
    password[i] = password[randomindex];
    password[randomindex] = temp;
  }
}


int main(){
  srand(time(0));
  string capalph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string alph = "abcdefghijklmnopqrstuvwxyz";
  string num = "0123456789";
  string spec = "!@#$%&*_?";

  int length;
  cout<<"Enter the length of the password"<<endl;
  cin>>length;
  int capalpha;
  cout<<"Enter the number of capital alphabets"<<endl;
  cin>>capalpha;
  int alpha;
  cout<<"Enter the number of alphabets"<<endl;
  cin>>alpha;
  int numb;
  cout<<"Enter the number of numbers"<<endl;
  cin>>numb;
  int special;
  cout<<"Enter the number of special character"<<endl;
  cin>>special;
  string password[length];
  int h;
  for (int i = 0; i < capalpha; i++){
    h = rand()%capalpha;
    password[i] = capalph[h];
  }
  for (int i = 0; i < alpha; i++){
    h = rand()%alpha;
    password[i + capalpha] = alph[h];
  }
  for (int i = 0; i < numb; i++){
    h = rand()%numb;
    password[alpha+i+capalpha] = num[h];
  }
  for (int i = 0; i < special; i++){
    h = rand()%special;
    password[alpha + numb + i + capalpha] = spec[h];
  }
  shuffle(password,length);
  for (int i = 0; i < length; i++){
    cout<<password[i];
  }
  cout<<endl;
  return 0;
}
