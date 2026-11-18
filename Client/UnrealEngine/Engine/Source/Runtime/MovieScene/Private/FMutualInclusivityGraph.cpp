// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 12

// ~FMutualInclusivityGraph @ 14611df10

void __thiscall
UE::MovieScene::FMutualInclusivityGraph::~FMutualInclusivityGraph(FMutualInclusivityGraph *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CommandBuffer).Commands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ComplexIncludes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ComplexIncludes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComplexIncludes);
  *(undefined4 *)&(this->SimpleIncludes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SimpleIncludes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 1462018e0

void __thiscall
`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_5>::operator()
          (void *this,EMutuallyInclusiveComponentType param_1)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int local_res10;
  
  if (param_1 != **(EMutuallyInclusiveComponentType **)((longlong)this + 0x10)) {
    uVar2 = **(uint **)((longlong)this + 8);
    if (uVar2 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      uVar1 = *(undefined2 *)(lVar3 + 0xa8);
      uVar6 = 0;
      if ((int)uVar2 < *(int *)(lVar3 + 0xa8)) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(undefined2 *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar2 * 0x10) = uVar1;
    }
    **(undefined4 **)((longlong)this + 8) = *(undefined4 *)(*(longlong *)this + 0xa8);
    lVar3 = *(longlong *)this;
    local_res10 = (uint)CONCAT11((char)((uint)local_res10 >> 0x18),param_1) << 0x10;
    iVar7 = *(int *)(lVar3 + 0xa8);
    if (iVar7 == *(int *)(lVar3 + 0xac)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(lVar3 + 0xa0),(int *)(lVar3 + 0xac));
    }
    *(int *)(lVar3 + 0xa8) = iVar7 + 1;
    piVar8 = (int *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar3 + 0xa0));
    *piVar8 = local_res10;
    piVar8[2] = 1;
    **(EMutuallyInclusiveComponentType **)((longlong)this + 0x10) = param_1;
  }
  return;
}

// operator() @ 146201a10

void __thiscall
`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_6>::operator()
          (void *this,FComponentTypeID param_1,FIncludes *param_2,
          EMutuallyInclusiveComponentType param_3)

{
  longlong lVar1;
  ForElementType<UE::MovieScene::FComponentTypeID> FVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  ForAnyElementType *pFVar12;
  ForElementType<UE::MovieScene::FComponentTypeID> FVar13;
  FScriptContainerElement *pFVar14;
  undefined4 local_res8;
  undefined1 local_res18 [8];
  undefined2 local_48;
  undefined6 uStack_46;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  __l2::<lambda_5>::operator()(*(void **)((longlong)this + 8),param_3);
  iVar7 = (param_2->Includes).ArrayNum;
  iVar9 = (param_2->Initializers).ArrayNum;
  lVar1 = *(longlong *)this;
  if ((iVar7 == 1) && (iVar9 == 0)) {
    FVar2 = (param_2->Includes).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
      param_2 = (FIncludes *)FVar2;
    }
    local_res8 = CONCAT22(*(undefined2 *)param_2,param_1.Value);
    iVar7 = *(int *)(lVar1 + 0xa8);
    if (iVar7 == *(int *)(lVar1 + 0xac)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(lVar1 + 0xa0),(int *)(lVar1 + 0xac));
    }
    *(int *)(lVar1 + 0xa8) = iVar7 + 1;
    puVar10 = (undefined4 *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar1 + 0xa0));
    *puVar10 = local_res8;
    puVar10[2] = 0;
    return;
  }
  iVar8 = *(int *)(lVar1 + 0xa8);
  local_res8 = CONCAT22((short)iVar9 + 1 + *(short *)(lVar1 + 0xa8) + (short)iVar7,param_1.Value);
  if (iVar8 == *(int *)(lVar1 + 0xac)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar1 + 0xa0),(int *)(lVar1 + 0xac));
  }
  *(int *)(lVar1 + 0xa8) = iVar8 + 1;
  puVar11 = (uint *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 0xa0));
  *puVar11 = local_res8;
  puVar11[2] = 3;
  FVar2 = (param_2->Includes).AllocatorInstance.SecondaryData;
  iVar7 = (param_2->Includes).ArrayNum;
  FVar13 = (ForElementType<UE::MovieScene::FComponentTypeID>)param_2;
  if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FVar13 = FVar2;
  }
  FVar2 = (ForElementType<UE::MovieScene::FComponentTypeID>)((longlong)FVar13 + (longlong)iVar7 * 2)
  ;
  while( true ) {
    if ((param_2->Includes).ArrayNum != iVar7) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (FVar13 == FVar2) break;
    local_48 = *(undefined2 *)FVar13;
    lVar1 = *(longlong *)this;
    pFVar12 = (ForAnyElementType *)(lVar1 + 0xa0);
    uStack_40 = 5;
    if (((pFVar12->Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar12->Data + (longlong)*(int *)(lVar1 + 0xac) * 0x10)) &&
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
    iVar9 = *(int *)(lVar1 + 0xa8);
    if (iVar9 == *(int *)(lVar1 + 0xac)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar12,(int *)(lVar1 + 0xac));
    }
    *(int *)(lVar1 + 0xa8) = iVar9 + 1;
    pFVar3 = pFVar12->Data;
    FVar13 = (ForElementType<UE::MovieScene::FComponentTypeID>)((longlong)FVar13 + 2);
    *(ulonglong *)(pFVar3 + (longlong)iVar9 * 0x10) = CONCAT62(uStack_46,local_48);
    *(ulonglong *)(pFVar3 + (longlong)iVar9 * 0x10 + 8) = CONCAT44(uStack_3c,uStack_40);
  }
  pFVar14 = (param_2->Initializers).AllocatorInstance.Data;
  iVar7 = (param_2->Initializers).ArrayNum;
  pFVar3 = pFVar14 + (longlong)iVar7 * 8;
  while( true ) {
    if ((param_2->Initializers).ArrayNum != iVar7) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar14 == pFVar3) break;
    local_38 = *(undefined8 *)pFVar14;
    lVar1 = *(longlong *)this;
    pFVar12 = (ForAnyElementType *)(lVar1 + 0xa0);
    uStack_30 = 6;
    if (((pFVar12->Data <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar12->Data + (longlong)*(int *)(lVar1 + 0xac) * 0x10)) &&
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
    iVar9 = *(int *)(lVar1 + 0xa8);
    if (iVar9 == *(int *)(lVar1 + 0xac)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar12,(int *)(lVar1 + 0xac));
    }
    *(int *)(lVar1 + 0xa8) = iVar9 + 1;
    pFVar4 = pFVar12->Data;
    pFVar14 = pFVar14 + 8;
    *(undefined8 *)(pFVar4 + (longlong)iVar9 * 0x10) = local_38;
    *(ulonglong *)(pFVar4 + (longlong)iVar9 * 0x10 + 8) = CONCAT44(uStack_2c,uStack_30);
  }
  return;
}

// operator() @ 146201d60

