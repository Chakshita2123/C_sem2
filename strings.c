// 1 D arrays of character
// is a sequence of characters terminated with a null character "\0".
// double quotes
// String literaliteral - refer to a single character from the literal as a character.
// each string is stored at a different location.
// eg : char string[1]="hello"     char string[2]="hello"  (but string1 is not equal to string2 [they are stored at different locations.])
// change parts of string variable
// char str1[6]="hello";
// str1[0]='y';
// str1 is now "yello" //
// str1[4]="\0";
// str1 is now yell //

// String Input
// eg:
// void main()
// {
//    char name[25];
//    scanf("%s",name);
//    printf("Name=%s\n",name);
//  }
// %s reads a string into character array given the array name or start address. It ends the string with "\0"

// to print the size of string
// void main()
// {
//     #define SIZE 25
//     int i, count=0;
//     char name[SIZE];
//     scanf("%s",name);
//     printf("Name=%s\n",name);
//     for(i=0;name[i]!="\0";i++) 
//     if (name[i]=='a') count++;
//     printf("Total a's=%d\n",count);
// }

// Character arithmetic in C
// is used to implement arithmetic operations like addition and subtraction on characters in C 
// used to manipulate the strings.
// #include <stdio.h>
// int main() {
//     char s='a';
//     char v='z';
//     char t='z'-'y';
//     printf("%d\n",s);
//     printf("%c\n",s);
//     printf("%d\n",(s+1));
//     printf("%c\n",(s+1));
//     printf("%d\n",(s-1));
//     printf("%c\n",(s-1));
//     printf("%d\n",t);
//     printf("%d\n",v);
//     return 0;
// }

// Library functions for string handling
// use <string.h>

// string handling functions:
// 1. strlen - finds the length of a string
// 2. strcat - concatenates one string at the end of another
// 3. strcmp - compares two stringd lexicographically
// 4. strcpy - copies one string from another

// 1. strlen() -  finding and printing length of string s
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] = "hello";
//     printf("%lu",strlen(s));
//     return 0;
// }

// 2. strcpy() function copies a string from the source to the destinantion. It copies the entire string, including the null terminator.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char src[]="Hello World";
//     char dest[20];
//     strcpy(dest,src);
//     printf("%s",dest);
//     return 0;
// }

// 3. strncpy - copy till a particular position
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char src[]="Welcome, Hello World";
//     char dest[20];
//     strncpy(dest,src,4);
//     printf("%s",dest);
//     return 0;
// }

// 4. strcat() - used to concatenate (append) one string to the end of another.
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s1[30]="Welcome, ";
//     char s2[]="Chitkara University";
//     strcat(s1,s2);
//     printf("%s",s1);
//     return 0;
// }

// 5. strncat() - concatenate till a particular position
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s1[30]="Welcome, ";
//     char s2[]="How are you";
//     strncat(s1,s2,4);
//     printf("%s",s1);
//     return 0;
// }

// 6. strcmp() - take two strings as arguments , compares two strings and returns an integer value as a result of comparison.
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s1[]="Mangoes";
//     char s2[]="mango";
//     int res = strcmp(s1,s2);
//     if (res==0) printf("s1 and s2 are same");
//     else if (res<0) printf("s1 is smaller than s2");
//     else printf("s1 is greater than s2");
//     return 0;
// }

// 7. strchr() - used to locate the first occurence of a character in a string
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] ="Hello world";
//     char *res = strchr(s,'l');
//     if (res!=NULL)
//     printf("Character found at: %ld index", res-s);
//     else printf("Character not found\n");
//     return 0;
// }

// 8. strrchr() - used to find the last occurence of a character in a string
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] ="Hello world";
//     char *res = strrchr(s,'l');
//     if (res!=NULL)
//     printf("Character found at: %ld index", res-s);
//     else printf("Character not found\n");
//     return 0;
// }

// 9. strstr() - used to search the first occurence of substring in another string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] ="hello, world, world";
//     char *pos = strstr(s,"world");
//     if (pos!=NULL) printf("Found");
//     else printf("Not Found");
//     return 0;
// }

// 10. strtok() - used to split a string into tokens 
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] = "Hello, How are you!";
//     char *t = strtok(s, ", ");
//     while (t!=NULL) {
//         printf("%s\n",t);
//         t = strtok(NULL, ", ");
//     }
//     return 0;
// }

// eg :
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s1[]="beautiful world",
//         s2[]="how are you doing";
//     printf("%d\n",strlen(s1));
//     printf("%d\n",strlen(s2));
//     printf("%d\n",strlen(s2+8));
//     printf("%d\n",strcmp(s1,s2));
//     printf("%s\n",s1+1);
//     strcpy(s1+1,s2+1);
//     strcat(s1,"s!");
//     printf("%s\n",s1);
//     return 0;
// }

// KEY TAKEAWAYS
// 1. strlen(s+n) computes the length of the substring starting at index n.
// 2. strcmp(s1,s2) returns a negative number if s1<s2 lexicographically.
// 3. s+n in printf("%s",s+n) skips the first n characters.
// 4. strcpy(s1+1,s2+1) modifies s1, starting at index 1.
// 5. strcat(s1,"...") appends a string at the end of s1.


// using gets and puts
// #include <stdio.h>
// #include <string.h>
// void main(){
//     char name[20];
//     printf("Enter your name: ");
//     gets(name);
//     printf("Hello ");
//     puts(name);
// }

// using getchar() nd putchar()
#include <stdio.h>
#include <string.h>
void main() 
{
    char sec;
    printf("Enter ur section: \n");
    sec=getchar();
    printf("Your section is: \n");
    putchar(sec);
}