// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// Deinitialize @ 14adb5850

void __cdecl Metasound::Frontend::IMetaSoundAssetManager::Deinitialize(void)

{
  TUniquePtr<Metasound::Frontend::IMetaSoundAssetManager,TDefaultDelete<Metasound::Frontend::IMetaSoundAssetManager>_>
  TVar1;
  
  TVar1.Ptr = AssetManagerPrivate::Instance.Ptr;
  if (AssetManagerPrivate::Instance.Ptr != (IMetaSoundAssetManager *)0x0) {
    AssetManagerPrivate::Instance.Ptr = (IMetaSoundAssetManager *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014adb586f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*TVar1.Ptr)(TVar1.Ptr,1);
    return;
  }
  return;
}

// Get @ 14adbbe60

IMetaSoundAssetManager * __cdecl Metasound::Frontend::IMetaSoundAssetManager::Get(void)

{
  return AssetManagerPrivate::Instance.Ptr;
}

// GetChecked @ 14adbd2f0

IMetaSoundAssetManager * __cdecl Metasound::Frontend::IMetaSoundAssetManager::GetChecked(void)

{
  code *pcVar1;
  bool bVar2;
  IMetaSoundAssetManager *pIVar3;
  
  if ((AssetManagerPrivate::Instance.Ptr == (IMetaSoundAssetManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AssetManagerPrivate::Instance.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetManager.cpp"
                         ,0x123,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMetaSoundAssetManager *)(*pcVar1)();
    return pIVar3;
  }
  return AssetManagerPrivate::Instance.Ptr;
}

// Initialize @ 14adc6890

void __cdecl
Metasound::Frontend::IMetaSoundAssetManager::Initialize
          (TUniquePtr<Metasound::Frontend::IMetaSoundAssetManager,TDefaultDelete<Metasound::Frontend::IMetaSoundAssetManager>_>
           *param_1)

{
  code *pcVar1;
  TUniquePtr<Metasound::Frontend::IMetaSoundAssetManager,TDefaultDelete<Metasound::Frontend::IMetaSoundAssetManager>_>
  TVar2;
  bool bVar3;
  
  if (AssetManagerPrivate::Instance.Ptr != (IMetaSoundAssetManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AssetManagerPrivate::Instance.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetManager.cpp"
                       ,0x131,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar2.Ptr = AssetManagerPrivate::Instance.Ptr;
  if (param_1 != &AssetManagerPrivate::Instance) {
    AssetManagerPrivate::Instance =
         (TUniquePtr<Metasound::Frontend::IMetaSoundAssetManager,TDefaultDelete<Metasound::Frontend::IMetaSoundAssetManager>_>
          )param_1->Ptr;
    param_1->Ptr = (IMetaSoundAssetManager *)0x0;
    if (TVar2.Ptr != (IMetaSoundAssetManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014adc68ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*TVar2.Ptr)(TVar2.Ptr,1);
      return;
    }
  }
  return;
}

