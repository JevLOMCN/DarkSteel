// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUReshape
// Functions: 9

// StartupModule @ 14e2c1fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGPUReshapeModule::StartupModule(FGPUReshapeModule *this)

{
  TUniquePtr<FAutoConsoleCommand,TDefaultDelete<FAutoConsoleCommand>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FAutoConsoleCommand *pFVar8;
  FAutoConsoleCommand *pFVar9;
  longlong local_68;
  undefined1 local_60 [8];
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar5,L"AttachGRS");
  if (bVar3) {
LAB_14e2c201d:
    bVar3 = true;
  }
  else {
    pwVar5 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar5,L"AttachReshape");
    if (bVar3) goto LAB_14e2c201d;
    pwVar5 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar5,L"AttachGPUReshape");
    bVar3 = false;
    if (bVar4) goto LAB_14e2c201d;
  }
  if ((GAutoAttachGPUReshape == 0) && (!bVar3)) {
    return;
  }
  bVar3 = FindAndInstallLoader(this);
  if (!bVar3) {
    return;
  }
  pFVar9 = (FAutoConsoleCommand *)0x0;
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_58;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_58);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGPUReshapeModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = OpenOrSwitchToApp;
    puVar6[3] = this;
    if ((this == (FGPUReshapeModule *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar8 = ::operator_new(0x10);
  if (pFVar8 != (FAutoConsoleCommand *)0x0) {
    pFVar9 = FAutoConsoleCommand::FAutoConsoleCommand
                       (pFVar8,L"GRS",L"Opens GPU Reshape",
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_60,0);
  }
  pTVar1 = &this->OpenAppCommand;
  if (pTVar1 == (TUniquePtr<FAutoConsoleCommand,TDefaultDelete<FAutoConsoleCommand>_> *)&local_68) {
    if (pFVar9 == (FAutoConsoleCommand *)0x0) goto LAB_14e2c215e;
    puVar6 = *(undefined8 **)pFVar9;
  }
  else {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar8 == (FAutoConsoleCommand *)0x0) goto LAB_14e2c215e;
    puVar6 = *(undefined8 **)pFVar8;
    pFVar9 = pFVar8;
  }
  (*(code *)*puVar6)(pFVar9,1);
LAB_14e2c215e:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FGPUReshapeModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(FGPUReshapeModule *)&stack0x00000010,
             (pmf_398e5b06)this);
  this->bBackendInitialized = true;
  if (4 < (byte)LogGPUReshape._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
  }
  return;
}

// ShutdownModule @ 14e2c2220

void __thiscall FGPUReshapeModule::ShutdownModule(FGPUReshapeModule *this)

