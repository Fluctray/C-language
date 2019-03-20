#include <stdio.h>
void main() {
	void copy_string_a(char from[], char to[]);
	char a[] = "I am a good student.";
	char b[] = "You are a good teacher.";
	printf("a : %s\nb : %s\n", a, b);
	printf("copy string a to string b:\n");
	copy_string_a(a, b);
	printf("a : %s\nnew b : %s\n", a, b);
}

void copy_string_a(char from[], char to[]) {
	int i = 0;
	while (from[i] != '\0') {
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}
