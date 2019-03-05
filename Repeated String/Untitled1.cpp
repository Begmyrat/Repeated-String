#include <iostream>

using namespace std;

long long int n,q,z;
string s;

int main(){
	
	cin>>s>>n;
	
	q = n/s.size();
	for(int i=0;i<s.size();i++)
		if(s[i]=='a')
			z++;
	z=q*z;
	for(int i=0;i<n-(q*s.size());i++)
		if(s[i]=='a')
			z++;
	cout<<z<<endl;
	
	
	return 0;
}
