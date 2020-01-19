#include<stdio.h>
#include<string.h>
void docfile(FILE *fsrc);
void copyfile(FILE *fsrc,FILE *fsrc2);
void timcumkt(FILE *fsrc);
int demcumkt(FILE *fsrc);
void thaycumkt(FILE *fsrc);

void main()
{
	int m;
	FILE *f1=fopen("taptin1.txt","r");
	FILE *f2=fopen("taptin2.txt","w");
//	docfile(f1);
//	copyfile(f1,f2);
	timcumkt(f1);
	printf("\n\ntrong file co:\n");
  m=demcumkt(f1);
  printf("\nco %d cum ki tu trong file",m);
  printf("\n\nthay the ki tu:\n");
  thaycumkt(f1);
	fclose(f1);
	fclose(f2);
}



void docfile(FILE *fsrc)
{
	int b;
	char kt,bt;
	if(fsrc)
	{
		kt=fgetc(fsrc);
		printf("%c",kt);
	    while((kt=fgetc(fsrc))!=EOF)
	    {
	     printf("%c",kt);
	    }
	 fclose(fsrc);
	}
}



void copyfile(FILE *fsrc,FILE *fsrc2)
{
	char kt;
		 kt=fgetc(fsrc);
		 fputc(kt,fsrc2);
	     while((kt=fgetc(fsrc))!=EOF)
	    {
	     fputc(kt,fsrc2);
	    }
}



void timcumkt(FILE *fsrc)
{
	int i,j,dem=0,kq=0,n;
	char kt,chuoi[50],bt;
	printf("nhap cum ki tu can dem trong file:");
	fgets(chuoi,50,stdin);
	n=strlen(chuoi)-1;
	if(fsrc)
	{
    while((kt=fgetc(fsrc))!=EOF)
    { 
//   	printf("\nki tu la %c",kt);

    	if(kt==chuoi[0])
    	{
    		dem++;
    for(i=1;i<=n;i++)
    {
    	kt=fgetc(fsrc);
//    	printf("\nki tu so sanh %c",kt);
    	if(i==n&&kt>=65&&kt<=90||i==n&&kt>=97&&kt<=122)
    	{
    		dem=dem-n;
    		break;
		}
    	if(i<n&&kt==chuoi[i])
    	{
    	dem++;	
		}
		else if(i<n&&kt!=chuoi[i])
		{
		dem=dem-i;
		break;
		}
    }
    }
    }
    }
    fseek(fsrc,0,SEEK_SET);
    kq=dem/n;
    printf("co %d tu '%s' trong file",kq,chuoi);
}

int demcumkt(FILE *fsrc)
{
	int i,dem=0,kitu=0,tam=0;
	char kt;
	if(fsrc)
	{
	while((kt=fgetc(fsrc))!=EOF)
	{
	 kitu++;	
	}
	printf("\nco %d ki tu trong file",kitu);
	fseek(fsrc,0,SEEK_SET);
	for(i=0;i<=kitu;i++)
	{
		kt=fgetc(fsrc);
//		printf("\nki tu:%c",kt);
		if(dem==0&&kt>=65&&kt<=90||dem==0&&kt>=97&&kt<=122)
		{
			kt=fgetc(fsrc);
//			printf("\nki tu dau:%c",kt);
			if(kt<65||kt>90&&kt<97||kt>122)
			{
				dem=1;
//				printf("\ndem dau:%d",dem);
				fseek(fsrc,i+1,SEEK_SET);

			}
			else
			{
				fseek(fsrc,i,SEEK_SET);
			}
	    }
		if(dem>=1&&kt<65||dem>=1&&kt>90&&kt<97||dem>=1&&kt>122)
		{
			kt=fgetc(fsrc);
//			printf("\nki tu sau:%c",kt);
			if(kt>=65&&kt<=90||kt>=97&&kt<=122)
			{
				dem++;
//				printf("\ndem sau%d",dem);
				fseek(fsrc,i+1,SEEK_SET);
			}
			else
			{
				fseek(fsrc,i,SEEK_SET);
			}
		}
    }
    }
    fseek(fsrc,0,SEEK_SET);
	return dem;
}

void thaycumkt(FILE *fsrc)
{
	int i,j,dem=0,m,n,tam=0,h,l=0,k=0;
	char kt,chuoi1[50],chuoi2[50],bt;
	FILE *f3=fopen("taptin3.txt","w");
	printf("\nnhap cum ky tu can thay the:");
	fgets(chuoi1,50,stdin);
	m=strlen(chuoi1)-1;
	printf("\nnhap cum ky tu thay the:");
	fgets(chuoi2,50,stdin);
	n=strlen(chuoi2)-1;
	if(fsrc)
	{
		kt=fgetc(fsrc);
		while((kt=fgetc(fsrc))!=EOF)
		{
			tam++;
		}
		fseek(fsrc,0,SEEK_SET);
        for(i=0;i<=tam;i++)
        { 
            k=0;
            dem=0;
        	kt=fgetc(fsrc);
			if(kt!=chuoi1[0])
			{
				fputc(kt,f3);
		    }
			else if(kt==chuoi1[0])
			{
				dem++;
			    for(j=1;j<=m;j++)
			    {
			    	kt=fgetc(fsrc);
			    	if(j==m&&kt>=65&&kt<=90||j==m&&kt>=97&&kt<=122)
    	            {
    	             k=m;
    		         dem=dem-m;
		            }
					if(j<m&&kt==chuoi1[j])
                	{
    	             dem++;	
		            }
		            if(j<m&&kt!=chuoi1[j])
		            {
		             k=j;
	             	 dem=dem-j;
		             break;
	            	}	
				}
			if(dem!=m)
			{
				for(h=0;h<k;h++)
				{
					fputc(chuoi1[h],f3);
				}
				fputc(kt,f3);
			}
			else
				{
					l++;
				    for(h=0;h<n;h++)
				    {
				     fputc(chuoi2[h],f3);
				    }
				    fputc(kt,f3);
				}
		    }
	    }
    }
    if(m>n)
    {
    	tam=tam-((m-n)*l);
	}
    if(m<n)
	{
		tam=tam+((n-m)*l);
	}
	close(f3);
	close(fsrc);
	fseek(f3,0,SEEK_SET);
	FILE *f4=fopen("taptin3.txt","r");
	FILE *f5=fopen("taptin1.txt","w");
	for(i=0;i<=tam;i++)
	{
		bt=fgetc(f4);
		fputc(bt,f5);
	}
	close(f4);
	close(f5);
}	
