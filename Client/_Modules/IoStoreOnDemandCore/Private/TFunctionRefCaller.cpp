// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 6

// Call @ 14458a200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),void,UE::IoStore::FOnDemandVerifyCacheResult>
::Call(void *param_1,FOnDemandVerifyCacheResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014458a206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14458a210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),void,UE::IoStore::FOnDemandDefragResult>
::Call(void *param_1,FOnDemandDefragResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014458a216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14458a220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),void,UE::IoStore::FOnDemandPurgeResult>
::Call(void *param_1,FOnDemandPurgeResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014458a226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14458a230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),void,UE::IoStore::FOnDemandMountResult>
::Call(void *param_1,FOnDemandMountResult *param_2)

{
  code *pcVar1;
  FScriptContainerElement *local_38;
  int local_30;
  int local_2c;
  wchar_t *local_28;
  EIoErrorCode local_20;
  uint local_1c;
  double local_18;
  
  local_38 = (param_2->MountId).Data.AllocatorInstance.Data;
  pcVar1 = *(code **)param_1;
  (param_2->MountId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30 = (param_2->MountId).Data.ArrayNum;
  local_2c = (param_2->MountId).Data.ArrayMax;
  (param_2->MountId).Data.ArrayNum = 0;
  (param_2->MountId).Data.ArrayMax = 0;
  local_28 = (param_2->Status).ErrorMessage.Chars;
  if (local_28 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(local_28 + -4) = *(int *)(local_28 + -4) + 1;
    UNLOCK();
  }
  local_20 = (param_2->Status).ErrorCode;
  local_18 = param_2->DurationInSeconds;
  local_1c = (param_2->Status).SystemErrorCode;
  (*pcVar1)(&local_38);
  return;
}

// Call @ 14458a2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::Commands::InstallPackage'::__l2::<lambda_1>,void,UE::IoStore::FOnDemandInstallResult>
::Call(void *param_1,FOnDemandInstallResult *param_2)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  FString local_58;
  double local_48;
  ulong64 local_40;
  ulong64 uStack_38;
  ulong64 local_30;
  FError local_28;
  char local_18;
  
  local_48 = param_2->DurationInSeconds;
  local_40 = (param_2->Progress).TotalContentSize;
  uStack_38 = (param_2->Progress).TotalInstallSize;
  local_18 = (param_2->Error).bIsSet;
  local_30 = (param_2->Progress).CurrentInstallSize;
  if (((bool)local_18 == false) ||
     (UnifiedError::FError::FError(&local_28,&(param_2->Error).TypedValue), local_18 == '\0')) {
    if ((byte)LogIoStoreOnDemand._0_1_ < 5) {
      return;
    }
    Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Successfully_in_150d766d8,
               (FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  else if (1 < (byte)LogIoStoreOnDemand._0_1_) {
    ::LexToString(&local_58,&local_28);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_Failed_to_insta_150d76748,
               (FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  TVar1.Reference = local_28.ErrorDetails.Reference;
  if ((local_18 != '\0') &&
     (local_28.ErrorCode = 0, local_28.ModuleId = 0,
     local_28.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_28.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (local_28.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_28.ErrorDetails.Reference + 0x10))();
    }
  }
  return;
}

// Call @ 14458a3b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::Commands::MountFile'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>::
Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::IoStore::Commands::MountFile'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

