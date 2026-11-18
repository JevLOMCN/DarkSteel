// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// FAsyncGrassTask @ 145f414e0

FAsyncGrassTask * __thiscall
FAsyncGrassTask::FAsyncGrassTask
          (FAsyncGrassTask *this,FAsyncGrassBuilder *param_1,FGrassCompKey *param_2,
          UHierarchicalInstancedStaticMeshComponent *param_3)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UHierarchicalInstancedStaticMeshComponent *local_res8;
  
  this->Builder = param_1;
  FVar1 = (param_2->GrassType).WeakPtr;
  (this->Key).BasedOn.WeakPtr = (param_2->BasedOn).WeakPtr;
  (this->Key).GrassType.WeakPtr = FVar1;
  iVar2 = param_2->CachedMaxInstancesPerComponent;
  iVar3 = param_2->SubsectionX;
  iVar4 = param_2->SubsectionY;
  (this->Key).SqrtSubsections = param_2->SqrtSubsections;
  (this->Key).CachedMaxInstancesPerComponent = iVar2;
  (this->Key).SubsectionX = iVar3;
  (this->Key).SubsectionY = iVar4;
  iVar2 = param_2->VarietyIndex;
  (this->Key).NumVarieties = param_2->NumVarieties;
  (this->Key).VarietyIndex = iVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_3 != (UHierarchicalInstancedStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->Foliage).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_3 != (UHierarchicalInstancedStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&(this->Foliage).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~FAsyncGrassTask @ 145f43280

void __thiscall FAsyncGrassTask::~FAsyncGrassTask(FAsyncGrassTask *this)

{
  FAsyncGrassBuilder *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Builder;
  if (pFVar1 != (FAsyncGrassBuilder *)0x0) {
    pFVar2 = (pFVar1->ClusterTree).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FStaticMeshInstanceData::~FStaticMeshInstanceData(&pFVar1->InstanceBuffer);
    pFVar2 = (pFVar1->ExcludedBoxes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->GrassData).GrassData.SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x360);
    return;
  }
  return;
}

// DoWork @ 145f50170

void __thiscall FAsyncGrassTask::DoWork(FAsyncGrassTask *this)

{
  FAsyncGrassBuilder::Build(this->Builder);
  return;
}