void __thiscall
`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_8>::operator()
          (void *this,FComplexInclusivityFilter *param_1,FIncludes *param_2,
          EMutuallyInclusiveComponentType param_3)

{
  uint uVar1;
  EComplexInclusivityFilterMode EVar2;
  longlong lVar3;
  ForElementType<UE::MovieScene::FComponentTypeID> FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 *puVar14;
  short sVar15;
  int iVar16;
  ForAnyElementType *pFVar17;
  ForElementType<UE::MovieScene::FComponentTypeID> FVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  short sVar21;
  uint uVar22;
  short sVar23;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined4 local_b6;
  short local_b2;
  int *local_b0;
  TConstSetBitIterator<TFixedAllocator<12>_> local_a8;
  TConstSetBitIterator<TFixedAllocator<12>_> local_88;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  
  __l2::<lambda_5>::operator()(*(void **)((longlong)this + 8),param_3);
  uVar20 = (param_1->Mask).Bits.NumBits;
  sVar23 = 0;
  sVar21 = 0;
  uVar22 = 0;
  iVar10 = uVar20 + 0x1f;
  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
  uVar20 = uVar20 & 0x8000001f;
  if ((int)uVar20 < 0) {
    uVar20 = (uVar20 - 1 | 0xffffffe0) + 1;
  }
  uVar13 = 0xffffffff >> ((byte)(0x20 - uVar20) & 0x1f);
  if (0x1f < (int)(0x20 - uVar20)) {
    uVar13 = 0xffffffff;
  }
  uVar20 = 0xffffffff;
  if (iVar10 == 1) {
    uVar20 = uVar13;
  }
  if (0 < iVar10) {
    do {
      uVar1 = *(uint *)(param_1->Mask).Bits.AllocatorInstance.InlineData[uVar22].Pad;
      uVar8 = uVar1 & uVar20;
      if (uVar20 == 0xffffffff) {
        uVar8 = uVar1;
      }
      uVar22 = uVar22 + 1;
      uVar12 = (ulonglong)uVar8 - ((ulonglong)(uVar8 >> 1) & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      sVar21 = sVar23 + (ushort)(byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
      uVar20 = 0xffffffff;
      if (uVar22 == iVar10 - 1U) {
        uVar20 = uVar13;
      }
      sVar23 = sVar21;
    } while ((int)uVar22 < iVar10);
  }
  local_b0 = &(param_2->Includes).ArrayNum;
  sVar23 = (short)(param_2->Initializers).ArrayNum;
  sVar15 = *(short *)(*(longlong *)this + 0xa8);
  iVar10 = *local_b0;
  if (param_1->Mode == AnyOf) {
    sVar15 = sVar15 + sVar21 + 1;
    sVar23 = sVar23 + sVar15 + (short)iVar10;
    local_b2 = sVar23;
    UE::MovieScene::FComponentMask::Iterate(&param_1->Mask,&local_a8);
    if (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits) {
      local_b6 = CONCAT22(sVar15,(undefined2)local_b6);
      iVar10 = local_a8.BaseBitIndex;
      iVar16 = (int)local_a8._padding_;
      do {
        iVar11 = local_a8.CurrentBitIndex;
        uVar20 = local_a8.UnvisitedBitMask;
        if (((local_a8.CurrentBitIndex & 0xffff0000U) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(BitIndex & 0xFFFF0000) == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                               ,0xba,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar3 = *(longlong *)this;
        local_b6 = CONCAT22(local_b6._2_2_,(short)iVar11);
        iVar11 = *(int *)(lVar3 + 0xa8);
        if (iVar11 == *(int *)(lVar3 + 0xac)) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)(lVar3 + 0xa0),(int *)(lVar3 + 0xac));
        }
        *(int *)(lVar3 + 0xa8) = iVar11 + 1;
        puVar14 = (undefined4 *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar3 + 0xa0));
        EVar2 = param_1->Mode;
        *puVar14 = local_b6;
        puVar14[2] = 3 - (uint)(EVar2 != AllOf);
        uVar22 = (local_a8.Array)->NumBits;
        local_a8.UnvisitedBitMask = uVar20 & ~local_a8._padding_._4_4_;
        uVar20 = local_a8.UnvisitedBitMask &
                 *(uint *)((local_a8.Array)->AllocatorInstance).InlineData[iVar16].Pad;
        while (uVar20 == 0) {
          iVar16 = iVar16 + 1;
          iVar10 = iVar10 + 0x20;
          local_a8.CurrentBitIndex = uVar22;
          local_a8._padding_._0_4_ = iVar16;
          local_a8.BaseBitIndex = iVar10;
          if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar16)
          goto LAB_146202011;
          local_a8.UnvisitedBitMask = 0xffffffff;
          uVar20 = *(uint *)((local_a8.Array)->AllocatorInstance).InlineData[iVar16].Pad;
        }
        local_a8._padding_._4_4_ = -uVar20 & uVar20;
        uVar12 = (ulonglong)local_a8._padding_._4_4_ * 2 + 1;
        lVar3 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_48 = (int)lVar3;
        local_a8.CurrentBitIndex = local_48 + -1 + iVar10;
        if ((int)uVar22 < local_a8.CurrentBitIndex) {
          local_a8.CurrentBitIndex = uVar22;
        }
LAB_146202011:
        sVar23 = local_b2;
      } while (local_a8.CurrentBitIndex < (int)uVar22);
    }
    lVar3 = *(longlong *)this;
    iVar10 = *(int *)(lVar3 + 0xa8);
    if (iVar10 == *(int *)(lVar3 + 0xac)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)(lVar3 + 0xa0),(int *)(lVar3 + 0xac));
    }
    *(int *)(lVar3 + 0xa8) = iVar10 + 1;
    lVar3 = *(longlong *)(lVar3 + 0xa0);
    *(short *)(lVar3 + (longlong)iVar10 * 0x10) = sVar23;
    *(undefined4 *)(lVar3 + 8 + (longlong)iVar10 * 0x10) = 4;
  }
  else {
    UE::MovieScene::FComponentMask::Iterate(&param_1->Mask,&local_88);
    if (local_88.CurrentBitIndex < (local_88.Array)->NumBits) {
      local_b6 = CONCAT22(sVar23 + sVar15 + sVar21 + (short)iVar10,(undefined2)local_b6);
      iVar10 = local_88.BaseBitIndex;
      iVar16 = (int)local_88._padding_;
      do {
        iVar11 = local_88.CurrentBitIndex;
        uVar20 = local_88.UnvisitedBitMask;
        if (((local_88.CurrentBitIndex & 0xffff0000U) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(BitIndex & 0xFFFF0000) == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                               ,0xba,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar3 = *(longlong *)this;
        local_b6 = CONCAT22(local_b6._2_2_,(short)iVar11);
        iVar11 = *(int *)(lVar3 + 0xa8);
        if (iVar11 == *(int *)(lVar3 + 0xac)) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)(lVar3 + 0xa0),(int *)(lVar3 + 0xac));
        }
        *(int *)(lVar3 + 0xa8) = iVar11 + 1;
        puVar14 = (undefined4 *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar3 + 0xa0));
        EVar2 = param_1->Mode;
        *puVar14 = local_b6;
        puVar14[2] = 3 - (uint)(EVar2 != AllOf);
        uVar22 = (local_88.Array)->NumBits;
        local_88.UnvisitedBitMask = uVar20 & ~local_88._padding_._4_4_;
        uVar20 = local_88.UnvisitedBitMask &
                 *(uint *)((local_88.Array)->AllocatorInstance).InlineData[iVar16].Pad;
        while (uVar20 == 0) {
          iVar16 = iVar16 + 1;
          iVar10 = iVar10 + 0x20;
          local_88.CurrentBitIndex = uVar22;
          local_88._padding_._0_4_ = iVar16;
          local_88.BaseBitIndex = iVar10;
          if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar16)
          goto LAB_1462021cd;
          local_88.UnvisitedBitMask = 0xffffffff;
          uVar20 = *(uint *)((local_88.Array)->AllocatorInstance).InlineData[iVar16].Pad;
        }
        local_88._padding_._4_4_ = -uVar20 & uVar20;
        uVar12 = (ulonglong)local_88._padding_._4_4_ * 2 + 1;
        lVar3 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_44 = (int)lVar3;
        local_88.CurrentBitIndex = local_44 + -1 + iVar10;
        if ((int)uVar22 < local_88.CurrentBitIndex) {
          local_88.CurrentBitIndex = uVar22;
        }
LAB_1462021cd:
      } while (local_88.CurrentBitIndex < (int)uVar22);
    }
  }
  FVar4 = (param_2->Includes).AllocatorInstance.SecondaryData;
  iVar10 = *local_b0;
  FVar18 = (ForElementType<UE::MovieScene::FComponentTypeID>)param_2;
  if (FVar4 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FVar18 = FVar4;
  }
  FVar4 = (ForElementType<UE::MovieScene::FComponentTypeID>)
          ((longlong)FVar18 + (longlong)iVar10 * 2);
  while( true ) {
    if (*local_b0 != iVar10) {
      local_b8 = 0;
      `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_b8);
    }
    if (FVar18 == FVar4) break;
    local_68 = *(undefined2 *)FVar18;
    lVar3 = *(longlong *)this;
    pFVar17 = (ForAnyElementType *)(lVar3 + 0xa0);
    uStack_60 = 5;
    if (((pFVar17->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar17->Data + (longlong)*(int *)(lVar3 + 0xac) * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar16 = *(int *)(lVar3 + 0xa8);
    if (iVar16 == *(int *)(lVar3 + 0xac)) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,pFVar17,(int *)(lVar3 + 0xac));
    }
    *(int *)(lVar3 + 0xa8) = iVar16 + 1;
    pFVar5 = pFVar17->Data;
    FVar18 = (ForElementType<UE::MovieScene::FComponentTypeID>)((longlong)FVar18 + 2);
    *(ulonglong *)(pFVar5 + (longlong)iVar16 * 0x10) = CONCAT62(uStack_66,local_68);
    *(ulonglong *)(pFVar5 + (longlong)iVar16 * 0x10 + 8) = CONCAT44(uStack_5c,uStack_60);
  }
  pFVar19 = (param_2->Initializers).AllocatorInstance.Data;
  iVar10 = (param_2->Initializers).ArrayNum;
  pFVar5 = pFVar19 + (longlong)iVar10 * 8;
  while( true ) {
    if ((param_2->Initializers).ArrayNum != iVar10) {
      local_b7 = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_b7);
    }
    if (pFVar19 == pFVar5) break;
    local_58 = *(undefined8 *)pFVar19;
    lVar3 = *(longlong *)this;
    pFVar17 = (ForAnyElementType *)(lVar3 + 0xa0);
    uStack_50 = 6;
    if (((pFVar17->Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar17->Data + (longlong)*(int *)(lVar3 + 0xac) * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar16 = *(int *)(lVar3 + 0xa8);
    if (iVar16 == *(int *)(lVar3 + 0xac)) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,pFVar17,(int *)(lVar3 + 0xac));
    }
    *(int *)(lVar3 + 0xa8) = iVar16 + 1;
    pFVar6 = pFVar17->Data;
    pFVar19 = pFVar19 + 8;
    *(undefined8 *)(pFVar6 + (longlong)iVar16 * 0x10) = local_58;
    *(ulonglong *)(pFVar6 + (longlong)iVar16 * 0x10 + 8) = CONCAT44(uStack_4c,uStack_50);
  }
  return;
}

// ComputeMutuallyInclusiveComponents @ 14620ba00

int __thiscall
UE::MovieScene::FMutualInclusivityGraph::ComputeMutuallyInclusiveComponents
          (FMutualInclusivityGraph *this,EMutuallyInclusiveComponentType param_1,
          FComponentMask *param_2,FComponentMask *param_3,FMutualComponentInitializers *param_4)

{
  int iVar1;
  
  if (this->bCommandBufferInvalidated != false) {
    ReconstructCommandBuffer(this);
  }
  iVar1 = FMutualInclusivityGraphCommandBuffer::ComputeMutuallyInclusiveComponents
                    (&this->CommandBuffer,param_1,param_2,param_3,param_4);
  return iVar1;
}

// DefineComplexInclusionRule @ 14620e100

void __thiscall
UE::MovieScene::FMutualInclusivityGraph::DefineComplexInclusionRule
          (FMutualInclusivityGraph *this,FComplexInclusivityFilter *param_1,
          initializer_list<UE::MovieScene::FComponentTypeID> *param_2,
          FMutuallyInclusiveComponentParams *param_3)

{
  int *piVar1;
  FComponentTypeID *pFVar2;
  uint uVar3;
  int iVar4;
  FIncludePair *this_00;
  FComponentTypeID *pFVar5;
  FComponentTypeID local_res8 [4];
  
  this->bCommandBufferInvalidated = true;
  uVar3 = MovieScene::GetTypeHash(param_1);
  this_00 = TMapBase<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
            ::FindOrAddImpl<UE::MovieScene::FComplexInclusivityFilter_const_&>
                      ((TMapBase<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
                        *)&this->ComplexIncludes,uVar3,param_1);
  if (param_3->Type != Mandatory) {
    this_00 = (FIncludePair *)&this_00->OptionalIncludes;
  }
  pFVar2 = param_2->_Last;
  for (pFVar5 = param_2->_First; pFVar5 != pFVar2; pFVar5 = pFVar5 + 1) {
    local_res8[0].Value = pFVar5->Value;
    TArray<UE::MovieScene::FComponentTypeID,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
    ::AddUniqueImpl<UE::MovieScene::FComponentTypeID_const_&>
              ((TArray<UE::MovieScene::FComponentTypeID,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)this_00,local_res8);
  }
  if ((param_3->CustomInitializer).Ptr != (IMutualComponentInitializer *)0x0) {
    iVar4 = (this_00->MandatoryIncludes).Initializers.ArrayNum;
    piVar1 = &(this_00->MandatoryIncludes).Initializers.ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this_00->MandatoryIncludes).Initializers.AllocatorInstance,piVar1);
    }
    (this_00->MandatoryIncludes).Initializers.ArrayNum = iVar4 + 1;
    *(IMutualComponentInitializer **)
     ((this_00->MandatoryIncludes).Initializers.AllocatorInstance.Data + (longlong)iVar4 * 8) =
         (param_3->CustomInitializer).Ptr;
    (param_3->CustomInitializer).Ptr = (IMutualComponentInitializer *)0x0;
  }
  return;
}

