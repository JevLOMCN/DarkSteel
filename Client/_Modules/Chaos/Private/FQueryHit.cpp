// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Serialize @ 143b77660

void __thiscall ChaosInterface::FQueryHit::Serialize(FQueryHit *this,FChaosArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  TSerializablePtr<Chaos::FPerShapeData> local_res8;
  
  Chaos::FChaosArchive::SerializePtr<Chaos::TGeometryParticle<double,3>_>
            (param_1,(TSerializablePtr<Chaos::TGeometryParticle<double,3>_> *)this);
  local_res8.Ptr = (FPerShapeData *)this->_padding_;
  Chaos::FChaosArchive::SerializePtr<Chaos::FPerShapeData>(param_1,&local_res8);
  piVar1 = &this->FaceIndex;
  this->_padding_ = (longlong)local_res8.Ptr;
  piVar2 = *(int **)param_1->_padding_;
  if (piVar2 + 1 <= (int *)((undefined8 *)param_1->_padding_)[1]) {
    *piVar1 = *piVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    return;
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b776e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
  return;
}

