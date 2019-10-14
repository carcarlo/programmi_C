#include <stdio.h>

int main(){
    int x[5];
        x[0]=12;
        x[1]=13;
        x[2]=14;

    printf("%p\n",(void*)x);
    printf("%p\n",(void*)&x);
	
	for( int i = 0; i < 8; i++ ){
      printf("value of x %d: %d\n", i, x[i]);
	  printf("%p\n",&x[i]);
   }

return 0;
}

/*
0x7fffd67f0910
0x7fffd67f0910

value of x 0: 12
0x7fffd67f0910
value of x 1: 13
0x7fffd67f0914
value of x 2: 14
0x7fffd67f0918
value of x 3: 32619
0x7fffd67f091c
value of x 4: -696317424
0x7fffd67f0920
*/