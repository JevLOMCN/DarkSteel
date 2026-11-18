// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// SetZero @ 14c9177e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TVector3Arrays<double>::SetZero(TVector3Arrays<double> *this,int param_1)

{
  (this->XVector).ArrayNum = 0;
  if ((this->XVector).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->XVector).ArrayMax);
  }
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->XVector,param_1,No);
  (this->YVector).ArrayNum = 0;
  if ((this->YVector).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->YVector).AllocatorInstance,0,&(this->YVector).ArrayMax);
  }
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->YVector,param_1,No);
  (this->ZVector).ArrayNum = 0;
  if ((this->ZVector).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ZVector).AllocatorInstance,0,&(this->ZVector).ArrayMax);
  }
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->ZVector,param_1,No);
  return;
}

