// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 15

// operator() @ 14d0be240

bool __thiscall
`Audio::FWasapiDeviceEnumeration::EnumerateDefaults'::__l2::<lambda_1>::operator()
          (void *this,__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 param_1,
          __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 param_2,FString *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString *pFVar7;
  bool bVar8;
  longlong *local_res8;
  wchar_t *local_38;
  FString local_30;
  
  lVar1 = *(longlong *)this;
  bVar8 = false;
  local_res8 = (longlong *)0x0;
  if ((*(longlong *)(lVar1 + 0x20) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  plVar2 = *(longlong **)(lVar1 + 0x20);
  iVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2,&local_res8);
  if (-1 < iVar6) {
    local_38 = (wchar_t *)0x0;
    if ((local_res8 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar6 = (**(code **)(*local_res8 + 0x28))(local_res8,&local_38);
    if ((-1 < iVar6) && (local_38 != (wchar_t *)0x0)) {
      pFVar7 = ::FString::FString(&local_30,local_38);
      ::FString::operator=(param_3,pFVar7);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      CoTaskMemFree(local_38);
      bVar8 = true;
    }
  }
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
  }
  return bVar8;
}

// EnumerateDefaults @ 14d0bed00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FWasapiDeviceEnumeration::EnumerateDefaults(FWasapiDeviceEnumeration *this)

{
  ForAnyElementType FVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FWasapiDeviceEnumeration *local_res8;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_res8 = this;
  bVar3 = `Audio::FWasapiDeviceEnumeration::EnumerateDefaults'::__l2::<lambda_1>::operator()
                    (&local_res8,eRender,eConsole,&local_28);
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  if (bVar3) {
    iVar2 = local_28.Data.ArrayNum;
    if (5 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(&this->DefaultRenderId,(wchar_t *)FVar1.Data,iVar4);
  }
  else if (5 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  bVar3 = `Audio::FWasapiDeviceEnumeration::EnumerateDefaults'::__l2::<lambda_1>::operator()
                    (&local_res8,eCapture,eConsole,&local_28);
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  if (bVar3) {
    iVar2 = local_28.Data.ArrayNum;
    if (5 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(&this->DefaultCaptureId,(wchar_t *)FVar1.Data,iVar4);
  }
  else if (5 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
    return;
  }
  return;
}

// GetAudioClientMixFormat @ 14d0bee70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDeviceEnumeration::GetAudioClientMixFormat
          (FWasapiDeviceEnumeration *this,TComPtr<IAudioClient3> param_1,tWAVEFORMATEX **param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString local_18;
  
  if ((*param_1.RawPointer == (IAudioClient3)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = (**(code **)(*(longlong *)*param_1.RawPointer + 0x40))(*param_1.RawPointer,param_2);
  if (iVar4 < 0) {
    ::FString::PrintfImpl(&local_18,L"%s -> 0x%X (line: %d)");
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (*param_1.RawPointer != (IAudioClient3)0x0) {
      (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
    }
    return false;
  }
  if (*param_1.RawPointer != (IAudioClient3)0x0) {
    (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
  }
  return true;
}

// GetDefaultInputDeviceId @ 14d0bf360

FString * __thiscall
Audio::FWasapiDeviceEnumeration::GetDefaultInputDeviceId
          (FWasapiDeviceEnumeration *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->DefaultCaptureId);
  return __return_storage_ptr__;
}

// GetDefaultOutputDeviceId @ 14d0bf3c0

FString * __thiscall
Audio::FWasapiDeviceEnumeration::GetDefaultOutputDeviceId
          (FWasapiDeviceEnumeration *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->DefaultRenderId);
  return __return_storage_ptr__;
}

// GetDeviceFriendlyName @ 14d0bf420

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDeviceEnumeration::GetDeviceFriendlyName
          (FWasapiDeviceEnumeration *this,TComPtr<IMMDevice> param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  longlong *local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  wchar_t *pwStack_20;
  undefined8 local_18;
  
  local_res10 = (longlong *)0x0;
  if ((*param_1.RawPointer == (IMMDevice)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (**(code **)(*(longlong *)*param_1.RawPointer + 0x20))(*param_1.RawPointer,0,&local_res10)
  ;
  if (iVar5 < 0) {
    ::FString::PrintfImpl(&local_58,L"%s -> 0x%X (line: %d)");
    local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    local_18 = 0;
    local_28 = 0;
    pwStack_20 = (wchar_t *)0x0;
    if ((local_res10 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = (**(code **)(*local_res10 + 0x28))(local_res10,&PKEY_Device_FriendlyName,&local_28);
    if (-1 < iVar5) {
      pFVar6 = ::FString::FString(&local_38,pwStack_20);
      if (param_2 != pFVar6) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->Data).ArrayNum = (pFVar6->Data).ArrayNum;
        (param_2->Data).ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      PropVariantClear((PROPVARIANT *)&local_28);
      if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 0x10))();
      }
      if (*param_1.RawPointer != (IMMDevice)0x0) {
        (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
      }
      return true;
    }
    ::FString::PrintfImpl(&local_48,L"%s -> 0x%X (line: %d)");
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x10))();
  }
  if (*param_1.RawPointer != (IMMDevice)0x0) {
    (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
  }
  return false;
}

// GetDeviceId @ 14d0bf660

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDeviceEnumeration::GetDeviceId
          (FWasapiDeviceEnumeration *this,TComPtr<IMMDevice> param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  wchar_t *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = (wchar_t *)0x0;
  if ((*param_1.RawPointer == (IMMDevice)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (**(code **)(*(longlong *)*param_1.RawPointer + 0x28))(*param_1.RawPointer,&local_res10);
  if (iVar5 < 0) {
    ::FString::PrintfImpl(&local_28,L"%s -> 0x%X (line: %d)");
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (*param_1.RawPointer != (IMMDevice)0x0) {
      (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
    }
    bVar3 = false;
  }
  else {
    pFVar6 = ::FString::FString(&local_18,local_res10);
    if (param_2 != pFVar6) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    CoTaskMemFree(local_res10);
    if (*param_1.RawPointer != (IMMDevice)0x0) {
      (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetDeviceIdFromIndex @ 14d0bf7b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDeviceEnumeration::GetDeviceIdFromIndex
          (FWasapiDeviceEnumeration *this,int param_1,
          __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 param_2,FString *param_3)

{
  IMMDeviceEnumerator *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  longlong *local_res8;
  longlong *local_48;
  wchar_t *local_40;
  FString local_38;
  FString local_28;
  
  local_48 = (longlong *)0x0;
  if (((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->DeviceEnumerator).RawPointer;
  iVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_2,1,&local_48);
  if (iVar5 < 0) {
    ::FString::PrintfImpl(&local_38,L"%s -> 0x%X (line: %d)");
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
    goto LAB_14d0bf97c;
  }
  local_res8 = (longlong *)0x0;
  if ((local_48 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (**(code **)(*local_48 + 0x20))(local_48,param_1,&local_res8);
  if (iVar5 < 0) {
LAB_14d0bf967:
    bVar3 = false;
  }
  else {
    local_40 = (wchar_t *)0x0;
    if ((local_res8 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = (**(code **)(*local_res8 + 0x28))(local_res8,&local_40);
    if ((iVar5 < 0) || (local_40 == (wchar_t *)0x0)) goto LAB_14d0bf967;
    pFVar6 = ::FString::FString(&local_28,local_40);
    ::FString::operator=(param_3,pFVar6);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    CoTaskMemFree(local_40);
    bVar3 = true;
  }
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
  }
LAB_14d0bf97c:
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  return bVar3;
}

// GetDeviceIndexFromId @ 14d0bf9c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDeviceEnumeration::GetDeviceIndexFromId
          (FWasapiDeviceEnumeration *this,FString *param_1,int *param_2)

{
  IMMDeviceEnumerator *pIVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint local_res8 [2];
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  uVar7 = 0;
  *param_2 = -1;
  local_res18 = (longlong *)0x0;
  if (((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pIVar1 = (this->DeviceEnumerator).RawPointer;
  iVar6 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,2,1,&local_res18);
  if (iVar6 < 0) {
    ::FString::PrintfImpl(&local_60,L"%s -> 0x%X (line: %d)");
    local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((local_res18 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    iVar6 = (**(code **)(*local_res18 + 0x18))(local_res18,local_res8);
    if (-1 < iVar6) {
      if (local_res8[0] != 0) {
        do {
          local_res20 = (longlong *)0x0;
          if ((local_res18 == (longlong *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("RawPointer != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                 ,0x9f,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = (**(code **)(*local_res18 + 0x20))(local_res18,uVar7,&local_res20);
          if (-1 < iVar6) {
            local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_70.Data.ArrayNum = 0;
            local_70.Data.ArrayMax = 0;
            local_78 = local_res20;
            if (local_res20 != (longlong *)0x0) {
              (**(code **)(*local_res20 + 8))();
            }
            bVar4 = GetDeviceId(this,(IMMDevice *)&local_78,&local_70);
            FVar3.Data = local_70.Data.AllocatorInstance.Data;
            if (bVar4) {
              iVar6 = (param_1->Data).ArrayNum;
              if (local_70.Data.ArrayNum == iVar6) {
                if (1 < local_70.Data.ArrayNum) {
                  iVar6 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)local_70.Data.AllocatorInstance.Data,
                                     (wchar_t *)(param_1->Data).AllocatorInstance.Data);
                  bVar4 = iVar6 == 0;
                  goto LAB_14d0bfbf0;
                }
              }
              else {
                bVar4 = local_70.Data.ArrayNum + iVar6 == 1;
LAB_14d0bfbf0:
                if (!bVar4) goto LAB_14d0bfbf7;
              }
              *param_2 = uVar7;
              if (FVar3.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar3.Data);
              }
              if (local_res20 != (longlong *)0x0) {
                (**(code **)(*local_res20 + 0x10))();
              }
              bVar4 = true;
              goto LAB_14d0bfc28;
            }
LAB_14d0bfbf7:
            if (FVar3.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar3.Data);
            }
          }
          if (local_res20 != (longlong *)0x0) {
            (**(code **)(*local_res20 + 0x10))();
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_res8[0]);
      }
      bVar4 = false;
      goto LAB_14d0bfc28;
    }
    ::FString::PrintfImpl(&local_50,L"%s -> 0x%X (line: %d)");
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  bVar4 = false;
LAB_14d0bfc28:
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x10))();
  }
  return bVar4;
}

// GetDeviceInfo @ 14d0bfcb0

bool __thiscall
Audio::FWasapiDeviceEnumeration::GetDeviceInfo
          (FWasapiDeviceEnumeration *this,FString *param_1,FDeviceInfo *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  TComPtr<IMMDevice> TVar3;
  bool bVar4;
  bool bVar5;
  TComPtr<IMMDevice> local_res20;
  FDeviceInfo local_58;
  
  bVar5 = false;
  local_res20.RawPointer = (IMMDevice *)0x0;
  bVar4 = GetIMMDevice(this,param_1,&local_res20);
  TVar3.RawPointer = local_res20.RawPointer;
  if (bVar4) {
    local_58.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.DeviceId.Data.ArrayNum = 0;
    local_58.DeviceId.Data.ArrayMax = 0;
    local_58.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.FriendlyName.Data.ArrayNum = 0;
    local_58.FriendlyName.Data.ArrayMax = 0;
    local_58.NumInputChannels = 0;
    local_58.NumOutputChannels = 0;
    local_58.BitsPerSample = 0;
    local_58.PreferredSampleRate = 0;
    local_58.EndpointType = Unknown;
    if (local_res20.RawPointer != (IMMDevice *)0x0) {
      (**(code **)((longlong)*local_res20.RawPointer + 8))(local_res20.RawPointer);
    }
    bVar4 = GetDeviceProperties(this,(IMMDevice *)&local_res20,&local_58);
    if (bVar4) {
      if (param_2 != &local_58) {
        pFVar2 = (param_2->DeviceId).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_2->DeviceId).Data.AllocatorInstance.Data =
             local_58.DeviceId.Data.AllocatorInstance.Data;
        (param_2->DeviceId).Data.ArrayNum = local_58.DeviceId.Data.ArrayNum;
        (param_2->DeviceId).Data.ArrayMax = local_58.DeviceId.Data.ArrayMax;
        local_58.DeviceId.Data.ArrayNum = 0;
        local_58.DeviceId.Data.ArrayMax = 0;
        local_58.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pFVar1 = &param_2->FriendlyName;
      if (pFVar1 != &local_58.FriendlyName) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_58.FriendlyName.Data.AllocatorInstance.Data;
        (param_2->FriendlyName).Data.ArrayNum = local_58.FriendlyName.Data.ArrayNum;
        (param_2->FriendlyName).Data.ArrayMax = local_58.FriendlyName.Data.ArrayMax;
        local_58.FriendlyName.Data.ArrayNum = 0;
        local_58.FriendlyName.Data.ArrayMax = 0;
        local_58.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      param_2->NumInputChannels = local_58.NumInputChannels;
      param_2->NumOutputChannels = local_58.NumOutputChannels;
      param_2->BitsPerSample = local_58.BitsPerSample;
      param_2->PreferredSampleRate = local_58.PreferredSampleRate;
      param_2->EndpointType = local_58.EndpointType;
      if (local_58.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.FriendlyName.Data.AllocatorInstance.Data);
      }
      if (local_58.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.DeviceId.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      if (local_58.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.FriendlyName.Data.AllocatorInstance.Data);
      }
      if (local_58.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.DeviceId.Data.AllocatorInstance.Data);
      }
    }
  }
  if (TVar3.RawPointer != (IMMDevice *)0x0) {
    (**(code **)((longlong)*TVar3.RawPointer + 0x10))(TVar3.RawPointer);
  }
  return bVar5;
}

// GetDeviceProperties @ 14d0bffb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDeviceEnumeration::GetDeviceProperties
          (FWasapiDeviceEnumeration *this,TComPtr<IMMDevice> param_1,FDeviceInfo *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  longlong *plVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  EEndpointType EVar8;
  longlong *local_res10;
  LPVOID local_res20;
  IMMDevice local_88;
  IMMDevice local_80;
  IMMDevice local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_88 = *param_1.RawPointer;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  if (local_88 != (IMMDevice)0x0) {
    (**(code **)(*(longlong *)local_88 + 8))();
  }
  bVar5 = GetDeviceId(this,&local_88,&local_60);
  FVar2.Data = (FScriptContainerElement *)0x0;
  if (bVar5) {
    local_80 = *param_1.RawPointer;
    if (local_80 != (IMMDevice)0x0) {
      (**(code **)(*(longlong *)local_80 + 8))();
    }
    bVar5 = GetDeviceFriendlyName(this,&local_80,&local_70);
    FVar2.Data = local_70.Data.AllocatorInstance.Data;
    if (bVar5) {
      local_res10 = (longlong *)0x0;
      if ((*param_1.RawPointer == (IMMDevice)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      iVar7 = (**(code **)(*(longlong *)*param_1.RawPointer + 0x18))
                        (*param_1.RawPointer,&_GUID_7ed4ee07_8e67_4cd4_8c1a_2b7a5987ad42,1,0,
                         &local_res10);
      plVar3 = local_res10;
      if (iVar7 < 0) {
        ::FString::PrintfImpl(&local_50,L"%s -> 0x%X (line: %d)");
        if (1 < (byte)LogAudioCaptureCore._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        FVar2.Data = local_70.Data.AllocatorInstance.Data;
        if (local_res10 != (longlong *)0x0) {
          (**(code **)(*local_res10 + 0x10))();
          FVar2.Data = local_70.Data.AllocatorInstance.Data;
        }
      }
      else {
        local_res20 = (LPVOID)0x0;
        if (local_res10 == (longlong *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L"");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
        }
        else {
          (**(code **)(*local_res10 + 8))(local_res10);
        }
        iVar7 = (**(code **)(*plVar3 + 0x40))(plVar3,&local_res20);
        if (-1 < iVar7) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FVar2.Data = local_60.Data.AllocatorInstance.Data;
          iVar7 = local_60.Data.ArrayNum + -1;
          if (local_60.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          ::FString::AssignRange
                    (&param_2->DeviceId,(wchar_t *)local_60.Data.AllocatorInstance.Data,iVar7);
          FVar4.Data = local_70.Data.AllocatorInstance.Data;
          iVar7 = local_70.Data.ArrayNum + -1;
          if (local_70.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          ::FString::AssignRange
                    (&param_2->FriendlyName,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar7);
          param_2->BitsPerSample = (uint)*(ushort *)((longlong)local_res20 + 0xe);
          param_2->PreferredSampleRate = *(uint *)((longlong)local_res20 + 4);
          local_78 = *param_1.RawPointer;
          if (local_78 != (IMMDevice)0x0) {
            (**(code **)(*(longlong *)local_78 + 8))();
          }
          EVar8 = GetEndpointType(this,&local_78);
          param_2->EndpointType = EVar8;
          if (EVar8 == Capture) {
            param_2->NumInputChannels = (uint)*(ushort *)((longlong)local_res20 + 2);
          }
          else if (EVar8 == Render) {
            param_2->NumOutputChannels = (uint)*(ushort *)((longlong)local_res20 + 2);
          }
          CoTaskMemFree(local_res20);
          if (local_res10 != (longlong *)0x0) {
            (**(code **)(*local_res10 + 0x10))();
          }
          if (FVar4.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar4.Data);
          }
          if (FVar2.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar2.Data);
          }
          if (*param_1.RawPointer != (IMMDevice)0x0) {
            (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
          }
          return true;
        }
        ::FString::PrintfImpl(&local_40,L"%s -> 0x%X (line: %d)");
        if (1 < (byte)LogAudioCaptureCore._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
        }
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FVar2.Data = local_70.Data.AllocatorInstance.Data;
        if (local_res10 != (longlong *)0x0) {
          (**(code **)(*local_res10 + 0x10))();
          FVar2.Data = local_70.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (*param_1.RawPointer != (IMMDevice)0x0) {
    (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
  }
  return false;
}

// GetEndpointType @ 14d0c0310

/* WARNING: Enum "Type": Some values do not have unique names */

EEndpointType __thiscall
Audio::FWasapiDeviceEnumeration::GetEndpointType
          (FWasapiDeviceEnumeration *this,TComPtr<IMMDevice> param_1)

{
  code *pcVar1;
  bool bVar2;
  EEndpointType EVar3;
  int iVar4;
  int local_res10 [2];
  longlong *local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res18[0] = (longlong *)0x0;
  if ((*param_1.RawPointer == (IMMDevice)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  iVar4 = (*(code *)**(undefined8 **)*param_1.RawPointer)
                    (*param_1.RawPointer,&_GUID_1be09788_6894_4089_8586_9a2a6c265ac5,local_res18);
  if (iVar4 < 0) {
    ::FString::PrintfImpl(&local_18,L"%s -> 0x%X (line: %d)");
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
  }
  else {
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
        if (local_res18[0] != (longlong *)0x0) {
          (**(code **)(*local_res18[0] + 0x10))();
        }
        if (*param_1.RawPointer != (IMMDevice)0x0) {
          (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
        }
        return Render;
      }
      if (local_res10[0] == 1) {
        if (local_res18[0] != (longlong *)0x0) {
          (**(code **)(*local_res18[0] + 0x10))();
        }
        if (*param_1.RawPointer != (IMMDevice)0x0) {
          (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
        }
        return Capture;
      }
      goto LAB_14d0c04d6;
    }
    ::FString::PrintfImpl(&local_28,L"%s -> 0x%X (line: %d)");
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_14d0c04d6:
  if (local_res18[0] != (longlong *)0x0) {
    (**(code **)(*local_res18[0] + 0x10))();
  }
  if (*param_1.RawPointer != (IMMDevice)0x0) {
    (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
  }
  return Unknown;
}

// GetIMMDevice @ 14d0c0510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDeviceEnumeration::GetIMMDevice
          (FWasapiDeviceEnumeration *this,FString *param_1,TComPtr<IMMDevice> *param_2)

{
  IMMDeviceEnumerator *pIVar1;
  IMMDevice *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TComPtr<IMMDevice> local_res8;
  FString local_18;
  
  local_res8.RawPointer = (IMMDevice *)0x0;
  if (((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pIVar1 = (this->DeviceEnumerator).RawPointer;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar6 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,pwVar7,&local_res8);
  if (iVar6 < 0) {
    ::FString::PrintfImpl(&local_18,L"%s -> 0x%X (line: %d)");
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  else {
    if (param_2->RawPointer != local_res8.RawPointer) {
      if (local_res8.RawPointer != (IMMDevice *)0x0) {
        (**(code **)((longlong)*local_res8.RawPointer + 8))();
      }
      pIVar2 = param_2->RawPointer;
      if (pIVar2 != (IMMDevice *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
      param_2->RawPointer = (IMMDevice *)local_res8;
    }
    bVar4 = true;
  }
  if (local_res8.RawPointer != (IMMDevice *)0x0) {
    (**(code **)((longlong)*local_res8.RawPointer + 0x10))();
  }
  return bVar4;
}

// GetInputDevicesAvailable @ 14d0c08c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDeviceEnumeration::GetInputDevicesAvailable
          (FWasapiDeviceEnumeration *this,
          TArray<Audio::FWasapiDeviceEnumeration::FDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  IMMDeviceEnumerator *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint local_res8 [2];
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_88;
  FString local_80;
  FString local_70;
  FDeviceInfo local_60;
  
  uVar7 = 0;
  local_res18 = (longlong *)0x0;
  if (((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->DeviceEnumerator).RawPointer;
  iVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,1,1,&local_res18);
  if (iVar5 < 0) {
    ::FString::PrintfImpl(&local_80,L"%s -> 0x%X (line: %d)");
    local_70.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      local_70.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((local_res18 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = (**(code **)(*local_res18 + 0x18))(local_res18,local_res8);
    if (-1 < iVar5) {
      if (local_res8[0] != 0) {
        do {
          local_res20 = (longlong *)0x0;
          if ((local_res18 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("RawPointer != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                 ,0x9f,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          iVar5 = (**(code **)(*local_res18 + 0x20))(local_res18,uVar7,&local_res20);
          if (iVar5 < 0) {
            if (2 < (byte)LogAudioCaptureCore._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
            }
          }
          else {
            local_60.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_60.DeviceId.Data.ArrayNum = 0;
            local_60.DeviceId.Data.ArrayMax = 0;
            local_60.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_60.FriendlyName.Data.ArrayNum = 0;
            local_60.FriendlyName.Data.ArrayMax = 0;
            local_60.NumInputChannels = 0;
            local_60.NumOutputChannels = 0;
            local_60.BitsPerSample = 0;
            local_60.PreferredSampleRate = 0;
            local_60.EndpointType = Unknown;
            local_88 = local_res20;
            if (local_res20 != (longlong *)0x0) {
              (**(code **)(*local_res20 + 8))();
            }
            bVar3 = GetDeviceProperties(this,(IMMDevice *)&local_88,&local_60);
            if (bVar3) {
              if ((5 < (byte)LogAudioCaptureCore._0_1_) &&
                 (UE::Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore),
                 5 < (byte)LogAudioCaptureCore._0_1_)) {
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
              }
              iVar5 = param_1->ArrayNum;
              if (iVar5 == param_1->ArrayMax) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar5 + 1;
              pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x38;
              *(undefined8 *)pFVar6 = 0;
              *(FScriptContainerElement **)pFVar6 = local_60.DeviceId.Data.AllocatorInstance.Data;
              local_60.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar6 + 8) = local_60.DeviceId.Data.ArrayNum;
              *(int *)(pFVar6 + 0xc) = local_60.DeviceId.Data.ArrayMax;
              local_60.DeviceId.Data.ArrayNum = 0;
              local_60.DeviceId.Data.ArrayMax = 0;
              *(undefined8 *)(pFVar6 + 0x10) = 0;
              *(FScriptContainerElement **)(pFVar6 + 0x10) =
                   local_60.FriendlyName.Data.AllocatorInstance.Data;
              local_60.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar6 + 0x18) = local_60.FriendlyName.Data.ArrayNum;
              *(int *)(pFVar6 + 0x1c) = local_60.FriendlyName.Data.ArrayMax;
              local_60.FriendlyName.Data.ArrayNum = 0;
              local_60.FriendlyName.Data.ArrayMax = 0;
              *(uint *)(pFVar6 + 0x20) = local_60.NumInputChannels;
              *(uint *)(pFVar6 + 0x24) = local_60.NumOutputChannels;
              *(uint *)(pFVar6 + 0x28) = local_60.BitsPerSample;
              *(uint *)(pFVar6 + 0x2c) = local_60.PreferredSampleRate;
              *(EEndpointType *)(pFVar6 + 0x30) = local_60.EndpointType;
            }
            else if (2 < (byte)LogAudioCaptureCore._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
            }
            if (local_60.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_60.FriendlyName.Data.AllocatorInstance.Data);
            }
            if (local_60.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.DeviceId.Data.AllocatorInstance.Data);
            }
          }
          if (local_res20 != (longlong *)0x0) {
            (**(code **)(*local_res20 + 0x10))();
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_res8[0]);
      }
      bVar3 = true;
      goto LAB_14d0c0c1a;
    }
    ::FString::PrintfImpl(&local_70,L"%s -> 0x%X (line: %d)");
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
LAB_14d0c0c1a:
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x10))();
  }
  return bVar3;
}

// Initialize @ 14d0c0df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FWasapiDeviceEnumeration::Initialize(FWasapiDeviceEnumeration *this)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  HRESULT HVar5;
  int iVar6;
  FWasapiDeviceEnumeration *local_res8;
  FString local_28;
  
  HVar5 = CoCreateInstance((IID *)&_GUID_bcde0395_e52f_467c_8e3d_c4579291692e,(LPUNKNOWN)0x0,1,
                           (IID *)&_GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                           &(this->DeviceEnumerator).RawPointer);
  if (((HVar5 < 0) || ((this->DeviceEnumerator).RawPointer == (IMMDeviceEnumerator *)0x0)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8315321955121102878>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiDeviceEnumeration.cpp"
                         ,0x1e,
                         "(((HRESULT)(::CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_INPROC_SERVER, __uuidof(**(&DeviceEnumerator)), IID_PPV_ARGS_Helper(&DeviceEnumerator)))) >= 0) && (DeviceEnumerator != nullptr)"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_res8 = this;
  bVar4 = `Audio::FWasapiDeviceEnumeration::EnumerateDefaults'::__l2::<lambda_1>::operator()
                    (&local_res8,eRender,eConsole,&local_28);
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (bVar4) {
    iVar3 = local_28.Data.ArrayNum;
    if (5 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(&this->DefaultRenderId,(wchar_t *)FVar2.Data,iVar6);
  }
  else if (5 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  bVar4 = `Audio::FWasapiDeviceEnumeration::EnumerateDefaults'::__l2::<lambda_1>::operator()
                    (&local_res8,eCapture,eConsole,&local_28);
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (bVar4) {
    iVar3 = local_28.Data.ArrayNum;
    if (5 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(&this->DefaultCaptureId,(wchar_t *)FVar2.Data,iVar6);
  }
  else if (5 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
    return;
  }
  return;
}

