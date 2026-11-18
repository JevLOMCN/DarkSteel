// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LensComponent
// Functions: 1

// RemoveBlendable @ 14d753700

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraComponent::RemoveBlendable
          (UCameraComponent *this,TScriptInterface<IBlendableInterface> *param_1)

{
  UObject *local_18 [2];
  
  local_18[0] = *(UObject **)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18[0]);
  }
  local_18[1] = *(UObject **)&param_1->field_0x8;
  FPostProcessSettings::RemoveBlendable
            (&this->PostProcessSettings,(TScriptInterface<IBlendableInterface> *)local_18);
  return;
}

