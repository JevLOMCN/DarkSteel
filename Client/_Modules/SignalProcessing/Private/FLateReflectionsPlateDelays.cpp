// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// DefaultLeftDelays @ 1444f9cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLateReflectionsPlateDelays * __cdecl
Audio::FLateReflectionsPlateDelays::DefaultLeftDelays
          (FLateReflectionsPlateDelays *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_1 * ___real_3a0ceed2;
  fVar2 = param_1 * ___real_3ce6646a;
  __return_storage_ptr__->NumSamplesModulatedBase = (int)(param_1 * ___real_3cf9ef88);
  fVar1 = param_1 * ___real_3c425550;
  __return_storage_ptr__->NumSamplesModulatedDelta = (int)fVar4;
  fVar4 = param_1 * ___real_3da7b3af;
  __return_storage_ptr__->NumSamplesDelayA = (int)fVar1;
  fVar3 = param_1 * ___real_3ca26734;
  __return_storage_ptr__->NumSamplesDelayB = (int)fVar2;
  fVar1 = param_1 * ___real_3db6c5b8;
  __return_storage_ptr__->NumSamplesDelayC = (int)fVar4;
  fVar2 = param_1 * ___real_3bcde4e7;
  __return_storage_ptr__->NumSamplesDelayD = (int)fVar3;
  fVar4 = param_1 * ___real_3d0f45c9;
  __return_storage_ptr__->NumSamplesAPF = (int)fVar1;
  fVar3 = param_1 * ___real_3d12b69e;
  __return_storage_ptr__->NumSamplesDelayE = (int)fVar2;
  fVar2 = param_1 * ___real_3c7ee3ee;
  __return_storage_ptr__->NumSamplesDelayF = (int)fVar4;
  fVar1 = param_1 * ___real_3d5d2bca;
  __return_storage_ptr__->NumSamplesDelayG = (int)fVar3;
  __return_storage_ptr__->NumSamplesDelayH = (int)fVar1;
  __return_storage_ptr__->NumSamplesDelayI = (int)fVar2;
  return __return_storage_ptr__;
}

// DefaultRightDelays @ 1444f9d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLateReflectionsPlateDelays * __cdecl
Audio::FLateReflectionsPlateDelays::DefaultRightDelays
          (FLateReflectionsPlateDelays *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_1 * ___real_3a0ceed2;
  fVar2 = param_1 * ___real_3d7ded4c;
  __return_storage_ptr__->NumSamplesModulatedBase = (int)(param_1 * ___real_3cb8f974);
  fVar1 = param_1 * ___real_3c127026;
  __return_storage_ptr__->NumSamplesModulatedDelta = (int)fVar4;
  fVar4 = param_1 * ___real_3ced8c8b;
  __return_storage_ptr__->NumSamplesDelayA = (int)fVar1;
  fVar3 = param_1 * ___real_3d4b8df0;
  __return_storage_ptr__->NumSamplesDelayB = (int)fVar2;
  fVar1 = param_1 * ___real_3d77bbcd;
  __return_storage_ptr__->NumSamplesDelayC = (int)fVar4;
  fVar2 = param_1 * ___real_3c386c85;
  __return_storage_ptr__->NumSamplesDelayD = (int)fVar3;
  fVar4 = param_1 * ___real_3d592e07;
  __return_storage_ptr__->NumSamplesAPF = (int)fVar1;
  fVar3 = param_1 * ___real_3b8539c3;
  __return_storage_ptr__->NumSamplesDelayE = (int)fVar2;
  fVar2 = param_1 * ___real_3d6d4614;
  __return_storage_ptr__->NumSamplesDelayF = (int)fVar4;
  fVar1 = param_1 * ___real_3d810726;
  __return_storage_ptr__->NumSamplesDelayG = (int)fVar3;
  __return_storage_ptr__->NumSamplesDelayH = (int)fVar1;
  __return_storage_ptr__->NumSamplesDelayI = (int)fVar2;
  return __return_storage_ptr__;
}

