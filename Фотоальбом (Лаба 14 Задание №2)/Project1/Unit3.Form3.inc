procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form3));
        self.label1 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.SystemColors.ActiveCaption;
        self.label1.Font := new System.Drawing.Font('Segoe Print', 20.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.SystemColors.ControlLightLight;
        self.label1.Location := new System.Drawing.Point(875, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(255, 105);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Тауэрский мост Великобритания';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(995, 637);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 1;
        self.button1.Text := 'назад';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Form3
        // 
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.ClientSize := new System.Drawing.Size(1184, 722);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label1);
        self.Name := 'Form3';
        self.Text := 'Form1';
        self.ResumeLayout(false);
    end;
