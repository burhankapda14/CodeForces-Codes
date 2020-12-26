#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int cnt(char *s, char c) {
int l, i, j, k;

l = strlen(s);
j = -1;
for (i = 0; i < l; i++)
if (s[i] == c) {
j = i % 4;
break;
}
k = 0;
for (i = j; i < l; i += 4)
if (s[i] == '!')
k++;
return k;
}

int main() {
static char s[256];

scanf("%s", s);
printf("%d %d %d %d\n", cnt(s, 'R'), cnt(s, 'B'), cnt(s, 'Y'), cnt(s, 'G'));
return 0;
}