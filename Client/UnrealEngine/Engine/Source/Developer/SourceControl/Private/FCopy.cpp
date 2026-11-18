// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 2

// GetInProgressString @ 146b18160

FText * __thiscall FCopy::GetInProgressString(FCopy *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SourceControl",L"SourceControl_Copy",
             L"Copying file(s) in Revision Control...");
  return __return_storage_ptr__;
}

// GetName @ 146b18830

FName __thiscall FCopy::GetName(FCopy *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Copy");
  return in_RDX;
}

