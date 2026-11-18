// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 19

// IndexToObject @ 141ea5370

FUObjectItem * __thiscall FUObjectArray::IndexToObject(FUObjectArray *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUObjectItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1 < (this->ObjObjects).NumElements) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x362,L"IsValidIndex(%d)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FUObjectItem *)(*pcVar1)();
        return pFVar3;
      }
    }
    if ((uint)(this->ObjObjects).NumChunks <= (uint)param_1 >> 0x10) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkIndex < (uint32)NumChunks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FUObjectItem *)(*pcVar1)();
        return pFVar3;
      }
    }
    if ((this->ObjObjects).MaxElements <= param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x364,L"Index (%d) < MaxElements (%d)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FUObjectItem *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar3 = (this->ObjObjects).Objects[(uint)param_1 >> 0x10];
    if (pFVar3 == (FUObjectItem *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chunk",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x366,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FUObjectItem *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar3 = pFVar3 + (param_1 & 0xffff);
    if (pFVar3 == (FUObjectItem *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x381,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FUObjectItem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return pFVar3;
  }
  return (FUObjectItem *)0x0;
}

// FUObjectArray @ 142258730

FUObjectArray * __thiscall FUObjectArray::FUObjectArray(FUObjectArray *this)

{
  this->ObjLastNonGCIndex = -1;
  this->ObjFirstGCIndex = 0;
  this->MaxObjectsNotConsideredByGC = 0;
  (this->ObjObjects).Objects = (FUObjectItem **)0x0;
  (this->ObjObjects).PreAllocatedObjects = (FUObjectItem *)0x0;
  (this->ObjObjects).MaxElements = 0;
  (this->ObjObjects).NumElements = 0;
  (this->ObjObjects).MaxChunks = 0;
  (this->ObjObjects).NumChunks = 0;
  this->OpenForDisregardForGC = true;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ObjObjectsCritical,4000);
  (this->ObjAvailableList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjAvailableList).ArrayNum = 0;
  (this->ObjAvailableList).ArrayMax = 0;
  this->ObjAvailableListEstimateCount = 0;
  (this->UObjectCreateListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UObjectCreateListeners).ArrayNum = 0;
  (this->UObjectCreateListeners).ArrayMax = 0;
  (this->UObjectDeleteListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UObjectDeleteListeners).ArrayNum = 0;
  (this->UObjectDeleteListeners).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->UObjectDeleteListenersCritical,4000);
  (this->PrimarySerialNumber).Counter = 1000;
  this->bShouldRecycleObjectIndices = true;
  GCoreObjectArrayForDebugVisualizers = &GUObjectArray.ObjObjects;
  return this;
}

// AddUObjectCreateListener @ 1422603d0

void __thiscall
FUObjectArray::AddUObjectCreateListener(FUObjectArray *this,FUObjectCreateListener *param_1)

{
  TArray<FUObjectArray::FUObjectCreateListener_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FUObjectCreateListener *local_res10 [3];
  
  pFVar7 = (this->UObjectCreateListeners).AllocatorInstance.Data;
  pTVar1 = &this->UObjectCreateListeners;
  pFVar3 = pFVar7 + (longlong)(this->UObjectCreateListeners).ArrayNum * 8;
  do {
    local_res10[0] = param_1;
    if (pFVar7 == pFVar3) {
LAB_14226042b:
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar3 + (longlong)(this->UObjectCreateListeners).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->UObjectCreateListeners).ArrayNum;
      piVar2 = &(this->UObjectCreateListeners).ArrayMax;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->UObjectCreateListeners).ArrayNum = iVar6 + 1;
      *(FUObjectCreateListener **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_res10[0];
      return;
    }
    if (*(FUObjectCreateListener **)pFVar7 == param_1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!UObjectCreateListeners.Contains(Listener)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                         ,0x1b6,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14226042b;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// AddUObjectDeleteListener @ 1422604d0

void __thiscall
FUObjectArray::AddUObjectDeleteListener(FUObjectArray *this,FUObjectDeleteListener *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FUObjectArray::FUObjectDeleteListener_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FUObjectDeleteListener *local_res10 [3];
  
  lpCriticalSection = &this->UObjectDeleteListenersCritical;
  local_res10[0] = param_1;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar7 = &this->UObjectDeleteListeners;
  pFVar6 = (pTVar7->AllocatorInstance).Data;
  pFVar2 = pFVar6 + (longlong)(this->UObjectDeleteListeners).ArrayNum * 8;
  do {
    if (pFVar6 == pFVar2) {
LAB_14226056c:
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar2 + (longlong)(this->UObjectDeleteListeners).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->UObjectDeleteListeners).ArrayNum;
      piVar1 = &(this->UObjectDeleteListeners).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar7->AllocatorInstance,piVar1);
      }
      (this->UObjectDeleteListeners).ArrayNum = iVar5 + 1;
      *(FUObjectDeleteListener **)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           local_res10[0];
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return;
    }
    if (*(FUObjectDeleteListener **)pFVar6 == local_res10[0]) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!UObjectDeleteListeners.Contains(Listener)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                         ,0x1cf,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14226056c;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// AllocateObjectPool @ 142260ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUObjectArray::AllocateObjectPool(FUObjectArray *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                       ,0x76,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->MaxObjectsNotConsideredByGC = param_2;
  iVar1 = (this->ObjObjects).NumElements;
  this->ObjFirstGCIndex = (param_2 < 1) - 1;
  if (iVar1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjObjects.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                       ,0x80,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 < 1) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  }
  FChunkedFixedUObjectArray::PreAllocate(&this->ObjObjects,param_1,param_3);
  if (0 < this->MaxObjectsNotConsideredByGC) {
    FChunkedFixedUObjectArray::AddRange(&this->ObjObjects,this->MaxObjectsNotConsideredByGC);
  }
  return;
}

