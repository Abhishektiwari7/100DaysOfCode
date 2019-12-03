#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{ const char* str="abhishek is a good boy";
  char* str1;
 int len,i,j;
strcpy(str1,str);
  len=strlen(str);
for(i=0;i<len;i++)
{ if((str1[i]=='a')||(str1[i]=='A')||(str1[i]=='i')||(str1[i]=='I')||(str1[i]='o')||(str1[i]=='O')||(str1[i]=='u')||(str1[i]=='U')||(str1[i]=='e')||(str1[i]=='E'))
  {for(j=i;j<len;j++)
{str1[j]=str1[j+1];}
    len--;}
}
cout<<str1;
return (0);
}