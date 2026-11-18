// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// FindBase @ 145ca41e0

bool __thiscall
FRayTracingPipelineCache::FindBase
          (FRayTracingPipelineCache *this,FRayTracingPipelineStateInitializer *param_1,
          FRayTracingPipelineState **param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  FRayTracingPipelineState *pFVar12;
  uint uVar13;
  undefined1 *puVar15;
  uint uVar16;
  uint *puVar18;
  undefined1 local_res20 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  FRayTracingPipelineState *pFVar14;
  FRayTracingPipelineState *pFVar17;
  
  if (this == (FRayTracingPipelineCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar3 = *(uint *)&(this->FullPipelines).field_0x28;
  puVar1 = &(this->FullPipelines).field_0x10;
  pFVar12 = (FRayTracingPipelineState *)0x0;
  uVar13 = 0;
  uVar7 = 1;
  uVar16 = 0;
  uVar8 = uVar13;
  if (uVar3 != 0) {
    puVar18 = *(uint **)&(this->FullPipelines).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar8 = *puVar18;
    pFVar14 = pFVar12;
    pFVar17 = pFVar12;
    uVar16 = 0;
    uVar13 = 0;
    while (uVar8 == 0) {
      iVar11 = (int)pFVar14;
      uVar16 = (int)pFVar17 + 0x20;
      pFVar17 = (FRayTracingPipelineState *)(ulonglong)uVar16;
      uVar13 = iVar11 + 1;
      pFVar14 = (FRayTracingPipelineState *)(ulonglong)uVar13;
      uVar8 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_145ca42ae;
      uVar8 = puVar18[(longlong)iVar11 + 1];
    }
    uVar7 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar8 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar8) {
      uVar8 = uVar3;
    }
  }
LAB_145ca42ae:
  uVar9 = *(uint *)&(this->FullPipelines).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar7,uVar13);
  uVar13 = uVar9 & 0xffffffe0;
  TStack_60.CurrentBitIndex = uVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar9 >> 5;
  TStack_60._28_4_ = uVar8;
  TStack_60.BaseBitIndex = uVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->FullPipelines).field_0x8 -
                       *(int *)&(this->FullPipelines).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || ((int)uVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar3 = *(uint *)&(this->FullPipelines).field_0x28;
  if (uVar9 != uVar3) {
    puVar15 = *(undefined1 **)&(this->FullPipelines).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar9 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145ca43c0;
      uVar16 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar9 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar9) {
      uVar9 = uVar3;
    }
  }
