// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// Construct @ 14290abf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STextEntryPopup::Construct(STextEntryPopup *this,FArguments *param_1)

{
  TSharedPtr<SWidget,1> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SHorizontalBox *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  IErrorReportingWidget *pIVar8;
  SWidget *pSVar9;
  float fVar10;
  bool bVar11;
  FArguments *pFVar12;
  ISlateStyle *pIVar13;
  FName *pFVar14;
  FSlot *this_00;
  FSizeParam *pFVar15;
  FArguments *pFVar16;
  FSlot *pFVar17;
  FArguments *pFVar18;
  TSharedRef<STextBlock,1> *pTVar19;
  FArguments *pFVar20;
  TSharedRef<SEditableTextBox,1> *pTVar21;
  TSharedRef<SVerticalBox,1> *pTVar22;
  FArguments *pFVar23;
  TSharedRef<SHorizontalBox,1> *pTVar24;
  TSharedRef<SBorder,1> *pTVar25;
  SVerticalBox *this_01;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar26;
  FSlotArguments *pFVar27;
  TSharedRef<SWidget,1> *pTVar28;
  undefined8 *puVar29;
  ulong64 uVar30;
  FSlot *pFVar31;
  longlong *this_02;
  STextEntryPopup *pSVar32;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1d58;
  T0RequiredArgs local_1d57 [3];
  FLLMScope local_1d54;
  FLLMScope local_1d50;
  FLLMScope local_1d4c;
  FLLMScope local_1d48;
  FLLMScope local_1d44;
  code *local_1d40;
  FSharedReferencer<1> FStack_1d38;
  bool local_1d30;
  bool local_1d2f;
  undefined1 local_1d28 [8];
  ForAnyElementType FStack_1d20;
  int local_1d18;
  float local_1d10;
  undefined1 local_1d0c;
  undefined1 local_1d08 [8];
  ForAnyElementType FStack_1d00;
  ulonglong local_1cf8;
  undefined1 local_1cf0;
  undefined1 local_1cef;
  undefined1 local_1ce8 [8];
  ForAnyElementType FStack_1ce0;
  ulonglong local_1cd8;
  float local_1cd0;
  undefined1 local_1ccc;
  undefined1 local_1cc8 [8];
  ForAnyElementType FStack_1cc0;
  int local_1cb8;
  SBorder *local_1cb0;
  TReferenceControllerBase<1> *pTStack_1ca8;
  FSlateBrush *local_1ca0;
  undefined1 local_1c98;
  undefined1 local_1c90 [8];
  ForAnyElementType FStack_1c88;
  ulonglong local_1c80;
  FText local_1c78;
  bool local_1c68;
  undefined1 local_1c60 [8];
  ForAnyElementType FStack_1c58;
  ulonglong local_1c50;
  FText local_1c48;
  bool local_1c38;
  undefined1 local_1c30 [8];
  ForAnyElementType FStack_1c28;
  ulonglong local_1c20;
  FText local_1c18;
  bool local_1c08;
  undefined1 local_1c00 [8];
  ForAnyElementType FStack_1bf8;
  int local_1bf0;
  SWidget *local_1be8;
  TReferenceControllerBase<1> *pTStack_1be0;
  longlong local_1bd8;
  TReferenceControllerBase<1> *pTStack_1bd0;
  SEditableTextBox *local_1bc8;
  FSharedReferencer<1> local_1bc0;
  undefined8 local_1bb8;
  FSharedReferencer<1> local_1bb0;
  undefined8 local_1ba8;
  FSharedReferencer<1> local_1ba0;
  undefined1 local_1b98 [8];
  FDelegateAllocation local_1b90;
  undefined1 local_1b80 [4];
  undefined1 local_1b7c [4];
  undefined1 local_1b78 [8];
  FSlot *local_1b70;
  FSlot *local_1b68;
  FName local_1b60;
  FMemScope local_1b58;
  FName local_1b50;
  FMemScope local_1b48;
  TReferenceControllerBase<1> *local_1b40;
  FMemScope local_1b38;
  FArguments *local_1b30;
  FName local_1b28;
  undefined8 local_1b20;
  FSharedReferencer<1> FStack_1b18;
  FArguments *local_1b10;
  FMemScope local_1b08;
  FName local_1b00;
  FMemScope local_1af8;
  FName local_1af0;
  FSlot *local_1ae8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1ae0;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_1ac8;
  TSharedRef<FActiveTimerHandle,1> local_1ab0;
  FDestructionSentinel local_1aa0;
  FDestructionSentinel local_1a88;
  FDestructionSentinel local_1a70;
  FDestructionSentinel local_1a58;
  FDestructionSentinel local_1a40;
  FDestructionSentinel local_1a28;
  FDestructionSentinel local_1a10;
  FDestructionSentinel local_19f8;
  FDestructionSentinel local_19e0;
  FDelegateAllocation *local_19c8;
  SVerticalBox *local_19c0;
  TReferenceControllerBase<1> *pTStack_19b8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_19b0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1998;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1980;
  FName local_1968;
  TSharedRef<STextBlock,1> local_1960;
  TSharedRef<SEditableTextBox,1> local_1950;
  undefined1 local_1940 [8];
  TReferenceControllerBase<1> *local_1938;
  TSharedRef<SWidget,1> local_1930;
  TSharedRef<SVerticalBox,1> local_1920;
  TSharedRef<SHorizontalBox,1> local_1910;
  TSharedRef<SBorder,1> local_1900;
  undefined1 local_18f0 [16];
  undefined1 local_18e0 [32];
  undefined1 local_18c0 [24];
  undefined1 local_18a8 [16];
  undefined1 local_1898 [32];
  undefined1 local_1878 [24];
  undefined1 local_1860 [16];
  undefined1 local_1850 [32];
  undefined1 local_1830 [24];
  undefined8 *local_1818;
  SVerticalBox *local_1810;
  FSharedReferencer<1> local_1808 [4];
  undefined1 local_17e8 [40];
  FSlotArgumentsMixin local_17c0;
  undefined8 *local_1730;
  SEditableTextBox *local_1728;
  FSharedReferencer<1> local_1720 [4];
  undefined1 local_1700 [40];
  FSlotArgumentsMixin local_16d8;
  undefined8 *local_1648;
  STextBlock *local_1640;
  FSharedReferencer<1> local_1638 [4];
  undefined1 local_1618 [40];
  FSlotArgumentsMixin local_15f0;
  FArguments local_1560;
  FArguments local_1358;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_1150;
  FArguments local_1050;
  FArguments local_c70;
  FArguments local_718;
  undefined8 uStack_48;
  
  uStack_48 = 0x14290ac13;
  pFVar31 = (FSlot *)0x0;
  pTVar1 = &this->WidgetWithDefaultFocus;
  local_res10[0] = 0;
  local_1b20 = 0;
  FStack_1b18.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<SWidget,1> *)&local_1b20) {
    pTVar1->Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetWithDefaultFocus).SharedReferenceCount,&FStack_1b18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1b18.ReferenceController);
  pFVar12 = SBorder::FArguments::FArguments(&local_1050);
  pIVar13 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar13 + 0x50);
  pFVar14 = ::FName::FName(&local_1968,"PopupText.Background");
  local_1ca0 = (FSlateBrush *)(*pcVar2)(pIVar13,*pFVar14);
  local_1c98 = 1;
  local_1c80 = 0;
  local_1c90 = (undefined1  [8])0x0;
  FStack_1c88.Data = (FScriptContainerElement *)0x0;
  (pFVar12->_BorderImage).Value = local_1ca0;
  (pFVar12->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c90,
             (FWriteAccessScope *)&local_1a70);
  if (((int)local_1c80 != 0) && (FStack_1c88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c88,0,0,0x10);
    local_1c80 = local_1c80 & 0xffffffff00000000;
  }
  if (local_1a70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a70.Accessor,&local_1a70);
  }
  if (FStack_1c88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c90);
  fVar10 = __real_41200000;
  local_1b30 = SBorder::FArguments::Padding(pFVar12,__real_41200000);
  local_1b10 = SHorizontalBox::FArguments::FArguments(&local_1358);
  this_00 = ::operator_new(0x58);
  local_1b70 = pFVar31;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_1b70 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1818,(FSlot *)&local_1b70);
  pFVar15 = (FSizeParam *)FAuto::FAuto((FAuto *)local_18f0);
  TOptional<FSizeParam>::operator=(&local_17c0._SizeParam,pFVar15);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_18c0);
  if ((void *)local_18c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_18c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_18c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_18e0);
  if ((void *)local_18e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_18e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_18e0);
  local_1cd0 = (param_1->_MaxWidth).Value;
  local_1ccc = (param_1->_MaxWidth).bIsSet;
  local_1cc8 = (undefined1  [8])0x0;
  FStack_1cc0.Data = (FScriptContainerElement *)0x0;
  local_1cb8 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1cc8,
             &(param_1->_MaxWidth).Getter);
  local_17c0._MaxSize.Value = local_1cd0;
  local_17c0._MaxSize.bIsSet = (bool)local_1ccc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_17c0._MaxSize.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1cc8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1cc8,
             (FWriteAccessScope *)&local_1a88);
  if ((local_1cb8 != 0) && (FStack_1cc0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1cc0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1cc0,0,0,0x10);
    local_1cb8 = 0;
  }
  if (local_1a88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a88.Accessor,&local_1a88);
  }
  if (FStack_1cc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1cc0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1cc8);
  pFVar16 = SVerticalBox::FArguments::FArguments(&local_1560);
  pFVar17 = ::operator_new(0x58);
  local_1b68 = pFVar31;
  if (pFVar17 != (FSlot *)0x0) {
    *(undefined8 *)pFVar17 = 0;
    *(undefined8 *)&pFVar17->field_0x8 = 0;
    *(undefined8 *)&pFVar17->field_0x10 = 0;
    *(undefined8 *)&pFVar17->field_0x18 = 0;
    *(undefined8 *)&pFVar17->field_0x20 = 0;
    *(undefined8 *)&pFVar17->field_0x28 = 0;
    *(undefined8 *)&pFVar17->field_0x30 = 0;
    *(undefined8 *)&pFVar17->field_0x38 = 0;
    *(undefined8 *)&pFVar17->field_0x40 = 0;
    *(undefined8 *)&pFVar17->field_0x48 = 0;
    *(undefined8 *)&pFVar17->field_0x50 = 0;
    local_1b68 = (FSlot *)SVerticalBox::FSlot::FSlot(pFVar17);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1648,(FSlot *)&local_1b68);
  pFVar15 = (FSizeParam *)FAuto::FAuto((FAuto *)local_18a8);
  TOptional<FSizeParam>::operator=(&local_15f0._SizeParam,pFVar15);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1878);
  if ((void *)local_1878._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1878._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1878);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1898);
  if ((void *)local_1898._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1898._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1898);
  pFVar18 = STextBlock::FArguments::FArguments(&local_c70);
  local_1c78.TextData.Reference = (param_1->_Label).TextData.Reference;
  if (local_1c78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c78.TextData.Reference + 8))
              (local_1c78.TextData.Reference,local_1b80);
  }
  local_1c78.Flags = (param_1->_Label).Flags;
  local_1c68 = true;
  local_1c50 = 0;
  local_1c60 = (undefined1  [8])0x0;
  FStack_1c58.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar18->_Text).Value,&local_1c78);
  (pFVar18->_Text).bIsSet = local_1c68;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c60,
             (FWriteAccessScope *)&local_1a58);
  if (((int)local_1c50 != 0) && (FStack_1c58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c58,0,0,0x10);
    local_1c50 = local_1c50 & 0xffffffff00000000;
  }
  if (local_1a58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a58.Accessor,&local_1a58);
  }
  if (FStack_1c58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c60);
  if (local_1c78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c78.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_1d54,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1b60 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1b58,&local_1b60,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1980,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextEntryPopup.cpp"
             ,0x1e,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope(&local_1b58);
  FLLMScope::~FLLMScope(&local_1d54);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1980,&local_1960,pFVar18);
  local_1640 = pTVar19->Object;
  local_1bb0.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
  if (local_1bb0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1bb0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1bb0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_1bb0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1bb0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1bb8 = 0;
  local_1b40 = local_1bb0.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1638,&local_1bb0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bb0.ReferenceController);
  local_1cb0 = (SBorder *)SVerticalBox::FArguments::operator+(pFVar16,(FSlotArguments *)&local_1648)
  ;
  pFVar17 = ::operator_new(0x58);
  local_1ae8 = pFVar31;
  if (pFVar17 != (FSlot *)0x0) {
    *(undefined8 *)pFVar17 = 0;
    *(undefined8 *)&pFVar17->field_0x8 = 0;
    *(undefined8 *)&pFVar17->field_0x10 = 0;
    *(undefined8 *)&pFVar17->field_0x18 = 0;
    *(undefined8 *)&pFVar17->field_0x20 = 0;
    *(undefined8 *)&pFVar17->field_0x28 = 0;
    *(undefined8 *)&pFVar17->field_0x30 = 0;
    *(undefined8 *)&pFVar17->field_0x38 = 0;
    *(undefined8 *)&pFVar17->field_0x40 = 0;
    *(undefined8 *)&pFVar17->field_0x48 = 0;
    *(undefined8 *)&pFVar17->field_0x50 = 0;
    local_1ae8 = (FSlot *)SVerticalBox::FSlot::FSlot(pFVar17);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1730,(FSlot *)&local_1ae8);
  pFVar15 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1860);
  TOptional<FSizeParam>::operator=(&local_16d8._SizeParam,pFVar15);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1830);
  if ((void *)local_1830._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1830._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1830);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1850);
  if ((void *)local_1850._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1850._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1850);
  pFVar20 = SEditableTextBox::FArguments::FArguments(&local_718);
  local_1d0c = 1;
  local_1d10 = fVar10;
  local_1cf8 = 0;
  local_1d08 = (undefined1  [8])0x0;
  FStack_1d00.Data = (FScriptContainerElement *)0x0;
  (pFVar20->_MinDesiredWidth).Value = fVar10;
  (pFVar20->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d08);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d08,
             (FWriteAccessScope *)&local_1a40);
  if (((int)local_1cf8 != 0) && (FStack_1d00.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d00.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d00,0,0,0x10);
    local_1cf8 = local_1cf8 & 0xffffffff00000000;
  }
  if (local_1a40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a40.Accessor,&local_1a40);
  }
  if (FStack_1d00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d00.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d08);
  local_1c48.TextData.Reference = (param_1->_DefaultText).TextData.Reference;
  if (local_1c48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c48.TextData.Reference + 8))
              (local_1c48.TextData.Reference,local_1b7c);
  }
  local_1c48.Flags = (param_1->_DefaultText).Flags;
  local_1c38 = true;
  local_1c20 = 0;
  local_1c30 = (undefined1  [8])0x0;
  FStack_1c28.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar20->_Text).Value,&local_1c48);
  (pFVar20->_Text).bIsSet = local_1c38;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c30,
             (FWriteAccessScope *)&local_1a28);
  if (((int)local_1c20 != 0) && (FStack_1c28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c28,0,0,0x10);
    local_1c20 = local_1c20 & 0xffffffff00000000;
  }
  if (local_1a28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a28.Accessor,&local_1a28);
  }
  if (FStack_1c28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c30);
  if (local_1c48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c48.TextData.Reference + 0x10))();
  }
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&pFVar20->_OnTextCommitted,&param_1->_OnTextCommitted);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar20->_OnTextChanged,&param_1->_OnTextChanged);
  TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar20->_OnVerifyTextChanged,&param_1->_OnVerifyTextChanged);
  local_1c18.TextData.Reference = (param_1->_HintText).Value.TextData.Reference;
  if (local_1c18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c18.TextData.Reference + 8))
              (local_1c18.TextData.Reference,local_1b78);
  }
  local_1c18.Flags = (param_1->_HintText).Value.Flags;
  local_1c08 = (param_1->_HintText).bIsSet;
  local_1c00 = (undefined1  [8])0x0;
  FStack_1bf8.Data = (FScriptContainerElement *)0x0;
  local_1bf0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c00,
             &(param_1->_HintText).Getter);
  FText::operator=(&(pFVar20->_HintText).Value,&local_1c18);
  (pFVar20->_HintText).bIsSet = local_1c08;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c00,
             (FWriteAccessScope *)&local_1a10);
  if ((local_1bf0 != 0) && (FStack_1bf8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1bf8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1bf8,0,0,0x10);
    local_1bf0 = 0;
  }
  if (local_1a10.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a10.Accessor,&local_1a10);
  }
  if (FStack_1bf8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1bf8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c00);
  if (local_1c18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c18.TextData.Reference + 0x10))();
  }
  local_1cf0 = param_1->_SelectAllTextWhenFocused;
  local_1cef = 1;
  local_1cd8 = 0;
  local_1ce8 = (undefined1  [8])0x0;
  FStack_1ce0.Data = (FScriptContainerElement *)0x0;
  (pFVar20->_SelectAllTextWhenFocused).Value = (bool)local_1cf0;
  (pFVar20->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar20->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ce8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ce8,
             (FWriteAccessScope *)&local_19f8);
  if (((int)local_1cd8 != 0) && (FStack_1ce0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ce0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ce0,0,0,0x10);
    local_1cd8 = local_1cd8 & 0xffffffff00000000;
  }
  if (local_19f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_19f8.Accessor,&local_19f8);
  }
  if (FStack_1ce0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ce0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ce8);
  local_1d30 = (param_1->_ClearKeyboardFocusOnCommit).Value;
  local_1d2f = (param_1->_ClearKeyboardFocusOnCommit).bIsSet;
  local_1d28 = (undefined1  [8])0x0;
  FStack_1d20.Data = (FScriptContainerElement *)0x0;
  local_1d18 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1d28,
             &(param_1->_ClearKeyboardFocusOnCommit).Getter);
  (pFVar20->_ClearKeyboardFocusOnCommit).Value = local_1d30;
  (pFVar20->_ClearKeyboardFocusOnCommit).bIsSet = local_1d2f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar20->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d28,
             (FWriteAccessScope *)&local_1aa0);
  if ((local_1d18 != 0) && (FStack_1d20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d20,0,0,0x10);
    local_1d18 = 0;
  }
  if (local_1aa0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1aa0.Accessor,&local_1aa0);
  }
  if (FStack_1d20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d28);
  FLLMScope::FLLMScope(&local_1d50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1af0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1af8,&local_1af0,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_1ac8,"SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextEntryPopup.cpp"
             ,0x24,local_res18);
  FMemScope::~FMemScope(&local_1af8);
  FLLMScope::~FLLMScope(&local_1d50);
  local_1bc8 = local_1ac8._Widget.Object;
  local_1bc0.ReferenceController = local_1ac8._Widget.SharedReferenceCount.ReferenceController;
  if (local_1ac8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1ac8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1ac8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<SWidget,1> *)&local_1bc8) {
    pTVar1->Object = (SWidget *)local_1ac8._Widget.Object;
    local_1bc8 = (SEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetWithDefaultFocus).SharedReferenceCount,&local_1bc0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bc0.ReferenceController);
  pTVar21 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1ac8,&local_1950,pFVar20);
  pTVar3 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_1728 = pTVar21->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1ba8 = 0;
  local_1ba0.ReferenceController = pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1720,&local_1ba0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ba0.ReferenceController);
  pFVar16 = SVerticalBox::FArguments::operator+
                      ((FArguments *)local_1cb0,(FSlotArguments *)&local_1730);
  FLLMScope::FLLMScope(&local_1d4c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1b00 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1b08,&local_1b00,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1ae0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextEntryPopup.cpp"
             ,0x1a,local_res20);
  FMemScope::~FMemScope(&local_1b08);
  FLLMScope::~FLLMScope(&local_1d4c);
  if (local_1ae0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1ae0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1ae0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_19c0 = (this->Box).Object;
  pTStack_19b8 = (this->Box).SharedReferenceCount.ReferenceController;
  (this->Box).Object = local_1ae0._Widget.Object;
  (this->Box).SharedReferenceCount.ReferenceController =
       local_1ae0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_19b8);
  pTVar22 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1ae0,&local_1920,pFVar16);
  pTVar4 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_1810 = pTVar22->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d40 = (code *)0x0;
  FStack_1d38.ReferenceController = pTVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1808,&FStack_1d38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1d38.ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(local_1b10,(FSlotArguments *)&local_1818);
  FLLMScope::FLLMScope(&local_1d48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1b28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1b38,&local_1b28,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1998,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextEntryPopup.cpp"
             ,0x15,&local_1d58);
  FMemScope::~FMemScope(&local_1b38);
  FLLMScope::~FLLMScope(&local_1d48);
  pTVar24 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1998,&local_1910,pFVar23);
  pFVar12 = local_1b30;
  pTVar5 = (pTVar24->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar24->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1be8 = (local_1b30->_Content).Widget.Object;
  pTStack_1be0 = (local_1b30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1b30->_Content).Widget.Object = (SWidget *)pSVar6;
  (local_1b30->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1be0);
  FLLMScope::FLLMScope(&local_1d44,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1b50 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1b48,&local_1b50,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_19b0,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextEntryPopup.cpp"
             ,0x11,local_1d57);
  FMemScope::~FMemScope(&local_1b48);
  FLLMScope::~FLLMScope(&local_1d44);
  pTVar25 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_19b0,&local_1900,pFVar12);
  this_02 = &this->_padding_;
  local_1cb0 = pTVar25->Object;
  pTVar7 = (pTVar25->SharedReferenceCount).ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_02);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_02);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1bd8 = this->_padding_;
  pTStack_1bd0 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)local_1cb0;
  this->_padding_ = (longlong)pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1bd0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_02);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1900.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1910.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1998._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1920.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ae0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1950.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ac8._Widget.SharedReferenceCount.ReferenceController);
  SEditableTextBox::FArguments::~FArguments(&local_718);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_16d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1700);
  if ((void *)local_1700._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1700._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1700);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1720[0].ReferenceController);
  if (local_1730 != (undefined8 *)0x0) {
    (**(code **)*local_1730)(local_1730,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1960.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1980._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_c70);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_15f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1618);
  if ((void *)local_1618._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1618._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1618);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1638[0].ReferenceController);
  if (local_1648 != (undefined8 *)0x0) {
    (**(code **)*local_1648)(local_1648,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1560._Slots.AllocatorInstance.Data,local_1560._Slots.ArrayNum);
  if ((FSlotArguments *)local_1560._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1560._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1560);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_17c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_17e8);
  if ((void *)local_17e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_17e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1808[0].ReferenceController);
  if (local_1818 != (undefined8 *)0x0) {
    (**(code **)*local_1818)(local_1818,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1358._Slots.AllocatorInstance.Data,local_1358._Slots.ArrayNum);
  if ((FSlotArguments *)local_1358._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1358._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1358);
  SBorder::FArguments::~FArguments(&local_1050);
  pTVar3 = (param_1->_ErrorReporting).SharedReferenceCount.ReferenceController;
  pIVar8 = (param_1->_ErrorReporting).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1cb0 = (SBorder *)(this->ErrorReporting).Object;
  pTStack_1ca8 = (this->ErrorReporting).SharedReferenceCount.ReferenceController;
  (this->ErrorReporting).Object = pIVar8;
  (this->ErrorReporting).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1ca8);
  if ((this->ErrorReporting).Object != (IErrorReportingWidget *)0x0) {
    this_01 = TSharedPtr<SVerticalBox,1>::operator->(&this->Box);
    pFVar26 = SVerticalBox::AddSlot(this_01,&local_1150);
    pFVar27 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)&pFVar26->_padding_)
    ;
    pFVar27 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar27->field_0x18,__real_40400000,0.0);
    if (((this->ErrorReporting).Object == (IErrorReportingWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar8 = (this->ErrorReporting).Object;
    pTVar28 = (TSharedRef<SWidget,1> *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,local_1940);
    TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar27,pTVar28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1938);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_1150);
  }
  if (param_1->_AutoFocus != false) {
    local_1b98 = (undefined1  [8])0x0;
    local_1b90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b90.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b98,
               (FWriteAccessScope *)&local_19e0);
    local_19c8 = &local_1b90;
    puVar29 = UE::Core::Private::DelegateAllocate(0x38,&local_1b90);
    pSVar32 = this;
    if (puVar29 != (undefined8 *)0x0) {
      local_1d40 = TickAutoFocus;
      FStack_1d38.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_1ab0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1930);
      pSVar32 = (STextEntryPopup *)(pTVar28->SharedReferenceCount).ReferenceController;
      pSVar9 = pTVar28->Object;
      if (pSVar32 != (STextEntryPopup *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar32->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pSVar32->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
        UNLOCK();
      }
      *puVar29 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar30 = FDelegateHandle::GenerateNewID();
      puVar29[2] = uVar30;
      *puVar29 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSTextEntryPopup___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar29[3] = pSVar9;
      puVar29[4] = pSVar32;
      if (pSVar32 != (STextEntryPopup *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar32->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar32->_padding_)[1] + 1);
        UNLOCK();
      }
      pFVar31 = (FSlot *)&DAT_00000007;
      puVar29[5] = local_1d40;
      puVar29[6] = FStack_1d38.ReferenceController;
    }
    if (((ulonglong)pFVar31 & 4) != 0) {
      pFVar31 = (FSlot *)(ulonglong)((uint)pFVar31 & 0xfffffffb);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar32);
    }
    if (((ulonglong)pFVar31 & 2) != 0) {
      pFVar31 = (FSlot *)(ulonglong)((uint)pFVar31 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar32);
    }
    if (((ulonglong)pFVar31 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1930.SharedReferenceCount.ReferenceController);
    }
    if (local_19e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_19e0.Accessor,&local_19e0);
    }
    SWidget::RegisterActiveTimer
              ((SWidget *)this,&local_1ab0,__real_3c83126f,
               (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *
               )local_1b98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_1ab0.SharedReferenceCount.ReferenceController._4_4_,
                        local_1ab0.SharedReferenceCount.ReferenceController._0_4_));
  }
  return;
}

