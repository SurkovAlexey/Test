procedure InitializeComponent;
    begin
        self.panel1 := new System.Windows.Forms.Panel();
        self.button1 := new System.Windows.Forms.Button();
        self.panel2 := new System.Windows.Forms.Panel();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.panel1.SuspendLayout();
        self.panel2.SuspendLayout();
        self.SuspendLayout();
        // 
        // panel1
        // 
        self.panel1.Controls.Add(self.textBox3);
        self.panel1.Controls.Add(self.textBox2);
        self.panel1.Controls.Add(self.label4);
        self.panel1.Controls.Add(self.label3);
        self.panel1.Controls.Add(self.button1);
        self.panel1.Location := new System.Drawing.Point(85, 174);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(186, 119);
        self.panel1.TabIndex := 1;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(45, 85);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 2;
        self.button1.Text := 'Войти';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // panel2
        // 
        self.panel2.Controls.Add(self.button4);
        self.panel2.Controls.Add(self.button3);
        self.panel2.Controls.Add(self.button2);
        self.panel2.Controls.Add(self.label2);
        self.panel2.Controls.Add(self.textBox1);
        self.panel2.Controls.Add(self.label1);
        self.panel2.Enabled := false;
        self.panel2.Location := new System.Drawing.Point(103, 3);
        self.panel2.Name := 'panel2';
        self.panel2.Size := new System.Drawing.Size(152, 169);
        self.panel2.TabIndex := 2;
        self.panel2.Visible := false;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(13, 14);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(116, 17);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Баланс';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(13, 47);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(49, 20);
        self.label2.TabIndex := 2;
        self.label2.Text := 'Сумма';
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(31, 84);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 3;
        self.button2.Text := 'Снять';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(31, 113);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(75, 23);
        self.button3.TabIndex := 4;
        self.button3.Text := 'Внести';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(31, 142);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(75, 23);
        self.button4.TabIndex := 5;
        self.button4.Text := 'Выход';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(15, 8);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(100, 14);
        self.label3.TabIndex := 3;
        self.label3.Text := 'Логин';
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(14, 45);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(100, 14);
        self.label4.TabIndex := 4;
        self.label4.Text := 'Пароль';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(68, 47);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(78, 20);
        self.textBox1.TabIndex := 1;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(59, 5);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(100, 20);
        self.textBox2.TabIndex := 5;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(59, 42);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(100, 20);
        self.textBox3.TabIndex := 6;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(367, 338);
        self.Controls.Add(self.panel2);
        self.Controls.Add(self.panel1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.panel1.ResumeLayout(false);
        self.panel1.PerformLayout();
        self.panel2.ResumeLayout(false);
        self.panel2.PerformLayout();
        self.ResumeLayout(false);
    end;
