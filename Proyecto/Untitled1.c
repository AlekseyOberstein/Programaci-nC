void LeeInventarioArchivo()
{
	char x [130];
	FILE *F;
	prod aux;
	char auxi[3];
	printf("\n Nombre y ruta del archivo del archivo de inventario: \n");
	fflush(stdin);
	gets(x);  //x  es el nombre y ruta del archivo fisico
	F = fopen(x, "r");
	if(F==NULL)
	{
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	
	while(!feof(F))
	{
		fscanf(F, "%d\n", &aux.IdProd);     //  scanf( "%d\n", &aux.IdProd);  
		fflush(stdin);
		fgets(aux.NomProd, 60,  F);         //gets(aux.NomProd, 60);
		fgets(aux.Descripcion, 120, F);
		fscanf(F, "%f", &aux.PrecioUCompra);
		fscanf(F, "%f", &aux.PrecioUventa);
		printf("\n%d \n%s %s %f \n%f \n",aux.IdProd, aux.NomProd, aux.Descripcion, aux.PrecioUCompra, aux.PrecioUventa);
	}
	fclose(F);
	system("pause");
}

