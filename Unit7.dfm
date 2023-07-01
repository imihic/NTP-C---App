object PrimateljiForm: TPrimateljiForm
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsNone
  Caption = 'PrimateljiForm'
  ClientHeight = 788
  ClientWidth = 1089
  Color = clBtnFace
  DoubleBuffered = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label11: TLabel
    Left = 16
    Top = 135
    Width = 144
    Height = 25
    Caption = 'U'#269'itani primatelji'
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
    Left = 16
    Top = 8
    Width = 99
    Height = 32
    Caption = 'Primatelji'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 2328053
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    StyleElements = [seClient, seBorder]
  end
  object btnDodajNoviObicniNalog: TButton
    Left = 16
    Top = 385
    Width = 162
    Height = 25
    Caption = 'Dodaj novog primatelja'
    TabOrder = 0
    OnClick = btnDodajNoviObicniNalogClick
  end
  object btnAzurirajOdabraniObicniNalog: TButton
    Left = 224
    Top = 385
    Width = 170
    Height = 25
    Caption = 'A'#382'uriraj odabranog primatelja'
    TabOrder = 1
    OnClick = btnAzurirajOdabraniObicniNalogClick
  end
  object btnObrisiOdabraneObicneNaloge: TButton
    Left = 448
    Top = 385
    Width = 177
    Height = 25
    Caption = 'Obri'#353'i ozna'#269'ene naloge'
    TabOrder = 2
    OnClick = btnObrisiOdabraneObicneNalogeClick
  end
  object btnObrisiSveNaloge: TButton
    Left = 712
    Top = 385
    Width = 185
    Height = 25
    Caption = 'Obri'#353'i sve naloge'
    TabOrder = 3
  end
  object ListView1: TListView
    Left = 16
    Top = 183
    Width = 1057
    Height = 196
    Columns = <
      item
        AutoSize = True
        Caption = 'Redni broj'
      end
      item
        AutoSize = True
        Caption = 'Naziv primatelja'
      end
      item
        AutoSize = True
        Caption = 'Adresa'
      end
      item
        AutoSize = True
        Caption = 'Mjesto'
      end
      item
        AutoSize = True
        Caption = 'Dr'#382'ava'
      end
      item
        AutoSize = True
        Caption = 'Ra'#269'un primatelja'
      end
      item
        AutoSize = True
        Caption = 'Telefon'
      end
      item
        AutoSize = True
        Caption = 'E-mail'
      end>
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Segoe UI'
    Font.Style = []
    MultiSelect = True
    RowSelect = True
    ParentFont = False
    TabOrder = 4
    ViewStyle = vsReport
  end
  object Button3: TButton
    Left = 17
    Top = 73
    Width = 120
    Height = 25
    Caption = 'U'#269'itaj datoteku'
    TabOrder = 5
    OnClick = Button3Click
  end
  object FileOpenDialog1: TFileOpenDialog
    FavoriteLinks = <>
    FileTypes = <>
    Options = []
    Left = 312
    Top = 80
  end
end
