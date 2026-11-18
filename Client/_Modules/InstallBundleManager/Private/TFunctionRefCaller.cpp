// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 3

// Call @ 148bc6200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  undefined8 uStackX_8;
  FString FStack_18;
  
  bVar3 = FPaths::FileExists((FString *)(*(longlong *)param_1 + 0x48));
  if (bVar3) {
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_18.Data.ArrayNum = 0;
    FStack_18.Data.ArrayMax = 0;
    if (*(int *)(*(longlong *)param_1 + 0x50) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)(*(longlong *)param_1 + 0x48);
    }
    bVar3 = FFileHelper::LoadFileToString(&FStack_18,pwVar5,None,0);
    if (bVar3) {
      if (3 < (byte)LogInstallBundleManager._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
      }
      if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x38))
                        (*(longlong **)((longlong)param_1 + 8),&FStack_18);
      if (cVar4 == '\0') {
        uStackX_8 = *(undefined8 *)param_1;
        ``FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>::
        operator()(&uStackX_8);
      }
      if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar1 = (int *)(*(longlong *)((longlong)param_1 + 8) + 0x28);
      *piVar1 = *piVar1 + 1;
    }
    else if (2 < (byte)LogInstallBundleManager._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 148bc6210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int iVar1;
  bool bVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  undefined8 uStackX_8;
  TStringView<wchar_t> TStack_28;
  FString FStack_18;
  
  pwVar5 = L"";
  if (3 < (byte)LogInstallBundleManager._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
  }
  pIVar3 = IFileManager::Get();
  if (*(int *)(*(longlong *)param_1 + 0x50) != 0) {
    pwVar5 = *(wchar_t **)(*(longlong *)param_1 + 0x48);
  }
  pFVar4 = FJsonSerializable::ToJson((FJsonSerializable *)((longlong)param_1 + 8),&FStack_18,true);
  TStack_28.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar1 = (pFVar4->Data).ArrayNum;
  TStack_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    TStack_28.Size = 0;
  }
  bVar2 = FFileHelper::SaveStringToFile(&TStack_28,pwVar5,AutoDetect,pIVar3,0);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    uStackX_8 = *(undefined8 *)param_1;
    bVar2 = ``FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>::operator()'::__l2::
            <lambda_1>::operator()(&uStackX_8);
    if (!bVar2) {
      return;
    }
  }
  return;
}

// Call @ 148bc6220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FReadAccessScope FStack_28;
  
  if (*(longlong *)((longlong)param_1 + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FInstallManagerBundleReport::operator=
            (*(FInstallManagerBundleReport **)param_1,
             *(FInstallManagerBundleReport **)((longlong)param_1 + 8));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x18),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0x28) != 0) &&
     (*(longlong **)((longlong)param_1 + 0x20) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x20) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

