procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(139, 400);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Россия';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(242, 400);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 1;
        self.button2.Text := 'Швеция';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(348, 400);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(75, 23);
        self.button3.TabIndex := 2;
        self.button3.Text := 'Англия';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(478, 588);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(75, 23);
        self.button4.TabIndex := 3;
        self.button4.Text := 'Выход';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // Form1
        // 
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.ClientSize := new System.Drawing.Size(1184, 636);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
    end;
