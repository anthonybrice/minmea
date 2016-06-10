#include <stdio.h>

#include "minmea.h"

main()
{
    printf("%x", minmea_checksum("$GPTXT,01,01,02,ANTSTATUS=INIT*25\n"));
}
