object RegistrationForm: TRegistrationForm
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'RegistrationForm'
  ClientHeight = 486
  ClientWidth = 396
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
    Left = 72
    Top = 21
    Width = 105
    Height = 21
    Caption = 'Korisni'#269'ko ime:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
  end
  object Label2: TLabel
    Left = 72
    Top = 101
    Width = 56
    Height = 21
    Caption = 'Lozinka:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
  end
  object Label3: TLabel
    Left = 72
    Top = 184
    Width = 48
    Height = 21
    Caption = 'Adresa'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
  end
  object Label4: TLabel
    Left = 72
    Top = 256
    Width = 34
    Height = 21
    Caption = 'Grad'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
  end
  object Label5: TLabel
    Left = 72
    Top = 328
    Width = 48
    Height = 21
    Caption = 'Dr'#382'ava'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 72
    Top = 56
    Width = 241
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 72
    Top = 136
    Width = 241
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 72
    Top = 211
    Width = 241
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 72
    Top = 283
    Width = 241
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    TabOrder = 3
  end
  object Edit5: TEdit
    Left = 72
    Top = 355
    Width = 241
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    TabOrder = 4
  end
  object Button1: TButton
    Left = 72
    Top = 408
    Width = 241
    Height = 33
    Caption = 'Po'#353'alji zahtjev za registraciju'
    TabOrder = 5
    OnClick = Button1Click
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\imihic\Doc' +
      'uments\eBanking\eBanking.mdb;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 336
    Top = 432
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'KORISNIK_TABLE'
    Left = 336
    Top = 272
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 344
    Top = 184
  end
end
