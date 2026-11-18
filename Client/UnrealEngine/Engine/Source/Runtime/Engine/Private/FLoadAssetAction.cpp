// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// OnLoaded @ 147db85b0

void __thiscall `UKismetSystemLibrary::LoadAsset'::__l2::FLoadAssetAction::OnLoaded(void *this)

{
  bool bVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  pUVar2 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)((longlong)this + 8));
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x138));
  if (bVar1) {
    local_res8 = pUVar2;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x138),&local_res8);
  }
  return;
}

