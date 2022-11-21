#include <iostream>

using namespace std;
int x,z,y,j,kk,jj,t,w,q,a,s,m,n,MOSTRA,COMECA;
int u=0;
int p=0;
int g=0;
int h=0;
int b=0;
int k=0;
int c=5;
int l=5;

int jogador=1;
char jogo[3][3];
char jogo1[3][3];
char jogo2[3][3];
int main()
{
    printf("Aperte 1 para começar a jogar:");
    scanf("%d", &x);
    if(x==1)
    {
        MOSTRA=1;
    }


    if(MOSTRA==1)
    {
        printf("\n");
        while(j=1)
        {


        for(z=1 ; z<4 ;z++)
        {

                for(y=1; y<4; y++)
                {
                    if(jogo[z][y]=='x' || jogo[z][y]=='o')
                    {
                        kk=1;
                    }
                    else
                    {
                        kk=0;
                    }
                        if(l==z && c==y)
                            {
                                if (jogador==2 && jogo[z][y]!='x')
                                {
                                   jogo[z][y]='o';
                                   jogador=1;

                                }
                                if (jogador==1 && jogo[z][y]!='o')
                               {
                                   jogo[z][y]='x';
                                   jogador=2;
                               }

                            }
                            if (kk==0 && l!=z && c!=y && (jogo1[l][c]!='x'||jogo2[l][c]!='o'))
                            {
                            jogo[z][y]='-';
                            }
                            printf("%c",jogo[z][y]);



                }

                printf("\n");

                if(y==4)
                {
                    j=0;

                }
        }

                //linhas
                 for(a=1 ; a<4 ;a++)
                {

                    for(s=1; s<4; s++)
                    {
                        if(jogo[a][s]=='x' && jogo[a][s]==jogo[a][s+1])
                            {
                                u++;
                            }
                            if(jogo[a][s]=='o' && jogo[a][s]==jogo[a][s+1])
                            {
                                p++;
                            }
                            if(jogo[a][s]=='o' && jogo[a][s]!=jogo[a][s+1] && p!=2)
                            {
                                p=0;
                            }
                             if(jogo[a][s]=='x' && jogo[a][s]!=jogo[a][s+1] && u!=2)
                            {
                                u=0;
                            }
                    }
                }

                //colunas
                 for(w=1 ; w<4 ;w++)
                {

                    for(q=1; q<4; q++)
                    {
                            if(jogo[q][w]=='x' && jogo[q][w]==jogo[q+1][w])
                            {
                                g++;
                            }
                            if(jogo[q][w]=='o' && jogo[q][w]==jogo[q+1][w])
                            {
                                h++;
                            }
                            if(jogo[q][w]=='o' && jogo[q][w]!=jogo[q+1][w] && h!=2)
                            {
                                h=0;
                            }
                             if(jogo[q][w]=='x' && jogo[q][w]!=jogo[q+1][w] && g!=2)
                            {
                                g=0;
                            }
                    }
                }
                //diagonal
                for(n=1; n<4; n++)
                {
                    for(m=1;m<4;m++)
                    {
                         if(jogo[n][m]=='x' && jogo[n][m]==jogo[n+1][m+1])
                            {
                                k++;
                            }
                            if(jogo[n][m]=='o' && jogo[n][m]==jogo[n+1][m+1])
                            {
                                b++;
                            }
                            if(jogo[n][m]=='o' && jogo[n][m]!=jogo[n][m+1] && b!=2)
                            {
                                b=0;
                            }
                             if(jogo[n][m]=='x' && jogo[n][m]!=jogo[n][m+1] && k!=2)
                            {
                                k=0;
                            }
                    }
                }

        printf("\n");
        COMECA=1;
        if(COMECA==1)
        {
                // printf("jogador: ");
           //      scanf("%d",&jogador);

                if(p==2 || h==2 || b==2)
                {
                    printf("BOLA venceu \n");
                    p=0;
                    h=0;
                    b=0;
                    j=1;

                }
                if(u==2 || g==2 || h==2)
                {
                    printf("X venceu \n");
                    u=0;
                    h=0;
                    b=0;
                    j=1;

                }
                printf("Escolha uma coluna: ");
                scanf("%d",&c);
                printf("Escolha uma linha: ");
                scanf("%d",&l);
                if (jogador==2)
                {
                  jogo2[l][c]='o';
                  j=1;
                }
                if (jogador==1)
                {
                  jogo1[l][c]='x';
                  j=1;
                }

        }

        }


    }
}
