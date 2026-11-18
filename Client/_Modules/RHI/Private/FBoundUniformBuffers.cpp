// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Reset @ 145cf07b0

void __thiscall RHIValidation::FBoundUniformBuffers::Reset(FBoundUniformBuffers *this)

{
  FBoundUniformBuffers *pFVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (this != this + 1) {
    piVar4 = &this->StageBindings[0].Buffers.ArrayNum;
    do {
      iVar2 = *piVar4;
      if (iVar2 < 0) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,-iVar2,(ForAnyElementType *)(piVar4 + -2),piVar4,piVar4 + 1);
        memset((((TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->
               AllocatorInstance).Data + (longlong)iVar3 * 8,0,(longlong)-iVar2 << 3);
      }
      else if (0 < iVar2) {
        *piVar4 = *piVar4 - iVar2;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)(piVar4 + -2),*piVar4,piVar4 + 1);
      }
      pFVar1 = (FBoundUniformBuffers *)(piVar4 + 2);
      piVar4 = piVar4 + 4;
    } while (pFVar1 != this + 1);
  }
  return;
}

