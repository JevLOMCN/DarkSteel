// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 2

// StaticStruct @ 14ad17400

UScriptStruct * __cdecl FPerlinNoiseShaker::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPerlinNoiseShaker.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineCameras();
    Z_Registration_Info_UScriptStruct_FPerlinNoiseShaker.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPerlinNoiseShaker,(UObject *)pUVar1,
                         L"PerlinNoiseShaker");
  }
  return Z_Registration_Info_UScriptStruct_FPerlinNoiseShaker.OuterSingleton;
}

// Update @ 14ad255a0

float __thiscall
FPerlinNoiseShaker::Update
          (FPerlinNoiseShaker *this,float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = param_2 * this->Amplitude;
  if (fVar2 != 0.0) {
    fVar1 = param_1 * this->Frequency * param_3 + *param_4;
    *param_4 = fVar1;
    fVar1 = FMath::PerlinNoise1D(fVar1);
    fVar1 = fVar1 * fVar2;
  }
  return fVar1;
}

