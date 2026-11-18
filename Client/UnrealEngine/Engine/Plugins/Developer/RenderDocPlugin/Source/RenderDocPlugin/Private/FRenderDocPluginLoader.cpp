// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 3

// GetRenderDocLibrary @ 14e2ca570

void * __cdecl FRenderDocPluginLoader::GetRenderDocLibrary(void)

{
  TConsoleVariableData<FString> *pTVar1;
  bool bVar2;
  longlong lVar3;
  size_t sVar4;
  void *pvVar5;
  undefined4 uVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  wchar_t *_Str;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  pTVar1 = CVarRenderDocBinaryPath.Ref;
  _Str = L"";
  if (RenderDocDllName.Data.ArrayNum != 0) {
    _Str = (wchar_t *)RenderDocDllName.Data.AllocatorInstance.Data;
  }
  bVar2 = IsInParallelGameThread();
  uVar6 = 0;
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 0x10;
    if (!bVar2) goto LAB_14e2ca5c9;
  }
  lVar3 = 0;
LAB_14e2ca5c9:
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = *(int *)((longlong)&pTVar1->ShadowedValue[0].Data.ArrayNum + lVar3);
  lVar7 = (longlong)local_40;
  pvVar5 = *(void **)((longlong)&pTVar1->ShadowedValue[0].Data.AllocatorInstance.Data + lVar3);
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,pvVar5,lVar7 * 2);
  }
  local_28.Size = 0;
  local_28.DataPtr = L"";
  if (local_40 != 0) {
    local_28.DataPtr = (wchar_t *)local_48.Data;
  }
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar4;
  }
  local_18 = (FScriptContainerElement *)_Str;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen(_Str);
    uVar6 = (undefined4)sVar4;
  }
  local_10 = uVar6;
  FPaths::CombineInternal(&local_38,&local_28,2);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
  }
  pvVar5 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar8.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return pvVar5;
}

// Initialize @ 14e2ca700

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FRenderDocPluginLoader::Initialize(FRenderDocPluginLoader *this)

