// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// operator= @ 14ccc5040

TOptional<UE::Geometry::FGeometrySelection> * __thiscall
TOptional<UE::Geometry::FGeometrySelection>::operator=
          (TOptional<UE::Geometry::FGeometrySelection> *this,FGeometrySelection *param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  if ((TOptional<UE::Geometry::FGeometrySelection> *)param_1 != this) {
    if (this->bIsSet != false) {
      (this->TypedValue).Selection.HashSize = 0;
      FVar1 = (this->TypedValue).Selection.Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(this->TypedValue).Selection.Elements);
    }
    (this->TypedValue).ElementType = param_1->ElementType;
    (this->TypedValue).TopologyType = param_1->TopologyType;
    *(undefined8 *)&(this->TypedValue).Selection.Elements = 0;
    *(undefined8 *)&(this->TypedValue).Selection.Elements.field_0x8 = 0;
    *(undefined8 *)&(this->TypedValue).Selection.Elements.field_0x20 = 0;
    *(undefined4 *)&(this->TypedValue).Selection.Elements.field_0x28 = 0;
    *(undefined4 *)&(this->TypedValue).Selection.Elements.field_0x2c = 0x80;
    *(undefined4 *)&(this->TypedValue).Selection.Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->TypedValue).Selection.Elements.field_0x34 = 0;
    (this->TypedValue).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->TypedValue).Selection.HashSize = 0;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
              (&(this->TypedValue).Selection,&param_1->Selection);
    this->bIsSet = true;
  }
  return this;
}

