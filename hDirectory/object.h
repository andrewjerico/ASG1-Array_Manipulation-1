struct Order {
    char name[255];
    int price;
    char topping[20];
    double calories;
    char flavor[20];
    char size;
    int time;
    char orderTime[128];
};

struct Order order[255];
struct Order history[255];