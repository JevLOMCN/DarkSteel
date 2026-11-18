// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// FMemoryChunkStore @ 1432814d0

FMemoryChunkStore * __thiscall
BuildPatchServices::FMemoryChunkStore::FMemoryChunkStore
          (FMemoryChunkStore *this,int param_1,IChunkEvictionPolicy *param_2,IChunkStore *param_3,
          IMemoryChunkStoreStat *param_4,IChunkReferenceTracker *param_5)

{
  this->StoreSize = param_1;
  this->_padding_ = (longlong)&___7FMemoryChunkStore_BuildPatchServices__6B_;
  *(undefined8 *)&(this->Store).field_0x10 = 0;
  *(undefined8 *)&(this->Store).field_0x18 = 0;
  *(undefined8 *)&(this->Store).field_0x38 = 0;
  *(undefined8 *)&(this->Store).field_0x48 = 0;
  *(undefined8 *)&this->Store = 0;
  *(undefined8 *)&(this->Store).field_0x8 = 0;
  *(undefined8 *)&(this->Store).field_0x20 = 0;
  *(undefined4 *)&(this->Store).field_0x28 = 0;
  *(undefined4 *)&(this->Store).field_0x2c = 0x80;
  *(undefined4 *)&(this->Store).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Store).field_0x34 = 0;
  *(undefined8 *)&(this->Store).field_0x40 = 0;
  this->MemoryChunkStoreStat = param_4;
  this->OptionalChunkReferenceTracker = param_5;
  this->EvictionPolicy = param_2;
  this->OverflowStore = param_3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LostChunkCallbackCs,4000);
  *(undefined8 *)&this->LostChunkCallback = 0;
  *(undefined8 *)&(this->LostChunkCallback).field_0x28 = 0;
  (this->LastGetId).A = 0;
  (this->LastGetId).B = 0;
  (this->LastGetId).C = 0;
  (this->LastGetId).D = 0;
  (this->LastGetData).Ptr = (IChunkDataAccess *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ThreadLockCs,4000);
  (**(code **)((longlong)*this->MemoryChunkStoreStat + 0x28))
            (this->MemoryChunkStoreStat,this->StoreSize);
  return this;
}

// ~FMemoryChunkStore @ 143288740

void __thiscall BuildPatchServices::FMemoryChunkStore::~FMemoryChunkStore(FMemoryChunkStore *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  IChunkDataAccess *pIVar4;
  longlong *plVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar14 = 0;
  puVar1 = &(this->Store).field_0x10;
  this->_padding_ = (longlong)&___7FMemoryChunkStore_BuildPatchServices__6B_;
  iVar3 = *(int *)&(this->Store).field_0x28;
  iVar16 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->Store).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1432887ed;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar10 = iVar16 + -1 + local_res10;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_1432887ed:
  uVar13 = *(uint *)&(this->Store).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar14);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Store).field_0x8 - *(int *)&(this->Store).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->Store).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->Store).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1432888f0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_1432888f0:
  while( true ) {
    if (*(int *)&(this->Store).field_0x8 - *(int *)&(this->Store).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)((longlong)*this->MemoryChunkStoreStat + 0x10))();
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if ((this->LastGetData).Ptr != (IChunkDataAccess *)0x0) {
    (**(code **)((longlong)*this->MemoryChunkStoreStat + 0x10))
              (this->MemoryChunkStoreStat,&this->LastGetId);
  }
  (**(code **)((longlong)*this->MemoryChunkStoreStat + 0x20))(this->MemoryChunkStoreStat,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadLockCs);
  pIVar4 = (this->LastGetData).Ptr;
  if (pIVar4 != (IChunkDataAccess *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  if (*(longlong *)&this->LostChunkCallback != 0) {
    plVar5 = *(longlong **)&(this->LostChunkCallback).field_0x28;
    plVar12 = (longlong *)&(this->LostChunkCallback).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar12 = plVar5;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LostChunkCallbackCs);
  *(undefined4 *)&(this->Store).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Store).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Store);
  this->_padding_ = (longlong)&___7IChunkStore_BuildPatchServices__6B_;
  return;
}

// DumpToOverflow @ 1432cec20

