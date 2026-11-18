// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 14

// ~SInterchangeGenericAssetSkeletonConflictWidget @ 14e76bd90

void __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::~SInterchangeGenericAssetSkeletonConflictWidget
          (SInterchangeGenericAssetSkeletonConflictWidget *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CompareTree).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
            ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
             (this->Joints).AllocatorInstance.Data,(this->Joints).ArrayNum);
  pFVar1 = (this->Joints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->AssetReferencingSkeleton).AllocatorInstance.Data,
             (this->AssetReferencingSkeleton).ArrayNum);
  pFVar1 = (this->AssetReferencingSkeleton).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14e788190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::Construct
          (SInterchangeGenericAssetSkeletonConflictWidget *this,FArguments *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  TReferenceControllerBase<1> *pTVar10;
  float fVar11;
  SSplitter *pSVar12;
  FSharedReferencer<1> FVar13;
  FArguments *pFVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  FSlotArguments *pFVar18;
  FArguments *pFVar19;
  FName *pFVar20;
  ISlateStyle *pIVar21;
  FArguments *pFVar22;
  FArguments *pFVar23;
  FSlotArguments *pFVar24;
  TSharedRef<SVerticalBox,1> *pTVar25;
  TSharedRef<SBorder,1> *pTVar26;
  FSizeParam *pFVar27;
  FSlot *this_00;
  FSlot *pFVar28;
  FSlotArguments *pFVar29;
  FArguments *pFVar30;
  FText *pFVar31;
  TSharedRef<SButton,1> *pTVar32;
  FArguments *pFVar33;
  TSharedRef<SHorizontalBox,1> *pTVar34;
  TSharedRef<SBox,1> *pTVar35;
  FSlotArgumentsMixin *this_01;
  longlong *this_02;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1eb8;
  T0RequiredArgs local_1eb7;
  T0RequiredArgs local_1eb6;
  T0RequiredArgs local_1eb5;
  FLLMScope local_1eb4;
  FLLMScope local_1eb0;
  FLLMScope local_1eac;
  FLLMScope local_1ea8;
  FLLMScope local_1ea4;
  FLLMScope local_1ea0;
  FLLMScope local_1e9c;
  FName local_1e98;
  float local_1e90;
  undefined1 local_1e8c;
  undefined1 local_1e88 [8];
  ForAnyElementType FStack_1e80;
  ulonglong local_1e78;
  float local_1e70;
  undefined1 local_1e6c;
  undefined1 local_1e68 [8];
  ForAnyElementType FStack_1e60;
  ulonglong local_1e58;
  SButton *local_1e50;
  FSharedReferencer<1> local_1e48;
  SHorizontalBox *local_1e40;
  FSharedReferencer<1> local_1e38;
  FMemScope local_1e30;
  SVerticalBox *local_1e28;
  FMemScope FStack_1e20;
  FArguments *local_1e18;
  FArguments *local_1e10;
  SBorder *local_1e08;
  FSharedReferencer<1> local_1e00;
  FSlateBrush *local_1df8;
  undefined1 local_1df0;
  undefined1 local_1de8 [8];
  ForAnyElementType FStack_1de0;
  ulonglong local_1dd8;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_1dd0;
  FText local_1db8;
  bool local_1da8;
  undefined1 local_1da0 [8];
  ForAnyElementType FStack_1d98;
  ulonglong local_1d90;
  SWidget *local_1d88;
  FSharedReferencer<1> local_1d80;
  SWidget *local_1d78;
  FSharedReferencer<1> local_1d70;
  undefined8 local_1d68;
  FSharedReferencer<1> local_1d60;
  SVerticalBox *local_1d58;
  TReferenceControllerBase<1> *pTStack_1d50;
  FName local_1d48;
  TReferenceControllerBase<1> *pTStack_1d40;
  TSharedPtr<SWidget,1> local_1d38;
  TSharedPtr<SWidget,1> local_1d28;
  FSlot *local_1d18;
  FName local_1d10;
  FMemScope local_1d08;
  FName local_1d00;
  FMemScope local_1cf8;
  FName local_1cf0;
  FMemScope local_1ce8;
  FArguments *local_1ce0;
  FName local_1cd8;
  FMemScope local_1cd0;
  TReferenceControllerBase<1> *local_1cc8;
  TReferenceControllerBase<1> *local_1cc0;
  undefined4 local_1cb8 [2];
  FMemScope local_1cb0;
  FName local_1ca8;
  FArguments *local_1ca0;
  FName local_1c98;
  FMemScope local_1c90;
  TAttribute<float> local_1c88;
  TAttribute<float> local_1c68;
  FDestructionSentinel local_1c48;
  FDestructionSentinel local_1c30;
  FDestructionSentinel local_1c18;
  FDestructionSentinel local_1c00;
  FText local_1be8;
  TSharedRef<SBorder,1> local_1bd8;
  TSharedRef<SVerticalBox,1> local_1bc8;
  FName local_1bb8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1bb0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1b98;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1b80;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1b68;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1b50;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1b38;
  code *local_1b18;
  ulonglong uStack_1b10;
  TSharedRef<SBox,1> local_1b08;
  TSharedRef<SButton,1> local_1af8;
  TSharedRef<SVerticalBox,1> local_1ae8;
  TSharedRef<SHorizontalBox,1> local_1ad8;
  undefined1 local_1ac8 [16];
  undefined1 local_1ab8 [32];
  undefined1 local_1a98 [24];
  undefined1 local_1a80 [16];
  undefined1 local_1a70 [32];
  undefined1 local_1a50 [24];
  undefined8 *local_1a38 [2];
  TReferenceControllerBase<1> *local_1a28;
  undefined1 local_1a20 [24];
  undefined1 local_1a08 [40];
  FSlotArgumentsMixin local_19e0;
  undefined8 *local_1950 [2];
  TReferenceControllerBase<1> *local_1940;
  undefined1 local_1920 [40];
  FSlotArgumentsMixin local_18f8;
  undefined1 local_1868 [560];
  undefined1 local_1638 [24];
  undefined1 local_1620 [24];
  undefined1 local_1608 [24];
  undefined1 local_15f0 [24];
  FSlotArguments local_15d8;
  FSlotArguments local_1540;
  FArguments local_14a8;
  FArguments local_12a0;
  FArguments local_1098;
  FSlotArguments local_e90;
  FSlotArguments local_da8;
  FArguments local_cc0;
  FArguments local_980;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14e7881b3;
  this->bShowSectionFlag[0] = true;
  this->bShowSectionFlag[1] = true;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->AssetReferencingSkeleton,&param_1->_AssetReferencingSkeleton);
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->Joints,&param_1->_Joints);
  this->ReimportObject = param_1->_ReimportObject;
  ConstructSkeletonComparison(this,&local_1d28);
  ConstructSkeletonReference(this,&local_1d38);
  local_1ce0 = SBox::FArguments::FArguments(&local_cc0);
  local_1e10 = SVerticalBox::FArguments::FArguments(&local_1098);
  pFVar18 = SVerticalBox::Slot(&local_da8);
  local_1c68.Value = 1.0;
  local_1c68.bIsSet = true;
  local_1c68.Getter._0_8_ = 0;
  local_1c68.Getter._8_8_ = 0;
  local_1c68.Getter._16_8_ = 0;
  local_1e18 = (FArguments *)SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar18,&local_1c68);
  pFVar19 = SBorder::FArguments::FArguments(&local_980);
  local_1ca0 = pFVar19;
  pFVar20 = ::FName::FName(&local_1bb8,"ToolPanel.DarkGroupBorder");
  FVar3 = *pFVar20;
  pIVar21 = FAppStyle::Get();
  local_1df8 = (FSlateBrush *)(**(code **)((longlong)*pIVar21 + 0x50))(pIVar21,FVar3);
  local_1df0 = 1;
  local_1dd8 = 0;
  local_1de8 = (undefined1  [8])0x0;
  FStack_1de0.Data = (FScriptContainerElement *)0x0;
  (pFVar19->_BorderImage).Value = local_1df8;
  (pFVar19->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1de8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1de8,
             (FWriteAccessScope *)&local_1c00);
  if (((int)local_1dd8 != 0) && (FStack_1de0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1de0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1de0,0,0,0x10);
    local_1dd8 = local_1dd8 & 0xffffffff00000000;
  }
  if (local_1c00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c00.Accessor,&local_1c00);
  }
  if (FStack_1de0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1de0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1de8);
  pFVar22 = SVerticalBox::FArguments::FArguments(&local_12a0);
  pFVar18 = SVerticalBox::Slot(&local_e90);
  local_1c88.Value = 1.0;
  local_1c88.bIsSet = true;
  local_1c88.Getter._16_8_ = 0;
  local_1c88.Getter._0_8_ = 0;
  local_1c88.Getter._8_8_ = 0;
  pFVar18 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar18,&local_1c88);
  fVar11 = __real_40000000;
  pFVar18 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar18->field_0x18,__real_40000000);
  pFVar23 = SSplitter::FArguments::FArguments((FArguments *)local_1868);
  pFVar23->_Orientation = Orient_Vertical;
  pFVar23->_ResizeMode = Fill;
  pFVar24 = SSplitter::Slot(&local_1540);
  local_1e8c = 1;
  local_1e90 = __real_3f4ccccd;
  local_1e78 = 0;
  local_1e88 = (undefined1  [8])0x0;
  FStack_1e80.Data = (FScriptContainerElement *)0x0;
  (pFVar24->_Value).Value = __real_3f4ccccd;
  (pFVar24->_Value).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e88,
             (FWriteAccessScope *)&local_1c48);
  if (((int)local_1e78 != 0) && (FStack_1e80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e80,0,0,0x10);
    local_1e78 = local_1e78 & 0xffffffff00000000;
  }
  if (local_1c48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c48.Accessor,&local_1c48);
  }
  if (FStack_1e80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e88);
  if ((local_1d28.Object == (SWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar13.ReferenceController = local_1d28.SharedReferenceCount.ReferenceController;
  local_1cc0 = local_1d28.SharedReferenceCount.ReferenceController;
  if (local_1d28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_1d28.Object == (SWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_1d88 = local_1d28.Object;
  local_1d80.ReferenceController = FVar13.ReferenceController;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar24->_padding_ != &local_1d88) {
    pFVar24->_padding_ = (longlong)local_1d28.Object;
    local_1d88 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar24->_padding_,&local_1d80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d80.ReferenceController);
  pFVar23 = SSplitter::FArguments::operator+(pFVar23,pFVar24);
  pFVar24 = SSplitter::Slot(&local_15d8);
  local_1e6c = 1;
  local_1e70 = __real_3e4ccccd;
  local_1e58 = 0;
  local_1e68 = (undefined1  [8])0x0;
  FStack_1e60.Data = (FScriptContainerElement *)0x0;
  (pFVar24->_Value).Value = __real_3e4ccccd;
  (pFVar24->_Value).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e68,
             (FWriteAccessScope *)&local_1c30);
  if (((int)local_1e58 != 0) && (FStack_1e60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e60,0,0,0x10);
    local_1e58 = local_1e58 & 0xffffffff00000000;
  }
  if (local_1c30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c30.Accessor,&local_1c30);
  }
  if (FStack_1e60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e68);
  if ((local_1d38.Object == (SWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar13.ReferenceController = local_1d38.SharedReferenceCount.ReferenceController;
  local_1cc8 = local_1d38.SharedReferenceCount.ReferenceController;
  if (local_1d38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_1d38.Object == (SWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_1d78 = local_1d38.Object;
  local_1d70.ReferenceController = FVar13.ReferenceController;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar24->_padding_ != &local_1d78) {
    pFVar24->_padding_ = (longlong)local_1d38.Object;
    local_1d78 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar24->_padding_,&local_1d70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d70.ReferenceController);
  pFVar23 = SSplitter::FArguments::operator+(pFVar23,pFVar24);
  FLLMScope::FLLMScope(&local_1eb4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1cb0,&local_1e98,true);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
            (&local_1dd0,"SSplitter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x858,local_res10);
  FMemScope::~FMemScope(&local_1cb0);
  FLLMScope::~FLLMScope(&local_1eb4);
  pSVar12 = local_1dd0._Widget.Object;
  if ((local_1dd0._Widget.Object == (SSplitter *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1dd0._Widget.Object,(FSlateBaseNamedArgs *)pFVar23);
  SSplitter::Construct(local_1dd0._Widget.Object,pFVar23);
  if ((local_1dd0._Widget.Object == (SSplitter *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((local_1dd0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_1dd0._Widget.Object)->_padding_ + 0x228))
                       (local_1dd0._Widget.Object);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_14e78884f;
  }
  bVar17 = 0x20;
LAB_14e78884f:
  *(byte *)&(local_1dd0._Widget.Object)->_padding_ =
       (byte)(local_1dd0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1dd0._Widget.Object)->_padding_ =
       (byte)(local_1dd0._Widget.Object)->_padding_ | bVar17;
  if ((local_1dd0._Widget.Object == (SSplitter *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_1dd0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1dd0._Widget.Object == (SSplitter *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar13.ReferenceController = local_1dd0._Widget.SharedReferenceCount.ReferenceController;
  pFVar28 = (FSlot *)0x0;
  local_1dd0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1dd0._Widget.Object = (SSplitter *)0x0;
  if ((pSVar12 == (SSplitter *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_1d60.ReferenceController = FVar13.ReferenceController;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&pFVar18->field_0x8 != &local_1d68) {
    *(SSplitter **)&pFVar18->field_0x8 = pSVar12;
    local_1d68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->field_0x10,&local_1d60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d60.ReferenceController);
  pFVar22 = SVerticalBox::FArguments::operator+(pFVar22,pFVar18);
  FLLMScope::FLLMScope(&local_1eb0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1ca8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e30,&local_1ca8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1b38,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x853,local_res18);
  FMemScope::~FMemScope(&local_1e30);
  FLLMScope::~FLLMScope(&local_1eb0);
  pTVar25 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1b38,&local_1bc8,pFVar22);
  pFVar19 = local_1ca0;
  local_1e28 = pTVar25->Object;
  local_1e30 = (FMemScope)(pTVar25->SharedReferenceCount).ReferenceController;
  if (local_1e30 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_1e30 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_1e30 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_1e30 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_1e30 + 8) + 1);
    UNLOCK();
  }
  pTVar4 = (local_1ca0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1ca0->_Content).Widget.Object = (SWidget *)local_1e28;
  (local_1ca0->_Content).Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_1e30;
  FStack_1e20 = local_1e30;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(&local_1eac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1c98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c90,&local_1c98,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1b50,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x850,local_res20);
  FMemScope::~FMemScope(&local_1c90);
  FLLMScope::~FLLMScope(&local_1eac);
  pTVar26 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1b50,&local_1bd8,pFVar19);
  pFVar22 = local_1e18;
  pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_1e08 = pTVar26->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e00.ReferenceController = pTVar4;
  if ((SBorder **)&local_1e18->_padding_ != &local_1e08) {
    local_1e18->_padding_ = (longlong)local_1e08;
    local_1e08 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1e18->_padding_,&local_1e00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e00.ReferenceController);
  local_1e18 = SVerticalBox::FArguments::operator+(local_1e10,(FSlotArguments *)pFVar22);
  pFVar18 = SVerticalBox::Slot((FSlotArguments *)local_1950);
  pFVar27 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1ac8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar18->field_0x58,pFVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a98);
  if ((void *)local_1a98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ab8);
  if ((void *)local_1ab8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1ab8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ab8);
  puVar2 = &pFVar18->field_0x48;
  if (local_1cb8 != (undefined4 *)puVar2) {
    *(undefined4 *)puVar2 = 3;
    pFVar18->field_0x4c = 1;
  }
  this_01 = (FSlotArgumentsMixin *)&pFVar18->field_0x18;
  if (puVar2 == (undefined1 *)0x0) {
    this_01 = (FSlotArgumentsMixin *)&DAT_00000018;
  }
  pFVar18 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      (this_01,fVar11);
  local_1e10 = (FArguments *)SHorizontalBox::FArguments::FArguments(&local_14a8);
  this_00 = ::operator_new(0x58);
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
    pFVar28 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  local_1d18 = pFVar28;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1a38,(FSlot *)&local_1d18);
  pFVar27 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1a80);
  TOptional<FSizeParam>::operator=(&local_19e0._SizeParam,pFVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a50);
  if ((void *)local_1a50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a50);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a70);
  if ((void *)local_1a70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a70);
  pFVar29 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_1a20,fVar11,0.0);
  pFVar30 = SButton::FArguments::FArguments(&local_5a0);
  pFVar30->_HAlign = HAlign_Center;
  pFVar31 = FText::AsLocalizable_Advanced_LocText
                      (&local_1be8,L"SInterchangeGenericAssetSkeletonConflictWidget",
                       L"ConstructDoneButton",L"Done");
  FText::FText(&local_1db8,pFVar31);
  local_1da8 = true;
  local_1d90 = 0;
  local_1da0 = (undefined1  [8])0x0;
  FStack_1d98.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar30->_Text).Value,&local_1db8);
  (pFVar30->_Text).bIsSet = local_1da8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1da0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1da0,
             (FWriteAccessScope *)&local_1c18);
  if (((int)local_1d90 != 0) && (FStack_1d98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d98,0,0,0x10);
    local_1d90 = local_1d90 & 0xffffffff00000000;
  }
  if (local_1c18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c18.Accessor,&local_1c18);
  }
  if (FStack_1d98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1da0);
  if (local_1db8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1db8.TextData.Reference + 0x10))();
  }
  local_1e28 = (SVerticalBox *)OnDone;
  FStack_1e20 = (FMemScope)((ulonglong)FStack_1e20 & 0xffffffff00000000);
  local_1b18 = OnDone;
  uStack_1b10._0_1_ = FStack_1e20.Inner.bActive;
  uStack_1b10._1_3_ = FStack_1e20._1_3_;
  uStack_1b10._4_4_ = FStack_1e20.PrevTag;
  pFVar30 = SButton::FArguments::OnClicked<SInterchangeGenericAssetSkeletonConflictWidget>
                      (pFVar30,this,(pmf_6c60570b *)&local_1b18);
  FLLMScope::FLLMScope(&local_1ea8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1d10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1d08,&local_1d10,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1b68,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x874,&local_1eb8);
  FMemScope::~FMemScope(&local_1d08);
  FLLMScope::~FLLMScope(&local_1ea8);
  pTVar32 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1b68,&local_1af8,pFVar30);
  pTVar5 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_1e50 = pTVar32->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e48.ReferenceController = pTVar5;
  if ((SButton **)&pFVar29->field_0x8 != &local_1e50) {
    *(SButton **)&pFVar29->field_0x8 = local_1e50;
    local_1e50 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar29->field_0x10,&local_1e48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e48.ReferenceController);
  pFVar33 = SHorizontalBox::FArguments::operator+((FArguments *)local_1e10,pFVar29);
  FLLMScope::FLLMScope(&local_1ea4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1d00 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1cf8,&local_1d00,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1b80,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x86f,&local_1eb7);
  FMemScope::~FMemScope(&local_1cf8);
  FLLMScope::~FLLMScope(&local_1ea4);
  pTVar34 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1b80,&local_1ad8,pFVar33);
  pTVar6 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_1e40 = pTVar34->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e38.ReferenceController = pTVar6;
  if ((SHorizontalBox **)&pFVar18->field_0x8 != &local_1e40) {
    *(SHorizontalBox **)&pFVar18->field_0x8 = local_1e40;
    local_1e40 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->field_0x10,&local_1e38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e38.ReferenceController);
  pFVar22 = SVerticalBox::FArguments::operator+(local_1e18,pFVar18);
  FLLMScope::FLLMScope(&local_1ea0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1cf0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1ce8,&local_1cf0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1b98,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x84c,&local_1eb6);
  FMemScope::~FMemScope(&local_1ce8);
  FLLMScope::~FLLMScope(&local_1ea0);
  pTVar25 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1b98,&local_1ae8,pFVar22);
  pFVar14 = local_1ce0;
  pTVar7 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_1d58 = pTVar25->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (local_1ce0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1ce0->_Content).Widget.Object = (SWidget *)local_1d58;
  (local_1ce0->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  pTStack_1d50 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FLLMScope::FLLMScope(&local_1e9c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1cd8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1cd0,&local_1cd8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1bb0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x84a,&local_1eb5);
  FMemScope::~FMemScope(&local_1cd0);
  FLLMScope::~FLLMScope(&local_1e9c);
  pTVar35 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1bb0,&local_1b08,pFVar14);
  this_02 = &this->_padding_;
  local_1e98 = (FName)pTVar35->Object;
  pTVar8 = (pTVar35->SharedReferenceCount).ReferenceController;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_02);
  }
  else {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_02);
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  local_1d48 = local_1e98;
  this->_padding_ = (longlong)local_1e98;
  this->_padding_ = (longlong)pTVar8;
  pTStack_1d40 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_02);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bb0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ae8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b98._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ad8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b80._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1af8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b68._Widget.SharedReferenceCount.ReferenceController);
  if (local_1be8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1be8.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_5a0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_19e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a08);
  if ((void *)local_1a08._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a08._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a28);
  if (local_1a38[0] != (undefined8 *)0x0) {
    (**(code **)*local_1a38[0])(local_1a38[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_14a8._Slots.AllocatorInstance.Data,local_14a8._Slots.ArrayNum);
  if ((FSlotArguments *)local_14a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_14a8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_14a8);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_18f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1920);
  if ((void *)local_1920._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1920._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1920);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1940);
  if (local_1950[0] != (undefined8 *)0x0) {
    (**(code **)*local_1950[0])(local_1950[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b50._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1e30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b38._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1dd0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1cc8);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_15d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1cc0);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_1540);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15f0);
  if ((void *)local_15f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_15f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1608);
  if ((void *)local_1608._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1608._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1608);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1620);
  if ((void *)local_1620._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1620._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1620);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1638);
  if ((void *)local_1638._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1638._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1638);
  DestructItems<SSplitter::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1868._504_8_,local_1868._512_4_);
  if ((FSlotArguments *)local_1868._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_1868._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1868);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_e90);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_12a0._Slots.AllocatorInstance.Data,local_12a0._Slots.ArrayNum);
  if ((FSlotArguments *)local_12a0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_12a0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_12a0);
  SBorder::FArguments::~FArguments(&local_980);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_da8);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1098._Slots.AllocatorInstance.Data,local_1098._Slots.ArrayNum);
  if ((FSlotArguments *)local_1098._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1098._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1098);
  SBox::FArguments::~FArguments(&local_cc0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d28.SharedReferenceCount.ReferenceController);
  return;
}

