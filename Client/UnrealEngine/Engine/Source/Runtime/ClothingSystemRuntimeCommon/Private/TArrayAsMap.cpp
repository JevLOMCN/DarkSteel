// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 1

// Reset @ 148c314d0

void __thiscall
Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Reset
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *this)

{
  (this->Entries).ArrayNum = 0;
  if ((this->Entries).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,&(this->Entries).ArrayMax);
  }
  return;
}

