// #include <trove.h>
#include <stdio.h>
#include <unistd.h>

#define OPTLIST ":f:brul:"

int main(int argc, char *argv[]){
  int opt;
  while((opt = getopt(argc, argv, OPTLIST)) != -1) {
    
    switch (opt) {
      case 'f':
        printf("filename: %s\n", optarg);
        break;
      case 'b':
        printf("build file\n");
        break;
      case 'r':
        printf("remove info\n");
        break;
      case 'u':
        printf("update file\n");
        break;
      case 'l':
        printf("length: %s\n", optarg);
        break;
      case ':':
        printf("missing option");
        break;
      case '?':
        printf("unknown option: %c\n", optopt);
        break; 
    }

  }
  
}