// ConstructSkeletonComparison @ 14e78c2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::ConstructSkeletonComparison
          (SInterchangeGenericAssetSkeletonConflictWidget *this,
          TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TDelegate<ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  SWidget *pSVar4;
  FName FVar5;
  SImage *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  SBorder *pSVar14;
  TReferenceControllerBase<1> *pTVar15;
  code *pcVar16;
  bool bVar17;
  bool bVar18;
  ulonglong uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  FArguments *pFVar24;
  TAttribute<ESelectionMode::Type> *pTVar25;
  undefined8 *puVar26;
  TSharedRef<SWidget,1> *pTVar27;
  ulong64 uVar28;
  TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this_01;
  TSlateDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs>
  *this_02;
  TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1> *pTVar29
  ;
  FArguments *pFVar30;
  FName *pFVar31;
  ISlateStyle *pIVar32;
  FArguments *pFVar33;
  FSlotArguments *pFVar34;
  FArguments *pFVar35;
  FSlot *pFVar36;
  FSizeParam *pFVar37;
  FArguments *pFVar38;
  FButtonStyle *pFVar39;
  FArguments *pFVar40;
  TSharedRef<SImage,1> *pTVar41;
  TSharedRef<SButton,1> *pTVar42;
  FSlot *pFVar43;
  FArguments *pFVar44;
  TAttribute<FSlateFontInfo> *pTVar45;
  FText *pFVar46;
  TSharedRef<STextBlock,1> *pTVar47;
  TSharedRef<SHorizontalBox,1> *pTVar48;
  FArguments *pFVar49;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar50;
  FSlotArguments *pFVar51;
  FSlotArguments *pFVar52;
  FArguments *pFVar53;
  TSharedRef<SSeparator,1> *pTVar54;
  TSharedPtr<SWidget,1> *pTVar55;
  TSharedRef<SVerticalBox,1> *pTVar56;
  TSharedRef<SBorder,1> *pTVar57;
  TSharedRef<SBox,1> *pTVar58;
  FScriptContainerElement *pFVar59;
  FScriptContainerElement *pFVar60;
  FSlotArguments *pFVar61;
  TReferenceControllerBase<1> *pTVar62;
  TReferenceControllerBase<1> *local_res8;
  TReferenceControllerBase<1> *local_res10;
  EInterchangeSkeletonCompareSection local_res18 [8];
  T0RequiredArgs local_res20 [8];
  longlong lStack_48b0;
  T0RequiredArgs local_48a8;
  T0RequiredArgs local_48a7;
  T0RequiredArgs local_48a6;
  T0RequiredArgs local_48a5;
  T0RequiredArgs local_48a4;
  T0RequiredArgs local_48a3;
  T0RequiredArgs local_48a2;
  T0RequiredArgs local_48a1;
  T0RequiredArgs local_48a0;
  T0RequiredArgs local_489f;
  T0RequiredArgs local_489e;
  T0RequiredArgs local_489d;
  T0RequiredArgs local_489c;
  T0RequiredArgs local_489b [3];
  FLLMScope local_4898;
  FLLMScope local_4894;
  FLLMScope local_4890;
  FLLMScope local_488c;
  FLLMScope local_4888;
  FLLMScope local_4884;
  FLLMScope local_4880;
  FLLMScope local_487c;
  FLLMScope local_4878;
  FLLMScope local_4874;
  FLLMScope local_4870;
  FLLMScope local_486c;
  FLLMScope local_4868;
  FLLMScope local_4864;
  SHorizontalBox *local_4860;
  FSharedReferencer<1> local_4858;
  SButton *local_4850;
  FSharedReferencer<1> local_4848;
  FName local_4840;
  STextBlock *local_4838;
  FSharedReferencer<1> local_4830;
  SHorizontalBox *local_4828;
  FSharedReferencer<1> local_4820;
  Type local_4818 [2];
  SSeparator *local_4810;
  FSharedReferencer<1> local_4808;
  FArguments *local_4800;
  SWidget *local_47f8;
  TReferenceControllerBase<1> *pTStack_47f0;
  SBorder *local_47e8;
  TReferenceControllerBase<1> *pTStack_47e0;
  SVerticalBox *local_47d8;
  TReferenceControllerBase<1> *pTStack_47d0;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> local_47c8;
  undefined8 local_47b8;
  FSharedReferencer<1> local_47b0;
  undefined8 local_47a8;
  FSharedReferencer<1> local_47a0;
  SVerticalBox *local_4798;
  TReferenceControllerBase<1> *pTStack_4790;
  undefined2 local_4788;
  undefined1 local_4780 [24];
  FSlateBrush *local_4768;
  undefined1 local_4760;
  undefined1 local_4758 [8];
  void *pvStack_4750;
  undefined8 local_4748;
  undefined4 local_4740 [2];
  undefined4 local_4738 [2];
  undefined1 local_4730 [8];
  FSlot *local_4728;
  FName local_4720;
  FName local_4718;
  FMemScope local_4710;
  FName local_4708;
  FMemScope local_4700;
  FSlot *local_46f8;
  FName local_46f0;
  FMemScope local_46e8;
  FName local_46e0;
  FMemScope local_46d8;
  FSlotArguments *local_46d0;
  FName local_46c8;
  FMemScope local_46c0;
  FSlotArguments *local_46b8;
  FName local_46b0;
  FMemScope local_46a8;
  FName local_46a0;
  FMemScope local_4698;
  FMemScope local_4690;
  FName local_4688;
  FMemScope local_4680;
  FArguments *local_4678;
  FName local_4670;
  FMemScope local_4668;
  FArguments *local_4660;
  FName local_4658;
  FMemScope local_4650;
  FSlotArguments *local_4648;
  FArguments *local_4640;
  FName local_4638;
  FMemScope local_4630;
  FArguments *local_4628;
  FName local_4620;
  FMemScope local_4618;
  FName local_4610;
  TReferenceControllerBase<1> *local_4608;
  TReferenceControllerBase<1> *local_4600;
  TReferenceControllerBase<1> *local_45f8;
  TReferenceControllerBase<1> *local_45f0;
  TReferenceControllerBase<1> *local_45e8;
  TReferenceControllerBase<1> *local_45e0;
  FText local_45d8;
  TSharedRef<SImage,1> local_45c8;
  FMemScope local_45b8;
  undefined8 local_45b0;
  FSharedReferencer<1> FStack_45a8;
  FMargin local_45a0;
  undefined1 local_4590;
  undefined1 local_4588 [8];
  void *pvStack_4580;
  undefined8 local_4578;
  TAttribute<float> local_4570;
  TAttribute<float> local_4550;
  TAttribute<float> local_4530;
  TSharedPtr<SInterchangeGenericAssetSkeletonConflictWidget,1> local_4510;
  TSharedRef<SInterchangeGenericAssetSkeletonConflictWidget,1> local_4500;
  TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
  local_44f0;
  TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
  local_44e0;
  TSharedRef<SWidget,1> local_44d0;
  TSharedRef<SWidget,1> local_44c0;
  TAttribute<FSlateBrush_const_*> local_44b0;
  TAttribute<FText> local_4488;
  undefined1 local_4458 [24];
  FLinearColor_u_0 local_4440;
  ESlateColorStylingMode local_4430;
  EStyleColor EStack_442f;
  undefined2 uStack_442e;
  undefined1 local_442c;
  undefined8 local_4428;
  undefined8 uStack_4420;
  undefined8 local_4418;
  FDestructionSentinel local_4410;
  undefined1 *local_43f8;
  TAttribute<FText> local_43f0;
  TAttribute<FMargin> local_43c0;
  TAttribute<FText> local_4390;
  TSharedRef<SBox,1> local_4360;
  TSharedRef<SBorder,1> local_4350;
  TSharedRef<SVerticalBox,1> local_4340;
  TSharedRef<SBox,1> local_4330;
  TSharedRef<SBorder,1> local_4320;
  TSharedRef<SVerticalBox,1> local_4310;
  TSharedRef<SSeparator,1> local_4300;
  TSharedRef<SHorizontalBox,1> local_42f0;
  TSharedRef<STextBlock,1> local_42e0;
  TSharedRef<SButton,1> local_42d0;
  FText local_42c0;
  TSharedRef<SHorizontalBox,1> local_42b0;
  TSharedRef<STextBlock,1> local_42a0;
  FText local_4290;
  TSharedRef<SButton,1> local_4280;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4270;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4258;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4240;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4228;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4210;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_41f8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_41e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_41c8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_41b0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4198;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4180;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4168;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4150;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4138;
  FName local_4120;
  FName local_4118;
  FName local_4110;
  TSharedRef<SWidget,1> local_4108;
  code *local_40f8;
  longlong lStack_40f0;
  FName local_40e8;
  TSharedRef<SWidget,1> local_40e0;
  TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
  local_40d0;
  code *local_40b8;
  longlong lStack_40b0;
  code *local_40a8;
  longlong lStack_40a0;
  code *local_4098;
  longlong lStack_4090;
  code *local_4088;
  longlong lStack_4080;
  undefined1 local_4078 [16];
  undefined1 local_4068 [32];
  undefined1 local_4048 [24];
  undefined1 local_4030 [16];
  undefined1 local_4020 [32];
  undefined1 local_4000 [24];
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> local_3fe8;
  TSlateDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs>
  local_3fc8;
  undefined8 *local_3fb0;
  STextBlock *local_3fa8;
  FSharedReferencer<1> local_3fa0 [4];
  undefined1 local_3f80 [40];
  FSlotArgumentsMixin local_3f58;
  undefined8 *local_3ec8;
  SButton *local_3ec0;
  FSharedReferencer<1> local_3eb8 [4];
  undefined1 local_3e98 [40];
  FSlotArgumentsMixin local_3e70;
  undefined1 local_3de0 [32];
  FSlateFontInfo local_3dc0;
  FSlateFontInfo local_3d60;
  undefined8 *local_3d00 [2];
  TReferenceControllerBase<1> *local_3cf0;
  undefined1 local_3cd0 [40];
  FSlotArgumentsMixin local_3ca8;
  FSlotArguments local_3c18;
  FSlotArguments local_3b30;
  FArguments local_3a48;
  FArguments local_3840;
  FArguments local_3638;
  FArguments local_3430;
  FSlotArguments local_3228;
  FSlotArguments local_3140;
  FSlotArguments local_3058;
  FSlotArguments local_2f70;
  undefined1 local_2e88 [544];
  undefined1 local_2c68 [24];
  TAttribute<FSlateFontInfo> local_2c50;
  TAttribute<FSlateFontInfo> local_2bd0;
  FArguments local_2b50;
  FArguments local_28a8;
  FArguments local_2568;
  FArguments local_2228;
  FArguments local_1e48;
  FArguments local_1a68;
  FArguments local_1590;
  FArguments local_1050;
  FArguments local_b10;
  FArguments local_5b8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14e78c303;
  bVar18 = false;
  bVar17 = false;
  bVar23 = false;
  local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  FText::AsLocalizable_Advanced_LocText
            (&local_45d8,L"SInterchangeGenericAssetSkeletonConflictWidget",
             L"ConstructSkeletonComparison_SkeletonStatus",L"The skeleton has some conflicts");
  pFVar24 = STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments
            ::FArguments(&local_1a68);
  local_4818[0] = None;
  pTVar25 = TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
                      (local_3de0,local_4818);
  this_00 = &pTVar25->Getter;
  (pFVar24->_SelectionMode).Value = pTVar25->Value;
  (pFVar24->_SelectionMode).bIsSet = pTVar25->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar3 = *(void **)&(pTVar25->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  pFVar24->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  pFVar24->_TreeItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
  local_45b0 = 0;
  FStack_45a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar24->_TreeItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
       *)&local_45b0) {
    (pFVar24->_TreeItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar24->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_45a8)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_45a8.ReferenceController);
  pFVar24->_TreeItemsSource_ArrayPointer = &this->Joints;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnGenerateRow,
             (FWriteAccessScope *)&local_4410);
  local_43f8 = &(pFVar24->_OnGenerateRow).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_43f8);
  pTVar62 = local_res10;
  if (puVar26 != (undefined8 *)0x0) {
    lStack_48b0 = (ulonglong)local_45c8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4108);
    pTVar62 = (pTVar27->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar27->Object;
    if (pTVar62 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar62->SharedReferenceCount = (atomic<int>)((int)pTVar62->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar62->SharedReferenceCount = (atomic<int>)((int)pTVar62->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSInterchangeGenericAssetSkeletonConflictWidget___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = pSVar4;
    puVar26[4] = pTVar62;
    if (pTVar62 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar62->WeakReferenceCount = (atomic<int>)((int)pTVar62->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar18 = true;
    bVar17 = true;
    bVar23 = true;
    puVar26[5] = OnGenerateRowCompareTreeView;
    puVar26[6] = lStack_48b0;
  }
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar62);
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar62);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4108.SharedReferenceCount.ReferenceController);
  }
  if (local_4410.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4410.Accessor,&local_4410);
  }
  uVar19 = (ulonglong)local_45c8.SharedReferenceCount.ReferenceController._4_4_;
  lStack_48b0 = uVar19 << 0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnGetChildren,
             &local_3fe8.WriteScope);
  local_3fe8.Allocation = (FDelegateAllocation *)&(pFVar24->_OnGetChildren).field_0x8;
  this_01 = UE::Core::Private::DelegateAllocate(0x38,local_3fe8.Allocation);
  if (this_01 !=
      (TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
       *)0x0) {
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_40e0);
    TSharedRef<SInterchangeGenericAssetSkeletonConflictWidget,1>::
    TSharedRef<SInterchangeGenericAssetSkeletonConflictWidget,1><SWidget>
              (&local_4500,pTVar27,local_res10._0_1_);
    TSharedPtr<SInterchangeGenericAssetSkeletonConflictWidget,1>::
    TSharedPtr<SInterchangeGenericAssetSkeletonConflictWidget,1><SInterchangeGenericAssetSkeletonConflictWidget>
              (&local_4510,&local_4500);
    local_40f8 = OnGetChildrenRowCompareTreeView;
    lStack_40f0 = lStack_48b0;
    TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
    ::
    TBaseSPMethodDelegateInstance<0,SInterchangeGenericAssetSkeletonConflictWidget,1,void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy><>
              (this_01,&local_4510,(pmf_1d66be35 *)&local_40f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4510.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4500.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40e0.SharedReferenceCount.ReferenceController);
  }
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
  ~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>(&local_3fe8);
  this_02 = MakeTDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs>
                      (&local_3fc8,
                       "STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint>>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                       ,0x8bb,local_res20);
  pTVar29 = TSlateDecl<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T0RequiredArgs>
            ::operator<<=(this_02,&local_40d0,pFVar24);
  TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>::
  TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1><STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>
            (&local_44f0,pTVar29);
  TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>::
  operator=(&this->CompareTree,&local_44f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3fc8._Widget.SharedReferenceCount.ReferenceController);
  STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments::
  ~FArguments(&local_1a68);
  iVar2 = (this->Joints).ArrayNum;
  pFVar60 = (this->Joints).AllocatorInstance.Data;
  pFVar59 = pFVar60 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->Joints).ArrayNum != iVar2) {
      local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TCheckedPointerIterator<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar60 == pFVar59) break;
    pTVar62 = *(TReferenceControllerBase<1> **)(pFVar60 + 8);
    local_47c8.Object = *(FSkeletonJoint **)pFVar60;
    if (pTVar62 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar62->SharedReferenceCount = (atomic<int>)((int)pTVar62->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar62->SharedReferenceCount = (atomic<int>)((int)pTVar62->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_44e0.Object = (this->CompareTree).Object;
    local_44e0.SharedReferenceCount.ReferenceController =
         (this->CompareTree).SharedReferenceCount.ReferenceController;
    if (local_44e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_44e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_44e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_47c8.SharedReferenceCount.ReferenceController = pTVar62;
    UE::Interchange::Private::RecursivelyExpandTreeItem(&local_44e0,&local_47c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar62);
    pFVar60 = pFVar60 + 0x10;
  }
  local_4800 = SBox::FArguments::FArguments(&local_2568);
  pFVar30 = SBorder::FArguments::FArguments(&local_1e48);
  uVar21 = _UNK_15076be98;
  local_4590 = 1;
  pFVar43 = (FSlot *)0x0;
  local_4578 = 0;
  local_45a0.Left = ___xmm_40400000404000004040000040400000;
  local_45a0.Top = _UNK_15076be94;
  local_45a0.Right = _UNK_15076be98;
  local_45a0.Bottom = _UNK_15076be9c;
  local_4588 = (undefined1  [8])0x0;
  pvStack_4580 = (void *)0x0;
  fVar20 = _UNK_15076be94;
  (pFVar30->_Padding).Value.Left = ___xmm_40400000404000004040000040400000;
  uVar22 = _UNK_15076be98;
  (pFVar30->_Padding).Value.Top = fVar20;
  _UNK_15076be98 = (float)uVar21;
  _UNK_15076be9c = SUB84(uVar21,4);
  fVar20 = _UNK_15076be9c;
  (pFVar30->_Padding).Value.Right = _UNK_15076be98;
  _UNK_15076be98 = uVar22;
  (pFVar30->_Padding).Value.Bottom = fVar20;
  (pFVar30->_Padding).bIsSet = true;
  local_4628 = pFVar30;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4588);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4588);
  if (pvStack_4580 != (void *)0x0) {
    FMemory::Free(pvStack_4580);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4588);
  pFVar31 = ::FName::FName(&local_4118,"ToolPanel.GroupBorder");
  FVar5 = *pFVar31;
  pIVar32 = FAppStyle::Get();
  local_4768 = (FSlateBrush *)(**(code **)((longlong)*pIVar32 + 0x50))(pIVar32,FVar5,0);
  local_4760 = 1;
  local_4748 = 0;
  local_4758 = (undefined1  [8])0x0;
  pvStack_4750 = (void *)0x0;
  (pFVar30->_BorderImage).Value = local_4768;
  (pFVar30->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4758);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4758);
  if (pvStack_4750 != (void *)0x0) {
    FMemory::Free(pvStack_4750);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4758);
  pFVar33 = SVerticalBox::FArguments::FArguments(&local_3430);
  pFVar34 = SVerticalBox::Slot((FSlotArguments *)local_3d00);
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar34);
  fVar20 = __real_40000000;
  pFVar34 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,__real_40000000);
  pFVar35 = SHorizontalBox::FArguments::FArguments(&local_3638);
  pFVar36 = ::operator_new(0x58);
  local_4728 = pFVar43;
  if (pFVar36 != (FSlot *)0x0) {
    *(undefined8 *)pFVar36 = 0;
    *(undefined8 *)&pFVar36->field_0x8 = 0;
    *(undefined8 *)&pFVar36->field_0x10 = 0;
    *(undefined8 *)&pFVar36->field_0x18 = 0;
    *(undefined8 *)&pFVar36->field_0x20 = 0;
    *(undefined8 *)&pFVar36->field_0x28 = 0;
    *(undefined8 *)&pFVar36->field_0x30 = 0;
    *(undefined8 *)&pFVar36->field_0x38 = 0;
    *(undefined8 *)&pFVar36->field_0x40 = 0;
    *(undefined8 *)&pFVar36->field_0x48 = 0;
    *(undefined8 *)&pFVar36->field_0x50 = 0;
    local_4728 = SHorizontalBox::FSlot::FSlot(pFVar36);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_3ec8,(FSlot *)&local_4728);
  pFVar37 = (FSizeParam *)FAuto::FAuto((FAuto *)local_4078);
  TOptional<FSizeParam>::operator=(&local_3e70._SizeParam,pFVar37);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4048);
  if ((void *)local_4048._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4048._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4048);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4068);
  if ((void *)local_4068._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4068._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4068);
  pFVar38 = SButton::FArguments::FArguments(&local_1050);
  pFVar38->_HAlign = HAlign_Center;
  pFVar38->_VAlign = VAlign_Center;
  pFVar38->_IsFocusable = false;
  ::FName::FName(&local_4720,"NoBorder");
  pIVar32 = FAppStyle::Get();
  pFVar39 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar32 + 0xa0))(pIVar32,FButtonStyle::TypeName,local_4720,0,1);
  if (pFVar39 == (FButtonStyle *)0x0) {
    pFVar39 = FButtonStyle::GetDefault();
  }
  pFVar38->_ButtonStyle = pFVar39;
  lStack_48b0 = uVar19 << 0x20;
  local_40b8 = SetSectionVisible;
  lStack_40b0 = lStack_48b0;
  pFVar38 = SButton::FArguments::
            OnClicked<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection>
                      (pFVar38,this,(pmf_e662be6c *)&local_40b8,Skeleton);
  pFVar40 = SImage::FArguments::FArguments(&local_2b50);
  lStack_48b0 = uVar19 << 0x20;
  local_40a8 = GetCollapsableArrow;
  lStack_40a0 = lStack_48b0;
  pFVar40 = SImage::FArguments::
            Image<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection>
                      (pFVar40,this,(pmf_5046b25f *)&local_40a8,Skeleton);
  FLLMScope::FLLMScope(&local_4864,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4718 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4710,&local_4718,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_4150,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8dd,&local_48a8);
  FMemScope::~FMemScope(&local_4710);
  FLLMScope::~FLLMScope(&local_4864);
  pTVar41 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4150,&local_45c8,pFVar40);
  local_45e0 = (pTVar41->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar41->Object;
  if (local_45e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_45e0->SharedReferenceCount = (atomic<int>)((int)local_45e0->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_45e0->SharedReferenceCount = (atomic<int>)((int)local_45e0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_47f8 = (pFVar38->_Content).Widget.Object;
  pTStack_47f0 = (pFVar38->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar38->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar38->_Content).Widget.SharedReferenceCount.ReferenceController = local_45e0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_47f0);
  FLLMScope::FLLMScope(&local_4898,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4708 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4700,&local_4708,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_4168,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8d6,&local_48a7);
  FMemScope::~FMemScope(&local_4700);
  FLLMScope::~FLLMScope(&local_4898);
  pTVar42 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4168,&local_4280,pFVar38);
  local_3ec0 = pTVar42->Object;
  local_47b0.ReferenceController = (pTVar42->SharedReferenceCount).ReferenceController;
  if (local_47b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_47b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_47b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_47b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_47b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_47b8 = 0;
  local_45e8 = local_47b0.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_3eb8,&local_47b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_47b0.ReferenceController);
  pFVar35 = SHorizontalBox::FArguments::operator+(pFVar35,(FSlotArguments *)&local_3ec8);
  pFVar36 = ::operator_new(0x58);
  if (pFVar36 != (FSlot *)0x0) {
    *(undefined8 *)pFVar36 = 0;
    *(undefined8 *)&pFVar36->field_0x8 = 0;
    *(undefined8 *)&pFVar36->field_0x10 = 0;
    *(undefined8 *)&pFVar36->field_0x18 = 0;
    *(undefined8 *)&pFVar36->field_0x20 = 0;
    *(undefined8 *)&pFVar36->field_0x28 = 0;
    *(undefined8 *)&pFVar36->field_0x30 = 0;
    *(undefined8 *)&pFVar36->field_0x38 = 0;
    *(undefined8 *)&pFVar36->field_0x40 = 0;
    *(undefined8 *)&pFVar36->field_0x48 = 0;
    *(undefined8 *)&pFVar36->field_0x50 = 0;
    pFVar43 = SHorizontalBox::FSlot::FSlot(pFVar36);
  }
  local_46f8 = pFVar43;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_3fb0,(FSlot *)&local_46f8);
  pFVar37 = (FSizeParam *)FAuto::FAuto((FAuto *)local_4030);
  TOptional<FSizeParam>::operator=(&local_3f58._SizeParam,pFVar37);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4000);
  if ((void *)local_4000._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4000._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4000);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4020);
  if ((void *)local_4020._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4020._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4020);
  pFVar44 = STextBlock::FArguments::FArguments(&local_5b8);
  pFVar31 = ::FName::FName(&local_4110,"DetailsView.CategoryFontStyle");
  FVar5 = *pFVar31;
  pIVar32 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar32 + 0x88))(pIVar32,&local_3d60,FVar5,0);
  pTVar45 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2c50,&local_3d60);
  pFVar44 = STextBlock::FArguments::Font(pFVar44,pTVar45);
  pFVar46 = FText::AsLocalizable_Advanced_LocText
                      (&local_4290,L"SInterchangeGenericAssetSkeletonConflictWidget",
                       L"ConstructSkeletonComparison_SkeletonCompareHeader",L"Skeleton");
  FText::FText(&local_43f0.Value,pFVar46);
  local_43f0.bIsSet = true;
  local_43f0.Getter._16_8_ = 0;
  local_43f0.Getter._0_8_ = 0;
  local_43f0.Getter._8_8_ = 0;
  pFVar44 = STextBlock::FArguments::Text(pFVar44,&local_43f0);
  FLLMScope::FLLMScope(&local_4894,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_46f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_46e8,&local_46f0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4180,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8e3,&local_48a6);
  FMemScope::~FMemScope(&local_46e8);
  FLLMScope::~FLLMScope(&local_4894);
  pTVar47 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4180,&local_42a0,pFVar44);
  local_3fa8 = pTVar47->Object;
  local_47a0.ReferenceController = (pTVar47->SharedReferenceCount).ReferenceController;
  if (local_47a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_47a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_47a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_47a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_47a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_47a8 = 0;
  local_45f0 = local_47a0.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_3fa0,&local_47a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_47a0.ReferenceController);
  pFVar35 = SHorizontalBox::FArguments::operator+(pFVar35,(FSlotArguments *)&local_3fb0);
  FLLMScope::FLLMScope(&local_4890,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_46e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_46d8,&local_46e0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_4198,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8d2,&local_48a5);
  FMemScope::~FMemScope(&local_46d8);
  FLLMScope::~FLLMScope(&local_4890);
  pTVar48 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4198,&local_42b0,pFVar35);
  local_4860 = pTVar48->Object;
  local_4858.ReferenceController = (pTVar48->SharedReferenceCount).ReferenceController;
  if (local_4858.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4858.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4858.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_4858.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4858.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_45f8 = local_4858.ReferenceController;
  if ((SHorizontalBox **)&pFVar34->field_0x8 != &local_4860) {
    *(SHorizontalBox **)&pFVar34->field_0x8 = local_4860;
    local_4860 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,&local_4858);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4858.ReferenceController);
  local_4640 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
  pFVar34 = SVerticalBox::Slot(&local_3140);
  local_4570.Value = 1.0;
  local_4570.bIsSet = true;
  pFVar52 = (FSlotArguments *)0x0;
  local_4570.Getter._0_8_ = 0;
  local_4570.Getter._8_8_ = 0;
  local_4570.Getter._16_8_ = 0;
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar34,&local_4570);
  local_4648 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar34->field_0x18,fVar20);
  pFVar49 = SBox::FArguments::FArguments(&local_28a8);
  lStack_48b0 = uVar19 << 0x20;
  local_4098 = IsSectionVisible;
  lStack_4090 = lStack_48b0;
  local_res18[0] = Skeleton;
  local_4660 = pFVar49;
  pTVar50 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_4458
                       ,this,(pmf_aae925ec *)&local_4098,local_res18);
  local_4788 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4780,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar50);
  *(undefined1 *)&pFVar49->_padding_ = (undefined1)local_4788;
  *(undefined1 *)((longlong)&pFVar49->_padding_ + 1) = local_4788._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar49->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4780);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4780);
  if ((void *)local_4780._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4780._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4780);
  pFVar30 = SBorder::FArguments::FArguments(&local_2228);
  local_43c0.bIsSet = true;
  local_43c0.Getter._16_8_ = 0;
  local_43c0.Value.Left = ___xmm_40400000404000004040000040400000;
  local_43c0.Value.Top = _UNK_15076be94;
  local_43c0.Value.Right = _UNK_15076be98;
  local_43c0.Value.Bottom = _UNK_15076be9c;
  local_43c0.Getter._0_8_ = 0;
  local_43c0.Getter._8_8_ = 0;
  pFVar30 = SBorder::FArguments::Padding(pFVar30,&local_43c0);
  pFVar31 = ::FName::FName(&local_40e8,"ToolPanel.DarkGroupBorder");
  FVar5 = *pFVar31;
  pIVar32 = FAppStyle::Get();
  local_44b0.Value = (FSlateBrush *)(**(code **)((longlong)*pIVar32 + 0x50))(pIVar32,FVar5,0,0);
  local_44b0.bIsSet = true;
  local_44b0.Getter._16_8_ = 0;
  local_44b0.Getter._0_8_ = 0;
  local_44b0.Getter._8_8_ = 0;
  local_4678 = SBorder::FArguments::BorderImage(pFVar30,&local_44b0);
  local_4840 = (FName)SVerticalBox::FArguments::FArguments(&local_3a48);
  pFVar34 = SVerticalBox::Slot(&local_3228);
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar34);
  pFVar34 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,fVar20);
  pFVar35 = SHorizontalBox::FArguments::FArguments(&local_3840);
  pFVar43 = ::operator_new(0x58);
  local_46d0 = pFVar52;
  if (pFVar43 != (FSlot *)0x0) {
    *(undefined8 *)pFVar43 = 0;
    *(undefined8 *)&pFVar43->field_0x8 = 0;
    *(undefined8 *)&pFVar43->field_0x10 = 0;
    *(undefined8 *)&pFVar43->field_0x18 = 0;
    *(undefined8 *)&pFVar43->field_0x20 = 0;
    *(undefined8 *)&pFVar43->field_0x28 = 0;
    *(undefined8 *)&pFVar43->field_0x30 = 0;
    *(undefined8 *)&pFVar43->field_0x38 = 0;
    *(undefined8 *)&pFVar43->field_0x40 = 0;
    *(undefined8 *)&pFVar43->field_0x48 = 0;
    *(undefined8 *)&pFVar43->field_0x50 = 0;
    local_46d0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar43);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_3b30,(FSlot *)&local_46d0);
  pFVar51 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_3b30);
  pFVar38 = SButton::FArguments::FArguments(&local_1590);
  pFVar38->_HAlign = HAlign_Center;
  pFVar46 = FText::AsLocalizable_Advanced_LocText
                      (&local_42c0,L"SInterchangeGenericAssetMaterialConflictWidget",
                       L"SInterchangeGenericAssetMaterialConflic_ExpandToConflict",
                       L"Expand To Conflict");
  FText::FText(&local_4390.Value,pFVar46);
  local_4390.bIsSet = true;
  local_4390.Getter._16_8_ = 0;
  local_4390.Getter._0_8_ = 0;
  local_4390.Getter._8_8_ = 0;
  pFVar38 = SButton::FArguments::Text(pFVar38,&local_4390);
  lStack_48b0 = uVar19 << 0x20;
  local_4088 = OnExpandToConflict;
  lStack_4080 = lStack_48b0;
  pFVar38 = SButton::FArguments::OnClicked<SInterchangeGenericAssetSkeletonConflictWidget>
                      (pFVar38,this,(pmf_6c60570b *)&local_4088);
  FLLMScope::FLLMScope(&local_488c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_46c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_46c0,&local_46c8,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_41b0,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8fc,&local_48a4);
  FMemScope::~FMemScope(&local_46c0);
  FLLMScope::~FLLMScope(&local_488c);
  pTVar42 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_41b0,&local_42d0,pFVar38);
  local_4850 = pTVar42->Object;
  local_4848.ReferenceController = (pTVar42->SharedReferenceCount).ReferenceController;
  if (local_4848.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4848.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4848.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_4848.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4848.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4600 = local_4848.ReferenceController;
  if ((SButton **)&pFVar51->field_0x8 != &local_4850) {
    *(SButton **)&pFVar51->field_0x8 = local_4850;
    local_4850 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar51->field_0x10,&local_4848);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4848.ReferenceController);
  pFVar35 = SHorizontalBox::FArguments::operator+(pFVar35,pFVar51);
  pFVar43 = ::operator_new(0x58);
  local_46b8 = pFVar52;
  if (pFVar43 != (FSlot *)0x0) {
    *(undefined8 *)pFVar43 = 0;
    *(undefined8 *)&pFVar43->field_0x8 = 0;
    *(undefined8 *)&pFVar43->field_0x10 = 0;
    *(undefined8 *)&pFVar43->field_0x18 = 0;
    *(undefined8 *)&pFVar43->field_0x20 = 0;
    *(undefined8 *)&pFVar43->field_0x28 = 0;
    *(undefined8 *)&pFVar43->field_0x30 = 0;
    *(undefined8 *)&pFVar43->field_0x38 = 0;
    *(undefined8 *)&pFVar43->field_0x40 = 0;
    *(undefined8 *)&pFVar43->field_0x48 = 0;
    *(undefined8 *)&pFVar43->field_0x50 = 0;
    local_46b8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar43);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_3c18,(FSlot *)&local_46b8);
  local_4550.Value = 1.0;
  local_4550.Getter._16_8_ = 0;
  local_4550.bIsSet = true;
  local_4550.Getter._0_8_ = 0;
  local_4550.Getter._8_8_ = 0;
  pFVar51 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_3c18,&local_4550);
  if (local_4740 != (undefined4 *)&pFVar51->field_0x50) {
    *(undefined4 *)&pFVar51->field_0x50 = 2;
    pFVar51->field_0x54 = 1;
  }
  pFVar61 = pFVar52;
  if (pFVar51 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar61 = pFVar51;
  }
  puVar1 = &pFVar61->field_0x48;
  if (local_4738 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 1;
    pFVar61->field_0x4c = 1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    pFVar52 = pFVar61;
  }
  pFVar52 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar52->field_0x18,__real_40c00000,0.0);
  pFVar44 = STextBlock::FArguments::FArguments(&local_b10);
  ::FName::FName(&local_4120,"DetailsView.CategoryFontStyle");
  pIVar32 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar32 + 0x88))(pIVar32,&local_3dc0);
  pTVar45 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2bd0,&local_3dc0);
  pFVar44 = STextBlock::FArguments::Font(pFVar44,pTVar45);
  local_4488.Value.TextData.Reference = local_45d8.TextData.Reference;
  if (local_45d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_45d8.TextData.Reference + 8))
              (local_45d8.TextData.Reference,local_4730);
  }
  local_4488.Value.Flags = local_45d8.Flags;
  local_4488.Getter._16_8_ = 0;
  local_4488.bIsSet = true;
  local_4488.Getter._0_8_ = 0;
  local_4488.Getter._8_8_ = 0;
  pFVar44 = STextBlock::FArguments::Text(pFVar44,&local_4488);
  local_4430 = SInterchangeGenericAssetMaterialConflictWidget::SlateColorFullConflict.ColorUseRule;
  EStack_442f = SInterchangeGenericAssetMaterialConflictWidget::SlateColorFullConflict.ColorTableId;
  uStack_442e = SInterchangeGenericAssetMaterialConflictWidget::SlateColorFullConflict._18_2_;
  local_442c = 1;
  local_4440 = SInterchangeGenericAssetMaterialConflictWidget::SlateColorFullConflict.SpecifiedColor
               .field0_0x0;
  local_4418 = 0;
  local_4428 = 0;
  uStack_4420 = 0;
  pFVar44 = STextBlock::FArguments::ColorAndOpacity
                      (pFVar44,(TAttribute<FSlateColor> *)&local_4440._s_0);
  FLLMScope::FLLMScope(&local_4888,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_46b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_46a8,&local_46b0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_41c8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x907,&local_48a3);
  FMemScope::~FMemScope(&local_46a8);
  FLLMScope::~FLLMScope(&local_4888);
  pTVar47 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_41c8,&local_42e0,pFVar44);
  local_4838 = pTVar47->Object;
  local_4830.ReferenceController = (pTVar47->SharedReferenceCount).ReferenceController;
  if (local_4830.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4830.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4830.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_4830.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4830.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4608 = local_4830.ReferenceController;
  if ((STextBlock **)&pFVar52->field_0x8 != &local_4838) {
    *(STextBlock **)&pFVar52->field_0x8 = local_4838;
    local_4838 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar52->field_0x10,&local_4830);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4830.ReferenceController);
  pFVar35 = SHorizontalBox::FArguments::operator+(pFVar35,pFVar52);
  FLLMScope::FLLMScope(&local_4884,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_46a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4698,&local_46a0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_41e0,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8f8,&local_48a2);
  FMemScope::~FMemScope(&local_4698);
  FLLMScope::~FLLMScope(&local_4884);
  pTVar48 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_41e0,&local_42f0,pFVar35);
  pTVar62 = (pTVar48->SharedReferenceCount).ReferenceController;
  local_4828 = pTVar48->Object;
  if (pTVar62 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar62->SharedReferenceCount = (atomic<int>)((int)pTVar62->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar62->SharedReferenceCount = (atomic<int>)((int)pTVar62->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4820.ReferenceController = pTVar62;
  if ((SHorizontalBox **)&pFVar34->field_0x8 != &local_4828) {
    *(SHorizontalBox **)&pFVar34->field_0x8 = local_4828;
    local_4828 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,&local_4820);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4820.ReferenceController);
  pFVar33 = SVerticalBox::FArguments::operator+((FArguments *)local_4840,pFVar34);
  pFVar34 = SVerticalBox::Slot(&local_2f70);
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar34);
  pFVar34 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,fVar20);
  pFVar53 = SSeparator::FArguments::FArguments((FArguments *)local_2e88);
  pFVar53->_Orientation = Orient_Horizontal;
  FLLMScope::FLLMScope(&local_4880,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4840 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4690,&local_4840,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (&local_41f8,"SSeparator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x911,&local_48a1);
  FMemScope::~FMemScope(&local_4690);
  FLLMScope::~FLLMScope(&local_4880);
  pTVar54 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_41f8,&local_4300,pFVar53);
  pTVar7 = (pTVar54->SharedReferenceCount).ReferenceController;
  local_4810 = pTVar54->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4808.ReferenceController = pTVar7;
  if ((SSeparator **)&pFVar34->field_0x8 != &local_4810) {
    *(SSeparator **)&pFVar34->field_0x8 = local_4810;
    local_4810 = (SSeparator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,&local_4808);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4808.ReferenceController);
  pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
  pFVar34 = SVerticalBox::Slot(&local_3058);
  local_4530.Value = 1.0;
  local_4530.bIsSet = true;
  local_4530.Getter._16_8_ = 0;
  local_4530.Getter._0_8_ = 0;
  local_4530.Getter._8_8_ = 0;
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar34,&local_4530);
  pFVar34 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,fVar20);
  if (((this->CompareTree).Object ==
       (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar23)) {
    pcVar16 = (code *)swi(3);
    pTVar55 = (TSharedPtr<SWidget,1> *)(*pcVar16)();
    return pTVar55;
  }
  pTVar8 = (this->CompareTree).SharedReferenceCount.ReferenceController;
  pSVar9 = (this->CompareTree).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar9 == (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0)
     && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar23)) {
    pcVar16 = (code *)swi(3);
    pTVar55 = (TSharedPtr<SWidget,1> *)(*pcVar16)();
    return pTVar55;
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_44d0.Object = (SWidget *)pSVar9;
  local_44d0.SharedReferenceCount.ReferenceController = pTVar8;
  pFVar34 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar34,&local_44d0);
  pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
  FLLMScope::FLLMScope(&local_487c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4688 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4680,&local_4688,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_4210,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8f3,&local_48a0);
  FMemScope::~FMemScope(&local_4680);
  FLLMScope::~FLLMScope(&local_487c);
  pTVar56 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4210,&local_4310,pFVar33);
  pFVar30 = local_4678;
  pTVar10 = (pTVar56->SharedReferenceCount).ReferenceController;
  local_4798 = pTVar56->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (local_4678->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_4678->_Content).Widget.Object = (SWidget *)local_4798;
  (local_4678->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar10;
  pTStack_4790 = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FLLMScope::FLLMScope(&local_4878,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4670 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4668,&local_4670,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_4228,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8ef,&local_489f);
  FMemScope::~FMemScope(&local_4668);
  FLLMScope::~FLLMScope(&local_4878);
  pTVar57 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4228,&local_4320,pFVar30);
  pFVar49 = local_4660;
  pTVar11 = (pTVar57->SharedReferenceCount).ReferenceController;
  local_47e8 = pTVar57->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (local_4660->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_4660->_Content).Widget.Object = (SWidget *)local_47e8;
  (local_4660->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar11;
  pTStack_47e0 = pTVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  FLLMScope::FLLMScope(&local_4874,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4658 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4650,&local_4658,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_4138,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8ec,&local_489e);
  FMemScope::~FMemScope(&local_4650);
  FLLMScope::~FLLMScope(&local_4874);
  pTVar58 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4138,&local_4330,pFVar49);
  local_44c0.Object = (SWidget *)pTVar58->Object;
  local_res8 = (pTVar58->SharedReferenceCount).ReferenceController;
  if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_44c0.SharedReferenceCount.ReferenceController = local_res8;
  pFVar34 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4648,&local_44c0);
  pFVar33 = SVerticalBox::FArguments::operator+(local_4640,pFVar34);
  FLLMScope::FLLMScope(&local_4870,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4638 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4630,&local_4638,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_4240,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8cd,&local_489d);
  FMemScope::~FMemScope(&local_4630);
  FLLMScope::~FLLMScope(&local_4870);
  pTVar56 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4240,&local_4340,pFVar33);
  pFVar30 = local_4628;
  pTVar12 = (pTVar56->SharedReferenceCount).ReferenceController;
  local_47d8 = pTVar56->Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (local_4628->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_4628->_Content).Widget.Object = (SWidget *)local_47d8;
  (local_4628->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar12;
  pTStack_47d0 = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  FLLMScope::FLLMScope(&local_486c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4620 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4618,&local_4620,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_4258,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8c9,&local_489c);
  FMemScope::~FMemScope(&local_4618);
  FLLMScope::~FLLMScope(&local_486c);
  pTVar57 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4258,&local_4350,pFVar30);
  pTVar13 = (pTVar57->SharedReferenceCount).ReferenceController;
  pSVar14 = pTVar57->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar15 = (local_4800->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_4800->_Content).Widget.Object = (SWidget *)pSVar14;
  (local_4800->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  FLLMScope::FLLMScope(&local_4868,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4610 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_45b8,&local_4610,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_4270,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x8c7,local_489b);
  FMemScope::~FMemScope(&local_45b8);
  FLLMScope::~FLLMScope(&local_4868);
  pTVar58 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4270,&local_4360,local_4800);
  local_res10->_padding_ = (longlong)pTVar58->Object;
  pTVar15 = (pTVar58->SharedReferenceCount).ReferenceController;
  ((FSharedReferencer<1> *)&local_res10->SharedReferenceCount)->ReferenceController = pTVar15;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4360.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4270._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4350.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4258._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4340.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4240._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4330.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4138._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4320.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4228._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4310.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4210._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3058);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4300.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41f8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c68);
  if ((void *)local_2c68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2c68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c68);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2e88);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2f70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar62);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_42f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4608);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_42e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3dc0.CompositeFont.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_b10);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3c18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4600);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_42d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41b0._Widget.SharedReferenceCount.ReferenceController);
  if (local_42c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_42c0.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1590);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3b30);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3840._Slots.AllocatorInstance.Data,local_3840._Slots.ArrayNum);
  if ((FSlotArguments *)local_3840._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3840._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3840);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3228);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3a48._Slots.AllocatorInstance.Data,local_3a48._Slots.ArrayNum);
  if ((FSlotArguments *)local_3a48._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3a48._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3a48);
  SBorder::FArguments::~FArguments(&local_2228);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4458);
  if ((void *)local_4458._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4458._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4458);
  SBox::FArguments::~FArguments(&local_28a8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_45f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_42b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4198._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_45f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_42a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4180._Widget.SharedReferenceCount.ReferenceController);
  if (local_4290.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4290.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d60.CompositeFont.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5b8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3f58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f80);
  if ((void *)local_3f80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3f80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3fa0[0].ReferenceController);
  if (local_3fb0 != (undefined8 *)0x0) {
    (**(code **)*local_3fb0)(local_3fb0,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_45e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4168._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_45e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_45c8.SharedReferenceCount.ReferenceController._4_4_,
                      local_45c8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4150._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2b50);
  SButton::FArguments::~FArguments(&local_1050);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3e70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e98);
  if ((void *)local_3e98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3e98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3e98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3eb8[0].ReferenceController);
  if (local_3ec8 != (undefined8 *)0x0) {
    (**(code **)*local_3ec8)(local_3ec8,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3638._Slots.AllocatorInstance.Data,local_3638._Slots.ArrayNum);
  if ((FSlotArguments *)local_3638._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3638._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3638);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3ca8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3cd0);
  if ((void *)local_3cd0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3cd0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3cd0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3cf0);
  if (local_3d00[0] != (undefined8 *)0x0) {
    (**(code **)*local_3d00[0])(local_3d00[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3430._Slots.AllocatorInstance.Data,local_3430._Slots.ArrayNum);
  if ((FSlotArguments *)local_3430._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3430._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3430);
  SBorder::FArguments::~FArguments(&local_1e48);
  SBox::FArguments::~FArguments(&local_2568);
  if (local_45d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_45d8.TextData.Reference + 0x10))();
  }
  return (TSharedPtr<SWidget,1> *)local_res10;
}

