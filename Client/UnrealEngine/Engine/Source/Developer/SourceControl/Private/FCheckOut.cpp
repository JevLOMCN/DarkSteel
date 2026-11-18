// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 2

// GetInProgressString @ 146b180e0

FText * __thiscall FCheckOut::GetInProgressString(FCheckOut *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SourceControl",L"SourceControl_CheckOut",
             L"Checking file(s) out of Revision Control...");
  return __return_storage_ptr__;
}

// GetName @ 146b187d0

FName __thiscall FCheckOut::GetName(FCheckOut *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CheckOut");
  return in_RDX;
}

