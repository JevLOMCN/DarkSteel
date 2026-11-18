// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// operator-> @ 148bc4bc0

TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
* __thiscall
TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
::operator->(TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
             *this)

{
  code *pcVar1;
  bool bVar2;
  TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
  *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

