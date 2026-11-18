// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 2

// GetInProgressString @ 146b31ba0

FText * __thiscall
FConnectToProvider::GetInProgressString(FConnectToProvider *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LocalizationService",L"LocalizationService_Connecting",
             L"Connecting to localization service...");
  return __return_storage_ptr__;
}

// GetName @ 146b31ce0

FName __thiscall FConnectToProvider::GetName(FConnectToProvider *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Connect");
  return in_RDX;
}

