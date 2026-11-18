// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 33

// FMemoryProvider @ 14d424270

FMemoryProvider * __thiscall
TraceServices::FMemoryProvider::FMemoryProvider(FMemoryProvider *this,IAnalysisSession *param_1)

{
  ILinearAllocator *pIVar1;
  FString local_18;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IMemoryProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  (this->Lock).RWLock.Mutex.Mutex.Ptr = (void *)0x0;
  this->Session = param_1;
  (this->AvailableTrackers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableTrackers).ArrayNum = 0;
  (this->AvailableTrackers).ArrayMax = 0;
  (this->AvailableTagSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableTagSets).ArrayNum = 0;
  (this->AvailableTagSets).ArrayMax = 0;
  (this->AvailableTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableTags).ArrayNum = 0;
  (this->AvailableTags).ArrayMax = 0;
  *(undefined8 *)&this->TagMap = 0;
  *(undefined8 *)&(this->TagMap).field_0x8 = 0;
  *(undefined8 *)&(this->TagMap).field_0x20 = 0;
  this->NumTrackers = 0;
  this->NumTagSets = 0;
  *(undefined4 *)&(this->TagMap).field_0x28 = 0;
  *(undefined4 *)&(this->TagMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagMap).field_0x34 = 0;
  *(undefined8 *)&(this->TagMap).field_0x40 = 0;
  *(undefined4 *)&(this->TagMap).field_0x48 = 0;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (this->SnapshotTimes).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotTimes).Allocator = pIVar1;
  (this->SnapshotTimes).PagesArray.ArrayNum = 0;
  (this->SnapshotTimes).PagesArray.ArrayMax = 0;
  (this->SnapshotTimes).FirstPage = (TPagedArrayPage<double> *)0x0;
  (this->SnapshotTimes).LastPage = (TPagedArrayPage<double> *)0x0;
  (this->SnapshotTimes).PageSize = 0x2000;
  (this->SnapshotTimes).TotalItemCount = 0;
  this->TagsSerial = 0;
  this->bIsInitialized = (atomic<bool>)0x0;
  this->bIsCompleted = (atomic<bool>)0x0;
  LOCK();
  this->bIsInitialized = (atomic<bool>)0x1;
  UNLOCK();
  ::FString::FString(&local_18,L"Default");
  InternalAddTagSetSpec(this,0,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FMemoryProvider @ 14d42bb00

void __thiscall TraceServices::FMemoryProvider::~FMemoryProvider(FMemoryProvider *this)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IMemoryProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  LOCK();
  this->bIsInitialized = (atomic<bool>)0x0;
  UNLOCK();
  pFVar8 = (this->AvailableTrackers).AllocatorInstance.Data;
  iVar1 = (this->AvailableTrackers).ArrayNum;
  pFVar4 = pFVar8 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->AvailableTrackers).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TraceServices::FMemoryProvider::FTrackerData_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar4) break;
    puVar2 = *(undefined8 **)pFVar8;
    if (puVar2 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar2;
      if (pvVar3 != (void *)0x0) {
        if (*(void **)((longlong)pvVar3 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar3 + 8));
        }
        ::operator_delete(pvVar3,0x18);
      }
      *(undefined4 *)(puVar2 + 10) = 0;
      if ((void *)puVar2[9] != (void *)0x0) {
        FMemory::Free((void *)puVar2[9]);
      }
      TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryProvider::FTagSampleData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryProvider::FTagSampleData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryProvider::FTagSampleData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar2 + 1));
      ::operator_delete(puVar2,0x58);
    }
    pFVar8 = pFVar8 + 8;
  }
  (this->AvailableTrackers).ArrayNum = 0;
  if ((this->AvailableTrackers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AvailableTrackers).AllocatorInstance,0,
               &(this->AvailableTrackers).ArrayMax);
  }
  this->NumTrackers = 0;
  pFVar8 = (this->AvailableTagSets).AllocatorInstance.Data;
  iVar1 = (this->AvailableTagSets).ArrayNum;
  pFVar4 = pFVar8 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->AvailableTagSets).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TraceServices::FMemoryProvider::FTagSetData_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar4) break;
    puVar2 = *(undefined8 **)pFVar8;
    if (puVar2 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar2;
      if (pvVar3 != (void *)0x0) {
        if (*(void **)((longlong)pvVar3 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar3 + 8));
        }
        ::operator_delete(pvVar3,0x18);
      }
      *(undefined4 *)(puVar2 + 10) = 0;
      if ((void *)puVar2[9] != (void *)0x0) {
        FMemory::Free((void *)puVar2[9]);
      }
      TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryTagInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryTagInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryTagInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar2 + 1));
      ::operator_delete(puVar2,0x58);
    }
    pFVar8 = pFVar8 + 8;
  }
  (this->AvailableTagSets).ArrayNum = 0;
  if ((this->AvailableTagSets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AvailableTagSets).AllocatorInstance,0,
               &(this->AvailableTagSets).ArrayMax);
  }
  this->NumTagSets = 0;
  pFVar8 = (this->AvailableTags).AllocatorInstance.Data;
  iVar1 = (this->AvailableTags).ArrayNum;
  pFVar4 = pFVar8 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->AvailableTags).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TraceServices::FMemoryTagInfo_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar8 == pFVar4) break;
    pvVar3 = *(void **)pFVar8;
    if (pvVar3 != (void *)0x0) {
      if (*(void **)((longlong)pvVar3 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar3 + 0x20));
      }
      ::operator_delete(pvVar3,0x30);
    }
    pFVar8 = pFVar8 + 8;
  }
  (this->AvailableTags).ArrayNum = 0;
  if ((this->AvailableTags).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AvailableTags).AllocatorInstance,0,&(this->AvailableTags).ArrayMax);
  }
  TSet<TTuple<__int64,TraceServices::FMemoryTagInfo_*>,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryTagInfo_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64,TraceServices::FMemoryTagInfo_*>,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryTagInfo_*,0>,FDefaultSetAllocator>
           *)&this->TagMap);
  TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::
  ~TPagedArray<double,TraceServices::TPagedArrayPage<double>_>(&this->SnapshotTimes);
  *(undefined4 *)&(this->TagMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TagMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryTagInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryTagInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryTagInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TagMap);
  pFVar4 = (this->AvailableTags).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->AvailableTagSets).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->AvailableTrackers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  return;
}

