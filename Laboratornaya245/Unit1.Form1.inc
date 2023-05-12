procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        self.label1 := new System.Windows.Forms.Label();
        self.radioButton1 := new System.Windows.Forms.RadioButton();
        self.radioButton2 := new System.Windows.Forms.RadioButton();
        self.radioButton3 := new System.Windows.Forms.RadioButton();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.label6 := new System.Windows.Forms.Label();
        self.button12 := new System.Windows.Forms.Button();
        self.button11 := new System.Windows.Forms.Button();
        self.button10 := new System.Windows.Forms.Button();
        self.button9 := new System.Windows.Forms.Button();
        self.button8 := new System.Windows.Forms.Button();
        self.button7 := new System.Windows.Forms.Button();
        self.button6 := new System.Windows.Forms.Button();
        self.button5 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button1 := new System.Windows.Forms.Button();
        self.label4 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.label5 := new System.Windows.Forms.Label();
        self.button13 := new System.Windows.Forms.Button();
        self.radioButton4 := new System.Windows.Forms.RadioButton();
        self.groupBox1.SuspendLayout();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(12, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(98, 16);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Выбрать топливо';
        // 
        // radioButton1
        // 
        self.radioButton1.Location := new System.Drawing.Point(16, 28);
        self.radioButton1.Name := 'radioButton1';
        self.radioButton1.Size := new System.Drawing.Size(76, 31);
        self.radioButton1.TabIndex := 1;
        self.radioButton1.Text := 'АИ-92';
        self.radioButton1.UseVisualStyleBackColor := true;
        self.radioButton1.CheckedChanged += radioButton1_CheckedChanged;
        // 
        // radioButton2
        // 
        self.radioButton2.Location := new System.Drawing.Point(116, 28);
        self.radioButton2.Name := 'radioButton2';
        self.radioButton2.Size := new System.Drawing.Size(69, 31);
        self.radioButton2.TabIndex := 2;
        self.radioButton2.Text := 'АИ-95';
        self.radioButton2.UseVisualStyleBackColor := true;
        self.radioButton2.CheckedChanged += radioButton2_CheckedChanged;
        // 
        // radioButton3
        // 
        self.radioButton3.Location := new System.Drawing.Point(216, 28);
        self.radioButton3.Name := 'radioButton3';
        self.radioButton3.Size := new System.Drawing.Size(66, 31);
        self.radioButton3.TabIndex := 3;
        self.radioButton3.Text := 'ДТ';
        self.radioButton3.UseVisualStyleBackColor := true;
        self.radioButton3.CheckedChanged += radioButton3_CheckedChanged;
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.label6);
        self.groupBox1.Controls.Add(self.button12);
        self.groupBox1.Controls.Add(self.button11);
        self.groupBox1.Controls.Add(self.button10);
        self.groupBox1.Controls.Add(self.button9);
        self.groupBox1.Controls.Add(self.button8);
        self.groupBox1.Controls.Add(self.button7);
        self.groupBox1.Controls.Add(self.button6);
        self.groupBox1.Controls.Add(self.button5);
        self.groupBox1.Controls.Add(self.button4);
        self.groupBox1.Controls.Add(self.button3);
        self.groupBox1.Controls.Add(self.button2);
        self.groupBox1.Controls.Add(self.button1);
        self.groupBox1.Controls.Add(self.label4);
        self.groupBox1.Controls.Add(self.label3);
        self.groupBox1.Controls.Add(self.label2);
        self.groupBox1.Controls.Add(self.textBox1);
        self.groupBox1.Enabled := false;
        self.groupBox1.Location := new System.Drawing.Point(12, 65);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(239, 175);
        self.groupBox1.TabIndex := 4;
        self.groupBox1.TabStop := false;
        self.groupBox1.Visible := false;
        // 
        // label6
        // 
        self.label6.Location := new System.Drawing.Point(114, 135);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(100, 23);
        self.label6.TabIndex := 16;
        // 
        // button12
        // 
        self.button12.Location := new System.Drawing.Point(35, 146);
        self.button12.Name := 'button12';
        self.button12.Size := new System.Drawing.Size(52, 23);
        self.button12.TabIndex := 15;
        self.button12.Text := 'Сброс';
        self.button12.UseVisualStyleBackColor := true;
        self.button12.Click += button12_Click;
        // 
        // button11
        // 
        self.button11.Location := new System.Drawing.Point(139, 56);
        self.button11.Name := 'button11';
        self.button11.Size := new System.Drawing.Size(75, 60);
        self.button11.TabIndex := 14;
        self.button11.Text := 'Заправка';
        self.button11.UseVisualStyleBackColor := true;
        self.button11.Click += button11_Click;
        // 
        // button10
        // 
        self.button10.Location := new System.Drawing.Point(6, 146);
        self.button10.Name := 'button10';
        self.button10.Size := new System.Drawing.Size(23, 23);
        self.button10.TabIndex := 13;
        self.button10.Text := '0';
        self.button10.UseVisualStyleBackColor := true;
        self.button10.Click += button10_Click;
        // 
        // button9
        // 
        self.button9.Location := new System.Drawing.Point(64, 117);
        self.button9.Name := 'button9';
        self.button9.Size := new System.Drawing.Size(23, 23);
        self.button9.TabIndex := 12;
        self.button9.Text := '9';
        self.button9.UseVisualStyleBackColor := true;
        self.button9.Click += button9_Click;
        // 
        // button8
        // 
        self.button8.Location := new System.Drawing.Point(35, 117);
        self.button8.Name := 'button8';
        self.button8.Size := new System.Drawing.Size(23, 23);
        self.button8.TabIndex := 11;
        self.button8.Text := '8';
        self.button8.UseVisualStyleBackColor := true;
        self.button8.Click += button8_Click;
        // 
        // button7
        // 
        self.button7.Location := new System.Drawing.Point(6, 117);
        self.button7.Name := 'button7';
        self.button7.Size := new System.Drawing.Size(23, 23);
        self.button7.TabIndex := 10;
        self.button7.Text := '7';
        self.button7.UseVisualStyleBackColor := true;
        self.button7.Click += button7_Click;
        // 
        // button6
        // 
        self.button6.Location := new System.Drawing.Point(64, 88);
        self.button6.Name := 'button6';
        self.button6.Size := new System.Drawing.Size(23, 23);
        self.button6.TabIndex := 9;
        self.button6.Text := '6';
        self.button6.UseVisualStyleBackColor := true;
        self.button6.Click += button6_Click;
        // 
        // button5
        // 
        self.button5.Location := new System.Drawing.Point(35, 88);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(23, 23);
        self.button5.TabIndex := 8;
        self.button5.Text := '5';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(6, 88);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(23, 23);
        self.button4.TabIndex := 7;
        self.button4.Text := '4';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(64, 59);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(23, 23);
        self.button3.TabIndex := 6;
        self.button3.Text := '3';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(35, 59);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(23, 23);
        self.button2.TabIndex := 5;
        self.button2.Text := '2';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(6, 59);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(23, 23);
        self.button1.TabIndex := 4;
        self.button1.Text := '1';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.Location := new System.Drawing.Point(152, 33);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(45, 20);
        self.label4.TabIndex := 3;
        self.label4.Click += label4_Click;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(139, 16);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(94, 13);
        self.label3.TabIndex := 2;
        self.label3.Text := 'Цена за литр';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(6, 16);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(114, 13);
        self.label2.TabIndex := 1;
        self.label2.Text := 'Количество литров';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(6, 33);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(81, 20);
        self.textBox1.TabIndex := 0;
        // 
        // label5
        // 
        self.label5.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label5.Location := new System.Drawing.Point(12, 254);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(133, 19);
        self.label5.TabIndex := 5;
        self.label5.Text := 'Чек';
        // 
        // button13
        // 
        self.button13.Location := new System.Drawing.Point(151, 254);
        self.button13.Name := 'button13';
        self.button13.Size := new System.Drawing.Size(75, 23);
        self.button13.TabIndex := 6;
        self.button13.Text := 'Оплатить';
        self.button13.UseVisualStyleBackColor := true;
        self.button13.Click += button13_Click;
        // 
        // radioButton4
        // 
        self.radioButton4.Checked := true;
        self.radioButton4.Location := new System.Drawing.Point(288, 28);
        self.radioButton4.Name := 'radioButton4';
        self.radioButton4.Size := new System.Drawing.Size(16, 31);
        self.radioButton4.TabIndex := 7;
        self.radioButton4.TabStop := true;
        self.radioButton4.UseVisualStyleBackColor := true;
        self.radioButton4.Visible := false;
        self.radioButton4.CheckedChanged += radioButton4_CheckedChanged;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(305, 294);
        self.Controls.Add(self.radioButton4);
        self.Controls.Add(self.button13);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.groupBox1);
        self.Controls.Add(self.radioButton3);
        self.Controls.Add(self.radioButton2);
        self.Controls.Add(self.radioButton1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.Text := 'AZS model';
        self.groupBox1.ResumeLayout(false);
        self.groupBox1.PerformLayout();
        self.ResumeLayout(false);
    end;
