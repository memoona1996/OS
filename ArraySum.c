#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int arr[1000];
void * MySumFunc(void * arg);
int main()
{
 
	 for(int i=0; i<1000;i++)
		arr[i]=i+1;

	 pthread_t t1;pthread_t t2;pthread_t t3;pthread_t t4;pthread_t t5;pthread_t t6;
	 pthread_t t7;pthread_t t8;pthread_t t9;pthread_t t10;

	 pthread_create(&t1,NULL,MySumFunc,(void*)100);
	 pthread_create(&t2,NULL,MySumFunc,(void*)200);
	 pthread_create(&t3,NULL,MySumFunc,(void*)300);
	 pthread_create(&t4,NULL,MySumFunc,(void*)400);
	 pthread_create(&t5,NULL,MySumFunc,(void*)500);
	 pthread_create(&t6,NULL,MySumFunc,(void*)600);
	 pthread_create(&t7,NULL,MySumFunc,(void*)700);
	 pthread_create(&t8,NULL,MySumFunc,(void*)800);
	 pthread_create(&t9,NULL,MySumFunc,(void*)900);
	 pthread_create(&t10,NULL,MySumFunc,(void*)1000);
 
	 int s1=0; int s2=0; int s3=0; int s4=0; int s5=0; int s6=0; int s7=0; 
	 int s8=0; int s9=0; int s10=0; 
	 pthread_join(t1, (void **)&s1);
	 pthread_join(t2, (void **)&s2);
	 pthread_join(t3, (void **)&s3);
	 pthread_join(t4, (void **)&s4);
	 pthread_join(t5, (void **)&s5);
	 pthread_join(t6, (void **)&s6);
	 pthread_join(t7, (void **)&s7);
	 pthread_join(t8, (void **)&s8);
	 pthread_join(t9, (void **)&s9);
	 pthread_join(t10, (void **)&s10);

	 int sum=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;

	 printf(sum);
	 return 0;
}

void * MySumFunc(void * arg)
{
 	int stop = (int) arg;
 	int start=stop-100;
	int to_ret=0;
	for (int i=start; i<stop; i++)
		to_ret+=arr[i];
 	
	return (void*)to_ret;
		
}
