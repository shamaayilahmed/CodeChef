#include <iostream>

using namespace std;

int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        long long Houses;
        cin>>Houses;
        long long Speed,Time,copHouse[105]={0},houseNumber;
        cin>>Speed>>Time;
        long long searchDistance=Speed*Time;
        for(long long i=0;i<Houses;i++){
            cin>>houseNumber;
            int leastCover=houseNumber-searchDistance;
            int highCover=houseNumber+searchDistance;
            leastCover=max(1,leastCover);
            highCover=min(100,highCover);
            for(long long j=leastCover;j<=highCover;j++){
                if(copHouse[j]==0){
                    copHouse[j]=1;
                }
            }
        }
        long long freeHouse=0;
        for(long long i=1;i<=100;i++){
            if(copHouse[i]==0){
                freeHouse++;
            }
        }
        cout<<freeHouse<<'\n';
    }
}
