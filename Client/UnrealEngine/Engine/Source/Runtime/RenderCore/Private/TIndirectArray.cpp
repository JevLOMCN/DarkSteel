// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// ~TIndirectArray<FDynamicAllocReadBuffer,TSizedDefaultAllocator<32>_> @ 145d0ba10

void __thiscall
TIndirectArray<FDynamicAllocReadBuffer,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FDynamicAllocReadBuffer,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FDynamicAllocReadBuffer,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

