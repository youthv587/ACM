#include<iostream>
//#include<string>
#include<cmath>
using namespace std;

int main(){
int n,a,t,count;


while(cin>>n){
count=0;          
 for(int i=1;i<=n;i++){
         a=i;
  while(a>8){
  t=a%10;if(t==9)count++;
  a=a/10;
            }
            
}
cout<<count<<endl;
}

return 0;
}

