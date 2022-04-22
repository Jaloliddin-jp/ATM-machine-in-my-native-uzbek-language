#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    unsigned long hisob=100000 , kirim, yechim, KR=8600130950471591, KETR=998946131507;
int choice, pin, k;
char transaction ='y';
   printf("               *****MAC JAMOASINING BANKOMATIGA XUSH KELIBSIZ*****        \n\n");
	while (pin != 571)
	{
		printf("\nMAC JAMOASINING KODINI KIRITING:");
		scanf("%d", &pin);
		if (pin != 571)
		printf("PIN KODNI KIRITGANDA XATOLIK YUZ BERDI ILTIMOS QAYTATDAN KIRITING\n");
	}
	do
	{
        printf("0. KARTA HAQIDA MA'LUMOT\n");
		printf("1. HISOBNI TEKSHIRISH\n");
		printf("2. PUL YECHIB OLISH\n");
		printf("3. PUL TO'LDIRISH\n");
		printf("4. CHIQISH\n");

		printf("TANLAGAN BO'LIMINGIZNING SONINI KIRITING: ");
		scanf("%d", &choice);
		switch (choice)
		{
        case 0:
			printf("KARTANGIZNING RAQAMI: %lu \n", KR);
            printf("KARTA EGASINING TELEFON RAQAMI : %lu \n", KETR);
			break;
		case 1:
			printf("\n SIZNING HISOBINGIZ $ : %lu ", hisob);
			break;
		case 2:
			printf("\n YECHILMOQCHI BO'LGAN PUL MIQDORINI KIRITING: ");
			scanf("%lu", &yechim);
			if (yechim % 100 != 0)
			{
				printf("\n KO'P PUL YECHISHGA URINYAPSIZ SHUNING UCHUN, YECHMOQCHI BO'LGAN PUL MIQDORINIG 100 GA BO'LINGANDAGI HOLATINI KIRITING");
			}
			else if (yechim >(hisob - 500))
			{
				printf("\n HISOB");
			}
			else
			{
				hisob = hisob - yechim;
				printf("\n\n YIG'MA HISOB");
				printf("\n HOZIRFA HISOBINGIZDAGI MABLAG ' %lu", hisob);
			}
			break;
		case 3:
            printf("QANDAY KO'RINISHDAGI PUL BILAN HISOBINGIZNI TO'LDIRMOQCHISIZ: ");
            printf("10. NAQT\n");
            printf("11. ELEKTRON\n");
		    scanf("%d", &choice);
            {
                case 10:
	            printf("XURMATLI KARTA FOYDALANUVCHISI ILTIMOS PULINGIZNI BANKOMAT QUTISIGA SOLING ");
			    break;
                case 11:
	            printf("PULI YECHILADIGAN KARTANGIZNI KIRITING ");
			    break;
            }

		    switch (choice)
			printf("\n TO'LDIRMOQCHI BO'LGAN PUL MABLAG'INGIZNI KIRITING: ");
			scanf("%lu", &kirim);
                        hisob = hisob + kirim;
			printf("HOZIRGI HISOBINGIZ  %lu", hisob);
			break;
		case 4:
			printf("\n MAC JAMOASINING BANKOMATINI ISHLATGANINGIZDAN BENIHOYAT XURSANDMIZ");
			break;
		default:
			printf("\n KIRITGANDA XATOLIK YUZ BERDI ILTIMOS QAYTATDAN KIRITING");
		}
		printf("\n\n\n SIZGA YANA YORDAM KERAKMI?(X/Y): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'X'|| transaction == 'x');
                  {
                    k = 1;
                  }


	} while (k==1);
	printf("\n\n MAC JAMOASINING BANKOMATINI ISHLATGANINGIZDAN BENIHOYAT XURSANDMIZ");
}