{
  FName FVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<FString> *pTVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  void *pvVar8;
  FString *pFVar9;
  size_t sVar10;
  HMODULE hLibModule;
  code *pcVar11;
  FName *pFVar12;
  FModuleManager *this_00;
  IModuleInterface *pIVar13;
  longlong *plVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  int *in_stack_fffffffffffffeb8;
  FString local_138;
  FString local_128;
  FString local_118;
  FString *local_108;
  undefined8 local_100;
  FString local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TStringView<wchar_t> local_98;
  FScriptContainerElement *local_88;
  int local_80;
  FName local_78;
  FString local_70;
  FString local_60 [2];
  
  lVar19 = 0;
  this->RenderDocDLL = (void *)0x0;
  this->RenderDocAPI = (RENDERDOC_API_1_1_0 *)0x0;
  iVar6 = 0;
  pwVar16 = L"";
  local_res20 = 0;
  if (GEngineIni.Data.ArrayNum != 0) {
    pwVar16 = (wchar_t *)GEngineIni.Data.AllocatorInstance;
  }
  UE::ConfigUtilities::ApplyCVarSettingsFromIni
            (L"/Script/RenderDocPlugin.RenderDocPluginSettings",pwVar16,0x4000000,false,(FName)0x0);
  pwVar16 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar16,L"AttachRenderDoc");
  pTVar2 = CVarRenderDocAutoAttach.Ref;
  if (!bVar4) {
    bVar4 = IsInParallelGameThread();
    if (bVar4) {
LAB_14e2ca79b:
      lVar7 = lVar19;
    }
    else {
      bVar4 = IsInGameThread();
      lVar7 = 4;
      if (bVar4) goto LAB_14e2ca79b;
    }
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar7) == 0) {
      if ((byte)RenderDocPlugin._0_1_ < 4) {
        return;
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      return;
    }
  }
  if (GRHIGlobals.UsingNullRHI != false) {
    if ((byte)RenderDocPlugin._0_1_ < 4) {
      return;
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
    return;
  }
  if (4 < (byte)RenderDocPlugin._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
  }
  pTVar3 = CVarRenderDocBinaryPath.Ref;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_14e2ca84b:
    lVar7 = lVar19;
  }
  else {
    bVar4 = IsInGameThread();
    lVar7 = 0x10;
    if (bVar4) goto LAB_14e2ca84b;
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = *(int *)((longlong)&pTVar3->ShadowedValue[0].Data.ArrayNum + lVar7);
  lVar17 = (longlong)local_f8.Data.ArrayNum;
  pvVar8 = *(void **)((longlong)&pTVar3->ShadowedValue[0].Data.AllocatorInstance.Data + lVar7);
  if (local_f8.Data.ArrayNum == 0) {
    local_f8.Data.ArrayMax = 0;
  }
  else {
    in_stack_fffffffffffffeb8 = &local_f8.Data.ArrayMax;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,local_f8.Data.ArrayNum,
               in_stack_fffffffffffffeb8);
    memcpy(local_f8.Data.AllocatorInstance.Data,pvVar8,lVar17 * 2);
  }
  pvVar8 = LoadAndCheckRenderDocLibrary(&this->RenderDocAPI,&local_f8);
  this->RenderDocDLL = pvVar8;
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (this->RenderDocDLL != (void *)0x0) goto LAB_14e2cab23;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FWindowsPlatformMisc::QueryRegKey
            ((HKEY__ *)&DAT_ffffffff80000002,
             L"SOFTWARE\\Classes\\RenderDoc.RDCCapture.1\\DefaultIcon\\",L"",&local_128);
  pFVar9 = FPaths::GetPath(&local_70,&local_128);
  if (&local_128 != pFVar9) {
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    local_128.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = (pFVar9->Data).ArrayNum;
    local_128.Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((this->RenderDocAPI != (RENDERDOC_API_1_1_0 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr == RenderDocAPI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginLoader.cpp"
                         ,0x35,L""), bVar4)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (local_128.Data.ArrayNum < 2) {
LAB_14e2cab11:
    this->RenderDocDLL = (void *)0x0;
  }
  else {
    pwVar16 = L"";
    if (RenderDocDllName.Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)RenderDocDllName.Data.AllocatorInstance.Data;
    }
    local_98.DataPtr = L"";
    if (local_128.Data.ArrayNum != 0) {
      local_98.DataPtr = (wchar_t *)local_128.Data.AllocatorInstance.Data;
    }
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      sVar10 = wcslen(local_98.DataPtr);
      iVar6 = (int)sVar10;
    }
    local_80 = 0;
    local_98.Size = iVar6;
    local_88 = (FScriptContainerElement *)pwVar16;
    if ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0) {
      sVar10 = wcslen(pwVar16);
      local_80 = (int)sVar10;
    }
    FPaths::CombineInternal(&local_138,&local_98,2);
    bVar4 = FPaths::FileExists(&local_138);
    if (!bVar4) {
      bVar4 = FApp::IsUnattended();
      if (bVar4) {
        if (3 < (byte)RenderDocPlugin._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
        }
      }
      else if (2 < (byte)RenderDocPlugin._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      }
LAB_14e2cab02:
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      goto LAB_14e2cab11;
    }
    if (4 < (byte)RenderDocPlugin._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar15.Data = local_138.Data.AllocatorInstance.Data;
    }
    hLibModule = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar15.Data);
    if (hLibModule == (HMODULE)0x0) {
      if (2 < (byte)RenderDocPlugin._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      }
      goto LAB_14e2cab02;
    }
    pcVar11 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"RENDERDOC_GetAPI");
    if (pcVar11 == (code *)0x0) {
      if (2 < (byte)RenderDocPlugin._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      }
LAB_14e2caafa:
      FWindowsPlatformProcess::FreeDllHandle(hLibModule);
      goto LAB_14e2cab02;
    }
    iVar6 = (*pcVar11)(10000,&this->RenderDocAPI);
    pTVar2 = CVarRenderDocEnableCrashHandler.Ref;
    if (iVar6 == 0) {
      if (2 < (byte)RenderDocPlugin._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      }
      goto LAB_14e2caafa;
    }
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), lVar7 = 4, bVar4)) {
      lVar7 = lVar19;
    }
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar7) == 0) {
      (*this->RenderDocAPI->UnloadCrashHandler)();
    }
    local_res18[0] = 0;
    local_res10[0] = 0;
    local_res8[0] = 0;
    (*this->RenderDocAPI->GetAPIVersion)(local_res18,local_res10,local_res8);
    if (4 < (byte)RenderDocPlugin._0_1_) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_RenderDoc_libra_152e44fb8,
                 (FLogCategoryBase *)&RenderDocPlugin);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    this->RenderDocDLL = hLibModule;
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar15.Data = local_128.Data.AllocatorInstance.Data;
    }
    local_e8 = 0;
    IConsoleVariable::Set<wchar_t_const_*>
              ((IConsoleVariable *)CVarRenderDocBinaryPath._padding_,(wchar_t *)FVar15.Data,
               ECVF_SetByProjectSetting,(FName)0x0);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
