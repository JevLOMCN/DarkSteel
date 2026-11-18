// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 2

// GetInProgressString @ 146b18320

FText * __thiscall FSync::GetInProgressString(FSync *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SourceControl",L"SourceControl_Sync",
             L"Syncing file(s) from Revision Control...");
  return __return_storage_ptr__;
}

// GetName @ 146b18a00

FName __thiscall FSync::GetName(FSync *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Sync");
  return in_RDX;
}

