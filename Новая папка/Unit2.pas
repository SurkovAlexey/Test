{$reference 'System.Windows.Forms.dll'}
{$reference 'System.Drawing.dll'}
Unit Unit2;

interface

uses System, System.Drawing, System.Windows.Forms;

Type 
     тест = record
     вопрос : string;
     ответ1 : string;
     ответ2 : string;
     ответ3 : string;
     ответ4 : string;
     верный : integer;
     юзерс : integer;
     end;
type
  Form2 = class(Form)
    procedure fillqe(i:integer);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem4_Click(sender: Object; e: EventArgs);
    procedure Form2_FormClosing(sender: Object; e: FormClosingEventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit2.Form2.resources}
    button1: Button;
    button2: Button;
    button3: Button;
    radioButton1: RadioButton;
    radioButton2: RadioButton;
    radioButton3: RadioButton;
    radioButton4: RadioButton;
    menuStrip1: MenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    toolStripMenuItem3: ToolStripMenuItem;
    button4: Button;
    label2: &Label;
    toolStripMenuItem4: ToolStripMenuItem;
    label1: &Label;
    {$include Unit2.Form2.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;
Var F,Q : text ; B: array of тест; s,ss: array of string; n:=0; A :array of integer; qc,x:integer; pocent:real;

implementation
procedure Form2.fillqe(i:integer);
begin
  Assign(F,'filetest.txt');
  reset(F);
  s:= F.Lines.toarray; 
  B[i].вопрос := s[0+5*i];
  B[i].ответ1 := s[1+5*i];
  B[i].ответ2 := s[2+5*i];
  B[i].ответ3 := s[3+5*i];
  B[i].ответ4 := s[4+5*i];
  label1.text := $'{n+1}/{qc div 5}  {B[i].вопрос}';
  radiobutton1.text := B[i].ответ1;
  radiobutton2.text := B[i].ответ2;
  radiobutton3.text := B[i].ответ3;
  radiobutton4.text := B[i].ответ4;
end;
procedure Form2.button1_Click(sender: Object; e: EventArgs);
begin 
  if radiobutton1.Checked then B[n].юзерс:=1;
  if radiobutton2.Checked then B[n].юзерс:=2;
  if radiobutton3.Checked then B[n].юзерс:=3;
  if radiobutton4.Checked then B[n].юзерс:=4; 
  n:=n+1;
  if n < (qc div 5) then
      begin   
  radiobutton1.Checked := false;
  radiobutton2.Checked := false;
  radiobutton3.Checked := false;
  radiobutton3.Checked := false;  
       fillqe(n)
      end;
    if n = (qc div 5) then
      begin
       n:=n-1;
       MessageBox.Show($'Это последний вопрос', 'Message', MessageBoxButtons.OK)
      end;  
end;
procedure Form2.button2_Click(sender: Object; e: EventArgs);
begin
  radiobutton1.Checked := false;
  radiobutton2.Checked := false;
  radiobutton3.Checked := false;
  radiobutton4.Checked := false;
  n:=n+1;
    if n < (qc div 5) then
      begin     
       fillqe(n)
      end;
    if n = (qc div 5) then
      begin
       n:=n-1;
       MessageBox.Show($'Это последний вопрос', 'Message', MessageBoxButtons.OK)
      end;
  
end;
procedure Form2.button3_Click(sender: Object; e: EventArgs);
begin
  radiobutton1.Checked := false;
  radiobutton2.Checked := false;
  radiobutton3.Checked := false;
  radiobutton4.Checked := false;
  n:=n-1;
    if n >= 0 then
      begin     
       fillqe(n)
      end;
    if n < 0 then
      begin
       n:=n+1;
       MessageBox.Show($'Это первый вопрос', 'Message', MessageBoxButtons.OK)
      end; 
end;
procedure Form2.toolStripMenuItem3_Click(sender: Object; e: EventArgs);
begin
  {MessageBox.Show($'Тест начинается', 'Message', MessageBoxButtons.OK);}
  n:=0;
  label2.Text:='';
  label1.Enabled:=true;
  radiobutton1.Enabled := true;
  radiobutton2.Enabled := true;
  radiobutton3.Enabled := true;
  radiobutton4.Enabled := true;
  label1.Visible:=true;
  radiobutton1.Visible := true;
  radiobutton2.Visible := true;
  radiobutton3.Visible := true;
  radiobutton4.Visible := true;
  button1.Enabled := true;
  button1.Visible := true;
  button2.Enabled := true;
  button2.Visible := true;
  button3.Enabled := true;
  button3.Visible := true;
  button4.Enabled := true;
  button4.Visible := true;
  Assign(Q,'filetest.txt');
  reset(Q);
  qc:= length(Q.Lines.toarray); 
  A := |3,2,1,2,2,2|; // массив верных ответов 
  B:=new тест[(qc div 5)];
  fillqe(n);
  for var j:= 0 to ((qc div 5)-1) do  
    begin
    B[j].верный := A[j];
    B[j].юзерс := 0;
    end;
end;
procedure Form2.button4_Click(sender: Object; e: EventArgs);
begin
  x:=0;
  for var j:= 0 to ((qc div 5)-1) do 
  begin
    if B[j].верный = B[j].юзерс then x:=x+1;
  end;
  pocent:=x/(qc div 5)*100;
  label2.Text:=$'{pocent}%';
  radiobutton1.Checked := false;
  radiobutton2.Checked := false;
  radiobutton3.Checked := false;
  radiobutton4.Checked := false;
  radiobutton1.Enabled := false;
  radiobutton2.Enabled := false;
  radiobutton3.Enabled := false;
  radiobutton4.Enabled := false;
  button1.Enabled := false;
  button2.Enabled := false;
  button3.Enabled := false;
  button4.Enabled := false;
end;

procedure Form2.toolStripMenuItem4_Click(sender: Object; e: EventArgs);
begin
  close
end;

procedure Form2.Form2_FormClosing(sender: Object; e: FormClosingEventArgs);
begin
  e.Cancel := System.Windows.Forms.MessageBox.Show('Уверен,что хочешь закрыть форму?', 
                'Закрытие формы', MessageBoxButtons.YesNo, MessageBoxIcon.Question) <> System.Windows.Forms.DialogResult.Yes;
end;
end.
