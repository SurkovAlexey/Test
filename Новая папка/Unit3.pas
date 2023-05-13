{$reference 'System.Windows.Forms.dll'}
{$reference 'System.Drawing.dll'}
Unit Unit3;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form3 = class(Form)
  
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit3.Form3.resources}
    label1: &Label;
    label2: &Label;
    button2: Button;
    label3: &Label;
    label4: &Label;
    label5: &Label;
    textBox1: TextBox;
    textBox2: TextBox;
    textBox3: TextBox;
    textBox4: TextBox;
    textBox5: TextBox;
    textBox6: TextBox;
    label6: &Label;
    label7: &Label;
    label8: &Label;
    label9: &Label;
    label10: &Label;
    label11: &Label;
    label12: &Label;
    button1: Button;
    {$include Unit3.Form3.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation
var al,bl,cl,A,B,C,Ao,Bo,Co, P,S,pol, Rv,Ro, ha,hb,hc : real;
var xa,ya,xb,yb,xc,yc : real;
var uslovie : string;
procedure raschet(xa,ya,xb,yb,xc,yc : real);
begin
  al:=sqrt(sqr(xb-xa)+sqr(yb-ya));  // сторона a
  bl:=sqrt(sqr(xc-xb)+sqr(yc-yb));  // сторона b
  cl:=sqrt(sqr(xc-xa)+sqr(yc-ya));  // сторона c

  A:=arccos((sqr(bl)+sqr(cl)-sqr(al))/(2*bl*cl));  // угол A в радианах
  B:=arccos((sqr(al)+sqr(cl)-sqr(bl))/(2*al*cl));  // угол B в радианах
  C:=arccos((sqr(al)+sqr(bl)-sqr(cl))/(2*bl*al));  // угол C в радианах
  Ao:=A*180/pi;  // угол A в градусах
  Bo:=B*180/pi;  // угол B в градусах
  Co:=C*180/pi;  // угол C в градусах

  P:=al+bl+cl;  // периметр
  pol:=P/2;     // полупериметр
  S:=sqrt(pol*(pol-al)*(pol-bl)*(pol-cl));  // площадь треугольника
  Rv:=S/pol;   // радиус вписанной окружности
  if S<>0 then Ro:=al*bl*cl/(4*S);
  if S = 0 then Ro:=max(al,bl,cl);// радиус описанной окружности
  ha:=2*S/al; // высота опущенная на сторону a;
  hb:=2*S/bl;  // высота опущенная на сторону b;
  hc:=2*S/cl;   // высота опущенная на сторону c;
end;

procedure Form3.button1_Click(sender: Object; e: EventArgs);
begin
  uslovie := $'Даны координаты вершин A({xa},{ya}) B({xb},{yb}) C({xc},{yc}). Найти все параметры траугольника АВС ';
  label1.text := uslovie;
end;

procedure Form3.button2_Click(sender: Object; e: EventArgs);
begin
  var str1,str2,str3,str4,str5 : string;
  var b1,b2,b3,b4,b5,b6 : boolean;
  
  b1 := real.TryParse(textbox1.Text,xa);
  b2 := real.TryParse(textbox2.Text,ya);
  b3 := real.TryParse(textbox3.Text,xb);
  b4 := real.TryParse(textbox5.Text,yb);
  b5 := real.TryParse(textbox4.Text,xc);
  b6 := real.TryParse(textbox6.Text,yc);
  
  if b1 and b2 and b3 and b4 and b5 and b6 then
  begin
    
  xa:= strtoreal(textbox1.Text);
  ya:= strtoreal(textbox2.Text);
  xb:= strtoreal(textbox3.Text);
  yb:= strtoreal(textbox5.Text);
  xc:= strtoreal(textbox4.Text);
  yc:= strtoreal(textbox6.Text);
  
  button1.Enabled := true;
  button1.Visible := true;
  
  raschet(xa,ya,xb,yb,xc,yc);
  
  str1:= $' a={al:f2}, b={bl:f2}, c={cl:f2} – стороны треугольника ';
  str2:= $' А({Ao:f2}), В({Bo:f2}), С({Co:f2}) – углы треугольника ';
  str3:= $' {ha:f2}, {hb:f2}, {hc:f2} – высоты треугольника, соответственно на стороны a, b, c ';
  str4:= $' {P:f2}, {S:f2} – соответственно периметр и площадь треугольника ';
  str5:= $' {Rv:f2}, {Ro:f2} – радиус соответственно вписанной и описанной окружностей ';
  label12.Text := $' Параметры треугольника с заданными координатами вершин: '+#10+str1+#10+str2+#10+str3+#10+str4+#10+str5;
  
  end;
  
  if not b1 or not b2 or not b3 or not b4 or not b5 or not b6 then
    begin
    
    MessageBox.Show($'Не верный формат ввода ', 'Message', MessageBoxButtons.OK);
    label12.Text := '';
    label1.Text := '';
    button1.Enabled := false;
    button1.Visible := false;
    
    end;
    
end;

procedure Form3.Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
begin
   e.Cancel := System.Windows.Forms.MessageBox.Show('Уверен,что хочешь закрыть форму?', 
                'Закрытие формы', MessageBoxButtons.YesNo, MessageBoxIcon.Question) <> System.Windows.Forms.DialogResult.Yes;
end;
end.
