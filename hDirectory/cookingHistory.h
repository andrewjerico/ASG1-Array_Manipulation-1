void menuTiga()
{
    if (historyNum > 0)
    {
        printf("|%3s  | %-25s | %-10s | %-15s | %-10s | %-15s | %-6s | %-25s |\n",
               "No", "Nama", "Price", "Topping", "Callories", "Flavor", "Size", "Order Time");
        printf("--------------------------------------------------------------------------------------------------------------------------------------");
        puts("");
        for (int i = 0; i < historyNum; i++)
        {
            if (history[i].time <= 0)
            {
                if (history[i].calories == -1)
                {
                    printf("|%3d  | %-25s | %-10d | %-15s | %-10s | %-15s | %-6c | %-25s |\n",
                           i + 1, history[i].name, history[i].price, history[i].topping, "-", history[i].flavor, history[i].size, history[i].orderTime);
                }
               
            }
        }
      
    }
   
    clrscr();
}
