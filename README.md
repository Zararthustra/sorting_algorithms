# sorting_algorithms

# Requirement

Allowed editors: vi, vim, emacs/n
All your files will be compiled on Ubuntu 14.04 LTS\n
Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called sort.h
Don’t forget to push your header file
All your header files should be include guarded
A list/array does not need to be sorted if its size is less than 2.

# Function
Bubble sort : Function that sorts an array of integers in ascending order using the Bubble sort algorithm
Insertion sort : Function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
Selection sort : Function that sorts an array of integers in ascending order using the Selection sort
Quick sort : Function that sorts an array of integers in ascending order using the Quick sort algorithm
Counting sort : Function that sorts an array of integers in ascending order using the Counting sort algorithm
Radix sort : Function that sorts an array of integers in ascending order using the Radix sort algorithm

# Prototype and file:
Check function
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
Sort function
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
int get_max_value(int *array, size_t size);
int *create_index_count_array(int *array, size_t size, int max_val);
int *copy_array(int *array, size_t size);
void radix_sort(int *array, size_t size);
void counting_sort_idx(int *array, size_t size, int exp);
int *copy_array_position(int *array, size_t size, int exp);

# Contributor :
Arthur Mayer(https://github.com/Zararthustra), Olivier Guyot (https://github.com/toyugo/)
