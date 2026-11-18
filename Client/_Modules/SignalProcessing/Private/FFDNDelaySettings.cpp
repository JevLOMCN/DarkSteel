// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// DefaultLeftDelays @ 1444babd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FFDNDelaySettings * __cdecl
Audio::FFDNDelaySettings::DefaultLeftDelays(FFDNDelaySettings *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_1 * ___real_3c93438c;
  fVar2 = param_1 * ___real_3d3e9e04;
  __return_storage_ptr__->APF0DelayNumSamples = (int)(param_1 * ___real_3cc36f2d);
  fVar1 = param_1 * ___real_3d82677b;
  __return_storage_ptr__->APF1DelayNumSamples = (int)fVar3;
  __return_storage_ptr__->APF2DelayNumSamples = (int)fVar1;
  __return_storage_ptr__->APF3DelayNumSamples = (int)fVar2;
  return __return_storage_ptr__;
}

// DefaultRightDelays @ 1444bac20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FFDNDelaySettings * __cdecl
Audio::FFDNDelaySettings::DefaultRightDelays
          (FFDNDelaySettings *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_1 * ___real_3cbc8d84;
  fVar2 = param_1 * ___real_3d610652;
  __return_storage_ptr__->APF0DelayNumSamples = (int)(param_1 * ___real_3d3ffe59);
  fVar1 = param_1 * ___real_3d129362;
  __return_storage_ptr__->APF1DelayNumSamples = (int)fVar3;
  __return_storage_ptr__->APF2DelayNumSamples = (int)fVar1;
  __return_storage_ptr__->APF3DelayNumSamples = (int)fVar2;
  return __return_storage_ptr__;
}

