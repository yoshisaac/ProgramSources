#run this
cc round_wave.c -c -o round_wavec.o && f95 round_wave.f90 -c -o round_wavef.o && f95 round_wavec.o round_wavef.o
