object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 19
  object Label1: TLabel
    Left = 45
    Top = 30
    Width = 21
    Height = 19
    Caption = 'X='
  end
  object Label2: TLabel
    Left = 228
    Top = 30
    Width = 22
    Height = 19
    Caption = 'Y='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 421
    Top = 30
    Width = 21
    Height = 19
    Caption = 'Z='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 72
    Top = 27
    Width = 121
    Height = 27
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 256
    Top = 27
    Width = 121
    Height = 27
    TabOrder = 1
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 448
    Top = 27
    Width = 121
    Height = 27
    TabOrder = 2
    Text = 'Edit3'
  end
  object Button1: TButton
    Left = 256
    Top = 96
    Width = 121
    Height = 41
    Caption = 'Count'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 219
    Top = 168
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 4
  end
end
