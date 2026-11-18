// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// Construct @ 1430852e0

void __thiscall SLayoutRoundingTest::Construct(SLayoutRoundingTest *this,FArguments *param_1)

{
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar1;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar2;
  FSlotArguments *pFVar3;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar4;
  TSharedRef<SVerticalBox,1> *pTVar5;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SHorizontalBox,1> *pTVar6;
  T0RequiredArgs local_d28;
  T0RequiredArgs local_d27;
  T0RequiredArgs local_d26 [2];
  int local_d24;
  float local_d20;
  int local_d1c;
  FArguments *local_d18;
  SVerticalBox *local_d10;
  longlong *local_d08;
  undefined1 *local_d00;
  TSharedRef<SWidget,1> *local_cf8;
  FSlotArguments *local_cf0;
  undefined1 *local_ce8;
  undefined1 *local_ce0;
  double local_cd8;
  TAttribute<float> *local_cd0;
  TAttribute<float> *local_cc8;
  FSlotArguments *local_cc0;
  FSlotArguments *local_cb8;
  FArguments *local_cb0;
  TAttribute<float> *local_ca8;
  TAttribute<float> *local_ca0;
  FSlotArguments *local_c98;
  double local_c90;
  TAttribute<float> *local_c88;
  TAttribute<float> *local_c80;
  FSlotArguments *local_c78;
  FSlotArguments *local_c70;
  FArguments *local_c68;
  TAttribute<float> *local_c60;
  TAttribute<float> *local_c58;
  FSlotArguments *local_c50;
  FSlotArguments *local_c48;
  FSlotArguments *local_c40;
  FArguments *local_c38;
  FArguments *local_c30;
  FSlotArguments *local_c28;
  FSlotArguments *local_c20;
  FArguments *local_c18;
  FArguments *local_c10;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_c08;
  TSharedRef<SVerticalBox,1> local_c00;
  TSharedRef<SWidget,1> local_bf0;
  TSharedRef<SWidget,1> local_be0;
  TSharedRef<SWidget,1> local_bd0;
  TSharedRef<SWidget,1> local_bc0;
  TSharedRef<SHorizontalBox,1> local_bb0;
  TSharedRef<SVerticalBox,1> local_ba0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_b90;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_b78;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_b60;
  TAttribute<float> local_b48;
  TAttribute<float> local_b28;
  TAttribute<float> local_b08;
  TAttribute<float> local_ae8;
  FSlotArguments local_ac8;
  FSlotArguments local_9e0;
  FSlotArguments local_8f8;
  FSlotArguments local_810;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_728;
  FArguments local_628;
  FArguments local_420;
  FArguments local_218;
  
  local_d18 = SVerticalBox::FArguments::FArguments(&local_628);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_d28);
  pTVar1 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_b90,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xea4,&local_d28);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar1,&local_c00,local_d18);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_b90._Widget.SharedReferenceCount);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_628._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_628);
  for (local_d24 = 0; local_d24 < 0xf; local_d24 = local_d24 + 1) {
    local_d10 = TSharedRef<SVerticalBox,1>::operator->(&local_c00);
    pFVar2 = SVerticalBox::AddSlot(local_d10,&local_728);
    local_d08 = &pFVar2->_padding_;
    pFVar3 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                       ((FSlotArgumentsMixin *)local_d08,HAlign_Center);
    local_d00 = &pFVar3->field_0x48;
    local_cf0 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)local_d00,VAlign_Center);
    local_cf8 = MakeRow(&local_bc0,0xf);
    TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_cf0,local_cf8);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_bc0);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_728);
  }
  local_ce8 = &this->field_0x268;
  pTVar4 = TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::HAlign
                     ((TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>
                       *)local_ce8,HAlign_Center);
  local_ce0 = &pTVar4->field_0x50;
  local_c08 = TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::VAlign
                        ((TAlignmentSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>
                          *)local_ce0,VAlign_Center);
  local_cb0 = SHorizontalBox::FArguments::FArguments(&local_218);
  local_cc0 = SHorizontalBox::Slot(&local_810);
  local_cd0 = &local_b48;
  local_cd8 = __real_3ff2b851eb851eb8;
  local_cc8 = TAttribute<float>::TAttribute<float><double>(local_cd0,&local_cd8);
  local_cb8 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_cc0,local_cc8);
  local_c18 = SHorizontalBox::FArguments::operator+(local_cb0,local_cb8);
  local_c98 = SHorizontalBox::Slot(&local_8f8);
  local_ca8 = &local_b28;
  local_d20 = __real_3f800000;
  local_ca0 = TAttribute<float>::TAttribute<float>(local_ca8,&local_d20);
  local_c28 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_c98,local_ca0);
  local_c68 = SVerticalBox::FArguments::FArguments(&local_420);
  local_c78 = SVerticalBox::Slot(&local_9e0);
  local_c88 = &local_b08;
  local_c90 = __real_3ff2b851eb851eb8;
  local_c80 = TAttribute<float>::TAttribute<float><double>(local_c88,&local_c90);
  local_c70 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_c78,local_c80);
  local_c38 = SVerticalBox::FArguments::operator+(local_c68,local_c70);
  local_c50 = SVerticalBox::Slot(&local_ac8);
  local_c60 = &local_ae8;
  local_d1c = 1;
  local_c58 = TAttribute<float>::TAttribute<float><int>(local_c60,&local_d1c);
  local_c48 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_c50,local_c58);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_bd0,&local_c00);
  local_c40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_c48,&local_bd0);
  local_c30 = SVerticalBox::FArguments::operator+(local_c38,local_c40);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_d27);
  pTVar1 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_b60,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0xeba,&local_d27);
  pTVar5 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar1,&local_ba0,local_c30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_be0,pTVar5);
  local_c20 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_c28,&local_be0);
  local_c10 = SHorizontalBox::FArguments::operator+(local_c18,local_c20);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_d26);
  this_00 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_b78,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xeb4,local_d26);
  pTVar6 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_bb0,local_c10);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_bf0,pTVar6);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_c08,&local_bf0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_bf0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_bb0.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_b78);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_be0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_ba0.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_b60._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_bd0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_ac8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_9e0);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_420._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_420);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_8f8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_810);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_218._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_218);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_c00.SharedReferenceCount);
  return;
}

