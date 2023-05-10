#pragma once

namespace IMPACTLABGUI2023 {

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
		void InitializeComponent(void)
		{
			this->btopen = (gcnew System::Windows::Forms::Button());
			this->btclose = (gcnew System::Windows::Forms::Button());
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
			// 
			// IMPACTLAB_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 602);
			this->Controls->Add(this->btclose);
			this->Controls->Add(this->btopen);
			this->Name = L"IMPACTLAB_Form";
			this->Text = L"IMPACTLAB PROJECT 2023";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btopen_Click(System::Object^ sender, System::EventArgs^ e) {

		// open file dialog   
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
	}
	};
}
