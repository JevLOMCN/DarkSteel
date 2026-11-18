// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FWorkerContext @ 142011ec0

FWorkerContext * __thiscall UE::GC::FWorkerContext::FWorkerContext(FWorkerContext *this)

{
  FWorkBlock *pFVar1;
  
  (this->ObjectsToSerialize).WorkerIndex = -1;
  (this->InitialObjects).DataPtr = (UObject **)0x0;
  (this->InitialObjects).ArrayNum = 0;
  (this->ObjectsToSerialize).field2_0x10.SyncQueue = (FWorkBlock *)0x0;
  (this->InitialNativeReferences).DataPtr = (UObject ***)0x0;
  (this->InitialNativeReferences).ArrayNum = 0;
  (this->WeakReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakReferences).ArrayNum = 0;
  (this->WeakReferences).ArrayMax = 0;
  (this->Stats).NumObjects = 0;
  (this->Stats).NumReferences = 0;
  (this->Stats).NumVerseCells = 0;
  (this->Stats).bFoundGarbageRef = false;
  (this->GarbageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GarbageReferences).ArrayNum = 0;
  (this->GarbageReferences).ArrayMax = 0;
  *(undefined8 *)&this->History = 0;
  *(undefined8 *)&(this->History).field_0x8 = 0;
  *(undefined8 *)&(this->History).field_0x20 = 0;
  this->ReferencingObject = (UObject *)0x0;
  this->Coordinator = (FWorkCoordinator *)0x0;
  *(undefined4 *)&(this->History).field_0x28 = 0;
  *(undefined4 *)&(this->History).field_0x2c = 0x80;
  *(undefined4 *)&(this->History).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->History).field_0x34 = 0;
  *(undefined8 *)&(this->History).field_0x40 = 0;
  *(undefined4 *)&(this->History).field_0x48 = 0;
  (this->IncrementalStructs).Wip = (FStructArrayBlock *)0x0;
  (this->IncrementalStructs).WipIt = (FStructArray *)0x0;
  this->bIsSuspended = false;
  this->bDidWork = false;
  this->SchemaStack = (FDebugSchemaStackNode *)0x0;
  AllocateWorkerIndex(this);
  pFVar1 = FPageAllocator::AllocatePage(&GScratchPages,(this->ObjectsToSerialize).WorkerIndex);
  (this->ObjectsToSerialize).Wip = pFVar1;
  pFVar1->Previous = (FWorkBlock *)0x0;
  (this->ObjectsToSerialize).WipIt = ((this->ObjectsToSerialize).Wip)->Objects;
  return this;
}

// ~FWorkerContext @ 142013b20

void __thiscall UE::GC::FWorkerContext::~FWorkerContext(FWorkerContext *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  FreeWorkerIndex(this);
  *(undefined4 *)&(this->History).field_0x48 = 0;
  pvVar1 = *(void **)&(this->History).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->History);
  pFVar2 = (this->GarbageReferences).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WeakReferences).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FWorkBlockifier::~FWorkBlockifier(&this->ObjectsToSerialize);
  return;
}

// AllocateWorkerIndex @ 1420222f0

void __thiscall UE::GC::FWorkerContext::AllocateWorkerIndex(FWorkerContext *this)

{
  code *pcVar1;
  FWorkerIndexAllocator FVar2;
  bool bVar3;
  ulonglong uVar4;
  FWorkerIndexAllocator FVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (((this->ObjectsToSerialize).WorkerIndex != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetWorkerIndex() == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x876,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  while( true ) {
    uVar4 = ~(ulonglong)GWorkerIndices.Used;
    uVar6 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    uVar7 = 0x40;
    if (uVar4 != 0) {
      uVar7 = uVar6 & 0xffffffff;
    }
    if ((0x10 < uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FreeIndex < FPageAllocator::NumWorkerCaches",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x855,L"Exceeded max active GC worker contexts"), bVar3)) break;
    uVar6 = 1L << ((byte)uVar7 & 0x3f);
    FVar5.Used = GWorkerIndices.Used;
    do {
      LOCK();
      bVar3 = FVar5.Used != GWorkerIndices.Used;
      FVar2.Used = FVar5.Used | uVar6;
      if (bVar3) {
        FVar5.Used = GWorkerIndices.Used;
        FVar2.Used = GWorkerIndices.Used;
      }
      GWorkerIndices.Used = FVar2.Used;
      UNLOCK();
    } while (bVar3);
    if (((ulonglong)FVar5.Used & uVar6) == 0) {
      (this->ObjectsToSerialize).WorkerIndex = (int)uVar7;
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// FreeWorkerIndex @ 1420536e0

void __thiscall UE::GC::FWorkerContext::FreeWorkerIndex(FWorkerContext *this)

{
  uint uVar1;
  code *pcVar2;
  FWorkerIndexAllocator FVar3;
  bool bVar4;
  FWorkerIndexAllocator FVar5;
  ulonglong uVar6;
  
  uVar1 = (this->ObjectsToSerialize).WorkerIndex;
  if (uVar1 != 0xffffffff) {
    if ((0x10 < uVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < FPageAllocator::NumWorkerCaches",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x861,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = 1L << ((byte)uVar1 & 0x3f);
    FVar5.Used = GWorkerIndices.Used;
    do {
      LOCK();
      bVar4 = FVar5.Used != GWorkerIndices.Used;
      FVar3.Used = FVar5.Used & ~uVar6;
      if (bVar4) {
        FVar5.Used = GWorkerIndices.Used;
        FVar3.Used = GWorkerIndices.Used;
      }
      GWorkerIndices.Used = FVar3.Used;
      UNLOCK();
    } while (bVar4);
    if ((((ulonglong)FVar5.Used & uVar6) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Old & Mask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x864,L"Index already freed"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->ObjectsToSerialize).WorkerIndex = -1;
  }
  return;
}

// SetInitialObjectsUnpadded @ 14208ece0

void __thiscall
UE::GC::FWorkerContext::SetInitialObjectsUnpadded
          (FWorkerContext *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UObjectBase *this_00;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined4 uStack_c;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    uVar7 = iVar1 + 0x10;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (param_1->ArrayMax < (int)uVar7) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar7,&param_1->AllocatorInstance,iVar1,&param_1->ArrayMax);
    }
    uVar5 = param_1->ArrayNum - 1;
    pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar1 * 8;
    uVar7 = 0;
    if ((int)uVar5 < param_1->ArrayNum) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = *(UObjectBase **)
               ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
    bVar3 = UObjectBase::IsValidLowLevel(this_00);
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LastObject->IsValidLowLevel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x832,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar4 = 0x10;
    if (pFVar6 <= pFVar6 + 0x80) {
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(UObjectBase **)pFVar6 = this_00;
        pFVar6 = pFVar6 + 8;
      }
    }
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((iVar1 != 0) &&
      (bVar3 = UObjectBase::IsValidLowLevel
                         (*(UObjectBase **)(pFVar6 + (ulonglong)(iVar1 + 0xf) * 8)), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PaddedObjects.IsEmpty() || PaddedObjects.GetData()[PaddedObjects.Num() + ObjectLookahead - 1]->IsValidLowLevel()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                         ,0x181,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->InitialObjects).DataPtr = (UObject **)pFVar6;
  *(ulonglong *)&(this->InitialObjects).ArrayNum = CONCAT44(uStack_c,iVar1);
  return;
}

