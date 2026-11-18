// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 2

// PlayAnimation @ 14a8507a0

void __thiscall
FWN_ISKM_BoidInfo::PlayAnimation(FWN_ISKM_BoidInfo *this,FName param_1,float param_2,float param_3)

{
  FName FVar1;
  
  this->_AnimSpeed = param_3;
  this->_AnimTransitionInterval = param_2;
  FVar1 = this->AnimSequenceName;
  if (this->AnimSequenceName == (FName)0x0) {
    FVar1 = param_1;
  }
  this->AnimSequenceName = param_1;
  this->_PrevAnimSequenceName = FVar1;
  this->_BlendingAnimTime = this->_AnimTime;
  this->_AnimTime = 0.0;
  this->_AnimTransitionTime = 0.0;
  return;
}

// UpdateAnimation @ 14a857350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWN_ISKM_BoidInfo::UpdateAnimation
          (FWN_ISKM_BoidInfo *this,float param_1,float param_2,FWN_ISKM_AnimationInfo **param_3,
          FWN_ISKM_AnimationInfo **param_4)

{
  FName *this_00;
  FName FVar1;
  FWN_ISKM_AnimationInfo **ppFVar2;
  UWN_ISKM_Profile *this_01;
  FWN_ISKM_AnimationInfo *pFVar3;
  float fVar4;
  float fVar5;
  FString local_48;
  FString local_38 [2];
  
  ppFVar2 = param_4;
  *param_3 = (FWN_ISKM_AnimationInfo *)0x0;
  *param_4 = (FWN_ISKM_AnimationInfo *)0x0;
  if (this->_Actor == (AWN_ISKM_BoidsActor *)0x0) {
    if (2 < (byte)ISKM._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&ISKM);
    }
  }
  else {
    this_01 = TSoftObjectPtr<UWN_ISKM_Profile>::LoadSynchronous(&this->_Actor->Profile);
    if (this_01 == (UWN_ISKM_Profile *)0x0) {
      if (2 < (byte)ISKM._0_1_) {
        param_4 = (FWN_ISKM_AnimationInfo **)this->_Actor->_padding_;
        ::FName::ToString((FName *)&param_4,&local_48);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&ISKM);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      this_00 = &this->AnimSequenceName;
      pFVar3 = UWN_ISKM_Profile::FindAnimationInfo(this_01,this->AnimSequenceName);
      *param_3 = pFVar3;
      if (pFVar3 == (FWN_ISKM_AnimationInfo *)0x0) {
        if (2 < (byte)ISKM._0_1_) {
          param_4 = (FWN_ISKM_AnimationInfo **)this->_Actor->_padding_;
          ::FName::ToString((FName *)&param_4,&local_48);
          ::FName::ToString(this_00,local_38);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&ISKM);
          if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        fVar4 = FGenericPlatformMath::Fmod
                          (param_1 * this->_AnimSpeed + this->_AnimTime,pFVar3->TotalTime);
        this->_AnimTime = fVar4;
        this->_BlendingWeight = 0.0;
        if (((0.0 < this->_AnimTransitionInterval) &&
            (FVar1 = this->_PrevAnimSequenceName, FVar1 != *this_00)) && (FVar1 != (FName)0x0)) {
          pFVar3 = UWN_ISKM_Profile::FindAnimationInfo(this_01,FVar1);
          *ppFVar2 = pFVar3;
          if (pFVar3 != (FWN_ISKM_AnimationInfo *)0x0) {
            fVar4 = param_1 + this->_BlendingAnimTime;
            this->_BlendingAnimTime = fVar4;
            fVar4 = FGenericPlatformMath::Fmod(fVar4,(*ppFVar2)->TotalTime);
            this->_BlendingAnimTime = fVar4;
            fVar4 = this->_AnimTransitionTime / this->_AnimTransitionInterval;
            fVar5 = this->_AnimTransitionTime + param_1;
            if (__real_3f800000 <= fVar4) {
              fVar4 = __real_3f800000;
            }
            fVar4 = __real_3f800000 - fVar4;
            this->_AnimTransitionTime = fVar5;
            this->_BlendingWeight = fVar4;
            if (fVar5 < this->_AnimTransitionInterval) {
              return;
            }
          }
          this->_PrevAnimSequenceName = *this_00;
          this->_AnimTransitionTime = 0.0;
          this->_AnimTransitionInterval = 0.0;
        }
      }
    }
  }
  return;
}

