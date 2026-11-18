// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 2

// GetInProgressString @ 146baea60

FText * __thiscall
FUploadLocalizationTargetFile::GetInProgressString
          (FUploadLocalizationTargetFile *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LocalizationService",
             L"LocalizationService_FLocalizationServiceUploadLocalizationTargetFile",
             L"Uploading Localization Target File to localization Service...");
  return __return_storage_ptr__;
}

// GetName @ 146baece0

FName __thiscall FUploadLocalizationTargetFile::GetName(FUploadLocalizationTargetFile *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"UploadLocalizationTargetFile");
  return in_RDX;
}

