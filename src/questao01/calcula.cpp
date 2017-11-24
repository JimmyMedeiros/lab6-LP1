/**
 * @file calcula.cpp
 */

#include <iostream>
#include <limits>
#include "../../include/questao01/calcula.h"
#include "../../include/questao01/area.h"
#include "../../include/questao01/perimetro.h"
#include "../../include/questao01/volume.h"

using namespace std;

/* 
	O trecho de código dentro do error_handler foi retirado do seguinte tópico do forum cplusplus: 
	(da mensagem do usuário Duthomhas)
	http://www.cplusplus.com/forum/beginner/28223/
*/

/**
* @brief Função que verifica se o valor do console input é válido
*/
bool error_handler (int num){
	if (!cin or num <= 0){
		cin.clear();
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
		cout << "\nValor inválido. Tente novamente.\n";
		cout << "Por favor digite apenas valores inteiros positivos.\n\n";
		return true;
	}
	return false;
}

/**
* @brief Função que calcula a área e o perímetro de um triângulo e mostra no console output
*/
void calcula_triangulo(){
	unsigned int s;

	cout << "Digite o tamanho da lado do triângulo: ";
	cin >> s;
	if (not error_handler(s)){
		cout << "\nÁrea do triângulo: " << area_of_tri(s);
		cout << "\nPerímetro do triângulo: " << perimeter_of_tri(s) << "\n\n";
	}
}
/**
* @brief Função que calcula a área e o perímetro de um retângulo e mostra no console output
*/
void calcula_retangulo(){
	unsigned int b;
	unsigned int h;
	cout << "Digite o tamanho da base do retângulo: ";
	cin >> b;
	if (not error_handler(b)) cout << "Digite o tamanho da altura do retângulo: ";
	cin >> h;
	if (not error_handler(h)) { 
		cout << "\nÁrea do retângulo: " << area_of_rect(b,h);
		cout << "\nPerímetro do retângulo: " << perimeter_of_rect(b,h) << "\n\n";
	}
}
/**
* @brief Função que calcula a área e o perímetro de um quadrado e mostra no console output
*/
void calcula_quadrado(){
	unsigned int s;
	cout << "Digite o tamanho do lado do quadrado: ";
	cin >> s;
	if (not error_handler(s)) {
		cout << "\nÁrea do quadrado: " << area_of_sqr(s);
		cout << "\nPerímetro do quadrado: " << perimeter_of_sqr(s) << "\n\n";
	}
}
/**
* @brief Função que calcula a área e o perímetro de um círculo e mostra no console output
*/
void calcula_circulo(){
	unsigned int r;
	cout << "Digite o tamanho do raio do círculo: ";
	cin >> r;
	if (not error_handler(r)) {
		cout << "\nÁrea do círculo: " << area_of_circle(r);
		cout << "\nPerímetro do círculo: " << perimeter_of_circle(r) << "\n\n";
	}
}
/**
* @brief Função que calcula o volume e a área de uma pirâmide e mostra no console output
*/
void calcula_piramide(){
	unsigned int s;
	cout << "Digite o tamanho do lado da pirâmide: ";
	cin >> s;
	if (not error_handler(s)) {
		cout << "\nVolume da pirâmide: " << volume_of_pir(s);
		cout << "\nÁrea da pirâmide: " << area_of_sqr(s) + 4*area_of_tri(s) << "\n\n";
	}
}
/**
* @brief Função que calcula o volume e a área de um cubo e mostra no console output
*/
void calcula_cubo(){
	unsigned int s;
	cout << "Digite o tamanho do lado do cubo: ";
	cin >> s;
	if (not error_handler(s)) {
		cout << "\nVolume do cubo: " << volume_of_cube(s);
		cout << "\nÁrea do cubo: " << 6*area_of_sqr(s) << "\n\n";
	}
}
/**
* @brief Função que calcula o volume e a área de um paraleleípedo e mostra no console output
*/
void calcula_paralelepipedo(){
	unsigned int w;
	unsigned int l;
	unsigned int h;
	cout << "Digite o tamanho da largura do paralelepípedo: ";
	cin >> w;
	if (not error_handler(w)) cout << "Digite o tamanho do comprimento do paralelepípedo: ";
	cin >> l;
	if (not error_handler(l)) cout << "Digite o tamanho da altura do paralelepípedo: ";
	cin >> h;
	if (not error_handler(h)) {
		cout << "\nVolume do paralelepípedo: " << volume_of_paral(w,l,h);
		cout << "\nÁrea do paralelepípedo: " << 2*area_of_rect(w,l) + 2*area_of_rect(w,h) + 2*(area_of_rect(l, h)) << "\n\n";
	}
}
/**
* @brief Função que calcula o volume e a área de uma esfera e mostra no console output
*/
void calcula_esfera(){
	unsigned int r;
	cout << "Digite o tamanho do raio da esfera: ";
	cin >> r;
	if (not error_handler(r)) {
		cout << "\nVolume da esfera: " << volume_of_sphere(r);
		cout << "\nÁrea da esfera: " << 4*area_of_circle(r) << "\n\n";
	}
}