// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 14925e0e0

UScriptStruct * __cdecl FNiagaraSystemVisibilityCullingSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemVisibilityCullingSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSystemVisibilityCullingSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings,
                         (UObject *)pUVar1,L"NiagaraSystemVisibilityCullingSettings");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSystemVisibilityCullingSettings.OuterSingleton;
}

// FNiagaraSystemVisibilityCullingSettings @ 149276ac0

FNiagaraSystemVisibilityCullingSettings * __thiscall
FNiagaraSystemVisibilityCullingSettings::FNiagaraSystemVisibilityCullingSettings
          (FNiagaraSystemVisibilityCullingSettings *this)

{
  this->bCullWhenNotRendered = 0;
  this->bAllowPreCullingByViewFrustum = 0;
  this->bCullByViewFrustum = 0;
  this->MaxTimeOutsideViewFrustum = 1.0;
  this->MaxTimeWithoutRender = 1.0;
  return this;
}

