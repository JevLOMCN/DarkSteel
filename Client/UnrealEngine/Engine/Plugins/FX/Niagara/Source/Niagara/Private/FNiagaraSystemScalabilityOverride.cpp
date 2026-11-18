// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 14925e350

UScriptStruct * __cdecl FNiagaraSystemScalabilityOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride,
                         (UObject *)pUVar1,L"NiagaraSystemScalabilityOverride");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverride.OuterSingleton;
}

// FNiagaraSystemScalabilityOverride @ 1492768a0

FNiagaraSystemScalabilityOverride * __thiscall
FNiagaraSystemScalabilityOverride::FNiagaraSystemScalabilityOverride
          (FNiagaraSystemScalabilityOverride *this)

{
  undefined1 *puVar1;
  
  FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings
            ((FNiagaraSystemScalabilitySettings *)this);
  this->bOverrideDistanceSettings = 0;
  this->bOverrideCullProxySettings = 0;
  this->bOverrideGlobalBudgetScalingSettings = 0;
  this->bOverrideVisibilitySettings = 0;
  this->bOverridePerSystemInstanceCountSettings = 0;
  this->bOverrideInstanceCountSettings = 0;
  return this;
}

