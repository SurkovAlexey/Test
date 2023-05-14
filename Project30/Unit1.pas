Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;
type
complex = class // класс комплексных чисел родитель с полями реал и имайджн
    re, im: integer;
    
    constructor(re, im: integer); // конструктор прямой ввод вдух чисел в коде
    begin
      self.re := re;
      self.im := im;
    end;   
    class function operator +(a, b: complex):= complex.Create(a.re + b.re, a.im + b.im);  // переопределение оператора приватное + 
    class function operator -(a, b: complex):= complex.Create(a.re - b.re, a.im - b.im); // переопределение оператора приватное +
    class function operator *(a, b: complex):= complex.Create(a.re*b.re-a.im*b.im , a.re*b.im+b.re*a.im);  // переопределение оператора приватное +
    constructor(s: string); // в данной работе не используется 
    begin
      writeln('Введите части числа ', s);
      (re,im):= readinteger2
    end;
    function ToString: string; reintroduce; // переопределение метода тустринг, реинтродюс для разрыва цепочки виртуальности
    begin
     if re <> 0 then
       begin
           if im<0 then result := re.ToString + '-' + abs(im).ToString + 'i';
           if im>0 then result := re.ToString + '+' + abs(im).ToString + 'i';
           if  im = 0 then result := re.ToString 
       end;  
     if re = 0 then
       begin
           if im<0 then result := '-' + abs(im).ToString + 'i';
           if im>0 then result := abs(im).ToString + 'i';
           if im=0 then result := re.ToString 
        end;
     end;
   function trigo:string;    //классовая функция преобразование в тригонометрическую форму
    var x,y,z:real;
    begin
     x:= self.re;
     y:= self.im;
     z:= sqrt(x*x+y*y);
     if z<>0 then result:=$'{z:f2}*({x/z:f2}+{y/z:f2}*i)'
     else result := '0'
    end;
 end; 

type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    radioButton1: RadioButton;
    label1: &Label;
    label2: &Label;
    label3: &Label;
    label4: &Label;
    label5: &Label;
    label6: &Label;
    label7: &Label;
    label8: &Label;
    label9: &Label;
    label10: &Label;
    label11: &Label;
    textBox1: TextBox;
    textBox2: TextBox;
    textBox3: TextBox;
    textBox4: TextBox;
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

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin 
  var a:= complex.Create(strtoint(textbox1.Text),strtoint(textbox2.Text));
  var b:= complex.Create(strtoint(textbox3.Text),strtoint(textbox4.Text));
  
  if radiobutton1.Checked then
    begin
    label2.Text:= '    A = '+ a.trigo + #10'    B = '+ b.trigo ;
    label3.Text:= 'А+B = ' + (a+b).trigo;
    label4.Text:= 'А-В = ' + (a-b).trigo;
    label5.Text:= 'А*В = ' + (a*b).trigo;
    end;
  if not radiobutton1.Checked then
    begin
    label2.Text:= '    A = '+ a.tostring + '    B = '+ b.tostring ;
    label3.Text:= 'А+B = ' + (a+b).ToString;
    label4.Text:= 'А-В = ' + (a-b).ToString;
    label5.Text:= 'А*В = ' + (a*b).ToString;
    end;
    radiobutton1.Checked := false; 
end;

end.
