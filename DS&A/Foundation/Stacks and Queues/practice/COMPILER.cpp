/*So, for instance, the instructions:

<<>>

<>

<><>

are all valid. While:

>>

><><

are not.

Example
Input:
3
<<>>
><
<>>>
Output:
4
0
2
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
    string Sequence;
    cin>>Sequence;
    int Pointer=0,Balanced=0;
    for(int i=0;i<Sequence.length();i++){
        if(Sequence[i]=='<'){
            Pointer++;
        }
        else{
            Pointer--;
        }
        if(Pointer==0){
            Balanced=i+1;
        }
        else if(Pointer<0){
            break;
        }
    }
    cout<<Balanced<<endl;
    }
    return 0;
}