// AllocateSerialNumber @ 142260c80

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FUObjectArray::AllocateSerialNumber(FUObjectArray *this,int param_1)

{
  FThreadSafeCounter *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FUObjectItem *pFVar6;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (param_1 < (this->ObjObjects).NumElements) {
    pFVar6 = FChunkedFixedUObjectArray::operator[](&this->ObjObjects,param_1);
  }
  else {
    pFVar6 = (FUObjectItem *)0x0;
  }
  iVar4 = pFVar6->SerialNumber;
  if (pFVar6->SerialNumber == 0) {
    LOCK();
    pFVar1 = &this->PrimarySerialNumber;
    iVar4 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + 1;
    UNLOCK();
    iVar4 = iVar4 + 1;
    if (iVar4 < 0x3e9) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
    }
    LOCK();
    iVar5 = pFVar6->SerialNumber;
    bVar3 = iVar5 == 0;
    if (bVar3) {
      pFVar6->SerialNumber = iVar4;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar3) {
      iVar4 = iVar5;
    }
  }
  return iVar4;
}

// AllocateUObjectIndex @ 142260d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FUObjectArray::AllocateUObjectIndex
          (FUObjectArray *this,UObjectBase *param_1,EInternalObjectFlags param_2,int param_3,
          int param_4,FRemoteObjectId param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FUObjectItem *this_00;
  FWriteBuffer *pFVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStackY_d8 [32];
  FLLMScope local_a4;
  FLLMScope local_a0;
  EInternalObjectFlags local_9c;
  FName local_98;
  FName local_90;
  FMemScope local_88;
  FMemScope local_80;
  FString local_78;
  TLogScope<0> local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_9c = param_2;
  FLLMScope::FLLMScope(&local_a0,UObject,false,None,Default,true);
  FMemScope::FMemScope(&local_80,UObject,true);
  FLLMScope::FLLMScope
            (&local_a4,LLMTagDeclaration_UObject_UObjectArray.UniqueName,false,None,Default,true);
  local_98 = LLMTagDeclaration_UObject_UObjectArray.UniqueName;
  FMemScope::FMemScope(&local_88,&local_98,true);
  bVar9 = -1 < MetadataChannel->Enabled;
  if (bVar9) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_68);
    *(undefined8 *)(local_68._8_8_ + 0x28) = *(undefined8 *)(local_68._8_8_ + 0x20);
  }
  if ((param_1->InternalIndex != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object->InternalIndex == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                         ,0xf2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ObjObjectsCritical);
  if (param_3 < 0) {
    if ((this->OpenForDisregardForGC & 0 < GUObjectArray.MaxObjectsNotConsideredByGC) == 0) {
      if ((this->ObjAvailableList).ArrayNum < 1) {
        if ((this->ObjFirstGCIndex < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ObjFirstGCIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                               ,0x120,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        param_3 = FChunkedFixedUObjectArray::AddRange(&this->ObjObjects,1);
      }
      else {
        param_3 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->ObjAvailableList,Default);
        this->ObjAvailableListEstimateCount = (this->ObjAvailableList).ArrayNum;
      }
      if (((param_3 < this->ObjFirstGCIndex) || (param_3 <= this->ObjLastNonGCIndex)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= ObjFirstGCIndex && Index > ObjLastNonGCIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                             ,0x123,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this->ObjLastNonGCIndex = this->ObjLastNonGCIndex + 1;
      param_3 = this->ObjLastNonGCIndex;
      if ((this->MaxObjectsNotConsideredByGC <= param_3) && (-1 < this->ObjFirstGCIndex)) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
      }
      if (((this->MaxObjectsNotConsideredByGC <= this->ObjLastNonGCIndex) &&
          (param_3 = FChunkedFixedUObjectArray::AddRange(&this->ObjObjects,1),
          param_3 != this->ObjLastNonGCIndex)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == ObjLastNonGCIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                             ,0x10f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = this->ObjLastNonGCIndex + 1;
      if (iVar6 < this->MaxObjectsNotConsideredByGC) {
        iVar6 = this->MaxObjectsNotConsideredByGC;
      }
      this->MaxObjectsNotConsideredByGC = iVar6;
    }
    if ((param_3 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_3 < (this->ObjObjects).NumElements) {
    this_00 = FChunkedFixedUObjectArray::operator[](&this->ObjObjects,param_3);
  }
  else {
    this_00 = (FUObjectItem *)0x0;
  }
  if ((this_00->field1_0x8).Object != (UObjectBase *)0x0) {
    local_90 = (param_1->NamePrivate).Name;
    ::FName::ToString(&local_90,&local_78);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  (this_00->field0_0x0).FlagsAndRefCount = -0x8000000000000000;
  if (this->ObjLastNonGCIndex < param_3) {
    (this_00->field0_0x0).FlagsAndRefCount =
         (longlong)(int)UE::GC::Private::FGCFlags::ReachableObjectFlag << 0x20 | 0x8000000000000000;
  }
  this_00->SerialNumber = param_4;
  (this_00->field1_0x8).Object = param_1;
  this_00->ClusterRootIndex = 0;
  param_1->InternalIndex = param_3;
  if (local_9c != Borrowed) {
    FUObjectItem::ThisThreadAtomicallySetFlag(this_00,local_9c);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ObjObjectsCritical);
  uVar7 = 0;
  if (0 < (this->UObjectCreateListeners).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->UObjectCreateListeners).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->UObjectCreateListeners).AllocatorInstance.Data + lVar8);
      (**(code **)(*plVar1 + 8))(plVar1,param_1,param_3);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->UObjectCreateListeners).ArrayNum);
  }
  if (bVar9) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar8 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar5 = *(FWriteBuffer **)(lVar8 + 0x20);
    if ((int)pFVar5 - *(int *)&pFVar5->Cursor < 1) {
      pFVar5 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar5->Cursor = '\n';
    pFVar5->Cursor = pFVar5->Cursor + 1;
    pFVar5->Committed = pFVar5->Cursor;
  }
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(&local_a4);
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(&local_a0);
  return;
}

// CloseDisregardForGC @ 142265470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUObjectArray::CloseDisregardForGC(FUObjectArray *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  EInternalObjectFlags EVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  FUObjectItem *pFVar8;
  longlong lVar9;
  int iVar10;
  TObjectIteratorBase<1> local_58;
  
  lpCriticalSection = &this->ObjObjectsCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->OpenForDisregardForGC == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpenForDisregardForGC",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                         ,0x9b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (GIsRequestingExit == false) {
    ProcessNewlyLoadedUObjects((FName)0x0,true);
    UClass::AssembleReferenceTokenStreams();
    if (GIsInitialLoad != false) {
      pUVar7 = Z_Construct_UClass_UObject_NoRegister();
      TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_58,pUVar7,false,RF_NoFlags,Borrowed);
      lVar3 = local_58._padding_;
joined_r0x00014226555d:
      if (lVar3 != 0) {
        plVar1 = *(longlong **)(lVar3 + 8);
        cVar6 = (**(code **)(*plVar1 + 0x1d8))(plVar1);
        iVar10 = *(int *)((longlong)plVar1 + 0xc);
        if (cVar6 == '\0') {
          if ((iVar10 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
            pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
          }
          else {
            pFVar8 = (FUObjectItem *)0x0;
          }
          if (((ulonglong)((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) != 0) {
            iVar10 = *(int *)((longlong)plVar1 + 0xc);
            if ((iVar10 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
              pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
            }
            else {
              pFVar8 = (FUObjectItem *)0x0;
            }
            FUObjectItem::ClearRootFlags(pFVar8,RootSet);
          }
        }
        else {
          if ((iVar10 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
            pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
            FUObjectItem::SetRootFlags(pFVar8,RootSet);
          }
          else {
            FUObjectItem::SetRootFlags((FUObjectItem *)0x0,RootSet);
          }
        }
LAB_1422656a0:
        do {
          do {
            bVar5 = TIterator::Advance((TIterator *)&local_58);
            lVar3 = local_58._padding_;
            if (!bVar5) goto joined_r0x00014226555d;
            if (local_58._padding_ == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = *(longlong *)(local_58._padding_ + 8);
            }
          } while ((local_58.ExclusionFlags & *(EObjectFlags *)(lVar9 + 8)) != RF_NoFlags);
          pUVar7 = Z_Construct_UClass_UObject_NoRegister();
          EVar4 = local_58.InternalExclusionFlags;
          if (local_58.Class != pUVar7) {
            iVar10 = (int)(local_58.Class)->_padding_;
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar10) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
                &(local_58.Class)->_padding_)) goto LAB_1422656a0;
          }
          iVar10 = *(int *)(lVar9 + 0xc);
          if ((iVar10 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
            pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
          }
          else {
            pFVar8 = (FUObjectItem *)0x0;
          }
        } while ((EVar4 & (EInternalObjectFlags)
                          ((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) != Borrowed);
        goto joined_r0x00014226555d;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_58._padding_ + 0x30));
      if (4 < (byte)LogUObjectArray._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
      }
      if ((0 < GUObjectArray.MaxObjectsNotConsideredByGC) && (4 < (byte)LogUObjectArray._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
      }
    }
  }
  iVar10 = this->ObjLastNonGCIndex + 1;
  if (iVar10 < this->ObjFirstGCIndex) {
    iVar10 = this->ObjFirstGCIndex;
  }
  this->ObjFirstGCIndex = iVar10;
  if (4 < (byte)LogUObjectArray._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  }
  this->OpenForDisregardForGC = false;
  GIsInitialLoad = false;
  if ((this->MaxObjectsNotConsideredByGC < 1) &&
     (((this->ObjFirstGCIndex != 0 || (this->ObjLastNonGCIndex != -1)) &&
      (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("DisregardForGCEnabled() || (ObjFirstGCIndex == 0 && ObjLastNonGCIndex == -1)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                          ,0xcb,
                          L"Disregard for GC Set is not properly disabled (FirstGCIndex = %d, LastNonGCIndex = %d"
                         ), bVar5)))) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// DisableDisregardForGC @ 142269710

void __thiscall FUObjectArray::DisableDisregardForGC(FUObjectArray *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = this->ObjLastNonGCIndex + 1;
  this->MaxObjectsNotConsideredByGC = 0;
  GPersistentAllocatorIsDisabled = true;
  this->ObjFirstGCIndex = 0;
  this->ObjLastNonGCIndex = -1;
  if (this->OpenForDisregardForGC != false) {
    CloseDisregardForGC(this);
  }
  if ((GExitPurge == false) && (0 < iVar3)) {
    bVar2 = (*IsAsyncLoading)();
    if (bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsAsyncLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                         ,0xdf,
                         L"Disregard for GC Set can\'t be safely disabled while async loading. Consider calling FlushAsyncLoading() first or using gc.MaxObjectsNotConsideredByGC=0 ini setting instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    OnDisregardForGCSetDisabled(iVar3);
    return;
  }
  return;
}

// DumpUObjectCountsToLog @ 14226a660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUObjectArray::DumpUObjectCountsToLog(FUObjectArray *this)

{
  int iVar1;
  UObjectBase *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FUObjectItem *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  longlong lVar20;
  FClassEntry *pFVar21;
  double dVar22;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  uint local_370;
  FIdentityFunctor local_368;
  undefined1 local_367 [3];
  int local_364;
  uint local_360;
  TArray<_public:_void___cdecl_FUObjectArray::DumpUObjectCountsToLog(void)const_::_2_::FClassEntry,TSizedDefaultAllocator<32>_>
  local_358;
  int local_348 [2];
  FString local_340;
  uint local_330;
  uint uStack_32c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_328;
  undefined4 local_320;
  undefined8 uStack_31c;
  undefined4 uStack_314;
  TObjectPtr<UClass>_u_0 local_310;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_300;
  undefined4 local_2e0;
  int local_2dc;
  TObjectPtr<UClass>_u_0 *local_2d8 [2];
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_2c8;
  FScriptContainerElement local_290 [8];
  ForAnyElementType local_288;
  uint local_280;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [6];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_398;
  if (3 < (byte)LogUObjectArray._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  }
  uVar15 = 0;
  local_360 = 0;
  local_364 = 0;
  uVar13 = uVar15;
  uVar18 = uVar15;
  uVar17 = local_360;
  if (0 < (this->ObjObjects).NumElements) {
    do {
      iVar7 = (int)uVar13;
      if (((this->ObjObjects).NumElements <= iVar7) || (iVar7 < 0)) {
        local_378 = CONCAT44(local_378._4_4_,iVar7);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x357,L"IsValidIndex(%d)");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar17 = (this->ObjObjects).NumChunks;
      uVar14 = (uint)(uVar13 >> 0x10);
      if (uVar17 <= uVar14) {
        local_378 = CONCAT44(local_378._4_4_,uVar14);
        local_370 = uVar17;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChunkIndex < (uint32)NumChunks",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x358,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar17 = (this->ObjObjects).MaxElements;
      if ((int)uVar17 <= iVar7) {
        local_378 = CONCAT44(local_378._4_4_,iVar7);
        local_370 = uVar17;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < MaxElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x359,L"Index (%d) < MaxElements (%d)");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar16 = (this->ObjObjects).Objects[uVar13 >> 0x10];
      if ((pFVar16 == (FUObjectItem *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chunk",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x35b,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = pFVar16 + (uVar13 & 0xffff);
      if ((pFVar16 == (FUObjectItem *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x37b,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar2 = (pFVar16->field1_0x8).Object;
      if (pUVar2 != (UObjectBase *)0x0) {
        pUVar8 = Z_Construct_UClass_UClass_NoRegister();
        pUVar3 = (pUVar2->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar1 = (int)pUVar8->_padding_;
        if ((iVar1 <= (int)pUVar3->_padding_) &&
           ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) ==
            &pUVar8->_padding_)) {
          uVar18 = (ulonglong)((int)uVar18 + 1);
        }
      }
      uVar13 = (ulonglong)(iVar7 + 1U);
      uVar17 = (uint)uVar18;
    } while ((int)(iVar7 + 1U) < (this->ObjObjects).NumElements);
  }
  local_360 = uVar17;
  uVar17 = local_360;
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  local_2c8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_2c8.AllocationFlags.NumBits = 0;
  local_2c8.AllocationFlags.MaxBits = 0x80;
  local_2c8.FirstFreeIndex = -1;
  local_2c8.NumFreeIndices = 0;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  if (local_360 != 0) {
    if ((int)local_360 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)local_360);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve(&local_2c8,local_360);
    uVar14 = 1;
    if (3 < uVar17) {
      uVar13 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_2e0 = (undefined4)lVar20;
      uVar14 = 1 << ((byte)lVar20 & 0x1f);
    }
    if ((local_280 == 0) || ((int)local_280 < (int)uVar14)) {
      local_280 = uVar14;
      if (local_288.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_288,0,0,4);
      }
      if (uVar14 != 0) {
        uVar17 = uVar14;
        if (uVar14 < 2) {
          if (local_288.Data != (FScriptContainerElement *)0x0) {
            uVar17 = 0;
            goto LAB_14226a8d6;
          }
        }
        else {
LAB_14226a8d6:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_288,0,uVar17,4);
        }
        if (0 < (int)uVar14) {
          uVar18 = (ulonglong)uVar14;
          uVar13 = uVar15;
          do {
            FVar11.Data = local_290;
            if (local_288.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_288.Data;
            }
            uVar9 = uVar13 & (longlong)(int)uVar14 - 1U;
            uVar13 = uVar13 + 1;
            *(undefined4 *)(FVar11.Data + uVar9 * 4) = 0xffffffff;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      if (local_280 != 0) {
        pTStack_328 = &local_2c8.AllocationFlags;
        uVar17 = 0;
        local_330 = 0;
        uStack_32c = 1;
        uStack_31c = 0;
        if (local_2c8.AllocationFlags.NumBits != 0) {
          FVar19 = (ForElementType<unsigned_int>)&local_2c8.AllocationFlags;
          if (local_2c8.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_2c8.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar14 = *(uint *)FVar19;
          uVar13 = uVar15;
          uVar18 = uVar15;
          while (uVar14 == 0) {
            uVar17 = (int)uVar18 + 0x20;
            uVar18 = (ulonglong)uVar17;
            iVar7 = (int)uVar13;
            local_330 = iVar7 + 1;
            uVar13 = (ulonglong)local_330;
            uStack_31c = (ulonglong)uVar17 << 0x20;
            if ((int)(local_2c8.AllocationFlags.NumBits + -1 +
                     (local_2c8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_330
               ) {
              uStack_31c = CONCAT44(uVar17,local_2c8.AllocationFlags.NumBits);
              goto LAB_14226a9d7;
            }
            uVar14 = *(uint *)((uchar *)((longlong)FVar19 + 4) + (longlong)iVar7 * 4);
          }
          uStack_32c = -uVar14 & uVar14;
          uVar13 = (ulonglong)uStack_32c * 2 + 1;
          lVar20 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_2dc = (int)lVar20;
          iVar7 = local_2dc + -1 + uVar17;
          if (local_2c8.AllocationFlags.NumBits < iVar7) {
            iVar7 = local_2c8.AllocationFlags.NumBits;
          }
          uStack_31c._4_4_ = (int)((ulonglong)uStack_31c >> 0x20);
          uStack_31c = CONCAT44(uStack_31c._4_4_,iVar7);
        }
LAB_14226a9d7:
        local_320 = 0xffffffff;
        local_308 = &local_2c8;
        local_300._padding_ = CONCAT44(uStack_32c,local_330);
        local_300.UnvisitedBitMask = 0xffffffff;
        local_300.CurrentBitIndex = (int)uStack_31c;
        local_300.BaseBitIndex = uStack_31c._4_4_;
        local_300._28_4_ = uStack_314;
        local_300.Array = pTStack_328;
        if ((int)uStack_31c < local_2c8.AllocationFlags.NumBits) {
          do {
            pFVar10 = (local_308->Data).AllocatorInstance.Data;
            lVar20 = (longlong)local_300.CurrentBitIndex * 0x20;
            uVar17 = ((uint)(*(ulonglong *)(pFVar10 + lVar20) >> 0x14) & 0xffff ^
                     (uint)(*(ulonglong *)(pFVar10 + lVar20) >> 4)) * -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            uVar17 = (uVar17 >> 0x10 ^ uVar17) & local_280 - 1;
            *(uint *)(pFVar10 + lVar20 + 0x1c) = uVar17;
            FVar11.Data = local_290;
            if (local_288.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_288.Data;
            }
            lVar12 = (longlong)(int)(local_280 - 1 & uVar17);
            *(undefined4 *)(pFVar10 + lVar20 + 0x18) = *(undefined4 *)(FVar11.Data + lVar12 * 4);
            *(int *)(FVar11.Data + lVar12 * 4) = local_300.CurrentBitIndex;
            local_300.UnvisitedBitMask = local_300.UnvisitedBitMask & ~local_300._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_300);
          } while (local_300.CurrentBitIndex < (local_300.Array)->NumBits);
        }
      }
    }
  }
  uVar13 = uVar15;
  uVar18 = uVar15;
  if (0 < (this->ObjObjects).NumElements) {
    do {
      iVar7 = (int)uVar13;
      if (((this->ObjObjects).NumElements <= iVar7) || (iVar7 < 0)) {
        local_378 = CONCAT44(local_378._4_4_,iVar7);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x357,L"IsValidIndex(%d)");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar17 = (this->ObjObjects).NumChunks;
      uVar14 = (uint)(uVar13 >> 0x10);
      if (uVar17 <= uVar14) {
        local_378 = CONCAT44(local_378._4_4_,uVar14);
        local_370 = uVar17;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChunkIndex < (uint32)NumChunks",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x358,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar17 = (this->ObjObjects).MaxElements;
      if ((int)uVar17 <= iVar7) {
        local_378 = CONCAT44(local_378._4_4_,iVar7);
        local_370 = uVar17;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < MaxElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x359,L"Index (%d) < MaxElements (%d)");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar16 = (this->ObjObjects).Objects[uVar13 >> 0x10];
      if ((pFVar16 == (FUObjectItem *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chunk",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x35b,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = pFVar16 + (uVar13 & 0xffff);
      if ((pFVar16 == (FUObjectItem *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x37b,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar2 = (pFVar16->field1_0x8).Object;
      if (pUVar2 != (UObjectBase *)0x0) {
        local_310 = (TObjectPtr<UClass>_u_0)(pUVar2->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        uVar17 = ((uint)((ulonglong)local_310.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_310.DebugPtr >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        uVar17 = uVar17 >> 0x10 ^ uVar17;
        if (local_2c8.Data.ArrayNum != local_2c8.NumFreeIndices) {
          FVar11.Data = local_290;
          if (local_288.Data != (FScriptContainerElement *)0x0) {
            FVar11.Data = local_288.Data;
          }
          for (iVar1 = *(int *)(FVar11.Data + (ulonglong)(local_280 - 1 & uVar17) * 4); iVar1 != -1;
              iVar1 = *(int *)(local_2c8.Data.AllocatorInstance.Data + (longlong)iVar1 * 0x20 + 0x18
                              )) {
            if (*(UClass **)(local_2c8.Data.AllocatorInstance.Data + (longlong)iVar1 * 0x20) ==
                local_310.DebugPtr) {
              if ((iVar1 != -1) &&
                 (pFVar10 = local_2c8.Data.AllocatorInstance.Data + (longlong)iVar1 * 0x20,
                 pFVar10 != (FScriptContainerElement *)0x0)) goto LAB_14226acb4;
              break;
            }
          }
        }
        local_2d8[0] = &local_310;
        local_378 = 0;
        TSet<TTuple<UClass_*,`FUObjectArray::DumpUObjectCountsToLog'::__l2::FClassEntry>,TDefaultMapHashableKeyFuncs<UClass_*,`FUObjectArray::DumpUObjectCountsToLog'::__l2::FClassEntry,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
                  (&local_2c8,(uint)local_348,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar17
                   ,(bool *)local_2d8);
        pFVar10 = local_2c8.Data.AllocatorInstance.Data + (longlong)local_348[0] * 0x20;
LAB_14226acb4:
        *(int *)(pFVar10 + 0x10) = *(int *)(pFVar10 + 0x10) + 1;
        uVar18 = (ulonglong)((int)uVar18 + 1);
        ((TObjectPtr<UClass>_u_0 *)(pFVar10 + 8))->DebugPtr = (UClass *)local_310;
      }
      uVar13 = (ulonglong)(iVar7 + 1U);
    } while ((int)(iVar7 + 1U) < (this->ObjObjects).NumElements);
    local_364 = (int)uVar18;
  }
  local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_358.ArrayNum = 0;
  local_358.ArrayMax = 0;
  TMapBase<UClass_*,`FUObjectArray::DumpUObjectCountsToLog'::__l2::FClassEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,`FUObjectArray::DumpUObjectCountsToLog'::__l2::FClassEntry,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>(&local_2c8,&local_358);
  AlgoImpl::
  IntroSortInternal<_FUObjectArray::DumpUObjectCountsToLog_::__l2::FClassEntry,int,FIdentityFunctor,TDereferenceWrapper<_FUObjectArray::DumpUObjectCountsToLog_::__l2::FClassEntry,_FUObjectArray::DumpUObjectCountsToLog_::__l2::<lambda_1>_>_>
            ((FClassEntry *)local_358.AllocatorInstance.Data,local_358.ArrayNum,local_368,
             (<lambda_1> *)&local_368);
  iVar7 = local_364;
  dVar5 = __real_3fee666666666666;
  iVar1 = local_358.ArrayNum;
  dVar22 = 0.0;
  pFVar10 = local_358.AllocatorInstance.Data + 8;
  pFVar21 = (FClassEntry *)(local_358.AllocatorInstance.Data + (longlong)local_358.ArrayNum * 0x10);
  uVar13 = uVar15;
  uVar18 = uVar15;
  while( true ) {
    if (local_358.ArrayNum != iVar1) {
      `TCheckedPointerIterator<`FUObjectArray::DumpUObjectCountsToLog'::__l2::FClassEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_367);
    }
    if ((FClassEntry *)(pFVar10 + -8) == pFVar21) break;
    if ((*(int *)pFVar10 < 0xb) || (dVar5 < dVar22)) {
      uVar18 = (ulonglong)((int)uVar18 + 1);
      uVar15 = (ulonglong)(uint)((int)uVar15 + *(int *)pFVar10);
      pFVar10 = pFVar10 + 0x10;
    }
    else {
      if (3 < (byte)LogUObjectArray._0_1_) {
        local_278.bIsDynamic = false;
        local_278.bIsExternal = false;
        local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_340.Data.ArrayNum = 0;
        local_340.Data.ArrayMax = 0;
        local_278.Base = local_258;
        local_278.CurPos = local_258;
        local_278.End = (wchar_t *)local_58;
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)((FClassEntry *)(pFVar10 + -8))->Class,(UObject *)0x0,
                   &local_278);
        ::FString::AppendChars
                  (&local_340,local_278.Base,
                   (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1));
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
      }
      uVar17 = (int)uVar13 + *(int *)pFVar10;
      uVar13 = (ulonglong)uVar17;
      pFVar10 = pFVar10 + 0x10;
      dVar22 = (double)(int)uVar17 / (double)iVar7;
    }
  }
  if (0 < (int)uVar15) {
    if (dVar22 <= dVar5) {
      if ((byte)LogUObjectArray._0_1_ < 4) goto LAB_14226aed1;
      local_378 = CONCAT44(local_378._4_4_,10);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
    }
    else {
      if ((byte)LogUObjectArray._0_1_ < 4) goto LAB_14226aed1;
      local_378 = CONCAT44(local_378._4_4_,(int)uVar18);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
    }
  }
  if (3 < (byte)LogUObjectArray._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  }
LAB_14226aed1:
  if ((FClassEntry *)local_358.AllocatorInstance.Data != (FClassEntry *)0x0) {
    FMemory::Free(local_358.AllocatorInstance.Data);
  }
  local_280 = 0;
  if (local_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,`FUObjectArray::DumpUObjectCountsToLog'::__l2::FClassEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,_FUObjectArray::DumpUObjectCountsToLog_::__l2::FClassEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2c8);
  return;
}

// FreeUObjectIndex @ 14226d560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FUObjectArray::FreeUObjectIndex(FUObjectArray *this,UObjectBase *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUObjectItem *this_00;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  int local_38 [2];
  FMemScope local_30 [2];
  
  FLLMScope::FLLMScope(local_res10,UObject,false,None,Default,true);
  FMemScope::FMemScope(local_30,UObject,true);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_UObject_UObjectArray.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UObject_UObjectArray.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                         ,0x180,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = param_1->InternalIndex;
  local_38[0] = iVar5;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FUObjectItem *)0x0;
  if (iVar5 < (this->ObjObjects).NumElements) {
    this_00 = FChunkedFixedUObjectArray::operator[](&this->ObjObjects,iVar5);
  }
  if ((this_00->field1_0x8).Object != param_1) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  }
  if (((*(int *)&this_00->field0_0x0 != 0) && (GExitPurge == false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectItem->GetRefCount() == 0 || GExitPurge",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                         ,0x18e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this_00->field0_0x0).FlagsAndRefCount >> 0x20 & 0x4e500000U) != 0) {
    FUObjectItem::ClearRootFlags
              (this_00,RootSet|AsyncLoadingPhase2|Async|Native|AsyncLoadingPhase1|LoaderImport);
  }
  (this_00->field0_0x0).FlagsAndRefCount = 0;
  (this_00->field1_0x8).Object = (UObjectBase *)0x0;
  this_00->SerialNumber = 0;
  this_00->ClusterRootIndex = 0;
  param_1->InternalIndex = -1;
  if (((this->ObjLastNonGCIndex < local_38[0]) && (GExitPurge == false)) &&
     (this->bShouldRecycleObjectIndices != false)) {
    pFVar2 = (this->ObjAvailableList).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar2 + (longlong)(this->ObjAvailableList).ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->ObjAvailableList).ArrayNum;
    piVar1 = &(this->ObjAvailableList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->ObjAvailableList).AllocatorInstance,piVar1);
    }
    (this->ObjAvailableList).ArrayNum = iVar5 + 1;
    *(int *)((this->ObjAvailableList).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_38[0];
    this->ObjAvailableListEstimateCount = (this->ObjAvailableList).ArrayNum;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  FMemScope::~FMemScope(local_30);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// IsValid @ 142275440

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FUObjectArray::IsValid(FUObjectArray *this,UObjectBase *param_1)

{
  int iVar1;
  FUObjectItem *pFVar2;
  
  iVar1 = param_1->InternalIndex;
  if (iVar1 == -1) {
    if (2 < (byte)LogUObjectArray._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
      return false;
    }
  }
  else if ((iVar1 < (this->ObjObjects).NumElements) && (-1 < iVar1)) {
    pFVar2 = FChunkedFixedUObjectArray::operator[](&this->ObjObjects,iVar1);
    if ((pFVar2->field1_0x8).Object == (UObjectBase *)0x0) {
      if (2 < (byte)LogUObjectArray._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
        return false;
      }
    }
    else {
      if ((pFVar2->field1_0x8).Object == param_1) {
        return true;
      }
      if (2 < (byte)LogUObjectArray._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
        return false;
      }
    }
  }
  else if (2 < (byte)LogUObjectArray._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  }
  return false;
}

// ObjectToObjectItem @ 142279920

FUObjectItem * __thiscall
FUObjectArray::ObjectToObjectItem(FUObjectArray *this,UObjectBase *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  
  iVar1 = param_1->InternalIndex;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUObjectItem *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (iVar1 < (this->ObjObjects).NumElements) {
    pFVar4 = FChunkedFixedUObjectArray::operator[](&this->ObjObjects,iVar1);
    return pFVar4;
  }
  return (FUObjectItem *)0x0;
}

// OpenDisregardForGC @ 1422799c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUObjectArray::OpenDisregardForGC(FUObjectArray *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->OpenForDisregardForGC != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OpenForDisregardForGC",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                       ,0x8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->OpenForDisregardForGC = true;
  if (4 < (byte)LogUObjectArray._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
    return;
  }
  return;
}

// RemoveObjectFromDeleteListeners @ 142282bb0

void __thiscall
FUObjectArray::RemoveObjectFromDeleteListeners(FUObjectArray *this,UObjectBase *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lpCriticalSection = &this->UObjectDeleteListenersCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = param_1->InternalIndex;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                         ,0x16d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (this->UObjectDeleteListeners).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 8;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->UObjectDeleteListeners).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
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
      plVar2 = *(longlong **)((this->UObjectDeleteListeners).AllocatorInstance.Data + lVar7);
      (**(code **)(*plVar2 + 8))(plVar2,param_1,iVar1);
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142282cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveUObjectCreateListener @ 142283100

void __thiscall
FUObjectArray::RemoveUObjectCreateListener(FUObjectArray *this,FUObjectCreateListener *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  iVar6 = (this->UObjectCreateListeners).ArrayNum;
  pFVar3 = (this->UObjectCreateListeners).AllocatorInstance.Data;
  pFVar9 = pFVar3;
  do {
    if (pFVar9 == pFVar3 + (longlong)iVar6 * 8) {
LAB_142283130:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRemoved==1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                         ,0x1c2,L"");
      if (!bVar5) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(FUObjectCreateListener **)pFVar9 == param_1) {
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
      if (uVar8 != 0xffffffff) {
        uVar7 = 0;
        if ((int)(uVar8 + 1) <= iVar6) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->UObjectCreateListeners).ArrayNum;
        pFVar3 = (this->UObjectCreateListeners).AllocatorInstance.Data;
        iVar6 = iVar2 + ~uVar8;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                  (longlong)iVar6 << 3);
        }
        piVar1 = &(this->UObjectCreateListeners).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->UObjectCreateListeners).AllocatorInstance,
                   (this->UObjectCreateListeners).ArrayNum,&(this->UObjectCreateListeners).ArrayMax)
        ;
        return;
      }
      goto LAB_142283130;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// RemoveUObjectDeleteListener @ 142283240

void __thiscall
FUObjectArray::RemoveUObjectDeleteListener(FUObjectArray *this,FUObjectDeleteListener *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<FUObjectArray::FUObjectDeleteListener_*,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  lpCriticalSection = &this->UObjectDeleteListenersCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar8 = &this->UObjectDeleteListeners;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  iVar6 = (this->UObjectDeleteListeners).ArrayNum;
  pFVar10 = pFVar3;
  do {
    if (pFVar10 == pFVar3 + (longlong)iVar6 * 8) {
LAB_142283383:
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014228339f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
      return;
    }
    if (*(FUObjectDeleteListener **)pFVar10 == param_1) {
      uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar3 >> 3);
      if (uVar9 != 0xffffffff) {
        uVar7 = 0;
        if ((int)(uVar9 + 1) <= iVar6) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->UObjectDeleteListeners).ArrayNum;
        pFVar3 = (pTVar8->AllocatorInstance).Data;
        iVar6 = iVar2 + ~uVar9;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar9 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                  (longlong)iVar6 << 3);
        }
        piVar1 = &(this->UObjectDeleteListeners).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar8->AllocatorInstance,(this->UObjectDeleteListeners).ArrayNum,
                   &(this->UObjectDeleteListeners).ArrayMax);
      }
      goto LAB_142283383;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// ResetSerialNumber @ 1422833c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUObjectArray::ResetSerialNumber(FUObjectArray *this,UObjectBase *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  
  iVar1 = param_1->InternalIndex;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iVar1 < (this->ObjObjects).NumElements) {
    pFVar4 = FChunkedFixedUObjectArray::operator[](&this->ObjObjects,iVar1);
    pFVar4->SerialNumber = 0;
    return;
  }
  _DAT_00000010 = 0;
  return;
}

// ShutdownUObjectArray @ 142285770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUObjectArray::ShutdownUObjectArray(FUObjectArray *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  lpCriticalSection = &this->UObjectDeleteListenersCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = (this->UObjectDeleteListeners).ArrayNum - 1;
  if (-1 < (int)uVar4) {
    lVar5 = (longlong)(int)uVar4 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->UObjectDeleteListeners).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)((this->UObjectDeleteListeners).AllocatorInstance.Data + lVar5) +
                  0x10))();
      lVar5 = lVar5 + -8;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  if ((this->UObjectDeleteListeners).ArrayNum != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  uVar4 = (this->UObjectCreateListeners).ArrayNum - 1;
  if (-1 < (int)uVar4) {
    lVar5 = (longlong)(int)uVar4 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->UObjectCreateListeners).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)((this->UObjectCreateListeners).AllocatorInstance.Data + lVar5) +
                  0x10))();
      lVar5 = lVar5 + -8;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  if ((this->UObjectCreateListeners).ArrayNum == 0) {
    return;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  return;
}

