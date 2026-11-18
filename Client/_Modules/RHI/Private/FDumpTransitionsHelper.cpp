// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// DumpResourceTransition @ 145cda5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDumpTransitionsHelper::DumpResourceTransition(FName *param_1,ERHIAccess param_2)

{
  size_t sVar1;
  undefined1 auStack_988 [32];
  FName local_968;
  FString local_960;
  FString local_950;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_938;
  char local_818 [2048];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_988;
  local_968 = DumpTransitionForResource;
  if ((DumpTransitionForResource != (FName)0x0) && (DumpTransitionForResource == *param_1)) {
    memset(local_818,0,0x7ff);
    FWindowsPlatformStackWalk::StackWalkAndDump(local_818,0x7ff,2,(void *)0x0);
    if (4 < (byte)LogRHI._0_1_) {
      GetRHIAccessName(&local_950,param_2);
      ::FName::ToString(&local_968,&local_960);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_960.Data.AllocatorInstance.Data);
      }
      if (local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_950.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogRHI._0_1_) {
        local_938._padding_ = 0;
        sVar1 = strlen(local_818);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_938,local_818,(int)sVar1,Yes);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if ((void *)local_938._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_938._padding_);
        }
      }
    }
  }
  return;
}

// DumpTransitionForResourceHandler @ 145cda750

void __cdecl FDumpTransitionsHelper::DumpTransitionForResourceHandler(void)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  TConsoleVariableData<FString> *pTVar2;
  bool bVar3;
  FName *pFVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  FName local_res8;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pTVar2 = CVarDumpTransitionsForResource.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = pTVar2->ShadowedValue[0].Data.ArrayNum;
  lVar6 = (longlong)local_10;
  _Src = pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar6 * 2);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_10 != 0) {
    FVar5.Data = local_18.Data;
  }
  pFVar4 = ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
  DumpTransitionForResource = *pFVar4;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

