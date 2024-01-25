#include <iostream>
#include<math.h>
using namespace std;
void DiscusThrow(void){
    int a,b,c,temp;
    cin>>a>>b>>c;
    temp = max(a,b);
    cout<<max(temp,c)<<endl;
    
}

int main() {
	// your code goes 
	int t;
	cin>>t;
	while(t--){
	    DiscusThrow();
	}
	return 0;
}