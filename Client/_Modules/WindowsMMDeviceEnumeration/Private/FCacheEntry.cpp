// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMMDeviceEnumeration
// Functions: 6

// FCacheEntry @ 148d2f620

FCacheEntry * __thiscall
Audio::FWindowsMMDeviceCache::FCacheEntry::FCacheEntry(FCacheEntry *this,FCacheEntry *param_1)

{
  this->State = NotPresent;
  this->NumChannels = 0;
  (this->DeviceId).ComparisonIndex = 0;
  (this->DeviceId).Number = 0;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  (this->DeviceFriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceFriendlyName).Data.ArrayNum = 0;
  (this->DeviceFriendlyName).Data.ArrayMax = 0;
  this->SampleRate = 0;
  this->Type = Unknown;
  this->ChannelBitmask = 0;
  (this->HardwareId).ComparisonIndex = 0;
  (this->HardwareId).Number = 0;
  (this->FilterId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterId).Data.ArrayNum = 0;
  (this->FilterId).Data.ArrayMax = 0;
  (this->OutputChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputChannels).ArrayNum = 0;
  (this->OutputChannels).ArrayMax = 0;
  (this->MutationLock).Mutex.Mutex.Ptr = (void *)0x0;
  operator=(this,param_1);
  return this;
}

// FCacheEntry @ 148d2f680

FCacheEntry * __thiscall
Audio::FWindowsMMDeviceCache::FCacheEntry::FCacheEntry(FCacheEntry *this,FCacheEntry *param_1)

{
  this->State = NotPresent;
  this->NumChannels = 0;
  (this->DeviceId).ComparisonIndex = 0;
  (this->DeviceId).Number = 0;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  (this->DeviceFriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceFriendlyName).Data.ArrayNum = 0;
  (this->DeviceFriendlyName).Data.ArrayMax = 0;
  this->SampleRate = 0;
  this->Type = Unknown;
  this->ChannelBitmask = 0;
  (this->HardwareId).ComparisonIndex = 0;
  (this->HardwareId).Number = 0;
  (this->FilterId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterId).Data.ArrayNum = 0;
  (this->FilterId).Data.ArrayMax = 0;
  (this->OutputChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputChannels).ArrayNum = 0;
  (this->OutputChannels).ArrayMax = 0;
  (this->MutationLock).Mutex.Mutex.Ptr = (void *)0x0;
  operator=(this,param_1);
  return this;
}

// FCacheEntry @ 148d2f6e0

FCacheEntry * __thiscall
Audio::FWindowsMMDeviceCache::FCacheEntry::FCacheEntry(FCacheEntry *this,FString *param_1)

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  FName local_res8;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  this->DeviceId = *pFVar2;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  (this->DeviceFriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceFriendlyName).Data.ArrayNum = 0;
  (this->DeviceFriendlyName).Data.ArrayMax = 0;
  this->State = NotPresent;
  this->NumChannels = 0;
  this->SampleRate = 0;
  this->Type = Unknown;
  this->ChannelBitmask = 0;
  (this->HardwareId).ComparisonIndex = 0;
  (this->HardwareId).Number = 0;
  (this->FilterId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterId).Data.ArrayNum = 0;
  (this->FilterId).Data.ArrayMax = 0;
  (this->OutputChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputChannels).ArrayNum = 0;
  (this->OutputChannels).ArrayMax = 0;
  (this->MutationLock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// ~FCacheEntry @ 148d305e0

void __thiscall Audio::FWindowsMMDeviceCache::FCacheEntry::~FCacheEntry(FCacheEntry *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->MutationLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->MutationLock);
  }
  pFVar1 = (this->OutputChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilterId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceFriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 148d308d0

FCacheEntry * __thiscall
Audio::FWindowsMMDeviceCache::FCacheEntry::operator=(FCacheEntry *this,FCacheEntry *param_1)

{
  FString *pFVar1;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  
  pFVar1 = &param_1->FriendlyName;
  pFVar5 = &this->FriendlyName;
  this->DeviceId = param_1->DeviceId;
  if (pFVar5 != pFVar1) {
    pFVar4 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FriendlyName).Data.ArrayNum = (param_1->FriendlyName).Data.ArrayNum;
    (this->FriendlyName).Data.ArrayMax = (param_1->FriendlyName).Data.ArrayMax;
    (param_1->FriendlyName).Data.ArrayNum = 0;
    (param_1->FriendlyName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->DeviceFriendlyName;
  pFVar5 = &this->DeviceFriendlyName;
  if (pFVar5 != pFVar1) {
    pFVar4 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeviceFriendlyName).Data.ArrayNum = (param_1->DeviceFriendlyName).Data.ArrayNum;
    (this->DeviceFriendlyName).Data.ArrayMax = (param_1->DeviceFriendlyName).Data.ArrayMax;
    (param_1->DeviceFriendlyName).Data.ArrayNum = 0;
    (param_1->DeviceFriendlyName).Data.ArrayMax = 0;
  }
  pTVar2 = &param_1->OutputChannels;
  this->State = param_1->State;
  pTVar3 = &this->OutputChannels;
  this->NumChannels = param_1->NumChannels;
  this->SampleRate = param_1->SampleRate;
  this->Type = param_1->Type;
  this->ChannelBitmask = param_1->ChannelBitmask;
  if (pTVar3 != pTVar2) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OutputChannels).ArrayNum = (param_1->OutputChannels).ArrayNum;
    (this->OutputChannels).ArrayMax = (param_1->OutputChannels).ArrayMax;
    (param_1->OutputChannels).ArrayNum = 0;
    (param_1->OutputChannels).ArrayMax = 0;
  }
  pFVar1 = &this->FilterId;
  pFVar5 = &param_1->FilterId;
  this->HardwareId = param_1->HardwareId;
  if (pFVar1 != pFVar5) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FilterId).Data.ArrayNum = (param_1->FilterId).Data.ArrayNum;
    (this->FilterId).Data.ArrayMax = (param_1->FilterId).Data.ArrayMax;
    (param_1->FilterId).Data.ArrayNum = 0;
    (param_1->FilterId).Data.ArrayMax = 0;
  }
  return this;
}

// operator= @ 148d30a20

FCacheEntry * __thiscall
Audio::FWindowsMMDeviceCache::FCacheEntry::operator=(FCacheEntry *this,FCacheEntry *param_1)

{
  this->DeviceId = param_1->DeviceId;
  ::FString::operator=(&this->FriendlyName,&param_1->FriendlyName);
  ::FString::operator=(&this->DeviceFriendlyName,&param_1->DeviceFriendlyName);
  this->State = param_1->State;
  this->NumChannels = param_1->NumChannels;
  this->SampleRate = param_1->SampleRate;
  this->Type = param_1->Type;
  this->ChannelBitmask = param_1->ChannelBitmask;
  TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>::operator=
            (&this->OutputChannels,&param_1->OutputChannels);
  this->HardwareId = param_1->HardwareId;
  ::FString::operator=(&this->FilterId,&param_1->FilterId);
  return this;
}

