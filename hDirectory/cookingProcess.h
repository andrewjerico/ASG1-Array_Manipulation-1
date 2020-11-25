void menuDua()
{
    curr = cookHead;
    bool flag = false;
    while (curr)
    {
        if (curr->time > 0)
        {
            flag = true;
            break;
        }
        curr = curr->next;
    }
    curr = cookHead;
    if (flag)
    {
        printf("|%3s  | %-10s | %-25s | %-10s | %-10s |", "No", "Type", "Name", "Price", "Time Left");
        puts("");
        int no = 1;
        while (curr)
        {
            if (curr->time > 0)
            {
                printf("|%3d  | %-10s | %-25s | %-10d | %-8d s |", no, curr->type, curr->name, curr->price, curr->time);
                puts("");
                curr->time -= 10;
                no++;
            }
            if (curr->time <= 0 && !curr->done)
            {
                profit += curr->price;
                pushHistory(curr->id, curr->name, curr->price, curr->topping,
                            curr->calories, curr->flavor, curr->size, curr->time, curr->orderTime,
                            curr->type);
                // popCook(curr->id);
                curr->done = true;
            }
            curr = curr->next;
        }
        puts("");
        puts("Press Enter to return main menu");
        getchar();
    }
    else
    {
        puts("There is no cooking process recently!");
        puts("");
        pressEnter();
    }
    clrscr();
}
