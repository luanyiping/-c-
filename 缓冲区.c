#include<stdio.h>
// ȷ��ʧ��
//int main()
//{
//	char password[10] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//}

// �ɹ�����
int main()
{
	char password[20];
	printf("����������:");
	scanf("%s",password);
	printf("��ȷ������:(Y/N):");
	int ch = 0;
	ch = getchar();
	while ((ch = getchar()) != '\n'); // ʹ��gets��Ҫ������ȥ������Ϊgets��\n��Ϊ������־��������ת����'\0',��Իس�
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
}