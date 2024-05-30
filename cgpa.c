#include <stdio.h>

#define MAX_COURSES 10

// Structure to represent a course
typedef struct {
    char courseCode[20];
    int creditHours;
    float grade;
} Course;

// Function to calculate CGPA
float calculateCGPA(Course courses[], int numCourses) {
    float totalGradePoints = 0;
    int totalCreditHours = 0;

    // Calculate total grade points and credit hours
    for (int i = 0; i < numCourses; i++) {
        totalGradePoints += courses[i].grade * courses[i].creditHours;
        totalCreditHours += courses[i].creditHours;
    }

    // Calculate CGPA
    return totalGradePoints / totalCreditHours;
}

int main() {
    Course courses[MAX_COURSES];
    int numCourses;

     //Input number of courses
    printf("Enter the number of courses: ");
   scanf("%d", &numCourses);

    // Input course details
    for (int i = 0; i < numCourses; i++) {
        printf("\nCourse %d:\n", i + 1);
        printf("Enter course code: ");
        scanf("%s", courses[i].courseCode);
        printf("Enter credit hours: ");
        scanf("%d", &courses[i].creditHours);
        printf("Enter grade (0-10 scale): ");
        scanf("%f", &courses[i].grade);
  }

    // Calculate and print CGPA
    float cgpa = calculateCGPA(courses, numCourses);
    printf("\nYour CGPA is: %.2f\n", cgpa);

    return 0;
}