// DefineComplexInclusionRule @ 14620e1e0

void __thiscall
UE::MovieScene::FMutualInclusivityGraph::DefineComplexInclusionRule
          (FMutualInclusivityGraph *this,FComplexInclusivityFilter *param_1,
          initializer_list<UE::MovieScene::FComponentTypeID> *param_2)

{
  FComponentTypeID *pFVar1;
  uint uVar2;
  FIncludePair *pFVar3;
  FComponentTypeID *pFVar4;
  FComponentTypeID local_res8 [4];
  
  this->bCommandBufferInvalidated = true;
  uVar2 = MovieScene::GetTypeHash(param_1);
  pFVar3 = TMapBase<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
           ::FindOrAddImpl<UE::MovieScene::FComplexInclusivityFilter_const_&>
                     ((TMapBase<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
                       *)&this->ComplexIncludes,uVar2,param_1);
  pFVar1 = param_2->_Last;
  for (pFVar4 = param_2->_First; pFVar4 != pFVar1; pFVar4 = pFVar4 + 1) {
    local_res8[0].Value = pFVar4->Value;
    TArray<UE::MovieScene::FComponentTypeID,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
    ::AddUniqueImpl<UE::MovieScene::FComponentTypeID_const_&>
              (&(pFVar3->OptionalIncludes).Includes,local_res8);
  }
  return;
}

// DefineMutualInclusionRule @ 14620e270

void __thiscall
UE::MovieScene::FMutualInclusivityGraph::DefineMutualInclusionRule
          (FMutualInclusivityGraph *this,FComponentTypeID param_1,
          initializer_list<UE::MovieScene::FComponentTypeID> *param_2,
          FMutuallyInclusiveComponentParams *param_3)

{
  int *piVar1;
  FComponentTypeID *pFVar2;
  int iVar3;
  FIncludePair *this_00;
  FComponentTypeID *pFVar4;
  FComponentTypeID local_res8 [4];
  FComponentTypeID local_res10 [4];
  
  this->bCommandBufferInvalidated = true;
  local_res10[0].Value = param_1.Value;
  this_00 = TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
            ::FindOrAddImpl<UE::MovieScene::FComponentTypeID_const_&>
                      ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
                        *)this,(uint)param_1.Value,local_res10);
  if (param_3->Type != Mandatory) {
    this_00 = (FIncludePair *)&this_00->OptionalIncludes;
  }
  pFVar2 = param_2->_Last;
  for (pFVar4 = param_2->_First; pFVar4 != pFVar2; pFVar4 = pFVar4 + 1) {
    local_res8[0].Value = pFVar4->Value;
    TArray<UE::MovieScene::FComponentTypeID,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
    ::AddUniqueImpl<UE::MovieScene::FComponentTypeID_const_&>
              ((TArray<UE::MovieScene::FComponentTypeID,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)this_00,local_res8);
  }
  if ((param_3->CustomInitializer).Ptr != (IMutualComponentInitializer *)0x0) {
    iVar3 = (this_00->MandatoryIncludes).Initializers.ArrayNum;
    piVar1 = &(this_00->MandatoryIncludes).Initializers.ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this_00->MandatoryIncludes).Initializers.AllocatorInstance,piVar1);
    }
    (this_00->MandatoryIncludes).Initializers.ArrayNum = iVar3 + 1;
    *(IMutualComponentInitializer **)
     ((this_00->MandatoryIncludes).Initializers.AllocatorInstance.Data + (longlong)iVar3 * 8) =
         (param_3->CustomInitializer).Ptr;
    (param_3->CustomInitializer).Ptr = (IMutualComponentInitializer *)0x0;
  }
  return;
}

// DefineMutualInclusionRule @ 14620e330

void __thiscall
UE::MovieScene::FMutualInclusivityGraph::DefineMutualInclusionRule
          (FMutualInclusivityGraph *this,FComponentTypeID param_1,
          initializer_list<UE::MovieScene::FComponentTypeID> *param_2)

{
  FComponentTypeID *pFVar1;
  FIncludePair *pFVar2;
  FComponentTypeID *pFVar3;
  FComponentTypeID local_res8 [4];
  FComponentTypeID local_res10 [4];
  
  this->bCommandBufferInvalidated = true;
  local_res10[0].Value = param_1.Value;
  pFVar2 = TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
           ::FindOrAddImpl<UE::MovieScene::FComponentTypeID_const_&>
                     ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
                       *)this,(uint)param_1.Value,local_res10);
  pFVar1 = param_2->_Last;
  for (pFVar3 = param_2->_First; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
    local_res8[0].Value = pFVar3->Value;
    TArray<UE::MovieScene::FComponentTypeID,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
    ::AddUniqueImpl<UE::MovieScene::FComponentTypeID_const_&>
              (&(pFVar2->OptionalIncludes).Includes,local_res8);
  }
  return;
}

// FindPrerequisiteChainLength @ 146212500

int __cdecl
UE::MovieScene::FMutualInclusivityGraph::FindPrerequisiteChainLength
          (FDirectedGraph *param_1,FComponentTypeID param_2,
          TMap<UE::MovieScene::FComponentTypeID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,int,0>_>
          *param_3)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  FDirectionalEdge *pFVar6;
  ushort *puVar7;
  ushort local_res10 [4];
  int local_res18 [4];
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_48;
  ushort *local_38;
  int *local_30;
  
  puVar7 = (ushort *)0x0;
  uVar2 = 0;
  if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
    puVar5 = *(undefined1 **)&param_3->field_0x40;
    if (*(undefined1 **)&param_3->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &param_3->field_0x38;
    }
    iVar1 = *(int *)(puVar5 + ((ulonglong)(*(int *)&param_3->field_0x48 - 1) &
                              (ulonglong)param_2.Value) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (ushort *)((longlong)iVar1 * 0x10 + *(longlong *)param_3);
        if (*puVar4 == param_2.Value) {
          puVar3 = puVar4 + 2;
          if (puVar4 == (ushort *)0x0) {
            puVar3 = puVar7;
          }
          if (puVar3 != (ushort *)0x0) {
            return *(int *)puVar3;
          }
          break;
        }
        iVar1 = *(int *)(puVar4 + 4);
      } while (iVar1 != -1);
    }
  }
  local_res10[0] = param_2.Value;
  FDirectedGraph::GetEdgesFrom(param_1,&local_48,param_2.Value);
  if (local_48.ArrayNum != 0) {
    uVar2 = 0;
    for (pFVar6 = local_48.DataPtr; pFVar6 != local_48.DataPtr + local_48.ArrayNum;
        pFVar6 = pFVar6 + 1) {
      uVar2 = FindPrerequisiteChainLength(param_1,(FComponentTypeID)pFVar6->ToNode,param_3);
      if ((int)uVar2 < (int)(uint)puVar7) {
        uVar2 = (uint)puVar7;
      }
      puVar7 = (ushort *)(ulonglong)uVar2;
    }
  }
  local_38 = local_res10;
  local_30 = local_res18;
  local_res18[0] = uVar2 + 1;
  TSet<TTuple<UE::MovieScene::FComponentTypeID,int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,int_&&>_>
            ((TSet<TTuple<UE::MovieScene::FComponentTypeID,int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,int,0>,FDefaultSetAllocator>
              *)param_3,
             (TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,int_&&> *)(local_res18 + 2),
             (bool *)&local_38);
  return uVar2 + 1;
}

// ReconstructCommandBuffer @ 14622ab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer(FMutualInclusivityGraph *this)

