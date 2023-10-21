#include <stdio.h>
#include <string.h>

int main(){

    int select, i, c, alterar, alterarItem, click, clickdois, excluir;
    char nome[10][100], email[10][30], data[10][20], insta[10][20], face[10][50], whats[10][30], buscar[100];

    do{
        printf("1- Inserir contato \n2- Alterar contato \n3- Excluir contato \n4- Pesquisar contato \n5- Listar contatos \n6- Sair \n");
        scanf("%d", &select);
        getchar();

        switch(select){
            
            case 1:
            
            printf("Digite o nome completo do contato: \n");
            fgets(nome[i], sizeof(nome[i]), stdin); //JOGA O NOME DIGITADO NO PRIMEIRO SLOT DO VETOR 'nome'

            printf("Digite o email: \n");
            fgets(email[i], sizeof(email[i]), stdin); //JOGA O EMAIL DIGITADO NO PRIMEIRO SLOT DO VETOR 'email'

            printf("Digite a data de nascimento: \n");
            fgets(data[i], sizeof(data[i]), stdin); //JOGA A DATA DIGITADA NO PRIMEIRO SLOT DO VETOR 'data'

            printf("Digite o instagram: \n");
            fgets(insta[i], sizeof(insta[i]), stdin); //JOGA O INSTAGRAM DIGITADO NO PRIMEIRO SLOT DO VETOR 'insta'

            printf("Digite o facebook: \n");
            fgets(face[i], sizeof(face[i]), stdin); //JOGA O FACEBOOK DIGITADO NO PRIMEIRO SLOT DO VETOR 'face'

            printf("Digite o numero do whatsapp: \n");
            fgets(whats[i], sizeof(whats[i]), stdin); //JOGA O WHATSAPP DIGITADO NO PRIMEIRO SLOT DO VETOR 'whats'

            i++; //ADICIONA UM NUMERO NO CONTADOR CADA VEZ QUE UM CONTATO É ADICIONADO NOS VETORES
            break;

            case 2:
            printf("Aqui esta a lista de contatos \n"); 
            for (c = 0; c<i; c++){
                printf("%d- %s", c, nome[c]);} //PRINTA A LISTA DE CONTATOS COM UM NUMERO NA FRENTE, QUE REPRESENTA O INDICE DE SEU VETOR
            printf("Digite o numero do contato que voce deseja alterar \n");
            scanf("%d", &alterar); 
            printf("O que voce quer alterar no contato? \n");
            printf("1- Nome \n2- Email \n3- Data nascimento \n4- instagram \n5- Facebook \n6-Numero do whatsapp \n");
            scanf("%d", &alterarItem);
            switch(alterarItem){
                case 1:
                getchar();
                printf("Qual o novo nome? ");
                fgets(nome[alterar], sizeof(nome[alterar]), stdin); // JOGA O NOME DIGITADO NO INDICE DO VETOR QUE VOCE ESCOLHEU
                break;

                case 2:
                getchar();
                printf("Qual o novo email? ");
                fgets(email[alterar], sizeof(email[alterar]), stdin); // JOGA O EMAIL DIGITADO NO INDICE DO VETOR QUE VOCE ESCOLHEU
                break;

                case 3:
                getchar();
                printf("Qual a nova data de nascimento? ");
                fgets(data[alterar], sizeof(data[alterar]), stdin); // JOGA A DATA DIGITADA NO INDICE DO VETOR QUE VOCE ESCOLHEU
                break;

                case 4:
                getchar();
                printf("Qual o novo instagram? ");
                fgets(insta[alterar], sizeof(insta[alterar]), stdin); // JOGA O INSTAGRAM DIGITADO NO INDICE DO VETOR QUE VOCE ESCOLHEU
                break;

                case 5:
                getchar();
                printf("Qual o novo facebook? ");
                fgets(face[alterar], sizeof(face[alterar]), stdin); // JOGA O FACEBOOK DIGITADO NO INDICE DO VETOR QUE VOCE ESCOLHEU
                break;

                case 6:
                getchar();
                printf("Qual o novo numero do celular? ");
                fgets(whats[alterar], sizeof(whats[alterar]), stdin); // JOGA O WHATSAPP DIGITADO NO INDICE DO VETOR QUE VOCE ESCOLHEU
                break;   
            }
            break;

            case 3:
            printf("Aqui a lista de contatos: \n");
            for (excluir = 0; excluir<i; excluir++){ 
                printf("%d- %s", excluir, nome[excluir]);} // PRINTA A LISTA DE CONTATOS COM OS INDICES DELES NA FRENTE
            printf("Qual contato deseja excluir?: \n");
            scanf("%d", &excluir); // ESCOLHE O CONTATO QUE DESEJA EXCLUIR, JUNTO COM SEU INDICE

            if(excluir >=0 && excluir<i){
                for(clickdois=excluir; clickdois < i-1 ; clickdois++){ //REPETIÇÃO QUE VAI DO INDICE ESCOLHIDO ATÉ O NUMERO TOTAL DE CONTATOS
                    strcpy(nome[clickdois], nome[clickdois + 1]); // COPIA O CONTEUDO DO INDICE A SEGUIR EM SEU PROPRIO
                    strcpy(email[clickdois], email[clickdois + 1]); // COPIA O CONTEUDO DO INDICE A SEGUIR EM SEU PROPRIO
                    strcpy(data[clickdois], data[clickdois + 1]); // COPIA O CONTEUDO DO INDICE A SEGUIR EM SEU PROPRIO
                    strcpy(insta[clickdois], insta[clickdois + 1]); // COPIA O CONTEUDO DO INDICE A SEGUIR EM SEU PROPRIO
                    strcpy(face[clickdois], face[clickdois + 1]); // COPIA O CONTEUDO DO INDICE A SEGUIR EM SEU PROPRIO
                    strcpy(whats[clickdois], whats[clickdois + 1]); // COPIA O CONTEUDO DO INDICE A SEGUIR EM SEU PROPRIO
                }
                i--; // DIMINUI UM NO NUMERO DOS CONTATOS, POIS EXCLUIMOS ELE
            }
            break;

            case 4:
            printf("Qual contato quer buscar? \n");
            fgets(buscar, 100, stdin); // JOGA O CONTATO DIGITADO NUM VETOR
            
            for(click=0 ; click<10 ; click++){ //REPETIÇÃO QUE VAI DE 0 A 10
                if(strcmp(nome[click], buscar)==0){ //SE O NOME DIGITADO E O NOME ENCONTRADO FOREM OS MESMOS, ELE PRINTA OS VETORES COM INDICE DO CLICK
                    printf("Nome: %s \nEmail: %s \nNascimento: %s \nInstagram: %s \nFacebook: %s \nNumero de telefone: %s \n", nome[click], email[click], data[click], insta[click], face[click], whats[click]);
                }
            }
            break;
            
            case 5:
            printf("Lista de contatos \n");
            for (c = 0; c<i; c++)
            printf("%s", nome[c]); //LISTA DE CONTATOS SEM INDICE NA FRENTE
            break;

        }

    }while(select != 6); // QUANDO DIGITADO O NUMERO 6- "SAIR", O PROGRAMA SE ENCERRA 
}