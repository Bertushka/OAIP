object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 661
  Color = clCream
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 288
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Color'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 176
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Count'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 56
    Top = 176
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 56
    Top = 203
    Width = 121
    Height = 21
    TabOrder = 3
    Text = 'Edit2'
  end
  object Memo1: TMemo
    Left = 191
    Top = 176
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 4
  end
end
