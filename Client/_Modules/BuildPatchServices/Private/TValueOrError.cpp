// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// GetValue @ 143257790

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<FBuildPatchAppManifest,1> * __thiscall
TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::GetValue
          (TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar3;
  
  if ((this->Variant).TypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FBuildPatchAppManifest,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TSharedPtr<FBuildPatchAppManifest,1> *)this;
}

