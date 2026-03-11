#include<stdio.h>
#include<stdbool.h>

// Function Declarations :
bool solution(const char *str1,const char *str2,const char *str3);

// Main Function :
int main()
{
    char string1[101],string2[101],string3[202]; // Declaring String Variables
    scanf("%100s%100s%201s",string1,string2,string3); // Reading Strings
    printf("%s",(solution(string1,string2,string3)==true)?"YES":"NO"); // Displaying Result
    return 0;
}

// Function Definitions :
bool solution(const char *str1,const char *str2,const char *str3)
{
    int len_dif=0,freq[256]={0};
    for(int i=0;str1[i]!='\0';i++){ len_dif++; freq[(unsigned char)str1[i]]++; }
    for(int i=0;str2[i]!='\0';i++){ len_dif++; freq[(unsigned char)str2[i]]++; }
    for(int i=0;str3[i]!='\0';i++){ len_dif--; freq[(unsigned char)str3[i]]--; }
    if(len_dif!=0) return false;
    for(int i=0;i<256;i++)
        if(freq[i]!=0)
            return false;
    return true;
}