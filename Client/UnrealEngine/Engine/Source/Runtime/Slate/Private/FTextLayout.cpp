// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 82

// FTextLayout @ 142846420

FTextLayout * __thiscall FTextLayout::FTextLayout(FTextLayout *this)

{
  TReferenceControllerBase<1> *pTVar1;
  ETextShapingMethod EVar2;
  uint uVar3;
  TSharedRef<IBreakIterator,1> *pTVar4;
  ETextFlowDirection EVar5;
  bool bVar6;
  TSharedRef<IBreakIterator,1> local_28;
  TSharedRef<IBreakIterator,1> local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->LineModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LineModels).ArrayNum = 0;
  (this->LineModels).ArrayMax = 0;
  (this->LineViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LineViews).ArrayNum = 0;
  (this->LineViews).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FTextLayout__6B_;
  this->CachedLayoutGeneration = 0;
  *(undefined8 *)&(this->LineViewsToJustify).Elements.field_0x10 = 0;
  *(undefined8 *)&(this->LineViewsToJustify).Elements.field_0x18 = 0;
  (this->LineViewsToJustify).Hash.InlineData[0] = '\0';
  (this->LineViewsToJustify).Hash.InlineData[1] = '\0';
  (this->LineViewsToJustify).Hash.InlineData[2] = '\0';
  (this->LineViewsToJustify).Hash.InlineData[3] = '\0';
  (this->LineViewsToJustify).Hash._padding_ = 0;
  *(undefined8 *)&(this->LineViewsToJustify).HashSize = 0;
  *(undefined8 *)&(this->LineViewsToJustify).Elements = 0;
  *(undefined8 *)&(this->LineViewsToJustify).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LineViewsToJustify).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LineViewsToJustify).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LineViewsToJustify).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LineViewsToJustify).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LineViewsToJustify).Elements.field_0x34 = 0;
  (this->LineViewsToJustify).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->DirtyFlags = '\0';
  EVar2 = GetDefaultTextShapingMethod();
  this->TextShapingMethod = EVar2;
  uVar3 = (**(code **)(*(longlong *)CVarDefaultTextFlowDirection._padding_ + 200))();
  this->Scale = 1.0;
  this->WrappingWidth = 0.0;
  EVar5 = (ETextFlowDirection)uVar3;
  if (2 < uVar3) {
    EVar5 = Auto;
  }
  this->WrappingPolicy = DefaultWrapping;
  this->TransformPolicy = None;
  this->TextFlowDirection = EVar5;
  (this->Margin).Left = 0.0;
  (this->Margin).Top = 0.0;
  (this->Margin).Right = 0.0;
  (this->Margin).Bottom = 0.0;
  this->Justification = Left;
  this->LineHeightPercentage = 1.0;
  this->ApplyLineHeightToBottomLine = true;
  (this->TextLayoutSize).DrawWidth = 0.0;
  (this->TextLayoutSize).WrappedWidth = 0.0;
  *(undefined8 *)&(this->TextLayoutSize).Height = 0;
  (this->ViewSize).field0_0x0._s_0.X = 0.0;
  (this->ViewSize).field0_0x0._s_0.Y = 0.0;
  (this->ScrollOffset).field0_0x0._s_0.X = 0.0;
  (this->ScrollOffset).field0_0x0._s_0.Y = 0.0;
  (this->LineBreakIterator).Object = (IBreakIterator *)0x0;
  (this->LineBreakIterator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  bVar6 = GSlateUseSharedBreakIterator == false;
  if (bVar6) {
    pTVar4 = FBreakIterator::CreateCharacterBoundaryIterator(&local_28);
  }
  else {
    pTVar4 = FBreakIterator::GetCharacterBoundaryIterator(&local_18);
  }
  (this->GraphemeBreakIterator).Object = pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (this->GraphemeBreakIterator).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  bVar6 = GSlateUseSharedBreakIterator == false;
  if (bVar6) {
    pTVar4 = FBreakIterator::CreateWordBreakIterator(&local_18);
  }
  else {
    pTVar4 = FBreakIterator::GetWordBreakIterator(&local_28);
  }
  (this->WordBreakIterator).Object = pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (this->WordBreakIterator).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  TextBiDi::CreateTextBiDi();
  (this->DebugSourceInfo).Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSourceInfo).Value.Data.ArrayNum = 0;
  (this->DebugSourceInfo).Value.Data.ArrayMax = 0;
  (this->DebugSourceInfo).bIsSet = false;
  *(undefined8 *)&(this->DebugSourceInfo).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DebugSourceInfo).Getter = 0;
  *(undefined8 *)&(this->DebugSourceInfo).Getter.field_0x8 = 0;
  (this->TextOverflowPolicyOverride).bIsSet = false;
  return this;
}

// ~FTextLayout @ 142849fa0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::~FTextLayout(FTextLayout *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ITextBiDi *pIVar5;
  ForElementType<FSetElementId> FVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&___7FTextLayout__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DebugSourceInfo).Getter);
  pvVar3 = *(void **)&(this->DebugSourceInfo).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DebugSourceInfo).Getter);
  pFVar4 = (this->DebugSourceInfo).Value.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pIVar5 = (this->TextBiDiDetection).Ptr;
  if (pIVar5 != (ITextBiDi *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WordBreakIterator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GraphemeBreakIterator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LineBreakIterator).SharedReferenceCount.ReferenceController);
  (this->LineViewsToJustify).HashSize = 0;
  FVar6 = (this->LineViewsToJustify).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LineViewsToJustify).Elements);
  DestructItems<FTextLayout::FLineView,int>
            ((FLineView *)(this->LineViews).AllocatorInstance.Data,(this->LineViews).ArrayNum);
  pFVar4 = (this->LineViews).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FTextLayout::FLineModel,int>
            ((FLineModel *)(this->LineModels).AllocatorInstance.Data,(this->LineModels).ArrayNum);
  pFVar4 = (this->LineModels).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// operator() @ 14284c380

void __thiscall `FTextLayout::FlowHighlights'::__l19::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (((*(int **)((longlong)this + 0x18))[1] - **(int **)((longlong)this + 0x18) < 1) ||
     (0.0 < *(float *)(*(longlong *)((longlong)this + 0x10) + 0x10))) {
    puVar2 = *(undefined8 **)((longlong)this + 0x10);
    lVar9 = *(longlong *)((longlong)this + 8);
    if (*(int *)(*(longlong *)this + 0xc) < 0) {
      if (((*(undefined8 **)(lVar9 + 0x10) <= puVar2) &&
          (puVar2 < *(undefined8 **)(lVar9 + 0x10) + (longlong)*(int *)(lVar9 + 0x1c) * 5)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar9 + 0x18);
      if (iVar7 == *(int *)(lVar9 + 0x1c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,(ForAnyElementType *)(lVar9 + 0x10),(int *)(lVar9 + 0x1c));
      }
      *(int *)(lVar9 + 0x18) = iVar7 + 1;
      lVar9 = *(longlong *)(lVar9 + 0x10);
    }
    else {
      if (((*(undefined8 **)(lVar9 + 0x20) <= puVar2) &&
          (puVar2 < *(undefined8 **)(lVar9 + 0x20) + (longlong)*(int *)(lVar9 + 0x2c) * 5)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar9 + 0x28);
      if (iVar7 == *(int *)(lVar9 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,(ForAnyElementType *)(lVar9 + 0x20),(int *)(lVar9 + 0x2c));
      }
      *(int *)(lVar9 + 0x28) = iVar7 + 1;
      lVar9 = *(longlong *)(lVar9 + 0x20);
    }
    uVar5 = puVar2[1];
    lVar8 = (longlong)iVar7;
    puVar1 = (undefined8 *)(lVar9 + lVar8 * 0x28);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined4 *)(lVar9 + 0x10 + lVar8 * 0x28) = *(undefined4 *)(puVar2 + 2);
    *(undefined8 *)(lVar9 + 0x18 + lVar8 * 0x28) = puVar2[3];
    lVar3 = puVar2[4];
    *(longlong *)(lVar9 + 0x20 + lVar8 * 0x28) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}

// AddLine @ 142850230

/* WARNING: Removing unreachable block (ram,0x00014285043c) */
/* WARNING: Removing unreachable block (ram,0x00014285044b) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::AddLine(FTextLayout *this,FNewLineData *param_1)

{
  int *piVar1;
  ILayoutBlock *pIVar2;
  ILayoutBlock IVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  double *pdVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  FLineModel *pFVar17;
  uint uVar18;
  TSharedRef<ILayoutBlock,1> *pTVar19;
  float fVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<TSharedRef<ILayoutBlock,1>,TSizedDefaultAllocator<32>_> local_138;
  FRunModel local_128;
  FLineModel local_f8;
  double local_88;
  double local_80;
  undefined1 local_78 [56];
  
  if (((this->LineModels).ArrayNum != 0) && (this->ApplyLineHeightToBottomLine == false)) {
    (this->TextLayoutSize).Height = this->OverHeight + (this->TextLayoutSize).Height;
  }
  FLineModel::FLineModel(&local_f8,&param_1->Text);
  TransformLineText(this,&local_f8);
  iVar8 = (param_1->Runs).ArrayNum;
  pFVar13 = (param_1->Runs).AllocatorInstance.Data;
  pFVar14 = pFVar13 + (longlong)iVar8 * 0x10;
  while( true ) {
    if ((param_1->Runs).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<IRun,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar14) break;
    local_128.Run.Object = *(IRun **)pFVar13;
    local_128.Run.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar13 + 8);
    if (local_128.Run.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (local_128.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_128.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.MeasuredRanges.ArrayNum = 0;
    local_128.MeasuredRanges.ArrayMax = 0;
    local_128.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.MeasuredRangeSizes.ArrayNum = 0;
    local_128.MeasuredRangeSizes.ArrayMax = 0;
    bVar7 = IsInGameThread();
    if (((!bVar7) && (bVar7 = IsInSlateThread(), !bVar7)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInSlateThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                           ,0xbc1,
                           L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((local_f8.Runs.AllocatorInstance.Data <= &local_128) &&
        (&local_128 <
         (FRunModel *)
         (local_f8.Runs.AllocatorInstance.Data + (longlong)local_f8.Runs.ArrayMax * 0x30))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_f8.Runs.ArrayNum == local_f8.Runs.ArrayMax) {
      local_f8.Runs.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_f8.Runs.AllocatorInstance,&local_f8.Runs.ArrayMax);
    }
    lVar10 = (longlong)local_f8.Runs.ArrayNum;
    *(IRun **)&local_f8.Runs.AllocatorInstance.Data[lVar10 * 0x30].field_0x0 = local_128.Run.Object;
    *(TReferenceControllerBase<1> **)(local_f8.Runs.AllocatorInstance.Data + lVar10 * 0x30 + 8) =
         local_128.Run.SharedReferenceCount.ReferenceController;
    if (local_128.Run.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (local_128.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    *(undefined8 *)(local_f8.Runs.AllocatorInstance.Data + lVar10 * 0x30 + 0x10) = 0;
    *(FScriptContainerElement **)(local_f8.Runs.AllocatorInstance.Data + lVar10 * 0x30 + 0x10) =
         local_128.MeasuredRanges.AllocatorInstance.Data;
    *(int *)(local_f8.Runs.AllocatorInstance.Data + lVar10 * 0x30 + 0x18) =
         local_128.MeasuredRanges.ArrayNum;
    *(int *)(local_f8.Runs.AllocatorInstance.Data + lVar10 * 0x30 + 0x1c) =
         local_128.MeasuredRanges.ArrayMax;
    *(undefined8 *)(local_f8.Runs.AllocatorInstance.Data + lVar10 * 0x30 + 0x20) = 0;
    *(FScriptContainerElement **)(local_f8.Runs.AllocatorInstance.Data + lVar10 * 0x30 + 0x20) =
         local_128.MeasuredRangeSizes.AllocatorInstance.Data;
    *(int *)(local_f8.Runs.AllocatorInstance.Data + lVar10 * 0x30 + 0x28) =
         local_128.MeasuredRangeSizes.ArrayNum;
    *(int *)(local_f8.Runs.AllocatorInstance.Data + lVar10 * 0x30 + 0x2c) =
         local_128.MeasuredRangeSizes.ArrayMax;
    local_128.MeasuredRangeSizes.ArrayNum = 0;
    local_128.MeasuredRangeSizes.ArrayMax = 0;
    local_128.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.MeasuredRanges.ArrayNum = 0;
    local_128.MeasuredRanges.ArrayMax = 0;
    local_128.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Runs.ArrayNum = local_f8.Runs.ArrayNum + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.Run.SharedReferenceCount.ReferenceController);
    pFVar13 = pFVar13 + 0x10;
  }
  pFVar17 = (FLineModel *)(this->LineModels).AllocatorInstance.Data;
  if (((pFVar17 <= &local_f8) && (&local_f8 < pFVar17 + (this->LineModels).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (this->LineModels).ArrayNum;
  piVar1 = &(this->LineModels).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&(this->LineModels).AllocatorInstance,piVar1);
  }
  (this->LineModels).ArrayNum = iVar8 + 1;
  FLineModel::FLineModel
            ((FLineModel *)((this->LineModels).AllocatorInstance.Data + (longlong)iVar8 * 0x70),
             &local_f8);
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)local_f8.LineHighlights.AllocatorInstance.Data,
             local_f8.LineHighlights.ArrayNum);
  if ((FTextLineHighlight *)local_f8.LineHighlights.AllocatorInstance.Data !=
      (FTextLineHighlight *)0x0) {
    FMemory::Free(local_f8.LineHighlights.AllocatorInstance.Data);
  }
  DestructItems<FTextRunRenderer,int>
            ((FTextRunRenderer *)local_f8.RunRenderers.AllocatorInstance.Data,
             local_f8.RunRenderers.ArrayNum);
  if ((FTextRunRenderer *)local_f8.RunRenderers.AllocatorInstance.Data != (FTextRunRenderer *)0x0) {
    FMemory::Free(local_f8.RunRenderers.AllocatorInstance.Data);
  }
  if (local_f8.BreakCandidates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BreakCandidates.AllocatorInstance.Data);
  }
  DestructItems<FTextLayout::FRunModel,int>
            ((FRunModel *)local_f8.Runs.AllocatorInstance.Data,local_f8.Runs.ArrayNum);
  if ((FRunModel *)local_f8.Runs.AllocatorInstance.Data != (FRunModel *)0x0) {
    FMemory::Free(local_f8.Runs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.ShapedTextCache.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.Text.SharedReferenceCount.ReferenceController);
  if ((this->DirtyFlags & 1) == 0) {
    iVar8 = (this->LineModels).ArrayNum;
    uVar18 = iVar8 - 1;
    uVar16 = 0;
    if ((int)uVar18 < iVar8) {
      uVar16 = ~uVar18 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar17 = (FLineModel *)
              ((this->LineModels).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x70);
    CalculateLineTextDirection(this,pFVar17);
    if ((pFVar17->DirtyFlags & 4) != 0) {
      TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
               *)&((pFVar17->ShapedTextCache).Object)->CachedShapedText);
      pFVar17->DirtyFlags = pFVar17->DirtyFlags & 0xfb;
    }
    CreateLineWrappingCache(this,pFVar17);
    iVar8 = (pFVar17->Runs).ArrayNum;
    pFVar13 = (pFVar17->Runs).AllocatorInstance.Data;
    pFVar14 = pFVar13 + (longlong)iVar8 * 0x30;
    while( true ) {
      if ((pFVar17->Runs).ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FTextLayout::FRunModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar13 == pFVar14) break;
      (**(code **)(**(longlong **)pFVar13 + 0x60))();
      pFVar13 = pFVar13 + 0x30;
    }
    uVar16 = (this->LineViews).ArrayNum + 1;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    fVar20 = GetWrappingDrawWidth(this);
    FlowLineLayout(this,uVar18,fVar20,&local_138);
    dVar5 = (double)(this->Margin).Left * (double)this->Scale;
    dVar6 = (double)(this->Margin).Top * (double)this->Scale;
    if ((int)uVar16 < (this->LineViews).ArrayNum) {
      lVar10 = (longlong)(int)uVar16 * 0x68;
      do {
        uVar9 = 0;
        if ((int)uVar16 < (this->LineViews).ArrayNum) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (this->LineViews).AllocatorInstance.Data;
        if (*(uint *)(pFVar13 + lVar10 + 100) == uVar18) {
          *(double *)(pFVar13 + lVar10 + 0x30) = dVar5 + *(double *)(pFVar13 + lVar10 + 0x30);
          *(double *)(pFVar13 + lVar10 + 0x38) = dVar6 + *(double *)(pFVar13 + lVar10 + 0x38);
        }
        uVar16 = uVar16 + 1;
        lVar10 = lVar10 + 0x68;
      } while ((int)uVar16 < (this->LineViews).ArrayNum);
    }
    iVar8 = local_138.ArrayNum;
    uVar11 = (ulonglong)local_138.ArrayNum;
    pTVar19 = (TSharedRef<ILayoutBlock,1> *)(local_138.AllocatorInstance.Data + uVar11 * 0x10);
    FVar15.Data = local_138.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar8) {
        `TCheckedPointerIterator<TSharedRef<ILayoutBlock,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((TSharedRef<ILayoutBlock,1> *)FVar15.Data == pTVar19) break;
      pIVar2 = ((TSharedRef<ILayoutBlock,1> *)FVar15.Data)->Object;
      IVar3 = *pIVar2;
      pdVar12 = (double *)(**(code **)((longlong)IVar3 + 0x38))(pIVar2,local_78);
      local_80 = dVar6 + pdVar12[1];
      local_88 = dVar5 + *pdVar12;
      (**(code **)((longlong)IVar3 + 0x30))(pIVar2,&local_88);
      uVar11 = local_138._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 0x10;
    }
    JustifyLayout(this);
    iVar8 = (pFVar17->Runs).ArrayNum;
    pFVar13 = (pFVar17->Runs).AllocatorInstance.Data;
    pFVar14 = pFVar13 + (longlong)iVar8 * 0x30;
    while( true ) {
      if ((pFVar17->Runs).ArrayNum != iVar8) {
        `TCheckedPointerIterator<FTextLayout::FRunModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar13 == pFVar14) break;
      (**(code **)(**(longlong **)pFVar13 + 0x68))();
      pFVar13 = pFVar13 + 0x30;
    }
    DestructItems<TSharedRef<ILayoutBlock,1>,int>
              ((TSharedRef<ILayoutBlock,1> *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((TSharedRef<ILayoutBlock,1> *)local_138.AllocatorInstance.Data !=
        (TSharedRef<ILayoutBlock,1> *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
  }
  return;
}

// AddLineHighlight @ 142850850

void __thiscall FTextLayout::AddLineHighlight(FTextLayout *this,FTextLineHighlight *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FTextLineHighlight *pFVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FString local_48;
  FString local_38;
  
  uVar15 = 0;
  if ((param_1->LineIndex < 0) || ((this->LineModels).ArrayNum <= param_1->LineIndex)) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    TAttribute<FString>::Get(&this->DebugSourceInfo,&local_48);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("LineModels.IsValidIndex(Highlight.LineIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                       ,0x587,L"Highlights must be for a valid Line Index!\n\tDebug Source: %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (param_1->ZOrder == 0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    TAttribute<FString>::Get(&this->DebugSourceInfo,&local_38);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Highlight.ZOrder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                       ,0x588,
                       L"The highlight Z-order must be <0 to create an underlay, or >0 to create an overlay!\n\tDebug Source: %s"
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar1 = param_1->LineIndex;
  uVar11 = 0;
  if ((int)uVar1 < (this->LineModels).ArrayNum) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = false;
  pFVar2 = (this->LineModels).AllocatorInstance.Data;
  uVar16 = uVar15;
  if (0 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60)) {
    do {
      if (bVar7) goto LAB_142850be1;
      pFVar12 = pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x58;
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar14 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60)) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = *(FTextLineHighlight **)&pFVar12->field_0x0;
      if (param_1->ZOrder < *(int *)((longlong)&pFVar3->ZOrder + uVar16)) {
        iVar10 = uVar14 - 1;
        if ((int)(uVar14 - 1) < 0) {
          iVar10 = 0;
        }
        if (((pFVar3 <= param_1) &&
            (param_1 < pFVar3 + *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 100))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60);
        if (iVar9 == *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 100)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)pFVar12,
                             (int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 100));
        }
        pFVar4 = *(FScriptContainerElement **)&pFVar12->field_0x0;
        *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60) = iVar9 + 1;
        memmove(pFVar4 + (longlong)iVar10 * 0x20 + 0x20,pFVar4 + (longlong)iVar10 * 0x20,
                (longlong)(iVar9 - iVar10) << 5);
        pFVar12 = *(FScriptContainerElement **)&pFVar12->field_0x0 + (longlong)iVar10 * 0x20;
        *(int *)pFVar12 = param_1->LineIndex;
        *(FTextRange *)(pFVar12 + 4) = param_1->Range;
        *(int *)(pFVar12 + 0xc) = param_1->ZOrder;
        *(ILineHighlighter **)(pFVar12 + 0x10) = (param_1->Highlighter).Object;
        pTVar5 = (param_1->Highlighter).SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)(pFVar12 + 0x18) = pTVar5;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar7 = true;
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 0x20;
    } while ((int)(uVar14 + 1) < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60));
    if (bVar7) goto LAB_142850be1;
  }
  pFVar12 = pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x58;
  if (((*(FTextLineHighlight **)&pFVar12->field_0x0 <= param_1) &&
      (param_1 < *(FTextLineHighlight **)&pFVar12->field_0x0 +
                 *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 100))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60);
  if (iVar10 == *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 100)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)pFVar12,
                        (int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 100));
    *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60) = iVar10;
  }
  *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60) = iVar10 + 1;
  piVar13 = (int *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar10 * 0x20);
  *piVar13 = param_1->LineIndex;
  *(FTextRange *)(piVar13 + 1) = param_1->Range;
  piVar13[3] = param_1->ZOrder;
  *(ILineHighlighter **)(piVar13 + 4) = (param_1->Highlighter).Object;
  pTVar5 = (param_1->Highlighter).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(piVar13 + 6) = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_142850be1:
  this->DirtyFlags = this->DirtyFlags | 2;
  return;
}

// AddLines @ 142850c10

/* WARNING: Removing unreachable block (ram,0x000142850eec) */
/* WARNING: Removing unreachable block (ram,0x000142850efb) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FTextLayout::AddLines
          (FTextLayout *this,TArray<FTextLayout::FNewLineData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ILayoutBlock *pIVar3;
  ILayoutBlock IVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  TSharedRef<FString,1> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  double *pdVar14;
  FString *pFVar15;
  FLineModel *pFVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  FString *pFVar22;
  uint uVar23;
  FSharedReferencer<1> *pFVar24;
  TSharedRef<ILayoutBlock,1> *pTVar25;
  uint uVar26;
  TSharedRef<FString,1> *pTVar27;
  float fVar28;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [6];
  TArray<TSharedRef<ILayoutBlock,1>,TSizedDefaultAllocator<32>_> local_150;
  FRunModel local_140;
  uint local_110;
  TSharedRef<FString,1> *local_108;
  FLineModel local_f8;
  double local_88;
  double local_80;
  undefined1 local_78 [56];
  
  iVar10 = (this->LineModels).ArrayNum;
  if ((iVar10 != 0) && (this->ApplyLineHeightToBottomLine == false)) {
    (this->TextLayoutSize).Height = this->OverHeight + (this->TextLayoutSize).Height;
  }
  uVar23 = param_1->ArrayNum;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  piVar1 = &(this->LineModels).ArrayMax;
  if (*piVar1 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,uVar23,&(this->LineModels).AllocatorInstance,iVar10,piVar1);
  }
  local_110 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_110;
  pTVar27 = (TSharedRef<FString,1> *)(param_1->AllocatorInstance).Data;
  local_108 = pTVar27 + uVar12 * 2;
  pFVar24 = &pTVar27[1].SharedReferenceCount;
  while( true ) {
    pTVar8 = local_108;
    if (param_1->ArrayNum != (int)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FTextLayout::FNewLineData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pTVar27 == pTVar8) break;
    FLineModel::FLineModel(&local_f8,pTVar27);
    TransformLineText(this,&local_f8);
    uVar23 = *(uint *)&pFVar24->ReferenceController;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if (local_f8.Runs.ArrayMax < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar23,&local_f8.Runs.AllocatorInstance,local_f8.Runs.ArrayNum,
                 &local_f8.Runs.ArrayMax);
    }
    iVar10 = *(int *)&pFVar24->ReferenceController;
    pFVar15 = ((TSharedRef<FString,1> *)(pFVar24 + -1))->Object;
    pFVar22 = pFVar15 + iVar10;
    while( true ) {
      if (*(int *)&pFVar24->ReferenceController != iVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedRef<IRun,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar15 == pFVar22) break;
      local_140.Run.Object = (IRun *)(pFVar15->Data).AllocatorInstance.Data;
      local_140.Run.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)&(pFVar15->Data).ArrayNum;
      if (local_140.Run.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_140.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_140.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      local_140.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.MeasuredRanges.ArrayNum = 0;
      local_140.MeasuredRanges.ArrayMax = 0;
      local_140.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.MeasuredRangeSizes.ArrayNum = 0;
      local_140.MeasuredRangeSizes.ArrayMax = 0;
      bVar9 = IsInGameThread();
      if (((!bVar9) && (bVar9 = IsInSlateThread(), !bVar9)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                             ,0xbc1,
                             L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((local_f8.Runs.AllocatorInstance.Data <= &local_140) &&
          (&local_140 <
           (FRunModel *)
           (local_f8.Runs.AllocatorInstance.Data + (longlong)local_f8.Runs.ArrayMax * 0x30))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_f8.Runs.ArrayNum == local_f8.Runs.ArrayMax) {
        local_f8.Runs.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_f8.Runs.AllocatorInstance,&local_f8.Runs.ArrayMax);
      }
      lVar13 = (longlong)local_f8.Runs.ArrayNum;
      *(IRun **)&local_f8.Runs.AllocatorInstance.Data[lVar13 * 0x30].field_0x0 =
           local_140.Run.Object;
      *(TReferenceControllerBase<1> **)(local_f8.Runs.AllocatorInstance.Data + lVar13 * 0x30 + 8) =
           local_140.Run.SharedReferenceCount.ReferenceController;
      if (local_140.Run.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_140.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_140.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      *(undefined8 *)(local_f8.Runs.AllocatorInstance.Data + lVar13 * 0x30 + 0x10) = 0;
      *(FScriptContainerElement **)(local_f8.Runs.AllocatorInstance.Data + lVar13 * 0x30 + 0x10) =
           local_140.MeasuredRanges.AllocatorInstance.Data;
      *(int *)(local_f8.Runs.AllocatorInstance.Data + lVar13 * 0x30 + 0x18) =
           local_140.MeasuredRanges.ArrayNum;
      *(int *)(local_f8.Runs.AllocatorInstance.Data + lVar13 * 0x30 + 0x1c) =
           local_140.MeasuredRanges.ArrayMax;
      *(undefined8 *)(local_f8.Runs.AllocatorInstance.Data + lVar13 * 0x30 + 0x20) = 0;
      *(FScriptContainerElement **)(local_f8.Runs.AllocatorInstance.Data + lVar13 * 0x30 + 0x20) =
           local_140.MeasuredRangeSizes.AllocatorInstance.Data;
      *(int *)(local_f8.Runs.AllocatorInstance.Data + lVar13 * 0x30 + 0x28) =
           local_140.MeasuredRangeSizes.ArrayNum;
      *(int *)(local_f8.Runs.AllocatorInstance.Data + lVar13 * 0x30 + 0x2c) =
           local_140.MeasuredRangeSizes.ArrayMax;
      local_140.MeasuredRangeSizes.ArrayNum = 0;
      local_140.MeasuredRangeSizes.ArrayMax = 0;
      local_140.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.MeasuredRanges.ArrayNum = 0;
      local_140.MeasuredRanges.ArrayMax = 0;
      local_140.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Runs.ArrayNum = local_f8.Runs.ArrayNum + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.Run.SharedReferenceCount.ReferenceController);
      pFVar15 = pFVar15 + 1;
    }
    pFVar16 = (FLineModel *)(this->LineModels).AllocatorInstance.Data;
    if (((pFVar16 <= &local_f8) && (&local_f8 < pFVar16 + *piVar1)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = (this->LineModels).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&(this->LineModels).AllocatorInstance,piVar1);
    }
    (this->LineModels).ArrayNum = iVar10 + 1;
    FLineModel::FLineModel
              ((FLineModel *)((this->LineModels).AllocatorInstance.Data + (longlong)iVar10 * 0x70),
               &local_f8);
    DestructItems<FTextLineHighlight,int>
              ((FTextLineHighlight *)local_f8.LineHighlights.AllocatorInstance.Data,
               local_f8.LineHighlights.ArrayNum);
    if ((FTextLineHighlight *)local_f8.LineHighlights.AllocatorInstance.Data !=
        (FTextLineHighlight *)0x0) {
      FMemory::Free(local_f8.LineHighlights.AllocatorInstance.Data);
    }
    DestructItems<FTextRunRenderer,int>
              ((FTextRunRenderer *)local_f8.RunRenderers.AllocatorInstance.Data,
               local_f8.RunRenderers.ArrayNum);
    if ((FTextRunRenderer *)local_f8.RunRenderers.AllocatorInstance.Data != (FTextRunRenderer *)0x0)
    {
      FMemory::Free(local_f8.RunRenderers.AllocatorInstance.Data);
    }
    if (local_f8.BreakCandidates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.BreakCandidates.AllocatorInstance.Data);
    }
    DestructItems<FTextLayout::FRunModel,int>
              ((FRunModel *)local_f8.Runs.AllocatorInstance.Data,local_f8.Runs.ArrayNum);
    if ((FRunModel *)local_f8.Runs.AllocatorInstance.Data != (FRunModel *)0x0) {
      FMemory::Free(local_f8.Runs.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.ShapedTextCache.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.Text.SharedReferenceCount.ReferenceController);
    pTVar27 = pTVar27 + 2;
    pFVar24 = pFVar24 + 4;
    uVar12 = (ulonglong)local_110;
  }
  if ((this->DirtyFlags & 1) == 0) {
    uVar23 = (this->LineModels).ArrayNum - param_1->ArrayNum;
    if ((int)uVar23 < (this->LineModels).ArrayNum) {
      lVar13 = (longlong)(int)uVar23 * 0x70;
      uVar26 = uVar23;
      do {
        uVar21 = 0;
        if ((int)uVar26 < (this->LineModels).ArrayNum) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->LineModels).AllocatorInstance.Data;
        iVar10 = *(int *)(pFVar2 + lVar13 + 0x30);
        puVar18 = *(undefined8 **)(pFVar2 + lVar13 + 0x28);
        puVar19 = puVar18 + (longlong)iVar10 * 6;
        while( true ) {
          if (*(int *)(pFVar2 + lVar13 + 0x30) != iVar10) {
            local_158 = 0;
            `TCheckedPointerIterator<FTextLayout::FRunModel,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_158);
          }
          if (puVar18 == puVar19) break;
          (**(code **)(*(longlong *)*puVar18 + 0x60))();
          puVar18 = puVar18 + 6;
        }
        uVar26 = uVar26 + 1;
        lVar13 = lVar13 + 0x70;
        iVar10 = (this->LineModels).ArrayNum;
      } while ((int)uVar26 < iVar10);
      if ((int)uVar23 < iVar10) {
        lVar13 = (longlong)(int)uVar23 * 0x70;
        uVar26 = uVar23;
        do {
          uVar21 = 0;
          if ((int)uVar26 < (this->LineModels).ArrayNum) {
            uVar21 = ~uVar26 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar16 = (FLineModel *)((this->LineModels).AllocatorInstance.Data + lVar13);
          CalculateLineTextDirection(this,pFVar16);
          if ((pFVar16->DirtyFlags & 4) != 0) {
            TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
            ::Reset((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                     *)&((pFVar16->ShapedTextCache).Object)->CachedShapedText);
            pFVar16->DirtyFlags = pFVar16->DirtyFlags & 0xfb;
          }
          CreateLineWrappingCache(this,pFVar16);
          uVar21 = (this->LineViews).ArrayNum + 1;
          local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_150.ArrayNum = 0;
          local_150.ArrayMax = 0;
          fVar28 = GetWrappingDrawWidth(this);
          FlowLineLayout(this,uVar26,fVar28,&local_150);
          dVar6 = (double)(this->Margin).Left * (double)this->Scale;
          dVar7 = (double)(this->Margin).Top * (double)this->Scale;
          if ((int)uVar21 < (this->LineViews).ArrayNum) {
            lVar17 = (longlong)(int)uVar21 * 0x68;
            do {
              uVar11 = 0;
              if ((int)uVar21 < (this->LineViews).ArrayNum) {
                uVar11 = ~uVar21 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar2 = (this->LineViews).AllocatorInstance.Data;
              if (*(uint *)(pFVar2 + lVar17 + 100) == uVar26) {
                *(double *)(pFVar2 + lVar17 + 0x30) = dVar6 + *(double *)(pFVar2 + lVar17 + 0x30);
                *(double *)(pFVar2 + lVar17 + 0x38) = dVar7 + *(double *)(pFVar2 + lVar17 + 0x38);
              }
              uVar21 = uVar21 + 1;
              lVar17 = lVar17 + 0x68;
            } while ((int)uVar21 < (this->LineViews).ArrayNum);
          }
          iVar10 = local_150.ArrayNum;
          pTVar25 = (TSharedRef<ILayoutBlock,1> *)
                    (local_150.AllocatorInstance.Data + (longlong)local_150.ArrayNum * 0x10);
          FVar20.Data = local_150.AllocatorInstance.Data;
          while( true ) {
            if (local_150.ArrayNum != iVar10) {
              local_157 = 0;
              `TCheckedPointerIterator<TSharedRef<ILayoutBlock,1>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_157);
            }
            if ((TSharedRef<ILayoutBlock,1> *)FVar20.Data == pTVar25) break;
            pIVar3 = ((TSharedRef<ILayoutBlock,1> *)FVar20.Data)->Object;
            IVar4 = *pIVar3;
            pdVar14 = (double *)(**(code **)((longlong)IVar4 + 0x38))(pIVar3,local_78);
            local_80 = dVar7 + pdVar14[1];
            local_88 = dVar6 + *pdVar14;
            (**(code **)((longlong)IVar4 + 0x30))(pIVar3,&local_88);
            FVar20.Data = FVar20.Data + 0x10;
          }
          DestructItems<TSharedRef<ILayoutBlock,1>,int>
                    ((TSharedRef<ILayoutBlock,1> *)local_150.AllocatorInstance.Data,
                     local_150.ArrayNum);
          if ((TSharedRef<ILayoutBlock,1> *)local_150.AllocatorInstance.Data !=
              (TSharedRef<ILayoutBlock,1> *)0x0) {
            FMemory::Free(local_150.AllocatorInstance.Data);
          }
          uVar26 = uVar26 + 1;
          lVar13 = lVar13 + 0x70;
        } while ((int)uVar26 < (this->LineModels).ArrayNum);
      }
    }
    JustifyLayout(this);
    if ((int)uVar23 < (this->LineModels).ArrayNum) {
      lVar13 = (longlong)(int)uVar23 * 0x70;
      do {
        uVar26 = 0;
        if ((int)uVar23 < (this->LineModels).ArrayNum) {
          uVar26 = ~uVar23 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->LineModels).AllocatorInstance.Data;
        iVar10 = *(int *)(pFVar2 + lVar13 + 0x30);
        puVar18 = *(undefined8 **)(pFVar2 + lVar13 + 0x28);
        puVar19 = puVar18 + (longlong)iVar10 * 6;
        while( true ) {
          if (*(int *)(pFVar2 + lVar13 + 0x30) != iVar10) {
            local_156[0] = 0;
            `TCheckedPointerIterator<FTextLayout::FRunModel,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_156);
          }
          if (puVar18 == puVar19) break;
          (**(code **)(*(longlong *)*puVar18 + 0x68))();
          puVar18 = puVar18 + 6;
        }
        uVar23 = uVar23 + 1;
        lVar13 = lVar13 + 0x70;
      } while ((int)uVar23 < (this->LineModels).ArrayNum);
    }
  }
  return;
}

