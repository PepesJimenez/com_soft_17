int trimming (char cad(MAXLINE)) {

	int longitud = 0;

	//calculamos la longitud
	while (cad(longitud) != '\0') {

		longitud ++;
	}

	//trimming
	if ((longitud > 0) && cad[longitud - 1] == '\n') {

		cad[longitud - 1] = '\0';
		longitud --;
	}

	return longitud;
}