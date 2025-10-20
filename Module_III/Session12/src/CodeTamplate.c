#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define NUM_STUDENTS 2
#define FILENAME "students.dat"

// Debug mode - comment this line to turn off debug output
#define DEBUG_MODE

// Simple macro for error checking
#define CHECK_FILE(file) \
    if ((file) == NULL) { \
        printf("File error at line %d\n", __LINE__); \
        return 1; \
    }

typedef struct {
    char name[MAX_NAME_LENGTH + 1];
    unsigned int id;
    float average;
} Student;

int main() {
    FILE *file;
    Student students[NUM_STUDENTS];
    Student *readStudents;
    int i, studentCount;
    
    #ifdef DEBUG_MODE
    printf("=== DEBUG MODE ENABLED ===\n");
    printf("Starting program...\n");
    #endif

    // TODO: Initialize student data
    // Student 1: "Steven", ID: 120000, average: 25.5
    // Student 2: "Julia", ID: 120001, average: 28.5
    
    #ifdef DEBUG_MODE
    printf("Initial student data:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("  %s - %d - %.1f\n", 
               students[i].name, students[i].id, students[i].average);
    }
    #endif

    file = fopen(FILENAME, "wb");
    CHECK_FILE(file);
    
    // TODO: Write all students to the file
    
    fclose(file);
    
    #ifdef DEBUG_MODE
    printf("Data written to %s\n", FILENAME);
    #endif

    file = fopen(FILENAME, "rb");
    CHECK_FILE(file);
    
    // TODO: Find out how many students are in the file
    // Hint: Use fseek and ftell to get file size
    
    // TODO: Calculate studentCount from file size
    
    // TODO: Allocate memory for readStudents
    
    // TODO: Read all student data into readStudents
    
    fclose(file);
    
    #ifdef DEBUG_MODE
    printf("Read %d students from file\n", studentCount);
    #endif

    // Print final results
    printf("\nStudent Records:\n");
    for (i = 0; i < studentCount; i++) {
        printf("%s: ID %d, Average %.1f\n", 
               readStudents[i].name, readStudents[i].id, readStudents[i].average);
    }

    // Cleanup
    free(readStudents);
    
    #ifdef DEBUG_MODE
    printf("Program completed successfully!\n");
    #endif
    
    return 0;
}