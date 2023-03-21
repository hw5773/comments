#include <iostream>
using namespace std;
int check_validity(int a,int b){
  if(a<b){
    return 1;}
  else{
    return 0;}
}
int sum_up(int a,int b){
  int sum=0;
  for(int p=a;p<=b;p++){
    sum=sum+p;
  }
  return sum;
}
int main(int argc, char *argv[]){
  int a,b;
  cin >> a>>b;
  check_validity(a,b);
  if(check_validity==0){
    return 0;}
  else{
    cout<<sum_up(a,b)<<endl;
  }
  return 0;
}
