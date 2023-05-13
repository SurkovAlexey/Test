procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.label2 := new System.Windows.Forms.Label();
        self.button2 := new System.Windows.Forms.Button();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.label5 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.textBox5 := new System.Windows.Forms.TextBox();
        self.textBox6 := new System.Windows.Forms.TextBox();
        self.label6 := new System.Windows.Forms.Label();
        self.label7 := new System.Windows.Forms.Label();
        self.label8 := new System.Windows.Forms.Label();
        self.label9 := new System.Windows.Forms.Label();
        self.label10 := new System.Windows.Forms.Label();
        self.label11 := new System.Windows.Forms.Label();
        self.label12 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(422, 21);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(302, 83);
        self.label1.TabIndex := 0;
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // button1
        // 
        self.button1.Enabled := false;
        self.button1.Location := new System.Drawing.Point(504, 122);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(123, 23);
        self.button1.TabIndex := 1;
        self.button1.Text := 'Показать условие';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Visible := false;
        self.button1.Click += button1_Click;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(67, 9);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(228, 17);
        self.label2.TabIndex := 2;
        self.label2.Text := 'Введите координаты вершин треугольника';
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(67, 122);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(106, 23);
        self.button2.TabIndex := 3;
        self.button2.Text := 'Рассчет';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(42, 35);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(77, 20);
        self.label3.TabIndex := 4;
        self.label3.Text := 'Вершина А';
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(42, 58);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(77, 20);
        self.label4.TabIndex := 5;
        self.label4.Text := 'Вершина В';
        // 
        // label5
        // 
        self.label5.Location := new System.Drawing.Point(42, 81);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(77, 20);
        self.label5.TabIndex := 6;
        self.label5.Text := 'Вершина С';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(141, 35);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(100, 20);
        self.textBox1.TabIndex := 7;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(276, 35);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(100, 20);
        self.textBox2.TabIndex := 8;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(141, 58);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(100, 20);
        self.textBox3.TabIndex := 9;
        // 
        // textBox4
        // 
        self.textBox4.Location := new System.Drawing.Point(141, 81);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(100, 20);
        self.textBox4.TabIndex := 10;
        // 
        // textBox5
        // 
        self.textBox5.Location := new System.Drawing.Point(276, 58);
        self.textBox5.Name := 'textBox5';
        self.textBox5.Size := new System.Drawing.Size(100, 20);
        self.textBox5.TabIndex := 11;
        // 
        // textBox6
        // 
        self.textBox6.Location := new System.Drawing.Point(276, 82);
        self.textBox6.Name := 'textBox6';
        self.textBox6.Size := new System.Drawing.Size(100, 20);
        self.textBox6.TabIndex := 12;
        // 
        // label6
        // 
        self.label6.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label6.Location := new System.Drawing.Point(115, 35);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(20, 20);
        self.label6.TabIndex := 13;
        self.label6.Text := 'X';
        // 
        // label7
        // 
        self.label7.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label7.Location := new System.Drawing.Point(115, 58);
        self.label7.Name := 'label7';
        self.label7.Size := new System.Drawing.Size(20, 20);
        self.label7.TabIndex := 14;
        self.label7.Text := 'X';
        // 
        // label8
        // 
        self.label8.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label8.Location := new System.Drawing.Point(115, 81);
        self.label8.Name := 'label8';
        self.label8.Size := new System.Drawing.Size(20, 20);
        self.label8.TabIndex := 15;
        self.label8.Text := 'X';
        // 
        // label9
        // 
        self.label9.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label9.Location := new System.Drawing.Point(257, 36);
        self.label9.Name := 'label9';
        self.label9.Size := new System.Drawing.Size(13, 20);
        self.label9.TabIndex := 16;
        self.label9.Text := 'Y';
        // 
        // label10
        // 
        self.label10.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label10.Location := new System.Drawing.Point(257, 59);
        self.label10.Name := 'label10';
        self.label10.Size := new System.Drawing.Size(13, 20);
        self.label10.TabIndex := 17;
        self.label10.Text := 'Y';
        // 
        // label11
        // 
        self.label11.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label11.Location := new System.Drawing.Point(257, 82);
        self.label11.Name := 'label11';
        self.label11.Size := new System.Drawing.Size(13, 20);
        self.label11.TabIndex := 18;
        self.label11.Text := 'Y';
        // 
        // label12
        // 
        self.label12.Font := new System.Drawing.Font('Microsoft Sans Serif', 11, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label12.Location := new System.Drawing.Point(53, 183);
        self.label12.Name := 'label12';
        self.label12.Size := new System.Drawing.Size(609, 161);
        self.label12.TabIndex := 19;
        self.label12.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(736, 391);
        self.Controls.Add(self.label12);
        self.Controls.Add(self.label11);
        self.Controls.Add(self.label10);
        self.Controls.Add(self.label9);
        self.Controls.Add(self.label8);
        self.Controls.Add(self.label7);
        self.Controls.Add(self.label6);
        self.Controls.Add(self.textBox6);
        self.Controls.Add(self.textBox5);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.Text := 'Лабораторная 11';
        self.FormClosing += Form1_FormClosing;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
