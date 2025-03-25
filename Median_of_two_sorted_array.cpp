#include<bits/stdc++.h>
using namespace std;
float MSA(vector<int>&v1,vector<int>&v2)
{
    vector<int>v3;
    for(auto u:v1)
    {
        v3.push_back(u);
    }
    for(auto u:v2)
    {
        v3.push_back(u);
    }
    sort(v3.begin(),v3.end());
    if(v3.size()%2==0)
    {
        int a=(v3.size()/2)-1;
        int b=ceil((v3.size()+1)/2);
        return float(v3[a]+v3[b])/2;
    }
    else
    {
        int a= v3.size()/2;
        return float(v3[a]);
    }
}
int main()
{
    vector<int> num1;
    vector<int> num2;
    int a,b,n1,n2;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    cout<<"Enter the size of second array: ";
    cin>>n2;
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n1;i++)
    {
        cin>>a;
        num1.push_back(a);
    }
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<n2;i++)
    {
        cin>>b;
        num2.push_back(b);
    }
    double c= MSA(num1,num2);
    cout<<"The median is: "<<fixed<<setprecision(5)<<c;
    return 0;
}