// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// TTypedElementInternalDataStore<void> @ 142c954f0

TTypedElementInternalDataStore<void> * __thiscall
TTypedElementInternalDataStore<void>::TTypedElementInternalDataStore<void>
          (TTypedElementInternalDataStore<void> *this)

{
  (this->InternalDataRW).Mutex.Mutex.Ptr = (void *)0x0;
  TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>
            (&this->InternalDataArray,0);
  (this->InternalDataFreeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalDataFreeIndices).ArrayNum = 0;
  (this->InternalDataFreeIndices).ArrayMax = 0;
  *(undefined8 *)&this->ElementIdToArrayIndex = 0;
  *(undefined8 *)&(this->ElementIdToArrayIndex).field_0x8 = 0;
  *(undefined8 *)&(this->ElementIdToArrayIndex).field_0x20 = 0;
  *(undefined4 *)&(this->ElementIdToArrayIndex).field_0x28 = 0;
  *(undefined4 *)&(this->ElementIdToArrayIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementIdToArrayIndex).field_0x34 = 0;
  *(undefined4 *)&(this->ElementIdToArrayIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ElementIdToArrayIndex).field_0x40 = 0;
  *(undefined4 *)&(this->ElementIdToArrayIndex).field_0x48 = 0;
  *(undefined8 *)&this->ScriptInternalDataMap = 0;
  *(undefined8 *)&(this->ScriptInternalDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ScriptInternalDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ScriptInternalDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ScriptInternalDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScriptInternalDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ScriptInternalDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScriptInternalDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ScriptInternalDataMap).field_0x48 = 0;
  return this;
}

// ~TTypedElementInternalDataStore<FTestTypedElementData> @ 142c99880

void __thiscall
TTypedElementInternalDataStore<FTestTypedElementData>::
~TTypedElementInternalDataStore<FTestTypedElementData>
          (TTypedElementInternalDataStore<FTestTypedElementData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  *(undefined4 *)&(this->ScriptInternalDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScriptInternalDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScriptInternalDataMap);
  TIndirectArray<TChunkedArray<TTypedElementInternalData<FTestTypedElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->InternalDataArray).Chunks,0);
  pFVar2 = (this->InternalDataArray).Chunks.Array.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InternalDataFreeIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142c998ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// ~TTypedElementInternalDataStore<void> @ 142c99930

void __thiscall
TTypedElementInternalDataStore<void>::~TTypedElementInternalDataStore<void>
          (TTypedElementInternalDataStore<void> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  *(undefined4 *)&(this->ScriptInternalDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScriptInternalDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScriptInternalDataMap);
  *(undefined4 *)&(this->ElementIdToArrayIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ElementIdToArrayIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ElementIdToArrayIndex);
  pFVar2 = (this->InternalDataFreeIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TIndirectArray<TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->InternalDataArray).Chunks,0);
  pFVar2 = (this->InternalDataArray).Chunks.Array.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142c999c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// AddDataForElement @ 142ca2a80

