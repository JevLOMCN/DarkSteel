// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMMDeviceEnumeration
// Functions: 30

// FWindowsMMNotificationClient @ 148d2fe40

/* WARNING: Enum "Type": Some values do not have unique names */

FWindowsMMNotificationClient * __thiscall
Audio::FWindowsMMNotificationClient::FWindowsMMNotificationClient
          (FWindowsMMNotificationClient *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TComPtr<IAudioSessionManager> *pTVar1;
  TComPtr<IMMDeviceEnumerator> *ppv;
  IMMDeviceEnumerator *pIVar2;
  IMMDevice *pIVar3;
  IAudioSessionControl *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  HRESULT HVar9;
  int iVar10;
  FWindowsMMNotificationClient *pFVar11;
  longlong *plVar12;
  TComPtr<IMMDevice> TVar13;
  TComPtr<IMMDevice> local_res8;
  longlong *local_res10;
  longlong *local_res18;
  FString local_88;
  FString local_78;
  undefined8 local_68;
  wchar_t *pwStack_60;
  undefined8 local_58;
  undefined8 local_50;
  wchar_t *pwStack_48;
  undefined8 local_40;
  
  bVar6 = false;
  bVar8 = false;
  local_res8.RawPointer = local_res8.RawPointer & 0xffffffff00000000;
  lpCriticalSection = &this->SessionRegistrationCS;
  this->_padding_ = (longlong)&_vftable__for__IMMNotificationClient__;
  this->_padding_ = (longlong)&_vftable__for__IAudioSessionEvents__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
  (this->SessionManager).RawPointer = (IAudioSessionManager *)0x0;
  pTVar1 = &this->SessionManager;
  (this->SessionControls).RawPointer = (IAudioSessionControl *)0x0;
  ppv = &this->DeviceEnumerator;
  (this->DeviceListeningToSessionEvents).RawPointer = (IMMDevice *)0x0;
  this->bComInitialized = false;
  this->bHasDisconnectSessionHappened = (atomic<bool>)0x0;
  *(undefined8 *)&(this->Listeners).Elements = 0;
  *(undefined8 *)&(this->Listeners).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Listeners).Elements.field_0x20 = 0;
  this->Ref = 1;
  *(undefined4 *)&(this->Listeners).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Listeners).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Listeners).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Listeners).Elements.field_0x34 = 0;
  (this->Listeners).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Listeners).HashSize = 0;
  (this->ListenersSetRwLock).Mutex.Mutex.Ptr = (void *)0x0;
  ppv->RawPointer = (IMMDeviceEnumerator *)0x0;
  bVar7 = FWindowsPlatformMisc::CoInitialize(Singlethreaded);
  this->bComInitialized = bVar7;
  HVar9 = CoCreateInstance((IID *)&_GUID_bcde0395_e52f_467c_8e3d_c4579291692e,(LPUNKNOWN)0x0,1,
                           (IID *)&_GUID_a95664d2_9614_4f35_a746_de8db63617e6,&ppv->RawPointer);
  if (HVar9 == 0) {
    if ((ppv->RawPointer == (IMMDeviceEnumerator *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FWindowsMMNotificationClient *)(*pcVar5)();
      return pFVar11;
    }
    (**(code **)((longlong)*ppv->RawPointer + 0x30))(ppv->RawPointer,this);
  }
  pIVar2 = ppv->RawPointer;
  if (pIVar2 == (IMMDeviceEnumerator *)0x0) {
    return this;
  }
  local_res8.RawPointer = (IMMDevice *)0x0;
  iVar10 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,0,0,&local_res8);
  if (iVar10 < 0) goto LAB_148d30327;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->DeviceListeningToSessionEvents).RawPointer != local_res8.RawPointer) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->SessionControls).RawPointer != (IAudioSessionControl *)0x0) {
      if (5 < (byte)LogAudioEnumeration._0_1_) {
        pIVar3 = (this->DeviceListeningToSessionEvents).RawPointer;
        TVar13.RawPointer = local_res8.RawPointer;
        if (pIVar3 != (IMMDevice *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3);
          ::FString::FString(&local_78,L"[No Friendly Name for Device]");
          local_res10 = (longlong *)0x0;
          iVar10 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,0,&local_res10);
          if (iVar10 < 0) {
LAB_148d3004c:
            if (local_res10 != (longlong *)0x0) {
              (**(code **)(*local_res10 + 0x10))();
            }
          }
          else if (local_res10 != (longlong *)0x0) {
            local_58 = 0;
            local_68 = 0;
            pwStack_60 = (wchar_t *)0x0;
            iVar10 = (**(code **)(*local_res10 + 0x28))
                               (local_res10,&PKEY_Device_FriendlyName,&local_68);
            if ((-1 < iVar10) && (pwStack_60 != (wchar_t *)0x0)) {
              ::FString::operator=(&local_78,pwStack_60);
            }
            PropVariantClear((PROPVARIANT *)&local_68);
            goto LAB_148d3004c;
          }
          bVar6 = true;
          bVar8 = true;
          TVar13.RawPointer = pIVar3;
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
        if ((bVar8) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((bVar6) && (TVar13.RawPointer != (IMMDevice *)0x0)) {
          (**(code **)((longlong)*TVar13.RawPointer + 0x10))(TVar13.RawPointer);
        }
      }
      if (((this->SessionControls).RawPointer == (IAudioSessionControl *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FWindowsMMNotificationClient *)(*pcVar5)();
        return pFVar11;
      }
      pIVar4 = (this->SessionControls).RawPointer;
      plVar12 = &this->_padding_;
      if (this == (FWindowsMMNotificationClient *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      (**(code **)((longlong)*pIVar4 + 0x58))(pIVar4,plVar12);
      pIVar4 = (this->SessionControls).RawPointer;
      if (pIVar4 != (IAudioSessionControl *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))();
        (this->SessionControls).RawPointer = (IAudioSessionControl *)0x0;
      }
    }
    if (pTVar1->RawPointer != (IAudioSessionManager *)0x0) {
      (**(code **)((longlong)*pTVar1->RawPointer + 0x10))();
      pTVar1->RawPointer = (IAudioSessionManager *)0x0;
    }
    pIVar3 = (this->DeviceListeningToSessionEvents).RawPointer;
    if (pIVar3 != (IMMDevice *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
      (this->DeviceListeningToSessionEvents).RawPointer = (IMMDevice *)0x0;
    }
    LOCK();
    this->bHasDisconnectSessionHappened = (atomic<bool>)0x0;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->DeviceListeningToSessionEvents).RawPointer != local_res8.RawPointer) {
      if (local_res8.RawPointer != (IMMDevice *)0x0) {
        (**(code **)((longlong)*local_res8.RawPointer + 8))();
      }
      pIVar3 = (this->DeviceListeningToSessionEvents).RawPointer;
      if (pIVar3 != (IMMDevice *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
      (this->DeviceListeningToSessionEvents).RawPointer = local_res8.RawPointer;
    }
    if ((local_res8.RawPointer != (IMMDevice *)0x0) &&
       (iVar10 = (**(code **)((longlong)*local_res8.RawPointer + 0x18))
                           (local_res8.RawPointer,&_GUID_bfa971f1_4d5e_40bb_935e_967039bfbee4,1,0,
                            pTVar1), -1 < iVar10)) {
      if ((pTVar1->RawPointer == (IAudioSessionManager *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FWindowsMMNotificationClient *)(*pcVar5)();
        return pFVar11;
      }
      iVar10 = (**(code **)((longlong)*pTVar1->RawPointer + 0x18))
                         (pTVar1->RawPointer,0,0,&this->SessionControls);
      if (-1 < iVar10) {
        if (((this->SessionControls).RawPointer == (IAudioSessionControl *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FWindowsMMNotificationClient *)(*pcVar5)();
          return pFVar11;
        }
        pIVar4 = (this->SessionControls).RawPointer;
        plVar12 = &this->_padding_;
        if (this == (FWindowsMMNotificationClient *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        iVar10 = (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,plVar12);
        if ((-1 < iVar10) && (5 < (byte)LogAudioEnumeration._0_1_)) {
          pIVar3 = (this->DeviceListeningToSessionEvents).RawPointer;
          if (pIVar3 == (IMMDevice *)0x0) {
            ::FString::FString(&local_88,L"[No Friendly Name for Device]");
          }
          else {
            (**(code **)((longlong)*pIVar3 + 8))(pIVar3);
            ::FString::FString(&local_88,L"[No Friendly Name for Device]");
            local_res18 = (longlong *)0x0;
            iVar10 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,0,&local_res18);
            if (-1 < iVar10) {
              if (local_res18 == (longlong *)0x0) goto LAB_148d302e3;
              local_40 = 0;
              local_50 = 0;
              pwStack_48 = (wchar_t *)0x0;
              iVar10 = (**(code **)(*local_res18 + 0x28))
                                 (local_res18,&PKEY_Device_FriendlyName,&local_50);
              if ((-1 < iVar10) && (pwStack_48 != (wchar_t *)0x0)) {
                ::FString::operator=(&local_88,pwStack_48);
              }
              PropVariantClear((PROPVARIANT *)&local_50);
            }
            if (local_res18 != (longlong *)0x0) {
              (**(code **)(*local_res18 + 0x10))();
            }
          }
LAB_148d302e3:
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (pIVar3 != (IMMDevice *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
          }
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_148d30327:
  if (local_res8.RawPointer != (IMMDevice *)0x0) {
    (**(code **)((longlong)*local_res8.RawPointer + 0x10))();
  }
  return this;
}

// ~FWindowsMMNotificationClient @ 148d30710

void __thiscall
Audio::FWindowsMMNotificationClient::~FWindowsMMNotificationClient
          (FWindowsMMNotificationClient *this)

{
  IMMDeviceEnumerator *pIVar1;
  ForElementType<FSetElementId> FVar2;
  IMMDevice *pIVar3;
  IAudioSessionControl *pIVar4;
  IAudioSessionManager *pIVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  bool bVar8;
  
  this->_padding_ = (longlong)&_vftable__for__IMMNotificationClient__;
  this->_padding_ = (longlong)&_vftable__for__IAudioSessionEvents__;
  UnregisterForSessionNotifications(this);
  pIVar1 = (this->DeviceEnumerator).RawPointer;
  if (pIVar1 != (IMMDeviceEnumerator *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,this);
  }
  if (this->bComInitialized != false) {
    FWindowsPlatformMisc::CoUninitialize();
  }
  pIVar1 = (this->DeviceEnumerator).RawPointer;
  if (pIVar1 != (IMMDeviceEnumerator *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
  if (BVar7 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
  }
  (this->Listeners).HashSize = 0;
  FVar2 = (this->Listeners).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Listeners).Elements);
  pIVar3 = (this->DeviceListeningToSessionEvents).RawPointer;
  if (pIVar3 != (IMMDevice *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->SessionControls).RawPointer;
  if (pIVar4 != (IAudioSessionControl *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->SessionManager).RawPointer;
  if (pIVar5 != (IAudioSessionManager *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000148d3080e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SessionRegistrationCS);
  return;
}

// AddRef @ 148d30e00

ulong __thiscall Audio::FWindowsMMNotificationClient::AddRef(FWindowsMMNotificationClient *this)

{
  long *plVar1;
  int iVar2;
  
  LOCK();
  plVar1 = &this->Ref;
  iVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// AddRef`adjustor{8}' @ 148d30e14

/* [thunk]:public: virtual unsigned long __cdecl
   Audio::FWindowsMMNotificationClient::AddRef`adjustor{8}' (void) __ptr64 */

ulong __thiscall
Audio::FWindowsMMNotificationClient::AddRef_adjustor_8__(FWindowsMMNotificationClient *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsMMNotificationClient *)&this[-1].DeviceEnumerator);
  return uVar1;
}

// GetDevice @ 148d34020

TComPtr<IMMDevice> __thiscall
Audio::FWindowsMMNotificationClient::GetDevice(FWindowsMMNotificationClient *this,FString *param_1)

{
  IMMDeviceEnumerator *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TComPtr<IMMDevice> TVar5;
  wchar_t *pwVar6;
  undefined8 *in_R8;
  ForAnyElementType local_res8;
  
  pwVar6 = L"";
  local_res8.Data = (FScriptContainerElement *)0x0;
  if ((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.RawPointer = (IMMDevice *)(*pcVar2)();
      return (TComPtr<IMMDevice>)TVar5.RawPointer;
    }
  }
  pIVar1 = (this->DeviceEnumerator).RawPointer;
  if (*(int *)(in_R8 + 1) != 0) {
    pwVar6 = (wchar_t *)*in_R8;
  }
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,pwVar6,&local_res8);
  if (iVar4 < 0) {
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_res8.Data != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_res8.Data + 0x10))();
    }
  }
  else {
    (param_1->Data).AllocatorInstance.Data = local_res8.Data;
    local_res8.Data = (FScriptContainerElement *)0x0;
  }
  if ((void *)*in_R8 != (void *)0x0) {
    FMemory::Free((void *)*in_R8);
  }
  return (TComPtr<IMMDevice>)(IMMDevice *)param_1;
}

// GetFriendlyName @ 148d34140

FString * __thiscall
Audio::FWindowsMMNotificationClient::GetFriendlyName
          (FWindowsMMNotificationClient *this,FString *__return_storage_ptr__,
          TComPtr<IMMDevice> *param_1)

{
  IMMDevice *pIVar1;
  int iVar2;
  longlong *local_res10 [3];
  undefined8 local_28;
  wchar_t *pwStack_20;
  undefined8 local_18;
  
  ::FString::FString(__return_storage_ptr__,L"[No Friendly Name for Device]");
  pIVar1 = param_1->RawPointer;
  if (pIVar1 != (IMMDevice *)0x0) {
    local_res10[0] = (longlong *)0x0;
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,0,local_res10);
    if (-1 < iVar2) {
      if (local_res10[0] == (longlong *)0x0) {
        return __return_storage_ptr__;
      }
      local_18 = 0;
      local_28 = 0;
      pwStack_20 = (wchar_t *)0x0;
      iVar2 = (**(code **)(*local_res10[0] + 0x28))
                        (local_res10[0],&PKEY_Device_FriendlyName,&local_28);
      if ((-1 < iVar2) && (pwStack_20 != (wchar_t *)0x0)) {
        ::FString::operator=(__return_storage_ptr__,pwStack_20);
      }
      PropVariantClear((PROPVARIANT *)&local_28);
    }
    if (local_res10[0] != (longlong *)0x0) {
      (**(code **)(*local_res10[0] + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetFriendlyName @ 148d34200

FString * __thiscall
Audio::FWindowsMMNotificationClient::GetFriendlyName
          (FWindowsMMNotificationClient *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  IMMDeviceEnumerator *pIVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong *local_res18;
  longlong *local_res20;
  FString local_68;
  FString local_58;
  undefined8 local_48;
  wchar_t *pwStack_40;
  undefined8 local_38;
  
  if ((param_1->Data).ArrayNum < 2) {
    ::FString::FString(__return_storage_ptr__,L"System Default");
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(pFVar1);
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_68,L"[No Friendly Name for Device]");
  pwVar9 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar7 = ::FString::FString(&local_58,pwVar8);
  local_res18 = (longlong *)0x0;
  if (((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  pIVar2 = (this->DeviceEnumerator).RawPointer;
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  iVar6 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,pwVar9,&local_res18);
  plVar4 = local_res18;
  if (iVar6 < 0) {
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
    }
    pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
    local_res18 = (longlong *)0x0;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (plVar4 != (longlong *)0x0) {
      ::FString::FString(__return_storage_ptr__,L"[No Friendly Name for Device]");
      local_res20 = (longlong *)0x0;
      iVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,0,&local_res20);
      if (iVar6 < 0) {
LAB_148d3438a:
        if (local_res20 != (longlong *)0x0) {
          (**(code **)(*local_res20 + 0x10))();
        }
      }
      else if (local_res20 != (longlong *)0x0) {
        local_38 = 0;
        local_48 = 0;
        pwStack_40 = (wchar_t *)0x0;
        iVar6 = (**(code **)(*local_res20 + 0x28))(local_res20,&PKEY_Device_FriendlyName,&local_48);
        if ((-1 < iVar6) && (pwStack_40 != (wchar_t *)0x0)) {
          ::FString::operator=(__return_storage_ptr__,pwStack_40);
        }
        PropVariantClear((PROPVARIANT *)&local_48);
        goto LAB_148d3438a;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      goto LAB_148d343f7;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_148d343f7:
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// IsRenderDevice @ 148d34ee0

bool __thiscall
Audio::FWindowsMMNotificationClient::IsRenderDevice
          (FWindowsMMNotificationClient *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  int local_res18 [2];
  longlong *local_res20;
  undefined1 local_28 [32];
  
  bVar5 = true;
  ::FString::FString((FString *)(local_28 + 8),param_1);
  GetDevice(this,(FString *)local_28);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    local_res20 = (longlong *)0x0;
    iVar4 = (*(code *)**(undefined8 **)local_28._0_8_)
                      (local_28._0_8_,&_GUID_1be09788_6894_4089_8586_9a2a6c265ac5,&local_res20);
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
        bVar5 = local_res18[0] == 0;
      }
    }
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_28._0_8_ + 0x10))(local_28._0_8_);
    }
  }
  return bVar5;
}

// OnChannelVolumeChanged @ 148d350b0

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnChannelVolumeChanged
          (FWindowsMMNotificationClient *this,ulong param_1,float *param_2,ulong param_3,
          _GUID *param_4)

{
  return 0;
}

// OnDefaultDeviceChanged @ 148d35160

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnDefaultDeviceChanged
          (FWindowsMMNotificationClient *this,__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 param_1,
          __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 param_2,wchar_t *param_3)

{
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  ForElementType<unsigned_int> FVar8;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  undefined4 uVar11;
  FString *pFVar12;
  longlong lVar13;
  FPlatformRWLock *SRWLock;
  int iVar14;
  int iVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  char cVar20;
  uint uVar21;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6 [6];
  ForElementType<unsigned_int> local_1a0;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  FString local_168;
  int local_158;
  int local_154;
  int local_150;
  FPlatformRWLock *local_148;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  ForElementType<unsigned_int> local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  ForElementType<unsigned_int> local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0;
  FString local_a0 [2];
  undefined4 local_74;
  undefined4 local_54;
  undefined4 local_34;
  
  if ((3 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
    pFVar12 = ::FString::FString(local_a0,param_3);
    GetFriendlyName(this,&local_b0,pFVar12);
    if ((param_2 != eConsole) &&
       (((param_2 != eMultimedia && (param_2 != eCommunications)) &&
        (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMStringUtils.cpp"
                             ,0x34,L""), bVar10)))) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return uVar11;
    }
    if (((param_1 != eRender) && (param_1 != eCapture)) &&
       ((param_1 != eAll &&
        (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMStringUtils.cpp"
                             ,0x46,L""), bVar10)))) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return uVar11;
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  if (DisableDeviceSwapCVar == 0) {
    iVar15 = 0;
    cVar20 = '\0';
    if (param_2 != eConsole) {
      cVar20 = (param_2 != eMultimedia) + '\x01';
    }
    ::FString::FString(&local_168,param_3);
    SRWLock = &this->ListenersSetRwLock;
    pTVar1 = &this->Listeners;
    local_1a0 = (ForElementType<unsigned_int>)pTVar1;
    local_198 = pTVar1;
    local_148 = SRWLock;
    if (param_1 == eRender) {
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      iVar4 = *(int *)&(this->Listeners).Elements.field_0x28;
      local_188 = &(this->Listeners).Elements.field_0x10;
      uStack_18c = 1;
      local_178 = 0;
      iStack_17c = 0;
      if (iVar4 != 0) {
        puVar19 = *(uint **)&(this->Listeners).Elements.field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)local_188;
        }
        uVar16 = *puVar19;
        local_178 = 0;
        while (uVar16 == 0) {
          lVar13 = (longlong)iVar15;
          local_178 = local_178 + 0x20;
          iVar15 = iVar15 + 1;
          iStack_17c = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_148d3539d;
          uVar16 = puVar19[lVar13 + 1];
        }
        uStack_18c = -uVar16 & uVar16;
        uVar3 = (ulonglong)uStack_18c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_158 = (int)lVar13;
        iStack_17c = local_178 + -1 + local_158;
        if (iVar4 < iStack_17c) {
          iStack_17c = iVar4;
        }
      }
LAB_148d3539d:
      uStack_174 = local_74;
      iStack_170 = *(int *)&(this->Listeners).Elements.field_0x8 -
                   *(int *)&(this->Listeners).Elements.field_0x34;
      uVar16 = *(uint *)&(this->Listeners).Elements.field_0x28;
      uVar21 = uVar16 & 0xffffffe0;
      local_1a0 = (ForElementType<unsigned_int>)&(this->Listeners).Elements.field_0x10;
      uStack_180 = 0xffffffff;
      TStack_138._padding_ = CONCAT44(uStack_18c,iVar15);
      TStack_138.CurrentBitIndex = iStack_17c;
      TStack_138.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar16 >> 5;
      TStack_138._28_4_ = local_74;
      TStack_138.BaseBitIndex = local_178;
      uStack_118 = CONCAT44(uStack_16c,iStack_170);
      iStack_190 = iVar15;
      local_140 = pTVar1;
      TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_188;
      if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return uVar11;
      }
      FVar8 = local_1a0;
      uVar5 = *(int *)((longlong)local_1a0 + 0x18);
      if (uVar16 != uVar5) {
        FVar17 = *(ForElementType<unsigned_int> *)((longlong)local_1a0 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_1a0 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar17 = local_1a0;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar14 * 4);
        while (uVar16 == 0) {
          lVar13 = (longlong)iVar14;
          uVar21 = uVar21 + 0x20;
          iVar14 = iVar14 + 1;
          uVar16 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_148d354c0;
          uVar16 = *(uint *)((undefined1 *)((longlong)FVar17 + 4) + lVar13 * 4);
        }
        uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar16 = (int)lVar13 + -1 + uVar21;
        if ((int)uVar5 < (int)uVar16) {
          uVar16 = uVar5;
        }
      }
LAB_148d354c0:
      while( true ) {
        pTVar9 = local_140;
        if (*(int *)&(local_140->Elements).field_0x8 - *(int *)&(local_140->Elements).field_0x34 !=
            (int)uStack_118) {
          `TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
        }
        if (((TStack_138.CurrentBitIndex == uVar16) &&
            ((ForElementType<unsigned_int>)TStack_138.Array == FVar8)) &&
           (SRWLock = local_148, pTVar9 == pTVar1)) break;
        plVar6 = *(longlong **)
                  (*(longlong *)&pTVar9->Elements + (longlong)TStack_138.CurrentBitIndex * 0x10);
        (**(code **)(*plVar6 + 0x20))(plVar6,cVar20,&local_168);
        TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
      }
    }
    else {
      puVar2 = &(this->Listeners).Elements.field_0x10;
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      iVar4 = *(int *)&(this->Listeners).Elements.field_0x28;
      uStack_18c = 1;
      local_178 = 0;
      iStack_17c = 0;
      local_188 = puVar2;
      if (param_1 == eCapture) {
        if (iVar4 != 0) {
          puVar19 = *(uint **)&(this->Listeners).Elements.field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar2;
          }
          uVar16 = *puVar19;
          while (uVar16 == 0) {
            lVar13 = (longlong)iVar15;
            local_178 = local_178 + 0x20;
            iVar15 = iVar15 + 1;
            iStack_17c = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_148d355ae;
            uVar16 = puVar19[lVar13 + 1];
          }
          uStack_18c = -uVar16 & uVar16;
          uVar3 = (ulonglong)uStack_18c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_154 = (int)lVar13;
          iStack_17c = local_178 + -1 + local_154;
          if (iVar4 < iStack_17c) {
            iStack_17c = iVar4;
          }
        }
LAB_148d355ae:
        uStack_174 = local_54;
        iStack_170 = *(int *)&(this->Listeners).Elements.field_0x8 -
                     *(int *)&(this->Listeners).Elements.field_0x34;
        uVar16 = *(uint *)&(this->Listeners).Elements.field_0x28;
        TStack_108._padding_ = CONCAT44(uStack_18c,iVar15);
        uStack_180 = 0xffffffff;
        uVar21 = uVar16 & 0xffffffe0;
        TStack_108.CurrentBitIndex = iStack_17c;
        TStack_108.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar16 >> 5;
        TStack_108._28_4_ = local_54;
        TStack_108.BaseBitIndex = local_178;
        uStack_e8 = CONCAT44(uStack_16c,iStack_170);
        iStack_190 = iVar15;
        local_110 = (ForElementType<unsigned_int>)pTVar1;
        TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return uVar11;
        }
        FVar8 = local_1a0;
        uVar5 = *(uint *)&(this->Listeners).Elements.field_0x28;
        if (uVar16 != uVar5) {
          puVar18 = *(undefined1 **)&(this->Listeners).Elements.field_0x20;
          if (puVar18 == (undefined1 *)0x0) {
            puVar18 = puVar2;
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
          while (uVar16 == 0) {
            lVar13 = (longlong)iVar14;
            uVar21 = uVar21 + 0x20;
            iVar14 = iVar14 + 1;
            uVar16 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_148d356d0;
            uVar16 = *(uint *)(puVar18 + lVar13 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar16 = (int)lVar13 + -1 + uVar21;
          if ((int)uVar5 < (int)uVar16) {
            uVar16 = uVar5;
          }
        }
LAB_148d356d0:
        while( true ) {
          FVar17 = local_110;
          if (*(int *)((longlong)local_110 + 8) - *(int *)((longlong)local_110 + 0x34) !=
              (int)uStack_e8) {
            `TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a7);
          }
          if (((TStack_108.CurrentBitIndex == uVar16) &&
              (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
             (FVar17 == FVar8)) break;
          plVar6 = *(longlong **)(*(longlong *)FVar17 + (longlong)TStack_108.CurrentBitIndex * 0x10)
          ;
          (**(code **)(*plVar6 + 0x18))(plVar6,cVar20,&local_168);
          TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
        }
      }
      else {
        if (iVar4 != 0) {
          puVar19 = *(uint **)&(this->Listeners).Elements.field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar2;
          }
          uVar16 = *puVar19;
          while (uVar16 == 0) {
            lVar13 = (longlong)iVar15;
            local_178 = local_178 + 0x20;
            iVar15 = iVar15 + 1;
            iStack_17c = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_148d3579e;
            uVar16 = puVar19[lVar13 + 1];
          }
          uStack_18c = -uVar16 & uVar16;
          uVar3 = (ulonglong)uStack_18c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_150 = (int)lVar13;
          iStack_17c = local_178 + -1 + local_150;
          if (iVar4 < iStack_17c) {
            iStack_17c = iVar4;
          }
        }
LAB_148d3579e:
        uStack_174 = local_34;
        iStack_170 = *(int *)&(this->Listeners).Elements.field_0x8 -
                     *(int *)&(this->Listeners).Elements.field_0x34;
        uVar16 = *(uint *)&(this->Listeners).Elements.field_0x28;
        TStack_d8._padding_ = CONCAT44(uStack_18c,iVar15);
        uStack_180 = 0xffffffff;
        uVar21 = uVar16 & 0xffffffe0;
        TStack_d8.CurrentBitIndex = iStack_17c;
        TStack_d8.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar16 >> 5;
        TStack_d8._28_4_ = local_34;
        TStack_d8.BaseBitIndex = local_178;
        uStack_b8 = CONCAT44(uStack_16c,iStack_170);
        iStack_190 = iVar15;
        local_e0 = (ForElementType<unsigned_int>)pTVar1;
        TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return uVar11;
        }
        FVar8 = local_1a0;
        uVar5 = *(uint *)&(this->Listeners).Elements.field_0x28;
        if (uVar16 != uVar5) {
          puVar18 = *(undefined1 **)&(this->Listeners).Elements.field_0x20;
          if (puVar18 == (undefined1 *)0x0) {
            puVar18 = puVar2;
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
          while (uVar16 == 0) {
            lVar13 = (longlong)iVar14;
            uVar21 = uVar21 + 0x20;
            iVar14 = iVar14 + 1;
            uVar16 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_148d358c0;
            uVar16 = *(uint *)(puVar18 + lVar13 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar16 = (int)lVar13 + -1 + uVar21;
          if ((int)uVar5 < (int)uVar16) {
            uVar16 = uVar5;
          }
        }
LAB_148d358c0:
        while( true ) {
          FVar17 = local_e0;
          if (*(int *)((longlong)local_e0 + 8) - *(int *)((longlong)local_e0 + 0x34) !=
              (int)uStack_b8) {
            `TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a6);
          }
          if (((TStack_d8.CurrentBitIndex == uVar16) &&
              (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
             (FVar17 == FVar8)) break;
          plVar6 = *(longlong **)(*(longlong *)FVar17 + (longlong)TStack_d8.CurrentBitIndex * 0x10);
          (**(code **)(*plVar6 + 0x18))(plVar6,cVar20,&local_168);
          (**(code **)(*plVar6 + 0x20))(plVar6,cVar20,&local_168);
          TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
        }
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// OnDeviceAdded @ 148d35c30

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnDeviceAdded
          (FWindowsMMNotificationClient *this,wchar_t *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  FString *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res20 [8];
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if ((3 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
    pFVar11 = ::FString::FString(&local_50,param_1);
    GetFriendlyName(this,&local_60,pFVar11);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if (DisableDeviceSwapCVar == 0) {
    ::FString::FString(&local_80,param_1);
    bVar6 = IsRenderDevice(this,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_70,param_1);
    AcquireSRWLockShared((PSRWLOCK)&this->ListenersSetRwLock);
    iVar14 = 0;
    puVar1 = &(this->Listeners).Elements.field_0x10;
    iVar3 = *(int *)&(this->Listeners).Elements.field_0x28;
    uVar8 = 1;
    iVar16 = 0;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->Listeners).Elements.field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148d35d9e;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar8 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar9 = iVar16 + -1 + (int)lVar12;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_148d35d9e:
    uVar13 = *(uint *)&(this->Listeners).Elements.field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_a8._padding_ = CONCAT44(uVar8,iVar14);
    TStack_a8.CurrentBitIndex = iVar9;
    TStack_a8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_a8._28_4_ = iVar9;
    TStack_a8.BaseBitIndex = iVar16;
    uStack_88 = CONCAT44(uStack_bc,
                         *(int *)&(this->Listeners).Elements.field_0x8 -
                         *(int *)&(this->Listeners).Elements.field_0x34);
    TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return uVar10;
    }
    uVar8 = *(uint *)&(this->Listeners).Elements.field_0x28;
    if (uVar13 != uVar8) {
      puVar15 = *(undefined1 **)&(this->Listeners).Elements.field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_148d35eb0;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar8 < (int)uVar13) {
        uVar13 = uVar8;
      }
    }
LAB_148d35eb0:
    while( true ) {
      if (*(int *)&(this->Listeners).Elements.field_0x8 -
          *(int *)&(this->Listeners).Elements.field_0x34 != (int)uStack_88) {
        `TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((TStack_a8.CurrentBitIndex == uVar13) &&
         (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      plVar4 = *(longlong **)
                (*(longlong *)&(this->Listeners).Elements +
                (longlong)TStack_a8.CurrentBitIndex * 0x10);
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_70,bVar6);
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->ListenersSetRwLock);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// OnDeviceRemoved @ 148d36080

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnDeviceRemoved
          (FWindowsMMNotificationClient *this,wchar_t *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  FString *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res20 [8];
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if ((3 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
    pFVar11 = ::FString::FString(&local_50,param_1);
    GetFriendlyName(this,&local_60,pFVar11);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if (DisableDeviceSwapCVar == 0) {
    ::FString::FString(&local_80,param_1);
    bVar6 = IsRenderDevice(this,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_70,param_1);
    AcquireSRWLockShared((PSRWLOCK)&this->ListenersSetRwLock);
    iVar14 = 0;
    puVar1 = &(this->Listeners).Elements.field_0x10;
    iVar3 = *(int *)&(this->Listeners).Elements.field_0x28;
    uVar8 = 1;
    iVar16 = 0;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->Listeners).Elements.field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148d361ee;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar8 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar9 = iVar16 + -1 + (int)lVar12;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_148d361ee:
    uVar13 = *(uint *)&(this->Listeners).Elements.field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_a8._padding_ = CONCAT44(uVar8,iVar14);
    TStack_a8.CurrentBitIndex = iVar9;
    TStack_a8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_a8._28_4_ = iVar9;
    TStack_a8.BaseBitIndex = iVar16;
    uStack_88 = CONCAT44(uStack_bc,
                         *(int *)&(this->Listeners).Elements.field_0x8 -
                         *(int *)&(this->Listeners).Elements.field_0x34);
    TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return uVar10;
    }
    uVar8 = *(uint *)&(this->Listeners).Elements.field_0x28;
    if (uVar13 != uVar8) {
      puVar15 = *(undefined1 **)&(this->Listeners).Elements.field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_148d36300;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar8 < (int)uVar13) {
        uVar13 = uVar8;
      }
    }
LAB_148d36300:
    while( true ) {
      if (*(int *)&(this->Listeners).Elements.field_0x8 -
          *(int *)&(this->Listeners).Elements.field_0x34 != (int)uStack_88) {
        `TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((TStack_a8.CurrentBitIndex == uVar13) &&
         (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      plVar4 = *(longlong **)
                (*(longlong *)&(this->Listeners).Elements +
                (longlong)TStack_a8.CurrentBitIndex * 0x10);
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_70,bVar6);
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->ListenersSetRwLock);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// OnDeviceStateChanged @ 148d364b0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnDeviceStateChanged
          (FWindowsMMNotificationClient *this,wchar_t *param_1,ulong param_2)

{
  undefined1 *puVar1;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  EAudioDeviceState EVar8;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  FString *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_d8 [4];
  EAudioDeviceState local_d4;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *local_d0;
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
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((3 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
    pFVar13 = ::FString::FString(&local_38,param_1);
    GetFriendlyName(this,&local_48,pFVar13);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (DisableDeviceSwapCVar == 0) {
    ::FString::FString(&local_68,param_1);
    bVar10 = IsRenderDevice(this,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((param_2 < 9) && ((0x116U >> (param_2 & 0x1f) & 1) != 0)) {
      local_d4 = ConvertWordToDeviceState(param_2);
      ::FString::FString(&local_58,param_1);
      AcquireSRWLockShared((PSRWLOCK)&this->ListenersSetRwLock);
      iStack_c8 = 0;
      puVar1 = &(this->Listeners).Elements.field_0x10;
      iVar4 = *(int *)&(this->Listeners).Elements.field_0x28;
      pTVar2 = &this->Listeners;
      uStack_c4 = 1;
      local_b0 = 0;
      iStack_b4 = 0;
      if (iVar4 != 0) {
        puVar18 = *(uint **)&(this->Listeners).Elements.field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar1;
        }
        uVar15 = *puVar18;
        while (uVar15 == 0) {
          lVar14 = (longlong)iStack_c8;
          local_b0 = local_b0 + 0x20;
          iStack_c8 = iStack_c8 + 1;
          iStack_b4 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_148d3663e;
          uVar15 = puVar18[lVar14 + 1];
        }
        uStack_c4 = -uVar15 & uVar15;
        uVar3 = (ulonglong)uStack_c4 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_a0 = (int)lVar14;
        iStack_b4 = local_b0 + -1 + local_a0;
        if (iVar4 < iStack_b4) {
          iStack_b4 = iVar4;
        }
      }
LAB_148d3663e:
      iStack_a8 = *(int *)&(this->Listeners).Elements.field_0x8 -
                  *(int *)&(this->Listeners).Elements.field_0x34;
      uVar15 = *(uint *)&(this->Listeners).Elements.field_0x28;
      uStack_b8 = 0xffffffff;
      uVar19 = uVar15 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uStack_c4,iStack_c8);
      TStack_90.CurrentBitIndex = iStack_b4;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar15 >> 5;
      TStack_90._28_4_ = iStack_b4;
      TStack_90.BaseBitIndex = local_b0;
      uStack_70 = CONCAT44(uStack_a4,iStack_a8);
      local_d0 = pTVar2;
      local_c0 = puVar1;
      iStack_ac = iStack_b4;
      local_98 = pTVar2;
      TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return uVar12;
      }
      EVar8 = local_d4;
      uVar5 = *(uint *)&(this->Listeners).Elements.field_0x28;
      if (uVar15 != uVar5) {
        puVar17 = *(undefined1 **)&(this->Listeners).Elements.field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar1;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
        while (uVar15 == 0) {
          lVar14 = (longlong)iVar16;
          uVar19 = uVar19 + 0x20;
          iVar16 = iVar16 + 1;
          uVar15 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_148d36750;
          uVar15 = *(uint *)(puVar17 + lVar14 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar15 = (int)lVar14 + -1 + uVar19;
        if ((int)uVar5 < (int)uVar15) {
          uVar15 = uVar5;
        }
      }
LAB_148d36750:
      while( true ) {
        pTVar9 = local_98;
        if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
            (int)uStack_70) {
          `TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
        }
        if (((TStack_90.CurrentBitIndex == uVar15) &&
            (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar9 == pTVar2)) break;
        plVar6 = *(longlong **)
                  (*(longlong *)&pTVar9->Elements + (longlong)TStack_90.CurrentBitIndex * 0x10);
        (**(code **)(*plVar6 + 0x38))(plVar6,&local_58,EVar8,bVar10);
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
      ReleaseSRWLockShared((PSRWLOCK)&this->ListenersSetRwLock);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return 0;
}

// OnDisplayNameChanged @ 148d36800

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnDisplayNameChanged
          (FWindowsMMNotificationClient *this,wchar_t *param_1,_GUID *param_2)

{
  return 0;
}

// OnGroupingParamChanged @ 148d36de0

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnGroupingParamChanged
          (FWindowsMMNotificationClient *this,_GUID *param_1,_GUID *param_2)

{
  return 0;
}

// OnIconPathChanged @ 148d36df0

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnIconPathChanged
          (FWindowsMMNotificationClient *this,wchar_t *param_1,_GUID *param_2)

{
  return 0;
}

// OnPropertyValueChanged @ 148d36e00

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnPropertyValueChanged
          (FWindowsMMNotificationClient *this,wchar_t *param_1,_tagpropertykey *param_2)

{
  undefined1 *puVar1;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  IMMDeviceEnumerator *pIVar5;
  longlong *plVar6;
  code *pcVar7;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  FString *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_168 [8];
  longlong *local_160;
  longlong *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  FString local_140;
  int local_130;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  short *local_b8;
  _tagpropertykey local_a8;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  undefined4 local_3c;
  
  if ((5 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
    local_a8.fmtid.Data1 = (param_2->fmtid).Data1;
    local_a8.fmtid.Data2 = (param_2->fmtid).Data2;
    local_a8.fmtid.Data3 = (param_2->fmtid).Data3;
    local_a8.fmtid.Data4 = *&(param_2->fmtid).Data4;
    local_a8.pid = param_2->pid;
    ToFString(&local_78,&local_a8);
    pFVar13 = ::FString::FString(local_68,param_1);
    GetFriendlyName(this,&local_88,pFVar13);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  iVar10 = memcmp(param_2,&PKEY_AudioEngine_DeviceFormat,0x10);
  if (iVar10 != 0) {
    return 0;
  }
  ::FString::FString(&local_140,param_1);
  iVar10 = 0;
  local_158 = (longlong *)0x0;
  if (((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return uVar11;
  }
  pIVar5 = (this->DeviceEnumerator).RawPointer;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar15.Data = local_140.Data.AllocatorInstance.Data;
  }
  iVar12 = (**(code **)((longlong)*pIVar5 + 0x28))(pIVar5,FVar15.Data,&local_158);
  local_160 = (longlong *)0x0;
  if (-1 < iVar12) {
    if (local_158 == (longlong *)0x0) goto LAB_148d37270;
    iVar12 = (**(code **)(*local_158 + 0x20))(local_158,0,&local_160);
    plVar6 = local_160;
    if (-1 < iVar12) {
      if (local_160 == (longlong *)0x0) goto LAB_148d37260;
      local_b8 = (short *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      iVar12 = memcmp(param_2,&PKEY_AudioEngine_DeviceFormat,0x10);
      if (((iVar12 == 0) &&
          (iVar12 = (**(code **)(*plVar6 + 0x28))(plVar6,param_2,&local_c8), -1 < iVar12)) &&
         (local_b8 != (short *)0x0)) {
        uVar16 = 8;
        if ((ushort)local_b8[1] < 8) {
          uVar16 = (uint)(ushort)local_b8[1];
        }
        local_150 = 2;
        if (2 < uVar16) {
          local_150 = uVar16;
        }
        local_14c = *(undefined4 *)(local_b8 + 2);
        if (*local_b8 == -2) {
          local_148 = *(undefined4 *)(local_b8 + 10);
        }
        else {
          local_148 = 0;
        }
        AcquireSRWLockShared((PSRWLOCK)&this->ListenersSetRwLock);
        puVar1 = &(this->Listeners).Elements.field_0x10;
        uStack_11c = 1;
        iVar12 = *(int *)&(this->Listeners).Elements.field_0x28;
        pTVar2 = &this->Listeners;
        local_108 = 0;
        iStack_10c = iVar10;
        if (iVar12 != 0) {
          puVar19 = *(uint **)&(this->Listeners).Elements.field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar1;
          }
          uVar16 = *puVar19;
          local_108 = 0;
          iVar10 = 0;
          while (uVar16 == 0) {
            lVar14 = (longlong)iVar10;
            local_108 = local_108 + 0x20;
            iVar10 = iVar10 + 1;
            iStack_10c = iVar12;
            if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10)
            goto LAB_148d370b1;
            uVar16 = puVar19[lVar14 + 1];
          }
          uStack_11c = -uVar16 & uVar16;
          uVar3 = (ulonglong)uStack_11c * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_130 = (int)lVar14;
          iStack_10c = local_108 + -1 + local_130;
          if (iVar12 < iStack_10c) {
            iStack_10c = iVar12;
          }
        }
LAB_148d370b1:
        uStack_104 = local_3c;
        iStack_100 = *(int *)&(this->Listeners).Elements.field_0x8 -
                     *(int *)&(this->Listeners).Elements.field_0x34;
        uVar16 = *(uint *)&(this->Listeners).Elements.field_0x28;
        TStack_f0._padding_ = CONCAT44(uStack_11c,iVar10);
        uStack_110 = 0xffffffff;
        uVar20 = uVar16 & 0xffffffe0;
        TStack_f0.CurrentBitIndex = iStack_10c;
        TStack_f0.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar16 >> 5;
        TStack_f0._28_4_ = local_3c;
        TStack_f0.BaseBitIndex = local_108;
        uStack_d0 = CONCAT44(uStack_fc,iStack_100);
        local_128 = pTVar2;
        iStack_120 = iVar10;
        local_118 = puVar1;
        local_f8 = pTVar2;
        TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar16 < 0) || (iVar12 < (int)uVar16)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return uVar11;
        }
        uVar4 = *(uint *)&(this->Listeners).Elements.field_0x28;
        if (uVar16 != uVar4) {
          puVar18 = *(undefined1 **)&(this->Listeners).Elements.field_0x20;
          if (puVar18 == (undefined1 *)0x0) {
            puVar18 = puVar1;
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
          while (uVar16 == 0) {
            lVar14 = (longlong)iVar17;
            uVar20 = uVar20 + 0x20;
            iVar17 = iVar17 + 1;
            uVar16 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_148d371d0;
            uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar16 = (int)lVar14 + -1 + uVar20;
          if ((int)uVar4 < (int)uVar16) {
            uVar16 = uVar4;
          }
        }
LAB_148d371d0:
        while( true ) {
          pTVar8 = local_f8;
          if (*(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34 !=
              (int)uStack_d0) {
            `TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
          }
          if (((TStack_f0.CurrentBitIndex == uVar16) &&
              (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar8 == pTVar2)) break;
          plVar6 = *(longlong **)
                    (*(longlong *)&pTVar8->Elements + (longlong)TStack_f0.CurrentBitIndex * 0x10);
          (**(code **)(*plVar6 + 0x40))(plVar6,&local_140,&local_150);
          TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
        }
        ReleaseSRWLockShared((PSRWLOCK)&this->ListenersSetRwLock);
      }
      PropVariantClear((PROPVARIANT *)&local_c8);
    }
    if (local_160 != (longlong *)0x0) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
LAB_148d37260:
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x10))();
  }
LAB_148d37270:
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  return 0;
}

// OnSessionDisconnected @ 148d372a0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnSessionDisconnected
          (FWindowsMMNotificationClient *this,AudioSessionDisconnectReason param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68 [2];
  undefined4 local_3c;
  
  if ((5 < (byte)LogAudioEnumeration._0_1_) && (EnableDetailedWindowsDeviceLoggingCVar != 0)) {
    GetFriendlyName((FWindowsMMNotificationClient *)&this[-1].DeviceEnumerator,local_68,
                    (TComPtr<IMMDevice> *)&this->SessionControls);
    switch(param_1) {
    case DisconnectReasonDeviceRemoval:
      break;
    case DisconnectReasonServerShutdown:
      break;
    case DisconnectReasonFormatChanged:
      break;
    case DisconnectReasonSessionLogoff:
      break;
    case DisconnectReasonSessionDisconnected:
      break;
    case DisconnectReasonExclusiveModeOverride:
      break;
    default:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\WindowsMMStringUtils.cpp"
                         ,0x22,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
  }
  if (*(char *)((longlong)&(this->DeviceListeningToSessionEvents).RawPointer + 1) == '\0') {
    AcquireSRWLockShared((PSRWLOCK)&(this->Listeners).HashSize);
    iVar12 = 0;
    switch(param_1) {
    case DisconnectReasonServerShutdown:
      uVar7 = 1;
      break;
    case DisconnectReasonFormatChanged:
      uVar7 = 2;
      break;
    case DisconnectReasonSessionLogoff:
      uVar7 = 3;
      break;
    case DisconnectReasonSessionDisconnected:
      uVar7 = 4;
      break;
    case DisconnectReasonExclusiveModeOverride:
      uVar7 = 5;
      break;
    default:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioDeviceEnumeration\\Windows\\WindowsMMDeviceEnumeration\\Private\\ConversionHelpers.h"
                         ,0x30,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    case DisconnectReasonDeviceRemoval:
      uVar7 = 0;
    }
    iVar2 = *(int *)&(this->Listeners).Elements.field_0x20;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Listeners).Elements.field_0x8;
    iVar13 = 0;
    iVar9 = 0;
    uVar8 = 1;
    if (iVar2 != 0) {
      puVar15 = *(uint **)&(this->Listeners).Elements.field_0x18;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)TStack_90.Array;
      }
      uVar8 = *puVar15;
      while (uVar8 == 0) {
        lVar10 = (longlong)iVar12;
        iVar13 = iVar13 + 0x20;
        iVar12 = iVar12 + 1;
        iVar9 = iVar2;
        uVar8 = 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148d374ae;
        uVar8 = puVar15[lVar10 + 1];
      }
      uVar8 = -uVar8 & uVar8;
      uVar1 = (ulonglong)uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = iVar13 + -1 + (int)lVar10;
      if (iVar2 < iVar9) {
        iVar9 = iVar2;
      }
    }
LAB_148d374ae:
    uVar11 = *(uint *)&(this->Listeners).Elements.field_0x20;
    TStack_90._padding_ = CONCAT44(uVar8,iVar12);
    uVar8 = uVar11 & 0xffffffe0;
    TStack_90.CurrentBitIndex = iVar9;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_90._28_4_ = local_3c;
    TStack_90.BaseBitIndex = iVar13;
    uStack_70 = CONCAT44(uStack_9c,
                         *(int *)&(this->Listeners).Elements -
                         *(int *)&(this->Listeners).Elements.field_0x2c);
    if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
    uVar3 = *(uint *)&(this->Listeners).Elements.field_0x20;
    if (uVar11 != uVar3) {
      puVar14 = *(undefined1 **)&(this->Listeners).Elements.field_0x18;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(this->Listeners).Elements.field_0x8;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar8 = uVar8 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_148d375ab;
        uVar11 = *(uint *)(puVar14 + lVar10 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar11 = (int)lVar10 + -1 + uVar8;
      if ((int)uVar3 < (int)uVar11) {
        uVar11 = uVar3;
      }
    }
LAB_148d375ab:
    while( true ) {
      if (*(int *)&(this->Listeners).Elements - *(int *)&(this->Listeners).Elements.field_0x2c !=
          (int)uStack_70) {
        `TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_90.CurrentBitIndex == uVar11) &&
         (TStack_90.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)&(this->Listeners).Elements.field_0x8)) break;
      plVar4 = *(longlong **)
                (*(longlong *)&this->bComInitialized + (longlong)TStack_90.CurrentBitIndex * 0x10);
      (**(code **)(*plVar4 + 0x48))(plVar4,uVar7);
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    ReleaseSRWLockShared((PSRWLOCK)&(this->Listeners).HashSize);
    LOCK();
    *(undefined1 *)((longlong)&(this->DeviceListeningToSessionEvents).RawPointer + 1) = 1;
    UNLOCK();
  }
  return 0;
}

// OnSimpleVolumeChanged @ 148d37680

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnSimpleVolumeChanged
          (FWindowsMMNotificationClient *this,float param_1,int param_2,_GUID *param_3)

{
  return 0;
}

// OnStateChanged @ 148d37690

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::OnStateChanged
          (FWindowsMMNotificationClient *this,_AudioSessionState param_1)

{
  return 0;
}

// QueryInterface @ 148d37780

undefined4 __thiscall
Audio::FWindowsMMNotificationClient::QueryInterface
          (FWindowsMMNotificationClient *this,_GUID *param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 == (void **)0x0) {
    return 0x80004003;
  }
  lVar1._0_4_ = param_1->Data1;
  lVar1._4_2_ = param_1->Data2;
  lVar1._6_2_ = param_1->Data3;
  if (((lVar1 != _GUID_7991eec9_7e89_4d85_8390_6c703cec60c0._0_8_) ||
      (*(longlong *)param_1->Data4 != _GUID_7991eec9_7e89_4d85_8390_6c703cec60c0._8_8_)) &&
     ((lVar2._0_4_ = param_1->Data1, lVar2._4_2_ = param_1->Data2, lVar2._6_2_ = param_1->Data3,
      lVar2 != _GUID_00000000_0000_0000_c000_000000000046._0_8_ ||
      (*(longlong *)param_1->Data4 != _GUID_00000000_0000_0000_c000_000000000046._8_8_)))) {
    lVar3._0_4_ = param_1->Data1;
    lVar3._4_2_ = param_1->Data2;
    lVar3._6_2_ = param_1->Data3;
    if ((lVar3 == _GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8._0_8_) &&
       (*(longlong *)param_1->Data4 == _GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8._8_8_)) {
      plVar4 = &this->_padding_;
      if (this == (FWindowsMMNotificationClient *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      *param_2 = plVar4;
      LOCK();
      this->Ref = this->Ref + 1;
      UNLOCK();
      return 0;
    }
    *param_2 = (void *)0x0;
    return 0x80004002;
  }
  *param_2 = this;
  LOCK();
  this->Ref = this->Ref + 1;
  UNLOCK();
  return 0;
}

// QueryInterface`adjustor{8}' @ 148d37808

/* [thunk]:public: virtual long __cdecl
   Audio::FWindowsMMNotificationClient::QueryInterface`adjustor{8}' (struct _GUID const &
   __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
Audio::FWindowsMMNotificationClient::QueryInterface_adjustor_8__
          (FWindowsMMNotificationClient *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsMMNotificationClient *)&this[-1].DeviceEnumerator,(_GUID *)param_1
                         ,param_2);
  return lVar1;
}

// RegisterDeviceChangedListener @ 148d37820

void __thiscall
Audio::FWindowsMMNotificationClient::RegisterDeviceChangedListener
          (FWindowsMMNotificationClient *this,IAudioMixerDeviceChangedListener *param_1)

{
  IAudioMixerDeviceChangedListener *local_res8;
  IAudioMixerDeviceChangedListener *local_res10;
  
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  ::Emplace<Audio::IAudioMixerDeviceChangedListener_*_const_&>
            (&this->Listeners,&local_res8,(bool *)&local_res10);
                    /* WARNING: Could not recover jumptable at 0x000148d37866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
  return;
}

// RegisterForSessionNotifications @ 148d37880

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWindowsMMNotificationClient::RegisterForSessionNotifications
          (FWindowsMMNotificationClient *this,TComPtr<IMMDevice> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TComPtr<IAudioSessionManager> *pTVar1;
  IMMDevice *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  IAudioSessionControl *pIVar7;
  longlong *plVar8;
  longlong *local_res8;
  FString local_48;
  undefined8 local_38;
  wchar_t *pwStack_30;
  undefined8 local_28;
  
  lpCriticalSection = &this->SessionRegistrationCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->DeviceListeningToSessionEvents).RawPointer == param_1->RawPointer) {
LAB_148d37a9b:
    bVar4 = true;
  }
  else {
    UnregisterForSessionNotifications(this);
    pIVar2 = param_1->RawPointer;
    if ((this->DeviceListeningToSessionEvents).RawPointer != pIVar2) {
      if (pIVar2 != (IMMDevice *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))();
      }
      pIVar2 = (this->DeviceListeningToSessionEvents).RawPointer;
      if (pIVar2 != (IMMDevice *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      (this->DeviceListeningToSessionEvents).RawPointer = param_1->RawPointer;
    }
    pIVar2 = param_1->RawPointer;
    if (pIVar2 != (IMMDevice *)0x0) {
      pTVar1 = &this->SessionManager;
      iVar6 = (**(code **)((longlong)*pIVar2 + 0x18))
                        (pIVar2,&_GUID_bfa971f1_4d5e_40bb_935e_967039bfbee4,1,0,pTVar1);
      if (-1 < iVar6) {
        if ((pTVar1->RawPointer == (IAudioSessionManager *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar6 = (**(code **)((longlong)*pTVar1->RawPointer + 0x18))
                          (pTVar1->RawPointer,0,0,&this->SessionControls);
        if (-1 < iVar6) {
          pIVar7 = TComPtr<IAudioSessionControl>::operator->(&this->SessionControls);
          plVar8 = &this->_padding_;
          if (this == (FWindowsMMNotificationClient *)0x0) {
            plVar8 = (longlong *)0x0;
          }
          iVar6 = (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,plVar8);
          if (-1 < iVar6) {
            if ((byte)LogAudioEnumeration._0_1_ < 6) goto LAB_148d37a9b;
            pIVar2 = (this->DeviceListeningToSessionEvents).RawPointer;
            if (pIVar2 == (IMMDevice *)0x0) {
              ::FString::FString(&local_48,L"[No Friendly Name for Device]");
            }
            else {
              (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
              ::FString::FString(&local_48,L"[No Friendly Name for Device]");
              local_res8 = (longlong *)0x0;
              iVar6 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,0,&local_res8);
              if (-1 < iVar6) {
                if (local_res8 == (longlong *)0x0) goto LAB_148d37a5e;
                local_28 = 0;
                local_38 = 0;
                pwStack_30 = (wchar_t *)0x0;
                iVar6 = (**(code **)(*local_res8 + 0x28))
                                  (local_res8,&PKEY_Device_FriendlyName,&local_38);
                if ((-1 < iVar6) && (pwStack_30 != (wchar_t *)0x0)) {
                  ::FString::operator=(&local_48,pwStack_30);
                }
                PropVariantClear((PROPVARIANT *)&local_38);
              }
              if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 0x10))();
              }
            }
LAB_148d37a5e:
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (pIVar2 != (IMMDevice *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
            }
            goto LAB_148d37a9b;
          }
        }
      }
    }
    bVar4 = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// RegisterForSessionNotifications @ 148d37ae0

bool __thiscall
Audio::FWindowsMMNotificationClient::RegisterForSessionNotifications
          (FWindowsMMNotificationClient *this,FString *param_1)

{
  bool bVar1;
  FString local_res18;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  GetDevice(this,&local_res18);
  if (local_res18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    bVar1 = RegisterForSessionNotifications(this,(TComPtr<IMMDevice> *)&local_res18);
    (**(code **)(*(longlong *)local_res18.Data.AllocatorInstance.Data + 0x10))
              (local_res18.Data.AllocatorInstance.Data);
    return bVar1;
  }
  return false;
}

// Release @ 148d382a0

ulong __thiscall Audio::FWindowsMMNotificationClient::Release(FWindowsMMNotificationClient *this)

{
  long *plVar1;
  int iVar2;
  IMMDeviceEnumerator *pIVar3;
  ForElementType<FSetElementId> FVar4;
  IMMDevice *pIVar5;
  IAudioSessionControl *pIVar6;
  IAudioSessionManager *pIVar7;
  code *pcVar8;
  BOOLEAN BVar9;
  bool bVar10;
  ulong uVar11;
  
  LOCK();
  plVar1 = &this->Ref;
  iVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FWindowsMMNotificationClient *)0x0)) {
    this->_padding_ = (longlong)&_vftable__for__IMMNotificationClient__;
    this->_padding_ = (longlong)&_vftable__for__IAudioSessionEvents__;
    UnregisterForSessionNotifications(this);
    pIVar3 = (this->DeviceEnumerator).RawPointer;
    if (pIVar3 != (IMMDeviceEnumerator *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,this);
    }
    if (this->bComInitialized != false) {
      FWindowsPlatformMisc::CoUninitialize();
    }
    pIVar3 = (this->DeviceEnumerator).RawPointer;
    if (pIVar3 != (IMMDeviceEnumerator *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
    if (BVar9 == '\0') {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsLocked()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                          ,0x48,L"Destroying a lock that is still held!");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return uVar11;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
    }
    (this->Listeners).HashSize = 0;
    FVar4 = (this->Listeners).Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this->Listeners).Elements);
    pIVar5 = (this->DeviceListeningToSessionEvents).RawPointer;
    if (pIVar5 != (IMMDevice *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
    pIVar6 = (this->SessionControls).RawPointer;
    if (pIVar6 != (IAudioSessionControl *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))();
    }
    pIVar7 = (this->SessionManager).RawPointer;
    if (pIVar7 != (IAudioSessionManager *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&this->SessionRegistrationCS);
    ::operator_delete(this,0xb8);
  }
  return iVar2 - 1U;
}

// Release`adjustor{8}' @ 148d383e0

/* [thunk]:public: virtual unsigned long __cdecl
   Audio::FWindowsMMNotificationClient::Release`adjustor{8}' (void) __ptr64 */

ulong __thiscall
Audio::FWindowsMMNotificationClient::Release_adjustor_8__(FWindowsMMNotificationClient *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsMMNotificationClient *)&this[-1].DeviceEnumerator);
  return uVar1;
}

// ReleaseClient @ 148d383f0

uint __thiscall
Audio::FWindowsMMNotificationClient::ReleaseClient(FWindowsMMNotificationClient *this)

{
  long *plVar1;
  int iVar2;
  IMMDeviceEnumerator *pIVar3;
  ForElementType<FSetElementId> FVar4;
  IMMDevice *pIVar5;
  IAudioSessionControl *pIVar6;
  IAudioSessionManager *pIVar7;
  code *pcVar8;
  BOOLEAN BVar9;
  bool bVar10;
  uint uVar11;
  
  LOCK();
  plVar1 = &this->Ref;
  iVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FWindowsMMNotificationClient *)0x0)) {
    this->_padding_ = (longlong)&_vftable__for__IMMNotificationClient__;
    this->_padding_ = (longlong)&_vftable__for__IAudioSessionEvents__;
    UnregisterForSessionNotifications(this);
    pIVar3 = (this->DeviceEnumerator).RawPointer;
    if (pIVar3 != (IMMDeviceEnumerator *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,this);
    }
    if (this->bComInitialized != false) {
      FWindowsPlatformMisc::CoUninitialize();
    }
    pIVar3 = (this->DeviceEnumerator).RawPointer;
    if (pIVar3 != (IMMDeviceEnumerator *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
    if (BVar9 == '\0') {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsLocked()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                          ,0x48,L"Destroying a lock that is still held!");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return uVar11;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
    }
    (this->Listeners).HashSize = 0;
    FVar4 = (this->Listeners).Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Audio::IAudioMixerDeviceChangedListener_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this->Listeners).Elements);
    pIVar5 = (this->DeviceListeningToSessionEvents).RawPointer;
    if (pIVar5 != (IMMDevice *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
    pIVar6 = (this->SessionControls).RawPointer;
    if (pIVar6 != (IAudioSessionControl *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))();
    }
    pIVar7 = (this->SessionManager).RawPointer;
    if (pIVar7 != (IAudioSessionManager *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&this->SessionRegistrationCS);
    ::operator_delete(this,0xb8);
  }
  return iVar2 - 1U;
}

// UnRegisterDeviceDeviceChangedListener @ 148d39660

void __thiscall
Audio::FWindowsMMNotificationClient::UnRegisterDeviceDeviceChangedListener
          (FWindowsMMNotificationClient *this,IAudioMixerDeviceChangedListener *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
  TSet<Audio::IAudioMixerDeviceChangedListener_*,DefaultKeyFuncs<Audio::IAudioMixerDeviceChangedListener_*,0>,FDefaultSetAllocator>
  ::Remove(&this->Listeners,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148d396a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ListenersSetRwLock);
  return;
}

// UnregisterForSessionNotifications @ 148d396c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FWindowsMMNotificationClient::UnregisterForSessionNotifications
          (FWindowsMMNotificationClient *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IMMDevice *pIVar1;
  IAudioSessionControl *pIVar2;
  IAudioSessionManager *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IMMDevice *pIVar7;
  longlong *plVar8;
  IMMDevice *local_res8;
  FString local_48;
  undefined8 local_38;
  wchar_t *pwStack_30;
  undefined8 local_28;
  
  lpCriticalSection = &this->SessionRegistrationCS;
  local_res8 = (IMMDevice *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->SessionControls).RawPointer == (IAudioSessionControl *)0x0) goto LAB_148d39864;
  if (5 < (byte)LogAudioEnumeration._0_1_) {
    pIVar1 = (this->DeviceListeningToSessionEvents).RawPointer;
    pIVar7 = local_res8;
    plVar8 = (longlong *)0x0;
    if (pIVar1 != (IMMDevice *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1);
      ::FString::FString(&local_48,L"[No Friendly Name for Device]");
      local_res8 = (IMMDevice *)0x0;
      iVar6 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,0,&local_res8);
      if (iVar6 < 0) {
LAB_148d39798:
        if (local_res8 != (IMMDevice *)0x0) {
          (**(code **)((longlong)*local_res8 + 0x10))();
        }
      }
      else if (local_res8 != (IMMDevice *)0x0) {
        local_28 = 0;
        local_38 = 0;
        pwStack_30 = (wchar_t *)0x0;
        iVar6 = (**(code **)((longlong)*local_res8 + 0x28))
                          (local_res8,&PKEY_Device_FriendlyName,&local_38);
        if ((-1 < iVar6) && (pwStack_30 != (wchar_t *)0x0)) {
          ::FString::operator=(&local_48,pwStack_30);
        }
        PropVariantClear((PROPVARIANT *)&local_38);
        goto LAB_148d39798;
      }
      plVar8 = (longlong *)&DAT_00000003;
      pIVar7 = pIVar1;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEnumeration);
    if ((((ulonglong)plVar8 & 2) != 0) &&
       (plVar8 = (longlong *)(ulonglong)((uint)plVar8 & 0xfffffffd),
       local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)plVar8 & 1) != 0) && (pIVar7 != (IMMDevice *)0x0)) {
      (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
    }
  }
  if (((this->SessionControls).RawPointer == (IAudioSessionControl *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar2 = (this->SessionControls).RawPointer;
  plVar8 = &this->_padding_;
  if (this == (FWindowsMMNotificationClient *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,plVar8);
  pIVar2 = (this->SessionControls).RawPointer;
  if (pIVar2 != (IAudioSessionControl *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
    (this->SessionControls).RawPointer = (IAudioSessionControl *)0x0;
  }
LAB_148d39864:
  pIVar3 = (this->SessionManager).RawPointer;
  if (pIVar3 != (IAudioSessionManager *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
    (this->SessionManager).RawPointer = (IAudioSessionManager *)0x0;
  }
  pIVar1 = (this->DeviceListeningToSessionEvents).RawPointer;
  if (pIVar1 != (IMMDevice *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
    (this->DeviceListeningToSessionEvents).RawPointer = (IMMDevice *)0x0;
  }
  LOCK();
  this->bHasDisconnectSessionHappened = (atomic<bool>)0x0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000148d398a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

