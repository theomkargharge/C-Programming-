#include <iostream>
using namespace std;
void ratingimprovement(void){
    int x,y,temp;
    cin>>x>>y;
    temp= x+200;
    if(x<=y && temp >=y){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ratingimprovement();
	}
	return 0;
}