TTypedElementInternalData<FTestTypedElementData> * __thiscall
TTypedElementInternalDataStore<FTestTypedElementData>::AddDataForElement
          (TTypedElementInternalDataStore<FTestTypedElementData> *this,uchar param_1,int *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTypedElementInternalData<FTestTypedElementData> *pTVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  void *local_38 [2];
  
  if ((this == (TTypedElementInternalDataStore<FTestTypedElementData> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TTypedElementInternalData<FTestTypedElementData> *)(*pcVar2)();
    return pTVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  if ((this->InternalDataFreeIndices).ArrayNum < 1) {
    iVar11 = (this->InternalDataArray).NumElements;
    (this->InternalDataArray).NumElements = iVar11 + 1;
    iVar5 = (this->InternalDataArray).Chunks.Array.ArrayNum;
    iVar4 = (int)(iVar11 + 0x200 + (iVar11 + 0x200 >> 0x1f & 0x1ffU)) >> 9;
    if (iVar5 < iVar4) {
      uVar10 = (ulonglong)(uint)(iVar4 - iVar5);
      do {
        pvVar7 = ::operator_new(0x4000);
        local_38[0] = (void *)0x0;
        if (pvVar7 != (void *)0x0) {
          lVar9 = 0x200;
          lVar8 = (longlong)pvVar7 + 0xc;
          do {
            *(undefined8 *)(lVar8 + -4) = 0;
            *(undefined8 *)(lVar8 + 4) = 0;
            *(undefined ***)(lVar8 + -0xc) =
                 &___7__TTypedElementInternalData_UFTestTypedElementData____6B_;
            *(undefined8 *)(lVar8 + 0xc) = 0;
            lVar8 = lVar8 + 0x20;
            lVar9 = lVar9 + -1;
            local_38[0] = pvVar7;
          } while (lVar9 != 0);
        }
        pFVar1 = (this->InternalDataArray).Chunks.Array.AllocatorInstance.Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar1 + (longlong)(this->InternalDataArray).Chunks.Array.ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TTypedElementInternalData<FTestTypedElementData> *)(*pcVar2)();
          return pTVar6;
        }
        iVar5 = (this->InternalDataArray).Chunks.Array.ArrayNum;
        if (iVar5 == (this->InternalDataArray).Chunks.Array.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&this->InternalDataArray,
                             &(this->InternalDataArray).Chunks.Array.ArrayMax);
        }
        pFVar1 = (this->InternalDataArray).Chunks.Array.AllocatorInstance.Data;
        (this->InternalDataArray).Chunks.Array.ArrayNum = iVar5 + 1;
        *(void **)(pFVar1 + (longlong)iVar5 * 8) = local_38[0];
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  else {
    iVar5 = (this->InternalDataFreeIndices).ArrayNum;
    iVar11 = *(int *)((this->InternalDataFreeIndices).AllocatorInstance.Data +
                     (longlong)iVar5 * 4 + -4);
    (this->InternalDataFreeIndices).ArrayNum = iVar5 + -1;
  }
  *param_2 = iVar11;
  pTVar6 = TChunkedArray<TTypedElementInternalData<FTestTypedElementData>,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->InternalDataArray,iVar11);
  FTypedElementInternalData::Initialize((FTypedElementInternalData *)pTVar6,param_1,*param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return pTVar6;
}

// AddDataForElement @ 142ca2c80

TTypedElementInternalData<void> * __thiscall
TTypedElementInternalDataStore<void>::AddDataForElement
          (TTypedElementInternalDataStore<void> *this,uchar param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTypedElementInternalData<void> *pTVar4;
  FTypedElementInternalData *this_00;
  int local_res8 [2];
  TPairInitializer<int_const_&,int_const_&> local_res18;
  int *local_28;
  int *local_20;
  
  if (this == (TTypedElementInternalDataStore<void> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTypedElementInternalData<void> *)(*pcVar2)();
      return pTVar4;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  if ((this->InternalDataFreeIndices).ArrayNum < 1) {
    local_res8[0] =
         TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::Add
                   (&this->InternalDataArray,1);
  }
  else {
    iVar1 = (this->InternalDataFreeIndices).ArrayNum;
    local_res8[0] =
         *(int *)((this->InternalDataFreeIndices).AllocatorInstance.Data + (longlong)iVar1 * 4 + -4)
    ;
    (this->InternalDataFreeIndices).ArrayNum = iVar1 + -1;
  }
  local_20 = local_res8;
  local_28 = param_2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->ElementIdToArrayIndex,&local_res18,(bool *)&local_28);
  this_00 = (FTypedElementInternalData *)
            TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::
            operator[](&this->InternalDataArray,*param_2);
  FTypedElementInternalData::Initialize(this_00,param_1,*param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return (TTypedElementInternalData<void> *)this_00;
}

// GetDataForElement @ 142cad110

TTypedElementInternalData<void> * __thiscall
TTypedElementInternalDataStore<void>::GetDataForElement
          (TTypedElementInternalDataStore<void> *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TTypedElementInternalData<void> *pTVar6;
  int *piVar7;
  int *piVar8;
  undefined1 *puVar9;
  uint uVar10;
  int *piVar11;
  
  if ((this == (TTypedElementInternalDataStore<void> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TTypedElementInternalData<void> *)(*pcVar2)();
    return pTVar6;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  piVar11 = (int *)0x0;
  piVar8 = piVar11;
  if (*(int *)&(this->ElementIdToArrayIndex).field_0x8 !=
      *(int *)&(this->ElementIdToArrayIndex).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ElementIdToArrayIndex).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ElementIdToArrayIndex).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->ElementIdToArrayIndex).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar5 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar5 * 0x10 + *(longlong *)&this->ElementIdToArrayIndex);
        if (*piVar8 == param_1) break;
        iVar5 = piVar8[2];
        piVar8 = piVar11;
      } while (iVar5 != -1);
    }
  }
  piVar7 = piVar8 + 1;
  if (piVar8 == (int *)0x0) {
    piVar7 = piVar11;
  }
  iVar5 = *piVar7;
  uVar3 = iVar5 / 0x2aa;
  uVar10 = 0;
  if ((int)uVar3 < (this->InternalDataArray).Chunks.Array.ArrayNum) {
    uVar10 = ~uVar3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TTypedElementInternalData<void> *)(*pcVar2)();
    return pTVar6;
  }
  lVar1 = *(longlong *)
           ((this->InternalDataArray).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar3 * 8
           );
  if (this != (TTypedElementInternalDataStore<void> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return (TTypedElementInternalData<void> *)(lVar1 + (longlong)(iVar5 % 0x2aa) * 0x18);
}

// GetInternalDataForScriptHandle @ 142cadf50

FScriptTypedElementInternalDataPtr __thiscall
TTypedElementInternalDataStore<FTestTypedElementData>::GetInternalDataForScriptHandle
          (TTypedElementInternalDataStore<FTestTypedElementData> *this,int param_1)

{
  int iVar1;
  FTypedElementInternalData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptTypedElementInternalDataPtr FVar7;
  TTypedElementInternalData<FTestTypedElementData> *pTVar8;
  TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *pTVar9;
  undefined4 in_register_00000014;
  FScriptTypedElementInternalDataControlBlock *pFVar10;
  undefined1 *puVar11;
  TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *pTVar12;
  uint in_R8D;
  longlong lVar13;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  pFVar10 = (FScriptTypedElementInternalDataControlBlock *)CONCAT44(in_register_00000014,param_1);
  pTVar12 = (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)0x0;
  if (*(int *)&(this->ScriptInternalDataMap).field_0x8 !=
      *(int *)&(this->ScriptInternalDataMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ScriptInternalDataMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ScriptInternalDataMap).field_0x38;
    }
    iVar5 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->ScriptInternalDataMap).field_0x48 - 1U & in_R8D) * 4
                    );
    if (iVar5 != -1) {
      do {
        lVar13 = *(longlong *)&this->ScriptInternalDataMap + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&this->ScriptInternalDataMap + (longlong)iVar5 * 0x18) == in_R8D)
        {
          pTVar9 = (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)
                   (lVar13 + 8);
          if (lVar13 == 0) {
            pTVar9 = pTVar12;
          }
          if (pTVar9 != (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)0x0)
          {
            pFVar2 = *(FTypedElementInternalData **)pTVar9;
            pFVar10->Data = pFVar2;
            if (pFVar2 == (FTypedElementInternalData *)0x0) {
              return (FScriptTypedElementInternalDataPtr)pFVar10;
            }
            (pFVar2->Id).field0_0x0.CombinedId = (pFVar2->Id).field0_0x0.CombinedId + 1;
            return (FScriptTypedElementInternalDataPtr)pFVar10;
          }
          break;
        }
        iVar5 = *(int *)(lVar13 + 0x10);
      } while (iVar5 != -1);
    }
  }
  if ((this == (TTypedElementInternalDataStore<FTestTypedElementData> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)(*pcVar3)();
    return (FScriptTypedElementInternalDataPtr)FVar7.ControlBlock;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar8 = TChunkedArray<TTypedElementInternalData<FTestTypedElementData>,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->InternalDataArray,in_R8D);
  iVar5 = *(int *)&(this->ScriptInternalDataMap).field_0x34;
  if (iVar5 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)&this->ScriptInternalDataMap,
                       (int *)&(this->ScriptInternalDataMap).field_0x8,
                       (int *)&(this->ScriptInternalDataMap).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ScriptInternalDataMap).field_0x10,
               false);
  }
  else {
    iVar6 = *(int *)&(this->ScriptInternalDataMap).field_0x30;
    iVar5 = iVar5 + -1;
    lVar13 = *(longlong *)&this->ScriptInternalDataMap;
    iVar1 = *(int *)(lVar13 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->ScriptInternalDataMap).field_0x30 = iVar1;
    *(int *)&(this->ScriptInternalDataMap).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar13 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this->ScriptInternalDataMap,&local_38,iVar6);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)0x0) {
    *(uint *)local_38.Pointer = in_R8D;
    FScriptTypedElementInternalDataOwner::FScriptTypedElementInternalDataOwner
              ((FScriptTypedElementInternalDataOwner *)((longlong)local_38.Pointer + 8),
               (FTypedElementInternalData *)pTVar8);
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
    pTVar12 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
                      *)&this->ScriptInternalDataMap,in_R8D,pTVar12,local_res8,(bool *)0x0);
  lVar13 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
    ::RehashOrLink((TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
                    *)&this->ScriptInternalDataMap,in_R8D,pTVar12,local_res8[0]);
  }
  pFVar2 = *(FTypedElementInternalData **)
            (*(longlong *)&this->ScriptInternalDataMap + 8 + lVar13 * 0x18);
  pFVar10->Data = pFVar2;
  if (pFVar2 != (FTypedElementInternalData *)0x0) {
    (pFVar2->Id).field0_0x0.CombinedId = (pFVar2->Id).field0_0x0.CombinedId + 1;
  }
  if (this != (TTypedElementInternalDataStore<FTestTypedElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return (FScriptTypedElementInternalDataPtr)pFVar10;
}

// GetInternalDataForScriptHandle @ 142cae150

FScriptTypedElementInternalDataPtr __thiscall
TTypedElementInternalDataStore<void>::GetInternalDataForScriptHandle
          (TTypedElementInternalDataStore<void> *this,int param_1)

{
  TMap<int,FScriptTypedElementInternalDataOwner,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>_>
  *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptTypedElementInternalDataPtr FVar6;
  FTypedElementInternalData *pFVar7;
  undefined4 in_register_00000014;
  FScriptTypedElementInternalDataControlBlock *pFVar8;
  undefined1 *puVar9;
  TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *pTVar10;
  TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *pTVar11;
  uint in_R8D;
  longlong lVar12;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  pFVar8 = (FScriptTypedElementInternalDataControlBlock *)CONCAT44(in_register_00000014,param_1);
  this_00 = &this->ScriptInternalDataMap;
  pTVar11 = (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)0x0;
  if (*(int *)&(this->ScriptInternalDataMap).field_0x8 !=
      *(int *)&(this->ScriptInternalDataMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ScriptInternalDataMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ScriptInternalDataMap).field_0x38;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->ScriptInternalDataMap).field_0x48 - 1U & in_R8D) * 4)
    ;
    if (iVar4 != -1) {
      do {
        lVar12 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) == in_R8D) {
          pTVar10 = (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)
                    (lVar12 + 8);
          if (lVar12 == 0) {
            pTVar10 = pTVar11;
          }
          if (pTVar10 != (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)0x0
             ) {
            pFVar7 = *(FTypedElementInternalData **)pTVar10;
            pFVar8->Data = pFVar7;
            if (pFVar7 == (FTypedElementInternalData *)0x0) {
              return (FScriptTypedElementInternalDataPtr)pFVar8;
            }
            (pFVar7->Id).field0_0x0.CombinedId = (pFVar7->Id).field0_0x0.CombinedId + 1;
            return (FScriptTypedElementInternalDataPtr)pFVar8;
          }
          break;
        }
        iVar4 = *(int *)(lVar12 + 0x10);
      } while (iVar4 != -1);
    }
  }
  if ((this == (TTypedElementInternalDataStore<void> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar6.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)(*pcVar2)();
    return (FScriptTypedElementInternalDataPtr)FVar6.ControlBlock;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar10 = pTVar11;
  if (*(int *)&(this->ElementIdToArrayIndex).field_0x8 !=
      *(int *)&(this->ElementIdToArrayIndex).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ElementIdToArrayIndex).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ElementIdToArrayIndex).field_0x38;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->ElementIdToArrayIndex).field_0x48 - 1U & in_R8D) * 4)
    ;
    if (iVar4 != -1) {
      do {
        pTVar10 = (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)
                  ((longlong)iVar4 * 0x10 + *(longlong *)&this->ElementIdToArrayIndex);
        if (*(uint *)pTVar10 == in_R8D) {
          if (pTVar10 != (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)0x0
             ) goto LAB_142cae275;
          break;
        }
        iVar4 = *(int *)&pTVar10->field_0x8;
        pTVar10 = pTVar11;
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar6.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)(*pcVar2)();
    return (FScriptTypedElementInternalDataPtr)FVar6.ControlBlock;
  }
