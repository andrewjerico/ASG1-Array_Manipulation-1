void clrscr() {
    for (int i = 0; i < 40; i++) {
        puts("");
    }
}

void pressEnter() {
    puts("\nPress Enter to continue");
    while (getchar() != '\n');
}

void getTime (){
	time_t t = time(NULL);
    tm tm = *localtime(&t);
	if(tm.tm_hour > 12){
		tm.tm_hour %= 12;
		printf("%d-%02d-%02d %02d:%02d:%02d PM", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	}else{
		if (tm.tm_hour == 0) tm.tm_hour=12;
		printf("%d-%02d-%02d %02d:%02d:%02d AM", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	}
	
}