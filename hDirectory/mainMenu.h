void mainMenu()
{
    int pilihan;
    do
    {
        puts("Welcome to Opercooked");
        printf("Today Profit : $ %d\n", profit);
        puts("============================");
        puts("1. Add Dessert or Beverage");
        puts("2. View Cooking Process");
        puts("3. View Order History");
        puts("4. Order Dessert or Beverage");
        puts("5. Exit");
        do
        {
            printf(">> ");
            scanf("%d", &pilihan);
            getchar();
        } while (pilihan < 1 || pilihan > 5);
        switch (pilihan)
        {
            case 1:
                clrscr();
                menuSatu();
                break;
            case 2:
                clrscr();
                menuDua();
                break;
            case 3:
                clrscr();
                menuTiga();
                break;
            case 4:
                clrscr();
                menuEmpat();
                break;
            case 5:
                return;
                break;
        }
    } while (pilihan != 5);
}
