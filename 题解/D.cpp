#include<iostream>
//#include<string>
using namespace std;

int main(){
int n,max,t;


while(cin>>n&&n>0&&n<=1000){

int a[n][5];t=0;max=0;
//info
for(int i=0;i<n;i++)
        for(int j=0;j<5;j++)
                cin>>a[i][j];
//compare            
for(int i=0;i<n;i++){
        
        for(int j=0;j<5;j++){
           
           if(a[i][j]>a[max][j]) t=1; 
           else{ t=0; continue;} //不是最大 
                }//for
                
           if(t==1)max=i; }//for 
        
for(int i=0;i<n;i++){
        t=1; 
        for(int j=0;j<5;j++){
              if(a[i][j]>a[max][j]){t=0;goto E;}  
                }//for
                
                      }//for 确认最大 
          
      E:
       if(t==1)cout<<max+1<<endl;
       else cout<<"WO LYF MEI YOU KAI GUA !"<<endl;     
}

return 0;
}
