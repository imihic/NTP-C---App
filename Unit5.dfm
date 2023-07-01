object NaloziForm: TNaloziForm
  Left = 0
  Top = 0
  AlphaBlend = True
  AlphaBlendValue = 200
  BorderIcons = []
  BorderStyle = bsNone
  Caption = 'NaloziForm'
  ClientHeight = 994
  ClientWidth = 1089
  Color = clBtnFace
  TransparentColor = True
  DoubleBuffered = True
  ParentFont = True
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object PanelUnosPojedinacnogNaloga: TPanel
    Left = 0
    Top = 119
    Width = 1089
    Height = 778
    BevelEdges = []
    BevelOuter = bvNone
    Caption = 'PanelUnosPojedinacnogNaloga'
    FullRepaint = False
    ShowCaption = False
    TabOrder = 1
    object Label1: TLabel
      Left = 48
      Top = 125
      Width = 192
      Height = 25
      Caption = 'Novi nalog za pla'#263'anje'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 2328053
      Font.Height = -19
      Font.Name = 'Segoe UI'
      Font.Style = []
      Font.Quality = fqAntialiased
      ParentFont = False
      StyleElements = [seClient, seBorder]
    end
    object Label10: TLabel
      Left = 48
      Top = 192
      Width = 92
      Height = 13
      Caption = 'Odaberi primatelja:'
    end
    object Label2: TLabel
      Left = 48
      Top = 238
      Width = 44
      Height = 13
      Caption = 'Primatelj '
    end
    object Label3: TLabel
      Left = 48
      Top = 283
      Width = 84
      Height = 13
      Caption = 'Adresa primatelja'
    end
    object Label4: TLabel
      Left = 48
      Top = 334
      Width = 82
      Height = 13
      Caption = 'Mjesto primatelja'
    end
    object Label5: TLabel
      Left = 48
      Top = 387
      Width = 71
      Height = 13
      Caption = 'Svrha doznake'
    end
    object Label6: TLabel
      Left = 480
      Top = 192
      Width = 84
      Height = 13
      Caption = 'Ra'#269'un po'#353'iljatelja'
    end
    object Label7: TLabel
      Left = 480
      Top = 238
      Width = 80
      Height = 13
      Caption = 'Ra'#269'un primatelja'
    end
    object Label8: TLabel
      Left = 480
      Top = 283
      Width = 26
      Height = 13
      Caption = 'Iznos'
    end
    object Label9: TLabel
      Left = 480
      Top = 339
      Width = 62
      Height = 13
      Caption = 'Poziv na broj'
    end
    object Button1: TButton
      Left = 160
      Top = 448
      Width = 145
      Height = 33
      Caption = 'Izbor predlo'#353'ka'
      TabOrder = 0
    end
    object Button2: TButton
      Left = 592
      Top = 448
      Width = 145
      Height = 33
      Caption = 'Pripremi za provo'#273'enje'
      TabOrder = 1
    end
    object Edit3: TEdit
      Left = 160
      Top = 331
      Width = 145
      Height = 21
      TabOrder = 2
    end
    object Edit4: TEdit
      Left = 160
      Top = 384
      Width = 145
      Height = 21
      TabOrder = 3
    end
    object edtAdresaPrimatelja: TEdit
      Left = 160
      Top = 280
      Width = 145
      Height = 21
      TabOrder = 4
    end
    object edtIznos: TEdit
      Left = 592
      Top = 280
      Width = 145
      Height = 21
      TabOrder = 5
      Text = 'Edit1'
    end
    object edtPozivNaBroj: TEdit
      Left = 592
      Top = 336
      Width = 145
      Height = 21
      TabOrder = 6
      Text = 'Edit1'
    end
    object edtPrimatelj: TEdit
      Left = 160
      Top = 235
      Width = 145
      Height = 21
      TabOrder = 7
    end
    object edtRacunPrimatelja: TEdit
      Left = 592
      Top = 235
      Width = 145
      Height = 21
      CharCase = ecUpperCase
      TabOrder = 8
      OnExit = edtRacunPrimateljaExit
    end
    object DBComboBox1: TDBComboBox
      Left = 160
      Top = 189
      Width = 145
      Height = 21
      TabOrder = 9
    end
    object DBLookupComboBox1: TDBLookupComboBox
      Left = 592
      Top = 189
      Width = 145
      Height = 21
      DataField = 'ID'
      DataSource = dKorisnik
      KeyField = 'KORISNIK_FK'
      ListField = 'IBAN'
      ListSource = dRacuni
      TabOrder = 10
    end
  end
  object PanelSkupnoUcitavanje: TPanel
    Left = -8
    Top = 111
    Width = 1089
    Height = 781
    BevelEdges = []
    BevelOuter = bvNone
    Caption = 'PanelSkupnoUcitavanje'
    FullRepaint = False
    ShowCaption = False
    TabOrder = 2
    Visible = False
    object Label11: TLabel
      Left = 8
      Top = 119
      Width = 172
      Height = 25
      Caption = 'U'#269'itani obi'#269'ni nalozi'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 2328053
      Font.Height = -19
      Font.Name = 'Segoe UI'
      Font.Style = []
      Font.Quality = fqAntialiased
      ParentFont = False
      StyleElements = [seClient, seBorder]
    end
    object Label12: TLabel
      Left = 8
      Top = 416
      Width = 151
      Height = 25
      Caption = 'U'#269'itani UJP nalozi'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 2328053
      Font.Height = -19
      Font.Name = 'Segoe UI'
      Font.Style = []
      Font.Quality = fqAntialiased
      ParentFont = False
      StyleElements = [seClient, seBorder]
    end
    object ListView1: TListView
      Left = 8
      Top = 167
      Width = 1057
      Height = 196
      Columns = <
        item
          Caption = 'Redni broj'
        end
        item
          Caption = 'Naziv primatelja'
        end
        item
          Caption = 'Adresa'
        end
        item
          Caption = 'Mjesto'
        end
        item
          Caption = 'Dr'#382'ava'
        end
        item
          Caption = 'Ra'#269'un primatelja'
        end
        item
          Caption = 'Iznos'
        end
        item
          Caption = 'Valuta'
        end
        item
          Caption = 'Poziv na broj'
        end
        item
          Caption = 'Svrha doznake'
        end>
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Segoe UI'
      Font.Style = []
      MultiSelect = True
      RowSelect = True
      ParentFont = False
      TabOrder = 0
      ViewStyle = vsReport
    end
    object ListView2: TListView
      Left = 8
      Top = 465
      Width = 1057
      Height = 196
      Checkboxes = True
      Columns = <
        item
          Caption = 'Redni broj'
          Width = 125
        end
        item
          Caption = 'Naziv primatelja'
          Width = 125
        end
        item
          Caption = 'Adresa'
          Width = 125
        end
        item
          Caption = 'Mjesto'
          Width = 125
        end
        item
          Caption = 'Dr'#382'ava'
          Width = 125
        end
        item
          Caption = 'Ra'#269'un primatelja'
          Width = 125
        end
        item
          Caption = 'Iznos'
          Width = 125
        end
        item
          Caption = 'Valuta'
          Width = 125
        end
        item
          Caption = 'Vrsta prihoda'
          Width = 125
        end
        item
          Caption = #352'ifra op'#263'ine'
          Width = 125
        end
        item
          Caption = 'Poziv na broj'
          Width = 125
        end
        item
          Caption = 'Svrha doznake'
          Width = 125
        end>
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Segoe UI'
      Font.Style = []
      MultiSelect = True
      RowSelect = True
      ParentFont = False
      TabOrder = 1
      ViewStyle = vsReport
    end
    object Button3: TButton
      Left = 12
      Top = 41
      Width = 120
      Height = 25
      Caption = 'U'#269'itaj datoteku'
      TabOrder = 2
      OnClick = Button3Click
    end
    object btnDodajNoviObicniNalog: TButton
      Left = 8
      Top = 369
      Width = 146
      Height = 25
      Caption = 'Dodaj novi obi'#269'ni nalog'
      TabOrder = 3
      OnClick = btnDodajNoviObicniNalogClick
    end
    object btnAzurirajOdabraniObicniNalog: TButton
      Left = 176
      Top = 369
      Width = 146
      Height = 25
      Caption = 'A'#382'uriraj odabrani nalog'
      TabOrder = 4
    end
    object btnObrisiOdabraneObicneNaloge: TButton
      Left = 344
      Top = 369
      Width = 146
      Height = 25
      Caption = 'Obri'#353'i ozna'#269'ene naloge'
      TabOrder = 5
      OnClick = btnObrisiOdabraneObicneNalogeClick
    end
    object btnObrisiSveNaloge: TButton
      Left = 512
      Top = 369
      Width = 146
      Height = 25
      Caption = 'Obri'#353'i sve naloge'
      TabOrder = 6
      OnClick = btnObrisiSveNalogeClick
    end
    object btnPosaljiOdabraneNaloge: TButton
      Left = 850
      Top = 369
      Width = 146
      Height = 25
      Caption = 'Po'#353'alji odabrane naloge'
      TabOrder = 7
    end
    object btnDodajNoviUJPNalog: TButton
      Left = 8
      Top = 668
      Width = 146
      Height = 25
      Caption = 'Dodaj novi UJP nalog'
      TabOrder = 8
      OnClick = btnDodajNoviUJPNalogClick
    end
    object btnAzurirajOdabraniUJPNalog: TButton
      Left = 176
      Top = 668
      Width = 146
      Height = 25
      Caption = 'A'#382'uriraj odabrani UJP nalog'
      TabOrder = 9
      OnClick = btnAzurirajOdabraniUJPNalogClick
    end
    object btnObrisiOdabraneUJPNaloge: TButton
      Left = 344
      Top = 668
      Width = 146
      Height = 25
      Caption = 'Obri'#353'i odabrane UJP naloge'
      TabOrder = 10
      OnClick = btnObrisiOdabraneUJPNalogeClick
    end
    object btnObrisiSveUJPNaloge: TButton
      Left = 512
      Top = 668
      Width = 146
      Height = 25
      Caption = 'Obri'#353'i sve UJP naloge'
      TabOrder = 11
      OnClick = btnObrisiSveUJPNalogeClick
    end
    object btnPosaljiOdabraneUJPNaloge: TButton
      Left = 850
      Top = 668
      Width = 146
      Height = 25
      Caption = 'Po'#353'alji odabrane UJP naloge'
      TabOrder = 12
    end
    object Button16: TButton
      Left = 760
      Top = 732
      Width = 305
      Height = 49
      Caption = 'Po'#353'alji sve'
      TabOrder = 13
    end
  end
  object CategoryButtons1: TCategoryButtons
    Left = -16
    Top = 0
    Width = 625
    Height = 105
    BevelEdges = []
    BevelInner = bvNone
    BevelOuter = bvNone
    BorderStyle = bsNone
    ButtonFlow = cbfHorizontal
    ButtonHeight = 96
    ButtonWidth = 300
    ButtonOptions = [boFullSize, boShowCaptions, boVerticalCategoryCaptions, boBoldCaptions]
    Categories = <
      item
        Color = 15395839
        Collapsed = False
        Items = <
          item
            Caption = 'Unos pojedina'#269'nog naloga'
            ImageIndex = 0
            ImageName = 'Create_96px'
            OnClick = CategoryButtons1Categories0Items0Click
          end
          item
            Caption = 'Skupno u'#269'itavanje iz datoteke'
            ImageIndex = 1
            ImageName = 'XML_96px'
            OnClick = CategoryButtons1Categories0Items1Click
          end>
      end>
    DragCursor = crHandPoint
    Images = VirtualImageList1
    RegularButtonColor = clWhite
    SelectedButtonColor = 15132390
    TabOrder = 0
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\imihic\Doc' +
      'uments\eBanking\eBanking.mdb;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 864
    Top = 920
  end
  object tRacuni: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'RA'#268'UNI'
    Left = 648
    Top = 912
  end
  object dRacuni: TDataSource
    DataSet = tRacuni
    Left = 688
    Top = 912
  end
  object tKorisnik: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'KORISNIK_TABLE'
    Left = 536
    Top = 920
  end
  object dKorisnik: TDataSource
    DataSet = tKorisnik
    Left = 736
    Top = 912
  end
  object ImageCollection1: TImageCollection
    Images = <
      item
        Name = 'Create_96px'
        SourceImages = <
          item
            Image.Data = {
              89504E470D0A1A0A0000000D4948445200000060000000600806000000E29877
              3800000006624B474400FF00FF00FFA0BDA79300000582494441545809ED995D
              6C53551CC0FFE76EA3C175B8D951842E247495F86202818C31BAA98118D64436
              90079D3E895F41E303187C742F3C2D1863220FC668E28351D068E7D712044336
              9C4142C40415A785B9B18F8069B7629B6D70AFE7DFD2B27ECDDB0F3DF79EF36F
              FABFBDE7E3F69CF3FB9D733F5A007A1101224004880011200244800810012240
              048800115089005369B09518EBF88103DB19636F72700D3AC051CF912387F9BE
              51EA77F3634B3D54BDE3260E1EECE6A33EC669D7F0CFD4FBDD357575CFB2DE5E
              EE239565FE53335F55ED9A05E02394A7276667DF367A7B4B6259D241D8AA4A11
              FC667067C4E57E2D6BE6DF41C0D8BEABD1E8EBBCBCE8334AD107DC69558DBDFE
              5367BAF8B9E51880B170DFB9E191FAE9A90D4B8CFC1D7E3A7ABE98D311095882
              66F0D4D02E03D8715E65190FFE36FEAEB4043A0571ACF9DEB9F0B116AB1DD9B4
              757DC4BDEA174C15886726A3D14305CA72B249400E1280E1AFFB1EE233FF435E
              747BE6F3BDD49BB1BB7EDFDCE6996D5C79319595FDC9AF05AF64E7154A93802C
              32C651D8D53A7A68E09EF84F3F6415A59306632B2E6DF17B23AB56FF9CCECCDC
              99CA4C164E9180456C103E68709C5F701DED63FBDB5DF10BA7171567EDB2E523
              9B5BD7E548308C18037821AB72C124AF5BB02CA3E08DB3737C6565644995F046
              BE80C0E527A0CA985F342E0D06BC9FC05CB57B515ECE6ECC776EF8B786E949BC
              3B8A82A6757AFAFACEE4D42A90412B8083C90F9F17800E3B438F81E3E634260A
              05BF266C5D1F5EEDF9AE58F8F885CAAF80C2F0114F320CA84AAC84F9EA95C98C
              DC6D9CE94657D70EFF89DCA2A573945E0166E0233E06B7A033B40796E55F0937
              74663C520A7CFC6E650598858F9092A173097BC115FFF174329DD8DE00DD08EC
              79D83F944895B0515240F1F0536475F08FBDD4E18A9F470909F8DD3BFC83A9D2
              523E9513B076F624745E792AEB6EA7187406F38FBDDCB26666A8BB5CF8D86A35
              6E5489D2677E06A1C4CC6FD9FD6A59333FF58DCAAC804AC05FA87202BF330DB0
              FD5011F82841090195821F6C0E4225E12B21C01BF93CCF132E0EDD7CE0CC47F8
              579D7EF30799AC29F50A48C2EF29E3820BF05FC24747D20AB0037C6905D805BE
              9402EC045F3A0176832F95003BC29746805DE14B21C0CEF05180AD7F0BAA14FC
              CF9AFB61C2B90D79FCEF61DBE780E6997EFE845BFE439648F868DB9602107E67
              E8C9B29F7045C3B7A50099E0DB4E806CF06D254046F8B611202B7C1460F9DB50
              841F08F580662C607F4B0AFC49D90A17DC7C9DB7F45D90ECF0518865055402FE
              BC5607569DF9081FC392022A053FE80B0A7BC245B866C2720254828F822C2540
              35F89612A0227CCB085015BE2504D41A53B0257CB8ACFBFC9BDA72F8D2FB91E5
              2FB8083C3B845F03D6EADF42FDBDA370AD714376DF4CA5F156F353DF57F0E78A
              EDA6EA5BAD9270011E7D086A8C18D4BB8B9780F0833EFC33A5CD6A5C4DF747B8
              80A65B8389CE162B4106F83870A102EAF431B8DBB802A9975909B2C0C7710B15
              D06424673F762415FF264126F83866A1027EFDFE04CCC46BB01F199196E0DA98
              912F1B7C1C9C5001278723F0DCFBAD703DEAC0BE64044A68705F866BB725C808
              1F072C4C000B5F80E9991A18FDAB165EFCA005F249A88638A08449F736B0FBDD
              0EC2CE17C2FE9089FF3190EE4F4AC25B3D67A1B16E2E911F663E18AFEA8071AD
              1DC69B1E84183426F265DB0813707DF46206CB39DD01EF5D7A1CEE6F0BC0A4D6
              0271E6CA289735214C403812838E4D4E70376F04C7BA4741777A138C4389AD3A
              1B61021ED8F7719AB29EDE536F47536FC8D61A310910EC83049000C10404374F
              2B8004082620B8795A0124403001C1CDD30A20018209086E9E560009104C4070
              F3B40248806002829BA7154002041310DC3CAD0012209880E0E66905081640CD
              130122400488001120024480081001224004880011508BC03FC16850A1C796A6
              A30000000049454E44AE426082}
          end>
      end
      item
        Name = 'XML_96px'
        SourceImages = <
          item
            Image.Data = {
              89504E470D0A1A0A0000000D4948445200000060000000600806000000E29877
              3800000006624B474400FF00FF00FFA0BDA793000006DD494441545809ED99FB
              6F145514C7CFCC2EED629F740B7D627994A76D81044DC018A984472040A2D018
              7E318604FC4D7FD01FF44FF0077CF20BC198F893022208F2D440103028A018A8
              A5505A4B4B5B68B7946DA1DDEDEE7ABEC3CE70F7555EEEEC42CF66CEDC73CF3D
              3377E673E69EB97397487E424008080121200484801010024240080801212004
              8480101002424008080121200484801010024240080801212004848010100242
              40083C6B04B4E81B5AB96F5795AE073610694B588A884285D13E527F14025A37
              33ECA4101DD1B5E0B63D2BEAEAD5A3AD00ACDBBE3D632847DF1C0AD13BECE060
              91EDFF2710E0406C2929EA797FEBFC4D7E9CDE0800E00F666BFBF889E7A71E66
              91641260E88732FB83AB77D4D5F974743498AD7F21F041C21E09112D1BCCD23E
              416FDA9A9FB6570735FD2FAE18C1E052367B0804740AD6E8014DDFC8FD097C86
              60F3E60890BE51E77CB4D8E68EA5BB3001B0C7933F315C97C27E02150840B6FD
              FD4A8F610239084058972215042400A9A0AEF429015060A4429500A482BAD2A7
              044081910AD599CC4ED74F9B4D6F56CEB2BA180E06E9EDA3FBA9CF3764D9C6E8
              3A7D5DBB827233322DDB2FEDFFD2677F9F214DD368CFF2D72DBBA96C3EFF071D
              BBDE6A5623CAD7CA2AE8BD9AF9113654561FF81E85211F2F584433F3DD868EDD
              47A78FD305CF4DA8B68B9ECC1E77375FA63BC37EAB0B27C35E523E89D4DFC2E2
              B208F8415E8EFDEECA3FAA4B8C3EAFB028C6661AE6164E30D5A7A24C6A0000FF
              606B730488A513271B4FB66944DDD4519EEA6CA7CE3B035013CA9C0490F9CB92
              E6BA130727E10953D890D400E0BE76B734922F10806A48F17359545D5068E865
              59D9545530DED0B10BF16E475303EF47DE0A325D549E9513E3549E9D4BF999F7
              53598C431A1A921E805B4343849CAEDEBBF9D42F29E7D1A0349CBBD949CDDE3E
              C592588D370AE6B8EF0733F191E9D592F400E076775D6DA400E776E890854565
              84A7182F4CD44DD9D974C9541F58D6B86373FD9C38B6079E28C50EB604A0EBEE
              009DEA6CB36E152FE37779A6A2A68B4BB73C74B1B7DBF289A778FD3ECB5CC569
              0CB324D3A0F38CE905B69975D5D7B4A563694B0070E3DFF2CC26A48C82E899CC
              83663E38C795BE5EBA3B3C0C9572C66450656EBEA16357993B8EB2D9067DC0EF
              A7E6DB0F97CAE09F4AB12D00D7FABD74FA4647DC7B6DBA7D8BCE70FE8FDBA818
              9D9A4EE77B6E581635E5D414DECFFF7F767711BE2F2CC734566C0B0018FCD0DC
              8822467E6CB91C638B6770399D1181525FC46A30104CF8C63B47BAD96C0D40A1
              6B6CDCFB7727B0473BBB1C0E3AC3A308D355B4CD1AE7A60CB641A0C386347796
              47137C514F77B12D00F8485A3B75665C1E6B264DA34C0619B75131BA1C4EF20C
              0D524B78AA9AA13B7849A18066E4171074B85EE17486A50EF8A29EEE625B00E6
              8D2FA2C939797179E4F13AD0625EC389DBA818CDB48251609A917A20661DE907
              BA04001414595F395BA911619D48356074607AAADAA27513AA0919ED800F810E
              417030DA2405814658AAF90B753AA78970D5580DFDA6F1025DE57461DAF07EA8
              2D7DDEACC62D31B3C17CBF91BF19FAC3DF0453F3C65165DEBDE9E86D5E65450A
              1AC3A949FD46887BB23431DA9282EAA272FFD1F656C2D2F4CF6D2DA4FED6B19F
              833FA8545BB48EA71B5FD5676F76194DF077F0F414158C0CBC84094E303C05E2
              4CF63562DD5D4D1198C11CBED66C747BF47A2BBD35A3DA7A0163A16E617139FD
              DA71CD681F698799CEABA513235C108008C34356161497267C3FFDCEB32E7CC9
              3FE4A91ED92DE9017863CAF4888B6AE8EDA1B601AF61C317EB6F5DEDB448493D
              EBA6CEA0131C8090E191788700E0BF03A424780542413A171E15A83F8AACAAA8
              4CE80EF890840E4FD890D41454C1B39E978A4A232EF1485B0BA9BF43E1D160DA
              26F1312F4E2831AB094BACF534F679ACF6865E4FC49F3F56439A2BCE645EDF2B
              25E5D4A5FCB9E2E7BF244F74B4457459EFE9A67A5E842BC81C6BD95FE63484A1
              0F43F49F33EAC838D9D14EF9192EB8D14965B18FD829FA38C329BCF3FA7C8465
              F27075C4C2170C8CD8FEA48DDAAAFD3BF9729FF43472FCE312486A0A7ADC8B1A
              4DC74900521C6D09800420C50452DCBD8C803408C0408AAF613477EFC508681D
              CD04527CEFAD3A7FB41C4CF1458CE6EE0FE8E4A0AF98408045367B090C83BDBE
              77F9DA8BFC29FCA5BD7D4B6F4CE0D3BDCBD636E8AC50E9849E0FB83CCC229B1D
              04B4D041EF58F787E8CA08C0D6F99BFCAEFEE02AFE2F640B1B251D3184246D01
              7EE77E5E32DEB3FA586DED30FA88F9EF68E5BE5D55BA1ED840A42D6587292CF7
              961B5991EDB1080CF2514D0CFEB0AE05B7ED595157CF75D98480101002424008
              0801212004848010100242400808012120048480101002424008080121200484
              801010024240080801212004848010788609FC07893CBC215553E4EE00000000
              49454E44AE426082}
          end>
      end>
    Left = 792
    Top = 928
  end
  object VirtualImageList1: TVirtualImageList
    DisabledGrayscale = False
    DisabledSuffix = '_Disabled'
    Images = <
      item
        CollectionIndex = 0
        CollectionName = 'Create_96px'
        Disabled = False
        Name = 'Create_96px'
      end
      item
        CollectionIndex = 1
        CollectionName = 'XML_96px'
        Disabled = False
        Name = 'XML_96px'
      end>
    ImageCollection = ImageCollection1
    Width = 96
    Height = 96
    Left = 456
    Top = 928
  end
  object FileOpenDialog1: TFileOpenDialog
    FavoriteLinks = <>
    FileTypes = <
      item
        DisplayName = ''
      end>
    Options = []
    Left = 240
    Top = 148
  end
  object XMLDocument1: TXMLDocument
    Active = True
    FileName = 
      'C:\Users\imihic\Documents\Embarcadero\Studio\Projects\resources\' +
      'nalozi.xml'
    Left = 960
    Top = 920
  end
end
