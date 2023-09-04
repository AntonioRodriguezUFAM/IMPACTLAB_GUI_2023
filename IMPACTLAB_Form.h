#pragma once
#include <string>
//
//extern "C" {
//#include "include/stb_image.h"
//#include "include/stb_image_write.h"
//}

namespace IMPACTLABGUI2023 {

	extern "C" {
		//Load Images
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "include/stb_image.h"
#include "include/stb_image_write.h"
	}
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IMPACTLAB_Form
	/// </summary>
	public ref class IMPACTLAB_Form : public System::Windows::Forms::Form
	{
	public:
		IMPACTLAB_Form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IMPACTLAB_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btopen;
	protected:
	private: System::Windows::Forms::Button^ btclose;
	private: System::Windows::Forms::Button^ btExit;
	private: System::Windows::Forms::PictureBox^ Input_Image_Box;
	private: System::Windows::Forms::PictureBox^ Output_Image_Box_01;
	private: System::Windows::Forms::Button^ ImageToBlue;
	private: System::Windows::Forms::Button^ btcopyimageBitmap;
	private: System::Windows::Forms::Button^ btcopyimageSTBI;
	private: System::Windows::Forms::PictureBox^ Output_Image_Box;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 
		
		/// 
		void InitializeComponent(void)
		{
			this->btopen = (gcnew System::Windows::Forms::Button());
			this->btclose = (gcnew System::Windows::Forms::Button());
			this->btExit = (gcnew System::Windows::Forms::Button());
			this->Input_Image_Box = (gcnew System::Windows::Forms::PictureBox());
			this->Output_Image_Box_01 = (gcnew System::Windows::Forms::PictureBox());
			this->ImageToBlue = (gcnew System::Windows::Forms::Button());
			this->btcopyimageBitmap = (gcnew System::Windows::Forms::Button());
			this->btcopyimageSTBI = (gcnew System::Windows::Forms::Button());
			this->Output_Image_Box = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Input_Image_Box))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Output_Image_Box_01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Output_Image_Box))->BeginInit();
			this->SuspendLayout();
			// 
			// btopen
			// 
			this->btopen->Location = System::Drawing::Point(12, 12);
			this->btopen->Name = L"btopen";
			this->btopen->Size = System::Drawing::Size(131, 49);
			this->btopen->TabIndex = 0;
			this->btopen->Text = L"Open";
			this->btopen->UseVisualStyleBackColor = true;
			this->btopen->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btopen_Click);
			// 
			// btclose
			// 
			this->btclose->Location = System::Drawing::Point(12, 67);
			this->btclose->Name = L"btclose";
			this->btclose->Size = System::Drawing::Size(131, 49);
			this->btclose->TabIndex = 1;
			this->btclose->Text = L"Close";
			this->btclose->UseVisualStyleBackColor = true;
			this->btclose->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btclose_Click);
			// 
			// btExit
			// 
			this->btExit->Location = System::Drawing::Point(12, 122);
			this->btExit->Name = L"btExit";
			this->btExit->Size = System::Drawing::Size(131, 49);
			this->btExit->TabIndex = 2;
			this->btExit->Text = L"Exit";
			this->btExit->UseVisualStyleBackColor = true;
			this->btExit->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btExit_Click);
			// 
			// Input_Image_Box
			// 
			this->Input_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Input_Image_Box->Location = System::Drawing::Point(12, 188);
			this->Input_Image_Box->MaximumSize = System::Drawing::Size(431, 321);
			this->Input_Image_Box->Name = L"Input_Image_Box";
			this->Input_Image_Box->Size = System::Drawing::Size(431, 321);
			this->Input_Image_Box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Input_Image_Box->TabIndex = 4;
			this->Input_Image_Box->TabStop = false;
			// 
			// Output_Image_Box_01
			// 
			this->Output_Image_Box_01->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Output_Image_Box_01->Location = System::Drawing::Point(488, 188);
			this->Output_Image_Box_01->MaximumSize = System::Drawing::Size(431, 321);
			this->Output_Image_Box_01->Name = L"Output_Image_Box_01";
			this->Output_Image_Box_01->Size = System::Drawing::Size(431, 321);
			this->Output_Image_Box_01->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Output_Image_Box_01->TabIndex = 5;
			this->Output_Image_Box_01->TabStop = false;
			// 
			// ImageToBlue
			// 
			this->ImageToBlue->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->ImageToBlue->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImageToBlue->Location = System::Drawing::Point(283, 139);
			this->ImageToBlue->Name = L"ImageToBlue";
			this->ImageToBlue->Size = System::Drawing::Size(160, 32);
			this->ImageToBlue->TabIndex = 21;
			this->ImageToBlue->Text = L"Image To Blue";
			this->ImageToBlue->UseVisualStyleBackColor = true;
			this->ImageToBlue->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::ImageToBlue_Click);
			// 
			// btcopyimageBitmap
			// 
			this->btcopyimageBitmap->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btcopyimageBitmap->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btcopyimageBitmap->Location = System::Drawing::Point(293, 12);
			this->btcopyimageBitmap->Name = L"btcopyimageBitmap";
			this->btcopyimageBitmap->Size = System::Drawing::Size(160, 32);
			this->btcopyimageBitmap->TabIndex = 22;
			this->btcopyimageBitmap->Text = L"Copy Image Bitmap";
			this->btcopyimageBitmap->UseVisualStyleBackColor = true;
			this->btcopyimageBitmap->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btcopyimage_Click);
			// 
			// btcopyimageSTBI
			// 
			this->btcopyimageSTBI->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btcopyimageSTBI->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btcopyimageSTBI->Location = System::Drawing::Point(293, 50);
			this->btcopyimageSTBI->Name = L"btcopyimageSTBI";
			this->btcopyimageSTBI->Size = System::Drawing::Size(160, 32);
			this->btcopyimageSTBI->TabIndex = 23;
			this->btcopyimageSTBI->Text = L"Copy Image STBI";
			this->btcopyimageSTBI->UseVisualStyleBackColor = true;
			this->btcopyimageSTBI->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btcopyimageSTBI_Click);
			// 
			// Output_Image_Box
			// 
			this->Output_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Output_Image_Box->Location = System::Drawing::Point(977, 188);
			this->Output_Image_Box->MaximumSize = System::Drawing::Size(431, 321);
			this->Output_Image_Box->Name = L"Output_Image_Box";
			this->Output_Image_Box->Size = System::Drawing::Size(431, 321);
			this->Output_Image_Box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Output_Image_Box->TabIndex = 24;
			this->Output_Image_Box->TabStop = false;
			// 
			// IMPACTLAB_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1615, 602);
			this->Controls->Add(this->Output_Image_Box);
			this->Controls->Add(this->btcopyimageSTBI);
			this->Controls->Add(this->btcopyimageBitmap);
			this->Controls->Add(this->ImageToBlue);
			this->Controls->Add(this->Output_Image_Box_01);
			this->Controls->Add(this->Input_Image_Box);
			this->Controls->Add(this->btExit);
			this->Controls->Add(this->btclose);
			this->Controls->Add(this->btopen);
			this->Name = L"IMPACTLAB_Form";
			this->Text = L"IMPACTLAB PROJECT 2023";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Input_Image_Box))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Output_Image_Box_01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Output_Image_Box))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btopen_Click(System::Object^ sender, System::EventArgs^ e) {

	// Diferent Methods to open images
	// Image.Frofile --> 1 St Method
	//Input_Image_Box->Image.FromFile("C:\Arquivos de Programas RFB\IRPF2022\online.png");

	//Load Image 2nd Method
	//Input_Image_Box->ImageLocation = "C:/Arquivos de Programas RFB/IRPF2022/online.png";
	//openFileDialog1->ShowDialog();

	// From OpenfileDialog --> 3rd Method  // open file dialog   
		OpenFileDialog^ ofd = gcnew OpenFileDialog();

		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			Input_Image_Box->ImageLocation = ofd->FileName;
		}


	}

	private: System::Void btExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void btclose_Click(System::Object^ sender, System::EventArgs^ e) {
		Input_Image_Box->ImageLocation = "";
		Output_Image_Box_01->Image = nullptr;
		Output_Image_Box->Image    = nullptr;
	}

	private: System::Void ImageToBlue_Click(System::Object^ sender, System::EventArgs^ e) {


	if (Input_Image_Box->Image != nullptr) {
		Bitmap^ bmp = dynamic_cast<Bitmap^>(Input_Image_Box->Image->Clone());

		for (int y = 0; y < bmp->Height; y++) {
			for (int x = 0; x < bmp->Width; x++) {
				Color pixelColor = bmp->GetPixel(x, y);
				Color newColor = Color::FromArgb(pixelColor.A, 0, 0, pixelColor.B);
				bmp->SetPixel(x, y, newColor);
			}
		}

		Output_Image_Box->Image = bmp;
	}
	else {
		MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}

	private: System::Void btcopyimage_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Input_Image_Box->Image != nullptr) {
		Output_Image_Box_01->Image = Input_Image_Box->Image;
	}
	else {
		MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	private: System::Void btcopyimageSTBI_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Input_Image_Box->Image != nullptr) {
		// Salve a imagem carregada em um arquivo temporário
		String^ tempFilePath = "temp_image.jpg";
		Input_Image_Box->Image->Save(tempFilePath, System::Drawing::Imaging::ImageFormat::Jpeg);

		// Carregue a imagem com stbi
		int width, height, channels;
		unsigned char* img = stbi_load("temp_image.jpg", &width, &height, &channels, 0);

		if (img != nullptr) {
			// Altere os canais vermelho e verde para zero
			for (int i = 0; i < width * height * channels; i += channels) {
				img[i] = 0;     // Canal vermelho
				img[i + 1] = 0;   // Canal verde
			}

			// Salve a imagem modificada
			stbi_write_jpg("blue_image.jpg", width, height, channels, img, 100);

			// Libere a memória da imagem original
			stbi_image_free(img);

			// Carregue a imagem modificada na Output_Image_Box
			Output_Image_Box->Image = Image::FromFile("blue_image.jpg");

			// Delete the temporary file
			System::IO::File::Delete(tempFilePath);
		}
		else {
			MessageBox::Show("Failed to load image with stbi", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

};
}
