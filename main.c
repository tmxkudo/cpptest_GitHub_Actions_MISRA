#include "inc.h"

void sample ( void );
unsigned int sub ( bool_t b, unsigned int *p );

void sample ( void )
{
    unsigned int ret;
    unsigned int arg;
    sub ( false, &arg );
    if ( arg == 3U )
    {
    }
    return ;
}
