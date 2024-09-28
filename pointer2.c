int main(){
    int age = 22;
    int *ptr = &age;
    int a =*ptr;

    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    
    return 0;
}
