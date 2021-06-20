/* A simple calculator cli program. */
#include <stdio.h>
#include <math.h>
#include "vars.h"

int main(void) {

    Calc_t op;
    /* Get input for oper and values. */
    printf(" >>>");
    scanf("%c", &op.oper);
    op.val1 = (scanf("%lf", &op.arg) ==1) ? op.arg : 0;
    op.val2 = (scanf("%lf", &op.arg) ==1) ? op.arg : 0;
    /* Determine result based on user input. */
    switch(op.oper) {
        case '+':
            op.result = op.val1 + op.val2;
            break;
        case '-':
            op.result = op.val1 - op.val2;
            break;
        case '*':
            op.result = op.val1 * op.val2;
            break;
        case '/':
            op.result = (op.val2 != 0) ? op.val1 / op.val2 : 0;
            break;
        case '^':
            op.result = pow(op.val1, op.val2);
            break;
        case 'r':
            op.result = (op.val2 == 2) ? op.result = sqrt(op.val1) :
            (op.val2 == 3) ? op.result = cbrt(op.val1) : 0;
            break;
        default:
            fprintf(stderr, "\tErr::\n");
            return 0;
            break;
    }
    printf("%f\n", op.result);
    return 0;
}
