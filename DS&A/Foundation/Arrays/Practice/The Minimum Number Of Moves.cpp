#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
	cin>>testCase;
	while(testCase--){
	 int numberOfWorkers;
	 cin>>numberOfWorkers;
	 long long int salary[numberOfWorkers],minimum=INT_MAX,moves=0;
	 for(int i=0;i<numberOfWorkers;i++){
	     cin>>salary[i];
	     minimum=min(minimum,salary[i]);
	 }
	 for(int i=0;i<numberOfWorkers;i++){
	    moves+=(salary[i] - minimum);
	 }
    cout<<moves<<endl;
	}
return 0;
}
