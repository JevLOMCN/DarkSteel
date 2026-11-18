// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// Construct @ 1469aecc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SRichInlineImage::Construct
          (SRichInlineImage *this,FArguments *param_1,FSlateBrush *param_2,FTextBlockStyle *param_3,
          TOptional<int> param_4,TOptional<int> param_5,Type param_6)

{
  undefined1 *this_00;
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SBox *pSVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  ushort uVar9;
  FSlateApplication *pFVar10;
  FArguments *pFVar11;
  FArguments *pFVar12;
  FArguments *pFVar13;
  TSharedRef<SImage,1> *pTVar14;
  TSharedRef<SScaleBox,1> *pTVar15;
  TSharedRef<SBox,1> *pTVar16;
  float fVar17;
  T0RequiredArgs local_res8 [16];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_a78;
  FLLMScope local_a74;
  FLLMScope local_a70 [2];
  float local_a68;
  undefined1 local_a64;
  undefined1 local_a60 [8];
  void *pvStack_a58;
  undefined8 local_a50;
  float local_a48;
  undefined1 local_a44;
  undefined1 local_a40 [8];
  void *pvStack_a38;
  undefined8 local_a30;
  Type local_a28;
  undefined1 local_a24;
  undefined1 local_a20 [8];
  void *pvStack_a18;
  undefined8 local_a10;
  undefined4 local_a08;
  undefined1 local_a04;
  undefined1 local_a00 [8];
  void *pvStack_9f8;
  undefined8 local_9f0;
  SImage *local_9e8;
  TReferenceControllerBase<1> *pTStack_9e0;
  SScaleBox *local_9d8;
  TReferenceControllerBase<1> *pTStack_9d0;
  SBox *local_9c8;
  TReferenceControllerBase<1> *pTStack_9c0;
  FSlateBrush *local_9b8;
  undefined1 local_9b0;
  undefined1 local_9a8 [8];
  void *pvStack_9a0;
  undefined8 local_998;
  FName local_990;
  FMemScope local_988;
  FName local_980;
  FMemScope local_978;
  FName local_970;
  FMemScope local_968;
  TSharedRef<FSlateFontMeasure,1> local_960;
  TSharedRef<SBox,1> local_950;
  TSharedRef<SScaleBox,1> local_940;
  TSharedRef<SImage,1> local_930;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_920;
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs> local_908;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_8f0;
  FArguments local_8d8;
  FArguments local_648;
  FArguments local_3a0;
  
  if (param_2 == (FSlateBrush *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Brush",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
                       ,0x24,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = FSlateApplication::Get();
  lVar1 = *(longlong *)&pFVar10->field_0x60;
  if (*(longlong *)(lVar1 + 8) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar1 + 8),&local_960);
  fVar17 = *(float *)&(param_2->ImageSize).field_0x4;
  uVar9 = FSlateFontMeasure::GetMaxCharacterHeight(local_960.Object,&param_3->Font,__real_3f800000);
  local_a68 = (float)uVar9;
  if (fVar17 <= (float)uVar9) {
    local_a68 = fVar17;
  }
  if (*(char *)((longlong)param_5 + 4) != '\0') {
    local_a68 = (float)*(int *)param_5;
  }
  fVar17 = local_a68;
  if (*(char *)((longlong)param_4 + 4) != '\0') {
    fVar17 = (float)*(int *)param_4;
  }
  pFVar11 = SBox::FArguments::FArguments(&local_3a0);
  local_a64 = 1;
  local_a50 = 0;
  local_a60 = (undefined1  [8])0x0;
  pvStack_a58 = (void *)0x0;
  (pFVar11->_HeightOverride).Value.Size = local_a68;
  (pFVar11->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a60);
  if (pvStack_a58 != (void *)0x0) {
    FMemory::Free(pvStack_a58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a60);
  local_a44 = 1;
  local_a30 = 0;
  local_a40 = (undefined1  [8])0x0;
  pvStack_a38 = (void *)0x0;
  (pFVar11->_WidthOverride).Value.Size = fVar17;
  (pFVar11->_WidthOverride).bIsSet = true;
  local_a48 = fVar17;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a40);
  if (pvStack_a38 != (void *)0x0) {
    FMemory::Free(pvStack_a38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a40);
  pFVar12 = SScaleBox::FArguments::FArguments(&local_8d8);
  local_a28 = param_6;
  local_a24 = 1;
  local_a10 = 0;
  local_a20 = (undefined1  [8])0x0;
  pvStack_a18 = (void *)0x0;
  (pFVar12->_Stretch).Value = param_6;
  (pFVar12->_Stretch).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_Stretch).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a20);
  if (pvStack_a18 != (void *)0x0) {
    FMemory::Free(pvStack_a18);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a20);
  local_a04 = 1;
  local_a08 = 1;
  local_9f0 = 0;
  local_a00 = (undefined1  [8])0x0;
  pvStack_9f8 = (void *)0x0;
  (pFVar12->_StretchDirection).Value = DownOnly;
  (pFVar12->_StretchDirection).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_StretchDirection).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a00);
  if (pvStack_9f8 != (void *)0x0) {
    FMemory::Free(pvStack_9f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a00);
  pFVar12->_VAlign = VAlign_Center;
  pFVar13 = SImage::FArguments::FArguments(&local_648);
  local_9b0 = 1;
  local_998 = 0;
  local_9a8 = (undefined1  [8])0x0;
  pvStack_9a0 = (void *)0x0;
  (pFVar13->_Image).Value = param_2;
  (pFVar13->_Image).bIsSet = true;
  local_9b8 = param_2;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a8);
  if (pvStack_9a0 != (void *)0x0) {
    FMemory::Free(pvStack_9a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9a8);
  FLLMScope::FLLMScope(&local_a78,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_990 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_988,&local_990,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_8f0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
             ,0x3f,local_res8);
  FMemScope::~FMemScope(&local_988);
  FLLMScope::~FLLMScope(&local_a78);
  pTVar14 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8f0,&local_930,pFVar13);
  pTVar2 = (pTVar14->SharedReferenceCount).ReferenceController;
  local_9e8 = pTVar14->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar12->_Content).Widget.Object = (SWidget *)local_9e8;
  (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_9e0 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(&local_a74,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_980 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_978,&local_980,true);
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>
            (&local_908,"SScaleBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
             ,0x3a,local_res18);
  FMemScope::~FMemScope(&local_978);
  FLLMScope::~FLLMScope(&local_a74);
  pTVar15 = TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_908,&local_940,pFVar12);
  pTVar3 = (pTVar15->SharedReferenceCount).ReferenceController;
  local_9d8 = pTVar15->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = (SWidget *)local_9d8;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  pTStack_9d0 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(local_a70,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_970 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_968,&local_970,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_920,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
             ,0x36,local_res20);
  FMemScope::~FMemScope(&local_968);
  FLLMScope::~FLLMScope(local_a70);
  pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_920,&local_950,pFVar11);
  this_00 = &this->field_0x238;
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar16->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SBox **)&this->field_0x248 = pSVar5;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar4;
  local_9c8 = pSVar5;
  pTStack_9c0 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_950.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_920._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_940.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_908._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_930.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_648);
  SScaleBox::FArguments::~FArguments(&local_8d8);
  SBox::FArguments::~FArguments(&local_3a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_960.SharedReferenceCount.ReferenceController);
  return;
}