LAB_145ca43c0:
  do {
    if (*(int *)&(this->FullPipelines).field_0x8 - *(int *)&(this->FullPipelines).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      if (pFVar12 != (FRayTracingPipelineState *)0x0) {
        *param_2 = pFVar12;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      return pFVar12 != (FRayTracingPipelineState *)0x0;
    }
    lVar10 = (longlong)TStack_60.CurrentBitIndex * 0x38 + *(longlong *)&this->FullPipelines;
    pFVar14 = *(FRayTracingPipelineState **)(lVar10 + 0x28);
    if ((((pFVar14->RHIPipeline).Reference != (FRHIRayTracingPipelineState *)0x0) &&
        (*(int *)(lVar10 + 4) == *(int *)((longlong)&param_1->_padding_ + 4))) &&
       ((*(longlong *)(lVar10 + 8) == param_1->_padding_ &&
        ((*(longlong *)(lVar10 + 0x10) == param_1->_padding_ &&
         (*(longlong *)(lVar10 + 0x20) == param_1->_padding_)))))) {
      if (pFVar12 != (FRayTracingPipelineState *)0x0) {
        bVar5 = pFVar12->LastFrameHit < pFVar14->LastFrameHit;
        if (pFVar12->LastFrameHit == pFVar14->LastFrameHit) {
          bVar5 = pFVar12->HitsAcrossFrames < pFVar14->HitsAcrossFrames;
        }
        if (!bVar5) goto LAB_145ca4445;
      }
      pFVar12 = pFVar14;
    }
LAB_145ca4445:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetResources @ 145cac510

void __thiscall
FRayTracingPipelineCache::GetResources
          (FRayTracingPipelineCache *this,
          TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FRHIResource *local_148;
  FRHIResource *local_140;
  ulonglong local_138;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *local_f0;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  if (this == (FRayTracingPipelineCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar9 = *(int *)&(this->FullPipelines).field_0x28;
  puVar1 = &(this->FullPipelines).field_0x10;
  local_130 = &this->FullPipelines;
  iStack_128 = 0;
  local_110 = 0;
  local_138 = 1;
  uStack_124 = 1;
  iStack_114 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(this->FullPipelines).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uStack_124 = *puVar14;
    while (uStack_124 == 0) {
      lVar10 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      uStack_124 = 1;
      iStack_114 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_145cac5de;
      uStack_124 = puVar14[lVar10 + 1];
    }
    uStack_124 = -uStack_124 & uStack_124;
    uVar3 = (ulonglong)uStack_124 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_100 = (int)lVar10;
    iStack_114 = local_110 + -1 + local_100;
    if (iVar9 < iStack_114) {
      iStack_114 = iVar9;
    }
  }
LAB_145cac5de:
  uStack_10c = local_3c;
  iStack_108 = *(int *)&(this->FullPipelines).field_0x8 - *(int *)&(this->FullPipelines).field_0x34;
  uVar11 = *(uint *)&(this->FullPipelines).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uStack_124,iStack_128);
  uStack_118 = 0xffffffff;
  TStack_b0.CurrentBitIndex = iStack_114;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = local_110;
  uStack_90 = CONCAT44(uStack_104,iStack_108);
  local_120 = puVar1;
  local_f0 = local_130;
  local_b8 = local_130;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar2 = local_f0;
  uVar4 = *(uint *)&(this->FullPipelines).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->FullPipelines).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145cac700;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_fc = (int)lVar10;
    uVar11 = local_fc + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_145cac700:
  while( true ) {
    pTVar7 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b0.CurrentBitIndex == uVar11) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar10 = *(longlong *)((longlong)TStack_b0.CurrentBitIndex * 0x38 + 0x28 + *(longlong *)pTVar7);
    if (lVar10 != 0) {
      local_148 = *(FRHIResource **)(lVar10 + 0x20);
      if (local_148 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_148);
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 < pFVar5 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == param_1->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar9 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar9 * 8) = 0;
      *(FRHIResource **)(pFVar5 + (longlong)iVar9 * 8) = local_148;
      local_148 = (FRHIResource *)0x0;
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  iStack_e0 = 0;
  local_c8 = 0;
  puVar1 = &(this->PartialPipelines).field_0x10;
  iVar9 = *(int *)&(this->PartialPipelines).field_0x28;
  pTVar2 = &this->PartialPipelines;
  iStack_cc = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(this->PartialPipelines).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_145cac8b1;
      uVar11 = puVar14[lVar10 + 1];
    }
    local_138 = (ulonglong)(-uVar11 & uVar11);
    uVar3 = local_138 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f8 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_f8;
    if (iVar9 < iStack_cc) {
      iStack_cc = iVar9;
    }
  }
