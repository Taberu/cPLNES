extern FILE * fp;
extern char * pStr;
extern int n_palabras;
extern int n_lineas;
extern int n_caracteres;
extern int n_caracteresp;
extern unsigned char * txt_ppro;

void abrir_archivo(char * filename);
char * ubicacion_archivo(char * directorio, char * archivo);
void limpiar_ubicacion();
void cerrar_archivo();

void obtener_texto();

void limpiar_pStr();
void limpiar_texto_procesado();

void obtener_total_palabras(char ctp);
void obtener_total_lineas(char ctl);
void obtener_total_caracteres(char ctc);

int total_palabras();
int total_lineas();
int total_caracteres();
int total_caracteres_procesados();

char * texto_a_procesar();
char * codificar_texto();
unsigned char * texto_procesado();

void preprocesar_texto();
void tokenizar();


