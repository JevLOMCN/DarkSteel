// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 3

// Construct @ 146ba4620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
STranslationWidgetPicker::Construct(STranslationWidgetPicker *this,FArguments *param_1)

{
  byte *pbVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  SHorizontalBox *pSVar10;
  SImage *pSVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  FArguments *pFVar16;
  FName *pFVar17;
  ISlateStyle *pIVar18;
  FSlotArguments *this_00;
  FArguments *pFVar19;
  FSlotArguments *pFVar20;
  FSizeParam *pFVar21;
  FArguments *pFVar22;
  FText *pFVar23;
  FTextBlockStyle *pFVar24;
  TSharedRef<STextBlock,1> *pTVar25;
  TSharedRef<SVerticalBox,1> *pTVar26;
  FArguments *pFVar27;
  TSharedRef<SHorizontalBox,1> *pTVar28;
  FString *pFVar29;
  FArguments *pFVar30;
  FCheckBoxStyle *pFVar31;
  FArguments *pFVar32;
  TSharedRef<SToolTip,1> *pTVar33;
  undefined8 *puVar34;
  TSharedRef<SWidget,1> *pTVar35;
  ulong64 uVar36;
  TSharedRef<SWidget_const_,1> *pTVar37;
  TSharedRef<SCheckBox,1> *pTVar38;
  undefined1 *puVar39;
  FSlotArguments *pFVar40;
  FSlotArguments *pFVar41;
  wchar_t *pwVar42;
  STranslationWidgetPicker *pSVar43;
  SHorizontalBox *local_res18;
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1af8;
  T0RequiredArgs local_1af7;
  T0RequiredArgs local_1af6;
  T0RequiredArgs local_1af5 [5];
  FString local_1af0;
  FLLMScope local_1ae0;
  FLLMScope local_1adc;
  FLLMScope local_1ad8;
  FLLMScope local_1ad4;
  FLLMScope local_1ad0;
  FLLMScope local_1acc;
  FName local_1ac8;
  FMemScope local_1ac0;
  STextBlock *local_1ab8;
  FSharedReferencer<1> local_1ab0;
  SVerticalBox *local_1aa8;
  FSharedReferencer<1> local_1aa0;
  FSlateBrush *local_1a98;
  undefined1 local_1a90;
  undefined1 local_1a88 [8];
  ForAnyElementType FStack_1a80;
  ulonglong local_1a78;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1a70;
  FText local_1a58;
  bool local_1a48;
  undefined1 local_1a40 [8];
  ForAnyElementType FStack_1a38;
  ulonglong local_1a30;
  SImage *local_1a28;
  FSharedReferencer<1> local_1a20;
  TVector2<double>_u_0 local_1a18;
  undefined1 local_1a08;
  undefined1 local_1a00 [8];
  ForAnyElementType FStack_19f8;
  ulonglong local_19f0;
  longlong *local_19e8;
  FSharedReferencer<1> local_19e0;
  undefined1 local_19d8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_19d0;
  FMemScope local_19b8;
  FName local_19b0;
  FName local_19a8;
  FName local_19a0;
  FName local_1998;
  FMemScope local_1990;
  FName local_1988;
  FName local_1980;
  FMemScope local_1978;
  FText local_1970;
  undefined4 local_1960 [2];
  undefined4 local_1958 [2];
  undefined4 local_1950 [2];
  undefined1 local_1948 [8];
  TSharedRef<SToolTip,1> local_1940;
  FName local_1930;
  FMemScope local_1928;
  FName local_1920;
  FMemScope local_1918;
  FName local_1910;
  TAttribute<float> local_1908;
  TSharedRef<SWidget,1> local_18e8;
  FString local_18d8;
  undefined8 local_18c8;
  undefined8 uStack_18c0;
  undefined1 local_18b8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_18b0;
  FDestructionSentinel local_1898;
  FDestructionSentinel local_1880;
  FDestructionSentinel local_1868;
  FDestructionSentinel local_1850;
  undefined1 *local_1838;
  FDestructionSentinel local_1830;
  undefined1 *local_1818;
  TAttribute<FText> local_1810;
  FName local_17e0;
  TSharedRef<SHorizontalBox,1> local_17d8;
  TSharedRef<SVerticalBox,1> local_17c8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_17b8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_17a0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1788;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_1770;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_1758;
  TSharedRef<STextBlock,1> local_1740;
  FText local_1730;
  FString local_1720;
  SWidget *local_1710;
  TReferenceControllerBase<1> *pTStack_1708;
  TSharedRef<SWidget,1> local_1700;
  TSharedRef<SWidget_const_,1> local_16f0;
  TSharedRef<SCheckBox,1> local_16e0;
  FName local_16c8;
  undefined1 local_16c0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_1690;
  undefined1 local_1678 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_1648;
  undefined8 *local_1630 [2];
  TReferenceControllerBase<1> *local_1620;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1600 [2];
  TDelegateBase<FNotThreadSafeDelegateMode> local_15c8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_15a8;
  char local_1590;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1580;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1560;
  undefined8 *local_1548 [2];
  TReferenceControllerBase<1> *local_1538;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1518 [2];
  TDelegateBase<FNotThreadSafeDelegateMode> local_14e0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_14c0;
  char local_14a8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1498;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1478;
  undefined8 *local_1460 [2];
  TReferenceControllerBase<1> *local_1450;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1430 [2];
  TDelegateBase<FNotThreadSafeDelegateMode> local_13f8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_13d8;
  char local_13c0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_13b0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1390;
  FArguments local_1378;
  FArguments local_1170;
  FArguments local_f68;
  FArguments local_cc0;
  FArguments local_978;
  FArguments local_598;
  undefined8 uStack_40;
  
  uStack_40 = 0x146ba4647;
  pFVar41 = (FSlotArguments *)0x0;
  local_res18 = (SHorizontalBox *)((ulonglong)local_res18 & 0xffffffff00000000);
  pFVar16 = SImage::FArguments::FArguments(&local_f68);
  pFVar17 = ::FName::FName(&local_17e0,"TranslationEditor.TranslationPicker");
  FVar2 = *pFVar17;
  pIVar18 = FAppStyle::Get();
  local_1a98 = (FSlateBrush *)(**(code **)((longlong)*pIVar18 + 0x50))(pIVar18,FVar2);
  local_1a90 = 1;
  local_1a78 = 0;
  local_1a88 = (undefined1  [8])0x0;
  FStack_1a80.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_Image).Value = local_1a98;
  (pFVar16->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a88,
             (FWriteAccessScope *)&local_1880);
  if (((int)local_1a78 != 0) && (FStack_1a80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a80,0,0,0x10);
    local_1a78 = local_1a78 & 0xffffffff00000000;
  }
  if (local_1880.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1880.Accessor,&local_1880);
  }
  if (FStack_1a80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a88);
  FLLMScope::FLLMScope(&local_1ae0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1ac8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1ac0,&local_1ac8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1a70,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0x2a,(T0RequiredArgs *)&local_res18);
  FMemScope::~FMemScope(&local_1ac0);
  FLLMScope::~FLLMScope(&local_1ae0);
  pSVar11 = local_1a70._Widget.Object;
  pwVar42 = L"";
  if ((local_1a70._Widget.Object == (SImage *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1a70._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  SImage::Construct(local_1a70._Widget.Object,pFVar16);
  if ((local_1a70._Widget.Object == (SImage *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_1a70._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)((local_1a70._Widget.Object)->_padding_ + 0x228))
                       (local_1a70._Widget.Object);
    bVar15 = 0;
    if (cVar14 == '\0') goto LAB_146ba4853;
  }
  bVar15 = 0x20;
LAB_146ba4853:
  *(byte *)&(local_1a70._Widget.Object)->_padding_ =
       (byte)(local_1a70._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1a70._Widget.Object)->_padding_ =
       (byte)(local_1a70._Widget.Object)->_padding_ | bVar15;
  if ((local_1a70._Widget.Object == (SImage *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_1a70._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1a70._Widget.Object == (SImage *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar12.ReferenceController = local_1a70._Widget.SharedReferenceCount.ReferenceController;
  local_1a70._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1a70._Widget.Object = (SImage *)0x0;
  if ((pSVar11 == (SImage *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_f68._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_f68._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_f68._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_f68._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_f68);
  FAppStyle::GetAppStyleSetName();
  ::FName::FName(&local_19b0,"Toolbar");
  FText::AsLocalizable_Advanced_LocText
            (&local_1970,L"TranslationPicker",L"TranslationPickerTooltip",
             L"Open the Translation Picker");
  local_1ac8 = (FName)SHorizontalBox::FArguments::FArguments(&local_1170);
  this_00 = SHorizontalBox::Slot((FSlotArguments *)local_1460);
  local_1908.Value = 1.0;
  local_1908.bIsSet = true;
  local_1908.Getter._16_8_ = 0;
  local_1908.Getter._0_8_ = 0;
  local_1908.Getter._8_8_ = 0;
  local_res18 = (SHorizontalBox *)
                SHorizontalBox::FSlot::FSlotArguments::FillWidth(this_00,&local_1908);
  if (local_1960 != (undefined4 *)&((FSlotArguments *)local_res18)->field_0x50) {
    *(undefined4 *)&((FSlotArguments *)local_res18)->field_0x50 = 2;
    ((FSlotArguments *)local_res18)->field_0x54 = 1;
  }
  if (local_res18 == (SHorizontalBox *)0xffffffffffffffb8) {
    local_res18 = (SHorizontalBox *)0x0;
  }
  pFVar19 = SVerticalBox::FArguments::FArguments(&local_1378);
  pFVar20 = SVerticalBox::Slot((FSlotArguments *)local_1548);
  pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_16c0);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar20->field_0x58,pFVar21);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1690)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_16c0 + 0x10));
  puVar39 = &pFVar20->field_0x48;
  if (local_1958 != (undefined4 *)puVar39) {
    *(undefined4 *)puVar39 = 2;
    pFVar20->field_0x4c = 1;
  }
  pFVar40 = pFVar41;
  if (puVar39 != (undefined1 *)0x0) {
    pFVar40 = pFVar20;
  }
  local_1a28 = pSVar11;
  local_1a20.ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SImage **)&pFVar40->field_0x8 != &local_1a28) {
    *(SImage **)&pFVar40->field_0x8 = pSVar11;
    local_1a28 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->field_0x10,&local_1a20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a20.ReferenceController);
  local_1ac0 = (FMemScope)SVerticalBox::FArguments::operator+(pFVar19,pFVar40);
  pFVar20 = SVerticalBox::Slot((FSlotArguments *)local_1630);
  pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1678);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar20->field_0x58,pFVar21);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1648)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1678 + 0x10));
  puVar39 = &pFVar20->field_0x48;
  if (local_1950 != (undefined4 *)puVar39) {
    *(undefined4 *)puVar39 = 2;
    pFVar20->field_0x4c = 1;
  }
  pFVar40 = pFVar41;
  if (puVar39 != (undefined1 *)0x0) {
    pFVar40 = pFVar20;
  }
  pFVar22 = STextBlock::FArguments::FArguments(&local_598);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_1730,L"TranslationPicker",L"TranslationPicker",L"Translation Picker");
  FText::FText(&local_1810.Value,pFVar23);
  local_1810.bIsSet = true;
  local_1810.Getter._16_8_ = 0;
  local_1810.Getter._0_8_ = 0;
  local_1810.Getter._8_8_ = 0;
  pFVar22 = STextBlock::FArguments::Text(pFVar22,&local_1810);
  pFVar17 = ::FName::FName(&local_16c8,"ToolBar.Label");
  pIVar18 = FAppStyle::Get();
  pFVar24 = (FTextBlockStyle *)
            (**(code **)((longlong)*pIVar18 + 0xa0))(pIVar18,FTextBlockStyle::TypeName,*pFVar17,0,1)
  ;
  if (pFVar24 == (FTextBlockStyle *)0x0) {
    pFVar24 = FTextBlockStyle::GetDefault();
  }
  pFVar22->_TextStyle = pFVar24;
  local_1a08 = 1;
  local_1a18 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
  local_19f0 = 0;
  local_1a00 = (undefined1  [8])0x0;
  FStack_19f8.Data = (FScriptContainerElement *)0x0;
  (pFVar22->_ShadowOffset).Value.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  (pFVar22->_ShadowOffset).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_ShadowOffset).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a00,
             (FWriteAccessScope *)&local_1868);
  if (((int)local_19f0 != 0) && (FStack_19f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_19f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_19f8,0,0,0x10);
    local_19f0 = local_19f0 & 0xffffffff00000000;
  }
  if (local_1868.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1868.Accessor,&local_1868);
  }
  if (FStack_19f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_19f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a00);
  FLLMScope::FLLMScope(&local_1adc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1930 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1928,&local_1930,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1788,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0x4a,local_res20);
  FMemScope::~FMemScope(&local_1928);
  FLLMScope::~FLLMScope(&local_1adc);
  pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1788,&local_1740,pFVar22);
  pTVar3 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_1ab8 = pTVar25->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1ab0.ReferenceController = pTVar3;
  if ((STextBlock **)&pFVar40->field_0x8 != &local_1ab8) {
    *(STextBlock **)&pFVar40->field_0x8 = local_1ab8;
    local_1ab8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->field_0x10,&local_1ab0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ab0.ReferenceController);
  pFVar19 = SVerticalBox::FArguments::operator+((FArguments *)local_1ac0,pFVar40);
  FLLMScope::FLLMScope(&local_1ad8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1920 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1918,&local_1920,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_17a0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0x3c,&local_1af8);
  FMemScope::~FMemScope(&local_1918);
  FLLMScope::~FLLMScope(&local_1ad8);
  pTVar26 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_17a0,&local_17c8,pFVar19);
  pSVar10 = local_res18;
  pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_1aa8 = pTVar26->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1aa0.ReferenceController = pTVar4;
  if ((SVerticalBox **)&local_res18->field_0x8 != &local_1aa8) {
    *(SVerticalBox **)&local_res18->field_0x8 = local_1aa8;
    local_1aa8 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_res18->field_0x10,&local_1aa0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1aa0.ReferenceController);
  pFVar27 = SHorizontalBox::FArguments::operator+
                      ((FArguments *)local_1ac8,(FSlotArguments *)pSVar10);
  FLLMScope::FLLMScope(&local_1ad4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1910 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_19b8,&local_1910,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_17b8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0x36,&local_1af7);
  FMemScope::~FMemScope(&local_19b8);
  FLLMScope::~FLLMScope(&local_1ad4);
  pTVar28 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_17b8,&local_17d8,pFVar27);
  pTVar5 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_res18 = pTVar28->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17b8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17a0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1740.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1788._Widget.SharedReferenceCount.ReferenceController);
  if (local_1730.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1730.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_598);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1560)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1580)
  ;
  if (local_1590 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_15a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_15c8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_1600);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1620);
  if (local_1630[0] != (undefined8 *)0x0) {
    (**(code **)*local_1630[0])(local_1630[0],1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1478)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1498)
  ;
  if (local_14a8 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_14c0);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_14e0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_1518);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1538);
  if (local_1548[0] != (undefined8 *)0x0) {
    (**(code **)*local_1548[0])(local_1548[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1378._Slots.AllocatorInstance.Data,local_1378._Slots.ArrayNum);
  if ((FSlotArguments *)local_1378._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1378._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1378);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1390)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_13b0)
  ;
  if (local_13c0 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_13d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_13f8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_1430);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1450);
  if (local_1460[0] != (undefined8 *)0x0) {
    (**(code **)*local_1460[0])(local_1460[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1170._Slots.AllocatorInstance.Data,local_1170._Slots.ArrayNum);
  if ((FSlotArguments *)local_1170._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1170._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1170);
  local_19a8 = local_19b0;
  ::FString::FString(&local_18d8,".SToolBarButtonBlock.CheckBox.Padding");
  pFVar29 = ::FName::ToString(&local_19a8,&local_1720);
  ::FString::ConcatFF(&local_1af0,pFVar29,&local_18d8);
  if (local_1af0.Data.ArrayNum != 0) {
    pwVar42 = (wchar_t *)local_1af0.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_1988,pwVar42);
  if (local_1af0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1af0.Data.AllocatorInstance.Data);
  }
  if (local_1720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1720.Data.AllocatorInstance.Data);
  }
  if (local_18d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18d8.Data.AllocatorInstance.Data);
  }
  pFVar30 = SCheckBox::FArguments::FArguments(&local_978);
  ::FName::FName(&local_19a0,"ToolBar.ToggleButton");
  pIVar18 = FAppStyle::Get();
  pFVar31 = (FCheckBoxStyle *)
            (**(code **)((longlong)*pIVar18 + 0xa0))
                      (pIVar18,FCheckBoxStyle::TypeName,local_19a0,0,1);
  if (pFVar31 == (FCheckBoxStyle *)0x0) {
    pFVar31 = FCheckBoxStyle::GetDefault();
  }
  pFVar30->_Style = pFVar31;
  pFVar30->_IsFocusable = false;
  pFVar32 = SToolTip::FArguments::FArguments(&local_cc0);
  local_1a58.TextData.Reference = local_1970.TextData.Reference;
  if (local_1970.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1970.TextData.Reference + 8))
              (local_1970.TextData.Reference,local_1948);
  }
  local_1a58.Flags = local_1970.Flags;
  local_1a48 = true;
  local_1a30 = 0;
  local_1a40 = (undefined1  [8])0x0;
  FStack_1a38.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar32->_Text).Value,&local_1a58);
  (pFVar32->_Text).bIsSet = local_1a48;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a40,
             (FWriteAccessScope *)&local_1898);
  if (((int)local_1a30 != 0) && (FStack_1a38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a38,0,0,0x10);
    local_1a30 = local_1a30 & 0xffffffff00000000;
  }
  if (local_1898.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1898.Accessor,&local_1898);
  }
  if (FStack_1a38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a40);
  if (local_1a58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a58.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_1ad0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1998 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1990,&local_1998,true);
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
            (&local_1758,"SToolTip",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0x5f,&local_1af6);
  FMemScope::~FMemScope(&local_1990);
  FLLMScope::~FLLMScope(&local_1ad0);
  pTVar33 = TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1758,&local_1940,pFVar32);
  local_19e8 = &pTVar33->Object->_padding_;
  if (pTVar33->Object == (SToolTip *)0x0) {
    local_19e8 = (longlong *)0x0;
  }
  local_19e0.ReferenceController = (pTVar33->SharedReferenceCount).ReferenceController;
  if (local_19e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_19e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_19e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_19d8 = 1;
  local_19d0._16_8_ = 0;
  local_19d0._0_8_ = 0;
  local_19d0._8_8_ = 0;
  if ((longlong **)&pFVar30->_padding_ != &local_19e8) {
    pFVar30->_padding_ = (longlong)local_19e8;
    local_19e8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar30->_padding_,&local_19e0);
  }
  *(undefined1 *)&pFVar30->_padding_ = local_19d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar30->_padding_,&local_19d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_19d0)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19e0.ReferenceController);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1710 = (pFVar30->_Content).Widget.Object;
  pTStack_1708 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = (SWidget *)local_res18;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1708);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar30->_OnCheckStateChanged,(FWriteAccessScope *)&local_1850);
  local_1838 = &(pFVar30->_OnCheckStateChanged).field_0x8;
  puVar34 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1838);
  pSVar43 = this;
  if (puVar34 != (undefined8 *)0x0) {
    local_1af0.Data.ArrayMax = local_1940.SharedReferenceCount.ReferenceController._4_4_;
    local_1af0.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnCheckStateChanged;
    local_1af0.Data.ArrayNum = 0;
    pTVar35 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1700);
    pSVar43 = (STranslationWidgetPicker *)(pTVar35->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar35->Object;
    if (pSVar43 != (STranslationWidgetPicker *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar43->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pSVar43->field_0x8 + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar43->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pSVar43->field_0x8 + 1);
      UNLOCK();
    }
    *puVar34 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar36 = FDelegateHandle::GenerateNewID();
    puVar34[2] = uVar36;
    *puVar34 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTranslationWidgetPicker___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar34[3] = pSVar6;
    puVar34[4] = pSVar43;
    if (pSVar43 != (STranslationWidgetPicker *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar43->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pSVar43->field_0xc + 1);
      UNLOCK();
    }
    pFVar41 = (FSlotArguments *)&DAT_00000007;
    puVar34[5] = local_1af0.Data.AllocatorInstance.Data;
    puVar34[6] = CONCAT44(local_1af0.Data.ArrayMax,local_1af0.Data.ArrayNum);
  }
  if (((ulonglong)pFVar41 & 4) != 0) {
    pFVar41 = (FSlotArguments *)(ulonglong)((uint)pFVar41 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (((ulonglong)pFVar41 & 2) != 0) {
    pFVar41 = (FSlotArguments *)(ulonglong)((uint)pFVar41 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (((ulonglong)pFVar41 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1700.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  bVar13 = false;
  if (local_1850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1850.Accessor,&local_1850);
  }
  (pFVar30->_IsChecked).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_IsChecked).Getter
             ,(FWriteAccessScope *)&local_1830);
  local_1818 = &(pFVar30->_IsChecked).Getter.field_0x8;
  puVar34 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1818);
  pSVar43 = this;
  if (puVar34 != (undefined8 *)0x0) {
    local_1af0.Data.ArrayNum = 0;
    local_1af0.Data.ArrayMax = local_1940.SharedReferenceCount.ReferenceController._4_4_;
    local_1af0.Data.AllocatorInstance.Data = (FScriptContainerElement *)IsChecked;
    pTVar37 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_16f0);
    pSVar43 = (STranslationWidgetPicker *)(pTVar37->SharedReferenceCount).ReferenceController;
    local_res18 = (SHorizontalBox *)pTVar37->Object;
    if (pSVar43 != (STranslationWidgetPicker *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar43->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pSVar43->field_0x8 + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar43->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pSVar43->field_0x8 + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar13 = true;
    *puVar34 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar36 = FDelegateHandle::GenerateNewID();
    puVar34[2] = uVar36;
    *puVar34 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSTranslationWidgetPicker___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar34[3] = local_res18;
    puVar34[4] = pSVar43;
    if (pSVar43 != (STranslationWidgetPicker *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar43->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pSVar43->field_0xc + 1);
      UNLOCK();
    }
    puVar34[5] = local_1af0.Data.AllocatorInstance.Data;
    puVar34[6] = CONCAT44(local_1af0.Data.ArrayMax,local_1af0.Data.ArrayNum);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar43);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16f0.SharedReferenceCount.ReferenceController);
  }
  if (local_1830.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1830.Accessor,&local_1830);
  }
  pIVar18 = FAppStyle::Get();
  puVar34 = (undefined8 *)
            (**(code **)((longlong)*pIVar18 + 0x48))
                      (pIVar18,local_1988,0,&FStyleDefaults::DefaultMargin,0);
  local_18c8 = *puVar34;
  uStack_18c0 = puVar34[1];
  local_18b8 = 1;
  local_18b0._16_8_ = 0;
  local_18b0._0_8_ = 0;
  local_18b0._8_8_ = 0;
  (pFVar30->_Padding).Value.Left = (float)(int)local_18c8;
  (pFVar30->_Padding).Value.Top = (float)(int)((ulonglong)local_18c8 >> 0x20);
  (pFVar30->_Padding).Value.Right = (float)(int)uStack_18c0;
  (pFVar30->_Padding).Value.Bottom = (float)(int)((ulonglong)uStack_18c0 >> 0x20);
  (pFVar30->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Padding).Getter,&local_18b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_18b0)
  ;
  FLLMScope::FLLMScope(&local_1acc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1980 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1978,&local_1980,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_1770,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0x56,local_1af5);
  FMemScope::~FMemScope(&local_1978);
  FLLMScope::~FLLMScope(&local_1acc);
  pTVar38 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1770,&local_16e0,pFVar30);
  pTVar3 = (pTVar38->SharedReferenceCount).ReferenceController;
  local_18e8.Object = (SWidget *)pTVar38->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18e8.SharedReferenceCount.ReferenceController = pTVar3;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->field_0x218,&local_18e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1770._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1940.SharedReferenceCount.ReferenceController._4_4_,
                      local_1940.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1758._Widget.SharedReferenceCount.ReferenceController);
  SToolTip::FArguments::~FArguments(&local_cc0);
  SCheckBox::FArguments::~FArguments(&local_978);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (local_1970.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1970.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  return;
}

// IsChecked @ 146bb2860

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall STranslationWidgetPicker::IsChecked(STranslationWidgetPicker *this)

{
  return TranslationPickerManager::PickerWindow.Object != (SWindow *)0x0;
}

// OnCheckStateChanged @ 146bb4dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationWidgetPicker::OnCheckStateChanged(STranslationWidgetPicker *this,ECheckBoxState param_1)

{
  code *pcVar1;
  FSlateApplication *pFVar2;
  TSharedRef<SWindow,1> *pTVar3;
  TSharedRef<SWindow,1> local_18;
  
  if (TranslationPickerManager::PickerWindow.Object != (SWindow *)0x0) {
    if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
      pFVar2 = FSlateApplication::Get();
      pcVar1 = *(code **)(*(longlong *)pFVar2 + 0x140);
      pTVar3 = TSharedPtr<SWindow,1>::ToSharedRef(&TranslationPickerManager::PickerWindow,&local_18)
      ;
      (*pcVar1)(pFVar2,pTVar3);
    }
    TranslationPickerManager::ResetPickerWindow();
    return;
  }
  TranslationPickerManager::OpenPickerWindow();
  return;
}

