void menuDua()
{
    bool flag = false;
    for (int i = 0; i < cookingNum; i++)
    {
        if (history[i].time > 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        printf("|%3s  | %-10s | %-25s | %-10s | %-10s |", "No", "Type", "Name", "Price", "Time Left");
        puts("");
        for (int i = 0; i < cookingNum; i++)
        {
            if (history[i].time > 0)
            {
                printf("|%3d  | %-10s | %-25s | %-10d | %-8d s |", i + 1, history[i].type, history[i].name, history[i].price, history[i].time);
                puts("");
                history[i].time -= 10;
            }
            if (history[i].time <= 0)
            {
                if (cookDone[i] == 0)
                {
                    profit += history[i].price;
                    cookDone[i] = 1;
                    historyNum++;
                }
            }
        }
        puts("");
        puts("Press Enter to return main menu");
        while (getchar() != '\n')
            ;
    }
    else
    {
        puts("There is no cooking process recently!");
        puts("");
        pressEnter();
    }
    clrscr();
}