LAB_14e2cab23:
  FModuleManager::Get();
  pFVar12 = ::FName::FName(&local_78,"DesktopPlatform");
  FVar1 = *pFVar12;
  this_00 = FModuleManager::Get();
  pIVar13 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x40))(pIVar13);
  if (this->RenderDocDLL == (void *)0x0) {
    if ((plVar14 != (longlong *)0x0) && (bVar4 = FApp::IsUnattended(), !bVar4)) {
      if (4 < (byte)RenderDocPlugin._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      }
      ::FString::FString(&local_a8,L"RenderDoc executable|renderdocui.exe;qrenderdoc.exe");
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_108 = (FString *)0x0;
      pcVar11 = *(code **)(*plVar14 + 0x10);
      local_100 = 0;
      ::FString::FString(&local_b8,L"");
      ::FString::FString(&local_c8,L"");
      ::FString::FString(&local_d8,L"Locate main RenderDoc executable...");
      cVar5 = (*pcVar11)(plVar14,0,&local_d8,&local_c8,&local_b8,&local_a8,
                         (ulonglong)in_stack_fffffffffffffeb8 & 0xffffffff00000000,&local_108);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (cVar5 != '\0') {
        if (((int)local_100 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar6 = (local_108->Data).ArrayNum;
        iVar18 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar18 = 0;
        }
        ::FString::AssignRange
                  (&local_118,(wchar_t *)(local_108->Data).AllocatorInstance.Data,iVar18);
      }
      pFVar9 = FPaths::GetPath(local_60,&local_118);
      if (&local_118 != pFVar9) {
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        local_118.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = (pFVar9->Data).ArrayNum;
        local_118.Data.ArrayMax = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      pvVar8 = LoadAndCheckRenderDocLibrary(&this->RenderDocAPI,&local_118);
      this->RenderDocDLL = pvVar8;
      if (pvVar8 != (void *)0x0) {
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_118.Data.ArrayNum != 0) {
          FVar15.Data = local_118.Data.AllocatorInstance.Data;
        }
        local_e0 = 0;
        IConsoleVariable::Set<wchar_t_const_*>
                  ((IConsoleVariable *)CVarRenderDocBinaryPath._padding_,(wchar_t *)FVar15.Data,
                   ECVF_SetByProjectSetting,(FName)0x0);
      }
      DestructItems<FString,int>(local_108,(int)local_100);
      if (local_108 != (FString *)0x0) {
        FMemory::Free(local_108);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if (this->RenderDocDLL == (void *)0x0) {
      bVar4 = FApp::IsUnattended();
      if (!bVar4) {
        if ((byte)RenderDocPlugin._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
        return;
      }
      if ((byte)RenderDocPlugin._0_1_ < 4) {
        return;
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      return;
    }
  }
  if (4 < (byte)RenderDocPlugin._0_1_) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_plugin_has_been_152e454b0,
               (FLogCategoryBase *)&RenderDocPlugin);
  }
  return;
}

// Release @ 14e2cb640

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRenderDocPluginLoader::Release(FRenderDocPluginLoader *this)

{
  if (!GRHIGlobals.UsingNullRHI) {
    if (this->RenderDocDLL != (HMODULE)0x0) {
      FWindowsPlatformProcess::FreeDllHandle(this->RenderDocDLL);
      this->RenderDocDLL = (void *)0x0;
    }
    if (4 < (byte)RenderDocPlugin._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      return;
    }
  }
  return;
}

