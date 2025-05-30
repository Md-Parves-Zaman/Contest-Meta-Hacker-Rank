#include<iostream>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    // online submission
    #endif
}

int main(){
    init_code();
    int t,tastcase;
    cin>>t;
    while(t--){
        tastcase++;
        int r,c,a,b;
        cin>>r>>c>>a>>b;

        if(r>c){
            cout<<"Case #"<<tastcase<<": YES"<<endl;
        }
        else{
            cout<<"Case #"<<tastcase<<": NO"<<endl;
        }
    }
    return 0;

}

