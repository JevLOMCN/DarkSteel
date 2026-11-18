// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 5

// StaticStruct @ 14ad18bb0

UScriptStruct * __cdecl FFOscillator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFOscillator.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineCameras();
    Z_Registration_Info_UScriptStruct_FFOscillator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFOscillator,(UObject *)pUVar1,L"FOscillator");
  }
  return Z_Registration_Info_UScriptStruct_FFOscillator.OuterSingleton;
}

// GetInitialOffset @ 14ad21a10

float __cdecl FFOscillator::GetInitialOffset(FFOscillator *param_1)

{
  uint uVar1;
  
  if ((param_1->InitialOffset).Value == '\0') {
    uVar1 = rand();
    return (float)(uVar1 & 0x7fff) * __real_3949116d;
  }
  return 0.0;
}

// GetOffsetAtTime @ 14ad21a50

float __cdecl FFOscillator::GetOffsetAtTime(FFOscillator *param_1,float param_2,float param_3)

{
  return param_3 * param_1->Frequency + param_2;
}

// UpdateOffset @ 14ad25650

float __cdecl FFOscillator::UpdateOffset(FFOscillator *param_1,float *param_2,float param_3)

{
  double _X;
  float fVar1;
  double dVar2;
  
  fVar1 = 0.0;
  _X = (double)*param_2;
  if (param_1->Amplitude != 0.0) {
    _X = _X + (double)(param_3 * param_1->Frequency);
    if ((param_1->Waveform == SineWave) || (param_1->Waveform != PerlinNoise)) {
      dVar2 = sin(_X);
      fVar1 = (float)dVar2;
    }
    else {
      fVar1 = FMath::PerlinNoise1D((float)_X);
    }
    fVar1 = fVar1 * param_1->Amplitude;
  }
  *param_2 = (float)_X;
  return fVar1;
}

// UpdateOffset @ 14ad256d0

float __cdecl FFOscillator::UpdateOffset(FFOscillator *param_1,double *param_2,float param_3)

{
  float fVar1;
  double dVar2;
  
  fVar1 = 0.0;
  if (param_1->Amplitude != 0.0) {
    dVar2 = (double)(param_3 * param_1->Frequency) + *param_2;
    *param_2 = dVar2;
    if ((param_1->Waveform != SineWave) && (param_1->Waveform == PerlinNoise)) {
      fVar1 = FMath::PerlinNoise1D((float)dVar2);
      return fVar1 * param_1->Amplitude;
    }
    dVar2 = sin(dVar2);
    fVar1 = (float)dVar2 * param_1->Amplitude;
  }
  return fVar1;
}

