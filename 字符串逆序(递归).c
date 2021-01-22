void reverse_string(char* string)
{
    int len = strlen(string);
    int tmp = *string;
    *string = *(string + len - 1);
    *(string + len - 1) = '\0';
    if (strlen(string + 1) > 1)
        reverse_string(string + 1);
    *(string + len - 1) = tmp;
}
int main()
{
    char arr[] = "abcd";
    reverse_string(arr);
    printf("%s\n", arr);
    system("pause");
    return 0;
}
