// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FChaosArchiveContext @ 14373c960

FChaosArchiveContext * __thiscall
Chaos::FChaosArchiveContext::FChaosArchiveContext(FChaosArchiveContext *this)

{
  (this->TagToObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagToObject).ArrayNum = 0;
  (this->TagToObject).ArrayMax = 0;
  *(undefined8 *)&this->ObjToTag = 0;
  *(undefined8 *)&(this->ObjToTag).field_0x8 = 0;
  *(undefined8 *)&(this->ObjToTag).field_0x20 = 0;
  *(undefined4 *)&(this->ObjToTag).field_0x28 = 0;
  *(undefined4 *)&(this->ObjToTag).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjToTag).field_0x34 = 0;
  *(undefined4 *)&(this->ObjToTag).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjToTag).field_0x40 = 0;
  *(undefined4 *)&(this->ObjToTag).field_0x48 = 0;
  *(undefined8 *)&(this->PendingAdds).Elements = 0;
  *(undefined8 *)&(this->PendingAdds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingAdds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingAdds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingAdds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAdds).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingAdds).Elements.field_0x30 = 0xffffffff;
  (this->PendingAdds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingAdds).HashSize = 0;
  this->TagCount = 0;
  *(undefined8 *)&this->ObjToSharedPtrHolder = 0;
  *(undefined8 *)&(this->ObjToSharedPtrHolder).field_0x8 = 0;
  *(undefined8 *)&(this->ObjToSharedPtrHolder).field_0x20 = 0;
  *(undefined4 *)&(this->ObjToSharedPtrHolder).field_0x28 = 0;
  *(undefined4 *)&(this->ObjToSharedPtrHolder).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjToSharedPtrHolder).field_0x34 = 0;
  *(undefined4 *)&(this->ObjToSharedPtrHolder).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjToSharedPtrHolder).field_0x40 = 0;
  *(undefined4 *)&(this->ObjToSharedPtrHolder).field_0x48 = 0;
  *(undefined8 *)&this->ObjToRefCountPtrHolder = 0;
  *(undefined8 *)&(this->ObjToRefCountPtrHolder).field_0x8 = 0;
  *(undefined8 *)&(this->ObjToRefCountPtrHolder).field_0x20 = 0;
  *(undefined4 *)&(this->ObjToRefCountPtrHolder).field_0x28 = 0;
  *(undefined4 *)&(this->ObjToRefCountPtrHolder).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjToRefCountPtrHolder).field_0x34 = 0;
  *(undefined4 *)&(this->ObjToRefCountPtrHolder).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjToRefCountPtrHolder).field_0x40 = 0;
  *(undefined4 *)&(this->ObjToRefCountPtrHolder).field_0x48 = 0;
  return this;
}

// ~FChaosArchiveContext @ 14373eb80

void __thiscall Chaos::FChaosArchiveContext::~FChaosArchiveContext(FChaosArchiveContext *this)

{
  undefined1 *puVar1;
  TMap<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ForElementType<FSetElementId> FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TMap<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_10c;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  puVar1 = &(this->ObjToSharedPtrHolder).field_0x10;
  iVar17 = 0;
  iVar3 = *(int *)&(this->ObjToSharedPtrHolder).field_0x28;
  iVar19 = 0;
  uVar11 = 1;
  iVar12 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->ObjToSharedPtrHolder).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar12 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14373ec2d;
      uVar16 = puVar20[lVar14 + 1];
    }
    uVar11 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    iVar12 = iVar19 + -1 + local_res20;
    if (iVar3 < iVar12) {
      iVar12 = iVar3;
    }
  }
LAB_14373ec2d:
  uVar16 = *(uint *)&(this->ObjToSharedPtrHolder).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uVar11,iVar17);
  TStack_c8.CurrentBitIndex = iVar12;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = iVar19;
  uStack_a8 = CONCAT44(uStack_10c,
                       *(int *)&(this->ObjToSharedPtrHolder).field_0x8 -
                       *(int *)&(this->ObjToSharedPtrHolder).field_0x34);
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = *(uint *)&(this->ObjToSharedPtrHolder).field_0x28;
  if (uVar16 != uVar11) {
    puVar18 = *(undefined1 **)&(this->ObjToSharedPtrHolder).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar17;
      uVar15 = uVar15 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14373ed40;
      uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar11 < (int)uVar16) {
      uVar16 = uVar11;
    }
  }
LAB_14373ed40:
  while( true ) {
    if (*(int *)&(this->ObjToSharedPtrHolder).field_0x8 -
        *(int *)&(this->ObjToSharedPtrHolder).field_0x34 != (int)uStack_a8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::FChaosArchiveContext::FSharedPtrHolder_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c8.CurrentBitIndex == uVar16) &&
       (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar4 = *(undefined8 **)
              (*(longlong *)&this->ObjToSharedPtrHolder + 8 +
              (longlong)TStack_c8.CurrentBitIndex * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  iVar19 = 0;
  iVar17 = 0;
  uVar11 = 1;
  puVar1 = &(this->ObjToRefCountPtrHolder).field_0x10;
  iVar3 = *(int *)&(this->ObjToRefCountPtrHolder).field_0x28;
  this_00 = &this->ObjToRefCountPtrHolder;
  iVar13 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->ObjToRefCountPtrHolder).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar19;
      iVar17 = iVar17 + 0x20;
      iVar19 = iVar19 + 1;
      iVar13 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14373ee2e;
      uVar16 = puVar20[lVar14 + 1];
    }
    uVar11 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar13 = iVar17 + -1 + (int)lVar14;
    if (iVar3 < iVar13) {
      iVar13 = iVar3;
    }
  }
LAB_14373ee2e:
  uVar16 = *(uint *)&(this->ObjToRefCountPtrHolder).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar11,iVar19);
  TStack_98.CurrentBitIndex = iVar13;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar16 >> 5;
  TStack_98._28_4_ = iVar12;
  TStack_98.BaseBitIndex = iVar17;
  uStack_78 = CONCAT44(uStack_d4,
                       *(int *)&(this->ObjToRefCountPtrHolder).field_0x8 -
                       *(int *)&(this->ObjToRefCountPtrHolder).field_0x34);
  local_a0 = this_00;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = *(uint *)&(this->ObjToRefCountPtrHolder).field_0x28;
  if (uVar16 != uVar11) {
    puVar18 = *(undefined1 **)&(this->ObjToRefCountPtrHolder).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar19 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar19;
      uVar15 = uVar15 + 0x20;
      iVar19 = iVar19 + 1;
      uVar16 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14373ef30;
      uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar11 < (int)uVar16) {
      uVar16 = uVar11;
    }
  }
LAB_14373ef30:
  while( true ) {
    pTVar9 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_98.CurrentBitIndex == uVar16) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this_00))
    break;
    puVar4 = *(undefined8 **)(*(longlong *)pTVar9 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  *(undefined4 *)&(this->ObjToRefCountPtrHolder).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ObjToRefCountPtrHolder).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  *(undefined4 *)&(this->ObjToSharedPtrHolder).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ObjToSharedPtrHolder).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::FChaosArchiveContext::FSharedPtrHolder_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::FChaosArchiveContext::FSharedPtrHolder_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::FChaosArchiveContext::FSharedPtrHolder_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjToSharedPtrHolder);
  (this->PendingAdds).HashSize = 0;
  FVar6 = (this->PendingAdds).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingAdds).Elements);
  *(undefined4 *)&(this->ObjToTag).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ObjToTag).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjToTag);
  pFVar7 = (this->TagToObject).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

