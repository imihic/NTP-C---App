object SettingsForm: TSettingsForm
  Left = 0
  Top = 0
  AlphaBlend = True
  AlphaBlendValue = 222
  BorderIcons = []
  BorderStyle = bsNone
  Caption = 'Settings'
  ClientHeight = 786
  ClientWidth = 938
  Color = clBtnFace
  TransparentColor = True
  TransparentColorValue = 10930928
  DoubleBuffered = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Segoe UI'
  Font.Style = []
  Font.Quality = fqAntialiased
  OldCreateOrder = False
  StyleElements = [seClient, seBorder]
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object lblVclStyle: TLabel
    Left = 508
    Top = 76
    Width = 31
    Height = 17
    Caption = 'Tema'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
  end
  object Label1: TLabel
    Left = 36
    Top = 21
    Width = 135
    Height = 25
    Caption = 'Postavke menija'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 2328053
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    StyleElements = [seClient, seBorder]
  end
  object Label2: TLabel
    Left = 508
    Top = 21
    Width = 44
    Height = 25
    Caption = 'Tema'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 2328053
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    StyleElements = [seClient, seBorder]
  end
  object cbxVclStyles: TComboBox
    Left = 570
    Top = 73
    Width = 179
    Height = 25
    Style = csDropDownList
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    TabOrder = 0
    OnChange = cbxVclStylesChange
  end
  object grpAnimation: TGroupBox
    Left = 281
    Top = 60
    Width = 205
    Height = 197
    Caption = 'Animacija'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    TabOrder = 1
    object lblAnimationDelay: TLabel
      Left = 16
      Top = 56
      Width = 120
      Height = 17
      Caption = 'Animation Delay (15)'
    end
    object lblAnimationStep: TLabel
      Left = 16
      Top = 123
      Width = 114
      Height = 17
      Caption = 'Animation Step (20)'
    end
    object chkUseAnimation: TCheckBox
      Left = 16
      Top = 24
      Width = 161
      Height = 17
      Caption = 'Koristi animaciju'
      Checked = True
      State = cbChecked
      TabOrder = 0
    end
    object trkAnimationDelay: TTrackBar
      Left = 8
      Top = 77
      Width = 177
      Height = 36
      Max = 15
      Min = 1
      Position = 7
      TabOrder = 1
      OnChange = trkAnimationDelayChange
    end
    object trkAnimationStep: TTrackBar
      Left = 8
      Top = 144
      Width = 177
      Height = 33
      Max = 15
      Min = 1
      Position = 4
      TabOrder = 2
      StyleElements = [seClient, seBorder]
      OnChange = trkAnimationStepChange
    end
  end
  object RadioGroup1: TRadioGroup
    Left = 36
    Top = 60
    Width = 205
    Height = 53
    Caption = 'Na'#269'in zatvaranja '
    Columns = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ItemIndex = 0
    Items.Strings = (
      'Kolaps'
      'Kompaktni')
    ParentFont = False
    TabOrder = 2
  end
  object grpDisplayMode: TRadioGroup
    Left = 36
    Top = 204
    Width = 205
    Height = 53
    Caption = 'Na'#269'in prikaza'
    Columns = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ItemIndex = 0
    Items.Strings = (
      'Usidren prikaz'
      'Prekriveni sloj')
    ParentFont = False
    TabOrder = 3
  end
  object grpPlacement: TRadioGroup
    Left = 36
    Top = 136
    Width = 205
    Height = 53
    Caption = 'Polo'#382'aj menija'
    Columns = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ItemIndex = 0
    Items.Strings = (
      'Lijevo'
      'Desno')
    ParentFont = False
    TabOrder = 4
  end
  object Button1: TButton
    Left = 36
    Top = 296
    Width = 205
    Height = 33
    Caption = 'Spremi promjene'
    TabOrder = 5
  end
end
