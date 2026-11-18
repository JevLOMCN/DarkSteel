// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 147269250

UClass * __cdecl UDialogueSoundWaveProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDialogueSoundWaveProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DialogueSoundWaveProxy",
               &Z_Registration_Info_UClass_UDialogueSoundWaveProxy.InnerSingleton,
               StaticRegisterNativesUDialogueSoundWaveProxy,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDialogueSoundWaveProxy>,
               InternalVTableHelperCtorCaller<UDialogueSoundWaveProxy>,local_res8,
               USoundBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDialogueSoundWaveProxy.InnerSingleton;
}

// UDialogueSoundWaveProxy @ 14726cd60

UDialogueSoundWaveProxy * __thiscall
UDialogueSoundWaveProxy::UDialogueSoundWaveProxy
          (UDialogueSoundWaveProxy *this,FVTableHelper *param_1)

{
  USoundBase::USoundBase((USoundBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Subtitles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subtitles).ArrayNum = 0;
  (this->Subtitles).ArrayMax = 0;
  FText::FText(&this->SubtitleText);
  return this;
}

// ~UDialogueSoundWaveProxy @ 14726d4d0

void __thiscall UDialogueSoundWaveProxy::~UDialogueSoundWaveProxy(UDialogueSoundWaveProxy *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pIVar1 = (this->SubtitleText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FSubtitleCue,int>
            ((FSubtitleCue *)(this->Subtitles).AllocatorInstance.Data,(this->Subtitles).ArrayNum);
  pFVar2 = (this->Subtitles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  USoundBase::~USoundBase((USoundBase *)this);
  return;
}

// GetPrivateStaticClass @ 14726f730

UClass * __cdecl UDialogueSoundWaveProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDialogueSoundWaveProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DialogueSoundWaveProxy",
               &Z_Registration_Info_UClass_UDialogueSoundWaveProxy.InnerSingleton,
               StaticRegisterNativesUDialogueSoundWaveProxy,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDialogueSoundWaveProxy>,
               InternalVTableHelperCtorCaller<UDialogueSoundWaveProxy>,local_res8,
               USoundBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDialogueSoundWaveProxy.InnerSingleton;
}

// StaticRegisterNativesUDialogueSoundWaveProxy @ 147270a40

void __cdecl UDialogueSoundWaveProxy::StaticRegisterNativesUDialogueSoundWaveProxy(void)

{
  return;
}

// UDialogueSoundWaveProxy @ 147abdd90

UDialogueSoundWaveProxy * __thiscall
UDialogueSoundWaveProxy::UDialogueSoundWaveProxy
          (UDialogueSoundWaveProxy *this,FObjectInitializer *param_1)

{
  USoundBase::USoundBase((USoundBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Subtitles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subtitles).ArrayNum = 0;
  (this->Subtitles).ArrayMax = 0;
  FText::FText(&this->SubtitleText);
  return this;
}

// GetAttenuationSettingsToApply @ 147ae3b60

FSoundAttenuationSettings * __thiscall
UDialogueSoundWaveProxy::GetAttenuationSettingsToApply(UDialogueSoundWaveProxy *this)

{
  FSoundAttenuationSettings *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147ae3b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FSoundAttenuationSettings *)(**(code **)(this->SoundWave->_padding_ + 0x2c8))();
  return pFVar1;
}

// GetCurveData @ 147ae5140

UCurveTable * __thiscall UDialogueSoundWaveProxy::GetCurveData(UDialogueSoundWaveProxy *this)

{
  UCurveTable *pUVar1;
  
  if (this->SoundWave != (USoundWave *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ae514f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UCurveTable *)(**(code **)(this->SoundWave->_padding_ + 0x308))();
    return pUVar1;
  }
  return (UCurveTable *)0x0;
}

// GetDuration @ 147ae65a0

float __thiscall UDialogueSoundWaveProxy::GetDuration(UDialogueSoundWaveProxy *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147ae65aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->SoundWave->_padding_ + 0x2d8))();
  return fVar1;
}

// GetMaxDistance @ 147ae9bd0

float __thiscall UDialogueSoundWaveProxy::GetMaxDistance(UDialogueSoundWaveProxy *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147ae9bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->SoundWave->_padding_ + 0x2d0))();
  return fVar1;
}

// GetPitchMultiplier @ 147aea630

float __thiscall UDialogueSoundWaveProxy::GetPitchMultiplier(UDialogueSoundWaveProxy *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147aea63a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->SoundWave->_padding_ + 0x2f0))();
  return fVar1;
}

// GetSoundClass @ 147aed380

USoundClass * __thiscall UDialogueSoundWaveProxy::GetSoundClass(UDialogueSoundWaveProxy *this)

{
  USoundClass *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147aed38a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (USoundClass *)(**(code **)(this->SoundWave->_padding_ + 0x330))();
  return pUVar1;
}

// GetVolumeMultiplier @ 147aef0f0

float __thiscall UDialogueSoundWaveProxy::GetVolumeMultiplier(UDialogueSoundWaveProxy *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147aef0fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->SoundWave->_padding_ + 0x2e8))();
  return fVar1;
}

// IsPlayable @ 147af49f0

bool __thiscall UDialogueSoundWaveProxy::IsPlayable(UDialogueSoundWaveProxy *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147af49fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->SoundWave->_padding_ + 0x2b0))();
  return (bool)uVar1;
}

// Parse @ 147afc410

void __thiscall
UDialogueSoundWaveProxy::Parse
          (UDialogueSoundWaveProxy *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3
          ,FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FWaveInstance *pFVar7;
  uint uVar8;
  FQueueSubtitleParams local_68;
  
  iVar1 = param_5->ArrayNum;
  if (bUseNewSubtitles) {
    bVar4 = FText::IsEmpty(&this->SubtitleText);
    bVar4 = !bVar4;
  }
  else {
    bVar4 = 0 < (this->Subtitles).ArrayNum;
  }
  pFVar7 = FActiveSound::FindWaveInstance(param_3,param_2);
  param_3->bHasExternalSubtitles = '\0';
  param_3->field_0x1a2 = param_3->field_0x1a2 | bVar4 << 4;
  (**(code **)(this->SoundWave->_padding_ + 0x328))
            (this->SoundWave,param_1,param_2,param_3,param_4,param_5);
  iVar2 = param_5->ArrayNum;
  if (iVar2 == iVar1 + 1) {
    uVar8 = iVar2 - 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar2) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_68.WaveInstance =
         *(long64 *)((param_5->AllocatorInstance).Data + (longlong)(int)uVar8 * 8);
    if ((((local_68.WaveInstance != 0) && (pFVar7 == (FWaveInstance *)0x0)) &&
        (param_3->bHandleSubtitles != '\0')) && ((bVar4 != false && (bUseNewSubtitles == false)))) {
      local_68.SubtitlePriority = param_3->SubtitlePriority;
      local_68.Subtitles = &this->Subtitles;
      local_68.AudioComponentID = param_3->AudioComponentID;
      local_68.WorldPtr.WeakPtr = (param_3->World).WeakPtr;
      local_68.Duration = (float)(**(code **)(this->_padding_ + 0x2d8))(this);
      local_68._32_1_ = local_68._32_1_ & 0xfc;
      local_68.RequestedStartTime = param_3->RequestedStartTime;
      FSubtitleManager::QueueSubtitles(&local_68);
    }
  }
  return;
}

