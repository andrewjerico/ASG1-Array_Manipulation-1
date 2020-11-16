void clrscr()
{
    printf("\e[1;1H\e[2J");
}

void pressEnter()
{
    puts("Press Enter to continue");
    while (getchar() != '\n')
        ;
}

void getTime(char *ordtime)
{
    struct tm *ptm;
    time_t t = time(NULL);
    ptm = localtime(&t);
    strftime(ordtime, 128, "%Y/%m/%d %I:%M:%S %p", ptm);
    ordtime[127] = '\0';
}