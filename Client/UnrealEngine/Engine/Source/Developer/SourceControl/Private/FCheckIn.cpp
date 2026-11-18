// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 3

// GetInProgressString @ 146b180a0

FText * __thiscall FCheckIn::GetInProgressString(FCheckIn *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SourceControl",L"SourceControl_CheckIn",
             L"Checking file(s) into Revision Control...");
  return __return_storage_ptr__;
}

// GetName @ 146b187a0

FName __thiscall FCheckIn::GetName(FCheckIn *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CheckIn");
  return in_RDX;
}

// SetDescription @ 146b249a0

void __thiscall FCheckIn::SetDescription(FCheckIn *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Description).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Description).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (this->Description).Flags = param_1->Flags;
    return;
  }
  (this->Description).Flags = param_1->Flags;
  return;
}

