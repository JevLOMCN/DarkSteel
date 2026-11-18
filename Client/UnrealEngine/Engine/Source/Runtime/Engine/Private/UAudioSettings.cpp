// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1476075e0

UClass * __cdecl UAudioSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioSettings",
               &Z_Registration_Info_UClass_UAudioSettings.InnerSingleton,
               StaticRegisterNativesUAudioSettings,0x1e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioSettings>,InternalVTableHelperCtorCaller<UAudioSettings>,
               local_res8,UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSettings.InnerSingleton;
}

// UAudioSettings @ 14761e6f0

UAudioSettings * __thiscall
UAudioSettings::UAudioSettings(UAudioSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->DefaultCompressionQuality_DEPRECATED = 0x50;
  this->_padding_ = (longlong)&___7UAudioSettings__6B_;
  (this->DefaultSoundClassName).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultSoundClassName).AssetPath.PackageName.Number = 0;
  (this->DefaultSoundClassName).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultSoundClassName).AssetPath.AssetName.Number = 0;
  (this->DefaultSoundClassName).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultSoundClassName).SubPathString.Data.ArrayNum = 0;
  (this->DefaultSoundClassName).SubPathString.Data.ArrayMax = 0;
  (this->DefaultMediaSoundClassName).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultMediaSoundClassName).AssetPath.PackageName.Number = 0;
  (this->DefaultMediaSoundClassName).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultMediaSoundClassName).AssetPath.AssetName.Number = 0;
  (this->DefaultMediaSoundClassName).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultMediaSoundClassName).SubPathString.Data.ArrayNum = 0;
  (this->DefaultMediaSoundClassName).SubPathString.Data.ArrayMax = 0;
  (this->DefaultSoundConcurrencyName).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultSoundConcurrencyName).AssetPath.PackageName.Number = 0;
  (this->DefaultSoundConcurrencyName).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultSoundConcurrencyName).AssetPath.AssetName.Number = 0;
  (this->DefaultSoundConcurrencyName).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultSoundConcurrencyName).SubPathString.Data.ArrayNum = 0;
  (this->DefaultSoundConcurrencyName).SubPathString.Data.ArrayMax = 0;
  (this->DefaultBaseSoundMix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultBaseSoundMix).AssetPath.PackageName.Number = 0;
  (this->DefaultBaseSoundMix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultBaseSoundMix).AssetPath.AssetName.Number = 0;
  (this->DefaultBaseSoundMix).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultBaseSoundMix).SubPathString.Data.ArrayNum = 0;
  (this->DefaultBaseSoundMix).SubPathString.Data.ArrayMax = 0;
  (this->VoiPSoundClass).AssetPath.PackageName.ComparisonIndex = 0;
  (this->VoiPSoundClass).AssetPath.PackageName.Number = 0;
  (this->VoiPSoundClass).AssetPath.AssetName.ComparisonIndex = 0;
  (this->VoiPSoundClass).AssetPath.AssetName.Number = 0;
  (this->VoiPSoundClass).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoiPSoundClass).SubPathString.Data.ArrayNum = 0;
  (this->VoiPSoundClass).SubPathString.Data.ArrayMax = 0;
  (this->MasterSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MasterSubmix).AssetPath.PackageName.Number = 0;
  (this->MasterSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MasterSubmix).AssetPath.AssetName.Number = 0;
  (this->MasterSubmix).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MasterSubmix).SubPathString.Data.ArrayNum = 0;
  (this->MasterSubmix).SubPathString.Data.ArrayMax = 0;
  (this->BaseDefaultSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->BaseDefaultSubmix).AssetPath.PackageName.Number = 0;
  (this->BaseDefaultSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->BaseDefaultSubmix).AssetPath.AssetName.Number = 0;
  (this->BaseDefaultSubmix).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BaseDefaultSubmix).SubPathString.Data.ArrayNum = 0;
  (this->BaseDefaultSubmix).SubPathString.Data.ArrayMax = 0;
  (this->ReverbSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ReverbSubmix).AssetPath.PackageName.Number = 0;
  (this->ReverbSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ReverbSubmix).AssetPath.AssetName.Number = 0;
  (this->ReverbSubmix).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReverbSubmix).SubPathString.Data.ArrayNum = 0;
  (this->ReverbSubmix).SubPathString.Data.ArrayMax = 0;
  (this->EQSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->EQSubmix).AssetPath.PackageName.Number = 0;
  (this->EQSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->EQSubmix).AssetPath.AssetName.Number = 0;
  (this->EQSubmix).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EQSubmix).SubPathString.Data.ArrayNum = 0;
  (this->EQSubmix).SubPathString.Data.ArrayMax = 0;
  (this->QualityLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QualityLevels).ArrayNum = 0;
  (this->QualityLevels).ArrayMax = 0;
  (this->DialogueFilenameFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DialogueFilenameFormat).Data.ArrayNum = 0;
  (this->DialogueFilenameFormat).Data.ArrayMax = 0;
  (this->DebugSounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSounds).ArrayNum = 0;
  (this->DebugSounds).ArrayMax = 0;
  (this->DefaultAudioBuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultAudioBuses).ArrayNum = 0;
  (this->DefaultAudioBuses).ArrayMax = 0;
  (this->DefaultSoundClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->DefaultMediaSoundClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->DefaultSoundConcurrency).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  (this->DefaultOcclusionCheckInterval).Default = 0.1;
  return this;
}

