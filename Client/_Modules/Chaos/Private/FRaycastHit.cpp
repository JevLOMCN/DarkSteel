// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Serialize @ 143b77700

void __thiscall ChaosInterface::FRaycastHit::Serialize(FRaycastHit *this,FChaosArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  FLocationHit::Serialize((FLocationHit *)this,param_1);
  pfVar1 = &this->U;
  pfVar2 = *(float **)param_1->_padding_;
  if ((float *)((undefined8 *)param_1->_padding_)[1] < pfVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pfVar1 = &this->V;
  pfVar2 = *(float **)param_1->_padding_;
  if (pfVar2 + 1 <= (float *)((undefined8 *)param_1->_padding_)[1]) {
    *pfVar1 = *pfVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    return;
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b777ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x188))(param_1,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pfVar1);
  return;
}

