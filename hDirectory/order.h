void menuEmpat()
{
    if (orderNum > 1)
    {
        printf("|%3s  | %-25s | %-10s | %-15s | %-10s | %-15s | %-6s |\n", "No",
               "Nama", "Price", "Topping", "Callories", "Flavor", "Size");
        printf(
            "------------------------------------------------------------------"
            "----------------------------------------");
        puts("");
        curr = head;
        while (curr)
        {
            if (curr->calories == -1)
            {
                printf(
                    "|%3d  | %-25s | %-10d | %-15s | %-10s | %-15s | %-6c |\n",
                    curr->id, curr->name, curr->price, curr->topping, "-",
                    curr->flavor, curr->size);
            }
            else
            {
                printf(
                    "|%3d  | %-25s | %-10d | %-15s | %10.2lf | %-15s | %-6c "
                    "|\n",
                    curr->id, curr->name, curr->price, curr->topping,
                    curr->calories, curr->flavor, curr->size);
            }
            curr = curr->next;
        }
        int orderNo;
        do
        {
            printf("Choose a menu to order [1 - %d]: ", orderNum - 1);
            scanf("%d", &orderNo);
        } while (orderNo < 1 || orderNo > orderNum - 1);

        curr = head;
        while (curr->id != orderNo)
        {
            curr = curr->next;
        }
        int time;
        char type[20];
        char orderTime[128];
        if (curr->size == '-')
        {
            char tp[20] = "Dessert";
            time = dessertTime(curr->topping);
            strcpy(type, tp);
        }
        else
        {
            char tp[20] = "Drink";
            time = drinkTime(curr->flavor);
            strcpy(type, tp);
        }
        getTime(orderTime);
        pushCook(cookingNum, curr->name, curr->price, curr->topping,
                 curr->calories, curr->flavor, curr->size, time, orderTime,
                 type);
        cookingNum++;
        puts("Successfully add to order list!");
        puts("");
        pressEnter();
        getchar();
    }
    else
    {
        puts("There is no Dessert or Drink on the list!");
        puts("");
        pressEnter();
    }
    clrscr();
}
