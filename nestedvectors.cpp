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

	//nesting of vectors
	int x,i;
	cin>>x;
	vector < vector <int> > v;
    for(i=0;i<x;i++){
    	int n;
    	cin>>n;
    	vector <int> temp;
    	for(int j=0;j<n;j++){
    		int x;
    		cin>>x;
    		temp.push_back(x);
    	}
    	v.push_back(temp);
    }
    cout<<"Vector of vectors:"<<endl;
    for(i=0;i<x;i++){
    	cout<<"Vector "<<i+1<<endl;
    	print_vector(v[i]);
    }
    return(0);
}
