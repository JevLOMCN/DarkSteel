// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~TIndirectArray<FNiagaraGpuScratchPad::FScratchBuffer::FBuffer,TSizedDefaultAllocator<32>_> @ 149024860

void __thiscall
TIndirectArray<FNiagaraGpuScratchPad::FScratchBuffer::FBuffer,TSizedDefaultAllocator<32>_>::
~TIndirectArray<FNiagaraGpuScratchPad::FScratchBuffer::FBuffer,TSizedDefaultAllocator<32>_>
          (TIndirectArray<FNiagaraGpuScratchPad::FScratchBuffer::FBuffer,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FRWBuffer *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(FRWBuffer **)pFVar2;
    if (this_00 != (FRWBuffer *)0x0) {
      FRWBuffer::~FRWBuffer(this_00);
      ::operator_delete(this_00,0x38);
    }
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

