#include <iostream>
using namespace std;
void fitness(void){
    int x;
    cin>>x ;
    int z = ((2*x)*5);
    cout<<z<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    fitness();
	}
	return 0;
}