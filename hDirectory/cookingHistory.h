void menuTiga()
{
    if (historyHead)
    {
        printf("|%3s  | %-25s | %-10s | %-15s | %-10s | %-15s | %-6s | %-25s |\n",
               "No", "Nama", "Price", "Topping", "Callories", "Flavor", "Size", "Order Time");
        printf("--------------------------------------------------------------------------------------------------------------------------------------");
        puts("");
        curr = historyHead;
        int no = 1;
        while (curr)
        {
            if (curr->time <= 0)
            {
                if (curr->calories == -1)
                {
                    printf("|%3d  | %-25s | %-10d | %-15s | %-10s | %-15s | %-6c | %-25s |\n",
                           no, curr->name, curr->price, curr->topping, "-", curr->flavor, curr->size, curr->orderTime);
                }
                else
                {
                    printf("|%3d  | %-25s | %-10d | %-15s | %-10.2lf | %-15s | %-6c | %-25s |\n",
                           no, curr->name, curr->price, curr->topping, curr->calories, curr->flavor, curr->size, curr->orderTime);
                }
            }
            curr = curr->next;
            no++;
        }
        puts("");
        pressEnter();
    }
    else
    {
        puts("There is no order history!");
        puts("");
        pressEnter();
    }
    clrscr();
}
