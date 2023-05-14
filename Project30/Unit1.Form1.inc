procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.radioButton1 := new System.Windows.Forms.RadioButton();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.label5 := new System.Windows.Forms.Label();
        self.label6 := new System.Windows.Forms.Label();
        self.label7 := new System.Windows.Forms.Label();
        self.label8 := new System.Windows.Forms.Label();
        self.label9 := new System.Windows.Forms.Label();
        self.label10 := new System.Windows.Forms.Label();
        self.label11 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 12.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.ForeColor := System.Drawing.Color.RoyalBlue;
        self.button1.Location := new System.Drawing.Point(28, 132);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(142, 45);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Вычислить';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // radioButton1
        // 
        self.radioButton1.Font := new System.Drawing.Font('Microsoft Sans Serif', 10.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.radioButton1.Location := new System.Drawing.Point(197, 132);
        self.radioButton1.Name := 'radioButton1';
        self.radioButton1.Size := new System.Drawing.Size(176, 44);
        self.radioButton1.TabIndex := 1;
        self.radioButton1.TabStop := true;
        self.radioButton1.Text := 'Тригонометрическая'#13#10'          форма';
        self.radioButton1.UseVisualStyleBackColor := true;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 12.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(97, 21);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(188, 25);
        self.label1.TabIndex := 2;
        self.label1.Text := 'Введите числа A и В';
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(28, 201);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(345, 53);
        self.label2.TabIndex := 3;
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.Location := new System.Drawing.Point(28, 284);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(323, 23);
        self.label3.TabIndex := 4;
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.Location := new System.Drawing.Point(28, 323);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(323, 23);
        self.label4.TabIndex := 5;
        // 
        // label5
        // 
        self.label5.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label5.Location := new System.Drawing.Point(28, 362);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(323, 23);
        self.label5.TabIndex := 6;
        // 
        // label6
        // 
        self.label6.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label6.Location := new System.Drawing.Point(33, 65);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(50, 30);
        self.label6.TabIndex := 7;
        self.label6.Text := 'А = ';
        // 
        // label7
        // 
        self.label7.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label7.Location := new System.Drawing.Point(109, 68);
        self.label7.Name := 'label7';
        self.label7.Size := new System.Drawing.Size(19, 23);
        self.label7.TabIndex := 8;
        self.label7.Text := '+';
        // 
        // label8
        // 
        self.label8.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label8.Location := new System.Drawing.Point(170, 68);
        self.label8.Name := 'label8';
        self.label8.Size := new System.Drawing.Size(35, 30);
        self.label8.TabIndex := 9;
        self.label8.Text := '*i';
        // 
        // label9
        // 
        self.label9.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label9.Location := new System.Drawing.Point(206, 65);
        self.label9.Name := 'label9';
        self.label9.Size := new System.Drawing.Size(50, 30);
        self.label9.TabIndex := 10;
        self.label9.Text := 'B = ';
        // 
        // label10
        // 
        self.label10.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label10.Location := new System.Drawing.Point(279, 68);
        self.label10.Name := 'label10';
        self.label10.Size := new System.Drawing.Size(28, 23);
        self.label10.TabIndex := 11;
        self.label10.Text := '+';
        // 
        // label11
        // 
        self.label11.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label11.Location := new System.Drawing.Point(333, 68);
        self.label11.Name := 'label11';
        self.label11.Size := new System.Drawing.Size(40, 30);
        self.label11.TabIndex := 12;
        self.label11.Text := '*i';
        // 
        // textBox1
        // 
        self.textBox1.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.Location := new System.Drawing.Point(76, 65);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(32, 35);
        self.textBox1.TabIndex := 13;
        // 
        // textBox2
        // 
        self.textBox2.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox2.Location := new System.Drawing.Point(134, 65);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(36, 35);
        self.textBox2.TabIndex := 14;
        // 
        // textBox3
        // 
        self.textBox3.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox3.Location := new System.Drawing.Point(249, 65);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(33, 35);
        self.textBox3.TabIndex := 15;
        // 
        // textBox4
        // 
        self.textBox4.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox4.Location := new System.Drawing.Point(302, 65);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(35, 35);
        self.textBox4.TabIndex := 16;
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.SystemColors.GradientActiveCaption;
        self.ClientSize := new System.Drawing.Size(394, 428);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label11);
        self.Controls.Add(self.label10);
        self.Controls.Add(self.label9);
        self.Controls.Add(self.label8);
        self.Controls.Add(self.label7);
        self.Controls.Add(self.label6);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.radioButton1);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Калькулятор Комплексных чисел';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
