/*
 * State handler routines for PA
 * one function for each state of the DFA
 *
 * Author: 
 */

#include <stdio.h>
#include "states.h"

/*
 * global flag set by state handlers if they see an error
 * 0 is no error
 * 1 is at least 1 error
 */
int saw_error = 0;

/*  replace this comment with your state handling functions below */
