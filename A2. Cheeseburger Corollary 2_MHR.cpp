#include <iostream>
using namespace std;
long long posibility(long long a,long long b,long long c){
    if(a>=b){
        return ((c/b)*2)-1;
    }
    if(c>=a && a<b){
        if(c%a==0){
            return (c/a);
        }
        else{
            return a+(b-(a%b));
        }
    }
    else{
        return 0;
    }
}

int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        long long result=posibility(a,b,c);
        cout<<"Case #"<<i<<": "<<result<<endl;
    }
    return 0;
}