// ConstructSkeletonReference @ 14e78e450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::ConstructSkeletonReference
          (SInterchangeGenericAssetSkeletonConflictWidget *this,
          TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  FName FVar2;
  SImage *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SBorder *pSVar10;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  ulonglong uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  FSharedReferencer<1> FVar17;
  undefined8 uVar18;
  char cVar19;
  byte bVar20;
  bool bVar21;
  FArguments *pFVar22;
  FName *pFVar23;
  ISlateStyle *pIVar24;
  FSlotArguments *pFVar25;
  FArguments *pFVar26;
  FSlot *pFVar27;
  FSizeParam *pFVar28;
  FArguments *pFVar29;
  FButtonStyle *pFVar30;
  FArguments *pFVar31;
  TSharedRef<SImage,1> *pTVar32;
  TSharedRef<SButton,1> *pTVar33;
  FArguments *pFVar34;
  TAttribute<FSlateFontInfo> *pTVar35;
  FText *pFVar36;
  TSharedRef<STextBlock,1> *pTVar37;
  TSharedRef<SHorizontalBox,1> *pTVar38;
  FArguments *pFVar39;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar40;
  FArguments *pFVar41;
  FArguments *pFVar42;
  TSharedRef<SSeparator,1> *pTVar43;
  FArguments *pFVar44;
  undefined8 *puVar45;
  TSharedRef<SWidget,1> *pTVar46;
  ulong64 uVar47;
  SListView<TSharedPtr<FString,1>_> *pSVar48;
  SListView<TSharedPtr<FString,1>_> *pSVar49;
  TSharedPtr<SWidget,1> *pTVar50;
  TSharedRef<SVerticalBox,1> *pTVar51;
  TSharedRef<SBorder,1> *pTVar52;
  TSharedRef<SBox,1> *pTVar53;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_01;
  FSlot *pFVar54;
  int iVar55;
  TReferenceControllerBase<1> *pTVar56;
  FArguments *local_res8;
  TReferenceControllerBase<1> *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  ulonglong uStack_3da0;
  T0RequiredArgs local_3d98;
  T0RequiredArgs local_3d97;
  T0RequiredArgs local_3d96;
  T0RequiredArgs local_3d95;
  T0RequiredArgs local_3d94;
  T0RequiredArgs local_3d93;
  T0RequiredArgs local_3d92;
  T0RequiredArgs local_3d91;
  T0RequiredArgs local_3d90;
  T0RequiredArgs local_3d8f;
  T0RequiredArgs local_3d8e [2];
  FLLMScope local_3d8c;
  FLLMScope local_3d88;
  FLLMScope local_3d84;
  FLLMScope local_3d80;
  FLLMScope local_3d7c;
  FLLMScope local_3d78;
  FLLMScope local_3d74;
  FLLMScope local_3d70;
  FLLMScope local_3d6c;
  FLLMScope local_3d68;
  FLLMScope local_3d64;
  SHorizontalBox *local_3d60;
  FSharedReferencer<1> local_3d58;
  STextBlock *local_3d50;
  FSharedReferencer<1> local_3d48;
  SSeparator *local_3d40;
  FSharedReferencer<1> local_3d38;
  FName local_3d30;
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> local_3d28;
  FArguments *local_3d10;
  FString local_3d08;
  SWidget *local_3cf8;
  TReferenceControllerBase<1> *pTStack_3cf0;
  undefined8 local_3ce8;
  FSharedReferencer<1> local_3ce0;
  FString local_3cd8;
  SVerticalBox *local_3cc8;
  TReferenceControllerBase<1> *pTStack_3cc0;
  SVerticalBox *local_3cb8;
  TReferenceControllerBase<1> *pTStack_3cb0;
  SBorder *local_3ca8;
  TReferenceControllerBase<1> *pTStack_3ca0;
  undefined8 local_3c98;
  FSharedReferencer<1> local_3c90;
  undefined8 local_3c88;
  FSharedReferencer<1> local_3c80;
  undefined2 local_3c78;
  undefined1 local_3c70 [24];
  FSlateBrush *local_3c58;
  undefined1 local_3c50;
  undefined1 local_3c48 [8];
  void *pvStack_3c40;
  undefined8 local_3c38;
  FSlateBrush *local_3c30;
  undefined1 local_3c28;
  undefined1 local_3c20 [8];
  void *pvStack_3c18;
  undefined8 local_3c10;
  FName local_3c08;
  FName local_3c00;
  FMemScope local_3bf8;
  FName local_3bf0;
  FMemScope local_3be8;
  FSlot *local_3be0;
  FName local_3bd8;
  FMemScope local_3bd0;
  FName local_3bc8;
  FMemScope local_3bc0;
  FName local_3bb8;
  FMemScope local_3bb0;
  FMemScope local_3ba8;
  FName local_3ba0;
  FMemScope local_3b98;
  FSlotArguments *local_3b90;
  FArguments *local_3b88;
  FName local_3b80;
  FMemScope local_3b78;
  FName local_3b70;
  FMemScope local_3b68;
  FArguments *local_3b60;
  FName local_3b58;
  FMemScope local_3b50;
  FSlotArguments *local_3b48;
  FArguments *local_3b40;
  FName local_3b38;
  FMemScope local_3b30;
  FArguments *local_3b28;
  TReferenceControllerBase<1> *local_3b20;
  TReferenceControllerBase<1> *local_3b18;
  TReferenceControllerBase<1> *local_3b10;
  TReferenceControllerBase<1> *local_3b08;
  TReferenceControllerBase<1> *local_3b00;
  FString local_3af8;
  undefined8 local_3ae8;
  FSharedReferencer<1> FStack_3ae0;
  FSlot *local_3ad8;
  undefined8 local_3ad0;
  undefined8 uStack_3ac8;
  undefined1 local_3ac0;
  undefined1 local_3ab8 [8];
  void *pvStack_3ab0;
  undefined8 local_3aa8;
  undefined8 local_3aa0;
  undefined8 uStack_3a98;
  undefined1 local_3a90;
  undefined1 local_3a88 [8];
  void *pvStack_3a80;
  undefined8 local_3a78;
  TAttribute<float> local_3a70;
  TAttribute<float> local_3a50;
  FString local_3a30;
  TSharedRef<SWidget,1> local_3a20;
  TSharedRef<SImage,1> local_3a10;
  undefined1 local_3a00 [24];
  FDestructionSentinel local_39e8;
  undefined1 *local_39d0;
  TAttribute<FText> local_39c8;
  TAttribute<FText> local_3998;
  TSharedRef<SWidget,1> local_3968;
  TSharedRef<SBox,1> local_3958;
  TSharedRef<SBorder,1> local_3948;
  TSharedRef<SBox,1> local_3938;
  TSharedRef<SBorder,1> local_3928;
  TSharedRef<SVerticalBox,1> local_3918;
  TSharedRef<SSeparator,1> local_3908;
  TSharedRef<STextBlock,1> local_38f8;
  FText local_38e8;
  TSharedRef<SHorizontalBox,1> local_38d8;
  TSharedRef<STextBlock,1> local_38c8;
  FText local_38b8;
  TSharedRef<SButton,1> local_38a8;
  FName local_3898;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3890;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3878;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3860;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3848;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_3830;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3818;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3800;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_37e8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_37d0;
  FName local_37b8;
  TSharedRef<SVerticalBox,1> local_37b0;
  FName local_37a0;
  FName local_3798 [2];
  code *local_3788;
  longlong lStack_3780;
  code *local_3778;
  longlong lStack_3770;
  code *local_3768;
  longlong lStack_3760;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3758;
  undefined1 local_3740 [16];
  undefined1 local_3730 [32];
  undefined1 local_3710 [24];
  undefined1 local_36f8 [16];
  undefined1 local_36e8 [32];
  undefined1 local_36c8 [24];
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_36b0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3698;
  undefined8 *local_3680;
  SButton *local_3678;
  FSharedReferencer<1> local_3670 [4];
  undefined1 local_3650 [40];
  FSlotArgumentsMixin local_3628;
  FSlateFontInfo local_3598;
  FSlateFontInfo local_3538;
  undefined8 *local_34d8 [2];
  TReferenceControllerBase<1> *local_34c8;
  undefined1 local_34a8 [40];
  FSlotArgumentsMixin local_3480;
  undefined1 local_33f0 [16];
  FSharedReferencer<1> local_33e0 [9];
  TOptional<FSizeParam> local_3398;
  FArguments local_3308;
  FArguments local_3100;
  FArguments local_2ef8;
  FSlotArguments local_2cf0;
  FSlotArguments local_2c08;
  FSlotArguments local_2b20;
  FSlotArguments local_2a38;
  undefined1 local_2950 [544];
  undefined1 local_2730 [24];
  TAttribute<FSlateFontInfo> local_2718;
  TAttribute<FSlateFontInfo> local_2698;
  FArguments local_2618;
  FArguments local_2370;
  FArguments local_2030;
  FArguments local_1cf0;
  FArguments local_1910;
  FArguments local_1530;
  FArguments local_1050;
  FArguments local_b10;
  FArguments local_5b8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14e78e473;
  pFVar54 = (FSlot *)0x0;
  local_res8 = (FArguments *)((ulonglong)local_res8 & 0xffffffff00000000);
  iVar55 = (this->AssetReferencingSkeleton).ArrayNum;
  local_3cd8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3cd8.Data.ArrayNum = 0;
  local_3cd8.Data.ArrayMax = 0;
  local_res10 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  if (0 < iVar55) {
    local_3d08.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d08.Data.ArrayNum = 0;
    local_3d08.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_3d08,iVar55);
    ::FString::ConcatCF(&local_3a30,L"Skeleton is referenced by ",&local_3d08);
    ::FString::ConcatFC(&local_3af8,&local_3a30,L" assets.");
    iVar55 = local_3af8.Data.ArrayNum + -1;
    if (local_3af8.Data.ArrayNum == 0) {
      iVar55 = 0;
    }
    ::FString::AppendChars(&local_3cd8,(wchar_t *)local_3af8.Data.AllocatorInstance.Data,iVar55);
    if (local_3af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3af8.Data.AllocatorInstance.Data);
    }
    if (local_3a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a30.Data.AllocatorInstance.Data);
    }
    if (local_3d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d08.Data.AllocatorInstance.Data);
    }
  }
  local_3d10 = SBox::FArguments::FArguments(&local_2030);
  pFVar22 = SBorder::FArguments::FArguments(&local_1910);
  uVar16 = _UNK_15076be98;
  local_3ac0 = 1;
  local_3aa8 = 0;
  local_3ad0 = ___xmm_40400000404000004040000040400000;
  uStack_3ac8 = _UNK_15076be98;
  local_3ab8 = (undefined1  [8])0x0;
  pvStack_3ab0 = (void *)0x0;
  uVar15 = _UNK_15076be94;
  (pFVar22->_Padding).Value.Left = (float)___xmm_40400000404000004040000040400000;
  uVar18 = _UNK_15076be98;
  (pFVar22->_Padding).Value.Top = (float)uVar15;
  _UNK_15076be98 = (undefined4)uVar16;
  _UNK_15076be9c = SUB84(uVar16,4);
  uVar15 = _UNK_15076be9c;
  (pFVar22->_Padding).Value.Right = (float)_UNK_15076be98;
  _UNK_15076be98 = uVar18;
  (pFVar22->_Padding).Value.Bottom = (float)uVar15;
  (pFVar22->_Padding).bIsSet = true;
  local_3b28 = pFVar22;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ab8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ab8);
  if (pvStack_3ab0 != (void *)0x0) {
    FMemory::Free(pvStack_3ab0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3ab8);
  pFVar23 = ::FName::FName(&local_37a0,"ToolPanel.GroupBorder");
  FVar2 = *pFVar23;
  pIVar24 = FAppStyle::Get();
  local_3c58 = (FSlateBrush *)(**(code **)((longlong)*pIVar24 + 0x50))(pIVar24,FVar2,0,0);
  local_3c50 = 1;
  local_3c38 = 0;
  local_3c48 = (undefined1  [8])0x0;
  pvStack_3c40 = (void *)0x0;
  (pFVar22->_BorderImage).Value = local_3c58;
  (pFVar22->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c48);
  if (pvStack_3c40 != (void *)0x0) {
    FMemory::Free(pvStack_3c40);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c48);
  local_res8 = SVerticalBox::FArguments::FArguments(&local_2ef8);
  pFVar25 = SVerticalBox::Slot((FSlotArguments *)local_34d8);
  pFVar25 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar25);
  fVar14 = __real_40000000;
  pFVar25 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar25->field_0x18,__real_40000000);
  pFVar26 = SHorizontalBox::FArguments::FArguments(&local_3100);
  pFVar27 = ::operator_new(0x58);
  local_3ad8 = pFVar54;
  if (pFVar27 != (FSlot *)0x0) {
    *(undefined8 *)pFVar27 = 0;
    *(undefined8 *)&pFVar27->field_0x8 = 0;
    *(undefined8 *)&pFVar27->field_0x10 = 0;
    *(undefined8 *)&pFVar27->field_0x18 = 0;
    *(undefined8 *)&pFVar27->field_0x20 = 0;
    *(undefined8 *)&pFVar27->field_0x28 = 0;
    *(undefined8 *)&pFVar27->field_0x30 = 0;
    *(undefined8 *)&pFVar27->field_0x38 = 0;
    *(undefined8 *)&pFVar27->field_0x40 = 0;
    *(undefined8 *)&pFVar27->field_0x48 = 0;
    *(undefined8 *)&pFVar27->field_0x50 = 0;
    local_3ad8 = SHorizontalBox::FSlot::FSlot(pFVar27);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_3680,(FSlot *)&local_3ad8);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3740);
  TOptional<FSizeParam>::operator=(&local_3628._SizeParam,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3710);
  if ((void *)local_3710._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3710._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3710);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3730);
  if ((void *)local_3730._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3730._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3730);
  pFVar29 = SButton::FArguments::FArguments(&local_1050);
  pFVar29->_HAlign = HAlign_Center;
  pFVar29->_VAlign = VAlign_Center;
  pFVar29->_IsFocusable = false;
  ::FName::FName(&local_3c08,"NoBorder");
  pIVar24 = FAppStyle::Get();
  pFVar30 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar24 + 0xa0))(pIVar24,FButtonStyle::TypeName,local_3c08,0,1);
  if (pFVar30 == (FButtonStyle *)0x0) {
    pFVar30 = FButtonStyle::GetDefault();
  }
  pFVar29->_ButtonStyle = pFVar30;
  uVar13 = uStack_3da0 >> 0x20;
  uStack_3da0 = uVar13 << 0x20;
  local_3788 = SetSectionVisible;
  lStack_3780 = uStack_3da0;
  pFVar29 = SButton::FArguments::
            OnClicked<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection>
                      (pFVar29,this,(pmf_e662be6c *)&local_3788,References);
  pFVar31 = SImage::FArguments::FArguments(&local_2618);
  uStack_3da0 = uVar13 << 0x20;
  local_3778 = GetCollapsableArrow;
  lStack_3770 = uStack_3da0;
  pFVar31 = SImage::FArguments::
            Image<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection>
                      (pFVar31,this,(pmf_5046b25f *)&local_3778,References);
  FLLMScope::FLLMScope(&local_3d64,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3c00 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3bf8,&local_3c00,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_37d0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x93f,local_res18);
  FMemScope::~FMemScope(&local_3bf8);
  FLLMScope::~FLLMScope(&local_3d64);
  pTVar32 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_37d0,&local_3a10,pFVar31);
  local_3b08 = (pTVar32->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar32->Object;
  if (local_3b08 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3b08->SharedReferenceCount = (atomic<int>)((int)local_3b08->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_3b08->SharedReferenceCount = (atomic<int>)((int)local_3b08->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3cf8 = (pFVar29->_Content).Widget.Object;
  pTStack_3cf0 = (pFVar29->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar29->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar29->_Content).Widget.SharedReferenceCount.ReferenceController = local_3b08;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3cf0);
  FLLMScope::FLLMScope(&local_3d8c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3bf0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3be8,&local_3bf0,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_37e8,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x938,local_res20);
  FMemScope::~FMemScope(&local_3be8);
  FLLMScope::~FLLMScope(&local_3d8c);
  pTVar33 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_37e8,&local_38a8,pFVar29);
  local_3678 = pTVar33->Object;
  local_3c90.ReferenceController = (pTVar33->SharedReferenceCount).ReferenceController;
  if (local_3c90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3c90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3c90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3c90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3c90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3c98 = 0;
  local_3b10 = local_3c90.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_3670,&local_3c90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c90.ReferenceController);
  pFVar26 = SHorizontalBox::FArguments::operator+(pFVar26,(FSlotArguments *)&local_3680);
  pFVar27 = ::operator_new(0x58);
  local_3be0 = pFVar54;
  if (pFVar27 != (FSlot *)0x0) {
    *(undefined8 *)pFVar27 = 0;
    *(undefined8 *)&pFVar27->field_0x8 = 0;
    *(undefined8 *)&pFVar27->field_0x10 = 0;
    *(undefined8 *)&pFVar27->field_0x18 = 0;
    *(undefined8 *)&pFVar27->field_0x20 = 0;
    *(undefined8 *)&pFVar27->field_0x28 = 0;
    *(undefined8 *)&pFVar27->field_0x30 = 0;
    *(undefined8 *)&pFVar27->field_0x38 = 0;
    *(undefined8 *)&pFVar27->field_0x40 = 0;
    *(undefined8 *)&pFVar27->field_0x48 = 0;
    *(undefined8 *)&pFVar27->field_0x50 = 0;
    local_3be0 = SHorizontalBox::FSlot::FSlot(pFVar27);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_33f0,(FSlot *)&local_3be0);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_36f8);
  TOptional<FSizeParam>::operator=(&local_3398,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_36c8);
  if ((void *)local_36c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_36c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_36c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_36e8);
  if ((void *)local_36e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_36e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_36e8);
  pFVar34 = STextBlock::FArguments::FArguments(&local_5b8);
  pFVar23 = ::FName::FName(&local_37b8,"DetailsView.CategoryFontStyle");
  FVar2 = *pFVar23;
  pIVar24 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar24 + 0x88))(pIVar24,&local_3538,FVar2,0);
  pTVar35 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2718,&local_3538);
  pFVar34 = STextBlock::FArguments::Font(pFVar34,pTVar35);
  pFVar36 = FText::AsLocalizable_Advanced_LocText
                      (&local_38b8,L"SInterchangeGenericAssetSkeletonConflictWidget",
                       L"SkeletonReferencesHeader",L"References");
  FText::FText(&local_3998.Value,pFVar36);
  local_3998.bIsSet = true;
  local_3998.Getter._16_8_ = 0;
  local_3998.Getter._0_8_ = 0;
  local_3998.Getter._8_8_ = 0;
  pFVar34 = STextBlock::FArguments::Text(pFVar34,&local_3998);
  FLLMScope::FLLMScope(&local_3d88,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3bd8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3bd0,&local_3bd8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3800,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x945,&local_3d98);
  FMemScope::~FMemScope(&local_3bd0);
  FLLMScope::~FLLMScope(&local_3d88);
  pTVar37 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3800,&local_38c8,pFVar34);
  local_33f0._8_8_ = pTVar37->Object;
  local_3c80.ReferenceController = (pTVar37->SharedReferenceCount).ReferenceController;
  if (local_3c80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3c80.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3c80.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3c80.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3c80.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3c88 = 0;
  local_3b00 = local_3c80.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_33f0 + 0x10),&local_3c80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c80.ReferenceController);
  pFVar26 = SHorizontalBox::FArguments::operator+(pFVar26,(FSlotArguments *)local_33f0);
  FLLMScope::FLLMScope(&local_3d84,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3bc8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3bc0,&local_3bc8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_3818,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x934,&local_3d97);
  FMemScope::~FMemScope(&local_3bc0);
  FLLMScope::~FLLMScope(&local_3d84);
  pTVar38 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3818,&local_38d8,pFVar26);
  pTVar4 = (pTVar38->SharedReferenceCount).ReferenceController;
  local_3d60 = pTVar38->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3d58.ReferenceController = pTVar4;
  if ((SHorizontalBox **)&pFVar25->field_0x8 != &local_3d60) {
    *(SHorizontalBox **)&pFVar25->field_0x8 = local_3d60;
    local_3d60 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar25->field_0x10,&local_3d58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d58.ReferenceController);
  local_3b40 = SVerticalBox::FArguments::operator+(local_res8,pFVar25);
  pFVar25 = SVerticalBox::Slot(&local_2a38);
  local_3a70.Value = 1.0;
  local_3a70.bIsSet = true;
  local_3a70.Getter._16_8_ = 0;
  local_3a70.Getter._0_8_ = 0;
  local_3a70.Getter._8_8_ = 0;
  pFVar25 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar25,&local_3a70);
  local_3b48 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar25->field_0x18,fVar14);
  pFVar39 = SBox::FArguments::FArguments(&local_2370);
  uStack_3da0 = uVar13 << 0x20;
  local_3768 = IsSectionVisible;
  lStack_3760 = uStack_3da0;
  local_res8 = (FArguments *)CONCAT71(local_res8._1_7_,1);
  local_3b60 = pFVar39;
  pTVar40 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_3a00
                       ,this,(pmf_aae925ec *)&local_3768,
                       (EInterchangeSkeletonCompareSection *)&local_res8);
  local_3c78 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c70,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar40);
  *(undefined1 *)&pFVar39->_padding_ = (undefined1)local_3c78;
  *(undefined1 *)((longlong)&pFVar39->_padding_ + 1) = local_3c78._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar39->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c70);
  if ((void *)local_3c70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3c70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c70);
  pFVar22 = SBorder::FArguments::FArguments(&local_1cf0);
  uVar16 = _UNK_15076be98;
  local_3a90 = 1;
  local_3a78 = 0;
  local_3aa0 = ___xmm_40400000404000004040000040400000;
  uStack_3a98 = _UNK_15076be98;
  local_3a88 = (undefined1  [8])0x0;
  pvStack_3a80 = (void *)0x0;
  uVar15 = _UNK_15076be94;
  (pFVar22->_Padding).Value.Left = (float)___xmm_40400000404000004040000040400000;
  uVar18 = _UNK_15076be98;
  (pFVar22->_Padding).Value.Top = (float)uVar15;
  _UNK_15076be98 = (undefined4)uVar16;
  _UNK_15076be9c = SUB84(uVar16,4);
  uVar15 = _UNK_15076be9c;
  (pFVar22->_Padding).Value.Right = (float)_UNK_15076be98;
  _UNK_15076be98 = uVar18;
  (pFVar22->_Padding).Value.Bottom = (float)uVar15;
  (pFVar22->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a88);
  if (pvStack_3a80 != (void *)0x0) {
    FMemory::Free(pvStack_3a80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a88);
  pFVar23 = ::FName::FName(&local_3898,"ToolPanel.DarkGroupBorder");
  FVar2 = *pFVar23;
  pIVar24 = FAppStyle::Get();
  local_3c30 = (FSlateBrush *)(**(code **)((longlong)*pIVar24 + 0x50))(pIVar24,FVar2,0);
  local_3c28 = 1;
  local_3c10 = 0;
  local_3c20 = (undefined1  [8])0x0;
  pvStack_3c18 = (void *)0x0;
  (pFVar22->_BorderImage).Value = local_3c30;
  (pFVar22->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c20);
  if (pvStack_3c18 != (void *)0x0) {
    FMemory::Free(pvStack_3c18);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c20);
  local_3d30 = (FName)SVerticalBox::FArguments::FArguments(&local_3308);
  pFVar25 = SVerticalBox::Slot(&local_2b20);
  pFVar25 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar25);
  pFVar25 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar25->field_0x18,fVar14);
  pFVar34 = STextBlock::FArguments::FArguments(&local_b10);
  ::FName::FName(local_3798,"DetailsView.CategoryFontStyle");
  pIVar24 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar24 + 0x88))(pIVar24,&local_3598);
  pTVar35 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2698,&local_3598);
  pFVar34 = STextBlock::FArguments::Font(pFVar34,pTVar35);
  pFVar36 = FText::FromString(&local_38e8,&local_3cd8);
  FText::FText(&local_39c8.Value,pFVar36);
  local_39c8.bIsSet = true;
  local_39c8.Getter._16_8_ = 0;
  local_39c8.Getter._0_8_ = 0;
  local_39c8.Getter._8_8_ = 0;
  pFVar34 = STextBlock::FArguments::Text(pFVar34,&local_39c8);
  FLLMScope::FLLMScope(&local_3d80,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3bb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3bb0,&local_3bb8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3758,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x95a,&local_3d96);
  FMemScope::~FMemScope(&local_3bb0);
  FLLMScope::~FLLMScope(&local_3d80);
  pTVar37 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3758,&local_38f8,pFVar34);
  local_3d50 = pTVar37->Object;
  local_3d48.ReferenceController = (pTVar37->SharedReferenceCount).ReferenceController;
  if (local_3d48.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3d48.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3d48.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3d48.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3d48.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b18 = local_3d48.ReferenceController;
  if ((STextBlock **)&pFVar25->field_0x8 != &local_3d50) {
    *(STextBlock **)&pFVar25->field_0x8 = local_3d50;
    local_3d50 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar25->field_0x10,&local_3d48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d48.ReferenceController);
  pFVar41 = SVerticalBox::FArguments::operator+((FArguments *)local_3d30,pFVar25);
  pFVar25 = SVerticalBox::Slot(&local_2c08);
  pFVar25 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar25);
  pFVar25 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar25->field_0x18,fVar14);
  pFVar42 = SSeparator::FArguments::FArguments((FArguments *)local_2950);
  pFVar42->_Orientation = Orient_Horizontal;
  FLLMScope::FLLMScope(&local_3d7c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3d30 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3ba8,&local_3d30,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (&local_3830,"SSeparator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x962,&local_3d95);
  FMemScope::~FMemScope(&local_3ba8);
  FLLMScope::~FLLMScope(&local_3d7c);
  pTVar43 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3830,&local_3908,pFVar42);
  local_3d40 = pTVar43->Object;
  local_3d38.ReferenceController = (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_3d38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3d38.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3d38.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3d38.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3d38.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b20 = local_3d38.ReferenceController;
  if ((SSeparator **)&pFVar25->field_0x8 != &local_3d40) {
    *(SSeparator **)&pFVar25->field_0x8 = local_3d40;
    local_3d40 = (SSeparator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar25->field_0x10,&local_3d38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d38.ReferenceController);
  local_3b88 = SVerticalBox::FArguments::operator+(pFVar41,pFVar25);
  pFVar25 = SVerticalBox::Slot(&local_2cf0);
  local_3a50.Value = 1.0;
  local_3a50.bIsSet = true;
  local_3a50.Getter._16_8_ = 0;
  local_3a50.Getter._0_8_ = 0;
  local_3a50.Getter._8_8_ = 0;
  pFVar25 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar25,&local_3a50);
  local_3b90 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar25->field_0x18,fVar14);
  pFVar44 = SListView<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_1530);
  local_3ae8 = 0;
  FStack_3ae0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar44->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar44->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0
  ;
  if (&pFVar44->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *)&local_3ae8)
  {
    (pFVar44->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar44->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_3ae0)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3ae0.ReferenceController);
  pFVar44->_ListItemsSource_ArrayPointer = &this->AssetReferencingSkeleton;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar44->_OnGenerateRow,
             (FWriteAccessScope *)&local_39e8);
  local_39d0 = &(pFVar44->_OnGenerateRow).field_0x8;
  puVar45 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_39d0);
  pTVar56 = local_res10;
  if (puVar45 != (undefined8 *)0x0) {
    uStack_3da0 = (ulonglong)local_3a10.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar46 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3968);
    pTVar56 = (pTVar46->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar46->Object;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar45 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFString___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar47 = FDelegateHandle::GenerateNewID();
    puVar45[2] = uVar47;
    *puVar45 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSInterchangeGenericAssetSkeletonConflictWidget___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFString___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar45[3] = pSVar5;
    puVar45[4] = pTVar56;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar54 = (FSlot *)&DAT_00000007;
    puVar45[5] = OnGenerateRowAssetReferencingSkeleton;
    puVar45[6] = uStack_3da0;
  }
  if (((ulonglong)pFVar54 & 4) != 0) {
    pFVar54 = (FSlot *)(ulonglong)((uint)pFVar54 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (((ulonglong)pFVar54 & 2) != 0) {
    pFVar54 = (FSlot *)(ulonglong)((uint)pFVar54 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (((ulonglong)pFVar54 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3968.SharedReferenceCount.ReferenceController);
  }
  if (local_39e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_39e8.Accessor,&local_39e8);
  }
  FLLMScope::FLLMScope(&local_3d78,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3ba0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3b98,&local_3ba0,true);
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_3d28,"SListView<TSharedPtr<FString>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x96a,&local_3d94);
  FMemScope::~FMemScope(&local_3b98);
  FLLMScope::~FLLMScope(&local_3d78);
  pSVar48 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&local_3d28._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar48,(FSlateBaseNamedArgs *)pFVar44);
  pSVar48 = local_3d28._Widget.Object;
  SListView<TSharedPtr<FString,1>_>::Construct(local_3d28._Widget.Object,pFVar44);
  pSVar49 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&local_3d28._Widget);
  if ((pSVar49->_padding_ & 0x10) == 0) {
    cVar19 = (**(code **)(pSVar49->_padding_ + 0x228))(pSVar49);
    bVar20 = 0;
    if (cVar19 == '\0') goto LAB_14e78f5cb;
  }
  bVar20 = 0x20;
LAB_14e78f5cb:
  *(byte *)&pSVar49->_padding_ = (byte)pSVar49->_padding_ & 0xdf;
  *(byte *)&pSVar49->_padding_ = (byte)pSVar49->_padding_ | bVar20;
  pSVar49 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&local_3d28._Widget);
  pbVar1 = (byte *)((longlong)&pSVar49->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3d28._Widget.Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    pTVar50 = (TSharedPtr<SWidget,1> *)(*pcVar12)();
    return pTVar50;
  }
  FVar17.ReferenceController = local_3d28._Widget.SharedReferenceCount.ReferenceController;
  local_3d28._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3d28._Widget.Object = (SListView<TSharedPtr<FString,1>_> *)0x0;
  if ((pSVar48 == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    pTVar50 = (TSharedPtr<SWidget,1> *)(*pcVar12)();
    return pTVar50;
  }
  pFVar25 = local_3b90;
  local_3ce0.ReferenceController = FVar17.ReferenceController;
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&local_3b90->field_0x8 != &local_3ce8) {
    *(SListView<TSharedPtr<FString,1>_> **)&local_3b90->field_0x8 = pSVar48;
    local_3ce8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_3b90->field_0x10,&local_3ce0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ce0.ReferenceController);
  pFVar41 = SVerticalBox::FArguments::operator+(local_3b88,pFVar25);
  FLLMScope::FLLMScope(&local_3d74,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3b80 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3b78,&local_3b80,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3848,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x955,&local_3d93);
  FMemScope::~FMemScope(&local_3b78);
  FLLMScope::~FLLMScope(&local_3d74);
  pTVar51 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3848,&local_3918,pFVar41);
  pTVar56 = (pTVar51->SharedReferenceCount).ReferenceController;
  local_3cb8 = pTVar51->Object;
  if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar22->_Content).Widget.Object = (SWidget *)local_3cb8;
  (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar56;
  pTStack_3cb0 = pTVar56;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(&local_3d70,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3b70 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3b68,&local_3b70,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_3860,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x951,&local_3d92);
  FMemScope::~FMemScope(&local_3b68);
  FLLMScope::~FLLMScope(&local_3d70);
  pTVar52 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3860,&local_3928,pFVar22);
  pFVar39 = local_3b60;
  pTVar6 = (pTVar52->SharedReferenceCount).ReferenceController;
  local_3ca8 = pTVar52->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (local_3b60->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_3b60->_Content).Widget.Object = (SWidget *)local_3ca8;
  (local_3b60->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  pTStack_3ca0 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FLLMScope::FLLMScope(&local_3d6c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3b58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3b50,&local_3b58,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_3878,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x94e,&local_3d91);
  FMemScope::~FMemScope(&local_3b50);
  FLLMScope::~FLLMScope(&local_3d6c);
  pTVar53 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3878,&local_3938,pFVar39);
  pTVar7 = (pTVar53->SharedReferenceCount).ReferenceController;
  local_3a20.Object = (SWidget *)pTVar53->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a20.SharedReferenceCount.ReferenceController = pTVar7;
  pFVar25 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3b48,&local_3a20);
  pFVar41 = SVerticalBox::FArguments::operator+(local_3b40,pFVar25);
  FLLMScope::FLLMScope(&local_3d68,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3b38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3b30,&local_3b38,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3890,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x92f,&local_3d90);
  FMemScope::~FMemScope(&local_3b30);
  FLLMScope::~FLLMScope(&local_3d68);
  pTVar51 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3890,&local_37b0,pFVar41);
  pFVar22 = local_3b28;
  pTVar8 = (pTVar51->SharedReferenceCount).ReferenceController;
  local_3cc8 = pTVar51->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (local_3b28->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_3b28->_Content).Widget.Object = (SWidget *)local_3cc8;
  (local_3b28->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar8;
  pTStack_3cc0 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  this_00 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_36b0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                       ,0x92b,&local_3d8f);
  pTVar52 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_3948,pFVar22);
  pTVar9 = (pTVar52->SharedReferenceCount).ReferenceController;
  pSVar10 = pTVar52->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (local_3d10->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_3d10->_Content).Widget.Object = (SWidget *)pSVar10;
  (local_3d10->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  this_01 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_3698,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                       ,0x929,local_3d8e);
  pTVar53 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_3958,local_3d10);
  local_res10->_padding_ = (longlong)pTVar53->Object;
  pTVar11 = (pTVar53->SharedReferenceCount).ReferenceController;
  ((FSharedReferencer<1> *)&local_res10->SharedReferenceCount)->ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3958.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3698._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3948.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_36b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3890._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3938.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3878._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3928.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3860._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3918.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3848._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d28._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_1530);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2cf0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3908.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3830._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2730);
  if ((void *)local_2730._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2730._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2730);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2950);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2c08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3758._Widget.SharedReferenceCount.ReferenceController);
  if (local_38e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38e8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3598.CompositeFont.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_b10);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2b20);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3308._Slots.AllocatorInstance.Data,local_3308._Slots.ArrayNum);
  if ((FSlotArguments *)local_3308._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3308._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3308);
  SBorder::FArguments::~FArguments(&local_1cf0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a00);
  if ((void *)local_3a00._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3a00._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a00);
  SBox::FArguments::~FArguments(&local_2370);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2a38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3818._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3800._Widget.SharedReferenceCount.ReferenceController);
  if (local_38b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38b8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3538.CompositeFont.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5b8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_33f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37e8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_3a10.SharedReferenceCount.ReferenceController._4_4_,
                      local_3a10.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37d0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2618);
  SButton::FArguments::~FArguments(&local_1050);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3628);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3650);
  if ((void *)local_3650._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3650._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3650);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3670[0].ReferenceController);
  if (local_3680 != (undefined8 *)0x0) {
    (**(code **)*local_3680)(local_3680,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3100._Slots.AllocatorInstance.Data,local_3100._Slots.ArrayNum);
  if ((FSlotArguments *)local_3100._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3100._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3100);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3480);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_34a8);
  if ((void *)local_34a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_34a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_34a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_34c8);
  if (local_34d8[0] != (undefined8 *)0x0) {
    (**(code **)*local_34d8[0])(local_34d8[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2ef8._Slots.AllocatorInstance.Data,local_2ef8._Slots.ArrayNum);
  if ((FSlotArguments *)local_2ef8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2ef8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2ef8);
  SBorder::FArguments::~FArguments(&local_1910);
  SBox::FArguments::~FArguments(&local_2030);
  if (local_3cd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3cd8.Data.AllocatorInstance.Data);
  }
  return (TSharedPtr<SWidget,1> *)local_res10;
}

