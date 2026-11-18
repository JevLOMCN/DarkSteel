// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// operator() @ 14d3d16a0

void __thiscall
`TraceServices::FSymbolHelper::GetPathsFromEnvVars'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_48 != pFVar4) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  while( true ) {
    ::FString::FString(&local_28,L";");
    bVar2 = ::FString::Split(&local_48,&local_28,&local_38,&local_48);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (!bVar2) break;
    ::FString::TrimQuotesInline(&local_38,(bool *)0x0);
    if (1 < local_38.Data.ArrayNum) {
      iVar3 = param_2->ArrayNum;
      if (iVar3 == param_2->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      FVar1.Data = local_38.Data.AllocatorInstance.Data;
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
      param_2->ArrayNum = iVar3 + 1;
      *(FScriptContainerElement **)&pFVar6->field_0x0 = (FScriptContainerElement *)0x0;
      lVar5 = (longlong)local_38.Data.ArrayNum;
      *(int *)&pFVar6[8].field_0x0 = local_38.Data.ArrayNum;
      if (local_38.Data.ArrayNum == 0) {
        *(int *)(pFVar6 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar6,local_38.Data.ArrayNum,
                   (int *)(pFVar6 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar6->field_0x0,FVar1.Data,lVar5 * 2);
      }
    }
  }
  ::FString::TrimQuotesInline(&local_48,(bool *)0x0);
  if (1 < local_48.Data.ArrayNum) {
    iVar3 = param_2->ArrayNum;
    if (iVar3 == param_2->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar1.Data = local_48.Data.AllocatorInstance.Data;
    param_2->ArrayNum = iVar3 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(FScriptContainerElement **)&pFVar6->field_0x0 = (FScriptContainerElement *)0x0;
    lVar5 = (longlong)local_48.Data.ArrayNum;
    *(int *)&pFVar6[8].field_0x0 = local_48.Data.ArrayNum;
    if (local_48.Data.ArrayNum == 0) {
      *(int *)(pFVar6 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar6,local_48.Data.ArrayNum,
                 (int *)(pFVar6 + 0xc));
      memcpy(*(FScriptContainerElement **)&pFVar6->field_0x0,FVar1.Data,lVar5 * 2);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPathsFromEnvVars @ 14d3e2150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TraceServices::FSymbolHelper::GetPathsFromEnvVars
          (FLogCategoryBase *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_28,L"UE_INSIGHTS_SYMBOL_PATH");
  if ((Display < param_1->CompileTimeVerbosity) && (Display < param_1->Verbosity)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,param_1);
  }
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  `TraceServices::FSymbolHelper::GetPathsFromEnvVars'::__l2::<lambda_1>::operator()
            (local_res8,&local_18,param_2);
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_38,L"_NT_SYMBOL_PATH");
  if ((Display < param_1->CompileTimeVerbosity) && (Display < param_1->Verbosity)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,param_1);
  }
  iVar1 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  local_18.Size = iVar1;
  local_18.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  `TraceServices::FSymbolHelper::GetPathsFromEnvVars'::__l2::<lambda_1>::operator()
            (local_res8,&local_18,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPathsFromSettings @ 14d3e2290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TraceServices::FSymbolHelper::GetPathsFromSettings
          (FLogCategoryBase *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_298 [32];
  undefined1 local_268 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_260;
  FString local_250;
  FString local_240;
  FConfigContext local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.Data.ArrayNum = 0;
  local_250.Data.ArrayMax = 0;
  local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.ArrayNum = 0;
  local_260.ArrayMax = 0;
  local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.Data.ArrayNum = 0;
  local_240.Data.ArrayMax = 0;
  FConfigContext::FConfigContext(&local_228,GConfig,true,&local_240,(FConfigFile *)0x0);
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  bVar3 = FConfigContext::Load(&local_228,L"UnrealInsightsSettings",&local_250);
  FConfigContext::~FConfigContext(&local_228);
  if (bVar3) {
    FConfigCacheIni::GetArray(GConfig,L"Insights",L"SymbolSearchPaths",&local_260,&local_250);
  }
  iVar2 = local_260.ArrayNum;
  if (local_260.ArrayNum == 0) {
    if ((Display < param_1->CompileTimeVerbosity) && (Display < param_1->Verbosity)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,param_1);
    }
  }
  else {
    pFVar6 = local_260.AllocatorInstance.Data + (longlong)local_260.ArrayNum * 0x10;
    FVar5.Data = local_260.AllocatorInstance.Data;
    while( true ) {
      if (local_260.ArrayNum != iVar2) {
        local_268[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_268);
      }
      if (FVar5.Data == pFVar6) break;
      if ((Display < param_1->CompileTimeVerbosity) && (Display < param_1->Verbosity)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,param_1);
      }
      FVar5.Data = FVar5.Data + 0x10;
    }
  }
  if ((param_2 == &local_260) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = local_260.ArrayNum;
  if (local_260.ArrayNum != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_260.ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    ConstructItems<FString,FString,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
               (FString *)local_260.AllocatorInstance.Data,iVar2);
  }
  DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
  if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.AllocatorInstance.Data);
  }
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  return;
}

// GetSymbolSearchPaths @ 14d3e2b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TraceServices::FSymbolHelper::GetSymbolSearchPaths
          (FLogCategoryBase *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_28,L"UE_INSIGHTS_SYMBOL_PATH");
  if ((Display < param_1->CompileTimeVerbosity) && (Display < param_1->Verbosity)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,param_1);
  }
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  `TraceServices::FSymbolHelper::GetPathsFromEnvVars'::__l2::<lambda_1>::operator()
            (local_res8,&local_18,param_2);
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_38,L"_NT_SYMBOL_PATH");
  if ((Display < param_1->CompileTimeVerbosity) && (Display < param_1->Verbosity)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,param_1);
  }
  iVar1 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  local_18.Size = iVar1;
  local_18.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  `TraceServices::FSymbolHelper::GetPathsFromEnvVars'::__l2::<lambda_1>::operator()
            (local_res8,&local_18,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  GetPathsFromSettings(param_1,param_2);
  return;
}