// UAudioSettings @ 14761e860

UAudioSettings * __thiscall
UAudioSettings::UAudioSettings(UAudioSettings *this,FObjectInitializer *param_1)

{
  TArray<FAudioQualitySettings,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  UAudioSettings *pUVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  FText local_48;
  FText local_38;
  undefined4 local_28;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->DefaultCompressionQuality_DEPRECATED = 0x50;
  this->_padding_ = (longlong)&___7UAudioSettings__6B_;
  pTVar1 = &this->QualityLevels;
  (this->DefaultSoundClassName).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultSoundClassName).AssetPath.PackageName.Number = 0;
  (this->DefaultSoundClassName).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultSoundClassName).AssetPath.AssetName.Number = 0;
  (this->DefaultSoundClassName).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultSoundClassName).SubPathString.Data.ArrayNum = 0;
  (this->DefaultSoundClassName).SubPathString.Data.ArrayMax = 0;
  (this->DefaultMediaSoundClassName).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultMediaSoundClassName).AssetPath.PackageName.Number = 0;
  (this->DefaultMediaSoundClassName).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultMediaSoundClassName).AssetPath.AssetName.Number = 0;
  (this->DefaultMediaSoundClassName).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultMediaSoundClassName).SubPathString.Data.ArrayNum = 0;
  (this->DefaultMediaSoundClassName).SubPathString.Data.ArrayMax = 0;
  (this->DefaultSoundConcurrencyName).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultSoundConcurrencyName).AssetPath.PackageName.Number = 0;
  (this->DefaultSoundConcurrencyName).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultSoundConcurrencyName).AssetPath.AssetName.Number = 0;
  (this->DefaultSoundConcurrencyName).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultSoundConcurrencyName).SubPathString.Data.ArrayNum = 0;
  (this->DefaultSoundConcurrencyName).SubPathString.Data.ArrayMax = 0;
  (this->DefaultBaseSoundMix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DefaultBaseSoundMix).AssetPath.PackageName.Number = 0;
  (this->DefaultBaseSoundMix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DefaultBaseSoundMix).AssetPath.AssetName.Number = 0;
  (this->DefaultBaseSoundMix).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultBaseSoundMix).SubPathString.Data.ArrayNum = 0;
  (this->DefaultBaseSoundMix).SubPathString.Data.ArrayMax = 0;
  (this->VoiPSoundClass).AssetPath.PackageName.ComparisonIndex = 0;
  (this->VoiPSoundClass).AssetPath.PackageName.Number = 0;
  (this->VoiPSoundClass).AssetPath.AssetName.ComparisonIndex = 0;
  (this->VoiPSoundClass).AssetPath.AssetName.Number = 0;
  (this->VoiPSoundClass).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoiPSoundClass).SubPathString.Data.ArrayNum = 0;
  (this->VoiPSoundClass).SubPathString.Data.ArrayMax = 0;
  (this->MasterSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MasterSubmix).AssetPath.PackageName.Number = 0;
  (this->MasterSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MasterSubmix).AssetPath.AssetName.Number = 0;
  (this->MasterSubmix).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MasterSubmix).SubPathString.Data.ArrayNum = 0;
  (this->MasterSubmix).SubPathString.Data.ArrayMax = 0;
  (this->BaseDefaultSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->BaseDefaultSubmix).AssetPath.PackageName.Number = 0;
  (this->BaseDefaultSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->BaseDefaultSubmix).AssetPath.AssetName.Number = 0;
  (this->BaseDefaultSubmix).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BaseDefaultSubmix).SubPathString.Data.ArrayNum = 0;
  (this->BaseDefaultSubmix).SubPathString.Data.ArrayMax = 0;
  (this->ReverbSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ReverbSubmix).AssetPath.PackageName.Number = 0;
  (this->ReverbSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ReverbSubmix).AssetPath.AssetName.Number = 0;
  (this->ReverbSubmix).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReverbSubmix).SubPathString.Data.ArrayNum = 0;
  (this->ReverbSubmix).SubPathString.Data.ArrayMax = 0;
  (this->EQSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->EQSubmix).AssetPath.PackageName.Number = 0;
  (this->EQSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->EQSubmix).AssetPath.AssetName.Number = 0;
  (this->EQSubmix).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EQSubmix).SubPathString.Data.ArrayNum = 0;
  (this->EQSubmix).SubPathString.Data.ArrayMax = 0;
  (this->DefaultOcclusionCheckInterval).Default = 0.1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->QualityLevels).ArrayNum = 0;
  (this->QualityLevels).ArrayMax = 0;
  (this->DialogueFilenameFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DialogueFilenameFormat).Data.ArrayNum = 0;
  (this->DialogueFilenameFormat).Data.ArrayMax = 0;
  (this->DebugSounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSounds).ArrayNum = 0;
  (this->DebugSounds).ArrayMax = 0;
  (this->DefaultAudioBuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultAudioBuses).ArrayNum = 0;
  (this->DefaultAudioBuses).ArrayMax = 0;
  (this->DefaultSoundClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->DefaultMediaSoundClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->DefaultSoundConcurrency).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  ::FName::FName(local_res18,L"Audio");
  this->_padding_ = (longlong)local_res18[0];
  FText::FText(&local_38);
  local_28 = 0x20;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"AudioSettings",L"DefaultSettingsName",L"Default");
  FText::operator=(&local_38,pFVar6);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pFVar6 = (FText *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar6 <= &local_38) &&
     (&local_38 < (FText *)((longlong)pFVar6 + (longlong)(this->QualityLevels).ArrayMax * 0x18))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UAudioSettings *)(*pcVar3)();
      return pUVar7;
    }
  }
  iVar5 = (this->QualityLevels).ArrayNum;
  if (iVar5 == (this->QualityLevels).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,&(this->QualityLevels).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->QualityLevels).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar8 * 0x18) = 0;
  *(ITextData **)(pFVar2 + lVar8 * 0x18) = local_38.TextData.Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  *(uint *)(pFVar2 + lVar8 * 0x18 + 8) = local_38.Flags;
  *(undefined4 *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_28;
  this->bAllowPlayWhenSilent = 1;
  this->DefaultReverbSendLevel_DEPRECATED = 0.0;
  this->VoiPSampleRate = Low16000Hz;
  this->NumStoppingSources = 8;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  this->bAllowPlayWhenSilent = 1;
  this->bParameterInterfacesRegistered = false;
  this->GlobalMinPitchScale = 0.4;
  this->GlobalMaxPitchScale = 2.0;
  this->DefaultAudioCompressionType = BinkAudio;
  return this;
}