// AddRunRenderer @ 142851490

void __thiscall FTextLayout::AddRunRenderer(FTextLayout *this,FTextRunRenderer *param_1)

{
  TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FTextRunRenderer *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((param_1->LineIndex < 0) || ((this->LineModels).ArrayNum <= param_1->LineIndex)) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    TAttribute<FString>::Get(&this->DebugSourceInfo,&local_58);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LineModels.IsValidIndex(Renderer.LineIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                       ,0x53a,L"Renderers must be for a valid Line Index!\n\tDebug Source: %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = param_1->LineIndex;
  uVar14 = 0;
  if ((int)uVar1 < (this->LineModels).ArrayNum) {
    uVar14 = ~uVar1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar15 = 0;
  bVar6 = false;
  pFVar2 = (this->LineModels).AllocatorInstance.Data;
  uVar14 = 0;
  if (0 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50)) {
    do {
      if (bVar6) goto LAB_1428519dc;
      this_00 = (TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> *)
                (pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x48);
      uVar13 = ~uVar14 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar14 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50)) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((param_1->Range).BeginIndex < *(int *)((this_00->AllocatorInstance).Data + lVar15 + 4)) {
        if (uVar14 != 0) {
          uVar8 = 0;
          if ((int)(uVar14 - 1) < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50)) {
            uVar8 = -uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((param_1->Range).BeginIndex <
              *(int *)((this_00->AllocatorInstance).Data + lVar15 + -0x18)) {
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            TAttribute<FString>::Get(&this->DebugSourceInfo,&local_48);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == 0 || LineModel.RunRenderers[Index - 1].Range.EndIndex <= Renderer.Range.BeginIndex"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                               ,0x544,L"Renderers cannot overlap!\n\tDebug Source: %s");
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        pFVar3 = (FTextRunRenderer *)(this_00->AllocatorInstance).Data;
        iVar10 = uVar14 - 1;
        if ((int)(uVar14 - 1) < 0) {
          iVar10 = 0;
        }
        if (((pFVar3 <= param_1) &&
            (param_1 < pFVar3 + *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x54))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50);
        if (iVar9 == *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x54)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)this_00,
                             (int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x54));
        }
        pFVar11 = (this_00->AllocatorInstance).Data;
        *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50) = iVar9 + 1;
        pFVar11 = pFVar11 + (longlong)iVar10 * 0x20;
        memmove(pFVar11 + 0x20,pFVar11,(longlong)(iVar9 - iVar10) << 5);
        pFVar11 = (this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x20;
        *(int *)pFVar11 = param_1->LineIndex;
        *(FTextRange *)(pFVar11 + 4) = param_1->Range;
        *(IRunRenderer **)(pFVar11 + 0x10) = (param_1->Renderer).Object;
        pTVar4 = (param_1->Renderer).SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)(pFVar11 + 0x18) = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
LAB_142851901:
        bVar6 = true;
      }
      else {
        uVar8 = 0;
        if ((int)uVar14 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50)) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((param_1->Range).EndIndex < *(int *)((this_00->AllocatorInstance).Data + lVar15 + 8)) {
          uVar8 = 0;
          if ((int)uVar14 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50)) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)((this_00->AllocatorInstance).Data + lVar15 + 4) < (param_1->Range).EndIndex)
          {
            local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_38.Data.ArrayNum = 0;
            local_38.Data.ArrayMax = 0;
            TAttribute<FString>::Get(&this->DebugSourceInfo,&local_38);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("LineModel.RunRenderers[Index].Range.BeginIndex >= Renderer.Range.EndIndex"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                               ,0x54a,L"Renderers cannot overlap!\n\tDebug Source: %s");
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar10 = uVar14 - 1;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_>::Insert(this_00,param_1,iVar10);
          goto LAB_142851901;
        }
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x20;
    } while ((int)uVar14 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50));
    if (bVar6) goto LAB_1428519dc;
  }
  pFVar11 = pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x48;
  if (((*(FTextRunRenderer **)&pFVar11->field_0x0 <= param_1) &&
      (param_1 < *(FTextRunRenderer **)&pFVar11->field_0x0 +
                 *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x54))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50);
  if (iVar10 == *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x54)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)pFVar11,
                        (int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x54));
    *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50) = iVar10;
  }
  *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50) = iVar10 + 1;
  piVar12 = (int *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar10 * 0x20);
  *piVar12 = param_1->LineIndex;
  *(FTextRange *)(piVar12 + 1) = param_1->Range;
  *(IRunRenderer **)(piVar12 + 4) = (param_1->Renderer).Object;
  pTVar4 = (param_1->Renderer).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(piVar12 + 6) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_1428519dc:
  this->DirtyFlags = this->DirtyFlags | 1;
  return;
}

// BeginLayout @ 1428557a0

void __thiscall FTextLayout::BeginLayout(FTextLayout *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->LineModels).AllocatorInstance.Data;
  iVar1 = (this->LineModels).ArrayNum;
  pFVar5 = pFVar7 + 0x30;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((this->LineModels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    iVar2 = *(int *)pFVar5;
    puVar3 = *(undefined8 **)(pFVar5 + -8);
    puVar4 = puVar3 + (longlong)iVar2 * 6;
    while( true ) {
      if (*(int *)pFVar5 != iVar2) {
        `TCheckedPointerIterator<FTextLayout::FRunModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar3 == puVar4) break;
      (**(code **)(*(longlong *)*puVar3 + 0x60))();
      puVar3 = puVar3 + 6;
    }
    pFVar7 = pFVar7 + 0x70;
    pFVar5 = pFVar5 + 0x70;
  }
  return;
}

// BeginLineLayout @ 142855850

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::BeginLineLayout(FTextLayout *this,FLineModel *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = (param_1->Runs).ArrayNum;
  pFVar2 = (param_1->Runs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((param_1->Runs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FRunModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x60))();
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// CalculateLineTextDirection @ 142856fc0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FTextLayout::CalculateLineTextDirection(FTextLayout *this,FLineModel *param_1)

{
  ETextFlowDirection EVar1;
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  ETextDirection EVar5;
  FInternationalization *pFVar6;
  
  if ((param_1->DirtyFlags & 2) != 0) {
    EVar1 = this->TextFlowDirection;
    if (EVar1 == Auto) {
      if (this->TextShapingMethod == KerningOnly) {
        param_1->DirtyFlags = param_1->DirtyFlags & 0xfd;
        param_1->TextBaseDirection = LeftToRight;
        return;
      }
      EVar5 = TextBiDi::ComputeBaseDirection((param_1->Text).Object);
      param_1->TextBaseDirection = EVar5;
    }
    else {
      if (EVar1 == LeftToRight) {
        param_1->DirtyFlags = param_1->DirtyFlags & 0xfd;
        param_1->TextBaseDirection = LeftToRight;
        return;
      }
      if (EVar1 == RightToLeft) {
        param_1->DirtyFlags = param_1->DirtyFlags & 0xfd;
        param_1->TextBaseDirection = RightToLeft;
        return;
      }
      if (EVar1 == Culture) {
        pFVar6 = FInternationalization::Get();
        if ((pFVar6->CurrentLanguage).Object == (FCulture *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        this_00 = (pFVar6->CurrentLanguage).Object;
        pTVar2 = (pFVar6->CurrentLanguage).SharedReferenceCount.ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this_00 == (FCulture *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        bVar4 = FCulture::IsRightToLeft(this_00);
        param_1->TextBaseDirection = bVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        param_1->DirtyFlags = param_1->DirtyFlags & 0xfd;
        return;
      }
    }
    param_1->DirtyFlags = param_1->DirtyFlags & 0xfd;
  }
  return;
}

// CalculateLineViewVisualJustification @ 142857100

Type __thiscall
FTextLayout::CalculateLineViewVisualJustification(FTextLayout *this,FLineView *param_1)

{
  Type TVar1;
  
  TVar1 = this->Justification;
  if (param_1->TextBaseDirection == RightToLeft) {
    if (TVar1 == Left) {
      return Right;
    }
    if (TVar1 == Right) {
      TVar1 = Left;
    }
  }
  return TVar1;
}

// CalculateTextDirection @ 142857160

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::CalculateTextDirection(FTextLayout *this)

{
  int iVar1;
  FLineModel *pFVar2;
  FLineModel *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LineModels).ArrayNum;
  pFVar2 = (FLineModel *)(this->LineModels).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->LineModels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    CalculateLineTextDirection(this,pFVar2);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ClearLineHighlights @ 142857730

void __thiscall FTextLayout::ClearLineHighlights(FTextLayout *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->LineModels).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->LineModels).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((this->LineModels).AllocatorInstance.Data + lVar5 + 0x60) != 0) {
        uVar4 = 0;
        if ((int)uVar6 < (this->LineModels).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->LineModels).AllocatorInstance.Data;
        DestructItems<FTextLineHighlight,int>
                  (*(FTextLineHighlight **)(pFVar1 + lVar5 + 0x58),*(int *)(pFVar1 + lVar5 + 0x60));
        *(undefined4 *)(pFVar1 + lVar5 + 0x60) = 0;
        if (*(int *)(pFVar1 + lVar5 + 100) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)(pFVar1 + lVar5 + 0x58),0,
                     (int *)(pFVar1 + lVar5 + 100));
        }
        this->DirtyFlags = this->DirtyFlags | 2;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x70;
    } while ((int)uVar6 < (this->LineModels).ArrayNum);
  }
  return;
}

// ClearLines @ 142857880

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::ClearLines(FTextLayout *this)

{
  int *piVar1;
  
  DestructItems<FTextLayout::FLineModel,int>
            ((FLineModel *)(this->LineModels).AllocatorInstance.Data,(this->LineModels).ArrayNum);
  piVar1 = &(this->LineModels).ArrayMax;
  (this->LineModels).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(this->LineModels).AllocatorInstance,0,piVar1);
  }
  ClearView(this);
  this->DirtyFlags = this->DirtyFlags | 1;
  return;
}

// ClearRunRenderers @ 1428578f0

void __thiscall FTextLayout::ClearRunRenderers(FTextLayout *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->LineModels).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->LineModels).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((this->LineModels).AllocatorInstance.Data + lVar5 + 0x50) != 0) {
        uVar4 = 0;
        if ((int)uVar6 < (this->LineModels).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->LineModels).AllocatorInstance.Data;
        DestructItems<FTextRunRenderer,int>
                  (*(FTextRunRenderer **)(pFVar1 + lVar5 + 0x48),*(int *)(pFVar1 + lVar5 + 0x50));
        *(undefined4 *)(pFVar1 + lVar5 + 0x50) = 0;
        if (*(int *)(pFVar1 + lVar5 + 0x54) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)(pFVar1 + lVar5 + 0x48),0,
                     (int *)(pFVar1 + lVar5 + 0x54));
        }
        this->DirtyFlags = this->DirtyFlags | 1;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x70;
    } while ((int)uVar6 < (this->LineModels).ArrayNum);
  }
  return;
}

// ClearView @ 142857ac0

void __thiscall FTextLayout::ClearView(FTextLayout *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  
  (this->TextLayoutSize).DrawWidth = 0.0;
  (this->TextLayoutSize).WrappedWidth = 0.0;
  *(undefined8 *)&(this->TextLayoutSize).Height = 0;
  DestructItems<FTextLayout::FLineView,int>
            ((FLineView *)(this->LineViews).AllocatorInstance.Data,(this->LineViews).ArrayNum);
  piVar1 = &(this->LineViews).ArrayMax;
  (this->LineViews).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->LineViews).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->LineViewsToJustify;
  bVar4 = 1 < (this->LineViewsToJustify).HashSize;
  if (!bVar4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar2 = &(this->LineViewsToJustify).Elements.field_0xc;
  *(undefined4 *)&(this->LineViewsToJustify).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->LineViewsToJustify).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LineViewsToJustify).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->LineViewsToJustify).Elements.field_0x2c;
  *(undefined4 *)&(this->LineViewsToJustify).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->LineViewsToJustify).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->LineViewsToJustify).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->LineViewsToJustify).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// CreateBreakCandidate @ 142868300

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FBreakCandidate * __thiscall
FTextLayout::CreateBreakCandidate
          (FTextLayout *this,FBreakCandidate *__return_storage_ptr__,int *param_1,
          FLineModel *param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  TVector2<double> TVar3;
  wchar_t _C;
  int iVar4;
  longlong *plVar5;
  IRun *pIVar6;
  FString *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FTextRange FVar13;
  FTextRange FVar14;
  bool bVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  FBreakCandidate *pFVar20;
  TVector2<double> *pTVar21;
  TVector2<double>_u_0 *pTVar22;
  double *pdVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *pTVar31;
  FScriptContainerElement *pFVar32;
  FRunModel *this_00;
  int iVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  schar local_res20;
  undefined1 local_1b8 [2];
  short local_1b6;
  short local_1b4;
  FString local_1b0;
  int *local_1a0;
  FRunTextContext local_198;
  int local_180;
  uint local_17c;
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *local_178;
  FString local_170;
  uint local_160;
  int iStack_15c;
  undefined1 local_158 [8];
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  FString local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  ulonglong local_120;
  ulonglong local_118;
  FRunModel *local_110;
  undefined1 local_108 [4];
  int local_104;
  FString local_100;
  TVector2<double> local_f0;
  TVector2<double> local_e0;
  TVector2<double> local_d0;
  undefined1 local_c0 [16];
  TVector2<double> local_b0 [7];
  
  local_198.ShapedTextCache.Object = (param_2->ShapedTextCache).Object;
  local_198.ShapedTextCache.SharedReferenceCount.ReferenceController =
       (param_2->ShapedTextCache).SharedReferenceCount.ReferenceController;
  if (local_198.ShapedTextCache.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    local_198._padding_._0_1_ = this->TextShapingMethod;
    local_198._padding_._1_1_ = param_2->TextBaseDirection;
  }
  else {
    LOCK();
    (local_198.ShapedTextCache.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.ShapedTextCache.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    local_198._padding_._0_1_ = this->TextShapingMethod;
    local_198._padding_._1_1_ = param_2->TextBaseDirection;
    LOCK();
    (local_198.ShapedTextCache.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.ShapedTextCache.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.ShapedTextCache.SharedReferenceCount.ReferenceController);
  uVar25 = *param_1;
  piVar1 = &(param_2->Runs).ArrayNum;
  local_1b4 = 0;
  local_1b6 = 0;
  dVar11 = 0.0;
  local_res20 = '\0';
  fVar36 = 0.0;
  local_130 = 0.0;
  uStack_128 = 0;
  local_1a0 = piVar1;
  if (((int)uVar25 < 0) || (*piVar1 <= (int)uVar25)) {
    local_178 = &param_2->Runs;
  }
  else {
    pTVar31 = &param_2->Runs;
    uVar26 = 0;
    if ((int)uVar25 < (param_2->Runs).ArrayNum) {
      uVar26 = ~uVar25 >> 0x1f;
    }
    local_178 = pTVar31;
    if ((uVar26 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      pFVar20 = (FBreakCandidate *)(*pcVar9)();
      return pFVar20;
    }
    pFVar30 = (pTVar31->AllocatorInstance).Data;
    plVar5 = *(longlong **)(pFVar30 + (longlong)(int)uVar25 * 0x30);
    (**(code **)(*plVar5 + 8))(plVar5,&local_120);
    uVar24 = local_120 & 0xffffffff;
    if ((int)local_120 < param_3) {
      uVar24 = (ulonglong)(uint)param_3;
    }
    if (0 < (int)uVar24) {
      plVar5 = *(longlong **)(pFVar30 + (longlong)(int)uVar25 * 0x30);
      local_res20 = (**(code **)(*plVar5 + 0x30))(plVar5,uVar24,this->Scale,&local_198);
      local_1a0 = piVar1;
      local_178 = pTVar31;
    }
  }
  uVar25 = *param_1;
  pTVar31 = &param_2->Runs;
  iVar33 = param_4;
  dVar10 = local_130;
  dVar12 = 0.0;
  local_17c = uVar25;
  if ((int)uVar25 < *piVar1) {
    do {
      uVar26 = 0;
      if ((int)uVar25 < pTVar31->ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        pFVar20 = (FBreakCandidate *)(*pcVar9)();
        return pFVar20;
      }
      this_00 = (FRunModel *)((pTVar31->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x30);
      pIVar6 = (this_00->Run).Object;
      local_110 = this_00;
      (**(code **)((longlong)*pIVar6 + 8))(pIVar6,&local_160);
      iVar33 = param_4;
      if (iStack_15c < param_4) {
        iVar33 = iStack_15c;
      }
      lVar28 = (longlong)iVar33;
      uVar25 = local_160;
      if ((int)local_160 < param_3) {
        uVar25 = param_3;
      }
      local_118 = (ulonglong)uVar25;
      iVar29 = iVar33;
      local_180 = iVar33;
      for (; (int)uVar25 < lVar28; lVar28 = lVar28 + -1) {
        iVar29 = iVar29 + -1;
        pFVar7 = (param_2->Text).Object;
        if (iVar29 < 0) {
code_r0x0001428685c8:
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                              ,0x107,
                              L"String index out of bounds: Index %i from a string with a length of %i"
                             );
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            pFVar20 = (FBreakCandidate *)(*pcVar9)();
            return pFVar20;
          }
        }
        else {
          iVar4 = (pFVar7->Data).ArrayNum;
          iVar19 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar19 = 0;
          }
          if (iVar19 <= iVar29) goto code_r0x0001428685c8;
        }
        bVar15 = FTextChar::IsWhitespace
                           ((uint)*(ushort *)
                                   ((pFVar7->Data).AllocatorInstance.Data + lVar28 * 2 + -2));
        this_00 = local_110;
        if (!bVar15) break;
        iVar33 = iVar33 + -1;
      }
      iVar29 = local_180;
      iVar19 = (int)local_118;
      if (iVar19 == local_180) {
        uVar34 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
        uVar35 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
        dVar11 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
      }
      else {
        fVar2 = this->Scale;
        if (iVar19 == iVar33) {
          pTVar21 = FRunModel::Measure(this_00,&local_f0,iVar19,local_180,fVar2,&local_198);
          uVar34 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
          uVar35 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
          dVar11 = (pTVar21->field0_0x0)._s_0.X;
        }
        else if (iVar33 == local_180) {
          pTVar22 = &FRunModel::Measure(this_00,local_b0,iVar19,local_180,fVar2,&local_198)->
                     field0_0x0;
          TVar3.field0_0x0 = (TVector2<double>_u_0)*(TVector2<double>_u_0 *)&pTVar22->_s_0;
          uVar34 = TVar3.field0_0x0._0_4_;
          uVar35 = TVar3.field0_0x0._4_4_;
          dVar11 = TVar3.field0_0x0._0_8_;
        }
        else {
          pTVar22 = &FRunModel::Measure(this_00,&local_e0,iVar19,iVar33,fVar2,&local_198)->
                     field0_0x0;
          TVar3.field0_0x0 = (TVector2<double>_u_0)*(TVector2<double>_u_0 *)&pTVar22->_s_0;
          uVar34 = TVar3.field0_0x0._0_4_;
          uVar35 = TVar3.field0_0x0._4_4_;
          pTVar21 = FRunModel::Measure(this_00,&local_d0,iVar33,iVar29,this->Scale,&local_198);
          fVar36 = (float)(pTVar21->field0_0x0)._s_0.X;
          dVar11 = TVar3.field0_0x0._0_8_ + (double)fVar36;
          if (iVar33 + 1 != iVar29) {
            pTVar8 = (this_00->Run).SharedReferenceCount.ReferenceController;
            pIVar6 = (this_00->Run).Object;
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
              UNLOCK();
            }
            pdVar23 = (double *)
                      (**(code **)((longlong)*pIVar6 + 0x28))
                                (pIVar6,local_c0,iVar33,iVar33 + 1,this->Scale,&local_198);
            fVar36 = (float)*pdVar23;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar8);
          }
        }
      }
      pIVar6 = (this_00->Run).Object;
      dVar10 = dVar10 + dVar11;
      dVar11 = dVar12 + (double)CONCAT44(uVar35,uVar34);
      local_130 = dVar10;
      sVar16 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,this->Scale);
      pIVar6 = (this_00->Run).Object;
      sVar17 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,this->Scale);
      sVar18 = sVar17 + sVar16;
      if ((short)(sVar17 + sVar16) < local_1b4) {
        sVar18 = local_1b4;
      }
      sVar17 = -sVar16;
      if (-sVar16 < local_1b6) {
        sVar17 = local_1b6;
      }
      local_1b6 = sVar17;
      local_1b4 = sVar18;
      if (iVar29 == param_4) {
        iVar19 = *param_1;
        if (iVar19 < *local_1a0) {
          if ((iVar19 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            pFVar20 = (FBreakCandidate *)(*pcVar9)();
            return pFVar20;
          }
          plVar5 = *(longlong **)((param_2->Runs).AllocatorInstance.Data + (longlong)iVar19 * 0x30);
          (**(code **)(*plVar5 + 8))(plVar5,local_108);
          if (iVar29 == local_104) {
            *param_1 = *param_1 + 1;
          }
        }
        goto LAB_142868aef;
      }
      *param_1 = *param_1 + 1;
      uVar25 = *param_1;
      pTVar31 = local_178;
      dVar12 = dVar11;
    } while ((int)uVar25 < *local_1a0);
  }
  local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.Data.ArrayNum = 0;
  local_1b0.Data.ArrayMax = 0;
  iVar19 = (((param_2->Text).Object)->Data).ArrayNum;
  iVar29 = iVar19 + -1;
  if (iVar19 == 0) {
    iVar29 = 0;
  }
  ::FString::Reserve(&local_1b0,iVar29);
  pFVar7 = (param_2->Text).Object;
  iVar29 = (pFVar7->Data).ArrayNum;
  pFVar30 = (pFVar7->Data).AllocatorInstance.Data;
  pFVar32 = pFVar30 + (longlong)iVar29 * 2 + -2;
  if (iVar29 == 0) {
    pFVar32 = pFVar30 + (longlong)iVar29 * 2;
  }
  while( true ) {
    if ((pFVar7->Data).ArrayNum != iVar29) {
      local_1b8[0] = 0;
      `TCheckedPointerIterator<wchar_t,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1b8);
    }
    if (pFVar30 == pFVar32) break;
    _C = *(wchar_t *)pFVar30;
    if (_C == L'\\') {
      ::FString::AppendChars(&local_1b0,L"\\\\",2);
      pFVar30 = pFVar30 + 2;
    }
    else {
      iVar19 = iswspace(_C);
      if ((iVar19 == 0) && (iVar19 = iswpunct(_C), iVar19 == 0)) {
        iVar19 = iswdigit(_C);
        if (iVar19 == 0) {
          iVar19 = iswlower(_C);
          if (iVar19 == 0) {
            ::FString::AppendChars(&local_1b0,L"A",1);
            pFVar30 = pFVar30 + 2;
          }
          else {
            ::FString::AppendChars(&local_1b0,L"a",1);
            pFVar30 = pFVar30 + 2;
          }
        }
        else {
          ::FString::AppendChars(&local_1b0,L"0",1);
          pFVar30 = pFVar30 + 2;
        }
      }
      else {
        ::FString::AppendChar(&local_1b0,_C);
        pFVar30 = pFVar30 + 2;
      }
    }
  }
  uVar27 = 0;
  local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Data.ArrayNum = 0;
  local_170.Data.ArrayMax = 0;
  uVar24 = uVar27;
  if (0 < (param_2->Runs).ArrayNum) {
    do {
      uVar26 = (uint)uVar27;
      uVar25 = 0;
      if ((int)uVar26 < (param_2->Runs).ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        pFVar20 = (FBreakCandidate *)(*pcVar9)();
        return pFVar20;
      }
      plVar5 = *(longlong **)((param_2->Runs).AllocatorInstance.Data + uVar24);
      (**(code **)(*plVar5 + 8))(plVar5,local_158);
      ::FString::PrintfImpl(&local_100,L"\t\t[%d] - Range: {%d, %d}\n");
      iVar29 = local_100.Data.ArrayNum + -1;
      if (local_100.Data.ArrayNum == 0) {
        iVar29 = 0;
      }
      ::FString::AppendChars(&local_170,(wchar_t *)local_100.Data.AllocatorInstance.Data,iVar29);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      uVar27 = (ulonglong)(uVar26 + 1);
      uVar24 = uVar24 + 0x30;
    } while ((int)(uVar26 + 1) < (param_2->Runs).ArrayNum);
  }
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  TAttribute<FString>::Get(&this->DebugSourceInfo,&local_140);
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("SuccessfullyMeasuredSlice",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                      ,0xb2,
                      L"Failed to measure a slice of text!\n\tDebug Source: %s\n\tAnonymized Text: %s\n\tStart Index: %d\n\tEnd Index: %d\n\tStart Run Index: %d\n\tLine Runs:\n%s"
                     );
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (bVar15) {
    pcVar9 = (code *)swi(3);
    pFVar20 = (FBreakCandidate *)(*pcVar9)();
    return pFVar20;
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
LAB_142868aef:
  iStack_14c = param_4;
  FVar13.EndIndex = param_4;
  FVar13.BeginIndex = param_3;
  __return_storage_ptr__->ActualRange = FVar13;
  FVar14.EndIndex = iVar33;
  FVar14.BeginIndex = param_3;
  __return_storage_ptr__->TrimmedRange = FVar14;
  __return_storage_ptr__->MaxAboveBaseline = local_1b4;
  __return_storage_ptr__->MaxBelowBaseline = local_1b6;
  __return_storage_ptr__->Kerning = local_res20;
  __return_storage_ptr__->FirstTrailingWhitespaceCharWidth = fVar36;
  __return_storage_ptr__->TrimmedWidth = (float)dVar11;
  *(undefined4 *)&(__return_storage_ptr__->ActualSize).field0_0x0 = (undefined4)local_130;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ActualSize).field0_0x0 + 4) = local_130._4_4_;
  (__return_storage_ptr__->ActualSize).field0_0x0._s_0.Y = (double)((int)local_1b4 + (int)local_1b6)
  ;
  local_150 = param_3;
  local_148 = param_3;
  iStack_144 = iVar33;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.ShapedTextCache.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateLineViewBlocks @ 14286bfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FTextLayout::CreateLineViewBlocks
          (FTextLayout *this,int param_1,int param_2,float param_3,TOptional<float> *param_4,
          int *param_5,int *param_6,int *param_7,
          TArray<TSharedRef<ILayoutBlock,1>,TSizedDefaultAllocator<32>_> *param_8)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  Type TVar3;
  longlong *plVar4;
  ITextBiDi *pIVar5;
  IRun *pIVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  FRunModel *pFVar13;
  uint *puVar14;
  bool bVar15;
  char cVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  TSharedRef<ILayoutBlock,1> *pTVar23;
  int *piVar24;
  TReferenceControllerBase<1> *pTVar25;
  double *pdVar26;
  FSharedReferencer<1> FVar27;
  TSharedRef<ILayoutBlock,1> *pTVar28;
  uint uVar29;
  wchar_t *pwVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  TAttribute<FString> *pTVar35;
  FLineView *pFVar36;
  ETextDirection EVar37;
  int iVar38;
  ulonglong uVar39;
  FTextLayout *pFVar40;
  TSharedRef<ILayoutBlock,1> *pTVar41;
  int iVar42;
  uint uVar43;
  ForAnyElementType FVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint uVar50;
  undefined1 auStackY_4e8 [32];
  char local_498;
  ForAnyElementType local_490;
  uint local_488;
  uint local_484;
  short local_480;
  undefined1 local_47e;
  FIdentityFunctor local_47d;
  short local_47c;
  FTextLayout *local_478;
  longlong local_470;
  ForAnyElementType local_468;
  float local_460;
  float local_45c;
  uint local_458;
  FScriptContainerElement *local_450;
  undefined1 local_448 [24];
  FLineView *local_430;
  int local_428;
  int iStack_424;
  IRunRenderer *local_420;
  TVector2<double>_u_0 TStack_418;
  undefined1 local_408 [16];
  float local_3f8;
  float local_3f4;
  FTextRange local_3f0;
  undefined8 local_3e8;
  ForAnyElementType local_3e0;
  undefined8 local_3d8;
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  undefined2 local_3c0;
  longlong local_3b8;
  TReferenceControllerBase<1> *local_3b0;
  int local_3a8;
  uint *local_3a0;
  uint local_398;
  uint uStack_394;
  longlong local_390;
  FRunModel *local_388;
  uint local_380;
  uint uStack_37c;
  int *local_378;
  int local_370;
  int iStack_36c;
  uint *local_368;
  longlong *local_360;
  TReferenceControllerBase<1> *local_358;
  FLineView local_348;
  FBlockDefinition local_2d8;
  TOptional<float> *local_2c0;
  uint *local_2b8;
  int local_2b0 [2];
  undefined1 local_2a8 [4];
  uint local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  FSharedReferencer<1> local_288;
  undefined8 local_280;
  FSharedReferencer<1> local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  int local_250 [2];
  double local_248;
  double local_240;
  double local_238 [2];
  FLayoutBlockTextContext local_228;
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  double local_1f0 [2];
  TSharedRef<ILayoutBlock,1> local_1e0;
  FReadAccessScope local_1d0;
  FReadAccessScope local_1b8;
  FReadAccessScope local_1a0;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  FReadAccessScope local_158;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  TReferenceControllerBase<1> *local_f0;
  FRunModel local_e0 [3];
  
  local_e0[0].MeasuredRanges.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_4e8);
  pTVar41 = (TSharedRef<ILayoutBlock,1> *)0x0;
  local_430 = (FLineView *)param_8;
  local_2c0 = param_4;
  uVar32 = 0;
  local_408._0_4_ = 0;
  uVar50 = uVar32;
  if (param_1 < (this->LineModels).ArrayNum) {
    uVar50 = (uint)~param_1 >> 0x1f;
  }
  local_368 = (uint *)param_5;
  local_2b8 = (uint *)param_6;
  local_3a0 = (uint *)param_7;
  local_478 = this;
  local_458 = param_2;
  local_3a8 = param_1;
  if ((uVar50 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_450 = (this->LineModels).AllocatorInstance.Data;
  lVar34 = (longlong)param_1 * 0x70;
  local_3b0 = *(TReferenceControllerBase<1> **)(local_450 + lVar34 + 0x18);
  local_3b8 = *(longlong *)(local_450 + lVar34 + 0x10);
  if (local_3b0 == (TReferenceControllerBase<1> *)0x0) {
    local_3c0 = CONCAT11(local_450[lVar34 + 0x20],this->TextShapingMethod);
  }
  else {
    LOCK();
    local_3b0->SharedReferenceCount = (atomic<int>)((int)local_3b0->SharedReferenceCount + 1);
    UNLOCK();
    local_3c0 = CONCAT11(local_450[lVar34 + 0x20],this->TextShapingMethod);
    LOCK();
    local_3b0->SharedReferenceCount = (atomic<int>)((int)local_3b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_470 = lVar34;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b0);
  pFVar7 = local_450;
  iVar21 = *param_7;
  iVar38 = *param_5;
  local_480 = 0;
  local_47c = 0;
  iVar42 = iVar21;
  if (iVar38 < *(int *)(local_450 + lVar34 + 0x30)) {
    if ((iVar38 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    plVar4 = *(longlong **)(*(longlong *)(pFVar7 + lVar34 + 0x28) + (longlong)iVar38 * 0x30);
    (**(code **)(*plVar4 + 8))(plVar4,local_2b0);
    iVar42 = local_2b0[0];
    if (local_2b0[0] < iVar21) {
      iVar42 = iVar21;
    }
  }
  uVar50 = local_458;
  if ((local_458 == 0xffffffff) &&
     (iVar21 = *(int *)(pFVar7 + local_470 + 0x30), uVar50 = uVar32, 0 < iVar21)) {
    if ((int)(iVar21 - 1U) < iVar21) {
      uVar32 = ~(iVar21 - 1U) >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    plVar4 = *(longlong **)
              (*(longlong *)(pFVar7 + local_470 + 0x28) + -0x30 +
              (longlong)*(int *)(pFVar7 + local_470 + 0x30) * 0x30);
    (**(code **)(*plVar4 + 8))(plVar4,local_2a8);
    uVar50 = local_2a4;
  }
  local_498 = '\0';
  local_468.Data = (FScriptContainerElement *)0x0;
  uVar32 = 0;
  local_460 = 0.0;
  local_45c = 0.0;
  if (local_478->TextShapingMethod != KerningOnly) {
    pIVar5 = (local_478->TextBiDiDetection).Ptr;
    if (*(int *)(*(undefined8 **)(local_450 + local_470) + 1) == 0) {
      pwVar30 = L"";
    }
    else {
      pwVar30 = (wchar_t *)**(undefined8 **)(local_450 + local_470);
    }
    local_498 = (**(code **)((longlong)*pIVar5 + 8))(pIVar5,pwVar30,iVar42);
  }
  if (local_460 == 0.0) {
    local_e0[0].Run.Object._4_4_ = uVar50 - iVar42;
    local_e0[0].Run.SharedReferenceCount.ReferenceController._0_4_ =
         (uint)local_e0[0].Run.SharedReferenceCount.ReferenceController & 0xffffff00;
    local_e0[0].Run.Object._0_4_ = iVar42;
    if (((local_468.Data <= local_e0) &&
        (local_e0 < (FRunModel *)(local_468.Data + (longlong)(int)local_45c * 0xc))) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_460 == local_45c) {
      local_460 = (float)UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&local_468,(int *)&local_45c);
    }
    *(ulonglong *)(local_468.Data + (longlong)(int)local_460 * 0xc) =
         CONCAT44(local_e0[0].Run.Object._4_4_,(int)local_e0[0].Run.Object);
    *(uint *)(local_468.Data + (longlong)(int)local_460 * 0xc + 8) =
         (uint)local_e0[0].Run.SharedReferenceCount.ReferenceController;
    local_460 = (float)((int)local_460 + 1);
  }
  fVar49 = local_460;
  FVar44.Data = local_468.Data;
  local_448._16_4_ = 0;
  local_408._8_8_ = (FTextDirectionInfo *)0x0;
  local_3f8 = local_460;
  if (local_460 == 0.0) {
    local_3f4 = 0.0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(int)local_460,0,(ForAnyElementType *)(local_408 + 8),(int)local_460,
               (int *)&local_3f4);
    memcpy((void *)local_408._8_8_,FVar44.Data,(longlong)(int)fVar49 * 0xc);
  }
  AlgoImpl::
  IntroSortInternal<TextBiDi::FTextDirectionInfo,int,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,_FTextLayout::CreateLineViewBlocks_::__l2::<lambda_1>_>_>
            ((FTextDirectionInfo *)local_408._8_8_,(int)local_3f8,local_47d,(<lambda_1> *)&local_47d
            );
  uVar50 = *param_5;
  local_428 = 0x7fffffff;
  iStack_424 = -0x80000000;
  if ((int)uVar50 < *(int *)(local_450 + local_470 + 0x30)) {
    local_378 = &(local_430->Blocks).ArrayMax;
    local_390 = 0;
    lVar34 = local_470;
    do {
      lVar22 = local_390;
      pFVar7 = local_450;
      uVar29 = uVar32;
      if ((int)uVar50 < *(int *)(local_450 + lVar34 + 0x30)) {
        uVar29 = ~uVar50 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_388 = (FRunModel *)
                  (*(longlong *)(pFVar7 + lVar34 + 0x28) + (longlong)(int)uVar50 * 0x30);
      pIVar6 = (local_388->Run).Object;
      (**(code **)((longlong)*pIVar6 + 8))(pIVar6,&local_398);
      uVar50 = uStack_394;
      uVar29 = local_398;
      if ((int)local_398 < (int)*local_3a0) {
        uVar29 = *local_3a0;
      }
      EVar37 = LeftToRight;
      uVar43 = uVar50;
      uVar33 = uVar32;
      if ((int)local_448._16_4_ < (int)local_3f8) {
        uVar43 = uVar32;
        if ((int)local_448._16_4_ < (int)local_3f8) {
          uVar43 = (uint)~local_448._16_4_ >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar12 = local_408._8_8_;
        pFVar40 = local_478;
        uVar33 = *(int *)(local_408._8_8_ + lVar22 * 0xc + 4) +
                 ((FTextDirectionInfo *)(local_408._8_8_ + lVar22 * 0xc))->StartIndex;
        if ((int)uVar29 < ((FTextDirectionInfo *)(local_408._8_8_ + lVar22 * 0xc))->StartIndex) {
          pTVar35 = &local_478->DebugSourceInfo;
          local_2a0 = 0;
          local_298 = 0;
          if ((local_478->DebugSourceInfo).bIsSet != false) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_478->DebugSourceInfo).Getter,&local_1a0);
            if (((*(int *)&(pFVar40->DebugSourceInfo).Getter.field_0x10 == 0) ||
                (plVar4 = *(longlong **)&(pFVar40->DebugSourceInfo).Getter.field_0x8,
                plVar4 == (longlong *)0x0)) ||
               (cVar16 = (**(code **)(*plVar4 + 0x38))(), cVar16 == '\0')) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_1a0);
            }
            else {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_1a0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &(pFVar40->DebugSourceInfo).Getter,&local_188);
              pTVar28 = pTVar41;
              if (*(int *)&(pFVar40->DebugSourceInfo).Getter.field_0x10 != 0) {
                pTVar28 = *(TSharedRef<ILayoutBlock,1> **)
                           &(pFVar40->DebugSourceInfo).Getter.field_0x8;
              }
              (*(code *)pTVar28->Object[0xc])(pTVar28,&local_3d0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_188);
              if (pTVar35 != (TAttribute<FString> *)&local_3d0) {
                pFVar7 = (pTVar35->Value).Data.AllocatorInstance.Data;
                if (pFVar7 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar7);
                }
                (pTVar35->Value).Data.AllocatorInstance.Data = local_3d0.Data;
                (pFVar40->DebugSourceInfo).Value.Data.ArrayNum = (int)local_3c8;
                (pFVar40->DebugSourceInfo).Value.Data.ArrayMax = local_3c8._4_4_;
                local_3c8 = 0;
                local_3d0.Data = (FScriptContainerElement *)0x0;
              }
              if (local_3d0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3d0.Data);
              }
            }
          }
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("BlockBeginIndex >= CurrentTextDirectionInfo.StartIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                              ,0x10b,L"Debug Source: %s");
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        EVar37 = *(ETextDirection *)(uVar12 + lVar22 * 0xc + 8);
        param_6 = (int *)local_2b8;
        uVar43 = uVar33;
        if ((int)uVar50 < (int)uVar33) {
          uVar43 = uVar50;
        }
      }
      uVar50 = *param_6;
      local_420 = (IRunRenderer *)0x0;
      TStack_418._s_0.X = 0.0;
      if (uVar50 != 0xffffffff) {
        uVar20 = uVar32;
        if ((int)uVar50 < *(int *)(local_450 + local_470 + 0x50)) {
          uVar20 = ~uVar50 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar12 = TStack_418._s_0.X;
        lVar22 = (longlong)(int)uVar50 * 0x20;
        lVar34 = *(longlong *)(local_450 + local_470 + 0x48);
        uVar50 = *(uint *)(lVar22 + 4 + lVar34);
        if ((int)*local_3a0 < (int)uVar50) {
          if ((int)uVar43 < (int)uVar50) goto LAB_14286c835;
          local_420 = (IRunRenderer *)0x0;
          if ((TReferenceControllerBase<1> *)TStack_418._s_0.X != (TReferenceControllerBase<1> *)0x0
             ) {
            TStack_418._s_0.X = 0.0;
            LOCK();
            paVar1 = (atomic<int> *)(uVar12 + 8);
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (*(code *)**(undefined8 **)uVar12)();
              LOCK();
              paVar1 = (atomic<int> *)(uVar12 + 0xc);
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)(*(longlong *)uVar12 + 8))(uVar12,1);
              }
            }
          }
          FVar27.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          uVar43 = uVar50;
        }
        else {
          uVar50 = *(uint *)(lVar22 + 8 + lVar34);
          local_420 = *(IRunRenderer **)(lVar22 + 0x10 + lVar34);
          pTVar25 = *(TReferenceControllerBase<1> **)(lVar22 + 0x18 + lVar34);
          if ((int)uVar43 < (int)uVar50) {
            if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_280 = 0;
            local_278.ReferenceController = pTVar25;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&TStack_418,&local_278);
            FVar27.ReferenceController = local_278.ReferenceController;
          }
          else {
            if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_290 = 0;
            local_288.ReferenceController = pTVar25;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&TStack_418,&local_288);
            FVar27.ReferenceController = local_288.ReferenceController;
            uVar43 = uVar50;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar27.ReferenceController);
      }
