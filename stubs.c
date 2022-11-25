#include <nl_types.h>

int catclose(nl_catd catalog)
{
	return 0;
}

nl_catd catopen(const char *name, int flag)
{
	return 0;
}

char *catgets(nl_catd catalog, int set_number, int message_number,
	      const char *message)
{
	return 0;
}

void *__dso_handle = (void *) &__dso_handle;
