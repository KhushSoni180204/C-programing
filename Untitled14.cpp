#include <stdio.h>
#include <stdlib.h>

void merge(FILE *fp,int n,char *fdata,FILE *fpr)
{
    char change_case[1000];
    int loop = 0;

    while(fgets(fdata,n,fp)!=NULL)
    {
        fgets(fdata,n,fp);

        //printf("%s",fdata);

        if ((*(fdata+loop) >= 65) && (*(fdata+loop) <= 90))
        {
            printf("%c",*(fdata+loop));
            change_case[loop] = *(fdata+loop)+32;
        }
        else if ((*(fdata+loop) >= 97) && ((*fdata+loop) <= 122))
        {
            printf("%c",*(fdata+loop));
            change_case[loop] = *(fdata+loop)-32;
        }
        else
        {
            change_case[loop] = *(fdata+loop);
        }
        loop++;

        fpr = fopen("Text File 3.dat","w");

        if (fpr == NULL)
        {
            printf("Error in accessing / writing the target file"); 
        }
        else
        {
            fputs(change_case,fpr);
            printf("Line written successfully : %s\n", change_case);
        }
    }
}

int main()
{
    FILE *sfp, *tfp; //declaring a file pointer for source file and target file
    char *fdata;
    int n = 1000;
    sfp = fopen("Text File 1.txt","r");

    if (sfp == NULL)
    {
        printf("Error in reading the source file\n");
    }

    else
    {
        merge(sfp,n,fdata,tfp);
    }   

    fclose(sfp);

return 0;
}
