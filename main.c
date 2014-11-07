#include <stdio.h>
#include <string.h>
#define str 100
#define res 100
int max(int num1, int num2) 
{
   int result;
   if (num1 > num2)
      result = num1;
   else
      result = num2;
   return result; 
}
int main(){
	char a[str],b[str];
	int total[str][str];
	int n[res];
	printf("\033[31;43m \n--Enter string a: \033[0m");
    scanf("%s",&a);
	printf("\033[31;43m \n--Enter string b: \033[0m");
    scanf("%s",&b);
	printf("\033[31;43m --String a: %s \033[0m\n",a);
	printf("\033[31;43m --String b: %s \033[0m\n",b);
#if 1
    memset(total,0,sizeof(total));
    int str1=strlen(a);
    int str2=strlen(b);
    int i,j;
    for(i=1;i<=str1;++i){
		for(j=1;j<=str2;++j){
			if(a[i-1]==b[j-1]){
				total[i][j]=total[i-1][j-1]+1;
			}
			else{
				total[i][j]=max(total[i-1][j],total[i][j-1]);
			}
		}
	}
	printf("\033[31;43m -->Result: %d \033[0m\n",total[str1][str2]);
    //printf("\n Result: %d \n",total[str1][str2]); 
#endif	
    return 0;    
}

