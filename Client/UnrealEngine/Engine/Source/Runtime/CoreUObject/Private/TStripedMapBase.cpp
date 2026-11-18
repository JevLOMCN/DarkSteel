// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// ~TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy> @ 141f23330

void __thiscall
TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
::
~TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
          (TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
           *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FBucket *SRWLock;
  
  SRWLock = this[1].Buckets;
  lVar6 = 0x20;
  puVar5 = (undefined8 *)&this[1].Buckets[0].Map.field_0x40;
  do {
    lVar6 = lVar6 + -1;
    *(undefined4 *)(puVar5 + -10) = 0;
    SRWLock = SRWLock + -1;
    pvVar1 = (void *)puVar5[-0xb];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FPackageId,FPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar5 + -0x13));
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    puVar5 = puVar5 + -0xb;
  } while (lVar6 != 0);
  return;
}

// ~TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy> @ 142309c10

void __thiscall
TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
::
~TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
          (TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
           *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FBucket *SRWLock;
  
  SRWLock = this[1].Buckets;
  lVar6 = 0x20;
  puVar5 = (undefined8 *)&this[1].Buckets[0].Map.field_0x40;
  do {
    lVar6 = lVar6 + -1;
    *(undefined4 *)(puVar5 + -10) = 0;
    SRWLock = SRWLock + -1;
    pvVar1 = (void *)puVar5[-0xb];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FPackageId,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar5 + -0x13));
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    puVar5 = puVar5 + -0xb;
  } while (lVar6 != 0);
  return;
}

// operator() @ 14230c8f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
::ForEach<`FAsyncLoadingThread2::FlushLoading'::__l218::<lambda_1>_>'::__l2::<lambda_1>::operator()
          (void *this,
          TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FAsyncPackage2 *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14230c98d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14230c98d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14230ca90;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14230ca90:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FPackageId,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(FAsyncPackage2 **)
               (*(longlong *)param_1 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    if (this_00 != (FAsyncPackage2 *)0x0) {
      FAsyncPackage2::DumpState(this_00);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// operator() @ 14230cb10

void __thiscall
`TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
::ForEach<`FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>_>'::__l2::<lambda_1>::operator()
          (void *this,
          TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14230cbad;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14230cbad:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14230ccb0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14230ccb0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FPackageId,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    `FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::
    operator()<TTuple<FPackageId,FAsyncPackage2_*>_>
              (*(void **)this,
               (TTuple<FPackageId,FAsyncPackage2_*> *)
               (*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x18));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator() @ 14230cd30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
::ForEach<`FAsyncPackage2::DumpStateImpl'::__l24::<lambda_6>_>'::__l2::<lambda_1>::operator()
          (void *this,
          TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
          *param_1)

{
  undefined1 *puVar1;
  FPackageId *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  FAsyncPackage2 *pFVar7;
  code *pcVar8;
  TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
  *pTVar9;
  bool bVar10;
  FPackageId *pFVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  int local_res18;
  FString local_a8;
  TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14230cdcd;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_8c = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iStack_7c = local_res18 + -1 + local_78;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_14230cdcd:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14230ced0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14230ced0:
  do {
    pTVar9 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FPackageId,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_1))
    {
      return;
    }
    plVar6 = *(longlong **)this;
    pFVar7 = *(FAsyncPackage2 **)
              (*(longlong *)pTVar9 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (pFVar7 != (FAsyncPackage2 *)0x0) {
      pFVar11 = (pFVar7->HeaderData).ImportedPackageIds.DataPtr;
      pFVar2 = pFVar11 + (pFVar7->HeaderData).ImportedPackageIds.ArrayNum;
      if (pFVar11 != pFVar2) {
        do {
          if (pFVar11->Id == *(ulong64 *)(*plVar6 + 0x200)) {
            if (2 < (byte)LogStreaming._0_1_) {
              `FAsyncPackage2::DumpStateImpl'::__l2::<lambda_2>::operator()
                        ((void *)plVar6[2],&local_a8,pFVar7);
              TCString<wchar_t>::Spc(*(int *)plVar6[1]);
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u___s_referenced__1508b8698,
                         (FLogCategoryBase *)&LogStreaming);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            break;
          }
          pFVar11 = pFVar11 + 1;
        } while (pFVar11 != pFVar2);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// FindRef @ 142323870

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncPackage2 * __thiscall
TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
::FindRef(TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
          *this,FPackageId *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FAsyncPackage2 *pFVar4;
  FAsyncPackage2 **ppFVar5;
  FBucket *SRWLock;
  
  uVar1 = (uint)param_1->Id;
  SRWLock = this->Buckets + (uVar1 & 0x1f);
  if (SRWLock == (FBucket *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAsyncPackage2 *)(*pcVar2)();
      return pFVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  ppFVar5 = TMapBase<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
            ::FindByHash<FPackageId>
                      ((TMapBase<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
                        *)&SRWLock->Map,uVar1,param_1);
  if (ppFVar5 == (FAsyncPackage2 **)0x0) {
    pFVar4 = (FAsyncPackage2 *)0x0;
  }
  else {
    pFVar4 = *ppFVar5;
  }
  if (SRWLock != (FBucket *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar4;
}

