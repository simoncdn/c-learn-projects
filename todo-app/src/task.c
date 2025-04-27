#include "../include/task.h"
#include <stdio.h>

void addTask(task_t *tasks, int *count){
	task_t task;
	int input;
	task.id = *count;

	while(1){
		printf("What's the title of your task?\n");
		input = scanf(" %[^\n]", task.title);
		if(input == 0){
			printf("Error: Invalid input. Please try again.\n");
			while(getchar() != '\n');
			continue;
		}

		printf("What's the description of your task?\n");
		input = scanf(" %[^\n]", task.description);
		if(input == 0){
			printf("Error: Invalid input. Please try again.\n");
			while(getchar() != '\n');
			continue;
		}

		printf("What's the status of your task?\n");
		printf(" - Not started (0)\n");
		printf(" - In progress (1)\n");
		printf(" - Completed (2)\n");
		input = scanf(" %d", &task.status);
		if(input == 0 || task.status < 0 || task.status > 2){
			printf("Error: Invalid input. Please try again.\n");
			while(getchar() != '\n');
			continue;
		}

		break;
	}


	tasks[*count] = task;
	(*count)++;

	printf("Great!\n");
	printf("Your task: %s, has beed added to the list!\n", task.title);
};

void deleteTask(task_t *tasks, int *count){
	int index;
	int input;
	task_t task_toDelete;
	task_t newTasks[100];

	printf("Enter the index of the task you want to delete: ");
	input = scanf("%d", &index);
	task_toDelete = tasks[index];

	if(input == 0 || index < 0 || index >= 100){
		printf("Error: Invalid index. Please try again.\n");
		return;
	}
	

	for(int i = index; i < *count; i++){
		task_t currentTask = tasks[i];

		if(currentTask.id == task_toDelete.id){
			continue;
		}

		newTasks[i] = currentTask;
	}

	tasks = newTasks;
	(*count)--;

	printf("Task %d has been deleted.\n", index);
}

void getTasks(task_t *tasks, int count){
	if(count == 0){
		printf("You have no tasks.\n");
		return;
	}

	printf("Your tasks (%d):\n", count);

	for(int i = 0; i < count; i++){
		task_t currentTask = tasks[i];
		printf("Task %d:\n", currentTask.id);
		printf(" Title: %s\n", currentTask.title);
		printf(" Description: %s\n", currentTask.description);
		printf(" Status: %d\n", currentTask.status);
		printf("\n");
	}
}
