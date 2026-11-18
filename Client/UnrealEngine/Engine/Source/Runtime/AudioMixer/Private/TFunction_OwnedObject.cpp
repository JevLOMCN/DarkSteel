// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 449

// CloneToEmptyStorage @ 1464f0b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f0b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f0bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f0c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  ::Audio::FPatchInput::FPatchInput
            ((FPatchInput *)(puVar1 + 3),(FPatchInput *)((longlong)this + 0x18));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f0c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f0d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f0d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)this + 0x28);
  *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)((longlong)this + 0x2c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)((longlong)this + 0x30);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f0db0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x330,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::`2'::<lambda_1>,0,1>::
             _vftable_;
  `Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f0e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f0e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f0e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f0ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f0f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f0f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f0f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f0fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f0fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)this + 0x10);
  *(undefined1 *)((longlong)puVar1 + 0x14) = *(undefined1 *)((longlong)this + 0x14);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)((longlong)this + 0x1c);
  ::FString::FString((FString *)(puVar1 + 4),(FString *)((longlong)this + 0x20));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f1110

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  `Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f1170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f11b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f11d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  `Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f1230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f12b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x58,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)this + 0x10);
  ::Audio::FModulationDestination::FModulationDestination
            ((FModulationDestination *)(puVar1 + 3),
             (FModulationDestination *)((longlong)this + 0x18));
  ::Audio::FModulationDestination::FModulationDestination
            ((FModulationDestination *)(puVar1 + 5),
             (FModulationDestination *)((longlong)this + 0x28));
  ::Audio::FModulationDestination::FModulationDestination
            ((FModulationDestination *)(puVar1 + 7),
             (FModulationDestination *)((longlong)this + 0x38));
  ::Audio::FModulationDestination::FModulationDestination
            ((FModulationDestination *)(puVar1 + 9),
             (FModulationDestination *)((longlong)this + 0x48));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f1340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f13e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar4 = FMemory::Malloc(0x120,0x10);
  param_1->HeapAllocation = puVar4;
  lVar7 = 2;
  *puVar4 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2 = (undefined8 *)((longlong)this + 0x10);
  puVar3 = puVar4 + 2;
  do {
    puVar6 = puVar3;
    puVar5 = puVar2;
    uVar1 = puVar5[1];
    *puVar6 = *puVar5;
    puVar6[1] = uVar1;
    uVar1 = puVar5[3];
    puVar6[2] = puVar5[2];
    puVar6[3] = uVar1;
    uVar1 = puVar5[5];
    puVar6[4] = puVar5[4];
    puVar6[5] = uVar1;
    uVar1 = puVar5[7];
    puVar6[6] = puVar5[6];
    puVar6[7] = uVar1;
    uVar1 = puVar5[9];
    puVar6[8] = puVar5[8];
    puVar6[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar6[10] = puVar5[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar6[0xc] = puVar5[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar6[0xe] = puVar5[0xe];
    puVar6[0xf] = uVar1;
    lVar7 = lVar7 + -1;
    puVar2 = puVar5 + 0x10;
    puVar3 = puVar6 + 0x10;
  } while (lVar7 != 0);
  uVar1 = puVar5[0x11];
  puVar6[0x10] = puVar5[0x10];
  puVar6[0x11] = uVar1;
  return puVar4 + 2;
}

// CloneToEmptyStorage @ 1464f1490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)this + 0x28);
  *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)((longlong)this + 0x2c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)((longlong)this + 0x30);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f1520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined1 *)((longlong)puVar1 + 0x1c) = *(undefined1 *)((longlong)this + 0x1c);
  ::FString::FString((FString *)(puVar1 + 4),(FString *)((longlong)this + 0x20));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f15b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f15f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f16d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSourceEffectChain'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1770

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  `Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f17d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = 8;
  puVar2 = FMemory::Malloc(0x408,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar3 = (undefined8 *)((longlong)this + 8);
  puVar4 = puVar2 + 1;
  do {
    uVar1 = puVar3[1];
    *puVar4 = *puVar3;
    puVar4[1] = uVar1;
    uVar1 = puVar3[3];
    puVar4[2] = puVar3[2];
    puVar4[3] = uVar1;
    uVar1 = puVar3[5];
    puVar4[4] = puVar3[4];
    puVar4[5] = uVar1;
    uVar1 = puVar3[7];
    puVar4[6] = puVar3[6];
    puVar4[7] = uVar1;
    uVar1 = puVar3[9];
    puVar4[8] = puVar3[8];
    puVar4[9] = uVar1;
    uVar1 = puVar3[0xb];
    puVar4[10] = puVar3[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar3[0xd];
    puVar4[0xc] = puVar3[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar3[0xf];
    puVar4[0xe] = puVar3[0xe];
    puVar4[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 0x10;
    puVar4 = puVar4 + 0x10;
  } while (lVar5 != 0);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f1880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f18c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::`5'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f1980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f19e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::`5'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f1a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::PauseRecording'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::`5'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f1c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f1c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f1d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ResumeRecording'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  `Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f1e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartEnvelopeFollowing'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f1ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartRecording'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSpectrumAnalysis'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f20b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopEnvelopeFollowing'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f20f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSpectrumAnalysis'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f21b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l8::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f21f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l8::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l8::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSoundSubmix'::__l8::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f22b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::__l10::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::`10'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  ::Audio::FPatchInput::FPatchInput
            ((FPatchInput *)(puVar1 + 3),(FPatchInput *)((longlong)this + 0x18));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f2320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::__l10::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::`10'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f2390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::__l25::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::`25'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f2410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  FReadAccessScope local_28;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::`25'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f24a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSoundSubmix'::__l29::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f24e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateHardware'::__l46::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::__l47::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::__l47::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f25a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::__l51::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::`51'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f25c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::InitSoundSubmixes'::__l74::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l8::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::`8'::<lambda_2>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f26b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l8::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::`8'::<lambda_2>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f2710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l8::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::`8'::<lambda_2>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f2770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l8::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::`8'::<lambda_2>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)this + 0x1c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)this + 0x20);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f27e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l8::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::`8'::<lambda_2>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f2840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l8::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::`8'::<lambda_2>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)this + 0x1c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)this + 0x20);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f28b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l8::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::`8'::<lambda_2>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1464f2910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l13::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::`13'::<lambda_2>,0,1>::
             _vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  ::FString::FString((FString *)(puVar1 + 3),(FString *)((longlong)this + 0x18));
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((longlong)this + 0x28);
  *(undefined1 *)((longlong)puVar1 + 0x2c) = *(undefined1 *)((longlong)this + 0x2c);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1464f2980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l13::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::`13'::<lambda_2>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464f29a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l14::<lambda_2>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f29e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l14::<lambda_2>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1464f2a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l2::<lambda_3>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 1464f9b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464f9fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464f9fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464f9fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa0e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa0e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa0f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSourceEffectChain'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa1b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa1e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa240

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa2a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa2d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::PauseRecording'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa2e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa3a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa3d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ResumeRecording'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa3d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa3e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa470

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa4a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa4d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartEnvelopeFollowing'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa5a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartRecording'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa5d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSpectrumAnalysis'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopEnvelopeFollowing'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSpectrumAnalysis'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l8::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l8::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa6d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l8::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSoundSubmix'::__l8::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::__l10::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::__l10::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::__l25::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa7c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa7f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSoundSubmix'::__l29::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateHardware'::__l46::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::__l47::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::__l47::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::__l51::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::InitSoundSubmixes'::__l74::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fa8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464fa8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l8::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l8::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l8::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l8::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l8::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464fa9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l8::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464faa00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l8::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464faa30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l13::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464faa60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l13::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464faa65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464faa70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l14::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464faaa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l14::<lambda_2>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1464faad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l2::<lambda_3>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 146500360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465003a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465003b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465003c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465003d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465003e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465003f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465004a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465004b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465004c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465004d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465004e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465004f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 146500580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465005a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465005b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465005c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465005d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465005e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465005f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSourceEffectChain'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465006a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465006b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465006c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465006d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465006e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465006f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::PauseRecording'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ResumeRecording'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465007a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465007b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465007c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465007d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465007e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465007f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartEnvelopeFollowing'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartRecording'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSpectrumAnalysis'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopEnvelopeFollowing'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSpectrumAnalysis'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l8::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l8::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l8::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465008a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSoundSubmix'::__l8::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465008b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::__l10::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465008c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::__l10::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465008d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::__l25::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465008e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465008f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSoundSubmix'::__l29::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateHardware'::__l46::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::__l47::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::__l47::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::__l51::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::InitSoundSubmixes'::__l74::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l8::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l8::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l8::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l8::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465009a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l8::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465009b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l8::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465009c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l8::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465009d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l13::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465009e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l13::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1465009f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l14::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l14::<lambda_2>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146500a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l2::<lambda_3>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0> @ 14653f690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectDynamicsProcessor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0> @ 14653f6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXPEAVFQuartzClock_Audio___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 146549cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectDynamicsProcessor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FSubmixEffectDynamicsProcessor_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146549cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXPEAVFQuartzClock_Audio___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FQuartzClock_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146549cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectDynamicsProcessor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDynamicsProcessor___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 146549d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 146549db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 146549df0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 146549e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar4;
  *(undefined1 *)(puVar4 + 2) = 0;
  *puVar4 = &TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::`2'::<lambda_1>,0,1>::
             _vftable_;
  cVar1 = *(char *)((longlong)this + 0x10);
  *(char *)(puVar4 + 2) = cVar1;
  if (cVar1 != '\0') {
    puVar4[1] = *(undefined8 *)((longlong)this + 8);
  }
  *(undefined1 *)(puVar4 + 5) = 0;
  cVar1 = *(char *)((longlong)this + 0x28);
  *(char *)(puVar4 + 5) = cVar1;
  if (cVar1 != '\0') {
    uVar3 = *(undefined8 *)((longlong)this + 0x20);
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = uVar3;
  }
  puVar4[6] = *(undefined8 *)((longlong)this + 0x30);
  lVar2 = *(longlong *)((longlong)this + 0x38);
  puVar4[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar4 + 8) = *(undefined1 *)((longlong)this + 0x40);
  *(undefined1 *)((longlong)puVar4 + 0x41) = *(undefined1 *)((longlong)this + 0x41);
  *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)((longlong)this + 0x44);
  return puVar4 + 1;
}

