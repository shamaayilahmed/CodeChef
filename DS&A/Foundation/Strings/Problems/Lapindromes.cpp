/*Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number 
of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters 
with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their
frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.

Input:
First line of input contains a single integer T, the number of test cases.
Each test is a single line containing a string S composed of only lowercase English alphabet.
Output:
For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.
Constraints:
1 ≤ T ≤ 100
2 ≤ |S| ≤ 1000, where |S| denotes the length of S
Example:
Input:
6
gaga
abcde
rotor
xyzxy
abbaab
ababc


Output:
YES
NO
YES
YES
NO
NO

*/
#include <iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    cin>>testCase;
    while(testCase--){
    string givenString,leadingHalf,minorHalf;
    cin>>givenString;
    int length=givenString.size();
    leadingHalf=givenString.substr(0,length/2);
    if(length%2==0)
        minorHalf=givenString.substr(length/2,length);
    else
        minorHalf=givenString.substr((length/2)+1,length);
    int charLead[26]={0},charMinor[26]={0};
    for(int i=0;leadingHalf[i]!='\0';i++){
        charLead[leadingHalf[i]-'a']++;
    }
    for(int i=0;minorHalf[i]!='\0';i++){
        charMinor[minorHalf[i]-'a']++;
    }int result=0;
    for(int i=0;i<26;i++){
        result+=abs(charLead[i]-charMinor[i]);
    }
    if(!result)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
