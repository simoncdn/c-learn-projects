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

	task_t foo = {
		1,
		"first task",
		"I'm the description of the task",
		0
	};

	printf("Hello, This is your To-do app!\n");

	while(1){
		printf("\n");
		printf("What do you want to do ?\n");
		printf(" - Add a task (0)\n");
		printf(" - Delete a task (1)\n");
		printf(" - List your tasks (2)\n");
		printf(" - Exit (3)\n");

		printf("Enter your choice: ");
		scanf("%d", &input);

		switch(input){
			case ADD:
				addTask(tasks, foo, &task_count);	
				printf("Your task: %s\n", foo.title);
				printf("has been added to the list!\n");
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
