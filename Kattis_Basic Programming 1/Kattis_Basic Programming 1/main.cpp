//
//  main.cpp
//  Kattis_Basic Programming 1
//
//  Created by mcr on 25/10/2020.
//

#pragma GCC optimize(3,"Ofast","inline")
//#include <bits/stdc++.h>
#include<iostream>
#include<sstream>
#include<iomanip>

# include <string.h>
#include<math.h>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<stack>
#include<set>
#include<list>
#include<unordered_set>
#include<unordered_map>


#include<utility>
#include<tuple>

#include<algorithm>


using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

/*
const ld  pi   = 4.0*atanl(1.0);
const int iinf = 1e9 + 10;
const ll  inf  = 1e18 + 10;
const int mod  = 1000000007;
const ld  prec = .000001;
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N,t;
    cin>>N>>t;
    ll sum=0, sumEven=0;
    char str[N];
    vector<ll> seq;
    
    for (int i=0; i<N; i++)
    {
        int num;
        cin>>num;
        sum+=num;
        if ((num&1)== 0) sumEven+=num;
        seq.push_back(num);
        if (t==6)
        {
            char c='a'+(num%26);
            str[i]=c;
        }
    }
    
    if (t==1)
    {
        cout<<7<<endl;
        return 0;
    }
    else if (t==2)
    {
        if (seq[0]>seq[1])
        {
            cout<<"Bigger"<<endl;
            return 0;
        }
        else if (seq[0]==seq[1])
        {
            cout<<"Equal"<<endl;
            return 0;
        }
        else
        {
            cout<<"Smaller"<<endl;
            return 0;
        }
    }
    else if (t==3)
    {
        sort(seq.begin(), seq.begin()+3);
        cout<<seq[1]<<endl;
        return 0;
    }
    else if(t==4)
    {
        cout<<sum<<endl;
        return 0;
    }
    else if (t==5)
    {
        cout<<sumEven<<endl;
        return 0;
    }
    else if (t==6)
    {
        for (int i=0; i<N; i++)
        {
            cout<<str[i];
        }
        cout<<endl;
        return 0;
    }
    else
    {
        ll t=0,n=0;
        while (1)
        {
            if (t==N-1)
            {
                cout<<"Done"<<endl;
                return 0;
            }
            else if (t<0||t>N-1)
            {
                cout<<"Out"<<endl;
                return 0;
            }
            else if (n>N)
            {
                cout<<"Cyclic"<<endl;
                return 0;
            }
            t=seq[t];
            n++;
            
        }
    }

    return 0;
}

/*
 ?????????
 1. ????????????if else??? else??????????????????????????????if????????????
 2. 32????????????:
    char: 1 byte= 8 bits
    char* : 2 byte = 16 bite (the pointer of char)
    short int : 2 byte = 16 bits
    int : 4 byte = 32 bit (?????? 2 byte ??? ?????? 2 byte???
    unsigned int : 4 byte = 32 bit ????????? 4 byte)
    float : 4 byte
    double : 8 byte
    long : 4 byte (??? ??? 2 byte ; ??? : 2 byte)
    long long : 4 byte (??? : 4 byte ; ??? ??? 4 byte)
    unsigned long : 4 byte???

 3. 64????????????
    char ???1?????????
    char*(???????????????): 8?????????
    short int : 2?????????
    int???  4?????????
    unsigned int : 4?????????
    float:  4?????????
    double:   8?????????
    long:   8?????????
    long long:  8?????????
    unsigned long:  8?????????
 */
