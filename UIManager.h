#pragma once
#include "pch.h"


 ref class UIManager
{
public:

	static void modifierCouleur(System::Windows::Forms::Panel^,System::Windows::Forms::Panel^,System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, int);
	static void afficherElementRubrique(System::Windows::Forms::DataGridView^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^, System::Windows::Forms::Button^,System::Windows::Forms::Label^, System::Windows::Forms::PictureBox^, System::Windows::Forms::Label^,int);
 };