void __thiscall BuildPatchServices::FMemoryChunkStore::DumpToOverflow(FMemoryChunkStore *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar2;
  int iVar3;
  IChunkStore *pIVar4;
  IChunkDataAccess *pIVar5;
  IChunkStore IVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_res18;
  IChunkDataAccess *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar12 = 0;
  if (this->OverflowStore != (IChunkStore *)0x0) {
    iVar3 = *(int *)&(this->Store).field_0x28;
    iVar14 = 0;
    puVar1 = &(this->Store).field_0x10;
    uVar9 = 1;
    iVar10 = iVar12;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->Store).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar16 = *puVar15;
      iVar12 = 0;
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar10 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1432ced00;
        uVar16 = puVar15[lVar11 + 1];
      }
      uVar9 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res10 = (int)lVar11;
      iVar10 = iVar14 + -1 + local_res10;
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
    }
LAB_1432ced00:
    uVar16 = *(uint *)&(this->Store).field_0x28;
    uVar17 = uVar16 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar9,iVar12);
    TStack_70.CurrentBitIndex = iVar10;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar16 >> 5;
    TStack_70._28_4_ = iVar10;
    TStack_70.BaseBitIndex = iVar14;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(this->Store).field_0x8 - *(int *)&(this->Store).field_0x34);
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar9 = *(uint *)&(this->Store).field_0x28;
    if (uVar16 != uVar9) {
      puVar13 = *(undefined1 **)&(this->Store).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar12;
        uVar17 = uVar17 + 0x20;
        iVar12 = iVar12 + 1;
        uVar16 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1432cee10;
        uVar16 = *(uint *)(puVar13 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar16 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar16) {
        uVar16 = uVar9;
      }
    }
