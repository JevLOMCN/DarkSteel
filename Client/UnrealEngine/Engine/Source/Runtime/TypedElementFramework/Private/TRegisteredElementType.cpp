// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 29

// TRegisteredElementType<FTestTypedElementData,1> @ 142c95250

TRegisteredElementType<FTestTypedElementData,1> * __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::
TRegisteredElementType<FTestTypedElementData,1>
          (TRegisteredElementType<FTestTypedElementData,1> *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &___7__TRegisteredElementType_UFTestTypedElementData___00_UTypedElementRegistry__6B_;
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

// TRegisteredElementType<void,1> @ 142c95300

TRegisteredElementType<void,1> * __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::TRegisteredElementType<void,1>
          (TRegisteredElementType<void,1> *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TRegisteredElementType_X_00_UTypedElementRegistry__6B_;
  TTypedElementInternalDataStore<void>::TTypedElementInternalDataStore<void>(&this->HandleDataStore)
  ;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS,4000);
  (this->DeferredElementsToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredElementsToRemove).ArrayNum = 0;
  (this->DeferredElementsToRemove).ArrayMax = 0;
  return this;
}

// ~TRegisteredElementType<FTestTypedElementData,1> @ 142c991d0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::
~TRegisteredElementType<FTestTypedElementData,1>
          (TRegisteredElementType<FTestTypedElementData,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<FTestTypedElementData>::
  ~TTypedElementInternalDataStore<FTestTypedElementData>(&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TRegisteredElementType<void,1> @ 142c99220

void __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::~TRegisteredElementType<void,1>
          (TRegisteredElementType<void,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<void>::~TTypedElementInternalDataStore<void>
            (&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TRegisteredElementType<void,0> @ 142c99270

void __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::~TRegisteredElementType<void,0>
          (TRegisteredElementType<void,0> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<void>::~TTypedElementInternalDataStore<void>
            (&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// AddDataForElement @ 142ca2a20

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::AddDataForElement
          (TRegisteredElementType<FTestTypedElementData,1> *this,int *param_1)

{
  TTypedElementInternalData<FTestTypedElementData> *pTVar1;
  
  pTVar1 = TTypedElementInternalDataStore<FTestTypedElementData>::AddDataForElement
                     (&this->HandleDataStore,(uchar)this->_padding_,param_1);
  return (FTypedElementInternalData *)pTVar1;
}

// AddDataForElement @ 142ca2a40

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::AddDataForElement
          (TRegisteredElementType<void,1> *this,int *param_1)

{
  FTypedElementInternalData *pFVar1;
  
  pFVar1 = (FTypedElementInternalData *)
           TTypedElementInternalDataStore<void>::AddDataForElement
                     (&this->HandleDataStore,(uchar)this->_padding_,param_1);
  return pFVar1;
}

// AddDataForElement @ 142ca2a60

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::AddDataForElement
          (TRegisteredElementType<void,0> *this,int *param_1)

{
  FTypedElementInternalData *pFVar1;
  
  pFVar1 = (FTypedElementInternalData *)
           TTypedElementInternalDataStore<void>::AddDataForElement
                     (&this->HandleDataStore,(uchar)this->_padding_,param_1);
  return pFVar1;
}

// GetDataForElement @ 142cad000

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::GetDataForElement
          (TRegisteredElementType<FTestTypedElementData,1> *this,int param_1)

{
  TTypedElementInternalDataStore<FTestTypedElementData> *SRWLock;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTypedElementInternalData *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  SRWLock = &this->HandleDataStore;
  if (SRWLock == (TTypedElementInternalDataStore<FTestTypedElementData> *)0x0) {
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
  if (SRWLock != (TTypedElementInternalDataStore<FTestTypedElementData> *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (FTypedElementInternalData *)((longlong)(int)((uVar4 & 0x1ff) - uVar7) * 0x20 + lVar1);
}

// GetDataForElement @ 142cad0f0

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::GetDataForElement
          (TRegisteredElementType<void,1> *this,int param_1)

{
  FTypedElementInternalData *pFVar1;
  
  pFVar1 = (FTypedElementInternalData *)
           TTypedElementInternalDataStore<void>::GetDataForElement(&this->HandleDataStore,param_1);
  return pFVar1;
}

// GetDataForElement @ 142cad100

FTypedElementInternalData * __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::GetDataForElement
          (TRegisteredElementType<void,0> *this,int param_1)

{
  FTypedElementInternalData *pFVar1;
  
  pFVar1 = (FTypedElementInternalData *)
           TTypedElementInternalDataStore<void>::GetDataForElement(&this->HandleDataStore,param_1);
  return pFVar1;
}

// GetDataForScriptElement @ 142cad260

FScriptTypedElementInternalDataPtr __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::GetDataForScriptElement
          (TRegisteredElementType<FTestTypedElementData,1> *this,int param_1)

{
  undefined4 in_register_00000014;
  
  TTypedElementInternalDataStore<FTestTypedElementData>::GetInternalDataForScriptHandle
            (&this->HandleDataStore,param_1);
  return (FScriptTypedElementInternalDataPtr)
         (FScriptTypedElementInternalDataControlBlock *)CONCAT44(in_register_00000014,param_1);
}

// GetDataForScriptElement @ 142cad290

FScriptTypedElementInternalDataPtr __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::GetDataForScriptElement
          (TRegisteredElementType<void,1> *this,int param_1)

{
  undefined4 in_register_00000014;
  
  TTypedElementInternalDataStore<void>::GetInternalDataForScriptHandle
            (&this->HandleDataStore,param_1);
  return (FScriptTypedElementInternalDataPtr)
         (FScriptTypedElementInternalDataControlBlock *)CONCAT44(in_register_00000014,param_1);
}

// GetDataForScriptElement @ 142cad2c0

FScriptTypedElementInternalDataPtr __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::GetDataForScriptElement
          (TRegisteredElementType<void,0> *this,int param_1)

{
  undefined4 in_register_00000014;
  
  *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
  return (FScriptTypedElementInternalDataPtr)
         (FScriptTypedElementInternalDataControlBlock *)CONCAT44(in_register_00000014,param_1);
}

// GetDataTypeId @ 142cad2e0

uchar __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::GetDataTypeId
          (TRegisteredElementType<FTestTypedElementData,1> *this)

{
  return FTestTypedElementData::Private_RegisteredTypeId;
}

// GetDataTypeId @ 142cad2f0

uchar __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::GetDataTypeId
          (TRegisteredElementType<void,1> *this)

{
  return '\0';
}

// GetDataTypeId @ 142cad300

uchar __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::GetDataTypeId
          (TRegisteredElementType<void,0> *this)

{
  return '\0';
}

// GetDataTypeName @ 142cad310

FName __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::GetDataTypeName
          (TRegisteredElementType<FTestTypedElementData,1> *this)

{
  FName in_RDX;
  
  FTestTypedElementData::StaticTypeName();
  return in_RDX;
}

// GetDataTypeName @ 142cad330

FName __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::GetDataTypeName
          (TRegisteredElementType<void,1> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetDataTypeName @ 142cad340

FName __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::GetDataTypeName
          (TRegisteredElementType<void,0> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// ProcessDeferredElementsToRemove @ 142cb2900

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::
ProcessDeferredElementsToRemove(TRegisteredElementType<FTestTypedElementData,1> *this)

{
  TTypedElementInternalDataStore<FTestTypedElementData> *SRWLock;
  int *piVar1;
  int iVar2;
  TTypedElementInternalData<FTestTypedElementData> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  int iVar7;
  TTypedElementInternalData<FTestTypedElementData> *this_00;
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
    pTVar3 = *(TTypedElementInternalData<FTestTypedElementData> **)(pFVar9 + 8);
    if (SRWLock == (TTypedElementInternalDataStore<FTestTypedElementData> *)0x0) {
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
    this_00 = TChunkedArray<TTypedElementInternalData<FTestTypedElementData>,16384,TSizedDefaultAllocator<32>_>
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
                    /* WARNING: Could not recover jumptable at 0x000142cb2b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ProcessDeferredElementsToRemove @ 142cb2b50

void __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::ProcessDeferredElementsToRemove
          (TRegisteredElementType<void,1> *this)

{
  TTypedElementInternalDataStore<void> *SRWLock;
  int *piVar1;
  int iVar2;
  FTypedElementInternalData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  int iVar7;
  FTypedElementInternalData *this_00;
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
    pFVar3 = *(FTypedElementInternalData **)(pFVar9 + 8);
    SRWLock = &this->HandleDataStore;
    iVar7 = *(int *)pFVar9;
    if (SRWLock == (TTypedElementInternalDataStore<void> *)0x0) {
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
    local_48[0] = -1;
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::RemoveAndCopyValue
              (&(this->HandleDataStore).ElementIdToArrayIndex,iVar7,local_48);
    this_00 = (FTypedElementInternalData *)
              TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::
              operator[](&(this->HandleDataStore).InternalDataArray,iVar7);
    if (pFVar3 != this_00) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExpectedDataPtr == &InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementData.h"
                         ,0x2a7,
                         L"Internal data pointer did not match the expected value! Does this handle belong to a different element registry?"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FTypedElementInternalData::LogExternalReferencesOnDestruction(this_00);
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
                    /* WARNING: Could not recover jumptable at 0x000142cb2d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ProcessDeferredElementsToRemove @ 142cb2db0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::ProcessDeferredElementsToRemove
          (TRegisteredElementType<void,0> *this)

{
  TTypedElementInternalDataStore<void> *SRWLock;
  int *piVar1;
  int iVar2;
  FTypedElementInternalData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  int iVar7;
  FTypedElementInternalData *this_00;
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
    pFVar3 = *(FTypedElementInternalData **)(pFVar9 + 8);
    SRWLock = &this->HandleDataStore;
    iVar7 = *(int *)pFVar9;
    if (SRWLock == (TTypedElementInternalDataStore<void> *)0x0) {
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
    local_48[0] = -1;
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::RemoveAndCopyValue
              (&(this->HandleDataStore).ElementIdToArrayIndex,iVar7,local_48);
    this_00 = (FTypedElementInternalData *)
              TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::
              operator[](&(this->HandleDataStore).InternalDataArray,iVar7);
    if (pFVar3 != this_00) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExpectedDataPtr == &InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementData.h"
                         ,0x2a7,
                         L"Internal data pointer did not match the expected value! Does this handle belong to a different element registry?"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FTypedElementInternalData::LogExternalReferencesOnDestruction(this_00);
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
                    /* WARNING: Could not recover jumptable at 0x000142cb2ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// RemoveDataForElement @ 142cb77b0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::RemoveDataForElement
          (TRegisteredElementType<FTestTypedElementData,1> *this,int param_1,
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
    TTypedElementInternalDataStore<FTestTypedElementData>::RemoveDataForElement
              (&this->HandleDataStore,param_1,param_2);
  }
  return;
}

// RemoveDataForElement @ 142cb7910

void __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::RemoveDataForElement
          (TRegisteredElementType<void,1> *this,int param_1,FTypedElementInternalData *param_2,
          bool param_3)

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
    TTypedElementInternalDataStore<void>::RemoveDataForElement
              (&this->HandleDataStore,param_1,param_2);
  }
  return;
}

// RemoveDataForElement @ 142cb7a70

void __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::RemoveDataForElement
          (TRegisteredElementType<void,0> *this,int param_1,FTypedElementInternalData *param_2,
          bool param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TTuple<int,FTypedElementInternalData_const_*>,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  if (!param_3) {
    TTypedElementInternalDataStore<void>::RemoveDataForElement
              (&this->HandleDataStore,param_1,param_2);
    return;
  }
  FTypedElementInternalData::StoreDestructionRequestCallstack(param_2);
  lpCriticalSection = &this->DeferredElementsToRemoveCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000142cb7b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetDataTypeId @ 142cbb1e0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::SetDataTypeId
          (TRegisteredElementType<FTestTypedElementData,1> *this,uchar param_1)

{
  FTestTypedElementData::Private_RegisteredTypeId = param_1;
  return;
}

// SetDataTypeId @ 142cbb1f0

void __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::SetDataTypeId
          (TRegisteredElementType<void,1> *this,uchar param_1)

{
  return;
}

// SetDataTypeId @ 142cbb200

void __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::SetDataTypeId
          (TRegisteredElementType<void,0> *this,uchar param_1)

{
  return;
}

