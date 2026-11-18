// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkReplayStreaming
// Functions: 2

// CopyFunc<UE::Net::FNetResult> @ 144643c30

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>(void *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = ::operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DeleterFunc<UE::Net::FNetResult>;
    puVar1[1] = CopyFunc<UE::Net::FNetResult>;
    puVar1[2] = *(undefined8 *)param_1;
    puVar1[3] = *(undefined8 *)((longlong)param_1 + 8);
    puVar1[4] = *(undefined8 *)((longlong)param_1 + 0x10);
    ::FString::FString((FString *)(puVar1 + 5),(FString *)((longlong)param_1 + 0x18));
    puVar1[7] = 0;
    if (*(longlong *)((longlong)param_1 + 0x28) != 0) {
      uVar2 = (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + -8))();
      puVar1[7] = uVar2;
    }
    return puVar1 + 2;
  }
  return &DAT_00000010;
}

// AddToChainResultPtr @ 144643df0

void __cdecl
UE::Net::AddToChainResultPtr(TPimplPtr<UE::Net::FNetResult,1> *param_1,FNetResult *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  TPimplPtr<UE::Net::FNetResult,1> TVar3;
  TPimplPtr<UE::Net::FNetResult,1> TVar4;
  TPimplPtr<UE::Net::FNetResult,1> *pTVar5;
  TPimplPtr<UE::Net::FNetResult,1> local_18;
  TPimplPtr<UE::Net::FNetResult,1> local_10;
  
  TVar3 = *param_1;
  if (TVar3 == (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    puVar2 = ::operator_new(0x40);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      *puVar2 = Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>;
      puVar2[1] = Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>;
      puVar2[2] = param_2->Result;
      *(FWeakObjectPtr *)(puVar2 + 3) = (param_2->ResultEnumObj).WeakPtr;
      pvVar1 = param_2->RawResultEnumObj;
      puVar2[5] = 0;
      puVar2[4] = pvVar1;
      puVar2[5] = (param_2->ErrorContext).Data.AllocatorInstance.Data;
      (param_2->ErrorContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar2 + 6) = (param_2->ErrorContext).Data.ArrayNum;
      *(int *)((longlong)puVar2 + 0x34) = (param_2->ErrorContext).Data.ArrayMax;
      (param_2->ErrorContext).Data.ArrayNum = 0;
      (param_2->ErrorContext).Data.ArrayMax = 0;
      *(TPimplPtr<UE::Net::FNetResult,1> *)(puVar2 + 7) = param_2->NextResult;
      param_2->NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    }
    TVar3 = (TPimplPtr<UE::Net::FNetResult,1>)(puVar2 + 2);
    if (&local_10 == param_1) goto LAB_144643f68;
    TVar4 = *param_1;
    *param_1 = TVar3;
  }
  else {
    for (TVar4 = *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)TVar3 + 0x28);
        TVar4 != (TPimplPtr<UE::Net::FNetResult,1>)0x0;
        TVar4 = *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)TVar4 + 0x28)) {
      TVar3 = TVar4;
    }
    puVar2 = ::operator_new(0x40);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      *puVar2 = Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>;
      puVar2[1] = Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>;
      puVar2[2] = param_2->Result;
      *(FWeakObjectPtr *)(puVar2 + 3) = (param_2->ResultEnumObj).WeakPtr;
      pvVar1 = param_2->RawResultEnumObj;
      puVar2[5] = 0;
      puVar2[4] = pvVar1;
      puVar2[5] = (param_2->ErrorContext).Data.AllocatorInstance.Data;
      (param_2->ErrorContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar2 + 6) = (param_2->ErrorContext).Data.ArrayNum;
      *(int *)((longlong)puVar2 + 0x34) = (param_2->ErrorContext).Data.ArrayMax;
      (param_2->ErrorContext).Data.ArrayNum = 0;
      (param_2->ErrorContext).Data.ArrayMax = 0;
      *(TPimplPtr<UE::Net::FNetResult,1> *)(puVar2 + 7) = param_2->NextResult;
      param_2->NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    }
    pTVar5 = (TPimplPtr<UE::Net::FNetResult,1> *)((longlong)TVar3 + 0x28);
    TVar3 = (TPimplPtr<UE::Net::FNetResult,1>)(puVar2 + 2);
    if (&local_18 == pTVar5) {
LAB_144643f68:
      if (TVar3 == (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        return;
      }
      (*(code *)*puVar2)(puVar2);
      return;
    }
    TVar4 = *pTVar5;
    *pTVar5 = TVar3;
  }
  if (TVar4 == (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144643eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)TVar4 + -0x10))((longlong)TVar4 + -0x10);
  return;
}

