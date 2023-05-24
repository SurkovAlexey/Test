Unit Unit3;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form3 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit3.Form3.resources}
    label1: &Label;
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

procedure Form3.button1_Click(sender: Object; e: EventArgs);
begin
  close;
end;

end.