// CloneToEmptyStorage @ 146549f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x60,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  ::Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData
            ((FQuartzQuantizedRequestData *)(puVar1 + 1),
             (FQuartzQuantizedRequestData *)((longlong)this + 8));
  return (FQuartzQuantizedRequestData *)(puVar1 + 1);
}

// CloneToEmptyStorage @ 146549f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x60,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::`2'::<lambda_1>,0,1>::
             _vftable_;
  ::Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData
            ((FQuartzQuantizedRequestData *)(puVar1 + 1),
             (FQuartzQuantizedRequestData *)((longlong)this + 8));
  return (FQuartzQuantizedRequestData *)(puVar1 + 1);
}

// CloneToEmptyStorage @ 146549fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  ::Audio::FPatchInput::FPatchInput
            ((FPatchInput *)(puVar1 + 3),(FPatchInput *)((longlong)this + 0x18));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14654a030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14654a050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x60,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::`2'::<lambda_1>,0,1>::
             _vftable_;
  ::Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData
            ((FQuartzQuantizedRequestData *)(puVar1 + 1),
             (FQuartzQuantizedRequestData *)((longlong)this + 8));
  return (FQuartzQuantizedRequestData *)(puVar1 + 1);
}

// CloneToEmptyStorage @ 14654a0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x60,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  ::Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData
            ((FQuartzQuantizedRequestData *)(puVar1 + 1),
             (FQuartzQuantizedRequestData *)((longlong)this + 8));
  return (FQuartzQuantizedRequestData *)(puVar1 + 1);
}

// CloneToEmptyStorage @ 14654a110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14654a130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14654a150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x60,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::`2'::<lambda_1>,0,1>::
             _vftable_;
  ::Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData
            ((FQuartzQuantizedRequestData *)(puVar1 + 1),
             (FQuartzQuantizedRequestData *)((longlong)this + 8));
  return (FQuartzQuantizedRequestData *)(puVar1 + 1);
}

