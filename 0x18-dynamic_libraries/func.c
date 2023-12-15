#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: character.
 * Return: c
 */
int _putchar(char c) {
    return (write(1, &c, 1));
}

/**
 * _islower - checks for a lowercase character
 * @c: character.
 * Return: c
 */
int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - checks for an alphabetic character
 * @c: character.
 * Return: c
 */
int _isalpha(int c) {
    return (_islower(c) || _isupper(c));
}

/**
 * _isupper - checks for an uppercase character
 * @c: character.
 * Return: c
 */
int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

/**
 * _abs - computes the absolute value of an integer
 * @n: number
 * Return: n
 */
int _abs(int n) {
    return ((n < 0) ? -n : n);
}

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: char
 * Return: n
 */
int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return (length);
}

/**
 * _puts - writes a string to stdout
 * @s: string
 */
void _puts(char *s) {
    while (*s != '\0') {
        _putchar(*s);
        s++;
    }
}

/**
 *  _strcpy - copies a string to another
 * @dest: destination
 * @src: source.
 * Return: new string
 */
char *_strcpy(char *dest, char *src) {
    char *copy = dest;
    while ((*dest++ = *src++))
        ;
    return (copy);
}

/**
 * _atoi - converts a string to an integer
 * @s: string.
 * Return: number
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;

    if (*s == '-' || *s == '+') {
        sign = (*s++ == '-') ? -1 : 1;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return (sign * result);
}

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: new string
 */
char *_strcat(char *dest, char *src) {
    char *copy = dest;
    while (*dest)
        dest++;
    while ((*dest++ = *src++))
        ;
    return (copy);
}

/**
 * _strncat - concatenates n characters from one string to another
 * @dest: destination.
 * @src: source.
 * @n: length
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n) {
    char *copy = dest;
    while (*dest)
        dest++;
    while (n-- > 0 && (*dest++ = *src++))
        ;
    *dest = '\0';
    return (copy);
}

/**
 * _strncpy - copies up to n characters from one string to another
 * @dest: destination
 * @src: source.
 * @n: length.
 * Return: new string.
 */
char *_strncpy(char *dest, char *src, int n) {
    char *copy = dest;
    while (n-- > 0 && (*dest++ = *src++))
        ;
    while (n-- > 0)
        *dest++ = '\0';
    return (copy);
}

/**
 * _strcmp - compares two strings
 * @s1: first
 * @s2: second.
 * Return: length
 */
int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * _memset - fills memory with a constant byte
 * @s: ded
 * @b: dede
 * @n: dede
 * Return: new
 */
char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n-- > 0) {
        *ptr++ = b;
    }
    return s;
}


/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination
 * @src: source.
 * @n: length.
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    char *d = dest;
    const char *s = src;
    while (n-- > 0) {
        *d++ = *s++;
    }
    return (dest);
}

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char
 * Return: new string.
 */
char *_strchr(char *s, char c) {
    while (*s != '\0' && *s != c) {
        s++;
    }
    return ((*s == c) ? s : NULL);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string.
 * @accept: accept.
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && strchr(accept, *s) != NULL) {
        count++;
        s++;
    }
    return (count);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: accept
 * Return: new string
 */
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (strchr(accept, *s) != NULL) {
            return s;
        }
        s++;
    }
    return (NULL);
}

/**
 * _strstr - locates a substring in a string
 * @haystack: string
 * @needle: sub string
 * Return: new string.
 */
char *_strstr(char *haystack, char *needle) {
    size_t needle_len = strlen(needle);
    while (*haystack != '\0') {
        if (strncmp(haystack, needle, needle_len) == 0) {
            return haystack;
        }
        haystack++;
    }
    return (NULL);
}

