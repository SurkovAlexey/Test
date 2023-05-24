Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure listBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    monthCalendar1: MonthCalendar;
    textBox1: TextBox;
    label1: &Label;
    label2: &Label;
    listBox1: ListBox;
    textBox2: TextBox;
    label3: &Label;
    button1: Button;
    button2: Button;
    button3: Button;
    label4: &Label;
    label5: &Label;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  TextBox1.Clear;
  TextBox2.Clear;
end;

procedure Form1.listBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
begin

end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
var
s1, s2, s3:string;
data:DateTime;
begin
  s1:=textbox1.text;
  s2:=listbox1.text;
  s3:=monthCalendar1.SelectionStart.ToShortDateString;
  textbox2.text:=s1+s2+s3;
end;

end.
