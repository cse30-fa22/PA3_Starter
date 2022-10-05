/*
 * CSE Programming assignment 3 
 * Author: 
 *
 * What this program does:
 *      remove c comments from a source file and write to stdout
 *      comments are replaced with a single space
 *      handles single and double quoted sequences
 *      all newlines are preserved
 *
 * error handling:
 *      prints starting line for unterminated comments or quote sequences
 *      to stderr
 *
 * return either:
 *      EXIT_SUCCESS if no errors
 *      EXIT_FAILURE if errors
 *      
 */

#include <stdio.h>
#include <stdlib.h>
#include "states.h"
#define CNT 1   /* start count lines in input at CNT */

int
main(void)
{
    int c;              /* input char  */
    int linecnt = CNT;  /* counts line in input */
    int startline = CNT;/* starting line number for comment/quote */

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
