// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetRayTracingMeshCommand @ 144c46870

FRayTracingMeshCommand * __thiscall
FRayTracingShaderBindingData::GetRayTracingMeshCommand
          (FRayTracingShaderBindingData *this,FRayTracingMeshCommandStorage *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRayTracingMeshCommand *pFVar5;
  
  pFVar5 = this->RayTracingMeshCommand;
  if (pFVar5 == (FRayTracingMeshCommand *)0x0) {
    uVar1 = this->RayTracingMeshCommandIndex;
    uVar4 = 0;
    if ((int)uVar1 < (param_1->Array).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRayTracingMeshCommand *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FRayTracingMeshCommand *)
             ((param_1->Array).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x98);
  }
  return pFVar5;
}

