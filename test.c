void menu() {
	printf("**********************\n");
	printf("** 1.Add      2.Sub **\n");
	printf("** 3.Mul      4.Div **\n");
	printf("** 5.Xor      0.exit**\n");
	printf("**********************\n");
}
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	menu();
//	do {
//		printf("请选择:->");
//		scanf("%d", &input);
//		int (*parr[])(int, int)={0,Add,Sub,Mul,Div};
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个数：");
//			scanf("%d%d",&x,&y);
//			printf("%d\n", parr[input](x, y));
//		}
//		else if (input == 0) {
//			printf("退出");
//		}
//		else {
//			printf("输入错误");
//		}
//
//	} while (input);
//	return 0;
//}


//
//回调函数
//
void calc(int (*pm)(int,int)) {
	int x = 0;
	int y = 0;
	printf("请输入两个数：");
	scanf("%d%d",&x,&y);
	printf("%d\n", pm(x, y));
}

//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	menu();
//	do {
//		printf("请选择:->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("输入错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}

void print1(char* p) {
	printf("%s\n",p);
}
void test(void (*pf)(char*)) {
	printf("hello\n");
	pf("bit");
}

//int main() {
//	test(print1);
//	return 0;
//}



//int main() {
//	int arr[] = { 0 };
//	int(*parr)[] = &arr;
//	int (*pf[4])(int, int);  //pf是一个数组，每个元素都是函数指针---函数指针数组，
//	int (*( * pfarr)[])(int, int) = &pf;//pfarr是一个指针，指向的是函数指针数组
//	//int (*)(int,int)   指向的数组的每个元素类型是一个函数指针
//	return 0;
//}

