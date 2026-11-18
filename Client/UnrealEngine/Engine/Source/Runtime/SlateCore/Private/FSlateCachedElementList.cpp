// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// ~FSlateCachedElementList @ 1424ec990

void __thiscall FSlateCachedElementList::~FSlateCachedElementList(FSlateCachedElementList *this)

{
  FScriptContainerElement *pFVar1;
  
  DestroyCachedData(this);
  pFVar1 = (this->CachedRenderBatchIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
              *)this);
  return;
}

// AddCachedClipState @ 1424fc8d0

void __thiscall
FSlateCachedElementList::AddCachedClipState
          (FSlateCachedElementList *this,FSlateCachedClipState *param_1)

{
  ForElementType<FSlateCachedClipState> FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSlateCachedClipState> FVar6;
  undefined8 *puVar7;
  
  FVar1 = (ForElementType<FSlateCachedClipState>)this->CachedRenderingData;
  FVar6 = *(ForElementType<FSlateCachedClipState> *)((longlong)FVar1 + 0x10);
  if (*(ForElementType<FSlateCachedClipState> *)((longlong)FVar1 + 0x10) ==
      (ForElementType<FSlateCachedClipState>)0x0) {
    FVar6 = FVar1;
  }
  if (((ulonglong)FVar6 <= param_1) &&
     (param_1 < (FSlateCachedClipState *)
                ((longlong)*(int *)((longlong)FVar1 + 0x1c) * 0x10 + (longlong)FVar6))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)FVar1 + 0x18);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x1c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>_>
                      (0x810,(ForElementType<FSlateCachedClipState> *)FVar1,
                       (int *)((longlong)FVar1 + 0x1c));
  }
  *(int *)((longlong)FVar1 + 0x18) = iVar5 + 1;
  FVar6 = *(ForElementType<FSlateCachedClipState> *)((longlong)FVar1 + 0x10);
  if (*(ForElementType<FSlateCachedClipState> *)((longlong)FVar1 + 0x10) ==
      (ForElementType<FSlateCachedClipState>)0x0) {
    FVar6 = FVar1;
  }
  puVar7 = (undefined8 *)((longlong)FVar6 + (longlong)iVar5 * 0x10);
  *puVar7 = (param_1->ClippingState).Object;
  pTVar2 = (param_1->ClippingState).SharedReferenceCount.ReferenceController;
  puVar7[1] = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// AddReferencedObjects @ 1424ffd00

void __thiscall
FSlateCachedElementList::AddReferencedObjects
          (FSlateCachedElementList *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&(this->DrawElements).field_0x40;
  lVar2 = *(longlong *)&(this->DrawElements).field_0x30;
  lVar3 = (longlong)iVar1 * 200 + lVar2;
  while( true ) {
    if (*(int *)&(this->DrawElements).field_0x40 != iVar1) {
      `TCheckedPointerIterator<FSlateTextElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar2 == lVar3) break;
    FSlateFontInfo::AddReferencedObjects((FSlateFontInfo *)(lVar2 + 0x58),param_1);
    lVar2 = lVar2 + 200;
  }
  iVar1 = *(int *)&(this->DrawElements).field_0x58;
  lVar2 = *(longlong *)&(this->DrawElements).field_0x48;
  lVar3 = (longlong)iVar1 * 0x90 + lVar2;
  while( true ) {
    if (*(int *)&(this->DrawElements).field_0x58 != iVar1) {
      `TCheckedPointerIterator<FSlateShapedTextElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar2 == lVar3) break;
    if (*(FShapedGlyphSequence **)(lVar2 + 0x58) != (FShapedGlyphSequence *)0x0) {
      FShapedGlyphSequence::AddReferencedObjects(*(FShapedGlyphSequence **)(lVar2 + 0x58),param_1);
    }
    if (*(FShapedGlyphSequence **)(lVar2 + 0x78) != (FShapedGlyphSequence *)0x0) {
      FShapedGlyphSequence::AddReferencedObjects(*(FShapedGlyphSequence **)(lVar2 + 0x78),param_1);
    }
    lVar2 = lVar2 + 0x90;
  }
  return;
}

