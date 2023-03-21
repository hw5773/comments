#include<iostream>

using namespace std;

int check_validity(int a,int b){
  if(a<b) return 1;
  return 0;
}

int sum_up(int a,int b){
  int sum = 0;
  for(int i=a;i<=b;i++) sum += i;
  //cout<<sum<<endl;

  return sum;
}

int main(int argc,char* argv[]){
  int x,y;
  cin>>x>>y;

  int check = check_validity(x,y);
  if(!check) return 0;

  cout<<sum_up(x,y)<<endl;
  return 0;
}
