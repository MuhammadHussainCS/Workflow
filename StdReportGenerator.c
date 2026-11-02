#include<stdio.h>
#include<string.h>

#define RESET "\033[0m"
#define TAB2 "\t\t"
#define BOLD "\033[1m"
#define ORANGE "\033[38;5;208m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define SEAGREEN "\033[38;5;29m"
#define GOLDEN "\033[38;5;220m"
#define RED "\033[31m"
#define SILVER "\033[38;5;7m"
#define BRONZE "\033[38;5;130m"
#define REDDISHBROWN "\033[38;5;166m"


const float MIN_ATTENDANCE = 75.0;
const float PASSING_MARKS = 50.0;
const float TOTAL_MARKS = 300.0;
const float ATTENDANCE_REQ_FOR_SCHOLARSHIP = 80.0; 
const float MARKS_REQ_FOR_SCHOLARSHIP = 85.0;

//user will give following things
char name[70];
char roll_no[15];
int age;
float pf_marks;
float calculus_marks;
float eng_marks;
float attendance_percentage;
int assignments_done;
int total_assignments;
float avg_marks;
float marks_obtained;

int main(){
    printf("========================================\n");
    printf(BOLD "\tSTUDENT ACADEMIC ADVISOR\n" RESET);
    printf("========================================\n\n");

    printf(ORANGE "Enter Student Name" TAB2 ": ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';

    printf("\nEnter Roll No\t" TAB2 ": ");
    fgets(roll_no,sizeof(roll_no),stdin);
    roll_no[strcspn(roll_no,"\n")] = '\0';

    printf("\nEnter Your Age\t" TAB2 ": ");
    scanf("%d", &age);

    printf("\nEnter Programming Marks" TAB2 ": ");
    scanf("%f", &pf_marks);

    printf("\nEnter Calculus Marks" TAB2 ": ");
    scanf("%f", &calculus_marks);

    printf("\nEnter English Marks" TAB2 ": ");
    scanf("%f", &eng_marks);

    printf("\nEnter Attendane (%%)" TAB2 ": ");
    scanf("%f" , &attendance_percentage);

    printf("\nEnter Assignments Done" TAB2 ": ");
    scanf("%d", &assignments_done);

    printf("\nEnter Total Assignments" TAB2 ": ");
    scanf("%d", &total_assignments);
    printf(RESET);

    marks_obtained = pf_marks + calculus_marks + eng_marks;
    avg_marks = marks_obtained / 3.0;
    printf("\n------------------------------------------------\n");
    printf(BOLD SEAGREEN "\t\tACADEMIC REPORT\n" RESET);
    printf("------------------------------------------------\n");

    printf(BOLD "Student Name" TAB2 ": %s\n", name);
    printf("Roll NUmber" TAB2 ": %s\n" , roll_no);
    printf("Age\t"  TAB2 ": %d\n" , age);
    printf("Marks Obtained" TAB2 ": %.2f\n" , marks_obtained);
    printf("Average Marks" TAB2 ": %.2f\n" RESET , avg_marks);


    if(avg_marks >= PASSING_MARKS) {
        printf(BOLD GREEN "Status\t" TAB2 ": PASS\n" RESET);
    } else {
        printf(BOLD RED "Status\t" TAB2 ": FAIL\n" RESET);
    }

    if(avg_marks>=85){
        printf(BOLD GOLDEN "Grade\t" TAB2 ": A\n" RESET);
    } else if(avg_marks>=70){
        printf(BOLD SILVER "Grade\t" TAB2 ": B\n" RESET);
    } else if(avg_marks>=60) {
        printf(BOLD BRONZE "Grade\t" TAB2 ": C\n" RESET);
    } else if(avg_marks>=50) {
        printf(BOLD REDDISHBROWN "Grade\t" TAB2 ": D\n" RESET);
    } else {
        printf(BOLD RED "Grade\t" TAB2 ": F\n" RESET);
    }

    if(avg_marks >= MARKS_REQ_FOR_SCHOLARSHIP && attendance_percentage>=ATTENDANCE_REQ_FOR_SCHOLARSHIP) {
        printf(BOLD GREEN "Scholarship" TAB2 ": Eligible\n" RESET);
    } else {
        printf(BOLD RED "Scholarship" TAB2 ": Not Eligible\n" RESET);
    }

    if(attendance_percentage < MIN_ATTENDANCE) {
        printf(BOLD RED "Warning" TAB2 ": Attendance is below the minimum requirement\n" RESET);
    } else {
        printf(BOLD BRONZE "Attendance" TAB2 ": Good\n" RESET);
    }

    if(avg_marks >= 85 && attendance_percentage >= 80) {
        printf(GOLDEN "Advice\t" TAB2 ": Excellent performance. Keep it up!\n" RESET);
    } else if(avg_marks >= 70 && attendance_percentage >= 75){
        printf(SILVER "Advice\t" TAB2 ": Good performance. Aim for an A.\n" RESET);
    } else {
        printf(RED "Advice\t" TAB2 ": You should improve your academic performance\n" RESET);
    }

   return 0;
}