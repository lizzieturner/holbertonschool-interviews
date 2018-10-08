#!/usr/bin/python3
'''
    this module contains the function get_info
'''
import json
import requests


def get_info():
    '''
        returns all tasks for all employees in JSON format
    '''
    filename = 'todo_all_employees.json'
    json_file = open(filename, 'w')
    i = 1
    while i < 11:
        user_id = i
        user = requests.get('https://jsonplaceholder.typicode.com/users/{}'
                            .format(user_id)).json()
        todo = requests.get(
            'https://jsonplaceholder.typicode.com/todos?userId={}'
            .format(user_id)).json()
        name = user.get('username')
        all_tasks = []
        for task in todo:
            current = {}
            current['task'] = task.get('title')
            current['completed'] = task.get('completed')
            current['username'] = name
            all_tasks.append(current)
        json_tasks = {}
        json_tasks[user_id] = all_tasks
        json.dump(json_tasks, json_file)
        i += 1


if __name__ == "__main__":
    get_info()
