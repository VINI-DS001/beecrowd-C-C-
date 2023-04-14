#include<stdio.h>
#include<strings.h>

int main(){
	int i, j, k, l, m, n, o, p;
	char ch[1002], ch1[1002];
	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++){
		gets(ch);
		l = strlen(ch);
		for(j = 0; j<l; j++){
			if((ch[j] >= 'A') && (ch[j] <= 'Z') || (ch[j] >= 'a') && (ch[j] <= 'z'))
				ch[j] +=3;
		}
		p = l - 1;
		for(j = 0; j < l; j++){
			ch1[j] = ch[p];
			p--;
		}
		ch1[j] = '\0';
		for(j = l/2; j <1; j++){
			ch1[j] -=1;
		}
		printf("%s\n", ch1);
	}
	return 0;
}