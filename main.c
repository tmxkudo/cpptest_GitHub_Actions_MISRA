#include "inc.h"

void sample ( void );
uint16_t sub ( bool_t b, uint16_t *p );

void sample ( void )
{
    uint16_t ret;
    uint16_t arg;
    ret = sub ( false, &arg );
    if ( (arg == 3U) && (ret == 0U) )
    {
    } 
    return ; 
}