{
  FAutoConsoleCommand *pFVar1;
  
  pFVar1 = (this->OpenAppCommand).Ptr;
  if (pFVar1 != (FAutoConsoleCommand *)0x0) {
    (this->OpenAppCommand).Ptr = (FAutoConsoleCommand *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014e2c223c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14e2c22c0

int __cdecl
`FGPUReshapeModule::SwitchToApp'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (HWND__ *param_1,long64 param_2)

{
  DWORD idAttachTo;
  DWORD DVar1;
  DWORD local_res10 [2];
  
  local_res10[0] = 0;
  idAttachTo = GetWindowThreadProcessId((HWND)param_1,local_res10);
  if ((idAttachTo != 0) && (local_res10[0] == *(DWORD *)(param_2 + 0x38))) {
    DVar1 = GetCurrentThreadId();
    AttachThreadInput(DVar1,idAttachTo,1);
    SetForegroundWindow((HWND)param_1);
    DVar1 = GetCurrentThreadId();
    AttachThreadInput(DVar1,idAttachTo,0);
  }
  return 1;
}

// CacheLoaderReservedToken @ 14e2c2620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGPUReshapeModule::CacheLoaderReservedToken(FGPUReshapeModule *this,void *param_1)

{
  code *pcVar1;
  undefined1 auStack_148 [32];
  int local_128 [4];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  pcVar1 = FWindowsPlatformProcess::GetDllExport(param_1,L"GRSLoaderGetReservedToken");
  if (pcVar1 == (code *)0x0) {
    if (1 < (byte)LogGPUReshape._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
    }
  }
  else {
    (*pcVar1)(0);
    memset(local_118,0,0x100);
    (*pcVar1)(local_118,local_128);
    ::FString::Empty(&this->ReservedToken);
    ::FString::AppendChars(&this->ReservedToken,local_118,local_128[0]);
  }
  return;
}

// FindAndInstallLoader @ 14e2c2900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGPUReshapeModule::FindAndInstallLoader(FGPUReshapeModule *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  wchar_t *pwVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  size_t sVar7;
  void *pvVar8;
  code *pcVar9;
  FString *pFVar10;
  FAnsiString *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar15;
  uint uVar16;
  undefined1 auStackY_208 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1c8;
  FString local_1b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  TStringView<wchar_t> local_168;
  FScriptContainerElement *local_158;
  int local_150;
  FAnsiString local_148;
  char local_138 [256];
  ulonglong local_38;
  FScriptContainerElement *pFVar14;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (GRHIGlobals.UsingNullRHI) {
    if (1 < (byte)LogGPUReshape._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
    }
    return false;
  }
  pFVar10 = &this->GPUReshapePath;
  pwVar5 = FCommandLine::Get();
  pFVar14 = (FScriptContainerElement *)0x0;
  iVar13 = 0;
  bVar2 = FParse::Value(pwVar5,L"GRSPath",pFVar10,true,(wchar_t **)0x0);
  if (!bVar2) {
    ::FString::FString(&local_1b8,"Raytracing");
    pwVar5 = FCommandLine::Get();
    FParse::Value(pwVar5,L"GRSBranch",&local_1b8,true,(wchar_t **)0x0);
    pTVar6 = &FPaths::EngineDir(&local_188)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_1c8,pTVar6,0x26 - (uint)(pTVar6->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_1c8,L"Binaries/ThirdParty/GPUReshape/Win64",0x24);
    iVar15 = local_1b8.Data.ArrayNum + -1;
    if (local_1b8.Data.ArrayNum == 0) {
      iVar15 = iVar13;
    }
    if ((local_1c8.ArrayNum != 0) || (iVar4 = 1, iVar15 + 1 == 0)) {
      iVar4 = iVar13;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_1a8,&local_1c8,iVar4 + iVar15 + 1);
    ::FString::PathAppend
              ((FString *)&local_1a8,(wchar_t *)local_1b8.Data.AllocatorInstance.Data,iVar15);
    if (&pFVar10->Data != &local_1a8) {
      pFVar1 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar10->Data).AllocatorInstance.Data = local_1a8.AllocatorInstance.Data;
      (this->GPUReshapePath).Data.ArrayNum = local_1a8.ArrayNum;
      (this->GPUReshapePath).Data.ArrayMax = local_1a8.ArrayMax;
      local_1a8.ArrayNum = 0;
      local_1a8.ArrayMax = 0;
      local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_178,L"GRS.Services.Loader.dll");
  local_158 = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    local_158 = local_178.Data.AllocatorInstance.Data;
  }
  if ((this->GPUReshapePath).Data.ArrayNum == 0) {
    local_168.DataPtr = L"";
  }
  else {
    local_168.DataPtr = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  iVar15 = 0;
  local_168.Size = iVar15;
  if ((FScriptContainerElement *)local_168.DataPtr != (FScriptContainerElement *)0x0) {
    sVar7 = wcslen(local_168.DataPtr);
    local_168.Size = (int)sVar7;
  }
  local_150 = iVar15;
  if (local_158 != (FScriptContainerElement *)0x0) {
    sVar7 = wcslen((wchar_t *)local_158);
    local_150 = (int)sVar7;
  }
  FPaths::CombineInternal(&local_198,&local_168,2);
  bVar2 = FPaths::FileExists(&local_198);
  if (bVar2) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_198.Data.ArrayNum != 0) {
      FVar12.Data = local_198.Data.AllocatorInstance.Data;
    }
    pvVar8 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar12.Data);
    if (pvVar8 == (void *)0x0) {
      if (1 < (byte)LogGPUReshape._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
        bVar2 = false;
        goto LAB_14e2c2deb;
      }
    }
    else {
      pcVar9 = FWindowsPlatformProcess::GetDllExport(pvVar8,L"GRSLoaderInstall");
      if (pcVar9 == (code *)0x0) {
        if ((byte)LogGPUReshape._0_1_ < 2) goto LAB_14e2c2d3c;
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
      }
      else {
        pFVar10 = FPaths::ProjectSavedDir();
        local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar4 = (pFVar10->Data).ArrayNum;
        pFVar1 = (pFVar10->Data).AllocatorInstance.Data;
        uVar16 = (0xf - (uint)((pFVar10->Data).ArrayNum != 0)) + iVar4;
        local_1c8.ArrayNum = iVar4;
        if ((int)uVar16 < iVar4) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar16,0,&local_1c8.AllocatorInstance,iVar4,&local_1c8.ArrayMax);
        if (iVar4 != 0) {
          memcpy(local_1c8.AllocatorInstance.Data,pFVar1,(longlong)iVar4 * 2);
        }
        ::FString::PathAppend((FString *)&local_1c8,L"ShaderSymbols",0xd);
        iVar4 = local_1c8.ArrayNum + -1;
        if (local_1c8.ArrayNum == 0) {
          iVar4 = iVar15;
        }
        pFVar11 = FAnsiString::ConstructFromPtrSize
                            ((FAnsiString *)&local_168,(wchar_t *)local_1c8.AllocatorInstance.Data,
                             iVar4);
        if (&local_148 != pFVar11) {
          pFVar14 = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar13 = (pFVar11->Data).ArrayNum;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        if ((FScriptContainerElement *)local_168.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.DataPtr);
        }
        if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.AllocatorInstance.Data);
        }
        local_188.Data.ArrayMax._0_1_ = 1;
        local_188.Data.ArrayNum = 1;
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)"";
        if (iVar13 != 0) {
          local_1b8.Data.AllocatorInstance.Data = pFVar14;
        }
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_1b8;
        cVar3 = (*pcVar9)(&local_188);
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        if (cVar3 != '\0') {
          if (3 < (byte)LogGPUReshape._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
          }
          pcVar9 = FWindowsPlatformProcess::GetDllExport(pvVar8,L"GRSLoaderGetReservedToken");
          if (pcVar9 == (code *)0x0) {
            if (1 < (byte)LogGPUReshape._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
            }
          }
          else {
            (*pcVar9)(0);
            memset(local_138,0,0x100);
            (*pcVar9)(local_138,&local_1b8);
            ::FString::Empty(&this->ReservedToken);
            ::FString::AppendChars
                      (&this->ReservedToken,local_138,(int)local_1b8.Data.AllocatorInstance.Data);
          }
          bVar2 = true;
          goto LAB_14e2c2deb;
        }
      }
      if (1 < (byte)LogGPUReshape._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
      }
    }
  }
  else if (1 < (byte)LogGPUReshape._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
    bVar2 = false;
    goto LAB_14e2c2deb;
  }
LAB_14e2c2d3c:
  bVar2 = false;
LAB_14e2c2deb:
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// InstallLoader @ 14e2c2f10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGPUReshapeModule::InstallLoader(FGPUReshapeModule *this,void *param_1)

{
  FScriptContainerElement *_Src;
  undefined1 uVar1;
  code *pcVar2;
  FString *pFVar3;
  FAnsiString *pFVar4;
  int iVar5;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *local_res18;
  FString local_48;
  FScriptContainerElement **local_38;
  undefined4 local_30;
  undefined1 local_2c;
  FAnsiString local_28;
  FAnsiString local_18;
  FScriptContainerElement *pFVar6;
  
  pcVar2 = FWindowsPlatformProcess::GetDllExport(param_1,L"GRSLoaderInstall");
  if (pcVar2 == (code *)0x0) {
    if (1 < (byte)LogGPUReshape._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
    }
    return false;
  }
  pFVar3 = FPaths::ProjectSavedDir();
  pFVar6 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = (pFVar3->Data).ArrayNum;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  uVar7 = (0xf - (uint)((pFVar3->Data).ArrayNum != 0)) + iVar8;
  local_48.Data.ArrayNum = iVar8;
  if (iVar8 <= (int)uVar7) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,0,(ForAnyElementType *)&local_48,iVar8,&local_48.Data.ArrayMax);
    if (iVar8 != 0) {
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
    }
    ::FString::PathAppend(&local_48,L"ShaderSymbols",0xd);
    iVar8 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar8 = iVar5;
    }
    pFVar4 = FAnsiString::ConstructFromPtrSize
                       (&local_28,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar8);
    if (&local_18 != pFVar4) {
      pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = (pFVar4->Data).ArrayNum;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_2c = 1;
    local_30 = 1;
    local_res18 = (FScriptContainerElement *)"";
    if (iVar5 != 0) {
      local_res18 = pFVar6;
    }
    local_38 = &local_res18;
    uVar1 = (*pcVar2)(&local_38);
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// OnPostEngineInit @ 14e2c30e0

void __thiscall FGPUReshapeModule::OnPostEngineInit(FGPUReshapeModule *this)

{
  return;
}

// OpenOrSwitchToApp @ 14e2c30f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGPUReshapeModule::OpenOrSwitchToApp(FGPUReshapeModule *this)

{
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  HANDLE hJob;
  FProcHandle FVar4;
  FStaticBasicLogRecord *pFVar5;
  ForAnyElementType FVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 auStackY_158 [32];
  uint7 in_stack_fffffffffffffed1;
  uint in_stack_fffffffffffffee4;
  FString local_f8;
  TStringView<wchar_t> local_e8;
  wchar_t *local_d8;
  undefined4 local_d0;
  FString local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((this->AppProcHandle != (FProcHandle)0x0) &&
     (bVar1 = FWindowsPlatformProcess::IsProcRunning(&this->AppProcHandle), bVar1)) {
    EnumWindows(`FGPUReshapeModule::SwitchToApp'::__l2::<lambda_1>::<lambda_invoker_cdecl>,
                (LPARAM)this);
    return;
  }
  if ((this->GPUReshapePath).Data.ArrayNum == 0) {
    local_e8.DataPtr = L"";
  }
  else {
    local_e8.DataPtr = (wchar_t *)(this->GPUReshapePath).Data.AllocatorInstance.Data;
  }
  local_e8.Size = 0;
  if ((FScriptContainerElement *)local_e8.DataPtr != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(local_e8.DataPtr);
    local_e8.Size = (int)sVar3;
  }
  local_d0 = 0xe;
  local_d8 = L"GPUReshape.exe";
  FPaths::CombineInternal(&local_c8,&local_e8,2);
  bVar1 = FPaths::FileExists(&local_c8);
  if (!bVar1) {
    if (1 < (byte)LogGPUReshape._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
    }
    goto LAB_14e2c3406;
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  ::FString::AppendChars(&local_f8,"attach ",7);
  FWindowsPlatformProcess::GetCurrentProcessId();
  ::FString::PrintfImpl((FString *)&local_e8,L"-pid %u ");
  iVar8 = local_e8.Size + -1;
  if (local_e8.Size == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(&local_f8,local_e8.DataPtr,iVar8);
  if ((FScriptContainerElement *)local_e8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.DataPtr);
  }
  ::FString::PrintfImpl((FString *)&local_e8,L"-token %s ");
  iVar8 = local_e8.Size + -1;
  if (local_e8.Size == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(&local_f8,local_e8.DataPtr,iVar8);
  if ((FScriptContainerElement *)local_e8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.DataPtr);
  }
  FWindowsPlatformProcess::ExecutableName(false);
  ::FString::PrintfImpl((FString *)&local_e8,L"-process %s ");
  iVar8 = local_e8.Size + -1;
  if (local_e8.Size == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(&local_f8,local_e8.DataPtr,iVar8);
  if ((FScriptContainerElement *)local_e8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.DataPtr);
  }
  hJob = CreateJobObjectW((LPSECURITY_ATTRIBUTES)0x0,(LPCWSTR)0x0);
  if (hJob == (HANDLE)0x0) {
    if (1 < (byte)LogGPUReshape._0_1_) {
      pFVar5 = &::LOG_Static;
      goto LAB_14e2c3360;
    }
  }
  else {
    uStack_a0 = 0;
    local_a8 = 0x2000;
    local_b8 = 0;
    uStack_b0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    BVar2 = SetInformationJobObject(hJob,JobObjectExtendedLimitInformation,&local_b8,0x90);
    if ((BVar2 == 0) && (1 < (byte)LogGPUReshape._0_1_)) {
      pFVar5 = &::LOG_Static;
LAB_14e2c3360:
      UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&LogGPUReshape);
    }
  }
  uVar7 = 0x6c;
  if (local_f8.Data.ArrayNum != 0) {
    uVar7 = (char)local_f8.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar6.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FVar4 = FWindowsPlatformProcess::CreateProc
                    ((wchar_t *)&local_e8,(wchar_t *)FVar6.Data,(bool)uVar7,false,false,
                     (uint *)((ulonglong)in_stack_fffffffffffffed1 << 8),(int)this + 0x38,
                     (wchar_t *)((ulonglong)in_stack_fffffffffffffee4 << 0x20),(void *)0x0,
                     (void *)0x0);
  FVar4 = *(FProcHandle *)FVar4;
  this->AppProcHandle = FVar4;
  if (((hJob != (HANDLE)0x0) && (BVar2 = AssignProcessToJobObject(hJob,(HANDLE)FVar4), BVar2 == 0))
     && (1 < (byte)LogGPUReshape._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUReshape);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
LAB_14e2c3406:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// SwitchToApp @ 14e2c3450

void __thiscall FGPUReshapeModule::SwitchToApp(FGPUReshapeModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e2c345a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnumWindows(`FGPUReshapeModule::SwitchToApp'::__l2::<lambda_1>::<lambda_invoker_cdecl>,
              (LPARAM)this);
  return;
}

