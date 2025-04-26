#include "../include/task.h"
#include <stdio.h>

void addTask(task_t *tasks, task_t task, int *count){
	tasks[*count] = task;
	(*count)++;
};

void getTasks(task_t *tasks, int count){
	printf("Your tasks (%d):\n", count);

	for(int i = 0; i < count; i++){
		task_t currentTask = tasks[i];
		printf(" - %s\n", currentTask.title);
		printf(" %s\n", currentTask.description);
		printf(" %d\n", currentTask.status);
		printf("\n");
	}
}
