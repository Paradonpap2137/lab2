#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int x = a>b ? a : b;   // max(a,b)
    int y = a>b ? b : a;   // min(a,b)
    int u = c>d ? c : d;   // max(c,d)
    int v = c>d ? d : c;   // min(c,d)
    int second = (x>u ? u : x) > (y>v ? y : v)
                 ? (x>u ? u : x) : (y>v ? y : v);
    printf("%d", second);
    return 0;
}
