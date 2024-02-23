
#include <stdio.h>
int main()
{
    long long int a,b;
    int T,j;
    scanf ( "%d", &T );
    for( j=1 ; j<=T ; j++ )
    {
        scanf ( "%lld %lld", &a, &b );
        if ( a<b )
        {
            printf ( "<\n" );
        }
        else if ( a>b )
        {
            printf ( ">\n" );
        }
        else if ( a==b )
        {
            printf ( "=\n" );
        }
    }
    return 0;
}
