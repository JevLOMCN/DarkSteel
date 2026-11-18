// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// ~TTypedElementInternalDataStore<FActorElementData> @ 147b3c6d0

void __thiscall
TTypedElementInternalDataStore<FActorElementData>::
~TTypedElementInternalDataStore<FActorElementData>
          (TTypedElementInternalDataStore<FActorElementData> *this)

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
  TIndirectArray<TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
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
                    /* WARNING: Could not recover jumptable at 0x000147b3c73c. Too many branches */
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

// ~TTypedElementInternalDataStore<FComponentElementData> @ 147b3c780

void __thiscall
TTypedElementInternalDataStore<FComponentElementData>::
~TTypedElementInternalDataStore<FComponentElementData>
          (TTypedElementInternalDataStore<FComponentElementData> *this)

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
  TIndirectArray<TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
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
                    /* WARNING: Could not recover jumptable at 0x000147b3c7ec. Too many branches */
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

// ~TTypedElementInternalDataStore<FObjectElementData> @ 147b3c830

void __thiscall
TTypedElementInternalDataStore<FObjectElementData>::
~TTypedElementInternalDataStore<FObjectElementData>
          (TTypedElementInternalDataStore<FObjectElementData> *this)

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
  TIndirectArray<TChunkedArray<TTypedElementInternalData<FObjectElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
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
                    /* WARNING: Could not recover jumptable at 0x000147b3c89c. Too many branches */
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

// ~TTypedElementInternalDataStore<FSMInstanceElementData> @ 147b3c8e0

void __thiscall
TTypedElementInternalDataStore<FSMInstanceElementData>::
~TTypedElementInternalDataStore<FSMInstanceElementData>
          (TTypedElementInternalDataStore<FSMInstanceElementData> *this)

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
  TIndirectArray<TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
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
                    /* WARNING: Could not recover jumptable at 0x000147b3c94c. Too many branches */
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

// AddDataForElement @ 147b429b0

