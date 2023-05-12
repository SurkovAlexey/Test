procedure InitializeComponent;
    begin
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.listBox1 := new System.Windows.Forms.ListBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.button2 := new System.Windows.Forms.Button();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label5 := new System.Windows.Forms.Label();
        self.label6 := new System.Windows.Forms.Label();
        self.label7 := new System.Windows.Forms.Label();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.label8 := new System.Windows.Forms.Label();
        self.label9 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // textBox1
        // 
        self.textBox1.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.Location := new System.Drawing.Point(12, 71);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(131, 29);
        self.textBox1.TabIndex := 0;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.ForeColor := System.Drawing.SystemColors.ControlText;
        self.button1.Location := new System.Drawing.Point(149, 126);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(86, 45);
        self.button1.TabIndex := 1;
        self.button1.Text := 'Поиск';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // listBox1
        // 
        self.listBox1.BackColor := System.Drawing.Color.LightGreen;
        self.listBox1.FormattingEnabled := true;
        self.listBox1.Location := new System.Drawing.Point(12, 206);
        self.listBox1.Name := 'listBox1';
        self.listBox1.Size := new System.Drawing.Size(173, 43);
        self.listBox1.TabIndex := 2;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(12, 189);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(183, 16);
        self.label1.TabIndex := 3;
        self.label1.Text := 'История запросов';
        self.label1.Click += label1_Click;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(12, 39);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(131, 29);
        self.label2.TabIndex := 4;
        self.label2.Text := 'Введите год';
        self.label2.Click += label2_Click;
        // 
        // button2
        // 
        self.button2.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button2.Location := new System.Drawing.Point(492, 112);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(121, 57);
        self.button2.TabIndex := 5;
        self.button2.Text := 'Проверка';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 10.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.Location := new System.Drawing.Point(89, 6);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(95, 21);
        self.label3.TabIndex := 6;
        self.label3.Text := 'вариант8';
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 10.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)), true);
        self.label4.Location := new System.Drawing.Point(487, 9);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(126, 18);
        self.label4.TabIndex := 7;
        self.label4.Text := 'вариант19';
        // 
        // textBox2
        // 
        self.textBox2.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox2.Location := new System.Drawing.Point(441, 62);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(95, 29);
        self.textBox2.TabIndex := 8;
        // 
        // textBox3
        // 
        self.textBox3.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox3.Location := new System.Drawing.Point(576, 62);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(85, 29);
        self.textBox3.TabIndex := 9;
        // 
        // label5
        // 
        self.label5.Location := new System.Drawing.Point(441, 39);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(74, 16);
        self.label5.TabIndex := 10;
        self.label5.Text := 'радиус';
        // 
        // label6
        // 
        self.label6.Location := new System.Drawing.Point(576, 39);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(67, 16);
        self.label6.TabIndex := 11;
        self.label6.Text := 'сторона';
        // 
        // label7
        // 
        self.label7.BackColor := System.Drawing.SystemColors.ActiveCaption;
        self.label7.Font := new System.Drawing.Font('Microsoft Sans Serif', 28.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label7.ForeColor := System.Drawing.SystemColors.ControlText;
        self.label7.Location := new System.Drawing.Point(425, 206);
        self.label7.Name := 'label7';
        self.label7.Size := new System.Drawing.Size(249, 52);
        self.label7.TabIndex := 12;
        self.label7.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // textBox4
        // 
        self.textBox4.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox4.Location := new System.Drawing.Point(158, 71);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(131, 29);
        self.textBox4.TabIndex := 13;
        // 
        // label8
        // 
        self.label8.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label8.Location := new System.Drawing.Point(158, 39);
        self.label8.Name := 'label8';
        self.label8.Size := new System.Drawing.Size(140, 23);
        self.label8.TabIndex := 14;
        self.label8.Text := 'Введите день';
        // 
        // label9
        // 
        self.label9.Font := new System.Drawing.Font('Microsoft Sans Serif', 20.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label9.Location := new System.Drawing.Point(24, 121);
        self.label9.Name := 'label9';
        self.label9.Size := new System.Drawing.Size(134, 50);
        self.label9.TabIndex := 15;
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.SystemColors.GradientActiveCaption;
        self.ClientSize := new System.Drawing.Size(706, 308);
        self.Controls.Add(self.label9);
        self.Controls.Add(self.label8);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.label7);
        self.Controls.Add(self.label6);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.listBox1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
