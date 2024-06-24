#run this
gcc -c wave.c -o wavec.o && f95 -c wave.f90 -o wavef.o && f95 wavef.o wavec.o
