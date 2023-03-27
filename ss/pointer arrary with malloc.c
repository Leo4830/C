#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#int main(){

  int i;
  char *arr[5];
  char *temp_arr;
  int Max_length;

  printf("입력할 문자열의 최대 길이를 입력해주세요:");
  scanf("%d", &Max_length);

  temp_arr = (char*)malloc((Max_length+1) * sizeof(char));

  for(i=0; i<5; i++){
    printf("문자열을 입력하세요:");
    scanf("%s", temp_arr);
    arr[i] = (char*)malloc(strlen(temp_arr)+1);

    memcpy(arr[i], temp_arr, strlen(temp_arr) + 1); // 수정된 부분
  }

  for(i=0; i<5; i++){
    printf("%s\n", arr[i]);
  }
  for(i=0; i<5; i++){
    free(arr[i]);
  }
  free(temp_arr);
  
  return 0;
}
