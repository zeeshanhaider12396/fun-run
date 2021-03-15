include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int j=0;j<n;j++)
	    cin>>b[j];
	    int maxa=0,maxb=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>maxa)
	        maxa=a[i];
	        if(b[i]>maxb)
	        maxb=b[i];
	    }
	    if(maxa!=maxb)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	
	return 0;
}
