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

void addDrink()
{
    validateDrink();
    order[orderNum].topping[0] = '-';
    order[orderNum].calories = -1;
    order[orderNum].time = drinkTime();
    puts("");
    printf("Successfully added a new menu!");
    getchar();
    orderNum++;
}



void addDessert()
{
    validateDessert();
    order[orderNum].size = '-';
    order[orderNum].flavor[0] = '-';
    order[orderNum].time = dessertTime();
    puts("");
    printf("Successfully added a new menu!");
    getchar();
    orderNum++;
}

void validateDessert()
{
    // validasi nama
    do
    {
        printf("Input the name [at least 5 characters]: ");
        scanf("%[^\n]", order[orderNum].name);
        getchar();
    } while (strlen(order[orderNum].name) < 5);
    //validasi harga
    do
    {
        printf("Input the price [10 - 500]: $ ");
        scanf("%d", &order[orderNum].price);
        getchar();
    } while (order[orderNum].price < 10 || order[orderNum].price > 500);
    //validasi topping
    do
    {
        printf("Input the topping ['Caramel'] | ['Honey'] | ['Syrup'](Case Insensitive): ");
        scanf("%[^\n]", order[orderNum].topping);
        getchar();
    } while (strcmpi(order[orderNum].topping, topping[0]) == 1 && strcmpi(order[orderNum].topping, topping[1]) == 1 && strcmpi(order[orderNum].topping, topping[2]) == 1);
    // validasi kalori
    do
    {
        printf("Insert calories [1.00 - 99.00]: ");
        scanf("%lf", &order[orderNum].calories);
        getchar();
    } while (order[orderNum].calories < 1.00 || order[orderNum].calories > 99.00);
}

int dessertTime()
{
    int time = 50 + (rand() % 41);
    if (strcmpi(order[orderNum].topping, topping[0]) == 0)
    {
        time += 10;
    }
    else if (strcmpi(order[orderNum].topping, topping[1]) == 0)
    {
        time += 15;
    }
    else if (strcmpi(order[orderNum].topping, topping[2]) == 0)
    {
        time += 20;
    }
    return time;
}

void validateDrink()
{
    // validasi nama
    do
    {
        printf("Input the name [at least 5 characters]: ");
        scanf("%[^\n]", order[orderNum].name);
        getchar();
    } while (strlen(order[orderNum].name) < 5);
    //validasi harga
    do
    {
        printf("Input the price [10 - 500]: $ ");
        scanf("%d", &order[orderNum].price);
        getchar();
    } while (order[orderNum].price < 10 || order[orderNum].price > 500);
    //validasi rasa
    do
    {
        printf("Input the flavor ['Mint'] | ['Mix Berry'] | ['Cheese'](Case Sensitive): ");
        scanf("%[^\n]", order[orderNum].flavor);
        getchar();
    } while (strcmp(order[orderNum].flavor, flavor[0]) == 1 && strcmp(order[orderNum].flavor, flavor[1]) == 1 && strcmp(order[orderNum].flavor, flavor[2]) == 1);
    // validasi size
    do
    {
        printf("Input the size [S | M | L](Case Sensitive): ");
        scanf("%c", &order[orderNum].size);
        getchar();
    } while (order[orderNum].size != 'S' && order[orderNum].size != 'M' && order[orderNum].size != 'L');
}

int drinkTime()
{
    int time = 10 + (rand() % 41);
    if (strcmpi(order[orderNum].flavor, flavor[0]) == 0)
    {
        time += 10;
    }
    else if (strcmpi(order[orderNum].flavor, flavor[1]) == 0)
    {
        time += 20;
    }
    else if (strcmpi(order[orderNum].flavor, flavor[2]) == 0)
    {
        time += 30;
    }
    return time;
}
