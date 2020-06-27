#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int mycompare(string X,string Y){
	string XY = X.append(Y);
	string YX = Y.append(X);
	
	return XY.compare(YX)>0?1:0;
}

void prinLargest(vector<string>numbers){
	
	sort(numbers.begin(),numbers.end(),mycompare);
	for(int i=0;i<numbers.size();i++){
		cout<<numbers[i];
	}
}

int main(){
	int n;
	cin>>n;
	vector<string>numbers(n);
	for(int i=0;i<n;i++){
		cin>>numbers[i];
	}
	prinLargest(numbers);
}
