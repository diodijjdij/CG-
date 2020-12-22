#include<iostream>
using namespace std;
int main(){
	//输入n个猴子，冲突对数，输入各自的技能
	int n,k;
	cin>>n>>k;
	int jineng[n+1];
	for(int a=1;a<n+1;a++)
	{
		cin>>jineng[a];
	 } 
	//输入冲突对数
	int chongtu[k][2];
	for(int b=0;b<k;b++)
	{
		for(int c=0;c<2;c++)
		{
			cin>>chongtu[b][c];
		}
	} 
	 //要输出导师个数 定义一个数组用来存,并将其初始化 
	 int daoshi[n+1];
	 for(int d=1;d<n+1;d++)
	 {
	 	daoshi[d]=0;
	 }
	 //首先判断初级导师
	 for(int e=1;e<n+1;e++)
	 {
	 	for(int f=1;f<n+1;f++)
	 	{
		 if(jineng[e]>jineng[f])
		 daoshi[e]++;
		} 
	}
	//判断完之后,再进行减 
	for(int g=0;g<k;g++)
	{
		if(jineng[chongtu[g][0]]>jineng[chongtu[g][1]])
		{
			daoshi[chongtu[g][0]]--;
		}
		else if(jineng[chongtu[g][0]]<jineng[chongtu[g][1]])
		{
			daoshi[chongtu[g][1]]--;
		}
	 } 
	for(int h=1;h<n+1;h++)
	{
		cout<<daoshi[h]<<" ";
	}
}
