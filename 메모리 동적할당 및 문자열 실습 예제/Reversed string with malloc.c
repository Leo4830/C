#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *result, int i);
void printarray(char *result);


int main() {
	char *arr;
	char *result;
	int i;
	int str_num;

	printf("문자열의 길이를 입력해주세요:");
	scanf("%d", &str_num);

	arr = (char *)malloc(sizeof(char) * (str_num + 1));
  if(arr == '\0'){
      printf("Failing to allocation of memory\n");
      return 0;
  }
	printf("거꾸로 출력할 문자를 입력해주세요:");
	scanf("%s", arr);
	printf("Original string:%s\n", arr);

	result = (char *)malloc(sizeof(char) * (str_num + 1));
  if(result == '\0'){
      printf("Failing to allocation of memory");
      return 0;
  }
	memcpy(result, arr, (str_num + 1));

	for (i = 0; i < strlen(result) / 2; i++) {
		swap(result, i);
	}

	printf("Reversed string:");

	printarray(result);

	free(arr);
	free(result);
	return 0;
}

void swap(char *result, int i) {
	int temp = result[i];
	result[i] = result[strlen(result) - i - 1];
	result[strlen(result) - i - 1] = temp;
}

void printarray(char *result) {
	int i;
	for (i = 0; i < strlen(result); i++) {
		printf("%c", result[i]);
	}
	printf("\n");
}