// ~UAudioSettings @ 1476216f0

void __thiscall UAudioSettings::~UAudioSettings(UAudioSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAudioSettings__6B_;
  DestructItems<FDefaultAudioBusSettings,int>
            ((FDefaultAudioBusSettings *)(this->DefaultAudioBuses).AllocatorInstance.Data,
             (this->DefaultAudioBuses).ArrayNum);
  pFVar1 = (this->DefaultAudioBuses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoundDebugEntry,int>
            ((FSoundDebugEntry *)(this->DebugSounds).AllocatorInstance.Data,
             (this->DebugSounds).ArrayNum);
  pFVar1 = (this->DebugSounds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DialogueFilenameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAudioQualitySettings,int>
            ((FAudioQualitySettings *)(this->QualityLevels).AllocatorInstance.Data,
             (this->QualityLevels).ArrayNum);
  pFVar1 = (this->QualityLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EQSubmix).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReverbSubmix).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseDefaultSubmix).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MasterSubmix).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VoiPSoundClass).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultBaseSoundMix).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultSoundConcurrencyName).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultMediaSoundClassName).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultSoundClassName).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// AddDefaultSettings @ 147627400

void __thiscall UAudioSettings::AddDefaultSettings(UAudioSettings *this)

{
  int *piVar1;
  TArray<FAudioQualitySettings,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  FText local_38;
  FText local_28;
  undefined4 local_18;
  
  FText::FText(&local_28);
  local_18 = 0x20;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"AudioSettings",L"DefaultSettingsName",L"Default");
  FText::operator=(&local_28,pFVar7);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pTVar2 = &this->QualityLevels;
  pFVar7 = (FText *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar7 <= &local_28) &&
     (&local_28 < (FText *)((longlong)pFVar7 + (longlong)(this->QualityLevels).ArrayMax * 0x18))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QualityLevels).ArrayNum;
  piVar1 = &(this->QualityLevels).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar8 = (longlong)iVar6;
  (this->QualityLevels).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar8 * 0x18) = 0;
  *(ITextData **)(pFVar3 + lVar8 * 0x18) = local_28.TextData.Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  *(uint *)(pFVar3 + lVar8 * 0x18 + 8) = local_28.Flags;
  *(undefined4 *)(pFVar3 + lVar8 * 0x18 + 0x10) = local_18;
  this->bAllowPlayWhenSilent = 1;
  this->DefaultReverbSendLevel_DEPRECATED = 0.0;
  this->VoiPSampleRate = Low16000Hz;
  this->NumStoppingSources = 8;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// FindQualityNameByIndex @ 147639430

