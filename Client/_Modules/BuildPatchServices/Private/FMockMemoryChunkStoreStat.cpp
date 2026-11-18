// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 5

// OnChunkBooted @ 143324c10

void __thiscall
BuildPatchServices::FMockMemoryChunkStoreStat::OnChunkBooted
          (FMockMemoryChunkStoreStat *this,FGuid *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxChunkBooted).ArrayNum;
  piVar1 = &(this->RxChunkBooted).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxChunkBooted).AllocatorInstance,piVar1);
  }
  (this->RxChunkBooted).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxChunkBooted).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar5 * 0x18) = dVar3;
  uVar4 = *(undefined8 *)&param_1->C;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x18 + 8;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return;
}

// OnChunkReleased @ 143324c80

void __thiscall
BuildPatchServices::FMockMemoryChunkStoreStat::OnChunkReleased
          (FMockMemoryChunkStoreStat *this,FGuid *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxChunkReleased).ArrayNum;
  piVar1 = &(this->RxChunkReleased).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxChunkReleased).AllocatorInstance,piVar1);
  }
  (this->RxChunkReleased).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxChunkReleased).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar5 * 0x18) = dVar3;
  uVar4 = *(undefined8 *)&param_1->C;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x18 + 8;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return;
}

// OnChunkStored @ 143324cf0

void __thiscall
BuildPatchServices::FMockMemoryChunkStoreStat::OnChunkStored
          (FMockMemoryChunkStoreStat *this,FGuid *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  
  dVar3 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxChunkStored).ArrayNum;
  piVar1 = &(this->RxChunkStored).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxChunkStored).AllocatorInstance,piVar1);
  }
  (this->RxChunkStored).ArrayNum = iVar5 + 1;
  pFVar2 = (this->RxChunkStored).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar5 * 0x18) = dVar3;
  uVar4 = *(undefined8 *)&param_1->C;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x18 + 8;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return;
}

// OnStoreSizeUpdated @ 1433256a0

void __thiscall
BuildPatchServices::FMockMemoryChunkStoreStat::OnStoreSizeUpdated
          (FMockMemoryChunkStoreStat *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxStoreSizeUpdated).ArrayNum;
  piVar1 = &(this->RxStoreSizeUpdated).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxStoreSizeUpdated).AllocatorInstance,piVar1);
  }
  (this->RxStoreSizeUpdated).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxStoreSizeUpdated).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(int *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = param_1;
  return;
}

// OnStoreUseUpdated @ 143325710

void __thiscall
BuildPatchServices::FMockMemoryChunkStoreStat::OnStoreUseUpdated
          (FMockMemoryChunkStoreStat *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxStoreUseUpdated).ArrayNum;
  piVar1 = &(this->RxStoreUseUpdated).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxStoreUseUpdated).AllocatorInstance,piVar1);
  }
  (this->RxStoreUseUpdated).ArrayNum = iVar3 + 1;
  pFVar2 = (this->RxStoreUseUpdated).AllocatorInstance.Data;
  *(double *)(pFVar2 + (longlong)iVar3 * 0x10) = dVar4;
  *(int *)(pFVar2 + (longlong)iVar3 * 0x10 + 8) = param_1;
  return;
}

