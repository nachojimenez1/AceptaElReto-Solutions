#include <cstdio>
int main(){ long long C; int n;
  while(scanf("%lld %d",&C,&n)==2){
    long long d[8]; for(int i=0;i<n;i++) scanf("%lld",&d[i]);
    bool ok=false;
    for(int m=0;m<(1<<n)&&!ok;m++){
      long long a=0,b=0;
      for(int i=0;i<n;i++) (m>>i&1 ? a : b) += d[i];
      if(a<=C && b<=C) ok=true;
    }
    puts(ok?"SI":"NO");
  }
}$