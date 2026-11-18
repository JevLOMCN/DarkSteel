// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 1

// FPerSolverData @ 14dae74e0

FPerSolverData * __thiscall
FPerSolverData::FPerSolverData(FPerSolverData *this,FPerSolverData *param_1)

{
  TArray<FPlaybackTickRecord,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FPlaybackTickRecord *pFVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &this->PlaybackTickRecords;
  (this->PreSolveHandle).ID = (param_1->PreSolveHandle).ID;
  (this->PreBufferHandle).ID = (param_1->PreBufferHandle).ID;
  (this->PostSolveHandle).ID = (param_1->PostSolveHandle).ID;
  (this->TeardownHandle).ID = (param_1->TeardownHandle).ID;
  piVar2 = &(this->PlaybackTickRecords).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->PlaybackTickRecords).ArrayNum;
  pFVar6 = (FPlaybackTickRecord *)(param_1->PlaybackTickRecords).AllocatorInstance.Data;
  (this->PlaybackTickRecords).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FPlaybackTickRecord,FPlaybackTickRecord,int>
              ((pTVar1->AllocatorInstance).Data,pFVar6,iVar5);
  }
  pTVar3 = &this->PlaybackIndices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PlaybackIndices).ArrayMax;
  iVar5 = (param_1->PlaybackIndices).ArrayNum;
  pFVar7 = (param_1->PlaybackIndices).AllocatorInstance.Data;
  (this->PlaybackIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 2);
  }
  pTVar3 = &this->RecordIndices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RecordIndices).ArrayMax;
  iVar5 = (param_1->RecordIndices).ArrayNum;
  pFVar7 = (param_1->RecordIndices).AllocatorInstance.Data;
  (this->RecordIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 2);
  }
  pTVar4 = &this->PendingKinematicUpdates;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PendingKinematicUpdates).ArrayMax;
  iVar5 = (param_1->PendingKinematicUpdates).ArrayNum;
  pFVar7 = (param_1->PendingKinematicUpdates).AllocatorInstance.Data;
  (this->PendingKinematicUpdates).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 3);
  }
  return this;
}

