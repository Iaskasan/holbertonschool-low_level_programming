/**
 * free_dog - free a dog
 * @d: pointer to struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d->name);
		free(d->owner);
		free(d);
}
