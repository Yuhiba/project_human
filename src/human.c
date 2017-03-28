#include <stdlib.h>
#include <stdio.h>

#include "human.h"

t_human *create_human(int age, int sex, char *name)
{
	t_human *human = NULL;

	if((human = malloc(sizeof(*human))))
	{
		human->age = age;
		human->sex = sex;
		human->name = name;
	}
	return human;
}

void print_human(t_human *human)
{
  printf("%s is %d and ", human->name, human-age);

	if (human->sex == 0)
		printf("she's a female\n");
	else if (human->sex == 1)
		printf("he's a male\n");
	else
		printf("it's a trans\n");
}

void kill_human(t_human *human)
{
	free(human);
}