// FocusDefaultWidget @ 142935b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STextEntryPopup::FocusDefaultWidget(STextEntryPopup *this)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  EVisibility EVar4;
  bool bVar5;
  FSlateApplication *pFVar6;
  ForElementType<FArrangedWidget> FVar7;
  undefined1 auStack_1a8 [32];
  TSharedRef<SWidget_const_,1> local_188;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FWidgetPath::FWidgetPath(&local_178);
  pFVar6 = FSlateApplication::Get();
  EVar4 = EVisibility::Visible;
  if ((this->WidgetWithDefaultFocus).Object == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (this->WidgetWithDefaultFocus).Object;
  pTVar2 = (this->WidgetWithDefaultFocus).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188.Object = pSVar1;
  local_188.SharedReferenceCount.ReferenceController = pTVar2;
  FSlateApplication::GeneratePathToWidgetChecked(pFVar6,&local_188,&local_178,EVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar6 = FSlateApplication::Get();
  (**(code **)(*(longlong *)pFVar6 + 0x148))(pFVar6,&local_178,2);
  if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar7 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar7 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar7,local_178.Widgets.Array.ArrayNum);
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  return;
}

// SetError @ 142990080

void __thiscall STextEntryPopup::SetError(STextEntryPopup *this,FString *param_1)

