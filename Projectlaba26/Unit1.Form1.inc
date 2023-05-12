procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 15, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(29, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(425, 62);
        self.label1.TabIndex := 0;
        self.label1.Text := 'В ромбе заданы диагональ d1 и площадь S.'#13#10'Рассчитать остальные параметры.';
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // textBox1
        // 
        self.textBox1.Font := new System.Drawing.Font('Microsoft Sans Serif', 15, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.Location := new System.Drawing.Point(259, 112);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(100, 30);
        self.textBox1.TabIndex := 1;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // textBox2
        // 
        self.textBox2.Font := new System.Drawing.Font('Microsoft Sans Serif', 15, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox2.Location := new System.Drawing.Point(113, 112);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(100, 30);
        self.textBox2.TabIndex := 2;
        self.textBox2.TextChanged += textBox2_TextChanged;
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 15, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.Location := new System.Drawing.Point(81, 173);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(305, 50);
        self.button1.TabIndex := 3;
        self.button1.Text := 'Произвести рассчеты';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(113, 95);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(100, 14);
        self.label2.TabIndex := 4;
        self.label2.Text := 'Площадь';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(259, 95);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(100, 14);
        self.label3.TabIndex := 5;
        self.label3.Text := 'Диагональ';
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 15, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.Location := new System.Drawing.Point(25, 267);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(441, 137);
        self.label4.TabIndex := 6;
        self.label4.Text := 'a  – сторона ромба -'#13#10'А, В, С, D – углы ромба -'#13#10'd1, d2 – диагонали ромба - '#13#10'p - периметр и площадь ромба -'#13#10'S –  площадь ромба -'#13#10#13#10;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(495, 437);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
