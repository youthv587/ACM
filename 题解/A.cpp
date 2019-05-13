#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    while(cin>>str){
	int s=str.size();
	for(int i=0;i<s;i++){
	
	    for(int j=i;j<i+s;j++){
	    	cout<<str[j%s];
	    }
	    cout<<endl;
	}
	
    }
    
    
    return 0;
}
