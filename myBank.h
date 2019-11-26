
double O(); // open a new acount if close,put mony, syso new num acount.

double B(int x);// get num acount, syso how much left.

double D(int x, double y); //get num acount, put mony and syso how much left.

double W(int x, double y);//get num acount, take mony if has and syso how much left.

int C(int x); //get num acount, close acount only if open.

void P(); //מדפיסה את סכום הכסף שיש בכל חשבון פתוח

void E(); // סוגר את כל החשבונות הפתוחים,מאפס את הכסף שבהם וסוגר את התוכנית

void I(double x); // הוספת ריבית בשיעור אחוז נתון לכל החשבונות הפתוחים

int isOpen(int x); //בודק אם החשבון בנק פתוח