LAB_1432cee10:
    while( true ) {
      if (*(int *)&(this->Store).field_0x8 - *(int *)&(this->Store).field_0x34 != (int)uStack_50) {
        `TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == uVar16) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pIVar4 = this->OverflowStore;
      lVar11 = (longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)&this->Store;
      pcVar7 = *(code **)((longlong)*pIVar4 + 8);
      local_res18 = *(undefined8 *)(lVar11 + 0x10);
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (*pcVar7)(pIVar4,lVar11,&local_res18);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    pIVar5 = (this->LastGetData).Ptr;
    if (pIVar5 != (IChunkDataAccess *)0x0) {
      pIVar4 = this->OverflowStore;
      IVar6 = *pIVar4;
      (this->LastGetData).Ptr = (IChunkDataAccess *)0x0;
      local_res20 = pIVar5;
      (**(code **)((longlong)IVar6 + 8))(pIVar4,&this->LastGetId,&local_res20);
    }
  }
  bVar8 = 1 < *(int *)&(this->Store).field_0x48;
  if (!bVar8) {
    TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                      *)&this->Store);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->Store,0,*(int *)&(this->Store).field_0x8);
  *(undefined4 *)&(this->Store).field_0x8 = 0;
  if (*(int *)&(this->Store).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->Store,0,(int *)&(this->Store).field_0xc);
  }
  *(undefined4 *)&(this->Store).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Store).field_0x34 = 0;
  iVar12 = *(int *)&(this->Store).field_0x2c;
  *(undefined4 *)&(this->Store).field_0x28 = 0;
  if ((iVar12 < 0) || (0x80 < iVar12)) {
    *(undefined4 *)&(this->Store).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Store).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->Store).field_0x48 = 1;
    TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
              *)&this->Store);
  }
  pIVar5 = (this->LastGetData).Ptr;
  if (pIVar5 != (IChunkDataAccess *)0x0) {
    (this->LastGetData).Ptr = (IChunkDataAccess *)0x0;
    (**(code **)*pIVar5)(pIVar5,1);
  }
  (this->LastGetId).C = 0;
  (this->LastGetId).D = 0;
  (this->LastGetId).A = 0;
  (this->LastGetId).B = 0;
  (**(code **)((longlong)*this->MemoryChunkStoreStat + 0x20))
            (this->MemoryChunkStoreStat,
             *(int *)&(this->Store).field_0x8 - *(int *)&(this->Store).field_0x34);
                    /* WARNING: Could not recover jumptable at 0x0001432cefb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ExecLostChunkCallback @ 1432cfa40

void __thiscall
BuildPatchServices::FMemoryChunkStore::ExecLostChunkCallback(FMemoryChunkStore *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lpCriticalSection = &this->LostChunkCallbackCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(void **)&this->LostChunkCallback != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->LostChunkCallback);
      pcVar1 = *(code **)&this->LostChunkCallback;
      plVar2 = *(longlong **)&(this->LostChunkCallback).field_0x28;
      plVar4 = (longlong *)&(this->LostChunkCallback).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar4 = plVar2;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001432cfabe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Get @ 1432d1650

IChunkDataAccess * __thiscall
BuildPatchServices::FMemoryChunkStore::Get(FMemoryChunkStore *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FGuid *pFVar1;
  TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
  *pTVar2;
  IChunkReferenceTracker *pIVar3;
  IChunkDataAccess *pIVar4;
  IChunkStore *pIVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
  *pTVar11;
  undefined8 *puVar12;
  bool bVar13;
  IChunkDataAccess *local_res8;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = &this->LastGetId;
    if (((param_1->D != (this->LastGetId).D || param_1->C != (this->LastGetId).C) ||
        param_1->B != (this->LastGetId).B) || param_1->A != pFVar1->A) {
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId88,"MemoryStore_Get",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\MemoryChunkStore.cpp"
                   ,0x58);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId88);
      }
      pTVar2 = &this->LastGetData;
      if ((pTVar2->Ptr != (IChunkDataAccess *)0x0) &&
         ((((this->LastGetId).C != 0 || (this->LastGetId).B != 0) || (this->LastGetId).D != 0) ||
          pFVar1->A != 0)) {
        uVar10 = CityHash64((char *)pFVar1,0x10);
        iVar9 = TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FGuid>
                          ((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                            *)&this->Store,(uint)uVar10,pFVar1);
        if (iVar9 == -1) {
          pIVar3 = this->OptionalChunkReferenceTracker;
          if ((pIVar3 == (IChunkReferenceTracker *)0x0) ||
             (iVar9 = (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,pFVar1), iVar9 != 0)) {
            local_res8 = pTVar2->Ptr;
            pTVar2->Ptr = (IChunkDataAccess *)0x0;
            PutInternal(this,pFVar1,(IChunkDataAccess *)&local_res8,false);
          }
          else {
            (**(code **)((longlong)*this->MemoryChunkStoreStat + 0x10))
                      (this->MemoryChunkStoreStat,pFVar1);
          }
        }
      }
      (this->LastGetId).C = 0;
      (this->LastGetId).D = 0;
      pFVar1->A = 0;
      pFVar1->B = 0;
      pIVar4 = pTVar2->Ptr;
      if (pIVar4 != (IChunkDataAccess *)0x0) {
        pTVar2->Ptr = (IChunkDataAccess *)0x0;
        (**(code **)*pIVar4)(pIVar4,1);
      }
      uVar10 = CityHash64((char *)param_1,0x10);
      iVar9 = TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>
                        ((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                          *)&this->Store,(uint)uVar10,param_1);
      if (iVar9 == -1) {
        pIVar5 = this->OverflowStore;
        if (pIVar5 != (IChunkStore *)0x0) {
          puVar12 = (undefined8 *)
                    (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,&local_res8,param_1);
          if (pTVar2 != (TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
                         *)puVar12) {
            pIVar4 = pTVar2->Ptr;
            pTVar2->Ptr = (IChunkDataAccess *)*puVar12;
            *puVar12 = 0;
            if (pIVar4 != (IChunkDataAccess *)0x0) {
              (**(code **)*pIVar4)(pIVar4,1);
            }
          }
          if (local_res8 != (IChunkDataAccess *)0x0) {
            (**(code **)*local_res8)(local_res8,1);
          }
          if (pTVar2->Ptr != (IChunkDataAccess *)0x0) {
            (**(code **)((longlong)*this->MemoryChunkStoreStat + 8))
                      (this->MemoryChunkStoreStat,param_1);
            UpdateStoreUsage(this);
          }
        }
      }
      else {
        pTVar11 = TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
                  ::FindChecked((TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
                                 *)&this->Store,param_1);
        if (pTVar2 != pTVar11) {
          pIVar4 = pTVar2->Ptr;
          pTVar2->Ptr = pTVar11->Ptr;
          pTVar11->Ptr = (IChunkDataAccess *)0x0;
          if (pIVar4 != (IChunkDataAccess *)0x0) {
            (**(code **)*pIVar4)(pIVar4,1);
          }
        }
        if (*(int *)&(this->Store).field_0x8 != *(int *)&(this->Store).field_0x34) {
          uVar10 = CityHash64((char *)param_1,0x10);
          TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                               *)&this->Store,(uint)uVar10,param_1);
        }
      }
      if (pTVar2->Ptr != (IChunkDataAccess *)0x0) {
        uVar6 = param_1->B;
        uVar7 = param_1->C;
        uVar8 = param_1->D;
        pFVar1->A = param_1->A;
        pFVar1->B = uVar6;
        (this->LastGetId).C = uVar7;
        (this->LastGetId).D = uVar8;
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    pIVar4 = (this->LastGetData).Ptr;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pIVar4;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSize @ 1432d9570

int __thiscall BuildPatchServices::FMemoryChunkStore::GetSize(FMemoryChunkStore *this)

{
  return this->StoreSize;
}

// Put @ 1432e28f0

void __thiscall
BuildPatchServices::FMemoryChunkStore::Put
          (FMemoryChunkStore *this,FGuid *param_1,
          TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
          param_2)

{
  IChunkDataAccess IVar1;
  IChunkDataAccess local_res18;
  
  local_res18 = *param_2.Ptr;
  *param_2.Ptr = (IChunkDataAccess)0x0;
  PutInternal(this,param_1,&local_res18,true);
  IVar1 = *param_2.Ptr;
  if (IVar1 != (IChunkDataAccess)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432e292a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
    return;
  }
  return;
}

// PutInternal @ 1432e29d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FMemoryChunkStore::PutInternal
          (FMemoryChunkStore *this,FGuid *param_1,
          TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
          param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FGuid *pFVar1;
  ulonglong uVar2;
  IChunkStore *pIVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
  *pTVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  IChunkDataAccess IVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined1 local_208;
  undefined1 local_207 [7];
  longlong *local_200;
  int iStack_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  TPairInitializer<FGuid_const_&,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_&&>
  local_1d0;
  IChunkDataAccess *local_1c0;
  IChunkDataAccess *local_1b8;
  longlong *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  int local_190;
  uint uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FGuid *local_120;
  IChunkDataAccess *local_118;
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  lpCriticalSection = &this->ThreadLockCs;
  local_1b8 = param_2.Ptr;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_1432e30b7:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_120 = param_1;
  local_118 = param_2.Ptr;
  TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FGuid_const_&,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_&&>_>
            ((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
              *)&this->Store,&local_1d0,(bool *)&local_120);
  if (param_3) {
    (**(code **)((longlong)*this->MemoryChunkStoreStat + 8))(this->MemoryChunkStoreStat,param_1);
    UpdateStoreUsage(this);
    local_218 = local_e8;
    local_6c = 0x80;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_e8._0_8_ = 0;
    local_e8._8_8_ = 0;
    local_c8 = (uint *)0x0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    (**(code **)((longlong)*this->EvictionPolicy + 8))
              (this->EvictionPolicy,&this->Store,this->StoreSize,local_98);
    uVar16 = local_70;
    uStack_1f4 = 1;
    local_1e0 = 0;
    uStack_1e4 = 0;
    iStack_1f8 = 0;
    if (local_70 != 0) {
      puVar15 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar15 = local_78;
      }
      uVar17 = *puVar15;
      local_1e0 = 0;
      while (uVar17 == 0) {
        lVar11 = (longlong)iStack_1f8;
        local_1e0 = local_1e0 + 0x20;
        iStack_1f8 = iStack_1f8 + 1;
        uStack_1e4 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1f8)
        goto LAB_1432e2b91;
        uVar17 = puVar15[lVar11 + 1];
      }
      uStack_1f4 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_1f4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1d0.Key._4_4_ = (int)lVar11;
      uStack_1e4 = local_1e0 + -1 + local_1d0.Key._4_4_;
      if ((int)local_70 < (int)uStack_1e4) {
        uStack_1e4 = local_70;
      }
    }
LAB_1432e2b91:
    local_200 = (longlong *)local_98;
    uStack_1dc = local_f4;
    local_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_1d8 = local_98._8_4_ - local_64;
    uVar17 = local_70 & 0xffffffe0;
    TStack_178._padding_ = CONCAT44(uStack_1f4,iStack_1f8);
    uStack_1e8 = 0xffffffff;
    TStack_178.CurrentBitIndex = uStack_1e4;
    TStack_178.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)local_70 >> 5;
    TStack_178._28_4_ = local_f4;
    TStack_178.BaseBitIndex = local_1e0;
    uStack_158 = CONCAT44(uStack_1d4,iStack_1d8);
    bVar10 = (byte)local_70;
    local_180 = local_200;
    TStack_178.Array = local_1f0;
    if (((int)local_70 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar16 != local_70) {
      puVar15 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar15 = local_78;
      }
      uVar16 = -1 << (bVar10 & 0x1f) & puVar15[iVar14];
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar14;
        uVar17 = uVar17 + 0x20;
        iVar14 = iVar14 + 1;
        uVar16 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1432e2cb8;
        uVar16 = puVar15[lVar11 + 1];
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1d0.Value._0_4_ = (int)lVar11;
      uVar16 = (int)local_1d0.Value + -1 + uVar17;
      if ((int)local_70 < (int)uVar16) {
        uVar16 = local_70;
      }
    }
LAB_1432e2cb8:
    while( true ) {
      plVar4 = local_180;
      if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)uStack_158) {
        local_208 = 0;
        `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
      }
      uVar17 = local_c0;
      if (((TStack_178.CurrentBitIndex == uVar16) &&
          (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar4 == (longlong *)local_98)) break;
      pFVar1 = (FGuid *)(*plVar4 + (longlong)TStack_178.CurrentBitIndex * 0x18);
      if (*(int *)&(this->Store).field_0x8 != *(int *)&(this->Store).field_0x34) {
        uVar7 = CityHash64((char *)pFVar1,0x10);
        TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                             *)&this->Store,(uint)uVar7,pFVar1);
      }
      (**(code **)((longlong)*this->MemoryChunkStoreStat + 0x10))(this->MemoryChunkStoreStat,pFVar1)
      ;
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    }
    iStack_1a8 = 0;
    local_190 = 0;
    uStack_1a4 = 1;
    uStack_194 = 0;
    if (local_c0 != 0) {
      puVar15 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar15 = local_c8;
      }
      uVar16 = *puVar15;
      while (uVar16 == 0) {
        lVar11 = (longlong)iStack_1a8;
        local_190 = local_190 + 0x20;
        iStack_1a8 = iStack_1a8 + 1;
        uStack_194 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a8)
        goto LAB_1432e2dd4;
        uVar16 = puVar15[lVar11 + 1];
      }
      uStack_1a4 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1d0.Value._4_4_ = (int)lVar11;
      uStack_194 = local_190 + -1 + local_1d0.Value._4_4_;
      if ((int)local_c0 < (int)uStack_194) {
        uStack_194 = local_c0;
      }
    }
