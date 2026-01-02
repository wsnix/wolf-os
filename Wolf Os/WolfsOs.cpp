#include <cstdlib>
#include <unistd.h>
#include <libgen.h>
#include <cstring>

int main(int argc, char* argv[]) {
    char rootDir[1024];
    
    char* dir = dirname(argv[0]);
    
    strcpy(rootDir, dir);
    strcat(rootDir, "/root");
    
    chdir(rootDir);
    
    system("./root");
    
    return 0;
}