// CloneToEmptyStorage @ 14654a1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x60,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::`2'::<lambda_1>,0,1>::
             _vftable_;
  ::Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData
            ((FQuartzQuantizedRequestData *)(puVar1 + 1),
             (FQuartzQuantizedRequestData *)((longlong)this + 8));
  return (FQuartzQuantizedRequestData *)(puVar1 + 1);
}

// CloneToEmptyStorage @ 14654a210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::`2'::<lambda_1>,0,0>::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14654a230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar4;
  *(undefined1 *)(puVar4 + 2) = 0;
  *puVar4 = &TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  cVar1 = *(char *)((longlong)this + 0x10);
  *(char *)(puVar4 + 2) = cVar1;
  if (cVar1 != '\0') {
    puVar4[1] = *(undefined8 *)((longlong)this + 8);
  }
  *(undefined1 *)(puVar4 + 5) = 0;
  cVar1 = *(char *)((longlong)this + 0x28);
  *(char *)(puVar4 + 5) = cVar1;
  if (cVar1 != '\0') {
    uVar3 = *(undefined8 *)((longlong)this + 0x20);
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = uVar3;
  }
  puVar4[6] = *(undefined8 *)((longlong)this + 0x30);
  lVar2 = *(longlong *)((longlong)this + 0x38);
  puVar4[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar4 + 8) = *(undefined1 *)((longlong)this + 0x40);
  *(undefined1 *)((longlong)puVar4 + 0x41) = *(undefined1 *)((longlong)this + 0x41);
  *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)((longlong)this + 0x44);
  return puVar4 + 1;
}

