Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;
//описание формы и ее свойств
type
  Form1 = class(Form)
    procedure label4_Click(sender: Object; e: EventArgs);
    procedure button9_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
    procedure button6_Click(sender: Object; e: EventArgs);
    procedure button7_Click(sender: Object; e: EventArgs);
    procedure button8_Click(sender: Object; e: EventArgs);
    procedure button10_Click(sender: Object; e: EventArgs);
    procedure button12_Click(sender: Object; e: EventArgs);
    procedure button11_Click(sender: Object; e: EventArgs);
    procedure button13_Click(sender: Object; e: EventArgs);
    procedure radioButton4_CheckedChanged(sender: Object; e: EventArgs);
    procedure radioButton1_CheckedChanged(sender: Object; e: EventArgs);
    procedure radioButton2_CheckedChanged(sender: Object; e: EventArgs);
    procedure radioButton3_CheckedChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    label1: &Label;
    radioButton1: RadioButton;
    radioButton2: RadioButton;
    radioButton3: RadioButton;
    groupBox1: GroupBox;
    label2: &Label;
    textBox1: TextBox;
    timer1: Timer;
    label4: &Label;
    label3: &Label;
    button9: Button;
    button8: Button;
    button7: Button;
    button6: Button;
    button5: Button;
    button4: Button;
    button3: Button;
    button2: Button;
    button1: Button;
    button10: Button;
    button12: Button;
    button11: Button;
    label5: &Label;
    button13: Button;
    radioButton4: RadioButton;
    label6: &Label;
    components: System.ComponentModel.IContainer;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent; //после инициализации формы выставляем начальные настройки
      radiobutton1.Checked:=false;
      radiobutton2.Checked:=false;
      radiobutton3.Checked:=false;
       radiobutton4.Checked:=true; // всегда скрытая радиокнопка для удобства 
      textbox1.Enabled:=false; // поле недоступно для ввода
      button13.Enabled:=false; // кнопка оплаты вначале недоступна
    end;
   
  end;

implementation
var s:string; // пересенная в которой будут храниться вводимые символы
var price: integer; //цена
procedure Form1.label4_Click(sender: Object; e: EventArgs); 
begin
  
end;

procedure Form1.button9_Click(sender: Object; e: EventArgs); // при нажатии кнопки 9 в строку добавляется 9 
begin
  if s.Length<6 then // но только пока строка короче 6 символов
  s+='9';
  textbox1.text:=s;
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs); // аналогично для кнопки 3, и далее для всех 1,2...0
begin
  if s.Length<6 then
  s+='3';
  textbox1.text:=s;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  if s.Length<6 then
  s+='1';
  textbox1.text:=s;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  if s.Length<6 then
  s+='2';
  textbox1.text:=s;
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs);
begin
  if s.Length<6 then
  s+='4';
  textbox1.text:=s;
end;

procedure Form1.button5_Click(sender: Object; e: EventArgs);
begin
  if s.Length<6 then
  s+='5';
  textbox1.text:=s;
end;

procedure Form1.button6_Click(sender: Object; e: EventArgs);
begin
  if s.Length<6 then
  s+='6';
  textbox1.text:=s;
end;

procedure Form1.button7_Click(sender: Object; e: EventArgs);
begin
  if s.Length<6 then
  s+='7';
  textbox1.text:=s;
end;

procedure Form1.button8_Click(sender: Object; e: EventArgs);
begin
  if s.Length<6 then
  s+='8';
  textbox1.text:=s;
end;

procedure Form1.button10_Click(sender: Object; e: EventArgs);
begin
  if not (s='0') and not (s='') then if s.Length<6 then s+='0'; //проверка на пустую строку и 0, т.к первый 0 не имеет смысла
  textbox1.text:=s;
end;

procedure Form1.button12_Click(sender: Object; e: EventArgs); //сброс значения строки соответствует кнопке сброс
begin
  
  s:='';
  textbox1.text:=s;
  
end;

procedure Form1.button11_Click(sender: Object; e: EventArgs); // кнопка заправка - блокирует ыбор топлива, рассчтывает цену
begin
  radiobutton1.Enabled := false;  //блокировка выбора марки топлива
  radiobutton2.Enabled := false;
  radiobutton3.Enabled := false;
  price:=strtoint(label4.text); // фиксация цены в переменную price
  if not (textbox1.Text= '') then label5.Text:= label5.Text+' '+(price*strtoint(textbox1.Text)).ToString; //если не пустое значение - рассчет цены
  if (textbox1.Text= '') then label5.Text:= label5.Text+' 0'; //если пустое значение - цена 0
  groupbox1.Enabled:=false; //блокировка панели литража
  button13.Enabled:=true; //разблокировка панели оплаты
end;

procedure Form1.button13_Click(sender: Object; e: EventArgs);
begin
  radiobutton1.Enabled := true; // новый круг заправки после оплаты - разблокировка выбора марки топлива
  radiobutton2.Enabled := true; // новый круг  - разблокировка выбора марки топлива
  radiobutton3.Enabled := true; // новый круг  - разблокировка выбора марки топлива
  radiobutton1.Checked := false; // отмена выбора при предыдущей заправке
  radiobutton2.Checked := false; // отмена выбора при предыдущей заправке
  radiobutton3.Checked := false; // отмена выбора при предыдущей заправке
  radiobutton4.Checked := true; // начальное включение скрытой кнопки
  label4.Text:= ''; // очистка полей и переменных далее
  label5.Text:= 'Чек';
  textbox1.Text:='';
  s:='';
  button13.Enabled:=false;
end;

procedure Form1.radioButton4_CheckedChanged(sender: Object; e: EventArgs); //что происходит при изменении радиокнопки 4
begin
  if not radiobutton4.Checked then //та самая скрытая кнопка, если с нее слетает выбор на видимые 3 - активируется панель литража
    begin
  groupbox1.Visible:=true;
  groupbox1.Enabled:=true;
    end
    else
    begin
      groupbox1.Visible:=false;
      groupbox1.Enabled:=false;
    end;
end;

procedure Form1.radioButton1_CheckedChanged(sender: Object; e: EventArgs); // при выборе в пункте цена появляется значение
begin
  label4.Text:= '48';
end;

procedure Form1.radioButton2_CheckedChanged(sender: Object; e: EventArgs); // аналогично
begin
  label4.Text:= '53';
end;

procedure Form1.radioButton3_CheckedChanged(sender: Object; e: EventArgs); // ...
begin
  label4.Text:= '59';
end;

end.