LAB_14286c835:
      pFVar40 = local_478;
      if ((local_458 != 0xffffffff) && ((int)local_458 < (int)uVar43)) {
        uVar43 = local_458;
      }
      if (uVar43 == uVar33) {
        local_448._16_4_ = local_448._16_4_ + 1;
        local_390 = local_390 + 1;
      }
      if ((int)uVar43 < (int)uVar29) {
        pTVar35 = &local_478->DebugSourceInfo;
        local_270 = 0;
        local_268 = 0;
        if ((local_478->DebugSourceInfo).bIsSet != false) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(local_478->DebugSourceInfo).Getter,&local_1d0);
          if (((*(int *)&(pFVar40->DebugSourceInfo).Getter.field_0x10 == 0) ||
              (plVar4 = *(longlong **)&(pFVar40->DebugSourceInfo).Getter.field_0x8,
              plVar4 == (longlong *)0x0)) ||
             (cVar16 = (**(code **)(*plVar4 + 0x38))(), cVar16 == '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_1d0);
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_1d0);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(pFVar40->DebugSourceInfo).Getter,&local_170);
            pTVar28 = pTVar41;
            if (*(int *)&(pFVar40->DebugSourceInfo).Getter.field_0x10 != 0) {
              pTVar28 = *(TSharedRef<ILayoutBlock,1> **)&(pFVar40->DebugSourceInfo).Getter.field_0x8
              ;
            }
            (*(code *)pTVar28->Object[0xc])(pTVar28,&local_3e0);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_170);
            if (pTVar35 != (TAttribute<FString> *)&local_3e0) {
              pFVar7 = (pTVar35->Value).Data.AllocatorInstance.Data;
              if (pFVar7 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar7);
              }
              (pTVar35->Value).Data.AllocatorInstance.Data = local_3e0.Data;
              (pFVar40->DebugSourceInfo).Value.Data.ArrayNum = (int)local_3d8;
              (pFVar40->DebugSourceInfo).Value.Data.ArrayMax = local_3d8._4_4_;
              local_3d8 = 0;
              local_3e0.Data = (FScriptContainerElement *)0x0;
            }
            if (local_3e0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.Data);
            }
          }
        }
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("BlockBeginIndex <= BlockStopIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                            ,0x143,L"Debug Source: %s");
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_2d8.ActualRange.EndIndex = uVar43;
      local_2d8.ActualRange.BeginIndex = uVar29;
      if ((TReferenceControllerBase<1> *)TStack_418._s_0.X != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)TStack_418._s_0.X + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)TStack_418._s_0.X + 8) + 1);
        UNLOCK();
      }
      local_140 = 0;
      uStack_138 = 0;
      local_2d8.Renderer.Object = local_420;
      local_2d8.Renderer.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)TStack_418._s_0.X;
      local_380 = uVar29;
      uStack_37c = uVar43;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar13 = local_388;
      local_228._padding_._0_2_ = local_3c0;
      local_228._padding_ = local_3b8;
      local_228._padding_ = (longlong)local_3b0;
      if (local_3b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_3b0->SharedReferenceCount = (atomic<int>)((int)local_3b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_228.TextDirection = EVar37;
      pTVar23 = FRunModel::CreateBlock(local_388,&local_1e0,&local_2d8,local_478->Scale,&local_228);
      pFVar36 = local_430;
      pTVar28 = (TSharedRef<ILayoutBlock,1> *)(local_430->Blocks).AllocatorInstance.Data;
      piVar24 = local_378;
      if (((pTVar28 <= pTVar23) &&
          (piVar24 = &(local_430->Blocks).ArrayMax, local_378 = piVar24,
          pTVar23 < pTVar28 + (local_430->Blocks).ArrayMax)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar21 = (pFVar36->Blocks).ArrayNum;
      if (iVar21 == *piVar24) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)pFVar36,piVar24);
      }
      (pFVar36->Blocks).ArrayNum = iVar21 + 1;
      pFVar7 = (pFVar36->Blocks).AllocatorInstance.Data;
      *(ILayoutBlock **)(pFVar7 + (longlong)iVar21 * 0x10) = pTVar23->Object;
      pTVar25 = (pTVar23->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)iVar21 * 0x10 + 8) = pTVar25;
      if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_228._padding_);
      *local_3a0 = uVar43;
      iVar21 = (pFVar36->Blocks).ArrayNum;
      uVar29 = iVar21 - 1;
      uVar50 = uVar32;
      if ((int)uVar29 < iVar21) {
        uVar50 = ~uVar29 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar4 = *(longlong **)
                ((pFVar36->Blocks).AllocatorInstance.Data +
                (longlong)(pFVar36->Blocks).ArrayNum * 0x10 + -0x10);
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_370);
      iVar21 = local_370;
      if (local_428 < local_370) {
        iVar21 = local_428;
      }
      iVar38 = iStack_36c;
      if (iStack_36c < iStack_424) {
        iVar38 = iStack_424;
      }
      local_428 = iVar21;
      iStack_424 = iVar38;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d8.Renderer.SharedReferenceCount.ReferenceController);
      pFVar40 = local_478;
      pIVar6 = (pFVar13->Run).Object;
      sVar17 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,local_478->Scale);
      pIVar6 = (pFVar13->Run).Object;
      sVar18 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,pFVar40->Scale);
      puVar14 = local_368;
      pFVar7 = local_450;
      lVar34 = local_470;
      sVar19 = sVar18 + sVar17;
      if ((short)(sVar18 + sVar17) < local_480) {
        sVar19 = local_480;
      }
      sVar18 = -sVar17;
      if (-sVar17 < local_47c) {
        sVar18 = local_47c;
      }
      if (uVar43 == uStack_394) {
        *local_368 = *local_368 + 1;
      }
      uVar50 = *param_6;
      local_480 = sVar19;
      local_47c = sVar18;
      if (uVar50 != 0xffffffff) {
        uVar29 = uVar32;
        if ((int)uVar50 < *(int *)(local_450 + local_470 + 0x50)) {
          uVar29 = ~uVar50 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((uVar43 == *(uint *)((longlong)(int)uVar50 * 0x20 + 8 +
                                *(longlong *)(pFVar7 + lVar34 + 0x48))) &&
           (*param_6 = *param_6 + 1, *(int *)(pFVar7 + lVar34 + 0x50) <= *param_6)) {
          *param_6 = 0xffffffff;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TStack_418._s_0.X);
    } while ((uVar43 != local_458) &&
            (uVar50 = *puVar14, (int)uVar50 < *(int *)(pFVar7 + lVar34 + 0x30)));
  }
  pFVar36 = local_430;
  dVar10 = 0.0;
  dVar46 = 0.0;
  fVar47 = 0.0;
  fVar49 = 0.0;
  dVar45 = *(double *)&(local_478->ScrollOffset).field0_0x0;
  iVar21 = (local_430->Blocks).ArrayNum;
  uVar50 = SUB84(dVar45,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar29 = (uint)((ulonglong)dVar45 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar11 = (double)(local_478->TextLayoutSize).Height - (local_478->ScrollOffset).field0_0x0._s_0.Y;
  pFVar40 = local_478;
  if (iVar21 < 1) goto LAB_14286d7db;
  if ((1 < iVar21) && (local_498 != '\0')) {
    local_448._0_8_ = (TSharedRef<ILayoutBlock,1> *)0x0;
    local_448._8_4_ = 0;
    local_448._12_4_ = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar21,(ForAnyElementType *)local_448,0,(int *)(local_448 + 0xc));
    uVar31 = (ulonglong)(int)local_460;
    local_490.Data = (FScriptContainerElement *)0x0;
    local_488 = 0;
    local_484 = 0;
    local_448._20_4_ = local_460;
    local_388 = (FRunModel *)(local_468.Data + uVar31 * 0xc);
    pTVar28 = pTVar41;
    uVar39 = uVar31;
    FVar44.Data = local_468.Data;
    while( true ) {
      pFVar13 = local_388;
      uVar43 = (uint)pTVar28;
      if ((int)uVar31 != (int)uVar39) {
        local_47e = 0;
        `TCheckedPointerIterator<TextBiDi::FTextDirectionInfo,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_47e);
        uVar43 = local_488;
      }
      pFVar40 = local_478;
      if ((FRunModel *)FVar44.Data == pFVar13) break;
      iVar21 = *(int *)&(((FRunModel *)FVar44.Data)->Run).Object;
      iVar38 = *(int *)((longlong)&(((FRunModel *)FVar44.Data)->Run).Object + 4) + iVar21;
      if (iVar21 < iVar38) {
        do {
          pTVar28 = (TSharedRef<ILayoutBlock,1> *)(pFVar36->Blocks).AllocatorInstance.Data;
          pTVar23 = pTVar28 + (pFVar36->Blocks).ArrayNum;
          for (; pTVar28 != pTVar23; pTVar28 = pTVar28 + 1) {
            piVar24 = (int *)(**(code **)((longlong)*pTVar28->Object + 0x10))
                                       (pTVar28->Object,local_1f8);
            if ((0 < piVar24[1] - *piVar24) &&
               (piVar24 = (int *)(**(code **)((longlong)*pTVar28->Object + 0x10))
                                           (pTVar28->Object,local_200), *piVar24 == iVar21))
            goto LAB_14286cf57;
          }
          pTVar35 = &pFVar40->DebugSourceInfo;
          local_260 = 0;
          local_258 = 0;
          if ((pFVar40->DebugSourceInfo).bIsSet != false) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(pFVar40->DebugSourceInfo).Getter,&local_1b8);
            if (((*(int *)&(pFVar40->DebugSourceInfo).Getter.field_0x10 == 0) ||
                (plVar4 = *(longlong **)&(pFVar40->DebugSourceInfo).Getter.field_0x8,
                plVar4 == (longlong *)0x0)) ||
               (cVar16 = (**(code **)(*plVar4 + 0x38))(), cVar16 == '\0')) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_1b8);
            }
            else {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_1b8);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &(pFVar40->DebugSourceInfo).Getter,&local_158);
              pTVar28 = pTVar41;
              if (*(int *)&(pFVar40->DebugSourceInfo).Getter.field_0x10 != 0) {
                pTVar28 = *(TSharedRef<ILayoutBlock,1> **)
                           &(pFVar40->DebugSourceInfo).Getter.field_0x8;
              }
              (*(code *)pTVar28->Object[0xc])(pTVar28,&local_3f0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_158);
              if (pTVar35 != (TAttribute<FString> *)&local_3f0) {
                pFVar7 = (pTVar35->Value).Data.AllocatorInstance.Data;
                if (pFVar7 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar7);
                }
                (pTVar35->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_3f0;
                (pFVar40->DebugSourceInfo).Value.Data.ArrayNum = (int)local_3e8;
                (pFVar40->DebugSourceInfo).Value.Data.ArrayMax = local_3e8._4_4_;
                local_3e8._0_1_ = LeftToRight;
                local_3e8._1_3_ = 0;
                local_3e8._4_4_ = 0;
                local_3f0.BeginIndex = 0;
                local_3f0.EndIndex = 0;
              }
              if (local_3f0 != (FTextRange)0x0) {
                FMemory::Free((void *)local_3f0);
              }
            }
          }
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("FoundLineBlock",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                              ,0x18a,L"Debug Source: %s");
          pTVar28 = pTVar41;
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
LAB_14286cf57:
          if (*(char *)&(((FRunModel *)FVar44.Data)->Run).SharedReferenceCount.ReferenceController
              == '\0') {
            if (((local_490.Data <= pTVar28) &&
                (pTVar28 < (TSharedRef<ILayoutBlock,1> *)
                           (local_490.Data + (longlong)(int)local_484 * 0x10))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (local_488 == local_484) {
              local_488 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_490,(int *)&local_484);
            }
            *(ILayoutBlock **)&local_490.Data[(longlong)(int)local_488 * 0x10].field_0x0 =
                 pTVar28->Object;
            pTVar25 = (pTVar28->SharedReferenceCount).ReferenceController;
            *(TReferenceControllerBase<1> **)(local_490.Data + (longlong)(int)local_488 * 0x10 + 8)
                 = pTVar25;
            local_488 = local_488 + 1;
          }
          else {
            if (((local_490.Data <= pTVar28) &&
                (pTVar28 < (TSharedRef<ILayoutBlock,1> *)
                           (local_490.Data + (longlong)(int)local_484 * 0x10))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (local_488 == local_484) {
              local_488 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_490,(int *)&local_484);
            }
            lVar34 = (longlong)(int)local_488;
            local_488 = local_488 + 1;
            memmove((TSharedRef<ILayoutBlock,1> *)(local_490.Data + 0x10),local_490.Data,lVar34 << 4
                   );
            *(ILayoutBlock **)local_490.Data = pTVar28->Object;
            pTVar25 = (pTVar28->SharedReferenceCount).ReferenceController;
            *(TReferenceControllerBase<1> **)(local_490.Data + 8) = pTVar25;
          }
          if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
            UNLOCK();
          }
          lVar34 = (**(code **)((longlong)*pTVar28->Object + 0x10))(pTVar28->Object,local_208);
          iVar21 = *(int *)(lVar34 + 4);
          pFVar36 = local_430;
        } while (iVar21 < iVar38);
        uVar39 = (ulonglong)(uint)local_448._20_4_;
        uVar43 = local_488;
      }
      if (uVar43 != 0) {
        iVar21 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar43,(ForAnyElementType *)local_448,(int *)(local_448 + 8),
                            (int *)(local_448 + 0xc));
        memmove((FScriptContainerElement *)(local_448._0_8_ + (longlong)iVar21 * 0x10),
                local_490.Data,(longlong)(int)uVar43 << 4);
        local_488 = 0;
      }
      if ((int)local_484 < 0) {
        DestructItems<TSharedRef<ILayoutBlock,1>,int>
                  ((TSharedRef<ILayoutBlock,1> *)local_490.Data,0);
        local_488 = 0;
        pTVar28 = pTVar41;
        if (local_484 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_490,0,(int *)&local_484);
          pTVar28 = (TSharedRef<ILayoutBlock,1> *)(ulonglong)local_488;
        }
        uVar31 = (ulonglong)(uint)local_460;
        FVar44.Data = (FScriptContainerElement *)
                      ((longlong)
                       &(((FRunModel *)FVar44.Data)->Run).SharedReferenceCount.ReferenceController +
                      4);
      }
      else {
        DestructItems<TSharedRef<ILayoutBlock,1>,int>
                  ((TSharedRef<ILayoutBlock,1> *)local_490.Data,0);
        uVar31 = (ulonglong)(uint)local_460;
        FVar44.Data = (FScriptContainerElement *)
                      ((longlong)
                       &(((FRunModel *)FVar44.Data)->Run).SharedReferenceCount.ReferenceController +
                      4);
        local_488 = 0;
        pTVar28 = pTVar41;
      }
    }
    if (pFVar36 != (FLineView *)local_448) {
      DestructItems<TSharedRef<ILayoutBlock,1>,int>
                ((TSharedRef<ILayoutBlock,1> *)(pFVar36->Blocks).AllocatorInstance.Data,
                 (pFVar36->Blocks).ArrayNum);
      pFVar7 = (pFVar36->Blocks).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar36->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)local_448._0_8_;
      (pFVar36->Blocks).ArrayNum = local_448._8_4_;
      (pFVar36->Blocks).ArrayMax = local_448._12_4_;
      local_448._8_4_ = 0;
      local_448._12_4_ = 0;
      local_448._0_8_ = (TSharedRef<ILayoutBlock,1> *)0x0;
      uVar43 = local_488;
    }
    DestructItems<TSharedRef<ILayoutBlock,1>,int>
              ((TSharedRef<ILayoutBlock,1> *)local_490.Data,uVar43);
    if ((TSharedRef<ILayoutBlock,1> *)local_490.Data != (TSharedRef<ILayoutBlock,1> *)0x0) {
      FMemory::Free(local_490.Data);
    }
    DestructItems<TSharedRef<ILayoutBlock,1>,int>
              ((TSharedRef<ILayoutBlock,1> *)local_448._0_8_,local_448._8_4_);
    if ((TSharedRef<ILayoutBlock,1> *)local_448._0_8_ != (TSharedRef<ILayoutBlock,1> *)0x0) {
      FMemory::Free((void *)local_448._0_8_);
    }
  }
  dVar10 = __real_3fe0000000000000;
  iVar21 = (pFVar36->Blocks).ArrayNum;
  fVar47 = 0.0;
  fVar48 = fVar47;
  if (0 < iVar21) {
    iVar38 = (int)local_480;
    pTVar28 = pTVar41;
    pTVar23 = pTVar41;
    do {
      pFVar40 = local_478;
      uVar33 = (uint)pTVar28;
      uVar43 = uVar32;
      if ((int)uVar33 < iVar21) {
        uVar43 = ~uVar33 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (pFVar36->Blocks).AllocatorInstance.Data;
      pTVar25 = *(TReferenceControllerBase<1> **)
                 (pFVar7 + (longlong)&(pTVar23->SharedReferenceCount).ReferenceController);
      plVar4 = *(longlong **)((longlong)&pTVar23->Object + (longlong)pFVar7);
      if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(*plVar4 + 8))(plVar4,&local_360);
      (**(code **)(*plVar4 + 0x10))(plVar4,(longlong)&TStack_418._s_0 + 8);
      sVar19 = (**(code **)(*local_360 + 0x18))(local_360,pFVar40->Scale);
      lVar34 = (**(code **)(*plVar4 + 0x18))(plVar4,local_130);
      dVar46 = *(double *)(lVar34 + 8);
      cVar16 = (**(code **)(*local_360 + 0x30))
                         (local_360,TStack_418._8_4_,pFVar40->Scale,&local_3c0);
      (**(code **)(*local_360 + 0x40))(local_360,local_1f0,TStack_418._8_4_,TStack_418._12_4_);
      (**(code **)(*local_360 + 0x38))(local_360,local_238,TStack_418._8_4_,TStack_418._12_4_);
      if (0 < (int)uVar33) {
        fVar47 = fVar47 + (float)(((double)fVar49 - local_238[0]) * dVar10);
      }
      dVar9 = (double)fVar47;
      local_248 = (dVar9 - dVar45) + (double)(int)cVar16;
      local_240 = (double)(int)(short)(int)(((double)iVar38 - dVar46) - (double)(int)sVar19) +
                  dVar11;
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_248);
      pdVar26 = (double *)(**(code **)(*plVar4 + 0x18))(plVar4,local_120);
      dVar46 = dVar9 + *pdVar26;
      if (dVar9 + *pdVar26 <= (double)fVar48) {
        dVar46 = (double)fVar48;
      }
      fVar48 = (float)dVar46;
      pdVar26 = (double *)(**(code **)(*plVar4 + 0x18))(plVar4,local_110);
      fVar49 = (float)local_238[0];
      fVar47 = (float)(((*pdVar26 - local_1f0[0]) - local_238[0]) + dVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_358)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      pTVar28 = (TSharedRef<ILayoutBlock,1> *)(ulonglong)(uVar33 + 1);
      pTVar23 = pTVar23 + 1;
      iVar21 = (local_430->Blocks).ArrayNum;
      pFVar36 = local_430;
    } while ((int)(uVar33 + 1) < iVar21);
  }
  pFVar40 = local_478;
  local_348.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar10 = (double)fVar48;
  local_348.Blocks.ArrayNum = 0;
  local_348.Blocks.ArrayMax = 0;
  local_348.UnderlayHighlights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.UnderlayHighlights.ArrayNum = 0;
  local_348.UnderlayHighlights.ArrayMax = 0;
  local_348.OverlayHighlights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar47 = (float)((int)local_47c + (int)local_480);
  local_348.OverlayHighlights.ArrayNum = 0;
  local_348.OverlayHighlights.ArrayMax = 0;
  dVar46 = (double)(fVar47 * local_478->LineHeightPercentage);
  local_348.Offset.field0_0x0._s_0.X = (double)CONCAT44(uVar29,uVar50);
  if (local_2c0->bIsSet != false) {
    fVar48 = local_2c0->TypedValue;
  }
  local_348.Range.EndIndex = iStack_424;
  local_348.Range.BeginIndex = local_428;
  local_348.TextBaseDirection = *(ETextDirection *)(local_450 + local_470 + 0x20);
  local_348.ModelIndex = local_3a8;
  local_348.Offset.field0_0x0._s_0.Y = dVar11;
  local_348.Size.field0_0x0._s_0.X = dVar10;
  local_348.Size.field0_0x0._s_0.Y = dVar46;
  local_348.TextHeight = fVar47;
  local_348.JustificationWidth = fVar48;
  if ((&local_348 == pFVar36) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar21 = (pFVar36->Blocks).ArrayNum;
  if (iVar21 != 0) {
    iVar38 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar21,(ForAnyElementType *)&local_348,&local_348.Blocks.ArrayNum,
                        &local_348.Blocks.ArrayMax);
    ConstructItems<TSharedRef<ILayoutBlock,1>,TSharedRef<ILayoutBlock,1>,int>
              (local_348.Blocks.AllocatorInstance.Data + (longlong)iVar38 * 0x10,
               (TSharedRef<ILayoutBlock,1> *)(pFVar36->Blocks).AllocatorInstance.Data,iVar21);
  }
  pFVar36 = (FLineView *)(pFVar40->LineViews).AllocatorInstance.Data;
  if (((pFVar36 <= &local_348) && (&local_348 < pFVar36 + (pFVar40->LineViews).ArrayMax)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar21 = (pFVar40->LineViews).ArrayNum;
  piVar24 = &(pFVar40->LineViews).ArrayMax;
  if (iVar21 == *piVar24) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x868,&(pFVar40->LineViews).AllocatorInstance,piVar24);
  }
  (pFVar40->LineViews).ArrayNum = iVar21 + 1;
  FLineView::FLineView
            ((FLineView *)((pFVar40->LineViews).AllocatorInstance.Data + (longlong)iVar21 * 0x68),
             &local_348);
  TVar3 = pFVar40->Justification;
  if ((FScriptContainerElement)local_348.TextBaseDirection == (FScriptContainerElement)0x1) {
    if (TVar3 != Left) {
      if (TVar3 != Right) goto LAB_14286d6d4;
      goto LAB_14286d6d8;
    }
LAB_14286d73a:
    bVar15 = true;
  }
  else {
LAB_14286d6d4:
    if (TVar3 != Left) goto LAB_14286d73a;
LAB_14286d6d8:
    if ((local_348.Blocks.ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar41 = (TSharedRef<ILayoutBlock,1> *)&DAT_00000001;
    lVar34 = (**(code **)(**(longlong **)local_348.Blocks.AllocatorInstance.Data + 0x20))
                       (*(longlong **)local_348.Blocks.AllocatorInstance.Data,local_100);
    if (*(char *)(lVar34 + 0x18) == '\x01') goto LAB_14286d73a;
    bVar15 = false;
  }
  if (pTVar41 != (TSharedRef<ILayoutBlock,1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
  }
  if (bVar15) {
    local_408._0_4_ = (pFVar40->LineViews).ArrayNum + -1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (&pFVar40->LineViewsToJustify,local_250,(bool *)local_408);
  }
  DestructItems<FTextLayout::FLineViewHighlight,int>
            ((FLineViewHighlight *)local_348.OverlayHighlights.AllocatorInstance.Data,
             local_348.OverlayHighlights.ArrayNum);
  if ((FLineViewHighlight *)local_348.OverlayHighlights.AllocatorInstance.Data !=
      (FLineViewHighlight *)0x0) {
    FMemory::Free(local_348.OverlayHighlights.AllocatorInstance.Data);
  }
  DestructItems<FTextLayout::FLineViewHighlight,int>
            ((FLineViewHighlight *)local_348.UnderlayHighlights.AllocatorInstance.Data,
             local_348.UnderlayHighlights.ArrayNum);
  if ((FLineViewHighlight *)local_348.UnderlayHighlights.AllocatorInstance.Data !=
      (FLineViewHighlight *)0x0) {
    FMemory::Free(local_348.UnderlayHighlights.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<ILayoutBlock,1>,int>
            ((TSharedRef<ILayoutBlock,1> *)local_348.Blocks.AllocatorInstance.Data,
             local_348.Blocks.ArrayNum);
  if ((TSharedRef<ILayoutBlock,1> *)local_348.Blocks.AllocatorInstance.Data !=
      (TSharedRef<ILayoutBlock,1> *)0x0) {
    FMemory::Free(local_348.Blocks.AllocatorInstance.Data);
  }
LAB_14286d7db:
  dVar45 = (double)(pFVar40->TextLayoutSize).DrawWidth;
  if (dVar45 <= dVar10) {
    dVar45 = dVar10;
  }
  (pFVar40->TextLayoutSize).DrawWidth = (float)dVar45;
  if (local_458 != 0xffffffff) {
    dVar10 = (double)param_3;
  }
  dVar45 = (double)(pFVar40->TextLayoutSize).WrappedWidth;
  if (dVar45 <= dVar10) {
    dVar45 = dVar10;
  }
  (pFVar40->TextLayoutSize).WrappedWidth = (float)dVar45;
  (pFVar40->TextLayoutSize).Height = (float)((double)(pFVar40->TextLayoutSize).Height + dVar46);
  pFVar40->OverHeight = (float)(dVar46 - (double)fVar47);
  if ((FTextDirectionInfo *)local_408._8_8_ != (FTextDirectionInfo *)0x0) {
    FMemory::Free((void *)local_408._8_8_);
  }
  if ((FRunModel *)local_468.Data != (FRunModel *)0x0) {
    FMemory::Free(local_468.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b0);
  return;
}

// CreateLineWrappingCache @ 14286d910

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::CreateLineWrappingCache(FTextLayout *this,FLineModel *param_1)

{
  int *piVar1;
  TSharedPtr<IBreakIterator,1> *pTVar2;
  FBreakCandidate *pFVar3;
  code *pcVar4;
  FTextRange FVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TSharedRef<IBreakIterator,1> *pTVar12;
  FBreakCandidate *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  int local_res10 [2];
  IBreakIterator *local_88;
  FSharedReferencer<1> local_80;
  TSharedRef<IBreakIterator,1> local_78;
  TSharedRef<IBreakIterator,1> local_68;
  FBreakCandidate local_58;
  
  uVar15 = 0;
  if ((param_1->DirtyFlags & 1) != 0) {
    piVar1 = &(param_1->BreakCandidates).ArrayMax;
    uVar10 = 0;
    (param_1->BreakCandidates).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(param_1->BreakCandidates).AllocatorInstance,0,piVar1);
    }
    param_1->DirtyFlags = param_1->DirtyFlags & 0xfe;
    uVar16 = uVar15;
    uVar18 = uVar15;
    if (0 < (param_1->Runs).ArrayNum) {
      do {
        uVar17 = (uint)uVar18;
        uVar9 = uVar10;
        if ((int)uVar17 < (param_1->Runs).ArrayNum) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar20 = (param_1->Runs).AllocatorInstance.Data;
        pFVar19 = pFVar20 + uVar16 + 0x10;
        *(undefined4 *)&pFVar19[8].field_0x0 = 0;
        if (*(int *)(pFVar19 + 0xc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,(ForAnyElementType *)pFVar19,0,(int *)(pFVar19 + 0xc));
        }
        pFVar20 = pFVar20 + uVar16 + 0x20;
        *(undefined4 *)&pFVar20[8].field_0x0 = 0;
        if (*(int *)(pFVar20 + 0xc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)pFVar20,0,(int *)(pFVar20 + 0xc));
        }
        uVar16 = uVar16 + 0x30;
        uVar18 = (ulonglong)(uVar17 + 1);
      } while ((int)(uVar17 + 1) < (param_1->Runs).ArrayNum);
    }
    if (0.0 < this->WrappingWidth) {
      pTVar2 = &this->LineBreakIterator;
      if (pTVar2->Object == (IBreakIterator *)0x0) {
        bVar8 = GSlateUseSharedBreakIterator == false;
        if (bVar8) {
          pTVar12 = FBreakIterator::CreateLineBreakIterator(&local_78);
          uVar10 = 2;
        }
        else {
          pTVar12 = FBreakIterator::GetLineBreakIterator(&local_68);
        }
        local_80.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
        local_88 = pTVar12->Object;
        if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_80.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar2 != (TSharedPtr<IBreakIterator,1> *)&local_88) {
          pTVar2->Object = local_88;
          local_88 = (IBreakIterator *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->LineBreakIterator).SharedReferenceCount,&local_80);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.ReferenceController);
        if (uVar10 != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
        }
        if (!bVar8) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
        if ((pTVar2->Object == (IBreakIterator *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)((longlong)*pTVar2->Object + 0x30))(pTVar2->Object,(param_1->Text).Object);
      local_res10[0] = 0;
      while( true ) {
        if ((pTVar2->Object == (IBreakIterator *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = (**(code **)((longlong)*pTVar2->Object + 0x78))();
        if (uVar10 == 0xffffffff) break;
        pFVar13 = CreateBreakCandidate(this,&local_58,local_res10,param_1,(int)uVar15,uVar10);
        pFVar3 = (FBreakCandidate *)(param_1->BreakCandidates).AllocatorInstance.Data;
        if (((pFVar3 <= pFVar13) && (pFVar13 < pFVar3 + *piVar1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (param_1->BreakCandidates).ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&(param_1->BreakCandidates).AllocatorInstance,piVar1);
        }
        lVar14 = (longlong)iVar11;
        (param_1->BreakCandidates).ArrayNum = iVar11 + 1;
        FVar5 = pFVar13->TrimmedRange;
        pFVar20 = (param_1->BreakCandidates).AllocatorInstance.Data;
        *(FTextRange *)(pFVar20 + lVar14 * 0x30) = pFVar13->ActualRange;
        ((FTextRange *)(pFVar20 + lVar14 * 0x30))[1] = FVar5;
        dVar6 = (pFVar13->ActualSize).field0_0x0._s_0.Y;
        *(double *)(pFVar20 + lVar14 * 0x30 + 0x10) = (pFVar13->ActualSize).field0_0x0._s_0.X;
        *(double *)(pFVar20 + lVar14 * 0x30 + 0x10 + 8) = dVar6;
        uVar7 = *(undefined8 *)&pFVar13->MaxAboveBaseline;
        *(undefined8 *)(pFVar20 + lVar14 * 0x30 + 0x20) = *(undefined8 *)&pFVar13->TrimmedWidth;
        *(undefined8 *)(pFVar20 + lVar14 * 0x30 + 0x20 + 8) = uVar7;
        uVar15 = (ulonglong)uVar10;
      }
      if ((pTVar2->Object == (IBreakIterator *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)((longlong)*pTVar2->Object + 0x50))();
    }
  }
  return;
}

// CreateWrappingCache @ 14286dcc0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::CreateWrappingCache(FTextLayout *this)

{
  int iVar1;
  FLineModel *pFVar2;
  FLineModel *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LineModels).ArrayNum;
  pFVar2 = (FLineModel *)(this->LineModels).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->LineModels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    CreateLineWrappingCache(this,pFVar2);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// DirtyAllLineModels @ 14286e820

void __thiscall FTextLayout::DirtyAllLineModels(FTextLayout *this,uchar param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LineModels).ArrayNum;
  pFVar2 = (this->LineModels).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((this->LineModels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x68] = (FScriptContainerElement)((byte)pFVar2[0x68] | param_1);
    pFVar2 = pFVar2 + 0x70;
  }
  return;
}

// DirtyLayout @ 14286e880

void __thiscall FTextLayout::DirtyLayout(FTextLayout *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  this->DirtyFlags = this->DirtyFlags | 1;
  iVar1 = (this->LineModels).ArrayNum;
  pFVar2 = (this->LineModels).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((this->LineModels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x68] = (FScriptContainerElement)((byte)pFVar2[0x68] | 7);
    pFVar2 = pFVar2 + 0x70;
  }
  return;
}

// DirtyRunLayout @ 14286e8f0

void __thiscall FTextLayout::DirtyRunLayout(FTextLayout *this,TSharedRef<IRun_const_,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  IRun *pIVar3;
  IRun *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res18;
  
  uVar9 = 0;
  if ((this->LineModels).ArrayNum < 1) {
    this->DirtyFlags = this->DirtyFlags | 1;
    return;
  }
  local_res18 = 0;
  do {
    uVar8 = 0;
    if ((int)uVar9 < (this->LineModels).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar1 = (this->LineModels).AllocatorInstance.Data;
    if (((byte)pFVar1[local_res18 + 0x68] & 1) == 0) {
      uVar8 = 0;
      lVar11 = 0;
      if (0 < *(int *)(pFVar1 + local_res18 + 0x30)) {
        lVar10 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < *(int *)(pFVar1 + local_res18 + 0x30)) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar2 = *(TReferenceControllerBase<1> **)
                    (lVar10 + 8 + *(longlong *)(pFVar1 + local_res18 + 0x28));
          pIVar3 = *(IRun **)(lVar10 + *(longlong *)(pFVar1 + local_res18 + 0x28));
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          pIVar4 = param_1->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          if (pIVar3 == pIVar4) {
            uVar7 = 0;
            if ((int)uVar8 < *(int *)(pFVar1 + local_res18 + 0x30)) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar11 = lVar11 * 0x30 + *(longlong *)(pFVar1 + local_res18 + 0x28);
            *(undefined4 *)(lVar11 + 0x18) = 0;
            if (*(int *)(lVar11 + 0x1c) != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,0,(ForAnyElementType *)(lVar11 + 0x10),0,(int *)(lVar11 + 0x1c));
            }
            *(undefined4 *)(lVar11 + 0x28) = 0;
            if (*(int *)(lVar11 + 0x2c) != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,(ForAnyElementType *)(lVar11 + 0x20),0,(int *)(lVar11 + 0x2c));
            }
            break;
          }
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 0x30;
        } while ((int)uVar8 < *(int *)(pFVar1 + local_res18 + 0x30));
      }
    }
    local_res18 = local_res18 + 0x70;
    uVar9 = uVar9 + 1;
    if ((this->LineModels).ArrayNum <= (int)uVar9) {
      this->DirtyFlags = this->DirtyFlags | 1;
      return;
    }
  } while( true );
}

// EndLayout @ 14286f1a0

void __thiscall FTextLayout::EndLayout(FTextLayout *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->LineModels).AllocatorInstance.Data;
  iVar1 = (this->LineModels).ArrayNum;
  pFVar5 = pFVar7 + 0x30;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((this->LineModels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    iVar2 = *(int *)pFVar5;
    puVar3 = *(undefined8 **)(pFVar5 + -8);
    puVar4 = puVar3 + (longlong)iVar2 * 6;
    while( true ) {
      if (*(int *)pFVar5 != iVar2) {
        `TCheckedPointerIterator<FTextLayout::FRunModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar3 == puVar4) break;
      (**(code **)(*(longlong *)*puVar3 + 0x68))();
      puVar3 = puVar3 + 6;
    }
    pFVar7 = pFVar7 + 0x70;
    pFVar5 = pFVar5 + 0x70;
  }
  return;
}

