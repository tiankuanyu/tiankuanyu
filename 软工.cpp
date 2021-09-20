#include<bits/stdc++.h>
using namespace std;
int main() 
{

    fstream fin;
    int totalnum=0;char ch;
    int panduan(char ch);
    fin.open("C:\\c.txt");
     string arr[100000];
     char temp[100];
    int i=0,j=0;
    while (fin.get(ch))
	 {
	 	
	 	if(panduan(ch)==1)//如果是字母则存入临时字符数组 
	 	{
	 		 temp[i]=ch;
	 		 i++;
		}
		if(ch==' '||ch=='\n'||ch=='.'||ch=='>'||ch=='<'||ch=='{'||ch=='(')//分隔符判段 
		{
			arr[j]=temp;//存入字符串数组中 
			for(int ii=0;ii<100;ii++)//避免重复使用，清零 
			{
				temp[ii]='\0';
			}
			i=0;	
			j++;     
		}
     }
     for(int f3=0;f3<j;f3++)
     {
     	cout<<arr[f3]<<endl;
	 }
     totalnum=0;
    int switchnum=0;
	string mp[33];//set an array to save the key word"s number
    mp[1]="auto";mp[2]="break";mp[3]="case";mp[4]="char";
	mp[5]="const";mp[6]="continue";mp[7]="default";mp[8]="do";
	mp[9]="double";mp[10]="else";mp[11]="enum";mp[12]="float";
	mp[13]="for";mp[14]="goto";mp[15]="if";mp[16]="int";
	mp[17]="long";mp[18]="register";mp[19]="return";mp[20]="short";
	mp[21]="signed";mp[22]="sizeof";mp[23]="static";mp[24]="struct";
	mp[25]="switch";mp[26]="typedef";mp[27]="union";mp[28]="unsigned";
	mp[29]="void";mp[30]="volatile";mp[31]="while";mp[32]="extern";
	for(int f1=0;f1<j;f1++)
	{
		for(int f2=1;f2<=32;f2++)
		{
			int cmpnum=mp[f2].compare(arr[f1]);
			if(cmpnum==0)
			{
				totalnum++;
			}	
		    
		}
	}
	cout<<totalnum<<endl;
	int fswitch=0;
		for(int f1=0;f1<j;f1++)
		{
		  int cmpswitchnum=arr[f1].compare(mp[25]);
		  if(cmpswitchnum==0) switchnum++; 
		}
		cout<<switchnum<<endl;
    int casenum=0;
    for(int f1=0;f1<j;f1++)
    {
    	int cmpswitchnum=arr[f1].compare(mp[25]);
    	if(cmpswitchnum==0) 
    	{
    		casenum=0;
    		for(int f2=f1+1;f2<j;f2++)
    		{
    			int cmpcasenum=arr[f2].compare(mp[3]);
    			int cmpswitchnum=arr[f2].compare(mp[25]);
    			if(cmpswitchnum==0)
				{
					cout<<casenum<<" ";
					break;
				}	
				if(cmpcasenum==0)   casenum++; 
				if(f2==j-1) cout<<casenum<<" ";
			}
		}
	}
	cout<<endl;
    fin.close();
}
int panduan(char ch)
{
	if('a'<=ch&&ch<='z')
	{
		return 1;
	}
	if('A'<=ch&&ch<='Z')
	{
			return 1;
	}
	else return 0;
}

