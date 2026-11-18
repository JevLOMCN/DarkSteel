// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Construct @ 14bd4a620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SDS_EmoteImage::Construct
          (SDS_EmoteImage *this,FArguments *param_1,FSlateBrush *param_2,FTextBlockStyle *param_3,
          TOptional<int> param_4,TOptional<int> param_5,Type param_6)

{
  byte *pbVar1;
  undefined1 *this_00;
  longlong lVar2;
  code *pcVar3;
  SBox *pSVar4;
  FSharedReferencer<1> FVar5;
  SScaleBox *pSVar6;
  FSharedReferencer<1> FVar7;
  SImage *pSVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  ushort uVar13;
  uint uVar14;
  FSlateApplication *pFVar15;
  FArguments *pFVar16;
  FArguments *pFVar17;
  FArguments *pFVar18;
  float fVar19;
  float fVar20;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_a58;
  FLLMScope local_a54;
  FLLMScope local_a50 [2];
  float local_a48;
  undefined1 local_a44;
  undefined1 local_a40 [8];
  ForAnyElementType FStack_a38;
  ulonglong local_a30;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_a28;
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs> local_a10;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_9f8;
  float local_9e0;
  undefined1 local_9dc;
  undefined1 local_9d8 [8];
  void *pvStack_9d0;
  undefined8 local_9c8;
  Type local_9c0;
  undefined1 local_9bc;
  undefined1 local_9b8 [8];
  void *pvStack_9b0;
  undefined8 local_9a8;
  undefined4 local_9a0;
  undefined1 local_99c;
  undefined1 local_998 [8];
  void *pvStack_990;
  undefined8 local_988;
  FSlateBrush *local_980;
  undefined1 local_978;
  undefined1 local_970 [8];
  void *pvStack_968;
  undefined8 local_960;
  FName local_958;
  FMemScope local_950;
  FName local_948;
  FMemScope local_940;
  FName local_938;
  FMemScope local_930;
  TSharedRef<FSlateFontMeasure,1> local_928;
  FDestructionSentinel local_918;
  SWidget *local_900;
  TReferenceControllerBase<1> *pTStack_8f8;
  SWidget *local_8f0;
  TReferenceControllerBase<1> *pTStack_8e8;
  undefined8 local_8e0;
  TReferenceControllerBase<1> *pTStack_8d8;
  undefined1 local_8d0 [536];
  undefined1 local_6b8 [32];
  undefined1 local_698 [32];
  undefined1 local_678 [32];
  undefined1 local_658 [24];
  undefined1 local_640 [520];
  undefined1 local_438 [48];
  undefined1 local_408 [56];
  undefined1 local_3d0 [32];
  undefined1 local_3b0 [24];
  FArguments local_398;
  
  pFVar15 = FSlateApplication::Get();
  lVar2 = *(longlong *)&pFVar15->field_0x60;
  if (*(longlong *)(lVar2 + 8) == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar2 + 8),&local_928);
  uVar13 = FSlateFontMeasure::GetMaxCharacterHeight(local_928.Object,&param_3->Font,__real_3f800000)
  ;
  uVar14 = (uint)uVar13;
  if (*(char *)((longlong)param_5 + 4) != '\0') {
    uVar14 = *(uint *)param_5;
  }
  fVar19 = (float)(int)uVar14;
  fVar20 = fVar19;
  if (*(char *)((longlong)param_4 + 4) != '\0') {
    fVar20 = (float)*(int *)param_4;
  }
  pFVar16 = SBox::FArguments::FArguments(&local_398);
  local_9dc = 1;
  local_9c8 = 0;
  local_9d8 = (undefined1  [8])0x0;
  pvStack_9d0 = (void *)0x0;
  (pFVar16->_HeightOverride).Value.Size = fVar19;
  (pFVar16->_HeightOverride).bIsSet = true;
  local_9e0 = fVar19;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
  if (pvStack_9d0 != (void *)0x0) {
    FMemory::Free(pvStack_9d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d8);
  local_a44 = 1;
  local_a30 = 0;
  local_a40 = (undefined1  [8])0x0;
  FStack_a38.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_WidthOverride).Value.Size = fVar20;
  (pFVar16->_WidthOverride).bIsSet = true;
  local_a48 = fVar20;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a40,
             (FWriteAccessScope *)&local_918);
  if (((int)local_a30 != 0) && (FStack_a38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a38,0,0,0x10);
    local_a30 = local_a30 & 0xffffffff00000000;
  }
  if (local_918.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_918.Accessor,&local_918);
  }
  if (FStack_a38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a40);
  pFVar17 = SScaleBox::FArguments::FArguments((FArguments *)local_8d0);
  local_9c0 = param_6;
  local_9bc = 1;
  local_9a8 = 0;
  local_9b8 = (undefined1  [8])0x0;
  pvStack_9b0 = (void *)0x0;
  (pFVar17->_Stretch).Value = param_6;
  (pFVar17->_Stretch).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Stretch).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b8);
  if (pvStack_9b0 != (void *)0x0) {
    FMemory::Free(pvStack_9b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9b8);
  local_99c = 1;
  local_9a0 = 1;
  local_988 = 0;
  local_998 = (undefined1  [8])0x0;
  pvStack_990 = (void *)0x0;
  (pFVar17->_StretchDirection).Value = DownOnly;
  (pFVar17->_StretchDirection).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_StretchDirection).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_998);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_998);
  if (pvStack_990 != (void *)0x0) {
    FMemory::Free(pvStack_990);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_998);
  pFVar17->_VAlign = VAlign_Center;
  pFVar18 = SImage::FArguments::FArguments((FArguments *)local_640);
  local_978 = 1;
  local_960 = 0;
  local_970 = (undefined1  [8])0x0;
  pvStack_968 = (void *)0x0;
  (pFVar18->_Image).Value = param_2;
  (pFVar18->_Image).bIsSet = true;
  local_980 = param_2;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_970);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_970);
  if (pvStack_968 != (void *)0x0) {
    FMemory::Free(pvStack_968);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_970);
  FLLMScope::FLLMScope(&local_a58,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_958 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_950,&local_958,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_9f8,"SImage",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Slate\\Widgets\\SDS_EmoteImage.h"
             ,0x32,local_res8);
  FMemScope::~FMemScope(&local_950);
  FLLMScope::~FLLMScope(&local_a58);
  pSVar8 = local_9f8._Widget.Object;
  if (local_9f8._Widget.Object == (SImage *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_9f8._Widget.Object,(FSlateBaseNamedArgs *)pFVar18);
  SImage::Construct(local_9f8._Widget.Object,pFVar18);
  if (local_9f8._Widget.Object == (SImage *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((local_9f8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_9f8._Widget.Object)->_padding_ + 0x228))(local_9f8._Widget.Object);
    bVar12 = 0;
    if (cVar11 != '\0') goto LAB_14bd4aa49;
  }
  else {
LAB_14bd4aa49:
    bVar12 = 0x20;
  }
  *(byte *)&(local_9f8._Widget.Object)->_padding_ =
       (byte)(local_9f8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_9f8._Widget.Object)->_padding_ =
       (byte)(local_9f8._Widget.Object)->_padding_ | bVar12;
  if (local_9f8._Widget.Object == (SImage *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_9f8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_9f8._Widget.Object == (SImage *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar9.ReferenceController = local_9f8._Widget.SharedReferenceCount.ReferenceController;
  local_9f8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_9f8._Widget.Object = (SImage *)0x0;
  if (pSVar8 == (SImage *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
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
  local_900 = (pFVar17->_Content).Widget.Object;
  pTStack_8f8 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)pSVar8;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_8f8);
  FLLMScope::FLLMScope(&local_a54,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_948 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_940,&local_948,true);
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>
            (&local_a10,"SScaleBox",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Slate\\Widgets\\SDS_EmoteImage.h"
             ,0x2d,local_res18);
  FMemScope::~FMemScope(&local_940);
  FLLMScope::~FLLMScope(&local_a54);
  pSVar6 = local_a10._Widget.Object;
  if (local_a10._Widget.Object == (SScaleBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_a10._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
  SScaleBox::Construct(local_a10._Widget.Object,pFVar17);
  if (local_a10._Widget.Object == (SScaleBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((local_a10._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_a10._Widget.Object)->_padding_ + 0x228))(local_a10._Widget.Object);
    bVar12 = 0;
    if (cVar11 != '\0') goto LAB_14bd4ac2f;
  }
  else {
LAB_14bd4ac2f:
    bVar12 = 0x20;
  }
  *(byte *)&(local_a10._Widget.Object)->_padding_ =
       (byte)(local_a10._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_a10._Widget.Object)->_padding_ =
       (byte)(local_a10._Widget.Object)->_padding_ | bVar12;
  if (local_a10._Widget.Object == (SScaleBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_a10._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_a10._Widget.Object == (SScaleBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7.ReferenceController = local_a10._Widget.SharedReferenceCount.ReferenceController;
  local_a10._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a10._Widget.Object = (SScaleBox *)0x0;
  if (pSVar6 == (SScaleBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_8f0 = (pFVar16->_Content).Widget.Object;
  pTStack_8e8 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_8e8);
  FLLMScope::FLLMScope(local_a50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_938 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_930,&local_938,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_a28,"SBox",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Slate\\Widgets\\SDS_EmoteImage.h"
             ,0x29,local_res20);
  FMemScope::~FMemScope(&local_930);
  FLLMScope::~FLLMScope(local_a50);
  pSVar4 = local_a28._Widget.Object;
  if (local_a28._Widget.Object == (SBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_a28._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  SBox::Construct(local_a28._Widget.Object,pFVar16);
  if (local_a28._Widget.Object == (SBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((local_a28._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_a28._Widget.Object)->_padding_ + 0x228))(local_a28._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_14bd4ae16;
  }
  bVar12 = 0x20;
LAB_14bd4ae16:
  *(byte *)&(local_a28._Widget.Object)->_padding_ =
       (byte)(local_a28._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_a28._Widget.Object)->_padding_ =
       (byte)(local_a28._Widget.Object)->_padding_ | bVar12;
  if (local_a28._Widget.Object == (SBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_a28._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_a28._Widget.Object == (SBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar5.ReferenceController = local_a28._Widget.SharedReferenceCount.ReferenceController;
  local_a28._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a28._Widget.Object = (SBox *)0x0;
  if (pSVar4 == (SBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = &this->field_0x238;
  if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_8e0 = *(undefined8 *)&this->field_0x248;
  pTStack_8d8 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SBox **)&this->field_0x248 = pSVar4;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_8d8);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a10._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9f8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b0);
  if ((void *)local_3b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
  if ((void *)local_3d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_408);
  if ((void *)local_408._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_408._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_408);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_438);
  if ((void *)local_438._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_438._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_438);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_640);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_658);
  if ((void *)local_658._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_658._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_658);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
  if ((void *)local_678._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_678._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_678);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_698);
  if ((void *)local_698._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_698._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_698);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b8);
  if ((void *)local_6b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8d0._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_8d0);
  SBox::FArguments::~FArguments(&local_398);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_928.SharedReferenceCount.ReferenceController);
  return;
}

