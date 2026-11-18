// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// StaticStruct @ 1465896b0

UScriptStruct * __cdecl FPerlinNoiseParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPerlinNoiseParams.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FPerlinNoiseParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPerlinNoiseParams,(UObject *)pUVar1,
                         L"PerlinNoiseParams");
  }
  return Z_Registration_Info_UScriptStruct_FPerlinNoiseParams.OuterSingleton;
}

// FPerlinNoiseParams @ 146616990

FPerlinNoiseParams * __thiscall
FPerlinNoiseParams::FPerlinNoiseParams(FPerlinNoiseParams *this,float param_1,double param_2)

{
  this->Frequency = param_1;
  this->Amplitude = param_2;
  this->Offset = 0.0;
  return this;
}

// FPerlinNoiseParams @ 1466169b0

FPerlinNoiseParams * __thiscall FPerlinNoiseParams::FPerlinNoiseParams(FPerlinNoiseParams *this)

{
  this->Frequency = 4.0;
  this->Amplitude = 1.0;
  this->Offset = 0.0;
  return this;
}

// RandomizeOffset @ 1466b56a0

void __thiscall FPerlinNoiseParams::RandomizeOffset(FPerlinNoiseParams *this,float param_1)

{
  uint uVar1;
  
  uVar1 = rand();
  this->Offset = (float)(uVar1 & 0x7fff) * __real_38000100 * param_1;
  return;
}

