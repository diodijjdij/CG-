/*【问题描述】

      某班有 n 个学生，下课铃一响，大家都去饮水机喝水，没有两个人能同时使用饮水机，因此，同学们必须排队取水。

      第 i 个学生在第 li 秒来到队尾，如果同一时刻有多个学生来到队伍，则编号大的排在编号小的后面，排在队伍最前面的学生将花1秒的时间取水，然后离开，其他人在后面排队。如果到第 ri 秒学生 i 还没有取到水且他前面还有人，他将不打水而直接离开队伍。

       编程求每个学生取到水的时间。
【输入形式】

       输入第一行为一个整数T，表示测试用例的个数。

       接下来是T个测试用例，每个用例的第一行为一个整数 n，表示学生数，接下来的 n 行，每行两个整数 li 和 ri ，分别表示第 i 个同学在第 li 秒来到队伍末尾，如果第 ri 秒还没取到水则离开队伍的时间。
【输出形式】

       对于每个测试用例，输出 n 个整数，表示第 i 个学生取到水的秒数，如果没取到水则为0
【样例输入】

2
2
1 3
1 4
3
1 5
1 1
2 3
【样例输出】

1 2 
1 0 2
【样例说明】
1
6
2 2
2 3
3 5
4 4
4 4
4 4
【评分标准】*/
#include<iostream>
using namespace std;
int main(){
	int T=0,time=0;
	cin>>T;
//	cout<<T<<" "; 
	for(int a=0;a<T;a++)
	{
		int n=0;
		cin>>n;
//		cout<<n<<" ";
		int l[n],r[n],get[n];
		for(int b=0;b<n;b++)
		{
			cin>>l[b]>>r[b];
		}
		/*for(int b=0;b<n;b++)
		{
			cout<<l[b]<<" "<<r[b]<<" ";
		}*/
		//判断
		time=l[0]+1;
		get[0]=l[0];
		for(int c=1;c<n;c++)
		{
			if(l[c]>=time||(l[c]<time&&time<=r[c]))
			{
				get[c]=time;
				time+=1;
			}
			else if(l[c]<time&&time>r[c])
			{
				get[c]=0;
			}
		}
		for(int d=0;d<n;d++)
		cout<<get[d]<<" "; 
		cout<<"\n";
	}
} 

//总结与反思：
//总结：else if 与if 的连用，如果连用两个if要确保两个条件之间不会造成彼此的冲突
//反思：还是思路不清晰的问题 
