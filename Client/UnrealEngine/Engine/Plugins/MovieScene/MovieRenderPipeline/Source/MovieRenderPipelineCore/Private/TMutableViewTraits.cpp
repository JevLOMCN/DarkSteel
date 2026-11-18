// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// Close @ 14dcbe730

void __cdecl
UE::Core::Private::
TMutableViewTraits<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
::Close(TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  if (GC::GIsIncrementalReachabilityPending) {
    iVar3 = *(int *)&(param_1->Elements).field_0x28;
    iVar12 = 0;
    iVar14 = 0;
    uVar7 = 1;
    puVar1 = &(param_1->Elements).field_0x10;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dcbe7ed;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar7 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar8 = local_res18 + -1 + iVar14;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14dcbe7ed:
    uVar11 = *(uint *)&(param_1->Elements).field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uVar7,iVar12);
    TStack_50.CurrentBitIndex = iVar8;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_50._28_4_ = iVar8;
    TStack_50.BaseBitIndex = iVar14;
    uStack_30 = CONCAT44(uStack_5c,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar11 != uVar7) {
      puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14dcbe900;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar10;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_14dcbe900:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_30) {
        `TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_50.CurrentBitIndex == uVar11) &&
         (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pUVar4 = *(UObject **)
                (*(longlong *)&param_1->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
      if (pUVar4 != (UObject *)0x0) {
        GC::MarkAsReachable(pUVar4);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    }
  }
  return;
}

// Close @ 14dcbe980

void __cdecl
UE::Core::Private::
TMutableViewTraits<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
::Close(TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  if (GC::GIsIncrementalReachabilityPending) {
    iVar3 = *(int *)&(param_1->Elements).field_0x28;
    iVar12 = 0;
    iVar14 = 0;
    uVar7 = 1;
    puVar1 = &(param_1->Elements).field_0x10;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dcbea3d;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar7 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar8 = local_res18 + -1 + iVar14;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14dcbea3d:
    uVar11 = *(uint *)&(param_1->Elements).field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uVar7,iVar12);
    TStack_50.CurrentBitIndex = iVar8;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_50._28_4_ = iVar8;
    TStack_50.BaseBitIndex = iVar14;
    uStack_30 = CONCAT44(uStack_5c,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar11 != uVar7) {
      puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14dcbeb50;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar10;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_14dcbeb50:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_30) {
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_50.CurrentBitIndex == uVar11) &&
         (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pUVar4 = *(UObject **)
                (*(longlong *)&param_1->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
      if (pUVar4 != (UObject *)0x0) {
        GC::MarkAsReachable(pUVar4);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    }
  }
  return;
}