// GetCollapsableArrow @ 14e7b5630

FSlateBrush * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::GetCollapsableArrow
          (SInterchangeGenericAssetSkeletonConflictWidget *this,
          EInterchangeSkeletonCompareSection param_1)

{
  FName FVar1;
  FName *pFVar2;
  ISlateStyle *pIVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  FName local_res8 [2];
  FName local_res18 [2];
  
  if (this->bShowSectionFlag[param_1] == false) {
    pcVar5 = "Symbols.RightArrow";
    pFVar2 = local_res18;
  }
  else {
    pcVar5 = "Symbols.DownArrow";
    pFVar2 = local_res8;
  }
  pFVar2 = ::FName::FName(pFVar2,pcVar5);
  FVar1 = *pFVar2;
  pIVar3 = FAppStyle::Get();
  pFVar4 = (FSlateBrush *)(**(code **)((longlong)*pIVar3 + 0x50))(pIVar3,FVar1,0,0);
  return pFVar4;
}

// IsSectionVisible @ 14e7c7500

EVisibility __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::IsSectionVisible
          (SInterchangeGenericAssetSkeletonConflictWidget *this,
          EInterchangeSkeletonCompareSection param_1)

{
  EVisibility EVar1;
  undefined7 in_register_00000011;
  byte in_R8B;
  
  EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  if (this->bShowSectionFlag[in_R8B] != false) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *(TEnumAsByte<EVisibility::Private> *)CONCAT71(in_register_00000011,param_1) = EVar1.Value.Value;
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
}