// AddRenderBatch @ 142500130

FSlateRenderBatch * __thiscall
FSlateCachedElementList::AddRenderBatch
          (FSlateCachedElementList *this,int param_1,FShaderParams *param_2,
          FSlateShaderResource *param_3,ESlateDrawPrimitive param_4,ESlateShader param_5,
          ESlateDrawEffect param_6,ESlateBatchDrawFlag param_7,schar param_8)

{
  undefined1 *puVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FSlateCachedFastPathRenderingData *pFVar4;
  FSlateCachedElementData *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  FSlateRenderBatch *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  int local_e8 [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FSlateShaderResource *local_98;
  undefined8 uStack_90;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *local_88;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTStack_80;
  undefined8 local_78;
  int iStack_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ESlateBatchDrawFlag EStack_50;
  ESlateShader EStack_4e;
  ESlateDrawPrimitive EStack_4d;
  ESlateDrawEffect EStack_4c;
  undefined1 uStack_4b;
  schar sStack_4a;
  byte bStack_49;
  
  pFVar4 = this->CachedRenderingData;
  uVar8 = *(undefined8 *)&(param_2->PixelParams).field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&(param_2->PixelParams).field0_0x0 + 8);
  uVar10 = *(undefined8 *)&(param_2->PixelParams2).field0_0x0;
  uVar11 = *(undefined8 *)((longlong)&(param_2->PixelParams2).field0_0x0 + 8);
  local_88 = &pFVar4->Vertices;
  uVar12 = *(undefined8 *)&(param_2->PixelParams3).field0_0x0;
  uVar13 = *(undefined8 *)((longlong)&(param_2->PixelParams3).field0_0x0 + 8);
  pTStack_80 = &pFVar4->Indices;
  iStack_6c = (pFVar4->Vertices).ArrayNum;
  local_68 = (pFVar4->Indices).ArrayNum;
  EStack_50 = param_7;
  EStack_4e = param_5;
  EStack_4d = param_4;
  EStack_4c = param_6;
  sStack_4a = param_8;
  bStack_49 = bStack_49 & 0xfd | 1;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0xffffffff;
  local_58 = 0;
  uStack_4b = 0;
  local_d8 = uVar8;
  uStack_d0 = uVar9;
  local_c8 = uVar10;
  uStack_c0 = uVar11;
  local_b8 = uVar12;
  uStack_b0 = uVar13;
  local_98 = param_3;
  iStack_70 = param_1;
  if ((param_3 != (FSlateShaderResource *)0x0) && (param_3->DestroyState != '!')) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ShaderResource == nullptr || !ShaderResource->Debug_IsDestroyed()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderBatch.cpp"
                        ,0x2f,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pFVar17 = (FSlateRenderBatch *)(*pcVar7)();
      return pFVar17;
    }
  }
  pFVar5 = this->ParentData;
  if (*(int *)&(pFVar5->CachedBatches).field_0x34 == 0) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x90,0x10,1,(ForAnyElementType *)pFVar5,
                        (int *)&(pFVar5->CachedBatches).field_0x8,
                        (int *)&(pFVar5->CachedBatches).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar5->CachedBatches).field_0x10,true);
    pFVar19 = *(FScriptContainerElement **)&pFVar5->CachedBatches;
  }
  else {
    iVar15 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit
                       ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar5->CachedBatches).field_0x10,
                        0);
    pFVar19 = *(FScriptContainerElement **)&pFVar5->CachedBatches;
    lVar18 = (longlong)iVar15 * 0x90;
    if (*(int *)&(pFVar5->CachedBatches).field_0x30 == iVar15) {
      *(undefined4 *)&(pFVar5->CachedBatches).field_0x30 = *(undefined4 *)(pFVar19 + lVar18 + 4);
    }
    if (-1 < *(int *)(pFVar19 + lVar18 + 4)) {
      *(undefined4 *)(pFVar19 + (longlong)*(int *)(pFVar19 + lVar18 + 4) * 0x90) =
           *(undefined4 *)(pFVar19 + lVar18);
    }
    if (-1 < *(int *)(pFVar19 + lVar18)) {
      *(undefined4 *)(pFVar19 + (longlong)*(int *)(pFVar19 + lVar18) * 0x90 + 4) =
           *(undefined4 *)(pFVar19 + lVar18 + 4);
    }
    puVar1 = &(pFVar5->CachedBatches).field_0x34;
    *(int *)puVar1 = *(int *)puVar1 + -1;
  }
  pFVar19 = pFVar19 + (longlong)iVar15 * 0x90;
  if (pFVar19 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)pFVar19 = uVar8;
    *(undefined8 *)(pFVar19 + 8) = uVar9;
    *(undefined8 *)(pFVar19 + 0x10) = uVar10;
    *(undefined8 *)(pFVar19 + 0x18) = uVar11;
    *(undefined8 *)(pFVar19 + 0x20) = uVar12;
    *(undefined8 *)(pFVar19 + 0x28) = uVar13;
    *(undefined8 *)(pFVar19 + 0x30) = local_a8;
    *(undefined8 *)(pFVar19 + 0x38) = uStack_a0;
    *(FSlateShaderResource **)(pFVar19 + 0x40) = local_98;
    *(undefined8 *)(pFVar19 + 0x48) = uStack_90;
    *(TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> **)
     (pFVar19 + 0x50) = local_88;
    *(TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> **)
     (pFVar19 + 0x58) = pTStack_80;
    *(undefined8 *)(pFVar19 + 0x60) = local_78;
    *(ulonglong *)(pFVar19 + 0x68) = CONCAT44(iStack_6c,iStack_70);
    *(ulonglong *)(pFVar19 + 0x70) = CONCAT44(uStack_64,local_68);
    *(ulonglong *)(pFVar19 + 0x78) = CONCAT44(uStack_5c,uStack_60);
    *(undefined8 *)(pFVar19 + 0x80) = local_58;
    *(ulonglong *)(pFVar19 + 0x88) =
         CONCAT17(bStack_49,
                  CONCAT16(sStack_4a,
                           CONCAT15(uStack_4b,
                                    CONCAT14(EStack_4c,
                                             CONCAT13(EStack_4d,CONCAT12(EStack_4e,EStack_50))))));
  }
  pFVar19 = *(FScriptContainerElement **)&pFVar5->CachedBatches;
  local_e8[0] = iVar15;
  if (iVar15 == -1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("RenderBatchIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                        ,0x217,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pFVar17 = (FSlateRenderBatch *)(*pcVar7)();
      return pFVar17;
    }
  }
  pTVar3 = &this->CachedRenderBatchIndices;
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)local_e8) &&
     ((FScriptContainerElement *)local_e8 <
      pFVar6 + (longlong)(this->CachedRenderBatchIndices).ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pFVar17 = (FSlateRenderBatch *)(*pcVar7)();
      return pFVar17;
    }
  }
  iVar16 = (this->CachedRenderBatchIndices).ArrayNum;
  piVar2 = &(this->CachedRenderBatchIndices).ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->CachedRenderBatchIndices).ArrayNum = iVar16 + 1;
  *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_e8[0];
  return (FSlateRenderBatch *)(pFVar19 + (longlong)iVar15 * 0x90);
}

