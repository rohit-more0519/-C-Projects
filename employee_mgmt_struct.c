// perform CRUD operations

#include <stdio.h>
struct employee
{
    int id;
    char name[20]; // memebers
    float salary;
};
int main()
{

    struct employee emp[10];
    int index = 0;

    while (1)
    {
        printf("choises are \n enter 1 to add\n enter 2 to display\n enter 3 to update\n enter 4 to delete \n enter 5 to exit \n eneter choice := ");

        int choice;
        scanf("%d", &choice);
        printf("\n");

        if (choice == 1)
            {
                 printf("eneter id :");
                 scanf("%d", &emp[index].id);

                 printf("eneter name :");
                 scanf("%s", &emp[index].name);

                 printf("eneter salary :");
                 scanf("%f", &emp[index].salary);

                 index++;
                 printf("succesfully added\n ");
                             printf("\n\n");

            }

        else if (choice == 2)
            {
               for (int i = 0; i < index; i++)
               {

                 printf("emp id :%d\n", emp[i].id);
                 printf("emp name :%s\n", emp[i].name);
                 printf("emp salary :%f\n", emp[i].salary);
               }
                           printf("\n\n");

            }

        else if (choice == 3)
            {
                printf("enetr id of emp :");
                int temp_id;
                scanf("%d", &temp_id);
                 int flag = 0;
                 int i = 0;

                for (i; i < index; i++)
                {
                       if (emp[i].id == temp_id)
                       {
            
                           flag = 1;
                           break;
                       }
                }
                if (flag == 1)
                {
                    printf("eneter id :");
                    scanf("%d", &emp[i].id);

                    printf("eneter name :");
                    scanf("%s", &emp[i].name);

                    printf("eneter salary :");
                    scanf("%f", &emp[i].salary);
                }
                else
                {
                    printf("not exits\n");
                }
                printf("updated succesfully");
                             printf("\n\n");

             }


        else if(choice == 4)
           {
            
               {
                 printf("Enter the ID of the employee to delete: ");
                 int temp_id;
                 scanf("%d", &temp_id);
                 int flag = 0;
                 int i = 0;

                 for (i; i < index; i++)
                 {
                     if (emp[i].id == temp_id)
                     {
                        flag = 1;
                         break;
                     }
                 }
                 if (flag == 1)
                 {
                     for (int j = i; j < index - 1; j++)
                     {
                         emp[j] = emp[j + 1];
                     }
                     index--;
                     printf("Employee with ID %d deleted successfully.\n", temp_id);
                 }
                 else
                 {
                     printf("Employee with ID %d not found.\n", temp_id);
                 }
              }
                      printf("\n\n");

        }

        else

        {
                break;
        }
    }
}
