// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 5

// Call @ 146b05620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>,void,FSourceControlState>
::Call(void *param_1,FSourceControlState *param_2)

{
  FSourceControlState *pFVar1;
  FSourceControlState local_58;
  
  pFVar1 = FSourceControlState::FSourceControlState(&local_58,param_2);
  `USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>::operator()(param_1,pFVar1);
  return;
}

// Call @ 146b05650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceControlHelpers::QueryFileState'::__l2::<lambda_1>,void,FSourceControlState>
::Call(void *param_1,FSourceControlState *param_2)

{
  FScriptContainerElement *pFVar1;
  FSourceControlState *pFVar2;
  FSourceControlState local_58;
  
  pFVar2 = FSourceControlState::FSourceControlState(&local_58,param_2);
  FSourceControlState::operator=(*(FSourceControlState **)param_1,pFVar2);
  pFVar1 = (pFVar2->PreviousUser).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar2->CheckedOutOther).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar2->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Call @ 146b056c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>,void,FSourceControlState>
::Call(void *param_1,FSourceControlState *param_2)

{
  FSourceControlState *pFVar1;
  FSourceControlState local_58;
  
  pFVar1 = FSourceControlState::FSourceControlState(&local_58,param_2);
  `USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>::operator()(param_1,pFVar1);
  return;
}

// Call @ 146b056f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 146b05710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSourceControlAssetDataCache::LaunchFetchAssetDataTasks'::__l11::<lambda_1>,void>
::Call(void *param_1)

{
  ISourceControlModule *pIVar1;
  FSourceControlAssetDataCache *this;
  TSharedRef<ISourceControlState,1> local_18;
  
  pIVar1 = ISourceControlModule::Get();
  this = (FSourceControlAssetDataCache *)(**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  local_18.Object = *(ISourceControlState **)param_1;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSourceControlAssetDataCache::FetchAssetData(this,&local_18);
  return;
}

