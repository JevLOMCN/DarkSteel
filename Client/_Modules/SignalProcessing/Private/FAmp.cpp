// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 18

// FAmp @ 1444a2000

FAmp * __thiscall Audio::FAmp::FAmp(FAmp *this)

{
  this->GainMax = 1.0;
  this->VoiceId = 0;
  this->LeftGain = 0.0;
  this->RightGain = 0.0;
  this->TargetLeftGain = 0.0;
  this->TargetRightGain = 0.0;
  this->TargetDeltaSamples = 0;
  this->CurrentLerpSample = 0;
  this->TargetLeftSlope = 0.0;
  this->TargetRightSlope = 0.0;
  this->GainMin = 0.0;
  this->PanMod = 0.0;
  this->ModMatrix = (FModulationMatrix *)0x0;
  (this->GainScaleDest).Depth = 0.0;
  (this->GainScaleDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GainScaleDest).Name.Data.ArrayNum = 0;
  (this->GainScaleDest).Name.Data.ArrayMax = 0;
  (this->GainEnvDest).Depth = 0.0;
  (this->GainEnvDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GainEnvDest).Name.Data.ArrayNum = 0;
  (this->GainEnvDest).Name.Data.ArrayMax = 0;
  (this->GainPanDest).Depth = 0.0;
  (this->GainPanDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GainPanDest).Name.Data.ArrayNum = 0;
  (this->GainPanDest).Name.Data.ArrayMax = 0;
  this->bChanged = false;
  this->GainControl = 1.0;
  this->GainVelocity = 1.0;
  this->GainMod = 1.0;
  this->GainEnv = 1.0;
  this->Pan = 0.0;
  (this->GainScaleDest).Id = 0xffffffff;
  (this->GainScaleDest).Stage = -1;
  (this->GainEnvDest).Id = 0xffffffff;
  (this->GainEnvDest).Stage = -1;
  (this->GainPanDest).Id = 0xffffffff;
  (this->GainPanDest).Stage = -1;
  return this;
}

// ~FAmp @ 1444a5ed0