// ClearCachedElements @ 142504120

void __thiscall FSlateCachedElementList::ClearCachedElements(FSlateCachedElementList *this)

{
  FSlateCachedFastPathRenderingData *pFVar1;
  
  DestroyCachedData(this);
  pFVar1 = ::operator_new(0x50);
  if (pFVar1 != (FSlateCachedFastPathRenderingData *)0x0) {
    (pFVar1->CachedClipStates).AllocatorInstance.SecondaryData =
         (ForElementType<FSlateCachedClipState>)0x0;
    (pFVar1->CachedClipStates).ArrayNum = 0;
    (pFVar1->CachedClipStates).ArrayMax = 1;
    (pFVar1->Vertices).AllocatorInstance._padding_ = 0;
    (pFVar1->Vertices).AllocatorInstance.AllocatedSize = 0;
    (pFVar1->Vertices).ArrayNum = 0;
    (pFVar1->Vertices).ArrayMax = 0;
    (pFVar1->Indices).AllocatorInstance._padding_ = 0;
    (pFVar1->Indices).AllocatorInstance.AllocatedSize = 0;
    (pFVar1->Indices).ArrayNum = 0;
    (pFVar1->Indices).ArrayMax = 0;
    this->CachedRenderingData = pFVar1;
    return;
  }
  this->CachedRenderingData = (FSlateCachedFastPathRenderingData *)0x0;
  return;
}

