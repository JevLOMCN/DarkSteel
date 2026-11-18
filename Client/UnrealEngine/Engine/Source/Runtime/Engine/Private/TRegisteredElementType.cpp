// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 40

// TRegisteredElementType<FActorElementData,1> @ 147b38370

TRegisteredElementType<FActorElementData,1> * __thiscall
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::
TRegisteredElementType<FActorElementData,1>(TRegisteredElementType<FActorElementData,1> *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ =
       (longlong)&___7__TRegisteredElementType_UFActorElementData___00_UTypedElementRegistry__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->HandleDataStore).InternalDataRW.Mutex.Mutex.Ptr = (void *)0x0;
  (this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = 0;
  (this->HandleDataStore).InternalDataFreeIndices.ArrayMax = 0;
  TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
            (&(this->HandleDataStore).InternalDataArray,0);
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS,4000);
  (this->DeferredElementsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredElementsToRemove).ArrayNum = 0;
  (this->DeferredElementsToRemove).ArrayMax = 0;
  return this;
}

// TRegisteredElementType<FComponentElementData,1> @ 147b38420

TRegisteredElementType<FComponentElementData,1> * __thiscall
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::
TRegisteredElementType<FComponentElementData,1>
          (TRegisteredElementType<FComponentElementData,1> *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ =
       (longlong)
       &___7__TRegisteredElementType_UFComponentElementData___00_UTypedElementRegistry__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->HandleDataStore).InternalDataRW.Mutex.Mutex.Ptr = (void *)0x0;
  (this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = 0;
  (this->HandleDataStore).InternalDataFreeIndices.ArrayMax = 0;
  TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
  ::
  TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
            (&(this->HandleDataStore).InternalDataArray,0);
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS,4000);
  (this->DeferredElementsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredElementsToRemove).ArrayNum = 0;
  (this->DeferredElementsToRemove).ArrayMax = 0;
  return this;
}

// TRegisteredElementType<FObjectElementData,1> @ 147b384d0

TRegisteredElementType<FObjectElementData,1> * __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::
TRegisteredElementType<FObjectElementData,1>(TRegisteredElementType<FObjectElementData,1> *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__TRegisteredElementType_UFObjectElementData___00_UTypedElementRegistry__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->HandleDataStore).InternalDataRW.Mutex.Mutex.Ptr = (void *)0x0;
  (this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = 0;
  (this->HandleDataStore).InternalDataFreeIndices.ArrayMax = 0;
  (this->HandleDataStore).InternalDataArray.Chunks.Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->HandleDataStore).InternalDataArray.Chunks.Array.ArrayMax = 0;
  (this->HandleDataStore).InternalDataArray.Chunks.Array.ArrayNum = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS,4000);
  (this->DeferredElementsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredElementsToRemove).ArrayNum = 0;
  (this->DeferredElementsToRemove).ArrayMax = 0;
  return this;
}

// TRegisteredElementType<FSMInstanceElementData,1> @ 147b38580

TRegisteredElementType<FSMInstanceElementData,1> * __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::
TRegisteredElementType<FSMInstanceElementData,1>
          (TRegisteredElementType<FSMInstanceElementData,1> *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ =
       (longlong)
       &___7__TRegisteredElementType_UFSMInstanceElementData___00_UTypedElementRegistry__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->HandleDataStore).InternalDataRW.Mutex.Mutex.Ptr = (void *)0x0;
  (this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = 0;
  (this->HandleDataStore).InternalDataFreeIndices.ArrayMax = 0;
  TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
  ::
  TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
            (&(this->HandleDataStore).InternalDataArray,0);
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS,4000);
  (this->DeferredElementsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredElementsToRemove).ArrayNum = 0;
  (this->DeferredElementsToRemove).ArrayMax = 0;
  return this;
}

