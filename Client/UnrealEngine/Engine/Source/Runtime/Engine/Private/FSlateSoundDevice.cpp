// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetSoundDuration @ 1486c7dd0

float __thiscall FSlateSoundDevice::GetSoundDuration(FSlateSoundDevice *this,FSlateSound *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = FSlateSound::GetResourceObject(param_1);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = USoundBase::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return *(float *)&pUVar2[6].field_0x1c;
    }
  }
  return 0.0;
}

// PlaySound @ 1486dfab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSlateSoundDevice::PlaySound(FSlateSoundDevice *this,FSlateSound *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  USoundBase *pUVar5;
  UClass *pUVar6;
  USoundBase *pUVar7;
  undefined1 auStack_9f8 [32];
  FName local_9d8;
  FString local_9d0;
  FAudioDeviceHandle local_9c0;
  FActiveSound local_9a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_9f8;
  if (GEngine == (UEngine *)0x0) {
    return;
  }
  pUVar4 = FSlateSound::GetResourceObject(param_1);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  UEngine::GetActiveAudioDevice(GEngine,&local_9c0);
  bVar3 = FAudioDeviceHandle::IsValid(&local_9c0);
  if (!bVar3) goto LAB_1486dfc55;
  pUVar5 = (USoundBase *)FSlateSound::GetResourceObject(param_1);
  if (pUVar5 == (USoundBase *)0x0) {
LAB_1486dfb57:
    pUVar7 = (USoundBase *)0x0;
  }
  else {
    pUVar6 = USoundBase::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       (pUVar7 = pUVar5,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar6->_padding_)) goto LAB_1486dfb57;
  }
  if (pUVar7 == (USoundBase *)0x0) {
    if ((pUVar5 != (USoundBase *)0x0) && (1 < (byte)LogSlateSoundDevice._0_1_)) {
      local_9d8 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_9d8,&local_9d0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlateSoundDevice);
      if (local_9d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9d0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FActiveSound::FActiveSound(&local_9a8);
    FActiveSound::SetSound(&local_9a8,pUVar7);
    local_9a8.Priority = pUVar7->Priority;
    local_9a8.bIsUISound = '\x01';
    local_9a8.UserIndex = (uchar)param_2;
    bVar3 = FAudioDeviceHandle::IsValid(&local_9c0);
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FAudioDevice::AddNewActiveSound
              (local_9c0.Device,&local_9a8,
               (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)0x0,
               &Audio::Trace::EventLog::ID::PlayRequestSlateSound);
    FActiveSound::~FActiveSound(&local_9a8);
  }
LAB_1486dfc55:
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_9c0);
  return;
}

// ~FSlateSoundDevice @ 148b1eda0

void __thiscall FSlateSoundDevice::~FSlateSoundDevice(FSlateSoundDevice *this)

{
  *this = (FSlateSoundDevice)&___7ISlateSoundDevice__6B_;
  return;
}

