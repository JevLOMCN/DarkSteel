// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 3

// StaticStruct @ 14ad1b5e0

UScriptStruct * __cdecl FWaveOscillator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWaveOscillator.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineCameras();
    Z_Registration_Info_UScriptStruct_FWaveOscillator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWaveOscillator,(UObject *)pUVar1,
                         L"WaveOscillator");
  }
  return Z_Registration_Info_UScriptStruct_FWaveOscillator.OuterSingleton;
}

// Initialize @ 14ad22810

float __thiscall FWaveOscillator::Initialize(FWaveOscillator *this,float *param_1)

{
  uint uVar1;
  float fVar2;
  
  if (this->InitialOffsetType == Random) {
    uVar1 = rand();
    fVar2 = (float)(uVar1 & 0x7fff) * __real_3949116d;
  }
  else {
    fVar2 = 0.0;
  }
  *param_1 = fVar2;
  fVar2 = sinf(fVar2);
  return fVar2 * this->Amplitude;
}

// Update @ 14ad255f0

float __thiscall
FWaveOscillator::Update
          (FWaveOscillator *this,float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = param_2 * this->Amplitude;
  if (fVar2 != 0.0) {
    fVar1 = param_1 * this->Frequency * param_3 * __real_40c90fdb + *param_4;
    *param_4 = fVar1;
    fVar1 = sinf(fVar1);
    fVar1 = fVar1 * fVar2;
  }
  return fVar1;
}

