procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.gameToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.newGameToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.hardToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.mediumToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.easyToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.exitToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.menuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.BackColor := System.Drawing.SystemColors.ActiveCaption;
        self.button1.Enabled := false;
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.ForeColor := System.Drawing.Color.Black;
        self.button1.Location := new System.Drawing.Point(358, 229);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(133, 61);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Push Me';
        self.button1.UseVisualStyleBackColor := false;
        self.button1.Visible := false;
        self.button1.Click += button1_Click;
        self.button1.MouseEnter += button1_MouseEnter;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 22, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.Gold;
        self.label1.Location := new System.Drawing.Point(617, 39);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(211, 43);
        self.label1.TabIndex := 1;
        self.label1.Text := 'Score: ';
        // 
        // menuStrip1
        // 
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[1](self.gameToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(840, 24);
        self.menuStrip1.TabIndex := 2;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // gameToolStripMenuItem
        // 
        self.gameToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.newGameToolStripMenuItem, self.exitToolStripMenuItem));
        self.gameToolStripMenuItem.Name := 'gameToolStripMenuItem';
        self.gameToolStripMenuItem.Size := new System.Drawing.Size(50, 20);
        self.gameToolStripMenuItem.Text := 'Game';
        self.gameToolStripMenuItem.Click += gameToolStripMenuItem_Click;
        // 
        // newGameToolStripMenuItem
        // 
        self.newGameToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[3](self.hardToolStripMenuItem, self.mediumToolStripMenuItem, self.easyToolStripMenuItem));
        self.newGameToolStripMenuItem.Name := 'newGameToolStripMenuItem';
        self.newGameToolStripMenuItem.Size := new System.Drawing.Size(152, 22);
        self.newGameToolStripMenuItem.Text := 'New Game';
        // 
        // hardToolStripMenuItem
        // 
        self.hardToolStripMenuItem.Name := 'hardToolStripMenuItem';
        self.hardToolStripMenuItem.Size := new System.Drawing.Size(119, 22);
        self.hardToolStripMenuItem.Text := 'Hard';
        self.hardToolStripMenuItem.Click += hardToolStripMenuItem_Click;
        // 
        // mediumToolStripMenuItem
        // 
        self.mediumToolStripMenuItem.Name := 'mediumToolStripMenuItem';
        self.mediumToolStripMenuItem.Size := new System.Drawing.Size(119, 22);
        self.mediumToolStripMenuItem.Text := 'Medium';
        self.mediumToolStripMenuItem.Click += mediumToolStripMenuItem_Click;
        // 
        // easyToolStripMenuItem
        // 
        self.easyToolStripMenuItem.Name := 'easyToolStripMenuItem';
        self.easyToolStripMenuItem.Size := new System.Drawing.Size(119, 22);
        self.easyToolStripMenuItem.Text := 'Easy';
        self.easyToolStripMenuItem.Click += easyToolStripMenuItem_Click;
        // 
        // exitToolStripMenuItem
        // 
        self.exitToolStripMenuItem.Name := 'exitToolStripMenuItem';
        self.exitToolStripMenuItem.Size := new System.Drawing.Size(152, 22);
        self.exitToolStripMenuItem.Text := 'Exit';
        self.exitToolStripMenuItem.Click += exitToolStripMenuItem_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(840, 502);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.menuStrip1);
        self.MainMenuStrip := self.menuStrip1;
        self.Name := 'Form1';
        self.Text := 'Поймай кнопку';
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
