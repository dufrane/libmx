#include "libmx.h"

int mx_count(const char *s, char c);

char **mx_strsplit(const char *s, char c) {
    int word_length = 0;
    int i = 0;
    char **arr = NULL;

    if (s) {
        arr = (char **)malloc((mx_count_words(s, c) + 1) * sizeof(char *));
    while ((*s) && (*s != '\0')) {
        if (*s != c) {
            word_length = mx_count(s, c);
            arr[i] = mx_strndup(s, word_length);
            s += word_length;
            i++;
            continue;
        }
        s++;
    }
    arr[i] = NULL;
    }
    return arr;
}

int mx_count(const char *s, char c) {
	int count = 0;

	while (s[count] != c && s[count])
		count++;
	return count;
}
