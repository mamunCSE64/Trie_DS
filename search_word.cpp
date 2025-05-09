#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define gcd __gcd
#define int_string to_string
#define string_int stoi
#define mn(v) *min_element(v.begin(), v.end())
#define mx(v) *max_element(v.begin(), v.end())
#define index_character s.find('character')
#define countxchar count(s.begin(), s.end(), 'x')
#define index_ofX_vector find(v.begin(), v.end(), x) - v.begin()
#define point cout << fixed << setprecision(10)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define n1 cout << "-1" << endl
#define ok cout << "ok" nl
#define sorted is_sorted(v.begin(), v.end())
#define nl << endl
#define sp << " "
#define mp make_pair
#define fi first
#define se second
#define inf LLONG_MAX
#define mod %1000000007
// ordered_set
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;   
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
// bitsize-> ll size=log2(n)+1 (last set bit=size-1;/ /Last bit->__lg(value); )
// first bit-> name._Find_First()
// next bit after x-> name._Find_next()
// freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// BesidesDuplicateCharacterEraseInString s.erase(unique(s.begin(), s.end()), s.end());
// Upper/lower-> transform(s.begin(), s.end(), s.begin(), ::toupper/tolower);

ll i, j, k, n, m, e=1e9;
const ll N = 2e6+5;
double pi=acos(-1);
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
    if(a.fi==b.fi) return (a.se>b.se); return (a.fi>b.fi);}

//
// Don't get stuck on a single approach for long, think of multiple ways
// You will destroy your dream if you stay in your comfort zone
// **********************|| Main Code ||********************************
//
 
//  g++ test.cpp -o a && ./a
//  g++ -o a test.cpp && ./a
//  g++ -o a test.cpp && a.e
class node{
    public:
    int f=0;
    node *child[26];
    node(){
        for(int j=0;j<26;j++){
            child[j]=NULL;
        }
    }
};
 
int main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    // point;
    ll test = 1; 
    // cin >> test;    
    again: 
    while (test--)
    {   
        ll n;
        cin>>n;
        string s[n];
        node *root=new node();        
        for(i=0;i<n;i++){
            cin>>s[i];            
            node *t=root;
            for(j=0;j<s[i].size();j++){
                if(t->child[s[i][j]-'a']==NULL){
                    node *hello=new node();              
                    t->child[s[i][j]-'a']=hello;
                }
                t=t->child[s[i][j]-'a']; // t=hello;
            }
            t->f++;            
        }               
        ll x; cin>>x;
        for(i=0;i<x;i++){
            string s; cin>>s;
            node *t=root;
            int f=1;
            for(j=0;j<s.size();j++){
                if(t->child[s[j]-'a']==NULL){
                    t=NULL;break;
                }
                t=t->child[s[j]-'a'];
            }
            if(t==NULL or t->f==0) f=0;
            cout << s sp;
            if(f){
                cout << "is found " << t->f << " times" nl;
            }else{  
                cout << " is not found" nl;
            }
        }
    }     
}

 
 
