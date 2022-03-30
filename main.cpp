#include <iostream>

using namespace std;

void 1zadacha();
{
    ofstream file;
    file.open("test.txt",ios::in);



    int const S = 256, W=32 ;
   
    int track = 0;

    char sent[S], sentcpy[S];
    FILE *f;
    f=fopen("text.txt","r");
    fscanf(f,"%[^/n]s",&sent);
    
    
    
    strcpy(sentcpy, sent);


    for (int i = 0; i <= strlen(sentcpy); i++)
    {
        sentcpy[i] = tolower(sentcpy[i]);
    }

    wordinfo wordmas[W];

    char delim[] = " !?.,-:\"";
    char* word = strtok(sentcpy, delim);

    while (word != nullptr)
    {
        int chek=0;

        for (int i = 0; i < track; i++)
        {
            if (strcmp(wordmas[i].word, word) == 0)
            {
                wordmas[i].times++;
                chek++;
            }
        }
        if (chek == 0)
        {
            strcpy(wordmas[track].word, word);
            wordmas[track].times++;
        }

        track++;
        word = strtok(nullptr, delim);
    }


    for (int i = 0; i < track; i++)
    {
        if (wordmas[i].times==0)
            cout << wordmas[i].word<< "-"<< wordmas[i].times<< endl;
    }

    system("pause");
}
void elochcka(int height)
{
    int height1 = height;\
    int num =1;

    while (height != 0)
    {
        char space = ' ';
        for (int i = height; i > 0; i--)
        {
            cout << ' ';
        }
        height--;
        for (int j = 0; j<num; j++)
        {
            cout << '*';
        }
        num+=2;
        cout << endl;
    }
}

int main()
{
    
    return 0;
}
