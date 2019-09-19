#include  <stdio.h>
#include  <sys/types.h>
int even(){
int n;
	printf("enter n\n");
	scanf("%d",&n);
	if(n%2==0)
		printf("even=%d\n",n);
	

}
int odd(){
int n;
	printf("enter n\n");
	scanf("%d",&n);
	if(n%2==1)
		printf("odd=%d\n",n);
	

}
void main()
{
	pid_t pid;
	pid=fork();

		printf("this is pid =%d\n",pid);
	if(pid==0)
		printf("%d\n",pid);

	else 
		printf("%d\n",pid );

}