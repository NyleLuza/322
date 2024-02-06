#include <stdio.h>
#include <stdlib.h>
// Define structures and global variables
int* arr;

struct Pcb{
    int parent;
    int first;
    int older;
    int younger;
};
//*************************************************************
void print() {
	// Declare local variables
	// For each existing PCB, print valid fields
	return;
}
//*************************************************************
void enter_parameters() {
    int size; // Declare local variables
    struct Pcb p;
    printf("Enter maximum number of processes: "); // Prompt for maximum number of processes
    scanf("%d", &size);
    arr = (int*) malloc(size*sizeof(int)); // Allocate memmory for dynamic array of PCB's

	// Initialize fields of PCB[0]
    arr[0] = 0;

	// Intitialize all other PCBs' parent, first_child, younger_sibling,
	// older_sibling
    p.parent = 0;
    p.first = 0;
    p.older = 0;
    p.younger = 0;
    // Print PCB table


		return;
}
//*************************************************************
void create_child() {
	// Declare local variables
	// Prompt for the parent PCB index
	// Search for the next unused PCB index q
	// Record the parent PCB index p in PCB[q]
	// Initialize the first_child & younger_sibling of PCB[q]
	// Check if parent PCB has no first child--if so, set fields
	// appropriately
		// Else, search for appropriate available spot for next child, set
		// fields appropriately
		// Print PCB table
		return;
}
//*************************************************************
void PROCEDURE_TO_RECURSIVELY_DESTROY_CHILD_PROCESSES(int
	formal_parameter) {
	// If the formal parameter is -1, return
	// Else:
	// Call this procedure on the current PCB's younger
	// sibling
		// Call this procedure on the current PCB's first child
		// Set all fields to invalid
		return;
}
//*************************************************************
void destroy_all() {
	// Declare local variables
	// Prompt for the parent PCB index p
	// Call recursive procedure on PCB[p]'s first child
	// Set PCB[p]'s first child to invalid
	// Print PCB table
	return;
}
//*************************************************************
void free_memory() {
	// If the dynamic array "PCB" is not NULL, free the memory
	return;
}
//*************************************************************
int main() {
	// Declare local variables
    int num;

    printf("Process creation and destruction\n--------------------------------\n1) Enter Parameters\n2) Create a new child process\n3) Destroy all descedants of a process\n4) Quit program and free memory\n\n");
    printf("Enter selection: \n");
    scanf("%d",&num);
    if(num == 1){
        enter_parameters();
    }
    else if(num == 4){
        return 0;
    }
	// Until the user quits, print the menu, prompt for the menu choice,
	// call the appropriate procedure

		return 1;
}