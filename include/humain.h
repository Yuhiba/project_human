#ifndef HUMAIN_H_
#define HUMAIN_H_

typedef struct humain{
	int		age;
	int 	sex;
	char 	*name;
}t_humain;

t_humain *create_humain(int, int, char*);
print_humain(t_humain *);
void kill_humain(t_humain *);

#endif