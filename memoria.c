#include <stdio.h>
int main(){
  int i=0;
  int * o;
  int m[]={2,4,5,6,7};
  o=&m[0];
  for (i=0;i<5;i++){
    printf("%d\n",*(o+i) );
  }
  return 0;
}
#endif
