// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 1493795f0

UScriptStruct * __cdecl FNiagaraRibbonUVSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRibbonUVSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraRibbonUVSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings,(UObject *)pUVar1,
                         L"NiagaraRibbonUVSettings");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraRibbonUVSettings.OuterSingleton;
}

// FNiagaraRibbonUVSettings @ 149386b90

FNiagaraRibbonUVSettings * __thiscall
FNiagaraRibbonUVSettings::FNiagaraRibbonUVSettings(FNiagaraRibbonUVSettings *this)

{
  undefined1 *puVar1;
  
  this->bEnablePerParticleUOverride = '\0';
  this->bEnablePerParticleVRangeOverride = '\0';
  (this->Offset).field0_0x0._s_0.X = 0.0;
  (this->Offset).field0_0x0._s_0.Y = 0.0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  this->DistributionMode = ScaledUsingRibbonSegmentLength;
  this->LeadingEdgeMode = Locked;
  this->TrailingEdgeMode = Locked;
  this->TilingLength = 100.0;
  return this;
}

