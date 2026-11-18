// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// GetItemText @ 14d04dd70

FText * __thiscall
FLiveLinkDebugUIEntry::GetItemText(FLiveLinkDebugUIEntry *this,FText *__return_storage_ptr__)

{
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if ((this->SubjectKey).SubjectName.Name == (FName)0x0) {
    local_18 = (this->SubjectKey).Source.A;
    uStack_14 = (this->SubjectKey).Source.B;
    uStack_10 = (this->SubjectKey).Source.C;
    uStack_c = (this->SubjectKey).Source.D;
    (**(code **)(this->Client->_padding_ + 0x50))(this->Client,__return_storage_ptr__,&local_18);
    return __return_storage_ptr__;
  }
  FText::FromName(__return_storage_ptr__,&(this->SubjectKey).SubjectName.Name);
  return __return_storage_ptr__;
}

