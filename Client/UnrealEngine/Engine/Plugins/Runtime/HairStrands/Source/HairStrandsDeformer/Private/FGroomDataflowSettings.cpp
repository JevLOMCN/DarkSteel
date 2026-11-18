// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 2

// GetMeshLOD @ 14e278400

int __thiscall FGroomDataflowSettings::GetMeshLOD(FGroomDataflowSettings *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->MeshLODs).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->MeshLODs).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->MeshLODs).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return -1;
}

// GetSkeletalMesh @ 14e2859d0

USkeletalMesh * __thiscall
FGroomDataflowSettings::GetSkeletalMesh(FGroomDataflowSettings *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMesh *pUVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->SkeletalMeshes).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->SkeletalMeshes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (USkeletalMesh *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = *(USkeletalMesh **)
              ((this->SkeletalMeshes).AllocatorInstance.Data + (longlong)param_1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (USkeletalMesh *)0x0;
}