// OnDone @ 14e7cb170

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::OnDone
          (SInterchangeGenericAssetSkeletonConflictWidget *this,FReply *__return_storage_ptr__)

{
  if ((SWindow *)this->_padding_ != (SWindow *)0x0) {
    SWindow::RequestDestroyWindow((SWindow *)this->_padding_);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnExpandToConflict @ 14e7cbf70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::OnExpandToConflict
          (SInterchangeGenericAssetSkeletonConflictWidget *this,FReply *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> local_38;
  TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1> local_28
  ;
  
  iVar1 = (this->Joints).ArrayNum;
  pFVar4 = (this->Joints).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Joints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    local_38.Object = *(FSkeletonJoint **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = (this->CompareTree).Object;
    local_28.SharedReferenceCount.ReferenceController =
         (this->CompareTree).SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar2;
    UE::Interchange::Private::RecursivelyCollapseTreeItem(&local_28,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  iVar1 = (this->Joints).ArrayNum;
  pFVar4 = (this->Joints).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Joints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    local_38.Object = *(FSkeletonJoint **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = (this->CompareTree).Object;
    local_28.SharedReferenceCount.ReferenceController =
         (this->CompareTree).SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar2;
    UE::Interchange::Private::RecursivelyExpandTreeItem(&local_28,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnGenerateRowAssetReferencingSkeleton @ 14e7cc3b0

TSharedRef<ITableRow,1> * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::OnGenerateRowAssetReferencingSkeleton
          (SInterchangeGenericAssetSkeletonConflictWidget *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,TSharedPtr<FString,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  STextBlock *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SBorder *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  STableRow<TSharedPtr<FString,1>_> *pSVar9;
  bool bVar10;
  FArguments *pFVar11;
  FArguments *pFVar12;
  FName *pFVar13;
  ISlateStyle *pIVar14;
  FArguments *pFVar15;
  FText *pFVar16;
  TSharedRef<STextBlock,1> *pTVar17;
  TSharedRef<SBorder,1> *pTVar18;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *pTVar19;
  TSharedRef<ITableRow,1> *pTVar20;
  char *pcVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FLLMScope local_de8 [2];
  SWidget *local_de0;
  TReferenceControllerBase<1> *pTStack_dd8;
  SWidget *local_dd0;
  TReferenceControllerBase<1> *pTStack_dc8;
  TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_dc0;
  FSlateBrush *local_da8;
  undefined1 local_da0;
  undefined1 local_d98 [8];
  void *pvStack_d90;
  undefined8 local_d88;
  FName local_d80;
  FMemScope local_d78;
  FName local_d70;
  FMemScope local_d68;
  FName local_d60;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_d58;
  FMemScope local_d50;
  undefined8 local_d48;
  FSharedReferencer<1> local_d40;
  TAttribute<FText> local_d38;
  FName local_d08;
  FName local_d00;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> local_cf8;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> local_ce8;
  TSharedRef<SBorder,1> local_cd8;
  TSharedRef<STextBlock,1> local_cc8;
  FText local_cb8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_ca8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_c90;
  FArguments local_c78;
  FArguments local_980;
  FArguments local_5a0;
  
  pFVar1 = (this->AssetReferencingSkeleton).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->AssetReferencingSkeleton).ArrayNum * 0x10) {
    pFVar22 = pFVar1;
    do {
      if (*(FString **)pFVar22 == param_1->Object) {
        uVar23 = (longlong)pFVar22 - (longlong)pFVar1 >> 4;
        goto LAB_14e7cc408;
      }
      pFVar22 = pFVar22 + 0x10;
    } while (pFVar22 != pFVar1 + (longlong)(this->AssetReferencingSkeleton).ArrayNum * 0x10);
  }
  uVar23 = 0xffffffff;
LAB_14e7cc408:
  pFVar11 = STableRow<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_c78);
  pFVar12 = SBorder::FArguments::FArguments(&local_980);
  if ((uVar23 & 1) == 0) {
    pcVar21 = "ToolPanel.GroupBorder";
    pFVar13 = &local_d08;
  }
  else {
    pcVar21 = "ToolPanel.DarkGroupBorder";
    pFVar13 = &local_d00;
  }
  pFVar13 = ::FName::FName(pFVar13,pcVar21);
  FVar2 = *pFVar13;
  pIVar14 = FAppStyle::Get();
  local_da8 = (FSlateBrush *)(**(code **)((longlong)*pIVar14 + 0x50))(pIVar14,FVar2);
  local_da0 = 1;
  local_d98 = (undefined1  [8])0x0;
  pvStack_d90 = (void *)0x0;
  local_d88 = 0;
  (pFVar12->_BorderImage).Value = local_da8;
  (pFVar12->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d98);
  if (pvStack_d90 != (void *)0x0) {
    FMemory::Free(pvStack_d90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d98);
  pFVar15 = STextBlock::FArguments::FArguments(&local_5a0);
  pFVar16 = FText::FromString(&local_cb8,param_1->Object);
  FText::FText(&local_d38.Value,pFVar16);
  local_d38.bIsSet = true;
  local_d38.Getter._16_8_ = 0;
  local_d38.Getter._0_8_ = 0;
  local_d38.Getter._8_8_ = 0;
  pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_d38);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d80 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d78,&local_d80,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_c90,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x9e9,local_res8);
  FMemScope::~FMemScope(&local_d78);
  FLLMScope::~FLLMScope(local_res18);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_c90,&local_cc8,pFVar15);
  pTVar3 = (pTVar17->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar17->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_de0 = (pFVar12->_Content).Widget.Object;
  pTStack_dd8 = (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar12->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_dd8);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d70 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d68,&local_d70,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_ca8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x9e6,local_res10);
  FMemScope::~FMemScope(&local_d68);
  FLLMScope::~FLLMScope(local_res20);
  pTVar18 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_ca8,&local_cd8,pFVar12);
  pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar18->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_dd0 = (pFVar11->_Content).Widget.Object;
  pTStack_dc8 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_dc8);
  local_d58.Arg0 = param_2;
  FLLMScope::FLLMScope(local_de8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d60 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d50,&local_d60,true);
  local_dc0._RequiredArgs = &local_d58;
  local_dc0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar19 = MakeShared<STableRow<TSharedPtr<FString,1>_>,1>(&local_cf8);
  local_d40.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
  local_dc0._Widget.Object = pTVar19->Object;
  if (local_d40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_d40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d48 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_dc0._Widget.SharedReferenceCount,&local_d40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cf8.SharedReferenceCount.ReferenceController);
  pSVar9 = local_dc0._Widget.Object;
  if (local_dc0._Widget.Object == (STableRow<TSharedPtr<FString,1>_> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar20 = (TSharedRef<ITableRow,1> *)(*pcVar8)();
      return pTVar20;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar9->_padding_,"STableRow<TSharedPtr<FString> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x9e4,0x3f8);
  FMemScope::~FMemScope(&local_d50);
  FLLMScope::~FLLMScope(local_de8);
  pTVar19 = TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            ::operator<<=(&local_dc0,&local_ce8,pFVar11);
  __return_storage_ptr__->Object = (ITableRow *)pTVar19->Object;
  pTVar7 = (pTVar19->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ce8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_dc0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ca8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c90._Widget.SharedReferenceCount.ReferenceController);
  if (local_cb8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_cb8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5a0);
  SBorder::FArguments::~FArguments(&local_980);
  STableRow<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_c78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGenerateRowCompareTreeView @ 14e7cc8a0

TSharedRef<ITableRow,1> * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::OnGenerateRowCompareTreeView
          (SInterchangeGenericAssetSkeletonConflictWidget *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  byte *pbVar1;
  FSkeletonJoint *pFVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<ITableRow,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FLLMScope local_res10 [2];
  FName local_res18;
  TSharedRef<STableViewBase,1> *local_res20;
  FSharedReferencer<1> local_290;
  TSharedRef<STableViewBase,1> **local_288;
  FMemScope local_280;
  undefined8 local_278;
  FSharedReferencer<1> local_270;
  TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1> local_268;
  FSkeletonJoint *local_258;
  TReferenceControllerBase<1> *pTStack_250;
  FArguments local_248;
  
  pFVar8 = SInterchangeCompareSkeletonTreeViewItem::FArguments::FArguments(&local_248);
  pTVar11 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_258 = (pFVar8->_SkeletonCompareData).Object;
  pTStack_250 = (pFVar8->_SkeletonCompareData).SharedReferenceCount.ReferenceController;
  (pFVar8->_SkeletonCompareData).Object = pFVar2;
  (pFVar8->_SkeletonCompareData).SharedReferenceCount.ReferenceController = pTVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_250);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  local_res20 = param_2;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_280,&local_res18,true);
  local_288 = &local_res20;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_290.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = ::operator_new(0x418);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSInterchangeCompareSkeletonTreeViewItem___00_SharedPointerInternals__6B_
    ;
    memset(pTVar9 + 1,0,0x408);
    STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
    STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
              ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
               (pTVar9 + 1));
    pTVar9[1]._padding_ =
         (longlong)&SInterchangeCompareSkeletonTreeViewItem::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar9[1].SharedReferenceCount =
         &SInterchangeCompareSkeletonTreeViewItem::_vftable__for__SBorder__;
    pTVar9[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[0x41]._padding_ = 0;
    pTVar11 = pTVar9;
  }
  TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>::
  TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>
            (&local_268,(SInterchangeCompareSkeletonTreeViewItem *)(pTVar11 + 1),pTVar11);
  local_270.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
  if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_278 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_290,&local_270);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  if ((local_268.Object == (SInterchangeCompareSkeletonTreeViewItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar10;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&(local_268.Object)->_padding_,"SInterchangeCompareSkeletonTreeViewItem",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x9cf,0x408);
  FMemScope::~FMemScope(&local_280);
  FLLMScope::~FLLMScope(local_res10);
  if ((local_268.Object == (SInterchangeCompareSkeletonTreeViewItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar10;
  }
  SWidget::SWidgetConstruct((SWidget *)&(local_268.Object)->_padding_,(FSlateBaseNamedArgs *)pFVar8)
  ;
  SInterchangeCompareSkeletonTreeViewItem::Construct(local_268.Object,pFVar8,*local_288);
  if ((local_268.Object == (SInterchangeCompareSkeletonTreeViewItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar10;
  }
  if (((local_268.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_268.Object)->_padding_ + 0x228))(&(local_268.Object)->_padding_);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_14e7ccb3b;
  }
  bVar7 = 0x20;
LAB_14e7ccb3b:
  *(byte *)&(local_268.Object)->_padding_ = (byte)(local_268.Object)->_padding_ & 0xdf;
  *(byte *)&(local_268.Object)->_padding_ = (byte)(local_268.Object)->_padding_ | bVar7;
  if ((local_268.Object == (SInterchangeCompareSkeletonTreeViewItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar10;
  }
  pbVar1 = (byte *)((longlong)&(local_268.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_268.Object == (SInterchangeCompareSkeletonTreeViewItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar10;
  }
  FVar4.ReferenceController = local_290.ReferenceController;
  local_290.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_268.Object == (SInterchangeCompareSkeletonTreeViewItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._SkeletonCompareData.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  __return_storage_ptr__->Object = (ITableRow *)local_268.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGetChildrenRowCompareTreeView @ 14e7ccc40

void __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::OnGetChildrenRowCompareTreeView
          (SInterchangeGenericAssetSkeletonConflictWidget *this,
          TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_1,
          TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FSkeletonJoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  uVar7 = 0;
  lVar8 = 0;
  while( true ) {
    if (param_1->Object == (FSkeletonJoint *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_1->Object->Children).ArrayNum <= (int)uVar7) break;
    if (param_1->Object == (FSkeletonJoint *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = param_1->Object;
    uVar4 = 0;
    if ((int)uVar7 < (pFVar1->Children).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar6 = (pFVar1->Children).AllocatorInstance.Data;
    local_18 = *(longlong *)(pFVar6 + lVar8);
    local_10 = *(TReferenceControllerBase<1> **)(pFVar6 + lVar8 + 8);
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_18 != 0) {
      pFVar6 = (param_2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
         ((FScriptContainerElement *)&local_18 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(longlong *)pFVar6 = local_18;
      *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnKeyDown @ 14e7cdd80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::OnKeyDown
          (SInterchangeGenericAssetSkeletonConflictWidget *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar1 == EKeys::Escape.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar3) {
    if ((SWindow *)this->_padding_ != (SWindow *)0x0) {
      SWindow::RequestDestroyWindow((SWindow *)this->_padding_);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// SetSectionVisible @ 14e7dfa70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::SetSectionVisible
          (SInterchangeGenericAssetSkeletonConflictWidget *this,FReply *__return_storage_ptr__,
          EInterchangeSkeletonCompareSection param_1)

{
  this->bShowSectionFlag[param_1] = this->bShowSectionFlag[param_1] == false;
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// SupportsKeyboardFocus @ 14e7e4770

bool __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::SupportsKeyboardFocus
          (SInterchangeGenericAssetSkeletonConflictWidget *this)

{
  return true;
}