// AddTagSetSpec @ 14d43d710

void __thiscall
TraceServices::FMemoryProvider::AddTagSetSpec(FMemoryProvider *this,int param_1,FString *param_2)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  InternalAddTagSetSpec(this,param_1,param_2);
  return;
}

// AddTagSnapshot @ 14d43d760

void __thiscall
TraceServices::FMemoryProvider::AddTagSnapshot
          (FMemoryProvider *this,int param_1,double param_2,long64 *param_3,
          FMemoryTagSample *param_4,uint param_5)

{
  int *piVar1;
  ulong64 *puVar2;
  TArray<TraceServices::TPagedArrayPage<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  TPagedArrayPage<double> *pTVar5;
  ILinearAllocator *pIVar6;
  ulonglong uVar7;
  longlong lVar8;
  long64 lVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  double *pdVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  TPagedArrayPage<double> *pTVar20;
  undefined8 *puVar21;
  void *pvVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  TPairInitializer<__int64_const_&,TraceServices::FMemoryProvider::FTagSampleData_*_const_&>
  local_res8;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  ulong64 local_78;
  ulonglong local_70;
  FString local_68;
  longlong *local_58;
  undefined8 **local_50;
  
  uVar23 = (ulonglong)param_1;
  local_res8.Value._0_4_ = param_1;
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (7 < (uint)param_1) {
    return;
  }
  if (param_1 < (this->AvailableTrackers).ArrayNum) {
    if ((param_1 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar25 = *(longlong *)((this->AvailableTrackers).AllocatorInstance.Data + uVar23 * 8);
    local_90 = lVar25;
    if (lVar25 != 0) goto LAB_14d43d8cf;
  }
  ::FString::FString(&local_68,L"<unknown>");
  InternalAddTrackerSpec(this,param_1,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  uVar12 = 0;
  if (param_1 < (this->AvailableTrackers).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar25 = *(longlong *)((this->AvailableTrackers).AllocatorInstance.Data + uVar23 * 8);
  local_90 = lVar25;
  if ((lVar25 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Tracker",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Memory.cpp"
                          ,0xdf,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14d43d8cf:
  pTVar5 = (this->SnapshotTimes).LastPage;
  if ((pTVar5 == (TPagedArrayPage<double> *)0x0) ||
     (pTVar5->Count == (this->SnapshotTimes).PageSize)) {
    pTVar3 = &(this->SnapshotTimes).PagesArray;
    iVar13 = (this->SnapshotTimes).PagesArray.ArrayNum;
    piVar1 = &(this->SnapshotTimes).PagesArray.ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->SnapshotTimes).PagesArray.ArrayNum = iVar13 + 1;
    pTVar20 = (TPagedArrayPage<double> *)
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<double>,int>(pTVar20,1);
    pTVar5 = (TPagedArrayPage<double> *)(pTVar3->AllocatorInstance).Data;
    pIVar6 = (this->SnapshotTimes).Allocator;
    (this->SnapshotTimes).LastPage = pTVar20;
    (this->SnapshotTimes).FirstPage = pTVar5;
    pdVar14 = (double *)
              (**(code **)((longlong)*pIVar6 + 8))(pIVar6,(this->SnapshotTimes).PageSize << 3);
    ((this->SnapshotTimes).LastPage)->Items = pdVar14;
  }
  puVar2 = &(this->SnapshotTimes).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pTVar5 = (this->SnapshotTimes).LastPage;
  pTVar5->Items[pTVar5->Count] = param_2;
  puVar2 = &((this->SnapshotTimes).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  local_80 = (ulonglong)param_5;
  local_78 = (this->SnapshotTimes).TotalItemCount;
  if (param_5 != 0) {
    local_70 = local_78 - 1;
    lVar18 = (longlong)param_3 - (longlong)param_4;
    lVar24 = lVar25;
    do {
      uVar19 = local_70;
      local_88 = *(longlong *)(lVar18 + (longlong)param_4);
      if (*(int *)(lVar24 + 0x10) != *(int *)(lVar25 + 0x3c)) {
        lVar24 = lVar25 + 0x40;
        if (*(longlong *)(lVar25 + 0x48) != 0) {
          lVar24 = *(longlong *)(lVar25 + 0x48);
        }
        iVar13 = *(int *)(lVar24 + ((local_88 >> 0x20) * 0x17 + local_88 &
                                   (ulonglong)(*(int *)(lVar25 + 0x50) - 1)) * 4);
        if (iVar13 != -1) {
          lVar24 = *(longlong *)
                    &((TSet<TTuple<__int64,TraceServices::FMemoryProvider::FTagSampleData_*>,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,0>,FDefaultSetAllocator>
                       *)(lVar25 + 8))->Elements;
          do {
            lVar4 = lVar24 + (longlong)iVar13 * 0x18;
            if (*(longlong *)(lVar24 + (longlong)iVar13 * 0x18) == local_88) {
              if ((lVar4 != 0) &&
                 (local_98 = *(undefined8 **)(lVar4 + 8), local_98 != (undefined8 *)0x0))
              goto LAB_14d43dae9;
              break;
            }
            iVar13 = *(int *)(lVar4 + 0x10);
          } while (iVar13 != -1);
        }
      }
      local_98 = (undefined8 *)0x0;
      puVar21 = (undefined8 *)0x0;
      puVar15 = ::operator_new(0x40);
      if (puVar15 != (undefined8 *)0x0) {
        uVar16 = (**(code **)((longlong)*this->Session + 0xb8))();
        *puVar15 = uVar16;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[4] = 0;
        puVar15[5] = 0x10000;
        puVar15[6] = 0;
        puVar15[7] = 0;
        puVar21 = puVar15;
      }
      local_58 = &local_88;
      local_50 = &local_98;
      local_98 = puVar21;
      TSet<TTuple<__int64,TraceServices::FMemoryProvider::FTagSampleData_*>,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<__int64_const_&,TraceServices::FMemoryProvider::FTagSampleData_*_const_&>_>
                ((TSet<TTuple<__int64,TraceServices::FMemoryProvider::FTagSampleData_*>,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,0>,FDefaultSetAllocator>
                  *)(lVar25 + 8),&local_res8,(bool *)&local_58);
LAB_14d43dae9:
      puVar21 = local_98;
      uVar16 = 0;
      uVar7 = local_98[6];
      if (uVar7 < uVar19) {
        if (uVar7 != 0) {
          uVar16 = *(undefined8 *)(*(longlong *)local_98[4] + -8 + ((longlong *)local_98[4])[1] * 8)
          ;
        }
        lVar24 = uVar19 - uVar7;
        do {
          if ((puVar21[4] == 0) || (*(longlong *)(puVar21[4] + 8) == puVar21[5])) {
            iVar13 = *(int *)(puVar21 + 2);
            if (iVar13 == *(int *)((longlong)puVar21 + 0x14)) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)(puVar21 + 1),
                                  (int *)((longlong)puVar21 + 0x14));
            }
            *(int *)(puVar21 + 2) = iVar13 + 1;
            pvVar22 = (void *)((longlong)iVar13 * 0x10 + puVar21[1]);
            DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMemoryTagSample>,int>
                      (pvVar22,1);
            puVar21[4] = pvVar22;
            puVar21[3] = puVar21[1];
            uVar17 = (**(code **)(*(longlong *)*puVar21 + 8))((longlong *)*puVar21,puVar21[5] << 3);
            *(undefined8 *)puVar21[4] = uVar17;
          }
          puVar21[6] = puVar21[6] + 1;
          lVar4 = ((longlong *)puVar21[4])[1];
          lVar8 = *(longlong *)puVar21[4];
          *(undefined8 *)(lVar8 + lVar4 * 8) = 0;
          *(longlong *)(puVar21[4] + 8) = *(longlong *)(puVar21[4] + 8) + 1;
          *(undefined8 *)(lVar8 + lVar4 * 8) = uVar16;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        uVar23 = (ulonglong)(uint)local_res8.Value;
      }
      lVar9 = param_4->Value;
      if ((puVar21[4] == 0) || (*(longlong *)(puVar21[4] + 8) == puVar21[5])) {
        iVar13 = *(int *)(puVar21 + 2);
        if (iVar13 == *(int *)((longlong)puVar21 + 0x14)) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)(puVar21 + 1),
                              (int *)((longlong)puVar21 + 0x14));
        }
        *(int *)(puVar21 + 2) = iVar13 + 1;
        pvVar22 = (void *)((longlong)iVar13 * 0x10 + puVar21[1]);
        DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMemoryTagSample>,int>
                  (pvVar22,1);
        puVar21[4] = pvVar22;
        puVar21[3] = puVar21[1];
        uVar16 = (**(code **)(*(longlong *)*puVar21 + 8))((longlong *)*puVar21,puVar21[5] << 3);
        *(undefined8 *)puVar21[4] = uVar16;
      }
      puVar21[6] = puVar21[6] + 1;
      lVar24 = ((longlong *)puVar21[4])[1];
      lVar4 = *(longlong *)puVar21[4];
      *(undefined8 *)(lVar4 + lVar24 * 8) = 0;
      *(longlong *)(puVar21[4] + 8) = *(longlong *)(puVar21[4] + 8) + 1;
      *(long64 *)(lVar4 + lVar24 * 8) = lVar9;
      if (((longlong)*(int *)(puVar21 + 6) != local_78) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("int32(TagValues.Num()) == SampleCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Memory.cpp"
                              ,0xff,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((local_98[7] == 0) &&
         (lVar24 = (**(code **)(this->_padding_ + 0x50))(this,local_88), lVar24 != 0)) {
        local_98[7] = lVar24;
      }
      lVar24 = local_98[7];
      if (lVar24 != 0) {
        uVar19 = 1L << ((byte)uVar23 & 0x3f);
        if ((uVar19 & *(ulonglong *)(lVar24 + 0x18)) == 0) {
          *(ulonglong *)(lVar24 + 0x18) = *(ulonglong *)(lVar24 + 0x18) | uVar19;
          this->TagsSerial = this->TagsSerial + 1;
        }
      }
      param_4 = param_4 + 1;
      local_80 = local_80 - 1;
      lVar24 = local_90;
    } while (local_80 != 0);
  }
  return;
}

// AddTagSpec @ 14d43dd40

void __thiscall
TraceServices::FMemoryProvider::AddTagSpec
          (FMemoryProvider *this,long64 param_1,FString *param_2,long64 param_3,int param_4)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  InternalAddTagSpec(this,param_1,param_2,param_3,param_4);
  return;
}

// AddTrackerSpec @ 14d43e830

void __thiscall
TraceServices::FMemoryProvider::AddTrackerSpec(FMemoryProvider *this,int param_1,FString *param_2)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  InternalAddTrackerSpec(this,param_1,param_2);
  return;
}

// BeginEdit @ 14d441a50

void __thiscall TraceServices::FMemoryProvider::BeginEdit(FMemoryProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9ba0))
  ;
  return;
}

