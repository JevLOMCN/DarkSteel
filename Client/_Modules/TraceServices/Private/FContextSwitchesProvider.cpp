// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 24

// FContextSwitchesProvider @ 14d420d00

FContextSwitchesProvider * __thiscall
TraceServices::FContextSwitchesProvider::FContextSwitchesProvider
          (FContextSwitchesProvider *this,IAnalysisSession *param_1)

{
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IContextSwitchesProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  (this->Lock).RWLock.Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->TraceToSystemThreadIdMap = 0;
  *(undefined8 *)&(this->TraceToSystemThreadIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->TraceToSystemThreadIdMap).field_0x20 = 0;
  this->Session = param_1;
  *(undefined4 *)&(this->TraceToSystemThreadIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->TraceToSystemThreadIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TraceToSystemThreadIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->TraceToSystemThreadIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TraceToSystemThreadIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->TraceToSystemThreadIdMap).field_0x48 = 0;
  *(undefined8 *)&this->SystemToTraceThreadIdMap = 0;
  *(undefined8 *)&(this->SystemToTraceThreadIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->SystemToTraceThreadIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->SystemToTraceThreadIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->SystemToTraceThreadIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemToTraceThreadIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->SystemToTraceThreadIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SystemToTraceThreadIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->SystemToTraceThreadIdMap).field_0x48 = 0;
  *(undefined8 *)&this->Threads = 0;
  *(undefined8 *)&(this->Threads).field_0x8 = 0;
  *(undefined8 *)&(this->Threads).field_0x20 = 0;
  *(undefined4 *)&(this->Threads).field_0x28 = 0;
  *(undefined4 *)&(this->Threads).field_0x2c = 0x80;
  *(undefined4 *)&(this->Threads).field_0x34 = 0;
  *(undefined4 *)&(this->Threads).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Threads).field_0x40 = 0;
  *(undefined4 *)&(this->Threads).field_0x48 = 0;
  (this->CpuCores).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CpuCores).ArrayNum = 0;
  (this->CpuCores).ArrayMax = 0;
  this->NumCpuCores = 0;
  return this;
}

// ~FContextSwitchesProvider @ 14d42af00

