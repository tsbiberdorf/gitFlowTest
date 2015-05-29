/**
 * @file main.c
 * @author Terry.biberdorf
 */

 #include <stdio.h>
 
 #define NUM_HELLOS (5)

 int32_t main()
 {
 	int32_t i;
	for(i=0;i<NUM_HELLOS;i++)
	{
		printf("hello %d\n",i);
	}
 }
