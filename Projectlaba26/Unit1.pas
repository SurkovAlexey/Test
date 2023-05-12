Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure textBox2_TextChanged(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    label1: &Label;
    textBox1: TextBox;
    textBox2: TextBox;
    label2: &Label;
    label3: &Label;
    label4: &Label;
    button1: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation
var al,A,B,C,D, Ao,Bo,Co,Doo, p,S,d1,d2 : real; // параметры ромба все обьявяем
  
procedure Form1.textBox2_TextChanged(sender: Object; e: EventArgs);
begin
  // форматное выражение вывода меняется при изменение данных
 label4.Text:= $'a  – сторона ромба - {#10}А, В, С, D – углы ромба - {#10}d1, d2 – диагонали ромба - {#10}p - периметр ромба - {#10}S –  площадь ромба - ' ;
end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
   // форматное выражение вывода меняется при изменение данных
  label4.Text:= $'a  – сторона ромба - {#10}А, В, С, D – углы ромба - {#10}d1, d2 – диагонали ромба - {#10}p - периметр ромба - {#10}S –  площадь ромба - ';
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs); // нажатие кнопки рассчетов
begin
 if real.TryParse(textbox1.Text,d1) and real.TryParse(textbox2.Text,S) then // проверка правильности ввода 
 begin
  d1:= strtoreal(textbox1.Text); // диагональ 1 из строки ввода
  S:= strtoreal(textbox2.Text); // площадь из строки ввода
  // рассчеты остальных параметров
  d2:= S*2/d1;
  al:= sqrt(((d1*d1)/4)+((d2*d2)/4));
  A := arcsin(s/(al*al));
  Ao:= A*180/pi;
  Bo:=2*(90-Ao/2);
  p:=4*a;
  // форматное выражение вывод всех результатов рассчета
  label4.Text:= $'a  – сторона ромба - {al:f2}{#10}А, В, С, D – углы ромба - {Ao:f0}, {Bo:f0}, {Ao:f0}, {Bo:f0}{#10}d1, d2 – диагонали ромба - {d1:f1}, {d2:f1}{#10}p - периметр ромба - {4*a:f1}{#10}S –  площадь ромба - {S:f1}';
 end
 else     
   begin
   MessageBox.Show($'Не верный ввод ', 'Message', MessageBoxButtons.OK); // если ввод некорректный
   textbox1.Text:='';
   textbox2.Text:='';
   end;
end;

end.
