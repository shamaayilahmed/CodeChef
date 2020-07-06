#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;cin>>testCase;
    while(testCase--){
        int Size;
        cin>>Size;
        int Sequence[100];
        for(int i=0;i<Size;i++){
            cin>>Sequence[i];
        }
        bool flag=true;
        for(int i=0;i<Size/2;i++){
            if(Sequence[i]!=Sequence[Size-1-i]||Sequence[0]!=1||Sequence[(Size-1)/2]!=7||Sequence[i+1]-Sequence[i]>=2){
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
