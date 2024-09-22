#include <stdio.h>
int main () {
    char s1_name[100];
    char s2_name[100];
    char s3_name[100];
    char s4_name[100];
    char s5_name[100];
    char s6_name[100];
    char s7_name[100];
    int s1_num;
    int s2_num;
    int s3_num;
    int s4_num;
    int s5_num;
    int s6_num;
    int s7_num;

    scanf("%s %d %s %d %s %d %s %d %s %d %s %d %s %d", s1_name, &s1_num, s2_name, &s2_num, s3_name, &s3_num, s4_name, &s4_num, s5_name, &s5_num, s6_name, &s6_num, s7_name, &s7_num);

    if(s1_num > s2_num && s1_num > s3_num && s1_num > s4_num && s1_num > s5_num && s1_num > s6_num && s1_num > s7_num) {
        printf("%s", s1_name);
    } else if(s2_num > s1_num && s2_num > s3_num && s2_num > s4_num && s2_num > s5_num && s2_num > s6_num && s2_num > s7_num) {
        printf("%s", s2_name);
    } else if(s3_num > s1_num && s3_num > s2_num && s3_num > s4_num && s3_num > s5_num && s3_num > s6_num && s3_num > s7_num) {
        printf("%s", s3_name);
    } else if(s4_num > s1_num && s4_num > s2_num && s4_num > s3_num && s4_num > s5_num && s4_num > s6_num && s4_num > s7_num) {
        printf("%s", s4_name);
    } else if(s5_num > s1_num && s5_num > s2_num && s5_num > s3_num && s5_num > s4_num && s5_num > s6_num && s5_num > s7_num) {
        printf("%s", s5_name);
    } else if(s6_num > s1_num && s6_num > s2_num && s6_num > s3_num && s6_num > s4_num && s6_num > s5_num && s6_num > s7_num) {
        printf("%s", s6_name);
    } else if(s7_num > s1_num && s7_num > s2_num && s7_num > s3_num && s7_num > s4_num && s7_num > s5_num && s7_num > s6_num) {
        printf("%s", s7_name);
    }
    
}