#include <linux/module.h>

#ifdef __GENKSYMS__
#undef notrace
#define notrace
#endif

unsigned int notrace __bswapsi2(unsigned int u)
{
	return (((u) & 0xff000000) >> 24) |
	       (((u) & 0x00ff0000) >>  8) |
	       (((u) & 0x0000ff00) <<  8) |
	       (((u) & 0x000000ff) << 24);
}

EXPORT_SYMBOL(__bswapsi2);
