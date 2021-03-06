/*
Amr lives in Lala Land. Lala Land is a very beautiful country that is located on a coordinate line. Lala Land is famous with its apple trees growing everywhere.

Lala Land has exactly n apple trees. Tree number i is located in a position xi and has ai apples growing on it. Amr wants to collect apples from the apple trees. Amr currently stands in x = 0 position. At the beginning, he can choose whether to go right or left. He'll continue in his direction until he meets an apple tree he didn't visit before. He'll take all of its apples and then reverse his direction, continue walking in this direction until he meets another apple tree he didn't visit before and so on. In the other words, Amr reverses his direction when visiting each new apple tree. Amr will stop collecting apples when there are no more trees he didn't visit in the direction he is facing.

What is the maximum number of apples he can collect?

Input
The first line contains one number n (1 ≤ n ≤ 100), the number of apple trees in Lala Land.

The following n lines contains two integers each xi, ai ( - 105 ≤ xi ≤ 105, xi ≠ 0, 1 ≤ ai ≤ 105), representing the position of the i-th tree and number of apples on it.

It's guaranteed that there is at most one apple tree at each coordinate. It's guaranteed that no tree grows in point 0.

Output
Output the maximum number of apples Amr can collect.



Examples
inputCopy
2
-1 5
1 5
outputCopy
10
inputCopy
3
-2 2
1 4
-1 3
outputCopy
9
inputCopy
3
1 9
3 5
7 10
outputCopy
9
Note
In the first sample test it doesn't matter if Amr chose at first to go left or right. In both cases he'll get all the apples.

In the second sample test the optimal solution is to go left to x =  - 1, collect apples from there, then the direction will be reversed, Amr has to go to x = 1, collect apples from there, then the direction will be reversed and Amr goes to the final tree x =  - 2.

In the third sample test the optimal solution is to go right to x = 1, collect apples from there, then the direction will be reversed and Amr will not be able to collect anymore apples because there are no apple trees to his left.
 */

// code 

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> a,b;
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x<0) a.push_back(make_pair(x,y));
        else b.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end(),greater<pair<int,int>>());
    sort(b.begin(),b.end());
    int res=0;
    if(a.size() == b.size()){
        for (int i = 0; i < a.size(); i++)
            res += a[i].second + b[i].second;
    }
    else if(a.size() > b.size()){
        for(int i=0;i<b.size();i++)
            res += a[i].second + b[i].second;
        res += a[b.size()].second;
    }
    else{
        for(int i=0;i<a.size();i++)
            res += a[i].second + b[i].second;
        res += b[a.size()].second;
    }
    cout<<res<<endl;
return 0;
}

