// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ApplyRemoveBranches @ 14da6ddd0

void __cdecl
FPVRemoveBranches::ApplyRemoveBranches
          (ERemoveBranchesBasis param_1,float param_2,FManagedArrayCollection *param_3)

{
  bool bVar1;
  float local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_838;
  TArray<float,TSizedDefaultAllocator<32>_> local_828;
  FBranchFacade local_818;
  FPlantFacade local_528;
  FPointFacade local_438;
  
  local_res10[0] = param_2;
  PV::Facades::FBranchFacade::FBranchFacade(&local_818,param_3);
  PV::Facades::FPointFacade::FPointFacade(&local_438,param_3);
  PV::Facades::FPlantFacade::FPlantFacade(&local_528,param_3);
  bVar1 = PV::Facades::FPointFacade::IsValid(&local_438);
  if ((((((bVar1) &&
         (local_818.Parents.ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        (local_818.Children.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       ((local_818.BranchPoints.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0 &&
        (local_818.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
      ((local_818.BranchSourceBudNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((local_818.BranchHierarchyNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        (local_818.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))))) &&
     (local_818.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    local_828.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_828.ArrayNum = 0;
    local_828.ArrayMax = 0;
    PV::Facades::GatherBranchRemovalData(&local_818,&local_438,&local_528,param_1,&local_828);
    local_838.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_838.ArrayNum = 0;
    local_838.ArrayMax = 0;
    PV::Facades::FindBranchesToRemove(&local_818,&local_828,local_res10,&local_838);
    PV::Facades::FTreeFacade::RemoveBranches(&local_818,&local_838,param_3);
    if (local_838.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.AllocatorInstance.Data);
    }
    if (local_828.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.AllocatorInstance.Data);
    }
  }
  return;
}

