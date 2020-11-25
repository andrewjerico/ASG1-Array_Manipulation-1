//  ------ LIST ORDER LINKED LIST ------- //

Order *createList(int id, char *name, int price, char *topping, double calories,
                  char *flavor, char size)
{
    Order *temp = (Order *)malloc(sizeof(Order));
    temp->id = id;
    strcpy(temp->name, name);
    temp->price = price;
    strcpy(temp->topping, topping);
    temp->calories = calories;
    strcpy(temp->flavor, flavor);
    temp->size = size;

    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void push(int id, char *name, int price, char *topping, double calories,
          char *flavor, char size)
{
    Order *temp = createList(id, name, price, topping, calories, flavor, size);
    if (!head)
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

Order *createOrder(int id, char *name, int price, char *topping,
                   double calories, char *flavor, char size, int time,
                   char *orderTime, char *type)
{
    Order *temp = (Order *)malloc(sizeof(Order));
    temp->id = id;
    strcpy(temp->name, name);
    temp->price = price;
    strcpy(temp->topping, topping);
    temp->calories = calories;
    strcpy(temp->flavor, flavor);
    temp->size = size;
    temp->time = time;
    strcpy(temp->orderTime, orderTime);
    strcpy(temp->type, type);
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

//  ------ LIST ORDER LINKED LIST ------- //

//  ------ COOKING PROCESS LINKED LIST ------- //

void pushCook(int id, char *name, int price, char *topping, double calories,
              char *flavor, char size, int time, char *orderTime, char *type)
{
    Order *temp = createOrder(id, name, price, topping, calories, flavor, size,
                              time, orderTime, type);
    if (!cookHead)
    {
        cookHead = cookTail = temp;
    }
    else
    {
        cookTail->next = temp;
        temp->prev = cookTail;
        cookTail = temp;
    }
}

// void popCookHead()
// {
//     if(cookHead && cookHead == cookTail) {
//         cookHead = cookTail = NULL;
//         free(cookHead);
//     } else {
//         Order *newHead = cookHead->next;
//         cookHead->next = newHead->prev = NULL;
//         free(cookHead);
//         cookHead = newHead;
//     }

// }

// void popCookTail()
// {
//     if(cookHead && cookHead == cookTail) {
//         cookHead = cookTail = NULL;
//         free(cookHead);
//     } else {
//         Order *newTail = cookTail->prev;
//         cookTail->prev = newTail->next = NULL;
//         free(cookTail);
//         cookTail = newTail;
//     }

// }

// void popCook(int id)
// {
//     if(!cookHead) {
//         return;
//     }
//     else if (cookHead->id == id)
//     {
//         popCookHead();
//     }
//     else if (cookTail->id == id)
//     {
//         popCookTail();
//     }
//     else
//     {
//         curr = cookHead;
//         while (curr && curr->id != id)
//             curr = curr->next;
//         curr->prev->next = curr->next;
//         curr->next->prev = curr->prev;
//         curr->prev = curr->next = NULL;
//         free(curr);
//     }
// }

//  ------ COOKING PROCESS LINKED LIST ------- //

//  ------ HISTORY LINKED LIST ------- //

void pushHistory(int id, char *name, int price, char *topping, double calories, char *flavor, char size, int time, char *orderTime, char *type)
{
    Order *temp = createOrder(id, name, price, topping, calories, flavor, size, time, orderTime, type);
    if (!historyHead)
    {
        historyHead = historyTail = temp;
    }
    else
    {
        historyTail->next = temp;
        temp->prev = historyTail;
        historyTail = temp;
    }
}

//  ------ HISTORY LINKED LIST ------- //