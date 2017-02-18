table: table.c
	gcc table.c -o table.exe
	./table.exe > table
crc: crc.c
	gcc crc.c -o crc.exe
	./crc.exe
