procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.radioButton1 := new System.Windows.Forms.RadioButton();
        self.radioButton2 := new System.Windows.Forms.RadioButton();
        self.radioButton3 := new System.Windows.Forms.RadioButton();
        self.radioButton4 := new System.Windows.Forms.RadioButton();
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem4 := new System.Windows.Forms.ToolStripMenuItem();
        self.button4 := new System.Windows.Forms.Button();
        self.label2 := new System.Windows.Forms.Label();
        self.menuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.label1.Enabled := false;
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(23, 31);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(419, 51);
        self.label1.TabIndex := 0;
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        self.label1.Visible := false;
        // 
        // button1
        // 
        self.button1.Enabled := false;
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 14, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.Location := new System.Drawing.Point(23, 440);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(130, 43);
        self.button1.TabIndex := 5;
        self.button1.Text := 'Ответить';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Visible := false;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Enabled := false;
        self.button2.Font := new System.Drawing.Font('Microsoft Sans Serif', 14, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button2.Location := new System.Drawing.Point(304, 440);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(109, 43);
        self.button2.TabIndex := 6;
        self.button2.Text := 'вперед';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Visible := false;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Enabled := false;
        self.button3.Font := new System.Drawing.Font('Microsoft Sans Serif', 14, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button3.Location := new System.Drawing.Point(204, 440);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(94, 43);
        self.button3.TabIndex := 7;
        self.button3.Text := 'назад';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Visible := false;
        self.button3.Click += button3_Click;
        // 
        // radioButton1
        // 
        self.radioButton1.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.radioButton1.Enabled := false;
        self.radioButton1.Font := new System.Drawing.Font('Microsoft Sans Serif', 11, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.radioButton1.Location := new System.Drawing.Point(42, 100);
        self.radioButton1.Name := 'radioButton1';
        self.radioButton1.Size := new System.Drawing.Size(400, 61);
        self.radioButton1.TabIndex := 8;
        self.radioButton1.TabStop := true;
        self.radioButton1.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        self.radioButton1.UseVisualStyleBackColor := false;
        self.radioButton1.Visible := false;
        // 
        // radioButton2
        // 
        self.radioButton2.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.radioButton2.Enabled := false;
        self.radioButton2.Font := new System.Drawing.Font('Microsoft Sans Serif', 11, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.radioButton2.Location := new System.Drawing.Point(42, 176);
        self.radioButton2.Name := 'radioButton2';
        self.radioButton2.Size := new System.Drawing.Size(400, 57);
        self.radioButton2.TabIndex := 9;
        self.radioButton2.TabStop := true;
        self.radioButton2.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        self.radioButton2.UseVisualStyleBackColor := false;
        self.radioButton2.Visible := false;
        // 
        // radioButton3
        // 
        self.radioButton3.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.radioButton3.Enabled := false;
        self.radioButton3.Font := new System.Drawing.Font('Microsoft Sans Serif', 11, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.radioButton3.Location := new System.Drawing.Point(42, 249);
        self.radioButton3.Name := 'radioButton3';
        self.radioButton3.Size := new System.Drawing.Size(400, 60);
        self.radioButton3.TabIndex := 10;
        self.radioButton3.TabStop := true;
        self.radioButton3.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        self.radioButton3.UseVisualStyleBackColor := false;
        self.radioButton3.Visible := false;
        // 
        // radioButton4
        // 
        self.radioButton4.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.radioButton4.Enabled := false;
        self.radioButton4.Font := new System.Drawing.Font('Microsoft Sans Serif', 11, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.radioButton4.Location := new System.Drawing.Point(42, 327);
        self.radioButton4.Name := 'radioButton4';
        self.radioButton4.Size := new System.Drawing.Size(400, 68);
        self.radioButton4.TabIndex := 11;
        self.radioButton4.TabStop := true;
        self.radioButton4.Tag := '';
        self.radioButton4.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        self.radioButton4.UseVisualStyleBackColor := false;
        self.radioButton4.Visible := false;
        // 
        // menuStrip1
        // 
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem1));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(672, 24);
        self.menuStrip1.TabIndex := 12;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem3, self.toolStripMenuItem4));
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(85, 20);
        self.toolStripMenuItem1.Text := 'Управление';
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.Size := new System.Drawing.Size(138, 22);
        self.toolStripMenuItem3.Text := 'Начать тест';
        self.toolStripMenuItem3.Click += toolStripMenuItem3_Click;
        // 
        // toolStripMenuItem4
        // 
        self.toolStripMenuItem4.Name := 'toolStripMenuItem4';
        self.toolStripMenuItem4.Size := new System.Drawing.Size(138, 22);
        self.toolStripMenuItem4.Text := 'Выход';
        self.toolStripMenuItem4.Click += toolStripMenuItem4_Click;
        // 
        // button4
        // 
        self.button4.Enabled := false;
        self.button4.Font := new System.Drawing.Font('Microsoft Sans Serif', 15, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button4.Location := new System.Drawing.Point(477, 440);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(172, 43);
        self.button4.TabIndex := 13;
        self.button4.Text := 'Сдать тест';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Visible := false;
        self.button4.Click += button4_Click;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 38, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(477, 327);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(172, 67);
        self.label2.TabIndex := 14;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(672, 507);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.radioButton4);
        self.Controls.Add(self.radioButton3);
        self.Controls.Add(self.radioButton2);
        self.Controls.Add(self.radioButton1);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.menuStrip1);
        self.MainMenuStrip := self.menuStrip1;
        self.Name := 'Form1';
        self.Text := 'Test';
        self.FormClosing += Form2_FormClosing;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
