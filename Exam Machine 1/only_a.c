/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

void only_a(char a)
{
    write(1, &a, 1);
}

int     main()
{
    only_a('a');
    return 0;
}