FString * __thiscall
UAudioSettings::FindQualityNameByIndex
          (UAudioSettings *this,FString *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  if ((param_1 < 0) || ((this->QualityLevels).ArrayNum <= param_1)) {
    pFVar4 = ::FString::FString(&local_18,L"");
    ::FString::FString(__return_storage_ptr__,pFVar4);
  }
  else {
    uVar3 = 0;
    if (param_1 < (this->QualityLevels).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = FText::ToString((FText *)((this->QualityLevels).AllocatorInstance.Data +
                                      (longlong)param_1 * 0x18));
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    lVar5 = (longlong)local_28.Data.ArrayNum;
    _Src = (pFVar4->Data).AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDefaultCompressionQuality @ 14763c360

int __thiscall UAudioSettings::GetDefaultCompressionQuality(UAudioSettings *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 100;
  if (this->DefaultCompressionQuality_DEPRECATED < 100) {
    iVar2 = this->DefaultCompressionQuality_DEPRECATED;
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// GetDefaultMediaSoundClass @ 14763c390

USoundClass * __thiscall UAudioSettings::GetDefaultMediaSoundClass(UAudioSettings *this)

{
  return (this->DefaultMediaSoundClass).field0_0x0.DebugPtr;
}

// GetDefaultSoundClass @ 14763c470

USoundClass * __thiscall UAudioSettings::GetDefaultSoundClass(UAudioSettings *this)

{
  return (this->DefaultSoundClass).field0_0x0.DebugPtr;
}

// GetDefaultSoundConcurrency @ 14763c480

USoundConcurrency * __thiscall UAudioSettings::GetDefaultSoundConcurrency(UAudioSettings *this)

{
  return (this->DefaultSoundConcurrency).field0_0x0.DebugPtr;
}

// GetHighestMaxChannels @ 14763d690

int __thiscall UAudioSettings::GetHighestMaxChannels(UAudioSettings *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((this->QualityLevels).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("QualityLevels.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioSettings.cpp"
                       ,0x137,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = (this->QualityLevels).ArrayNum;
  iVar5 = -1;
  pFVar6 = (this->QualityLevels).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->QualityLevels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FAudioQualitySettings_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (iVar5 < *(int *)(pFVar6 + 0x10)) {
      iVar5 = *(int *)(pFVar6 + 0x10);
    }
    pFVar6 = pFVar6 + 0x18;
  }
  return iVar5;
}

// GetPrivateStaticClass @ 14763f170

UClass * __cdecl UAudioSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioSettings",
               &Z_Registration_Info_UClass_UAudioSettings.InnerSingleton,
               StaticRegisterNativesUAudioSettings,0x1e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioSettings>,InternalVTableHelperCtorCaller<UAudioSettings>,
               local_res8,UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSettings.InnerSingleton;
}

// GetQualityLevelSettings @ 14763f340

FAudioQualitySettings * __thiscall
UAudioSettings::GetQualityLevelSettings(UAudioSettings *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FAudioQualitySettings *pFVar6;
  
  if ((this->QualityLevels).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("QualityLevels.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioSettings.cpp"
                       ,0xba,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FAudioQualitySettings *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar1 = (this->QualityLevels).ArrayNum;
  uVar5 = iVar1 - 1;
  if (param_1 < (int)uVar5) {
    uVar5 = param_1;
  }
  uVar3 = 0;
  if (0 < (int)uVar5) {
    uVar3 = uVar5;
  }
  uVar5 = 0;
  if ((int)uVar3 < iVar1) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FAudioQualitySettings *)(*pcVar2)();
      return pFVar6;
    }
  }
  return (FAudioQualitySettings *)
         ((this->QualityLevels).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18);
}

// GetQualityLevelSettingsNum @ 14763f400

int __thiscall UAudioSettings::GetQualityLevelSettingsNum(UAudioSettings *this)

{
  return (this->QualityLevels).ArrayNum;
}

// LoadDefaultObjects @ 147649b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UAudioSettings::LoadDefaultObjects(UAudioSettings *this)

{
  ForAnyElementType _Src;
  int iVar1;
  int iVar2;
  FUObjectItem *pFVar3;
  UObject *pUVar4;
  USoundClass *pUVar5;
  USoundConcurrency *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  uint uVar11;
  wchar_t *pwVar12;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  if (3 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&EngineSoundsDir,L"/Engine/EngineSounds");
    atexit(`UAudioSettings::LoadDefaultObjects'::__l2::
           _dynamic_atexit_destructor_for__EngineSoundsDir__);
    _Init_thread_footer(&::_TSS0);
  }
  pUVar5 = (this->DefaultSoundClass).field0_0x0.DebugPtr;
  if (pUVar5 != (USoundClass *)0x0) {
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4))
    ;
    FUObjectItem::ClearRootFlags(pFVar3,RootSet);
    (this->DefaultSoundClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  }
  pUVar4 = FSoftObjectPath::TryLoad(&this->DefaultSoundClassName,(FUObjectSerializeContext *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = CastChecked<USoundClass,UObject>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USoundClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->DefaultSoundClass).field0_0x0.DebugPtr = pUVar5;
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4))
    ;
    FUObjectItem::SetRootFlags(pFVar3,RootSet);
  }
  pwVar12 = L"";
  iVar2 = 0;
  if ((this->DefaultSoundClass).field0_0x0.DebugPtr == (USoundClass *)0x0) {
    if (2 < (byte)LogAudio._0_1_) {
      if ((this->DefaultSoundClassName).AssetPath.PackageName == (FName)0x0) {
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
      }
      else {
        FTopLevelAssetPath::ToString(&(this->DefaultSoundClassName).AssetPath,&local_38);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    iVar1 = EngineSoundsDir.Data.ArrayNum;
    _Src.Data = EngineSoundsDir.Data.AllocatorInstance.Data;
    lVar10 = (longlong)EngineSoundsDir.Data.ArrayNum;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = EngineSoundsDir.Data.ArrayNum;
    uVar11 = (8 - (uint)(EngineSoundsDir.Data.ArrayNum != 0)) + EngineSoundsDir.Data.ArrayNum;
    if ((int)uVar11 < EngineSoundsDir.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar11,0,(ForAnyElementType *)&local_38,EngineSoundsDir.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,lVar10 * 2);
    }
    ::FString::PathAppend(&local_38,L"Master",6);
    if (local_38.Data.ArrayNum != 0) {
      iVar2 = local_38.Data.ArrayNum + -1;
    }
    local_28.Size = iVar2;
    local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&this->DefaultSoundClassName,&local_28);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pUVar4 = FSoftObjectPath::TryLoad(&this->DefaultSoundClassName,(FUObjectSerializeContext *)0x0);
    if (pUVar4 != (UObject *)0x0) {
      pUVar5 = CastChecked<USoundClass,UObject>(pUVar4);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USoundClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->DefaultSoundClass).field0_0x0.DebugPtr = pUVar5;
      pFVar3 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4));
      FUObjectItem::ThisThreadAtomicallySetFlag(pFVar3,RootSet);
    }
    if (((this->DefaultSoundClass).field0_0x0.DebugPtr == (USoundClass *)0x0) &&
       (1 < (byte)LogAudio._0_1_)) {
      if ((this->DefaultSoundClassName).AssetPath.PackageName == (FName)0x0) {
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
      }
      else {
        FTopLevelAssetPath::ToString(&(this->DefaultSoundClassName).AssetPath,&local_38);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  pUVar5 = (this->DefaultMediaSoundClass).field0_0x0.DebugPtr;
  if (pUVar5 != (USoundClass *)0x0) {
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4))
    ;
    FUObjectItem::ClearRootFlags(pFVar3,RootSet);
    (this->DefaultMediaSoundClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  }
  pUVar4 = FSoftObjectPath::TryLoad
                     (&this->DefaultMediaSoundClassName,(FUObjectSerializeContext *)0x0);
  if (pUVar4 == (UObject *)0x0) {
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  else {
    pUVar5 = CastChecked<USoundClass,UObject>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USoundClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->DefaultMediaSoundClass).field0_0x0.DebugPtr = pUVar5;
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4))
    ;
    FUObjectItem::ThisThreadAtomicallySetFlag(pFVar3,RootSet);
  }
  pUVar6 = (this->DefaultSoundConcurrency).field0_0x0.DebugPtr;
  if (pUVar6 != (USoundConcurrency *)0x0) {
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4))
    ;
    FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar3,RootSet);
    (this->DefaultSoundConcurrency).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  }
  pUVar6 = (USoundConcurrency *)
           FSoftObjectPath::TryLoad
                     (&this->DefaultSoundConcurrencyName,(FUObjectSerializeContext *)0x0);
  if (pUVar6 == (USoundConcurrency *)0x0) {
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_USoundConcurrency_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar7->_padding_)) {
      pFVar8 = GetTypeName<USoundConcurrency>((FString *)&local_28);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UObject>(&local_38,(UObject *)pUVar6);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar12,pwVar9);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->DefaultSoundConcurrency).field0_0x0.DebugPtr = pUVar6;
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4))
    ;
    FUObjectItem::SetRootFlags(pFVar3,RootSet);
  }
  return;
}

// RegisterParameterInterfaces @ 14764fab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioSettings::RegisterParameterInterfaces(UAudioSettings *this)

{
  code *pcVar1;
  IAudioParameterInterfaceRegistry *pIVar2;
  TSharedPtr<Audio::FParameterInterface,1> *pTVar3;
  TSharedPtr<Audio::FParameterInterface,1> local_18;
  
  if (this->bParameterInterfacesRegistered == false) {
    if (3 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    this->bParameterInterfacesRegistered = true;
    pIVar2 = Audio::IAudioParameterInterfaceRegistry::Get();
    pcVar1 = *(code **)(pIVar2->_padding_ + 0x18);
    pTVar3 = Audio::AttenuationInterface::GetInterface(&local_18);
    (*pcVar1)(pIVar2,pTVar3);
    pcVar1 = *(code **)(pIVar2->_padding_ + 0x18);
    pTVar3 = Audio::SpatializationInterface::GetInterface(&local_18);
    (*pcVar1)(pIVar2,pTVar3);
    pcVar1 = *(code **)(pIVar2->_padding_ + 0x18);
    pTVar3 = Audio::SourceOrientationInterface::GetInterface(&local_18);
    (*pcVar1)(pIVar2,pTVar3);
    pcVar1 = *(code **)(pIVar2->_padding_ + 0x18);
    pTVar3 = Audio::ListenerOrientationInterface::GetInterface(&local_18);
    (*pcVar1)(pIVar2,pTVar3);
  }
  return;
}

// StaticRegisterNativesUAudioSettings @ 147664610

void __cdecl UAudioSettings::StaticRegisterNativesUAudioSettings(void)

{
  return;
}

