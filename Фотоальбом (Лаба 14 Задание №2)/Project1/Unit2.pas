Unit Unit2;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form2 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit2.Form2.resources}
    label1: &Label;
    button1: Button;
    {$include Unit2.Form2.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form2.button1_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

end.
