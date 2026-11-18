// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMMDeviceEnumeration
// Functions: 33

// FWindowsMMDeviceCache @ 148d2f760

FWindowsMMDeviceCache * __thiscall
Audio::FWindowsMMDeviceCache::FWindowsMMDeviceCache(FWindowsMMDeviceCache *this)

{
  FWindowsMMDeviceCache(this,false);
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioPlatformDeviceInfoCache__;
  return this;
}

// ~FWindowsMMDeviceCache @ 148d30680

void __thiscall Audio::FWindowsMMDeviceCache::~FWindowsMMDeviceCache(FWindowsMMDeviceCache *this)

{
  void *pvVar1;
  IMMDeviceEnumerator *pIVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  *(undefined4 *)&(this->Cache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Cache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Cache);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  }
  pIVar2 = (this->DeviceEnumerator).RawPointer;
  if (pIVar2 != (IMMDeviceEnumerator *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// operator() @ 148d30b50

bool __thiscall
`Audio::FWindowsMMDeviceCache::EnumerateDeviceProps'::__l8::<lambda_1>::operator()
          (void *this,TComPtr<IPropertyStore> *param_1,_tagpropertykey *param_2,FCacheEntry *param_3
          )

{
  code *pcVar1;
  tWAVEFORMATEX *ptVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_28;
  undefined8 uStack_20;
  tWAVEFORMATEX *local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = (tWAVEFORMATEX *)0x0;
  if (param_1->RawPointer == (IPropertyStore *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  iVar5 = (**(code **)((longlong)*param_1->RawPointer + 0x28))
                    (param_1->RawPointer,param_2,&local_28);
  ptVar2 = local_18;
  if ((iVar5 < 0) || (local_18 == (tWAVEFORMATEX *)0x0)) {
    bVar3 = false;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pwVar6 = FCommandLine::Get();
        bForceSurroundSound = FParse::Param(pwVar6,L"ForceSurroundSound");
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar8 = 8;
    if (bForceSurroundSound == false) {
      uVar7 = 8;
      if (ptVar2->nChannels < 8) {
        uVar7 = (uint)ptVar2->nChannels;
      }
      uVar8 = 2;
      if (2 < uVar7) {
        uVar8 = uVar7;
      }
    }
    param_3->NumChannels = uVar8;
    param_3->SampleRate = ptVar2->nSamplesPerSec;
    Audio::FWindowsMMDeviceCache::EnumerateChannelFormat
              (*(FWindowsMMDeviceCache **)this,ptVar2,param_3);
    PropVariantClear((PROPVARIANT *)&local_28);
    bVar3 = true;
  }
  return bVar3;
}

// operator() @ 148d30ca0

bool __thiscall
`Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices'::__l2::<lambda_2>::operator()
          (void *this,FAudioPlatformDeviceInfo *param_1,FAudioPlatformDeviceInfo *param_2)

{
  int iVar1;
  int iVar2;
  ForAnyElementType _Str1;
  ForAnyElementType _Str2;
  bool bVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  Audio::FWindowsMMDeviceCache::ExtractAggregateDeviceName(&local_28,&param_1->Name);
  Audio::FWindowsMMDeviceCache::ExtractAggregateDeviceName(&local_18,&param_2->Name);
  FVar4.Data = local_18.Data.AllocatorInstance.Data;
  FVar5.Data = local_28.Data.AllocatorInstance.Data;
  _Str2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    _Str2.Data = local_18.Data.AllocatorInstance.Data;
  }
  _Str1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    _Str1.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar1 = wcscmp((wchar_t *)_Str1.Data,(wchar_t *)_Str2.Data);
  if (iVar1 == 0) {
    iVar1 = Audio::FWindowsMMDeviceCache::ExtractAggregateChannelNumber(&param_1->Name);
    iVar2 = Audio::FWindowsMMDeviceCache::ExtractAggregateChannelNumber(&param_2->Name);
    bVar3 = iVar1 < iVar2;
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    bVar3 = SUB41((uint)iVar1 >> 0x1f,0);
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return bVar3;
}

// BuildCacheEntry @ 148d31270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<Audio::FWindowsMMDeviceCache::FCacheEntry> * __thiscall
Audio::FWindowsMMDeviceCache::BuildCacheEntry
          (FWindowsMMDeviceCache *this,
          TOptional<Audio::FWindowsMMDeviceCache::FCacheEntry> *__return_storage_ptr__,
          FString *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *pFVar4;
  IMMDeviceEnumerator *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FName FVar8;
  bool bVar9;
  BOOLEAN BVar10;
  int iVar11;
  TOptional<Audio::FWindowsMMDeviceCache::FCacheEntry> *pTVar12;
  FName *pFVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  TComPtr<IMMDevice> local_res8;
  FName local_res20;
  FString local_a8;
  FCacheEntry local_98;
  
  pIVar5 = (this->DeviceEnumerator).RawPointer;
  if (pIVar5 == (IMMDeviceEnumerator *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8974508703872974300>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
                       ,0x224,"DeviceEnumerator");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TOptional<Audio::FWindowsMMDeviceCache::FCacheEntry> *)(*pcVar7)();
      return pTVar12;
    }
  }
  else {
    pwVar15 = L"";
    local_res8.RawPointer = (IMMDevice *)0x0;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar11 = (**(code **)((longlong)*pIVar5 + 0x28))(pIVar5,pwVar14,&local_res8);
    if (-1 < iVar11) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_a8,pwVar15);
      iVar11 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      pFVar13 = ::FName::FName(&local_res20,iVar11,(wchar_t *)local_a8.Data.AllocatorInstance.Data,
                               FNAME_Add);
      local_98.DeviceId = *pFVar13;
      local_98.DeviceFriendlyName.Data.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_98.DeviceFriendlyName.Data.ArrayMax = _UNK_150631d44;
      local_98.State = _UNK_150631d48;
      local_98.NumChannels = _UNK_150631d4c;
      local_98.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.FriendlyName.Data.ArrayNum = 0;
      local_98.FriendlyName.Data.ArrayMax = 0;
      local_98.DeviceFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.SampleRate = 0;
      local_98.Type = Unknown;
      local_98.ChannelBitmask = 0;
      local_98.HardwareId.ComparisonIndex.Value = 0;
      local_98.HardwareId.Number = 0;
      local_98.FilterId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.FilterId.Data.ArrayNum = 0;
      local_98.FilterId.Data.ArrayMax = 0;
      local_98.OutputChannels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.OutputChannels.ArrayNum = 0;
      local_98.OutputChannels.ArrayMax = 0;
      local_98.MutationLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      bVar9 = EnumerateDeviceProps(this,&local_res8,&local_98);
      if (bVar9) {
        (__return_storage_ptr__->TypedValue).FriendlyName.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        pFVar1 = &(__return_storage_ptr__->TypedValue).DeviceFriendlyName;
        (__return_storage_ptr__->TypedValue).FriendlyName.Data.ArrayNum = 0;
        (__return_storage_ptr__->TypedValue).FriendlyName.Data.ArrayMax = 0;
        pFVar2 = &(__return_storage_ptr__->TypedValue).FilterId;
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar3 = &(__return_storage_ptr__->TypedValue).OutputChannels;
        (__return_storage_ptr__->TypedValue).DeviceFriendlyName.Data.ArrayNum = 0;
        (__return_storage_ptr__->TypedValue).DeviceFriendlyName.Data.ArrayMax = 0;
        (__return_storage_ptr__->TypedValue).State = NotPresent;
        (__return_storage_ptr__->TypedValue).NumChannels = 0;
        (__return_storage_ptr__->TypedValue).SampleRate = 0;
        (__return_storage_ptr__->TypedValue).Type = Unknown;
        (__return_storage_ptr__->TypedValue).ChannelBitmask = 0;
        (__return_storage_ptr__->TypedValue).HardwareId.ComparisonIndex = 0;
        (__return_storage_ptr__->TypedValue).HardwareId.Number = 0;
        (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->TypedValue).FilterId.Data.ArrayNum = 0;
        (__return_storage_ptr__->TypedValue).FilterId.Data.ArrayMax = 0;
        (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->TypedValue).OutputChannels.ArrayNum = 0;
        (__return_storage_ptr__->TypedValue).OutputChannels.ArrayMax = 0;
        (__return_storage_ptr__->TypedValue).MutationLock.Mutex.Mutex.Ptr = (void *)0x0;
        pFVar4 = &(__return_storage_ptr__->TypedValue).FriendlyName;
        (__return_storage_ptr__->TypedValue).DeviceId = local_98.DeviceId;
        if (pFVar4 != &local_98.FriendlyName) {
          pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pFVar4->Data).AllocatorInstance.Data = local_98.FriendlyName.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->TypedValue).FriendlyName.Data.ArrayNum =
               local_98.FriendlyName.Data.ArrayNum;
          (__return_storage_ptr__->TypedValue).FriendlyName.Data.ArrayMax =
               local_98.FriendlyName.Data.ArrayMax;
          local_98.FriendlyName.Data.ArrayNum = 0;
          local_98.FriendlyName.Data.ArrayMax = 0;
          local_98.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (pFVar1 != &local_98.DeviceFriendlyName) {
          pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pFVar1->Data).AllocatorInstance.Data =
               local_98.DeviceFriendlyName.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->TypedValue).DeviceFriendlyName.Data.ArrayNum =
               local_98.DeviceFriendlyName.Data.ArrayNum;
          (__return_storage_ptr__->TypedValue).DeviceFriendlyName.Data.ArrayMax =
               local_98.DeviceFriendlyName.Data.ArrayMax;
          local_98.DeviceFriendlyName.Data.ArrayNum = 0;
          local_98.DeviceFriendlyName.Data.ArrayMax = 0;
          local_98.DeviceFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        (__return_storage_ptr__->TypedValue).State = local_98.State;
        (__return_storage_ptr__->TypedValue).NumChannels = local_98.NumChannels;
        (__return_storage_ptr__->TypedValue).SampleRate = local_98.SampleRate;
        (__return_storage_ptr__->TypedValue).Type = local_98.Type;
        (__return_storage_ptr__->TypedValue).ChannelBitmask = local_98.ChannelBitmask;
        if (pTVar3 != &local_98.OutputChannels) {
          pFVar6 = (pTVar3->AllocatorInstance).Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pTVar3->AllocatorInstance).Data = local_98.OutputChannels.AllocatorInstance.Data;
          (__return_storage_ptr__->TypedValue).OutputChannels.ArrayNum =
               local_98.OutputChannels.ArrayNum;
          (__return_storage_ptr__->TypedValue).OutputChannels.ArrayMax =
               local_98.OutputChannels.ArrayMax;
          local_98.OutputChannels.ArrayNum = 0;
          local_98.OutputChannels.ArrayMax = 0;
          local_98.OutputChannels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        FVar8.Number = local_98.HardwareId.Number;
        FVar8.ComparisonIndex.Value = local_98.HardwareId.ComparisonIndex.Value;
        (__return_storage_ptr__->TypedValue).HardwareId = FVar8;
        if (pFVar2 != &local_98.FilterId) {
          pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pFVar2->Data).AllocatorInstance.Data = local_98.FilterId.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->TypedValue).FilterId.Data.ArrayNum =
               local_98.FilterId.Data.ArrayNum;
          (__return_storage_ptr__->TypedValue).FilterId.Data.ArrayMax =
               local_98.FilterId.Data.ArrayMax;
          local_98.FilterId.Data.ArrayNum = 0;
          local_98.FilterId.Data.ArrayMax = 0;
          local_98.FilterId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        __return_storage_ptr__->bIsSet = true;
        BVar10 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_98.MutationLock);
        if (BVar10 == '\0') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsLocked()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                             ,0x48,L"Destroying a lock that is still held!");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TOptional<Audio::FWindowsMMDeviceCache::FCacheEntry> *)(*pcVar7)();
            return pTVar12;
          }
        }
        else {
          ReleaseSRWLockExclusive((PSRWLOCK)&local_98.MutationLock);
        }
        if (local_98.OutputChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.OutputChannels.AllocatorInstance.Data);
        }
        if (local_98.FilterId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.FilterId.Data.AllocatorInstance.Data);
        }
        if (local_98.DeviceFriendlyName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.DeviceFriendlyName.Data.AllocatorInstance.Data);
        }
        if (local_98.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.FriendlyName.Data.AllocatorInstance.Data);
        }
        if (local_res8.RawPointer == (IMMDevice *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_res8.RawPointer + 0x10))();
        return __return_storage_ptr__;
      }
      BVar10 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_98.MutationLock);
      if (BVar10 == '\0') {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLocked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                           ,0x48,L"Destroying a lock that is still held!");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TOptional<Audio::FWindowsMMDeviceCache::FCacheEntry> *)(*pcVar7)();
          return pTVar12;
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)&local_98.MutationLock);
      }
      if (local_98.OutputChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.OutputChannels.AllocatorInstance.Data);
      }
      if (local_98.FilterId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.FilterId.Data.AllocatorInstance.Data);
      }
      if (local_98.DeviceFriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_98.DeviceFriendlyName.Data.AllocatorInstance.Data);
      }
      if (local_98.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.FriendlyName.Data.AllocatorInstance.Data);
      }
    }
    if (local_res8.RawPointer != (IMMDevice *)0x0) {
      (**(code **)((longlong)*local_res8.RawPointer + 0x10))();
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CreateAggregateDeviceInfo @ 148d316a0

FAudioPlatformDeviceInfo * __cdecl
Audio::FWindowsMMDeviceCache::CreateAggregateDeviceInfo
          (FAudioPlatformDeviceInfo *__return_storage_ptr__,FCacheEntry *param_1,
          FDeviceChannelInfo *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FAudioPlatformDeviceInfo *pFVar4;
  FString *pFVar5;
  FString local_28;
  
  pFVar1 = &__return_storage_ptr__->DeviceId;
  (__return_storage_ptr__->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Name).Data.ArrayNum = 0;
  (__return_storage_ptr__->Name).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DeviceId).Data.ArrayNum = 0;
  (__return_storage_ptr__->DeviceId).Data.ArrayMax = 0;
  (__return_storage_ptr__->OutputChannelArray).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OutputChannelArray).ArrayNum = 0;
  (__return_storage_ptr__->OutputChannelArray).ArrayMax = 0;
  FAudioPlatformDeviceInfo::Reset(__return_storage_ptr__);
  pFVar4 = (FAudioPlatformDeviceInfo *)ExtractAggregateDeviceName(&local_28,&param_1->FriendlyName);
  if (__return_storage_ptr__ != pFVar4) {
    pFVar2 = (__return_storage_ptr__->Name).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Name).Data.AllocatorInstance.Data =
         (pFVar4->Name).Data.AllocatorInstance.Data;
    (pFVar4->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Name).Data.ArrayNum = (pFVar4->Name).Data.ArrayNum;
    (__return_storage_ptr__->Name).Data.ArrayMax = (pFVar4->Name).Data.ArrayMax;
    (pFVar4->Name).Data.ArrayNum = 0;
    (pFVar4->Name).Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FName::GetPlainNameString(&param_1->HardwareId,&local_28);
  if (pFVar1 != pFVar5) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->DeviceId).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->DeviceId).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->NumChannels = param_1->NumChannels;
  __return_storage_ptr__->SampleRate = param_1->SampleRate;
  TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->OutputChannelArray,&param_1->OutputChannels);
  __return_storage_ptr__->bIsSystemDefault = '\0';
  __return_storage_ptr__->Format = Float;
  iVar3 = param_2->TotalChannelCount - param_2->LogicDeviceChannelCount;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  __return_storage_ptr__->NumDirectOutChannels = iVar3;
  return __return_storage_ptr__;
}

