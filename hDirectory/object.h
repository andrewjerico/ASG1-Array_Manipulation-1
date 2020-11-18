struct Order
{
    char name[255];
    int price;
    char topping[25];
    double calories;
    char flavor[25];
    char size;
    int time;
    char orderTime[128];
    char type[20];
};

Order order[255];
Order history[255];

char topping[3][20] = {"Caramel", "Honey", "Syrup"};
char flavor[3][20] = {"Mint", "Mix Berry", "Cheese"};

int orderNum = 0;
int historyNum = 0;
int cookingNum = 0;
int profit = 0;
int orderNo = 0;
int cookDone[255] = {};
