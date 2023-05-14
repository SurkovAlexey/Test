Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure timer1_Tick(sender: Object; e: EventArgs);
    procedure toolStripMenuItem5_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem3_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem4_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem6_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure label9_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    timer1: Timer;
    components: System.ComponentModel.IContainer;
    label2: &Label;
    menuStrip1: MenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    toolStripMenuItem3: ToolStripMenuItem;
    toolStripMenuItem4: ToolStripMenuItem;
    toolStripMenuItem5: ToolStripMenuItem;
    groupBox1: GroupBox;
    label5: &Label;
    label4: &Label;
    label3: &Label;
    button1: Button;
    textBox2: TextBox;
    textBox1: TextBox;
    groupBox2: GroupBox;
    groupBox3: GroupBox;
    label8: &Label;
    button2: Button;
    textBox4: TextBox;
    textBox3: TextBox;
    label7: &Label;
    label6: &Label;
    label10: &Label;
    label9: &Label;
    toolStripMenuItem6: ToolStripMenuItem;
    label14: &Label;
    button3: Button;
    label13: &Label;
    label12: &Label;
    label11: &Label;
    textBox10: TextBox;
    textBox9: TextBox;
    textBox8: TextBox;
    textBox7: TextBox;
    textBox6: TextBox;
    textBox5: TextBox;
    label1: &Label;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
     timer1.Start;
      label2.text:= ' Сурков А.В.      дкип-113      '
    end;
  end;

implementation

var param:=1;
var al,bl,cl,A,B,C,Ao,Bo,Co, P,S,pol, Rv,Ro, ha,hb,hc : real;
var xa,ya,xb,yb,xc,yc : real;
var uslovie : string;

procedure Form1.timer1_Tick(sender: Object; e: EventArgs);

begin
  
  param:=param+1;
  label1.text:= DateTime.Now.ToString('', System.Globalization.CultureInfo.GetCultureInfo('ru-RU'));
  if (param mod 3) = 0 then label2.Text:= Copy(label2.Text,2,length(label2.Text))+Copy(label2.Text,1,1);
  if param = 99 then param:= 0;
  
end;

procedure Form1.toolStripMenuItem5_Click(sender: Object; e: EventArgs);
begin
  close;
end;

procedure Form1.toolStripMenuItem3_Click(sender: Object; e: EventArgs);
begin
  
  groupbox3.Hide;
  groupbox3.Enabled:=false;
  groupbox2.Hide;
  groupbox2.Enabled:=false;
  groupbox1.Show;
  groupbox1.Enabled:=true;
  
end;

procedure Form1.toolStripMenuItem4_Click(sender: Object; e: EventArgs);

begin
  
  groupbox3.Hide;
  groupbox3.Enabled:=false;
  groupbox2.Show;
  groupbox2.Enabled:=true;
  groupbox1.Hide;
  groupbox1.Enabled:=false;
  
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  var pi := 3.14;
  var kof := 0.6;
  var rad,stor:integer;
   if not integer.tryparse(textbox1.Text,rad) then 
      begin
        textbox1.backColor := color.lightcoral;
        label5.BackColor := color.lightcoral;
        label5.text := 'Error';
      end;
   if not integer.tryparse(textbox2.Text,stor) then 
      begin
        textbox2.backColor := color.lightcoral;
        label5.BackColor := color.lightcoral;
        label5.text := 'Error';
      end;
   if integer.tryparse(textbox2.Text,rad) then
      begin
        textbox1.backColor := color.lightgreen;
      end;
   if integer.tryparse(textbox2.Text,stor) then
      begin
        textbox2.backColor := color.lightgreen;
      end;
   if integer.tryparse(textbox1.Text,rad) and integer.tryparse(textbox2.Text,stor) then
      begin
        rad:=strtoint(textbox1.Text);
        stor:=strtoint(textbox2.Text);
          if rad > kof*stor then
            begin
              label5.BackColor := color.lightgreen;
            label5.ForeColor := color.black;
             label5.text := ' Влезет ';
            end;
          if rad < kof*stor then 
            begin
            label5.BackColor := color.lightcoral;
            label5.ForeColor := color.black;
            label5.text := ' Не Влезет ';
            end;
          if rad = kof*stor then
            begin
              label5.BackColor := color.lightgreen;
            label5.ForeColor := color.black;
             label5.text := ' Идеально !';
            end;
      end;

end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  var integ:integer;
    var ll2 : string;
  if integer.tryparse(textbox3.Text,integ) then
     begin
       
        if integer.tryparse(textbox4.Text,integ) then
          begin
          
          var year := strtoint(textbox3.Text)  ;
          var dt := new DateTime(year,1,1); 
               if (dt.AddDays(strtoint(textbox4.Text)-1)).year < (year+1) then
               begin
                ll2 := dt.Adddays(strtoint(textbox4.Text)-1).Day.tostring;
                label8.text := $'{ll2}.{dt.Adddays(strtoint(textbox4.Text)-1).Month:d2}';
               end
               else MessageBox.Show($'{textbox4.Text} день в {dt.AddDays(strtoint(textbox4.Text)-1).year} году', 'Message', MessageBoxButtons.OK)
         end
        else 
           begin
           label8.text := 'Error';
           end
    end;     
    if not integer.tryparse(textbox3.Text,integ) then  
      begin
      label8.text := 'Error';
      end;

end;

procedure Form1.toolStripMenuItem6_Click(sender: Object; e: EventArgs);
begin
 groupbox1.Hide;
  groupbox1.Enabled:=false;
  groupbox2.Hide;
  groupbox2.Enabled:=false;
  groupbox3.Show;
  groupbox3.Enabled:=true; 
end;

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

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
  var str1,str2,str3,str4,str5 : string;
  var b1,b2,b3,b4,b5,b6 : boolean;
  
  b1 := real.TryParse(textbox5.Text,xa);
  b2 := real.TryParse(textbox6.Text,ya);
  b3 := real.TryParse(textbox7.Text,xb);
  b4 := real.TryParse(textbox8.Text,yb);
  b5 := real.TryParse(textbox9.Text,xc);
  b6 := real.TryParse(textbox10.Text,yc);
  
  if b1 and b2 and b3 and b4 and b5 and b6 then
  begin
    
  xa:= strtoreal(textbox5.Text);
  ya:= strtoreal(textbox6.Text);
  xb:= strtoreal(textbox7.Text);
  yb:= strtoreal(textbox8.Text);
  xc:= strtoreal(textbox9.Text);
  yc:= strtoreal(textbox10.Text);
  
  raschet(xa,ya,xb,yb,xc,yc);
  
  str1:= $' a={al:f2}, b={bl:f2}, c={cl:f2} – стороны треугольника ';
  str2:= $' А({Ao:f2}), В({Bo:f2}), С({Co:f2}) – углы треугольника ';
  str3:= $' {ha:f2}, {hb:f2}, {hc:f2} – высоты треугольника, соответственно на стороны a, b, c ';
  str4:= $' {P:f2}, {S:f2} – соответственно периметр и площадь треугольника ';
  str5:= $' {Rv:f2}, {Ro:f2} – радиус соответственно вписанной и описанной окружностей ';
  label14.Text := str1+#10+str2+#10+str3+#10+str4+#10+str5;
  
  end;
  
  if not b1 or not b2 or not b3 or not b4 or not b5 or not b6 then
    MessageBox.Show($'Не верный формат ввода ', 'Message', MessageBoxButtons.OK);
    
end;
procedure Form1.label9_Click(sender: Object; e: EventArgs);
begin
end;
end.