void __thiscall Audio::FAmp::~FAmp(FAmp *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GainPanDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GainEnvDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GainScaleDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Generate @ 1444beeb0

void __thiscall Audio::FAmp::Generate(FAmp *this,float *param_1,float *param_2)

{
  if (this->CurrentLerpSample < this->TargetDeltaSamples) {
    this->CurrentLerpSample = this->CurrentLerpSample + 1;
    this->LeftGain = this->TargetLeftSlope + this->LeftGain;
    this->RightGain = this->TargetRightSlope + this->RightGain;
  }
  *param_1 = this->LeftGain * *param_1;
  *param_2 = this->RightGain * *param_2;
  return;
}

// Init @ 1444c1970

void __thiscall Audio::FAmp::Init(FAmp *this,int param_1,FModulationMatrix *param_2)

{
  FString *this_00;
  int *piVar1;
  int iVar2;
  float fVar3;
  ForAnyElementType _Src;
  FPatchDestination *pFVar4;
  FString local_58;
  FPatchDestination local_48;
  
  this->VoiceId = param_1;
  this->ModMatrix = param_2;
  this->TargetDeltaSamples = 0x100;
  fVar3 = __real_3f800000;
  if (param_2 != (FModulationMatrix *)0x0) {
    pFVar4 = FModulationMatrix::CreatePatchDestination(param_2,&local_48,param_1,1,__real_3f800000);
    FPatchDestination::operator=(&this->GainScaleDest,pFVar4);
    if (local_48.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Name.Data.AllocatorInstance.Data);
    }
    pFVar4 = FModulationMatrix::CreatePatchDestination
                       (this->ModMatrix,&local_48,this->VoiceId,1,fVar3);
    FPatchDestination::operator=(&this->GainEnvDest,pFVar4);
    if (local_48.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Name.Data.AllocatorInstance.Data);
    }
    pFVar4 = FModulationMatrix::CreatePatchDestination
                       (this->ModMatrix,&local_48,this->VoiceId,1,fVar3);
    FPatchDestination::operator=(&this->GainPanDest,pFVar4);
    if (local_48.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Name.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_58,"GainScaleDest");
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    this_00 = &(this->GainScaleDest).Name;
    if (this_00 != &local_58) {
      piVar1 = &(this->GainScaleDest).Name.Data.ArrayMax;
      iVar2 = *piVar1;
      (this->GainScaleDest).Name.Data.ArrayNum = local_58.Data.ArrayNum;
      if ((local_58.Data.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,iVar2,(ForAnyElementType *)this_00,
                   local_58.Data.ArrayNum,piVar1);
        if (local_58.Data.ArrayNum != 0) {
          memcpy((this_00->Data).AllocatorInstance.Data,_Src.Data,
                 (longlong)local_58.Data.ArrayNum * 2);
        }
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::operator=(this_00,L"GainScaleDest");
    ::FString::operator=(&(this->GainEnvDest).Name,L"GainEnvDest");
    ::FString::operator=(&(this->GainPanDest).Name,L"GainPanDest");
    this->bChanged = true;
    return;
  }
  this->bChanged = true;
  return;
}

// ProcessAudio @ 1444d5870

void __thiscall
Audio::FAmp::ProcessAudio(FAmp *this,float param_1,float param_2,float *param_3,float *param_4)

{
  if (this->CurrentLerpSample < this->TargetDeltaSamples) {
    this->CurrentLerpSample = this->CurrentLerpSample + 1;
    this->LeftGain = this->TargetLeftSlope + this->LeftGain;
    this->RightGain = this->TargetRightSlope + this->RightGain;
  }
  *param_3 = param_1 * this->LeftGain;
  *param_4 = param_2 * this->RightGain;
  return;
}

// ProcessAudio @ 1444d58c0

void __thiscall Audio::FAmp::ProcessAudio(FAmp *this,float param_1,float *param_2,float *param_3)

{
  if (this->CurrentLerpSample < this->TargetDeltaSamples) {
    this->CurrentLerpSample = this->CurrentLerpSample + 1;
    this->LeftGain = this->TargetLeftSlope + this->LeftGain;
    this->RightGain = this->TargetRightSlope + this->RightGain;
  }
  *param_2 = param_1 * this->LeftGain;
  *param_3 = param_1 * this->RightGain;
  return;
}

// Reset @ 1444e1570

void __thiscall Audio::FAmp::Reset(FAmp *this)

{
  this->GainEnv = 1.0;
  this->GainMod = 1.0;
  return;
}

// SetGain @ 1444e3be0

void __thiscall Audio::FAmp::SetGain(FAmp *this,float param_1)

{
  this->GainControl = param_1;
  this->bChanged = true;
  return;
}

// SetGainDb @ 1444e3c70

void __thiscall Audio::FAmp::SetGainDb(FAmp *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  this->GainControl = fVar1;
  this->bChanged = true;
  return;
}

// SetGainEnv @ 1444e3cb0

void __thiscall Audio::FAmp::SetGainEnv(FAmp *this,float param_1)

{
  this->GainEnv = param_1;
  this->bChanged = true;
  return;
}

// SetGainEnvDb @ 1444e3cd0

void __thiscall Audio::FAmp::SetGainEnvDb(FAmp *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  this->GainEnv = fVar1;
  return;
}

// SetGainMod @ 1444e3d00

void __thiscall Audio::FAmp::SetGainMod(FAmp *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + __real_3f800000;
  this->bChanged = true;
  this->GainMod = fVar1 * __real_3f000000;
  return;
}

// SetGainModDb @ 1444e3d30

void __thiscall Audio::FAmp::SetGainModDb(FAmp *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  fVar1 = fVar1 + __real_3f800000;
  this->bChanged = true;
  this->GainMod = fVar1 * __real_3f000000;
  return;
}

// SetGainRange @ 1444e3d80

void __thiscall Audio::FAmp::SetGainRange(FAmp *this,float param_1,float param_2)

{
  this->GainMin = param_1;
  this->GainMax = param_2;
  this->bChanged = true;
  return;
}

// SetPan @ 1444e4e00

void __thiscall Audio::FAmp::SetPan(FAmp *this,float param_1)

{
  this->Pan = param_1;
  this->bChanged = true;
  return;
}

// SetPanModulator @ 1444e4e20

void __thiscall Audio::FAmp::SetPanModulator(FAmp *this,float param_1)

{
  this->PanMod = param_1;
  this->bChanged = true;
  return;
}

// SetVelocity @ 1444e5bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FAmp::SetVelocity(FAmp *this,float param_1)

{
  this->bChanged = true;
  if (param_1 == 0.0) {
    this->GainVelocity = 0.0;
    return;
  }
  this->GainVelocity = param_1 * param_1 * ___real_38820610;
  return;
}

// Update @ 1444e7490

void __thiscall Audio::FAmp::Update(FAmp *this)

{
  bool *pbVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pbVar1 = &this->bChanged;
  if (this->ModMatrix != (FModulationMatrix *)0x0) {
    bVar4 = *pbVar1;
    bVar2 = FModulationMatrix::GetDestinationValue
                      (this->ModMatrix,this->VoiceId,&this->GainScaleDest,&this->GainMod);
    *pbVar1 = (bool)(bVar2 | bVar4);
    bVar3 = FModulationMatrix::GetDestinationValue
                      (this->ModMatrix,this->VoiceId,&this->GainEnvDest,&this->GainEnv);
    bVar3 = (bool)(bVar3 | bVar2 | bVar4);
    *pbVar1 = bVar3;
    bVar4 = FModulationMatrix::GetDestinationValue
                      (this->ModMatrix,this->VoiceId,&this->GainPanDest,&this->PanMod);
    *pbVar1 = (bool)(bVar4 | bVar3);
  }
  if (*pbVar1 != false) {
    *pbVar1 = false;
    this->CurrentLerpSample = 0;
    fVar7 = this->Pan + this->PanMod;
    fVar6 = this->GainVelocity * this->GainEnv * this->GainControl * this->GainMod;
    if (this->GainMax <= fVar6) {
      fVar6 = this->GainMax;
    }
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    if (fVar6 <= this->GainMin) {
      fVar6 = this->GainMin;
    }
    if (fVar7 <= __real_bf800000) {
      fVar7 = __real_bf800000;
    }
    fVar5 = fVar7 * __real_3f490fdb + __real_4016cbe4;
    fVar7 = fVar7 * __real_3f490fdb + __real_3f490fdb;
    fVar5 = (__real_3fa2f983 -
            (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ecf817a) * fVar5
    ;
    fVar7 = (__real_3fa2f983 -
            (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ecf817a) * fVar7
    ;
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    fVar8 = __real_3f800000 / (float)this->TargetDeltaSamples;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    this->TargetRightGain = fVar7 * fVar6;
    this->TargetLeftGain = fVar5 * fVar6;
    this->TargetRightSlope = (fVar7 * fVar6 - this->RightGain) * fVar8;
    this->TargetLeftSlope = (fVar5 * fVar6 - this->LeftGain) * fVar8;
  }
  return;
}

