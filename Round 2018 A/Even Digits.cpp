#include<bits/stdc++.h>
#include <iterator>
#include <iostream>
#include <numeric>
#include <math.h>
#define ll long long
#define ull long
#define mpa make_pair
#define pb push_back
#define ff first
#define pii pair<ll,ll>
#define dd double
#define trace(x) cerr << #x << " : " << x << endl
#define ss second
#define boost ios_base::sync_with_stdio(0)
#define forp(i,a,b) for(ll i=a;i<=b;i++)
#define rep(i,n)    for(ll i=0;i<n;++i)
#define ren(i,n)    for(ll i=n-1;i>=0;i--)
#define forn(i,a,b) for(ll i=a;i>=b;i--)
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end();
#define sc(x) scanf("%lld",&x)
#define clr(x,val) memset(x,val,sizeof(x))
#define pr(x) printf("%lld\n",x) 
#define pdd pair<dd,dd>
#define read_arr(a,n) for(ll i=1;i<=n;i++)cin>>a[i];
#define init_arr(a,n) for(ll i=1;i<=n;i++)a[i]=n-i+1;
#define prec(x) cout<<fixed<<setprecision(x)
#define fre freopen("input.txt","r",stdin),freopen("output.txt","w",stdout)
#define arr array 
using namespace std;
ll get_num(string s){
	ll v=0;
	for(ll i=0;i<s.size();i++)v=v*10+(s[i]-'0');
	return v;
}

int main(){
	ll t;
	cin>>t;
	ll tc=1;
	
	while(t--){
		string s,lar,sma;
		cin>>s;
		ll n=s.size();
		ll f=0;
		for(ll i=0;i<n;i++){
			ll dig=s[i]-'0';
			if(f==1){
				lar+='0';
				sma+='8';
				continue;
			}else if(f==2){
				lar+='8';
				sma+='8';
				continue;
			}
			if(dig%2){
				ll sm_dig,lr_dig;
				if(dig<9){
					sm_dig=dig-1;
					lr_dig=dig+1;
					f=1;
				}else {
					sm_dig=dig-1;
					lr_dig=dig-1;
					f=2;
				}
				lar+=char('0'+lr_dig);
				sma+=char('0'+sm_dig);
			
			}else{
				lar+=s[i];
				sma+=s[i];
			}
		}
		
		ll num1=get_num(lar);
		ll num2=get_num(sma);
		ll num=get_num(s);
		
		cout<<"Case #"<<tc<<": ";
		cout<<min(abs(num1-num),abs(num2-num))<<endl;
		tc++;
	}
		
}
	
	




		


    
	


		
