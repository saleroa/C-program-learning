#include<stdio.h>
#include<string.h>

void strnins(char s[],char t[], int n);


// int main(void) {
// 	char s[]={'1','2','3','7','8','9',''}, t[]={'4','5','6'};
// 	int n=3;
// 	strnins(s, t, n);
// 	return 0;
// }

int main(void) {
	char s [] = {"123789"};
    char t [] = {"456"};
    int n = 3;
    strnins(s,t,n);
    return 0;

}

void strnins(char s[],char t[], int n){
    char res[strlen(s)+strlen(t)+1];
    for(int i=0;i<=strlen(res);i++){
        if(i<n){
            res[i] = s[i];
        }else if (i >= n && i < n+strlen(t)){
            res[i] = t[i-n];
        }else if(i >= n+strlen(t)){
            res[i] = s[i-strlen(t)];
        }
    }
  printf("%s\n", res);
}