// EndLineLayout @ 14286f250

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::EndLineLayout(FTextLayout *this,FLineModel *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = (param_1->Runs).ArrayNum;
  pFVar2 = (param_1->Runs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((param_1->Runs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FRunModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x68))();
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// FlowHighlights @ 142872c50

void __thiscall FTextLayout::FlowHighlights(FTextLayout *this)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  double dVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FString *pFVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  int *piVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  wchar_t *in_stack_fffffffffffffc78;
  undefined8 uVar33;
  undefined4 uVar34;
  int local_350;
  int iStack_34c;
  undefined8 local_348;
  longlong *local_340;
  TReferenceControllerBase<1> *local_338;
  double local_330;
  double dStack_328;
  float local_320;
  undefined8 local_318;
  FSharedReferencer<1> FStack_310;
  int local_308;
  uint local_304;
  ETextShapingMethod local_300;
  FScriptContainerElement local_2ff;
  undefined8 local_2f8;
  TReferenceControllerBase<1> *local_2f0;
  uint local_2e8;
  uint local_2e4;
  FScriptContainerElement *local_2d8;
  int local_2d0;
  int iStack_2cc;
  int *local_2c8;
  int *local_2c0;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  int *local_2a8;
  FString local_2a0;
  longlong local_290;
  FScriptContainerElement *local_288;
  int *local_280;
  FScriptContainerElement *local_278;
  undefined8 local_270;
  FSharedReferencer<1> local_268;
  double local_260 [2];
  double local_250 [2];
  double local_240 [2];
  double local_230 [2];
  double local_220 [2];
  double local_210 [2];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  TReferenceControllerBase<1> *local_140;
  undefined1 local_130 [16];
  TReferenceControllerBase<1> *local_120;
  undefined1 local_110 [16];
  TReferenceControllerBase<1> *local_100;
  undefined1 local_f0 [16];
  TReferenceControllerBase<1> *local_e0;
  undefined1 local_d0 [144];
  
  if ((this->DirtyFlags & 1) != 0) {
    local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a0.Data.ArrayNum = 0;
    local_2a0.Data.ArrayMax = 0;
    pFVar16 = TAttribute<FString>::Get(&this->DebugSourceInfo,&local_2a0);
    if ((pFVar16->Data).ArrayNum == 0) {
      in_stack_fffffffffffffc78 = L"";
    }
    else {
      in_stack_fffffffffffffc78 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!(DirtyFlags & ETextLayoutDirtyState::Layout)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                        ,0x324,L"Debug Source: %s");
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  dVar9 = __real_3fe0000000000000;
  local_2e4 = (this->LineViews).ArrayNum;
  uVar20 = (ulonglong)(int)local_2e4;
  pFVar22 = (this->LineViews).AllocatorInstance.Data;
  local_278 = pFVar22 + uVar20 * 0x68;
  do {
    pFVar23 = local_278;
    local_2d8 = pFVar22;
    if ((this->LineViews).ArrayNum != (int)uVar20) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FTextLayout::FLineView,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar22 == pFVar23) {
      return;
    }
    DestructItems<FTextLayout::FLineViewHighlight,int>
              (*(FLineViewHighlight **)(pFVar22 + 0x10),*(int *)(pFVar22 + 0x18));
    *(undefined4 *)(pFVar22 + 0x18) = 0;
    if (*(int *)(pFVar22 + 0x1c) != 0) {
      in_stack_fffffffffffffc78 =
           (wchar_t *)((ulonglong)in_stack_fffffffffffffc78 & 0xffffffff00000000);
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)(pFVar22 + 0x10),0,(int *)(pFVar22 + 0x1c));
    }
    DestructItems<FTextLayout::FLineViewHighlight,int>
              (*(FLineViewHighlight **)(pFVar22 + 0x20),*(int *)(pFVar22 + 0x28));
    *(undefined4 *)(pFVar22 + 0x28) = 0;
    if (*(int *)(pFVar22 + 0x2c) != 0) {
      in_stack_fffffffffffffc78 =
           (wchar_t *)((ulonglong)in_stack_fffffffffffffc78 & 0xffffffff00000000);
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)(pFVar22 + 0x20),0,(int *)(pFVar22 + 0x2c));
    }
    uVar4 = *(uint *)(pFVar22 + 100);
    uVar13 = 0;
    if ((int)uVar4 < (this->LineModels).ArrayNum) {
      uVar13 = ~uVar4 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (in_stack_fffffffffffffc78 = (wchar_t *)(longlong)(int)uVar4,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar23 = (this->LineModels).AllocatorInstance.Data;
    lVar21 = (longlong)(longlong)(int)uVar4 * 0x70;
    local_2f0 = *(TReferenceControllerBase<1> **)(pFVar23 + lVar21 + 0x18);
    local_2f8 = *(undefined8 *)(pFVar23 + lVar21 + 0x10);
    if (local_2f0 == (TReferenceControllerBase<1> *)0x0) {
      local_2ff = pFVar23[lVar21 + 0x20];
      local_300 = this->TextShapingMethod;
    }
    else {
      LOCK();
      local_2f0->SharedReferenceCount = (atomic<int>)((int)local_2f0->SharedReferenceCount + 1);
      UNLOCK();
      local_2ff = pFVar23[lVar21 + 0x20];
      local_300 = this->TextShapingMethod;
      LOCK();
      local_2f0->SharedReferenceCount = (atomic<int>)((int)local_2f0->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_290 = lVar21;
    local_288 = pFVar23;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2f0);
    local_2e8 = *(uint *)(pFVar23 + lVar21 + 0x60);
    uVar20 = (ulonglong)(int)local_2e8;
    piVar25 = *(int **)(pFVar23 + lVar21 + 0x58);
    piVar27 = piVar25 + uVar20 * 8;
    local_280 = piVar27;
    while( true ) {
      local_2c8 = piVar25;
      if (*(int *)(pFVar23 + lVar21 + 0x60) != (int)uVar20) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FTextLineHighlight,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (piVar25 == piVar27) break;
      if (*piVar25 == *(int *)(pFVar22 + 100)) {
        iVar15 = *(int *)(pFVar22 + 0x58);
        iVar26 = *(int *)(pFVar22 + 0x5c);
        local_2d0 = piVar25[1];
        if (piVar25[1] < iVar15) {
          local_2d0 = iVar15;
        }
        iStack_2cc = piVar25[2];
        if (iVar26 < piVar25[2]) {
          iStack_2cc = iVar26;
        }
        if (local_2d0 < iStack_2cc) {
          local_348 = CONCAT44(iStack_2cc,local_2d0);
          iVar24 = local_2d0;
        }
        else {
          local_348 = 0;
          iVar24 = 0;
        }
        iVar14 = (int)((ulonglong)local_348 >> 0x20);
        if ((0 < iVar14 - iVar24) || ((iVar24 == iVar15 && (iVar14 == iVar26)))) {
          local_268.ReferenceController = *(TReferenceControllerBase<1> **)(piVar25 + 6);
          local_318 = *(undefined8 *)(piVar25 + 4);
          local_320 = 0.0;
          FStack_310.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_330 = 0.0;
          dStack_328 = 0.0;
          if (local_268.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_268.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_268.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_270 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_310,&local_268);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_268.ReferenceController);
          iVar15 = *(int *)(pFVar22 + 8);
          local_2a8 = (int *)&local_348;
          bVar11 = false;
          local_2c0 = piVar25;
          fVar32 = 0.0;
          local_2b8 = pFVar22;
          local_2b0 = (FScriptContainerElement *)&local_330;
          local_304 = 0;
          fVar30 = (float)local_330;
          if (0 < iVar15) {
            lVar21 = 0;
            do {
              uVar4 = local_304;
              iVar26 = (int)((ulonglong)in_stack_fffffffffffffc78 >> 0x20);
              uVar13 = 0;
              if ((int)local_304 < iVar15) {
                uVar13 = ~local_304 >> 0x1f;
              }
              if (uVar13 == 0) {
                iVar26 = (int)local_304 >> 0x1f;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar12) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              lVar19 = *(longlong *)pFVar22;
              (**(code **)(**(longlong **)(lVar19 + lVar21) + 0x10))
                        (*(longlong **)(lVar19 + lVar21),&local_350);
              (**(code **)(**(longlong **)(lVar19 + lVar21) + 8))
                        (*(longlong **)(lVar19 + lVar21),&local_340);
              uVar33 = CONCAT44(iVar26,this->Scale);
              (**(code **)(*local_340 + 0x40))(local_340,local_220,local_350,iStack_34c,uVar33);
              in_stack_fffffffffffffc78 =
                   (wchar_t *)CONCAT44((int)((ulonglong)uVar33 >> 0x20),this->Scale);
              (**(code **)(*local_340 + 0x38))
                        (local_340,local_260,local_350,iStack_34c,in_stack_fffffffffffffc78);
              fVar31 = fVar30;
              if (0 < (int)uVar4) {
                fVar31 = fVar30 + (float)(((double)fVar32 - local_260[0]) * dVar9);
              }
              fVar32 = (float)local_260[0];
              pdVar17 = (double *)
                        (**(code **)(**(longlong **)(lVar19 + lVar21) + 0x18))
                                  (*(longlong **)(lVar19 + lVar21),local_200);
              iVar15 = (int)local_348;
              if ((int)local_348 < local_350) {
                iVar15 = local_350;
              }
              iVar26 = local_348._4_4_;
              if (iStack_34c < local_348._4_4_) {
                iVar26 = iStack_34c;
              }
              fVar30 = (float)(((*pdVar17 - local_220[0]) - local_260[0]) + (double)fVar31);
              if (iVar15 < iVar26) {
                local_308 = iVar26 - iVar15;
                if (local_308 < 1) goto LAB_14287312e;
LAB_14287313c:
                bVar12 = true;
              }
              else {
                iVar15 = 0;
                iVar26 = 0;
                local_308 = 0;
LAB_14287312e:
                if ((iVar15 == (int)local_348) && (iVar26 == local_348._4_4_)) goto LAB_14287313c;
                bVar12 = false;
              }
              iVar24 = local_308;
              if ((iVar15 == local_350) && (iVar26 == iStack_34c)) {
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
              if (bVar12) {
                if (bVar11) {
                  lVar18 = (**(code **)(**(longlong **)(lVar19 + lVar21) + 0x38))
                                     (*(longlong **)(lVar19 + lVar21),local_1b0);
                  if (*(double *)(lVar18 + 8) <= dStack_328 + *(double *)(pFVar22 + 0x38) &&
                      dStack_328 + *(double *)(pFVar22 + 0x38) != *(double *)(lVar18 + 8)) {
                    lVar18 = (**(code **)(**(longlong **)(lVar19 + lVar21) + 0x38))
                                       (*(longlong **)(lVar19 + lVar21),local_1a0);
                    dStack_328 = *(double *)(lVar18 + 8) - *(double *)(pFVar22 + 0x38);
                  }
                  dVar7 = (double)local_320;
                  bVar12 = (double)fVar31 <= dVar7 + local_330;
                  if (bVar8) {
                    if (bVar12) {
                      pdVar17 = (double *)
                                (**(code **)(**(longlong **)(lVar19 + lVar21) + 0x18))
                                          (*(longlong **)(lVar19 + lVar21),local_190);
                      local_320 = (float)(dVar7 + *pdVar17);
                    }
                    else {
                      `FTextLayout::FlowHighlights'::__l19::<lambda_1>::operator()(&local_2c0);
                      local_320 = 0.0;
                      local_330 = (double)fVar31;
                      pdVar17 = (double *)
                                (**(code **)(**(longlong **)(lVar19 + lVar21) + 0x18))
                                          (*(longlong **)(lVar19 + lVar21),local_d0);
                      local_320 = (float)*pdVar17;
                    }
                  }
                  else {
                    plVar5 = *(longlong **)(lVar19 + lVar21);
                    fVar28 = 0.0;
                    pcVar6 = *(code **)(*plVar5 + 0x20);
                    lVar18 = (*pcVar6)(plVar5,local_110);
                    cVar2 = *(char *)(lVar18 + 0x18);
                    lVar18 = (*pcVar6)(plVar5,local_130);
                    cVar3 = *(char *)(lVar18 + 1);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_120);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_100);
                    uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffc78 >> 0x20);
                    if (cVar2 != cVar3) {
                      lVar19 = (**(code **)(**(longlong **)(lVar19 + lVar21) + 0x20))
                                         (*(longlong **)(lVar19 + lVar21),local_f0);
                      cVar2 = *(char *)(lVar19 + 0x18);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(local_e0);
                      in_stack_fffffffffffffc78 = (wchar_t *)CONCAT44(uVar34,this->Scale);
                      if (cVar2 == '\0') {
                        pdVar17 = (double *)
                                  (**(code **)(*local_340 + 0x28))
                                            (local_340,local_180,local_350,iVar15);
                        fVar28 = (float)*pdVar17;
                      }
                      else {
                        pdVar17 = (double *)
                                  (**(code **)(*local_340 + 0x28))
                                            (local_340,local_170,iVar26,iStack_34c,
                                             in_stack_fffffffffffffc78,&local_300);
                        fVar28 = (float)*pdVar17;
                      }
                    }
                    fVar29 = 0.0;
                    if (0 < local_308) {
                      in_stack_fffffffffffffc78 =
                           (wchar_t *)
                           CONCAT44((int)((ulonglong)in_stack_fffffffffffffc78 >> 0x20),this->Scale)
                      ;
                      pdVar17 = (double *)
                                (**(code **)(*local_340 + 0x28))
                                          (local_340,local_160,iVar15,iVar26,
                                           in_stack_fffffffffffffc78,&local_300);
                      fVar29 = (float)*pdVar17;
                    }
                    if ((bVar12) && (fVar28 == 0.0)) {
                      local_320 = local_320 + fVar29;
                      `FTextLayout::FlowHighlights'::__l19::<lambda_1>::operator()(&local_2c0);
                      pFVar22 = local_2d8;
                      goto LAB_142873575;
                    }
                    `FTextLayout::FlowHighlights'::__l19::<lambda_1>::operator()(&local_2c0);
                    local_330 = (double)(fVar28 + fVar31);
                    pFVar22 = local_2d8;
                    local_320 = fVar29;
                  }
                }
                else {
                  local_330 = (double)fVar31;
                  bVar11 = true;
                  lVar18 = (**(code **)(**(longlong **)(lVar19 + lVar21) + 0x38))
                                     (*(longlong **)(lVar19 + lVar21),local_1f0);
                  dStack_328 = *(double *)(lVar18 + 8) - *(double *)(pFVar22 + 0x38);
                  if (0 < iVar24) {
                    uVar33 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffc78 >> 0x20),
                                      this->Scale);
                    pdVar17 = (double *)
                              (**(code **)(*local_340 + 0x28))
                                        (local_340,local_1e0,iVar15,iVar26,uVar33,&local_300);
                    uVar34 = (undefined4)((ulonglong)uVar33 >> 0x20);
                    local_320 = (float)((double)local_320 + *pdVar17);
                    lVar19 = (**(code **)(**(longlong **)(lVar19 + lVar21) + 0x20))
                                       (*(longlong **)(lVar19 + lVar21),local_150);
                    cVar2 = *(char *)(lVar19 + 0x18);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_140);
                    uVar33 = CONCAT44(uVar34,this->Scale);
                    if (cVar2 == '\0') {
                      (**(code **)(*local_340 + 0x40))(local_340,local_230,local_350,iVar15);
                      uVar33 = CONCAT44((int)((ulonglong)uVar33 >> 0x20),this->Scale);
                      (**(code **)(*local_340 + 0x38))(local_340,local_210,local_350,iVar15,uVar33);
                      in_stack_fffffffffffffc78 =
                           (wchar_t *)CONCAT44((int)((ulonglong)uVar33 >> 0x20),this->Scale);
                      pdVar17 = (double *)
                                (**(code **)(*local_340 + 0x28))
                                          (local_340,local_1d0,local_350,iVar15,
                                           in_stack_fffffffffffffc78,&local_300);
                      local_330 = local_330 + ((*pdVar17 - local_230[0]) - local_210[0]);
                    }
                    else {
                      (**(code **)(*local_340 + 0x40))(local_340,local_250,iVar26,iStack_34c,uVar33)
                      ;
                      uVar33 = CONCAT44((int)((ulonglong)uVar33 >> 0x20),this->Scale);
                      (**(code **)(*local_340 + 0x38))(local_340,local_240,iVar26,iStack_34c,uVar33)
                      ;
                      in_stack_fffffffffffffc78 =
                           (wchar_t *)CONCAT44((int)((ulonglong)uVar33 >> 0x20),this->Scale);
                      pdVar17 = (double *)
                                (**(code **)(*local_340 + 0x28))
                                          (local_340,local_1c0,iVar26,iStack_34c,
                                           in_stack_fffffffffffffc78,&local_300);
                      local_330 = local_330 + ((*pdVar17 - local_250[0]) - local_240[0]);
                    }
                  }
                }
              }
              else {
                `FTextLayout::FlowHighlights'::__l19::<lambda_1>::operator()(&local_2c0);
LAB_142873575:
                local_320 = 0.0;
                local_330 = (double)fVar30;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_338);
              lVar21 = lVar21 + 0x10;
              iVar15 = *(int *)(pFVar22 + 8);
              local_304 = local_304 + 1;
              piVar25 = local_2c8;
            } while ((int)local_304 < iVar15);
          }
          pFVar10 = local_2b0;
          pFVar23 = local_2b8;
          if ((local_2a8[1] - *local_2a8 < 1) || (0.0 < *(float *)(local_2b0 + 0x10))) {
            if (local_2c0[3] < 0) {
              if (((*(FScriptContainerElement **)(local_2b8 + 0x10) <= local_2b0) &&
                  (local_2b0 <
                   *(FScriptContainerElement **)(local_2b8 + 0x10) +
                   (longlong)*(int *)(local_2b8 + 0x1c) * 0x28)) &&
                 (in_stack_fffffffffffffc78 = (wchar_t *)local_2b0,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar15 = *(int *)(pFVar23 + 0x18);
              if (iVar15 == *(int *)(pFVar23 + 0x1c)) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x828,(ForAnyElementType *)(pFVar23 + 0x10),
                                    (int *)(pFVar23 + 0x1c));
              }
              *(int *)(pFVar23 + 0x18) = iVar15 + 1;
              lVar21 = *(longlong *)(pFVar23 + 0x10);
            }
            else {
              if (((*(FScriptContainerElement **)(local_2b8 + 0x20) <= local_2b0) &&
                  (local_2b0 <
                   *(FScriptContainerElement **)(local_2b8 + 0x20) +
                   (longlong)*(int *)(local_2b8 + 0x2c) * 0x28)) &&
                 (in_stack_fffffffffffffc78 = (wchar_t *)local_2b0,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar15 = *(int *)(pFVar23 + 0x28);
              if (iVar15 == *(int *)(pFVar23 + 0x2c)) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x828,(ForAnyElementType *)(pFVar23 + 0x20),
                                    (int *)(pFVar23 + 0x2c));
              }
              *(int *)(pFVar23 + 0x28) = iVar15 + 1;
              lVar21 = *(longlong *)(pFVar23 + 0x20);
            }
            uVar33 = *(undefined8 *)(pFVar10 + 8);
            lVar18 = (longlong)iVar15;
            puVar1 = (undefined8 *)(lVar21 + lVar18 * 0x28);
            *puVar1 = *(undefined8 *)pFVar10;
            puVar1[1] = uVar33;
            *(undefined4 *)(lVar21 + 0x10 + lVar18 * 0x28) = *(undefined4 *)(pFVar10 + 0x10);
            *(undefined8 *)(lVar21 + 0x18 + lVar18 * 0x28) = *(undefined8 *)(pFVar10 + 0x18);
            lVar19 = *(longlong *)(pFVar10 + 0x20);
            *(longlong *)(lVar21 + 0x20 + lVar18 * 0x28) = lVar19;
            if (lVar19 != 0) {
              LOCK();
              *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_310.ReferenceController);
          lVar21 = local_290;
          pFVar23 = local_288;
          piVar27 = local_280;
        }
      }
      uVar20 = (ulonglong)local_2e8;
      piVar25 = piVar25 + 8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2f0);
    uVar20 = (ulonglong)local_2e4;
    pFVar22 = pFVar22 + 0x68;
  } while( true );
}

// FlowLayout @ 1428737b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::FlowLayout(FTextLayout *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLineModel *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  TArray<TSharedRef<ILayoutBlock,1>,TSizedDefaultAllocator<32>_> local_28 [2];
  
  fVar8 = GetWrappingDrawWidth(this);
  uVar5 = 0;
  local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28[0].ArrayNum = 0;
  local_28[0].ArrayMax = 0;
  uVar7 = uVar5;
  if (0 < (this->LineModels).ArrayNum) {
    do {
      uVar6 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar6 < (this->LineModels).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = (FLineModel *)((this->LineModels).AllocatorInstance.Data + uVar7);
      CalculateLineTextDirection(this,pFVar4);
      if ((pFVar4->DirtyFlags & 4) != 0) {
        TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                 *)&((pFVar4->ShapedTextCache).Object)->CachedShapedText);
        pFVar4->DirtyFlags = pFVar4->DirtyFlags & 0xfb;
      }
      CreateLineWrappingCache(this,pFVar4);
      FlowLineLayout(this,uVar6,fVar8,local_28);
      uVar5 = (ulonglong)(uVar6 + 1);
      uVar7 = uVar7 + 0x70;
    } while ((int)(uVar6 + 1) < (this->LineModels).ArrayNum);
  }
  DestructItems<TSharedRef<ILayoutBlock,1>,int>
            ((TSharedRef<ILayoutBlock,1> *)local_28[0].AllocatorInstance.Data,local_28[0].ArrayNum);
  if ((TSharedRef<ILayoutBlock,1> *)local_28[0].AllocatorInstance.Data !=
      (TSharedRef<ILayoutBlock,1> *)0x0) {
    FMemory::Free(local_28[0].AllocatorInstance.Data);
  }
  return;
}

// FlowLineLayout @ 1428738f0

void __thiscall
FTextLayout::FlowLineLayout
          (FTextLayout *this,int param_1,float param_2,
          TArray<TSharedRef<ILayoutBlock,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  IBreakIterator *pIVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<ILayoutBlock,1> *pTVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  double *pdVar10;
  bool bVar11;
  wchar_t *pwVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  TOptional<float> *pTVar18;
  longlong lVar19;
  TOptional<float> *pTVar20;
  int iVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  char cVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  TOptional<float> *in_stack_fffffffffffffe58;
  int iVar29;
  uint local_178;
  char local_174;
  char local_173;
  int local_170;
  uint local_16c;
  int local_168;
  int local_164;
  int local_160;
  TOptional<float> local_158;
  longlong local_150;
  longlong local_148;
  ETextShapingMethod local_140;
  FScriptContainerElement local_13f;
  longlong local_138;
  TReferenceControllerBase<1> *local_130;
  int local_128;
  int local_124;
  FString local_120;
  TOptional<float> local_110;
  undefined1 local_108 [4];
  int local_104;
  TOptional<float> local_100;
  undefined1 local_f8 [4];
  int local_f4;
  undefined1 local_f0 [4];
  int local_ec;
  TOptional<float> local_e8;
  FString local_e0;
  undefined1 local_d0 [152];
  
  uVar16 = 0;
  if (param_1 < (this->LineModels).ArrayNum) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (in_stack_fffffffffffffe58 = (TOptional<float> *)(longlong)param_1,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar18 = (TOptional<float> *)0x0;
  local_164 = 0;
  pFVar23 = (this->LineModels).AllocatorInstance.Data + (longlong)param_1 * 0x70;
  local_178 = 0;
  local_170 = 0;
  if (*(int *)(pFVar23 + 0x50) < 1) {
    local_164 = -1;
  }
  if ((this->WrappingWidth <= 0.0) || (*(int *)(pFVar23 + 0x40) == 0)) {
    local_e8.bIsSet = false;
    CreateLineViewBlocks
              (this,param_1,-1,0.0,&local_e8,(int *)&local_178,&local_164,&local_170,param_3);
    if (local_178 != *(uint *)(pFVar23 + 0x30)) {
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      TAttribute<FString>::Get(&this->DebugSourceInfo,&local_120);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentRunIndex == LineModel.Runs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                         ,0x262,L"Debug Source: %s");
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar5 = (TSharedRef<ILayoutBlock,1> *)(param_3->AllocatorInstance).Data;
    if (param_3->ArrayMax < 0) {
      DestructItems<TSharedRef<ILayoutBlock,1>,int>(pTVar5,param_3->ArrayNum);
      param_3->ArrayNum = 0;
      if (param_3->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
      }
    }
    else {
      DestructItems<TSharedRef<ILayoutBlock,1>,int>(pTVar5,param_3->ArrayNum);
      param_3->ArrayNum = 0;
    }
  }
  else {
    fVar27 = 0.0;
    local_16c = 0;
    if (0 < *(int *)(pFVar23 + 0x40)) {
      local_150 = 0;
      pTVar20 = pTVar18;
      do {
        lVar19 = local_150;
        uVar16 = (uint)pTVar18;
        uVar14 = 0;
        if ((int)uVar16 < *(int *)(pFVar23 + 0x40)) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if (uVar14 == 0) {
          in_stack_fffffffffffffe58 = (TOptional<float> *)(longlong)(int)uVar16;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar22 = lVar19 * 0x30 + *(longlong *)(pFVar23 + 0x38);
        if (fVar27 != 0.0) {
          cVar24 = '\0';
        }
        else {
          cVar24 = *(char *)(lVar22 + 0x2c);
        }
        bVar11 = fVar27 == 0.0;
        dVar7 = (double)fVar27;
        dVar25 = dVar7 + *(double *)(lVar22 + 0x10);
        fVar28 = (float)(int)cVar24;
        bVar8 = *(float *)(lVar22 + 0x20) + fVar27 + fVar28 <= param_2;
        local_148 = lVar22;
        if (((this->WrappingPolicy != AllowPerCharacterWrapping) || (bVar8)) || (!bVar11)) {
          if (((double)param_2 < (double)(int)cVar24 + dVar25) ||
             (uVar16 + 1 == *(int *)(pFVar23 + 0x40))) {
            if ((uVar16 == 0) || ((bVar11 || (bVar8)))) {
              lVar17 = lVar22;
              if (!bVar8) goto LAB_142874187;
              fVar27 = *(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x24) + fVar27;
            }
            else {
              uVar16 = uVar16 - 1;
              lVar19 = lVar19 + -1;
              uVar14 = 0;
              if ((int)uVar16 < *(int *)(pFVar23 + 0x40)) {
                uVar14 = ~uVar16 >> 0x1f;
              }
              local_16c = uVar16;
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar17 = (longlong)(int)uVar16 * 0x30 + *(longlong *)(pFVar23 + 0x38);
LAB_142874187:
              fVar27 = (float)(dVar7 + *(double *)(lVar17 + 0x10));
              if (param_2 <= fVar27) {
                fVar27 = param_2;
              }
            }
            local_158.bIsSet = false;
            uVar14 = *(int *)(pFVar23 + 0x40) - 1;
            uVar16 = 0;
            if ((int)uVar14 < *(int *)(pFVar23 + 0x40)) {
              uVar16 = ~uVar14 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (lVar17 != (longlong)(*(int *)(pFVar23 + 0x40) + -1) * 0x30 +
                          *(longlong *)(pFVar23 + 0x38)) {
              if (lVar17 == lVar22) {
                dVar25 = 0.0;
              }
              else {
                dVar25 = *(double *)(lVar17 + 0x10);
              }
              local_158.bIsSet = true;
              local_158.TypedValue = (float)((double)*(float *)(lVar17 + 0x20) + (dVar7 - dVar25));
            }
            in_stack_fffffffffffffe58 = &local_158;
            CreateLineViewBlocks
                      (this,param_1,*(int *)(lVar17 + 4),fVar27,in_stack_fffffffffffffe58,
                       (int *)&local_178,&local_164,&local_170,param_3);
            uVar16 = local_178;
            pTVar20 = (TOptional<float> *)(longlong)(int)local_178;
            if ((int)local_178 < *(int *)(pFVar23 + 0x30)) {
              uVar14 = 0;
              if ((int)local_178 < *(int *)(pFVar23 + 0x30)) {
                uVar14 = ~local_178 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (in_stack_fffffffffffffe58 = pTVar20,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              plVar3 = *(longlong **)(*(longlong *)(pFVar23 + 0x28) + (longlong)pTVar20 * 0x30);
              (**(code **)(*plVar3 + 8))(plVar3,local_f0);
              if (*(int *)(lVar17 + 4) == local_ec) {
                local_178 = uVar16 + 1;
                pTVar20 = (TOptional<float> *)(ulonglong)local_178;
              }
            }
            fVar27 = 0.0;
            local_170 = *(int *)(lVar17 + 4);
            pTVar5 = (TSharedRef<ILayoutBlock,1> *)(param_3->AllocatorInstance).Data;
            if (param_3->ArrayMax < 0) {
              DestructItems<TSharedRef<ILayoutBlock,1>,int>(pTVar5,param_3->ArrayNum);
              param_3->ArrayNum = 0;
              if (param_3->ArrayMax != 0) {
                in_stack_fffffffffffffe58 =
                     (TOptional<float> *)((ulonglong)in_stack_fffffffffffffe58 & 0xffffffff00000000)
                ;
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
              }
            }
            else {
              DestructItems<TSharedRef<ILayoutBlock,1>,int>(pTVar5,param_3->ArrayNum);
              param_3->ArrayNum = 0;
            }
          }
          else {
            fVar27 = (float)dVar25;
            local_16c = uVar16;
          }
        }
        else {
          local_130 = *(TReferenceControllerBase<1> **)(pFVar23 + 0x18);
          local_138 = *(longlong *)(pFVar23 + 0x10);
          if (local_130 == (TReferenceControllerBase<1> *)0x0) {
            local_140 = this->TextShapingMethod;
            local_13f = pFVar23[0x20];
          }
          else {
            LOCK();
            local_130->SharedReferenceCount =
                 (atomic<int>)((int)local_130->SharedReferenceCount + 1);
            UNLOCK();
            local_140 = this->TextShapingMethod;
            local_13f = pFVar23[0x20];
            LOCK();
            local_130->SharedReferenceCount =
                 (atomic<int>)((int)local_130->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_130);
          local_160 = local_170;
          if (*(int *)(*(undefined8 **)pFVar23 + 1) == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)**(undefined8 **)pFVar23;
          }
          ::FString::ConstructFromPtrSize
                    (&local_e0,pwVar12 + local_170,*(int *)(lVar22 + 0xc) - local_170);
          pIVar2 = (this->GraphemeBreakIterator).Object;
          (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,&local_e0);
          local_168 = 0;
          iVar9 = (**(code **)((longlong)*(this->GraphemeBreakIterator).Object + 0x78))();
          fVar27 = 0.0;
          iVar15 = 0;
          iVar13 = local_160;
          while (local_160 = iVar13, iVar9 != -1) {
            fVar26 = 0.0;
            if ((int)pTVar20 < *(int *)(pFVar23 + 0x30)) {
              lVar19 = (longlong)(int)pTVar20 * 0x30;
              do {
                iVar29 = (int)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
                uVar14 = (uint)pTVar20;
                uVar16 = 0;
                if ((int)uVar14 < *(int *)(pFVar23 + 0x30)) {
                  uVar16 = ~uVar14 >> 0x1f;
                }
                if (uVar16 == 0) {
                  iVar29 = (int)uVar14 >> 0x1f;
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar8) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                lVar22 = *(longlong *)(pFVar23 + 0x28);
                (**(code **)(**(longlong **)(lVar19 + lVar22) + 8))
                          (*(longlong **)(lVar19 + lVar22),&local_128);
                plVar3 = *(longlong **)(lVar19 + lVar22);
                pTVar4 = *(TReferenceControllerBase<1> **)(lVar19 + 8 + lVar22);
                if (iVar15 < local_128 - iVar13) {
                  iVar15 = local_128 - iVar13;
                }
                iVar21 = iVar9;
                if (local_124 - iVar13 < iVar9) {
                  iVar21 = local_124 - iVar13;
                }
                if (iVar21 < iVar15) {
                  iVar21 = iVar15;
                }
                if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar4->SharedReferenceCount =
                       (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                  UNLOCK();
                }
                in_stack_fffffffffffffe58 = (TOptional<float> *)CONCAT44(iVar29,this->Scale);
                pdVar10 = (double *)
                          (**(code **)(*plVar3 + 0x28))
                                    (plVar3,local_d0,iVar15 + iVar13,iVar21 + iVar13,
                                     in_stack_fffffffffffffe58,&local_140);
                fVar26 = (float)((double)fVar26 + *pdVar10);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar4);
                if (iVar21 == iVar9) break;
                pTVar20 = (TOptional<float> *)(ulonglong)(uVar14 + 1);
                lVar19 = lVar19 + 0x30;
                iVar15 = local_168;
              } while ((int)(uVar14 + 1) < *(int *)(pFVar23 + 0x30));
              pTVar20 = (TOptional<float> *)(ulonglong)local_178;
            }
            local_173 = '\x01';
            iVar15 = local_e0.Data.ArrayNum + -1;
            if (local_e0.Data.ArrayNum == 0) {
              iVar15 = 0;
            }
            cVar24 = iVar9 == iVar15;
            fVar26 = fVar26 + fVar27;
            local_174 = cVar24;
            if (fVar26 <= param_2) {
              if (iVar9 != iVar15) goto LAB_142874085;
              iVar13 = local_16c + 1;
              if (*(int *)(pFVar23 + 0x40) <= iVar13) goto LAB_142873dee;
              if (iVar13 < 0) {
                in_stack_fffffffffffffe58 = (TOptional<float> *)(longlong)iVar13;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              uVar16 = local_16c;
              if (param_2 < fVar26 + *(float *)(*(longlong *)(pFVar23 + 0x38) + 0x20 +
                                               (local_150 + 1) * 0x30) + fVar28) {
                if (iVar9 != iVar15) goto LAB_142874085;
                goto LAB_142873df3;
              }
              break;
            }
LAB_142873dee:
            if (iVar9 == iVar15) {
LAB_142873df3:
              if ((fVar26 <= param_2) || (fVar27 == 0.0)) {
                iVar15 = *(int *)(local_148 + 4);
                cVar24 = '\0';
              }
              else {
LAB_142873e17:
                iVar15 = local_168 + local_160;
                local_173 = '\0';
                cVar24 = local_174;
              }
            }
            else {
              if (fVar27 != 0.0) goto LAB_142873e17;
              iVar15 = local_160 + iVar9;
            }
            local_110.bIsSet = false;
            in_stack_fffffffffffffe58 = &local_110;
            CreateLineViewBlocks
                      (this,param_1,iVar15,fVar27,in_stack_fffffffffffffe58,(int *)&local_178,
                       &local_164,&local_170,param_3);
            uVar16 = local_178;
            pTVar20 = (TOptional<float> *)(longlong)(int)local_178;
            if ((int)local_178 < *(int *)(pFVar23 + 0x30)) {
              uVar14 = 0;
              if ((int)local_178 < *(int *)(pFVar23 + 0x30)) {
                uVar14 = ~local_178 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (in_stack_fffffffffffffe58 = pTVar20,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              plVar3 = *(longlong **)(*(longlong *)(pFVar23 + 0x28) + (longlong)pTVar20 * 0x30);
              (**(code **)(*plVar3 + 8))(plVar3,local_108);
              if (iVar15 == local_104) {
                local_178 = uVar16 + 1;
                pTVar20 = (TOptional<float> *)(ulonglong)local_178;
              }
            }
            fVar26 = 0.0;
            pTVar5 = (TSharedRef<ILayoutBlock,1> *)(param_3->AllocatorInstance).Data;
            piVar1 = &param_3->ArrayMax;
            local_170 = iVar15;
            if (param_3->ArrayMax < 0) {
              DestructItems<TSharedRef<ILayoutBlock,1>,int>(pTVar5,param_3->ArrayNum);
              param_3->ArrayNum = 0;
              if (*piVar1 != 0) {
                in_stack_fffffffffffffe58 =
                     (TOptional<float> *)((ulonglong)in_stack_fffffffffffffe58 & 0xffffffff00000000)
                ;
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
              }
            }
            else {
              DestructItems<TSharedRef<ILayoutBlock,1>,int>(pTVar5,param_3->ArrayNum);
              param_3->ArrayNum = 0;
            }
            if (cVar24 != '\0') {
              local_100.bIsSet = false;
              iVar15 = *(int *)(local_148 + 4);
              in_stack_fffffffffffffe58 = &local_100;
              CreateLineViewBlocks
                        (this,param_1,iVar15,0.0,in_stack_fffffffffffffe58,(int *)&local_178,
                         &local_164,&local_170,param_3);
              uVar16 = local_178;
              pTVar20 = (TOptional<float> *)(longlong)(int)local_178;
              if ((int)local_178 < *(int *)(pFVar23 + 0x30)) {
                uVar14 = 0;
                if ((int)local_178 < *(int *)(pFVar23 + 0x30)) {
                  uVar14 = ~local_178 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (in_stack_fffffffffffffe58 = pTVar20,
                   bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                plVar3 = *(longlong **)(*(longlong *)(pFVar23 + 0x28) + (longlong)pTVar20 * 0x30);
                (**(code **)(*plVar3 + 8))(plVar3,local_f8);
                if (iVar15 == local_f4) {
                  local_178 = uVar16 + 1;
                  pTVar20 = (TOptional<float> *)(ulonglong)local_178;
                }
              }
              fVar26 = 0.0;
              pTVar5 = (TSharedRef<ILayoutBlock,1> *)(param_3->AllocatorInstance).Data;
              local_170 = iVar15;
              if (*piVar1 < 0) {
                DestructItems<TSharedRef<ILayoutBlock,1>,int>(pTVar5,param_3->ArrayNum);
                param_3->ArrayNum = 0;
                if (*piVar1 != 0) {
                  in_stack_fffffffffffffe58 =
                       (TOptional<float> *)
                       ((ulonglong)in_stack_fffffffffffffe58 & 0xffffffff00000000);
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
                }
              }
              else {
                DestructItems<TSharedRef<ILayoutBlock,1>,int>(pTVar5,param_3->ArrayNum);
                param_3->ArrayNum = 0;
              }
              goto LAB_142874085;
            }
            uVar16 = local_16c;
            fVar27 = fVar26;
            iVar15 = local_168;
            iVar13 = local_160;
            if (local_173 != '\0') {
LAB_142874085:
              local_168 = iVar9;
              iVar13 = (**(code **)((longlong)*(this->GraphemeBreakIterator).Object + 0x78))();
              uVar16 = local_16c;
              fVar27 = fVar26;
              iVar15 = iVar9;
              iVar9 = iVar13;
              iVar13 = local_160;
            }
          }
          (**(code **)((longlong)*(this->GraphemeBreakIterator).Object + 0x50))();
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_130);
          lVar19 = local_150;
          local_16c = uVar16;
        }
        local_16c = local_16c + 1;
        pTVar18 = (TOptional<float> *)(ulonglong)local_16c;
        local_150 = lVar19 + 1;
      } while ((int)local_16c < *(int *)(pFVar23 + 0x40));
    }
  }
  if ((this->ApplyLineHeightToBottomLine == false) && (param_1 == (this->LineModels).ArrayNum + -1))
  {
    (this->TextLayoutSize).Height = (this->TextLayoutSize).Height - this->OverHeight;
  }
  return;
}

// FlushLineTextShapingCache @ 142874550

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::FlushLineTextShapingCache(FTextLayout *this,FLineModel *param_1)

{
  if ((param_1->DirtyFlags & 4) != 0) {
    TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
             *)&((param_1->ShapedTextCache).Object)->CachedShapedText);
    param_1->DirtyFlags = param_1->DirtyFlags & 0xfb;
  }
  return;
}

// FlushTextShapingCache @ 142874580

void __thiscall FTextLayout::FlushTextShapingCache(FTextLayout *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LineModels).ArrayNum;
  pFVar2 = (this->LineModels).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((this->LineModels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (((byte)pFVar2[0x68] & 4) != 0) {
      TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
               *)(*(longlong *)(pFVar2 + 0x10) + 0x10));
      pFVar2[0x68] = (FScriptContainerElement)((byte)pFVar2[0x68] & 0xfb);
    }
    pFVar2 = pFVar2 + 0x70;
  }
  return;
}

// GetAsText @ 142874c30

void __thiscall
FTextLayout::GetAsText(FTextLayout *this,FString *param_1,FTextOffsetLocations *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iStackX_18;
  int iStackX_20;
  int iStackX_24;
  int iStack_48;
  int iStack_44;
  longlong lStack_40;
  
  iStackX_18 = 0;
  if (param_2 != (FTextOffsetLocations *)0x0) {
    uVar12 = (this->LineModels).ArrayNum;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((param_2->OffsetData).ArrayMax < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar12,(ForAnyElementType *)param_2,(param_2->OffsetData).ArrayNum,
                 &(param_2->OffsetData).ArrayMax);
    }
  }
  uVar12 = 0;
  if (0 < (this->LineModels).ArrayNum) {
    lStack_40 = 0;
    do {
      lVar6 = lStack_40;
      uVar10 = 0;
      if ((int)uVar12 < (this->LineModels).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->LineModels).AllocatorInstance.Data;
      if (0 < (int)uVar12) {
        if (param_1 != (FString *)0x0) {
          ::FString::AppendChars(param_1,L"\r\n",2);
        }
        iStackX_18 = iStackX_18 + LineTerminatorLength;
      }
      iVar11 = 0;
      uVar10 = 0;
      if (0 < *(int *)(pFVar2 + lVar6 + 0x30)) {
        lVar13 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)(pFVar2 + lVar6 + 0x30)) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)(pFVar2 + lVar6 + 0x28);
          if (param_1 != (FString *)0x0) {
            plVar4 = *(longlong **)(lVar3 + lVar13);
            (**(code **)(*plVar4 + 0x88))(plVar4,param_1);
          }
          plVar4 = *(longlong **)(lVar3 + lVar13);
          (**(code **)(*plVar4 + 8))(plVar4,&iStackX_20);
          uVar10 = uVar10 + 1;
          lVar13 = lVar13 + 0x30;
          iVar11 = iVar11 + (iStackX_24 - iStackX_20);
        } while ((int)uVar10 < *(int *)(pFVar2 + lVar6 + 0x30));
      }
      if (param_2 != (FTextOffsetLocations *)0x0) {
        pFVar2 = (param_2->OffsetData).AllocatorInstance.Data;
        iStack_48 = iStackX_18;
        iStack_44 = iVar11;
        if (((pFVar2 <= (FScriptContainerElement *)&iStack_48) &&
            ((FScriptContainerElement *)&iStack_48 <
             pFVar2 + (longlong)(param_2->OffsetData).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_2->OffsetData).ArrayNum;
        piVar1 = &(param_2->OffsetData).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)param_2,piVar1);
        }
        (param_2->OffsetData).ArrayNum = iVar9 + 1;
        *(ulonglong *)((param_2->OffsetData).AllocatorInstance.Data + (longlong)iVar9 * 8) =
             CONCAT44(iStack_44,iStack_48);
      }
      iStackX_18 = iStackX_18 + iVar11;
      lStack_40 = lStack_40 + 0x70;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->LineModels).ArrayNum);
  }
  return;
}

