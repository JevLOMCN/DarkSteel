// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 14925e3d0

UScriptStruct * __cdecl FNiagaraEmitterScalabilitySettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings,
                         (UObject *)pUVar1,L"NiagaraEmitterScalabilitySettings");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettings.OuterSingleton;
}

// FNiagaraEmitterScalabilitySettings @ 149276370

FNiagaraEmitterScalabilitySettings * __thiscall
FNiagaraEmitterScalabilitySettings::FNiagaraEmitterScalabilitySettings
          (FNiagaraEmitterScalabilitySettings *this)

{
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  this->bScaleSpawnCount = 0;
  this->SpawnCountScale = 1.0;
  return this;
}

// Clear @ 149289b40

void __thiscall FNiagaraEmitterScalabilitySettings::Clear(FNiagaraEmitterScalabilitySettings *this)

{
  this->bScaleSpawnCount = 0;
  this->SpawnCountScale = 1.0;
  return;
}

