// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FAudioDeviceContainer @ 14761c070

FAudioDeviceContainer * __thiscall
FAudioDeviceManager::FAudioDeviceContainer::FAudioDeviceContainer(FAudioDeviceContainer *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceContainer *pFVar3;
  
  (this->WorldsUsingThisDevice).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldsUsingThisDevice).ArrayNum = 0;
  (this->WorldsUsingThisDevice).ArrayMax = 0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                     ,0x64d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAudioDeviceContainer *)(*pcVar1)();
    return pFVar3;
  }
  return this;
}

// FAudioDeviceContainer @ 14761c0c0

FAudioDeviceContainer * __thiscall
FAudioDeviceManager::FAudioDeviceContainer::FAudioDeviceContainer
          (FAudioDeviceContainer *this,FAudioDeviceContainer *param_1)

{
  TArray<UWorld_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UWorld_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &this->WorldsUsingThisDevice;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar2 = &param_1->WorldsUsingThisDevice;
  (this->WorldsUsingThisDevice).ArrayNum = 0;
  (this->WorldsUsingThisDevice).ArrayMax = 0;
  this->Device = param_1->Device;
  param_1->Device = (FAudioDevice *)0x0;
  this->NumberOfHandlesToThisDevice = param_1->NumberOfHandlesToThisDevice;
  param_1->NumberOfHandlesToThisDevice = 0;
  if (pTVar1 != pTVar2) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorldsUsingThisDevice).ArrayNum = (param_1->WorldsUsingThisDevice).ArrayNum;
    (this->WorldsUsingThisDevice).ArrayMax = (param_1->WorldsUsingThisDevice).ArrayMax;
    (param_1->WorldsUsingThisDevice).ArrayNum = 0;
    (param_1->WorldsUsingThisDevice).ArrayMax = 0;
  }
  this->Scope = param_1->Scope;
  param_1->Scope = Default;
  this->bIsNonRealtime = param_1->bIsNonRealtime;
  param_1->bIsNonRealtime = false;
  this->SpecifiedModule = param_1->SpecifiedModule;
  param_1->SpecifiedModule = (IAudioDeviceModule *)0x0;
  return this;
}

// FAudioDeviceContainer @ 14761c180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceContainer * __thiscall
FAudioDeviceManager::FAudioDeviceContainer::FAudioDeviceContainer
          (FAudioDeviceContainer *this,FAudioDeviceParams *param_1,uint param_2,
          FAudioDeviceManager *param_3)

