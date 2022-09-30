/*
 * CSE Programming assignment 3 
 * Author: 
 *
 * What this program does:
 *      remove c comments from a source file and write to stdout
 *      comments are replaced with a single space
 *      handles single and double quoted sequences
 *      comments and quoted sequences can span multiple lines
 *      with the Line continuation character 
 *
 * error handling:
 *      prints starting line for unterminated comments or quote sequences
 *      to stderr
 *
 * returns:
 *      EXIT_SUCCESS if no errors
 *      EXIT_FAILURE if errors
 *      
 */

#include <stdio.h>
#include <stdlib.h>
#include "states.h"

int
main(void)
{
    int c;              /* input char  */
    int linecnt = 1;    /* current line count in input */
    int startline = 1;  /* starting line number: comment/quote error message */

    enum typestate state = START;  /* initial state of DFA */

    /*
     * process char at a time until EOF
     */

        /* replace this comment with your main loop code */
    
    /*
     * All done. No explicit end state used here.
     * Check for error conditions based on the state we ended in
     */
}
