// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 4

// Construct @ 14d84bc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d84bdf1) */
/* WARNING: Removing unreachable block (ram,0x00014d84be20) */

void __thiscall
UE::PropertyViewer::SFieldIcon::Construct(SFieldIcon *this,FArguments *param_1,FProperty *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  SImage *pSVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 uVar9;
  SLayeredImage *pSVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar15;
  FArguments *pFVar16;
  TSharedRef<SImage,1> *pTVar17;
  FScriptContainerElement *pFVar18;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar19;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar20;
  ulonglong uVar21;
  undefined1 auStackY_7b8 [32];
  undefined1 local_788 [8];
  TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>
  local_780;
  T0RequiredArgs local_770 [4];
  undefined4 local_76c;
  FLLMScope local_768 [2];
  TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
  local_760;
  SImage *local_748;
  TReferenceControllerBase<1> *pTStack_740;
  FName local_738;
  FMemScope local_730;
  FName local_728;
  T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>
  local_720;
  FMemScope local_718;
  TAttribute<FSlateBrush_const_*> local_710;
  FLinearColor_u_0 local_6e8;
  undefined4 local_6d8;
  undefined1 local_6d4;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  TSharedRef<SImage,1> local_6b8;
  undefined8 local_6a8;
  TReferenceControllerBase<1> *pTStack_6a0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_698;
  FArguments local_680;
  FArguments local_3d8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> local_f0;
  uint local_e8;
  int local_e4;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_e0;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_90;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  local_76c = 0;
  if ((param_2 == (FProperty *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Property",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldIcon.cpp"
                          ,0x27,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar12 = (param_1->_OverrideColorSettings).bIsSet == false;
  if (bVar12) {
    FFieldIconFinder::GetPropertyIcon
              (&local_e0,param_2,&AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings);
    pTVar15 = &local_e0;
  }
  else {
    pTVar15 = FFieldIconFinder::GetPropertyIcon
                        (&local_90,param_2,&(param_1->_OverrideColorSettings).TypedValue);
  }
  FVar20 = (pTVar15->AllocatorInstance).SecondaryData;
  if (FVar20 == (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
    local_130 = *(undefined8 *)(pTVar15->AllocatorInstance).InlineData;
    uStack_128 = *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 8);
    local_120 = *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x10);
    uStack_118 = *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x18);
    local_110 = *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x20);
    uStack_108 = *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x28);
    local_100 = *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x30);
    uStack_f8 = *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x38);
  }
  (pTVar15->AllocatorInstance).SecondaryData =
       (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0;
  uVar4 = pTVar15->ArrayNum;
  uVar21 = (ulonglong)(int)uVar4;
  local_e8 = uVar4;
  local_f0 = FVar20;
  local_e4 = pTVar15->ArrayMax;
  pTVar15->ArrayNum = 0;
  pTVar15->ArrayMax = 2;
  if ((bVar12) &&
     (local_e0.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0)) {
    FMemory::Free((void *)local_e0.AllocatorInstance.SecondaryData);
  }
  if ((!bVar12) &&
     (local_90.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0)) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (uVar4 == 1) {
    pFVar16 = SImage::FArguments::FArguments(&local_680);
    FVar19 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)&local_130;
    if (FVar20 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
      FVar19 = FVar20;
    }
    local_710.Value = *(FSlateBrush **)FVar19;
    local_710.bIsSet = true;
    local_710.Getter._0_8_ = 0;
    local_710.Getter._8_8_ = 0;
    local_710.Getter._16_8_ = 0;
    pFVar16 = SImage::FArguments::Image(pFVar16,&local_710);
    FVar19 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)&local_130;
    if (FVar20 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
      FVar19 = FVar20;
    }
    local_6e8._0_8_ = *(undefined8 *)((longlong)FVar19 + 8);
    local_6e8._8_8_ = *(undefined8 *)((longlong)FVar19 + 0x10);
    local_6d8 = *(undefined4 *)((longlong)FVar19 + 0x18);
    local_6c0 = 0;
    local_6d4 = 1;
    local_6d0 = 0;
    uStack_6c8 = 0;
    pFVar16 = SImage::FArguments::ColorAndOpacity
                        (pFVar16,(TAttribute<FSlateColor> *)&local_6e8._s_0);
    FLLMScope::FLLMScope(local_768,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_738 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_730,&local_738,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_698,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldIcon.cpp"
               ,0x2e,local_770);
    FMemScope::~FMemScope(&local_730);
    FLLMScope::~FLLMScope(local_768);
    pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_698,&local_6b8,pFVar16);
    puVar3 = &this->field_0x238;
    pTVar5 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar17->Object;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)puVar3);
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)puVar3);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x250;
    *(SImage **)&this->field_0x248 = pSVar6;
    *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar5;
    local_748 = pSVar6;
    pTStack_740 = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)puVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_698._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_680);
    goto LAB_14d84c2d5;
  }
  local_780.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_780.ArrayNum = 0;
  local_780.ArrayMax = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar4,&local_780.AllocatorInstance,0,&local_780.ArrayMax);
  }
  FVar19 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)&local_130;
  if (FVar20 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
    FVar19 = FVar20;
  }
  FVar20 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
           (uVar21 * 0x20 + (longlong)FVar19);
  while( true ) {
    if ((uint)uVar21 != uVar4) {
      local_788[0] = 0;
      `TCheckedPointerIterator<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_788);
    }
    if (FVar19 == FVar20) break;
    if (local_780.ArrayNum == local_780.ArrayMax) {
      local_780.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x858,&local_780.AllocatorInstance,&local_780.ArrayMax);
    }
    uVar21 = (ulonglong)local_e8;
    pFVar18 = local_780.AllocatorInstance.Data + (longlong)local_780.ArrayNum * 0x58;
    *(undefined8 *)pFVar18 = *(undefined8 *)FVar19;
    pFVar18[8] = (FScriptContainerElement)0x1;
    *(undefined8 *)(pFVar18 + 0x20) = 0;
    *(undefined8 *)(pFVar18 + 0x10) = 0;
    *(undefined8 *)(pFVar18 + 0x18) = 0;
    uVar9 = *(undefined8 *)((longlong)FVar19 + 0x10);
    *(undefined8 *)(pFVar18 + 0x28) = *(undefined8 *)((longlong)FVar19 + 8);
    *(undefined8 *)(pFVar18 + 0x30) = uVar9;
    puVar1 = (undefined8 *)((longlong)FVar19 + 0x18);
    FVar19 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
             ((longlong)FVar19 + 0x20);
    *(undefined4 *)(pFVar18 + 0x38) = *(undefined4 *)puVar1;
    pFVar18[0x3c] = (FScriptContainerElement)0x1;
    *(undefined8 *)(pFVar18 + 0x50) = 0;
    *(undefined8 *)(pFVar18 + 0x40) = 0;
    *(undefined8 *)(pFVar18 + 0x48) = 0;
    local_780.ArrayNum = local_780.ArrayNum + 1;
  }
  pFVar16 = SImage::FArguments::FArguments(&local_3d8);
  local_720.Arg0 = &local_780;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_76c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_728 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_718,&local_728,true);
  TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
  ::
  TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
            (&local_760,"SLayeredImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldIcon.cpp"
             ,0x3e,&local_720);
  FMemScope::~FMemScope(&local_718);
  FLLMScope::~FLLMScope((FLLMScope *)&local_76c);
  pSVar10 = local_760._Widget.Object;
  if ((local_760._Widget.Object == (SLayeredImage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_760._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  SLayeredImage::Construct(local_760._Widget.Object,pFVar16,(local_760._RequiredArgs)->Arg0);
  if ((local_760._Widget.Object == (SLayeredImage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_760._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar13 = (**(code **)((local_760._Widget.Object)->_padding_ + 0x228))(local_760._Widget.Object);
    bVar14 = 0;
    if (cVar13 != '\0') goto LAB_14d84c19a;
  }
  else {
LAB_14d84c19a:
    bVar14 = 0x20;
  }
  *(byte *)&(local_760._Widget.Object)->_padding_ =
       (byte)(local_760._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_760._Widget.Object)->_padding_ =
       (byte)(local_760._Widget.Object)->_padding_ | bVar14;
  if ((local_760._Widget.Object == (SLayeredImage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_760._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_760._Widget.Object == (SLayeredImage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar11.ReferenceController = local_760._Widget.SharedReferenceCount.ReferenceController;
  local_760._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_760._Widget.Object = (SLayeredImage *)0x0;
  if ((pSVar10 == (SLayeredImage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar3 = &this->field_0x238;
  if (FVar11.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)puVar3);
  }
  else {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)puVar3);
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6a8 = *(undefined8 *)&this->field_0x248;
  pTStack_6a0 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SLayeredImage **)&this->field_0x248 = pSVar10;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = FVar11.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6a0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)puVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_760._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_3d8);
  DestructItems<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,int>
            ((TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_> *)
             local_780.AllocatorInstance.Data,local_780.ArrayNum);
  FVar20 = local_f0;
  if ((TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_> *)
      local_780.AllocatorInstance.Data !=
      (TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_> *)0x0) {
    FMemory::Free(local_780.AllocatorInstance.Data);
    FVar20 = local_f0;
  }
LAB_14d84c2d5:
  if (FVar20 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
    FMemory::Free((void *)FVar20);
  }
  return;
}

// Construct @ 14d84c320

void __thiscall
UE::PropertyViewer::SFieldIcon::Construct(SFieldIcon *this,FArguments *param_1,UClass *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SImage *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FArguments *pFVar6;
  FSlateBrush *pFVar7;
  TSharedRef<SImage,1> *pTVar8;
  undefined1 *this_00;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  undefined1 local_338 [8];
  ForAnyElementType FStack_330;
  ulonglong local_328;
  SImage *local_320;
  TReferenceControllerBase<1> *pTStack_318;
  FMemScope local_310;
  FDestructionSentinel local_308;
  TSharedRef<SImage,1> local_2f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2e0;
  FArguments local_2c8;
  
  if (param_2 == (UClass *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Class",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldIcon.cpp"
                       ,0xf,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = SImage::FArguments::FArguments(&local_2c8);
  pFVar7 = FFieldIconFinder::GetIcon((UObject *)param_2);
  local_338 = (undefined1  [8])0x0;
  FStack_330.Data = (FScriptContainerElement *)0x0;
  local_328 = 0;
  (pFVar6->_Image).Value = pFVar7;
  (pFVar6->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_338);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
             (FWriteAccessScope *)&local_308);
  if (((int)local_328 != 0) && (FStack_330.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_330.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_330,0,0,0x10);
    local_328 = local_328 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_330.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_338);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_310,&local_res20,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2e0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldIcon.cpp"
             ,0x13,local_res8);
  FMemScope::~FMemScope(&local_310);
  FLLMScope::~FLLMScope(local_res18);
  pTVar8 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2e0,&local_2f0,pFVar6);
  this_00 = &this->field_0x238;
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar8->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SImage **)&this->field_0x248 = pSVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar1;
  local_320 = pSVar2;
  pTStack_318 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2c8);
  return;
}

// Construct @ 14d84c560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PropertyViewer::SFieldIcon::Construct(SFieldIcon *this,FArguments *param_1,UFunction *param_2)

{
  undefined1 *this_00;
  int iVar1;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar2;
  TReferenceControllerBase<1> *pTVar3;
  SImage *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  FArguments *pFVar9;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar10;
  TSharedRef<SImage,1> *pTVar11;
  undefined1 auStackY_4a8 [32];
  T0RequiredArgs local_478 [4];
  undefined4 local_474;
  SImage *local_470;
  TReferenceControllerBase<1> *pTStack_468;
  FName local_460;
  FMemScope local_458;
  TAttribute<FSlateBrush_const_*> local_450;
  FLinearColor_u_0 local_428;
  undefined4 local_418;
  undefined1 local_414;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  TSharedRef<SImage,1> local_3f8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3e8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> local_390;
  int local_388;
  int local_384;
  FArguments local_380;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_d8;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_474 = 0;
  if (param_2 == (UFunction *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Function",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldIcon.cpp"
                       ,0x46,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar7 = (param_1->_OverrideColorSettings).bIsSet == false;
  if (bVar7) {
    FFieldIconFinder::GetFunctionIcon
              (&local_d8,param_2,&AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings);
    pTVar8 = &local_d8;
  }
  else {
    pTVar8 = FFieldIconFinder::GetFunctionIcon
                       (&local_88,param_2,&(param_1->_OverrideColorSettings).TypedValue);
  }
  FVar2 = (pTVar8->AllocatorInstance).SecondaryData;
  if (FVar2 == (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
    local_3d0 = *(undefined8 *)(pTVar8->AllocatorInstance).InlineData;
    uStack_3c8 = *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 8);
    local_3c0 = *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x10);
    uStack_3b8 = *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x18);
    local_3b0 = *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x20);
    uStack_3a8 = *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x28);
    local_3a0 = *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x30);
    uStack_398 = *(undefined8 *)((pTVar8->AllocatorInstance).InlineData + 0x38);
  }
  (pTVar8->AllocatorInstance).SecondaryData =
       (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0;
  iVar1 = pTVar8->ArrayNum;
  local_384 = pTVar8->ArrayMax;
  pTVar8->ArrayNum = 0;
  pTVar8->ArrayMax = 2;
  local_390 = FVar2;
  local_388 = iVar1;
  if (bVar7) {
    if (local_d8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
      FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
    }
  }
  if ((!bVar7) &&
     (local_88.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0)) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (0 < iVar1) {
    pFVar9 = SImage::FArguments::FArguments(&local_380);
    FVar10 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)&local_3d0;
    if (FVar2 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
      FVar10 = FVar2;
    }
    local_450.Value = *(FSlateBrush **)FVar10;
    local_450.bIsSet = true;
    local_450.Getter._0_8_ = 0;
    local_450.Getter._8_8_ = 0;
    local_450.Getter._16_8_ = 0;
    pFVar9 = SImage::FArguments::Image(pFVar9,&local_450);
    if (iVar1 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar10 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)&local_3d0;
    if (FVar2 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
      FVar10 = FVar2;
    }
    local_428._0_8_ = *(undefined8 *)((longlong)FVar10 + 8);
    local_428._8_8_ = *(undefined8 *)((longlong)FVar10 + 0x10);
    local_418 = *(undefined4 *)((longlong)FVar10 + 0x18);
    local_400 = 0;
    local_414 = 1;
    local_410 = 0;
    uStack_408 = 0;
    pFVar9 = SImage::FArguments::ColorAndOpacity(pFVar9,(TAttribute<FSlateColor> *)&local_428._s_0);
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_474,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
              );
    local_460 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_458,&local_460,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_3e8,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldIcon.cpp"
               ,0x4d,local_478);
    FMemScope::~FMemScope(&local_458);
    FLLMScope::~FLLMScope((FLLMScope *)&local_474);
    pTVar11 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_3e8,&local_3f8,pFVar9);
    this_00 = &this->field_0x238;
    pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar11->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x250;
    *(SImage **)&this->field_0x248 = pSVar4;
    *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar3;
    local_470 = pSVar4;
    pTStack_468 = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e8._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_380);
  }
  if (FVar2 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// Construct @ 14d84c890

void __thiscall
UE::PropertyViewer::SFieldIcon::Construct
          (SFieldIcon *this,FArguments *param_1,UScriptStruct *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SImage *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FArguments *pFVar6;
  FSlateBrush *pFVar7;
  TSharedRef<SImage,1> *pTVar8;
  undefined1 *this_00;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  undefined1 local_338 [8];
  ForAnyElementType FStack_330;
  ulonglong local_328;
  SImage *local_320;
  TReferenceControllerBase<1> *pTStack_318;
  FMemScope local_310;
  FDestructionSentinel local_308;
  TSharedRef<SImage,1> local_2f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2e0;
  FArguments local_2c8;
  
  if (param_2 == (UScriptStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldIcon.cpp"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = SImage::FArguments::FArguments(&local_2c8);
  pFVar7 = FFieldIconFinder::GetIcon((UObject *)param_2);
  local_338 = (undefined1  [8])0x0;
  FStack_330.Data = (FScriptContainerElement *)0x0;
  local_328 = 0;
  (pFVar6->_Image).Value = pFVar7;
  (pFVar6->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_338);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
             (FWriteAccessScope *)&local_308);
  if (((int)local_328 != 0) && (FStack_330.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_330.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_330,0,0,0x10);
    local_328 = local_328 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_330.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_338);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_310,&local_res20,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2e0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldIcon.cpp"
             ,0x1f,local_res8);
  FMemScope::~FMemScope(&local_310);
  FLLMScope::~FLLMScope(local_res18);
  pTVar8 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2e0,&local_2f0,pFVar6);
  this_00 = &this->field_0x238;
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar8->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SImage **)&this->field_0x248 = pSVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar1;
  local_320 = pSVar2;
  pTStack_318 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2c8);
  return;
}

