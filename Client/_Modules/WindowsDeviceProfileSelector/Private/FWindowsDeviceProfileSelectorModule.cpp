// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsDeviceProfileSelector
// Functions: 4

// GetRuntimeDeviceProfileName @ 14f1271f0

/* WARNING: Type propagation algorithm not settling */

FString * __thiscall
FWindowsDeviceProfileSelectorModule::GetRuntimeDeviceProfileName
          (FWindowsDeviceProfileSelectorModule *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  bool bVar7;
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,"Windows");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar3 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar3,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) {
    return __return_storage_ptr__;
  }
  if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false) {
    return __return_storage_ptr__;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  FConfigCacheIni::GetSectionNames(GConfig,&GDeviceProfilesIni,&local_38);
  pwVar3 = GetSelectedDynamicRHIModuleName(false);
  iVar2 = (__return_storage_ptr__->Data).ArrayNum;
  pFVar5 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar6 = (2 - (uint)(iVar2 != 0)) + iVar2;
  local_28.Data.ArrayNum = iVar2;
  if ((int)uVar6 < iVar2) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar6,0,(ForAnyElementType *)&local_28,iVar2,&local_28.Data.ArrayMax);
  if (iVar2 != 0) {
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar5,(longlong)iVar2 * 2);
  }
  ::FString::AppendChar(&local_28,L'_');
  ::FString::ConcatFC(&local_48,&local_28,pwVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"%s DeviceProfile");
  pFVar5 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  iVar2 = local_28.Data.ArrayNum;
  for (FVar4.Data = local_38.AllocatorInstance.Data; FVar4.Data != pFVar5;
      FVar4.Data = FVar4.Data + 0x10) {
    iVar1 = *(int *)(FVar4.Data + 8);
    if (iVar1 == iVar2) {
      if (1 < iVar1) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar4.Data,(wchar_t *)local_28.Data.AllocatorInstance.Data);
        bVar7 = iVar2 == 0;
        iVar2 = local_28.Data.ArrayNum;
        goto LAB_14f12738e;
      }
LAB_14f127461:
      bVar7 = true;
      goto LAB_14f1273a4;
    }
    bVar7 = iVar1 + iVar2 == 1;
LAB_14f12738e:
    if (bVar7) goto LAB_14f127461;
  }
  bVar7 = false;
LAB_14f1273a4:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar7) {
    iVar2 = ::FString::Find(&local_48,L"_ES31",5,IgnoreCase,FromStart,-1);
    if (iVar2 == -1) goto LAB_14f1274dc;
    ::FString::ConcatFC(&local_28,__return_storage_ptr__,L"_ES31");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_48.Data.ArrayMax = local_28.Data.ArrayMax;
    local_48.Data.ArrayNum = local_28.Data.ArrayNum;
    ::FString::PrintfImpl(&local_28,L"%s DeviceProfile");
    pFVar5 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
    iVar2 = local_28.Data.ArrayNum;
    for (FVar4.Data = local_38.AllocatorInstance.Data; FVar4.Data != pFVar5;
        FVar4.Data = FVar4.Data + 0x10) {
      iVar1 = *(int *)(FVar4.Data + 8);
      if (iVar1 == iVar2) {
        if (1 < iVar1) {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)FVar4.Data,(wchar_t *)local_28.Data.AllocatorInstance.Data
                            );
          bVar7 = iVar2 == 0;
          iVar2 = local_28.Data.ArrayNum;
          goto LAB_14f127483;
        }
LAB_14f12752b:
        bVar7 = true;
        goto LAB_14f127499;
      }
      bVar7 = iVar1 + iVar2 == 1;
LAB_14f127483:
      if (bVar7) goto LAB_14f12752b;
    }
    bVar7 = false;
LAB_14f127499:
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (!bVar7) goto LAB_14f1274dc;
  }
  if (__return_storage_ptr__ != &local_48) {
    pFVar5 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
    iVar2 = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    (__return_storage_ptr__->Data).ArrayMax = iVar2;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
LAB_14f1274dc:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StartupModule @ 14f127590

void __thiscall
FWindowsDeviceProfileSelectorModule::StartupModule(FWindowsDeviceProfileSelectorModule *this)

{
  return;
}

// ShutdownModule @ 14f1275a0

void __thiscall
FWindowsDeviceProfileSelectorModule::ShutdownModule(FWindowsDeviceProfileSelectorModule *this)

{
  return;
}

// ~FWindowsDeviceProfileSelectorModule @ 14f1275f0

void __thiscall
FWindowsDeviceProfileSelectorModule::~FWindowsDeviceProfileSelectorModule
          (FWindowsDeviceProfileSelectorModule *this)

{
  *(undefined ***)this = IModuleInterface::vftable;
  return;
}

