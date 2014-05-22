#include <stdio.h>

int rec2( int X, int n ) {
  if( X == 0 )
    return n;
  
  int Y;
  scanf("%d", &Y);

  if( Y > 0 )
    n += Y*Y;

  return rec2( X-1, n );
}

void rec( int N ) {
  if( N == 0 )
    return ;
  
  int X;
  scanf("%d", &X);
  printf("%d\n", rec2( X, 0 ) );
  
  rec( N-1 );
}

int main( void ) {
  int N;
  scanf("%d", &N);
  rec( N );
  return 0;
}
