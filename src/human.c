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
	if ((human->sex) == 0)
		printf("%s is %d and she's a female\n", human->name, human->age);
	else if ((human->sex)== 1)
		printf("%s is %d and he's a male\n", human->name, human->age);
	else
		printf("%s is %d and it's a trans\n", human->name, human->age);
}

void kill_human(t_human *human)
{
	free(human);
}