#include "main.h"
/**
 *string_nconcat - function that concatenates two strings
 *@nmemb: number of elements
 *@size: size of element
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
     void *ptr;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }

    ptr = malloc( nmemb * (sizeof(int)));


    if (ptr == NULL)
    {
        return (NULL);
    }

    return (ptr);
}
