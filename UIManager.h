#pragma once
#include "pch.h"


 ref class UIManager
{
public:

	static void modifierCouleur(System::Windows::Forms::Panel^,System::Windows::Forms::Panel^,System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, int, System::Windows::Forms::Form^);
	static void afficherElementRubrique(System::Windows::Forms::DataGridView^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^,System::Windows::Forms::Label^, System::Windows::Forms::PictureBox^, System::Windows::Forms::Label^,int);
	static void cacherStats(System::Windows::Forms::Label^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^);
	static void afficherStats(System::Windows::Forms::Label^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^);
 };

