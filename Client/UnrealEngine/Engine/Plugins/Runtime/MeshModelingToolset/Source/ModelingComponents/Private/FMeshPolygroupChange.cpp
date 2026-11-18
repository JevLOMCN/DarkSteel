// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// FMeshPolygroupChange @ 14ca64e00

FMeshPolygroupChange * __thiscall
FMeshPolygroupChange::FMeshPolygroupChange
          (FMeshPolygroupChange *this,
          TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> *param_1)

{
  TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> *pTVar1;
  
  FMeshChange::FMeshChange((FMeshChange *)this);
  pTVar1 = &this->GroupEdit;
  *(undefined ***)this = &___7FMeshPolygroupChange__6B_;
  pTVar1->Ptr = (FDynamicMeshGroupEdit *)0x0;
  if (pTVar1 != param_1) {
    pTVar1->Ptr = param_1->Ptr;
    param_1->Ptr = (FDynamicMeshGroupEdit *)0x0;
  }
  return this;
}

// ApplyChangeToMesh @ 14ca78eb0

void __thiscall
FMeshPolygroupChange::ApplyChangeToMesh
          (FMeshPolygroupChange *this,FDynamicMesh3 *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014ca78eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->GroupEdit).Ptr)->_padding_ + 8))();
  return;
}

