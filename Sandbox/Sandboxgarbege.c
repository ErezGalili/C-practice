//printf("int=%d, char=%c\n", 'A', 'A');
//printf("int=%d, char=%c\n", 122, 122);
//char ch = '4';
//int num = ch - '0';
//printf("ch as char: %c, as int: %d\n", ch, ch);
//printf("number is %d\n", num);
//int base, exp, res;
//printf("Enter two numbers: ");
//scanf("%d%d", &base, &exp);
//res = Power(base, exp);
//printf("%d\n", res);

//int Power(int base, int exp) {
//	int result = 1;
//	for (int i = 0; i < exp; i++) {
//		result *= base;
//	}
//	return result;
//}


//float CalcTotal(float price) {
//	float totalPrice;
//	totalPrice = price + (price * TAXES);
//	return totalPrice;
//}

//const float taxes = 0.17;
//
//float CalcTotal1(float price) {
//	float totalPrice;
//	totalPrice = price + (price * taxes);
//	return totalPrice;
//}

//void main() {
//	//float price, res;
////printf("Enter Price: ");
////scanf("%f", &price);
////res = CalcTotal(price);
////printf("This is the total price: %f\n", res);
////
//}

//int x1 = 1, x2 = 2, y1 = 0, y2 = 0, y3, y4, y5, y6, y7, y8;
//y1 += 4;
//y2 *= x1 + 4;
//y3 = --x1 * x2++;
////y4 = (x1 * x2)--;
//y6 = y5 = x1 - 1;
//y7 = x1++ + x2++;
//y8 = (x1++) + (x2++);
//printf(" y1 = %d\n y2 = %d\n y3 = %d\n y5 = %d\n y6 = %d\n y7 = %d\n y8 = %d\n", y1, y2, y3, y5, y6, y7, y8);


//double d1 = 5.5, d2 = 7.0, dRes;
//int i1 = 4, i2 = 3, iRes, i3 = 100;
////dRes = i1 + d1;
////dRes = d1 + i1 / i2;
//dRes = d1 + d2 / i2;
////iRes = d1 + d1 / i2;
//iRes = (i3 - 'a' + 3) * d1;
//
//printf("%f\n", dRes);
//printf("%d", iRes);


//char op;
//
//int num1, num2, res, validOp = 1;
//
//printf("Please enter a math expression (Only +,-,*): ");
//scanf("%d%c%d", &num1, &op, &num2);
//
//switch (op) {
//case ('+'):
//	res = num1 + num2;
//	break;
//case ('-'):
//	res = num1 - num2;
//	break;
//case ('*'):
//	res = num1 * num2;
//	break;
//default:
//	validOp = 0;
//}
//
//if (validOp)
//printf("The result is %d\n", res);
//else
//printf("invalid operator\n");