// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetAbsoluteLogFilename @ 14163e030

FString * __cdecl
FGenericPlatformOutputDevices::GetAbsoluteLogFilename(FString *__return_storage_ptr__)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  int iVar7;
  wchar_t wVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  ushort *puVar11;
  FString local_58;
  FString local_48;
  FString local_38;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&LogFilenameLock);
  if (CachedAbsoluteFilename[0] == L'\0') {
    pFVar4 = FPaths::ProjectLogDir(&local_38);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    wcsncpy(CachedAbsoluteFilename,pwVar5,0x3ff);
    CachedAbsoluteFilename[0x3ff] = L'\0';
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pwVar5 = FCommandLine::Get();
    bVar3 = FParse::Value(pwVar5,L"LOG=",&local_58,false,(wchar_t **)0x0);
    if (!bVar3) {
      pwVar5 = FCommandLine::Get();
      bVar3 = FParse::Value(pwVar5,L"ABSLOG=",&local_58,false,(wchar_t **)0x0);
      if (bVar3) {
        CachedAbsoluteFilename[0] = L'\0';
      }
    }
    FPaths::GetExtension(&local_48,&local_58,false);
    puVar11 = (ushort *)&u_log;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar9.Data = local_48.Data.AllocatorInstance.Data;
    }
    do {
      while( true ) {
        uVar1 = *(ushort *)(FVar9.Data + -0x150646720 + (longlong)puVar11);
        uVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        if (uVar1 != uVar2) break;
        if (uVar1 == 0) goto LAB_14163e1f8;
      }
      if (((uVar2 | uVar1) & 0xff80) != 0) {
        if (uVar1 == uVar2) goto LAB_14163e1f8;
        break;
      }
    } while (""[uVar1] == ""[uVar2]);
    puVar11 = (ushort *)&u_txt;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar9.Data = local_48.Data.AllocatorInstance.Data;
    }
    do {
      while( true ) {
        uVar1 = *(ushort *)(FVar9.Data + -0x150642070 + (longlong)puVar11);
        uVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        if (uVar1 != uVar2) break;
        if (uVar1 == 0) goto LAB_14163e1f8;
      }
      if (((uVar2 | uVar1) & 0xff80) != 0) {
        if (uVar1 == uVar2) goto LAB_14163e1f8;
        break;
      }
    } while (""[uVar1] == ""[uVar2]);
    ::FString::Empty(&local_58);
LAB_14163e1f8:
    iVar7 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    if (iVar7 == 0) {
      pwVar5 = GInternalProjectName;
      sVar6 = wcslen(GInternalProjectName);
      if ((int)sVar6 == 0) {
        pwVar5 = L"Unreal";
      }
      ::FString::operator=(&local_58,pwVar5);
      ::FString::AppendChars(&local_58,L".log",4);
    }
    FVar10.Data = local_58.Data.AllocatorInstance.Data;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    wVar8 = *(wchar_t *)FVar9.Data;
    if (wVar8 != L'\0') {
      sVar6 = wcslen(CachedAbsoluteFilename);
      iVar7 = (int)sVar6 + 1;
      if (iVar7 < 0x400) {
        pwVar5 = CachedAbsoluteFilename + (int)sVar6;
        do {
          *pwVar5 = wVar8;
          FVar9.Data = FVar9.Data + 2;
          wVar8 = *(wchar_t *)FVar9.Data;
          pwVar5 = pwVar5 + 1;
          iVar7 = iVar7 + 1;
          if (wVar8 == L'\0') break;
        } while (iVar7 < 0x400);
        *pwVar5 = L'\0';
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,CachedAbsoluteFilename);
  LeaveCriticalSection((LPCRITICAL_SECTION)&LogFilenameLock);
  return __return_storage_ptr__;
}

// GetError @ 141641d80

