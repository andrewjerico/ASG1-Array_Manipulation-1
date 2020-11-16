void menuEmpat()
{
    if (orderNum > 0)
    {
        printf("|%3s  | %-25s | %-10s | %-15s | %-10s | %-15s | %-6s |\n",
               "No", "Nama", "Price", "Topping", "Callories", "Flavor", "Size");
        printf("----------------------------------------------------------------------------------------------------------");
        puts("");
        for (int i = 0; i < orderNum; i++)
        {
            if (order[i].calories == -1)
            {
                printf("|%3d  | %-25s | %-10d | %-15s | %-10s | %-15s | %-6c |\n",
                       i + 1, order[i].name, order[i].price, order[i].topping, "-",
                       order[i].flavor, order[i].size);
            }
            else
            {
                printf("|%3d  | %-25s | %-10d | %-15s | %-10.2lf | %-15s | %-6c |\n",
                       i + 1, order[i].name, order[i].price, order[i].topping, order[i].calories,
                       order[i].flavor, order[i].size);
            }
        }
        do
        {
            printf("Choose a menu to order [1 - %d]: ", orderNum);
            scanf("%d", &orderNo);
        } while (orderNo < 1 || orderNo > orderNum);

        --orderNo;
        strcpy(history[cookingNum].name, order[orderNo].name);
        history[cookingNum].price = order[orderNo].price;

        strcpy(history[cookingNum].topping, order[orderNo].topping);
        history[cookingNum].calories = order[orderNo].calories;

        strcpy(history[cookingNum].flavor, order[orderNo].flavor);
        history[cookingNum].size = order[orderNo].size;
        // history[cookingNum].orderTime = getTime();
        if (order[orderNo].size == '-')
        {
            history[cookingNum].time = dessertTime();
            char tp[20] = "Dessert";
            strcpy(history[cookingNum].type, tp);
        }
        else
        {
            history[cookingNum].time = drinkTime();
            char tp[20] = "Drink";
            strcpy(history[cookingNum].type, tp);
        }
        getTime(history[cookingNum].orderTime);

        cookingNum++;
        puts("Successfully add to order list!");
        puts("");
        pressEnter();
    }
    else
    {
        puts("There is no Dessert or Drink on the list!");
        puts("");
        pressEnter();
    }
    clrscr();
}
