#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////EOF
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//123456
//	//gets
//	printf("��ȷ�����룺>");
//	//��������
//	//getchar()://����\n'
//	//
//	//���������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//
//	}
//
//	int ch = getchar();
//	if (ch = 'Y')
//	{
//		printf("ȷ�ϳɹ�")��
//	}
//	else {
//		printf("ȷ��ʧ��\n")
//	}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//EOF
//
//int main()
	//{
	//	//
	//	char password[20] = { 0 };
	//	printf("����������:>");
	//	scanf("%s", password);//123456
	//	//gets
	//	printf("��ȷ������(Y/N):>");
	//	//��������
	//	//getchar();//����'\n'
	//	// 
	//	//�����������ж���ַ�
	//	int tmp = 0;
	//	while ((tmp = getchar()) != '\n')
	//	{
	//		;
	//	}
	//
	//	int ch = getchar();
	//	if (ch == 'Y')
	//	{
	//		printf("ȷ�ϳɹ�\n");
	//	}
	//	else
	//	{
	//		printf("ȷ��ʧ��\n");
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int ch = 0;
	//	while ((ch=getchar()) != EOF)
	//	{
	//		if (ch < '0' || ch>'9')
	//			continue;
	//
	//		putchar(ch);
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 1;//��ʼ��
	//
	//	while (i <= 10)//�жϲ���
	//	{
	//		printf("%d ", i);
	//		i++;//��������
	//	}
	//
	//	return 0;
	//}
	//
	//int main()
	//{
	//	int i = 0;
	//
	//	for (i = 1; i <= 10; i++)
	//	{
	//		//if (i == 5)
	//		//	break;
	//		if (i == 5)
	//			continue;
	//
	//		printf("%d ", i);
	//	}
	//
	//	return 0;
	//}

	//ѭ�����ڸı�ѭ������������
	// 
	//int main()
	//{
	//	int i = 0;
	//	for (i = 1; i <= 10; i++)
	//	{
	//		printf("%d ", i);
	//		int j = 0;
	//		for (j = 0; j < 10; i++)
	//		{
	//			printf("hehe\n");
	//		}
	//	}
	//	return 0;
	//}


	//int main()
	//{
	//	int arr[10] = { 0 };
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//	return 0;
	//}


	//int main()
	//{
	//	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ��
	//	for (;;)
	//	{
	//		printf("hehe\n");
	//	}
	//	return 0;
	//}
	//
	//int main()
	//{
	//	int i = 0;
	//	int j = 0;
	//	for (; i < 3; i++)
	//	{
	//		for (; j < 3; j++)
	//		{
	//			printf("hehe\n");
	//		}
	//	}
	//
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 1;
	//	do
	//	{
	//		if (i == 5)
	//			break;
	//
	//		printf("%d ", i);
	//		i++;
	//	} while (i<=10);
	//
	//	printf("hehe\n");
	//	return 0;
	//}

	//while for do while

	//n!  - 1->n

	//int main()
	//{
	//	int i = 0;
	//	int n = 0;
	//	int ret = 1;
	//	//1*2*3*4*5 = 120
	//	scanf("%d", &n);
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret *= i;
	//	}
	//	printf("%d\n", ret);
	//
	//	return 0;
	//}

	//���� 1!+2!+3!+����+10!
	//
	//int main()
	//{
	//	int i = 0;
	//	int n = 0;
	//	int ret = 1;
	//	int sum = 0;
	//	//1!+2!+3! = 1+2+6 = 9
	//	//3! = 3*2*1 = 3*2!
	//	//2!=2*1
	//
	//	//for (n = 1; n <= 3; n++)
	//	//{
	//	//	ret = 1;//����n�Ľ׳�֮ǰ����ret��ʼΪ1
	//	//	for (i = 1; i <= n; i++)
	//	//	{
	//	//		ret *= i;
	//	//	}
	//	//	sum += ret;
	//	//}
	//
	//	for (n = 1; n <= 3; n++)
	//	{
	//		ret *= n;
	//		sum += ret;
	//	}
	//
	//	printf("%d\n", sum);
	//
	//	return 0;
	//}

	//
	//int main()
	//{
	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int k = 7;//Ҫ���ҵ�����
	//	//��arr�������������в���k��7����ֵ
	//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
	//	int left = 0;
	//	int right = sz-1;
	//	while (left<=right)
	//	{
	//		int mid = (left + right) / 2;
	//		if (arr[mid] < k)
	//		{
	//			left = mid + 1;
	//		}
	//		else if (arr[mid] > k)
	//		{
	//			right = mid - 1;
	//		}
	//		else
	//		{
	//			printf("�ҵ���,�±���:%d\n", mid);
	//			break;
	//		}
	//	}
	//	if (left > right)
	//	{
	//		printf("�Ҳ�����\n");
	//	}
	//	return 0;
	//}
	//


	//welcome to bit!!!!!!
	//####################

	//w##################!
	//we################!!
	//wel##############!!!
	//...
	//welcome to bit!!!!!!
	//#include <string.h>
	//#include <windows.h>
	//
	//int main()
	//{
	//	char arr1[] = "welcome to bit!!!!!!";
	//	char arr2[] = "####################";
	//	int left = 0;
	//	int right = strlen(arr1)-1;
	//
	//	while (left<=right)
	//	{
	//		arr2[left] = arr1[left];
	//		arr2[right] = arr1[right];
	//		printf("%s\n", arr2);
	//		Sleep(1000);//˯��1��
	//		system("cls");//�����Ļ
	//		left++;
	//		right--;
	//	}
	//	printf("%s\n", arr2);
	//
	//	return 0;
	//}
#include <string.h>
//strlen
//strcmp
//
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ���"123456"
//
//	char password[20] = { 0 };
//	//abcdef
//	//abccqqqqqq
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if (password == "123456")//err - �����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��������������룡\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//
//	return 0;
//}

//
//дһ����������Ϸ
//1. �Զ�����һ��1-100֮��������
//2. ������
//  a. �¶��ˣ��͹�ϲ�㣬��Ϸ����
//  b. ��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3. ��Ϸһ��һֱ�棬�����˳���Ϸ
//
//
//#include <stdlib.h>
//#include <time.h>
//
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*******  1. play     ********\n");
//	printf("*******  0. exit     ********\n");
//	printf("*****************************\n");
//}
////
//void game()
//{
//	//��������Ϸ��ʵ��
//	//1. ���������
//	//rand����������һ��0-32767֮�������
//	//ʱ�� - ʱ���
//
//
//	int ret = rand()%100+1;//%100��������0-99��Ȼ��+1����Χ����1-100
//	//printf("%d\n", ret);
//
//	//2. ������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int  main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//

#include <stdio.h>

	int main()
	{
		char arr[10] = { 0 };
		gets(arr);
		puts(arr);
		return 0;
	}


}