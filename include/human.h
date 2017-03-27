#ifndef HUMAIN_H_
#define HUMAIN_H_

typedef struct human{
	int		age;
	int 	sex;
	char 	*name;
} t_human;

t_human *create_human(int, int, char *);
void print_human(t_human *);
void kill_human(t_human *);

#endif
