// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// GetRegistry @ 14e5fdc30

IAssetRegistry * __cdecl FAssetRegistryModule::GetRegistry(void)

{
  code *pcVar1;
  bool bVar2;
  IAssetRegistry *pIVar3;
  
  pIVar3 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                       ,0x111,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IAssetRegistry *)(*pcVar1)();
      return pIVar3;
    }
  }
  return pIVar3;
}

