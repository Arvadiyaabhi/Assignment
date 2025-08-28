// #include <stdio.h>
// #include <stdlib.h>
// void main()
// {
//     FILE* fptr;
//     fptr = fopen("1st.txt", "r");
//     if (fptr == NULL) {
//         printf("The file is not opened.");
//     }
//     else{
//         printf("The file is  opened.");

//     }
// }

// Create a File in C

// #include <stdio.h>
// #include <stdlib.h>
// void main()
// {
//     FILE* fptr;
//     fptr = fopen("dhruvi.txt", "w");
//     if (fptr == NULL) {
//         printf("The file is not opened.");
//     }
//     else{
//         printf("The file is  opened.");

//     }
// }

// Write to a File

// #include <stdio.h>
// #include <stdlib.h>
// void main()
// {
//     FILE* fptr;
//     char tops[]="Hello My name is chirag";
//     fptr = fopen("2nd.txt", "w");
//     if (fptr == NULL) {
//         printf("The file is not opened.");
//     }
//     else{
//         printf("The file is  opened.");
//         fputs(tops, fptr);
//         fputs("\n", fptr);
//         fclose(fptr);
//         printf("Data successfully written in file file.txt\n");
//         printf("The file is now closed.");

//     }
// }

// Reading From a File

// #include <stdio.h>
// #include <stdlib.h>
// void main()
// {
//     FILE* fptr;
//     char data[50];
//     fptr = fopen("2nd.txt", "r");
//     if (fptr == NULL) {
//         printf("The file is not opened.");
//     }
//     else{
//         printf("The file is  opened.");
//         while (fgets(data, 50, fptr) != NULL) {

//             // Print the data
//             printf("%s", data);
            
//         }
//         fclose(fptr);

//     }
// }

// append file data

#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE* fptr;
    char tops[]="Hello My name is chirag\nHello My name is piyush";
    fptr = fopen("2nd.txt", "a");
    if (fptr == NULL) {
        printf("The file is not opened.");
    }
    else{
        printf("The file is  opened.");
        fputs(tops, fptr);
        fputs("\n", fptr);
        fclose(fptr);
        printf("Data successfully written in file file.txt\n");
        printf("The file is now closed.");

    }
}