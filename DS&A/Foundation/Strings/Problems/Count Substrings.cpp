/*Given a string S consisting of only 1s and 0s, find the number of substrings which start and end both in 1.
In this problem, a substring is defined as a sequence of continuous characters Si, Si+1, ..., Sj where 1 ≤ i ≤ j ≤ N.

Input
First line contains T, the number of testcases. Each testcase consists of N(the length of string) in one line and string in second line.

Output
For each testcase, print the required answer in one line.

Constraints
1 ≤ T ≤ 105
1 ≤ N ≤ 105
Sum of N over all testcases ≤ 105
Example
Input:
2
4
1111
5
10001

Output:
10
3
Explanation
#test1: All substrings satisfy.
#test2: Three substrings S[1,1], S[5,5] and S[1,5] satisfy.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll testCase;
    cin>>testCase;
    while(testCase--){
        ll answer=0,size;
        cin>>size;
        string str;cin>>str;
        for(auto x:str){
            if(x=='1'){
                answer++;
            }
        }
        cout<<answer*(answer+1)/2<<endl;
    }
	// your code goes here
	return 0;
}
