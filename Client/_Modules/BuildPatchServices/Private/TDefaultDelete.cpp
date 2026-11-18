// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// operator() @ 1431c1640

void __thiscall
TDefaultDelete<BuildPatchServices::FScannerDetails>::operator()
          (TDefaultDelete<BuildPatchServices::FScannerDetails> *this,FScannerDetails *param_1)

{
  IDataScanner *pIVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (FScannerDetails *)0x0) {
    pIVar1 = (param_1->Scanner).Ptr;
    if (pIVar1 != (IDataScanner *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    BuildPatchServices::FBlockStructure::~FBlockStructure(&param_1->Structure);
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0x48);
  }
  return;
}

// operator() @ 14322e3f0

void __thiscall
TDefaultDelete<BuildPatchServices::FDeltaScannerEntry>::operator()
          (TDefaultDelete<BuildPatchServices::FDeltaScannerEntry> *this,FDeltaScannerEntry *param_1)

{
  IDataScanner *pIVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (FDeltaScannerEntry *)0x0) {
    pIVar1 = (param_1->Scanner).Ptr;
    if (pIVar1 != (IDataScanner *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
    ::
    ~TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
              (&param_1->FilesList);
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0x48);
  }
  return;
}

// operator() @ 14322e440

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
TDefaultDelete<BuildPatchServices::FChunkMatchStomper>::operator()
          (TDefaultDelete<BuildPatchServices::FChunkMatchStomper> *this,FChunkMatchStomper *param_1)

{
  longlong *plVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  
  if (param_1 != (FChunkMatchStomper *)0x0) {
    LOCK();
    param_1->bExpectsMoreData = (FThreadSafeBool)0x0;
    UNLOCK();
    (**(code **)(param_1->ThreadTrigger->_padding_ + 0x10))();
    if (*(longlong *)&param_1->FileManifestListFuture != 0) {
      do {
        do {
        } while (*(longlong *)&param_1->FileManifestListFuture == 0);
        plVar1 = *(longlong **)(*(longlong *)&param_1->FileManifestListFuture + 0x60);
        cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      } while (cVar4 == '\0');
    }
    FGenericPlatformProcess::ReturnSynchEventToPool(param_1->ThreadTrigger);
    pTVar2 = (param_1->NewMatchQueue).Tail;
    while (pTVar2 != (TNode *)0x0) {
      (param_1->NewMatchQueue).Tail = pTVar2->NextNode;
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure>
                ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure>
                  *)&pTVar2->Item);
      ::operator_delete(pTVar2,0x28);
      pTVar2 = (param_1->NewMatchQueue).Tail;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(param_1->FileManifestListFuture).field_0x8);
    DestructItems<FString,int>
              ((FString *)(param_1->BuildBFiles).AllocatorInstance.Data,
               (param_1->BuildBFiles).ArrayNum);
    pFVar3 = (param_1->BuildBFiles).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<FString,int>
              ((FString *)(param_1->BuildAFiles).AllocatorInstance.Data,
               (param_1->BuildAFiles).ArrayNum);
    pFVar3 = (param_1->BuildAFiles).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(param_1,0x60);
  }
  return;
}

