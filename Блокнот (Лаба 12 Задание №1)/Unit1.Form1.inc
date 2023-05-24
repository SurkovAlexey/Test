procedure InitializeComponent;
    begin
        self.colorDialog1 := new System.Windows.Forms.ColorDialog();
        self.folderBrowserDialog1 := new System.Windows.Forms.FolderBrowserDialog();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.toolStripMenuItem7 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem14 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem15 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem16 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem17 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem4 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem12 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem6 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripSeparator();
        self.toolStripMenuItem8 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem2 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem9 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem10 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem11 := new System.Windows.Forms.ToolStripMenuItem();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.fontDialog1 := new System.Windows.Forms.FontDialog();
        self.printDialog1 := new System.Windows.Forms.PrintDialog();
        self.menuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.FileName := 'openFileDialog1';
        // 
        // menuStrip1
        // 
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[3](self.toolStripMenuItem7, self.toolStripMenuItem1, self.toolStripMenuItem2));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(624, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // toolStripMenuItem7
        // 
        self.toolStripMenuItem7.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.toolStripMenuItem14, self.toolStripMenuItem15, self.toolStripMenuItem16, self.toolStripMenuItem17));
        self.toolStripMenuItem7.Name := 'toolStripMenuItem7';
        self.toolStripMenuItem7.Size := new System.Drawing.Size(53, 20);
        self.toolStripMenuItem7.Text := 'Меню';
        // 
        // toolStripMenuItem14
        // 
        self.toolStripMenuItem14.Name := 'toolStripMenuItem14';
        self.toolStripMenuItem14.Size := new System.Drawing.Size(195, 22);
        self.toolStripMenuItem14.Text := 'Печать';
        self.toolStripMenuItem14.Click += toolStripMenuItem14_Click;
        // 
        // toolStripMenuItem15
        // 
        self.toolStripMenuItem15.Name := 'toolStripMenuItem15';
        self.toolStripMenuItem15.Size := new System.Drawing.Size(195, 22);
        self.toolStripMenuItem15.Text := 'Поиск';
        self.toolStripMenuItem15.Click += toolStripMenuItem15_Click;
        // 
        // toolStripMenuItem16
        // 
        self.toolStripMenuItem16.Name := 'toolStripMenuItem16';
        self.toolStripMenuItem16.Size := new System.Drawing.Size(195, 22);
        self.toolStripMenuItem16.Text := 'Замена';
        self.toolStripMenuItem16.Click += toolStripMenuItem16_Click;
        // 
        // toolStripMenuItem17
        // 
        self.toolStripMenuItem17.Name := 'toolStripMenuItem17';
        self.toolStripMenuItem17.Size := new System.Drawing.Size(195, 22);
        self.toolStripMenuItem17.Text := 'Параметры страницы';
        self.toolStripMenuItem17.Click += toolStripMenuItem17_Click;
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[6](self.toolStripMenuItem4, self.toolStripMenuItem5, self.toolStripMenuItem12, self.toolStripMenuItem6, self.toolStripMenuItem3, self.toolStripMenuItem8));
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(48, 20);
        self.toolStripMenuItem1.Text := 'Файл';
        // 
        // toolStripMenuItem4
        // 
        self.toolStripMenuItem4.Name := 'toolStripMenuItem4';
        self.toolStripMenuItem4.Size := new System.Drawing.Size(160, 22);
        self.toolStripMenuItem4.Text := 'Новый';
        self.toolStripMenuItem4.Click += toolStripMenuItem4_Click;
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.Size := new System.Drawing.Size(160, 22);
        self.toolStripMenuItem5.Text := 'Открыть';
        self.toolStripMenuItem5.Click += toolStripMenuItem5_Click;
        // 
        // toolStripMenuItem12
        // 
        self.toolStripMenuItem12.Name := 'toolStripMenuItem12';
        self.toolStripMenuItem12.Size := new System.Drawing.Size(160, 22);
        self.toolStripMenuItem12.Text := 'Сохранить';
        self.toolStripMenuItem12.Click += toolStripMenuItem12_Click;
        // 
        // toolStripMenuItem6
        // 
        self.toolStripMenuItem6.Name := 'toolStripMenuItem6';
        self.toolStripMenuItem6.Size := new System.Drawing.Size(160, 22);
        self.toolStripMenuItem6.Text := 'Сохранить как..';
        self.toolStripMenuItem6.Click += toolStripMenuItem6_Click;
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.Size := new System.Drawing.Size(157, 6);
        // 
        // toolStripMenuItem8
        // 
        self.toolStripMenuItem8.Name := 'toolStripMenuItem8';
        self.toolStripMenuItem8.Size := new System.Drawing.Size(160, 22);
        self.toolStripMenuItem8.Text := 'Выход';
        self.toolStripMenuItem8.Click += toolStripMenuItem8_Click;
        // 
        // toolStripMenuItem2
        // 
        self.toolStripMenuItem2.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[3](self.toolStripMenuItem9, self.toolStripMenuItem10, self.toolStripMenuItem11));
        self.toolStripMenuItem2.Name := 'toolStripMenuItem2';
        self.toolStripMenuItem2.Size := new System.Drawing.Size(62, 20);
        self.toolStripMenuItem2.Text := 'Формат';
        // 
        // toolStripMenuItem9
        // 
        self.toolStripMenuItem9.Name := 'toolStripMenuItem9';
        self.toolStripMenuItem9.Size := new System.Drawing.Size(148, 22);
        self.toolStripMenuItem9.Text := 'Шрифт';
        self.toolStripMenuItem9.Click += toolStripMenuItem9_Click;
        // 
        // toolStripMenuItem10
        // 
        self.toolStripMenuItem10.Name := 'toolStripMenuItem10';
        self.toolStripMenuItem10.Size := new System.Drawing.Size(148, 22);
        self.toolStripMenuItem10.Text := 'Цвет шрифта';
        self.toolStripMenuItem10.Click += toolStripMenuItem10_Click;
        // 
        // toolStripMenuItem11
        // 
        self.toolStripMenuItem11.Name := 'toolStripMenuItem11';
        self.toolStripMenuItem11.Size := new System.Drawing.Size(148, 22);
        self.toolStripMenuItem11.Text := 'Цвет фона';
        self.toolStripMenuItem11.Click += toolStripMenuItem11_Click;
        // 
        // textBox1
        // 
        self.textBox1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.textBox1.Location := new System.Drawing.Point(0, 24);
        self.textBox1.Multiline := true;
        self.textBox1.Name := 'textBox1';
        self.textBox1.RightToLeft := System.Windows.Forms.RightToLeft.No;
        self.textBox1.ScrollBars := System.Windows.Forms.ScrollBars.Both;
        self.textBox1.Size := new System.Drawing.Size(624, 283);
        self.textBox1.TabIndex := 1;
        // 
        // printDialog1
        // 
        self.printDialog1.UseEXDialog := true;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(624, 307);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.menuStrip1);
        self.MainMenuStrip := self.menuStrip1;
        self.Name := 'Form1';
        self.Text := 'Блокнот (Задание№1)';
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
