# Warm Up   

## OBJECTIVES   
   * Review previous concepts   
   * Master binary trees   
   * Review both Python and C syntax   

## REQUIREMENTS   

### PYTHON SCRIPT REQUIREMENTS  
   * the first line of all files should be exactly `#!/usr/bin/python3`   
   * all code should use the `PEP8` style (version 1.7.*)   
   * all files must be executable   
   * all files will be interpreted/compiled on Ubuntu 14.04 LTS using `python3` (version 3.4.3)   
   * all modules should have documentation `python3 -c 'print(__import__("my_module").__doc__)'`   
   * all functions (inside and outside of classes) should have documentation `python3 -c 'print(__import__("my_module").my_function.__doc__)'`   

### C REQUIREMENTS  
   * all files will be compiled on Ubuntu 14.04 LTS
   * files will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Wextra` `-Werror` and `-pedantic`
   * all code should use the `Betty` style
   * no more than 5 functions per file

## EXERCISES   

### MANDATORY   

**[0-binary.c](0-binary.c)** - Write a function that searches for a value in a sorted array of integers using the Binary search algorithm   
Prototype: `int binary_search(int *array, size_t size, int value);`   

**[1-dictionary_of_list_of_dictionaries.py](1-dictionary_of_list_of_dictionaries.py)** - Extend an existing Python script to export data in JSON format    

**[2-binary_tree_is_full.c](2-binary_tree_is_full.c)** - Write a function that checks if a binary tree is full   
Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`   

### ADVANCED   

**[0-slide_line.c](0-slide_line.c)** - Given an array of integers, slide and merge it to the left or right.    
Prototype: `int slide_line(int *line, size_t size, int direction);`   
