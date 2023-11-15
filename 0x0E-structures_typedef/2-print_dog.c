#include <stdio.h>

struct dog 
{
	char *name;
	float age;
	char *breed;
};

void print_dog(struct dog *d) 
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
}

