// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~FSubsequents<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1426663c0

void __thiscall
UE::Tasks::Private::FTaskBase::
FSubsequents<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
~FSubsequents<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FSubsequents<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this)

{
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar1;
  
  FVar1 = (this->Subsequents).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

