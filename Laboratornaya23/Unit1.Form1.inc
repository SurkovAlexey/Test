procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.label5 := new System.Windows.Forms.Label();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.label6 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.Red;
        self.label1.Location := new System.Drawing.Point(165, 19);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(173, 31);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Введите числа';
        // 
        // textBox1
        // 
        self.textBox1.BackColor := System.Drawing.Color.PapayaWhip;
        self.textBox1.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.ForeColor := System.Drawing.Color.Red;
        self.textBox1.Location := new System.Drawing.Point(72, 102);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(77, 32);
        self.textBox1.TabIndex := 1;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.ForeColor := System.Drawing.Color.Red;
        self.label2.Location := new System.Drawing.Point(97, 68);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(29, 31);
        self.label2.TabIndex := 2;
        self.label2.Text := 'A';
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.ForeColor := System.Drawing.Color.Red;
        self.label3.Location := new System.Drawing.Point(191, 68);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(29, 31);
        self.label3.TabIndex := 3;
        self.label3.Text := 'B';
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.ForeColor := System.Drawing.Color.Red;
        self.label4.Location := new System.Drawing.Point(291, 68);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(29, 31);
        self.label4.TabIndex := 4;
        self.label4.Text := 'C';
        // 
        // label5
        // 
        self.label5.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label5.ForeColor := System.Drawing.Color.Red;
        self.label5.Location := new System.Drawing.Point(389, 68);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(29, 31);
        self.label5.TabIndex := 5;
        self.label5.Text := 'D';
        // 
        // textBox2
        // 
        self.textBox2.BackColor := System.Drawing.Color.PapayaWhip;
        self.textBox2.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox2.ForeColor := System.Drawing.Color.Red;
        self.textBox2.Location := new System.Drawing.Point(165, 102);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(80, 32);
        self.textBox2.TabIndex := 6;
        // 
        // textBox3
        // 
        self.textBox3.BackColor := System.Drawing.Color.PapayaWhip;
        self.textBox3.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox3.ForeColor := System.Drawing.Color.Red;
        self.textBox3.Location := new System.Drawing.Point(264, 102);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(82, 32);
        self.textBox3.TabIndex := 7;
        // 
        // textBox4
        // 
        self.textBox4.BackColor := System.Drawing.Color.PapayaWhip;
        self.textBox4.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox4.ForeColor := System.Drawing.Color.Red;
        self.textBox4.Location := new System.Drawing.Point(365, 102);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(77, 32);
        self.textBox4.TabIndex := 8;
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 14, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.ForeColor := System.Drawing.Color.Red;
        self.button1.Location := new System.Drawing.Point(137, 174);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(236, 58);
        self.button1.TabIndex := 9;
        self.button1.Text := 'Вычислить значение'#13#10'max{min(a,b),min(c,d)}';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // label6
        // 
        self.label6.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label6.ForeColor := System.Drawing.Color.Red;
        self.label6.Location := new System.Drawing.Point(148, 282);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(225, 53);
        self.label6.TabIndex := 10;
        self.label6.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(519, 455);
        self.Controls.Add(self.label6);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.Text := 'Лабораторная 23';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
