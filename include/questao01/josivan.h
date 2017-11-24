#ifndef _GEOMETRIA_H_
#define _GEOMETRIA_H_ 

namespace geometria
{
	class Figura
	{
	public:
		Figura();
		~Figura();

		//-- Métodos
		virtual float calc_area();
		virtual float calc_per();
		virtual float calc_vol();
	};
	// Figuras planas
	class Triangulo : public Figura
	{
	public:
		// Atributos
		unsigned int side

		// Métodos
		Triangulo(){
			//
			cout << "Digite o tamanho da lado do triângulo: ";
			cin >> this->side;
			if (not error_handler(s)){
				cout << "\nÁrea do triângulo: " << area_of_tri(s);
				cout << "\nPerímetro do triângulo: " << perimeter_of_tri(s) << "\n\n";
			}
		}
		~Triangulo();
		calc_vol() = delete;
		/**
		* @brief Função que calcula a área de um triângulo equilátero
		* @param side Um valor inteiro positivo, o tamanho do lado do triângulo
		* @return Um valor float com a área do triângulo
		*/
		float calc_area ()
		{
			float height = (this->side * (sqrt(3)/2.0f));
			return (this->side * height / 2.0f);
		}
	};
	class Retangulo : public Figura
	{
	public:
		Retangulo();
		~Retangulo();
		calc_vol() = delete;
		float calc_area ()
		{
			return (base * height);
		}
	};
	class Quadrado : public Figura
	{
	private:
		unsigned int lado;
	public:

		Quadrado();
		~Quadrado();
		calc_vol() = delete;
		float calc_area ()
		{
			return pow(this->lado, 2);
		}
	};
	class Circulo : public Figura
	{
	private:
		unsigned int raio;
	public:
		Circulo();
		~Circulo();
		calc_vol() = delete;
		float calc_area ()
		{
			return PI * pow(this->raio, 2);
		}
	};


}

#endif