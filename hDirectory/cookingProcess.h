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
        }
        printf("Press enter to return to main menu");
        getchar();
    }
    else
    {
        printf("There is no cooking process recently!\n\n")
        pressEnter();
    }
}
