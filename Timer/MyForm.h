#pragma once
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <cstring>
#include <stdlib.h>

struct say {
	char say[70];
}say_list[5];

namespace Timer {
	//プレイヤーステータスの設定
	struct say* say = say_list;

	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System;
	using namespace System::Collections::Generic; 
	using namespace System::ComponentModel; 
	using namespace System::Data; 
	using namespace System::Drawing; 
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace System::Windows::Forms;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
			textBox1->TextAlign = HorizontalAlignment::Right;       //文字を右端へ
			textBox2->TextAlign = HorizontalAlignment::Right;       //文字を右端へ
	
			String^ str1 = "";
			String^ str2 = "";
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Media::SoundPlayer^ player;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;

	private:

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->label1->Location = System::Drawing::Point(568, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"分";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->button1->Location = System::Drawing::Point(423, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseClick);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20));
			this->textBox1->Location = System::Drawing::Point(425, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 61);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20));
			this->textBox2->Location = System::Drawing::Point(631, 22);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 61);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->label2->Location = System::Drawing::Point(774, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 40);
			this->label2->TabIndex = 4;
			this->label2->Text = L"秒";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->button2->Location = System::Drawing::Point(692, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 55);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"05:00", L"15:00", L"25:00", L"30:00", L"50:00",
					L"60:00", L"90:00", L"120:00"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 108);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(195, 61);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectionChangeCommitted);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->button3->Location = System::Drawing::Point(566, 116);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 55);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Stop";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->button3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button3_MouseClick);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"05:00", L"15:00" });
			this->comboBox2->Location = System::Drawing::Point(213, 108);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(195, 61);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectionChangeCommitted);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->label3->Location = System::Drawing::Point(12, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 40);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Do";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->label4->Location = System::Drawing::Point(206, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 40);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Rest";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->label5->Location = System::Drawing::Point(12, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 40);
			this->label5->TabIndex = 11;
			this->label5->Text = L"What";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20));
			this->textBox3->Location = System::Drawing::Point(12, 239);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(819, 61);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(846, 324);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int zero = 0;
		String^ count_Flag = "stop";
		bool timer1Enabled = true;

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Start
	String^ str_m = textBox1->Text;
	String^ str_s = textBox2->Text;

	if ((str_m == "" && str_s == "") || (str_m == "0" && str_s == "0"))
		count_Flag = "up";
	else if (str_m != "" || str_s != "")
		count_Flag = "down";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//Reset
	count_Flag = "stop";

	textBox1->Text = zero.ToString();
	textBox2->Text = zero.ToString();
}

private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Start
	String^ str_m = textBox1->Text;
	String^ str_s = textBox2->Text;

	if ((str_m == "" && str_s == "") || (str_m == "0" && str_s == "0"))
		count_Flag = "up";
	else if (str_m != "" || str_s != "")
		count_Flag = "down";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Stop
	count_Flag = "stop";
}
private: System::Void button3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Stop
	count_Flag = "stop";
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	String^ str_m = textBox1->Text;
	String^ str_s = textBox2->Text;
	
	count(count_Flag);
}
private: System::Void comboBox1_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
	String^ str_m = textBox1->Text;
	String^ str_s = textBox2->Text;
	
	if (comboBox1->SelectedItem->ToString() == "05:00") {
		str_m = "5";
		str_s = "0";
	}
	else if (comboBox1->SelectedItem->ToString() == "15:00") {
		str_m = "15";
		str_s = "0";
	}
	else if (comboBox1->SelectedItem->ToString() == "25:00") {
		str_m = "25";
		str_s = "0";
	}
	else if (comboBox1->SelectedItem->ToString() == "30:00") {
		str_m = "30";
		str_s = "0";
	}
	else if (comboBox1->SelectedItem->ToString() == "50:00") {
		str_m = "50";
		str_s = "0";
	}
	else if (comboBox1->SelectedItem->ToString() == "60:00") {
		str_m = "60";
		str_s = "0";
	}
	else if (comboBox1->SelectedItem->ToString() == "90:00") {
		str_m = "90";
		str_s = "0";
	}
	else if (comboBox1->SelectedItem->ToString() == "120:00") {
		str_m = "120";
		str_s = "0";
	}

	textBox1->Text = str_m;
	textBox2->Text = str_s;
}
private: System::Void comboBox2_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
	String^ str_m = textBox1->Text;
	String^ str_s = textBox2->Text;

	if (comboBox2->SelectedItem->ToString() == "05:00") {
		str_m = "5";
		str_s = "0";
	}
	else if (comboBox2->SelectedItem->ToString() == "15:00") {
		str_m = "15";
		str_s = "0";
	}

	textBox1->Text = str_m;
	textBox2->Text = str_s;
}
public: Void say() {
	srand(time(NULL));
	int ran = rand() % 9;

	String^ say = "";

	if (ran == 0)
		say = "「ぶつからなきゃ伝わらないことだってあるよ、\n例えば自分がどれだけ真剣なのかとかね」";
	else if (ran == 1)
		say = "「戦闘終了。何とかなりましたね」";
	else if (ran == 2)
		say = "仏法にあふたてまつること、無量劫にかたし\n意味：仏法に巡り合える機会は、無限ともいうべき時間のほんの僅かである";
	else if (ran == 3)
		say = "成功を収めた時、用心しなくてはいけないのは傲慢";
	else if (ran == 4)
		say = "「ゆっくりでもいい。自分の力でやり遂げろ」";
	else if (ran == 5)
		say = "もっとこうなりたいというハングリー精神があってこそ、人は何かにチャレンジしようと思うものであり、そこから新しい力を発揮するような遺伝子がオンになるのです";
	else if (ran == 6)
		say = "「お疲れ様。」";
	else if (ran == 7)
		say = "「頑張ったと思うよ？\nお疲れ様ー」";
	else if (ran == 8)
		say = "「勝ったクマー！」";

	MessageBox::Show(say);
}
public:Void count(String^ up_or_down) {
		double sec, min;

		String^ str_m = textBox1->Text;
		String^ str_s = textBox2->Text;

		if (str_m == "")
			str_m = "0";
		if (str_s == "")
			str_s = "0";

		min = double::Parse(str_m);
		sec = double::Parse(str_s);

		if (min >= 0) {
			sec += (up_or_down == "down") * -1 + (up_or_down == "up") * 1;
			
			min += (up_or_down == "down") * -1 * (sec < 0) + (up_or_down == "up") * (sec > 60);

			sec += (up_or_down == "down") * (sec < 0) * 60 + (up_or_down == "up") * (sec > 60) * -60;
		}
		if (min < 0) {
			count_Flag = "stop";
			min = 0;
			sec = 0;
			say();
		}
		textBox1->Text = min.ToString();
		textBox2->Text = sec.ToString();
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}