LAB_145cac8b1:
  uVar11 = *(uint *)&(this->PartialPipelines).field_0x28;
  uStack_dc = (undefined4)local_138;
  iStack_c4 = iStack_114;
  iStack_c0 = *(int *)&(this->PartialPipelines).field_0x8 -
              *(int *)&(this->PartialPipelines).field_0x34;
  uVar15 = uVar11 & 0xffffffe0;
  uStack_d0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_80._28_4_ = iStack_114;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = pTVar2;
  local_d8 = puVar1;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->PartialPipelines).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->PartialPipelines).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145cac9d0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f4 = (int)lVar10;
    uVar11 = local_f4 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_145cac9d0:
  while( true ) {
    pTVar7 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_80.CurrentBitIndex == uVar11) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar10 = *(longlong *)((longlong)TStack_80.CurrentBitIndex * 0x38 + 0x28 + *(longlong *)pTVar7);
    if (lVar10 != 0) {
      local_140 = *(FRHIResource **)(lVar10 + 0x20);
      if (local_140 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_140);
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_140) &&
          ((FScriptContainerElement *)&local_140 < pFVar5 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == param_1->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar9 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar9 * 8) = 0;
      *(FRHIResource **)(pFVar5 + (longlong)iVar9 * 8) = local_140;
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
                    /* WARNING: Could not recover jumptable at 0x000145cacb19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Shutdown @ 145cc06e0

void __thiscall FRayTracingPipelineCache::Shutdown(FRayTracingPipelineCache *this)

{
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 *puVar17;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_10c;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if (this == (FRayTracingPipelineCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar13 = 0;
  iVar2 = *(int *)&(this->FullPipelines).field_0x28;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->FullPipelines).field_0x10;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar2 != 0) {
    puVar16 = *(uint **)&(this->FullPipelines).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_c8.Array;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_145cc079f;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar8 = iVar15 + -1 + local_res20;
    if (iVar2 < iVar8) {
      iVar8 = iVar2;
    }
  }
LAB_145cc079f:
  uVar12 = *(uint *)&(this->FullPipelines).field_0x28;
  puVar17 = &(this->FullPipelines).field_0x10;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uVar7,iVar13);
  TStack_c8.CurrentBitIndex = iVar8;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = iVar15;
  uStack_a8 = CONCAT44(uStack_10c,
                       *(int *)&(this->FullPipelines).field_0x8 -
                       *(int *)&(this->FullPipelines).field_0x34);
  if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->FullPipelines).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->FullPipelines).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar17;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_145cc08ae;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_145cc08ae:
  while( true ) {
    if (*(int *)&(this->FullPipelines).field_0x8 - *(int *)&(this->FullPipelines).field_0x34 !=
        (int)uStack_a8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c8.CurrentBitIndex == uVar12) &&
       (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) break;
    lVar10 = *(longlong *)&(this->FullPipelines).field_0x0 +
             (longlong)TStack_c8.CurrentBitIndex * 0x38;
    if (*(FPipelineStateSync **)(lVar10 + 0x28) != (FPipelineStateSync *)0x0) {
      FPipelineStateSync::WaitCompletion(*(FPipelineStateSync **)(lVar10 + 0x28));
      puVar3 = *(undefined8 **)(lVar10 + 0x28);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *(undefined8 *)(lVar10 + 0x28) = 0;
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iVar15 = 0;
  iVar13 = 0;
  uVar7 = 1;
  this_00 = &this->PartialPipelines;
  iVar2 = *(int *)&(this->PartialPipelines).field_0x28;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PartialPipelines).field_0x10;
  iVar9 = 0;
  if (iVar2 != 0) {
    puVar16 = *(uint **)&(this->PartialPipelines).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_98.Array;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      iVar13 = iVar13 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_145cc09af;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar13 + -1 + (int)lVar10;
    if (iVar2 < iVar9) {
      iVar9 = iVar2;
    }
  }
LAB_145cc09af:
  puVar17 = &(this->PartialPipelines).field_0x10;
  uVar12 = *(uint *)&(this->PartialPipelines).field_0x28;
  TStack_98.CurrentBitIndex = iVar9;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar7,iVar15);
  iVar15 = (int)uVar12 >> 5;
  TStack_98._28_4_ = iVar8;
  TStack_98.BaseBitIndex = iVar13;
  uStack_78 = CONCAT44(uStack_d4,
                       *(int *)&(this->PartialPipelines).field_0x8 -
                       *(int *)&(this->PartialPipelines).field_0x34);
  local_a0 = this_00;
  if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->PartialPipelines).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->PartialPipelines).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar17;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      uVar11 = uVar11 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_145cc0ad0;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_145cc0ad0:
  while( true ) {
    pTVar5 = local_a0;
    if (*(int *)(&local_a0->field_0x0 + 8) - *(int *)(&local_a0->field_0x0 + 0x34) != (int)uStack_78
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_98.CurrentBitIndex == uVar12) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) && (pTVar5 == this_00)
       ) break;
    lVar10 = *(longlong *)&pTVar5->field_0x0 + (longlong)TStack_98.CurrentBitIndex * 0x38;
    if (*(FPipelineStateSync **)(lVar10 + 0x28) != (FPipelineStateSync *)0x0) {
      FPipelineStateSync::WaitCompletion(*(FPipelineStateSync **)(lVar10 + 0x28));
      puVar3 = *(undefined8 **)(lVar10 + 0x28);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *(undefined8 *)(lVar10 + 0x28) = 0;
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
           *)&this->FullPipelines);
  TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
           *)this_00);
                    /* WARNING: Could not recover jumptable at 0x000145cc0b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Trim @ 145cc59a0

void __thiscall FRayTracingPipelineCache::Trim(FRayTracingPipelineCache *this,int param_1)

{
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *this_00;
  FEntry *pFVar1;
  ulonglong uVar2;
  ulong64 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  FRayTracingPipelineState *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  code *pcVar11;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *pTVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  ForElementType<_public:_void___cdecl_FRayTracingPipelineCache::Trim(int)_::_2_::FEntry> FVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForElementType<_public:_void___cdecl_FRayTracingPipelineCache::Trim(int)_::_2_::FEntry> local_108;
  int local_100;
  int local_fc;
  ulong64 local_f8;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  int local_bc;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FEntry local_88;
  
  if (this == (FRayTracingPipelineCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  this_00 = &this->FullPipelines;
  uVar21 = *(int *)&(this->FullPipelines).field_0x8 - *(int *)&(this->FullPipelines).field_0x34;
  if (param_1 <= (int)uVar21) {
    local_108.Data = (FEntry *)0x0;
    local_100 = 0;
    local_fc = 0;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if (0 < (int)uVar21) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FRayTracingPipelineCache::Trim_::__l2::FEntry>_>
                (0x40,8,uVar21,&local_108,0,&local_fc);
    }
    iVar14 = local_100;
    FVar20.Data = local_108.Data;
    iVar18 = *(int *)&(this->FullPipelines).field_0x28;
    iStack_e8 = 0;
    local_f8 = GFrameCounter;
    uStack_e4 = 1;
    iStack_d4 = iStack_e8;
    local_d0 = iStack_e8;
    if (iVar18 != 0) {
      puVar22 = *(uint **)&(this->FullPipelines).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)&(this->FullPipelines).field_0x10;
      }
      uVar21 = *puVar22;
      iStack_e8 = 0;
      local_d0 = 0;
      while (uVar21 == 0) {
        lVar15 = (longlong)iStack_e8;
        local_d0 = local_d0 + 0x20;
        iStack_e8 = iStack_e8 + 1;
        iStack_d4 = iVar18;
        if ((int)((iVar18 + -1 >> 0x1f & 0x1fU) + iVar18 + -1) >> 5 < iStack_e8) goto LAB_145cc5ae3;
        uVar21 = puVar22[lVar15 + 1];
      }
      uStack_e4 = -uVar21 & uVar21;
      uVar2 = (ulonglong)uStack_e4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_c0 = (int)lVar15;
      iStack_d4 = local_d0 + -1 + local_c0;
      if (iVar18 < iStack_d4) {
        iStack_d4 = iVar18;
      }
    }
LAB_145cc5ae3:
    local_e0 = &(this->FullPipelines).field_0x10;
    uVar21 = *(uint *)&(this->FullPipelines).field_0x28;
    iStack_c8 = *(int *)&(this->FullPipelines).field_0x8 - *(int *)&(this->FullPipelines).field_0x34
    ;
    uVar23 = uVar21 & 0xffffffe0;
    uStack_d8 = 0xffffffff;
    TStack_b0._padding_ = CONCAT44(uStack_e4,iStack_e8);
    TStack_b0.CurrentBitIndex = iStack_d4;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar21 >> 5;
    TStack_b0._28_4_ = iStack_d4;
    TStack_b0.BaseBitIndex = local_d0;
    uStack_90 = CONCAT44(uStack_c4,iStack_c8);
    local_f0 = this_00;
    iStack_cc = iStack_d4;
    local_b8 = this_00;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e0;
    if ((((int)uVar21 < 0) || (iVar18 < (int)uVar21)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar7 = local_f8;
    uVar4 = *(uint *)&(this->FullPipelines).field_0x28;
    if (uVar21 != uVar4) {
      puVar5 = *(undefined1 **)&(this->FullPipelines).field_0x20;
      puVar16 = &(this->FullPipelines).field_0x10;
      if (puVar5 != (undefined1 *)0x0) {
        puVar16 = puVar5;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar21 == 0) {
        lVar15 = (longlong)iVar19;
        uVar23 = uVar23 + 0x20;
        iVar19 = iVar19 + 1;
        uVar21 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar19)
        goto LAB_145cc5c10;
        uVar21 = *(uint *)(puVar16 + lVar15 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_bc = (int)lVar15;
      uVar21 = local_bc + -1 + uVar23;
      if ((int)uVar4 < (int)uVar21) {
        uVar21 = uVar4;
      }
    }
LAB_145cc5c10:
    while( true ) {
      pTVar12 = local_b8;
      if (*(int *)(&local_b8->field_0x0 + 8) - *(int *)(&local_b8->field_0x0 + 0x34) !=
          (int)uStack_90) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_b0.CurrentBitIndex == uVar21) &&
          (TStack_b0.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->FullPipelines).field_0x10)) &&
         (pTVar12 == this_00)) break;
      puVar17 = (undefined8 *)
                ((longlong)TStack_b0.CurrentBitIndex * 0x38 + *(longlong *)&pTVar12->field_0x0);
      if ((*(longlong *)(puVar17[5] + 0x38) + 10U <= uVar7) &&
         ((lVar15 = *(longlong *)(puVar17[5] + 0x10), lVar15 == 0 ||
          (*(char *)(lVar15 + 0xd0) != '\0')))) {
        local_88.Key._0_8_ = *puVar17;
        local_88.Key.RayGenHash = puVar17[1];
        local_88.Key.MissHash = puVar17[2];
        local_88.Key.HitGroupHash = puVar17[3];
        local_88.Key.CallableHash = puVar17[4];
        local_88.Pipeline = (FRayTracingPipelineState *)puVar17[5];
        local_88.HitsAcrossFrames = (local_88.Pipeline)->HitsAcrossFrames;
        local_88.LastFrameHit = (local_88.Pipeline)->LastFrameHit;
        if ((FVar20.Data <= &local_88) &&
           ((&local_88 < FVar20.Data + local_fc &&
            (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar13)))) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (iVar14 == local_fc) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FRayTracingPipelineCache::Trim_::__l2::FEntry>_>
                             (0x840,&local_108,&local_fc);
          FVar20.Data = local_108.Data;
        }
        local_100 = iVar14 + 1;
        pFVar1 = FVar20.Data + iVar14;
        (pFVar1->Key).MaxAttributeSizeInBytes = local_88.Key.MaxAttributeSizeInBytes;
        (pFVar1->Key).MaxPayloadSizeInBytes = local_88.Key.MaxPayloadSizeInBytes;
        (pFVar1->Key).RayGenHash = local_88.Key.RayGenHash;
        puVar3 = &FVar20.Data[iVar14].Key.MissHash;
        *puVar3 = local_88.Key.MissHash;
        puVar3[1] = local_88.Key.HitGroupHash;
        puVar3 = &FVar20.Data[iVar14].Key.CallableHash;
        *puVar3 = local_88.Key.CallableHash;
        puVar3[1] = local_88.LastFrameHit;
        FVar20.Data[iVar14].HitsAcrossFrames = local_88.HitsAcrossFrames;
        (&FVar20.Data[iVar14].HitsAcrossFrames)[1] = (ulong64)local_88.Pipeline;
        iVar14 = local_100;
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
    local_res8 = SUB81(this,0);
    AlgoImpl::
    IntroSortInternal<_FRayTracingPipelineCache::Trim_::__l2::FEntry,int,FIdentityFunctor,TDereferenceWrapper<_FRayTracingPipelineCache::Trim_::__l2::FEntry,_FRayTracingPipelineCache::Trim_::__l2::<lambda_1>_>_>
              (FVar20.Data,iVar14,local_res8,(<lambda_1> *)local_res20);
    if (param_1 < *(int *)&(this->FullPipelines).field_0x8 -
                  *(int *)&(this->FullPipelines).field_0x34) {
      do {
        if (iVar14 == 0) break;
        uVar21 = 0;
        if ((int)(iVar14 - 1U) < iVar14) {
          uVar21 = ~(iVar14 - 1U) >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((((FVar20.Data[(longlong)iVar14 + -1].Pipeline)->RHIPipeline).Reference ==
             (FRHIRayTracingPipelineState *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("LastEntry.Pipeline->RHIPipeline",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                ,0xc20,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar15 = (FVar20.Data[(longlong)iVar14 + -1].Pipeline)->_padding_;
        if (((lVar15 != 0) && (*(char *)(lVar15 + 0xd0) == '\0')) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("LastEntry.Pipeline->IsCompilationComplete()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                ,0xc21,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar6 = FVar20.Data[(longlong)iVar14 + -1].Pipeline;
        if (pFVar6 != (FRayTracingPipelineState *)0x0) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
        if (*(int *)&(this->FullPipelines).field_0x8 != *(int *)&(this->FullPipelines).field_0x34) {
          uVar7 = FVar20.Data[(longlong)iVar14 + -1].Key.HitGroupHash;
          uVar8 = FVar20.Data[(longlong)iVar14 + -1].Key.MissHash;
          uVar9 = FVar20.Data[(longlong)iVar14 + -1].Key.RayGenHash;
          uVar10 = FVar20.Data[(longlong)iVar14 + -1].Key.CallableHash;
          TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<FRayTracingPipelineStateSignature>
                    ((TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
                      *)this_00,
                     (int)uVar8 + (int)(uVar8 >> 0x20) * 0x17 ^
                     (int)(uVar7 >> 0x20) * 0x17 + (int)uVar7 ^
                     (int)(uVar9 >> 0x20) * 0x17 + (int)uVar9 ^
                     (int)(uVar10 >> 0x20) * 0x17 + (int)uVar10 ^
                     FVar20.Data[(longlong)iVar14 + -1].Key.MaxPayloadSizeInBytes ^
                     FVar20.Data[(longlong)iVar14 + -1].Key.MaxAttributeSizeInBytes,
                     &FVar20.Data[(longlong)iVar14 + -1].Key);
        }
        if ((iVar14 < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar19 = iVar14 + -1;
        iVar18 = (iVar14 - iVar19) + -1;
        if (iVar18 != 0) {
          memmove(FVar20.Data + iVar19,FVar20.Data + iVar19 + 1,(longlong)iVar18 << 6);
        }
        local_100 = iVar19;
        iVar14 = iVar19;
      } while (param_1 < *(int *)&(this->FullPipelines).field_0x8 -
                         *(int *)&(this->FullPipelines).field_0x34);
    }
    this->LastTrimFrame = local_f8;
    if (FVar20.Data != (FEntry *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(FVar20.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cc5fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

