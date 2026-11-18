// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// TD3D12DualLinkedObjectIterator<FD3D12Texture,FD3D12Texture> @ 145a43710

/* WARNING: Removing unreachable block (ram,0x000145a43729) */
/* WARNING: Removing unreachable block (ram,0x000145a43739) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

TD3D12DualLinkedObjectIterator<FD3D12Texture,FD3D12Texture> * __thiscall
TD3D12DualLinkedObjectIterator<FD3D12Texture,FD3D12Texture>::
TD3D12DualLinkedObjectIterator<FD3D12Texture,FD3D12Texture>
          (TD3D12DualLinkedObjectIterator<FD3D12Texture,FD3D12Texture> *this,
          FD3D12LinkedAdapterObject<FD3D12Texture> *param_1,
          FD3D12LinkedAdapterObject<FD3D12Texture> *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  FIterator FVar4;
  bool bVar5;
  TD3D12DualLinkedObjectIterator<FD3D12Texture,FD3D12Texture> *pTVar6;
  uint uVar7;
  
  (this->GPUIterator).GPUMask = 0;
  (this->GPUIterator).FirstGPUIndexInMask = 0x20;
  uVar1 = (param_1->LinkedObjects).GPUMask.GPUMask;
  if ((uVar1 != (param_2->LinkedObjects).GPUMask.GPUMask) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPUMask == InObject1->GetLinkedObjectsGPUMask()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x150,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TD3D12DualLinkedObjectIterator<FD3D12Texture,FD3D12Texture> *)(*pcVar3)();
    return pTVar6;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  uVar7 = 0x20;
  if (uVar1 != 0) {
    uVar7 = uVar2;
  }
  FVar4.FirstGPUIndexInMask = uVar7;
  FVar4.GPUMask = uVar1;
  this->GPUIterator = FVar4;
  this->Object0 = (param_1->LinkedObjects).Objects.Elements[uVar7];
  this->Object1 = (param_2->LinkedObjects).Objects.Elements[uVar7];
  return this;
}

