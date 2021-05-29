   do{
        fflush(stdin);
        system("cls");
        printf("Enter The ISBN With 10 digits =  ");  
        scanf("%[^\n]", Str_ISBN);
    } while (strlen(Str_ISBN)>10 || 10>strlen(Str_ISBN));