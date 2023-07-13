# readpe

# usage
~/readpe/lib$ gcc -shared -fPIC -o libpetest.so petest.c
<br>
~/readpe$ LD_LIBRARY_PATH=./lib ./main calc.exe
