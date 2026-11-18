// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 9

// Call @ 144554d90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FIcmpEchoResult),void,FIcmpEchoResult>::Call
          (void *param_1,FIcmpEchoResult *param_2)

{
  code *pcVar1;
  EIcmpResponseStatus local_38 [2];
  FScriptContainerElement *local_30;
  int local_28;
  int local_24;
  FScriptContainerElement *local_20;
  int local_18;
  int local_14;
  float local_10;
  
  local_38[0] = param_2->Status;
  pcVar1 = *(code **)param_1;
  local_30 = (param_2->ResolvedAddress).Data.AllocatorInstance.Data;
  (param_2->ResolvedAddress).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28 = (param_2->ResolvedAddress).Data.ArrayNum;
  local_24 = (param_2->ResolvedAddress).Data.ArrayMax;
  (param_2->ResolvedAddress).Data.ArrayNum = 0;
  (param_2->ResolvedAddress).Data.ArrayMax = 0;
  local_20 = (param_2->ReplyFrom).Data.AllocatorInstance.Data;
  (param_2->ReplyFrom).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18 = (param_2->ReplyFrom).Data.ArrayNum;
  local_14 = (param_2->ReplyFrom).Data.ArrayMax;
  (param_2->ReplyFrom).Data.ArrayNum = 0;
  (param_2->ReplyFrom).Data.ArrayMax = 0;
  local_10 = param_2->Time;
  (*pcVar1)(local_38);
  return;
}

// Call @ 144554e00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144554e32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 144554e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144554e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 144554ea0

FIcmpEchoManyCompleteResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUdpPingManyAsync::Start'::__l2::<lambda_1>,FIcmpEchoManyCompleteResult>::Call
          (FIcmpEchoManyCompleteResult *__return_storage_ptr__,void *param_1)

{
  FUdpPingManyAsync::RunWorker
            (__return_storage_ptr__,*(ISocketSubsystem **)(*(longlong *)param_1 + 0x18),
             (TArray<FIcmpTarget,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x18));
  LOCK();
  *(undefined4 *)(*(longlong *)param_1 + 0x38) = 1;
  UNLOCK();
  return __return_storage_ptr__;
}

// Call @ 144554ef0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<FIcmpEchoResult,TUniqueFunction<FIcmpEchoResult___cdecl(void)>_&>
            ((TPromise<FIcmpEchoResult> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 144554f10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 144554f30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 144554f50

FIcmpEchoResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIcmpAsyncResult::FIcmpAsyncResult'::__l5::<lambda_1>,FIcmpEchoResult>::Call
          (FIcmpEchoResult *__return_storage_ptr__,void *param_1)

{
  IcmpEchoImpl(__return_storage_ptr__,*(ISocketSubsystem **)(*(longlong *)param_1 + 0x18),
               (FString *)((longlong)param_1 + 8),*(float *)((longlong)param_1 + 0x18));
  LOCK();
  *(undefined4 *)(*(longlong *)param_1 + 0x50) = 1;
  UNLOCK();
  return __return_storage_ptr__;
}

// Call @ 144554fa0

FIcmpEchoResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUDPPingAsyncResult::FUDPPingAsyncResult'::__l5::<lambda_1>,FIcmpEchoResult>::
Call(FIcmpEchoResult *__return_storage_ptr__,void *param_1)

{
  UDPEchoImpl(__return_storage_ptr__,*(ISocketSubsystem **)(*(longlong *)param_1 + 0x18),
              (FString *)((longlong)param_1 + 8),*(float *)((longlong)param_1 + 0x18));
  LOCK();
  *(undefined4 *)(*(longlong *)param_1 + 0x50) = 1;
  UNLOCK();
  return __return_storage_ptr__;
}

