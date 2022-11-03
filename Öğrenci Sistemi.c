#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ogrenci
{
    int no;
    char ad[50],soyad[50];
    struct ogrenci *next;
};
typedef struct ogrenci node;
node *ekle(node *head)
{
    
    node *ogr=(node *)malloc(sizeof(node));

    printf("�sim Soyisim:");
    scanf("%s %s",&ogr->ad,&ogr->soyad);
    printf("Numara:");
    scanf("%d",&ogr->no);
    if(head==NULL)
    {
        head=ogr;
        head->next=NULL;
    }
    else
    {
        ogr->next=head;
        head=ogr;
        printf("��renci Eklendi \n");


    }

    return head;

}
node *sil(node *head)
{	
  
        int ogrNo;
        printf("��renci Numaras�: ");
        scanf("%d",&ogrNo);
       	node *temp=head;
            node *iter=head;
            while(temp->next!=NULL)
            {
                if(temp->no==ogrNo)
                {
                    iter->next=temp->next;
                    free(temp);
                    printf("��renci Silindi \n",ogrNo);
                    break;
                }
                iter=temp;
                temp=temp->next;
            }
            if(temp->no==ogrNo)
            {
                iter->next==NULL;
                free(temp);
                printf("��renci Silindi\n",ogrNo);
            }
            return head;
        }
    
     
    node *bul(node *head)
{	
  
        int ogrNo;
        printf("��renci Numaras�: ");
        scanf("%d",&ogrNo);
       	node *temp=head;
        node *iter=head;
           
        if(temp->no==ogrNo)
        {
            iter->next=temp->next;
                    
            printf("��rencinin Ad Soyad�:%s %s\n",temp->ad,temp->soyad);
            printf("��rencinin Numaras�:%d\n",temp->no);


                  
        }
        iter=temp;
        temp=temp->next;
            
        if(temp->no==ogrNo)
        {
            iter->next==NULL;
            
                printf("��rencinin Ad Soyad�:%s %s\n",temp->ad,temp->soyad);
                printf("��rencinin Numaras�:%d\n",temp->no);

        }
        return head;
        }    
        

node *yazdir(node *head)
{
    
    node o1,o2;
    strcpy(o1.ad, "Serpil �stebay");
    o1.no =123456;

    strcpy(o2.ad, "Ay�e G�l");
    o2.no =123457;
  

  printf("Ad Soyad: %s\nNumara: %d \n\n", o1.ad, o1.no);
  printf("Ad Soyad: %s\nNumara: %d \n\n", o2.ad, o2.no);
    
        node *o=head;
        while(o!=NULL)
        {

            printf("Ad Soyad: %s %s\nNumara : %d \n\n",o->ad,o->soyad,o->no);
            o=o->next;
        }



    return head;
}


int main()
{
    int secim;
    node *head=NULL;
    while(1)
    {
        printf("\t��RENC� B�LG� S�STEM�\n");
        printf("1-��renci Ekle \n");
        printf("2-��renci Sil \n");
        printf("3--��rencileri Yazd�r \n");
        printf("4-��renci Bul \n");
        printf("5-��k�� \n");
        scanf("%d",&secim);
        switch(secim)
        {
        case 1:
            head=ekle(head);
            break;
        case 2:
            head=sil(head);

            break;
        case 3:
            head=yazdir(head);

            break;
        case 4:
            head=bul(head);

            break;
        case 5:
            exit(0);
            break;
        default:
            printf("L�tfen ge�erli say�lar� giriniz!");
        }


    }


}

