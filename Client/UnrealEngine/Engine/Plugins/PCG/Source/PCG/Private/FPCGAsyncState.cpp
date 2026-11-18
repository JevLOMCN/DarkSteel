// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// operator= @ 14973edf0

FPCGAsyncState * __thiscall FPCGAsyncState::operator=(FPCGAsyncState *this,FPCGAsyncState *param_1)

{
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  undefined1 *puVar3;
  undefined1 *this_01;
  int iVar4;
  FScriptContainerElement *_Src;
  
  this->EndTime = param_1->EndTime;
  this->NumAvailableTasks = param_1->NumAvailableTasks;
  pTVar1 = &this->TasksChunksStartEnd;
  this->AsyncCurrentReadIndex = param_1->AsyncCurrentReadIndex;
  this->AsyncCurrentWriteIndex = param_1->AsyncCurrentWriteIndex;
  if (pTVar1 != &param_1->TasksChunksStartEnd) {
    iVar4 = (param_1->TasksChunksStartEnd).ArrayNum;
    piVar2 = &(this->TasksChunksStartEnd).ArrayMax;
    _Src = (param_1->TasksChunksStartEnd).AllocatorInstance.Data;
    (this->TasksChunksStartEnd).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  this->bStarted = param_1->bStarted;
  this_00 = &this->ChunkToNumElementsWrittenMap;
  this->InitialNumIterations = param_1->InitialNumIterations;
  this->CurrentChunkToCollapse = param_1->CurrentChunkToCollapse;
  if (this_00 != &param_1->ChunkToNumElementsWrittenMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ChunkToNumElementsWrittenMap).field_0x38,
               (int *)&(this->ChunkToNumElementsWrittenMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ChunkToNumElementsWrittenMap).field_0x38,
               *(int *)&(param_1->ChunkToNumElementsWrittenMap).field_0x48);
    iVar4 = *(int *)&(param_1->ChunkToNumElementsWrittenMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar4);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,(ForAnyElementType *)this_00,
               (int *)&(this->ChunkToNumElementsWrittenMap).field_0x8,
               (int *)&(this->ChunkToNumElementsWrittenMap).field_0xc);
    puVar3 = &(param_1->ChunkToNumElementsWrittenMap).field_0x10;
    this_01 = &(this->ChunkToNumElementsWrittenMap).field_0x10;
    *(undefined4 *)&(this->ChunkToNumElementsWrittenMap).field_0x30 =
         *(undefined4 *)&(param_1->ChunkToNumElementsWrittenMap).field_0x30;
    *(undefined4 *)&(this->ChunkToNumElementsWrittenMap).field_0x34 =
         *(undefined4 *)&(param_1->ChunkToNumElementsWrittenMap).field_0x34;
    if (this_01 != puVar3) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar3);
    }
    if (iVar4 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->ChunkToNumElementsWrittenMap,(longlong)iVar4 << 4
            );
    }
  }
  this->bIsRunningOnMainThread = param_1->bIsRunningOnMainThread;
  this->bIsRunningAsyncCall = param_1->bIsRunningAsyncCall;
  this->bIsCallingBlueprint = param_1->bIsCallingBlueprint;
  this->bIsRunningOutOfTick = param_1->bIsRunningOutOfTick;
  this->bIsOutOfTickBudgetSet = param_1->bIsOutOfTickBudgetSet;
  return this;
}

// Reset @ 149d62230

void __thiscall FPCGAsyncState::Reset(FPCGAsyncState *this)

{
  this->AsyncCurrentWriteIndex = 0;
  (this->TasksChunksStartEnd).ArrayNum = 0;
  if ((this->TasksChunksStartEnd).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->TasksChunksStartEnd).AllocatorInstance,0,
               &(this->TasksChunksStartEnd).ArrayMax);
  }
  this->CurrentChunkToCollapse = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->ChunkToNumElementsWrittenMap);
  this->InitialNumIterations = 0;
  this->bStarted = false;
  return;
}

// ShouldStop @ 149d656c0

bool __thiscall FPCGAsyncState::ShouldStop(FPCGAsyncState *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  return this->EndTime <= dVar1 && dVar1 != this->EndTime;
}

