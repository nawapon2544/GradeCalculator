#include <stdio.h>

int main() {
    int score;
    char grade;

    // รับคะแนนจากผู้ใช้
    printf("กรุณาป้อนคะแนนของคุณ: ");
    scanf("%d", &score);

    // ตรวจสอบคะแนนและกำหนดเกรด
    if (score >= 80) {
        grade = 'A';
    } else if (score >= 70) {
        grade = 'B';
    } else if (score >= 60) {
        grade = 'C';
    } else if (score >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // แสดงผลลัพธ์
    printf("คุณได้เกรด: %c\n", grade);

    return 0;
}
