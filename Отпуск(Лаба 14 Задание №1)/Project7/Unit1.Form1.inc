procedure InitializeComponent;
    begin
        self.monthCalendar1 := new System.Windows.Forms.MonthCalendar();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.listBox1 := new System.Windows.Forms.ListBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.label3 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.label4 := new System.Windows.Forms.Label();
        self.label5 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // monthCalendar1
        // 
        self.monthCalendar1.Location := new System.Drawing.Point(18, 245);
        self.monthCalendar1.Name := 'monthCalendar1';
        self.monthCalendar1.TabIndex := 0;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(75, 50);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(240, 20);
        self.textBox1.TabIndex := 1;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(18, 47);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(51, 23);
        self.label1.TabIndex := 2;
        self.label1.Text := 'ФИО';
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(18, 9);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(100, 23);
        self.label2.TabIndex := 3;
        self.label2.Text := 'Форма';
        // 
        // listBox1
        // 
        self.listBox1.FormattingEnabled := true;
        self.listBox1.Items.AddRange(new System.Object[5](' Владивосток ', ' Рим ', ' Берлин ', ' Гонконг ', ' Париж '));
        self.listBox1.Location := new System.Drawing.Point(18, 117);
        self.listBox1.Name := 'listBox1';
        self.listBox1.Size := new System.Drawing.Size(120, 95);
        self.listBox1.TabIndex := 4;
        self.listBox1.SelectedIndexChanged += listBox1_SelectedIndexChanged;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(194, 245);
        self.textBox2.Multiline := true;
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(176, 162);
        self.textBox2.TabIndex := 5;
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.Location := new System.Drawing.Point(225, 212);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(118, 23);
        self.label3.TabIndex := 6;
        self.label3.Text := 'Результат';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(203, 419);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 7;
        self.button1.Text := 'Очистить';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(295, 419);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 8;
        self.button2.Text := 'Выход';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(43, 419);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(95, 23);
        self.button3.TabIndex := 9;
        self.button3.Text := 'Сформировать';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.Location := new System.Drawing.Point(18, 91);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(164, 23);
        self.label4.TabIndex := 10;
        self.label4.Text := 'Выберите место отдыха';
        // 
        // label5
        // 
        self.label5.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label5.Location := new System.Drawing.Point(18, 220);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(120, 16);
        self.label5.TabIndex := 11;
        self.label5.Text := 'Дата отправления';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(382, 454);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.listBox1);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.monthCalendar1);
        self.Name := 'Form1';
        self.Text := 'Анкета для отдыха';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