LAB_142cae275:
  pFVar7 = (FTypedElementInternalData *)
           TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::
           operator[](&this->InternalDataArray,*(int *)&pTVar10->field_0x4);
  iVar4 = *(int *)&(this->ScriptInternalDataMap).field_0x34;
  if (iVar4 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this_00,
                       (int *)&(this->ScriptInternalDataMap).field_0x8,
                       (int *)&(this->ScriptInternalDataMap).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ScriptInternalDataMap).field_0x10,
               false);
  }
  else {
    iVar5 = *(int *)&(this->ScriptInternalDataMap).field_0x30;
    iVar4 = iVar4 + -1;
    iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->ScriptInternalDataMap).field_0x30 = iVar1;
    *(int *)&(this->ScriptInternalDataMap).field_0x34 = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<int,FScriptTypedElementInternalDataOwner>_> *)0x0) {
    *(uint *)local_38.Pointer = in_R8D;
    FScriptTypedElementInternalDataOwner::FScriptTypedElementInternalDataOwner
              ((FScriptTypedElementInternalDataOwner *)((longlong)local_38.Pointer + 8),pFVar7);
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
    pTVar11 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar3 = TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
                      *)this_00,in_R8D,pTVar11,local_res8,(bool *)0x0);
  lVar12 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
    ::RehashOrLink((TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
                    *)this_00,in_R8D,pTVar11,local_res8[0]);
  }
  pFVar7 = *(FTypedElementInternalData **)(*(longlong *)&this_00->field_0x0 + 8 + lVar12 * 0x18);
  pFVar8->Data = pFVar7;
  if (pFVar7 != (FTypedElementInternalData *)0x0) {
    (pFVar7->Id).field0_0x0.CombinedId = (pFVar7->Id).field0_0x0.CombinedId + 1;
  }
  if (this != (TTypedElementInternalDataStore<void> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return (FScriptTypedElementInternalDataPtr)pFVar8;
}

// RemoveDataForElement @ 142cb7bb0

void __thiscall
TTypedElementInternalDataStore<FTestTypedElementData>::RemoveDataForElement
          (TTypedElementInternalDataStore<FTestTypedElementData> *this,int param_1,
          FTypedElementInternalData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTypedElementInternalData<FTestTypedElementData> *this_00;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if (this == (TTypedElementInternalDataStore<FTestTypedElementData> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  this_00 = TChunkedArray<TTypedElementInternalData<FTestTypedElementData>,16384,TSizedDefaultAllocator<32>_>
            ::operator[](&this->InternalDataArray,local_res10[0]);
  if ((TTypedElementInternalData<FTestTypedElementData> *)param_2 != this_00) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExpectedDataPtr == &InternalData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementData.h"
                       ,0x248,
                       L"Internal data pointer did not match the expected value! Does this handle belong to a different element registry?"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FTypedElementInternalData::LogExternalReferencesOnDestruction
            ((FTypedElementInternalData *)this_00);
  (**(code **)(this_00->_padding_ + 8))(this_00);
  pFVar2 = (this->InternalDataFreeIndices).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->InternalDataFreeIndices).ArrayMax * 4)) {
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
  iVar5 = (this->InternalDataFreeIndices).ArrayNum;
  piVar1 = &(this->InternalDataFreeIndices).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->InternalDataFreeIndices).AllocatorInstance,piVar1);
  }
  (this->InternalDataFreeIndices).ArrayNum = iVar5 + 1;
  *(int *)((this->InternalDataFreeIndices).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_res10[0];
  if (this != (TTypedElementInternalDataStore<FTestTypedElementData> *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

// RemoveDataForElement @ 142cb7d10

void __thiscall
TTypedElementInternalDataStore<void>::RemoveDataForElement
          (TTypedElementInternalDataStore<void> *this,int param_1,FTypedElementInternalData *param_2
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTypedElementInternalData *this_00;
  int local_18 [4];
  
  if (this == (TTypedElementInternalDataStore<void> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  local_18[0] = -1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::RemoveAndCopyValue
            (&this->ElementIdToArrayIndex,param_1,local_18);
  this_00 = (FTypedElementInternalData *)
            TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::
            operator[](&this->InternalDataArray,param_1);
  if (param_2 != this_00) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExpectedDataPtr == &InternalData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementData.h"
                       ,0x2a7,
                       L"Internal data pointer did not match the expected value! Does this handle belong to a different element registry?"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FTypedElementInternalData::LogExternalReferencesOnDestruction(this_00);
  (**(code **)(this_00->_padding_ + 8))(this_00);
  pFVar2 = (this->InternalDataFreeIndices).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->InternalDataFreeIndices).ArrayMax * 4)) {
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
  iVar5 = (this->InternalDataFreeIndices).ArrayNum;
  piVar1 = &(this->InternalDataFreeIndices).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->InternalDataFreeIndices).AllocatorInstance,piVar1);
  }
  (this->InternalDataFreeIndices).ArrayNum = iVar5 + 1;
  *(int *)((this->InternalDataFreeIndices).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_18[0];
  if (this != (TTypedElementInternalDataStore<void> *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

