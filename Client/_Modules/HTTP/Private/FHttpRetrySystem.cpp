// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// ReadThrottledTimeFromResponseInSeconds @ 143176240

TOptional<double> * __cdecl
FHttpRetrySystem::ReadThrottledTimeFromResponseInSeconds
          (TOptional<double> *__return_storage_ptr__,TSharedPtr<IHttpResponse,1> *param_1)

{
  IHttpResponse *pIVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  TOptional<double> *pTVar5;
  longlong lVar6;
  FDateTime *pFVar7;
  ForAnyElementType _Str;
  double dVar8;
  FDateTime local_res8;
  longlong local_res10;
  longlong local_res18;
  FDateTime local_res20;
  FString local_68;
  wchar_t *local_58;
  int local_50;
  FString local_48;
  FString local_38;
  
  __return_storage_ptr__->bIsSet = false;
  pIVar1 = param_1->Object;
  if (pIVar1 != (IHttpResponse *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
    ::FString::FString(&local_48,L"Retry-After");
    (*pcVar2)(pIVar1,&local_68,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.ArrayNum < 2) {
      if (param_1->Object == (IHttpResponse *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TOptional<double> *)(*pcVar2)();
          return pTVar5;
        }
      }
      pIVar1 = param_1->Object;
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
      ::FString::FString(&local_38,L"X-Rate-Limit-Reset");
      (*pcVar2)(pIVar1,&local_58,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (1 < local_50) {
        lVar6 = _wtoi64(local_58);
        pFVar7 = FDateTime::FDateTime(&local_res20,0x7b2,1,1,0,0,0,0);
        lVar3 = pFVar7->Ticks;
        FDateTime::UtcNow();
        __return_storage_ptr__->bIsSet = true;
        __return_storage_ptr__->TypedValue =
             (double)((lVar6 * 10000000 + lVar3) - local_res18) * __real_3e7ad7f29abcaf48;
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free(local_58);
      }
    }
    else {
      bVar4 = ::FString::IsNumeric(&local_68);
      if (bVar4) {
        _Str.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          _Str.Data = local_68.Data.AllocatorInstance.Data;
        }
        dVar8 = _wtof((wchar_t *)_Str.Data);
        __return_storage_ptr__->TypedValue = (double)(float)dVar8;
        __return_storage_ptr__->bIsSet = true;
      }
      else {
        local_res8.Ticks = 0;
        bVar4 = FDateTime::ParseHttpDate(&local_68,&local_res8);
        if (bVar4) {
          FDateTime::UtcNow();
          __return_storage_ptr__->TypedValue =
               (double)(local_res8.Ticks - local_res10) * __real_3e7ad7f29abcaf48;
          __return_storage_ptr__->bIsSet = true;
        }
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

