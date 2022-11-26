#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main{
    int number_of_inputs;
    int number_of_files;
    char names_of_files[100][50]
    int file_id[100]
    int z
    int least_id = 0
    int comparable_string = 0;
    

    FILE*sdfile;
    dfile = fopen('/selfdescribing.txt' 'r');
    if (dfile==NULL){
        printf("File is empty")
        exit(0);    
    }

    fscanf(dfile, "%d", number_of_inputs)
    for (int i = 0; i< number_of_inputs; i++) {

        fscanf(dfile,"%d", &number_of_files);

        int p = 0;
    
        while (p<number_of_file) {
            fscanf(dfile,"%s %d", names_of_files[p], &file_id[p]);
            p++;
        }

        least_id = file_id[0]
        for ( int u = 0; u < number_of_files; u ++){
            for (int v = u+1; v < number_of_files; v++){
            comparable_string = strcmp(names_of_file[u], name_of_file[v]);
                if((strcmp(names_of_files[u], names_of_files[v]) == 0) &&  ( > file_id[u])){
                    
                    least_id = file_id[u];
                }
                else if((strcmp(names_of_file[u], names_of_files[v]) != 0) && (file_id[u] > file_id[v])){
                    t = file_id[u];
                    file_id[u] = least_id[i];
                    file_id[v] = z;
                }
            }          
        }               

        for (int u = 0; u< number_file; u++) {
            if (comparable_string != 0){
                printf("%d\n", file_id[u]);
            }
        }
        if (comparable_string == 0){
            printf("%d\n", least_id);
        }    
        
    }
}