{
  TMap<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
  *pTVar1;
  ushort *puVar2;
  uint *puVar3;
  FComponentTypeID FVar4;
  code *pcVar5;
  FMutualInclusivityGraph *pFVar6;
  TSet<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>,FDefaultSetAllocator>
  *pTVar7;
  ulonglong uVar8;
  bool bVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar10;
  ushort *puVar11;
  int *piVar12;
  byte bVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 *puVar16;
  short *psVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  FScriptContainerElement *_Dst;
  FIncludes *pFVar21;
  uint *puVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  ushort *puVar26;
  ulonglong uVar27;
  uint uVar28;
  ForElementType<unsigned_int> FVar29;
  uint uVar30;
  int iVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  FMutualInclusivityGraph *pFVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  ushort uVar36;
  uint uVar37;
  FComplexInclusivityFilter *pFVar38;
  int iVar39;
  longlong lVar40;
  ForElementType<unsigned_int> FVar41;
  TBitArray<TFixedAllocator<12>_> *pTVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  undefined1 auStackY_5f8 [32];
  <lambda_3> local_5a8 [4];
  uint local_5a4;
  undefined1 local_5a0;
  undefined1 local_59f;
  undefined1 local_59e;
  undefined1 local_59d;
  undefined1 local_59c;
  undefined1 local_59b;
  undefined1 local_59a;
  undefined1 local_599;
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_596 [6];
  ForAnyElementType local_590;
  undefined8 local_588;
  ForAnyElementType local_580;
  int local_578;
  int iStack_574;
  ulonglong local_570;
  FMutualInclusivityGraph *local_568;
  FMutualInclusivityGraph *local_560;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_558;
  undefined8 local_538;
  uint local_530 [2];
  ForElementType<unsigned_int> local_528;
  TTuple<UE::MovieScene::FComponentTypeID,int> local_520;
  TSet<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>,FDefaultSetAllocator>
  *local_518;
  FMutualInclusivityGraph *local_510;
  undefined8 uStack_508;
  ForElementType<unsigned_int> FStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  int local_4e8;
  undefined4 uStack_4e4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e0;
  FMutualInclusivityGraph *local_4c0;
  FMutualInclusivityGraph **local_4b8;
  FMutualInclusivityGraph *local_4b0;
  FMutualInclusivityGraph **local_4a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_480;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_460;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_440;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_420;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_400;
  int local_3e0;
  int local_3dc;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  uint *local_3c8;
  FComponentRegistry *local_3c0;
  undefined8 local_3b8;
  TBitArray<FDefaultBitArrayAllocator> *local_3b0;
  undefined1 local_3a8 [12];
  uint uStack_39c;
  TBitArray<FDefaultBitArrayAllocator> *local_398;
  undefined8 uStack_390;
  longlong local_388;
  int iStack_380;
  undefined4 uStack_37c;
  undefined1 local_378 [12];
  uint uStack_36c;
  TBitArray<FDefaultBitArrayAllocator> *local_368;
  undefined8 uStack_360;
  longlong local_358;
  int iStack_350;
  undefined4 uStack_34c;
  undefined1 local_348 [12];
  uint uStack_33c;
  TBitArray<FDefaultBitArrayAllocator> *local_338;
  undefined8 uStack_330;
  longlong local_328;
  int iStack_320;
  undefined4 uStack_31c;
  undefined1 local_318 [12];
  uint uStack_30c;
  TBitArray<FDefaultBitArrayAllocator> *local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  FMutualInclusivityGraph *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  FMutualInclusivityGraph *local_2b8;
  uint *local_2b0;
  <lambda_3> *local_2a8;
  code *local_2a0;
  FComponentRegistry **local_298;
  FDirectedGraphStringParameters local_290;
  FString local_278;
  TRangedForConstIterator local_268;
  TRangedForConstIterator local_238;
  TRangedForConstIterator local_208;
  TRangedForConstIterator local_1d8;
  undefined4 local_18c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FDirectedGraph local_108;
  undefined1 local_c8 [64];
  undefined1 *local_88;
  int local_80;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  local_108.Nodes.MaxBits = 0x80;
  local_108.Nodes.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SimpleIncludes).field_0x10;
  local_108.Nodes.NumBits = 0;
  local_108.SortedEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.SortedEdges.ArrayNum = 0;
  local_108.SortedEdges.ArrayMax = 0;
  local_108.bHasDanglingEdges = false;
  local_480._padding_._0_4_ = 0;
  local_3b8 = 1;
  local_480._padding_._4_4_ = 1;
  local_480.UnvisitedBitMask = 0xffffffff;
  local_480.CurrentBitIndex = 0;
  local_480.BaseBitIndex = 0;
  local_568 = this;
  local_480.Array = pTVar32;
  local_3b0 = pTVar32;
  if (*(int *)&(this->SimpleIncludes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_480);
  }
  TStack_558._padding_ = CONCAT44(local_480._padding_._4_4_,(undefined4)local_480._padding_);
  TStack_558._16_8_ = CONCAT44(local_480.CurrentBitIndex,local_480.UnvisitedBitMask);
  TStack_558._24_8_ = CONCAT44(local_480._28_4_,local_480.BaseBitIndex);
  local_538._0_4_ =
       *(int *)&(this->SimpleIncludes).field_0x8 - *(int *)&(this->SimpleIncludes).field_0x34;
  TStack_558.Array = local_480.Array;
  local_398 = local_480.Array;
  uStack_37c = local_538._4_4_;
  local_560 = this;
  local_3a8._0_8_ = this;
  unique0x10002e34 = TStack_558._padding_;
  uStack_390 = TStack_558._16_8_;
  local_388 = TStack_558._24_8_;
  iStack_380 = (int)local_538;
  pTVar10 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_168,pTVar32,*(int *)&(this->SimpleIncludes).field_0x28);
  TStack_558._padding_ = pTVar10->_padding_;
  TStack_558.Array = pTVar10->Array;
  TStack_558.UnvisitedBitMask = pTVar10->UnvisitedBitMask;
  TStack_558.CurrentBitIndex = pTVar10->CurrentBitIndex;
  TStack_558._24_8_ = *(undefined8 *)&pTVar10->BaseBitIndex;
  local_538._0_4_ =
       *(int *)&(this->SimpleIncludes).field_0x8 - *(int *)&(this->SimpleIncludes).field_0x34;
  local_268.InitialNum = (int)local_538;
  local_268._44_4_ = local_538._4_4_;
  local_560 = this;
  local_268._padding_ = (longlong)this;
  local_268._padding_ = TStack_558._padding_;
  local_268._padding_ = (longlong)TStack_558.Array;
  local_268._padding_ = TStack_558._16_8_;
  local_268._padding_ = TStack_558._24_8_;
  bVar9 = TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_3a8,&local_268);
  if (bVar9) {
    do {
      lVar40 = (longlong)uStack_390._4_4_ * 0x60 +
               *(longlong *)
                (TMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
                 *)local_3a8._0_8_;
      puVar26 = (ushort *)(lVar40 + 8);
      iVar39 = *(int *)(lVar40 + 0x18);
      if (*(ushort **)(lVar40 + 0x10) != (ushort *)0x0) {
        puVar26 = *(ushort **)(lVar40 + 0x10);
      }
      puVar11 = puVar26 + iVar39;
      while( true ) {
        if (*(int *)(lVar40 + 0x18) != iVar39) {
          local_5a0 = 0;
          `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_5a0);
        }
        if (puVar26 == puVar11) break;
        FDirectedGraph::AllocateNode(&local_108,*puVar26);
        puVar26 = puVar26 + 1;
      }
      iVar39 = *(int *)(lVar40 + 0x40);
      puVar26 = *(ushort **)(lVar40 + 0x38);
      if (*(ushort **)(lVar40 + 0x38) == (ushort *)0x0) {
        puVar26 = (ushort *)(lVar40 + 0x30);
      }
      puVar11 = puVar26 + iVar39;
      while( true ) {
        if (*(int *)(lVar40 + 0x40) != iVar39) {
          local_59f = 0;
          `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_59f);
        }
        if (puVar26 == puVar11) break;
        FDirectedGraph::AllocateNode(&local_108,*puVar26);
        puVar26 = puVar26 + 1;
      }
      uStack_390 = CONCAT44(uStack_390._4_4_,(uint)uStack_390 & ~uStack_39c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3a8 + 8));
      bVar9 = TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_3a8,&local_268)
      ;
      this = local_568;
    } while (bVar9);
  }
  puVar16 = &(this->ComplexIncludes).field_0x10;
  pTVar1 = &this->ComplexIncludes;
  local_460._padding_._0_4_ = 0;
  local_460._padding_._4_4_ = 1;
  local_460.UnvisitedBitMask = 0xffffffff;
  local_460.CurrentBitIndex = 0;
  local_460.BaseBitIndex = 0;
  local_528 = (ForElementType<unsigned_int>)puVar16;
  local_518 = (TSet<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>,FDefaultSetAllocator>
               *)pTVar1;
  local_460.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
  if (*(int *)&(this->ComplexIncludes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_460);
  }
  TStack_558._padding_ = CONCAT44(local_460._padding_._4_4_,(undefined4)local_460._padding_);
  TStack_558._16_8_ = CONCAT44(local_460.CurrentBitIndex,local_460.UnvisitedBitMask);
  TStack_558._24_8_ = CONCAT44(local_460._28_4_,local_460.BaseBitIndex);
  iStack_350 = *(int *)&(this->ComplexIncludes).field_0x8 -
               *(int *)&(this->ComplexIncludes).field_0x34;
  TStack_558.Array = local_460.Array;
  local_368 = local_460.Array;
  uStack_34c = local_538._4_4_;
  local_560 = (FMutualInclusivityGraph *)pTVar1;
  local_378._0_8_ = pTVar1;
  unique0x10002e54 = TStack_558._padding_;
  uStack_360 = TStack_558._16_8_;
  local_358 = TStack_558._24_8_;
  local_538._0_4_ = iStack_350;
  pTVar10 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_148,(TBitArray<FDefaultBitArrayAllocator> *)puVar16,
                       *(int *)&(this->ComplexIncludes).field_0x28);
  TStack_558._padding_ = pTVar10->_padding_;
  TStack_558.Array = pTVar10->Array;
  TStack_558.UnvisitedBitMask = pTVar10->UnvisitedBitMask;
  TStack_558.CurrentBitIndex = pTVar10->CurrentBitIndex;
  TStack_558._24_8_ = *(undefined8 *)&pTVar10->BaseBitIndex;
  local_538._0_4_ =
       *(int *)&(this->ComplexIncludes).field_0x8 - *(int *)&(this->ComplexIncludes).field_0x34;
  local_238.InitialNum = (int)local_538;
  local_238._44_4_ = local_538._4_4_;
  local_560 = (FMutualInclusivityGraph *)pTVar1;
  local_238._padding_ = (longlong)pTVar1;
  local_238._padding_ = TStack_558._padding_;
  local_238._padding_ = (longlong)TStack_558.Array;
  local_238._padding_ = TStack_558._16_8_;
  local_238._padding_ = TStack_558._24_8_;
  bVar9 = TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_378,&local_238);
  if (bVar9) {
    do {
      lVar40 = (longlong)uStack_360._4_4_ * 0x98 + *(longlong *)(undefined1 *)local_378._0_8_;
      puVar26 = (ushort *)(lVar40 + 0x40);
      iVar39 = *(int *)(lVar40 + 0x50);
      if (*(ushort **)(lVar40 + 0x48) != (ushort *)0x0) {
        puVar26 = *(ushort **)(lVar40 + 0x48);
      }
      puVar11 = puVar26 + iVar39;
      while( true ) {
        if (*(int *)(lVar40 + 0x50) != iVar39) {
          local_59e = 0;
          `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_59e);
        }
        if (puVar26 == puVar11) break;
        FDirectedGraph::AllocateNode(&local_108,*puVar26);
        puVar26 = puVar26 + 1;
      }
      iVar39 = *(int *)(lVar40 + 0x78);
      puVar26 = *(ushort **)(lVar40 + 0x70);
      if (*(ushort **)(lVar40 + 0x70) == (ushort *)0x0) {
        puVar26 = (ushort *)(lVar40 + 0x68);
      }
      puVar11 = puVar26 + iVar39;
      while( true ) {
        if (*(int *)(lVar40 + 0x78) != iVar39) {
          local_59d = 0;
          `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_59d);
        }
        if (puVar26 == puVar11) break;
        FDirectedGraph::AllocateNode(&local_108,*puVar26);
        puVar26 = puVar26 + 1;
      }
      uStack_360 = CONCAT44(uStack_360._4_4_,(uint)uStack_360 & ~uStack_36c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_378 + 8));
      bVar9 = TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_378,&local_238)
      ;
      this = local_568;
    } while (bVar9);
  }
  local_440._padding_._4_4_ = 1;
  local_440._padding_._0_4_ = 0;
  local_440.UnvisitedBitMask = 0xffffffff;
  local_440.CurrentBitIndex = 0;
  local_440.BaseBitIndex = 0;
  local_440.Array = pTVar32;
  if (*(int *)&(this->SimpleIncludes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_440);
  }
  TStack_558._padding_ = CONCAT44(local_440._padding_._4_4_,(undefined4)local_440._padding_);
  TStack_558._16_8_ = CONCAT44(local_440.CurrentBitIndex,local_440.UnvisitedBitMask);
  TStack_558._24_8_ = CONCAT44(local_440._28_4_,local_440.BaseBitIndex);
  iStack_320 = *(int *)&(this->SimpleIncludes).field_0x8 -
               *(int *)&(this->SimpleIncludes).field_0x34;
  TStack_558.Array = local_440.Array;
  local_338 = local_440.Array;
  uStack_31c = local_538._4_4_;
  local_560 = this;
  local_348._0_8_ = this;
  unique0x10002e74 = TStack_558._padding_;
  uStack_330 = TStack_558._16_8_;
  local_328 = TStack_558._24_8_;
  local_538._0_4_ = iStack_320;
  pTVar10 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_128,pTVar32,*(int *)&(this->SimpleIncludes).field_0x28);
  TStack_558._padding_ = pTVar10->_padding_;
  TStack_558.Array = pTVar10->Array;
  TStack_558.UnvisitedBitMask = pTVar10->UnvisitedBitMask;
  TStack_558.CurrentBitIndex = pTVar10->CurrentBitIndex;
  TStack_558._24_8_ = *(undefined8 *)&pTVar10->BaseBitIndex;
  local_538._0_4_ =
       *(int *)&(this->SimpleIncludes).field_0x8 - *(int *)&(this->SimpleIncludes).field_0x34;
  local_208.InitialNum = (int)local_538;
  local_208._44_4_ = local_538._4_4_;
  local_560 = this;
  local_208._padding_ = (longlong)this;
  local_208._padding_ = TStack_558._padding_;
  local_208._padding_ = (longlong)TStack_558.Array;
  local_208._padding_ = TStack_558._16_8_;
  local_208._padding_ = TStack_558._24_8_;
  bVar9 = TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_348,&local_208);
  if (bVar9) {
    do {
      puVar26 = (ushort *)
                ((longlong)uStack_330._4_4_ * 0x60 +
                *(longlong *)
                 (TMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>_>
                  *)local_348._0_8_);
      bVar9 = FDirectedGraph::IsNodeAllocated(&local_108,*puVar26);
      if (bVar9) {
        puVar11 = puVar26 + 4;
        iVar39 = *(int *)(puVar26 + 0xc);
        if (*(ushort **)(puVar26 + 8) != (ushort *)0x0) {
          puVar11 = *(ushort **)(puVar26 + 8);
        }
        puVar2 = puVar11 + iVar39;
        while( true ) {
          if (*(int *)(puVar26 + 0xc) != iVar39) {
            local_59c = 0;
            `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_59c);
          }
          if (puVar11 == puVar2) break;
          FDirectedGraph::MakeEdge(&local_108,*puVar11,*puVar26);
          puVar11 = puVar11 + 1;
        }
        iVar39 = *(int *)(puVar26 + 0x20);
        puVar11 = *(ushort **)(puVar26 + 0x1c);
        if (*(ushort **)(puVar26 + 0x1c) == (ushort *)0x0) {
          puVar11 = puVar26 + 0x18;
        }
        puVar2 = puVar11 + iVar39;
        while( true ) {
          if (*(int *)(puVar26 + 0x20) != iVar39) {
            local_59b = 0;
            `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_59b);
          }
          if (puVar11 == puVar2) break;
          FDirectedGraph::MakeEdge(&local_108,*puVar11,*puVar26);
          puVar11 = puVar11 + 1;
        }
      }
      uStack_330 = CONCAT44(uStack_330._4_4_,(uint)uStack_330 & ~uStack_33c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_348 + 8));
      bVar9 = TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_348,&local_208)
      ;
      this = local_568;
    } while (bVar9);
  }
  FVar41 = (ForElementType<unsigned_int>)&(this->ComplexIncludes).field_0x10;
  local_420._padding_._0_4_ = 0;
  local_420._padding_._4_4_ = 1;
  local_420.UnvisitedBitMask = 0xffffffff;
  local_420.CurrentBitIndex = 0;
  local_420.BaseBitIndex = 0;
  local_420.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar41;
  if (*(int *)&(this->ComplexIncludes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_420);
  }
  TStack_558._padding_ = CONCAT44(local_420._padding_._4_4_,(undefined4)local_420._padding_);
  pTVar1 = &this->ComplexIncludes;
  TStack_558._16_8_ = CONCAT44(local_420.CurrentBitIndex,local_420.UnvisitedBitMask);
  TStack_558._24_8_ = CONCAT44(local_420._28_4_,local_420.BaseBitIndex);
  iStack_2f0 = *(int *)&(this->ComplexIncludes).field_0x8 -
               *(int *)&(this->ComplexIncludes).field_0x34;
  TStack_558.Array = local_420.Array;
  local_308 = local_420.Array;
  uStack_2ec = local_538._4_4_;
  local_560 = (FMutualInclusivityGraph *)pTVar1;
  local_318._0_8_ = pTVar1;
  unique0x10002e94 = TStack_558._padding_;
  uStack_300 = TStack_558._16_8_;
  local_2f8 = TStack_558._24_8_;
  local_538._0_4_ = iStack_2f0;
  pTVar10 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_188,(TBitArray<FDefaultBitArrayAllocator> *)FVar41,
                       *(int *)&(this->ComplexIncludes).field_0x28);
  TStack_558._padding_ = pTVar10->_padding_;
  TStack_558.Array = pTVar10->Array;
  TStack_558.UnvisitedBitMask = pTVar10->UnvisitedBitMask;
  TStack_558.CurrentBitIndex = pTVar10->CurrentBitIndex;
  TStack_558._24_8_ = *(undefined8 *)&pTVar10->BaseBitIndex;
  local_538._0_4_ =
       *(int *)&(this->ComplexIncludes).field_0x8 - *(int *)&(this->ComplexIncludes).field_0x34;
  local_1d8.InitialNum = (int)local_538;
  local_1d8._44_4_ = local_538._4_4_;
  local_560 = (FMutualInclusivityGraph *)pTVar1;
  local_1d8._padding_ = (longlong)pTVar1;
  local_1d8._padding_ = TStack_558._padding_;
  local_1d8._padding_ = (longlong)TStack_558.Array;
  local_1d8._padding_ = TStack_558._16_8_;
  local_1d8._padding_ = TStack_558._24_8_;
  bVar9 = TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_318,&local_1d8);
  uVar34 = 1;
  if (bVar9) {
    do {
      iVar39 = 0;
      puVar22 = (uint *)((longlong)uStack_300._4_4_ * 0x98 + *(longlong *)local_318._0_8_);
      uVar15 = puVar22[0xc];
      local_3c8 = puVar22;
      if (uVar15 != 0) {
        uVar37 = *puVar22;
        iVar24 = iVar39;
        while (uVar37 == 0) {
          lVar40 = (longlong)iVar24;
          iVar39 = iVar39 + 0x20;
          iVar24 = iVar24 + 1;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_14622b4c4;
          uVar37 = puVar22[lVar40 + 1];
        }
        local_570 = (ulonglong)(-uVar37 & uVar37);
        uVar44 = (ulonglong)(-uVar37 & uVar37) * 2 + 1;
        lVar40 = 0x3f;
        if (uVar44 != 0) {
          for (; uVar44 >> lVar40 == 0; lVar40 = lVar40 + -1) {
          }
        }
        local_3e0 = (int)lVar40;
        uVar37 = iVar39 + -1 + local_3e0;
        if ((int)uVar37 < (int)uVar15) {
          local_5a4 = 0xffffffff;
          do {
            uVar15 = (uint)local_570;
            if (((uVar37 & 0xffff0000) != 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(BitIndex & 0xFFFF0000) == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                   ,0xba,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar36 = (ushort)uVar37;
            bVar9 = FDirectedGraph::IsNodeAllocated(&local_108,uVar36);
            if (bVar9) {
              puVar20 = puVar22 + 0x10;
              uVar15 = puVar22[0x14];
              if (*(uint **)(puVar22 + 0x12) != (uint *)0x0) {
                puVar20 = *(uint **)(puVar22 + 0x12);
              }
              puVar3 = (uint *)((longlong)puVar20 + (longlong)(int)uVar15 * 2);
              while( true ) {
                if (puVar22[0x14] != uVar15) {
                  local_59a = 0;
                  `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_59a);
                }
                if (puVar20 == puVar3) break;
                FDirectedGraph::MakeEdge(&local_108,(ushort)*puVar20,uVar36);
                puVar20 = (uint *)((longlong)puVar20 + 2);
              }
              uVar15 = puVar22[0x1e];
              puVar20 = *(uint **)(puVar22 + 0x1c);
              if (*(uint **)(puVar22 + 0x1c) == (uint *)0x0) {
                puVar20 = puVar22 + 0x1a;
              }
              puVar3 = (uint *)((longlong)puVar20 + (longlong)(int)uVar15 * 2);
              while( true ) {
                if (puVar22[0x1e] != uVar15) {
                  local_599 = 0;
                  `TCheckedPointerIterator<UE::MovieScene::FComponentTypeID_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_599);
                }
                if (puVar20 == puVar3) break;
                FDirectedGraph::MakeEdge(&local_108,(ushort)*puVar20,uVar36);
                puVar20 = (uint *)((longlong)puVar20 + 2);
              }
              uVar15 = (uint)local_570;
              puVar22 = local_3c8;
            }
            uVar28 = puVar22[0xc];
            uVar30 = local_5a4 & ~uVar15;
            uVar15 = uVar30 & puVar22[iVar24];
            while (uVar15 == 0) {
              lVar40 = (longlong)iVar24;
              iVar39 = iVar39 + 0x20;
              iVar24 = iVar24 + 1;
              if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
              goto LAB_14622b4c4;
              uVar30 = 0xffffffff;
              uVar15 = puVar22[lVar40 + 1];
            }
            uVar44 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
            lVar40 = 0x3f;
            if (uVar44 != 0) {
              for (; uVar44 >> lVar40 == 0; lVar40 = lVar40 + -1) {
              }
            }
            local_3dc = (int)lVar40;
            uVar37 = local_3dc + -1 + iVar39;
            local_5a4 = uVar30;
          } while (((int)uVar37 <= (int)uVar28) &&
                  (local_570 = (ulonglong)(-uVar15 & uVar15), (int)uVar37 < (int)uVar28));
        }
      }
LAB_14622b4c4:
      uStack_300 = CONCAT44(uStack_300._4_4_,(uint)uStack_300 & ~uStack_30c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_318 + 8));
      bVar9 = TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_318,&local_1d8)
      ;
      this = local_568;
      pTVar32 = local_3b0;
      uVar34 = local_3b8;
      FVar41 = local_528;
    } while (bVar9);
  }
  uVar44 = 0;
  uVar15 = (uint)uVar34;
  bVar9 = FDirectedGraph::IsCyclic(&local_108);
  if (bVar9) {
    local_598 = 0;
    bVar9 = `UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l59::<lambda_1>::
            operator()(&local_598);
    if (!bVar9) {
      local_3c0 = UMovieSceneEntitySystemLinker::GetComponents();
      local_290.ClusterName.DataPtr = L"Mutual Includes";
      local_290.Color.field0_0x0._s_0 = FColor::Black.field0_0x0;
      local_290.ClusterName.Size = 0xf;
      if (2 < (byte)LogMovieScene._0_1_) {
        local_298 = &local_3c0;
        local_2a0 = Core::Private::Function::
                    TFunctionRefCaller<`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l61::<lambda_2>,void,unsigned_short,TStringBuilderBase<wchar_t>_&>
                    ::Call;
        FDirectedGraph::ToString
                  (&local_108,&local_278,&local_290,
                   (TFunctionRef<void___cdecl(unsigned_short,TStringBuilderBase<wchar_t>_&)> *)
                   &local_2a0);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  local_c8._0_8_ = 0;
  local_4e0.Array = &local_108.Nodes;
  local_c8._8_8_ = 0;
  local_c8._32_8_ = 0;
  local_c8._40_4_ = 0;
  local_c8._44_4_ = 0x80;
  local_c8._48_4_ = 0xffffffff;
  local_c8._52_4_ = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_4e0._padding_._0_4_ = 0;
  local_4e0.UnvisitedBitMask = 0xffffffff;
  local_4e0.CurrentBitIndex = 0;
  local_4e0.BaseBitIndex = 0;
  local_4e0._padding_._4_4_ = uVar15;
  if (local_108.Nodes.NumBits != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e0);
    uVar44 = local_4e0._20_8_ & 0xffffffff;
  }
  if ((int)uVar44 <
      ((TBitArray<FDefaultBitArrayAllocator> *)&(local_4e0.Array)->AllocatorInstance)->NumBits) {
    do {
      if (((uVar44 & 0xffff0000) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(BitIndex & 0xFFFF0000) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                             ,0xba,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FindPrerequisiteChainLength
                (&local_108,(FComponentTypeID)(ushort)uVar44,
                 (TMap<UE::MovieScene::FComponentTypeID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,int,0>_>
                  *)local_c8);
      local_4e0.UnvisitedBitMask = local_4e0.UnvisitedBitMask & ~local_4e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e0);
      uVar44 = local_4e0._20_8_ & 0xffffffff;
    } while (local_4e0.CurrentBitIndex <
             ((TBitArray<FDefaultBitArrayAllocator> *)&(local_4e0.Array)->AllocatorInstance)->
             NumBits);
  }
  local_580.Data = (FScriptContainerElement *)0x0;
  local_578 = 0;
  iStack_574 = 0;
  local_400._padding_._0_4_ = 0;
  local_400.UnvisitedBitMask = 0xffffffff;
  local_400.CurrentBitIndex = 0;
  local_400.BaseBitIndex = 0;
  local_400._padding_._4_4_ = uVar15;
  local_400.Array = pTVar32;
  if (*(int *)&(this->SimpleIncludes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_400);
  }
  uVar37 = *(uint *)&(this->SimpleIncludes).field_0x28;
  uStack_508 = CONCAT44(local_400._padding_._4_4_,(undefined4)local_400._padding_);
  bVar13 = (byte)uVar37 & 0x1f;
  local_4e8 = *(int *)&(this->SimpleIncludes).field_0x8 - *(int *)&(this->SimpleIncludes).field_0x34
  ;
  uStack_4f8._4_4_ = local_400.CurrentBitIndex;
  uStack_4f8._0_4_ = local_400.UnvisitedBitMask;
  uStack_4f0._4_4_ = local_400._28_4_;
  uStack_4f0._0_4_ = local_400.BaseBitIndex;
  local_4a0._padding_._0_4_ = (int)uVar37 >> 5;
  local_4a0._padding_._4_4_ = uVar15 << bVar13;
  local_4a0.UnvisitedBitMask = -1 << bVar13;
  FStack_500 = (ForElementType<unsigned_int>)local_400.Array;
  local_4a0.BaseBitIndex = uVar37 & 0xffffffe0;
  uStack_2c0 = CONCAT44(uStack_4e4,local_4e8);
  TStack_2e0.Array = local_400.Array;
  local_510 = this;
  local_4a0.Array = pTVar32;
  local_4a0.CurrentBitIndex = uVar37;
  local_2e8 = this;
  TStack_2e0._padding_ = uStack_508;
  TStack_2e0._16_8_ = uStack_4f8;
  TStack_2e0._24_8_ = uStack_4f0;
  if (((int)uVar37 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar37 != pTVar32->NumBits) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4a0);
  }
  iVar39 = local_4a0.CurrentBitIndex;
  pTVar32 = local_4a0.Array;
  uStack_508 = CONCAT44(local_4a0._padding_._4_4_,(int)local_4a0._padding_);
  uStack_4f8 = CONCAT44(local_4a0.CurrentBitIndex,local_4a0.UnvisitedBitMask);
  uStack_4f0 = CONCAT44(local_4a0._28_4_,local_4a0.BaseBitIndex);
  FStack_500 = (ForElementType<unsigned_int>)local_4a0.Array;
  while( true ) {
    pFVar33 = local_2e8;
    if (*(int *)&(local_2e8->SimpleIncludes).field_0x8 -
        *(int *)&(local_2e8->SimpleIncludes).field_0x34 != (int)uStack_2c0) {
      local_597 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_597);
    }
    pFVar6 = local_568;
    if (((TStack_2e0.CurrentBitIndex == iVar39) && (TStack_2e0.Array == pTVar32)) &&
       (pFVar33 == local_568)) break;
    local_520._0_2_ =
         *(ushort *)
          ((longlong)TStack_2e0.CurrentBitIndex * 0x60 + *(longlong *)&pFVar33->SimpleIncludes);
    if (local_c8._8_4_ != local_c8._52_4_) {
      puVar16 = local_c8 + 0x38;
      if (local_88 != (undefined1 *)0x0) {
        puVar16 = local_88;
      }
      iVar24 = *(int *)(puVar16 +
                       ((ulonglong)(local_80 - 1) & (ulonglong)(ushort)local_520._0_2_) * 4);
      while (iVar24 != -1) {
        puVar26 = (ushort *)((longlong)iVar24 * 0x10 + local_c8._0_8_);
        if (*puVar26 == local_520._0_2_) {
          puVar11 = puVar26 + 2;
          if (puVar26 == (ushort *)0x0) {
            puVar11 = (ushort *)0x0;
          }
          if (puVar11 != (ushort *)0x0) {
            local_520._4_2_ = puVar11[0];
            local_520._6_2_ = puVar11[1];
            goto LAB_14622b893;
          }
          break;
        }
        iVar24 = *(int *)(puVar26 + 4);
      }
    }
    local_520._4_4_ = 0;
