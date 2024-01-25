#include <iostream>
using namespace std;
void DeterminetheScore(void){
    int x,n;
    cin>>x>>n;
    
    cout<<((x/10)*n)<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    DeterminetheScore();
	}
	return 0;
}