#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){   

    int number_of_inputs;
    int number_of_files;
    char file_names[number_of_files][50];
    int files_id[number_of_files];


    FILE*sdfile;
    sdfile = fopen("duplicate.txt", "r");
    if (sdfile==NULL){
        printf("File is empty");
        exit(0);    
    }

    fscanf(sdfile, "%d", &number_of_inputs);
    for(int a = 0; a< number_of_inputs; a++) {
        fscanf(sdfile,"%d", &number_of_files);
        
        for (int b = 0; b < number_of_files; b++)
        {
            int idNew;
            char file_name[50];
            fscanf(sdfile, "%s", file_name);
            int existing_file;

            for (int c = 0; c < number_of_files; c++)
            {
                if (!strcmp(file_names[c],file_name))
                {
                existing_file = c;
                break;
                }
                else
                {
                    existing_file = -1;
                }

            }
            
            fscanf(sdfile, "%d", &idNew);

            if (existing_file == -1)
            {
                strcpy(file_names[b], file_name);
                files_id[b] = idNew;
            }
            else
            {
                if (files_id[existing_file] <= idNew)
                {
                    strcpy(file_names[b], file_name);
                    files_id[b]= -1;
                }
                else
                {
                    strcpy(file_names[b], file_name);
                    files_id[existing_file] = idNew;
                    files_id[b] = -1;
                }
                
            }
        }  

        int sortId;
        for (int i = 0; i < number_of_files; i++)
        {
            for (int k = i + 1; k < number_of_files; k++)
            {
                if(files_id[i] > files_id[k]){
                    sortId = files_id[i];
                    files_id[i] = files_id[k];
                    files_id[k] = sortId;
                }
            }
            
        }

        for(int x= 0; x < number_of_files; x++){
            if (files_id[x] != -1)
            {
                printf("%d\t", files_id[x]);
            }
            
        }
        printf("\n");
    }    
      
    return 0;
}