// MakeRow @ 1430d7430

TSharedRef<SWidget,1> * __cdecl
SLayoutRoundingTest::MakeRow(TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar1;
  FSlotArguments *pFVar2;
  FName *pFVar3;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SImage,1> *pTVar4;
  T0RequiredArgs local_728;
  T0RequiredArgs local_727 [3];
  int local_724;
  ISlateStyle *local_720;
  FLinearColor_u_0 local_718;
  SHorizontalBox *local_708;
  longlong *local_700;
  undefined1 *local_6f8;
  FLinearColor_u_0 *local_6f0;
  TAttribute<FSlateColor> *local_6e8;
  TAttribute<FSlateColor> *local_6e0;
  FArguments *local_6d8;
  FName *local_6d0;
  FName local_6c8;
  code *local_6c0;
  FSlateBrush *local_6b8;
  TAttribute<FSlateBrush_const_*> *local_6b0;
  TAttribute<FSlateBrush_const_*> *local_6a8;
  FArguments *local_6a0;
  FArguments *local_698;
  FSlotArguments *local_690;
  FArguments *local_688;
  TSharedRef<SHorizontalBox,1> local_680;
  TSharedRef<SWidget,1> local_670;
  FName local_660;
  TSharedRef<SImage,1> local_658;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_648;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_630;
  TAttribute<FSlateBrush_const_*> local_618;
  TAttribute<FSlateColor> local_5f0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_5c0;
  FArguments local_4c0;
  FArguments local_2b8;
  
  local_688 = SHorizontalBox::FArguments::FArguments(&local_4c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_728);
  this = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                   (&local_648,"SHorizontalBox",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                    ,0xe93,&local_728);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=(this,&local_680,local_688);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_648);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_4c0._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_4c0);
  for (local_724 = 0; local_724 < param_1; local_724 = local_724 + 1) {
    local_708 = TSharedRef<SHorizontalBox,1>::operator->(&local_680);
    pFVar1 = SHorizontalBox::AddSlot(local_708,&local_5c0);
    local_700 = &pFVar1->_padding_;
    pFVar2 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                       ((FSlotArgumentsMixin *)local_700,HAlign_Center);
    local_6f8 = &pFVar2->field_0x48;
    local_690 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)local_6f8,VAlign_Center);
    local_6d8 = SImage::FArguments::FArguments(&local_2b8);
    local_6e8 = &local_5f0;
    local_718._s_0.R = __real_3f800000;
    local_718._s_0.G = __real_3f800000;
    local_718._s_0.B = __real_3f800000;
    local_718._s_0.A = __real_3f000000;
    local_6f0 = &local_718;
    local_6e0 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FLinearColor>
                          (local_6e8,(FLinearColor *)&local_6f0->_s_0);
    local_6a0 = SImage::FArguments::ColorAndOpacity(local_6d8,local_6e0);
    local_6b0 = &local_618;
    local_720 = FCoreStyle::Get();
    local_6c0 = *(code **)((longlong)*local_720 + 0x50);
    local_6d0 = &local_660;
    pFVar3 = ::FName::FName(local_6d0,"GenericWhiteBox");
    local_6c8 = *pFVar3;
    local_6b8 = (FSlateBrush *)(*local_6c0)(local_720,local_6c8,0,0);
    local_6a8 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                          (local_6b0,&local_6b8);
    local_698 = SImage::FArguments::Image(local_6a0,local_6a8);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_727);
    this_00 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_630,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0xe9a,local_727);
    pTVar4 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this_00,&local_658,local_698);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_670,pTVar4);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_690,&local_670);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_670);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_658.SharedReferenceCount);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>(&local_630);
    SImage::FArguments::~FArguments(&local_2b8);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_5c0);
  }
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(__return_storage_ptr__,&local_680);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_680.SharedReferenceCount);
  return __return_storage_ptr__;
}