{
  longlong lVar1;
  int iVar2;
  IAudioDeviceModule *pIVar3;
  FName FVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FModuleManager *this_00;
  IModuleInterface *pIVar10;
  FAudioDeviceContainer *pFVar11;
  FMixerDevice *pFVar12;
  FAudioDevice *pFVar13;
  FMixerDevice *this_01;
  IAudioMixerPlatformInterface *pIVar14;
  UClass *pUVar15;
  UGameUserSettings *pUVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  FName local_res10;
  uint local_res18;
  
  pFVar12 = (FMixerDevice *)0x0;
  (this->WorldsUsingThisDevice).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldsUsingThisDevice).ArrayNum = 0;
  (this->WorldsUsingThisDevice).ArrayMax = 0;
  this->NumberOfHandlesToThisDevice = 0;
  this->Scope = param_1->Scope;
  bVar7 = param_1->bIsNonRealtime;
  this->bIsNonRealtime = bVar7;
  pIVar3 = param_1->AudioModule;
  this->SpecifiedModule = pIVar3;
  local_res18 = param_2;
  if (bVar7 == false) {
    if (pIVar3 == (IAudioDeviceModule *)0x0) {
      if ((param_3->AudioDeviceModule == (IAudioDeviceModule *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("DeviceManager->AudioDeviceModule",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                             ,0x62d,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FAudioDeviceContainer *)(*pcVar6)();
        return pFVar11;
      }
      pFVar13 = (FAudioDevice *)(**(code **)((longlong)*param_3->AudioDeviceModule + 0x50))();
      this->Device = pFVar13;
      if (pFVar13 != (FAudioDevice *)0x0) goto LAB_14761c2df;
      this_01 = ::operator_new(0xec0);
      if (this_01 != (FMixerDevice *)0x0) {
        pIVar14 = (IAudioMixerPlatformInterface *)
                  (**(code **)((longlong)*param_3->AudioDeviceModule + 0x58))();
        pFVar12 = Audio::FMixerDevice::FMixerDevice(this_01,pIVar14);
      }
    }
    else {
      pFVar12 = (FMixerDevice *)(**(code **)((longlong)*pIVar3 + 0x50))();
    }
  }
  else {
    pFVar9 = ::FName::FName(&local_res10,L"NonRealtimeAudioRenderer");
    FVar4 = *pFVar9;
    this_00 = FModuleManager::Get();
    pIVar10 = FModuleManager::LoadModule(this_00,FVar4,None);
    if ((pIVar10 == (IModuleInterface *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NonRealtimeModule",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                           ,0x624,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FAudioDeviceContainer *)(*pcVar6)();
      return pFVar11;
    }
    pFVar12 = (FMixerDevice *)(**(code **)((longlong)*pIVar10 + 0x50))(pIVar10);
  }
  this->Device = (FAudioDevice *)pFVar12;
  if ((pFVar12 == (FMixerDevice *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Device",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                         ,0x636,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FAudioDeviceContainer *)(*pcVar6)();
    return pFVar11;
  }
LAB_14761c2df:
  pUVar15 = UAudioSettings::StaticClass();
  if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar15);
  }
  pUVar5 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((*(int *)&pUVar5[9].field_0x18 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("QualityLevels.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioSettings.cpp"
                         ,0x137,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FAudioDeviceContainer *)(*pcVar6)();
    return pFVar11;
  }
  iVar2 = *(int *)&pUVar5[9].field_0x18;
  iVar17 = -1;
  lVar19 = *(longlong *)&pUVar5[9].field_0x10;
  lVar1 = lVar19 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (*(int *)&pUVar5[9].field_0x18 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAudioQualitySettings_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar19 == lVar1) break;
    if (iVar17 < *(int *)(lVar19 + 0x10)) {
      iVar17 = *(int *)(lVar19 + 0x10);
    }
    lVar19 = lVar19 + 0x18;
  }
  bVar7 = FAudioDevice::Init(this->Device,local_res18,iVar17,param_1->BufferSizeOverride,
                             param_1->NumBuffersOverride);
  if (bVar7) {
    pUVar15 = UAudioSettings::StaticClass();
    if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar15);
    }
    pUVar5 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
    uVar18 = 0;
    if (GEngine != (UEngine *)0x0) {
      pUVar16 = UEngine::GetGameUserSettings(GEngine);
      uVar18 = pUVar16->AudioQualityLevel;
    }
    if ((*(int *)&pUVar5[9].field_0x18 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("QualityLevels.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioSettings.cpp"
                           ,0xba,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FAudioDeviceContainer *)(*pcVar6)();
      return pFVar11;
    }
    uVar8 = *(int *)&pUVar5[9].field_0x18 - 1;
    if ((int)uVar18 < (int)uVar8) {
      uVar8 = uVar18;
    }
    uVar18 = 0;
    if (0 < (int)uVar8) {
      uVar18 = uVar8;
    }
    uVar8 = 0;
    if ((int)uVar18 < *(int *)&pUVar5[9].field_0x18) {
      uVar8 = ~uVar18 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FAudioDeviceContainer *)(*pcVar6)();
      return pFVar11;
    }
    FAudioDevice::SetMaxChannels
              (this->Device,
               *(int *)(*(longlong *)&pUVar5[9].field_0x10 + 0x10 + (longlong)(int)uVar18 * 0x18));
    (**(code **)(this->Device->_padding_ + 0x48))();
  }
  else {
    if (2 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    FAudioDevice::Teardown(this->Device);
    pFVar13 = this->Device;
    if (pFVar13 != (FAudioDevice *)0x0) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
    this->Device = (FAudioDevice *)0x0;
  }
  return this;
}

// ~FAudioDeviceContainer @ 147620d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioDeviceManager::FAudioDeviceContainer::~FAudioDeviceContainer(FAudioDeviceContainer *this)

{
  FAudioDevice *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if ((this->NumberOfHandlesToThisDevice != 0) && (3 < (byte)LogAudio._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  if (this->Device != (FAudioDevice *)0x0) {
    (**(code **)(this->Device->_padding_ + 0x40))();
    FAudioDevice::Teardown(this->Device);
    pFVar1 = this->Device;
    if (pFVar1 != (FAudioDevice *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    this->Device = (FAudioDevice *)0x0;
  }
  pFVar2 = (this->WorldsUsingThisDevice).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

