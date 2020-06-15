#include<bits/stdc++.h>
#include<vector>

using namespace std;

int MinimalGroup(int n,vector<float>& groups){

	float left=0.0;
	float right=0.0;
	
	left=groups[0];
	int count=0;
	for(int i=1;i<n;i++){
	
		
		if((groups[i]-left)<=1){
			right=groups[i];
			}
		else 
		{
			left=groups[i];
			count+=1;
		}
		//cout<<left<<" "<<right<<" "<<count;
		//cout<<endl;
		
	}
	count+=1;
	return count;
	}

int main(){
	int n;
	cin>>n;
	vector<float>group(n);
	for(int i=0;i<n;i++){
		cin>>group[i];
	}
	sort(group.begin(),group.end());
	
	int cc=0;
	cc=MinimalGroup(n,group);
	cout<<cc;
}
