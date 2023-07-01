object Form12: TForm12
  Left = 0
  Top = 0
  Caption = 'Dohvat statistike'
  ClientHeight = 513
  ClientWidth = 639
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 8
    Top = 8
    Width = 74
    Height = 25
    Caption = 'Statistika'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 2328053
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    StyleElements = [seClient, seBorder]
  end
  object Label1: TLabel
    Left = 8
    Top = 48
    Width = 179
    Height = 13
    Caption = 'Postotak trenutno rije'#353'enih zahtjeva:'
  end
  object Label3: TLabel
    Left = 8
    Top = 83
    Width = 94
    Height = 13
    Caption = 'Tablica uspje'#353'nosti:'
  end
  object Label4: TLabel
    Left = 8
    Top = 243
    Width = 72
    Height = 13
    Caption = 'Tablica ocjena:'
  end
  object ListView1: TListView
    Left = 8
    Top = 102
    Width = 609
    Height = 83
    Columns = <>
    TabOrder = 0
    ViewStyle = vsReport
  end
  object Edit1: TEdit
    Left = 205
    Top = 45
    Width = 121
    Height = 21
    Enabled = False
    TabOrder = 1
    Text = '0'
  end
  object ListView2: TListView
    Left = 8
    Top = 262
    Width = 609
    Height = 83
    Columns = <>
    TabOrder = 2
    ViewStyle = vsReport
  end
  object Button1: TButton
    Left = 192
    Top = 400
    Width = 201
    Height = 25
    Caption = 'Izvod'
    TabOrder = 3
  end
end
