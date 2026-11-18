// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 149263b70

UScriptStruct * __cdecl FNiagaraDetailsLevelScaleOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDetailsLevelScaleOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDetailsLevelScaleOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides,
                         (UObject *)pUVar1,L"NiagaraDetailsLevelScaleOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDetailsLevelScaleOverrides.OuterSingleton;
}

// FNiagaraDetailsLevelScaleOverrides @ 149275c30

FNiagaraDetailsLevelScaleOverrides * __thiscall
FNiagaraDetailsLevelScaleOverrides::FNiagaraDetailsLevelScaleOverrides
          (FNiagaraDetailsLevelScaleOverrides *this)

{
  this->Low = 0.125;
  this->Medium = 0.25;
  this->High = 0.5;
  this->Epic = 1.0;
  this->Cine = 1.0;
  return this;
}