// BeginRead @ 14d442060

void __thiscall TraceServices::FMemoryProvider::BeginRead(FMemoryProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9ba0));
  return;
}

// EditAccessCheck @ 14d44fff0

void __thiscall TraceServices::FMemoryProvider::EditAccessCheck(FMemoryProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::WriteAccessCheck
            ((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9ba0));
  return;
}

// EndEdit @ 14d451530

void __thiscall TraceServices::FMemoryProvider::EndEdit(FMemoryProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9ba0));
  return;
}

// EndRead @ 14d4519b0

void __thiscall TraceServices::FMemoryProvider::EndRead(FMemoryProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9ba0));
  return;
}

// EnumerateTagSamples @ 14d45cb60

void __thiscall
TraceServices::FMemoryProvider::EnumerateTagSamples
          (FMemoryProvider *this,int param_1,long64 param_2,double param_3,double param_4,
          bool param_5,
          TFunctionRef<void___cdecl(double,double,TraceServices::FMemoryTagSample_const_&)> *param_6
          )

{
  TPagedArray<double,TraceServices::TPagedArrayPage<double>_> *this_00;
  TPagedArrayPage<TraceServices::FMemoryTagSample> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FTrackerData *pFVar4;
  FTagSampleData *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  TPagedArrayPage<double> *pTVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  int iVar13;
  double *pdVar14;
  int iVar15;
  FMemoryTagSample *pFVar16;
  ulong64 uVar17;
  FMemoryTagSample *pFVar18;
  ulonglong uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> local_110;
  TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> local_e0;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> local_90 [2];
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar4 = GetTracker(this,param_1);
  if (pFVar4 == (FTrackerData *)0x0) {
    return;
  }
  pFVar5 = TMapBase<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,0>_>
           ::FindRef((TMapBase<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,0>_>
                      *)&pFVar4->Samples,param_2);
  if (pFVar5 == (FTagSampleData *)0x0) {
    return;
  }
  pFVar16 = (FMemoryTagSample *)0x0;
  iVar13 = 0;
  this_00 = &this->SnapshotTimes;
  uVar10 = (this->SnapshotTimes).PagesArray.ArrayNum;
  pTVar9 = (this->SnapshotTimes).FirstPage;
  if (((int)uVar10 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar15 = iVar13;
  if ((int)uVar10 < 1) {
LAB_14d45cc11:
    uVar19 = 0;
  }
  else {
    do {
      iVar8 = (uVar10 >> 1) + iVar15;
      pdVar14 = pTVar9[iVar8].Items;
      if (*pdVar14 <= param_3 && param_3 != *pdVar14) {
        iVar15 = iVar8 + (uVar10 & 1);
      }
      uVar11 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar11 != 0);
    if (iVar15 == 0) goto LAB_14d45cc11;
    uVar19 = (this->SnapshotTimes).TotalItemCount;
    uVar6 = (longlong)iVar15 * (this->SnapshotTimes).PageSize;
    if (uVar6 < uVar19 || uVar6 - uVar19 == 0) {
      uVar19 = uVar6;
    }
    if ((uVar19 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementIndex > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x37a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::GetIteratorFromItem
              (this_00,&local_110,uVar19 - 1);
    uVar17 = local_110.CurrentPageIndex;
    pFVar18 = (FMemoryTagSample *)local_110.CurrentPageFirstItem;
    while( true ) {
      while( true ) {
        if (((FMemoryTagSample *)local_110.CurrentItem == (FMemoryTagSample *)0x0) ||
           ((double)((FMemoryTagSample *)local_110.CurrentItem)->Value <= param_3 &&
            param_3 != (double)((FMemoryTagSample *)local_110.CurrentItem)->Value))
        goto LAB_14d45cc14;
        uVar19 = local_110.CurrentItemIndex;
        if ((FMemoryTagSample *)local_110.CurrentItem == pFVar18) break;
        local_110.CurrentItem = local_110.CurrentItem + -1;
        local_110.CurrentItemIndex = local_110.CurrentItemIndex - 1;
      }
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pFVar18 = (FMemoryTagSample *)(local_110.Outer)->FirstPage[uVar17].Items;
      local_110.CurrentPageLastItem = (double *)pFVar16;
      if (pFVar18 != (FMemoryTagSample *)0x0) {
        local_110.CurrentPageLastItem =
             (double *)(pFVar18 + ((local_110.Outer)->FirstPage[uVar17].Count - 1));
      }
      local_110.CurrentPageIndex = uVar17;
      local_110.CurrentPageFirstItem = (double *)pFVar18;
      local_110.CurrentItemIndex =
           ((longlong)local_110.CurrentPageLastItem - (longlong)pFVar18 >> 3) +
           uVar17 * (local_110.Outer)->PageSize;
      local_110.CurrentItem = local_110.CurrentPageLastItem;
    }
    local_110.CurrentItemIndex = (local_110.Outer)->TotalItemCount;
    local_110.CurrentPageFirstItem = (double *)0x0;
    local_110.CurrentPageLastItem = (double *)0x0;
    local_110.CurrentItem = (double *)0x0;
  }
LAB_14d45cc14:
  uVar10 = (this->SnapshotTimes).PagesArray.ArrayNum;
  pTVar9 = (this->SnapshotTimes).FirstPage;
  if (((int)uVar10 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar18 = pFVar16;
  if (0 < (int)uVar10) {
    do {
      uVar11 = uVar10 >> 1;
      iVar8 = uVar11 + (int)pFVar18;
      iVar15 = (uVar10 & 1) + iVar8;
      if (param_4 < *pTVar9[iVar8].Items) {
        iVar15 = (int)pFVar18;
      }
      pFVar18 = (FMemoryTagSample *)(longlong)iVar15;
      uVar10 = uVar11;
    } while (uVar11 != 0);
    if (iVar15 != 0) {
      uVar6 = (this->SnapshotTimes).TotalItemCount;
      uVar7 = (longlong)iVar15 * (this->SnapshotTimes).PageSize;
      if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementIndex > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x3a3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::GetIteratorFromItem
                (this_00,&local_e0,uVar6 - 1);
      uVar17 = local_e0.CurrentPageIndex;
      pFVar18 = (FMemoryTagSample *)local_e0.CurrentPageFirstItem;
      while( true ) {
        while( true ) {
          if (((FMemoryTagSample *)local_e0.CurrentItem == (FMemoryTagSample *)0x0) ||
             ((double)((FMemoryTagSample *)local_e0.CurrentItem)->Value <= param_4))
          goto LAB_14d45cc51;
          uVar6 = local_e0.CurrentItemIndex;
          if ((FMemoryTagSample *)local_e0.CurrentItem == pFVar18) break;
          local_e0.CurrentItem = local_e0.CurrentItem + -1;
          local_e0.CurrentItemIndex = local_e0.CurrentItemIndex - 1;
        }
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pFVar18 = (FMemoryTagSample *)(local_e0.Outer)->FirstPage[uVar17].Items;
        local_e0.CurrentPageLastItem = (double *)pFVar16;
        if (pFVar18 != (FMemoryTagSample *)0x0) {
          local_e0.CurrentPageLastItem =
               (double *)(pFVar18 + ((local_e0.Outer)->FirstPage[uVar17].Count - 1));
        }
        local_e0.CurrentPageIndex = uVar17;
        local_e0.CurrentPageFirstItem = (double *)pFVar18;
        local_e0.CurrentItemIndex =
             ((longlong)local_e0.CurrentPageLastItem - (longlong)pFVar18 >> 3) +
             uVar17 * (local_e0.Outer)->PageSize;
        local_e0.CurrentItem = local_e0.CurrentPageLastItem;
      }
      local_e0.CurrentItemIndex = (local_e0.Outer)->TotalItemCount;
      local_e0.CurrentPageFirstItem = (double *)0x0;
      local_e0.CurrentPageLastItem = (double *)0x0;
      local_e0.CurrentItem = (double *)0x0;
      goto LAB_14d45cc51;
    }
  }
  uVar6 = 0;
LAB_14d45cc51:
  iVar15 = (int)(pFVar5->Values).TotalItemCount;
  iVar20 = (int)uVar19;
  iVar8 = (int)uVar6;
  if (param_5) {
    if (0 < iVar20 + -1) {
      iVar13 = iVar20 + -1;
    }
    if (iVar8 + 1 < iVar15) {
      iVar15 = iVar8 + 1;
    }
  }
  else {
    if (0 < iVar20) {
      iVar13 = iVar20;
    }
    if (iVar8 < iVar15) {
      iVar15 = iVar8;
    }
  }
  if (iVar13 < iVar15) {
    uVar7 = (ulonglong)iVar13;
    TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::GetIteratorFromItem
              (this_00,local_90,uVar7);
    uVar6 = uVar7 / (pFVar5->Values).PageSize;
    uVar19 = (pFVar5->Values).TotalItemCount;
    if (uVar7 != uVar19) {
      if ((uVar19 <= uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InItemIndex < Outer->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x12e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((ulonglong)(longlong)(pFVar5->Values).PagesArray.ArrayNum <= uVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentPageIndex < Outer->PagesArray.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x12f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar1 = (pFVar5->Values).FirstPage;
      uVar19 = uVar7 % (pFVar5->Values).PageSize;
      if ((pTVar1[uVar6].Count <= uVar19) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemIndexInPage < CurrentPage->Count",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x134,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar16 = pTVar1[uVar6].Items + uVar19;
    }
    uVar19 = (ulonglong)(uint)(iVar15 - iVar13);
    pdVar12 = local_90[0].CurrentItem;
    uVar17 = local_90[0].CurrentPageIndex;
    pdVar14 = local_90[0].CurrentPageLastItem;
    uVar23 = SUB84(*local_90[0].CurrentItem,0);
    uVar24 = (int)((ulonglong)*local_90[0].CurrentItem >> 0x20);
    do {
      if (pdVar12 == pdVar14) {
        if (uVar17 == (longlong)(((local_90[0].Outer)->PagesArray).ArrayNum + -1)) {
          pdVar12 = (double *)0x0;
          pdVar14 = (double *)0x0;
        }
        else {
          uVar17 = uVar17 + 1;
          pTVar9 = (local_90[0].Outer)->FirstPage + uVar17;
          pdVar12 = pTVar9->Items;
          if (pdVar12 == (double *)0x0) {
            pdVar14 = (double *)0x0;
          }
          else {
            pdVar14 = pdVar12 + (pTVar9->Count - 1);
          }
          if (pTVar9 != (TPagedArrayPage<double> *)0x0) goto LAB_14d45d107;
        }
LAB_14d45d05a:
        local_a0 = 0;
        local_98 = CONCAT44(uVar24,uVar23);
        (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,&local_98,&local_a0,pFVar16);
        uVar21 = uVar23;
        uVar22 = uVar24;
      }
      else {
        pdVar12 = pdVar12 + 1;
LAB_14d45d107:
        if (pdVar12 == (double *)0x0) goto LAB_14d45d05a;
        local_b0 = *pdVar12;
        uVar21 = SUB84(local_b0,0);
        uVar22 = (undefined4)((ulonglong)local_b0 >> 0x20);
        local_a8 = CONCAT44(uVar24,uVar23);
        uVar6 = (pFVar5->Values).PageSize;
        local_b0 = local_b0 - (double)CONCAT44(uVar24,uVar23);
        (**(code **)param_6)
                  (*(undefined8 *)&param_6->field_0x8,&local_a8,&local_b0,
                   (pFVar5->Values).FirstPage[uVar7 / uVar6].Items + uVar7 % uVar6);
      }
      uVar7 = uVar7 + 1;
      uVar19 = uVar19 - 1;
      uVar23 = uVar21;
      uVar24 = uVar22;
    } while (uVar19 != 0);
  }
  return;
}

// EnumerateTagSets @ 14d45d160

void __thiscall
TraceServices::FMemoryProvider::EnumerateTagSets
          (FMemoryProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FMemoryTagSetInfo_const_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar3 = (this->AvailableTagSets).AllocatorInstance.Data;
  iVar2 = (this->AvailableTagSets).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AvailableTagSets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FMemoryProvider::FTagSetData_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(undefined8 **)pFVar3 != (undefined8 *)0x0) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,**(undefined8 **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// EnumerateTags @ 14d45d1e0

void __thiscall
TraceServices::FMemoryProvider::EnumerateTags
          (FMemoryProvider *this,int param_1,
          TFunctionRef<void___cdecl(TraceServices::FMemoryTagInfo_const_&)> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  int iVar15;
  undefined1 local_res10 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  (**(code **)(this->_padding_ + 0x18))();
  if ((-1 < param_1) && (param_1 < (this->AvailableTagSets).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)((this->AvailableTagSets).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (lVar3 != 0) {
      iVar10 = *(int *)(lVar3 + 0x30);
      iVar13 = 0;
      uVar6 = 1;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0x18);
      iVar15 = 0;
      iVar9 = 0;
      iVar7 = 0;
      if (iVar10 != 0) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x28);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x28) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
        while (uVar12 == 0) {
          lVar8 = (longlong)iVar13;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar13 + 1;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) {
            iVar9 = *(int *)(lVar3 + 0x30);
            iVar7 = iVar10;
            goto LAB_14d45d304;
          }
          uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar8 * 4 + 4);
        }
        iVar9 = *(int *)(lVar3 + 0x30);
        uVar6 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uVar6 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar7 = iVar15 + -1 + (int)lVar8;
        if (iVar9 < iVar7) {
          iVar7 = iVar10;
        }
      }
LAB_14d45d304:
      uVar12 = *(uint *)(lVar3 + 0x30);
      uVar11 = uVar12 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar6,iVar13);
      TStack_60.CurrentBitIndex = iVar7;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar10 = (int)uVar12 >> 5;
      TStack_60._28_4_ = local_9c;
      TStack_60.BaseBitIndex = iVar15;
      uStack_40 = CONCAT44(uStack_6c,*(int *)(lVar3 + 0x10) - *(int *)(lVar3 + 0x3c));
      TStack_60.Array = pTVar1;
      if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(uint *)(lVar3 + 0x30);
      if (uVar12 != uVar6) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x28);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x28) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                 *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
        while (uVar12 == 0) {
          lVar8 = (longlong)iVar10;
          uVar11 = uVar11 + 0x20;
          iVar10 = iVar10 + 1;
          uVar12 = uVar6;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_14d45d401;
          uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar8 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar12 = (int)lVar8 + -1 + uVar11;
        if ((int)uVar6 < (int)uVar12) {
          uVar12 = uVar6;
        }
      }
LAB_14d45d401:
      while( true ) {
        if (*(int *)(lVar3 + 0x10) - *(int *)(lVar3 + 0x3c) != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<__int64,TraceServices::FMemoryTagInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((TStack_60.CurrentBitIndex == uVar12) && (TStack_60.Array == pTVar1)) break;
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,
                   *(undefined8 *)
                    (*(longlong *)(lVar3 + 8) + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
  }
  return;
}

// EnumerateTags @ 14d45d490

void __thiscall
TraceServices::FMemoryProvider::EnumerateTags
          (FMemoryProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FMemoryTagInfo_const_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar3 = (this->AvailableTags).AllocatorInstance.Data;
  iVar2 = (this->AvailableTags).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AvailableTags).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FMemoryTagInfo_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,*(undefined8 *)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// EnumerateTrackers @ 14d45db50

void __thiscall
TraceServices::FMemoryProvider::EnumerateTrackers
          (FMemoryProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FMemoryTrackerInfo_const_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar3 = (this->AvailableTrackers).AllocatorInstance.Data;
  iVar2 = (this->AvailableTrackers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AvailableTrackers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FMemoryProvider::FTrackerData_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(undefined8 **)pFVar3 != (undefined8 *)0x0) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,**(undefined8 **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetOrAddTagSet @ 14d46b080

FTagSetData * __thiscall
TraceServices::FMemoryProvider::GetOrAddTagSet(FMemoryProvider *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTagSetData *pFVar4;
  FString local_18;
  
  if ((-1 < param_1) && (param_1 < (this->AvailableTagSets).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTagSetData *)(*pcVar1)();
      return pFVar4;
    }
    pFVar4 = *(FTagSetData **)
              ((this->AvailableTagSets).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (pFVar4 != (FTagSetData *)0x0) {
      return pFVar4;
    }
  }
  ::FString::FString(&local_18,L"<unknown>");
  InternalAddTagSetSpec(this,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  uVar3 = 0;
  if (param_1 < (this->AvailableTagSets).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTagSetData *)(*pcVar1)();
    return pFVar4;
  }
  return *(FTagSetData **)((this->AvailableTagSets).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetOrAddTracker @ 14d46b3e0

FTrackerData * __thiscall
TraceServices::FMemoryProvider::GetOrAddTracker(FMemoryProvider *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTrackerData *pFVar4;
  FString local_18;
  
  if ((-1 < param_1) && (param_1 < (this->AvailableTrackers).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTrackerData *)(*pcVar1)();
      return pFVar4;
    }
    pFVar4 = *(FTrackerData **)
              ((this->AvailableTrackers).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (pFVar4 != (FTrackerData *)0x0) {
      return pFVar4;
    }
  }
  ::FString::FString(&local_18,L"<unknown>");
  InternalAddTrackerSpec(this,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  uVar3 = 0;
  if (param_1 < (this->AvailableTrackers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTrackerData *)(*pcVar1)();
    return pFVar4;
  }
  return *(FTrackerData **)
          ((this->AvailableTrackers).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetTag @ 14d46de30

FMemoryTagInfo * __thiscall
TraceServices::FMemoryProvider::GetTag(FMemoryProvider *this,long64 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (*(int *)&(this->TagMap).field_0x8 != *(int *)&(this->TagMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->TagMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->TagMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->TagMap).field_0x48 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->TagMap + (longlong)iVar2 * 0x18;
        if (*(longlong *)(*(longlong *)&this->TagMap + (longlong)iVar2 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (FMemoryTagInfo *)0x0;
          }
          return *(FMemoryTagInfo **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FMemoryTagInfo *)0x0;
}

// GetTagCount @ 14d46ded0

uint __thiscall TraceServices::FMemoryProvider::GetTagCount(FMemoryProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return (this->AvailableTags).ArrayNum;
}

// GetTagSampleCount @ 14d46def0

ulong64 __thiscall
TraceServices::FMemoryProvider::GetTagSampleCount(FMemoryProvider *this,int param_1,long64 param_2)

{
  FTrackerData *pFVar1;
  FTagSampleData *pFVar2;
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar1 = GetTracker(this,param_1);
  if (pFVar1 != (FTrackerData *)0x0) {
    pFVar2 = TMapBase<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,0>_>
             ::FindRef((TMapBase<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,0>_>
                        *)&pFVar1->Samples,param_2);
    if (pFVar2 != (FTagSampleData *)0x0) {
      return (pFVar2->Values).TotalItemCount;
    }
  }
  return 0;
}

// GetTagSerial @ 14d46df60

uint __thiscall TraceServices::FMemoryProvider::GetTagSerial(FMemoryProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return this->TagsSerial;
}

// GetTagSet @ 14d46df90

FTagSetData * __thiscall
TraceServices::FMemoryProvider::GetTagSet(FMemoryProvider *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FTagSetData *pFVar3;
  
  if ((-1 < param_1) && (param_1 < (this->AvailableTagSets).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTagSetData *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FTagSetData **)
            ((this->AvailableTagSets).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (FTagSetData *)0x0;
}

// GetTagSetCount @ 14d46e010

uint __thiscall TraceServices::FMemoryProvider::GetTagSetCount(FMemoryProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return this->NumTagSets;
}

// GetTracker @ 14d46e680

FTrackerData * __thiscall
TraceServices::FMemoryProvider::GetTracker(FMemoryProvider *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FTrackerData *pFVar3;
  
  if ((-1 < param_1) && (param_1 < (this->AvailableTrackers).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTrackerData *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FTrackerData **)
            ((this->AvailableTrackers).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (FTrackerData *)0x0;
}

// GetTrackerCount @ 14d46e700

uint __thiscall TraceServices::FMemoryProvider::GetTrackerCount(FMemoryProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return this->NumTrackers;
}

// InternalAddTagSetSpec @ 14d473cd0

void __thiscall
TraceServices::FMemoryProvider::InternalAddTagSetSpec
          (FMemoryProvider *this,int param_1,FString *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  FString local_50;
  
  piVar8 = (int *)0x0;
  if ((uint)param_1 < 8) {
    iVar4 = (this->AvailableTagSets).ArrayNum;
    while (iVar4 <= param_1) {
      iVar4 = (this->AvailableTagSets).ArrayNum;
      if (iVar4 == (this->AvailableTagSets).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->AvailableTagSets).AllocatorInstance,
                           &(this->AvailableTagSets).ArrayMax);
      }
      (this->AvailableTagSets).ArrayNum = iVar4 + 1;
      *(undefined8 *)((this->AvailableTagSets).AllocatorInstance.Data + (longlong)iVar4 * 8) = 0;
      iVar4 = (this->AvailableTagSets).ArrayNum;
    }
    uVar5 = 0;
    if (param_1 < (this->AvailableTagSets).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar1 = *(longlong **)((this->AvailableTagSets).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (plVar1 == (longlong *)0x0) {
      piVar6 = ::operator_new(0x18);
      piVar7 = piVar8;
      piVar9 = piVar8;
      if (piVar6 != (int *)0x0) {
        ::FString::FString(&local_50,param_2);
        *piVar6 = param_1;
        *(FScriptContainerElement **)(piVar6 + 2) = local_50.Data.AllocatorInstance.Data;
        local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        piVar6[4] = local_50.Data.ArrayNum;
        piVar6[5] = local_50.Data.ArrayMax;
        local_50.Data.ArrayNum = 0;
        local_50.Data.ArrayMax = 0;
        piVar7 = (int *)&DAT_00000003;
        piVar9 = piVar6;
      }
      if ((((ulonglong)piVar7 & 2) != 0) &&
         (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      piVar7 = ::operator_new(0x58);
      if (piVar7 != (int *)0x0) {
        *(int **)piVar7 = piVar9;
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        piVar7[10] = 0;
        piVar7[0xb] = 0;
        piVar7[0xc] = 0;
        piVar7[0xd] = 0x80;
        piVar7[0xe] = -1;
        piVar7[0xf] = 0;
        piVar7[0x12] = 0;
        piVar7[0x13] = 0;
        piVar7[0x14] = 0;
        piVar8 = piVar7;
      }
      uVar5 = 0;
      if (param_1 < (this->AvailableTagSets).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(int **)((this->AvailableTagSets).AllocatorInstance.Data + (longlong)param_1 * 8) = piVar8;
      this->NumTagSets = this->NumTagSets + 1;
    }
    else {
      if ((*plVar1 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TagSet->Info",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Memory.cpp"
                             ,0x85,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::operator=((FString *)(*plVar1 + 8),param_2);
    }
  }
  return;
}

// InternalAddTagSpec @ 14d473f10

void __thiscall
TraceServices::FMemoryProvider::InternalAddTagSpec
          (FMemoryProvider *this,long64 param_1,FString *param_2,long64 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  FMemoryTagInfo **local_res10;
  FString *local_res18;
  longlong *local_b8;
  TPairInitializer<__int64_const_&,TraceServices::FMemoryTagInfo_*_const_&> local_b0;
  longlong *local_a0;
  int local_98;
  longlong local_90;
  FString local_88;
  undefined1 local_78 [24];
  FMemoryTagInfo ***local_60;
  longlong **local_58;
  FMemoryTagInfo ***local_50;
  longlong **local_48;
  
  plVar11 = (longlong *)0x0;
  local_b0.Key._0_4_ = 0;
  if (param_1 + 1U < 2) {
    return;
  }
  plVar12 = plVar11;
  if (param_3 != -1) {
    plVar12 = (longlong *)param_3;
  }
  if (7 < (uint)param_4) {
    return;
  }
  local_res10 = (FMemoryTagInfo **)param_1;
  local_res18 = param_2;
  if (param_4 < (this->AvailableTagSets).ArrayNum) {
    if ((param_4 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar13 = *(longlong *)((this->AvailableTagSets).AllocatorInstance.Data + (longlong)param_4 * 8);
    if (lVar13 != 0) goto LAB_14d474075;
  }
  ::FString::FString((FString *)(local_78 + 8),L"<unknown>");
  InternalAddTagSetSpec(this,param_4,(FString *)(local_78 + 8));
  if ((FMemoryTagInfo **)local_78._8_8_ != (FMemoryTagInfo **)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  uVar6 = 0;
  if (param_4 < (this->AvailableTagSets).ArrayNum) {
    uVar6 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar13 = *(longlong *)((this->AvailableTagSets).AllocatorInstance.Data + (longlong)param_4 * 8);
  if ((lVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TagSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Memory.cpp"
                         ,0xbf,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14d474075:
  if (*(int *)&(this->TagMap).field_0x8 != *(int *)&(this->TagMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->TagMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->TagMap).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&(this->TagMap).field_0x48 - 1) &
                    ((longlong)local_res10 >> 0x20) * 0x17 + (longlong)local_res10) * 4);
    if (iVar7 != -1) {
      do {
        lVar2 = *(longlong *)&this->TagMap + (longlong)iVar7 * 0x18;
        if (*(FMemoryTagInfo ***)(*(longlong *)&this->TagMap + (longlong)iVar7 * 0x18) ==
            local_res10) {
          plVar9 = (longlong *)(lVar2 + 8);
          if (lVar2 == 0) {
            plVar9 = plVar11;
          }
          if (plVar9 != (longlong *)0x0) {
            *(longlong **)(*plVar9 + 8) = plVar12;
            *(int *)(*plVar9 + 0x10) = param_4;
            ::FString::operator=((FString *)(*plVar9 + 0x20),local_res18);
            return;
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x10);
      } while (iVar7 != -1);
    }
  }
  plVar8 = ::operator_new(0x30);
  plVar9 = plVar11;
  if (plVar8 != (longlong *)0x0) {
    local_b0.Value = local_res10;
    local_98 = param_4;
    local_90 = 0;
    local_a0 = plVar12;
    ::FString::FString(&local_88,local_res18);
    *plVar8 = (longlong)local_b0.Value;
    plVar8[1] = (longlong)local_a0;
    *(int *)(plVar8 + 2) = local_98;
    plVar8[3] = local_90;
    plVar8[4] = (longlong)local_88.Data.AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(plVar8 + 5) = local_88.Data.ArrayNum;
    *(int *)((longlong)plVar8 + 0x2c) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    plVar11 = plVar8;
    plVar9 = (longlong *)&DAT_00000003;
  }
  local_b8 = plVar11;
  if ((((ulonglong)plVar9 & 2) != 0) &&
     (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_60 = &local_res10;
  local_58 = &local_b8;
  TSet<TTuple<__int64,TraceServices::FMemoryTagInfo_*>,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryTagInfo_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<__int64_const_&,TraceServices::FMemoryTagInfo_*_const_&>_>
            ((TSet<TTuple<__int64,TraceServices::FMemoryTagInfo_*>,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryTagInfo_*,0>,FDefaultSetAllocator>
              *)&this->TagMap,&local_b0,(bool *)&local_60);
  pFVar3 = (this->AvailableTags).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 < pFVar3 + (longlong)(this->AvailableTags).ArrayMax * 8)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->AvailableTags).ArrayNum;
  piVar1 = &(this->AvailableTags).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AvailableTags).AllocatorInstance,piVar1);
  }
  (this->AvailableTags).ArrayNum = iVar7 + 1;
  *(longlong **)((this->AvailableTags).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_b8;
  local_50 = &local_res10;
  local_48 = &local_b8;
  TSet<TTuple<__int64,TraceServices::FMemoryTagInfo_*>,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryTagInfo_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<__int64_const_&,TraceServices::FMemoryTagInfo_*_const_&>_>
            ((TSet<TTuple<__int64,TraceServices::FMemoryTagInfo_*>,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryTagInfo_*,0>,FDefaultSetAllocator>
              *)(lVar13 + 8),
             (TPairInitializer<__int64_const_&,TraceServices::FMemoryTagInfo_*_const_&> *)local_78,
             (bool *)&local_50);
  this->TagsSerial = this->TagsSerial + 1;
  return;
}

// InternalAddTrackerSpec @ 14d4742c0

void __thiscall
TraceServices::FMemoryProvider::InternalAddTrackerSpec
          (FMemoryProvider *this,int param_1,FString *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  FString local_50;
  
  piVar8 = (int *)0x0;
  if ((uint)param_1 < 8) {
    iVar4 = (this->AvailableTrackers).ArrayNum;
    while (iVar4 <= param_1) {
      iVar4 = (this->AvailableTrackers).ArrayNum;
      if (iVar4 == (this->AvailableTrackers).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->AvailableTrackers).AllocatorInstance,
                           &(this->AvailableTrackers).ArrayMax);
      }
      (this->AvailableTrackers).ArrayNum = iVar4 + 1;
      *(undefined8 *)((this->AvailableTrackers).AllocatorInstance.Data + (longlong)iVar4 * 8) = 0;
      iVar4 = (this->AvailableTrackers).ArrayNum;
    }
    uVar5 = 0;
    if (param_1 < (this->AvailableTrackers).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar1 = *(longlong **)
              ((this->AvailableTrackers).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (plVar1 == (longlong *)0x0) {
      piVar6 = ::operator_new(0x18);
      piVar7 = piVar8;
      piVar9 = piVar8;
      if (piVar6 != (int *)0x0) {
        ::FString::FString(&local_50,param_2);
        *piVar6 = param_1;
        *(FScriptContainerElement **)(piVar6 + 2) = local_50.Data.AllocatorInstance.Data;
        local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        piVar6[4] = local_50.Data.ArrayNum;
        piVar6[5] = local_50.Data.ArrayMax;
        local_50.Data.ArrayNum = 0;
        local_50.Data.ArrayMax = 0;
        piVar7 = (int *)&DAT_00000003;
        piVar9 = piVar6;
      }
      if ((((ulonglong)piVar7 & 2) != 0) &&
         (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      piVar7 = ::operator_new(0x58);
      if (piVar7 != (int *)0x0) {
        *(int **)piVar7 = piVar9;
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        piVar7[10] = 0;
        piVar7[0xb] = 0;
        piVar7[0xc] = 0;
        piVar7[0xd] = 0x80;
        piVar7[0xe] = -1;
        piVar7[0xf] = 0;
        piVar7[0x12] = 0;
        piVar7[0x13] = 0;
        piVar7[0x14] = 0;
        piVar8 = piVar7;
      }
      uVar5 = 0;
      if (param_1 < (this->AvailableTrackers).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(int **)((this->AvailableTrackers).AllocatorInstance.Data + (longlong)param_1 * 8) = piVar8;
      this->NumTrackers = this->NumTrackers + 1;
    }
    else {
      if ((*plVar1 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Tracker->Info",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Memory.cpp"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::operator=((FString *)(*plVar1 + 8),param_2);
    }
  }
  return;
}

// IsCompleted @ 14d474c40

bool __thiscall TraceServices::FMemoryProvider::IsCompleted(FMemoryProvider *this)

{
  return (bool)this->bIsCompleted;
}

// IsInitialized @ 14d474c80

bool __thiscall TraceServices::FMemoryProvider::IsInitialized(FMemoryProvider *this)

{
  return (bool)this->bIsInitialized;
}

// OnAnalysisCompleted @ 14d47a8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FMemoryProvider::OnAnalysisCompleted(FMemoryProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  LOCK();
  this->bIsCompleted = (atomic<bool>)0x1;
  UNLOCK();
  if (4 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
}

// ReadAccessCheck @ 14d481130

void __thiscall TraceServices::FMemoryProvider::ReadAccessCheck(FMemoryProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::ReadAccessCheck(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9ba0));
  return;
}

