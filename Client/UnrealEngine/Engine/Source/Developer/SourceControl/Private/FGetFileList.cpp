// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 2

// GetInProgressString @ 146b18260

FText * __thiscall
FGetFileList::GetInProgressString(FGetFileList *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SourceControl",L"SourceControl_GetFileList",
             L"Getting file list out of Revision Control...");
  return __return_storage_ptr__;
}

// GetName @ 146b18970

FName __thiscall FGetFileList::GetName(FGetFileList *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetFileList");
  return in_RDX;
}