FOutputDeviceError * __cdecl FGenericPlatformOutputDevices::GetError(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FOutputDeviceAnsiError::FOutputDeviceAnsiError(&::Singleton);
      atexit(`FGenericPlatformOutputDevices::GetError'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (FOutputDeviceError *)&::Singleton;
    }
  }
  return (FOutputDeviceError *)&::Singleton;
}

// GetFeedbackContext @ 141641e30

FFeedbackContext * __cdecl FGenericPlatformOutputDevices::GetFeedbackContext(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FFeedbackContext::FFeedbackContext((FFeedbackContext *)&::Singleton);
      ::Singleton._padding_ = (longlong)&___7FFeedbackContextAnsi__6B_;
      ::Singleton.Context = (FContextSupplier *)0x0;
      ::Singleton.AuxOut = (FOutputDevice *)0x0;
      atexit(`FGenericPlatformOutputDevices::GetFeedbackContext'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (FFeedbackContext *)&::Singleton;
    }
  }
  return (FFeedbackContext *)&::Singleton;
}

// GetLog @ 141643000

FOutputDevice * __cdecl FGenericPlatformOutputDevices::GetLog(void)

{
  undefined8 *puVar1;
  FLogOutputDeviceInitializer FVar2;
  FOutputDeviceFile *this;
  FLogOutputDeviceInitializer FVar3;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = ::operator_new(0x860);
      FVar3.LogDevice.Ptr =
           (TUniquePtr<FOutputDevice,TDefaultDelete<FOutputDevice>_>)(FOutputDevice *)0x0;
      if (this != (FOutputDeviceFile *)0x0) {
        local_10 = 0;
        local_28 = &___7__TFunction_OwnedObject_P6AXPEB_W_Z_0A__0A__Function_Private_Core_UE__6B_;
        local_20 = ``FGenericPlatformOutputDevices::GetLog'::__l2::FLogOutputDeviceInitializer::
                   FLogOutputDeviceInitializer'::__l5::<lambda_1>::<lambda_invoker_cdecl>;
        local_38[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<void_(__cdecl*)(wchar_t_const_*),void,wchar_t_const_*>::
                      Call;
        FVar3.LogDevice.Ptr =
             (TUniquePtr<FOutputDevice,TDefaultDelete<FOutputDevice>_>)
             FOutputDeviceFile::FOutputDeviceFile
                       (this,(wchar_t *)0x0,false,false,true,
                        (TFunction<void___cdecl(wchar_t_const_*)> *)local_38);
      }
      FVar2.LogDevice.Ptr = ::Singleton.LogDevice.Ptr;
      if (::Singleton.LogDevice.Ptr != (FOutputDevice *)0x0) {
        puVar1 = *(undefined8 **)::Singleton.LogDevice.Ptr;
        ::Singleton.LogDevice.Ptr = FVar3.LogDevice.Ptr;
        (*(code *)*puVar1)(FVar2.LogDevice.Ptr,1);
        FVar3.LogDevice.Ptr = ::Singleton.LogDevice.Ptr;
      }
      ::Singleton.LogDevice.Ptr = FVar3.LogDevice.Ptr;
      atexit(`FGenericPlatformOutputDevices::GetLog'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return ::Singleton.LogDevice.Ptr.Ptr;
    }
  }
  return ::Singleton.LogDevice.Ptr.Ptr;
}

// GetPerChannelFileOverrides @ 141644540

void __cdecl
FGenericPlatformOutputDevices::GetPerChannelFileOverrides
          (TArray<FOutputDevice_*,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  ulonglong uVar7;
  FOutputDeviceFile *this;
  FOutputDeviceFile *this_00;
  FName *pFVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_128;
  FOutputDeviceFile *local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_110;
  TArray<FString,TSizedDefaultAllocator<32>_> local_100;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  FScriptContainerElement *local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FScriptContainerElement *local_a8;
  FString local_a0;
  FName local_90;
  FString local_88;
  FString local_78;
  TFunction<void___cdecl(wchar_t_const_*)> local_68;
  
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar5,L"logcategoryfiles=",&local_128,true,(wchar_t **)0x0);
  if (bVar3) {
    pFVar6 = ::FString::TrimQuotes(&local_128,&local_88,(bool *)0x0);
    if (&local_128 != pFVar6) {
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      local_128.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_128.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_128,&local_100,L",",true);
    uVar7 = (ulonglong)local_100.ArrayNum;
    local_a8 = local_100.AllocatorInstance.Data + uVar7 * 0x10;
    local_res20 = local_100.ArrayNum;
    FVar11.Data = local_100.AllocatorInstance.Data;
    while( true ) {
      pFVar12 = local_a8;
      local_e0 = FVar11.Data;
      if (local_100.ArrayNum != (int)uVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar11.Data == pFVar12) break;
      local_d8.Data.ArrayNum = *(int *)(FVar11.Data + 8);
      lVar10 = (longlong)local_d8.Data.ArrayNum;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pvVar1 = *(void **)FVar11.Data;
      if (local_d8.Data.ArrayNum == 0) {
        local_d8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,
                   local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax);
        memcpy(local_d8.Data.AllocatorInstance.Data,pvVar1,lVar10 * 2);
      }
      this_00 = (FOutputDeviceFile *)0x0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      pFVar6 = ::FString::TrimStartAndEnd(&local_d8,&local_78);
      ::FString::FString(&local_a0,L"=");
      bVar3 = ::FString::Split(pFVar6,&local_a0,&local_c8,&local_b8);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        this = ::operator_new(0x860);
        if (this != (FOutputDeviceFile *)0x0) {
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_c8.Data.ArrayNum != 0) {
            FVar11.Data = local_c8.Data.AllocatorInstance.Data;
          }
          local_68._0_8_ = 0;
          local_68._40_8_ = 0;
          this_00 = FOutputDeviceFile::FOutputDeviceFile
                              (this,(wchar_t *)FVar11.Data,false,false,true,&local_68);
        }
        local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.ArrayNum = 0;
        local_110.ArrayMax = 0;
        ::FString::ParseIntoArray(&local_b8,&local_110,L"+",true);
        iVar4 = local_110.ArrayNum;
        uVar7 = (ulonglong)local_110.ArrayNum;
        pFVar12 = local_110.AllocatorInstance.Data + uVar7 * 0x10;
        FVar11.Data = local_110.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar7 != iVar4) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (FVar11.Data == pFVar12) break;
          pvVar1 = *(void **)FVar11.Data;
          local_e8 = *(int *)(FVar11.Data + 8);
          lVar10 = (longlong)local_e8;
          local_f0.Data = (FScriptContainerElement *)0x0;
          if (local_e8 == 0) {
            local_e4 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_e8,0,&local_f0,local_e8,&local_e4);
            memcpy(local_f0.Data,pvVar1,lVar10 * 2);
          }
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_e8 != 0) {
            FVar9.Data = local_f0.Data;
          }
          pFVar8 = ::FName::FName(&local_90,(wchar_t *)FVar9.Data);
          FOutputDeviceFile::IncludeCategory(this_00,pFVar8);
          if (local_f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data);
          }
          uVar7 = local_110._8_8_ & 0xffffffff;
          FVar11.Data = FVar11.Data + 0x10;
        }
        pFVar12 = (param_1->AllocatorInstance).Data;
        local_118 = this_00;
        if (((pFVar12 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar12 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = param_1->ArrayNum;
        if (iVar4 == param_1->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar4 + 1;
        *(FOutputDeviceFile **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_118
        ;
        DestructItems<FString,int>((FString *)local_110.AllocatorInstance.Data,local_110.ArrayNum);
        FVar11.Data = local_e0;
        if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.AllocatorInstance.Data);
          FVar11.Data = local_e0;
        }
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      FVar11.Data = FVar11.Data + 0x10;
      uVar7 = (ulonglong)local_res20;
    }
    DestructItems<FString,int>((FString *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// OnLogFileOpened @ 14164f380

void __cdecl FGenericPlatformOutputDevices::OnLogFileOpened(wchar_t *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&LogFilenameLock);
  wcsncpy(CachedAbsoluteFilename,param_1,0x3ff);
  CachedAbsoluteFilename[0x3ff] = L'\0';
                    /* WARNING: Could not recover jumptable at 0x00014164f3c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&LogFilenameLock);
  return;
}

// ResetCachedAbsoluteFilename @ 141658050

void __cdecl FGenericPlatformOutputDevices::ResetCachedAbsoluteFilename(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&LogFilenameLock);
  CachedAbsoluteFilename[0] = L'\0';
                    /* WARNING: Could not recover jumptable at 0x000141658075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&LogFilenameLock);
  return;
}

// SetupOutputDevices @ 14165fa30

void __cdecl FGenericPlatformOutputDevices::SetupOutputDevices(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FOutputDeviceRedirector *pFVar5;
  wchar_t *pwVar6;
  FOutputDevice *pFVar7;
  FOutputDevice *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  TArray<FOutputDevice_*,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar5 = GetGlobalLogSingleton();
  if ((pFVar5 == (FOutputDeviceRedirector *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetGlobalLogSingleton()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformOutputDevices.cpp"
                         ,0x17,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&LogFilenameLock);
  pFVar8 = (FOutputDevice *)0x0;
  CachedAbsoluteFilename[0] = L'\0';
  LeaveCriticalSection((LPCRITICAL_SECTION)&LogFilenameLock);
  pwVar6 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar6,L"NODEFAULTLOG");
  if (!bVar4) {
    pFVar5 = GetGlobalLogSingleton();
    pFVar7 = GetLog();
    FOutputDeviceRedirector::AddOutputDevice(pFVar5,pFVar7);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  GetPerChannelFileOverrides(&local_28);
  iVar3 = local_28.ArrayNum;
  uVar9 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar9 * 8;
  FVar10.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar3) {
      `TCheckedPointerIterator<FOutputDevice_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    pFVar7 = *(FOutputDevice **)FVar10.Data;
    pFVar5 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::AddOutputDevice(pFVar5,pFVar7);
    uVar9 = local_28._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 8;
  }
  if (GLogConsole != (FOutputDeviceConsole *)0x0) {
    pwVar6 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar6,L"NOCONSOLE");
    if (!bVar4) {
      pFVar5 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::AddOutputDevice(pFVar5,(FOutputDevice *)GLogConsole);
    }
  }
  pwVar6 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar6,L"NODEBUGOUTPUT");
  if (!bVar4) {
    pFVar5 = GetGlobalLogSingleton();
    pFVar7 = ::operator_new(0x20);
    if (pFVar7 != (FOutputDevice *)0x0) {
      pFVar7->_padding_ = 0;
      pFVar7->bSuppressEventTag = false;
      pFVar7->bAutoEmitLineTerminator = false;
      *(undefined6 *)&pFVar7->field_0xa = 0;
      pFVar7[1]._padding_ = 0;
      pFVar7[1].bSuppressEventTag = false;
      pFVar7[1].bAutoEmitLineTerminator = false;
      *(undefined6 *)&pFVar7[1].field_0xa = 0;
      FOutputDevice::FOutputDevice(pFVar7);
      pFVar7->_padding_ = (longlong)&___7FOutputDeviceDebug__6B_;
      pFVar7[1]._padding_ = 0;
      pFVar7[1].bSuppressEventTag = false;
      pFVar8 = pFVar7;
    }
    FOutputDeviceRedirector::AddOutputDevice(pFVar5,pFVar8);
  }
  pFVar5 = GetGlobalLogSingleton();
  pFVar8 = FWindowsPlatformOutputDevices::GetEventLog();
  FOutputDeviceRedirector::AddOutputDevice(pFVar5,pFVar8);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

