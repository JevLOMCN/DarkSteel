// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 2

// GetInProgressString @ 146b182e0

FText * __thiscall FRevert::GetInProgressString(FRevert *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SourceControl",L"SourceControl_Revert",
             L"Reverting file(s) in Revision Control...");
  return __return_storage_ptr__;
}

// GetName @ 146b189d0

FName __thiscall FRevert::GetName(FRevert *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Revert");
  return in_RDX;
}

