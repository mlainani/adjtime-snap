#include <stdio.h>
#include <sys/timex.h>
#include <unistd.h>

int main()
{
     int ret = 0;
     struct timex adj = {0};
     
     adj.modes = ADJ_OFFSET | ADJ_OFFSET_SINGLESHOT;
     adj.offset = 1000;

     while (1)
     {
	  if (adjtimex(&adj) == -1)
	  {
	       ret = -1;
	       break;
	  }
	  sleep(60);
     }
     return ret;
}
