// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// Construct @ 14307ff50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall SGammaTest::Construct(SGammaTest *this,FArguments *param_1)

{
  FSlotArguments *this_00;
  FSlotArguments *pFVar1;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SColorBlock,1> *pTVar2;
  FString *pFVar3;
  FText *pFVar4;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<STextBlock,1> *pTVar5;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SHorizontalBox,1> *pTVar6;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SVerticalBox,1> *pTVar7;
  T0RequiredArgs local_11a8;
  T0RequiredArgs local_11a7;
  T0RequiredArgs local_11a6;
  T0RequiredArgs local_11a5;
  FColor local_11a4;
  undefined1 *local_11a0;
  TAttribute<FLinearColor> *local_1198;
  TAttribute<FLinearColor> *local_1190;
  FArguments *local_1188;
  FArguments *local_1180;
  FSlotArguments *local_1178;
  FSlotArguments *local_1170;
  FArguments *local_1168;
  TAttribute<FText> *local_1160;
  TAttribute<FText> *local_1158;
  FArguments *local_1150;
  FArguments *local_1148;
  FSlotArguments *local_1140;
  FSlotArguments *local_1138;
  FArguments *local_1130;
  FArguments *local_1128;
  FSlotArguments *local_1120;
  FSlotArguments *local_1118;
  FArguments *local_1110;
  FArguments *local_1108;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_1100;
  TSharedRef<SWidget,1> local_10f8;
  TSharedRef<SWidget,1> local_10e8;
  TSharedRef<SWidget,1> local_10d8;
  TSharedRef<SWidget,1> local_10c8;
  TSharedRef<SVerticalBox,1> local_10b8;
  TSharedRef<SHorizontalBox,1> local_10a8;
  TSharedRef<STextBlock,1> local_1098;
  FText local_1088;
  FString local_1078;
  TSharedRef<SColorBlock,1> local_1068;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1058;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1040;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1028;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_1010;
  TAttribute<FLinearColor> local_ff8;
  TAttribute<FText> local_fc8;
  FSlotArguments local_f98;
  FSlotArguments local_eb0;
  FSlotArguments local_dc8;
  FArguments local_ce0;
  FArguments local_ad8;
  FArguments local_8c8;
  FArguments local_568;
  undefined8 uStack_8;
  
  uStack_8 = 0x14307ff64;
  FColor::FColor(&local_11a4,200,'P','\x0f',0xff);
  local_11a0 = &this->field_0x258;
  local_1100 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                         ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                           *)local_11a0,__real_41200000);
  local_1110 = SVerticalBox::FArguments::FArguments(&local_ad8);
  this_00 = SVerticalBox::Slot(&local_dc8);
  local_1120 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(this_00);
  local_1168 = SHorizontalBox::FArguments::FArguments(&local_ce0);
  pFVar1 = SHorizontalBox::Slot(&local_eb0);
  local_1178 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar1);
  local_1188 = SColorBlock::FArguments::FArguments(&local_8c8);
  local_1198 = &local_ff8;
  local_1190 = TAttribute<FLinearColor>::TAttribute<FLinearColor><FColor>(local_1198,&local_11a4);
  local_1180 = SColorBlock::FArguments::Color(local_1188,local_1190);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_11a8);
  this_01 = MakeTDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
                      (&local_1010,"SColorBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x128a,&local_11a8);
  pTVar2 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_1068,local_1180);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorBlock>(&local_10c8,pTVar2);
  local_1170 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1178,&local_10c8);
  local_1130 = SHorizontalBox::FArguments::operator+(local_1168,local_1170);
  pFVar1 = SHorizontalBox::Slot(&local_f98);
  local_1140 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar1);
  local_1150 = STextBlock::FArguments::FArguments(&local_568);
  local_1160 = &local_fc8;
  pFVar3 = FColor::ToString(&local_11a4,&local_1078);
  pFVar4 = FText::FromString(&local_1088,pFVar3);
  local_1158 = TAttribute<FText>::TAttribute<FText>(local_1160,pFVar4);
  local_1148 = STextBlock::FArguments::Text(local_1150,local_1158);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_11a7);
  this_02 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_1028,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1291,&local_11a7);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_1098,local_1148);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_10d8,pTVar5);
  local_1138 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1140,&local_10d8);
  local_1128 = SHorizontalBox::FArguments::operator+(local_1130,local_1138);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_11a6);
  this_03 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1040,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1285,&local_11a6);
  pTVar6 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_10a8,local_1128);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_10e8,pTVar6);
  local_1118 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1120,&local_10e8);
  local_1108 = SVerticalBox::FArguments::operator+(local_1110,local_1118);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_11a5);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1058,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1280,&local_11a5);
  pTVar7 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_04,&local_10b8,local_1108);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_10f8,pTVar7);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_1100,&local_10f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_10f8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_10b8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1058._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_10e8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_10a8.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_1040);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_10d8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1098);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1028);
  FText::~FText(&local_1088);
  ::FString::~FString(&local_1078);
  STextBlock::FArguments::~FArguments(&local_568);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_f98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_10c8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1068.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1010._Widget.SharedReferenceCount);
  SColorBlock::FArguments::~FArguments(&local_8c8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_eb0);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_ce0._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_ce0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_dc8);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_ad8._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_ad8);
  return;
}

