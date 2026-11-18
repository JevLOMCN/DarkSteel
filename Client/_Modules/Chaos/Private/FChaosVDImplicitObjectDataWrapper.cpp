// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Serialize @ 1437a7b40

bool __thiscall
FChaosVDImplicitObjectDataWrapper<TRefCountPtr<Chaos::FImplicitObject>,Chaos::FChaosArchive>::
Serialize(FChaosVDImplicitObjectDataWrapper<TRefCountPtr<Chaos::FImplicitObject>,Chaos::FChaosArchive>
          *this,FChaosArchive *param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)param_1->_padding_;
  if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&this->Hash);
    }
  }
  else {
    this->Hash = *puVar1;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  Chaos::FChaosArchive::SerializePtr<Chaos::FImplicitObject>(param_1,&this->ImplicitObject);
  return (bool)((byte)~*(byte *)((longlong)&param_1->_padding_ + 1) >> 1 & 1);
}

