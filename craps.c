#include <stdio.h>
#include <time.h>

int main()
{

    int firstValue, secondValue, diceResult, tempDiceValue;
    char isGO, isGoing;
    int i = 0;
    while (1)
    {
        while (1)
        {
            srand(time(NULL));
            firstValue = rand() % 6 + 1;
            secondValue = rand() % 6 + 1;
            diceResult = firstValue + secondValue;
            if (diceResult == 7 || diceResult == 11)
            {
                printf("Zarlar atiliyor... %d ", diceResult);
                printf("Kazandiniz\n");
                break;
            }
            else if (diceResult == 2 || diceResult == 3 || diceResult == 12)
            {
                printf("Zarlar atiliyor... %d ", diceResult);
                printf("Kaybettiniz\n");
                break;
            }
            else
            {
                tempDiceValue = diceResult;
                while (1)
                {
                    printf("Zarlar atiliyor... %d Sonuc belirsiz, tekrar zar atilacak. At (a/A)?", tempDiceValue);
                    scanf(" %c", &isGO);
                    if (isGO == 'a' || isGO == 'A')
                    {
                        firstValue = rand() % 6 + 1;
                        secondValue = rand() % 6 + 1;
                        tempDiceValue = firstValue + secondValue;
                        if (tempDiceValue == 7)
                        {
                            printf("Zarlar atiliyor... %d ", tempDiceValue);
                            printf("Kaybettiniz\n");
                            break;
                        }
                        else if (diceResult == tempDiceValue)
                        {
                            printf("Zarlar atiliyor... %d Kazandiniz\n", tempDiceValue);
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
            if (diceResult == tempDiceValue || tempDiceValue == 7)
                break;
        }
        printf("Yeni oyun oynansin mi (e/E - h/H)?");
        scanf(" %c", &isGoing);
        if (isGoing == 'e' || isGoing == 'E')
        {
            continue;
        }
        else if (isGoing == 'h' || isGoing == 'H')
            break;
    }
    system(“pause”);
    return 0;
}
