// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 14925e020

UScriptStruct * __cdecl FNiagaraLinearRamp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraLinearRamp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraLinearRamp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraLinearRamp,(UObject *)pUVar1,
                         L"NiagaraLinearRamp");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraLinearRamp.OuterSingleton;
}

// Evaluate @ 1493a0380

float __thiscall FNiagaraLinearRamp::Evaluate(FNiagaraLinearRamp *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->StartX;
  if (param_1 <= fVar1) {
    return this->StartY;
  }
  if (this->EndX <= param_1) {
    return this->EndY;
  }
  return ((param_1 - fVar1) / (this->EndX - fVar1)) * (this->EndY - this->StartY) + this->StartY;
}

