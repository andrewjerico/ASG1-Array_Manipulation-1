void menuSatu()
{
    int pilihan;
    puts("What do you want to add?");
    puts("1. Dessert");
    puts("2. Drink");
    do
    {
        printf("Choose: ");
        scanf("%d", &pilihan);
        getchar();
    } while (pilihan < 1 || pilihan > 2);
    switch (pilihan)
    {
    case 1:
        addDessert();
        break;
    case 2:
        addDrink();
        break;
    }
    clrscr();
}