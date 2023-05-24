Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure toolStripMenuItem4_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem5_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem6_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem8_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem9_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem10_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem11_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem12_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem15_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem14_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem16_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem17_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    colorDialog1: ColorDialog;
    folderBrowserDialog1: FolderBrowserDialog;
    openFileDialog1: OpenFileDialog;
    saveFileDialog1: SaveFileDialog;
    menuStrip1: MenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    toolStripMenuItem4: ToolStripMenuItem;
    toolStripMenuItem5: ToolStripMenuItem;
    toolStripMenuItem6: ToolStripMenuItem;
    toolStripMenuItem3: ToolStripSeparator;
    toolStripMenuItem8: ToolStripMenuItem;
    toolStripMenuItem2: ToolStripMenuItem;
    toolStripMenuItem9: ToolStripMenuItem;
    toolStripMenuItem10: ToolStripMenuItem;
    toolStripMenuItem11: ToolStripMenuItem;
    fontDialog1: FontDialog;
    toolStripMenuItem12: ToolStripMenuItem;
    toolStripMenuItem7: ToolStripMenuItem;
    toolStripMenuItem14: ToolStripMenuItem;
    toolStripMenuItem15: ToolStripMenuItem;
    toolStripMenuItem16: ToolStripMenuItem;
    toolStripMenuItem17: ToolStripMenuItem;
    printDialog1: PrintDialog;
    components: System.ComponentModel.IContainer;
    textBox1: TextBox;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation
var s, F_N:string;
k, i:integer;

procedure Form1.toolStripMenuItem4_Click(sender: Object; e: EventArgs);
begin
  //очистить
  TextBox1.Clear;
end;

procedure Form1.toolStripMenuItem5_Click(sender: Object; e: EventArgs);
begin
  //Открытие нового файла по кнопке "Открыть"
  OpenFileDialog1.ShowDialog();
  s:=OpenFileDialog1.FileName;
  Text:='Блокнот (Задание №1)' + s;
  TextBox1.Lines:=ReadAllLines(s);
end;

procedure Form1.toolStripMenuItem6_Click(sender: Object; e: EventArgs);
begin
  //Сохранить файл по кнопке "Сохранить как..."
  SaveFileDialog1.ShowDialog();
  F_N:=SaveFileDialog1.FileName;
  WriteAllLines(F_N, TextBox1.Lines);
  Text:= 'Блокнот (Задание №1)' + F_N;
end;

procedure Form1.toolStripMenuItem8_Click(sender: Object; e: EventArgs);
begin
  //выход
  close;
end;

procedure Form1.toolStripMenuItem9_Click(sender: Object; e: EventArgs);
begin
  //изменение шрифта по кнопке "шрифт"
  FontDialog1.ShowDialog();
  TextBox1.Font:=FontDialog1.Font;
end;

procedure Form1.toolStripMenuItem10_Click(sender: Object; e: EventArgs);
begin
  //Изменение цвета текста по кнопке "Цвет шрифта"
  ColorDialog1.ShowDialog();
  TextBox1.ForeColor:=ColorDialog1.Color;
end;

procedure Form1.toolStripMenuItem11_Click(sender: Object; e: EventArgs);
begin
  //Изменение цвета фона по кнопке "Цвет фона"
  ColorDialog1.ShowDialog();
  TextBox1.BackColor:=ColorDialog1.Color;
end;

procedure Form1.toolStripMenuItem12_Click(sender: Object; e: EventArgs);
begin
  //Сохранение файла по кнопке "Сохранить"
  F_N:=SaveFileDialog1.FileName;
  WriteAllLines(F_N, TextBox1.Lines);
  Text:= 'Блокнот (Задание №1)' + F_N;
end;

procedure Form1.ToolStripMenuItem15_Click(sender: Object; e: EventArgs);
begin
  //Найти

end;

procedure Form1.toolStripMenuItem14_Click(sender: Object; e: EventArgs);
begin
  //распечатать
  PrintDialog1.ShowDialog();
end;

procedure Form1.toolStripMenuItem16_Click(sender: Object; e: EventArgs);
begin
  //замена
end;

procedure Form1.toolStripMenuItem17_Click(sender: Object; e: EventArgs);
begin
  //параметры страницы
end;

end.
