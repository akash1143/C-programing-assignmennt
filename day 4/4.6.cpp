
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book {
    char title[50];
    char author[50];
    int year;
};
struct book library[100];
int num_books = 0; 
int main() {
    int choice;
    do {
        printf("\n\n");
        printf("Library Management System\n");
        printf("-------------------------\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
                if (num_books == 100) {
                    printf("Error: Library is full. Cannot add more books.\n");
                } else {
                    printf("Enter title: ");
                    scanf("%s", library[num_books].title);
                    printf("Enter author: ");
                    scanf("%s", library[num_books].author);
                    printf("Enter year published: ");
                    scanf("%d", &library[num_books].year);
                    num_books++;
                    printf("Book added successfully.\n");
                }
                break;
                if (num_books == 0) {
                    printf("Error: Library is empty. Cannot display books.\n");
                } else {
                    char title[50];
                    printf("Enter title: ");
                    scanf("%s", title);
                    int i;
                    for (i = 0; i < num_books; i++) {
                        if (strcmp(title, library[i].title) == 0) {
                            printf("Title: %s\n", library[i].title);
                            printf("Author: %s\n", library[i].author);
                            printf("Year published: %d\n", library[i].year);
                            break;
                        }
                    }
                    if (i == num_books) {
                        printf("Error: Book not found.\n");
                    }
                }
                break;
                if (num_books == 0) {
                    printf("Error: Library is empty. Cannot list books.\n");
                } else {
                    char author[50];
                    printf("Enter author: ");
                    scanf("%s", author);
                    int i, count = 0;
                    for (i = 0; i < num_books; i++) {
                        if (strcmp(author, library[i].author) == 0) {
                            printf("%s\n", library[i].title);
                            count++;
                        }
                    }
                    if (count == 0) {
                        printf("Error: No books found.\n");
                    }
                }
                break;
                printf("Number of books in library: %d\n", num_books);
                break;
            
                printf("Exiting program...\n");
                break;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    
    return 0;
}
