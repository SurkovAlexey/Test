procedure InitializeComponent;
    begin
        self.listBox1 := new System.Windows.Forms.ListBox();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.listBox2 := new System.Windows.Forms.ListBox();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // listBox1
        // 
        self.listBox1.Font := new System.Drawing.Font('Microsoft Sans Serif', 18.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.listBox1.ForeColor := System.Drawing.Color.Lime;
        self.listBox1.FormattingEnabled := true;
        self.listBox1.ItemHeight := 29;
        self.listBox1.Location := new System.Drawing.Point(20, 176);
        self.listBox1.Name := 'listBox1';
        self.listBox1.Size := new System.Drawing.Size(89, 207);
        self.listBox1.TabIndex := 0;
        self.listBox1.SelectedIndexChanged += listBox1_SelectedIndexChanged;
        // 
        // textBox1
        // 
        self.textBox1.Font := new System.Drawing.Font('Microsoft Sans Serif', 14, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.Location := new System.Drawing.Point(12, 24);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(282, 29);
        self.textBox1.TabIndex := 1;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.ForeColor := System.Drawing.SystemColors.MenuHighlight;
        self.button1.Location := new System.Drawing.Point(12, 71);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(86, 41);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Go';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        self.button1.Enter += button1_Enter;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(129, 86);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(165, 42);
        self.label1.TabIndex := 2;
        // 
        // listBox2
        // 
        self.listBox2.Font := new System.Drawing.Font('Microsoft Sans Serif', 18.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.listBox2.ForeColor := System.Drawing.Color.DeepPink;
        self.listBox2.FormattingEnabled := true;
        self.listBox2.ItemHeight := 29;
        self.listBox2.Location := new System.Drawing.Point(182, 176);
        self.listBox2.Name := 'listBox2';
        self.listBox2.Size := new System.Drawing.Size(81, 207);
        self.listBox2.TabIndex := 3;
        self.listBox2.SelectedIndexChanged += listBox2_SelectedIndexChanged;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.ForeColor := System.Drawing.SystemColors.InfoText;
        self.label2.Location := new System.Drawing.Point(23, 151);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(86, 22);
        self.label2.TabIndex := 4;
        self.label2.Text := 'Четные';
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.ForeColor := System.Drawing.SystemColors.InfoText;
        self.label3.Location := new System.Drawing.Point(172, 150);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(100, 23);
        self.label3.TabIndex := 5;
        self.label3.Text := 'Нечетные';
        self.label3.Click += label3_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(325, 413);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.listBox2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.listBox1);
        self.Name := 'Form1';
        self.Text := 'Четность';
        self.FormClosing += Form1_FormClosing;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
