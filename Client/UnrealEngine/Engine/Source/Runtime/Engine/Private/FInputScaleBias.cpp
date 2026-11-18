// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147510070

UScriptStruct * __cdecl FInputScaleBias::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputScaleBias.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInputScaleBias.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBias,(UObject *)pUVar1,
                         L"InputScaleBias");
  }
  return Z_Registration_Info_UScriptStruct_FInputScaleBias.OuterSingleton;
}

// ApplyTo @ 147544420

float __thiscall FInputScaleBias::ApplyTo(FInputScaleBias *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * this->Scale + this->Bias;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

