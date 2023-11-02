#include <stdio.h>
#include <dirent.h>
#include <string.h>

int main()
{
    DIR *folder;
    struct dirent *entry;

    folder = opendir(".");
    if (folder == NULL) {
        perror("the file couldn't be opened");
        return (1);
    }
    int found = 0;
    while ((entry = readdir(folder)))
    {
        if (strcmp(entry->d_name, "file.txt") == 0) {
            printf("Found: %s\n", "file.txt");
            found = 1;
            break;
        }
    }
    if (!found){
        printf("Not found: %s\n", "file.txt");
    }
    closedir(folder);
    return 0;
}
