int string(char **p) {
    
    printf("문자열을 입력하세요 : ");

    fgets(*q, flag, stdin);

    return 1;
}


int main() {
    int num;

    printf("글자 개수를 입력하세요");
    scanf_s("%d", &num);

    char* p;

    p = (char*)malloc(sizeof(char) * num);

    string(&p, num);
}