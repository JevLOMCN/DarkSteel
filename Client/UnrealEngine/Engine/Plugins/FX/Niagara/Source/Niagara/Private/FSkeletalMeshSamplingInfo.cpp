// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// GetRegion @ 148fb6d70

FSkeletalMeshSamplingRegion * __thiscall
FSkeletalMeshSamplingInfo::GetRegion(FSkeletalMeshSamplingInfo *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletalMeshSamplingRegion *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Regions).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkeletalMeshSamplingRegion *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSkeletalMeshSamplingRegion *)
         ((this->Regions).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetRegionBuiltData @ 148fb6df0

FSkeletalMeshSamplingRegionBuiltData * __thiscall
FSkeletalMeshSamplingInfo::GetRegionBuiltData(FSkeletalMeshSamplingInfo *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletalMeshSamplingRegionBuiltData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->BuiltData).RegionBuiltData.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkeletalMeshSamplingRegionBuiltData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSkeletalMeshSamplingRegionBuiltData *)
         ((this->BuiltData).RegionBuiltData.AllocatorInstance.Data + (longlong)param_1 * 0x78);
}

// GetWholeMeshLODBuiltData @ 148fbed20

FSkeletalMeshSamplingLODBuiltData * __thiscall
FSkeletalMeshSamplingInfo::GetWholeMeshLODBuiltData(FSkeletalMeshSamplingInfo *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletalMeshSamplingLODBuiltData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->BuiltData).WholeMeshBuiltData.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkeletalMeshSamplingLODBuiltData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSkeletalMeshSamplingLODBuiltData *)
         ((this->BuiltData).WholeMeshBuiltData.AllocatorInstance.Data + (longlong)param_1 * 0x48);
}

