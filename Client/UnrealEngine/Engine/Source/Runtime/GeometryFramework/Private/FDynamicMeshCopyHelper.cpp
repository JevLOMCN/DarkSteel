// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// DiscardExpiredMeshes @ 1497078a0

void __cdecl UE::Local::FDynamicMeshCopyHelper::DiscardExpiredMeshes(void)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  double dVar5;
  TConsoleVariableData<int> *pTVar6;
  TMap<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,0>_>
  *pTVar7;
  bool bVar8;
  FDateTime FVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  int local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  TMap<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,0>_>
  *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined4 local_5c;
  
  pTVar6 = CVarDynamicMeshDupeHelperTimeout.Ref;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar2 = pTVar6->ShadowedValue[0];
  local_f8.Data = (FScriptContainerElement *)0x0;
  uStack_d4 = 1;
  local_f0 = 0;
  uStack_d8 = 0;
  local_c0 = 0;
  uVar16 = StashedMeshes._40_4_;
  uStack_c4 = uStack_d8;
  if (uVar16 != 0) {
    puVar18 = (uint *)&StashedMeshes.field_0x10;
    if (StashedMeshes._32_8_ != 0) {
      puVar18 = (uint *)StashedMeshes._32_8_;
    }
    uVar15 = *puVar18;
    local_c0 = 0;
    uStack_d8 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)(int)uStack_d8;
      local_c0 = local_c0 + 0x20;
      uStack_d8 = uStack_d8 + 1;
      uStack_c4 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_d8)
      goto LAB_14970799d;
      uVar15 = puVar18[lVar10 + 1];
    }
    uStack_d4 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_d4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uStack_c4 = (local_c0 - 1) + local_res20;
    if ((int)uVar16 < (int)uStack_c4) {
      uStack_c4 = uVar16;
    }
  }
LAB_14970799d:
  bVar4 = StashedMeshes._40_1_;
  uStack_bc = local_5c;
  iStack_b8 = StashedMeshes._8_4_ - StashedMeshes._52_4_;
  uVar15 = uVar16 & 0xffffffe0;
  uStack_c8 = 0xffffffff;
  local_e0 = &StashedMeshes;
  TStack_a8._padding_ = CONCAT44(uStack_d4,uStack_d8);
  local_d0 = 0x154c8bb30;
  TStack_a8.CurrentBitIndex = uStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  local_b0 = &StashedMeshes;
  TStack_a8._28_4_ = local_5c;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  iVar12 = (int)uVar16 >> 5;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&StashedMeshes.field_0x10;
  uVar17 = uVar16;
  if ((int)uVar16 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar17 = StashedMeshes._40_4_;
  }
  dVar5 = __real_3e7ad7f29abcaf48;
  if (uVar16 != uVar17) {
    lVar10 = 0x154c8bb30;
    if (StashedMeshes._32_8_ != 0) {
      lVar10 = StashedMeshes._32_8_;
    }
    uVar16 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_149707ac0;
      uVar16 = *(uint *)(lVar10 + 4 + lVar11 * 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_e8 = (int)lVar10;
    uVar16 = local_e8 + -1 + uVar15;
    if ((int)uVar17 < (int)uVar16) {
      uVar16 = uVar17;
    }
  }
LAB_149707ac0:
  while( true ) {
    pTVar7 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a8.CurrentBitIndex == uVar16) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&StashedMeshes.field_0x10)) &&
       (pTVar7 == &StashedMeshes)) break;
    pFVar13 = (FScriptContainerElement *)
              (*(longlong *)pTVar7 + (longlong)TStack_a8.CurrentBitIndex * 0x40);
    FVar9 = FDateTime::Now();
    if ((double)iVar2 < (double)(*(longlong *)FVar9.Ticks - *(longlong *)(pFVar13 + 0x30)) * dVar5)
    {
      if (((local_f8.Data <= pFVar13) && (pFVar13 < local_f8.Data + (longlong)local_f0._4_4_ * 4))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar12 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar12 + 1);
      *(uint *)(local_f8.Data + (longlong)iVar12 * 4) = *(uint *)pFVar13;
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  iVar2 = (int)local_f0;
  pFVar13 = local_f8.Data + (longlong)(int)local_f0 * 4;
  FVar14.Data = local_f8.Data;
  while( true ) {
    if ((int)local_f0 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar14.Data == pFVar13) break;
    local_res18[0] = *(uint *)FVar14.Data;
    if (StashedMeshes._8_4_ != StashedMeshes._52_4_) {
      TSet<TTuple<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh>,TDefaultMapHashableKeyFuncs<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh>,TDefaultMapHashableKeyFuncs<int,UE::Local::FDynamicMeshCopyHelper::FStashedMesh,0>,FDefaultSetAllocator>
                         *)&StashedMeshes,local_res18[0],(int *)local_res18);
    }
    FVar14.Data = FVar14.Data + 4;
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

