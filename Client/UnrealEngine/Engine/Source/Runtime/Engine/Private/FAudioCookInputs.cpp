// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FAudioCookInputs @ 14761b6e0

FAudioCookInputs * __thiscall
FAudioCookInputs::FAudioCookInputs
          (FAudioCookInputs *this,USoundWave *param_1,FName param_2,FName param_3,
          FPlatformAudioCookOverrides *param_4,ITargetPlatform *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ITargetPlatformManagerModule *pIVar4;
  IAudioFormat *pIVar5;
  FName local_res8;
  
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&this->SoundName);
  this->BaseFormat = param_2;
  this->HashedFormat = param_3;
  uVar1 = (param_1->CompressedDataGuid).B;
  uVar2 = (param_1->CompressedDataGuid).C;
  uVar3 = (param_1->CompressedDataGuid).D;
  (this->CompressedDataGuid).A = (param_1->CompressedDataGuid).A;
  (this->CompressedDataGuid).B = uVar1;
  (this->CompressedDataGuid).C = uVar2;
  (this->CompressedDataGuid).D = uVar3;
  pIVar4 = GetTargetPlatformManager(true);
  if (pIVar4 != (ITargetPlatformManagerModule *)0x0) {
    pIVar5 = (IAudioFormat *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4,param_2);
    this->Compressor = pIVar5;
  }
  return this;
}

