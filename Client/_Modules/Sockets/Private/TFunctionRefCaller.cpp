// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 1

// Call @ 14310d1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RunAsyncGAIQuery'::__l26::<lambda_1>,void,FAddressInfoResult>::Call
          (void *param_1,FAddressInfoResult *param_2)

{
  ForAnyElementType FVar1;
  LARGE_INTEGER local_res8 [4];
  FAddressInfoResult local_68;
  
  local_68.QueryHostName.Data.AllocatorInstance.Data =
       (param_2->QueryHostName).Data.AllocatorInstance.Data;
  (param_2->QueryHostName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.QueryHostName.Data.ArrayNum = (param_2->QueryHostName).Data.ArrayNum;
  local_68.QueryHostName.Data.ArrayMax = (param_2->QueryHostName).Data.ArrayMax;
  (param_2->QueryHostName).Data.ArrayNum = 0;
  (param_2->QueryHostName).Data.ArrayMax = 0;
  local_68.QueryServiceName.Data.AllocatorInstance.Data =
       (param_2->QueryServiceName).Data.AllocatorInstance.Data;
  (param_2->QueryServiceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.QueryServiceName.Data.ArrayNum = (param_2->QueryServiceName).Data.ArrayNum;
  local_68.QueryServiceName.Data.ArrayMax = (param_2->QueryServiceName).Data.ArrayMax;
  (param_2->QueryServiceName).Data.ArrayNum = 0;
  (param_2->QueryServiceName).Data.ArrayMax = 0;
  local_68.CanonicalNameResult.Data.AllocatorInstance.Data =
       (param_2->CanonicalNameResult).Data.AllocatorInstance.Data;
  (param_2->CanonicalNameResult).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.CanonicalNameResult.Data.ArrayNum = (param_2->CanonicalNameResult).Data.ArrayNum;
  local_68.CanonicalNameResult.Data.ArrayMax = (param_2->CanonicalNameResult).Data.ArrayMax;
  (param_2->CanonicalNameResult).Data.ArrayNum = 0;
  (param_2->CanonicalNameResult).Data.ArrayMax = 0;
  local_68.ReturnCode = param_2->ReturnCode;
  local_68.Results.AllocatorInstance.Data = (param_2->Results).AllocatorInstance.Data;
  (param_2->Results).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Results.ArrayNum = (param_2->Results).ArrayNum;
  local_68.Results.ArrayMax = (param_2->Results).ArrayMax;
  (param_2->Results).ArrayNum = 0;
  (param_2->Results).ArrayMax = 0;
  if (4 < (byte)LogSockets._0_1_) {
    QueryPerformanceCounter(local_res8);
    Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Async_GAI_Reque_150a3e558,
               (FLogCategoryBase *)&LogSockets);
  }
  DebugPrintGaiResults(*(ISocketSubsystem **)param_1,&local_68);
  FVar1.Data = local_68.Results.AllocatorInstance.Data;
  DestructItems<FAddressInfoResultData,int>
            ((FAddressInfoResultData *)local_68.Results.AllocatorInstance.Data,
             local_68.Results.ArrayNum);
  if ((FAddressInfoResultData *)FVar1.Data != (FAddressInfoResultData *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (local_68.CanonicalNameResult.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CanonicalNameResult.Data.AllocatorInstance.Data);
  }
  if (local_68.QueryServiceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.QueryServiceName.Data.AllocatorInstance.Data);
  }
  if (local_68.QueryHostName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.QueryHostName.Data.AllocatorInstance.Data);
  }
  return;
}

