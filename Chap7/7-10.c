#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int i,j,upper=0,lower=0,num=0,space=0,others=0,mark;
  char text[3][80];
  printf("请输入三行文字\n");
  for(i=0;i<=2;i++)gets(text[i]);
  for(i=0;i<=2;i++)
     {
       for(j=0;text[i][j]!='\0';j++)
          {
            mark=0;
            if(text[i][j]>=65&&text[i][j]<=90)
              {
                upper++;
                mark=1;
              } 
            if(text[i][j]>=97&&text[i][j]<=122)
              {
                lower++;
                mark=1;
              }
            if(text[i][j]>=48&&text[i][j]<=57)
              {
                num++;
                mark=1;
              }  
            if(text[i][j]==32)
              {
                space++;
                mark=1;
              }
            if(mark==0)others++;             
          }              
     }
  printf("其中，共有\n大写字母%d个\n小写字母%d个\n数字%d个\n空格%d个\n其他字符%d个\n",upper,lower,num,space,others);
  system("pause");
  return;     
}
