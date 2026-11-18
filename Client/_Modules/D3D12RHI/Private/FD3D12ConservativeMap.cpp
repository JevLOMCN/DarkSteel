// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// Reset @ 1459d6690

void __thiscall
FD3D12ConservativeMap<FD3D12SamplerArrayDesc,D3D12_GPU_DESCRIPTOR_HANDLE>::Reset
          (FD3D12ConservativeMap<FD3D12SamplerArrayDesc,D3D12_GPU_DESCRIPTOR_HANDLE> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Table).ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      (this->Table).AllocatorInstance.Data[lVar6] = (FScriptContainerElement)0x0;
      lVar6 = lVar6 + 0x50;
      iVar4 = (this->Table).ArrayNum;
    } while ((int)uVar5 < iVar4);
  }
  return;
}

