/**
 * @file
 * <pre>COPYRIGHT(c) 2017
 * -------------------
 *
 * File Description
 *
 * Last Modified: Sun Nov  5 18:27:43 PST 2017</pre>
 * @author Adam Rizkalla
 */

#include <sys/types.h>
#include <unistd.h>

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


char *reverseString(char *str);

/** The main function.
 * @param argc the number of tokens on the input line.
 * @param argv an array of tokens.
 * @return 0 on success, 1-255 on failure
 */
int
main(int argc, char *argv[])
{
  char test[] = "This is a test string.";
  reverseString(test);
  printf("%s\n", test);
  return EXIT_SUCCESS;
}


char *reverseString(char *str)
{
  int len, i;
  char tmp;
  if (str != NULL) {
    len = strlen(str);
    for (i = 0; i < len/2; i++) {
      tmp = str[i];
      str[i] = str[len-1-i];
      str[len-1-i] = tmp;
    }
  }
  return str;
}