TTypedElementInternalData<FObjectElementData> * __thiscall
TTypedElementInternalDataStore<FObjectElementData>::AddDataForElement
          (TTypedElementInternalDataStore<FObjectElementData> *this,uchar param_1,int *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTypedElementInternalData<FObjectElementData> *pTVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  void *local_38 [2];
  
  if ((this == (TTypedElementInternalDataStore<FObjectElementData> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TTypedElementInternalData<FObjectElementData> *)(*pcVar2)();
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
                 &___7__TTypedElementInternalData_UFObjectElementData____6B_;
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
          pTVar6 = (TTypedElementInternalData<FObjectElementData> *)(*pcVar2)();
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
  pTVar6 = TChunkedArray<TTypedElementInternalData<FObjectElementData>,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->InternalDataArray,iVar11);
  FTypedElementInternalData::Initialize((FTypedElementInternalData *)pTVar6,param_1,*param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return pTVar6;
}

// GetInternalDataForScriptHandle @ 147b66040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScriptTypedElementInternalDataPtr __thiscall
TTypedElementInternalDataStore<FActorElementData>::GetInternalDataForScriptHandle
          (TTypedElementInternalDataStore<FActorElementData> *this,int param_1)

{
  int iVar1;
  FTypedElementInternalData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptTypedElementInternalDataPtr FVar7;
  TTypedElementInternalData<FActorElementData> *pTVar8;
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
  if ((this == (TTypedElementInternalDataStore<FActorElementData> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)(*pcVar3)();
    return (FScriptTypedElementInternalDataPtr)FVar7.ControlBlock;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar8 = TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
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
  if (this != (TTypedElementInternalDataStore<FActorElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return (FScriptTypedElementInternalDataPtr)pFVar10;
}

// GetInternalDataForScriptHandle @ 147b66240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScriptTypedElementInternalDataPtr __thiscall
TTypedElementInternalDataStore<FComponentElementData>::GetInternalDataForScriptHandle
          (TTypedElementInternalDataStore<FComponentElementData> *this,int param_1)

{
  int iVar1;
  FTypedElementInternalData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptTypedElementInternalDataPtr FVar7;
  TTypedElementInternalData<FComponentElementData> *pTVar8;
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
  if ((this == (TTypedElementInternalDataStore<FComponentElementData> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)(*pcVar3)();
    return (FScriptTypedElementInternalDataPtr)FVar7.ControlBlock;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar8 = TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
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
  if (this != (TTypedElementInternalDataStore<FComponentElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return (FScriptTypedElementInternalDataPtr)pFVar10;
}

// GetInternalDataForScriptHandle @ 147b66440

FScriptTypedElementInternalDataPtr __thiscall
TTypedElementInternalDataStore<FObjectElementData>::GetInternalDataForScriptHandle
          (TTypedElementInternalDataStore<FObjectElementData> *this,int param_1)

{
  int iVar1;
  FTypedElementInternalData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptTypedElementInternalDataPtr FVar7;
  TTypedElementInternalData<FObjectElementData> *pTVar8;
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
  if ((this == (TTypedElementInternalDataStore<FObjectElementData> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)(*pcVar3)();
    return (FScriptTypedElementInternalDataPtr)FVar7.ControlBlock;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar8 = TChunkedArray<TTypedElementInternalData<FObjectElementData>,16384,TSizedDefaultAllocator<32>_>
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
  if (this != (TTypedElementInternalDataStore<FObjectElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return (FScriptTypedElementInternalDataPtr)pFVar10;
}

// GetInternalDataForScriptHandle @ 147b66640

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FScriptTypedElementInternalDataPtr __thiscall
TTypedElementInternalDataStore<FSMInstanceElementData>::GetInternalDataForScriptHandle
          (TTypedElementInternalDataStore<FSMInstanceElementData> *this,int param_1)

{
  int iVar1;
  FTypedElementInternalData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptTypedElementInternalDataPtr FVar7;
  TTypedElementInternalData<FSMInstanceElementData> *pTVar8;
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
  if ((this == (TTypedElementInternalDataStore<FSMInstanceElementData> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)(*pcVar3)();
    return (FScriptTypedElementInternalDataPtr)FVar7.ControlBlock;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  pTVar8 = TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
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
  if (this != (TTypedElementInternalDataStore<FSMInstanceElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  return (FScriptTypedElementInternalDataPtr)pFVar10;
}

// RemoveDataForElement @ 147b842a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TTypedElementInternalDataStore<FActorElementData>::RemoveDataForElement
          (TTypedElementInternalDataStore<FActorElementData> *this,int param_1,
          FTypedElementInternalData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTypedElementInternalData<FActorElementData> *this_00;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if (this == (TTypedElementInternalDataStore<FActorElementData> *)0x0) {
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
  this_00 = TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
            ::operator[](&this->InternalDataArray,local_res10[0]);
  if ((TTypedElementInternalData<FActorElementData> *)param_2 != this_00) {
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
  if (this != (TTypedElementInternalDataStore<FActorElementData> *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

// RemoveDataForElement @ 147b84400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TTypedElementInternalDataStore<FComponentElementData>::RemoveDataForElement
          (TTypedElementInternalDataStore<FComponentElementData> *this,int param_1,
          FTypedElementInternalData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTypedElementInternalData<FComponentElementData> *this_00;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if (this == (TTypedElementInternalDataStore<FComponentElementData> *)0x0) {
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
  this_00 = TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
            ::operator[](&this->InternalDataArray,local_res10[0]);
  if ((TTypedElementInternalData<FComponentElementData> *)param_2 != this_00) {
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
  if (this != (TTypedElementInternalDataStore<FComponentElementData> *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

// RemoveDataForElement @ 147b84560

void __thiscall
TTypedElementInternalDataStore<FObjectElementData>::RemoveDataForElement
          (TTypedElementInternalDataStore<FObjectElementData> *this,int param_1,
          FTypedElementInternalData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTypedElementInternalData<FObjectElementData> *this_00;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if (this == (TTypedElementInternalDataStore<FObjectElementData> *)0x0) {
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
  this_00 = TChunkedArray<TTypedElementInternalData<FObjectElementData>,16384,TSizedDefaultAllocator<32>_>
            ::operator[](&this->InternalDataArray,local_res10[0]);
  if ((TTypedElementInternalData<FObjectElementData> *)param_2 != this_00) {
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
  if (this != (TTypedElementInternalDataStore<FObjectElementData> *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

// RemoveDataForElement @ 147b846c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TTypedElementInternalDataStore<FSMInstanceElementData>::RemoveDataForElement
          (TTypedElementInternalDataStore<FSMInstanceElementData> *this,int param_1,
          FTypedElementInternalData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTypedElementInternalData<FSMInstanceElementData> *this_00;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if (this == (TTypedElementInternalDataStore<FSMInstanceElementData> *)0x0) {
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
  this_00 = TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
            ::operator[](&this->InternalDataArray,local_res10[0]);
  if ((TTypedElementInternalData<FSMInstanceElementData> *)param_2 != this_00) {
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
  if (this != (TTypedElementInternalDataStore<FSMInstanceElementData> *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