// DestroyCachedData @ 142507440

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateCachedElementList::DestroyCachedData(FSlateCachedElementList *this)

{
  int *piVar1;
  FSlateRenderer *pFVar2;
  code *pcVar3;
  bool bVar4;
  <lambda_1> local_res8 [8];
  
  UE::Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
  Do<_FSlateCachedElementList::DestroyCachedData_::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
            (local_res8,&this->DrawElements);
  if ((this->CachedRenderBatchIndices).ArrayNum != 0) {
    FSlateCachedElementData::RemoveCachedRenderBatches
              (this->ParentData,&this->CachedRenderBatchIndices);
    piVar1 = &(this->CachedRenderBatchIndices).ArrayMax;
    (this->CachedRenderBatchIndices).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CachedRenderBatchIndices).AllocatorInstance,0,piVar1);
    }
  }
  if (this->CachedRenderingData != (FSlateCachedFastPathRenderingData *)0x0) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      FSlateCachedFastPathRenderingData::_scalar_deleting_destructor_(this->CachedRenderingData,1);
    }
    else {
      if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBaseApplication.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                           ,0x22a,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->Renderer).Object;
      if (pFVar2 != (FSlateRenderer *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x188))(pFVar2,this->CachedRenderingData);
      }
    }
    this->CachedRenderingData = (FSlateCachedFastPathRenderingData *)0x0;
  }
  return;
}

// IsEmpty @ 142511120

bool __thiscall FSlateCachedElementList::IsEmpty(FSlateCachedElementList *this)

{
  bool local_res8 [8];
  <lambda_1> local_res10 [3];
  
  local_res10[0].bElementsFound = local_res8;
  local_res8[0] = false;
  UE::Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
  Do<_FSlateCachedElementList::IsEmpty_::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
            (local_res10,&this->DrawElements);
  return local_res8[0] == false;
}

// NumElements @ 1425176d0

int __thiscall FSlateCachedElementList::NumElements(FSlateCachedElementList *this)

{
  return *(int *)&(this->DrawElements).field_0x148 + *(int *)&(this->DrawElements).field_0x130 +
         *(int *)&(this->DrawElements).field_0x118 + *(int *)&(this->DrawElements).field_0x100 +
         *(int *)&(this->DrawElements).field_0xe8 + *(int *)&(this->DrawElements).field_0xd0 +
         *(int *)&(this->DrawElements).field_0xb8 + *(int *)&(this->DrawElements).field_0xa0 +
         *(int *)&(this->DrawElements).field_0x88 + *(int *)&(this->DrawElements).field_0x70 +
         *(int *)&(this->DrawElements).field_0x58 + *(int *)&(this->DrawElements).field_0x40 +
         *(int *)&(this->DrawElements).field_0x28 + *(int *)&(this->DrawElements).field_0x10;
}

