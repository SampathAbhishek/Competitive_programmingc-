#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
	int i;
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//array of vectors
	int x,i;
	cin>>x;
	vector <int> v[x];
    for(i=0;i<x;i++){
    	int n;
    	cin>>n;
    	for(int j=0;j<n;j++){
    		int x;
    		cin>>x;
    		v[i].push_back(x);
    	}
    }
    cout<<"Array of vectors:"<<endl;
    for(i=0;i<x;i++){
    	cout<<"Vector "<<i<<endl;
    	print_vector(v[i]);
    }
    return(0);
}