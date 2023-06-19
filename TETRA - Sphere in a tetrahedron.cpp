#include <bits/stdc++.h>
using namespace std;
double area(double a,double b,double c)
{
	double s=(a+b+c)/2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		double u,v,w,U,V,W;
		cin>>u>>v>>w>>W>>V>>U;
		double u1=v*v+w*w-U*U;
		double v1=u*u+w*w-V*V;
		double w1=u*u+v*v-W*W;
		double volume=(sqrt(4*u*u*v*v*w*w-u*u*u1*u1-v*v*v1*v1-w*w*w1*w1+u1*v1*w1))/12;
		double total_area=area(U,V,W)+area(v,u,W)+area(w,v,U)+area(u,w,V);
		double result=3*volume/total_area;
		cout<<fixed<<setprecision(4)<<result<<endl;
	}
	return 0;
}
