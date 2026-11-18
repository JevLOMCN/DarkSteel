// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// operator*<FAssetBundleData> @ 142ab1b90

FAssetBundleData * __thiscall
TSharedPtr<FAssetBundleData,1>::operator*<FAssetBundleData>(TSharedPtr<FAssetBundleData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FAssetBundleData *pFVar3;
  
  if (this->Object != (FAssetBundleData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAssetBundleData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

