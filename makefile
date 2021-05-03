OBJ = score.o getscore.o eval.o classify.o output.o
APPNAME = score

$(APPNAME) : $(OBJ)		#linking rule
	gcc -o $(APPNAME) $(OBJ)

%.o : %.c	# for each .c file in the folder will be compiled
	gcc -g -c -o $@ $<
	
clean :
	rm $(OBJ) $(APPNAME)