// GetAsText @ 142874c40

void __thiscall
FTextLayout::GetAsText(FTextLayout *this,FText *param_1,FTextOffsetLocations *param_2)

{
  FText *pFVar1;
  FString local_28;
  FText local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  GetAsTextAndOffsets(this,&local_28,param_2);
  pFVar1 = FText::FromString(&local_18,&local_28);
  FText::operator=(param_1,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAsTextAndOffsets @ 142874cb0

void __thiscall
FTextLayout::GetAsTextAndOffsets(FTextLayout *this,FString *param_1,FTextOffsetLocations *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int local_res18;
  int local_res20;
  int local_res24;
  int local_48;
  int iStack_44;
  longlong local_40;
  
  local_res18 = 0;
  if (param_2 != (FTextOffsetLocations *)0x0) {
    uVar12 = (this->LineModels).ArrayNum;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((param_2->OffsetData).ArrayMax < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar12,(ForAnyElementType *)param_2,(param_2->OffsetData).ArrayNum,
                 &(param_2->OffsetData).ArrayMax);
    }
  }
  uVar12 = 0;
  if (0 < (this->LineModels).ArrayNum) {
    local_40 = 0;
    do {
      lVar6 = local_40;
      uVar10 = 0;
      if ((int)uVar12 < (this->LineModels).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->LineModels).AllocatorInstance.Data;
      if (0 < (int)uVar12) {
        if (param_1 != (FString *)0x0) {
          ::FString::AppendChars(param_1,L"\r\n",2);
        }
        local_res18 = local_res18 + LineTerminatorLength;
      }
      iVar11 = 0;
      uVar10 = 0;
      if (0 < *(int *)(pFVar2 + lVar6 + 0x30)) {
        lVar13 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)(pFVar2 + lVar6 + 0x30)) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)(pFVar2 + lVar6 + 0x28);
          if (param_1 != (FString *)0x0) {
            plVar4 = *(longlong **)(lVar3 + lVar13);
            (**(code **)(*plVar4 + 0x88))(plVar4,param_1);
          }
          plVar4 = *(longlong **)(lVar3 + lVar13);
          (**(code **)(*plVar4 + 8))(plVar4,&local_res20);
          uVar10 = uVar10 + 1;
          lVar13 = lVar13 + 0x30;
          iVar11 = iVar11 + (local_res24 - local_res20);
        } while ((int)uVar10 < *(int *)(pFVar2 + lVar6 + 0x30));
      }
      if (param_2 != (FTextOffsetLocations *)0x0) {
        pFVar2 = (param_2->OffsetData).AllocatorInstance.Data;
        local_48 = local_res18;
        iStack_44 = iVar11;
        if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar2 + (longlong)(param_2->OffsetData).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_2->OffsetData).ArrayNum;
        piVar1 = &(param_2->OffsetData).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)param_2,piVar1);
        }
        (param_2->OffsetData).ArrayNum = iVar9 + 1;
        *(ulonglong *)((param_2->OffsetData).AllocatorInstance.Data + (longlong)iVar9 * 8) =
             CONCAT44(iStack_44,local_48);
      }
      local_res18 = local_res18 + iVar11;
      local_40 = local_40 + 0x70;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->LineModels).ArrayNum);
  }
  return;
}

// GetDrawSize @ 142876600

TVector2<double> * __thiscall
FTextLayout::GetDrawSize(FTextLayout *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = (this->TextLayoutSize).Height;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(this->TextLayoutSize).DrawWidth;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// GetGraphemeAt @ 142876d10

FTextSelection * __thiscall
FTextLayout::GetGraphemeAt
          (FTextLayout *this,FTextSelection *__return_storage_ptr__,FTextLocation *param_1)

{
  uint uVar1;
  IBreakIterator *pIVar2;
  IBreakIterator IVar3;
  code *pcVar4;
  FTextLocation FVar5;
  FTextLocation FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FTextSelection *pFVar12;
  FScriptContainerElement *pFVar13;
  
  uVar1 = param_1->LineIndex;
  iVar10 = param_1->Offset;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LineModels).ArrayNum)) {
    uVar8 = 0;
    if ((int)uVar1 < (this->LineModels).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FTextSelection *)(*pcVar4)();
        return pFVar12;
      }
    }
    pIVar2 = (this->GraphemeBreakIterator).Object;
    pFVar13 = (this->LineModels).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x70;
    (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,*(longlong *)pFVar13);
    pIVar2 = (this->GraphemeBreakIterator).Object;
    iVar11 = *(int *)(*(longlong *)pFVar13 + 8);
    IVar3 = *pIVar2;
    iVar9 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar9 = 0;
    }
    if (iVar10 < iVar9) {
      iVar10 = (**(code **)((longlong)IVar3 + 0x88))(pIVar2,iVar10);
    }
    else {
      iVar10 = (**(code **)((longlong)IVar3 + 0x68))();
    }
    iVar11 = (**(code **)((longlong)*(this->GraphemeBreakIterator).Object + 0x70))();
    (**(code **)((longlong)*(this->GraphemeBreakIterator).Object + 0x50))();
    if ((iVar10 == iVar11) || (iVar11 == -1)) {
      (__return_storage_ptr__->LocationA).LineIndex = -1;
      (__return_storage_ptr__->LocationA).Offset = 0;
      (__return_storage_ptr__->LocationB).LineIndex = -1;
      (__return_storage_ptr__->LocationB).Offset = 0;
    }
    else {
      FVar5.Offset = iVar11;
      FVar5.LineIndex = uVar1;
      __return_storage_ptr__->LocationA = FVar5;
      FVar6.Offset = iVar10;
      FVar6.LineIndex = uVar1;
      __return_storage_ptr__->LocationB = FVar6;
    }
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->LocationA).LineIndex = -1;
  (__return_storage_ptr__->LocationA).Offset = 0;
  (__return_storage_ptr__->LocationB).Offset = 0;
  (__return_storage_ptr__->LocationB).LineIndex = -1;
  return __return_storage_ptr__;
}

// GetLineCount @ 1428773a0

int __thiscall FTextLayout::GetLineCount(FTextLayout *this)

{
  return (this->LineModels).ArrayNum;
}

// GetLineViewIndexForTextLocation @ 142877510

int __thiscall
FTextLayout::GetLineViewIndexForTextLocation
          (FTextLayout *this,TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *param_1,
          FTextLocation *param_2,bool param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar1 = param_2->LineIndex;
  iVar6 = param_2->Offset;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LineModels).ArrayNum)) {
    uVar9 = 0;
    if ((int)uVar1 < (this->LineModels).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    iVar8 = param_1->ArrayNum;
    pFVar2 = (this->LineModels).AllocatorInstance.Data;
    uVar9 = 0;
    if (0 < iVar8) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < iVar8) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (*(uint *)(pFVar3 + lVar10 + 100) == uVar1) {
          if (iVar6 == 0) {
            return uVar9;
          }
          if (*(int *)(*(longlong *)(pFVar2 + (longlong)(int)uVar1 * 0x70) + 8) < 2) {
            return uVar9;
          }
          if ((*(int *)(pFVar3 + lVar10 + 0x58) <= iVar6) &&
             (iVar6 < *(int *)(pFVar3 + lVar10 + 0x5c))) {
            return uVar9;
          }
          if (uVar9 != param_1->ArrayNum - 1U) {
            uVar7 = 0;
            if ((int)(uVar9 + 1) < param_1->ArrayNum) {
              uVar7 = ~(uVar9 + 1) >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              iVar6 = (*pcVar4)();
              return iVar6;
            }
            if ((*(uint *)((param_1->AllocatorInstance).Data + lVar10 + 0xcc) == uVar1) &&
               (!param_3)) goto LAB_142877698;
          }
          if (*(int *)(pFVar3 + lVar10 + 0x5c) == iVar6) {
            return uVar9;
          }
        }
LAB_142877698:
        iVar8 = param_1->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x68;
      } while ((int)uVar9 < iVar8);
    }
  }
  return -1;
}

// GetLocationAt @ 142877b40

TVector2<double> * __thiscall
FTextLayout::GetLocationAt
          (FTextLayout *this,TVector2<double> *__return_storage_ptr__,FTextLocation *param_1,
          bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector2<double> *pTVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int local_res8;
  int local_resc;
  longlong in_stack_ffffffffffffff98;
  undefined4 uVar12;
  double local_58;
  double dStack_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  iVar1 = param_1->Offset;
  uVar4 = GetLineViewIndexForTextLocation(this,&this->LineViews,param_1,param_2);
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->LineViews).ArrayNum)) {
    uVar8 = 0;
    if ((int)uVar4 < (this->LineViews).ArrayNum) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (in_stack_ffffffffffffff98 = (longlong)(int)uVar4,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar2)();
      return pTVar5;
    }
    uVar8 = 0;
    pFVar9 = (this->LineViews).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x68;
    iVar7 = *(int *)(pFVar9 + 8);
    if (0 < iVar7) {
      lVar10 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar8 < iVar7) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          in_stack_ffffffffffffff98 = (longlong)(int)uVar8;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TVector2<double> *)(*pcVar2)();
            return pTVar5;
          }
        }
        puVar11 = (undefined8 *)(*(longlong *)pFVar9 + lVar10);
        (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,&local_res8);
        uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        if ((local_res8 <= iVar1) && (iVar1 <= local_resc)) {
          puVar6 = (undefined8 *)
                   (**(code **)(*(longlong *)*puVar11 + 8))((longlong *)*puVar11,local_48);
          in_stack_ffffffffffffff98 = CONCAT44(uVar12,this->Scale);
          (**(code **)(*(longlong *)*puVar6 + 0x58))
                    ((longlong *)*puVar6,&local_58,puVar11,iVar1 - local_res8,
                     in_stack_ffffffffffffff98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
          if ((local_58 != 0.0) || (dStack_50 != 0.0)) {
            (__return_storage_ptr__->field0_0x0)._s_0.X = local_58;
            (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_50;
            return __return_storage_ptr__;
          }
        }
        iVar7 = *(int *)(pFVar9 + 8);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar8 < iVar7);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetSelectionAsText @ 14287a060

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FTextLayout::GetSelectionAsText(FTextLayout *this,FString *param_1,FTextSelection *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  FLineModel *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  longlong local_res18;
  FTextRange local_res20;
  FTextRange local_68;
  FTextRange local_60;
  FTextRange local_58;
  longlong local_50;
  longlong local_48;
  
  uVar6 = (param_2->LocationB).LineIndex;
  uVar8 = (param_2->LocationA).LineIndex;
  bVar11 = SBORROW4(uVar8,uVar6);
  iVar2 = uVar8 - uVar6;
  bVar10 = false;
  if (uVar8 == uVar6) {
    iVar9 = (param_2->LocationB).Offset;
    iVar1 = (param_2->LocationA).Offset;
    bVar11 = SBORROW4(iVar1,iVar9);
    iVar2 = iVar1 - iVar9;
    bVar10 = iVar1 == iVar9;
  }
  if (bVar11 == iVar2 < 0) {
    iVar9 = (param_2->LocationB).Offset;
    if (!bVar10 && bVar11 == iVar2 < 0) goto LAB_14287a0ab;
  }
  else {
    iVar9 = (param_2->LocationA).Offset;
    uVar6 = uVar8;
  }
  uVar8 = (param_2->LocationB).LineIndex;
  param_2 = (FTextSelection *)&param_2->LocationB;
LAB_14287a0ab:
  iVar2 = (param_2->LocationA).Offset;
  if ((((-1 < (int)uVar6) && (iVar1 = (this->LineModels).ArrayNum, (int)uVar6 < iVar1)) &&
      (-1 < (int)uVar8)) && ((int)uVar8 < iVar1)) {
    if (uVar6 == uVar8) {
      uVar8 = 0;
      if ((int)uVar6 < iVar1) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      local_res20.BeginIndex = iVar9;
      local_res20.EndIndex = iVar2;
      if ((uVar8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      GetRangeAsTextFromLine
                (param_1,(FLineModel *)
                         ((this->LineModels).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70),
                 &local_res20);
    }
    else if ((int)uVar6 <= (int)uVar8) {
      local_50 = (longlong)(int)uVar6;
      local_res18 = local_50 * 0x70;
      uVar7 = uVar6;
      local_48 = local_res18;
      do {
        iVar1 = (this->LineModels).ArrayNum;
        if (uVar7 == uVar6) {
          uVar4 = 0;
          if ((int)uVar6 < iVar1) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar5 = (FLineModel *)((this->LineModels).AllocatorInstance.Data + local_48);
          iVar1 = (((pFVar5->Text).Object)->Data).ArrayNum;
          local_68.EndIndex = iVar1 + -1;
          if (iVar1 == 0) {
            local_68.EndIndex = 0;
          }
          local_68.BeginIndex = iVar9;
          GetRangeAsTextFromLine(param_1,pFVar5,&local_68);
          if (uVar7 != uVar8) {
LAB_14287a2f7:
            ::FString::AppendChars(param_1,L"\r\n",2);
          }
        }
        else {
          if (uVar7 != uVar8) {
            uVar4 = 0;
            if ((int)uVar7 < iVar1) {
              uVar4 = ~uVar7 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar5 = (FLineModel *)((this->LineModels).AllocatorInstance.Data + local_res18);
            local_58.BeginIndex = 0;
            iVar1 = (((pFVar5->Text).Object)->Data).ArrayNum;
            local_58.EndIndex = iVar1 + -1;
            if (iVar1 == 0) {
              local_58.EndIndex = 0;
            }
            GetRangeAsTextFromLine(param_1,pFVar5,&local_58);
            goto LAB_14287a2f7;
          }
          uVar4 = 0;
          if ((int)uVar8 < iVar1) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_60.BeginIndex = 0;
          local_60.EndIndex = iVar2;
          GetRangeAsTextFromLine
                    (param_1,(FLineModel *)
                             ((this->LineModels).AllocatorInstance.Data +
                             (longlong)(int)uVar8 * 0x70),&local_60);
        }
        uVar7 = uVar7 + 1;
        local_res18 = local_res18 + 0x70;
        local_50 = local_50 + 1;
      } while ((int)uVar7 <= (int)uVar8);
    }
  }
  return;
}

// GetSize @ 14287aa40

TVector2<double> * __thiscall
FTextLayout::GetSize(FTextLayout *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (this->TextLayoutSize).Height;
  dVar2 = (double)(__real_3f800000 / this->Scale);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(this->TextLayoutSize).DrawWidth * dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1 * dVar2;
  return __return_storage_ptr__;
}

// GetTextLocationAt @ 14287c7b0

FTextLocation __thiscall
FTextLayout::GetTextLocationAt(FTextLayout *this,TVector2<double> *param_1,ETextHitPoint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTextLocation FVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined8 local_28;
  undefined8 local_20;
  
  iVar5 = (this->LineViews).ArrayNum;
  uVar7 = 0;
  uVar6 = 0;
  if (iVar5 == 0) {
    (param_1->field0_0x0)._s_0.X = 0.0;
    return (FTextLocation)param_1;
  }
  uVar9 = 0;
  uVar8 = uVar7;
  if (iVar5 < 1) {
LAB_14287c877:
    iVar5 = (this->LineViews).ArrayNum;
    if ((int)uVar6 < iVar5) {
      if (((int)uVar6 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FTextLocation)(*pcVar1)();
        return FVar4;
      }
      pFVar10 = (this->LineViews).AllocatorInstance.Data;
      if ((*(double *)(pFVar10 + (longlong)(int)uVar6 * 0x68 + 0x48) +
           *(double *)(pFVar10 + (longlong)(int)uVar6 * 0x68 + 0x38) < *(double *)(param_2 + 8)) &&
         ((int)uVar6 < (this->LineViews).ArrayNum + -1)) {
        uVar6 = uVar6 + 1;
      }
      if ((int)uVar6 < (this->LineViews).ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FTextLocation)(*pcVar1)();
        return FVar4;
      }
      local_28 = *(undefined8 *)param_2;
      param_2 = (ETextHitPoint *)&local_28;
      pFVar10 = (this->LineViews).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x68;
      local_20 = *(undefined8 *)(pFVar10 + 0x38);
      goto LAB_14287c9b6;
    }
  }
  else {
    do {
      uVar6 = (uint)uVar7;
      uVar3 = uVar9;
      if ((int)uVar6 < (this->LineViews).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FTextLocation)(*pcVar1)();
        return FVar4;
      }
      if (*(double *)(param_2 + 8) <
          *(double *)((this->LineViews).AllocatorInstance.Data + uVar8 + 0x38)) {
        uVar6 = uVar6 - 1;
        if ((int)uVar6 < 0) {
          uVar6 = 0;
        }
        goto LAB_14287c877;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x68;
    } while ((int)(uVar6 + 1) < (this->LineViews).ArrayNum);
    iVar5 = (this->LineViews).ArrayNum;
  }
  uVar6 = iVar5 - 1;
  if ((int)uVar6 < iVar5) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FTextLocation)(*pcVar1)();
    return FVar4;
  }
  pFVar10 = (this->LineViews).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x68;
LAB_14287c9b6:
  GetTextLocationAt(this,(FLineView *)param_1,(TVector2<double> *)pFVar10,param_2);
  return (FTextLocation)param_1;
}

// GetTextLocationAt @ 14287c9f0

FTextLocation __thiscall
FTextLayout::GetTextLocationAt
          (FTextLayout *this,FLineView *param_1,TVector2<double> *param_2,ETextHitPoint *param_3)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FTextLocation FVar7;
  undefined8 *puVar8;
  longlong lVar9;
  double *pdVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong local_res18;
  undefined1 *in_stack_00000028;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8 [16];
  TReferenceControllerBase<1> *local_98;
  char local_90;
  undefined1 local_88 [16];
  TReferenceControllerBase<1> *local_78;
  char local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  uVar11 = 0;
  iVar6 = *(int *)((longlong)&param_2->field0_0x0 + 8);
  uVar14 = 0;
  if (0 < iVar6) {
    local_res18 = 0;
    do {
      uVar5 = uVar14;
      if ((int)uVar11 < iVar6) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar7 = (FTextLocation)(*pcVar3)();
        return FVar7;
      }
      puVar12 = (undefined8 *)((longlong)(param_2->field0_0x0)._s_0.X + local_res18);
      puVar8 = (undefined8 *)(**(code **)(*(longlong *)*puVar12 + 8))((longlong *)*puVar12,local_b8)
      ;
      plVar2 = (longlong *)*puVar8;
      pcVar3 = *(code **)(*plVar2 + 0x50);
      fVar1 = this->Scale;
      lVar9 = (**(code **)(*(longlong *)*puVar12 + 0x38))((longlong *)*puVar12,local_68);
      local_c0 = *(undefined8 *)(lVar9 + 8);
      local_c8 = *(undefined8 *)param_3;
      iVar6 = (*pcVar3)(plVar2,puVar12,&local_c8,fVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
      if (iVar6 != -1) {
        *(int *)((longlong)&(param_1->Blocks).AllocatorInstance.Data + 4) = iVar6;
        goto LAB_14287cdb2;
      }
      uVar11 = uVar11 + 1;
      iVar6 = *(int *)((longlong)&param_2->field0_0x0 + 8);
      local_res18 = local_res18 + 0x10;
    } while ((int)uVar11 < iVar6);
  }
  uVar11 = *(uint *)((longlong)&param_2[6].field0_0x0 + 4);
  uVar5 = uVar14;
  if ((int)uVar11 < (this->LineModels).ArrayNum) {
    uVar5 = ~uVar11 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FTextLocation)(*pcVar3)();
    return FVar7;
  }
  iVar6 = *(int *)(*(longlong *)
                    ((this->LineModels).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x70) + 8);
  uVar11 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) || (iVar6 = *(int *)((longlong)&param_2->field0_0x0 + 8), iVar6 == 0)) {
    if (in_stack_00000028 != (undefined1 *)0x0) {
      *in_stack_00000028 = 0;
    }
    *(undefined4 *)((longlong)&(param_1->Blocks).AllocatorInstance.Data + 4) = 0;
LAB_14287cdb2:
    *(undefined4 *)&(param_1->Blocks).AllocatorInstance.Data =
         *(undefined4 *)((longlong)&param_2[6].field0_0x0 + 4);
  }
  else {
    if ((iVar6 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FTextLocation)(*pcVar3)();
      return FVar7;
    }
    pdVar10 = (double *)
              (**(code **)(*(longlong *)**(undefined8 **)&param_2->field0_0x0 + 0x38))
                        ((longlong *)**(undefined8 **)&param_2->field0_0x0,local_58);
    iVar6 = *(int *)((longlong)&param_2->field0_0x0 + 8);
    if (*pdVar10 < *(double *)param_3 || *pdVar10 == *(double *)param_3) {
      uVar11 = 0;
      if ((int)(iVar6 - 1U) < iVar6) {
        uVar11 = ~(iVar6 - 1U) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar7 = (FTextLocation)(*pcVar3)();
        return FVar7;
      }
      lVar13 = (longlong)*(int *)((longlong)&param_2->field0_0x0 + 8);
      lVar9 = *(longlong *)&param_2->field0_0x0;
      plVar2 = *(longlong **)(lVar9 + -0x10 + lVar13 * 0x10);
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_d0);
      plVar2 = *(longlong **)(lVar9 + -0x10 + lVar13 * 0x10);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_88);
      if (local_70 == '\0') {
        if (in_stack_00000028 != (undefined1 *)0x0) {
          *in_stack_00000028 = 2;
        }
        *(undefined4 *)&(param_1->Blocks).AllocatorInstance.Data =
             *(undefined4 *)((longlong)&param_2[6].field0_0x0 + 4);
        *(undefined4 *)((longlong)&(param_1->Blocks).AllocatorInstance.Data + 4) = local_cc;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78);
      }
      else {
        if (in_stack_00000028 != (undefined1 *)0x0) {
          *in_stack_00000028 = 1;
        }
        *(undefined4 *)&(param_1->Blocks).AllocatorInstance.Data =
             *(undefined4 *)((longlong)&param_2[6].field0_0x0 + 4);
        *(undefined4 *)((longlong)&(param_1->Blocks).AllocatorInstance.Data + 4) = local_d0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78);
      }
    }
    else {
      if ((iVar6 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar7 = (FTextLocation)(*pcVar3)();
        return FVar7;
      }
      puVar8 = *(undefined8 **)&param_2->field0_0x0;
      plVar2 = (longlong *)*puVar8;
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_d8);
      plVar2 = (longlong *)*puVar8;
      (**(code **)(*plVar2 + 0x20))(plVar2,local_a8);
      if (local_90 == '\0') {
        if (in_stack_00000028 != (undefined1 *)0x0) {
          *in_stack_00000028 = 1;
        }
        *(undefined4 *)&(param_1->Blocks).AllocatorInstance.Data =
             *(undefined4 *)((longlong)&param_2[6].field0_0x0 + 4);
        *(undefined4 *)((longlong)&(param_1->Blocks).AllocatorInstance.Data + 4) = local_d8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
      }
      else {
        if (in_stack_00000028 != (undefined1 *)0x0) {
          *in_stack_00000028 = 2;
        }
        *(undefined4 *)&(param_1->Blocks).AllocatorInstance.Data =
             *(undefined4 *)((longlong)&param_2[6].field0_0x0 + 4);
        *(undefined4 *)((longlong)&(param_1->Blocks).AllocatorInstance.Data + 4) = local_d4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
      }
    }
  }
  return (FTextLocation)param_1;
}

// GetTextOffsetLocations @ 14287cdf0

void __thiscall FTextLayout::GetTextOffsetLocations(FTextLayout *this,FTextOffsetLocations *param_1)

{
  GetAsTextAndOffsets(this,(FString *)0x0,param_1);
  return;
}

// GetViewSize @ 14287da60

TVector2<double> * __thiscall
FTextLayout::GetViewSize(FTextLayout *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->ViewSize).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ViewSize).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetVisualJustification @ 14287dcb0

Type __thiscall FTextLayout::GetVisualJustification(FTextLayout *this)

{
  Type TVar1;
  
  if ((this->LineViews).ArrayNum < 1) {
    return this->Justification;
  }
  TVar1 = this->Justification;
  if ((this->LineViews).AllocatorInstance.Data[0x60] == (FScriptContainerElement)0x1) {
    if (TVar1 == Left) {
      return Right;
    }
    if (TVar1 == Right) {
      TVar1 = Left;
    }
  }
  return TVar1;
}

// GetWordAt @ 14287dff0

FTextSelection * __thiscall
FTextLayout::GetWordAt
          (FTextLayout *this,FTextSelection *__return_storage_ptr__,FTextLocation *param_1)

