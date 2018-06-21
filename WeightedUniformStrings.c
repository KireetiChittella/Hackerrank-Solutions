#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   long long int i,j,hash[27]={0},count=0,z,k;
    char a[100000];
   scanf("%s",a);
    long long int n;
    scanf("%lld",&n);
    
    long long int num[n];
    for(i=0;i<n;i++)
        scanf("%lld",&num[i]);
   long long int len=strlen(a);
    for(i=0;i<len;i++)
    {
        count=0;
            if(hash[a[i]-'a']<=1)        
            hash[a[i]-'a']++;
        
            while(a[i]==a[i+1])
            {
                i++;
                count++;
            }
        if(count>=(hash[a[i]-'a']))
            hash[a[i]-'a']=count+1;
    }

    for(i=0;i<n;i++)
    { 
        for(int j=0;j<27;j++)
        {
            z=0;
            if(((num[i]%(j+1))==0)&&(hash[j]*(j+1))>=num[i])
            {
                z=1;
                printf("Yes\n");
                break;           
            }
            
        }
        if(z==0)
                printf("No\n");
    }
return 0;
}