LAB_14622b893:
    if (((local_580.Data <= &local_520) &&
        (&local_520 <
         (TTuple<UE::MovieScene::FComponentTypeID,int> *)(local_580.Data + (longlong)iStack_574 * 8)
        )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_578 == iStack_574) {
      local_578 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_580,&iStack_574);
    }
    lVar40 = (longlong)local_578;
    local_578 = local_578 + 1;
    *(ulonglong *)(local_580.Data + lVar40 * 8) =
         CONCAT44(local_520._4_4_,CONCAT22(local_520._2_2_,local_520._0_2_));
    TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
  }
  AlgoImpl::
  IntroSortInternal<TTuple<UE::MovieScene::FComponentTypeID,int>,int,_UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer_::__l2::<lambda_3>,TLess<void>_>
            ((TTuple<UE::MovieScene::FComponentTypeID,int> *)local_580.Data,local_578,local_5a8[0],
             (TLess<void>)local_5a8[0]);
  local_560 = (FMutualInclusivityGraph *)&pFVar6->ComplexIncludes;
  local_590.Data = (FScriptContainerElement *)0x0;
  uVar28 = 0;
  local_588 = 0;
  uVar37 = *(int *)((longlong)FVar41 + 0x18);
  uStack_4f0._0_4_ = 0;
  uStack_4f8._4_4_ = uVar28;
  if (uVar37 != 0) {
    FVar29 = *(ForElementType<unsigned_int> *)((longlong)FVar41 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar41 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar29 = FVar41;
    }
    uVar30 = *(uint *)FVar29;
    uStack_4f0._0_4_ = 0;
    uVar28 = 0;
    while (uVar30 == 0) {
      lVar40 = (longlong)(int)uVar28;
      uStack_4f0._0_4_ = (uint)uStack_4f0 + 0x20;
      uVar28 = uVar28 + 1;
      uStack_4f8._4_4_ = uVar37;
      if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
      goto LAB_14622ba21;
      uVar30 = ((uint *)((longlong)FVar29 + 4))[lVar40];
    }
    uVar15 = -uVar30 & uVar30;
    uVar44 = (ulonglong)uVar15 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar44 != 0) {
      for (; uVar44 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_3d8 = (int)lVar40;
    uStack_4f8._4_4_ = local_3d8 + -1 + (uint)uStack_4f0;
    if ((int)uVar37 < (int)uStack_4f8._4_4_) {
      uStack_4f8._4_4_ = uVar37;
    }
  }
LAB_14622ba21:
  local_4e8 = *(int *)&(pFVar6->ComplexIncludes).field_0x8 -
              *(int *)&(pFVar6->ComplexIncludes).field_0x34;
  uVar30 = *(uint *)&(pFVar6->ComplexIncludes).field_0x28;
  uStack_508 = CONCAT44(uVar15,uVar28);
  uVar15 = uVar30 & 0xffffffe0;
  uStack_4f8._0_4_ = 0xffffffff;
  uStack_4f0._4_4_ = local_18c;
  TStack_558._padding_ = uStack_508;
  iVar39 = (int)uVar30 >> 5;
  local_538 = CONCAT44(uStack_4e4,local_4e8);
  TStack_558.BaseBitIndex = (uint)uStack_4f0;
  TStack_558._28_4_ = local_18c;
  TStack_558.UnvisitedBitMask = 0xffffffff;
  TStack_558.CurrentBitIndex = uStack_4f8._4_4_;
  local_5a4 = uVar30;
  TStack_558.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar41;
  local_510 = local_560;
  FStack_500 = FVar41;
  if ((((int)uVar30 < 0) || ((int)uVar37 < (int)uVar30)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar37 = *(uint *)((longlong)FVar41 + 0x18);
  if (uVar30 != uVar37) {
    FVar29 = FVar41;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar41 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar29 = *(ForElementType<unsigned_int> *)((longlong)FVar41 + 0x10);
    }
    uVar28 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar39 * 4);
    while (uVar28 == 0) {
      lVar40 = (longlong)iVar39;
      uVar15 = uVar15 + 0x20;
      iVar39 = iVar39 + 1;
      uVar30 = uVar37;
      local_5a4 = uVar37;
      if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar39)
      goto LAB_14622bb50;
      uVar28 = ((uint *)((longlong)FVar29 + 4))[lVar40];
    }
    uVar44 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar40 = 0x3f;
    if (uVar44 != 0) {
      for (; uVar44 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_3d4 = (int)lVar40;
    uVar30 = local_3d4 + -1 + uVar15;
    local_5a4 = uVar30;
    if ((int)uVar37 < (int)uVar30) {
      uVar30 = uVar37;
      local_5a4 = uVar37;
    }
  }
LAB_14622bb50:
  while( true ) {
    pFVar33 = local_560;
    if (*(int *)&((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&local_560->SimpleIncludes)->field_0x8 -
        *(int *)&((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&local_560->SimpleIncludes)->field_0x34 != (int)local_538) {
      local_596[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_596);
    }
    if (((TStack_558.CurrentBitIndex == uVar30) &&
        ((ForElementType<unsigned_int>)TStack_558.Array == FVar41)) &&
       (pFVar33 == (FMutualInclusivityGraph *)local_518)) break;
    iVar31 = 0;
    iVar24 = 0;
    pTVar42 = (TBitArray<TFixedAllocator<12>_> *)
              ((longlong)TStack_558.CurrentBitIndex * 0x98 + *(longlong *)&pFVar33->SimpleIncludes);
    iVar39 = pTVar42->NumBits;
    if (iVar39 != 0) {
      uVar15 = *(uint *)(pTVar42->AllocatorInstance).InlineData[0].Pad;
      iVar25 = iVar31;
      iVar19 = iVar31;
      while (uVar15 == 0) {
        lVar40 = (longlong)iVar19;
        iVar25 = iVar25 + 0x20;
        iVar19 = iVar19 + 1;
        if ((int)(iVar39 + -1 + (iVar39 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14622bd1d;
        uVar15 = *(uint *)(pTVar42->AllocatorInstance).InlineData[lVar40 + 1].Pad;
      }
      uVar15 = -uVar15 & uVar15;
      uVar44 = (ulonglong)uVar15 * 2 + 1;
      lVar40 = 0x3f;
      if (uVar44 != 0) {
        for (; uVar44 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      local_3d0 = (int)lVar40;
      uVar37 = local_3d0 + -1 + iVar25;
      if ((int)uVar37 < iVar39) {
        uVar28 = 0xffffffff;
        iVar24 = iVar31;
        do {
          if (((uVar37 & 0xffff0000) != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(BitIndex & 0xFFFF0000) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                 ,0xba,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar39 = iVar24;
          if (local_c8._8_4_ != local_c8._52_4_) {
            puVar16 = local_c8 + 0x38;
            if (local_88 != (undefined1 *)0x0) {
              puVar16 = local_88;
            }
            iVar31 = *(int *)(puVar16 + (ulonglong)(local_80 - 1U & uVar37 & 0xffff) * 4);
            while (iVar31 != -1) {
              psVar17 = (short *)((longlong)iVar31 * 0x10 + local_c8._0_8_);
              if (*psVar17 == (short)uVar37) {
                piVar12 = (int *)(psVar17 + 2);
                if (psVar17 == (short *)0x0) {
                  piVar12 = (int *)0x0;
                }
                if ((piVar12 != (int *)0x0) && (iVar39 = *piVar12, *piVar12 < iVar24)) {
                  iVar39 = iVar24;
                }
                break;
              }
              iVar31 = *(int *)(psVar17 + 4);
            }
          }
          iVar24 = iVar39;
          iVar39 = pTVar42->NumBits;
          uVar28 = uVar28 & ~uVar15;
          uVar15 = uVar28 & *(uint *)(pTVar42->AllocatorInstance).InlineData[iVar19].Pad;
          while (uVar30 = local_5a4, uVar15 == 0) {
            lVar40 = (longlong)iVar19;
            iVar25 = iVar25 + 0x20;
            iVar19 = iVar19 + 1;
            if ((int)(iVar39 + -1 + (iVar39 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19)
            goto LAB_14622bd1d;
            uVar28 = 0xffffffff;
            uVar15 = *(uint *)(pTVar42->AllocatorInstance).InlineData[lVar40 + 1].Pad;
          }
          uVar15 = -uVar15 & uVar15;
          uVar44 = (ulonglong)uVar15 * 2 + 1;
          lVar40 = 0x3f;
          if (uVar44 != 0) {
            for (; uVar44 >> lVar40 == 0; lVar40 = lVar40 + -1) {
            }
          }
          local_3cc = (int)lVar40;
          uVar37 = iVar25 + -1 + local_3cc;
        } while (((int)uVar37 <= iVar39) && ((int)uVar37 < iVar39));
      }
    }
LAB_14622bd1d:
    local_78._48_8_ = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)&local_78,pTVar42);
    local_78._56_4_ = *(undefined4 *)pTVar42[1].AllocatorInstance.InlineData[0].Pad;
    local_78._60_4_ = iVar24;
    if ((local_590.Data <= &local_78) &&
       ((&local_78 <
         (TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *)
         (local_590.Data + (longlong)local_588._4_4_ * 0x40) &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar9)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar39 = (int)local_588;
    if ((int)local_588 == local_588._4_4_) {
      iVar39 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x440,&local_590,(int *)((longlong)&local_588 + 4));
    }
    local_588 = CONCAT44(local_588._4_4_,iVar39 + 1);
    _Dst = local_590.Data + (longlong)iVar39 * 0x40;
    memmove(_Dst,&local_78,0x30);
    *(undefined4 *)(_Dst + 0x30) = local_78._48_4_;
    *(undefined4 *)(_Dst + 0x34) = local_78._52_4_;
    local_78._48_8_ = 0;
    *(undefined4 *)(_Dst + 0x38) = local_78._56_4_;
    *(undefined4 *)(_Dst + 0x3c) = local_78._60_4_;
    TStack_558.UnvisitedBitMask = TStack_558.UnvisitedBitMask & ~TStack_558._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_558);
    FVar41 = local_528;
  }
  AlgoImpl::
  IntroSortInternal<TTuple<UE::MovieScene::FComplexInclusivityFilter,int>,int,_UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer_::__l2::<lambda_4>,TLess<void>_>
            ((TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *)local_590.Data,(int)local_588,
             (<lambda_4>)local_5a8[0],(TLess<void>)local_5a8[0]);
  local_2b8 = local_568;
  local_528 = (ForElementType<unsigned_int>)&local_568->CommandBuffer;
  piVar12 = &(local_568->CommandBuffer).Commands.ArrayMax;
  (local_568->CommandBuffer).Commands.ArrayNum = 0;
  if (*piVar12 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_528,0,piVar12);
  }
  uVar23 = 0;
  local_2b0 = local_530;
  local_530[0] = 0xffffffff;
  local_2a8 = local_5a8;
  local_5a8[0] = (<lambda_3>)0x3;
  local_4a8 = &local_2b8;
  local_4b8 = &local_2b8;
  local_4b0 = local_2b8;
  local_4c0 = local_2b8;
  local_570 = 0;
  uVar27 = uVar23;
  pFVar33 = local_2b8;
  uVar35 = uVar23;
  uVar44 = uVar23;
  uVar8 = local_570;
LAB_14622bf20:
  do {
    local_570 = uVar8;
    uVar15 = (uint)uVar23;
    uVar37 = (uint)uVar27;
    uVar43 = uVar44;
    if (local_578 <= (int)uVar15) goto LAB_14622bf29;
    if ((int)local_588 <= (int)uVar37) goto LAB_14622bf33;
    uVar28 = 0;
    if ((int)uVar15 < local_578) {
      uVar28 = ~uVar15 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar15 = *(uint *)(local_580.Data + uVar35 * 8 + 4);
    uVar28 = 0;
    if ((int)uVar37 < (int)local_588) {
      uVar28 = ~uVar37 >> 0x1f;
    }
    local_5a4 = uVar15;
    if ((uVar28 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar33 = local_568;
    uVar43 = local_570;
    lVar40 = uVar44 * 0x40;
    iVar39 = *(int *)(local_590.Data + lVar40 + 0x3c);
    uVar44 = uVar43;
    if ((int)uVar15 <= iVar39) break;
    uVar8 = local_570;
    if ((int)uVar37 < (int)local_588) {
      do {
        uVar37 = (uint)uVar27;
        uVar15 = 0;
        if ((int)uVar37 < (int)local_588) {
          uVar15 = ~uVar37 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar33 = local_568;
        uVar44 = local_570;
        uVar8 = local_570;
        if (*(int *)(local_590.Data + lVar40 + 0x3c) != iVar39) break;
        uVar15 = 0;
        if ((int)uVar37 < (int)local_588) {
          uVar15 = ~uVar37 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar38 = (FComplexInclusivityFilter *)(local_590.Data + (longlong)(int)uVar37 * 0x40);
        uVar15 = MovieScene::GetTypeHash(pFVar38);
        pTVar7 = local_518;
        iVar24 = TSet<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<UE::MovieScene::FComplexInclusivityFilter>
                           (local_518,uVar15,pFVar38);
        if (iVar24 != -1) {
          lVar14 = (longlong)iVar24 * 0x98 + *(longlong *)&pTVar7->Elements;
          pFVar21 = (FIncludes *)(lVar14 + 0x40);
          if (lVar14 == 0) {
            pFVar21 = (FIncludes *)0x0;
          }
          if (pFVar21 != (FIncludes *)0x0) {
            if ((pFVar21->Includes).ArrayNum != 0) {
              `UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_8>
              ::operator()(&local_4c0,pFVar38,pFVar21,Mandatory);
            }
            if (pFVar21[1].Includes.ArrayNum != 0) {
              `UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_8>
              ::operator()(&local_4c0,pFVar38,pFVar21 + 1,Optional);
            }
          }
        }
        uVar44 = local_570 + 1;
        uVar27 = (ulonglong)(uVar37 + 1);
        lVar40 = lVar40 + 0x40;
        pFVar33 = local_568;
        local_570 = uVar44;
        uVar8 = uVar44;
      } while ((int)(uVar37 + 1) < (int)local_588);
    }
  } while( true );
  while (uVar28 = (uint)uVar23, (int)uVar28 < local_578) {
    uVar30 = 0;
    if ((int)uVar28 < local_578) {
      uVar30 = ~uVar28 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = local_570;
    if (*(uint *)(local_580.Data + uVar35 * 8 + 4) != uVar15) goto LAB_14622bf20;
    uVar30 = 0;
    if ((int)uVar28 < local_578) {
      uVar30 = ~uVar28 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar4.Value = *(ushort *)(local_580.Data + uVar35 * 8);
    if (*(int *)&(pFVar33->SimpleIncludes).field_0x8 ==
        *(int *)&(pFVar33->SimpleIncludes).field_0x34) {
LAB_14622c24f:
      uVar23 = (ulonglong)(uVar28 + 1);
      uVar35 = uVar35 + 1;
    }
    else {
      puVar16 = *(undefined1 **)&(pFVar33->SimpleIncludes).field_0x40;
      puVar18 = &(pFVar33->SimpleIncludes).field_0x38;
      if (puVar16 != (undefined1 *)0x0) {
        puVar18 = puVar16;
      }
      iVar39 = *(int *)(puVar18 +
                       ((ulonglong)(*(int *)&(pFVar33->SimpleIncludes).field_0x48 - 1) &
                       (ulonglong)FVar4.Value) * 4);
      if (iVar39 == -1) goto LAB_14622c24f;
      do {
        puVar26 = (ushort *)((longlong)iVar39 * 0x60 + *(longlong *)&pFVar33->SimpleIncludes);
        if (*puVar26 == FVar4.Value) {
          pFVar21 = (FIncludes *)(puVar26 + 4);
          if (puVar26 == (ushort *)0x0) {
            pFVar21 = (FIncludes *)0x0;
          }
          uVar15 = local_5a4;
          if (pFVar21 != (FIncludes *)0x0) {
            if ((pFVar21->Includes).ArrayNum != 0) {
              `UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_6>
              ::operator()(&local_4b0,FVar4,pFVar21,Mandatory);
            }
            uVar15 = local_5a4;
            if (pFVar21[1].Includes.ArrayNum != 0) {
              `UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_6>
              ::operator()(&local_4b0,FVar4,pFVar21 + 1,Optional);
              uVar15 = local_5a4;
            }
          }
          goto LAB_14622c24f;
        }
        iVar39 = *(int *)(puVar26 + 0x2c);
      } while (iVar39 != -1);
      uVar23 = (ulonglong)(uVar28 + 1);
      uVar35 = uVar35 + 1;
    }
  }
LAB_14622bf29:
  uVar44 = uVar43;
  if ((int)local_588 <= (int)uVar37) {
    lVar40 = (longlong)(int)local_530[0];
    if (local_530[0] != 0xffffffff) {
      iVar39 = (pFVar33->CommandBuffer).Commands.ArrayNum;
      uVar15 = 0;
      if ((int)local_530[0] < (pFVar33->CommandBuffer).Commands.ArrayNum) {
        uVar15 = ~local_530[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(short *)((((TArray<UE::MovieScene::FMutualInclusivityGraphCommandBuffer::FCommand,TSizedDefaultAllocator<32>_>
                    *)local_528)->AllocatorInstance).Data + lVar40 * 0x10) = (short)iVar39;
    }
    pFVar33->bCommandBufferInvalidated = false;
    FMutualInclusivityGraphCommandBuffer::CheckInvariants
              ((FMutualInclusivityGraphCommandBuffer *)local_528);
    if ((TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *)local_590.Data !=
        (TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *)0x0) {
      FMemory::Free(local_590.Data);
    }
    if ((TTuple<UE::MovieScene::FComponentTypeID,int> *)local_580.Data !=
        (TTuple<UE::MovieScene::FComponentTypeID,int> *)0x0) {
      FMemory::Free(local_580.Data);
    }
    local_80 = 0;
    if (local_88 != (undefined1 *)0x0) {
      FMemory::Free(local_88);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_c8);
    if (local_108.SortedEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.SortedEdges.AllocatorInstance.Data);
    }
    if (local_108.Nodes.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_108.Nodes.AllocatorInstance.SecondaryData);
    }
    return;
  }
LAB_14622bf33:
  pTVar7 = local_518;
  if ((int)uVar23 < local_578) {
    lVar40 = uVar35 * 8;
    do {
      uVar37 = (uint)uVar23;
      uVar15 = 0;
      if ((int)uVar37 < local_578) {
        uVar15 = ~uVar37 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4.Value = *(ushort *)(local_580.Data + lVar40);
      if (*(int *)&(pFVar33->SimpleIncludes).field_0x8 !=
          *(int *)&(pFVar33->SimpleIncludes).field_0x34) {
        puVar16 = *(undefined1 **)&(pFVar33->SimpleIncludes).field_0x40;
        puVar18 = &(pFVar33->SimpleIncludes).field_0x38;
        if (puVar16 != (undefined1 *)0x0) {
          puVar18 = puVar16;
        }
        iVar39 = *(int *)(puVar18 +
                         ((ulonglong)(*(int *)&(pFVar33->SimpleIncludes).field_0x48 - 1) &
                         (ulonglong)FVar4.Value) * 4);
        if (iVar39 != -1) {
          do {
            puVar26 = (ushort *)((longlong)iVar39 * 0x60 + *(longlong *)&pFVar33->SimpleIncludes);
            if (*puVar26 == FVar4.Value) {
              pFVar21 = (FIncludes *)(puVar26 + 4);
              if (puVar26 == (ushort *)0x0) {
                pFVar21 = (FIncludes *)0x0;
              }
              if (pFVar21 != (FIncludes *)0x0) {
                if ((pFVar21->Includes).ArrayNum != 0) {
                  `UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::
                  <lambda_6>::operator()(&local_4b0,FVar4,pFVar21,Mandatory);
                }
                if (pFVar21[1].Includes.ArrayNum != 0) {
                  `UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::
                  <lambda_6>::operator()(&local_4b0,FVar4,pFVar21 + 1,Optional);
                }
              }
              break;
            }
            iVar39 = *(int *)(puVar26 + 0x2c);
          } while (iVar39 != -1);
        }
      }
      uVar23 = (ulonglong)(uVar37 + 1);
      uVar35 = uVar35 + 1;
      lVar40 = lVar40 + 8;
      uVar44 = local_570;
      uVar8 = local_570;
    } while ((int)(uVar37 + 1) < local_578);
  }
  else {
    uVar8 = local_570;
    if ((int)uVar37 < (int)local_588) {
      do {
        uVar37 = (uint)uVar27;
        uVar15 = 0;
        if ((int)uVar37 < (int)local_588) {
          uVar15 = ~uVar37 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar38 = (FComplexInclusivityFilter *)(local_590.Data + (longlong)(int)uVar37 * 0x40);
        uVar15 = MovieScene::GetTypeHash(pFVar38);
        iVar39 = TSet<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<UE::MovieScene::FComplexInclusivityFilter>(pTVar7,uVar15,pFVar38)
        ;
        if (iVar39 != -1) {
          lVar40 = (longlong)iVar39 * 0x98 + *(longlong *)&pTVar7->Elements;
          pFVar21 = (FIncludes *)(lVar40 + 0x40);
          if (lVar40 == 0) {
            pFVar21 = (FIncludes *)0x0;
          }
          if (pFVar21 != (FIncludes *)0x0) {
            if ((pFVar21->Includes).ArrayNum != 0) {
              `UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_8>
              ::operator()(&local_4c0,pFVar38,pFVar21,Mandatory);
            }
            if (pFVar21[1].Includes.ArrayNum != 0) {
              `UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_8>
              ::operator()(&local_4c0,pFVar38,pFVar21 + 1,Optional);
            }
          }
        }
        uVar27 = (ulonglong)(uVar37 + 1);
        uVar44 = uVar44 + 1;
        pFVar33 = local_568;
        uVar8 = uVar44;
      } while ((int)(uVar37 + 1) < (int)local_588);
    }
  }
  goto LAB_14622bf20;
}

// operator() @ 1504e7460

bool __thiscall
`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l59::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<669288872609317177>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<669288872609317177>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

