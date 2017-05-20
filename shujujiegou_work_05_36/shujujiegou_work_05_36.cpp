// shujujiegou_work_05_36.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
using std::vector;

int find_ancestor(int *parent,int p,int q)
{
	vector<int>v1, v2;
	v1.push_back(p);
	v2.push_back(q);
	while (parent[p] >= 0)
	{
		v1.push_back(parent[p]);
		p = parent[p];
	}
	while (parent[q] >= 0)
	{
		v1.push_back(parent[q]);
		q = parent[q];
	}
	int i = v1.size - 1, j = v2.size - 1;//因为下标从0开始
	while(v1[i]==v2[j]&&v1[i]!=0&&v2[j]!=0)
	{
		--i;
		--j;
	}
	if (i == 0)
	{
		if (v1[0] == v2[j])
		{
			return v1[0];
		}
		else
		{
			return v1[1];
		}
	}
	else if (j == 0)
	{
		if (v2[0] == v1[i])
		{
			return v2[0];
		}
		else
		{
			return v2[1];
		}
	}
	else
	{
		return v1[i + 1];
	}
}


int main()
{
//调用find_ancestor
    return 0;
}

