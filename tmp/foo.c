#include <stdio.h>

#include "minmea.h"

main()
{
    printf("%d\n", minmea_check("$GPTXT,01,01,02,ANTSTATUS=INIT*25\n", true));
}
