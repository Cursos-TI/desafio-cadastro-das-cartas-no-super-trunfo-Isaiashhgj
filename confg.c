#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void limpaTela() {
    system("clear"); // ou "cls" no Windows
}

// Função que desenha o coração de acordo com o tamanho
void desenhaCoracao(float scale) {
    limpaTela();
    int width = 40, height = 20;

    for (int y = height/2; y >= -height/2; y--) {
        for (int x = -width; x <= width; x++) {
            float fx = x * 0.04 * scale;
            float fy = y * 0.1 * scale;
            float f = (fx*fx + fy*fy - 1);
            if (f*f*f - fx*fx*fy*fy*fy <= 0) {
                printf("\033[1;31m*\033[0m"); // vermelho
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Texto pulsante
    printf("\n");
    printf("\033[1;35m"); // magenta
    if (scale > 1.0) {
        printf("        💖 EU TE AMO 💖\n");
    } else {
        printf("         EU TE AMO\n");
    }
    printf("\033[0m"); // reset color
}

int main() {
    float scale;
    while (1) {
        // Coração aumentando
        for (scale = 0.9; scale <= 1.2; scale += 0.05) {
            desenhaCoracao(scale);
            usleep(150000); // 150ms
        }
        // Coração diminuindo
        for (scale = 1.2; scale >= 0.9; scale -= 0.05) {
            desenhaCoracao(scale);
            usleep(150000);
        }
    }
    return 0;
}


