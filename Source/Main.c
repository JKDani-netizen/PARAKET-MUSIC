
#include <3ds.h>
#include <stdio.h>

int main(void)
{
    gfxInitDefault();

    consoleInit(GFX_TOP, NULL);
    consoleSelect(NULL);

    printf("\x1b[32m");
    printf("================================\n");
    printf("        BLUE MUSIC 3DS\n");
    printf("================================\n\n");
    printf("      REPRODUCTOR MUSICAL\n\n");
    printf("      Bienvenido!\n\n");
    printf("      Version 0.1\n");
    printf("      Pantalla superior\n");

    PrintConsole *bottom = consoleInit(GFX_BOTTOM, NULL);
    consoleSelect(bottom);

    printf("\x1b[32m");
    printf("       BLUE MUSIC 3DS\n\n");
    printf("      MI MUSICA\n\n");
    printf("   No hay canciones cargadas.\n\n");
    printf("   PROXIMAMENTE:\n");
    printf("   - Reproducir MP3\n");
    printf("   - Pausar musica\n");
    printf("   - Siguiente cancion\n\n");
    printf("   Pulsa START para salir.\n");

    while (aptMainLoop())
    {
        hidScanInput();

        if (hidKeysDown() & KEY_START)
            break;
    }

    gfxExit();
    return 0;
}
