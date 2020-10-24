#recorre cada archivo de la carpeta src(linea8)
#entra al directorio y compila el archivo(linea10)
#entra al directorio y mueve el archivo(linea11)
#remueve el archivo(linea15)
default: all 

all:
	@for i in src; do \
	echo "Compilando archivo"; \
	(cd $$i && gcc hora.c -o hora); \
	(cd $$i && mv hora ..); \
	echo "Archivo compilado"; done

clean:
	rm hora
	
