// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 14925e860

UScriptStruct * __cdecl FNiagaraEmitterScalabilityOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride,
                         (UObject *)pUVar1,L"NiagaraEmitterScalabilityOverride");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverride.OuterSingleton;
}

// FNiagaraEmitterScalabilityOverride @ 149276340

FNiagaraEmitterScalabilityOverride * __thiscall
FNiagaraEmitterScalabilityOverride::FNiagaraEmitterScalabilityOverride
          (FNiagaraEmitterScalabilityOverride *this)

{
  FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)this);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  this->bOverrideSpawnCountScale = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  return this;
}

