// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineRHI
// Functions: 5

// StartupModule @ 14de58820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineRHIModule::StartupModule(FStreamlineRHIModule *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  TObjectPtr<UStreamlineSettings> TVar9;
  IPluginManager *pIVar10;
  size_t sVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  wchar_t **ppwVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStackY_3c8 [32];
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  wchar_t *local_358;
  wchar_t *local_350;
  FString local_348;
  wchar_t *local_338;
  int local_330;
  wchar_t *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  FString local_318;
  TStringView<wchar_t> local_308;
  wchar_t *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [8];
  TReferenceControllerBase<1> *local_2c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  FScriptContainerElement *local_58;
  int local_50;
  FScriptContainerElement *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  _Str = L"";
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar7 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if ((plVar7 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7), cVar5 != '\0'))
  {
    pwVar8 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar8,L"slno");
    if (!bVar4) {
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        local_2b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_2b8,"FStreamlineRHIModule::StartupModule",0x23,Yes);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
        if ((void *)local_2b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_2b8._padding_);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar8 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar8,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
         && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) {
        local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_398.Data.ArrayNum = 0;
        local_398.Data.ArrayMax = 0;
        TVar9 = UStreamlineSettings::CppDefaults();
        bVar4 = ::`anonymous_namespace'::LoadConfigSettingWithOverrides
                          (*(bool *)(*(longlong *)TVar9.field0_0x0 + 0x28),L"bLoadDebugOverlay",
                           L"LoadDebugOverlayOverride",L"debugoverlay");
        pwVar8 = L"";
        if (bVar4) {
          pwVar8 = L"Development";
        }
        ::FString::FString(&local_378,pwVar8);
        pwVar8 = FCommandLine::Get();
        FParse::Value(pwVar8,L"slbinaries=",&local_378,true,(wchar_t **)0x0);
        iVar15 = 0;
        if (1 < local_378.Data.ArrayNum) {
          local_358 = L"Development";
          ppwVar14 = &local_358;
          local_350 = L"Debug";
          do {
            pwVar8 = *ppwVar14;
            ::FString::FString(&local_368,pwVar8);
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_368.Data.ArrayNum != 0) {
              FVar13.Data = local_368.Data.AllocatorInstance.Data;
            }
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_378.Data.ArrayNum != 0) {
              FVar12.Data = local_378.Data.AllocatorInstance.Data;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,(wchar_t *)FVar13.Data);
            if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_368.Data.AllocatorInstance.Data);
            }
            if (iVar6 == 0) {
              ::FString::operator=(&local_398,pwVar8);
              break;
            }
            ppwVar14 = ppwVar14 + 1;
          } while ((FString *)ppwVar14 != &local_348);
          ::FString::FString(&local_348,L"Production");
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_348.Data.ArrayNum != 0) {
            FVar13.Data = local_348.Data.AllocatorInstance.Data;
          }
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_378.Data.ArrayNum != 0) {
            FVar12.Data = local_378.Data.AllocatorInstance.Data;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,(wchar_t *)FVar13.Data);
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          if (iVar6 == 0) {
            ::FString::Empty(&local_398);
          }
        }
        if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
        }
        pIVar10 = IPluginManager::Get();
        uStack_320 = 0xe;
        local_328 = L"StreamlineCore";
        local_2d8 = 0x507b6d48;
        uStack_2d4 = 1;
        uStack_2d0 = 0xe;
        uStack_2cc = uStack_31c;
        plVar7 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x70))(pIVar10,local_2c8,&local_2d8);
        if ((*plVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(*(longlong *)*plVar7 + 0x20))((longlong *)*plVar7,&local_338);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c0);
        local_48 = (FScriptContainerElement *)L"";
        if (local_398.Data.ArrayNum != 0) {
          local_48 = local_398.Data.AllocatorInstance.Data;
        }
        local_78.DataPtr = L"";
        if (local_330 != 0) {
          local_78.DataPtr = local_338;
        }
        local_78.Size = iVar15;
        if (local_78.DataPtr != (wchar_t *)0x0) {
          sVar11 = wcslen(local_78.DataPtr);
          local_78.Size = (int)sVar11;
        }
        local_68 = L"Binaries/ThirdParty/";
        local_58 = PlatformDir.Data.AllocatorInstance.Data;
        local_60 = 0x14;
        local_50 = PlatformDir.Data.ArrayNum + -1;
        if (PlatformDir.Data.ArrayNum == 0) {
          local_50 = iVar15;
        }
        if (local_48 != (FScriptContainerElement *)0x0) {
          sVar11 = wcslen((wchar_t *)local_48);
          iVar15 = (int)sVar11;
        }
        local_40 = iVar15;
        FPaths::CombineInternal(&local_388,&local_78,4);
        pFVar1 = &this->StreamlineBinaryDirectory;
        if (pFVar1 != &local_388) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_388.Data.AllocatorInstance.Data;
          (this->StreamlineBinaryDirectory).Data.ArrayNum = local_388.Data.ArrayNum;
          (this->StreamlineBinaryDirectory).Data.ArrayMax = local_388.Data.ArrayMax;
          local_388.Data.ArrayNum = 0;
          local_388.Data.ArrayMax = 0;
          local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_388.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogStreamlineRHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
        }
        if ((this->StreamlineBinaryDirectory).Data.ArrayNum != 0) {
          _Str = (wchar_t *)(this->StreamlineBinaryDirectory).Data.AllocatorInstance.Data;
        }
        local_308.Size = 0;
        local_308.DataPtr = _Str;
        if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
          sVar11 = wcslen(_Str);
          local_308.Size = (int)sVar11;
        }
        local_2f0 = 0x11;
        local_2f8 = L"sl.interposer.dll";
        FPaths::CombineInternal(&local_318,&local_308,2);
        LoadStreamlineFunctionPointers(&local_318);
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        if (local_338 != (wchar_t *)0x0) {
          FMemory::Free(local_338);
        }
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
      }
      else {
        if (4 < (byte)LogStreamlineRHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
        }
        ::FString::operator=(&this->StreamlineBinaryDirectory,L"");
      }
      PlatformCreateStreamlineRHI();
      if ((byte)LogStreamlineRHI._0_1_ < 5) {
        return;
      }
      local_198._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_198,"FStreamlineRHIModule::StartupModule",0x23,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_198._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_198._padding_);
      return;
    }
  }
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
  }
  return;
}

// ShutdownModule @ 14de58e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineRHIModule::ShutdownModule(FStreamlineRHIModule *this)

{
  code *pcVar1;
  TUniquePtr<FStreamlineRHI,TDefaultDelete<FStreamlineRHI>_> TVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_278 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_278;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if ((plVar5 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5), cVar4 == '\0'))
  {
    return;
  }
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"FStreamlineRHIModule::ShutdownModule",0x24,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  TVar2.Ptr = GStreamlineRHI.Ptr;
  if (GStreamlineRHI.Ptr != (FStreamlineRHI *)0x0) {
    GStreamlineRHI.Ptr = (FStreamlineRHI *)0x0;
    (**(code **)(TVar2.Ptr)->_padding_)(TVar2.Ptr,1);
  }
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FStreamlineRHIModule::ShutdownModule",0x24,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// operator() @ 14de59eb0

/* WARNING: Removing unreachable block (ram,0x00014de5a263) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FStreamlineRHIModule::InitializeStreamline'::__l2::<lambda_1>::operator()
          (void *this,SLFeatureDesc *param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType *pFVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  IPluginManager *pIVar7;
  size_t sVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  FString local_98;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  FString local_38;
  
  pIVar7 = IPluginManager::Get();
  local_58 = param_1->UEPluginName;
  uStack_50 = 0;
  pcVar2 = *(code **)((longlong)*pIVar7 + 0x70);
  if (local_58 != (wchar_t *)0x0) {
    sVar8 = wcslen(local_58);
    uStack_50 = (undefined4)sVar8;
  }
  local_48 = (undefined4)local_58;
  uStack_44 = local_58._4_4_;
  uStack_3c = uStack_4c;
  uStack_40 = uStack_50;
  (*pcVar2)(pIVar7,&local_88,&local_48);
  if (local_88 == (longlong *)0x0) {
LAB_14de5a3c8:
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    }
    goto LAB_14de5a3ec;
  }
  if ((local_88 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar5 = (**(code **)(*local_88 + 0x48))();
  if (cVar5 == '\0') {
    if ((local_88 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar5 = (**(code **)(*local_88 + 0x50))(local_88,0);
    if (cVar5 == '\0') goto LAB_14de5a3c8;
  }
  cVar5 = param_1->bAllowByDefault;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar9 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,param_1->LoadCVar,1);
  if (plVar9 == (longlong *)0x0) {
    if (2 < (byte)LogStreamlineRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    }
  }
  else {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    pFVar10 = (FScriptContainerElement *)::FString::FString(&local_38,param_1->LoadCVar);
    if (((pFVar3->Data <= pFVar10) &&
        (pFVar10 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    pFVar12 = pFVar3->Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)pFVar12 = *(undefined8 *)pFVar10;
    *(undefined8 *)pFVar10 = 0;
    *(undefined4 *)(pFVar12 + 8) = *(undefined4 *)(pFVar10 + 8);
    *(undefined4 *)(pFVar12 + 0xc) = *(undefined4 *)(pFVar10 + 0xc);
    *(undefined8 *)(pFVar10 + 8) = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    cVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if (cVar5 == '\0') {
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
    }
    else if (4 < (byte)LogStreamlineRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    }
  }
  ::FString::PrintfImpl(&local_68,L"sl%s");
  ::FString::PrintfImpl(&local_78,L"slno%s");
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  ::FString::PrintfImpl(&local_98,L"-sl{no}%s");
  if (((pFVar3->Data <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  pFVar10 = pFVar3->Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_98.Data.AllocatorInstance.Data;
  *(int *)(pFVar10 + 8) = local_98.Data.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_98.Data.ArrayMax;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar13.Data = local_68.Data.AllocatorInstance.Data;
  }
  pwVar11 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar11,(wchar_t *)FVar13.Data);
  if (bVar4) {
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    }
LAB_14de5a318:
    pFVar3 = *(ForAnyElementType **)this;
    if ((((SLFeatureDesc *)pFVar3->Data <= param_1) &&
        (param_1 < (SLFeatureDesc *)
                   (&((SLFeatureDesc *)pFVar3->Data)->SLFeature +
                   *(int *)((longlong)&pFVar3[1].Data + 4)))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(uint *)(pFVar3->Data + (longlong)iVar6 * 4) = param_1->SLFeature;
  }
  else {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar13.Data = local_78.Data.AllocatorInstance.Data;
    }
    pwVar11 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar11,(wchar_t *)FVar13.Data);
    if (bVar4) {
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
    }
    else if (cVar5 != '\0') goto LAB_14de5a318;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14de5a3ec:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  return;
}

// InitializeStreamline @ 14de5ae20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineRHIModule::InitializeStreamline(FStreamlineRHIModule *this)

{
  int iVar1;
  code *pcVar2;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar3;
  IConsoleManager *pIVar4;
  PreferenceFlags PVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  Result RVar12;
  IPluginManager *pIVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  FString *pFVar16;
  size_t sVar17;
  FScriptContainerElement *pFVar18;
  IPlatformFile *pIVar19;
  TObjectPtr<UStreamlineSettings> TVar20;
  undefined1 uVar21;
  uint uVar22;
  FStaticBasicLogRecord *pFVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  longlong lVar26;
  char *pcVar27;
  ForAnyElementType FVar28;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar29;
  FScriptContainerElement *pFVar30;
  PreferenceFlags PVar31;
  ulonglong uVar32;
  uint uVar33;
  SLFeatureDesc *pSVar34;
  FString *pFVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 auStackY_9f8 [32];
  bool local_9a7;
  bool local_9a6 [6];
  ForAnyElementType local_9a0;
  int local_998 [2];
  undefined1 local_990;
  undefined1 local_98f;
  undefined1 local_98e;
  undefined1 local_98d;
  undefined1 local_98c [4];
  ForAnyElementType local_988;
  undefined8 local_980;
  longlong local_978;
  ForAnyElementType local_970;
  undefined8 local_968;
  FString local_960;
  uint local_950;
  uint local_94c;
  ForAnyElementType local_948;
  int local_940;
  int local_93c;
  longlong *local_938;
  TReferenceControllerBase<1> *local_930;
  wchar_t *local_928;
  FString *local_920;
  ulonglong local_918;
  FString *local_910;
  ulonglong local_908;
  FString local_900;
  FString local_8f0;
  FString local_8e0;
  FString local_8d0;
  FString local_8c0;
  FString local_8b0;
  FString local_8a0;
  FString local_890;
  FString local_880;
  FString local_870;
  FString local_860;
  wchar_t *local_850;
  int local_848;
  FString local_840;
  FString local_830;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  wchar_t *local_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  ForAnyElementType *local_7c8;
  FString **local_7c0;
  FString **local_7b8;
  TStringView<wchar_t> local_7b0;
  wchar_t *local_7a0;
  undefined4 local_798;
  TStringView<wchar_t> local_790;
  wchar_t *local_780;
  undefined4 local_778;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  Preferences local_6e8;
  undefined4 local_658;
  undefined4 uStack_654;
  wchar_t *pwStack_650;
  wchar_t *local_648;
  wchar_t *pwStack_640;
  wchar_t *local_638;
  undefined1 uStack_630;
  undefined7 uStack_62f;
  undefined4 local_628;
  undefined4 uStack_624;
  wchar_t *pwStack_620;
  wchar_t *local_618;
  wchar_t *pwStack_610;
  wchar_t *local_608;
  undefined1 uStack_600;
  undefined7 uStack_5ff;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  wchar_t *pwStack_5f0;
  wchar_t *local_5e8;
  wchar_t *pwStack_5e0;
  wchar_t *local_5d8;
  undefined1 uStack_5d0;
  undefined7 uStack_5cf;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  wchar_t *pwStack_5c0;
  wchar_t *local_5b8;
  wchar_t *pwStack_5b0;
  wchar_t *local_5a8;
  undefined1 uStack_5a0;
  undefined7 uStack_59f;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_598;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_588;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_578;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_568;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_448;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_328;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1e8;
  TStringView<wchar_t> local_c8;
  wchar_t *local_b8;
  undefined4 local_b0;
  FScriptContainerElement *local_a8;
  uint local_a0;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  undefined4 local_80;
  FScriptContainerElement *local_78;
  uint local_70;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined4 local_50;
  FScriptContainerElement *local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_9f8;
  local_8c0.Data.ArrayNum = (this->StreamlineBinaryDirectory).Data.ArrayNum;
  lVar26 = (longlong)local_8c0.Data.ArrayNum;
  uVar32 = 0;
  pFVar18 = (this->StreamlineBinaryDirectory).Data.AllocatorInstance.Data;
  local_9a0.Data = (FScriptContainerElement *)0x0;
  local_998[0] = 0;
  local_998[1] = 0;
  local_8c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_8c0.Data.ArrayNum == 0) {
    local_8c0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_8c0.Data.ArrayNum,0,(ForAnyElementType *)&local_8c0,local_8c0.Data.ArrayNum
               ,&local_8c0.Data.ArrayMax);
    memcpy(local_8c0.Data.AllocatorInstance.Data,pFVar18,lVar26 * 2);
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,1,&local_9a0,local_998,local_998 + 1);
  ConstructItems<FString,FString,int>(local_9a0.Data + (longlong)iVar10 * 0x10,&local_8c0,1);
  if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
  }
  pIVar13 = IPluginManager::Get();
  uStack_7d0 = 4;
  local_7d8 = L"DLSS";
  local_758 = 0x507b6c78;
  uStack_754 = 1;
  uStack_750 = 4;
  uStack_74c = uStack_7cc;
  (**(code **)((longlong)*pIVar13 + 0x70))(pIVar13,&local_938,&local_758);
  uVar25 = 0;
  uVar22 = 0;
  if (local_938 == (longlong *)0x0) {
LAB_14de5b422:
    bVar6 = false;
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      pFVar23 = &::LOG_Static;
LAB_14de5b437:
      UE::Logging::Private::BasicLog<5>(pFVar23,(FLogCategoryBase *)&LogStreamlineRHI);
    }
  }
  else {
    if ((local_938 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar7 = (**(code **)(*local_938 + 0x48))();
    if (cVar7 == '\0') {
      if ((local_938 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar7 = (**(code **)(*local_938 + 0x50))(local_938,0);
      if (cVar7 == '\0') goto LAB_14de5b422;
    }
    bVar9 = true;
    bVar6 = true;
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar14 = (longlong *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.NGX.Enable",1);
    if ((plVar14 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar14 + 0xc0))(plVar14), cVar7 == '\0')) {
      bVar9 = false;
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar14 = (longlong *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.NGX.Enable.AllowCommandLine",1);
    if ((plVar14 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar14 + 0xc0))(plVar14), cVar7 == '\0')) {
LAB_14de5b0f7:
      if (!bVar9) {
LAB_14de5b410:
        if (4 < (byte)LogStreamlineRHI._0_1_) {
          pFVar23 = &::LOG_Static;
          goto LAB_14de5b437;
        }
        goto LAB_14de5b443;
      }
    }
    else {
      pwVar15 = FCommandLine::Get();
      bVar8 = FParse::Param(pwVar15,L"ngxenable");
      if (!bVar8) {
        pwVar15 = FCommandLine::Get();
        bVar8 = FParse::Param(pwVar15,L"ngxdisable");
        if (!bVar8) goto LAB_14de5b0f7;
        goto LAB_14de5b410;
      }
    }
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    }
    pFVar16 = FPaths::ProjectDir(&local_748);
    local_b0 = 0x1f;
    local_b8 = L"Binaries/ThirdParty/NVIDIA/NGX/";
    local_c8.DataPtr = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    iVar10 = (pFVar16->Data).ArrayNum;
    local_c8.Size = iVar10 + -1;
    if (iVar10 == 0) {
      local_c8.Size = 0;
    }
    local_a8 = PlatformDir.Data.AllocatorInstance.Data;
    local_a0 = PlatformDir.Data.ArrayNum - 1;
    if (PlatformDir.Data.ArrayNum == 0) {
      local_a0 = uVar22;
    }
    FPaths::CombineInternal(&local_830,&local_c8,3);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
    pFVar16 = FPaths::LaunchDir(&local_738);
    local_88 = L"Binaries/ThirdParty/NVIDIA/NGX/";
    local_80 = 0x1f;
    local_98.DataPtr = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    iVar10 = (pFVar16->Data).ArrayNum;
    local_98.Size = iVar10 - 1;
    if (iVar10 == 0) {
      local_98.Size = uVar22;
    }
    local_78 = PlatformDir.Data.AllocatorInstance.Data;
    local_70 = PlatformDir.Data.ArrayNum - 1;
    if (PlatformDir.Data.ArrayNum == 0) {
      local_70 = uVar22;
    }
    FPaths::CombineInternal(&local_840,&local_98,3);
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
    if ((local_938 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*local_938 + 0x20))(local_938,&local_850);
    local_68.DataPtr = L"";
    if (local_848 != 0) {
      local_68.DataPtr = local_850;
    }
    local_68.Size = uVar22;
    if (local_68.DataPtr != (wchar_t *)0x0) {
      sVar17 = wcslen(local_68.DataPtr);
      local_68.Size = (int)sVar17;
    }
    local_50 = 0x14;
    local_58 = L"Binaries/ThirdParty/";
    local_48 = PlatformDir.Data.AllocatorInstance.Data;
    local_40 = PlatformDir.Data.ArrayNum - 1;
    if (PlatformDir.Data.ArrayNum == 0) {
      local_40 = uVar25;
    }
    FPaths::CombineInternal(&local_860,&local_68,3);
    local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              (&local_598,(wchar_t *)local_830.Data.AllocatorInstance.Data,local_830.Data.ArrayNum,0
              );
    local_588.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              (&local_588,(wchar_t *)local_840.Data.AllocatorInstance.Data,local_840.Data.ArrayNum,0
              );
    local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              (&local_578,(wchar_t *)local_860.Data.AllocatorInstance.Data,local_860.Data.ArrayNum,0
              );
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,3,&local_9a0,local_998,local_998 + 1);
    ConstructItems<FString,FString,int>
              (local_9a0.Data + (longlong)iVar10 * 0x10,(FString *)&local_598,3);
    pTVar29 = &local_568;
    lVar26 = 3;
    do {
      pTVar3 = pTVar29 + -1;
      pTVar29 = (TStringConversion<TStringConvert<char,wchar_t>,128> *)&pTVar29[-1].Ptr;
      lVar26 = lVar26 + -1;
      if (pTVar3->Ptr != (wchar_t *)0x0) {
        FMemory::Free(pTVar3->Ptr);
      }
    } while (lVar26 != 0);
    if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_860.Data.AllocatorInstance.Data);
    }
    if (local_850 != (wchar_t *)0x0) {
      FMemory::Free(local_850);
    }
    if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_840.Data.AllocatorInstance.Data);
    }
    if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_830.Data.AllocatorInstance.Data);
    }
  }
LAB_14de5b443:
  local_970.Data = (FScriptContainerElement *)0x0;
  local_968 = 0;
  if (0 < local_998[0]) {
    local_978 = 0;
    uVar37 = uVar32;
    do {
      uVar36 = (uint)uVar37;
      uVar33 = ~uVar36 >> 0x1f;
      uVar11 = uVar25;
      if ((int)uVar36 < local_998[0]) {
        uVar11 = uVar33;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (FScriptContainerElement *)
                FPaths::ConvertRelativePathToFull(&local_728,(FString *)(local_9a0.Data + uVar32));
      uVar11 = uVar22;
      if ((int)uVar36 < local_998[0]) {
        uVar11 = uVar33;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar30 = local_9a0.Data + uVar32;
      if (pFVar30 != pFVar18) {
        if (*(void **)pFVar30 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar30);
        }
        *(undefined8 *)pFVar30 = *(undefined8 *)pFVar18;
        *(undefined8 *)pFVar18 = 0;
        *(int *)(pFVar30 + 8) = *(int *)(pFVar18 + 8);
        *(int *)(pFVar30 + 0xc) = *(int *)(pFVar18 + 0xc);
        *(undefined8 *)(pFVar18 + 8) = 0;
      }
      if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Data.AllocatorInstance.Data);
      }
      uVar11 = uVar22;
      if ((int)uVar36 < local_998[0]) {
        uVar11 = uVar33;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = local_9a0.Data + uVar32;
      pFVar16 = ::FString::FString(&local_718,"//");
      iVar10 = (pFVar16->Data).ArrayNum;
      if (iVar10 == 0) {
        pwVar15 = L"";
        uVar11 = uVar25;
      }
      else {
        pwVar15 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        uVar11 = iVar10 - 1;
      }
      bVar9 = ::FString::StartsWith((FString *)pFVar18,pwVar15,uVar11,IgnoreCase);
      if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_718.Data.AllocatorInstance.Data);
      }
      FPaths::RemoveDuplicateSlashes((FString *)pFVar18);
      if (bVar9) {
        pFVar16 = ::FString::FString(&local_708,"/");
        ::FString::ConcatFF(&local_900,pFVar16,(FString *)pFVar18);
        if (pFVar18 != (FScriptContainerElement *)&local_900) {
          if (*(void **)pFVar18 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar18);
          }
          *(FScriptContainerElement **)pFVar18 = local_900.Data.AllocatorInstance.Data;
          *(int *)(pFVar18 + 8) = local_900.Data.ArrayNum;
          *(int *)(pFVar18 + 0xc) = local_900.Data.ArrayMax;
          local_900.Data.ArrayNum = 0;
          local_900.Data.ArrayMax = 0;
          local_900.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_900.Data.AllocatorInstance.Data);
        }
        if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.Data.AllocatorInstance.Data);
        }
      }
      uVar11 = uVar25;
      if ((int)uVar36 < local_998[0]) {
        uVar11 = uVar33;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPaths::MakePlatformFilename((FString *)(local_9a0.Data + uVar32));
      uVar11 = uVar22;
      if ((int)uVar36 < local_998[0]) {
        uVar11 = uVar33;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPaths::NormalizeDirectoryName((FString *)(local_9a0.Data + uVar32));
      uVar11 = uVar22;
      if ((int)uVar36 < local_998[0]) {
        uVar11 = uVar33;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(local_9a0.Data + uVar32 + 8) == 0) {
        local_928 = L"";
      }
      else {
        local_928 = *(wchar_t **)(local_9a0.Data + uVar32);
      }
      if (((local_970.Data <= (FScriptContainerElement *)&local_928) &&
          ((FScriptContainerElement *)&local_928 < local_970.Data + (longlong)local_968._4_4_ * 8))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar10 = (uint)local_968;
      if ((uint)local_968 == local_968._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_970,(int *)((longlong)&local_968 + 4));
      }
      local_968 = CONCAT44(local_968._4_4_,iVar10 + 1);
      *(wchar_t **)(local_970.Data + (longlong)iVar10 * 8) = local_928;
      pIVar19 = IPlatformFile::GetPlatformPhysical();
      pcVar2 = *(code **)((longlong)*pIVar19 + 0x78);
      uVar11 = uVar22;
      if ((int)uVar36 < local_998[0]) {
        uVar11 = uVar33;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_798 = 0x11;
      local_7b0.DataPtr = *(wchar_t **)(local_9a0.Data + uVar32);
      local_7b0.Size = *(int *)(local_9a0.Data + uVar32 + 8) - 1;
      if (*(int *)(local_9a0.Data + uVar32 + 8) == 0) {
        local_7b0.Size = uVar22;
      }
      local_7a0 = L"sl.interposer.dll";
      FPaths::CombineInternal(&local_820,&local_7b0,2);
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_820.Data.ArrayNum != 0) {
        FVar28.Data = local_820.Data.AllocatorInstance.Data;
      }
      (*pcVar2)(pIVar19,FVar28.Data);
      if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_820.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        uVar11 = uVar25;
        if ((int)uVar36 < local_998[0]) {
          uVar11 = uVar33;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if (bVar6) {
        pIVar19 = IPlatformFile::GetPlatformPhysical();
        pcVar2 = *(code **)((longlong)*pIVar19 + 0x78);
        uVar11 = uVar25;
        if ((int)uVar36 < local_998[0]) {
          uVar11 = uVar33;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_778 = 0xe;
        local_790.DataPtr = *(wchar_t **)(local_9a0.Data + uVar32);
        local_790.Size = *(int *)(local_9a0.Data + uVar32 + 8) - 1;
        if (*(int *)(local_9a0.Data + uVar32 + 8) == 0) {
          local_790.Size = uVar25;
        }
        local_780 = L"nvngx_dlss.dll";
        FPaths::CombineInternal(&local_810,&local_790,2);
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_810.Data.ArrayNum != 0) {
          FVar28.Data = local_810.Data.AllocatorInstance.Data;
        }
        (*pcVar2)(pIVar19,FVar28.Data);
        if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_810.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogStreamlineRHI._0_1_) {
          uVar11 = uVar25;
          if ((int)uVar36 < local_998[0]) {
            uVar11 = uVar33;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
        }
      }
      uVar37 = (ulonglong)(uVar36 + 1);
      local_978 = local_978 + 1;
      uVar32 = uVar32 + 0x10;
    } while ((int)(uVar36 + 1) < local_998[0]);
  }
  local_960.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.pathsToPlugins = (wchar_t **)0x0;
  local_6e8.showConsole = false;
  local_6e8._33_3_ = 0;
  local_6e8.logLevel = eDefault;
  local_6e8._padding_ = 0;
  local_6e8._padding_ = 0;
  local_960.Data.ArrayNum = 0;
  local_960.Data.ArrayMax = 0;
  local_6e8._padding_ = 0;
  local_6e8._padding_ = 0;
  local_6e8.numPathsToPlugins = 0;
  local_6e8._52_4_ = 0;
  local_6e8.pathToLogsAndData = (wchar_t *)0x0;
  local_6e8.allocateCallback = (_func___cdecl_Resource_ResourceAllocationDesc_ptr_void_ptr *)0x0;
  local_6e8.releaseCallback = (_func___cdecl_void_Resource_ptr_void_ptr *)0x0;
  local_6e8.logMessageCallback = (_func___cdecl_void_LogType_char_ptr *)0x0;
  local_6e8.flags = 0;
  local_6e8.featuresToLoad = (uint *)0x0;
  local_6e8.numFeaturesToLoad = 0;
  local_6e8.applicationId = 0;
  local_6e8.engine = eCustom;
  local_6e8._116_4_ = 0;
  local_6e8.engineVersion = (char *)0x0;
  local_6e8.projectId = (char *)0x0;
  local_6e8._136_8_ = 0;
  pwVar15 = FCommandLine::Get();
  bVar9 = FParse::Value(pwVar15,L"slloglevel=",&local_960,true,(wchar_t **)0x0);
  if (bVar9) {
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_960.Data.ArrayNum != 0) {
      FVar28.Data = local_960.Data.AllocatorInstance.Data;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar28.Data,L"0");
    if (iVar10 == 0) {
      local_6e8._32_8_ = local_6e8._32_8_ & 0xffffffff;
    }
    else {
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_960.Data.ArrayNum != 0) {
        FVar28.Data = local_960.Data.AllocatorInstance.Data;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar28.Data,L"1");
      if (iVar10 != 0) {
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_960.Data.ArrayNum != 0) {
          FVar28.Data = local_960.Data.AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar28.Data,L"2");
        if (iVar10 != 0) {
          FVar28.Data = (FScriptContainerElement *)L"";
          if (local_960.Data.ArrayNum != 0) {
            FVar28.Data = local_960.Data.AllocatorInstance.Data;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar28.Data,L"3");
          if (iVar10 != 0) goto LAB_14de5bc1b;
          bLogStreamlineLogFunctions = true;
        }
        local_6e8.logLevel = 2;
      }
    }
  }
LAB_14de5bc1b:
  pwVar15 = FCommandLine::Get();
  bVar9 = FParse::Value(pwVar15,L"sllogconsole=",&local_960,true,(wchar_t **)0x0);
  if (bVar9) {
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_960.Data.ArrayNum != 0) {
      FVar28.Data = local_960.Data.AllocatorInstance.Data;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar28.Data,L"0");
    if (iVar10 != 0) {
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_960.Data.ArrayNum != 0) {
        FVar28.Data = local_960.Data.AllocatorInstance.Data;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar28.Data,L"1");
      uVar21 = local_6e8.showConsole;
      if (iVar10 == 0) {
        uVar21 = 1;
      }
      local_6e8.showConsole = (bool)uVar21;
    }
  }
  if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_960.Data.AllocatorInstance.Data);
  }
  if ((int)(uint)local_968 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_6e8.pathsToPlugins = (wchar_t **)local_970.Data;
  local_6e8.logMessageCallback = StreamlineLogSink;
  local_6e8.numPathsToPlugins = (uint)local_968;
  local_6e8.pathToLogsAndData = (wchar_t *)0x0;
  local_6e8.allocateCallback = (_func___cdecl_Resource_ResourceAllocationDesc_ptr_void_ptr *)0x0;
  local_6e8.releaseCallback = (_func___cdecl_void_Resource_ptr_void_ptr *)0x0;
  local_6e8.flags = eUseManualHooking|eDisableCLStateTracking;
  local_6e8.engine = eUnreal;
  FEngineVersion::Current();
  FEngineVersion::Current();
  ::FString::PrintfImpl(&local_870,L"%u.%u");
  FVar28.Data = (FScriptContainerElement *)L"";
  if (local_870.Data.ArrayNum != 0) {
    FVar28.Data = local_870.Data.AllocatorInstance.Data;
  }
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
            (&local_288,(wchar_t *)FVar28.Data);
  local_6e8.engineVersion = local_288.Ptr;
  if ((GConfig == (FConfigCacheIni *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineRHI.cpp"
                         ,0x3dc,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::FString(&local_8a0,L"0");
  FConfigCacheIni::GetString
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",L"ProjectID",&local_8a0,
             &GGameIni);
  FVar28.Data = (FScriptContainerElement *)L"";
  if (local_8a0.Data.ArrayNum != 0) {
    FVar28.Data = local_8a0.Data.AllocatorInstance.Data;
  }
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
            (&local_328,(wchar_t *)FVar28.Data);
  local_6e8.projectId = local_328.Ptr;
  if ((GConfig == (FConfigCacheIni *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineRHI.cpp"
                         ,0xdb,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_950 = 0;
  FConfigCacheIni::GetInt
            (GConfig,L"/Script/StreamlineRHI.StreamlineSettings",L"NVIDIANGXApplicationId",
             (int *)&local_950,&GEngineIni);
  uVar25 = local_950;
  if (bVar6) {
    local_94c = 0;
    FConfigCacheIni::GetInt
              (GConfig,L"/Script/DLSS.DLSSSettings",L"NVIDIANGXApplicationId",(int *)&local_94c,
               &GEngineIni);
    uVar25 = local_950;
    if (local_94c != local_950) {
      if (local_94c == 0) {
        if (2 < (byte)LogStreamlineRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Using_NGX_app_I_152d56a70,
                     (FLogCategoryBase *)&LogStreamlineRHI);
        }
      }
      else if (local_950 == 0) {
        uVar25 = local_94c;
        if (2 < (byte)LogStreamlineRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Using_NGX_app_I_152d56b78,
                     (FLogCategoryBase *)&LogStreamlineRHI);
        }
      }
      else if (1 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_NGX_app_ID_mism_152d56c88,
                   (FLogCategoryBase *)&LogStreamlineRHI);
      }
    }
  }
  local_6e8.applicationId = uVar25;
  pwStack_650 = L"StreamlineReflex";
  local_658 = 3;
  local_648 = L"Reflex";
  uStack_630 = 1;
  pwStack_640 = L"reflex";
  local_628 = 6;
  local_638 = L"r.Streamline.Load.Reflex";
  uStack_600 = 0;
  pwStack_620 = L"StreamlineLatewarp";
  local_618 = L"Latewarp";
  pwStack_610 = L"latewarp";
  local_608 = L"r.Streamline.Load.Latewarp";
  pwStack_5f0 = L"StreamlineDLSSG";
  local_5e8 = L"DLSS-FG";
  pwStack_5e0 = L"dlssg";
  local_5d8 = L"r.Streamline.Load.DLSSG";
  pwStack_5c0 = L"StreamlineDeepDVC";
  local_5b8 = L"DeepDVC";
  pwStack_5b0 = L"deepdvc";
  local_5a8 = L"r.Streamline.Load.DeepDVC";
  local_5f8 = 1000;
  uStack_5d0 = 1;
  local_5c8 = 5;
  uStack_5a0 = 1;
  local_948.Data = (FScriptContainerElement *)0x0;
  local_940 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,4,0,&local_948,4,&local_93c);
  PVar31 = eUseFrameBasedResourceTagging;
  *(ulonglong *)local_948.Data = CONCAT44(uStack_654,local_658);
  *(wchar_t **)(local_948.Data + 8) = pwStack_650;
  *(wchar_t **)(local_948.Data + 0x10) = local_648;
  *(wchar_t **)(local_948.Data + 0x18) = pwStack_640;
  *(wchar_t **)(local_948.Data + 0x20) = local_638;
  *(ulonglong *)(local_948.Data + 0x28) = CONCAT71(uStack_62f,uStack_630);
  *(ulonglong *)(local_948.Data + 0x30) = CONCAT44(uStack_624,local_628);
  *(wchar_t **)(local_948.Data + 0x38) = pwStack_620;
  *(wchar_t **)(local_948.Data + 0x40) = local_618;
  *(wchar_t **)(local_948.Data + 0x48) = pwStack_610;
  *(wchar_t **)(local_948.Data + 0x50) = local_608;
  *(ulonglong *)(local_948.Data + 0x58) = CONCAT71(uStack_5ff,uStack_600);
  *(ulonglong *)(local_948.Data + 0x60) = CONCAT44(uStack_5f4,local_5f8);
  *(wchar_t **)(local_948.Data + 0x68) = pwStack_5f0;
  *(wchar_t **)(local_948.Data + 0x70) = local_5e8;
  *(wchar_t **)(local_948.Data + 0x78) = pwStack_5e0;
  *(wchar_t **)(local_948.Data + 0x80) = local_5d8;
  *(ulonglong *)(local_948.Data + 0x88) = CONCAT71(uStack_5cf,uStack_5d0);
  *(ulonglong *)(local_948.Data + 0x90) = CONCAT44(uStack_5c4,local_5c8);
  *(wchar_t **)(local_948.Data + 0x98) = pwStack_5c0;
  *(wchar_t **)(local_948.Data + 0xa0) = local_5b8;
  *(wchar_t **)(local_948.Data + 0xa8) = pwStack_5b0;
  *(wchar_t **)(local_948.Data + 0xb0) = local_5a8;
  *(ulonglong *)(local_948.Data + 0xb8) = CONCAT71(uStack_59f,uStack_5a0);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar10 = local_940;
  pIVar4 = IConsoleManager::Singleton;
  pFVar18 = local_948.Data + 0x10;
  pSVar34 = (SLFeatureDesc *)(local_948.Data + (longlong)local_940 * 0x30);
  while( true ) {
    if (local_940 != iVar10) {
      local_990 = 0;
      `TCheckedPointerIterator<`FStreamlineRHIModule::InitializeStreamline'::__l2::SLFeatureDesc_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_990);
    }
    iVar1 = local_940;
    if ((SLFeatureDesc *)(pFVar18 + -0x10) == pSVar34) break;
    ::FString::FString(&local_7f0,*(wchar_t **)(pFVar18 + 0x10));
    ::FString::PrintfImpl
              (&local_800,
               L"Determines whether feature %s is loaded. This can be useful to resolve conflicts where multiple SL features are incompatible with each other.\n"
              );
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_800.Data.ArrayNum != 0) {
      FVar28.Data = local_800.Data.AllocatorInstance.Data;
    }
    FVar24.Data = (FScriptContainerElement *)L"";
    if (local_7f0.Data.ArrayNum != 0) {
      FVar24.Data = local_7f0.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,FVar24.Data,pFVar18[0x18],FVar28.Data);
    if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_800.Data.AllocatorInstance.Data);
    }
    if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
    }
    pFVar18 = pFVar18 + 0x30;
  }
  local_7c8 = &local_988;
  local_7c0 = &local_910;
  local_7b8 = &local_920;
  local_988.Data = (FScriptContainerElement *)0x0;
  pSVar34 = (SLFeatureDesc *)(local_948.Data + (longlong)local_940 * 0x30);
  local_980 = 0;
  local_910 = (FString *)0x0;
  local_908 = 0;
  local_920 = (FString *)0x0;
  local_918 = 0;
  FVar28.Data = local_948.Data;
  while( true ) {
    if (local_940 != iVar1) {
      local_98f = 0;
      `TCheckedPointerIterator<`FStreamlineRHIModule::InitializeStreamline'::__l2::SLFeatureDesc_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_98f);
    }
    if ((SLFeatureDesc *)FVar28.Data == pSVar34) break;
    `FStreamlineRHIModule::InitializeStreamline'::__l2::<lambda_1>::operator()
              (&local_7c8,(SLFeatureDesc *)FVar28.Data);
    FVar28.Data = FVar28.Data + 0x30;
  }
  TVar20 = UStreamlineSettings::CppDefaults();
  bVar6 = ::`anonymous_namespace'::LoadConfigSettingWithOverrides
                    (*(bool *)(*(longlong *)TVar20.field0_0x0 + 0x28),L"bLoadDebugOverlay",
                     L"LoadDebugOverlayOverride",L"debugoverlay");
  if (bVar6) {
    if (((local_988.Data < (FScriptContainerElement *)((longlong)&sl::kFeatureImGUI + 1)) &&
        (&sl::kFeatureImGUI < local_988.Data + (longlong)local_980._4_4_ * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = (uint)local_980;
    if ((uint)local_980 == local_980._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_988,(int *)((longlong)&local_980 + 4));
    }
    local_980 = CONCAT44(local_980._4_4_,iVar10 + 1);
    *(undefined4 *)(local_988.Data + (longlong)iVar10 * 4) = 9999;
  }
  local_6e8.featuresToLoad = (uint *)local_988.Data;
  local_6e8.numFeaturesToLoad = (uint)local_980;
  local_9a6[0] = true;
  local_9a7 = true;
  FConfigCacheIni::GetBool
            (GConfig,StreamlineIniSection,L"bEnableStreamlineD3D11",local_9a6,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,StreamlineIniSection,L"bEnableStreamlineD3D12",&local_9a7,&GEngineIni);
  pwVar15 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
  ::FString::FString(&local_880,pwVar15);
  if ((local_9a7 == false) || (iVar10 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar10 != 3)
     ) {
    if ((local_9a6[0] == false) ||
       (iVar10 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar10 != 2)) {
      if (2 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      goto LAB_14de5cb4a;
    }
    local_6e8._136_8_ = local_6e8._136_8_ & 0xffffffff00000000;
  }
  else {
    local_6e8.renderAPI = 1;
  }
  TVar20 = UStreamlineSettings::CppDefaults();
  bVar6 = ::`anonymous_namespace'::LoadConfigSettingWithOverrides
                    (*(bool *)(*(longlong *)TVar20.field0_0x0 + 0x29),L"bAllowOTAUpdate",
                     L"AllowOTAUpdateOverride",L"ota");
  if (bVar6) {
    local_6e8.flags = local_6e8.flags | (eLoadDownloadedPlugins|eAllowOTA);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    TVar20 = UStreamlineSettings::CppDefaults();
    bUseSlSetTag = ::`anonymous_namespace'::LoadConfigSettingWithOverrides
                             (*(bool *)(*(longlong *)TVar20.field0_0x0 + 0x33),L"bUseSlSetTag",
                              L"UseSlSetTagOverride",L"settag");
    _Init_thread_footer(&::_TSS0);
  }
  if (bUseSlSetTag == false) {
    local_6e8.flags = local_6e8.flags | eUseFrameBasedResourceTagging;
  }
  if ((((4 < (byte)LogStreamlineRHI._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI),
       4 < (byte)LogStreamlineRHI._0_1_)) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI),
      4 < (byte)LogStreamlineRHI._0_1_)) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI),
     PVar5 = local_6e8.flags, 4 < (byte)LogStreamlineRHI._0_1_)) {
    local_8f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8f0.Data.ArrayNum = 0;
    local_8f0.Data.ArrayMax = 0;
    do {
      if (PVar31 == (PVar31 & PVar5)) {
        switch(PVar31) {
        case eDisableCLStateTracking:
          pcVar27 = "PreferenceFlags::eDisableCLStateTracking";
          break;
        case eDisableDebugText:
          pcVar27 = "PreferenceFlags::eDisableDebugText";
          break;
        default:
          pcVar27 = "Unknown";
          break;
        case eUseManualHooking:
          pcVar27 = "PreferenceFlags::eUseManualHooking";
          break;
        case eAllowOTA:
          pcVar27 = "PreferenceFlags::eAllowOTA";
          break;
        case eBypassOSVersionCheck:
          pcVar27 = "PreferenceFlags::eBypassOSVersionCheck";
          break;
        case eUseDXGIFactoryProxy:
          pcVar27 = "PreferenceFlags::eUseDXGIFactoryProxy";
          break;
        case eLoadDownloadedPlugins:
          pcVar27 = "PreferenceFlags::eLoadDownloadedPlugins";
          break;
        case eUseFrameBasedResourceTagging:
          pcVar27 = "PreferenceFlags::eUseFrameBasedResourceTagging";
        }
        sVar17 = strlen(pcVar27);
        ::FString::AppendChars(&local_8f0,pcVar27,(int)sVar17);
        ::FString::AppendChar(&local_8f0,L'|');
      }
      PVar31 = PVar31 >> 1;
    } while (PVar31 != 0);
    ::FString::RemoveFromEnd(&local_8f0,L"|",1,IgnoreCase);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      iVar10 = (uint)local_980;
      uVar32 = (ulonglong)(int)(uint)local_980;
      bVar6 = true;
      local_8b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8b0.Data.ArrayNum = 0;
      local_8b0.Data.ArrayMax = 0;
      pFVar18 = local_988.Data + uVar32 * 4;
      FVar28.Data = local_988.Data;
      while( true ) {
        if ((int)uVar32 != iVar10) {
          local_98e = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_98e);
        }
        if (FVar28.Data == pFVar18) break;
        if (bVar6) {
          bVar6 = false;
        }
        else {
          ::FString::AppendChars(&local_8b0,L", ",2);
        }
        pcVar27 = sl::getFeatureAsStr(*(uint *)FVar28.Data);
        local_568._padding_ = 0;
        if (pcVar27 == (char *)0x0) {
          local_568.Ptr = (wchar_t *)0x0;
          local_568.StringLength = 0;
        }
        else {
          sVar17 = strlen(pcVar27);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_568,pcVar27,(int)sVar17,Yes);
        }
        ::FString::PrintfImpl(&local_890,L"%s (%u)");
        if ((void *)local_568._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_568._padding_);
        }
        uVar25 = local_890.Data.ArrayNum - 1;
        if (local_890.Data.ArrayNum == 0) {
          uVar25 = uVar22;
        }
        ::FString::AppendChars(&local_8b0,(wchar_t *)local_890.Data.AllocatorInstance.Data,uVar25);
        if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_890.Data.AllocatorInstance.Data);
        }
        uVar32 = local_980 & 0xffffffff;
        FVar28.Data = FVar28.Data + 4;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        iVar10 = (int)local_908;
        uVar32 = (ulonglong)(int)local_908;
        bVar6 = true;
        pFVar35 = local_910 + uVar32;
        local_8e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_8e0.Data.ArrayNum = 0;
        local_8e0.Data.ArrayMax = 0;
        pFVar16 = local_910;
        while( true ) {
          if ((int)uVar32 != iVar10) {
            local_98d = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_98d);
          }
          if (pFVar16 == pFVar35) break;
          if (bVar6) {
            bVar6 = false;
          }
          else {
            ::FString::AppendChars(&local_8e0,L", ",2);
          }
          iVar1 = (pFVar16->Data).ArrayNum;
          uVar25 = iVar1 - 1;
          if (iVar1 == 0) {
            uVar25 = uVar22;
          }
          ::FString::AppendChars
                    (&local_8e0,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,uVar25);
          uVar32 = local_908 & 0xffffffff;
          pFVar16 = pFVar16 + 1;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
        if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogStreamlineRHI._0_1_) {
          iVar10 = (int)local_918;
          uVar32 = (ulonglong)(int)local_918;
          bVar6 = true;
          pFVar35 = local_920 + uVar32;
          local_8d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_8d0.Data.ArrayNum = 0;
          local_8d0.Data.ArrayMax = 0;
          pFVar16 = local_920;
          while( true ) {
            if ((int)uVar32 != iVar10) {
              local_98c[0] = 0;
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_98c);
            }
            if (pFVar16 == pFVar35) break;
            if (bVar6) {
              bVar6 = false;
            }
            else {
              ::FString::AppendChars(&local_8d0,L", ",2);
            }
            iVar1 = (pFVar16->Data).ArrayNum;
            uVar25 = iVar1 - 1;
            if (iVar1 == 0) {
              uVar25 = uVar22;
            }
            ::FString::AppendChars
                      (&local_8d0,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,uVar25);
            uVar32 = local_918 & 0xffffffff;
            pFVar16 = pFVar16 + 1;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
          if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  FVar28.Data = local_988.Data;
  iVar10 = (uint)local_980;
  lVar26 = (longlong)(int)(uint)local_980;
  FStreamlineRHI::FeaturesRequestedAtSLInitTime.ArrayNum = (uint)local_980;
  if (((uint)local_980 == 0) && (FStreamlineRHI::FeaturesRequestedAtSLInitTime.ArrayMax == 0)) {
    FStreamlineRHI::FeaturesRequestedAtSLInitTime.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(uint)local_980,FStreamlineRHI::FeaturesRequestedAtSLInitTime.ArrayMax,
               &FStreamlineRHI::FeaturesRequestedAtSLInitTime.AllocatorInstance,(uint)local_980,
               &FStreamlineRHI::FeaturesRequestedAtSLInitTime.ArrayMax);
    if (iVar10 != 0) {
      memcpy(FStreamlineRHI::FeaturesRequestedAtSLInitTime.AllocatorInstance.Data,FVar28.Data,
             lVar26 << 2);
    }
  }
  if ((bIsStreamlineFunctionPointersLoaded == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AreStreamlineFunctionsLoaded()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xdb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xdc,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((Ptr_init == (_func___cdecl_Result_Preferences_ptr_ulong64 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr_init != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xdd,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    CurrentThreadName(&local_6f8);
    local_1e8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_1e8,"SLinit",6,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_1e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1e8._padding_);
    }
    if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
    }
  }
  RVar12 = (*Ptr_init)(&local_6e8,0x200090000fedc);
  if (RVar12 == eOk) {
    bIsStreamlineInitialized = true;
  }
  else {
    if (1 < (byte)LogStreamlineRHI._0_1_) {
      pcVar27 = sl::getResultAsStr(RVar12);
      local_448._padding_ = 0;
      if (pcVar27 == (char *)0x0) {
        local_448.Ptr = (wchar_t *)0x0;
        local_448.StringLength = 0;
      }
      else {
        sVar17 = strlen(pcVar27);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_448,pcVar27,(int)sVar17,Yes);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_448._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_448._padding_);
      }
    }
    bIsStreamlineInitialized = false;
  }
LAB_14de5cb4a:
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_920,(int)local_918);
  if (local_920 != (FString *)0x0) {
    FMemory::Free(local_920);
  }
  DestructItems<FString,int>(local_910,(int)local_908);
  if (local_910 != (FString *)0x0) {
    FMemory::Free(local_910);
  }
  if (local_988.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.Data);
  }
  if ((SLFeatureDesc *)local_948.Data != (SLFeatureDesc *)0x0) {
    FMemory::Free(local_948.Data);
  }
  if ((void *)local_328._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_328._padding_);
  }
  if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
  }
  if ((void *)local_288._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_288._padding_);
  }
  if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_870.Data.AllocatorInstance.Data);
  }
  if (local_970.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_970.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_930);
  DestructItems<FString,int>((FString *)local_9a0.Data,local_998[0]);
  if (local_9a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a0.Data);
  }
  return;
}

// ShutdownStreamline @ 14de63420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineRHIModule::ShutdownStreamline(FStreamlineRHIModule *this)

{
  code *pcVar1;
  bool bVar2;
  Result RVar3;
  char *_Str;
  size_t sVar4;
  undefined1 auStack_288 [32];
  FString local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
  }
  bVar2 = IsStreamlineSupported();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xec,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((Ptr_shutdown == (_func___cdecl_Result *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr_shutdown != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xed,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    CurrentThreadName(&local_268);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"SLshutdown",10,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  RVar3 = (*Ptr_shutdown)();
  if ((RVar3 != eOk) && (1 < (byte)LogStreamlineRHI._0_1_)) {
    _Str = sl::getResultAsStr(RVar3);
    local_258._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_258.Ptr = (wchar_t *)0x0;
      local_258.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_258,_Str,(int)sVar4,Yes);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  bIsStreamlineInitialized = false;
  return;
}

