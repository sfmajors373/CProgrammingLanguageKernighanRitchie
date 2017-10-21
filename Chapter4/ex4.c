/* alter calc program to return top of stack without popping or duplicating it, add command to swap top two elements, and a command to clear stack */
#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include<ctype.h>
#define MAXVAL 100
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */
#define BUFSIZE 100
int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
void clearStack();
int printTopofStack();
void swap();
/* reverse Polish calculator */
int main()
{
    int type;
    double op2;
    char s[MAXOP];
    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break; 
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                   printf("error: zero divisor\n");
                break;
            case 't':
                printTopofStack();
                break;
            case 's':
                swap();
                break;
            case 'd':
                op2 = pop();
                push(op2);
                push(op2);
                break;
            case 'c':
                clearStack();
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
}


int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++]=f;
    else
        printf("error:stack full, cant push %g\n",f);
}

double pop(void)
{
    if(sp>0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}



int getop(char s[])
{
    int i,c;

    while((s[0] = c = getch()) == ' ' || c =='\t')
        ;
    s[1] = '\0';
    
    i = 0;
    if(!isdigit(c) && c!='.' && c!='-')
        return c;

    if(c=='-')
        if(isdigit(c=getch()) || c == '.')
            s[++i]=c;
        else
        {
            if(c!=EOF)
                ungetch(c);
            return '-';
        }
    
    if(isdigit(c))
        while(isdigit(s[++i] =c =getch()))
            ;

    if(c=='.')
        while(isdigit(s[++i] = c=getch()))
            ;
    
    s[i] = '\0';
    if(c!=EOF)
        ungetch(c);
    return NUMBER;
}


char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

/* the command to print the top of stack without popping or duplicating it */
int printTopofStack()
{
  printf("%i\n", val[sp - 1]);
}

/* command to swap top two places on stack */
void swap()
{
    int wasTop, willBeTop;
    wasTop = pop();
    willBeTop = pop();
    push(wasTop);
    push(willBeTop);
}

/* command to clear stack */
void clearStack()
{
    while (sp > 0)
    {
        pop();
    }
}
