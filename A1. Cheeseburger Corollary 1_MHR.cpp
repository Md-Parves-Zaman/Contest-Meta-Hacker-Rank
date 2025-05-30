#include <iostream>
using namespace std;
string posibility(int S,int D,int K){
    int buns=2*(S+D);
    int slices=S+2*D;
    if(buns>=K&&slices>=K&&(buns+slices)>=(2*K)+1){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int S,D,K;
        cin>>S>>D>>K;
        string result=posibility(S,D,K);
        cout<<"Case #"<<i<<": "<<result<<endl;
    }
    return 0;
}
