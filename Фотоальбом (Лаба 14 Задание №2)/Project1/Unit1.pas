Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, Unit2, Unit3, Unit4;

type
  Form1 = class(Form)
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    button2: Button;
    button3: Button;
    button4: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button4_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  (new Unit2.Form2).ShowDialog;
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
  (new Unit3.Form3).ShowDialog;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  (new Unit4.Form4).ShowDialog;
end;

end.