// EnumerateChannelFormat @ 148d31990

bool __thiscall
Audio::FWindowsMMDeviceCache::EnumerateChannelFormat
          (FWindowsMMDeviceCache *this,tWAVEFORMATEX *param_1,FCacheEntry *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  piVar1 = &(param_2->OutputChannels).ArrayMax;
  (param_2->OutputChannels).ArrayNum = 0;
  if ((param_2->OutputChannels).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(param_2->OutputChannels).AllocatorInstance,0,piVar1);
  }
  if (param_1->wFormatTag == 0xfffe) {
    bVar4 = EnumerateChannelMask(this,*(uint *)&param_1[1].nChannels,param_2);
  }
  else {
    pFVar2 = (param_2->OutputChannels).AllocatorInstance.Data;
    local_18 = 0;
    if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)*piVar1 * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar6 = (param_2->OutputChannels).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_2->OutputChannels).AllocatorInstance,piVar1);
    }
    (param_2->OutputChannels).ArrayNum = iVar6 + 1;
    *(undefined4 *)((param_2->OutputChannels).AllocatorInstance.Data + (longlong)iVar6 * 4) =
         local_18;
    if (param_2->NumChannels == 2) {
      pFVar2 = (param_2->OutputChannels).AllocatorInstance.Data;
      local_14[0] = 1;
      if ((pFVar2 <= (FScriptContainerElement *)local_14) &&
         ((FScriptContainerElement *)local_14 < pFVar2 + (longlong)*piVar1 * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      iVar6 = (param_2->OutputChannels).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_2->OutputChannels).AllocatorInstance,piVar1);
      }
      (param_2->OutputChannels).ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->OutputChannels).AllocatorInstance.Data + (longlong)iVar6 * 4) =
           local_14[0];
    }
    bVar4 = true;
  }
  return bVar4;
}

// EnumerateChannelMask @ 148d31b70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWindowsMMDeviceCache::EnumerateChannelMask
          (FWindowsMMDeviceCache *this,uint param_1,FCacheEntry *param_2)

