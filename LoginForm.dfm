object FormLogin: TFormLogin
  Left = 0
  Top = 0
  Caption = 'Login'
  ClientHeight = 576
  ClientWidth = 551
  Color = clBtnFace
  Font.Charset = EASTEUROPE_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Segoue UI'
  Font.Style = []
  Font.Quality = fqAntialiased
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 18
  object Label1: TLabel
    Left = 160
    Top = 190
    Width = 109
    Height = 21
    Margins.Left = 10
    Margins.Top = 10
    Margins.Right = 10
    Margins.Bottom = 10
    AutoSize = False
    Caption = 'Korisini'#269'ko ime:'
    Color = clAqua
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqClearType
    ParentColor = False
    ParentFont = False
  end
  object Label2: TLabel
    Left = 160
    Top = 272
    Width = 35
    Height = 21
    Margins.Left = 10
    Margins.Top = 10
    Margins.Right = 10
    Margins.Bottom = 10
    Caption = #352'ifra:'
    Color = clAqua
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentColor = False
    ParentFont = False
  end
  object RegistrationDataLabel: TLabel
    AlignWithMargins = True
    Left = 5
    Top = 5
    Width = 541
    Height = 163
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Align = alTop
    Alignment = taCenter
    AutoSize = False
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clHighlight
    Font.Height = -16
    Font.Name = 'Segoue UI'
    Font.Pitch = fpVariable
    Font.Style = [fsBold]
    Font.Quality = fqAntialiased
    GlowSize = 25
    ParentFont = False
    Layout = tlCenter
    Visible = False
    WordWrap = True
    ExplicitLeft = -2
    ExplicitTop = 55
    ExplicitWidth = 545
  end
  object Button1: TButton
    Left = 176
    Top = 368
    Width = 93
    Height = 33
    Caption = 'Prijavi se'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 160
    Top = 304
    Width = 241
    Height = 28
    Alignment = taCenter
    AutoSize = False
    TabOrder = 1
  end
  object edtUsername: TEdit
    Left = 160
    Top = 224
    Width = 241
    Height = 28
    Alignment = taCenter
    AutoSize = False
    TabOrder = 2
  end
  object Button2: TButton
    Left = 288
    Top = 368
    Width = 97
    Height = 33
    Caption = 'Registracija'
    TabOrder = 3
    OnClick = Button2Click
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\imihic\Doc' +
      'uments\eBanking\eBanking.mdb;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 160
    Top = 432
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'KORISNIK_TABLE'
    Left = 264
    Top = 448
  end
end
