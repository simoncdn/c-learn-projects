#pragma once

typedef enum TaskStatus {
	NOT_STARTED = 0,
	IN_PROGRESS = 1,
	COMPLETED = 2,
} taskStatus_t;

typedef struct Task {
	int id;
	char title[50];
	char description[200];
	taskStatus_t status;
} task_t;

void addTask(task_t *tasks, task_t task, int *count);

void deleteTask(task_t *tasks, int index);

void getTask(task_t *tasks, int index);

void getTasks(task_t *tasks, int count);