{
  uint uVar1;
  int iVar2;
  IBreakIterator *pIVar3;
  IBreakIterator IVar4;
  longlong *plVar5;
  code *pcVar6;
  FTextLocation FVar7;
  FTextLocation FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FTextSelection *pFVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  
  uVar1 = param_1->LineIndex;
  iVar12 = param_1->Offset;
  if (((int)uVar1 < 0) || ((this->LineModels).ArrayNum <= (int)uVar1)) {
    (__return_storage_ptr__->LocationA).LineIndex = -1;
    (__return_storage_ptr__->LocationA).Offset = 0;
    (__return_storage_ptr__->LocationB).Offset = 0;
    (__return_storage_ptr__->LocationB).LineIndex = -1;
    return __return_storage_ptr__;
  }
  uVar10 = 0;
  if ((int)uVar1 < (this->LineModels).ArrayNum) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FTextSelection *)(*pcVar6)();
    return pFVar13;
  }
  pIVar3 = (this->WordBreakIterator).Object;
  pFVar17 = (this->LineModels).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x70;
  (**(code **)((longlong)*pIVar3 + 0x30))(pIVar3,*(longlong *)pFVar17);
  pIVar3 = (this->WordBreakIterator).Object;
  IVar4 = *pIVar3;
  iVar11 = *(int *)(*(longlong *)pFVar17 + 8) + -1;
  if (*(int *)(*(longlong *)pFVar17 + 8) == 0) {
    iVar11 = 0;
  }
  if (iVar12 < iVar11) {
    iVar12 = (**(code **)((longlong)IVar4 + 0x88))(pIVar3,iVar12);
  }
  else {
    iVar12 = (**(code **)((longlong)IVar4 + 0x68))();
  }
  iVar11 = (**(code **)((longlong)*(this->WordBreakIterator).Object + 0x70))();
  while (iVar11 != -1) {
    iVar15 = iVar11;
    for (lVar16 = (longlong)iVar11; lVar16 < iVar12; lVar16 = lVar16 + 1) {
      plVar5 = *(longlong **)pFVar17;
      if (iVar15 < 0) {
code_r0x00014287e146:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pFVar13 = (FTextSelection *)(*pcVar6)();
          return pFVar13;
        }
      }
      else {
        iVar2 = (int)plVar5[1];
        iVar14 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar14 = 0;
        }
        if (iVar14 <= iVar15) goto code_r0x00014287e146;
      }
      bVar9 = FTextChar::IsWhitespace((uint)*(ushort *)(*plVar5 + lVar16 * 2));
      if (!bVar9) goto LAB_14287e1c0;
      iVar15 = iVar15 + 1;
    }
    iVar15 = (**(code **)((longlong)*(this->WordBreakIterator).Object + 0x70))();
    iVar12 = iVar11;
    iVar11 = iVar15;
  }
LAB_14287e1c0:
  (**(code **)((longlong)*(this->WordBreakIterator).Object + 0x50))();
  if ((iVar12 == iVar11) || (iVar11 == -1)) {
    (__return_storage_ptr__->LocationA).LineIndex = -1;
    (__return_storage_ptr__->LocationA).Offset = 0;
    (__return_storage_ptr__->LocationB).LineIndex = -1;
    (__return_storage_ptr__->LocationB).Offset = 0;
  }
  else {
    FVar7.Offset = iVar11;
    FVar7.LineIndex = uVar1;
    __return_storage_ptr__->LocationA = FVar7;
    FVar8.Offset = iVar12;
    FVar8.LineIndex = uVar1;
    __return_storage_ptr__->LocationB = FVar8;
  }
  return __return_storage_ptr__;
}

// GetWrappedDrawSize @ 14287e270

