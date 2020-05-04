#include<bits/stdc++.h>
#define ll long long
using namespace std;

void transfer(stack<int>&s1,stack<int>&s2,int n)
{
	for(int i=0;i<n;i++)
	{
		s2.push(s1.top());
		s1.pop();
	}
}
void reverseStack(stack<int>&s1)
{
	//s.push(540);  checkking wtf is happening
	stack<int>s2;
	int n=s1.size();
   for(int i=0;i<s1.size();i++)
   {
  	int x=s1.top();
  	s1.pop();
  	transfer(s1,s2,n-i-1);
  	
  	s1.push(x);
  	
  	transfer(s2,s1,n-i-1);
  	
   }
	
}

int main()
{

  stack<int> s1;
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  
  reverseStack(s1);
  while(s1.empty()==false)
  {
  	cout<<s1.top()<<" ";
  	s1.pop();
  }
  return 0;
}

