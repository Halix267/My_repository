#include<bits/stdc++.h>
#include<vector>

using namespace std;

int minRefuel(int A,int B, vector<int>& c,vector<int>& d){
	int n;
	n=c.size();
	priority_queue<int> heap;
	int count=0;
	int yahin=-1;
	for(int i=0;i<c.size();i++)
	{
		if(c[i]<=B)
		{ heap.push(d[i]); yahin=i;}
		else break;
		}
	while(B<A)
	{
		if(yahin==-1||heap.empty())
			return -1;
		B+=heap.top();
		
		heap.pop();
		count++;
		for(int i=yahin+1;i<c.size();i++)
		{
			if(c[i]<=B)
			{ heap.push(d[i]); yahin=i;}
			else break;
			}
		 }
        return count;
    }
	
int main()
{
	int target;
	cin>>target;
	int startfuel;
	cin>>startfuel;
	int n;
	cin>>n;

	
	vector<int>c(n);
	vector<int>d(n);
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
		cin>>d[i];
		
	int cc=0;
	cc=minRefuel(target,startfuel,c,d);
	cout<<cc;
}
	