TVector2<double> * __thiscall
FTextLayout::GetWrappedDrawSize(FTextLayout *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = (this->TextLayoutSize).Height;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(this->TextLayoutSize).WrappedWidth;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// GetWrappedSize @ 14287e2a0

TVector2<double> * __thiscall
FTextLayout::GetWrappedSize(FTextLayout *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (this->TextLayoutSize).Height;
  dVar2 = (double)(__real_3f800000 / this->Scale);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(this->TextLayoutSize).WrappedWidth * dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1 * dVar2;
  return __return_storage_ptr__;
}

// GetWrappingDrawWidth @ 14287e2f0

float __thiscall FTextLayout::GetWrappingDrawWidth(FTextLayout *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  FString local_18;
  
  if (this->WrappingWidth <= 0.0 && this->WrappingWidth != 0.0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    TAttribute<FString>::Get(&this->DebugSourceInfo,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WrappingWidth >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                       ,0x224,L"Debug Source: %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = (this->WrappingWidth - ((this->Margin).Right + (this->Margin).Left)) * this->Scale;
  if (fVar3 <= __real_3c23d70a) {
    fVar3 = __real_3c23d70a;
  }
  return fVar3;
}

// InsertAt @ 142880270

bool __thiscall FTextLayout::InsertAt(FTextLayout *this,FTextLocation *param_1,FString *param_2)

{
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  FString *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  int local_res10;
  int iStackX_14;
  FString *local_res18;
  int local_res20;
  int iStackX_24;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  FString local_e8;
  FString local_d8;
  IRun *local_c8;
  TReferenceControllerBase<1> *local_c0;
  IRun *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FRunModel local_a8;
  FRunModel local_78;
  
  uVar10 = param_1->LineIndex;
  iVar1 = param_1->Offset;
  if (((int)uVar10 < 0) || ((this->LineModels).ArrayNum <= (int)uVar10)) {
    return false;
  }
  uVar14 = 0;
  uVar13 = 0;
  if ((int)uVar10 < (this->LineModels).ArrayNum) {
    uVar13 = ~uVar10 >> 0x1f;
  }
  local_res18 = param_2;
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar15 = (this->LineModels).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x70;
  ::FString::InsertAt(*(FString **)pFVar15,iVar1,param_2);
  pFVar15[0x68] = (FScriptContainerElement)((byte)pFVar15[0x68] | 7);
  bVar6 = false;
  if (0 < *(int *)(pFVar15 + 0x30)) {
    this_00 = (TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *)(pFVar15 + 0x28);
    uVar16 = uVar14;
    do {
      uVar13 = (uint)uVar14;
      uVar10 = 0;
      if ((int)uVar13 < *(int *)(pFVar15 + 0x30)) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar17 = (this_00->AllocatorInstance).Data + uVar16;
      (**(code **)(**(longlong **)pFVar17 + 8))(*(longlong **)pFVar17,&local_res10);
      if ((iVar1 < local_res10) || (iStackX_14 <= iVar1)) {
        if (uVar13 == *(int *)(pFVar15 + 0x30) - 1U) {
          if (!bVar6) goto LAB_142880438;
LAB_14288072c:
          iVar11 = (local_res18->Data).ArrayNum;
          iVar12 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar12 = 0;
          }
          iVar11 = iVar12 + local_res10;
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          iVar12 = iStackX_14 + iVar12;
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          _local_res20 = CONCAT44(iVar12,iVar11);
          (**(code **)(**(longlong **)pFVar17 + 0x10))(*(longlong **)pFVar17,&local_res20);
        }
        else if (bVar6) goto LAB_14288072c;
      }
      else {
        if (bVar6) {
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          TAttribute<FString>::Get(&this->DebugSourceInfo,&local_e8);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RunIsAfterInsertLocation == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                             ,0x6d1,L"Debug Source: %s");
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
LAB_142880438:
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
        bVar6 = true;
        plVar3 = *(longlong **)pFVar17;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar9 = (**(code **)(*plVar3 + 0x98))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if ((bVar9 & 1) == 0) {
          if (iStackX_14 - local_res10 != 1) {
            local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.Data.ArrayNum = 0;
            local_d8.Data.ArrayMax = 0;
            TAttribute<FString>::Get(&this->DebugSourceInfo,&local_d8);
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("RunRange.Len() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                               ,0x6db,L"Debug Source: %s");
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
          pFVar5 = local_res18;
          iVar12 = (local_res18->Data).ArrayNum;
          pcVar4 = *(code **)(this->_padding_ + 0x30);
          if (iVar1 == local_res10) {
            local_100 = local_res10;
            local_fc = iVar12 + -1 + local_res10;
            if (iVar12 == 0) {
              local_fc = local_res10;
            }
            (*pcVar4)(this,&local_c8,pFVar15,&local_100);
            iVar12 = (pFVar5->Data).ArrayNum;
            local_f4 = iVar12 + -1;
            local_f8 = local_f4;
            if (iVar12 == 0) {
              local_f8 = 0;
            }
            local_f8 = local_f8 + local_res10;
            if (iVar12 == 0) {
              local_f4 = 0;
            }
            local_f4 = local_f4 + iStackX_14;
            (**(code **)(**(longlong **)pFVar17 + 0x10))(*(longlong **)pFVar17,&local_f8);
            local_a8.Run.Object = local_c8;
            uVar16 = uVar16 + 0x30;
            local_a8.Run.SharedReferenceCount.ReferenceController = local_c0;
            if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_c0->SharedReferenceCount =
                   (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_a8.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.MeasuredRanges.ArrayNum = 0;
            local_a8.MeasuredRanges.ArrayMax = 0;
            local_a8.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.MeasuredRangeSizes.ArrayNum = 0;
            local_a8.MeasuredRangeSizes.ArrayMax = 0;
            bVar8 = IsInGameThread();
            if (((!bVar8) && (bVar8 = IsInSlateThread(), !bVar8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInGameThread() || IsInSlateThread()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                   ,0xbc1,
                                   L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
                      (this_00,&local_a8,uVar13);
            if (local_a8.MeasuredRangeSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_a8.MeasuredRangeSizes.AllocatorInstance.Data);
            }
            if (local_a8.MeasuredRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.MeasuredRanges.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a8.Run.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c0);
            uVar13 = uVar13 + 1;
          }
          else {
            local_f0 = iStackX_14;
            local_ec = iVar12 + -1 + iStackX_14;
            if (iVar12 == 0) {
              local_ec = iStackX_14;
            }
            (*pcVar4)(this,&local_b8,pFVar15,&local_f0);
            uVar13 = uVar13 + 1;
            local_78.Run.Object = local_b8;
            uVar16 = uVar16 + 0x30;
            local_78.Run.SharedReferenceCount.ReferenceController = local_b0;
            if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_b0->SharedReferenceCount =
                   (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_78.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_78.MeasuredRanges.ArrayNum = 0;
            local_78.MeasuredRanges.ArrayMax = 0;
            local_78.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_78.MeasuredRangeSizes.ArrayNum = 0;
            local_78.MeasuredRangeSizes.ArrayMax = 0;
            bVar8 = IsInGameThread();
            if (((!bVar8) && (bVar8 = IsInSlateThread(), !bVar8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInGameThread() || IsInSlateThread()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                   ,0xbc1,
                                   L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
                      (this_00,&local_78,uVar13);
            if (local_78.MeasuredRangeSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_78.MeasuredRangeSizes.AllocatorInstance.Data);
            }
            if (local_78.MeasuredRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.MeasuredRanges.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_78.Run.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b0);
          }
        }
        else {
          iVar12 = (local_res18->Data).ArrayNum;
          local_108 = local_res10;
          local_104 = iVar12 + -1;
          if (iVar12 == 0) {
            local_104 = 0;
          }
          local_104 = local_104 + iStackX_14;
          (**(code **)(**(longlong **)pFVar17 + 0x10))(*(longlong **)pFVar17,&local_108);
        }
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x30;
    } while ((int)(uVar13 + 1) < *(int *)(pFVar15 + 0x30));
  }
  this->DirtyFlags = this->DirtyFlags | 1;
  return true;
}

// InsertAt @ 1428807d0

/* WARNING: Removing unreachable block (ram,0x0001428811eb) */
/* WARNING: Removing unreachable block (ram,0x0001428811f9) */
/* WARNING: Removing unreachable block (ram,0x00014288140b) */
/* WARNING: Removing unreachable block (ram,0x000142881419) */

bool __thiscall
FTextLayout::InsertAt
          (FTextLayout *this,FTextLocation *param_1,TSharedRef<IRun,1> *param_2,bool param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IRun *pIVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar19;
  longlong lVar20;
  uint local_228;
  int local_220;
  int iStack_21c;
  int local_218;
  IRun *local_210;
  FSharedReferencer<1> FStack_208;
  longlong local_200;
  IRun *local_1f8;
  FSharedReferencer<1> FStack_1f0;
  FScriptContainerElement *local_1e8;
  FString local_1e0;
  int local_1d0;
  int iStack_1cc;
  IRun *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  IRun *local_198;
  TReferenceControllerBase<1> *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  FString local_138;
  FString local_128;
  undefined8 local_118;
  FSharedReferencer<1> local_110;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  undefined8 local_f8;
  FSharedReferencer<1> local_f0;
  undefined8 local_e8;
  FSharedReferencer<1> local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  FRunModel local_b8;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  uVar16 = param_1->LineIndex;
  iVar9 = param_1->Offset;
  local_218 = iVar9;
  if (((int)uVar16 < 0) || ((this->LineModels).ArrayNum <= (int)uVar16)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return false;
  }
  uVar13 = 0;
  if ((int)uVar16 < (this->LineModels).ArrayNum) {
    uVar13 = ~uVar16 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.Data.ArrayNum = 0;
  local_1e0.Data.ArrayMax = 0;
  pFVar18 = (this->LineModels).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x70;
  local_1e8 = pFVar18;
  (**(code **)((longlong)*param_2->Object + 0x88))(param_2->Object,&local_1e0);
  ::FString::InsertAt(*(FString **)pFVar18,iVar9,&local_1e0);
  pFVar18[0x68] = (FScriptContainerElement)((byte)pFVar18[0x68] | 7);
  bVar6 = false;
  local_228 = 0;
  if (0 < *(int *)(pFVar18 + 0x30)) {
    this_00 = (TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *)(pFVar18 + 0x28);
    local_200 = 0;
    do {
      lVar20 = local_200;
      uVar16 = 0;
      if ((int)local_228 < *(int *)(pFVar18 + 0x30)) {
        uVar16 = ~local_228 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar17 = (this_00->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar17 + local_200 * 0x30 + 8);
      pIVar3 = *(IRun **)(pFVar17 + local_200 * 0x30);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_220);
      if ((iVar9 < local_220) || (iStack_21c <= iVar9)) {
        if (local_228 == *(int *)(local_1e8 + 0x30) - 1U) {
          if (!bVar6) goto LAB_1428809fc;
LAB_142881455:
          iVar15 = local_1e0.Data.ArrayNum + -1;
          if (local_1e0.Data.ArrayNum == 0) {
            iVar15 = 0;
          }
          iVar14 = local_220 + iVar15;
          if (iVar14 < 0) {
            iVar14 = 0;
          }
          iVar15 = iStack_21c + iVar15;
          if (iVar15 < 0) {
            iVar15 = 0;
          }
          _local_1d0 = CONCAT44(iVar15,iVar14);
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,&local_1d0);
          lVar20 = local_200;
        }
        else {
          lVar20 = local_200;
          if (bVar6) goto LAB_142881455;
        }
      }
      else {
        if (bVar6) {
          local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.Data.ArrayNum = 0;
          local_138.Data.ArrayMax = 0;
          TAttribute<FString>::Get(&this->DebugSourceInfo,&local_138);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RunIsAfterInsertLocation == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                             ,0x716,L"Debug Source: %s");
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
LAB_1428809fc:
        iVar15 = local_218;
        bVar6 = true;
        iVar9 = iVar9 + -1 + local_1e0.Data.ArrayNum;
        if (local_1e0.Data.ArrayNum == 0) {
          iVar9 = local_218;
        }
        local_1f8 = (IRun *)0x0;
        FStack_1f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_210 = (IRun *)0x0;
        FStack_208.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        uVar10 = (**(code **)((longlong)*pIVar3 + 0x98))(pIVar3);
        if ((uVar10 & 1) == 0) {
          if (iStack_21c - local_220 != 1) {
            local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.Data.ArrayNum = 0;
            local_128.Data.ArrayMax = 0;
            TAttribute<FString>::Get(&this->DebugSourceInfo,&local_128);
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("RunRange.Len() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                               ,0x729,L"Debug Source: %s");
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            iVar15 = local_218;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
          if (iVar15 == local_220) {
            local_158 = local_220;
            local_154 = iVar15;
            puVar11 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x30))(this,local_68,local_1e8,&local_158);
            local_f0.ReferenceController = (TReferenceControllerBase<1> *)puVar11[1];
            local_1f8 = (IRun *)*puVar11;
            if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_f0.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_f8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_f0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f0.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_60);
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_e8 = 0;
            local_210 = pIVar3;
            local_e0.ReferenceController = pTVar2;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_208,&local_e0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e0.ReferenceController);
            if ((local_210 == (IRun *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            local_14c = local_1e0.Data.ArrayNum + -1;
            if (local_1e0.Data.ArrayNum == 0) {
              local_14c = 0;
            }
            local_14c = local_14c + iStack_21c;
            local_150 = iVar9;
            (**(code **)((longlong)*local_210 + 0x10))(local_210,&local_150);
          }
          else {
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_d8 = 0;
            local_1f8 = pIVar3;
            local_d0.ReferenceController = pTVar2;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_d0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0.ReferenceController);
            local_144 = local_1e0.Data.ArrayNum + -1;
            if (local_1e0.Data.ArrayNum == 0) {
              local_144 = 0;
            }
            local_144 = local_144 + iStack_21c;
            local_148 = iVar9;
            puVar11 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x30))(this,local_58,local_1e8,&local_148);
            local_c0.ReferenceController = (TReferenceControllerBase<1> *)puVar11[1];
            local_210 = (IRun *)*puVar11;
            if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_c0.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_208,&local_c0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c0.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_50);
          }
        }
        else {
          puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,local_78);
          local_110.ReferenceController = (TReferenceControllerBase<1> *)puVar11[1];
          local_1f8 = (IRun *)*puVar11;
          if (local_110.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_110.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_110.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_118 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_110);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_110.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70);
          if ((local_1f8 == (IRun *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          local_164 = iVar15;
          local_168 = local_220;
          (**(code **)((longlong)*local_1f8 + 0x10))(local_1f8,&local_168);
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_108 = 0;
          local_210 = pIVar3;
          local_100.ReferenceController = pTVar2;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_208,&local_100);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_100.ReferenceController);
          if ((local_210 == (IRun *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          local_15c = local_1e0.Data.ArrayNum + -1;
          if (local_1e0.Data.ArrayNum == 0) {
            local_15c = 0;
          }
          local_15c = local_15c + iStack_21c;
          local_160 = iVar9;
          (**(code **)((longlong)*local_210 + 0x10))(local_210,&local_160);
        }
        local_140 = iVar15;
        local_13c = iVar9;
        (**(code **)((longlong)*param_2->Object + 0x70))(param_2->Object,local_1e8,&local_140);
        lVar19 = local_200;
        local_200 = local_200 + -1;
        uVar16 = 0;
        if ((int)local_228 < *(int *)(pFVar18 + 0x30)) {
          uVar16 = ~local_228 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar17 = (this_00->AllocatorInstance).Data + lVar19 * 0x30;
        if (*(void **)(pFVar17 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar17 + 0x20));
        }
        if (*(void **)(pFVar17 + 0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar17 + 0x10));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar17 + 8));
        if (*(int *)(pFVar18 + 0x30) + ~local_228 != 0) {
          memmove(pFVar17,pFVar17 + 0x30,
                  (longlong)(int)(*(int *)(pFVar18 + 0x30) + ~local_228) * 0x30);
        }
        *(int *)(pFVar18 + 0x30) = *(int *)(pFVar18 + 0x30) + -1;
        if ((local_1f8 == (IRun *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        piVar12 = (int *)(**(code **)((longlong)*local_1f8 + 8))(local_1f8,local_88);
        iVar9 = piVar12[1];
        iVar15 = *piVar12;
        if ((local_210 == (IRun *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        piVar12 = (int *)(**(code **)((longlong)*local_210 + 8))(local_210,local_80);
        iVar14 = piVar12[1];
        iVar1 = *piVar12;
        lVar19 = local_200;
        uVar16 = local_228 - 1;
        if (0 < iVar9 - iVar15) {
          if ((local_1f8 == (IRun *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          FVar5.ReferenceController = FStack_1f0.ReferenceController;
          pIVar3 = local_1f8;
          if (FStack_1f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_1f0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_1f0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1f8 == (IRun *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          local_b8.Run.Object = pIVar3;
          local_b8.Run.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
          if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar5.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_b8.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.MeasuredRanges.ArrayNum = 0;
          local_b8.MeasuredRanges.ArrayMax = 0;
          local_b8.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.MeasuredRangeSizes.ArrayNum = 0;
          local_b8.MeasuredRangeSizes.ArrayMax = 0;
          bVar8 = IsInGameThread();
          if (((!bVar8) && (bVar8 = IsInSlateThread(), !bVar8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread() || IsInSlateThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                 ,0xbc1,
                                 L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
                    (this_00,&local_b8,local_228);
          if (local_b8.MeasuredRangeSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_b8.MeasuredRangeSizes.AllocatorInstance.Data);
          }
          if (local_b8.MeasuredRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.MeasuredRanges.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8.Run.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
          lVar19 = lVar20;
          uVar16 = local_228;
        }
        local_228 = uVar16;
        lVar20 = lVar19 + 1;
        uVar16 = local_228 + 1;
        local_1c8 = param_2->Object;
        local_1c0 = (param_2->SharedReferenceCount).ReferenceController;
        if (local_1c0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_1c0->SharedReferenceCount = (atomic<int>)((int)local_1c0->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        bVar8 = IsInGameThread();
        if (((!bVar8) && (bVar8 = IsInSlateThread(), !bVar8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                               ,0xbc1,
                               L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar17 = (this_00->AllocatorInstance).Data;
        if (((pFVar17 <= (FScriptContainerElement *)&local_1c8) &&
            ((FScriptContainerElement *)&local_1c8 <
             pFVar17 + (longlong)*(int *)(pFVar18 + 0x34) * 0x30)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)(pFVar18 + 0x30);
        if (iVar9 == *(int *)(pFVar18 + 0x34)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,(ForAnyElementType *)this_00,(int *)(pFVar18 + 0x34));
        }
        *(int *)(pFVar18 + 0x30) = iVar9 + 1;
        pFVar17 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x30;
        memmove(pFVar17 + 0x30,pFVar17,(longlong)(int)(iVar9 - uVar16) * 0x30);
        pFVar17 = (this_00->AllocatorInstance).Data + lVar20 * 0x30;
        *(IRun **)pFVar17 = local_1c8;
        *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_1c0;
        if (local_1c0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_1c0->SharedReferenceCount = (atomic<int>)((int)local_1c0->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined8 *)(pFVar17 + 0x10) = 0;
        *(undefined8 *)(pFVar17 + 0x10) = local_1b8;
        *(undefined4 *)(pFVar17 + 0x18) = (undefined4)local_1b0;
        *(undefined4 *)(pFVar17 + 0x1c) = local_1b0._4_4_;
        *(undefined8 *)(pFVar17 + 0x20) = 0;
        *(undefined8 *)(pFVar17 + 0x20) = local_1a8;
        *(undefined4 *)(pFVar17 + 0x28) = (undefined4)local_1a0;
        *(undefined4 *)(pFVar17 + 0x2c) = local_1a0._4_4_;
        local_1a0 = 0;
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c0);
        if ((0 < iVar14 - iVar1) || (param_3)) {
          uVar16 = local_228 + 2;
          lVar20 = lVar19 + 2;
          if ((local_210 == (IRun *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          FVar5.ReferenceController = FStack_208.ReferenceController;
          pIVar3 = local_210;
          if (FStack_208.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_208.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_208.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_210 == (IRun *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          local_198 = pIVar3;
          local_190 = FVar5.ReferenceController;
          if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar5.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_188 = 0;
          local_180 = 0;
          local_178 = 0;
          local_170 = 0;
          bVar8 = IsInGameThread();
          if (((!bVar8) && (bVar8 = IsInSlateThread(), !bVar8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread() || IsInSlateThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                 ,0xbc1,
                                 L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pFVar17 = (this_00->AllocatorInstance).Data;
          if (((pFVar17 <= (FScriptContainerElement *)&local_198) &&
              ((FScriptContainerElement *)&local_198 <
               pFVar17 + (longlong)*(int *)(pFVar18 + 0x34) * 0x30)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar9 = *(int *)(pFVar18 + 0x30);
          if (iVar9 == *(int *)(pFVar18 + 0x34)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,(ForAnyElementType *)this_00,(int *)(pFVar18 + 0x34));
          }
          *(int *)(pFVar18 + 0x30) = iVar9 + 1;
          pFVar17 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x30;
          memmove(pFVar17 + 0x30,pFVar17,(longlong)(int)(iVar9 - uVar16) * 0x30);
          pFVar17 = (this_00->AllocatorInstance).Data + lVar20 * 0x30;
          *(IRun **)pFVar17 = local_198;
          *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_190;
          if (local_190 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_190->SharedReferenceCount =
                 (atomic<int>)((int)local_190->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(undefined8 *)(pFVar17 + 0x10) = 0;
          *(undefined8 *)(pFVar17 + 0x10) = local_188;
          *(undefined4 *)(pFVar17 + 0x18) = (undefined4)local_180;
          *(undefined4 *)(pFVar17 + 0x1c) = local_180._4_4_;
          *(undefined8 *)(pFVar17 + 0x20) = 0;
          *(undefined8 *)(pFVar17 + 0x20) = local_178;
          *(undefined4 *)(pFVar17 + 0x28) = (undefined4)local_170;
          *(undefined4 *)(pFVar17 + 0x2c) = local_170._4_4_;
          local_170 = 0;
          local_178 = 0;
          local_180 = 0;
          local_188 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
        }
        local_228 = uVar16;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_208.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_1f0.ReferenceController);
        iVar9 = local_218;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      local_228 = local_228 + 1;
      local_200 = lVar20 + 1;
    } while ((int)local_228 < *(int *)(local_1e8 + 0x30));
  }
  this->DirtyFlags = this->DirtyFlags | 1;
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// InsertAt @ 142881540

bool __thiscall FTextLayout::InsertAt(FTextLayout *this,FTextLocation *param_1,wchar_t param_2)

{
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  int local_res10;
  int iStackX_14;
  int local_res20;
  int iStackX_24;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  FString local_d8;
  FString local_c8;
  IRun *local_b8;
  TReferenceControllerBase<1> *local_b0;
  IRun *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FRunModel local_98;
  FRunModel local_68;
  
  uVar9 = param_1->LineIndex;
  iVar1 = param_1->Offset;
  if (((int)uVar9 < 0) || ((this->LineModels).ArrayNum <= (int)uVar9)) {
    return false;
  }
  uVar13 = 0;
  uVar12 = 0;
  if ((int)uVar9 < (this->LineModels).ArrayNum) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar14 = (this->LineModels).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x70;
  ::FString::InsertAt(*(FString **)pFVar14,iVar1,param_2);
  pFVar14[0x68] = (FScriptContainerElement)((byte)pFVar14[0x68] | 7);
  bVar5 = false;
  if (0 < *(int *)(pFVar14 + 0x30)) {
    this_00 = (TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *)(pFVar14 + 0x28);
    uVar15 = uVar13;
    do {
      uVar12 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar12 < *(int *)(pFVar14 + 0x30)) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar16 = (this_00->AllocatorInstance).Data + uVar15;
      (**(code **)(**(longlong **)pFVar16 + 8))(*(longlong **)pFVar16,&local_res10);
      if ((iVar1 < local_res10) || (iStackX_14 <= iVar1)) {
        if (uVar12 == *(int *)(pFVar14 + 0x30) - 1U) {
          if (!bVar5) goto LAB_142881708;
LAB_1428819af:
          iVar10 = local_res10 + 1;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          iVar11 = iStackX_14 + 1;
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          _local_res20 = CONCAT44(iVar11,iVar10);
          (**(code **)(**(longlong **)pFVar16 + 0x10))(*(longlong **)pFVar16,&local_res20);
        }
        else if (bVar5) goto LAB_1428819af;
      }
      else {
        if (bVar5) {
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          TAttribute<FString>::Get(&this->DebugSourceInfo,&local_d8);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("RunIsAfterInsertLocation == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                             ,0x690,L"Debug Source: %s");
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
LAB_142881708:
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
        bVar5 = true;
        plVar3 = *(longlong **)pFVar16;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar8 = (**(code **)(*plVar3 + 0x98))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if ((bVar8 & 1) == 0) {
          if (iStackX_14 - local_res10 != 1) {
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
            TAttribute<FString>::Get(&this->DebugSourceInfo,&local_c8);
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RunRange.Len() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                               ,0x69a,L"Debug Source: %s");
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          pcVar4 = *(code **)(this->_padding_ + 0x30);
          if (iVar1 == local_res10) {
            local_f0 = local_res10;
            local_ec = local_res10 + 1;
            (*pcVar4)(this,&local_b8,pFVar14,&local_f0);
            local_e8 = local_res10 + 1;
            local_e4 = iStackX_14 + 1;
            (**(code **)(**(longlong **)pFVar16 + 0x10))(*(longlong **)pFVar16,&local_e8);
            local_98.Run.Object = local_b8;
            uVar15 = uVar15 + 0x30;
            local_98.Run.SharedReferenceCount.ReferenceController = local_b0;
            if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_b0->SharedReferenceCount =
                   (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_98.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.MeasuredRanges.ArrayNum = 0;
            local_98.MeasuredRanges.ArrayMax = 0;
            local_98.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.MeasuredRangeSizes.ArrayNum = 0;
            local_98.MeasuredRangeSizes.ArrayMax = 0;
            bVar7 = IsInGameThread();
            if (((!bVar7) && (bVar7 = IsInSlateThread(), !bVar7)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInGameThread() || IsInSlateThread()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                   ,0xbc1,
                                   L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
                      (this_00,&local_98,uVar12);
            if (local_98.MeasuredRangeSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_98.MeasuredRangeSizes.AllocatorInstance.Data);
            }
            if (local_98.MeasuredRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.MeasuredRanges.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_98.Run.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b0);
            uVar12 = uVar12 + 1;
          }
          else {
            local_dc = iStackX_14 + 1;
            local_e0 = iStackX_14;
            (*pcVar4)(this,&local_a8,pFVar14,&local_e0);
            uVar12 = uVar12 + 1;
            local_68.Run.Object = local_a8;
            uVar15 = uVar15 + 0x30;
            local_68.Run.SharedReferenceCount.ReferenceController = local_a0;
            if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_a0->SharedReferenceCount =
                   (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_68.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68.MeasuredRanges.ArrayNum = 0;
            local_68.MeasuredRanges.ArrayMax = 0;
            local_68.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68.MeasuredRangeSizes.ArrayNum = 0;
            local_68.MeasuredRangeSizes.ArrayMax = 0;
            bVar7 = IsInGameThread();
            if (((!bVar7) && (bVar7 = IsInSlateThread(), !bVar7)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInGameThread() || IsInSlateThread()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                   ,0xbc1,
                                   L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
                      (this_00,&local_68,uVar12);
            if (local_68.MeasuredRangeSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_68.MeasuredRangeSizes.AllocatorInstance.Data);
            }
            if (local_68.MeasuredRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.MeasuredRanges.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_68.Run.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a0);
          }
        }
        else {
          local_f8 = local_res10;
          local_f4 = iStackX_14 + 1;
          (**(code **)(**(longlong **)pFVar16 + 0x10))(*(longlong **)pFVar16,&local_f8);
        }
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 0x30;
    } while ((int)(uVar12 + 1) < *(int *)(pFVar14 + 0x30));
  }
  this->DirtyFlags = this->DirtyFlags | 1;
  return true;
}

// IsEmpty @ 142881c70

bool __thiscall FTextLayout::IsEmpty(FTextLayout *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (this->LineModels).ArrayNum;
  if (iVar2 == 0) {
    return true;
  }
  if (iVar2 == 1) {
    iVar1 = *(int *)(*(longlong *)(this->LineModels).AllocatorInstance.Data + 8);
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      return true;
    }
  }
  return false;
}

// IsLayoutDirty @ 142881f40

bool __thiscall FTextLayout::IsLayoutDirty(FTextLayout *this)

{
  return (bool)(this->DirtyFlags & 1);
}

// JoinLineWithNextLine @ 142882af0

/* WARNING: Removing unreachable block (ram,0x000142882e9c) */
/* WARNING: Removing unreachable block (ram,0x000142882eaa) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FTextLayout::JoinLineWithNextLine(FTextLayout *this,int param_1)

{
  TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  atomic<int> *paVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  int local_res20;
  int local_res24;
  longlong local_98;
  longlong *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((((param_1 < 0) || (iVar8 = (this->LineModels).ArrayNum, iVar8 <= param_1)) ||
      (uVar13 = param_1 + 1, (int)uVar13 < 0)) || (iVar8 <= (int)uVar13)) {
    return false;
  }
  this_00 = &this->LineModels;
  uVar14 = 0;
  uVar7 = 0;
  if (param_1 < (this->LineModels).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar10 = (this_00->AllocatorInstance).Data + (longlong)param_1 * 0x70;
  uVar7 = 0;
  if ((int)uVar13 < (this->LineModels).ArrayNum) {
    uVar7 = ~uVar13 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar12 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x70;
  iVar6 = ((*(FString **)pFVar12)->Data).ArrayNum;
  iVar8 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar8 = 0;
  }
  if (iVar8 == 0) {
    bVar4 = RemoveLine(this,uVar13);
  }
  else {
    iVar6 = ((*(FString **)pFVar10)->Data).ArrayNum;
    iVar8 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar8 = 0;
    }
    ::FString::InsertAt(*(FString **)pFVar10,iVar8,*(FString **)pFVar12);
    pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] | 7);
    if (0 < *(int *)(pFVar12 + 0x30)) {
      local_98 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(pFVar12 + 0x30)) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)(pFVar12 + 0x28) + 8 + local_98);
        plVar2 = *(longlong **)(*(longlong *)(pFVar12 + 0x28) + local_98);
        if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
          paVar11 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar11 = &pTVar1->SharedReferenceCount;
          LOCK();
          *paVar11 = (atomic<int>)((int)*paVar11 + 1);
          UNLOCK();
        }
        (**(code **)(*plVar2 + 8))(plVar2,&local_res20);
        if (0 < local_res24 - local_res20) {
          local_res20 = local_res20 + iVar8;
          if (local_res20 < 0) {
            local_res20 = 0;
          }
          local_res24 = local_res24 + iVar8;
          if (local_res24 < 0) {
            local_res24 = 0;
          }
          (**(code **)(*plVar2 + 0x70))(plVar2,pFVar10,&local_res20);
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar11 = (atomic<int>)((int)*paVar11 + 1);
            UNLOCK();
          }
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          local_80 = plVar2;
          local_78 = pTVar1;
          bVar4 = IsInGameThread();
          if (((!bVar4) && (bVar4 = IsInSlateThread(), !bVar4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread() || IsInSlateThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                 ,0xbc1,
                                 L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (((*(longlong ***)(pFVar10 + 0x28) <= &local_80) &&
              (&local_80 < *(longlong ***)(pFVar10 + 0x28) + (longlong)*(int *)(pFVar10 + 0x34) * 6)
              ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar6 = *(int *)(pFVar10 + 0x30);
          if (iVar6 == *(int *)(pFVar10 + 0x34)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,(ForAnyElementType *)(pFVar10 + 0x28),(int *)(pFVar10 + 0x34));
          }
          *(int *)(pFVar10 + 0x30) = iVar6 + 1;
          puVar9 = (undefined8 *)((longlong)iVar6 * 0x30 + *(longlong *)(pFVar10 + 0x28));
          *puVar9 = local_80;
          puVar9[1] = local_78;
          if (local_78 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
            UNLOCK();
          }
          puVar9[2] = 0;
          puVar9[2] = local_70;
          *(undefined4 *)(puVar9 + 3) = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar9 + 0x1c) = local_68._4_4_;
          puVar9[4] = 0;
          puVar9[4] = local_60;
          *(undefined4 *)(puVar9 + 5) = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar9 + 0x2c) = local_58._4_4_;
          local_58 = 0;
          local_60 = 0;
          local_68 = 0;
          local_70 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        uVar14 = uVar14 + 1;
        local_98 = local_98 + 0x30;
      } while ((int)uVar14 < *(int *)(pFVar12 + 0x30));
    }
    TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,uVar13,No);
    this->DirtyFlags = this->DirtyFlags | 1;
    bVar4 = true;
  }
  return bVar4;
}

// JustifyLayout @ 142882f30

void __thiscall FTextLayout::JustifyLayout(FTextLayout *this)

{
  ulonglong uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  Type TVar14;
  longlong lVar15;
  double *pdVar16;
  longlong lVar17;
  Type TVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  undefined8 *puVar26;
  uint uVar27;
  undefined8 *puVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_188;
  undefined4 uStack_154;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  double local_110;
  double local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  TReferenceControllerBase<1> *local_e0;
  undefined1 local_d0 [16];
  TReferenceControllerBase<1> *local_c0;
  
  uVar27 = 0;
  local_res20 = 0;
  iVar25 = *(int *)&(this->LineViewsToJustify).Elements.field_0x8 -
           *(int *)&(this->LineViewsToJustify).Elements.field_0x34;
  if (iVar25 == 0) {
    return;
  }
  iVar21 = 0;
  iVar23 = 0;
  uVar12 = 1;
  iVar2 = *(int *)&(this->LineViewsToJustify).Elements.field_0x28;
  dVar6 = (double)(this->TextLayoutSize).DrawWidth;
  dVar29 = (double)this->Scale * (this->ViewSize).field0_0x0._s_0.X;
  if (dVar29 <= dVar6) {
    dVar29 = dVar6;
  }
  fVar31 = (float)(dVar29 - (double)(((this->Margin).Right + (this->Margin).Left) * this->Scale));
  iVar13 = 0;
  if (iVar2 != 0) {
    puVar24 = *(uint **)&(this->LineViewsToJustify).Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)&(this->LineViewsToJustify).Elements.field_0x10;
    }
    uVar19 = *puVar24;
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar21;
      iVar23 = iVar23 + 0x20;
      iVar21 = iVar21 + 1;
      iVar13 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_142883072;
      uVar19 = puVar24[lVar17 + 1];
    }
    uVar12 = -uVar19 & uVar19;
    uVar1 = (ulonglong)uVar12 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar13 = (int)lVar17 + -1 + iVar23;
    if (iVar2 < iVar13) {
      iVar13 = iVar2;
    }
  }
LAB_142883072:
  TStack_138.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->LineViewsToJustify).Elements.field_0x10;
  local_188 = *(uint *)&(this->LineViewsToJustify).Elements.field_0x28;
  uVar19 = local_188 & 0xffffffe0;
  TStack_138._padding_ = CONCAT44(uVar12,iVar21);
  TStack_138.CurrentBitIndex = iVar13;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  TStack_138._28_4_ = iVar13;
  TStack_138.BaseBitIndex = iVar23;
  uStack_118 = CONCAT44(uStack_154,iVar25);
  iVar25 = (int)local_188 >> 5;
  if ((((int)local_188 < 0) || (iVar2 < (int)local_188)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = __xmm_80000000800000008000000080000000;
  fVar8 = __real_3f000000;
  uVar12 = *(uint *)&(this->LineViewsToJustify).Elements.field_0x28;
  if (local_188 != uVar12) {
    puVar22 = *(undefined1 **)&(this->LineViewsToJustify).Elements.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->LineViewsToJustify).Elements.field_0x10;
    }
    uVar20 = -1 << ((byte)local_188 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar25 * 4);
    while (uVar20 == 0) {
      lVar17 = (longlong)iVar25;
      uVar19 = uVar19 + 0x20;
      iVar25 = iVar25 + 1;
      local_188 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_1428831a0;
      uVar20 = *(uint *)(puVar22 + lVar17 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_188 = (int)lVar17 + -1 + uVar19;
    if ((int)uVar12 < (int)local_188) {
      local_188 = uVar12;
    }
  }
LAB_1428831a0:
  do {
    if (*(int *)&(this->LineViewsToJustify).Elements.field_0x8 -
        *(int *)&(this->LineViewsToJustify).Elements.field_0x34 != (int)uStack_118) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_138.CurrentBitIndex == local_188) &&
       (TStack_138.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->LineViewsToJustify).Elements.field_0x10)) {
      return;
    }
    uVar12 = *(uint *)(*(longlong *)&(this->LineViewsToJustify).Elements +
                      (longlong)TStack_138.CurrentBitIndex * 0xc);
    uVar19 = 0;
    if ((int)uVar12 < (this->LineViews).ArrayNum) {
      uVar19 = ~uVar12 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->LineViews).AllocatorInstance.Data;
    lVar17 = (longlong)(int)uVar12 * 0x68;
    TVar18 = this->Justification;
    if (pFVar3[lVar17 + 0x60] == (FScriptContainerElement)0x1) {
      if (TVar18 == Left) {
        TVar18 = Right;
      }
      else if (TVar18 == Right) {
        TVar18 = Left;
      }
    }
    fVar30 = *(float *)(pFVar3 + lVar17 + 0x54);
    if (TVar18 == Right) {
      uVar12 = *(int *)(pFVar3 + lVar17 + 8) - 1;
      TVar14 = Left;
      if ((int)uVar12 < *(int *)(pFVar3 + lVar17 + 8)) {
        TVar14 = ~uVar12 >> 0x1f;
      }
      if ((TVar14 == Left) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar27 = uVar27 | 1;
      plVar4 = *(longlong **)
                (*(longlong *)(pFVar3 + lVar17) + -0x10 +
                (longlong)*(int *)(pFVar3 + lVar17 + 8) * 0x10);
      local_res20 = uVar27;
      lVar15 = (**(code **)(*plVar4 + 0x20))(plVar4,local_d0);
      if (*(char *)(lVar15 + 0x18) != '\x01') goto LAB_1428832f4;
LAB_14288340e:
      bVar11 = true;
    }
    else {
      if (TVar18 == Left) {
        if ((*(int *)(pFVar3 + lVar17 + 8) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar27 = uVar27 | 2;
        local_res20 = uVar27;
        lVar15 = (**(code **)(*(longlong *)**(undefined8 **)(pFVar3 + lVar17) + 0x20))
                           ((longlong *)**(undefined8 **)(pFVar3 + lVar17),local_f0);
        if (*(char *)(lVar15 + 0x18) == '\0') goto LAB_14288340e;
      }
LAB_1428832f4:
      bVar11 = false;
    }
    if ((uVar27 & 2) != 0) {
      uVar27 = uVar27 & 0xfffffffd;
      local_res20 = uVar27;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
    }
    if ((uVar27 & 1) != 0) {
      local_res20 = uVar27 & 0xfffffffe;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    }
    uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    if (bVar11) {
      fVar30 = (float)*(double *)(pFVar3 + lVar17 + 0x40);
    }
    if (TVar18 == Left) {
LAB_14288343d:
      uVar7 = (undefined8)
              (float)((uint)(float)(*(double *)(pFVar3 + lVar17 + 0x40) - (double)fVar30) ^ uVar9);
    }
    else if (TVar18 == Center) {
      uVar7 = (undefined8)((fVar31 - fVar30) * fVar8);
    }
    else {
      if (TVar18 != Right) {
        if (TVar18 == InvariantLeft) goto LAB_14288343d;
        if (TVar18 != InvariantRight) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                              ,0x215,L"Unknown ETextJustify");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          goto LAB_14288345a;
        }
      }
      uVar7 = (undefined8)(fVar31 - fVar30);
    }
LAB_14288345a:
    *(double *)(pFVar3 + lVar17 + 0x30) = (double)uVar7 + *(double *)(pFVar3 + lVar17 + 0x30);
    *(double *)(pFVar3 + lVar17 + 0x38) = (double)uVar10 + *(double *)(pFVar3 + lVar17 + 0x38);
    iVar25 = *(int *)(pFVar3 + lVar17 + 8);
    puVar28 = *(undefined8 **)(pFVar3 + lVar17);
    puVar26 = puVar28 + (longlong)iVar25 * 2;
    while( true ) {
      if (*(int *)(pFVar3 + lVar17 + 8) != iVar25) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedRef<ILayoutBlock,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar28 == puVar26) break;
      plVar4 = (longlong *)*puVar28;
      lVar15 = *plVar4;
      pdVar16 = (double *)(**(code **)(lVar15 + 0x38))(plVar4,local_100);
      local_108 = (double)uVar10 + pdVar16[1];
      local_110 = (double)uVar7 + *pdVar16;
      (**(code **)(lVar15 + 0x30))(plVar4,&local_110);
      puVar28 = puVar28 + 2;
    }
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
    uVar27 = local_res20;
  } while( true );
}

// MarginLayout @ 142883ee0

void __thiscall FTextLayout::MarginLayout(FTextLayout *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  undefined1 local_res8 [8];
  uint local_res10;
  double local_78;
  double local_70;
  undefined1 local_68 [48];
  
  fVar1 = (this->Margin).Left;
  fVar2 = (this->Margin).Top;
  fVar3 = this->Scale;
  fVar4 = (this->Margin).Bottom;
  fVar16 = (fVar1 + (this->Margin).Right) * fVar3;
  (this->TextLayoutSize).DrawWidth = fVar16 + (this->TextLayoutSize).DrawWidth;
  (this->TextLayoutSize).WrappedWidth = fVar16 + (this->TextLayoutSize).WrappedWidth;
  (this->TextLayoutSize).Height = (fVar2 + fVar4) * fVar3 + (this->TextLayoutSize).Height;
  pFVar15 = (this->LineViews).AllocatorInstance.Data;
  local_res10 = (this->LineViews).ArrayNum;
  uVar11 = (ulonglong)(int)local_res10;
  pFVar14 = pFVar15 + uVar11 * 0x68;
  dVar8 = (double)fVar1 * (double)fVar3;
  dVar9 = (double)fVar2 * (double)fVar3;
  while( true ) {
    if ((this->LineViews).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<FTextLayout::FLineView,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar14) break;
    *(double *)(pFVar15 + 0x30) = dVar8 + *(double *)(pFVar15 + 0x30);
    *(double *)(pFVar15 + 0x38) = dVar9 + *(double *)(pFVar15 + 0x38);
    iVar5 = *(int *)(pFVar15 + 8);
    puVar13 = *(undefined8 **)pFVar15;
    puVar12 = puVar13 + (longlong)iVar5 * 2;
    while( true ) {
      if (*(int *)(pFVar15 + 8) != iVar5) {
        `TCheckedPointerIterator<TSharedRef<ILayoutBlock,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar13 == puVar12) break;
      plVar6 = (longlong *)*puVar13;
      lVar7 = *plVar6;
      pdVar10 = (double *)(**(code **)(lVar7 + 0x38))(plVar6,local_68);
      local_70 = dVar9 + pdVar10[1];
      local_78 = dVar8 + *pdVar10;
      (**(code **)(lVar7 + 0x30))(plVar6,&local_78);
      puVar13 = puVar13 + 2;
    }
    uVar11 = (ulonglong)local_res10;
    pFVar15 = pFVar15 + 0x68;
  }
  return;
}

// RemoveAt @ 142893d70

/* WARNING: Removing unreachable block (ram,0x00014289408e) */
/* WARNING: Removing unreachable block (ram,0x00014289409c) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FTextLayout::RemoveAt(FTextLayout *this,FTextLocation *param_1,int param_2)

{
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_res10;
  int iStackX_14;
  int local_res20;
  int iStackX_24;
  undefined8 local_b8;
  TReferenceControllerBase<1> *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  longlong local_70;
  FString local_68;
  FString local_58;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  
  uVar14 = param_1->LineIndex;
  iVar1 = param_1->Offset;
  if ((-1 < (int)uVar14) && ((int)uVar14 < (this->LineModels).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar14 < (this->LineModels).ArrayNum) {
      uVar6 = ~uVar14 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar9 = (this->LineModels).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x70;
    iVar13 = ((*(FString **)pFVar9)->Data).ArrayNum;
    iVar5 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar5 = 0;
    }
    iVar13 = iVar5 - iVar1;
    if (param_2 < iVar5 - iVar1) {
      iVar13 = param_2;
    }
    if (iVar13 != 0) {
      ::FString::RemoveAt(*(FString **)pFVar9,iVar1,iVar13,Default);
      pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 7);
      uVar14 = *(int *)(pFVar9 + 0x30) - 1;
      if (-1 < (int)uVar14) {
        this_00 = (TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *)(pFVar9 + 0x28);
        lVar10 = (longlong)(int)uVar14 * 0x30;
        do {
          uVar6 = 0;
          if ((int)uVar14 < *(int *)(pFVar9 + 0x30)) {
            uVar6 = ~uVar14 >> 0x1f;
          }
          local_70 = lVar10;
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pFVar11 = (this_00->AllocatorInstance).Data + lVar10;
          (**(code **)(**(longlong **)pFVar11 + 8))(*(longlong **)pFVar11,&local_res20);
          iVar5 = iVar1 + iVar13;
          iVar7 = iVar1;
          if (iVar1 < local_res20) {
            iVar7 = local_res20;
          }
          iVar12 = iVar5;
          if (iStackX_24 < iVar5) {
            iVar12 = iStackX_24;
          }
          if ((iVar7 < iVar12) && (iVar12 = iVar12 - iVar7, 0 < iVar12)) {
            if (iStackX_24 - local_res20 == iVar12) {
              TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::RemoveAt
                        (this_00,uVar14,Default);
              if (*(int *)(pFVar9 + 0x30) == 0) {
                local_88 = 0;
                (**(code **)(this->_padding_ + 0x30))(this,&local_48,pFVar9,&local_88);
                local_b8 = local_48;
                local_b0 = local_40;
                if (local_40 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_40->SharedReferenceCount =
                       (atomic<int>)((int)local_40->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_a8 = 0;
                local_a0 = 0;
                local_98 = 0;
                local_90 = 0;
                bVar3 = IsInGameThread();
                if (((!bVar3) && (bVar3 = IsInSlateThread(), !bVar3)) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsInGameThread() || IsInSlateThread()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                       ,0xbc1,
                                       L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                pFVar11 = (this_00->AllocatorInstance).Data;
                if (((pFVar11 <= (FScriptContainerElement *)&local_b8) &&
                    ((FScriptContainerElement *)&local_b8 <
                     pFVar11 + (longlong)*(int *)(pFVar9 + 0x34) * 0x30)) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                iVar5 = *(int *)(pFVar9 + 0x30);
                if (iVar5 == *(int *)(pFVar9 + 0x34)) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x830,(ForAnyElementType *)this_00,(int *)(pFVar9 + 0x34));
                }
                *(int *)(pFVar9 + 0x30) = iVar5 + 1;
                pFVar11 = (this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x30;
                *(undefined8 *)pFVar11 = local_b8;
                *(TReferenceControllerBase<1> **)(pFVar11 + 8) = local_b0;
                if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_b0->SharedReferenceCount =
                       (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                *(undefined8 *)(pFVar11 + 0x10) = 0;
                *(undefined8 *)(pFVar11 + 0x10) = local_a8;
                *(undefined4 *)(pFVar11 + 0x18) = (undefined4)local_a0;
                *(undefined4 *)(pFVar11 + 0x1c) = local_a0._4_4_;
                *(undefined8 *)(pFVar11 + 0x20) = 0;
                *(undefined8 *)(pFVar11 + 0x20) = local_98;
                *(undefined4 *)(pFVar11 + 0x28) = (undefined4)local_90;
                *(undefined4 *)(pFVar11 + 0x2c) = local_90._4_4_;
                local_90 = 0;
                local_98 = 0;
                local_a0 = 0;
                local_a8 = 0;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_b0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_40);
              }
            }
            else {
              if (iVar1 < local_res20) {
                local_7c = iStackX_24 - iVar13;
                local_80 = iVar1;
                if (local_7c - iVar1 < 1) {
                  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_68.Data.ArrayNum = 0;
                  local_68.Data.ArrayMax = 0;
                  TAttribute<FString>::Get(&this->DebugSourceInfo,&local_68);
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!NewRange.IsEmpty()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                     ,0x820,L"Debug Source: %s");
                  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_68.Data.AllocatorInstance.Data);
                  }
                  if (bVar3) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return (bool)uVar4;
                  }
                }
                piVar8 = &local_80;
              }
              else {
                local_74 = iStackX_24 - iVar12;
                local_78 = local_res20;
                if (local_74 - local_res20 < 1) {
                  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_58.Data.ArrayNum = 0;
                  local_58.Data.ArrayMax = 0;
                  TAttribute<FString>::Get(&this->DebugSourceInfo,&local_58);
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!NewRange.IsEmpty()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                     ,0x828,L"Debug Source: %s");
                  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_58.Data.AllocatorInstance.Data);
                  }
                  if (bVar3) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return (bool)uVar4;
                  }
                }
                piVar8 = &local_78;
              }
              (**(code **)(**(longlong **)pFVar11 + 0x10))(*(longlong **)pFVar11,piVar8);
            }
            if (local_res20 <= iVar1) break;
          }
          else if (local_res20 < iVar5) {
            if ((((iStackX_24 - local_res20 < 1) && (iVar1 <= local_res20)) && (iVar1 <= iStackX_24)
                ) && (iStackX_24 < iVar5)) {
              TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::RemoveAt
                        (this_00,uVar14,Default);
            }
          }
          else {
            iVar5 = -iVar13 + local_res20;
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            iVar7 = iStackX_24 + -iVar13;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            _local_res10 = CONCAT44(iVar7,iVar5);
            (**(code **)(**(longlong **)pFVar11 + 0x10))(*(longlong **)pFVar11,&local_res10);
          }
          lVar10 = local_70 + -0x30;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
      this->DirtyFlags = this->DirtyFlags | 1;
      return true;
    }
  }
  return false;
}

// RemoveLine @ 142894280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FTextLayout::RemoveLine(FTextLayout *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FLineView *this_00;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  uint local_res20;
  uint local_a8 [2];
  undefined1 local_a0 [8];
  double local_98;
  
  if ((param_1 < 0) || ((this->LineModels).ArrayNum <= param_1)) {
    return false;
  }
  local_res10 = param_1;
  TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>::RemoveAt
            (&this->LineModels,param_1,Default);
  uVar4 = __xmm_80000000800000008000000080000000;
  if ((this->DirtyFlags & 1) == 0) {
    uVar11 = 0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    if (0 < (this->LineViews).ArrayNum) {
      lVar9 = 0;
      local_res20 = 0xffffffff;
      local_res18 = 1;
      do {
        uVar14 = local_res20;
        uVar12 = local_res18;
        uVar7 = 0;
        if ((int)uVar11 < (this->LineViews).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar2 = (this->LineViews).AllocatorInstance.Data;
        iVar8 = *(int *)(pFVar2 + lVar9 + 100);
        if (iVar8 == local_res10) {
          fVar16 = (float)((double)fVar16 + *(double *)(pFVar2 + lVar9 + 0x48));
          if (((int)uVar12 < 0) || ((this->LineViews).ArrayNum <= (int)uVar12)) {
            fVar15 = 0.0;
            if (0 < (int)uVar11) {
              uVar7 = 0;
              if ((int)uVar14 < (this->LineViews).ArrayNum) {
                uVar7 = ~uVar14 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              pFVar2 = (this->LineViews).AllocatorInstance.Data;
              fVar15 = (float)(*(double *)(pFVar2 + lVar9 + -0x20) -
                              (double)*(float *)(pFVar2 + lVar9 + -0x18));
            }
            if (this->ApplyLineHeightToBottomLine == false) {
              fVar16 = fVar16 + (fVar15 - this->OverHeight);
            }
            this->OverHeight = fVar15;
          }
          else {
            uVar7 = 0;
            if ((int)uVar12 < (this->LineViews).ArrayNum) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            fVar17 = (float)((*(double *)((this->LineViews).AllocatorInstance.Data + lVar9 + 0xa0) -
                             *(double *)(pFVar2 + lVar9 + 0x38)) + (double)fVar17);
          }
          uVar7 = 0;
          if ((int)uVar11 < (this->LineViews).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          this_00 = (FLineView *)
                    ((this->LineViews).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x68);
          FLineView::~FLineView(this_00);
          iVar8 = ~uVar11 + (this->LineViews).ArrayNum;
          if (iVar8 != 0) {
            memmove(this_00,this_00 + 1,(longlong)iVar8 * 0x68);
          }
          piVar1 = &(this->LineViews).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,&(this->LineViews).AllocatorInstance,(this->LineViews).ArrayNum,
                     &(this->LineViews).ArrayMax);
          local_a8[0] = uVar11;
          if (*(int *)&(this->LineViewsToJustify).Elements.field_0x8 !=
              *(int *)&(this->LineViewsToJustify).Elements.field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->LineViewsToJustify,uVar11,(int *)local_a8);
          }
          uVar11 = uVar11 - 1;
          lVar9 = lVar9 + -0x68;
          uVar12 = uVar12 - 1;
          uVar14 = uVar14 - 1;
        }
        else if (local_res10 < iVar8) {
          *(int *)(pFVar2 + lVar9 + 100) = iVar8 + -1;
          *(double *)(pFVar2 + lVar9 + 0x38) = *(double *)(pFVar2 + lVar9 + 0x38) - (double)fVar17;
          iVar8 = *(int *)(pFVar2 + lVar9 + 8);
          puVar10 = *(undefined8 **)(pFVar2 + lVar9);
          puVar13 = puVar10 + (longlong)iVar8 * 2;
          while( true ) {
            if (*(int *)(pFVar2 + lVar9 + 8) != iVar8) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<TSharedRef<ILayoutBlock,1>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            uVar12 = local_res18;
            uVar14 = local_res20;
            if (puVar10 == puVar13) break;
            (**(code **)(*(longlong *)*puVar10 + 0x38))((longlong *)*puVar10,local_a0);
            local_98 = local_98 + (double)(float)((uint)fVar17 ^ uVar4);
            (**(code **)(*(longlong *)*puVar10 + 0x30))((longlong *)*puVar10,local_a0);
            puVar10 = puVar10 + 2;
          }
        }
        local_res18 = uVar12 + 1;
        local_res20 = uVar14 + 1;
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 0x68;
      } while ((int)uVar11 < (this->LineViews).ArrayNum);
    }
    (this->TextLayoutSize).Height = (this->TextLayoutSize).Height - fVar16;
  }
  return true;
}

// RemoveLineHighlight @ 1428946f0

void __thiscall FTextLayout::RemoveLineHighlight(FTextLayout *this,FTextLineHighlight *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  void *_Dst;
  uint uVar10;
  ulonglong uVar11;
  FString local_48;
  FString local_38;
  
  uVar9 = 0;
  if ((param_1->LineIndex < 0) || ((this->LineModels).ArrayNum <= param_1->LineIndex)) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    TAttribute<FString>::Get(&this->DebugSourceInfo,&local_48);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LineModels.IsValidIndex(Highlight.LineIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                       ,0x5a1,L"Highlights must be for a valid Line Index!\n\tDebug Source: %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->ZOrder == 0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    TAttribute<FString>::Get(&this->DebugSourceInfo,&local_38);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Highlight.ZOrder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                       ,0x5a2,
                       L"The highlight Z-order must be <0 to create an underlay, or >0 to create an overlay!\n\tDebug Source: %s"
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = param_1->LineIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->LineModels).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->LineModels).AllocatorInstance.Data;
  uVar11 = uVar9;
  if (0 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60)) {
    do {
      uVar8 = (uint)uVar9;
      uVar10 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60)) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      piVar7 = (int *)(*(longlong *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x58) + uVar11);
      if ((((*piVar7 == param_1->LineIndex) && (piVar7[1] == (param_1->Range).BeginIndex)) &&
          (piVar7[2] == (param_1->Range).EndIndex)) &&
         ((piVar7[3] == param_1->ZOrder &&
          (*(ILineHighlighter **)(piVar7 + 4) == (param_1->Highlighter).Object)))) {
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60)) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (void *)((longlong)(int)uVar8 * 0x20 +
                       *(longlong *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x58));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x18));
        iVar6 = *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60) + ~uVar8;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)iVar6 << 5);
        }
        *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60) =
             *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60) + -1;
        this->DirtyFlags = this->DirtyFlags | 2;
        return;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 0x20;
    } while ((int)(uVar8 + 1) < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x60));
  }
  return;
}

// RemoveRunRenderer @ 1428949a0

void __thiscall FTextLayout::RemoveRunRenderer(FTextLayout *this,FTextRunRenderer *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  void *_Dst;
  uint uVar10;
  ulonglong uVar11;
  FString local_38;
  
  uVar9 = 0;
  if ((param_1->LineIndex < 0) || ((this->LineModels).ArrayNum <= param_1->LineIndex)) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    TAttribute<FString>::Get(&this->DebugSourceInfo,&local_38);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LineModels.IsValidIndex(Renderer.LineIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                       ,0x55a,L"Renderers must be for a valid Line Index!\n\tDebug Source: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = param_1->LineIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->LineModels).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->LineModels).AllocatorInstance.Data;
  uVar11 = uVar9;
  if (0 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50)) {
    do {
      uVar8 = (uint)uVar9;
      uVar10 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50)) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      piVar7 = (int *)(*(longlong *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x48) + uVar11);
      if ((((*piVar7 == param_1->LineIndex) && (piVar7[1] == (param_1->Range).BeginIndex)) &&
          (piVar7[2] == (param_1->Range).EndIndex)) &&
         (*(IRunRenderer **)(piVar7 + 4) == (param_1->Renderer).Object)) {
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50)) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (void *)((longlong)(int)uVar8 * 0x20 +
                       *(longlong *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x48));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x18));
        iVar6 = *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50) + ~uVar8;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)iVar6 << 5);
        }
        *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50) =
             *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50) + -1;
        this->DirtyFlags = this->DirtyFlags | 1;
        return;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 0x20;
    } while ((int)(uVar8 + 1) < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x70 + 0x50));
  }
  return;
}

// SetApplyLineHeightToBottomLine @ 1428957d0

void __thiscall FTextLayout::SetApplyLineHeightToBottomLine(FTextLayout *this,bool param_1)

{
  if (this->ApplyLineHeightToBottomLine != param_1) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->ApplyLineHeightToBottomLine = param_1;
  }
  return;
}

// SetDebugSourceInfo @ 142895e30

void __thiscall FTextLayout::SetDebugSourceInfo(FTextLayout *this,TAttribute<FString> *param_1)

{
  int iVar1;
  longlong *plVar2;
  TDelegate<FString___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  int iVar3;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  iVar1 = (param_1->Value).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&(this->DebugSourceInfo).Value,(wchar_t *)(param_1->Value).Data.AllocatorInstance.Data,
             iVar3);
  (this->DebugSourceInfo).bIsSet = param_1->bIsSet;
  this_00 = &(this->DebugSourceInfo).Getter;
  if (&param_1->Getter != this_00) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  TAttribute<FString>::Get(&this->DebugSourceInfo,(FString *)local_38);
  if ((atomic<unsigned___int64>)local_38 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_38);
  }
  return;
}

// SetJustification @ 142897330

void __thiscall FTextLayout::SetJustification(FTextLayout *this,Type param_1)

{
  if (this->Justification != param_1) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->Justification = param_1;
  }
  return;
}

// SetLineBreakIterator @ 142897570

void __thiscall
FTextLayout::SetLineBreakIterator(FTextLayout *this,TSharedPtr<IBreakIterator,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IBreakIterator *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->LineBreakIterator).SharedReferenceCount.ReferenceController;
  (this->LineBreakIterator).Object = pIVar3;
  (this->LineBreakIterator).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->DirtyFlags = this->DirtyFlags | 1;
  iVar1 = (this->LineModels).ArrayNum;
  pFVar5 = (this->LineModels).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((this->LineModels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    pFVar5[0x68] = (FScriptContainerElement)((byte)pFVar5[0x68] | 1);
    pFVar5 = pFVar5 + 0x70;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetLineHeightPercentage @ 142897620

void __thiscall FTextLayout::SetLineHeightPercentage(FTextLayout *this,float param_1)

{
  if (param_1 != this->LineHeightPercentage) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->LineHeightPercentage = param_1;
  }
  return;
}

// SetLineHighlights @ 142897640

void __thiscall
FTextLayout::SetLineHighlights
          (FTextLayout *this,TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->LineModels).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->LineModels).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((this->LineModels).AllocatorInstance.Data + lVar7 + 0x60) != 0) {
        uVar4 = 0;
        if ((int)uVar6 < (this->LineModels).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->LineModels).AllocatorInstance.Data;
        DestructItems<FTextLineHighlight,int>
                  (*(FTextLineHighlight **)(pFVar1 + lVar7 + 0x58),*(int *)(pFVar1 + lVar7 + 0x60));
        *(undefined4 *)(pFVar1 + lVar7 + 0x60) = 0;
        if (*(int *)(pFVar1 + lVar7 + 100) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)(pFVar1 + lVar7 + 0x58),0,
                     (int *)(pFVar1 + lVar7 + 100));
        }
        this->DirtyFlags = this->DirtyFlags | 2;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x70;
    } while ((int)uVar6 < (this->LineModels).ArrayNum);
  }
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AddLineHighlight(this,(FTextLineHighlight *)
                            ((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x20));
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// SetMargin @ 142897820

void __thiscall FTextLayout::SetMargin(FTextLayout *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((param_1->Left != (this->Margin).Left) || (param_1->Right != (this->Margin).Right)) ||
      (param_1->Top != (this->Margin).Top)) || (param_1->Bottom != (this->Margin).Bottom)) {
    fVar1 = param_1->Left;
    fVar2 = param_1->Top;
    fVar3 = param_1->Right;
    fVar4 = param_1->Bottom;
    this->DirtyFlags = this->DirtyFlags | 1;
    (this->Margin).Left = fVar1;
    (this->Margin).Top = fVar2;
    (this->Margin).Right = fVar3;
    (this->Margin).Bottom = fVar4;
  }
  return;
}

// SetRunRenderers @ 1428988e0

void __thiscall
FTextLayout::SetRunRenderers
          (FTextLayout *this,TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->LineModels).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->LineModels).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((this->LineModels).AllocatorInstance.Data + lVar7 + 0x50) != 0) {
        uVar4 = 0;
        if ((int)uVar6 < (this->LineModels).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->LineModels).AllocatorInstance.Data;
        DestructItems<FTextRunRenderer,int>
                  (*(FTextRunRenderer **)(pFVar1 + lVar7 + 0x48),*(int *)(pFVar1 + lVar7 + 0x50));
        *(undefined4 *)(pFVar1 + lVar7 + 0x50) = 0;
        if (*(int *)(pFVar1 + lVar7 + 0x54) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)(pFVar1 + lVar7 + 0x48),0,
                     (int *)(pFVar1 + lVar7 + 0x54));
        }
        this->DirtyFlags = this->DirtyFlags | 1;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x70;
    } while ((int)uVar6 < (this->LineModels).ArrayNum);
  }
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AddRunRenderer(this,(FTextRunRenderer *)
                          ((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x20));
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// SetScale @ 142898aa0

void __thiscall FTextLayout::SetScale(FTextLayout *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = _isnan((double)param_1);
  if (iVar1 != 0) {
    param_1 = 0.0;
  }
  if (param_1 != this->Scale) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->Scale = param_1;
    iVar1 = (this->LineModels).ArrayNum;
    pFVar2 = (this->LineModels).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x70;
    while( true ) {
      if ((this->LineModels).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar2 == pFVar3) break;
      pFVar2[0x68] = (FScriptContainerElement)((byte)pFVar2[0x68] | 5);
      pFVar2 = pFVar2 + 0x70;
    }
  }
  return;
}

// SetTextFlowDirection @ 14289abe0

void __thiscall FTextLayout::SetTextFlowDirection(FTextLayout *this,ETextFlowDirection param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (this->TextFlowDirection != param_1) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->TextFlowDirection = param_1;
    iVar1 = (this->LineModels).ArrayNum;
    pFVar2 = (this->LineModels).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x70;
    while( true ) {
      if ((this->LineModels).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar2 == pFVar3) break;
      pFVar2[0x68] = (FScriptContainerElement)((byte)pFVar2[0x68] | 7);
      pFVar2 = pFVar2 + 0x70;
    }
  }
  return;
}

// SetTextOverflowPolicy @ 14289acf0

void __thiscall
FTextLayout::SetTextOverflowPolicy(FTextLayout *this,TOptional<ETextOverflowPolicy> param_1)

{
  TOptional<ETextOverflowPolicy> *pTVar1;
  char cVar2;
  bool bVar3;
  undefined6 in_register_00000012;
  
  cVar2 = *(char *)(CONCAT62(in_register_00000012,param_1) + 1);
  pTVar1 = &this->TextOverflowPolicyOverride;
  bVar3 = (this->TextOverflowPolicyOverride).bIsSet;
  if ((bVar3 != (bool)cVar2) ||
     ((bVar3 != false &&
      (pTVar1->TypedValue != *(ETextOverflowPolicy *)CONCAT62(in_register_00000012,param_1))))) {
    if ((TOptional<ETextOverflowPolicy> *)CONCAT62(in_register_00000012,param_1) != pTVar1) {
      if (cVar2 != '\0') {
        pTVar1->TypedValue = *(ETextOverflowPolicy *)CONCAT62(in_register_00000012,param_1);
        (this->TextOverflowPolicyOverride).bIsSet = true;
        this->DirtyFlags = this->DirtyFlags | 1;
        return;
      }
      if (bVar3 != false) {
        (this->TextOverflowPolicyOverride).bIsSet = false;
      }
    }
    this->DirtyFlags = this->DirtyFlags | 1;
  }
  return;
}

// SetTextShapingMethod @ 14289ade0

void __thiscall FTextLayout::SetTextShapingMethod(FTextLayout *this,ETextShapingMethod param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (this->TextShapingMethod != param_1) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->TextShapingMethod = param_1;
    iVar1 = (this->LineModels).ArrayNum;
    pFVar2 = (this->LineModels).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x70;
    while( true ) {
      if ((this->LineModels).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar2 == pFVar3) break;
      pFVar2[0x68] = (FScriptContainerElement)((byte)pFVar2[0x68] | 7);
      pFVar2 = pFVar2 + 0x70;
    }
  }
  return;
}

// SetTransformPolicy @ 14289b280

void __thiscall FTextLayout::SetTransformPolicy(FTextLayout *this,ETextTransformPolicy param_1)

{
  if (this->TransformPolicy != param_1) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->TransformPolicy = param_1;
  }
  return;
}

// SetVisibleRegion @ 14289b980

void __thiscall
FTextLayout::SetVisibleRegion(FTextLayout *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  double local_78;
  double local_70;
  undefined1 local_68 [48];
  
  if (((param_1->field0_0x0)._s_0.X != (this->ViewSize).field0_0x0._s_0.X) ||
     ((param_1->field0_0x0)._s_0.Y != (this->ViewSize).field0_0x0._s_0.Y)) {
    dVar4 = (param_1->field0_0x0)._s_0.Y;
    (this->ViewSize).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->ViewSize).field0_0x0._s_0.Y = dVar4;
    if (0 < *(int *)&(this->LineViewsToJustify).Elements.field_0x8 -
            *(int *)&(this->LineViewsToJustify).Elements.field_0x34) {
      this->DirtyFlags = this->DirtyFlags | 1;
    }
  }
  if (((param_2->field0_0x0)._s_0.X != (this->ScrollOffset).field0_0x0._s_0.X) ||
     ((param_2->field0_0x0)._s_0.Y != (this->ScrollOffset).field0_0x0._s_0.Y)) {
    dVar6 = (this->ScrollOffset).field0_0x0._s_0.X;
    dVar5 = (this->ScrollOffset).field0_0x0._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.X;
    dVar7 = (param_2->field0_0x0)._s_0.Y;
    (this->ScrollOffset).field0_0x0._s_0.X = dVar4;
    (this->ScrollOffset).field0_0x0._s_0.Y = dVar7;
    pFVar11 = (this->LineViews).AllocatorInstance.Data;
    dVar4 = dVar4 - dVar6;
    local_res10 = (this->LineViews).ArrayNum;
    uVar9 = (ulonglong)(int)local_res10;
    dVar5 = (this->ScrollOffset).field0_0x0._s_0.Y - dVar5;
    pFVar12 = pFVar11 + uVar9 * 0x68;
    while( true ) {
      if ((this->LineViews).ArrayNum != (int)uVar9) {
        `TCheckedPointerIterator<FTextLayout::FLineView,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar12) break;
      *(double *)(pFVar11 + 0x30) = *(double *)(pFVar11 + 0x30) - dVar4;
      *(double *)(pFVar11 + 0x38) = *(double *)(pFVar11 + 0x38) - dVar5;
      iVar1 = *(int *)(pFVar11 + 8);
      puVar13 = *(undefined8 **)pFVar11;
      puVar10 = puVar13 + (longlong)iVar1 * 2;
      while( true ) {
        if (*(int *)(pFVar11 + 8) != iVar1) {
          `TCheckedPointerIterator<TSharedRef<ILayoutBlock,1>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (puVar13 == puVar10) break;
        plVar2 = (longlong *)*puVar13;
        lVar3 = *plVar2;
        pdVar8 = (double *)(**(code **)(lVar3 + 0x38))(plVar2,local_68);
        local_70 = pdVar8[1] - dVar5;
        local_78 = *pdVar8 - dVar4;
        (**(code **)(lVar3 + 0x30))(plVar2,&local_78);
        puVar13 = puVar13 + 2;
      }
      uVar9 = (ulonglong)local_res10;
      pFVar11 = pFVar11 + 0x68;
    }
  }
  return;
}

// SetWrappingPolicy @ 14289bb60

void __thiscall FTextLayout::SetWrappingPolicy(FTextLayout *this,ETextWrappingPolicy param_1)

{
  if (this->WrappingPolicy != param_1) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->WrappingPolicy = param_1;
  }
  return;
}

// SetWrappingWidth @ 14289bb80

void __thiscall FTextLayout::SetWrappingWidth(FTextLayout *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->WrappingWidth;
  if (fVar1 != param_1) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->WrappingWidth = param_1;
    if (0.0 < fVar1 != 0.0 < param_1) {
      DirtyAllLineModels(this,'\x01');
      return;
    }
  }
  return;
}

// SplitLineAt @ 14289bd40

/* WARNING: Removing unreachable block (ram,0x00014289ccfc) */
/* WARNING: Removing unreachable block (ram,0x00014289cb11) */
/* WARNING: Removing unreachable block (ram,0x00014289c73b) */
/* WARNING: Removing unreachable block (ram,0x00014289cd0a) */
/* WARNING: Removing unreachable block (ram,0x00014289cb1f) */
/* WARNING: Removing unreachable block (ram,0x00014289c749) */
/* WARNING: Removing unreachable block (ram,0x00014289c94d) */
/* WARNING: Removing unreachable block (ram,0x00014289c95b) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FTextLayout::SplitLineAt(FTextLayout *this,FTextLocation *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  IRun *pIVar5;
  FLineModel *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FString *pFVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  FSharedReferencer<1> FVar20;
  uint uVar21;
  FString *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint local_res20;
  int iStackX_24;
  IRun *local_348;
  FSharedReferencer<1> FStack_340;
  IRun *local_338;
  FSharedReferencer<1> FStack_330;
  uint local_328;
  uint uStack_324;
  FRunModel local_320;
  FRunModel local_2f0;
  FRunModel local_2c0;
  FRunModel local_290;
  FScriptContainerElement *local_260;
  FLineModel local_258;
  FLineModel local_1e8;
  uint local_178;
  uint local_174;
  undefined4 local_170;
  int local_16c;
  uint local_168;
  uint local_164;
  undefined4 local_160;
  int local_15c;
  uint local_158;
  uint local_154;
  undefined4 local_150;
  int local_14c;
  longlong local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  TRawPtrProxy<FString> local_110;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  undefined8 local_f8;
  FSharedReferencer<1> local_f0;
  undefined8 local_e8;
  FSharedReferencer<1> local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  longlong local_b8;
  TRawPtrProxy<FString> local_b0;
  undefined8 local_a8;
  FSharedReferencer<1> local_a0;
  TSharedRef<FString,1> local_98;
  TSharedRef<FString,1> local_88;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  uVar2 = param_1->LineIndex;
  uVar3 = param_1->Offset;
  if (((int)uVar2 < 0) || ((this->LineModels).ArrayNum <= (int)uVar2)) {
    return false;
  }
  pFVar22 = (FString *)0x0;
  uVar21 = 0;
  uVar11 = uVar21;
  if ((int)uVar2 < (this->LineModels).ArrayNum) {
    uVar11 = ~uVar2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  local_b8 = (longlong)(int)uVar2 * 0x70;
  pFVar23 = (this->LineModels).AllocatorInstance.Data + local_b8;
  local_260 = pFVar23;
  pFVar14 = ::operator_new(0x10);
  local_110.Object = pFVar22;
  if (pFVar14 != (FString *)0x0) {
    if (*(int *)(*(undefined8 **)pFVar23 + 1) == 0) {
      local_110.Object = ::FString::ConstructFromPtrSize(pFVar14,L"",uVar3);
    }
    else {
      local_110.Object =
           ::FString::ConstructFromPtrSize(pFVar14,(wchar_t *)**(undefined8 **)pFVar23,uVar3);
    }
  }
  TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_98,&local_110);
  FLineModel::FLineModel(&local_258,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  pFVar14 = ::operator_new(0x10);
  local_b0.Object = pFVar22;
  if (pFVar14 != (FString *)0x0) {
    iVar13 = (int)(*(longlong **)pFVar23)[1];
    if (iVar13 == 0) {
      local_b0.Object = ::FString::ConstructFromPtrSize(pFVar14,L"" + (int)uVar3,-uVar3);
    }
    else {
      local_b0.Object =
           ::FString::ConstructFromPtrSize
                     (pFVar14,(wchar_t *)(**(longlong **)pFVar23 + (longlong)(int)uVar3 * 2),
                      (iVar13 + -1) - uVar3);
    }
  }
  TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_88,&local_b0);
  FLineModel::FLineModel(&local_1e8,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  iVar13 = ((local_258.Text.Object)->Data).ArrayNum;
  uVar11 = iVar13 - 1;
  if (iVar13 == 0) {
    uVar11 = uVar21;
  }
  if (uVar11 != uVar3) {
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Data.ArrayNum = 0;
    local_120.Data.ArrayMax = 0;
    TAttribute<FString>::Get(&this->DebugSourceInfo,&local_120);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("LeftLineModel.Text->Len() == BreakLocation",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                       ,0x79a,L"Debug Source: %s");
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    pFVar23 = local_260;
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  bVar8 = true;
  uVar11 = 0;
  if (0 < *(int *)(pFVar23 + 0x30)) {
    local_148 = 0;
    do {
      lVar17 = local_148;
      uVar24 = (uint)pFVar22;
      uVar12 = uVar11;
      if ((int)uVar24 < *(int *)(pFVar23 + 0x30)) {
        uVar12 = ~uVar24 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      local_348 = *(IRun **)(*(longlong *)(pFVar23 + 0x28) + lVar17);
      pTVar4 = *(TReferenceControllerBase<1> **)(*(longlong *)(pFVar23 + 0x28) + 8 + lVar17);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)((longlong)*local_348 + 8))(local_348,&local_res20);
      if (((int)uVar3 < (int)local_res20) || (iStackX_24 <= (int)uVar3)) {
        if (uVar24 == *(int *)(pFVar23 + 0x30) - 1U) {
          if (bVar8) goto LAB_14289c042;
LAB_14289cb2d:
          iVar13 = ((local_258.Text.Object)->Data).ArrayNum;
          uVar12 = 1 - iVar13;
          if (iVar13 == 0) {
            uVar12 = uVar21;
          }
          uVar18 = uVar12 + local_res20;
          if ((int)(uVar12 + local_res20) < 0) {
            uVar18 = uVar11;
          }
          uVar19 = iStackX_24 + uVar12;
          if ((int)(iStackX_24 + uVar12) < 0) {
            uVar19 = uVar21;
          }
          _local_328 = CONCAT44(uVar19,uVar18);
          (**(code **)((longlong)*local_348 + 0x70))(local_348,&local_1e8,&local_328);
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f0.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f0.MeasuredRanges.ArrayNum = 0;
          local_2f0.MeasuredRanges.ArrayMax = 0;
          local_2f0.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f0.MeasuredRangeSizes.ArrayNum = 0;
          local_2f0.MeasuredRangeSizes.ArrayMax = 0;
          local_2f0.Run.Object = local_348;
          local_2f0.Run.SharedReferenceCount.ReferenceController = pTVar4;
          bVar10 = IsInGameThread();
          if (((!bVar10) && (bVar10 = IsInSlateThread(), !bVar10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInGameThread() || IsInSlateThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                  ,0xbc1,
                                  L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          if (((local_1e8.Runs.AllocatorInstance.Data <= &local_2f0) &&
              (&local_2f0 <
               (FRunModel *)
               (local_1e8.Runs.AllocatorInstance.Data + (longlong)local_1e8.Runs.ArrayMax * 0x30)))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          if (local_1e8.Runs.ArrayNum == local_1e8.Runs.ArrayMax) {
            local_1e8.Runs.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_1e8.Runs.AllocatorInstance,&local_1e8.Runs.ArrayMax);
          }
          lVar17 = (longlong)local_1e8.Runs.ArrayNum;
          *(IRun **)&local_1e8.Runs.AllocatorInstance.Data[lVar17 * 0x30].field_0x0 =
               local_2f0.Run.Object;
          *(TReferenceControllerBase<1> **)
           (local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 8) =
               local_2f0.Run.SharedReferenceCount.ReferenceController;
          if (local_2f0.Run.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2f0.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2f0.Run.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          *(undefined8 *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x10) = 0;
          *(FScriptContainerElement **)
           (local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x10) =
               local_2f0.MeasuredRanges.AllocatorInstance.Data;
          *(int *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x18) =
               local_2f0.MeasuredRanges.ArrayNum;
          *(int *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x1c) =
               local_2f0.MeasuredRanges.ArrayMax;
          *(undefined8 *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x20) = 0;
          *(FScriptContainerElement **)
           (local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x20) =
               local_2f0.MeasuredRangeSizes.AllocatorInstance.Data;
          *(int *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x28) =
               local_2f0.MeasuredRangeSizes.ArrayNum;
          *(int *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x2c) =
               local_2f0.MeasuredRangeSizes.ArrayMax;
          local_2f0.MeasuredRangeSizes.ArrayNum = 0;
          local_2f0.MeasuredRangeSizes.ArrayMax = 0;
          local_2f0.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f0.MeasuredRanges.ArrayNum = 0;
          local_2f0.MeasuredRanges.ArrayMax = 0;
          local_2f0.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar20.ReferenceController = local_2f0.Run.SharedReferenceCount.ReferenceController;
          local_1e8.Runs.ArrayNum = local_1e8.Runs.ArrayNum + 1;
        }
        else {
          if (!bVar8) goto LAB_14289cb2d;
          (**(code **)((longlong)*local_348 + 0x70))(local_348,&local_258,&local_res20);
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2c0.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c0.MeasuredRanges.ArrayNum = 0;
          local_2c0.MeasuredRanges.ArrayMax = 0;
          local_2c0.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c0.MeasuredRangeSizes.ArrayNum = 0;
          local_2c0.MeasuredRangeSizes.ArrayMax = 0;
          local_2c0.Run.Object = local_348;
          local_2c0.Run.SharedReferenceCount.ReferenceController = pTVar4;
          bVar10 = IsInGameThread();
          if (((!bVar10) && (bVar10 = IsInSlateThread(), !bVar10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInGameThread() || IsInSlateThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                  ,0xbc1,
                                  L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          if (((local_258.Runs.AllocatorInstance.Data <= &local_2c0) &&
              (&local_2c0 <
               (FRunModel *)
               (local_258.Runs.AllocatorInstance.Data + (longlong)local_258.Runs.ArrayMax * 0x30)))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          if (local_258.Runs.ArrayNum == local_258.Runs.ArrayMax) {
            local_258.Runs.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_258.Runs.AllocatorInstance,&local_258.Runs.ArrayMax);
          }
          lVar17 = (longlong)local_258.Runs.ArrayNum;
          *(IRun **)&local_258.Runs.AllocatorInstance.Data[lVar17 * 0x30].field_0x0 =
               local_2c0.Run.Object;
          *(TReferenceControllerBase<1> **)
           (local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 8) =
               local_2c0.Run.SharedReferenceCount.ReferenceController;
          if (local_2c0.Run.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2c0.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2c0.Run.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          *(undefined8 *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x10) = 0;
          *(FScriptContainerElement **)
           (local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x10) =
               local_2c0.MeasuredRanges.AllocatorInstance.Data;
          *(int *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x18) =
               local_2c0.MeasuredRanges.ArrayNum;
          *(int *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x1c) =
               local_2c0.MeasuredRanges.ArrayMax;
          *(undefined8 *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x20) = 0;
          *(FScriptContainerElement **)
           (local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x20) =
               local_2c0.MeasuredRangeSizes.AllocatorInstance.Data;
          *(int *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x28) =
               local_2c0.MeasuredRangeSizes.ArrayNum;
          *(int *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x2c) =
               local_2c0.MeasuredRangeSizes.ArrayMax;
          local_2c0.MeasuredRangeSizes.ArrayNum = 0;
          local_2c0.MeasuredRangeSizes.ArrayMax = 0;
          local_2c0.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c0.MeasuredRanges.ArrayNum = 0;
          local_2c0.MeasuredRanges.ArrayMax = 0;
          local_2c0.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar20.ReferenceController = local_2c0.Run.SharedReferenceCount.ReferenceController;
          local_258.Runs.ArrayNum = local_258.Runs.ArrayNum + 1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar20.ReferenceController);
      }
      else {
LAB_14289c042:
        if (!bVar8) {
          local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.Data.ArrayNum = 0;
          local_130.Data.ArrayMax = 0;
          TAttribute<FString>::Get(&this->DebugSourceInfo,&local_130);
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RunIsToTheLeftOfTheBreakLocation == true",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                             ,0x7a5,L"Debug Source: %s");
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
        }
        bVar8 = false;
        FStack_340.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_338 = (IRun *)0x0;
        FStack_330.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        uVar15 = (**(code **)((longlong)*local_348 + 0x98))(local_348);
        if ((uVar15 & 1) == 0) {
          if (iStackX_24 - local_res20 != 1) {
            local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_140.Data.ArrayNum = 0;
            local_140.Data.ArrayMax = 0;
            TAttribute<FString>::Get(&this->DebugSourceInfo,&local_140);
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("RunRange.Len() == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                ,0x7b5,L"Debug Source: %s");
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
          }
          if (uVar3 == local_res20) {
            iVar13 = ((local_258.Text.Object)->Data).ArrayNum;
            local_168 = local_res20;
            local_164 = iVar13 - 1;
            if (iVar13 == 0) {
              local_164 = uVar11;
            }
            puVar16 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x30))(this,local_68,&local_258,&local_168);
            local_f0.ReferenceController = (TReferenceControllerBase<1> *)puVar16[1];
            pIVar5 = (IRun *)*puVar16;
            if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_f0.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_f8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_340,&local_f0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f0.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_60);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_e8 = 0;
            local_338 = local_348;
            local_e0.ReferenceController = pTVar4;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_330,&local_e0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e0.ReferenceController);
            if ((local_338 == (IRun *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            iVar13 = ((local_258.Text.Object)->Data).ArrayNum;
            local_160 = 0;
            uVar12 = iVar13 - 1;
            if (iVar13 == 0) {
              uVar12 = uVar11;
            }
            local_15c = iStackX_24 - uVar12;
            (**(code **)((longlong)*local_338 + 0x70))(local_338,&local_1e8,&local_160);
            local_348 = pIVar5;
          }
          else {
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_d8 = 0;
            local_d0.ReferenceController = pTVar4;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_340,&local_d0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0.ReferenceController);
            if ((local_348 == (IRun *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            iVar13 = ((local_258.Text.Object)->Data).ArrayNum;
            local_158 = local_res20;
            local_154 = iVar13 - 1;
            if (iVar13 == 0) {
              local_154 = uVar11;
            }
            (**(code **)((longlong)*local_348 + 0x70))(local_348,&local_258,&local_158);
            iVar13 = ((local_258.Text.Object)->Data).ArrayNum;
            local_150 = 0;
            uVar12 = iVar13 - 1;
            if (iVar13 == 0) {
              uVar12 = uVar11;
            }
            local_14c = iStackX_24 - uVar12;
            puVar16 = (undefined8 *)
                      (**(code **)(this->_padding_ + 0x30))(this,local_58,&local_1e8,&local_150);
            local_c0.ReferenceController = (TReferenceControllerBase<1> *)puVar16[1];
            local_338 = (IRun *)*puVar16;
            if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_c0.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_330,&local_c0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c0.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_50);
          }
        }
        else {
          puVar16 = (undefined8 *)(**(code **)((longlong)*local_348 + 0x78))(local_348,local_78);
          local_a0.ReferenceController = (TReferenceControllerBase<1> *)puVar16[1];
          pIVar5 = (IRun *)*puVar16;
          if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_a0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_a8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_340,&local_a0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a0.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70);
          if ((pIVar5 == (IRun *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          iVar13 = ((local_258.Text.Object)->Data).ArrayNum;
          local_178 = local_res20;
          local_174 = iVar13 - 1;
          if (iVar13 == 0) {
            local_174 = uVar11;
          }
          (**(code **)((longlong)*pIVar5 + 0x70))(pIVar5,&local_258,&local_178);
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_108 = 0;
          local_338 = local_348;
          local_100.ReferenceController = pTVar4;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_330,&local_100);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_100.ReferenceController);
          if ((local_338 == (IRun *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          iVar13 = ((local_258.Text.Object)->Data).ArrayNum;
          local_170 = 0;
          uVar12 = iVar13 - 1;
          if (iVar13 == 0) {
            uVar12 = uVar11;
          }
          local_16c = iStackX_24 - uVar12;
          (**(code **)((longlong)*local_338 + 0x70))(local_338,&local_1e8,&local_170);
          local_348 = pIVar5;
        }
        if ((local_348 == (IRun *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        FVar20.ReferenceController = FStack_340.ReferenceController;
        if (FStack_340.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_340.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_340.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_348 == (IRun *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        local_320.Run.SharedReferenceCount.ReferenceController = FVar20.ReferenceController;
        if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar20.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_320.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.MeasuredRanges.ArrayNum = 0;
        local_320.MeasuredRanges.ArrayMax = 0;
        local_320.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.MeasuredRangeSizes.ArrayNum = 0;
        local_320.MeasuredRangeSizes.ArrayMax = 0;
        local_320.Run.Object = local_348;
        bVar10 = IsInGameThread();
        if (((!bVar10) && (bVar10 = IsInSlateThread(), !bVar10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread() || IsInSlateThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                ,0xbc1,
                                L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (((local_258.Runs.AllocatorInstance.Data <= &local_320) &&
            (&local_320 <
             (FRunModel *)
             (local_258.Runs.AllocatorInstance.Data + (longlong)local_258.Runs.ArrayMax * 0x30))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (local_258.Runs.ArrayNum == local_258.Runs.ArrayMax) {
          local_258.Runs.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_258.Runs.AllocatorInstance,&local_258.Runs.ArrayMax);
        }
        lVar17 = (longlong)local_258.Runs.ArrayNum;
        *(IRun **)&local_258.Runs.AllocatorInstance.Data[lVar17 * 0x30].field_0x0 =
             local_320.Run.Object;
        *(TReferenceControllerBase<1> **)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 8)
             = local_320.Run.SharedReferenceCount.ReferenceController;
        if (local_320.Run.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_320.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_320.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               + 1);
          UNLOCK();
        }
        *(undefined8 *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x10) = 0;
        *(FScriptContainerElement **)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x10)
             = local_320.MeasuredRanges.AllocatorInstance.Data;
        *(int *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x18) =
             local_320.MeasuredRanges.ArrayNum;
        *(int *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x1c) =
             local_320.MeasuredRanges.ArrayMax;
        *(undefined8 *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x20) = 0;
        *(FScriptContainerElement **)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x20)
             = local_320.MeasuredRangeSizes.AllocatorInstance.Data;
        *(int *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x28) =
             local_320.MeasuredRangeSizes.ArrayNum;
        *(int *)(local_258.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x2c) =
             local_320.MeasuredRangeSizes.ArrayMax;
        local_320.MeasuredRangeSizes.ArrayNum = 0;
        local_320.MeasuredRangeSizes.ArrayMax = 0;
        local_320.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.MeasuredRanges.ArrayNum = 0;
        local_320.MeasuredRanges.ArrayMax = 0;
        local_320.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_258.Runs.ArrayNum = local_258.Runs.ArrayNum + 1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_320.Run.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar20.ReferenceController);
        if ((local_338 == (IRun *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        FVar20.ReferenceController = FStack_330.ReferenceController;
        pIVar5 = local_338;
        if (FStack_330.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_330.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_330.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_338 == (IRun *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        local_290.Run.Object = pIVar5;
        local_290.Run.SharedReferenceCount.ReferenceController = FVar20.ReferenceController;
        if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar20.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_290.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_290.MeasuredRanges.ArrayNum = 0;
        local_290.MeasuredRanges.ArrayMax = 0;
        local_290.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_290.MeasuredRangeSizes.ArrayNum = 0;
        local_290.MeasuredRangeSizes.ArrayMax = 0;
        bVar10 = IsInGameThread();
        if (((!bVar10) && (bVar10 = IsInSlateThread(), !bVar10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread() || IsInSlateThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                                ,0xbc1,
                                L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (((local_1e8.Runs.AllocatorInstance.Data <= &local_290) &&
            (&local_290 <
             (FRunModel *)
             (local_1e8.Runs.AllocatorInstance.Data + (longlong)local_1e8.Runs.ArrayMax * 0x30))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (local_1e8.Runs.ArrayNum == local_1e8.Runs.ArrayMax) {
          local_1e8.Runs.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_1e8.Runs.AllocatorInstance,&local_1e8.Runs.ArrayMax);
        }
        lVar17 = (longlong)local_1e8.Runs.ArrayNum;
        *(IRun **)&local_1e8.Runs.AllocatorInstance.Data[lVar17 * 0x30].field_0x0 =
             local_290.Run.Object;
        *(TReferenceControllerBase<1> **)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 8)
             = local_290.Run.SharedReferenceCount.ReferenceController;
        if (local_290.Run.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_290.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_290.Run.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               + 1);
          UNLOCK();
        }
        *(undefined8 *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x10) = 0;
        *(FScriptContainerElement **)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x10)
             = local_290.MeasuredRanges.AllocatorInstance.Data;
        *(int *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x18) =
             local_290.MeasuredRanges.ArrayNum;
        *(int *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x1c) =
             local_290.MeasuredRanges.ArrayMax;
        *(undefined8 *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x20) = 0;
        *(FScriptContainerElement **)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x20)
             = local_290.MeasuredRangeSizes.AllocatorInstance.Data;
        *(int *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x28) =
             local_290.MeasuredRangeSizes.ArrayNum;
        *(int *)(local_1e8.Runs.AllocatorInstance.Data + lVar17 * 0x30 + 0x2c) =
             local_290.MeasuredRangeSizes.ArrayMax;
        local_290.MeasuredRangeSizes.ArrayNum = 0;
        local_290.MeasuredRangeSizes.ArrayMax = 0;
        local_290.MeasuredRangeSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_290.MeasuredRanges.ArrayNum = 0;
        local_290.MeasuredRanges.ArrayMax = 0;
        local_290.MeasuredRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Runs.ArrayNum = local_1e8.Runs.ArrayNum + 1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_290.Run.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar20.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_330.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_340.ReferenceController);
        pFVar23 = local_260;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar22 = (FString *)(ulonglong)(uVar24 + 1);
      local_148 = local_148 + 0x30;
    } while ((int)(uVar24 + 1) < *(int *)(pFVar23 + 0x30));
  }
  if ((int)uVar2 < (this->LineModels).ArrayNum) {
    uVar11 = ~uVar2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  FLineModel::operator=
            ((FLineModel *)((this->LineModels).AllocatorInstance.Data + local_b8),&local_258);
  pFVar6 = (FLineModel *)(this->LineModels).AllocatorInstance.Data;
  if (((pFVar6 <= &local_1e8) && (&local_1e8 < pFVar6 + (this->LineModels).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  iVar13 = (this->LineModels).ArrayNum;
  piVar1 = &(this->LineModels).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x870,&(this->LineModels).AllocatorInstance,piVar1);
  }
  pFVar23 = (this->LineModels).AllocatorInstance.Data;
  (this->LineModels).ArrayNum = iVar13 + 1;
  lVar17 = (longlong)(int)(uVar2 + 1) * 0x70;
  pFVar23 = pFVar23 + lVar17;
  memmove(pFVar23 + 0x70,pFVar23,(longlong)(int)(iVar13 - (uVar2 + 1)) * 0x70);
  FLineModel::FLineModel
            ((FLineModel *)((this->LineModels).AllocatorInstance.Data + lVar17),&local_1e8);
  this->DirtyFlags = this->DirtyFlags | 1;
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)local_1e8.LineHighlights.AllocatorInstance.Data,
             local_1e8.LineHighlights.ArrayNum);
  if ((FTextLineHighlight *)local_1e8.LineHighlights.AllocatorInstance.Data !=
      (FTextLineHighlight *)0x0) {
    FMemory::Free(local_1e8.LineHighlights.AllocatorInstance.Data);
  }
  DestructItems<FTextRunRenderer,int>
            ((FTextRunRenderer *)local_1e8.RunRenderers.AllocatorInstance.Data,
             local_1e8.RunRenderers.ArrayNum);
  if ((FTextRunRenderer *)local_1e8.RunRenderers.AllocatorInstance.Data != (FTextRunRenderer *)0x0)
  {
    FMemory::Free(local_1e8.RunRenderers.AllocatorInstance.Data);
  }
  if (local_1e8.BreakCandidates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.BreakCandidates.AllocatorInstance.Data);
  }
  DestructItems<FTextLayout::FRunModel,int>
            ((FRunModel *)local_1e8.Runs.AllocatorInstance.Data,local_1e8.Runs.ArrayNum);
  if ((FRunModel *)local_1e8.Runs.AllocatorInstance.Data != (FRunModel *)0x0) {
    FMemory::Free(local_1e8.Runs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.ShapedTextCache.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.Text.SharedReferenceCount.ReferenceController);
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)local_258.LineHighlights.AllocatorInstance.Data,
             local_258.LineHighlights.ArrayNum);
  if ((FTextLineHighlight *)local_258.LineHighlights.AllocatorInstance.Data !=
      (FTextLineHighlight *)0x0) {
    FMemory::Free(local_258.LineHighlights.AllocatorInstance.Data);
  }
  DestructItems<FTextRunRenderer,int>
            ((FTextRunRenderer *)local_258.RunRenderers.AllocatorInstance.Data,
             local_258.RunRenderers.ArrayNum);
  if ((FTextRunRenderer *)local_258.RunRenderers.AllocatorInstance.Data != (FTextRunRenderer *)0x0)
  {
    FMemory::Free(local_258.RunRenderers.AllocatorInstance.Data);
  }
  if (local_258.BreakCandidates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.BreakCandidates.AllocatorInstance.Data);
  }
  DestructItems<FTextLayout::FRunModel,int>
            ((FRunModel *)local_258.Runs.AllocatorInstance.Data,local_258.Runs.ArrayNum);
  if ((FRunModel *)local_258.Runs.AllocatorInstance.Data != (FRunModel *)0x0) {
    FMemory::Free(local_258.Runs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.ShapedTextCache.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.Text.SharedReferenceCount.ReferenceController);
  return true;
}

// TransformLineText @ 14289e140

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::TransformLineText(FTextLayout *this,FLineModel *param_1)

{
  int iVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  FString local_28;
  FString local_18;
  
  if (this->TransformPolicy == ToLower) {
    pFVar7 = FTextTransformer::ToLower(&local_18,(param_1->Text).Object);
    pFVar2 = (param_1->Text).Object;
    iVar6 = (pFVar7->Data).ArrayNum;
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar8 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar8 = 0;
    }
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (iVar6 == iVar8) {
      if (pFVar2 != pFVar7) {
        pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar2->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar2->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (pFVar2->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1096304129019479069>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                         ,0x41d,"LineModel.Text->Len() == InNewText.Len()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
    if (this->TransformPolicy != ToUpper) {
      return;
    }
    pFVar7 = FTextTransformer::ToUpper(&local_28,(param_1->Text).Object);
    pFVar2 = (param_1->Text).Object;
    iVar6 = (pFVar7->Data).ArrayNum;
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar8 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar8 = 0;
    }
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (iVar6 == iVar8) {
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      if (pFVar2 != pFVar7) {
        pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar2->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar2->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (pFVar2->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
        local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      }
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1096304129019479069>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                         ,0x41d,"LineModel.Text->Len() == InNewText.Len()");
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateHighlights @ 14289f3b0

void __thiscall FTextLayout::UpdateHighlights(FTextLayout *this)

{
  FlowHighlights(this);
  this->DirtyFlags = this->DirtyFlags & 0xfd;
  return;
}

// UpdateIfNeeded @ 14289f3e0

void __thiscall FTextLayout::UpdateIfNeeded(FTextLayout *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = GSlateLayoutGeneration;
  if (this->CachedLayoutGeneration != GSlateLayoutGeneration) {
    this->DirtyFlags = this->DirtyFlags | 1;
    this->CachedLayoutGeneration = iVar1;
    iVar1 = (this->LineModels).ArrayNum;
    pFVar2 = (this->LineModels).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x70;
    while( true ) {
      if ((this->LineModels).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTextLayout::FLineModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar2 == pFVar3) break;
      pFVar2[0x68] = (FScriptContainerElement)((byte)pFVar2[0x68] | 7);
      pFVar2 = pFVar2 + 0x70;
    }
  }
  if ((this->DirtyFlags & 1) != 0) {
    (**(code **)(this->_padding_ + 0x10))(this);
                    /* WARNING: Could not recover jumptable at 0x00014289f473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x18))(this);
    return;
  }
  if ((this->DirtyFlags & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014289f486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x18))(this);
    return;
  }
  return;
}

// UpdateLayout @ 14289f4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::UpdateLayout(FTextLayout *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  FName FVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_SlateTextLayout> FVar19;
  double *pdVar20;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar21;
  ulonglong uVar22;
  FLineModel *pFVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  FName FVar27;
  float fVar28;
  float fVar29;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_e8;
  FColor_u_0 local_e0 [2];
  TArray<TSharedRef<ILayoutBlock,1>,TSizedDefaultAllocator<32>_> local_d8;
  FName local_c8;
  FName local_c0;
  LARGE_INTEGER local_b0;
  FStatMessage local_a8;
  double local_98;
  double local_90;
  FName local_88;
  undefined1 local_80 [64];
  
  uVar22 = 0;
  FVar19 = StatPtr_STAT_SlateTextLayout;
  if (StatPtr_STAT_SlateTextLayout == (FThreadSafeStaticStat<FStat_STAT_SlateTextLayout>)0x0) {
    pFVar18 = ::FName::FName(&local_88,"STAT_SlateTextLayout");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_SlateTextLayout>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextLayout,*pFVar18,
                        L"Text Layout","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar19;
  bVar13 = false;
  bVar12 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  bVar16 = false;
  bVar15 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar16 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8 = FVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\TextLayout.cpp"
                   ,0x4ea);
        bVar13 = true;
        bVar12 = true;
        bVar16 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar15 = true;
      goto LAB_14289f601;
    }
  }
  bVar13 = bVar16;
  bVar12 = bVar15;
  bVar15 = false;
  local_c8 = local_c0;
LAB_14289f601:
  ClearView(this);
  (**(code **)(this->_padding_ + 0x20))(this);
  fVar28 = GetWrappingDrawWidth(this);
  local_d8.ArrayNum = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayMax = 0;
  uVar26 = uVar22;
  if (0 < (this->LineModels).ArrayNum) {
    do {
      uVar21 = (uint)uVar22;
      uVar17 = 0;
      if ((int)uVar21 < (this->LineModels).ArrayNum) {
        uVar17 = ~uVar21 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar23 = (FLineModel *)((this->LineModels).AllocatorInstance.Data + uVar26);
      CalculateLineTextDirection(this,pFVar23);
      if ((pFVar23->DirtyFlags & 4) != 0) {
        TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                 *)&((pFVar23->ShapedTextCache).Object)->CachedShapedText);
        pFVar23->DirtyFlags = pFVar23->DirtyFlags & 0xfb;
      }
      CreateLineWrappingCache(this,pFVar23);
      FlowLineLayout(this,uVar21,fVar28,&local_d8);
      uVar22 = (ulonglong)(uVar21 + 1);
      uVar26 = uVar26 + 0x70;
    } while ((int)(uVar21 + 1) < (this->LineModels).ArrayNum);
  }
  DestructItems<TSharedRef<ILayoutBlock,1>,int>
            ((TSharedRef<ILayoutBlock,1> *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((TSharedRef<ILayoutBlock,1> *)local_d8.AllocatorInstance.Data !=
      (TSharedRef<ILayoutBlock,1> *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  JustifyLayout(this);
  fVar28 = (this->Margin).Left;
  fVar2 = (this->Margin).Top;
  fVar3 = this->Scale;
  fVar4 = (this->Margin).Bottom;
  fVar29 = (fVar28 + (this->Margin).Right) * fVar3;
  (this->TextLayoutSize).DrawWidth = fVar29 + (this->TextLayoutSize).DrawWidth;
  (this->TextLayoutSize).WrappedWidth = fVar29 + (this->TextLayoutSize).WrappedWidth;
  (this->TextLayoutSize).Height = (fVar2 + fVar4) * fVar3 + (this->TextLayoutSize).Height;
  iVar5 = (this->LineViews).ArrayNum;
  FVar27 = (FName)(this->LineViews).AllocatorInstance.Data;
  dVar10 = (double)fVar28 * (double)fVar3;
  dVar11 = (double)fVar2 * (double)fVar3;
  local_e8 = (FName)((longlong)iVar5 * 0x68 + (longlong)FVar27);
  while( true ) {
    FVar14 = local_e8;
    if ((this->LineViews).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FTextLayout::FLineView,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar27 == FVar14) break;
    *(double *)((longlong)FVar27 + 0x30) = dVar10 + *(double *)((longlong)FVar27 + 0x30);
    *(double *)((longlong)FVar27 + 0x38) = dVar11 + *(double *)((longlong)FVar27 + 0x38);
    iVar6 = *(int *)((longlong)FVar27 + 8);
    puVar25 = *(undefined8 **)FVar27;
    puVar24 = puVar25 + (longlong)iVar6 * 2;
    while( true ) {
      if (*(int *)((longlong)FVar27 + 8) != iVar6) {
        `TCheckedPointerIterator<TSharedRef<ILayoutBlock,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar25 == puVar24) break;
      plVar7 = (longlong *)*puVar25;
      lVar8 = *plVar7;
      pdVar20 = (double *)(**(code **)(lVar8 + 0x38))(plVar7,local_80);
      local_90 = dVar11 + pdVar20[1];
      local_98 = dVar10 + *pdVar20;
      (**(code **)(lVar8 + 0x30))(plVar7,&local_98);
      puVar25 = puVar25 + 2;
    }
    FVar27 = (FName)((longlong)FVar27 + 0x68);
  }
  (**(code **)(this->_padding_ + 0x28))(this);
  FVar27 = local_c8;
  this->DirtyFlags = this->DirtyFlags & 0xfe;
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar15) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

