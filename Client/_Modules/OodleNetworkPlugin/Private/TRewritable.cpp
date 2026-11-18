// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 1

// Set @ 14e29e060

void __thiscall
FOodleNetworkArchiveBase::TRewritable<unsigned_int>::Set
          (TRewritable<unsigned_int> *this,FOodleNetworkArchiveBase *param_1,uint param_2)

{
  longlong *plVar1;
  uint local_res18 [4];
  
  this->Value = param_2;
  if (this->Offset != 0) {
    local_res18[0] = param_2;
    SeekPush(param_1,(ulonglong)this->Offset);
    plVar1 = (longlong *)param_1->_padding_;
    if ((uint *)*plVar1 + 1 <= (uint *)plVar1[1]) {
      local_res18[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
      SeekPop(param_1);
      return;
    }
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,4);
      SeekPop(param_1);
      return;
    }
    FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res18);
    SeekPop(param_1);
  }
  return;
}

