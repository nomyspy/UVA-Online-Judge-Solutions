// Created By ComplexEnigma

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<utility>
using namespace std;

typedef long long ll;

#define filein() {freopen("input.txt","r",stdin);}
#define fileout() {freopen("output.txt","w",stdout);}

int _I() {int x;scanf("%d",&x);return x;}
ll _LL() {ll x;scanf("%lld",&x);return x;}
float _F() {float x;scanf("%f",&x);return x;}
double _LF() {double x;scanf("%lf",&x);return x;}

#define PB(x,y) x.push_back(y)
#define Clear(x) x.clear()
#define Resize(x) x.resize()
#define Fill(x,y) fill(x.begin(),x.end(),y)
#define Sort(x) sort(x.begin(),x.end())

int A[10005];

void C_Enigma()
{
    int N;

    while( scanf("%d",&N)==1)
    {
        for(int i=0;i<N;i++)
        {
            A[i] = _I();
        }

        int counter = 0;
        for(int i=0;i<N;i++)
            for(int j=i+1;j<N;j++)
            {
                if(A[j]<A[i])
                {
                    counter++;
                }
            }
        printf("Minimum exchange operations : %d\n",counter);
    }
}

int main()
{
    //filein();fileout();
    C_Enigma();

    return 0;
}
