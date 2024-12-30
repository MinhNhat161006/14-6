#include <stdio.h>
#include <ctype.h> // Thư viện hỗ trợ kiểm tra ký tự

int main() {
    char str[] = "Hello World 123!"; // Khai báo và gán giá trị cho chuỗi
    int count = 0;

    printf("Chuỗi đã khai báo: %s\n", str);

    // Duyệt qua từng ký tự trong chuỗi và đếm số ký tự là chữ cái
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { // Kiểm tra ký tự có phải là chữ cái hay không
            count++;
        }
    }

    printf("Số ký tự là chữ cái trong chuỗi: %d\n", count);

    return 0;
}