{
  byte *pbVar1;
  SVerticalBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  IErrorReportingWidget *pIVar4;
  code *pcVar5;
  FString *pFVar6;
  SErrorText *pSVar7;
  FSharedReferencer<1> FVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FSlot *this_00;
  FSlotArguments *pFVar13;
  FSlot *this_01;
  FSizeParam *pFVar14;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  FArguments *pFVar17;
  TSharedRef<SHorizontalBox,1> *pTVar18;
  T0RequiredArgs local_res8 [8];
  FString *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_818 [2];
  SErrorText *local_810;
  FSharedReferencer<1> local_808;
  SHorizontalBox *local_800;
  FSharedReferencer<1> local_7f8;
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> local_7f0;
  IErrorReportingWidget *local_7d8;
  FSharedReferencer<1> local_7d0;
  FSlot *local_7c8;
  FSlot *local_7c0;
  FName local_7b8;
  FMemScope local_7b0;
  FArguments *local_7a8;
  FName local_7a0;
  FMemScope local_798;
  FSlotArguments *local_790;
  TSharedRef<SHorizontalBox,1> local_788;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_778;
  undefined1 local_760 [16];
  undefined1 local_750 [32];
  undefined1 local_730 [24];
  undefined **local_718;
  undefined8 *local_710 [2];
  TReferenceControllerBase<1> *local_700;
  undefined1 local_6e0 [40];
  FSlotArgumentsMixin local_6b8;
  TPanelChildren<SBoxPanel::FSlot> *local_628;
  int local_620;
  undefined8 *local_618 [2];
  TReferenceControllerBase<1> *local_608;
  undefined1 local_600 [24];
  undefined1 local_5e8 [40];
  FSlotArgumentsMixin local_5c0;
  undefined1 local_530 [544];
  undefined1 local_310 [80];
  FSharedReferencer<1> local_2c0;
  undefined1 local_290 [32];
  undefined1 local_270 [24];
  FArguments local_258;
  
  local_res10 = param_1;
  if ((this->ErrorReporting).Object != (IErrorReportingWidget *)0x0) goto LAB_1429907df;
  if ((this->Box).Object == (SVerticalBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pSVar2 = (this->Box).Object;
  this_00 = ::operator_new(0x58);
  local_7c8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_7c8 = SVerticalBox::FSlot::FSlot(this_00);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_710,(FSlot *)&local_7c8);
  local_620 = -1;
  local_718 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_628 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar2->field_0x218;
  pFVar13 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_710);
  local_790 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar13->field_0x18,__real_40400000,0.0);
  local_7a8 = SHorizontalBox::FArguments::FArguments(&local_258);
  this_01 = ::operator_new(0x58);
  local_7c0 = (FSlot *)0x0;
  if (this_01 != (FSlot *)0x0) {
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined8 *)&this_01->field_0x28 = 0;
    *(undefined8 *)&this_01->field_0x30 = 0;
    *(undefined8 *)&this_01->field_0x38 = 0;
    *(undefined8 *)&this_01->field_0x40 = 0;
    *(undefined8 *)&this_01->field_0x48 = 0;
    *(undefined8 *)&this_01->field_0x50 = 0;
    local_7c0 = SHorizontalBox::FSlot::FSlot(this_01);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_618,(FSlot *)&local_7c0);
  pFVar14 = (FSizeParam *)FAuto::FAuto((FAuto *)local_760);
  TOptional<FSizeParam>::operator=(&local_5c0._SizeParam,pFVar14);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_730);
  if ((void *)local_730._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_730._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_730);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_750);
  if ((void *)local_750._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_750._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_750);
  pFVar15 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_600,__real_40400000,__real_3f800000);
  pFVar16 = SErrorText::FArguments::FArguments((FArguments *)local_530);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7b0,&local_7b8,true);
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>
            (&local_7f0,"SErrorText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextEntryPopup.cpp"
             ,0x6f,local_res8);
  FMemScope::~FMemScope(&local_7b0);
  FLLMScope::~FLLMScope(local_res20);
  FVar8.ReferenceController = local_7f0._Widget.SharedReferenceCount.ReferenceController;
  pSVar7 = local_7f0._Widget.Object;
  if (local_7f0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7f0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7f0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_7f0._Widget.Object == (SErrorText *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_7f0._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  SErrorText::Construct(local_7f0._Widget.Object,pFVar16);
  if (local_7f0._Widget.Object == (SErrorText *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((local_7f0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_7f0._Widget.Object)->_padding_ + 0x228))(local_7f0._Widget.Object);
    bVar12 = 0;
    if (cVar11 != '\0') goto LAB_142990387;
  }
  else {
LAB_142990387:
    bVar12 = 0x20;
  }
  *(byte *)&(local_7f0._Widget.Object)->_padding_ =
       (byte)(local_7f0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_7f0._Widget.Object)->_padding_ =
       (byte)(local_7f0._Widget.Object)->_padding_ | bVar12;
  if (local_7f0._Widget.Object == (SErrorText *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_7f0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_7f0._Widget.Object == (SErrorText *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar9.ReferenceController = local_7f0._Widget.SharedReferenceCount.ReferenceController;
  local_7f0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_7f0._Widget.Object = (SErrorText *)0x0;
  if (pSVar7 == (SErrorText *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_810 = pSVar7;
  local_808.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SErrorText **)&pFVar15->field_0x8 != &local_810) {
    *(SErrorText **)&pFVar15->field_0x8 = pSVar7;
    local_810 = (SErrorText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_808);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_808.ReferenceController);
  pFVar17 = SHorizontalBox::FArguments::operator+(local_7a8,pFVar15);
  FLLMScope::FLLMScope(local_818,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_798,&local_7a0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_778,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextEntryPopup.cpp"
             ,0x6a,local_res18);
  FMemScope::~FMemScope(&local_798);
  FLLMScope::~FLLMScope(local_818);
  pTVar18 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_778,&local_788,pFVar17);
  pTVar3 = (pTVar18->SharedReferenceCount).ReferenceController;
  local_800 = pTVar18->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7f8.ReferenceController = pTVar3;
  if ((SHorizontalBox **)&local_790->field_0x8 != &local_800) {
    *(SHorizontalBox **)&local_790->field_0x8 = local_800;
    local_800 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_790->field_0x10,&local_7f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_788.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_778._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
  if ((void *)local_270._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_270._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_270);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_290);
  if ((void *)local_290._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_290._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_290);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c0.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  if ((void *)local_310._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_310._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  if ((ITextData *)local_530._504_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_530._504_8_ + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_530);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e8);
  if ((void *)local_5e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_608);
  if (local_618[0] != (undefined8 *)0x0) {
    (**(code **)*local_618[0])(local_618[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  local_718 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_710[0] != (undefined8 *)0x0) {
    if (local_620 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_628,(FSlotArguments *)local_710);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_628,(FSlotArguments *)local_710,local_620);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_6b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6e0);
  if ((void *)local_6e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_700);
  if (local_710[0] != (undefined8 *)0x0) {
    (**(code **)*local_710[0])(local_710[0],1);
  }
  if (pSVar7 == (SErrorText *)0x0) {
    local_7d8 = (IErrorReportingWidget *)0x0;
  }
  else {
    local_7d8 = (IErrorReportingWidget *)&pSVar7->_padding_;
  }
  local_7d0.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ErrorReporting != (TSharedPtr<IErrorReportingWidget,1> *)&local_7d8) {
    (this->ErrorReporting).Object = local_7d8;
    local_7d8 = (IErrorReportingWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ErrorReporting).SharedReferenceCount,&local_7d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
LAB_1429907df:
  pFVar6 = local_res10;
  if ((this->ErrorReporting).Object == (IErrorReportingWidget *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar4 = (this->ErrorReporting).Object;
                    /* WARNING: Could not recover jumptable at 0x000142990826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,pFVar6);
  return;
}

// SetError @ 142990830

void __thiscall STextEntryPopup::SetError(STextEntryPopup *this,FText *param_1)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_1);
  SetError(this,pFVar1);
  return;
}

// TickAutoFocus @ 1429ab9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
STextEntryPopup::TickAutoFocus(STextEntryPopup *this,double param_1,float param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  EVisibility EVar4;
  bool bVar5;
  EActiveTimerReturnType EVar6;
  char cVar7;
  FSlateApplication *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ForElementType<FArrangedWidget> FVar10;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  longlong local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  SWidget *local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  TSharedRef<SWidget_const_,1> local_1a8;
  TSharedRef<SWidget,1> local_198;
  FWidgetPath local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar8 = FSlateApplication::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar8 + 0x28);
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_198);
  local_1b8 = pTVar9->Object;
  local_1b0 = (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_1b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1b0->SharedReferenceCount = (atomic<int>)((int)local_1b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar8,&local_1d8,&local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  if (local_1d8 != 0) {
    pFVar8 = FSlateApplication::Get();
    pcVar1 = *(code **)(*(longlong *)pFVar8 + 0xf8);
    if (local_1d8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
    }
    pTVar2 = local_1d0;
    if (local_1d0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1d0->SharedReferenceCount = (atomic<int>)((int)local_1d0->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_1d8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
    }
    local_1c8 = local_1d8;
    local_1c0 = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar7 = (*pcVar1)(pFVar8,&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (cVar7 == '\0') {
      EVar6 = Continue;
      goto LAB_1429abc18;
    }
    FWidgetPath::FWidgetPath(&local_188);
    pFVar8 = FSlateApplication::Get();
    EVar4 = EVisibility::Visible;
    if ((this->WidgetWithDefaultFocus).Object == (SWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
    }
    pTVar2 = (this->WidgetWithDefaultFocus).SharedReferenceCount.ReferenceController;
    pSVar3 = (this->WidgetWithDefaultFocus).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar3 == (SWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a8.Object = pSVar3;
    local_1a8.SharedReferenceCount.ReferenceController = pTVar2;
    FSlateApplication::GeneratePathToWidgetChecked(pFVar8,&local_1a8,&local_188,EVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar8 = FSlateApplication::Get();
    (**(code **)(*(longlong *)pFVar8 + 0x148))(pFVar8,&local_188,2);
    if (local_188.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_188.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar10 = (ForElementType<FArrangedWidget>)&local_188.Widgets.Array;
    if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = local_188.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_188.Widgets.Array.ArrayNum);
    if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_188.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  EVar6 = Stop;
LAB_1429abc18:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d0);
  return EVar6;
}

