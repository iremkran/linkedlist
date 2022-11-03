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

    printf("Ýsim Soyisim:");
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
        printf("Öðrenci Eklendi \n");


    }

    return head;

}
node *sil(node *head)
{	
  
        int ogrNo;
        printf("Öðrenci Numarasý: ");
        scanf("%d",&ogrNo);
       	node *temp=head;
            node *iter=head;
            while(temp->next!=NULL)
            {
                if(temp->no==ogrNo)
                {
                    iter->next=temp->next;
                    free(temp);
                    printf("Öðrenci Silindi \n",ogrNo);
                    break;
                }
                iter=temp;
                temp=temp->next;
            }
            if(temp->no==ogrNo)
            {
                iter->next==NULL;
                free(temp);
                printf("Öðrenci Silindi\n",ogrNo);
            }
            return head;
        }
    
     
    node *bul(node *head)
{	
  
        int ogrNo;
        printf("Öðrenci Numarasý: ");
        scanf("%d",&ogrNo);
       	node *temp=head;
        node *iter=head;
           
        if(temp->no==ogrNo)
        {
            iter->next=temp->next;
                    
            printf("Öðrencinin Ad Soyadý:%s %s\n",temp->ad,temp->soyad);
            printf("Öðrencinin Numarasý:%d\n",temp->no);


                  
        }
        iter=temp;
        temp=temp->next;
            
        if(temp->no==ogrNo)
        {
            iter->next==NULL;
            
                printf("Öðrencinin Ad Soyadý:%s %s\n",temp->ad,temp->soyad);
                printf("Öðrencinin Numarasý:%d\n",temp->no);

        }
        return head;
        }    
        

node *yazdir(node *head)
{
    
    node o1,o2;
    strcpy(o1.ad, "Serpil Üstebay");
    o1.no =123456;

    strcpy(o2.ad, "Ayþe Gül");
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
        printf("\tÖÐRENCÝ BÝLGÝ SÝSTEMÝ\n");
        printf("1-Öðrenci Ekle \n");
        printf("2-Öðrenci Sil \n");
        printf("3--Öðrencileri Yazdýr \n");
        printf("4-Öðrenci Bul \n");
        printf("5-Çýkýþ \n");
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
            printf("Lütfen geçerli sayýlarý giriniz!");
        }


    }


}

