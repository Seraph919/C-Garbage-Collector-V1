#ifndef GARBAGE_COLLECTOR_H
#define GARBAGE_COLLECTOR_H

# include <stdio.h>
#include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <string.h>
# include <sys/time.h>
# include <pthread.h>
# include <semaphore.h>


typedef struct t_garbage
{
	void					*allocated;
	struct t_garbage		*next;
}							t_garbage;

typedef struct s_data{
	t_garbage **garbage;
	bool	boolean;
}	t_data;

t_data	*data();
void		*maloc(size_t size);

#endif