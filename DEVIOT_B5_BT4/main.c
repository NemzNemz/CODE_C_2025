#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev_string(char str[]) {
    int start = 0, end = strlen(str) - 1;
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char text[] = "Hello may ban";
    char rev[100] = "";
    char temp[50];
    int i = strlen(text) - 1, j;

    while (i >= 0) {
        j = 0;
        // Lấy từng từ từ cuối chuỗi
        while (i >= 0 && text[i] != ' ') {
            temp[j++] = text[i--];
        }
        temp[j] = '\0';  // Kết thúc chuỗi tạm
        rev_string(temp);  // Đảo ngược từ
        strcat(rev, temp);  // Nối vào chuỗi kết quả
        strcat(rev, " ");   // Thêm khoảng trắng
        i--;  // Bỏ qua khoảng trắng
    }

    printf("Chuoi ban dau: %s\n", text);
    printf("Chuoi dao la: %s\n", rev);
    return 0;
}
