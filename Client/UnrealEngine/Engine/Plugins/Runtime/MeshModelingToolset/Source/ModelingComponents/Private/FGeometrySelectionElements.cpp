// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// Reset @ 14cbacea0

void __thiscall UE::Geometry::FGeometrySelectionElements::Reset(FGeometrySelectionElements *this)

{
  (this->Triangles).ArrayNum = 0;
  if ((this->Triangles).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this,0,&(this->Triangles).ArrayMax);
  }
  (this->Segments).ArrayNum = 0;
  if ((this->Segments).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->Segments).AllocatorInstance,0,&(this->Segments).ArrayMax);
  }
  (this->Points).ArrayNum = 0;
  if ((this->Points).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Points).AllocatorInstance,0,&(this->Points).ArrayMax);
  }
  return;
}

