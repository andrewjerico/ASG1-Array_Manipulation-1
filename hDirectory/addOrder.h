void addDrink();
void addDessert();
void validateDessert();
int dessertTime();
void validateDrink();
int drinkTime();

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
}

void addDessert()
{
    char name[255];
    int price;
    char topp[25];
    double calories;
    char size;
    char flavor[25];
    // validasi nama
    do
    {
        printf("Input the name [at least 5 characters]: ");
        scanf("%[^\n]", name);
        getchar();
    } while (strlen(name) < 5);
    //validasi harga
    do
    {
        printf("Input the price [10 - 500]: $ ");
        scanf("%d", &price);
        getchar();
    } while (price < 10 || price > 500);
    //validasi topping
    do
    {
        printf("Input the topping ['Caramel'] | ['Honey'] | ['Syrup'](Case Insensitive): ");
        scanf("%[^\n]", topp);
        getchar();
    } while (strcmpi(topp, topping[0]) == 1 && strcmpi(topp, topping[1]) == 1 && strcmpi(topp, topping[2]) == 1);
    // validasi kalori
    do
    {
        printf("Insert calories [1.00 - 99.00]: ");
        scanf("%lf", &calories);
        getchar();
    } while (calories < 1.00 || calories > 99.00);
    size = '-';
    flavor[0] = '-';
    flavor[1] = '\0';
    push(orderNum, name, price, topp, calories, flavor, size);
    puts("");
    printf("Successfully added a new menu!");
    getchar();
    orderNum++;
}

int dessertTime(char *topp)
{
    int time = 50 + (rand() % 41);
    if (strcmpi(topp, topping[0]) == 0)
    {
        time += 10;
    }
    else if (strcmpi(topp, topping[1]) == 0)
    {
        time += 15;
    }
    else if (strcmpi(topp, topping[2]) == 0)
    {
        time += 20;
    }
    return time;
}

void validateDrink()
{
    char name[255];
    int price;
    char topping[25];
    double calories;
    char size;
    char flav[25];
    // validasi nama
    do
    {
        printf("Input the name [at least 5 characters]: ");
        scanf("%[^\n]", name);
        getchar();
    } while (strlen(name) < 5);
    //validasi harga
    do
    {
        printf("Input the price [10 - 500]: $ ");
        scanf("%d", &price);
        getchar();
    } while (price < 10 || price > 500);
    //validasi rasa
    do
    {
        printf("Input the flavor ['Mint'] | ['Mix Berry'] | ['Cheese'](Case Sensitive): ");
        scanf("%[^\n]", flav);
        getchar();
    } while (strcmp(flav, flavor[0]) == 1 && strcmp(flav, flavor[1]) == 1 && strcmp(flav, flavor[2]) == 1);
    // validasi size
    do
    {
        printf("Input the size [S | M | L](Case Sensitive): ");
        scanf("%c", &size);
        getchar();
    } while (size != 'S' && size != 'M' && size != 'L');
    topping[0] = '-';
    topping[1] = '\0';
    calories = -1;
    push(orderNum, name, price, topping, calories, flav, size);
    puts("");
    printf("Successfully added a new menu!");
    getchar();
    orderNum++;
}

int drinkTime(char *flav)
{
    int time = 10 + (rand() % 41);
    if (strcmpi(flav, flavor[0]) == 0)
    {
        time += 10;
    }
    else if (strcmpi(flav, flavor[1]) == 0)
    {
        time += 20;
    }
    else if (strcmpi(flav, flavor[2]) == 0)
    {
        time += 30;
    }
    return time;
}