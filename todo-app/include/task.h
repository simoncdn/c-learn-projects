#pragma once

typedef enum TaskStatus {
	NOT_STARTED = 0,
	IN_PROGRESS = 1,
	COMPLETED = 2,
} taskStatus_t;

typedef struct Task {
	int id;
	char title[100];
	char description[500];
	taskStatus_t status;
} task_t;

void addTask(task_t *tasks, int *count);

void deleteTask(task_t *tasks, int *count);

void getTask(task_t *tasks, int index);

void getTasks(task_t *tasks, int count);