{
  int *piVar1;
  Type TVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  Type *pTVar10;
  uint uVar11;
  uint *puVar12;
  uint local_38 [4];
  
  param_2->ChannelBitmask = param_1;
  piVar1 = &(param_2->OutputChannels).ArrayMax;
  iVar8 = 0;
  (param_2->OutputChannels).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(param_2->OutputChannels).AllocatorInstance,0,piVar1);
  }
  if (param_2->Type == Capture) {
    return true;
  }
  uVar9 = 0;
  uVar11 = 0;
  puVar12 = REMOVE_ME_ChannelTypeMap;
  do {
    if ((uint)param_2->NumChannels <= uVar11) break;
    if ((*puVar12 & param_1) != 0) {
      pFVar3 = (param_2->OutputChannels).AllocatorInstance.Data;
      local_38[0] = uVar9;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = (param_2->OutputChannels).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_2->OutputChannels).AllocatorInstance,piVar1);
      }
      uVar11 = uVar11 + 1;
      (param_2->OutputChannels).ArrayNum = iVar7 + 1;
      *(uint *)((param_2->OutputChannels).AllocatorInstance.Data + (longlong)iVar7 * 4) =
           local_38[0];
    }
    uVar9 = uVar9 + 1;
    puVar12 = puVar12 + 1;
  } while (uVar9 < 0x13);
  if (uVar11 < (uint)param_2->NumChannels) {
    if ((2 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    }
    (param_2->OutputChannels).ArrayNum = 0;
    if ((param_2->OutputChannels).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(param_2->OutputChannels).AllocatorInstance,0,piVar1);
    }
    iVar7 = param_2->NumChannels;
    pTVar10 = DefaultChannelOrdering;
    if (iVar7 == 4) {
      pTVar10 = DefaultChannelOrderingQuad;
    }
    else if (iVar7 == 6) {
      pTVar10 = DefaultChannelOrdering51;
    }
    else if ((8 < iVar7) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutInfo.NumChannels <= 8",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
                                ,0xc5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (0 < param_2->NumChannels) {
      do {
        pFVar3 = (param_2->OutputChannels).AllocatorInstance.Data;
        if (((pFVar3 <= pTVar10) &&
            (pTVar10 < pFVar3 + (longlong)(param_2->OutputChannels).ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar7 = (param_2->OutputChannels).ArrayNum;
        if (iVar7 == (param_2->OutputChannels).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_2->OutputChannels).AllocatorInstance,piVar1);
        }
        (param_2->OutputChannels).ArrayNum = iVar7 + 1;
        iVar8 = iVar8 + 1;
        TVar2 = *pTVar10;
        pTVar10 = (Type *)((longlong)pTVar10 + 4);
        *(Type *)((param_2->OutputChannels).AllocatorInstance.Data + (longlong)iVar7 * 4) = TVar2;
      } while (iVar8 < param_2->NumChannels);
    }
  }
  return true;
}

// EnumerateDefaults @ 148d31e40

/* WARNING: Removing unreachable block (ram,0x000148d3210c) */
/* WARNING: Removing unreachable block (ram,0x000148d3211e) */
/* WARNING: Removing unreachable block (ram,0x000148d32127) */
/* WARNING: Removing unreachable block (ram,0x000148d3213b) */
/* WARNING: Removing unreachable block (ram,0x000148d32144) */
/* WARNING: Removing unreachable block (ram,0x000148d3217e) */
/* WARNING: Removing unreachable block (ram,0x000148d3218d) */
/* WARNING: Removing unreachable block (ram,0x000148d3219a) */
/* WARNING: Removing unreachable block (ram,0x000148d321a3) */
/* WARNING: Removing unreachable block (ram,0x000148d3220f) */
/* WARNING: Removing unreachable block (ram,0x000148d321b4) */
/* WARNING: Removing unreachable block (ram,0x000148d321d0) */
/* WARNING: Removing unreachable block (ram,0x000148d321c7) */
/* WARNING: Removing unreachable block (ram,0x000148d3221f) */
/* WARNING: Removing unreachable block (ram,0x000148d3222d) */
/* WARNING: Removing unreachable block (ram,0x000148d32232) */
/* WARNING: Removing unreachable block (ram,0x000148d3225c) */
/* WARNING: Removing unreachable block (ram,0x000148d32237) */
/* WARNING: Removing unreachable block (ram,0x000148d32253) */
/* WARNING: Removing unreachable block (ram,0x000148d3223c) */
/* WARNING: Removing unreachable block (ram,0x000148d3224a) */
/* WARNING: Removing unreachable block (ram,0x000148d32241) */
/* WARNING: Removing unreachable block (ram,0x000148d32263) */
/* WARNING: Removing unreachable block (ram,0x000148d3227f) */
/* WARNING: Removing unreachable block (ram,0x000148d32284) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FWindowsMMDeviceCache::EnumerateDefaults(FWindowsMMDeviceCache *this)

{
  IMMDeviceEnumerator *pIVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FCacheEntry *pFVar6;
  longlong lVar7;
  FName *pFVar8;
  int iVar9;
  FName local_res8;
  wchar_t *local_res10;
  longlong *local_res18;
  FName local_80 [2];
  FString local_70 [3];
  
  if ((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) {
    if (2 < (byte)LogAudioEnumeration._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
      return;
    }
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
    iVar9 = 0;
    pFVar8 = this->DefaultCaptureId;
    do {
      bVar4 = false;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_res18 = (longlong *)0x0;
      if (((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar1 = (this->DeviceEnumerator).RawPointer;
      iVar5 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,0,iVar9);
      if (iVar5 < 0) {
LAB_148d31f98:
        if (local_res18 != (longlong *)0x0) {
          (**(code **)(*local_res18 + 0x10))();
        }
        if (bVar4) {
          if ((3 < (byte)LogAudioEnumeration._0_1_) && (local_res8 != (FName)0x0)) {
            pFVar6 = TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
                     ::Find((TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
                             *)&this->Cache,local_res8);
            if (pFVar6 == (FCacheEntry *)0x0) {
              ::FString::FString(local_70,L"Unknown");
            }
            else {
              local_70[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_70[0].Data.ArrayNum = (pFVar6->FriendlyName).Data.ArrayNum;
              lVar7 = (longlong)local_70[0].Data.ArrayNum;
              _Src = (pFVar6->FriendlyName).Data.AllocatorInstance.Data;
              if (local_70[0].Data.ArrayNum == 0) {
                local_70[0].Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_70[0].Data.ArrayNum,0,(ForAnyElementType *)local_70,
                           local_70[0].Data.ArrayNum,&local_70[0].Data.ArrayMax);
                memcpy(local_70[0].Data.AllocatorInstance.Data,_Src,lVar7 * 2);
              }
            }
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
            if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
            }
          }
          pFVar8[3] = local_res8;
        }
      }
      else {
        if (local_res18 != (longlong *)0x0) {
          local_res10 = (wchar_t *)0x0;
          iVar5 = (**(code **)(*local_res18 + 0x28))(local_res18,&local_res10);
          if (iVar5 < 0) {
            local_res8.ComparisonIndex.Value = 0;
            local_res8.Number = 0;
            bVar4 = false;
          }
          else {
            if (local_res10 == (wchar_t *)0x0) goto LAB_148d31f98;
            ::FName::FName(local_80,local_res10);
            local_res8 = local_80[0];
            bVar4 = true;
          }
          if (local_res10 != (wchar_t *)0x0) {
            CoTaskMemFree(local_res10);
          }
          goto LAB_148d31f98;
        }
        if (3 < (byte)LogAudioEnumeration._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u_FWindowsMMDevic_151cd4748,
                     (FLogCategoryBase *)&LogAudioEnumeration);
          goto LAB_148d31f98;
        }
      }
      if (((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar1 = (this->DeviceEnumerator).RawPointer;
      iVar5 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,1,iVar9);
      if ((-1 < iVar5) && (3 < (byte)LogAudioEnumeration._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_FWindowsMMDevic_151cd4748,
                   (FLogCategoryBase *)&LogAudioEnumeration);
      }
      iVar9 = iVar9 + 1;
      pFVar8 = pFVar8 + 1;
    } while (iVar9 < 3);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  }
  return;
}

// EnumerateDeviceProps @ 148d322f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWindowsMMDeviceCache::EnumerateDeviceProps
          (FWindowsMMDeviceCache *this,TComPtr<IMMDevice> *param_1,FCacheEntry *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  EDeviceEndpointType EVar5;
  FString *pFVar6;
  EAudioDeviceState EVar7;
  int local_res10 [2];
  int local_res18 [2];
  longlong *local_res20;
  TComPtr<IPropertyStore> local_68;
  FWindowsMMDeviceCache *local_60;
  FString local_58;
  undefined8 local_48;
  wchar_t *pwStack_40;
  undefined8 local_38;
  
  local_res20 = (longlong *)0x0;
  if ((param_1->RawPointer == (IMMDevice *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = (**(code **)*param_1->RawPointer)
                    (param_1->RawPointer,&_GUID_1be09788_6894_4089_8586_9a2a6c265ac5,&local_res20);
  EVar7 = NotPresent;
  if (-1 < iVar4) {
    local_res18[0] = 0;
    if ((local_res20 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = (**(code **)(*local_res20 + 0x18))(local_res20,local_res18);
    if (-1 < iVar4) {
      if (local_res18[0] == 0) {
        if (local_res20 != (longlong *)0x0) {
          (**(code **)(*local_res20 + 0x10))();
        }
        EVar5 = Render;
        goto LAB_148d323e9;
      }
      if (local_res18[0] == 1) {
        if (local_res20 != (longlong *)0x0) {
          (**(code **)(*local_res20 + 0x10))();
        }
        EVar5 = Capture;
        goto LAB_148d323e9;
      }
    }
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
  }
  EVar5 = Unknown;
LAB_148d323e9:
  param_2->Type = EVar5;
  local_res10[0] = 4;
  if ((param_1->RawPointer == (IMMDevice *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = (**(code **)((longlong)*param_1->RawPointer + 0x30))(param_1->RawPointer,local_res10);
  if (-1 < iVar4) {
    if (local_res10[0] == 1) {
      EVar7 = Active;
    }
    else if (local_res10[0] == 2) {
      EVar7 = Disabled;
    }
    else if (local_res10[0] != 4) {
      if (local_res10[0] == 8) {
        EVar7 = Unplugged;
      }
      else {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\ConversionHelpers.h"
                           ,0x1e,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
    }
    param_2->State = EVar7;
  }
  local_68.RawPointer = (IPropertyStore *)0x0;
  if ((param_1->RawPointer == (IMMDevice *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = (**(code **)((longlong)*param_1->RawPointer + 0x20))(param_1->RawPointer,0,&local_68);
  if (-1 < iVar4) {
    local_38 = 0;
    local_48 = 0;
    pwStack_40 = (wchar_t *)0x0;
    if ((local_68.RawPointer == (IPropertyStore *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = (**(code **)((longlong)*local_68.RawPointer + 0x28))
                      (local_68.RawPointer,&PKEY_Device_FriendlyName,&local_48);
    if ((-1 < iVar4) && (pwStack_40 != (wchar_t *)0x0)) {
      pFVar6 = ::FString::FString(&local_58,pwStack_40);
      ::FString::operator=(&param_2->FriendlyName,pFVar6);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      PropVariantClear((PROPVARIANT *)&local_48);
    }
    local_60 = this;
    bVar2 = `Audio::FWindowsMMDeviceCache::EnumerateDeviceProps'::__l8::<lambda_1>::operator()
                      (&local_60,&local_68,&PKEY_AudioEngine_DeviceFormat,param_2);
    if ((((!bVar2) &&
         (bVar2 = `Audio::FWindowsMMDeviceCache::EnumerateDeviceProps'::__l8::<lambda_1>::operator()
                            (&local_60,&local_68,&PKEY_AudioEngine_OEMFormat,param_2), !bVar2)) &&
        (2 < (byte)LogAudioEnumeration._0_1_)) && (local_res10[0] == 1)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    }
  }
  if (local_68.RawPointer != (IPropertyStore *)0x0) {
    (**(code **)((longlong)*local_68.RawPointer + 0x10))();
  }
  return true;
}

// EnumerateEndpoints @ 148d325e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FWindowsMMDeviceCache::EnumerateEndpoints(FWindowsMMDeviceCache *this)

{
  undefined1 *puVar1;
  IMMDeviceEnumerator *pIVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FName FVar9;
  bool bVar10;
  BOOLEAN BVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  ForElementType<FSetElementId> FVar15;
  ForAnyElementType FVar16;
  TMap<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
  *this_00;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_198 [32];
  FScriptContainerElement *local_178;
  uint local_168;
  longlong *local_160;
  TComPtr<IMMDevice> local_158;
  wchar_t *local_150;
  FCacheEntry local_148;
  undefined1 local_d8 [24];
  FCacheEntry *local_c0;
  FCacheEntry *local_b8;
  FName local_b0;
  FString local_a8;
  TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FWindowsMMDeviceCache_EnumerateEndpoints");
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId395,"FWindowsMMDeviceCache_EnumerateEndpoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
               ,0x18b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
  }
  pIVar2 = (this->DeviceEnumerator).RawPointer;
  uVar17 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_8_ = 0x8000000000;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.HashSize = 0;
  if (pIVar2 != (IMMDeviceEnumerator *)0x0) {
    local_160 = (longlong *)0x0;
    local_168 = 0;
    iVar12 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,2,0xf,&local_160);
    if ((((-1 < iVar12) && (local_160 != (longlong *)0x0)) &&
        (iVar12 = (**(code **)(*local_160 + 0x18))(), uVar7 = _UNK_150631d48,
        uVar5 = ___xmm_00000000000000020000000000000000, -1 < iVar12)) && (local_168 != 0)) {
      do {
        local_158.RawPointer = (IMMDevice *)0x0;
        if ((local_160 == (longlong *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = (**(code **)(*local_160 + 0x20))(local_160,uVar17,&local_158);
        if (iVar12 < 0) {
LAB_148d32a0f:
          if (local_158.RawPointer != (IMMDevice *)0x0) {
            (**(code **)((longlong)*local_158.RawPointer + 0x10))();
          }
        }
        else if (local_158.RawPointer != (IMMDevice *)0x0) {
          local_150 = (wchar_t *)0x0;
          iVar12 = (**(code **)((longlong)*local_158.RawPointer + 0x28))();
          if (-1 < iVar12) {
            if (local_150 == (wchar_t *)0x0) goto LAB_148d32a0f;
            ::FString::FString((FString *)(local_d8 + 8),local_150);
            iVar12 = (int)local_d8._16_8_ + -1;
            if ((int)local_d8._16_8_ == 0) {
              iVar12 = 0;
            }
            pFVar14 = ::FName::FName(&local_b0,iVar12,(wchar_t *)local_d8._8_8_,FNAME_Add);
            uVar8 = _UNK_150631d48;
            uVar6 = ___xmm_00000000000000020000000000000000;
            local_148.DeviceId = *pFVar14;
            local_148.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.FriendlyName.Data.ArrayNum = 0;
            local_148.FriendlyName.Data.ArrayMax = 0;
            local_148.DeviceFriendlyName.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            ___xmm_00000000000000020000000000000000 = (int)uVar5;
            _UNK_150631d44 = SUB84(uVar5,4);
            local_148.DeviceFriendlyName.Data.ArrayNum = ___xmm_00000000000000020000000000000000;
            local_148.DeviceFriendlyName.Data.ArrayMax = _UNK_150631d44;
            _UNK_150631d48 = (EAudioDeviceState)uVar7;
            _UNK_150631d4c = SUB84(uVar7,4);
            local_148.State = _UNK_150631d48;
            local_148.NumChannels = _UNK_150631d4c;
            local_148.SampleRate = 0;
            local_148.Type = Unknown;
            local_148.ChannelBitmask = 0;
            local_148.HardwareId.ComparisonIndex.Value = 0;
            local_148.HardwareId.Number = 0;
            local_148.FilterId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.FilterId.Data.ArrayNum = 0;
            local_148.FilterId.Data.ArrayMax = 0;
            local_148.OutputChannels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.OutputChannels.ArrayNum = 0;
            local_148.OutputChannels.ArrayMax = 0;
            local_148.MutationLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
            ___xmm_00000000000000020000000000000000 = uVar6;
            _UNK_150631d48 = uVar8;
            if ((FCacheEntry *)local_d8._8_8_ != (FCacheEntry *)0x0) {
              FMemory::Free((void *)local_d8._8_8_);
            }
            EnumerateDeviceProps(this,&local_158,&local_148);
            if ((this->bIsAggregateDeviceSupportEnabled != false) ||
               (EnableAggregateAudioDevicesCVar != 0)) {
              EnumerateHardwareTopology(this,&local_158,&local_148);
            }
            if (5 < (byte)LogAudioEnumeration._0_1_) {
              FVar16.Data = (FScriptContainerElement *)L"";
              if (local_148.FriendlyName.Data.ArrayNum != 0) {
                FVar16.Data = local_148.FriendlyName.Data.AllocatorInstance.Data;
              }
              ::FName::ToString(&local_148.DeviceId,&local_a8);
              local_178 = FVar16.Data;
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            FVar9 = local_148.DeviceId;
            uVar13 = ::GetTypeHash(local_148.DeviceId.ComparisonIndex.Value);
            if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
              FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
              if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar15 = local_98.Hash.SecondaryData;
              }
              for (iVar12 = *(int *)((longlong)FVar15 +
                                    (ulonglong)(local_98.HashSize - 1U & FVar9.Number + uVar13) * 4)
                  ; iVar12 != -1;
                  iVar12 = *(int *)((longlong)iVar12 * 0x80 + 0x78 + local_98.Elements._0_8_)) {
                if (*(FName *)((longlong)iVar12 * 0x80 + local_98.Elements._0_8_) == FVar9) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!NewCache.Contains(Info.DeviceId)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
                                      ,0x1b5,L"");
                  if (bVar10) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  break;
                }
              }
            }
            local_c0 = &local_148;
            local_b8 = &local_148;
            TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_&,Audio::FWindowsMMDeviceCache::FCacheEntry_&>_>
                      (&local_98,
                       (TPairInitializer<FName_&,Audio::FWindowsMMDeviceCache::FCacheEntry_&> *)
                       local_d8,(bool *)&local_c0);
            BVar11 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_148.MutationLock);
            if (BVar11 == '\0') {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IsLocked()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                                  ,0x48,L"Destroying a lock that is still held!");
              if (bVar10) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              ReleaseSRWLockExclusive((PSRWLOCK)&local_148.MutationLock);
            }
            if (local_148.OutputChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.OutputChannels.AllocatorInstance.Data);
            }
            if (local_148.FilterId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.FilterId.Data.AllocatorInstance.Data);
            }
            if (local_148.DeviceFriendlyName.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.DeviceFriendlyName.Data.AllocatorInstance.Data);
            }
            if (local_148.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_148.FriendlyName.Data.AllocatorInstance.Data);
            }
          }
          if (local_150 != (wchar_t *)0x0) {
            CoTaskMemFree(local_150);
          }
          goto LAB_148d32a0f;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < local_168);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
    this_00 = &this->Cache;
    if ((TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>,FDefaultSetAllocator>
         *)this_00 != &local_98) {
      TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->Cache).field_0x8);
      if (*(void **)&this_00->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00->field_0x0);
      }
      puVar1 = &(this->Cache).field_0x10;
      *(undefined8 *)&this_00->field_0x0 = local_98.Elements._0_8_;
      *(undefined4 *)&(this->Cache).field_0x8 = local_98.Elements._8_4_;
      *(undefined4 *)&(this->Cache).field_0xc = local_98.Elements._12_4_;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      if (puVar1 != &local_98.Elements.field_0x10) {
        if (local_98.Elements._32_8_ == 0) {
          *(undefined8 *)puVar1 = local_98.Elements._16_8_;
          *(undefined8 *)&(this->Cache).field_0x18 = local_98.Elements._24_8_;
        }
        pvVar3 = *(void **)&(this->Cache).field_0x20;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(undefined8 *)&(this->Cache).field_0x20 = local_98.Elements._32_8_;
        *(undefined4 *)&(this->Cache).field_0x28 = local_98.Elements._40_4_;
        *(undefined4 *)&(this->Cache).field_0x2c = local_98.Elements._44_4_;
        local_98.Elements._40_8_ = 0;
        local_98.Elements._32_8_ = 0;
      }
      *(undefined4 *)&(this->Cache).field_0x30 = local_98.Elements._48_4_;
      *(undefined4 *)&(this->Cache).field_0x34 = local_98.Elements._52_4_;
      local_98.Elements._52_4_ = 0;
      local_98.Elements._48_4_ = 0xffffffff;
      if (local_98.Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
        (this->Cache).field_0x38 = local_98.Hash.InlineData[0];
        (this->Cache).field_0x39 = local_98.Hash.InlineData[1];
        (this->Cache).field_0x3a = local_98.Hash.InlineData[2];
        (this->Cache).field_0x3b = local_98.Hash.InlineData[3];
      }
      pvVar3 = *(void **)&(this->Cache).field_0x40;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(ForElementType<FSetElementId> *)&(this->Cache).field_0x40 = local_98.Hash.SecondaryData;
      *(int *)&(this->Cache).field_0x48 = local_98.HashSize;
      local_98.HashSize = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
    if (local_160 != (longlong *)0x0) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// EnumerateHardwareTopology @ 148d32bb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWindowsMMDeviceCache::EnumerateHardwareTopology
          (FWindowsMMDeviceCache *this,TComPtr<IMMDevice> *param_1,FCacheEntry *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  IMMDeviceEnumerator *pIVar5;
  FName *pFVar6;
  FStaticBasicLogRecord *pFVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  longlong *local_res8;
  longlong *local_res20;
  longlong *local_78;
  longlong *local_70;
  wchar_t *local_68;
  FName local_60;
  FString local_58;
  undefined8 local_48;
  wchar_t *pwStack_40;
  undefined8 local_38;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FWindowsMMDeviceCache_EnumerateHardwareTopology");
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId321,"FWindowsMMDeviceCache_EnumerateHardwareTopology",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
               ,0x141);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId321);
  }
  if ((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) {
    bVar2 = false;
    goto LAB_148d32f75;
  }
  local_70 = (longlong *)0x0;
  if ((param_1->RawPointer == (IMMDevice *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = (**(code **)((longlong)*param_1->RawPointer + 0x18))
                    (param_1->RawPointer,&_GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,0x17,0,
                     &local_70);
  if (iVar4 < 0) {
    if (5 < (byte)LogAudioEnumeration._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    }
    bVar2 = false;
  }
  else {
    local_78 = (longlong *)0x0;
    if ((local_70 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = (**(code **)(*local_70 + 0x20))(local_70,0,&local_78);
    if (iVar4 < 0) {
      if (5 < (byte)LogAudioEnumeration._0_1_) {
        pFVar7 = &::LOG_Static;
LAB_148d32f3d:
        UE::Logging::Private::BasicLog<6>(pFVar7,(FLogCategoryBase *)&LogAudioEnumeration);
      }
LAB_148d32f4c:
      bVar2 = false;
    }
    else {
      local_68 = (wchar_t *)0x0;
      if ((local_78 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = (**(code **)(*local_78 + 0x50))(local_78,&local_68);
      if ((iVar4 < 0) || (local_68 == (wchar_t *)0x0)) {
        if (5 < (byte)LogAudioEnumeration._0_1_) {
          pFVar7 = &::LOG_Static;
          goto LAB_148d32f3d;
        }
        goto LAB_148d32f4c;
      }
      ::FString::FString(&local_58,local_68);
      CoTaskMemFree(local_68);
      local_res20 = (longlong *)0x0;
      pIVar5 = TComPtr<IMMDeviceEnumerator>::operator->(&this->DeviceEnumerator);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      iVar4 = (**(code **)((longlong)*pIVar5 + 0x28))(pIVar5,FVar8.Data,&local_res20);
      if (iVar4 < 0) {
        if (5 < (byte)LogAudioEnumeration._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
        }
        bVar2 = false;
      }
      else {
        local_res8 = (longlong *)0x0;
        if ((local_res20 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar4 = (**(code **)(*local_res20 + 0x20))(local_res20,0,&local_res8);
        if (iVar4 < 0) {
          if (5 < (byte)LogAudioEnumeration._0_1_) {
            pFVar7 = &::LOG_Static;
LAB_148d32eed:
            UE::Logging::Private::BasicLog<6>(pFVar7,(FLogCategoryBase *)&LogAudioEnumeration);
          }
LAB_148d32efc:
          bVar2 = false;
        }
        else {
          local_38 = 0;
          local_48 = 0;
          pwStack_40 = (wchar_t *)0x0;
          if ((local_res8 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("RawPointer != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                 ,0x9f,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          iVar4 = (**(code **)(*local_res8 + 0x28))(local_res8,&PKEY_Device_InstanceId,&local_48);
          if ((iVar4 < 0) || (pwStack_40 == (wchar_t *)0x0)) {
            if (5 < (byte)LogAudioEnumeration._0_1_) {
              pFVar7 = &::LOG_Static;
              goto LAB_148d32eed;
            }
            goto LAB_148d32efc;
          }
          pFVar6 = ::FName::FName(&local_60,pwStack_40);
          param_2->HardwareId = *pFVar6;
          PropVariantClear((PROPVARIANT *)&local_48);
          iVar4 = local_58.Data.ArrayNum + -1;
          if (local_58.Data.ArrayNum == 0) {
            iVar4 = 0;
          }
          ::FString::AssignRange
                    (&param_2->FilterId,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
          bVar2 = true;
        }
        if (local_res8 != (longlong *)0x0) {
          (**(code **)(*local_res8 + 0x10))();
        }
      }
      if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res20 + 0x10))();
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
LAB_148d32f75:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar2;
}

// ExtractAggregateChannelNumber @ 148d32fb0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __cdecl Audio::FWindowsMMDeviceCache::ExtractAggregateChannelNumber(FString *param_1)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType _Str;
  FString local_48;
  FRegexPattern local_38;
  FRegexMatcher local_28;
  
  ::FString::FString(&local_48,L"^.+?\\(([\\d]+)-[\\d]+\\)");
  FRegexPattern::FRegexPattern(&local_38,&local_48,None);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FRegexMatcher::FRegexMatcher(&local_28,&local_38,param_1);
  bVar1 = FRegexMatcher::FindNext(&local_28);
  if (bVar1) {
    FRegexMatcher::GetCaptureGroup(&local_28,&local_48,1);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      _Str.Data = local_48.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar2 = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Implementation.SharedReferenceCount.ReferenceController);
  return iVar2;
}

// ExtractAggregateDeviceName @ 148d33080

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
Audio::FWindowsMMDeviceCache::ExtractAggregateDeviceName
          (FString *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  FRegexPattern local_48;
  FString local_38;
  FRegexMatcher local_28;
  
  ::FString::FString(&local_38,L"\\(([^\\(\\)]+)\\)$");
  FRegexPattern::FRegexPattern(&local_48,&local_38,None);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FRegexMatcher::FRegexMatcher(&local_28,&local_48,param_1);
  bVar1 = FRegexMatcher::FindNext(&local_28);
  if (bVar1) {
    FRegexMatcher::GetCaptureGroup(&local_28,__return_storage_ptr__,1);
  }
  else {
    ::FString::FString(__return_storage_ptr__,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Implementation.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindActiveOutputDevice @ 148d33260

TOptional<Audio::FAudioPlatformDeviceInfo> * __thiscall
Audio::FWindowsMMDeviceCache::FindActiveOutputDevice
          (FWindowsMMDeviceCache *this,
          TOptional<Audio::FAudioPlatformDeviceInfo> *__return_storage_ptr__,FName param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  FCacheEntry *pFVar4;
  FName FVar5;
  bool bVar6;
  FAudioPlatformDeviceInfo local_88;
  bool local_40;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FWindowsMMDeviceCache_FindActiveOutputDevice");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId916,"FWindowsMMDeviceCache_FindActiveOutputDevice",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
               ,0x394);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId916);
  }
  AcquireSRWLockShared((PSRWLOCK)&this->DeviceEnumerator);
  FVar5 = this->DefaultCaptureId[2];
  if ((FVar5 == (FName)0x0) && (FVar5 = this->DefaultRenderId[0], FVar5 == (FName)0x0)) {
    FVar5.ComparisonIndex.Value = 0;
    FVar5.Number = 0;
  }
  if ((param_1 == (FName)0x0) && (param_1 = FVar5, FVar5 == (FName)0x0)) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    pFVar4 = TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
             ::Find((TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
                     *)&this->CacheMutationLock,param_1);
    if (pFVar4 != (FCacheEntry *)0x0) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar4->MutationLock);
      if ((pFVar4->State == Active) && (pFVar4->Type == Render)) {
        local_88.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Name.Data.ArrayNum = 0;
        local_88.Name.Data.ArrayMax = 0;
        local_88.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.DeviceId.Data.ArrayNum = 0;
        local_88.DeviceId.Data.ArrayMax = 0;
        local_88.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.OutputChannelArray.ArrayNum = 0;
        local_88.OutputChannelArray.ArrayMax = 0;
        ::FString::operator=(&local_88.Name,L"Unknown");
        ::FString::operator=(&local_88.DeviceId,L"Unknown");
        uVar2 = local_88.OutputChannelArray._8_8_;
        local_88.OutputChannelArray._8_8_ = local_88.OutputChannelArray._8_8_ & 0xffffffff00000000;
        local_88.NumChannels = 0;
        local_88.NumDirectOutChannels = 0;
        local_88.SampleRate = 0;
        local_88.Format = Unknown;
        if ((longlong)uVar2 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_88.OutputChannelArray.AllocatorInstance,0,
                     &local_88.OutputChannelArray.ArrayMax);
        }
        local_88.bIsSystemDefault = '\0';
        MakeDeviceInfo((FWindowsMMDeviceCache *)&this[-1].bIsAggregateDeviceSupportEnabled,pFVar4,
                       FVar5,&local_88);
        (__return_storage_ptr__->TypedValue).Name.Data.AllocatorInstance.Data =
             local_88.Name.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->TypedValue).Name.Data.ArrayNum = local_88.Name.Data.ArrayNum;
        (__return_storage_ptr__->TypedValue).Name.Data.ArrayMax = local_88.Name.Data.ArrayMax;
        (__return_storage_ptr__->TypedValue).DeviceId.Data.AllocatorInstance.Data =
             local_88.DeviceId.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->TypedValue).DeviceId.Data.ArrayNum =
             local_88.DeviceId.Data.ArrayNum;
        (__return_storage_ptr__->TypedValue).DeviceId.Data.ArrayMax =
             local_88.DeviceId.Data.ArrayMax;
        (__return_storage_ptr__->TypedValue).NumChannels = local_88.NumChannels;
        (__return_storage_ptr__->TypedValue).NumDirectOutChannels = local_88.NumDirectOutChannels;
        (__return_storage_ptr__->TypedValue).SampleRate = local_88.SampleRate;
        (__return_storage_ptr__->TypedValue).Format = local_88.Format;
        (__return_storage_ptr__->TypedValue).OutputChannelArray.AllocatorInstance.Data =
             local_88.OutputChannelArray.AllocatorInstance.Data;
        (__return_storage_ptr__->TypedValue).OutputChannelArray.ArrayNum =
             local_88.OutputChannelArray.ArrayNum;
        (__return_storage_ptr__->TypedValue).OutputChannelArray.ArrayMax =
             local_88.OutputChannelArray.ArrayMax;
        (__return_storage_ptr__->TypedValue).bIsSystemDefault = '\0';
        local_88.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        puVar1 = &(__return_storage_ptr__->TypedValue).field_0x40;
        *puVar1 = *puVar1 | local_88.bIsSystemDefault;
        __return_storage_ptr__->bIsSet = true;
        local_88.Name.Data.ArrayNum = 0;
        local_88.Name.Data.ArrayMax = 0;
        local_88.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.DeviceId.Data.ArrayNum = 0;
        local_88.DeviceId.Data.ArrayMax = 0;
        local_88.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.OutputChannelArray.ArrayNum = 0;
        local_88.OutputChannelArray.ArrayMax = 0;
        ReleaseSRWLockShared((PSRWLOCK)&pFVar4->MutationLock);
        goto LAB_148d33555;
      }
      ReleaseSRWLockShared((PSRWLOCK)&pFVar4->MutationLock);
    }
    if (((char)this->DefaultRenderId[2].ComparisonIndex.Value == '\0') ||
       ((**(code **)(*(longlong *)&this[-1].bIsAggregateDeviceSupportEnabled + 0x58))
                  (&this[-1].bIsAggregateDeviceSupportEnabled,&local_88,param_1,1),
       local_40 == false)) {
      __return_storage_ptr__->bIsSet = false;
    }
    else {
      __return_storage_ptr__->bIsSet = local_40;
      (__return_storage_ptr__->TypedValue).Name.Data.AllocatorInstance.Data =
           local_88.Name.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->TypedValue).Name.Data.ArrayNum = local_88.Name.Data.ArrayNum;
      (__return_storage_ptr__->TypedValue).Name.Data.ArrayMax = local_88.Name.Data.ArrayMax;
      (__return_storage_ptr__->TypedValue).DeviceId.Data.AllocatorInstance.Data =
           local_88.DeviceId.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->TypedValue).DeviceId.Data.ArrayNum = local_88.DeviceId.Data.ArrayNum;
      (__return_storage_ptr__->TypedValue).DeviceId.Data.ArrayMax = local_88.DeviceId.Data.ArrayMax;
      (__return_storage_ptr__->TypedValue).NumChannels = local_88.NumChannels;
      (__return_storage_ptr__->TypedValue).NumDirectOutChannels = local_88.NumDirectOutChannels;
      (__return_storage_ptr__->TypedValue).SampleRate = local_88.SampleRate;
      (__return_storage_ptr__->TypedValue).Format = local_88.Format;
      (__return_storage_ptr__->TypedValue).OutputChannelArray.AllocatorInstance.Data =
           local_88.OutputChannelArray.AllocatorInstance.Data;
      (__return_storage_ptr__->TypedValue).OutputChannelArray.ArrayNum =
           local_88.OutputChannelArray.ArrayNum;
      iVar3 = local_88.OutputChannelArray.ArrayMax;
      local_88.OutputChannelArray.ArrayNum = 0;
      local_88.OutputChannelArray.ArrayMax = 0;
      local_88.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Name.Data.ArrayNum = 0;
      local_88.Name.Data.ArrayMax = 0;
      local_88.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.DeviceId.Data.ArrayNum = 0;
      local_88.DeviceId.Data.ArrayMax = 0;
      local_88.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->TypedValue).OutputChannelArray.ArrayMax = iVar3;
      puVar1 = &(__return_storage_ptr__->TypedValue).field_0x40;
      *puVar1 = *puVar1 ^ (local_88._64_1_ ^ (__return_storage_ptr__->TypedValue).bIsSystemDefault)
                          & 1;
    }
  }
LAB_148d33555:
  ReleaseSRWLockShared((PSRWLOCK)&this->DeviceEnumerator);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return __return_storage_ptr__;
}

// FindDefaultOutputDevice @ 148d33590

TOptional<Audio::FAudioPlatformDeviceInfo> * __thiscall
Audio::FWindowsMMDeviceCache::FindDefaultOutputDevice
          (FWindowsMMDeviceCache *this,
          TOptional<Audio::FAudioPlatformDeviceInfo> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 8))(this,__return_storage_ptr__,0);
  return __return_storage_ptr__;
}

// GetAggregateHardwareDeviceInfo @ 148d335c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<Audio::FAudioPlatformDeviceInfo> * __thiscall
Audio::FWindowsMMDeviceCache::GetAggregateHardwareDeviceInfo
          (FWindowsMMDeviceCache *this,
          TOptional<Audio::FAudioPlatformDeviceInfo> *__return_storage_ptr__,FName param_1,
          EDeviceEndpointType param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  Type TVar4;
  FName FVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  TOptional<Audio::FAudioPlatformDeviceInfo> *pTVar10;
  TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo> *pTVar11;
  FAudioPlatformDeviceInfo *pFVar12;
  byte bVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  ForElementType<FSetElementId> FVar15;
  FCacheEntry *pFVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  uint uStack_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  uint local_180;
  uint uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  int local_170;
  int local_16c;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FAudioPlatformDeviceInfo local_138;
  undefined1 local_e8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_bc = 0x80;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  uVar18 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_b8 = 0xffffffff;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  GetHardwareInfo(this,(TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
                        *)local_e8,
                  (TMap<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>_>
                   *)&local_98,param_2);
  uVar20 = local_c0;
  uStack_194 = 1;
  local_180 = 0;
  uStack_184 = local_180;
  if (local_c0 != 0) {
    pTVar14 = pTVar3;
    if (local_c8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = local_c8;
    }
    uVar19 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    local_180 = 0;
    uVar18 = 0;
    while (uVar19 == 0) {
      lVar9 = (longlong)(int)uVar18;
      local_180 = local_180 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_184 = local_c0;
      if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < (int)uVar18)
      goto LAB_148d336d3;
      uVar19 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uStack_194 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uStack_194 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_170 = (int)lVar9;
    uStack_184 = (local_180 - 1) + local_170;
    if ((int)local_c0 < (int)uStack_184) {
      uStack_184 = local_c0;
    }
  }
LAB_148d336d3:
  local_1a0 = (longlong *)local_e8;
  uVar19 = local_c0 & 0xffffffe0;
  iStack_178 = local_e8._8_4_ - local_b4;
  uStack_188 = 0xffffffff;
  TStack_160.CurrentBitIndex = uStack_184;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_194,uVar18);
  iVar17 = (int)local_c0 >> 5;
  TStack_160._28_4_ = uStack_184;
  TStack_160.BaseBitIndex = local_180;
  uStack_140 = CONCAT44(uStack_174,iStack_178);
  bVar13 = (byte)local_c0;
  uStack_198 = uVar18;
  local_190 = pTVar3;
  uStack_17c = uStack_184;
  local_168 = local_1a0;
  TStack_160.Array = pTVar3;
  if (((int)local_c0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TOptional<Audio::FAudioPlatformDeviceInfo> *)(*pcVar6)();
    return pTVar10;
  }
  if (uVar20 != local_c0) {
    pTVar14 = pTVar3;
    if (local_c8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = local_c8;
    }
    uVar18 = -1 << (bVar13 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      lVar9 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = local_c0;
      if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < iVar17)
      goto LAB_148d337f0;
      uVar18 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_16c = (int)lVar9;
    uVar20 = local_16c + -1 + uVar19;
    if ((int)local_c0 < (int)uVar20) {
      uVar20 = local_c0;
    }
  }
LAB_148d337f0:
  while( true ) {
    plVar7 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
      local_1a8[0] = 0;
      `TSparseArray<TSparseSetElement<Audio::FWindowsMMDeviceCache::FCacheEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (((TStack_160.CurrentBitIndex == uVar20) && (TStack_160.Array == pTVar3)) &&
       (plVar7 == (longlong *)local_e8)) break;
    pFVar16 = (FCacheEntry *)((longlong)TStack_160.CurrentBitIndex * 0x78 + *plVar7);
    FVar5 = pFVar16->HardwareId;
    if (FVar5 == param_1) {
      uVar18 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar15 = local_98.Hash.SecondaryData;
        }
        for (iVar17 = *(int *)((longlong)FVar15 +
                              (ulonglong)(local_98.HashSize - 1U & uVar18 + FVar5.Number) * 4);
            iVar17 != -1;
            iVar17 = *(int *)(local_98.Elements._0_8_ + 0x10 + (longlong)iVar17 * 0x18)) {
          if (*(FName *)(local_98.Elements._0_8_ + (longlong)iVar17 * 0x18) == FVar5) {
            pTVar11 = TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>,FDefaultSetAllocator>
                      ::Find(&local_98,pFVar16->HardwareId);
            if ((pTVar11 == (TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo> *)0x0)
               && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x288,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              pTVar10 = (TOptional<Audio::FAudioPlatformDeviceInfo> *)(*pcVar6)();
              return pTVar10;
            }
            pFVar12 = CreateAggregateDeviceInfo
                                (&local_138,pFVar16,(FDeviceChannelInfo *)&pTVar11->field_0x8);
            (__return_storage_ptr__->TypedValue).Name.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (__return_storage_ptr__->TypedValue).Name.Data.AllocatorInstance.Data =
                 (pFVar12->Name).Data.AllocatorInstance.Data;
            (pFVar12->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (__return_storage_ptr__->TypedValue).Name.Data.ArrayNum = (pFVar12->Name).Data.ArrayNum;
            (__return_storage_ptr__->TypedValue).Name.Data.ArrayMax = (pFVar12->Name).Data.ArrayMax;
            (pFVar12->Name).Data.ArrayNum = 0;
            (pFVar12->Name).Data.ArrayMax = 0;
            (__return_storage_ptr__->TypedValue).DeviceId.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (__return_storage_ptr__->TypedValue).DeviceId.Data.AllocatorInstance.Data =
                 (pFVar12->DeviceId).Data.AllocatorInstance.Data;
            (pFVar12->DeviceId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (__return_storage_ptr__->TypedValue).DeviceId.Data.ArrayNum =
                 (pFVar12->DeviceId).Data.ArrayNum;
            (__return_storage_ptr__->TypedValue).DeviceId.Data.ArrayMax =
                 (pFVar12->DeviceId).Data.ArrayMax;
            (pFVar12->DeviceId).Data.ArrayNum = 0;
            (pFVar12->DeviceId).Data.ArrayMax = 0;
            (__return_storage_ptr__->TypedValue).NumChannels = pFVar12->NumChannels;
            (__return_storage_ptr__->TypedValue).NumDirectOutChannels =
                 pFVar12->NumDirectOutChannels;
            (__return_storage_ptr__->TypedValue).SampleRate = pFVar12->SampleRate;
            TVar4 = pFVar12->Format;
            (__return_storage_ptr__->TypedValue).OutputChannelArray.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (__return_storage_ptr__->TypedValue).Format = TVar4;
            (__return_storage_ptr__->TypedValue).OutputChannelArray.AllocatorInstance.Data =
                 (pFVar12->OutputChannelArray).AllocatorInstance.Data;
            (pFVar12->OutputChannelArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (__return_storage_ptr__->TypedValue).OutputChannelArray.ArrayNum =
                 (pFVar12->OutputChannelArray).ArrayNum;
            (__return_storage_ptr__->TypedValue).OutputChannelArray.ArrayMax =
                 (pFVar12->OutputChannelArray).ArrayMax;
            (pFVar12->OutputChannelArray).ArrayNum = 0;
            (pFVar12->OutputChannelArray).ArrayMax = 0;
            puVar1 = &(__return_storage_ptr__->TypedValue).field_0x40;
            *puVar1 = *puVar1 ^ ((__return_storage_ptr__->TypedValue).bIsSystemDefault ^
                                pFVar12->bIsSystemDefault) & 1;
            __return_storage_ptr__->bIsSet = true;
            if (local_138.OutputChannelArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.OutputChannelArray.AllocatorInstance.Data);
            }
            if (local_138.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.DeviceId.Data.AllocatorInstance.Data);
            }
            if (local_138.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Name.Data.AllocatorInstance.Data);
            }
            goto LAB_148d33a0e;
          }
        }
      }
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8974508703872974097>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
                         ,0x2ef,"DeviceChannelInfos.Contains(Entry.HardwareId)");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOptional<Audio::FAudioPlatformDeviceInfo> *)(*pcVar6)();
        return pTVar10;
      }
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  __return_storage_ptr__->bIsSet = false;
LAB_148d33a0e:
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<Audio::FWindowsMMDeviceCache::FCacheEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Audio::FWindowsMMDeviceCache::FCacheEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Audio::FWindowsMMDeviceCache::FCacheEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return __return_storage_ptr__;
}

// GetAllActiveOutputDevices @ 148d33a80

TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices
          (FWindowsMMDeviceCache *this,
          TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  PSRWLOCK SRWLock;
  FAudioPlatformDeviceInfo *this_00;
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  ForElementType<unsigned_int> FVar5;
  FWindowsMMDeviceCache *this_01;
  TComPtr<IMMDeviceEnumerator> *SRWLock_00;
  FPlatformRWLock *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *pTVar10;
  byte bVar11;
  longlong lVar12;
  FName FVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  FIdentityFunctor local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> local_f8;
  ForElementType<unsigned_int> local_e8;
  undefined8 local_e0;
  FWindowsMMDeviceCache *local_d8;
  FPlatformRWLock *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  FPlatformRWLock *local_98;
  TComPtr<IMMDeviceEnumerator> *local_90;
  FAudioPlatformDeviceInfo *local_88;
  int local_80;
  FPlatformRWLock *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FWindowsMMDeviceCache_GetAllActiveOutputDevices");
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId659,"FWindowsMMDeviceCache_GetAllActiveOutputDevices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
               ,0x293);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId659);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar8 = 1;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = SUB81(__return_storage_ptr__,0);
  if (((char)this->DefaultRenderId[2].ComparisonIndex.Value == '\0') &&
     (EnableAggregateAudioDevicesCVar == 0)) {
    local_d8 = (FWindowsMMDeviceCache *)&this[-1].bIsAggregateDeviceSupportEnabled;
  }
  else {
    local_d8 = (FWindowsMMDeviceCache *)&this[-1].bIsAggregateDeviceSupportEnabled;
    pTVar10 = (TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *)
              (**(code **)(*(longlong *)&this[-1].bIsAggregateDeviceSupportEnabled + 0x60))
                        (local_d8,&local_88,1);
    if (__return_storage_ptr__ != pTVar10) {
      DestructItems<Audio::FAudioPlatformDeviceInfo,int>
                ((FAudioPlatformDeviceInfo *)(__return_storage_ptr__->AllocatorInstance).Data,
                 __return_storage_ptr__->ArrayNum);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar10->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar10->ArrayMax;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
    }
    DestructItems<Audio::FAudioPlatformDeviceInfo,int>(local_88,local_80);
    if (local_88 != (FAudioPlatformDeviceInfo *)0x0) {
      FMemory::Free(local_88);
    }
    AlgoImpl::
    IntroSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l5::<lambda_1>_>
              ((FAudioPlatformDeviceInfo *)(__return_storage_ptr__->AllocatorInstance).Data,
               __return_storage_ptr__->ArrayNum,local_res10,(<lambda_1>)local_res10);
  }
  local_90 = &this->DeviceEnumerator;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)local_90);
  uVar14 = *(int *)&this->Cache - *(int *)&(this->Cache).field_0x2c;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (local_f8.ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar14,&local_f8.AllocatorInstance,local_f8.ArrayNum,&local_f8.ArrayMax);
  }
  FVar13 = this->DefaultCaptureId[2];
  local_b0 = 0;
  if ((FVar13 == (FName)0x0) && (FVar13 = this->DefaultRenderId[0], FVar13 == (FName)0x0)) {
    local_e0 = 0;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  iVar17 = *(int *)&(this->Cache).field_0x20;
  local_e8 = (ForElementType<unsigned_int>)&(this->Cache).field_0x8;
  local_98 = &this->CacheMutationLock;
  iStack_c8 = 0;
  iVar9 = 0;
  iStack_b4 = iStack_c8;
  if (iVar17 != 0) {
    puVar16 = *(uint **)&(this->Cache).field_0x18;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_e8;
    }
    uVar14 = *puVar16;
    local_b0 = 0;
    iStack_c8 = 0;
    while (uVar14 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) {
        iVar9 = *(int *)&(this->Cache).field_0x20;
        iStack_b4 = iVar17;
        goto LAB_148d33cd4;
      }
      uVar14 = (puVar16 + 1)[lVar12];
    }
    iVar9 = *(int *)&(this->Cache).field_0x20;
    uVar8 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_a0 = (int)lVar12;
    iStack_b4 = local_b0 + -1 + local_a0;
    if (iVar9 < iStack_b4) {
      iStack_b4 = iVar17;
    }
  }
LAB_148d33cd4:
  local_d0 = &this->CacheMutationLock;
  iStack_a8 = *(int *)&this->Cache - *(int *)&(this->Cache).field_0x2c;
  local_res20 = *(uint *)&(this->Cache).field_0x20;
  uStack_b8 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uVar8,iStack_c8);
  uVar14 = local_res20 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_b4;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)local_res20 >> 5;
  bVar11 = (byte)local_res20;
  TStack_70._28_4_ = iStack_b4;
  TStack_70.BaseBitIndex = local_b0;
  uStack_50 = CONCAT44(uStack_a4,iStack_a8);
  uStack_c4 = uVar8;
  local_c0 = (undefined1 *)local_e8;
  iStack_ac = iStack_b4;
  local_78 = local_d0;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e8;
  if ((((int)local_res20 < 0) || (iVar9 < (int)local_res20)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar10;
  }
  this_01 = local_d8;
  FVar5 = local_e8;
  uVar8 = *(int *)((longlong)local_e8 + 0x18);
  uVar18 = local_res20;
  if (local_res20 != uVar8) {
    FVar15 = *(ForElementType<unsigned_int> *)((longlong)local_e8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_e8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_e8;
    }
    uVar18 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar17;
      uVar14 = uVar14 + 0x20;
      iVar17 = iVar17 + 1;
      local_res20 = uVar8;
      uVar18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_148d33e00;
      uVar18 = *(uint *)((undefined1 *)((longlong)FVar15 + 4) + lVar12 * 4);
    }
    uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_9c = (int)lVar12;
    local_res20 = local_9c + -1 + uVar14;
    uVar18 = local_res20;
    if ((int)uVar8 < (int)local_res20) {
      local_res20 = uVar8;
      uVar18 = uVar8;
    }
  }
LAB_148d33e00:
  while( true ) {
    pFVar6 = local_78;
    if (*(int *)(local_78 + 1) - *(int *)((longlong)(local_78 + 6) + 4) != (int)uStack_50) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    iVar17 = TStack_70.CurrentBitIndex;
    if (((TStack_70.CurrentBitIndex == uVar18) &&
        ((ForElementType<unsigned_int>)TStack_70.Array == FVar5)) && (pFVar6 == local_98)) break;
    pvVar3 = (pFVar6->Mutex).Mutex.Ptr;
    SRWLock = (PSRWLOCK)((longlong)pvVar3 + (longlong)TStack_70.CurrentBitIndex * 0x80 + 0x70);
    AcquireSRWLockShared(SRWLock);
    if ((*(int *)((longlong)pvVar3 + (longlong)iVar17 * 0x80 + 0x30) == 0) &&
       (*(int *)((longlong)pvVar3 + (longlong)iVar17 * 0x80 + 0x3c) == 1)) {
      iVar9 = local_f8.ArrayNum;
      if (local_f8.ArrayNum == local_f8.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
      }
      local_f8.ArrayNum = iVar9 + 1;
      this_00 = (FAudioPlatformDeviceInfo *)
                (local_f8.AllocatorInstance.Data + (longlong)iVar9 * 0x48);
      (this_00->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Name).Data.ArrayNum = 0;
      (this_00->Name).Data.ArrayMax = 0;
      (this_00->DeviceId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->DeviceId).Data.ArrayNum = 0;
      (this_00->DeviceId).Data.ArrayMax = 0;
      (this_00->OutputChannelArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->OutputChannelArray).ArrayNum = 0;
      (this_00->OutputChannelArray).ArrayMax = 0;
      FAudioPlatformDeviceInfo::Reset(this_00);
      MakeDeviceInfo(this_01,(FCacheEntry *)((longlong)pvVar3 + (longlong)iVar17 * 0x80 + 8),FVar13,
                     this_00);
    }
    ReleaseSRWLockShared(SRWLock);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  AlgoImpl::
  IntroSortInternal<Audio::FAudioPlatformDeviceInfo,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetAllActiveOutputDevices_::__l2::<lambda_2>_>
            ((FAudioPlatformDeviceInfo *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum,
             local_res10,(<lambda_2>)local_res10);
  SRWLock_00 = local_90;
  if ((__return_storage_ptr__ == &local_f8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar10;
  }
  iVar17 = local_f8.ArrayNum;
  if (local_f8.ArrayNum != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,local_f8.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    ConstructItems<Audio::FAudioPlatformDeviceInfo,Audio::FAudioPlatformDeviceInfo,int>
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x48,
               (FAudioPlatformDeviceInfo *)local_f8.AllocatorInstance.Data,iVar17);
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock_00);
  DestructItems<Audio::FAudioPlatformDeviceInfo,int>
            ((FAudioPlatformDeviceInfo *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FAudioPlatformDeviceInfo *)local_f8.AllocatorInstance.Data != (FAudioPlatformDeviceInfo *)0x0
     ) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return __return_storage_ptr__;
}

// GetDefaultOutputDevice_NoLock @ 148d34000

FName __thiscall
Audio::FWindowsMMDeviceCache::GetDefaultOutputDevice_NoLock(FWindowsMMDeviceCache *this)

{
  FName FVar1;
  FName in_RDX;
  
  FVar1 = this->DefaultRenderId[0];
  if (FVar1 == (FName)0x0) {
    FVar1 = this->DefaultRenderId[1];
  }
  *(FName *)in_RDX = FVar1;
  return in_RDX;
}

// GetFriendlyName @ 148d340f0

FString * __thiscall
Audio::FWindowsMMDeviceCache::GetFriendlyName
          (FWindowsMMDeviceCache *this,FString *__return_storage_ptr__,FName param_1)

{
  FCacheEntry *pFVar1;
  
  pFVar1 = TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
           ::Find((TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
                   *)&this->Cache,param_1);
  if (pFVar1 != (FCacheEntry *)0x0) {
    ::FString::FString(__return_storage_ptr__,&pFVar1->FriendlyName);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetHardwareInfo @ 148d34430

void __thiscall
Audio::FWindowsMMDeviceCache::GetHardwareInfo
          (FWindowsMMDeviceCache *this,
          TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
          *param_1,TMap<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>_>
                   *param_2,EDeviceEndpointType param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  uint uVar8;
  TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo> *pTVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
  *local_res10;
  TKeyInitializer<FName_const_&> local_c8;
  TMap<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
  *local_c0;
  EAudioDeviceState EStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  ForAnyElementType local_80;
  FName *local_78;
  ForAnyElementType local_70;
  FScriptContainerElement *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  ForAnyElementType FStack_40;
  
  local_70.Data = (FScriptContainerElement *)&this->CacheMutationLock;
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)local_70.Data);
  uVar8 = *(uint *)&(this->Cache).field_0x28;
  puVar1 = &(this->Cache).field_0x10;
  local_c0 = &this->Cache;
  EStack_b8 = Active;
  uStack_b4 = 1;
  local_a0 = 0;
  uStack_a4 = 0;
  if (uVar8 != 0) {
    puVar15 = *(uint **)&(this->Cache).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    local_a0 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)(int)EStack_b8;
      local_a0 = local_a0 + 0x20;
      EStack_b8 = EStack_b8 + Disabled;
      uStack_a4 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)EStack_b8)
      goto LAB_148d344ff;
      uVar12 = puVar15[lVar10 + 1];
    }
    uStack_b4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_b4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_90 = (int)lVar10;
    uStack_a4 = (local_a0 - 1) + local_90;
    if ((int)uVar8 < (int)uStack_a4) {
      uStack_a4 = uVar8;
    }
  }
LAB_148d344ff:
  iStack_98 = *(int *)&(this->Cache).field_0x8 - *(int *)&(this->Cache).field_0x34;
  uVar12 = *(uint *)&(this->Cache).field_0x28;
  uStack_a8 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_b4,EStack_b8);
  uVar16 = uVar12 & 0xffffffe0;
  TStack_60.CurrentBitIndex = uStack_a4;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_60._28_4_ = uStack_a4;
  TStack_60.BaseBitIndex = local_a0;
  FStack_40.Data = (FScriptContainerElement *)CONCAT44(uStack_94,iStack_98);
  local_b0 = puVar1;
  uStack_9c = uStack_a4;
  local_80.Data = (FScriptContainerElement *)local_c0;
  local_68 = (FScriptContainerElement *)local_c0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || ((int)uVar8 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar5.Data = local_80.Data;
  uVar8 = *(uint *)&(this->Cache).field_0x28;
  if (uVar12 != uVar8) {
    puVar11 = *(undefined1 **)&(this->Cache).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148d34610;
      uVar12 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_8c = (int)lVar10;
    uVar12 = local_8c + -1 + uVar16;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_148d34610:
  do {
    pFVar6 = local_68;
    if (*(int *)(local_68 + 8) - *(int *)(local_68 + 0x34) != (int)FStack_40.Data) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pFVar6 == FVar5.Data)) {
                    /* WARNING: Could not recover jumptable at 0x000148d347a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)local_70.Data);
      return;
    }
    lVar10 = *(longlong *)pFVar6 + (longlong)TStack_60.CurrentBitIndex * 0x80;
    if ((*(int *)(lVar10 + 0x30) == 0) && (*(EDeviceEndpointType *)(lVar10 + 0x3c) == param_3)) {
      TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
      ::Emplace<Audio::FWindowsMMDeviceCache::FCacheEntry_const_&>
                (local_res10,(FCacheEntry *)&stack0xffffffffffffff78,(bool *)(lVar10 + 8));
      lVar3 = *(longlong *)(lVar10 + 0x44);
      uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar11 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar14 = *(int *)(puVar11 +
                         (ulonglong)
                         (*(int *)&param_2->field_0x48 - 1U &
                         (int)((ulonglong)lVar3 >> 0x20) + uVar8) * 4);
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(*(longlong *)param_2 + (longlong)iVar14 * 0x18) == lVar3) {
              if (iVar14 != -1) {
                pTVar9 = TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>,FDefaultSetAllocator>
                         ::Find((TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>,FDefaultSetAllocator>
                                 *)param_2,*(FName *)(lVar10 + 0x44));
                piVar13 = (int *)&pTVar9->field_0x8;
                if (pTVar9 == (TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo> *)0x0)
                {
                  piVar13 = (int *)0x0;
                }
                if ((*piVar13 != *(int *)(lVar10 + 0x34)) &&
                   (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_8974508703872974040>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
                                       ,0x328,
                                       "ChannelInfo->LogicDeviceChannelCount == Entry.Value.NumChannels"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                piVar13[1] = piVar13[1] + *(int *)(lVar10 + 0x34);
                goto LAB_148d34719;
              }
              break;
            }
            iVar14 = *(int *)(*(longlong *)param_2 + 0x10 + (longlong)iVar14 * 0x18);
          } while (iVar14 != -1);
        }
      }
      local_78 = (FName *)(lVar10 + 0x44);
      TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>,FDefaultSetAllocator>
                  *)param_2,&local_c8,(bool *)&local_78);
      lVar3 = *(longlong *)param_2 + (longlong)(int)local_c8.Key * 0x18;
      *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(lVar10 + 0x34);
      piVar13 = (int *)(lVar3 + 0xc);
      *piVar13 = *piVar13 + *(int *)(lVar10 + 0x34);
    }
LAB_148d34719:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetLogicalAggregateDevices @ 148d347c0

TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FWindowsMMDeviceCache::GetLogicalAggregateDevices
          (FWindowsMMDeviceCache *this,
          TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName param_1,EDeviceEndpointType param_2)

{
  bool *this_00;
  FAudioPlatformDeviceInfo *this_01;
  ulonglong uVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  FPlatformRWLock *pFVar5;
  bool bVar6;
  int iVar7;
  TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FCacheEntry *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [4];
  FName local_bc;
  FPlatformRWLock *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  FPlatformRWLock *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = __return_storage_ptr__;
  AcquireSRWLockShared((PSRWLOCK)&this->DeviceEnumerator);
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_a0 = &(this->Cache).field_0x8;
  local_c8 = 0;
  iVar7 = *(int *)&(this->Cache).field_0x20;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = iStack_a8;
  if (iVar7 != 0) {
    puVar14 = *(uint **)&(this->Cache).field_0x18;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_a0;
    }
    uVar15 = *puVar14;
    iStack_a8 = 0;
    while (uVar15 == 0) {
      lVar9 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_148d34897;
      uVar15 = puVar14[lVar9 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_a4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_80 = (int)lVar9;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar7 < iStack_94) {
      iStack_94 = iVar7;
    }
  }
LAB_148d34897:
  local_b0 = &this->CacheMutationLock;
  iStack_88 = *(int *)&this->Cache - *(int *)&(this->Cache).field_0x2c;
  local_d8 = *(uint *)&(this->Cache).field_0x20;
  uStack_98 = 0xffffffff;
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uVar15 = local_d8 & 0xffffffe0;
  iVar11 = (int)local_d8 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  iStack_8c = iStack_94;
  local_70 = local_b0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if (((int)local_d8 < 0) || (local_c8._0_4_ = 0, iVar7 < (int)local_d8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  uVar2 = *(uint *)&(this->Cache).field_0x20;
  if (local_d8 != uVar2) {
    puVar13 = *(undefined1 **)&(this->Cache).field_0x18;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->Cache).field_0x8;
    }
    uVar16 = -1 << ((byte)local_d8 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      local_d8 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148d349ae;
      uVar16 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_d8 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar2 < (int)local_d8) {
      local_d8 = uVar2;
    }
  }
LAB_148d349ae:
  iVar7 = (int)local_c8;
  while( true ) {
    pFVar5 = local_70;
    if (*(int *)(local_70 + 1) - *(int *)((longlong)(local_70 + 6) + 4) != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar7 = (int)local_c8;
    }
    if (((TStack_68.CurrentBitIndex == local_d8) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Cache).field_0x8)) &&
       (pFVar5 == &this->CacheMutationLock)) break;
    pvVar3 = (pFVar5->Mutex).Mutex.Ptr;
    lVar9 = (longlong)TStack_68.CurrentBitIndex * 0x80;
    if (((*(FName *)(lVar9 + 0x44 + (longlong)pvVar3) == param_1) &&
        (*(int *)(lVar9 + 0x30 + (longlong)pvVar3) == 0)) &&
       (*(EDeviceEndpointType *)(lVar9 + 0x3c + (longlong)pvVar3) == param_2)) {
      if (iVar7 == local_c8._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x870,&local_d0,(int *)((longlong)&local_c8 + 4));
      }
      local_c8 = CONCAT44(local_c8._4_4_,iVar7 + 1);
      pFVar10 = (FCacheEntry *)(local_d0.Data + (longlong)iVar7 * 0x70);
      (pFVar10->DeviceId).ComparisonIndex = 0;
      (pFVar10->DeviceId).Number = 0;
      (pFVar10->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->FriendlyName).Data.ArrayNum = 0;
      (pFVar10->FriendlyName).Data.ArrayMax = 0;
      (pFVar10->DeviceFriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->DeviceFriendlyName).Data.ArrayNum = 0;
      (pFVar10->DeviceFriendlyName).Data.ArrayMax = 0;
      pFVar10->State = NotPresent;
      pFVar10->NumChannels = 0;
      pFVar10->SampleRate = 0;
      pFVar10->Type = Unknown;
      pFVar10->ChannelBitmask = 0;
      (pFVar10->HardwareId).ComparisonIndex = 0;
      (pFVar10->HardwareId).Number = 0;
      (pFVar10->FilterId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->FilterId).Data.ArrayNum = 0;
      (pFVar10->FilterId).Data.ArrayMax = 0;
      (pFVar10->OutputChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->OutputChannels).ArrayNum = 0;
      (pFVar10->OutputChannels).ArrayMax = 0;
      (pFVar10->MutationLock).Mutex.Mutex.Ptr = (void *)0x0;
      FCacheEntry::operator=(pFVar10,(FCacheEntry *)((longlong)pvVar3 + lVar9 + 8));
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    iVar7 = (int)local_c8;
  }
  AlgoImpl::
  IntroSortInternal<Audio::FWindowsMMDeviceCache::FCacheEntry,int,FIdentityFunctor,_Audio::FWindowsMMDeviceCache::GetLogicalAggregateDevices_::__l2::<lambda_1>_>
            ((FCacheEntry *)local_d0.Data,iVar7,local_res10._0_1_,(<lambda_1>)local_res10._0_1_);
  pTVar8 = local_res10;
  iVar7 = (int)local_c8;
  pFVar10 = (FCacheEntry *)(local_d0.Data + (longlong)(int)local_c8 * 0x70);
  FVar12.Data = local_d0.Data;
  while( true ) {
    if ((int)local_c8 != iVar7) {
      `TCheckedPointerIterator<Audio::FWindowsMMDeviceCache::FCacheEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c0);
    }
    if ((FCacheEntry *)FVar12.Data == pFVar10) break;
    iVar11 = pTVar8->ArrayNum;
    if (iVar11 == pTVar8->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar11 + 1;
    this_01 = (FAudioPlatformDeviceInfo *)
              ((pTVar8->AllocatorInstance).Data + (longlong)iVar11 * 0x48);
    (this_01->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->Name).Data.ArrayNum = 0;
    (this_01->Name).Data.ArrayMax = 0;
    (this_01->DeviceId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->DeviceId).Data.ArrayNum = 0;
    (this_01->DeviceId).Data.ArrayMax = 0;
    (this_01->OutputChannelArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->OutputChannelArray).ArrayNum = 0;
    (this_01->OutputChannelArray).ArrayMax = 0;
    FAudioPlatformDeviceInfo::Reset(this_01);
    local_bc = this->DefaultCaptureId[2];
    this_00 = &this[-1].bIsAggregateDeviceSupportEnabled;
    if (local_bc == (FName)0x0) {
      local_bc = this->DefaultRenderId[0];
      if (local_bc == (FName)0x0) {
        local_bc.ComparisonIndex.Value = 0;
        local_bc.Number = 0;
        MakeDeviceInfo((FWindowsMMDeviceCache *)this_00,(FCacheEntry *)FVar12.Data,(FName)0x0,
                       this_01);
        FVar12.Data = FVar12.Data + 0x70;
      }
      else {
        MakeDeviceInfo((FWindowsMMDeviceCache *)this_00,(FCacheEntry *)FVar12.Data,local_bc,this_01)
        ;
        FVar12.Data = FVar12.Data + 0x70;
      }
    }
    else {
      MakeDeviceInfo((FWindowsMMDeviceCache *)this_00,(FCacheEntry *)FVar12.Data,local_bc,this_01);
      FVar12.Data = FVar12.Data + 0x70;
    }
  }
  DestructItems<Audio::FWindowsMMDeviceCache::FCacheEntry,int>
            ((FCacheEntry *)local_d0.Data,(int)local_c8);
  if ((FCacheEntry *)local_d0.Data != (FCacheEntry *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->DeviceEnumerator);
  return pTVar8;
}

// IsAggregateDeviceSupportEnabled @ 148d34c50

bool __thiscall
Audio::FWindowsMMDeviceCache::IsAggregateDeviceSupportEnabled(FWindowsMMDeviceCache *this)

{
  if ((this->bIsAggregateDeviceSupportEnabled == false) && (EnableAggregateAudioDevicesCVar == 0)) {
    return false;
  }
  return true;
}

// IsAggregateHardwareDeviceId @ 148d34c70

bool __thiscall
Audio::FWindowsMMDeviceCache::IsAggregateHardwareDeviceId(FWindowsMMDeviceCache *this,FName param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  FPlatformRWLock *pFVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  FPlatformRWLock *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  FPlatformRWLock *local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockShared((PSRWLOCK)&this->DeviceEnumerator);
  if (param_1 != (FName)0x0) {
    iVar4 = *(int *)&(this->Cache).field_0x20;
    puVar2 = &(this->Cache).field_0x8;
    iVar13 = 0;
    pFVar3 = &this->CacheMutationLock;
    uVar10 = 1;
    iVar15 = 0;
    iVar11 = 0;
    if (iVar4 != 0) {
      puVar16 = *(uint **)&(this->Cache).field_0x18;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar2;
      }
      uVar17 = *puVar16;
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar11 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148d34d40;
        uVar17 = puVar16[lVar12 + 1];
      }
      uVar10 = -uVar17 & uVar17;
      uVar1 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar11 = iVar15 + -1 + local_res10;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
    }
LAB_148d34d40:
    uVar17 = *(uint *)&(this->Cache).field_0x20;
    TStack_60._padding_ = CONCAT44(uVar10,iVar13);
    uVar10 = uVar17 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar11;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar17 >> 5;
    TStack_60._28_4_ = iVar11;
    TStack_60.BaseBitIndex = iVar15;
    uStack_40 = CONCAT44(uStack_6c,*(int *)&this->Cache - *(int *)&(this->Cache).field_0x2c);
    local_res18 = pFVar3;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pFVar7 = local_res18;
    uVar5 = *(uint *)&(this->Cache).field_0x20;
    if (uVar17 != uVar5) {
      puVar14 = *(undefined1 **)&(this->Cache).field_0x18;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar2;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar13;
        uVar10 = uVar10 + 0x20;
        iVar13 = iVar13 + 1;
        uVar17 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_148d34e50;
        uVar17 = *(uint *)(puVar14 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar17 = (int)lVar12 + -1 + uVar10;
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
LAB_148d34e50:
    do {
      if (*(int *)&this->Cache - *(int *)&(this->Cache).field_0x2c != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar17) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar3 == pFVar7)
         ) {
        DestructItems<Audio::FWindowsMMDeviceCache::FCacheEntry,int>((FCacheEntry *)0x0,0);
        break;
      }
      if (*(FName *)((longlong)TStack_60.CurrentBitIndex * 0x80 + 0x44 +
                    (longlong)(pFVar3->Mutex).Mutex.Ptr) == param_1) goto LAB_148d34ec9;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while( true );
  }
  bVar8 = false;
LAB_148d34eab:
  ReleaseSRWLockShared((PSRWLOCK)&this->DeviceEnumerator);
  return bVar8;
LAB_148d34ec9:
  DestructItems<Audio::FWindowsMMDeviceCache::FCacheEntry,int>((FCacheEntry *)0x0,0);
  bVar8 = true;
  goto LAB_148d34eab;
}

// MakeDeviceInfo @ 148d34fd0

void __thiscall
Audio::FWindowsMMDeviceCache::MakeDeviceInfo
          (FWindowsMMDeviceCache *this,FCacheEntry *param_1,FName param_2,
          FAudioPlatformDeviceInfo *param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  FAudioPlatformDeviceInfo::Reset(param_3);
  ::FString::operator=(&param_3->Name,&param_1->FriendlyName);
  pFVar3 = ::FName::GetPlainNameString(&param_1->DeviceId,&local_18);
  pFVar1 = &param_3->DeviceId;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->DeviceId).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (param_3->DeviceId).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  param_3->NumChannels = param_1->NumChannels;
  param_3->SampleRate = param_1->SampleRate;
  TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>::operator=
            (&param_3->OutputChannelArray,&param_1->OutputChannels);
  param_3->Format = Float;
  param_3->bIsSystemDefault = param_1->DeviceId == param_2;
  return;
}

// OnDefaultCaptureDeviceChanged @ 148d350c0

void __thiscall
Audio::FWindowsMMDeviceCache::OnDefaultCaptureDeviceChanged
          (FWindowsMMDeviceCache *this,EAudioDeviceRole param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FName local_res8;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  pwVar3 = L"";
  if (2 < (int)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAudioDeviceRole < EAudioDeviceRole::COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
                       ,0x1fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar3);
  this->DefaultCaptureId[(int)param_1] = local_res8;
                    /* WARNING: Could not recover jumptable at 0x000148d35149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  return;
}

// OnDefaultRenderDeviceChanged @ 148d35980

void __thiscall
Audio::FWindowsMMDeviceCache::OnDefaultRenderDeviceChanged
          (FWindowsMMDeviceCache *this,EAudioDeviceRole param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FName local_res8;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  pwVar3 = L"";
  if (2 < (int)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAudioDeviceRole < EAudioDeviceRole::COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
                       ,0x201,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar3);
  this->DefaultRenderId[(int)param_1] = local_res8;
                    /* WARNING: Could not recover jumptable at 0x000148d35a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  return;
}

// OnDeviceAdded @ 148d35a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FWindowsMMDeviceCache::OnDeviceAdded
          (FWindowsMMDeviceCache *this,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FCacheEntry *this_00;
  TOptional<Audio::FWindowsMMDeviceCache::FCacheEntry> *local_98;
  TOptional<Audio::FWindowsMMDeviceCache::FCacheEntry> *local_90;
  TOptional<Audio::FWindowsMMDeviceCache::FCacheEntry> local_88;
  
  BuildCacheEntry(this,&local_88,param_1);
  if (local_88.bIsSet == false) {
    if ((byte)LogAudioEnumeration._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
    if ((local_88.bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
              ::Find((TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
                      *)&this->Cache,local_88.TypedValue.DeviceId);
    if (this_00 == (FCacheEntry *)0x0) {
      if (local_88.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((local_88.bIsSet == false) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_98 = &local_88;
      local_90 = &local_88;
      TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&,Audio::FWindowsMMDeviceCache::FCacheEntry_&&>_>
                ((TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>,FDefaultSetAllocator>
                  *)&this->Cache,
                 (TPairInitializer<FName_&,Audio::FWindowsMMDeviceCache::FCacheEntry_&&> *)
                 &stack0x00000020,(bool *)&local_98);
    }
    else {
      if ((local_88.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FCacheEntry::operator=(this_00,&local_88.TypedValue);
      if (2 < (byte)LogAudioEnumeration._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  }
  if (local_88.bIsSet != false) {
    FCacheEntry::~FCacheEntry(&local_88.TypedValue);
  }
  return;
}

// OnDeviceRemoved @ 148d35f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FWindowsMMDeviceCache::OnDeviceRemoved
          (FWindowsMMDeviceCache *this,FString *param_1,bool param_2)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined1 *puVar5;
  FName local_res8;
  FName local_res10;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar4);
  FVar1 = local_res8;
  if (2 < (byte)LogAudioEnumeration._0_1_) {
    uVar2 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
    if (*(int *)&(this->Cache).field_0x8 != *(int *)&(this->Cache).field_0x34) {
      puVar5 = *(undefined1 **)&(this->Cache).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->Cache).field_0x38;
      }
      iVar3 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->Cache).field_0x48 - 1U & FVar1.Number + uVar2) * 4)
      ;
      if (iVar3 != -1) {
        do {
          if (*(FName *)((longlong)iVar3 * 0x80 + *(longlong *)&this->Cache) == FVar1)
          goto LAB_148d36027;
          iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *(longlong *)&this->Cache);
        } while (iVar3 != -1);
      }
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
  }
LAB_148d36027:
  local_res10 = local_res8;
  if (*(int *)&(this->Cache).field_0x8 != *(int *)&(this->Cache).field_0x34) {
    uVar2 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
    TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FCacheEntry>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>,FDefaultSetAllocator>
                         *)&this->Cache,local_res8.Number + uVar2,&local_res10);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheMutationLock);
  return;
}

// OnDeviceStateChanged @ 148d363b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FWindowsMMDeviceCache::OnDeviceStateChanged
          (FWindowsMMDeviceCache *this,FString *param_1,EAudioDeviceState param_2,bool param_3)

{
  FCacheEntry *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar2);
  AcquireSRWLockShared((PSRWLOCK)&this->CacheMutationLock);
  pFVar1 = TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
           ::Find((TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
                   *)&this->Cache,local_res8);
  if (pFVar1 != (FCacheEntry *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar1->MutationLock);
    if ((5 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
      Audio::ToString(param_2);
      Audio::ToString(pFVar1->State);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    }
    pFVar1->State = param_2;
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar1->MutationLock);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->CacheMutationLock);
  return;
}

// OnFormatChanged @ 148d36810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FWindowsMMDeviceCache::OnFormatChanged
          (FWindowsMMDeviceCache *this,FString *param_1,FFormatChangedData *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  ForAnyElementType FVar8;
  BOOLEAN BVar9;
  bool bVar10;
  FName *pFVar11;
  FCacheEntry *pFVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FName local_res20;
  FCacheEntry local_d8;
  FName local_68;
  FString local_60;
  FString local_50;
  
  iVar14 = (param_1->Data).ArrayNum;
  iVar13 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar13 = 0;
  }
  pFVar11 = ::FName::FName(&local_res20,iVar13,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           FNAME_Add);
  bVar10 = false;
  FVar5 = *pFVar11;
  AcquireSRWLockShared((PSRWLOCK)&this->CacheMutationLock);
  pFVar12 = TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
            ::Find((TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
                    *)&this->Cache,FVar5);
  if (pFVar12 == (FCacheEntry *)0x0) goto LAB_148d36daf;
  iVar13 = (param_1->Data).ArrayNum;
  iVar14 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar14 = 0;
  }
  ::FName::FName(&local_68,iVar14,(wchar_t *)(param_1->Data).AllocatorInstance.Data,FNAME_Add);
  local_d8.DeviceFriendlyName.Data.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_d8.DeviceFriendlyName.Data.ArrayMax = _UNK_150631d44;
  local_d8.State = _UNK_150631d48;
  local_d8.NumChannels = _UNK_150631d4c;
  local_d8.OutputChannels.ArrayNum = 0;
  local_d8.OutputChannels.ArrayMax = 0;
  local_d8.MutationLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
  local_d8.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.FriendlyName.Data.ArrayNum = 0;
  local_d8.FriendlyName.Data.ArrayMax = 0;
  local_d8.DeviceFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.SampleRate = 0;
  local_d8.Type = Unknown;
  local_d8.ChannelBitmask = 0;
  local_d8.HardwareId.ComparisonIndex.Value = 0;
  local_d8.HardwareId.Number = 0;
  local_d8.FilterId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.FilterId.Data.ArrayNum = 0;
  local_d8.FilterId.Data.ArrayMax = 0;
  local_d8.OutputChannels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar12->MutationLock);
  local_d8.DeviceId = pFVar12->DeviceId;
  ::FString::operator=(&local_d8.FriendlyName,&pFVar12->FriendlyName);
  ::FString::operator=(&local_d8.DeviceFriendlyName,&pFVar12->DeviceFriendlyName);
  local_d8.State = pFVar12->State;
  local_d8.NumChannels = pFVar12->NumChannels;
  local_d8.SampleRate = pFVar12->SampleRate;
  local_d8.Type = pFVar12->Type;
  local_d8.ChannelBitmask = pFVar12->ChannelBitmask;
  TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>::operator=
            (&local_d8.OutputChannels,&pFVar12->OutputChannels);
  pFVar1 = &pFVar12->FilterId;
  local_d8.HardwareId.ComparisonIndex = (pFVar12->HardwareId).ComparisonIndex;
  local_d8.HardwareId.Number = (pFVar12->HardwareId).Number;
  ::FString::operator=(&local_d8.FilterId,pFVar1);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar12->MutationLock);
  if (local_d8.NumChannels != param_2->NumChannels) {
    if ((5 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    }
    bVar10 = true;
    local_d8.NumChannels = param_2->NumChannels;
  }
  bVar7 = bVar10;
  if (local_d8.SampleRate != param_2->SampleRate) {
    if ((5 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    }
    local_d8.SampleRate = param_2->SampleRate;
    bVar7 = true;
  }
  if (local_d8.ChannelBitmask == param_2->ChannelBitmask) {
    if (bVar10) goto LAB_148d36a88;
  }
  else {
    if ((5 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    }
    local_d8.ChannelBitmask = param_2->ChannelBitmask;
    bVar7 = true;
LAB_148d36a88:
    if ((5 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
      ToFString(&local_60,&local_d8.OutputChannels);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    EnumerateChannelMask(this,param_2->ChannelBitmask,&local_d8);
    if ((5 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
      ToFString(&local_50,&local_d8.OutputChannels);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  if (bVar7) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar12->MutationLock);
    FVar8.Data = local_d8.FriendlyName.Data.AllocatorInstance.Data;
    pFVar2 = &pFVar12->FriendlyName;
    pFVar12->DeviceId = local_d8.DeviceId;
    if (pFVar2 != &local_d8.FriendlyName) {
      iVar13 = local_d8.FriendlyName.Data.ArrayNum;
      lVar15 = (longlong)local_d8.FriendlyName.Data.ArrayNum;
      piVar4 = &(pFVar12->FriendlyName).Data.ArrayMax;
      iVar14 = *piVar4;
      (pFVar12->FriendlyName).Data.ArrayNum = local_d8.FriendlyName.Data.ArrayNum;
      if ((local_d8.FriendlyName.Data.ArrayNum == 0) && (iVar14 == 0)) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d8.FriendlyName.Data.ArrayNum,iVar14,(ForAnyElementType *)pFVar2,
                   local_d8.FriendlyName.Data.ArrayNum,piVar4);
        if (iVar13 != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,FVar8.Data,lVar15 * 2);
        }
      }
    }
    FVar8.Data = local_d8.DeviceFriendlyName.Data.AllocatorInstance.Data;
    pFVar2 = &pFVar12->DeviceFriendlyName;
    if (pFVar2 != &local_d8.DeviceFriendlyName) {
      iVar13 = local_d8.DeviceFriendlyName.Data.ArrayNum;
      lVar15 = (longlong)local_d8.DeviceFriendlyName.Data.ArrayNum;
      piVar4 = &(pFVar12->DeviceFriendlyName).Data.ArrayMax;
      iVar14 = *piVar4;
      (pFVar12->DeviceFriendlyName).Data.ArrayNum = local_d8.DeviceFriendlyName.Data.ArrayNum;
      if ((local_d8.DeviceFriendlyName.Data.ArrayNum == 0) && (iVar14 == 0)) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d8.DeviceFriendlyName.Data.ArrayNum,iVar14,(ForAnyElementType *)pFVar2,
                   local_d8.DeviceFriendlyName.Data.ArrayNum,piVar4);
        if (iVar13 != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,FVar8.Data,lVar15 * 2);
        }
      }
    }
    FVar8.Data = local_d8.OutputChannels.AllocatorInstance.Data;
    pTVar3 = &pFVar12->OutputChannels;
    pFVar12->State = local_d8.State;
    pFVar12->NumChannels = local_d8.NumChannels;
    pFVar12->SampleRate = local_d8.SampleRate;
    pFVar12->Type = local_d8.Type;
    pFVar12->ChannelBitmask = local_d8.ChannelBitmask;
    if (pTVar3 != &local_d8.OutputChannels) {
      iVar14 = local_d8.OutputChannels.ArrayNum;
      lVar15 = (longlong)local_d8.OutputChannels.ArrayNum;
      piVar4 = &(pFVar12->OutputChannels).ArrayMax;
      (pFVar12->OutputChannels).ArrayNum = local_d8.OutputChannels.ArrayNum;
      if ((local_d8.OutputChannels.ArrayNum == 0) && (*piVar4 == 0)) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_d8.OutputChannels.ArrayNum,*piVar4,&pTVar3->AllocatorInstance,
                   local_d8.OutputChannels.ArrayNum,piVar4);
        if (iVar14 != 0) {
          memcpy((pTVar3->AllocatorInstance).Data,FVar8.Data,lVar15 << 2);
        }
      }
    }
    FVar8.Data = local_d8.FilterId.Data.AllocatorInstance.Data;
    FVar5.Number = local_d8.HardwareId.Number;
    FVar5.ComparisonIndex.Value = local_d8.HardwareId.ComparisonIndex.Value;
    pFVar12->HardwareId = FVar5;
    if (pFVar1 != &local_d8.FilterId) {
      iVar13 = local_d8.FilterId.Data.ArrayNum;
      lVar15 = (longlong)local_d8.FilterId.Data.ArrayNum;
      piVar4 = &(pFVar12->FilterId).Data.ArrayMax;
      iVar14 = *piVar4;
      (pFVar12->FilterId).Data.ArrayNum = local_d8.FilterId.Data.ArrayNum;
      if ((local_d8.FilterId.Data.ArrayNum == 0) && (iVar14 == 0)) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d8.FilterId.Data.ArrayNum,iVar14,(ForAnyElementType *)pFVar1,
                   local_d8.FilterId.Data.ArrayNum,piVar4);
        if (iVar13 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar8.Data,lVar15 * 2);
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar12->MutationLock);
  }
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_d8.MutationLock);
  if (BVar9 == '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_d8.MutationLock);
  }
  if (local_d8.OutputChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.OutputChannels.AllocatorInstance.Data);
  }
  if (local_d8.FilterId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.FilterId.Data.AllocatorInstance.Data);
  }
  if (local_d8.DeviceFriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.DeviceFriendlyName.Data.AllocatorInstance.Data);
  }
  if (local_d8.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.FriendlyName.Data.AllocatorInstance.Data);
  }
LAB_148d36daf:
                    /* WARNING: Could not recover jumptable at 0x000148d36dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->CacheMutationLock);
  return;
}

// QueryDeviceDataFlow @ 148d376a0

EDeviceEndpointType __thiscall
Audio::FWindowsMMDeviceCache::QueryDeviceDataFlow
          (FWindowsMMDeviceCache *this,TComPtr<IMMDevice> *param_1)

{
  code *pcVar1;
  bool bVar2;
  EDeviceEndpointType EVar3;
  int iVar4;
  int local_res10 [2];
  longlong *local_res18 [2];
  
  EVar3 = Unknown;
  local_res18[0] = (longlong *)0x0;
  if ((param_1->RawPointer == (IMMDevice *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  iVar4 = (**(code **)*param_1->RawPointer)
                    (param_1->RawPointer,&_GUID_1be09788_6894_4089_8586_9a2a6c265ac5,local_res18);
  if (-1 < iVar4) {
    local_res10[0] = 0;
    if ((local_res18[0] == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    iVar4 = (**(code **)(*local_res18[0] + 0x18))(local_res18[0],local_res10);
    if (-1 < iVar4) {
      if (local_res10[0] == 0) {
        EVar3 = Render;
      }
      else if (local_res10[0] == 1) {
        EVar3 = Capture;
      }
    }
  }
  if (local_res18[0] != (longlong *)0x0) {
    (**(code **)(*local_res18[0] + 0x10))();
  }
  return EVar3;
}

// SynthesizeAggregateDeviceList @ 148d385f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FWindowsMMDeviceCache::SynthesizeAggregateDeviceList
          (FWindowsMMDeviceCache *this,
          TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EDeviceEndpointType param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  FName FVar3;
  code *pcVar4;
  TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  longlong lVar7;
  TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo> *pTVar9;
  byte bVar10;
  uint *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  FCacheEntry *pFVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [16];
  FAudioPlatformDeviceInfo local_1a8;
  TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
  *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_bc = 0x80;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  uVar16 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_b8 = 0xffffffff;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  GetHardwareInfo(this,(TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
                        *)local_e8,
                  (TMap<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>_>
                   *)&local_98,param_1);
  uVar17 = local_c0;
  uStack_14c = 1;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uStack_13c = local_138;
  if (local_c0 != 0) {
    puVar11 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar11 = local_c8;
    }
    uVar14 = *puVar11;
    local_138 = 0;
    uVar16 = 0;
    while (uVar14 == 0) {
      lVar7 = (longlong)(int)uVar16;
      local_138 = local_138 + 0x20;
      uVar16 = uVar16 + 1;
      uStack_13c = local_c0;
      if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < (int)uVar16)
      goto LAB_148d38711;
      uVar14 = puVar11[lVar7 + 1];
    }
    uStack_14c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_14c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_128 = (int)lVar7;
    uStack_13c = (local_138 - 1) + local_128;
    if ((int)local_c0 < (int)uStack_13c) {
      uStack_13c = local_c0;
    }
  }
LAB_148d38711:
  local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uVar14 = local_c0 & 0xffffffe0;
  iStack_130 = local_e8._8_4_ - local_b4;
  uStack_140 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_13c;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_14c,uVar16);
  iVar13 = (int)local_c0 >> 5;
  TStack_118._28_4_ = uStack_13c;
  TStack_118.BaseBitIndex = local_138;
  uStack_f8 = CONCAT44(uStack_12c,iStack_130);
  bVar10 = (byte)local_c0;
  local_158 = (TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
               *)local_e8;
  uStack_150 = uVar16;
  uStack_134 = uStack_13c;
  local_120 = (TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
               *)local_e8;
  TStack_118.Array = local_148;
  if (((int)local_c0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  if (uVar17 != local_c0) {
    puVar11 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar11 = local_c8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar11[iVar13];
    while (uVar16 == 0) {
      lVar7 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = local_c0;
      if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < iVar13)
      goto LAB_148d3880f;
      uVar16 = puVar11[lVar7 + 1];
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_124 = (int)lVar7;
    uVar17 = local_124 + -1 + uVar14;
    if ((int)local_c0 < (int)uVar17) {
      uVar17 = local_c0;
    }
  }
LAB_148d3880f:
  do {
    pTVar5 = local_120;
    if (*(int *)&(local_120->Elements).field_0x8 - *(int *)&(local_120->Elements).field_0x34 !=
        (int)uStack_f8) {
      local_1b8[0] = 0;
      `TSparseArray<TSparseSetElement<Audio::FWindowsMMDeviceCache::FCacheEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b8);
    }
    if (((TStack_118.CurrentBitIndex == uVar17) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (pTVar5 == (TSet<Audio::FWindowsMMDeviceCache::FCacheEntry,Audio::FWindowsMMDeviceCache::FCacheKeyFuncs,FDefaultSetAllocator>
                   *)local_e8)) {
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<Audio::FWindowsMMDeviceCache::FCacheEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Audio::FWindowsMMDeviceCache::FCacheEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<Audio::FWindowsMMDeviceCache::FCacheEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      return __return_storage_ptr__;
    }
    pFVar15 = (FCacheEntry *)
              ((longlong)TStack_118.CurrentBitIndex * 0x78 + *(longlong *)&pTVar5->Elements);
    FVar3 = pFVar15->HardwareId;
    uVar16 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar12 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar12 = local_98.Hash.SecondaryData;
      }
      for (iVar13 = *(int *)((longlong)FVar12 +
                            (ulonglong)(local_98.HashSize - 1U & uVar16 + FVar3.Number) * 4);
          iVar13 != -1; iVar13 = *(int *)(local_98.Elements._0_8_ + 0x10 + (longlong)iVar13 * 0x18))
      {
        if (*(FName *)(local_98.Elements._0_8_ + (longlong)iVar13 * 0x18) == FVar3) {
          pTVar9 = TSet<TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo>,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo,0>,FDefaultSetAllocator>
                   ::Find(&local_98,pFVar15->HardwareId);
          if ((pTVar9 == (TTuple<FName,Audio::FWindowsMMDeviceCache::FDeviceChannelInfo> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
          CreateAggregateDeviceInfo(&local_1a8,pFVar15,(FDeviceChannelInfo *)&pTVar9->field_0x8);
          if (0 < local_1a8.NumDirectOutChannels) {
            iVar13 = __return_storage_ptr__->ArrayNum;
            if (iVar13 == __return_storage_ptr__->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x848,&__return_storage_ptr__->AllocatorInstance,
                                  &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar13 + 1;
            pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 0x48;
            *(undefined8 *)pFVar1 = 0;
            *(FScriptContainerElement **)pFVar1 = local_1a8.Name.Data.AllocatorInstance.Data;
            local_1a8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar1 + 8) = local_1a8.Name.Data.ArrayNum;
            *(int *)(pFVar1 + 0xc) = local_1a8.Name.Data.ArrayMax;
            local_1a8.Name.Data.ArrayNum = 0;
            local_1a8.Name.Data.ArrayMax = 0;
            *(undefined8 *)(pFVar1 + 0x10) = 0;
            *(FScriptContainerElement **)(pFVar1 + 0x10) =
                 local_1a8.DeviceId.Data.AllocatorInstance.Data;
            local_1a8.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar1 + 0x18) = local_1a8.DeviceId.Data.ArrayNum;
            *(int *)(pFVar1 + 0x1c) = local_1a8.DeviceId.Data.ArrayMax;
            local_1a8.DeviceId.Data.ArrayNum = 0;
            local_1a8.DeviceId.Data.ArrayMax = 0;
            *(int *)(pFVar1 + 0x20) = local_1a8.NumChannels;
            *(int *)(pFVar1 + 0x24) = local_1a8.NumDirectOutChannels;
            *(int *)(pFVar1 + 0x28) = local_1a8.SampleRate;
            *(undefined8 *)(pFVar1 + 0x30) = 0;
            *(Type *)(pFVar1 + 0x2c) = local_1a8.Format;
            *(FScriptContainerElement **)(pFVar1 + 0x30) =
                 local_1a8.OutputChannelArray.AllocatorInstance.Data;
            local_1a8.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar1 + 0x38) = local_1a8.OutputChannelArray.ArrayNum;
            *(int *)(pFVar1 + 0x3c) = local_1a8.OutputChannelArray.ArrayMax;
            local_1a8.OutputChannelArray.ArrayNum = 0;
            local_1a8.OutputChannelArray.ArrayMax = 0;
            pFVar1[0x40] = (FScriptContainerElement)
                           (local_1a8.bIsSystemDefault | (byte)pFVar1[0x40] & 0xfe);
          }
          if (local_1a8.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_1a8.OutputChannelArray.AllocatorInstance.Data);
          }
          if (local_1a8.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.DeviceId.Data.AllocatorInstance.Data);
          }
          if (local_1a8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Name.Data.AllocatorInstance.Data);
          }
          goto LAB_148d388ef;
        }
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8974508703872973996>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMDeviceInfoCache.cpp"
                       ,0x354,"DeviceChannelInfos.Contains(Entry.HardwareId)");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
LAB_148d388ef:
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  } while( true );
}