// ~TRegisteredElementType<FActorElementData,1> @ 147b3bdc0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::
~TRegisteredElementType<FActorElementData,1>(TRegisteredElementType<FActorElementData,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<FActorElementData>::
  ~TTypedElementInternalDataStore<FActorElementData>(&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TRegisteredElementType<FComponentElementData,1> @ 147b3be10

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::
~TRegisteredElementType<FComponentElementData,1>
          (TRegisteredElementType<FComponentElementData,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<FComponentElementData>::
  ~TTypedElementInternalDataStore<FComponentElementData>(&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TRegisteredElementType<FObjectElementData,1> @ 147b3be60

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::
~TRegisteredElementType<FObjectElementData,1>(TRegisteredElementType<FObjectElementData,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<FObjectElementData>::
  ~TTypedElementInternalDataStore<FObjectElementData>(&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TRegisteredElementType<FSMInstanceElementData,1> @ 147b3beb0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::
~TRegisteredElementType<FSMInstanceElementData,1>
          (TRegisteredElementType<FSMInstanceElementData,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<FSMInstanceElementData>::
  ~TTypedElementInternalDataStore<FSMInstanceElementData>(&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// AddDataForElement @ 147b42720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::AddDataForElement
          (TRegisteredElementType<FActorElementData,1> *this,int *param_1)

{
  TTypedElementInternalDataStore<FActorElementData> *SRWLock;
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FTypedElementInternalData *pFVar6;
  TTypedElementInternalData<FActorElementData> *this_00;
  
  lVar3 = this->_padding_;
  SRWLock = &this->HandleDataStore;
  if (SRWLock == (TTypedElementInternalDataStore<FActorElementData> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar6;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((this->HandleDataStore).InternalDataFreeIndices.ArrayNum < 1) {
    iVar5 = TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
            ::Add(&(this->HandleDataStore).InternalDataArray,1);
  }
  else {
    iVar1 = (this->HandleDataStore).InternalDataFreeIndices.ArrayNum;
    iVar5 = *(int *)((this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data +
                    (longlong)iVar1 * 4 + -4);
    (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = iVar1 + -1;
  }
  *param_1 = iVar5;
  this_00 = TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
            ::operator[](&(this->HandleDataStore).InternalDataArray,iVar5);
  FTypedElementInternalData::Initialize((FTypedElementInternalData *)this_00,(uchar)lVar3,*param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return (FTypedElementInternalData *)this_00;
}

// AddDataForElement @ 147b427f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::AddDataForElement
          (TRegisteredElementType<FComponentElementData,1> *this,int *param_1)

{
  TTypedElementInternalDataStore<FComponentElementData> *SRWLock;
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FTypedElementInternalData *pFVar6;
  TTypedElementInternalData<FComponentElementData> *this_00;
  
  lVar3 = this->_padding_;
  SRWLock = &this->HandleDataStore;
  if (SRWLock == (TTypedElementInternalDataStore<FComponentElementData> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar6;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((this->HandleDataStore).InternalDataFreeIndices.ArrayNum < 1) {
    iVar5 = TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
            ::Add(&(this->HandleDataStore).InternalDataArray,1);
  }
  else {
    iVar1 = (this->HandleDataStore).InternalDataFreeIndices.ArrayNum;
    iVar5 = *(int *)((this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data +
                    (longlong)iVar1 * 4 + -4);
    (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = iVar1 + -1;
  }
  *param_1 = iVar5;
  this_00 = TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
            ::operator[](&(this->HandleDataStore).InternalDataArray,iVar5);
  FTypedElementInternalData::Initialize((FTypedElementInternalData *)this_00,(uchar)lVar3,*param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return (FTypedElementInternalData *)this_00;
}

// AddDataForElement @ 147b428c0

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::AddDataForElement
          (TRegisteredElementType<FObjectElementData,1> *this,int *param_1)

{
  TTypedElementInternalData<FObjectElementData> *pTVar1;
  
  pTVar1 = TTypedElementInternalDataStore<FObjectElementData>::AddDataForElement
                     (&this->HandleDataStore,(uchar)this->_padding_,param_1);
  return (FTypedElementInternalData *)pTVar1;
}

// AddDataForElement @ 147b428e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::AddDataForElement
          (TRegisteredElementType<FSMInstanceElementData,1> *this,int *param_1)

{
  TTypedElementInternalDataStore<FSMInstanceElementData> *SRWLock;
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FTypedElementInternalData *pFVar6;
  TTypedElementInternalData<FSMInstanceElementData> *this_00;
  
  lVar3 = this->_padding_;
  SRWLock = &this->HandleDataStore;
  if (SRWLock == (TTypedElementInternalDataStore<FSMInstanceElementData> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar6;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((this->HandleDataStore).InternalDataFreeIndices.ArrayNum < 1) {
    iVar5 = TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
            ::Add(&(this->HandleDataStore).InternalDataArray,1);
  }
  else {
    iVar1 = (this->HandleDataStore).InternalDataFreeIndices.ArrayNum;
    iVar5 = *(int *)((this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data +
                    (longlong)iVar1 * 4 + -4);
    (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = iVar1 + -1;
  }
  *param_1 = iVar5;
  this_00 = TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
            ::operator[](&(this->HandleDataStore).InternalDataArray,iVar5);
  FTypedElementInternalData::Initialize((FTypedElementInternalData *)this_00,(uchar)lVar3,*param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return (FTypedElementInternalData *)this_00;
}

// GetDataForElement @ 147b648d0

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::GetDataForElement
          (TRegisteredElementType<FActorElementData,1> *this,int param_1)

{
  TTypedElementInternalDataStore<FActorElementData> *SRWLock;
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FTypedElementInternalData *pFVar6;
  
  SRWLock = &this->HandleDataStore;
  if (SRWLock == (TTypedElementInternalDataStore<FActorElementData> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar3 = param_1 / 0x199;
  uVar5 = 0;
  if ((int)uVar3 < (this->HandleDataStore).InternalDataArray.Chunks.Array.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar6;
    }
  }
  lVar1 = *(longlong *)
           ((this->HandleDataStore).InternalDataArray.Chunks.Array.AllocatorInstance.Data +
           (longlong)(int)uVar3 * 8);
  if (SRWLock != (TTypedElementInternalDataStore<FActorElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (FTypedElementInternalData *)(lVar1 + (longlong)(param_1 % 0x199) * 0x28);
}

// GetDataForElement @ 147b649c0

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::GetDataForElement
          (TRegisteredElementType<FComponentElementData,1> *this,int param_1)

{
  TTypedElementInternalDataStore<FComponentElementData> *SRWLock;
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FTypedElementInternalData *pFVar6;
  
  SRWLock = &this->HandleDataStore;
  if (SRWLock == (TTypedElementInternalDataStore<FComponentElementData> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar3 = param_1 / 0x199;
  uVar5 = 0;
  if ((int)uVar3 < (this->HandleDataStore).InternalDataArray.Chunks.Array.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar6;
    }
  }
  lVar1 = *(longlong *)
           ((this->HandleDataStore).InternalDataArray.Chunks.Array.AllocatorInstance.Data +
           (longlong)(int)uVar3 * 8);
  if (SRWLock != (TTypedElementInternalDataStore<FComponentElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (FTypedElementInternalData *)(lVar1 + (longlong)(param_1 % 0x199) * 0x28);
}

// GetDataForElement @ 147b64ab0

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::GetDataForElement
          (TRegisteredElementType<FObjectElementData,1> *this,int param_1)

{
  TTypedElementInternalDataStore<FObjectElementData> *SRWLock;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTypedElementInternalData *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  SRWLock = &this->HandleDataStore;
  if (SRWLock == (TTypedElementInternalDataStore<FObjectElementData> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar7 = param_1 >> 0x1f & 0x1ff;
  uVar4 = param_1 + uVar7;
  uVar8 = (int)uVar4 >> 9;
  uVar6 = 0;
  if ((int)uVar8 < (this->HandleDataStore).InternalDataArray.Chunks.Array.ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar5;
    }
  }
  lVar1 = *(longlong *)
           ((this->HandleDataStore).InternalDataArray.Chunks.Array.AllocatorInstance.Data +
           (longlong)(int)uVar8 * 8);
  if (SRWLock != (TTypedElementInternalDataStore<FObjectElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (FTypedElementInternalData *)((longlong)(int)((uVar4 & 0x1ff) - uVar7) * 0x20 + lVar1);
}

// GetDataForElement @ 147b64ba0

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::GetDataForElement
          (TRegisteredElementType<FSMInstanceElementData,1> *this,int param_1)

{
  TTypedElementInternalDataStore<FSMInstanceElementData> *SRWLock;
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FTypedElementInternalData *pFVar6;
  
  SRWLock = &this->HandleDataStore;
  if (SRWLock == (TTypedElementInternalDataStore<FSMInstanceElementData> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar3 = param_1 / 0x199;
  uVar5 = 0;
  if ((int)uVar3 < (this->HandleDataStore).InternalDataArray.Chunks.Array.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementInternalData *)(*pcVar2)();
      return pFVar6;
    }
  }
  lVar1 = *(longlong *)
           ((this->HandleDataStore).InternalDataArray.Chunks.Array.AllocatorInstance.Data +
           (longlong)(int)uVar3 * 8);
  if (SRWLock != (TTypedElementInternalDataStore<FSMInstanceElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (FTypedElementInternalData *)(lVar1 + (longlong)(param_1 % 0x199) * 0x28);
}

// GetDataForScriptElement @ 147b64c90

FScriptTypedElementInternalDataPtr __thiscall
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::GetDataForScriptElement
          (TRegisteredElementType<FActorElementData,1> *this,int param_1)

{
  undefined4 in_register_00000014;
  
  TTypedElementInternalDataStore<FActorElementData>::GetInternalDataForScriptHandle
            (&this->HandleDataStore,param_1);
  return (FScriptTypedElementInternalDataPtr)
         (FScriptTypedElementInternalDataControlBlock *)CONCAT44(in_register_00000014,param_1);
}

// GetDataForScriptElement @ 147b64cc0

FScriptTypedElementInternalDataPtr __thiscall
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::GetDataForScriptElement
          (TRegisteredElementType<FComponentElementData,1> *this,int param_1)

{
  undefined4 in_register_00000014;
  
  TTypedElementInternalDataStore<FComponentElementData>::GetInternalDataForScriptHandle
            (&this->HandleDataStore,param_1);
  return (FScriptTypedElementInternalDataPtr)
         (FScriptTypedElementInternalDataControlBlock *)CONCAT44(in_register_00000014,param_1);
}

// GetDataForScriptElement @ 147b64cf0

FScriptTypedElementInternalDataPtr __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::GetDataForScriptElement
          (TRegisteredElementType<FObjectElementData,1> *this,int param_1)

{
  undefined4 in_register_00000014;
  
  TTypedElementInternalDataStore<FObjectElementData>::GetInternalDataForScriptHandle
            (&this->HandleDataStore,param_1);
  return (FScriptTypedElementInternalDataPtr)
         (FScriptTypedElementInternalDataControlBlock *)CONCAT44(in_register_00000014,param_1);
}

// GetDataForScriptElement @ 147b64d20

FScriptTypedElementInternalDataPtr __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::GetDataForScriptElement
          (TRegisteredElementType<FSMInstanceElementData,1> *this,int param_1)

{
  undefined4 in_register_00000014;
  
  TTypedElementInternalDataStore<FSMInstanceElementData>::GetInternalDataForScriptHandle
            (&this->HandleDataStore,param_1);
  return (FScriptTypedElementInternalDataPtr)
         (FScriptTypedElementInternalDataControlBlock *)CONCAT44(in_register_00000014,param_1);
}

// GetDataTypeId @ 147b64d50

uchar __thiscall
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::GetDataTypeId
          (TRegisteredElementType<FActorElementData,1> *this)

{
  return FActorElementData::Private_RegisteredTypeId;
}

// GetDataTypeId @ 147b64d60

uchar __thiscall
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::GetDataTypeId
          (TRegisteredElementType<FComponentElementData,1> *this)

{
  return FComponentElementData::Private_RegisteredTypeId;
}

// GetDataTypeId @ 147b64d70

uchar __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::GetDataTypeId
          (TRegisteredElementType<FObjectElementData,1> *this)

{
  return FObjectElementData::Private_RegisteredTypeId;
}

// GetDataTypeId @ 147b64d80

uchar __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::GetDataTypeId
          (TRegisteredElementType<FSMInstanceElementData,1> *this)

{
  return FSMInstanceElementData::Private_RegisteredTypeId;
}

// GetDataTypeName @ 147b64d90

FName __thiscall
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::GetDataTypeName
          (TRegisteredElementType<FActorElementData,1> *this)

{
  FName in_RDX;
  
  FActorElementData::StaticTypeName();
  return in_RDX;
}

// GetDataTypeName @ 147b64db0

FName __thiscall
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::GetDataTypeName
          (TRegisteredElementType<FComponentElementData,1> *this)

{
  FName in_RDX;
  
  FComponentElementData::StaticTypeName();
  return in_RDX;
}

// GetDataTypeName @ 147b64dd0

FName __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::GetDataTypeName
          (TRegisteredElementType<FObjectElementData,1> *this)

{
  FName in_RDX;
  
  FObjectElementData::StaticTypeName();
  return in_RDX;
}

// GetDataTypeName @ 147b64df0

FName __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::GetDataTypeName
          (TRegisteredElementType<FSMInstanceElementData,1> *this)

{
  FName in_RDX;
  
  FSMInstanceElementData::StaticTypeName();
  return in_RDX;
}

// ProcessDeferredElementsToRemove @ 147b7dc40

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
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::ProcessDeferredElementsToRemove
          (TRegisteredElementType<FActorElementData,1> *this)

{
  TTypedElementInternalDataStore<FActorElementData> *SRWLock;
  int *piVar1;
  int iVar2;
  TTypedElementInternalData<FActorElementData> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  int iVar7;
  TTypedElementInternalData<FActorElementData> *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  LPCRITICAL_SECTION local_res10;
  int local_48 [4];
  
  local_res10 = (LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS;
  if (local_res10 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res10);
  iVar2 = (this->DeferredElementsToRemove).ArrayNum;
  pFVar9 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->DeferredElementsToRemove).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FTypedElementInternalData_const_*>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    lpCriticalSection = local_res10;
    if (pFVar9 == pFVar8) break;
    local_48[0] = *(int *)pFVar9;
    SRWLock = &this->HandleDataStore;
    pTVar3 = *(TTypedElementInternalData<FActorElementData> **)(pFVar9 + 8);
    if (SRWLock == (TTypedElementInternalDataStore<FActorElementData> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    this_00 = TChunkedArray<TTypedElementInternalData<FActorElementData>,16384,TSizedDefaultAllocator<32>_>
              ::operator[](&(this->HandleDataStore).InternalDataArray,local_48[0]);
    if (pTVar3 != this_00) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExpectedDataPtr == &InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementData.h"
                         ,0x248,
                         L"Internal data pointer did not match the expected value! Does this handle belong to a different element registry?"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FTypedElementInternalData::LogExternalReferencesOnDestruction
              ((FTypedElementInternalData *)this_00);
    (**(code **)(this_00->_padding_ + 8))(this_00);
    pFVar4 = (this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 <
        pFVar4 + (longlong)(this->HandleDataStore).InternalDataFreeIndices.ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->HandleDataStore).InternalDataFreeIndices.ArrayNum;
    piVar1 = &(this->HandleDataStore).InternalDataFreeIndices.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance,
                         piVar1);
    }
    (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = iVar7 + 1;
    *(int *)((this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data +
            (longlong)iVar7 * 4) = local_48[0];
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    pFVar9 = pFVar9 + 0x10;
  }
  (this->DeferredElementsToRemove).ArrayNum = 0;
  if ((this->DeferredElementsToRemove).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DeferredElementsToRemove).AllocatorInstance,0,
               &(this->DeferredElementsToRemove).ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x000147b7de79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ProcessDeferredElementsToRemove @ 147b7de90

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
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::
ProcessDeferredElementsToRemove(TRegisteredElementType<FComponentElementData,1> *this)

{
  TTypedElementInternalDataStore<FComponentElementData> *SRWLock;
  int *piVar1;
  int iVar2;
  TTypedElementInternalData<FComponentElementData> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  int iVar7;
  TTypedElementInternalData<FComponentElementData> *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  LPCRITICAL_SECTION local_res10;
  int local_48 [4];
  
  local_res10 = (LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS;
  if (local_res10 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res10);
  iVar2 = (this->DeferredElementsToRemove).ArrayNum;
  pFVar9 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->DeferredElementsToRemove).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FTypedElementInternalData_const_*>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    lpCriticalSection = local_res10;
    if (pFVar9 == pFVar8) break;
    local_48[0] = *(int *)pFVar9;
    SRWLock = &this->HandleDataStore;
    pTVar3 = *(TTypedElementInternalData<FComponentElementData> **)(pFVar9 + 8);
    if (SRWLock == (TTypedElementInternalDataStore<FComponentElementData> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    this_00 = TChunkedArray<TTypedElementInternalData<FComponentElementData>,16384,TSizedDefaultAllocator<32>_>
              ::operator[](&(this->HandleDataStore).InternalDataArray,local_48[0]);
    if (pTVar3 != this_00) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExpectedDataPtr == &InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementData.h"
                         ,0x248,
                         L"Internal data pointer did not match the expected value! Does this handle belong to a different element registry?"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FTypedElementInternalData::LogExternalReferencesOnDestruction
              ((FTypedElementInternalData *)this_00);
    (**(code **)(this_00->_padding_ + 8))(this_00);
    pFVar4 = (this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 <
        pFVar4 + (longlong)(this->HandleDataStore).InternalDataFreeIndices.ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->HandleDataStore).InternalDataFreeIndices.ArrayNum;
    piVar1 = &(this->HandleDataStore).InternalDataFreeIndices.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance,
                         piVar1);
    }
    (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = iVar7 + 1;
    *(int *)((this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data +
            (longlong)iVar7 * 4) = local_48[0];
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    pFVar9 = pFVar9 + 0x10;
  }
  (this->DeferredElementsToRemove).ArrayNum = 0;
  if ((this->DeferredElementsToRemove).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DeferredElementsToRemove).AllocatorInstance,0,
               &(this->DeferredElementsToRemove).ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x000147b7e0c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ProcessDeferredElementsToRemove @ 147b7e0e0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::ProcessDeferredElementsToRemove
          (TRegisteredElementType<FObjectElementData,1> *this)

{
  TTypedElementInternalDataStore<FObjectElementData> *SRWLock;
  int *piVar1;
  int iVar2;
  TTypedElementInternalData<FObjectElementData> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  int iVar7;
  TTypedElementInternalData<FObjectElementData> *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  LPCRITICAL_SECTION local_res10;
  int local_48 [4];
  
  local_res10 = (LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS;
  if (local_res10 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res10);
  iVar2 = (this->DeferredElementsToRemove).ArrayNum;
  pFVar9 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->DeferredElementsToRemove).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FTypedElementInternalData_const_*>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    lpCriticalSection = local_res10;
    if (pFVar9 == pFVar8) break;
    local_48[0] = *(int *)pFVar9;
    SRWLock = &this->HandleDataStore;
    pTVar3 = *(TTypedElementInternalData<FObjectElementData> **)(pFVar9 + 8);
    if (SRWLock == (TTypedElementInternalDataStore<FObjectElementData> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    this_00 = TChunkedArray<TTypedElementInternalData<FObjectElementData>,16384,TSizedDefaultAllocator<32>_>
              ::operator[](&(this->HandleDataStore).InternalDataArray,local_48[0]);
    if (pTVar3 != this_00) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExpectedDataPtr == &InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementData.h"
                         ,0x248,
                         L"Internal data pointer did not match the expected value! Does this handle belong to a different element registry?"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FTypedElementInternalData::LogExternalReferencesOnDestruction
              ((FTypedElementInternalData *)this_00);
    (**(code **)(this_00->_padding_ + 8))(this_00);
    pFVar4 = (this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 <
        pFVar4 + (longlong)(this->HandleDataStore).InternalDataFreeIndices.ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->HandleDataStore).InternalDataFreeIndices.ArrayNum;
    piVar1 = &(this->HandleDataStore).InternalDataFreeIndices.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance,
                         piVar1);
    }
    (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = iVar7 + 1;
    *(int *)((this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data +
            (longlong)iVar7 * 4) = local_48[0];
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    pFVar9 = pFVar9 + 0x10;
  }
  (this->DeferredElementsToRemove).ArrayNum = 0;
  if ((this->DeferredElementsToRemove).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DeferredElementsToRemove).AllocatorInstance,0,
               &(this->DeferredElementsToRemove).ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x000147b7e319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ProcessDeferredElementsToRemove @ 147b7e330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::
ProcessDeferredElementsToRemove(TRegisteredElementType<FSMInstanceElementData,1> *this)

{
  TTypedElementInternalDataStore<FSMInstanceElementData> *SRWLock;
  int *piVar1;
  int iVar2;
  TTypedElementInternalData<FSMInstanceElementData> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  int iVar7;
  TTypedElementInternalData<FSMInstanceElementData> *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  LPCRITICAL_SECTION local_res10;
  int local_48 [4];
  
  local_res10 = (LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS;
  if (local_res10 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res10);
  iVar2 = (this->DeferredElementsToRemove).ArrayNum;
  pFVar9 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->DeferredElementsToRemove).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FTypedElementInternalData_const_*>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    lpCriticalSection = local_res10;
    if (pFVar9 == pFVar8) break;
    local_48[0] = *(int *)pFVar9;
    SRWLock = &this->HandleDataStore;
    pTVar3 = *(TTypedElementInternalData<FSMInstanceElementData> **)(pFVar9 + 8);
    if (SRWLock == (TTypedElementInternalDataStore<FSMInstanceElementData> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    this_00 = TChunkedArray<TTypedElementInternalData<FSMInstanceElementData>,16384,TSizedDefaultAllocator<32>_>
              ::operator[](&(this->HandleDataStore).InternalDataArray,local_48[0]);
    if (pTVar3 != this_00) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExpectedDataPtr == &InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementData.h"
                         ,0x248,
                         L"Internal data pointer did not match the expected value! Does this handle belong to a different element registry?"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FTypedElementInternalData::LogExternalReferencesOnDestruction
              ((FTypedElementInternalData *)this_00);
    (**(code **)(this_00->_padding_ + 8))(this_00);
    pFVar4 = (this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 <
        pFVar4 + (longlong)(this->HandleDataStore).InternalDataFreeIndices.ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->HandleDataStore).InternalDataFreeIndices.ArrayNum;
    piVar1 = &(this->HandleDataStore).InternalDataFreeIndices.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance,
                         piVar1);
    }
    (this->HandleDataStore).InternalDataFreeIndices.ArrayNum = iVar7 + 1;
    *(int *)((this->HandleDataStore).InternalDataFreeIndices.AllocatorInstance.Data +
            (longlong)iVar7 * 4) = local_48[0];
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    pFVar9 = pFVar9 + 0x10;
  }
  (this->DeferredElementsToRemove).ArrayNum = 0;
  if ((this->DeferredElementsToRemove).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DeferredElementsToRemove).AllocatorInstance,0,
               &(this->DeferredElementsToRemove).ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x000147b7e569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// RemoveDataForElement @ 147b83d20

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::RemoveDataForElement
          (TRegisteredElementType<FActorElementData,1> *this,int param_1,
          FTypedElementInternalData *param_2,bool param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TTuple<int,FTypedElementInternalData_const_*>,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res20 [2];
  int local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_res20[0] = param_1;
  if (*(int *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x8 !=
      *(int *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x34) {
    TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
                       *)&(this->HandleDataStore).ScriptInternalDataMap,param_1,local_res20);
  }
  if (param_3) {
    FTypedElementInternalData::StoreDestructionRequestCallstack(param_2);
    lpCriticalSection = &this->DeferredElementsToRemoveCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar6 = &this->DeferredElementsToRemove;
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    local_18 = param_1;
    uStack_10 = param_2;
    if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar2 + (longlong)(this->DeferredElementsToRemove).ArrayMax * 0x10)) {
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
    iVar5 = (this->DeferredElementsToRemove).ArrayNum;
    piVar1 = &(this->DeferredElementsToRemove).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->DeferredElementsToRemove).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(int *)pFVar2 = local_18;
    *(undefined4 *)(pFVar2 + 4) = uStack_14;
    *(undefined4 *)(pFVar2 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_10._4_4_;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    TTypedElementInternalDataStore<FActorElementData>::RemoveDataForElement
              (&this->HandleDataStore,param_1,param_2);
  }
  return;
}

// RemoveDataForElement @ 147b83e80

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::RemoveDataForElement
          (TRegisteredElementType<FComponentElementData,1> *this,int param_1,
          FTypedElementInternalData *param_2,bool param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TTuple<int,FTypedElementInternalData_const_*>,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res20 [2];
  int local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_res20[0] = param_1;
  if (*(int *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x8 !=
      *(int *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x34) {
    TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
                       *)&(this->HandleDataStore).ScriptInternalDataMap,param_1,local_res20);
  }
  if (param_3) {
    FTypedElementInternalData::StoreDestructionRequestCallstack(param_2);
    lpCriticalSection = &this->DeferredElementsToRemoveCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar6 = &this->DeferredElementsToRemove;
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    local_18 = param_1;
    uStack_10 = param_2;
    if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar2 + (longlong)(this->DeferredElementsToRemove).ArrayMax * 0x10)) {
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
    iVar5 = (this->DeferredElementsToRemove).ArrayNum;
    piVar1 = &(this->DeferredElementsToRemove).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->DeferredElementsToRemove).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(int *)pFVar2 = local_18;
    *(undefined4 *)(pFVar2 + 4) = uStack_14;
    *(undefined4 *)(pFVar2 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_10._4_4_;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    TTypedElementInternalDataStore<FComponentElementData>::RemoveDataForElement
              (&this->HandleDataStore,param_1,param_2);
  }
  return;
}

// RemoveDataForElement @ 147b83fe0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::RemoveDataForElement
          (TRegisteredElementType<FObjectElementData,1> *this,int param_1,
          FTypedElementInternalData *param_2,bool param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TTuple<int,FTypedElementInternalData_const_*>,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res20 [2];
  int local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_res20[0] = param_1;
  if (*(int *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x8 !=
      *(int *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x34) {
    TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
                       *)&(this->HandleDataStore).ScriptInternalDataMap,param_1,local_res20);
  }
  if (param_3) {
    FTypedElementInternalData::StoreDestructionRequestCallstack(param_2);
    lpCriticalSection = &this->DeferredElementsToRemoveCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar6 = &this->DeferredElementsToRemove;
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    local_18 = param_1;
    uStack_10 = param_2;
    if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar2 + (longlong)(this->DeferredElementsToRemove).ArrayMax * 0x10)) {
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
    iVar5 = (this->DeferredElementsToRemove).ArrayNum;
    piVar1 = &(this->DeferredElementsToRemove).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->DeferredElementsToRemove).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(int *)pFVar2 = local_18;
    *(undefined4 *)(pFVar2 + 4) = uStack_14;
    *(undefined4 *)(pFVar2 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_10._4_4_;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    TTypedElementInternalDataStore<FObjectElementData>::RemoveDataForElement
              (&this->HandleDataStore,param_1,param_2);
  }
  return;
}

// RemoveDataForElement @ 147b84140

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::RemoveDataForElement
          (TRegisteredElementType<FSMInstanceElementData,1> *this,int param_1,
          FTypedElementInternalData *param_2,bool param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TTuple<int,FTypedElementInternalData_const_*>,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res20 [2];
  int local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_res20[0] = param_1;
  if (*(int *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x8 !=
      *(int *)&(this->HandleDataStore).ScriptInternalDataMap.field_0x34) {
    TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FScriptTypedElementInternalDataOwner>,TDefaultMapHashableKeyFuncs<int,FScriptTypedElementInternalDataOwner,0>,FDefaultSetAllocator>
                       *)&(this->HandleDataStore).ScriptInternalDataMap,param_1,local_res20);
  }
  if (param_3) {
    FTypedElementInternalData::StoreDestructionRequestCallstack(param_2);
    lpCriticalSection = &this->DeferredElementsToRemoveCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar6 = &this->DeferredElementsToRemove;
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    local_18 = param_1;
    uStack_10 = param_2;
    if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar2 + (longlong)(this->DeferredElementsToRemove).ArrayMax * 0x10)) {
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
    iVar5 = (this->DeferredElementsToRemove).ArrayNum;
    piVar1 = &(this->DeferredElementsToRemove).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->DeferredElementsToRemove).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(int *)pFVar2 = local_18;
    *(undefined4 *)(pFVar2 + 4) = uStack_14;
    *(undefined4 *)(pFVar2 + 8) = (undefined4)uStack_10;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_10._4_4_;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    TTypedElementInternalDataStore<FSMInstanceElementData>::RemoveDataForElement
              (&this->HandleDataStore,param_1,param_2);
  }
  return;
}

// SetDataTypeId @ 147b8aeb0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FActorElementData,1>::SetDataTypeId
          (TRegisteredElementType<FActorElementData,1> *this,uchar param_1)

{
  FActorElementData::Private_RegisteredTypeId = param_1;
  return;
}

// SetDataTypeId @ 147b8aec0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FComponentElementData,1>::SetDataTypeId
          (TRegisteredElementType<FComponentElementData,1> *this,uchar param_1)

{
  FComponentElementData::Private_RegisteredTypeId = param_1;
  return;
}

// SetDataTypeId @ 147b8aed0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FObjectElementData,1>::SetDataTypeId
          (TRegisteredElementType<FObjectElementData,1> *this,uchar param_1)

{
  FObjectElementData::Private_RegisteredTypeId = param_1;
  return;
}

// SetDataTypeId @ 147b8aee0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FSMInstanceElementData,1>::SetDataTypeId
          (TRegisteredElementType<FSMInstanceElementData,1> *this,uchar param_1)

{
  FSMInstanceElementData::Private_RegisteredTypeId = param_1;
  return;
}

