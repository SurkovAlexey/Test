procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        self.label1 := new System.Windows.Forms.Label();
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.label2 := new System.Windows.Forms.Label();
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem4 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem6 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripMenuItem();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.label5 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.groupBox2 := new System.Windows.Forms.GroupBox();
        self.label8 := new System.Windows.Forms.Label();
        self.button2 := new System.Windows.Forms.Button();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label7 := new System.Windows.Forms.Label();
        self.label6 := new System.Windows.Forms.Label();
        self.groupBox3 := new System.Windows.Forms.GroupBox();
        self.label14 := new System.Windows.Forms.Label();
        self.button3 := new System.Windows.Forms.Button();
        self.label13 := new System.Windows.Forms.Label();
        self.label12 := new System.Windows.Forms.Label();
        self.label11 := new System.Windows.Forms.Label();
        self.textBox10 := new System.Windows.Forms.TextBox();
        self.textBox9 := new System.Windows.Forms.TextBox();
        self.textBox8 := new System.Windows.Forms.TextBox();
        self.textBox7 := new System.Windows.Forms.TextBox();
        self.textBox6 := new System.Windows.Forms.TextBox();
        self.textBox5 := new System.Windows.Forms.TextBox();
        self.label10 := new System.Windows.Forms.Label();
        self.label9 := new System.Windows.Forms.Label();
        self.menuStrip1.SuspendLayout();
        self.groupBox1.SuspendLayout();
        self.groupBox2.SuspendLayout();
        self.groupBox3.SuspendLayout();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(12, 343);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(110, 14);
        self.label1.TabIndex := 0;
        // 
        // timer1
        // 
        self.timer1.Tick += timer1_Tick;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(137, 343);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(149, 14);
        self.label2.TabIndex := 1;
        // 
        // menuStrip1
        // 
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem1));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(295, 24);
        self.menuStrip1.TabIndex := 2;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.toolStripMenuItem3, self.toolStripMenuItem4, self.toolStripMenuItem6, self.toolStripMenuItem5));
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(53, 20);
        self.toolStripMenuItem1.Text := 'Меню';
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.Size := new System.Drawing.Size(162, 22);
        self.toolStripMenuItem3.Text := 'Лабораторная 1';
        self.toolStripMenuItem3.Click += toolStripMenuItem3_Click;
        // 
        // toolStripMenuItem4
        // 
        self.toolStripMenuItem4.Name := 'toolStripMenuItem4';
        self.toolStripMenuItem4.Size := new System.Drawing.Size(162, 22);
        self.toolStripMenuItem4.Text := 'Лабораторная 2';
        self.toolStripMenuItem4.Click += toolStripMenuItem4_Click;
        // 
        // toolStripMenuItem6
        // 
        self.toolStripMenuItem6.Name := 'toolStripMenuItem6';
        self.toolStripMenuItem6.Size := new System.Drawing.Size(162, 22);
        self.toolStripMenuItem6.Text := 'Лабораторная 3';
        self.toolStripMenuItem6.Click += toolStripMenuItem6_Click;
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.Size := new System.Drawing.Size(162, 22);
        self.toolStripMenuItem5.Text := 'Выход';
        self.toolStripMenuItem5.Click += toolStripMenuItem5_Click;
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.label5);
        self.groupBox1.Controls.Add(self.label4);
        self.groupBox1.Controls.Add(self.label3);
        self.groupBox1.Controls.Add(self.button1);
        self.groupBox1.Controls.Add(self.textBox2);
        self.groupBox1.Controls.Add(self.textBox1);
        self.groupBox1.Enabled := false;
        self.groupBox1.Location := new System.Drawing.Point(15, 40);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(235, 269);
        self.groupBox1.TabIndex := 3;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'Лабораторная 1';
        self.groupBox1.Visible := false;
        // 
        // label5
        // 
        self.label5.Font := new System.Drawing.Font('Microsoft Sans Serif', 14, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label5.Location := new System.Drawing.Point(48, 130);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(130, 25);
        self.label5.TabIndex := 5;
        self.label5.Text := 'результат';
        self.label5.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(122, 29);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(100, 14);
        self.label4.TabIndex := 4;
        self.label4.Text := 'сторона';
        self.label4.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(6, 29);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(100, 14);
        self.label3.TabIndex := 3;
        self.label3.Text := 'радиус';
        self.label3.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(78, 90);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 2;
        self.button1.Text := 'проверка';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(122, 46);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(100, 20);
        self.textBox2.TabIndex := 1;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(6, 46);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(100, 20);
        self.textBox1.TabIndex := 0;
        // 
        // groupBox2
        // 
        self.groupBox2.Controls.Add(self.label8);
        self.groupBox2.Controls.Add(self.button2);
        self.groupBox2.Controls.Add(self.textBox4);
        self.groupBox2.Controls.Add(self.textBox3);
        self.groupBox2.Controls.Add(self.label7);
        self.groupBox2.Controls.Add(self.label6);
        self.groupBox2.Enabled := false;
        self.groupBox2.Location := new System.Drawing.Point(32, 34);
        self.groupBox2.Name := 'groupBox2';
        self.groupBox2.Size := new System.Drawing.Size(233, 269);
        self.groupBox2.TabIndex := 4;
        self.groupBox2.TabStop := false;
        self.groupBox2.Text := 'Лабораторная 2';
        self.groupBox2.Visible := false;
        // 
        // label8
        // 
        self.label8.Font := new System.Drawing.Font('Microsoft Sans Serif', 14, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label8.Location := new System.Drawing.Point(46, 130);
        self.label8.Name := 'label8';
        self.label8.Size := new System.Drawing.Size(130, 25);
        self.label8.TabIndex := 9;
        self.label8.Text := 'результат';
        self.label8.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(72, 90);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 8;
        self.button2.Text := 'проверка';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // textBox4
        // 
        self.textBox4.Location := new System.Drawing.Point(123, 46);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(100, 20);
        self.textBox4.TabIndex := 7;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(6, 46);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(100, 20);
        self.textBox3.TabIndex := 6;
        // 
        // label7
        // 
        self.label7.Location := new System.Drawing.Point(123, 29);
        self.label7.Name := 'label7';
        self.label7.Size := new System.Drawing.Size(100, 14);
        self.label7.TabIndex := 5;
        self.label7.Text := 'день';
        self.label7.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // label6
        // 
        self.label6.Location := new System.Drawing.Point(6, 29);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(100, 14);
        self.label6.TabIndex := 4;
        self.label6.Text := 'год';
        self.label6.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // groupBox3
        // 
        self.groupBox3.BackgroundImageLayout := System.Windows.Forms.ImageLayout.None;
        self.groupBox3.Controls.Add(self.label14);
        self.groupBox3.Controls.Add(self.button3);
        self.groupBox3.Controls.Add(self.label13);
        self.groupBox3.Controls.Add(self.label12);
        self.groupBox3.Controls.Add(self.label11);
        self.groupBox3.Controls.Add(self.textBox10);
        self.groupBox3.Controls.Add(self.textBox9);
        self.groupBox3.Controls.Add(self.textBox8);
        self.groupBox3.Controls.Add(self.textBox7);
        self.groupBox3.Controls.Add(self.textBox6);
        self.groupBox3.Controls.Add(self.textBox5);
        self.groupBox3.Controls.Add(self.label10);
        self.groupBox3.Controls.Add(self.label9);
        self.groupBox3.Enabled := false;
        self.groupBox3.Location := new System.Drawing.Point(7, 46);
        self.groupBox3.Name := 'groupBox3';
        self.groupBox3.Size := new System.Drawing.Size(258, 294);
        self.groupBox3.TabIndex := 5;
        self.groupBox3.TabStop := false;
        self.groupBox3.Text := 'Лабораторная 3';
        self.groupBox3.Visible := false;
        // 
        // label14
        // 
        self.label14.Font := new System.Drawing.Font('Microsoft Sans Serif', 8, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label14.Location := new System.Drawing.Point(6, 137);
        self.label14.Name := 'label14';
        self.label14.Size := new System.Drawing.Size(246, 145);
        self.label14.TabIndex := 17;
        self.label14.Text := 'результат';
        self.label14.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(106, 111);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(75, 23);
        self.button3.TabIndex := 16;
        self.button3.Text := 'рассчитать';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // label13
        // 
        self.label13.Location := new System.Drawing.Point(14, 87);
        self.label13.Name := 'label13';
        self.label13.Size := new System.Drawing.Size(31, 14);
        self.label13.TabIndex := 15;
        self.label13.Text := 'C';
        self.label13.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // label12
        // 
        self.label12.Location := new System.Drawing.Point(14, 61);
        self.label12.Name := 'label12';
        self.label12.Size := new System.Drawing.Size(31, 14);
        self.label12.TabIndex := 14;
        self.label12.Text := 'B';
        self.label12.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // label11
        // 
        self.label11.Location := new System.Drawing.Point(14, 36);
        self.label11.Name := 'label11';
        self.label11.Size := new System.Drawing.Size(31, 14);
        self.label11.TabIndex := 13;
        self.label11.Text := 'A';
        self.label11.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // textBox10
        // 
        self.textBox10.Location := new System.Drawing.Point(145, 85);
        self.textBox10.Name := 'textBox10';
        self.textBox10.Size := new System.Drawing.Size(88, 20);
        self.textBox10.TabIndex := 12;
        // 
        // textBox9
        // 
        self.textBox9.Location := new System.Drawing.Point(51, 85);
        self.textBox9.Name := 'textBox9';
        self.textBox9.Size := new System.Drawing.Size(88, 20);
        self.textBox9.TabIndex := 11;
        // 
        // textBox8
        // 
        self.textBox8.Location := new System.Drawing.Point(145, 59);
        self.textBox8.Name := 'textBox8';
        self.textBox8.Size := new System.Drawing.Size(88, 20);
        self.textBox8.TabIndex := 10;
        // 
        // textBox7
        // 
        self.textBox7.Location := new System.Drawing.Point(51, 59);
        self.textBox7.Name := 'textBox7';
        self.textBox7.Size := new System.Drawing.Size(88, 20);
        self.textBox7.TabIndex := 9;
        // 
        // textBox6
        // 
        self.textBox6.Location := new System.Drawing.Point(145, 33);
        self.textBox6.Name := 'textBox6';
        self.textBox6.Size := new System.Drawing.Size(88, 20);
        self.textBox6.TabIndex := 8;
        // 
        // textBox5
        // 
        self.textBox5.Location := new System.Drawing.Point(51, 33);
        self.textBox5.Name := 'textBox5';
        self.textBox5.Size := new System.Drawing.Size(88, 20);
        self.textBox5.TabIndex := 7;
        // 
        // label10
        // 
        self.label10.Location := new System.Drawing.Point(145, 16);
        self.label10.Name := 'label10';
        self.label10.Size := new System.Drawing.Size(88, 14);
        self.label10.TabIndex := 6;
        self.label10.Text := 'Y';
        self.label10.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // label9
        // 
        self.label9.Location := new System.Drawing.Point(51, 16);
        self.label9.Name := 'label9';
        self.label9.Size := new System.Drawing.Size(88, 14);
        self.label9.TabIndex := 5;
        self.label9.Text := 'X';
        self.label9.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        self.label9.Click += label9_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(295, 366);
        self.Controls.Add(self.groupBox3);
        self.Controls.Add(self.groupBox1);
        self.Controls.Add(self.groupBox2);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.menuStrip1);
        self.MainMenuStrip := self.menuStrip1;
        self.Name := 'Form1';
        self.Text := 'Lab 12';
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.groupBox1.ResumeLayout(false);
        self.groupBox1.PerformLayout();
        self.groupBox2.ResumeLayout(false);
        self.groupBox2.PerformLayout();
        self.groupBox3.ResumeLayout(false);
        self.groupBox3.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
