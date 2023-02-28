#include <stdio.h>
//#include <conio.h>

int main(){
	/**/
	
	
	printf("Hangi yilda oldugumuzu rakamla giriniz:  ");
	int buyil;
	scanf("%d",&buyil);
	printf("dogdugunuz yili rakamla giriniz: ");
	int dogumtarihi;
	scanf("%d",&dogumtarihi);
	printf("%d yasindasiniz.",buyil-dogumtarihi);
	getch();
	
}
/* printf and scanf format codes
Code	Format
%c	character
%s	character string
%d	decimal integers
%i	decimal integers
%f	floating pointer number (printf)
%lf	floating pointer number (scanf)
%e	scientific notation (with lower case e)
%E	scientific notation (with upper case E)
%g	the shorter of %f and %e
%G	the shorter of %f and %E
%u	unsigned decimal integer
%o	unsigned octal number
%x	unsigned hexadecimal number (with lower case letters)
%X	unsigned hexadecimal number (with upper case letters)
%p	pointer
%%	print %

Control codes-Escape Sequences olarakda geçiyor
\n	start a new line
\t	tab
\0	end of character string
\"	print "
\'	print '
\?	print ?
\\	print \
\b	backspace
\r	carriage return
\v	line feed
\f	form feed */
