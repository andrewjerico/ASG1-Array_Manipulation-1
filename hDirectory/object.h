struct Order
{
    int id;
    char name[255];
    int price;
    char topping[25];
    double calories;
    char flavor[25];
    char size;
    int time;
    char orderTime[128];
    char type[20];
    bool done = false;
    Order *next, *prev;
}  *head, *tail, *curr, *cookHead, *cookTail, *historyHead, *historyTail;

char topping[3][20] = {"Caramel", "Honey", "Syrup"};
char flavor[3][20] = {"Mint", "Mix Berry", "Cheese"};

int orderNum = 1;
int cookingNum = 1;
int profit = 0;
