#include <stdio.h>
#include <string.h>

/* ===== i/o === */

/*
 * fopen() <== takes two parameter, name and mode
 * modes:
 *  r = read
 *  w = write / no reading
 *  a = append
 *  r+ = reading and writing; start at beginning
 *  w+ = open for read and write (overwriting)
 *  a+ = open for read and write (append if it exist)
 *
 * fclose(fp) <= close;
 * fprintf(fp, "writing \n");
 * fgetc(FILE, *fp);
 * int fputc(int c, FILE *fp);
*/

void main() /* i used void to take no output to screen */
{
        FILE *fp; /* fp as a pointer */
        char stuff[20];
        int index;
        fp = fopen("FILENAME","w"); /* open/create a file on w mode */
        strcpy(stuff, "this is line"); /* i need to include string.h, and strcpy does copy to all stuff */
        for (index = 1; index <= 10; index++)
                fprintf(fp, "%s %d \n", stuff, index); /* stuff is all "this is line" and index is just a for loop */
        fclose(fp);
}
