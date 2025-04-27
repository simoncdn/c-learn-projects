#include <stdio.h>
#include "../include/task.h"

typedef enum Options {
	ADD,
	DELETE,
	GET_LIST,
	EXIT
} options_t;

int main(void){
	task_t tasks[100];
	int task_count = 0;
	int input;

	printf("Hello, This is your To-do app!\n");

	while(1){
		printf("\n");
		printf("What do you want to do ?\n");
		printf(" (0) - Add a task\n");
		printf(" (1) - Delete a task\n");
		printf(" (2) - List your tasks\n");
		printf(" (3) - Exit\n");

		printf("Enter your choice: ");
		scanf("%d", &input);

		switch(input){
			case ADD:
				addTask(tasks, &task_count);	
				break;
			case DELETE:
				deleteTask(tasks, &task_count);
				break;
			case GET_LIST:
				getTasks(tasks, task_count);
				break;
			case EXIT:
				printf("Goodbye!\n");
				return 0;
			default:
				printf("Error");
		}
	}

	return 0;
}
