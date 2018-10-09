#!/usr/bin/python3
'''
    this module contains the function get_info
'''
import json
import requests


if __name__ == "__main__":
    filename = 'todo_all_employees.json'
    json_file = open(filename, 'w')
    json_tasks = {}
    users = requests.get('https://jsonplaceholder.typicode.com/users').json()
    todo = requests.get('https://jsonplaceholder.typicode.com/todos').json()
    for user in users:
        name = user['username']
        all_tasks = [
            {'username': name, 'task': task['title'],
             'completed': task['completed']} for task in todo
            if task['userId'] == user['id']]
        json_tasks[user['id']] = all_tasks
    json.dump(json_tasks, json_file)
