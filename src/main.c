#include "human.h"

int main()
{
	t_human *human1;
	t_human *human2;
	t_human *human3;

	human1 = create_human(26, 0, "Elodie");
	human2 = create_human(25, 1, "Thomas");
	human3 = create_human(12, 2, "Morty");

	print_human(human1);
	print_human(human2);
	print_human(human3);

	kill_human(human1);
	kill_human(human2);
	kill_human(human3);

	return 0;
}
