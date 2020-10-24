#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

//muestra la fecha y la hora
void tiempo (){
	time_t tiempito;//defino variable para el tiempo
	time(&tiempito);//aca le asigna tiempito como varible del tiempo
	printf("señal recibida: ");
	printf("%s\n",ctime(&tiempito));//imprime el tiempo que demora
}

int main(void){
	printf("ejecutando PID=%d\n",getpid());//captura el pid
	printf("esperando señal\n");
	signal(SIGUSR1,&tiempo);//aqui cuando llegue la señal, llamaria a la funcion tiempo
	while(1){//para que no se cierre el proceso, se crea un bucle infinito
	pause();//el pause espera la señal
	}
	return 0;
}