LAB_1432e2dd4:
    local_1b0 = (longlong *)local_e8;
    uVar16 = local_c0 & 0xffffffe0;
    uStack_18c = uStack_1e4;
    local_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    iStack_188 = local_e8._8_4_ - local_b4;
    uStack_198 = 0xffffffff;
    TStack_148.CurrentBitIndex = uStack_194;
    TStack_148.UnvisitedBitMask = 0xffffffff;
    TStack_148._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
    iVar14 = (int)local_c0 >> 5;
    TStack_148._28_4_ = uStack_1e4;
    TStack_148.BaseBitIndex = local_190;
    uStack_128 = CONCAT44(uStack_184,iStack_188);
    bVar10 = (byte)local_c0;
    local_150 = local_1b0;
    TStack_148.Array = local_1a0;
    if (((int)local_c0 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar17 != local_c0) {
      puVar15 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar15 = local_c8;
      }
      uVar17 = -1 << (bVar10 & 0x1f) & puVar15[iVar14];
      while (uVar17 == 0) {
        lVar11 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar17 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1432e2ee0;
        uVar17 = puVar15[lVar11 + 1];
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar17 = (int)lVar11 + -1 + uVar16;
      if ((int)local_c0 < (int)uVar17) {
        uVar17 = local_c0;
      }
    }
LAB_1432e2ee0:
    do {
      plVar4 = local_150;
      if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
        `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_207);
      }
      if (((TStack_148.CurrentBitIndex == uVar17) &&
          (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
         (plVar4 == (longlong *)local_e8)) goto LAB_1432e301a;
      pIVar3 = this->OverflowStore;
      pFVar1 = (FGuid *)(*plVar4 + (longlong)TStack_148.CurrentBitIndex * 0x18);
      if (pIVar3 == (IChunkStore *)0x0) {
        lpCriticalSection_00 = &this->LostChunkCallbackCs;
        if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_1432e30b7;
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        if (*(void **)&this->LostChunkCallback != (void *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)&this->LostChunkCallback);
          plVar4 = *(longlong **)&(this->LostChunkCallback).field_0x28;
          pcVar5 = *(code **)&this->LostChunkCallback;
          plVar12 = (longlong *)&(this->LostChunkCallback).field_0x10;
          if (plVar4 != (longlong *)0x0) {
            plVar12 = plVar4;
          }
          uVar9 = (**(code **)(*plVar12 + 8))();
          (*pcVar5)(uVar9,pFVar1);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      }
      else {
        pcVar5 = *(code **)((longlong)*pIVar3 + 8);
        pTVar8 = TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
                 ::FindChecked((TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
                                *)&this->Store,pFVar1);
        local_1c0 = pTVar8->Ptr;
        pTVar8->Ptr = (IChunkDataAccess *)0x0;
        (*pcVar5)(pIVar3,pFVar1,&local_1c0);
      }
      if (*(int *)&(this->Store).field_0x8 != *(int *)&(this->Store).field_0x34) {
        uVar7 = CityHash64((char *)pFVar1,0x10);
        TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                             *)&this->Store,(uint)uVar7,pFVar1);
      }
      (**(code **)((longlong)*this->MemoryChunkStoreStat + 0x18))(this->MemoryChunkStoreStat,pFVar1)
      ;
      TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
    } while( true );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  IVar13 = *param_2.Ptr;
LAB_1432e307e:
  if (IVar13 != (IChunkDataAccess)0x0) {
    (*(code *)**(undefined8 **)IVar13)(IVar13,1);
  }
  return;
LAB_1432e301a:
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  IVar13 = *local_1b8;
  goto LAB_1432e307e;
}

// Remove @ 1432e93e0

TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
 __thiscall BuildPatchServices::FMemoryChunkStore::Remove(FMemoryChunkStore *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ulong64 uVar2;
  TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
  *pTVar3;
  IChunkDataAccess *pIVar4;
  IChunkDataAccess *pIVar5;
  FGuid *in_R8;
  TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
  local_28 [2];
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar4 = (IChunkDataAccess *)0x0;
    if (((in_R8->C == (this->LastGetId).C && in_R8->D == (this->LastGetId).D) &&
        in_R8->B == (this->LastGetId).B) && in_R8->A == (this->LastGetId).A) {
      pTVar3 = &this->LastGetData;
      (this->LastGetId).C = 0;
      (this->LastGetId).D = 0;
      (this->LastGetId).A = 0;
      (this->LastGetId).B = 0;
      pIVar4 = (IChunkDataAccess *)0x0;
      if (local_28 != pTVar3) {
        pIVar4 = pTVar3->Ptr;
        pTVar3->Ptr = (IChunkDataAccess *)0x0;
      }
    }
    uVar2 = CityHash64((char *)in_R8,0x10);
    iVar1 = TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                        *)&this->Store,(uint)uVar2,in_R8);
    pIVar5 = pIVar4;
    if (iVar1 != -1) {
      pTVar3 = TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
               ::FindChecked((TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
                              *)&this->Store,in_R8);
      if (local_28 != pTVar3) {
        pIVar5 = pTVar3->Ptr;
        pTVar3->Ptr = (IChunkDataAccess *)0x0;
        if (pIVar4 != (IChunkDataAccess *)0x0) {
          (**(code **)*pIVar4)(pIVar4,1);
        }
      }
      if (*(int *)&(this->Store).field_0x8 != *(int *)&(this->Store).field_0x34) {
        uVar2 = CityHash64((char *)in_R8,0x10);
        TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                             *)&this->Store,(uint)uVar2,in_R8);
      }
    }
    UpdateStoreUsage(this);
    *(IChunkDataAccess **)param_1 = pIVar5;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>
            )(IChunkDataAccess *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetLostChunkCallback @ 1432eda70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FMemoryChunkStore::SetLostChunkCallback
          (FMemoryChunkStore *this,TFunction<void___cdecl(FGuid_const_&)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_38;
  lpCriticalSection = &this->LostChunkCallbackCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar12 = *(undefined8 *)&param_1->field_0x8;
    uVar1 = *(undefined4 *)&this->LostChunkCallback;
    uVar2 = *(undefined4 *)&(this->LostChunkCallback).field_0x4;
    uVar3 = *(undefined4 *)&(this->LostChunkCallback).field_0x8;
    uVar4 = *(undefined4 *)&(this->LostChunkCallback).field_0xc;
    uVar5 = *(undefined4 *)&(this->LostChunkCallback).field_0x10;
    uVar6 = *(undefined4 *)&(this->LostChunkCallback).field_0x14;
    uVar7 = *(undefined4 *)&(this->LostChunkCallback).field_0x18;
    uVar8 = *(undefined4 *)&(this->LostChunkCallback).field_0x1c;
    uVar13 = *(undefined8 *)&(this->LostChunkCallback).field_0x20;
    uVar14 = *(undefined8 *)&(this->LostChunkCallback).field_0x28;
    *(undefined8 *)&this->LostChunkCallback = *(undefined8 *)param_1;
    *(undefined8 *)&(this->LostChunkCallback).field_0x8 = uVar12;
    uVar9 = *(undefined4 *)&param_1->field_0x14;
    uVar10 = *(undefined4 *)&param_1->field_0x18;
    uVar11 = *(undefined4 *)&param_1->field_0x1c;
    *(undefined4 *)&(this->LostChunkCallback).field_0x10 = *(undefined4 *)&param_1->field_0x10;
    *(undefined4 *)&(this->LostChunkCallback).field_0x14 = uVar9;
    *(undefined4 *)&(this->LostChunkCallback).field_0x18 = uVar10;
    *(undefined4 *)&(this->LostChunkCallback).field_0x1c = uVar11;
    uVar9 = *(undefined4 *)&param_1->field_0x24;
    uVar10 = *(undefined4 *)&param_1->field_0x28;
    uVar11 = *(undefined4 *)&param_1->field_0x2c;
    *(undefined4 *)&(this->LostChunkCallback).field_0x20 = *(undefined4 *)&param_1->field_0x20;
    *(undefined4 *)&(this->LostChunkCallback).field_0x24 = uVar9;
    *(undefined4 *)&(this->LostChunkCallback).field_0x28 = uVar10;
    *(undefined4 *)&(this->LostChunkCallback).field_0x2c = uVar11;
    *(undefined4 *)param_1 = uVar1;
    *(undefined4 *)&param_1->field_0x4 = uVar2;
    *(undefined4 *)&param_1->field_0x8 = uVar3;
    *(undefined4 *)&param_1->field_0xc = uVar4;
    *(undefined4 *)&param_1->field_0x10 = uVar5;
    *(undefined4 *)&param_1->field_0x14 = uVar6;
    *(undefined4 *)&param_1->field_0x18 = uVar7;
    *(undefined4 *)&param_1->field_0x1c = uVar8;
    *(undefined8 *)&param_1->field_0x20 = uVar13;
    *(undefined8 *)&param_1->field_0x28 = uVar14;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)param_1 != 0) {
      plVar15 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar15 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateStoreUsage @ 1432f6480

void __thiscall BuildPatchServices::FMemoryChunkStore::UpdateStoreUsage(FMemoryChunkStore *this)

{
  FGuid *pFVar1;
  int iVar2;
  ulong64 uVar3;
  
  pFVar1 = &this->LastGetId;
  if ((((this->LastGetId).D != 0 || (this->LastGetId).C != 0) || (this->LastGetId).B != 0) ||
      pFVar1->A != 0) {
    uVar3 = CityHash64((char *)pFVar1,0x10);
    iVar2 = TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>,FDefaultSetAllocator>
                        *)&this->Store,(uint)uVar3,pFVar1);
    if (iVar2 == -1) {
      iVar2 = 1;
      goto LAB_1432f64ca;
    }
  }
  iVar2 = 0;
LAB_1432f64ca:
                    /* WARNING: Could not recover jumptable at 0x0001432f64e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->MemoryChunkStoreStat + 0x20))
            (this->MemoryChunkStoreStat,
             (*(int *)&(this->Store).field_0x8 - *(int *)&(this->Store).field_0x34) + iVar2);
  return;
}

