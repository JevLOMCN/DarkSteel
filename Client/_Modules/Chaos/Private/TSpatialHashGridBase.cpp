// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Reset @ 143e461f0

void __thiscall Chaos::TSpatialHashGridBase<int>::Reset(TSpatialHashGridBase<int> *this)

{
  int iVar1;
  
  iVar1 = (this->HashMap).Hash.ArrayMax;
  (this->HashMap).Hash.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->HashMap).Hash.ArrayMax);
  }
  iVar1 = (this->HashMap).Elements.ArrayMax;
  (this->HashMap).Elements.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->HashMap).Elements.AllocatorInstance,0,
               &(this->HashMap).Elements.ArrayMax);
  }
  return;
}

