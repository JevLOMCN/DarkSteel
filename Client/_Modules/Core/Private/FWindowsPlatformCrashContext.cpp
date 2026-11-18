// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// AddOptionalAttachment @ 141a9fb00

void __cdecl FWindowsPlatformCrashContext::AddOptionalAttachment(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((OptionalAttachmentFilepaths.AllocatorInstance.Data <= param_1) &&
      (param_1 < OptionalAttachmentFilepaths.AllocatorInstance.Data +
                 (longlong)OptionalAttachmentFilepaths.ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (OptionalAttachmentFilepaths.ArrayNum == OptionalAttachmentFilepaths.ArrayMax) {
    OptionalAttachmentFilepaths.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&OptionalAttachmentFilepaths.AllocatorInstance,
                    &OptionalAttachmentFilepaths.ArrayMax);
  }
  lVar3 = (longlong)OptionalAttachmentFilepaths.ArrayNum;
  OptionalAttachmentFilepaths.ArrayNum = OptionalAttachmentFilepaths.ArrayNum + 1;
  ::FString::FString((FString *)(OptionalAttachmentFilepaths.AllocatorInstance.Data + lVar3 * 0x10),
                     param_1);
  return;
}

// AddPlatformSpecificProperties @ 141a9fbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWindowsPlatformCrashContext::AddPlatformSpecificProperties(FWindowsPlatformCrashContext *this)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  FPlatformDriveStats *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 *puVar8;
  undefined1 auStack_78 [32];
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  wchar_t local_38 [4];
  FString local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48.Size = 0x18;
  local_48.DataPtr = L"PlatformIsRunningWindows";
  ::FString::PrintfImpl(&local_30,L"%d");
  local_58.Size = local_30.Data.ArrayNum - 1;
  if (local_30.Data.ArrayNum == 0) {
    local_58.Size = 0;
  }
  puVar8 = &this->field_0x58;
  FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_48,&local_58);
  if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                       (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                   (uint)local_30.Data.AllocatorInstance.Data));
  }
  local_58.Size = 0x15;
  local_58.DataPtr = L"PlatformIsRunningWine";
  bVar1 = FWindowsPlatformMisc::IsWine();
  pwVar7 = L"true";
  pwVar6 = L"true";
  if (!bVar1) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_30,pwVar6);
  iVar5 = local_30.Data.ArrayNum - 1;
  if (local_30.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  local_48.Size = iVar5;
  FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
  if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                       (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                   (uint)local_30.Data.AllocatorInstance.Data));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FWindowsPlatformMisc::SupportsWindows11'::__l2::FWindows11SupportCheck::
      FWindows11SupportCheck(&Win11Check);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pwVar6 = L"true";
  local_58.DataPtr = L"PlatformSupportsWindows11";
  if (Win11Check.bSupported == false) {
    pwVar6 = L"false";
  }
  local_58.Size = 0x19;
  ::FString::FString(&local_30,pwVar6);
  iVar5 = local_30.Data.ArrayNum - 1;
  if (local_30.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  local_48.Size = iVar5;
  FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
  if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                       (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                   (uint)local_30.Data.AllocatorInstance.Data));
  }
  BVar3 = GetSystemPowerStatus((LPSYSTEM_POWER_STATUS)&local_30);
  bVar1 = false;
  if (BVar3 != 0) {
    cVar2 = (char)((uint)local_30.Data.AllocatorInstance.Data >> 8);
    if (((((uint)local_30.Data.AllocatorInstance.Data & 0xf00) == 0) || (cVar2 < '\0')) &&
       (cVar2 != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  local_58.Size = 0x12;
  local_58.DataPtr = L"IsRunningOnBattery";
  pwVar6 = L"true";
  if (!bVar1) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_30,pwVar6);
  iVar5 = local_30.Data.ArrayNum - 1;
  if (local_30.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  local_48.Size = iVar5;
  FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
  if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                       (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                   (uint)local_30.Data.AllocatorInstance.Data));
  }
  BVar3 = GetSystemPowerStatus((LPSYSTEM_POWER_STATUS)&local_30);
  if ((BVar3 == 0) ||
     (((cVar2 = (char)((uint)local_30.Data.AllocatorInstance.Data >> 8),
       ((uint)local_30.Data.AllocatorInstance.Data & 0xf00) == 0 || (cVar2 < '\0')) &&
      (cVar2 != '\0')))) {
    bVar1 = false;
  }
  else {
    bVar1 = local_30.Data.AllocatorInstance.Data._3_1_ == '\x01';
  }
  local_58.Size = 0x13;
  if (!bVar1) {
    pwVar7 = L"false";
  }
  local_58.DataPtr = L"IsUsingBatterySaver";
  ::FString::FString(&local_30,pwVar7);
  iVar5 = local_30.Data.ArrayNum - 1;
  if (local_30.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  local_48.Size = iVar5;
  FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
  if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                       (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                   (uint)local_30.Data.AllocatorInstance.Data));
  }
  local_38[0] = L'\0';
  pwVar6 = FWindowsPlatformProcess::BaseDir();
  if ((pwVar6 != (wchar_t *)0x0) && (*pwVar6 != L'\0')) {
    FGenericPlatformString::Memcpy(local_38,pwVar6,2);
    pFVar4 = FWindowsPlatformMisc::GetDriveStats(local_38[0]);
    if (pFVar4 != (FPlatformDriveStats *)0x0) {
      local_58.Size = 0x17;
      local_58.DataPtr = L"DriveStats.Project.Name";
      ::FString::FString(&local_30,pwVar6);
      iVar5 = local_30.Data.ArrayNum - 1;
      if (local_30.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      local_48.Size = iVar5;
      FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
      if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_30.Data.AllocatorInstance.Data));
      }
      local_58.DataPtr = L"DriveStats.Project.Type";
      local_58.Size = 0x17;
      pwVar6 = ::LexToString(pFVar4->DriveType);
      ::FString::FString(&local_30,pwVar6);
      iVar5 = local_30.Data.ArrayNum - 1;
      if (local_30.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      local_48.Size = iVar5;
      FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
      if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_30.Data.AllocatorInstance.Data));
      }
      local_58.DataPtr = L"DriveStats.Project.FreeSpaceKb";
      local_58.Size = 0x1e;
      ::FString::PrintfImpl(&local_30,L"%llu");
      iVar5 = local_30.Data.ArrayNum - 1;
      if (local_30.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      local_48.Size = iVar5;
      FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
      if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_30.Data.AllocatorInstance.Data));
      }
    }
  }
  pwVar6 = FGenericPlatformMisc::GamePersistentDownloadDir();
  if ((pwVar6 != (wchar_t *)0x0) && (*pwVar6 != L'\0')) {
    FGenericPlatformString::Memcpy(local_38,pwVar6,2);
    pFVar4 = FWindowsPlatformMisc::GetDriveStats(local_38[0]);
    if (pFVar4 != (FPlatformDriveStats *)0x0) {
      local_58.Size = 0x22;
      local_58.DataPtr = L"DriveStats.PersistentDownload.Name";
      ::FString::FString(&local_30,pwVar6);
      iVar5 = local_30.Data.ArrayNum - 1;
      if (local_30.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      local_48.Size = iVar5;
      FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
      if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_30.Data.AllocatorInstance.Data));
      }
      local_58.DataPtr = L"DriveStats.PersistentDownload.Type";
      local_58.Size = 0x22;
      pwVar6 = ::LexToString(pFVar4->DriveType);
      ::FString::FString(&local_30,pwVar6);
      iVar5 = local_30.Data.ArrayNum - 1;
      if (local_30.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      local_48.Size = iVar5;
      FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
      if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_30.Data.AllocatorInstance.Data));
      }
      local_58.DataPtr = L"DriveStats.PersistentDownload.FreeSpaceKb";
      local_58.Size = 0x29;
      ::FString::PrintfImpl(&local_30,L"%llu");
      iVar5 = local_30.Data.ArrayNum - 1;
      if (local_30.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      local_48.Size = iVar5;
      FGenericCrashContext::AddCrashPropertyInternal((FString *)puVar8,&local_58,&local_48);
      if ((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_30.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_30.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_30.Data.AllocatorInstance.Data));
      }
    }
  }
  return;
}

