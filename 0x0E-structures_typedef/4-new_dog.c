#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;

	struct dog *n_dog = NULL;

	len1 = 0;
	while (name[len1] != '\0')
		len1++;
	len2 = 0;
	while (owner[len2] != '\0')
		len2++;
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(len1 + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(len2 + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= len2; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