// CloneToEmptyStorage @ 14654a2d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = FMemory::Malloc(0x50,8);
  param_1->HeapAllocation = puVar4;
  *(undefined1 *)(puVar4 + 2) = 0;
  *puVar4 = &TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  cVar1 = *(char *)((longlong)this + 0x10);
  *(char *)(puVar4 + 2) = cVar1;
  if (cVar1 != '\0') {
    puVar4[1] = *(undefined8 *)((longlong)this + 8);
  }
  *(undefined1 *)(puVar4 + 5) = 0;
  cVar1 = *(char *)((longlong)this + 0x28);
  *(char *)(puVar4 + 5) = cVar1;
  if (cVar1 != '\0') {
    uVar3 = *(undefined8 *)((longlong)this + 0x20);
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = uVar3;
  }
  puVar4[6] = *(undefined8 *)((longlong)this + 0x30);
  lVar2 = *(longlong *)((longlong)this + 0x38);
  puVar4[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar4 + 8) = *(undefined1 *)((longlong)this + 0x40);
  *(undefined1 *)((longlong)puVar4 + 0x41) = *(undefined1 *)((longlong)this + 0x41);
  *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)((longlong)this + 0x44);
  *(undefined1 *)(puVar4 + 9) = *(undefined1 *)((longlong)this + 0x48);
  return puVar4 + 1;
}

// CloneToEmptyStorage @ 14654a380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14654a3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar4;
  *(undefined1 *)(puVar4 + 2) = 0;
  *puVar4 = &TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  cVar1 = *(char *)((longlong)this + 0x10);
  *(char *)(puVar4 + 2) = cVar1;
  if (cVar1 != '\0') {
    puVar4[1] = *(undefined8 *)((longlong)this + 8);
  }
  *(undefined1 *)(puVar4 + 5) = 0;
  cVar1 = *(char *)((longlong)this + 0x28);
  *(char *)(puVar4 + 5) = cVar1;
  if (cVar1 != '\0') {
    uVar3 = *(undefined8 *)((longlong)this + 0x20);
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = uVar3;
  }
  puVar4[6] = *(undefined8 *)((longlong)this + 0x30);
  lVar2 = *(longlong *)((longlong)this + 0x38);
  puVar4[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar4 + 8) = *(undefined1 *)((longlong)this + 0x40);
  *(undefined1 *)((longlong)puVar4 + 0x41) = *(undefined1 *)((longlong)this + 0x41);
  *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)((longlong)this + 0x44);
  return puVar4 + 1;
}

// CloneToEmptyStorage @ 14654a440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = FMemory::Malloc(0x50,8);
  param_1->HeapAllocation = puVar4;
  *(undefined1 *)(puVar4 + 2) = 0;
  *puVar4 = &TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  cVar1 = *(char *)((longlong)this + 0x10);
  *(char *)(puVar4 + 2) = cVar1;
  if (cVar1 != '\0') {
    puVar4[1] = *(undefined8 *)((longlong)this + 8);
  }
  *(undefined1 *)(puVar4 + 5) = 0;
  cVar1 = *(char *)((longlong)this + 0x28);
  *(char *)(puVar4 + 5) = cVar1;
  if (cVar1 != '\0') {
    uVar3 = *(undefined8 *)((longlong)this + 0x20);
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = uVar3;
  }
  puVar4[6] = *(undefined8 *)((longlong)this + 0x30);
  lVar2 = *(longlong *)((longlong)this + 0x38);
  puVar4[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar4 + 8) = *(undefined1 *)((longlong)this + 0x40);
  *(undefined1 *)((longlong)puVar4 + 0x41) = *(undefined1 *)((longlong)this + 0x41);
  *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)((longlong)this + 0x44);
  *(undefined1 *)(puVar4 + 9) = *(undefined1 *)((longlong)this + 0x48);
  return puVar4 + 1;
}

// CloneToEmptyStorage @ 14654a4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::`5'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14654a510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::`5'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14654a530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::`5'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14654a550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14654a5d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14654a630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14654a6a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::`5'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14654a700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14654a770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14654a7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14654a860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14654a8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l8::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::`8'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14654a950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14654a990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::__l17::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::`17'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14654aa00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::__l19::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::`19'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14654aa20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x100,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::`11'::<lambda_1>,0,1>::
             _vftable_;
  `Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14654aa80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l2::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::`2'::<lambda_2>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// Destroy @ 146551a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 146551a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 146551a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l8::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::__l17::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::__l19::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146551f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146551f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146551fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l2::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 146554e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 146554e30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(Audio::FQuartzClock_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 146554e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 146554e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 146554e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 146554fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146554ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l8::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzMetronome::FireEvents'::__l17::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::__l19::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146555090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::__l2::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 146585f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  `Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// Destroy @ 146585ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1465861d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

