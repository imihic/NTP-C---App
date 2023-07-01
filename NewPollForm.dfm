object FormNovaAnketa: TFormNovaAnketa
  Left = 0
  Top = 0
  Caption = 'Nova anketa'
  ClientHeight = 635
  ClientWidth = 592
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 68
    Height = 13
    Caption = 'Naslov ankete'
  end
  object Label2: TLabel
    Left = 16
    Top = 67
    Width = 106
    Height = 13
    Caption = 'Odaberite broj pitanja'
  end
  object Label3: TLabel
    Left = 24
    Top = 259
    Width = 53
    Height = 13
    Caption = 'Pitanje 1. :'
  end
  object lblPitanje2: TLabel
    Left = 24
    Top = 299
    Width = 53
    Height = 13
    Caption = 'Pitanje 2. :'
    Visible = False
  end
  object lblPitanje3: TLabel
    Left = 24
    Top = 339
    Width = 53
    Height = 13
    Caption = 'Pitanje 3. :'
    Visible = False
  end
  object lblPitanje4: TLabel
    Left = 24
    Top = 379
    Width = 53
    Height = 13
    Caption = 'Pitanje 4. :'
    Visible = False
  end
  object lblPitanje5: TLabel
    Left = 24
    Top = 419
    Width = 53
    Height = 13
    Caption = 'Pitanje 5. :'
    Visible = False
  end
  object edtNaslov: TEdit
    Left = 143
    Top = 13
    Width = 426
    Height = 21
    TabOrder = 0
  end
  object cmbBrojPitanja: TComboBox
    Left = 424
    Top = 64
    Width = 145
    Height = 21
    ExtendedUI = True
    ItemIndex = 0
    Sorted = True
    TabOrder = 1
    Text = '1'
    OnSelect = cmbBrojPitanjaSelect
    Items.Strings = (
      '1'
      '2'
      '3'
      '4'
      '5')
  end
  object RadioGroup1: TRadioGroup
    Left = 16
    Top = 112
    Width = 553
    Height = 105
    Caption = 'Molimo odaberite na'#269'in odgovora na pitanja:'
    ItemIndex = 0
    Items.Strings = (
      'Slobodan odgovor'
      'Odgovor kao ljestvica ocjena'
      'Da/ne odgovor')
    TabOrder = 2
  end
  object edtPitanje1: TEdit
    Left = 223
    Top = 256
    Width = 346
    Height = 21
    TabOrder = 3
  end
  object edtPitanje2: TEdit
    Left = 223
    Top = 296
    Width = 346
    Height = 21
    TabOrder = 4
    Visible = False
  end
  object edtPitanje3: TEdit
    Left = 223
    Top = 336
    Width = 346
    Height = 21
    TabOrder = 5
    Visible = False
  end
  object edtPitanje4: TEdit
    Left = 223
    Top = 376
    Width = 346
    Height = 21
    TabOrder = 6
    Visible = False
  end
  object edtPitanje5: TEdit
    Left = 223
    Top = 416
    Width = 346
    Height = 21
    TabOrder = 7
    Visible = False
  end
  object Button2: TButton
    Left = 72
    Top = 512
    Width = 433
    Height = 43
    Caption = 'Kreiraj anketu'
    TabOrder = 8
    OnClick = Button2Click
  end
end
