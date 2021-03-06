/***
         _______________________________

             MD. SYMON HASAN SHOHAN
             UNIVERSITY OF ASIA PACIFIC
             isymonhs@gmail.com
         _______________________________
*/
#include<bits/stdc++.h>
using namespace std;

#define filein() freopen("input.txt","r",stdin)
#define file() {freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);}
#define fastio() { ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define GraphString map<string, vector<string> > G
#define GraphInt map<int,vector<int> > G
#define VisitedString map<string,int> visited
#define VisitedInt map<int,int> visited
#define PrevString map<string,string> previous
#define PrevInt map<int,int> previous

#define Size(x) x.size()
#define Front(x) x.front()
#define Pop(x) x.pop()
#define Push(x,y) x.push(y)
#define Empty(x) x.empty()
#define PresentInMap(x,y) x.count(y)
#define PB(x,y) x.push_back(y)
#define Clear(x) x.clear()
#define FillVector(x) fill(x.begin(),x.end(),-1)
#define CreateVectorInt(x) vector<int> x

void solve()
{
    int t;
    vector < pair<string,int> > v;
    vector <string> ans;
    scanf("%d",&t);

    int cases=1;
    string s;
    int a;

    while(cases<=t)
    {
        int m=0;
        ans.clear();
        v.clear();
        for(int i=0; i<10; i++)
        {
            cin>>s>>a;
            v.push_back(make_pair(s,a));
            if(a>m){
                ans.clear();
                ans.push_back(s);
                m=a;
            }
            else if(a==m)
            {
                ans.push_back(s);
            }
        }
        int sz=ans.size();
        printf("Case #%d:\n",cases);
        for(int i=0;i<sz;i++)
        {
            cout<<ans[i]<<endl;
        }
        cases++;
    }
}

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);
    //freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    solve();
    return 0;
}
