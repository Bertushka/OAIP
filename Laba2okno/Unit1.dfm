object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 458
  ClientWidth = 864
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OldCreateOrder = True
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 15
  object Label1: TLabel
    Left = 56
    Top = 16
    Width = 23
    Height = 28
    Caption = 'c='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 360
    Top = 16
    Width = 26
    Height = 28
    Caption = 'd='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 648
    Top = 16
    Width = 23
    Height = 28
    Caption = 'z='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Otveti: TLabel
    Left = 320
    Top = 254
    Width = 239
    Height = 28
    Caption = '                  Otveti                   '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 320
    Top = 186
    Width = 241
    Height = 47
    Caption = 'Count'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 232
    Top = 288
    Width = 417
    Height = 121
    Lines.Strings = (
      'Memo1')
    TabOrder = 1
  end
  object RadioGroup1: TRadioGroup
    Left = 320
    Top = 75
    Width = 241
    Height = 105
    Caption = 'choose function'
    Items.Strings = (
      '1) f=2x'
      '2) f=x^2'
      '3) f=x/3')
    TabOrder = 2
  end
  object Edit1: TEdit
    Left = 85
    Top = 24
    Width = 121
    Height = 23
    TabOrder = 3
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 400
    Top = 24
    Width = 121
    Height = 23
    TabOrder = 4
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 677
    Top = 24
    Width = 121
    Height = 23
    TabOrder = 5
    Text = 'Edit3'
  end
end
