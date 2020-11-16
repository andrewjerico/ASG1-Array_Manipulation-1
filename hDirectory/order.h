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
	}
    else
    {
    	puts("There is no Dessert or Drink on the list!");
        puts("");
        pressEnter();
	}
    clrscr();
}