// CopyOptionalAttachments @ 141aa2010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsPlatformCrashContext::CopyOptionalAttachments
          (FWindowsPlatformCrashContext *this,wchar_t *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  size_t sVar5;
  IFileManager *pIVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  int iVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  int local_50;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  
  pwVar11 = FGenericCrashContext::CrashReportOptionalAttachmentsDirName;
  if (OptionalAttachmentFilepaths.ArrayNum != 0) {
    iVar10 = 0;
    local_68.Size = iVar10;
    local_68.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar5 = wcslen(param_1);
      local_68.Size = (int)sVar5;
    }
    local_58 = pwVar11;
    local_50 = iVar10;
    if (pwVar11 != (wchar_t *)0x0) {
      sVar5 = wcslen(pwVar11);
      local_50 = (int)sVar5;
    }
    FPaths::CombineInternal(&local_88,&local_68,2);
    pIVar6 = IFileManager::Get();
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar9.Data = local_88.Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar6 + 0x60))(pIVar6,FVar9.Data,0);
    iVar3 = OptionalAttachmentFilepaths.ArrayNum;
    if (cVar4 == '\0') {
      if (1 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
    }
    else {
      bVar2 = false;
      pFVar12 = OptionalAttachmentFilepaths.AllocatorInstance.Data +
                (longlong)OptionalAttachmentFilepaths.ArrayNum * 0x10;
      FVar9 = OptionalAttachmentFilepaths.AllocatorInstance;
      while( true ) {
        if (OptionalAttachmentFilepaths.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar9.Data == pFVar12) break;
        pFVar7 = FPaths::GetCleanFilename((FString *)&local_68,(FString *)FVar9.Data);
        local_48.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
        local_38 = (pFVar7->Data).AllocatorInstance.Data;
        iVar1 = (pFVar7->Data).ArrayNum;
        local_48.Size = local_88.Data.ArrayNum + -1;
        if (local_88.Data.ArrayNum == 0) {
          local_48.Size = iVar10;
        }
        local_30 = iVar1 + -1;
        if (iVar1 == 0) {
          local_30 = iVar10;
        }
        FPaths::CombineInternal(&local_78,&local_48,2);
        if (local_68.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_68.DataPtr);
        }
        pIVar6 = IFileManager::Get();
        if (*(int *)(FVar9.Data + 8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)FVar9.Data;
        }
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar8.Data = local_78.Data.AllocatorInstance.Data;
        }
        cVar4 = (**(code **)((longlong)*pIVar6 + 0x48))(pIVar6,FVar8.Data,pwVar11,1,0,0,0);
        if (cVar4 == '\0') {
          if (1 < (byte)LogWindows._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
          }
        }
        else {
          bVar2 = true;
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        FVar9.Data = FVar9.Data + 0x10;
      }
      if (bVar2) {
        local_48.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
        local_38 = (FScriptContainerElement *)FGenericCrashContext::CrashContextRuntimeXMLNameW;
        local_48.Size = local_88.Data.ArrayNum + -1;
        if (local_88.Data.ArrayNum == 0) {
          local_48.Size = 0;
        }
        if (FGenericCrashContext::CrashContextRuntimeXMLNameW != (wchar_t *)0x0) {
          sVar5 = wcslen(FGenericCrashContext::CrashContextRuntimeXMLNameW);
          iVar10 = (int)sVar5;
        }
        local_30 = iVar10;
        FPaths::CombineInternal(&local_78,&local_48,2);
        WriteOptionalAttachmentsXML(this,&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CopyPlatformSpecificFiles @ 141aa22d0

void __thiscall
FWindowsPlatformCrashContext::CopyPlatformSpecificFiles
          (FWindowsPlatformCrashContext *this,wchar_t *param_1,void *param_2)

{
  char cVar1;
  size_t sVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  IFileManager *pIVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  bool local_res8 [8];
  FString *pFVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined4 local_40;
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  undefined4 local_20;
  
  FGenericCrashContext::CopyPlatformSpecificFiles((FGenericCrashContext *)this,param_1,param_2);
  local_res8[0] = true;
  if (*(int *)&this->field_0x10 == 2) {
    pwVar6 = L"Ensure.RecordDump";
LAB_141aa2329:
    pFVar8 = &GEngineIni;
    FConfigCacheIni::GetBool(GConfig,L"CrashReportClient",pwVar6,local_res8,&GEngineIni);
    if (local_res8[0] == false) goto LAB_141aa23c6;
  }
  else if (*(int *)&this->field_0x10 == 3) {
    pwVar6 = L"Stall.RecordDump";
    goto LAB_141aa2329;
  }
  pwVar6 = FGenericCrashContext::UEMinidumpName;
  local_58.Size = 0;
  local_58.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_58.Size = (int)sVar2;
  }
  local_40 = 0;
  local_48 = pwVar6;
  if (pwVar6 != (wchar_t *)0x0) {
    sVar2 = wcslen(pwVar6);
    local_40 = (undefined4)sVar2;
  }
  FPaths::CombineInternal(&local_68,&local_58,2);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::`anonymous_namespace'::WriteMinidump
            (*(void **)&this->field_0x8,*(ulong *)&this->field_0x14,this,(wchar_t *)FVar5.Data,
             param_2);
  pFVar8 = param_2;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    pFVar8 = param_2;
  }
LAB_141aa23c6:
  pTVar3 = &FPaths::ProjectLogDir((FString *)&local_58)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_78,pTVar3,0x10 - (uint)(pTVar3->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_78,L"CrashVideo.avi",0xe);
  if (local_58.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  pIVar4 = IFileManager::Get();
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.ArrayNum != 0) {
    FVar5.Data = local_78.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,FVar5.Data);
  if (cVar1 != '\0') {
    FPaths::GetCleanFilename((FString *)&local_58,(FString *)&local_78);
    local_28 = L"";
    if (local_58.Size != 0) {
      local_28 = local_58.DataPtr;
    }
    local_38.Size = 0;
    local_38.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar2 = wcslen(param_1);
      local_38.Size = (int)sVar2;
    }
    local_20 = 0;
    if (local_28 != (wchar_t *)0x0) {
      sVar2 = wcslen(local_28);
      local_20 = (undefined4)sVar2;
    }
    FPaths::CombineInternal(&local_68,&local_38,2);
    pIVar4 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.ArrayNum != 0) {
      FVar5.Data = local_78.AllocatorInstance.Data;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar7.Data = local_68.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar4 + 0x40))
              (pIVar4,FVar7.Data,FVar5.Data,1,(ulonglong)pFVar8 & 0xffffffffffffff00,0,0,0,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  CopyOptionalAttachments(this,param_1);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// WriteOptionalAttachmentsXML @ 141ac5ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsPlatformCrashContext::WriteOptionalAttachmentsXML
          (FWindowsPlatformCrashContext *this,FString *param_1)

{
  bool bVar1;
  size_t sVar2;
  IFileManager *pIVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_198 [32];
  TStringView<wchar_t> local_168;
  FString local_158;
  TStringView<wchar_t> local_148;
  FString local_138;
  wchar_t local_128 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  FGenericCrashContext::GetUniqueCrashName((FGenericCrashContext *)this,local_128,0x80);
  FGenericCrashContext::AddHeader(&local_158);
  FGenericCrashContext::BeginSection(&local_158,FGenericCrashContext::RuntimePropertiesTag);
  local_168.DataPtr = FGenericCrashContext::CrashGuidTag;
  local_168.Size = 0;
  if (FGenericCrashContext::CrashGuidTag != (wchar_t *)0x0) {
    sVar2 = wcslen(FGenericCrashContext::CrashGuidTag);
    local_168.Size = (int)sVar2;
  }
  ::FString::FString(&local_138,local_128);
  local_148.Size = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    local_148.Size = 0;
  }
  local_148.DataPtr = (wchar_t *)local_138.Data.AllocatorInstance.Data;
  FGenericCrashContext::AddCrashPropertyInternal(&local_158,&local_168,&local_148);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  FGenericCrashContext::EndSection(&local_158,FGenericCrashContext::RuntimePropertiesTag);
  FGenericCrashContext::BeginSection(&local_158,FGenericCrashContext::RequestDataTag);
  local_148.Size = 4;
  local_148.DataPtr = L"Type";
  ::FString::FString(&local_138,L"PATCH");
  iVar4 = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  local_168.Size = iVar4;
  local_168.DataPtr = (wchar_t *)local_138.Data.AllocatorInstance.Data;
  FGenericCrashContext::AddCrashPropertyInternal(&local_158,&local_148,&local_168);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  FGenericCrashContext::EndSection(&local_158,FGenericCrashContext::RequestDataTag);
  FGenericCrashContext::AddFooter(&local_158);
  pIVar3 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = local_158.Data.ArrayNum + -1;
  if (local_158.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  local_168.Size = iVar4;
  local_168.DataPtr = (wchar_t *)local_158.Data.AllocatorInstance.Data;
  bVar1 = FFileHelper::SaveStringToFile(&local_168,pwVar5,AutoDetect,pIVar3,0);
  if ((!bVar1) && (1 < (byte)LogWindows._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return;
}