void __thiscall
TraceServices::FContextSwitchesProvider::~FContextSwitchesProvider(FContextSwitchesProvider *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  BOOLEAN BVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TArray<TraceServices::TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>_*,TSizedDefaultAllocator<32>_>
  *pTVar19;
  TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>,FDefaultSetAllocator>
  *pTVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>,FDefaultSetAllocator>
  *local_c0;
  TMap<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  FScriptContainerElement *local_80;
  TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>,FDefaultSetAllocator>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iStack_b0 = 0;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IContextSwitchesProvider__;
  pTVar20 = (TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>,FDefaultSetAllocator>
             *)&this->Threads;
  local_a8 = &(this->Threads).field_0x10;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  iVar3 = *(int *)&(this->Threads).field_0x28;
  local_98 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->Threads).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_a8;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14d42afbe;
      uVar16 = puVar18[lVar11 + 1];
    }
    uStack_ac = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_ac * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_88 = (int)lVar11;
    iStack_9c = local_98 + -1 + local_88;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_14d42afbe:
  uVar16 = *(uint *)&(this->Threads).field_0x28;
  puVar2 = &(this->Threads).field_0x10;
  uVar14 = uVar16 & 0xffffffe0;
  iStack_90 = *(int *)&(this->Threads).field_0x8 - *(int *)&(this->Threads).field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_9c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
  iVar12 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iStack_9c;
  TStack_70.BaseBitIndex = local_98;
  uStack_50 = CONCAT44(uStack_8c,iStack_90);
  local_c0 = pTVar20;
  local_b8 = (TMap<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>_>
              *)pTVar20;
  iStack_94 = iStack_9c;
  local_78 = pTVar20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->Threads).field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->Threads).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d42b0c0;
      uVar16 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_84 = (int)lVar11;
    uVar16 = local_84 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14d42b0c0:
  while( true ) {
    pTVar8 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar16) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar20))
    break;
    pvVar5 = *(void **)(*(longlong *)&pTVar8->Elements + 8 +
                       (longlong)TStack_70.CurrentBitIndex * 0x18);
    if (pvVar5 != (void *)0x0) {
      iVar3 = *(int *)((longlong)pvVar5 + 0x10);
      lVar11 = *(longlong *)((longlong)pvVar5 + 8);
      lVar15 = (longlong)iVar3 * 0x10 + lVar11;
      while( true ) {
        if (*(int *)((longlong)pvVar5 + 0x10) != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (lVar11 == lVar15) break;
        lVar11 = lVar11 + 0x10;
      }
      if (*(void **)((longlong)pvVar5 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar5 + 8));
      }
      ::operator_delete(pvVar5,0x38);
      pTVar20 = local_c0;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>,FDefaultSetAllocator>
  ::Reset(pTVar20);
  pTVar19 = &this->CpuCores;
  pFVar21 = (pTVar19->AllocatorInstance).Data;
  iVar3 = (this->CpuCores).ArrayNum;
  pFVar13 = pFVar21 + (longlong)iVar3 * 8;
  local_80 = pFVar13;
  while( true ) {
    if ((this->CpuCores).ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TraceServices::TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar21 == pFVar13) break;
    pvVar5 = *(void **)pFVar21;
    if (pvVar5 != (void *)0x0) {
      iVar12 = *(int *)((longlong)pvVar5 + 0x10);
      lVar11 = *(longlong *)((longlong)pvVar5 + 8);
      lVar15 = (longlong)iVar12 * 0x10 + lVar11;
      while( true ) {
        if (*(int *)((longlong)pvVar5 + 0x10) != iVar12) {
          local_c8[0] = 0;
          `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_c8);
        }
        if (lVar11 == lVar15) break;
        lVar11 = lVar11 + 0x10;
      }
      if (*(void **)((longlong)pvVar5 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar5 + 8));
      }
      ::operator_delete(pvVar5,0x38);
      pFVar13 = local_80;
    }
    pFVar21 = pFVar21 + 8;
  }
  (this->CpuCores).ArrayNum = 0;
  if ((this->CpuCores).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar19->AllocatorInstance,0,&(this->CpuCores).ArrayMax);
  }
  pFVar13 = (pTVar19->AllocatorInstance).Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  pTVar20 = local_c0;
  local_c0->HashSize = 0;
  FVar6 = (local_c0->Hash).SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&pTVar20->Elements);
  *(undefined4 *)&(this->SystemToTraceThreadIdMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->SystemToTraceThreadIdMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemToTraceThreadIdMap);
  *(undefined4 *)&(this->TraceToSystemThreadIdMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->TraceToSystemThreadIdMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TraceToSystemThreadIdMap);
  BVar10 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar10 == '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  return;
}

// AddThreadInfo @ 14d43e000

void __thiscall
TraceServices::FContextSwitchesProvider::AddThreadInfo
          (FContextSwitchesProvider *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint local_res10 [2];
  uint local_res18 [4];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (local_res18[0] != 0) {
    if (*(int *)&(this->TraceToSystemThreadIdMap).field_0x8 !=
        *(int *)&(this->TraceToSystemThreadIdMap).field_0x34) {
      puVar6 = *(undefined1 **)&(this->TraceToSystemThreadIdMap).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->TraceToSystemThreadIdMap).field_0x38;
      }
      uVar3 = *(uint *)(puVar6 + (ulonglong)
                                 (*(int *)&(this->TraceToSystemThreadIdMap).field_0x48 - 1U &
                                 local_res10[0]) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar5 = (uint *)((longlong)(int)uVar3 * 0x10 +
                           *(longlong *)&this->TraceToSystemThreadIdMap);
          if (*puVar5 == local_res10[0]) {
            puVar4 = puVar5 + 1;
            if (puVar5 == (uint *)0x0) {
              puVar4 = (uint *)0x0;
            }
            if (puVar4 != (uint *)0x0) {
              if (local_res10[0] == 2) {
                if (*puVar4 != local_res18[0]) goto LAB_14d43e0ed;
              }
              else if ((*puVar4 != local_res18[0]) &&
                      (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_6530492868715347582>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\ContextSwitches.cpp"
                                          ,0x182,"OldSystemThreadId == SystemThreadId"), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            break;
          }
          uVar3 = puVar5[2];
        } while (uVar3 != 0xffffffff);
      }
    }
    TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
    ::Emplace<unsigned_int_const_&,unsigned_int_const_&>
              ((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                *)&this->TraceToSystemThreadIdMap,local_res10,local_res18);
LAB_14d43e0ed:
    TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
    ::Emplace<unsigned_int_const_&,unsigned_int_const_&>
              ((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                *)&this->SystemToTraceThreadIdMap,local_res18,local_res10);
  }
  return;
}

// AddThreadName @ 14d43e120

void __thiscall
TraceServices::FContextSwitchesProvider::AddThreadName
          (FContextSwitchesProvider *this,uint param_1,uint param_2,TStringView<wchar_t> *param_3)

{
  return;
}

// AddTimingEvent @ 14d43e560

void __thiscall
TraceServices::FContextSwitchesProvider::AddTimingEvent
          (FContextSwitchesProvider *this,uint param_1,double param_2,double param_3,uint param_4)

{
  TMap<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>_>
  *this_00;
  int *piVar1;
  TArray<TraceServices::TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  *pTVar8;
  ILinearAllocator *pIVar9;
  FContextSwitch *pFVar10;
  FCpuCoreEvent *pFVar11;
  undefined1 *puVar12;
  int iVar13;
  TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  *pTVar14;
  TPairInitializer<unsigned_int_const_&,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*_&&>
  local_res8;
  TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  *local_res18 [2];
  TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
  ***local_68;
  TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  **local_60;
  
  local_res8.Value._0_4_ = param_1;
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  this_00 = &this->Threads;
  pTVar14 = (TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
             *)0x0;
  if (*(int *)&(this->Threads).field_0x8 != *(int *)&(this->Threads).field_0x34) {
    puVar12 = *(undefined1 **)&(this->Threads).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->Threads).field_0x38;
    }
    iVar6 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->Threads).field_0x48 - 1U & (uint)local_res8.Value) *
                    4);
    if (iVar6 != -1) {
      do {
        lVar3 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x18) ==
            (uint)local_res8.Value) {
          pTVar8 = (TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                    *)(lVar3 + 8);
          if (lVar3 == 0) {
            pTVar8 = pTVar14;
          }
          if (pTVar8 != (TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                         *)0x0) goto LAB_14d43e692;
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x10);
      } while (iVar6 != -1);
    }
  }
  pTVar8 = ::operator_new(0x38);
  local_res18[0] = pTVar14;
  if (pTVar8 != (TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                 *)0x0) {
    pIVar9 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar8->Allocator = pIVar9;
    (pTVar8->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar8->PagesArray).ArrayNum = 0;
    (pTVar8->PagesArray).ArrayMax = 0;
    pTVar8->FirstPage = (TPagedArrayPage<TraceServices::FCpuCoreEvent> *)0x0;
    pTVar8->LastPage = (TPagedArrayPage<TraceServices::FCpuCoreEvent> *)0x0;
    pTVar8->PageSize = 0x1000;
    pTVar8->TotalItemCount = 0;
    local_res18[0] = pTVar8;
  }
  local_68 = &local_res8.Value;
  local_60 = local_res18;
  TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*_&&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_68);
  pTVar8 = (TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
            *)(*(longlong *)&this_00->field_0x0 + ((longlong)(int)local_res8.Key * 3 + 1) * 8);
LAB_14d43e692:
  pFVar10 = TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
            ::PushBack((TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
                        *)pTVar8->Allocator);
  piVar1 = &(this->CpuCores).ArrayNum;
  pTVar2 = &this->CpuCores;
  pFVar10->Start = param_2;
  pFVar10->End = param_3;
  pFVar10->CoreNumber = param_4;
  uVar7 = *piVar1;
  if (uVar7 <= param_4) {
    iVar13 = (param_4 - uVar7) + 1;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar13,&pTVar2->AllocatorInstance,piVar1,&(this->CpuCores).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8,0,(longlong)iVar13 << 3);
  }
  uVar7 = 0;
  if ((int)param_4 < (this->CpuCores).ArrayNum) {
    uVar7 = ~param_4 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = *(TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
             **)((pTVar2->AllocatorInstance).Data + (longlong)(int)param_4 * 8);
  if (pTVar8 == (TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                 *)0x0) {
    pTVar8 = ::operator_new(0x38);
    if (pTVar8 != (TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                   *)0x0) {
      pIVar9 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
      pTVar8->Allocator = pIVar9;
      (pTVar8->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->PagesArray).ArrayNum = 0;
      (pTVar8->PagesArray).ArrayMax = 0;
      pTVar8->FirstPage = (TPagedArrayPage<TraceServices::FCpuCoreEvent> *)0x0;
      pTVar8->LastPage = (TPagedArrayPage<TraceServices::FCpuCoreEvent> *)0x0;
      pTVar8->PageSize = 0x1000;
      pTVar8->TotalItemCount = 0;
      pTVar14 = pTVar8;
    }
    this->NumCpuCores = this->NumCpuCores + 1;
    uVar7 = 0;
    if ((int)param_4 < (this->CpuCores).ArrayNum) {
      uVar7 = ~param_4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
      **)((pTVar2->AllocatorInstance).Data + (longlong)(int)param_4 * 8) = pTVar14;
    pTVar8 = pTVar14;
  }
  pFVar11 = TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
            ::PushBack(pTVar8);
  pFVar11->Start = param_2;
  pFVar11->End = param_3;
  pFVar11->SystemThreadId = (uint)local_res8.Value;
  return;
}

// BeginEdit @ 14d441970

void __thiscall TraceServices::FContextSwitchesProvider::BeginEdit(FContextSwitchesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9b90))
  ;
  return;
}

// BeginRead @ 14d441f80

void __thiscall TraceServices::FContextSwitchesProvider::BeginRead(FContextSwitchesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9b90));
  return;
}

// EditAccessCheck @ 14d44ff20

void __thiscall
TraceServices::FContextSwitchesProvider::EditAccessCheck(FContextSwitchesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::WriteAccessCheck
            ((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9b90));
  return;
}

// EndEdit @ 14d451450

void __thiscall TraceServices::FContextSwitchesProvider::EndEdit(FContextSwitchesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9b90));
  return;
}

// EndRead @ 14d4518d0

void __thiscall TraceServices::FContextSwitchesProvider::EndRead(FContextSwitchesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9b90));
  return;
}

// EnumerateContextSwitches @ 14d4520e0

void __thiscall
TraceServices::FContextSwitchesProvider::EnumerateContextSwitches
          (FContextSwitchesProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EContextSwitchEnumerationResult___cdecl(TraceServices::FContextSwitch_const_&)>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
  *pTVar4;
  ulonglong uVar5;
  TPagedArrayPage<TraceServices::FContextSwitch> *pTVar6;
  longlong *plVar7;
  FContextSwitch *pFVar8;
  FContextSwitch *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  (**(code **)(this->_padding_ + 0x18))();
  pTVar4 = GetContextSwitches(this,param_1);
  if (pTVar4 == (TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
                 *)0x0) {
    return;
  }
  uVar5 = (longlong)(pTVar4->PagesArray).ArrayNum;
  lVar12 = 0;
  while (lVar13 = lVar12, uVar5 != 0) {
    uVar11 = uVar5 >> 1;
    uVar10 = (uint)uVar5;
    uVar5 = uVar11;
    lVar12 = uVar11 + lVar13 + (ulonglong)(uVar10 & 1);
    if (param_2 < (pTVar4->FirstPage[uVar11 + lVar13].Items)->Start) {
      lVar12 = lVar13;
    }
  }
  lVar12 = lVar13 + -1;
  if (lVar13 == 0) {
    lVar12 = 0;
  }
  uVar11 = lVar12 * pTVar4->PageSize;
  uVar5 = uVar11 / pTVar4->PageSize;
  if (uVar11 - pTVar4->TotalItemCount != 0) {
    if ((pTVar4->TotalItemCount <= uVar11) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InItemIndex < Outer->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((ulonglong)(longlong)(pTVar4->PagesArray).ArrayNum <= uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPageIndex < Outer->PagesArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar6 = pTVar4->FirstPage;
    if (pTVar6[uVar5].Items == (FContextSwitch *)0x0) {
      pFVar9 = (FContextSwitch *)0x0;
    }
    else {
      pFVar9 = pTVar6[uVar5].Items + (pTVar6[uVar5].Count - 1);
    }
    uVar11 = uVar11 % pTVar4->PageSize;
    if ((pTVar6[uVar5].Count <= uVar11) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemIndexInPage < CurrentPage->Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x134,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pTVar6[uVar5].Items + uVar11 != pFVar9) {
      pFVar8 = pTVar6[uVar5].Items + uVar11 + 1;
      goto LAB_14d4522ad;
    }
  }
  if (uVar5 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
    return;
  }
  uVar5 = uVar5 + 1;
  pTVar6 = pTVar4->FirstPage + uVar5;
  pFVar8 = pTVar6->Items;
  if (pFVar8 == (FContextSwitch *)0x0) {
    pFVar9 = (FContextSwitch *)0x0;
  }
  else {
    pFVar9 = pFVar8 + (pTVar6->Count - 1);
  }
  if (pTVar6 == (TPagedArrayPage<TraceServices::FContextSwitch> *)0x0) {
    return;
  }
LAB_14d4522ad:
  if (pFVar8 != (FContextSwitch *)0x0) {
    lVar12 = uVar5 << 4;
    do {
      if (param_3 < pFVar8->Start || param_3 == pFVar8->Start) {
        return;
      }
      if ((param_2 < pFVar8->End) &&
         (iVar3 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,pFVar8), iVar3 == 1)) {
        return;
      }
      if (pFVar8 == pFVar9) {
        if (uVar5 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
          return;
        }
        lVar13 = lVar12 + 0x10;
        plVar7 = (longlong *)((longlong)&pTVar4->FirstPage[1].Items + lVar12);
        uVar5 = uVar5 + 1;
        pFVar8 = (FContextSwitch *)*plVar7;
        if (pFVar8 == (FContextSwitch *)0x0) {
          pFVar9 = (FContextSwitch *)0x0;
        }
        else {
          pFVar9 = pFVar8 + plVar7[1] + -1;
        }
        if (plVar7 == (longlong *)0x0) {
          return;
        }
      }
      else {
        pFVar8 = pFVar8 + 1;
        lVar13 = lVar12;
      }
      lVar12 = lVar13;
    } while (pFVar8 != (FContextSwitch *)0x0);
  }
  return;
}

// EnumerateCpuCoreEvents @ 14d4523f0

void __thiscall
TraceServices::FContextSwitchesProvider::EnumerateCpuCoreEvents
          (FContextSwitchesProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EContextSwitchEnumerationResult___cdecl(TraceServices::FCpuCoreEvent_const_&)>
          *param_4)

{
  TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  *pTVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  TPagedArrayPage<TraceServices::FCpuCoreEvent> *pTVar10;
  ulonglong uVar11;
  TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  local_58;
  
  (**(code **)(this->_padding_ + 0x18))();
  uVar8 = (this->CpuCores).ArrayNum;
  if (param_1 < uVar8) {
    uVar6 = 0;
    if ((int)param_1 < (int)uVar8) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = *(TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
               **)((this->CpuCores).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
    if (pTVar1 != (TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                   *)0x0) {
      uVar3 = (longlong)(pTVar1->PagesArray).ArrayNum;
      lVar9 = 0;
      while (lVar4 = lVar9, uVar3 != 0) {
        uVar11 = uVar3 >> 1;
        uVar8 = (uint)uVar3;
        uVar3 = uVar11;
        lVar9 = uVar11 + lVar4 + (ulonglong)(uVar8 & 1);
        if (param_2 < (pTVar1->FirstPage[uVar11 + lVar4].Items)->Start) {
          lVar9 = lVar4;
        }
      }
      lVar9 = lVar4 + -1;
      if (lVar4 == 0) {
        lVar9 = 0;
      }
      TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
      ::
      TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                (&local_58,pTVar1,lVar9 * pTVar1->PageSize);
      do {
        while( true ) {
          if (local_58.CurrentItem == (FCpuCoreEvent *)0x0) {
            return;
          }
          if (param_3 < (local_58.CurrentItem)->Start || param_3 == (local_58.CurrentItem)->Start) {
            return;
          }
          if ((param_2 < (local_58.CurrentItem)->End) &&
             (iVar7 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8), iVar7 == 1)) {
            return;
          }
          if (local_58.CurrentItem == local_58.CurrentPageLastItem) break;
          local_58.CurrentItem = local_58.CurrentItem + 1;
        }
        if (local_58.CurrentPageIndex == (longlong)(((local_58.Outer)->PagesArray).ArrayNum + -1)) {
          return;
        }
        local_58.CurrentPageIndex = local_58.CurrentPageIndex + 1;
        pTVar10 = (local_58.Outer)->FirstPage + local_58.CurrentPageIndex;
        local_58.CurrentItem = pTVar10->Items;
        if (local_58.CurrentItem == (FCpuCoreEvent *)0x0) {
          local_58.CurrentPageLastItem = (FCpuCoreEvent *)0x0;
        }
        else {
          local_58.CurrentPageLastItem = local_58.CurrentItem + (pTVar10->Count - 1);
        }
      } while (pTVar10 != (TPagedArrayPage<TraceServices::FCpuCoreEvent> *)0x0);
    }
  }
  return;
}

// EnumerateCpuCoreEventsBackwards @ 14d4525d0

void __thiscall
TraceServices::FContextSwitchesProvider::EnumerateCpuCoreEventsBackwards
          (FContextSwitchesProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EContextSwitchEnumerationResult___cdecl(TraceServices::FCpuCoreEvent_const_&)>
          *param_4)

{
  uint uVar1;
  TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  FCpuCoreEvent *pFVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  FCpuCoreEvent *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  local_88;
  TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  local_58;
  
  (**(code **)(this->_padding_ + 0x18))();
  uVar1 = (this->CpuCores).ArrayNum;
  if (param_1 < uVar1) {
    uVar5 = 0;
    if ((int)param_1 < (int)uVar1) {
      uVar5 = ~param_1 >> 0x1f;
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
    pTVar2 = *(TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
               **)((this->CpuCores).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
    if (pTVar2 != (TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                   *)0x0) {
      uVar10 = (ulonglong)(pTVar2->PagesArray).ArrayNum;
      uVar13 = 0;
      uVar14 = uVar10;
      if (uVar10 != 0) {
        do {
          uVar15 = uVar14 >> 1;
          uVar7 = uVar15 + uVar13 + (ulonglong)((uint)uVar14 & 1);
          if (param_2 < (pTVar2->FirstPage[uVar15 + uVar13].Items)->Start) {
            uVar7 = uVar13;
          }
          uVar13 = uVar7;
          uVar14 = uVar15;
        } while (uVar15 != 0);
        if (uVar7 != 0) {
          if (uVar7 < uVar10) {
            TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
            ::
            TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                      (&local_88,pTVar2,uVar7 * pTVar2->PageSize);
            pFVar8 = local_88.CurrentItem;
          }
          else {
            TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
            ::
            TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                      (&local_58,pTVar2,pTVar2->TotalItemCount - 1);
            local_88.Outer._0_4_ = local_58.Outer._0_4_;
            local_88.Outer._4_4_ = local_58.Outer._4_4_;
            local_88.CurrentPageIndex._0_4_ = (undefined4)local_58.CurrentPageIndex;
            local_88.CurrentPageIndex._4_4_ = local_58.CurrentPageIndex._4_4_;
            local_88.CurrentPageFirstItem._0_4_ = local_58.CurrentPageFirstItem._0_4_;
            local_88.CurrentPageFirstItem._4_4_ = local_58.CurrentPageFirstItem._4_4_;
            pFVar8 = local_58.CurrentItem;
          }
          if (pFVar8 != (FCpuCoreEvent *)0x0) {
            pFVar12 = (FCpuCoreEvent *)
                      CONCAT44(local_88.CurrentPageFirstItem._4_4_,
                               local_88.CurrentPageFirstItem._0_4_);
            lVar11 = CONCAT44(local_88.CurrentPageIndex._4_4_,(undefined4)local_88.CurrentPageIndex)
            ;
            do {
              if (pFVar8->End <= param_3) {
                return;
              }
              if ((pFVar8->Start <= param_2 && param_2 != pFVar8->Start) &&
                 (iVar6 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,pFVar8),
                 iVar6 == 1)) {
                return;
              }
              if (pFVar8 == pFVar12) {
                if (lVar11 == 0) {
                  return;
                }
                lVar11 = lVar11 + -1;
                plVar9 = (longlong *)
                         (lVar11 * 0x10 +
                         *(longlong *)(CONCAT44(local_88.Outer._4_4_,local_88.Outer._0_4_) + 0x18));
                pFVar12 = (FCpuCoreEvent *)*plVar9;
                if (pFVar12 == (FCpuCoreEvent *)0x0) {
                  pFVar8 = (FCpuCoreEvent *)0x0;
                }
                else {
                  pFVar8 = pFVar12 + plVar9[1] + -1;
                }
                if (plVar9 == (longlong *)0x0) {
                  return;
                }
              }
              else {
                pFVar8 = pFVar8 + -1;
              }
            } while (pFVar8 != (FCpuCoreEvent *)0x0);
          }
        }
      }
    }
  }
  return;
}

// EnumerateCpuCores @ 14d452810

void __thiscall
TraceServices::FContextSwitchesProvider::EnumerateCpuCores
          (FContextSwitchesProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FCpuCoreInfo_const_&)> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint local_res8 [2];
  
  (**(code **)(this->_padding_ + 0x18))();
  uVar1 = (this->CpuCores).ArrayNum;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->CpuCores).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(longlong *)((this->CpuCores).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) != 0) {
        local_res8[0] = uVar5;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}

// GetContextSwitches @ 14d464280

TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
* __thiscall
TraceServices::FContextSwitchesProvider::GetContextSwitches
          (FContextSwitchesProvider *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
  *pTVar4;
  undefined1 *puVar5;
  TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
  *pTVar6;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (*(int *)&(this->TraceToSystemThreadIdMap).field_0x8 !=
      *(int *)&(this->TraceToSystemThreadIdMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->TraceToSystemThreadIdMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->TraceToSystemThreadIdMap).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->TraceToSystemThreadIdMap).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->TraceToSystemThreadIdMap + (longlong)iVar2 * 0x10) ==
            param_1) {
          puVar3 = TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                   ::FindChecked((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                                  *)&this->TraceToSystemThreadIdMap,param_1);
          pTVar6 = (TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
                    *)0x0;
          if (*(int *)&(this->Threads).field_0x8 != *(int *)&(this->Threads).field_0x34) {
            puVar5 = *(undefined1 **)&(this->Threads).field_0x40;
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &(this->Threads).field_0x38;
            }
            iVar2 = *(int *)(puVar5 + (ulonglong)
                                      (*(int *)&(this->Threads).field_0x48 - 1U & *puVar3) * 4);
            if (iVar2 != -1) {
              while (lVar1 = *(longlong *)&this->Threads + (longlong)iVar2 * 0x18,
                    *(uint *)(*(longlong *)&this->Threads + (longlong)iVar2 * 0x18) != *puVar3) {
                iVar2 = *(int *)(lVar1 + 0x10);
                if (iVar2 == -1) {
                  return (TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
                          *)0x0;
                }
              }
              pTVar4 = (TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
                        *)(lVar1 + 8);
              if (lVar1 == 0) {
                pTVar4 = pTVar6;
              }
              if (pTVar4 != (TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
                             *)0x0) {
                pTVar6 = (TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
                          *)pTVar4->Allocator;
              }
            }
          }
          return pTVar6;
        }
        iVar2 = *(int *)(*(longlong *)&this->TraceToSystemThreadIdMap + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return (TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
          *)0x0;
}

// GetCoreNumber @ 14d464400

bool __thiscall
TraceServices::FContextSwitchesProvider::GetCoreNumber
          (FContextSwitchesProvider *this,uint param_1,double param_2,uint *param_3)

{
  TPagedArrayPage<TraceServices::FContextSwitch> *pTVar1;
  FContextSwitch *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
  *pTVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  (**(code **)(this->_padding_ + 0x18))();
  pTVar5 = GetContextSwitches(this,param_1);
  if (pTVar5 != (TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
                 *)0x0) {
    uVar7 = (ulonglong)(pTVar5->PagesArray).ArrayNum;
    pTVar1 = pTVar5->FirstPage;
    uVar3 = uVar7;
    uVar4 = 0;
    while (uVar3 != 0) {
      uVar8 = uVar3 >> 1;
      uVar6 = (uint)uVar3;
      uVar3 = uVar8;
      if ((pTVar1[uVar8 + uVar4].Items)->Start <= param_2 &&
          param_2 != (pTVar1[uVar8 + uVar4].Items)->Start) {
        uVar4 = uVar8 + uVar4 + (ulonglong)(uVar6 & 1);
      }
    }
    if (uVar4 < uVar7) {
      pFVar2 = pTVar1[uVar4].Items;
      uVar3 = pTVar1[uVar4].Count;
      uVar7 = 0;
      while (uVar3 != 0) {
        uVar8 = uVar3 >> 1;
        uVar6 = (uint)uVar3;
        uVar3 = uVar8;
        if (pFVar2[uVar8 + uVar7].Start <= param_2 && param_2 != pFVar2[uVar8 + uVar7].Start) {
          uVar7 = uVar8 + uVar7 + (ulonglong)(uVar6 & 1);
        }
      }
      if (((uVar7 < pTVar1[uVar4].Count) &&
          (param_2 < pFVar2[uVar7].Start || param_2 == pFVar2[uVar7].Start)) &&
         (pFVar2[uVar7].End <= param_2 && param_2 != pFVar2[uVar7].End)) {
        *param_3 = pFVar2[uVar7].CoreNumber;
        return true;
      }
    }
  }
  return false;
}

// GetCpuCoresSerial @ 14d4645b0

ulong64 __thiscall
TraceServices::FContextSwitchesProvider::GetCpuCoresSerial(FContextSwitchesProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return (ulonglong)this->NumCpuCores;
}

// GetSystemThreadId @ 14d46dba0

bool __thiscall
TraceServices::FContextSwitchesProvider::GetSystemThreadId
          (FContextSwitchesProvider *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (*(int *)&(this->TraceToSystemThreadIdMap).field_0x8 !=
      *(int *)&(this->TraceToSystemThreadIdMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TraceToSystemThreadIdMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TraceToSystemThreadIdMap).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->TraceToSystemThreadIdMap).field_0x48 - 1U & param_1)
                               * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&this->TraceToSystemThreadIdMap
                         );
        if (*puVar3 == param_1) {
          puVar2 = puVar3 + 1;
          if (puVar3 == (uint *)0x0) {
            puVar2 = (uint *)0x0;
          }
          if (puVar2 == (uint *)0x0) {
            return false;
          }
          *param_2 = *puVar2;
          return true;
        }
        uVar1 = puVar3[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  return false;
}

// GetSystemThreadId @ 14d46dc50

bool __thiscall
TraceServices::FContextSwitchesProvider::GetSystemThreadId
          (FContextSwitchesProvider *this,uint param_1,double param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  (**(code **)(this->_padding_ + 0x18))();
  uVar10 = (this->CpuCores).ArrayNum;
  if (param_1 < uVar10) {
    uVar9 = 0;
    if ((int)param_1 < (int)uVar10) {
      uVar9 = ~param_1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    lVar1 = *(longlong *)((this->CpuCores).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x18);
      uVar4 = (longlong)*(int *)(lVar1 + 0x10);
      uVar6 = 0;
      while (uVar4 != 0) {
        uVar12 = uVar4 >> 1;
        uVar10 = (uint)uVar4;
        pdVar3 = *(double **)(lVar2 + (uVar12 + uVar6) * 0x10);
        uVar4 = uVar12;
        if (*pdVar3 <= param_2 && param_2 != *pdVar3) {
          uVar6 = uVar12 + uVar6 + (ulonglong)(uVar10 & 1);
        }
      }
      if (uVar6 < (ulonglong)(longlong)*(int *)(lVar1 + 0x10)) {
        uVar4 = *(ulonglong *)(lVar2 + 8 + uVar6 * 0x10);
        lVar1 = *(longlong *)(lVar2 + uVar6 * 0x10);
        uVar6 = uVar4;
        uVar12 = 0;
        while (uVar6 != 0) {
          uVar11 = uVar6 >> 1;
          uVar10 = (uint)uVar6;
          pdVar3 = (double *)(lVar1 + (uVar11 + uVar12) * 0x18);
          uVar6 = uVar11;
          if (*pdVar3 <= param_2 && param_2 != *pdVar3) {
            uVar12 = uVar11 + uVar12 + (ulonglong)(uVar10 & 1);
          }
        }
        if (((uVar12 < uVar4) &&
            (pdVar3 = (double *)(lVar1 + uVar12 * 0x18), param_2 < *pdVar3 || param_2 == *pdVar3))
           && (pdVar3 = (double *)(lVar1 + 8 + uVar12 * 0x18),
              *pdVar3 <= param_2 && param_2 != *pdVar3)) {
          *param_3 = *(uint *)(lVar1 + 0x10 + uVar12 * 0x18);
          return true;
        }
      }
    }
  }
  return false;
}

// GetThreadId @ 14d46e190

bool __thiscall
TraceServices::FContextSwitchesProvider::GetThreadId
          (FContextSwitchesProvider *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (*(int *)&(this->SystemToTraceThreadIdMap).field_0x8 !=
      *(int *)&(this->SystemToTraceThreadIdMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SystemToTraceThreadIdMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SystemToTraceThreadIdMap).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->SystemToTraceThreadIdMap).field_0x48 - 1U & param_1)
                               * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&this->SystemToTraceThreadIdMap
                         );
        if (*puVar3 == param_1) {
          puVar2 = puVar3 + 1;
          if (puVar3 == (uint *)0x0) {
            puVar2 = (uint *)0x0;
          }
          if (puVar2 == (uint *)0x0) {
            return false;
          }
          *param_2 = *puVar2;
          return true;
        }
        uVar1 = puVar3[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  return false;
}

// GetThreadId @ 14d46e250

bool __thiscall
TraceServices::FContextSwitchesProvider::GetThreadId
          (FContextSwitchesProvider *this,uint param_1,double param_2,uint *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  (**(code **)(this->_padding_ + 0x18))();
  cVar1 = (**(code **)(this->_padding_ + 0x28))(this,param_1,SUB84(param_2,0),local_res8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(this->_padding_ + 0x40))(this,local_res8[0],param_3);
  }
  return (bool)uVar2;
}

// GetThreadsSerial @ 14d46e3f0

ulong64 __thiscall
TraceServices::FContextSwitchesProvider::GetThreadsSerial(FContextSwitchesProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return (longlong)(*(int *)&(this->Threads).field_0x8 - *(int *)&(this->Threads).field_0x34);
}

// HasData @ 14d471be0

bool __thiscall TraceServices::FContextSwitchesProvider::HasData(FContextSwitchesProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return 0 < *(int *)&(this->Threads).field_0x8 - *(int *)&(this->Threads).field_0x34;
}

// ReadAccessCheck @ 14d481060

void __thiscall
TraceServices::FContextSwitchesProvider::ReadAccessCheck(FContextSwitchesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::ReadAccessCheck(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9b90));
  return;
}

