// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// AddChainResult @ 1441d5860

void __thiscall UE::Net::FNetResult::AddChainResult(FNetResult *this,FNetResult *param_1)

{
  TPimplPtr<UE::Net::FNetResult,1> TVar1;
  TPimplPtr<UE::Net::FNetResult,1> TVar2;
  undefined8 *puVar3;
  TPimplPtr<UE::Net::FNetResult,1> *pTVar4;
  TPimplPtr<UE::Net::FNetResult,1> local_18 [2];
  
  TVar1 = this->NextResult;
  while (TVar2 = TVar1, TVar2 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    this = (FNetResult *)TVar2;
    TVar1 = *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)TVar2 + 0x28);
  }
  puVar3 = ::operator_new(0x40);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>;
    puVar3[1] = Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>;
    puVar3[2] = param_1->Result;
    *(FWeakObjectPtr *)(puVar3 + 3) = (param_1->ResultEnumObj).WeakPtr;
    puVar3[4] = param_1->RawResultEnumObj;
    puVar3[5] = 0;
    puVar3[5] = (param_1->ErrorContext).Data.AllocatorInstance.Data;
    (param_1->ErrorContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar3 + 6) = (param_1->ErrorContext).Data.ArrayNum;
    *(int *)((longlong)puVar3 + 0x34) = (param_1->ErrorContext).Data.ArrayMax;
    (param_1->ErrorContext).Data.ArrayNum = 0;
    (param_1->ErrorContext).Data.ArrayMax = 0;
    *(TPimplPtr<UE::Net::FNetResult,1> *)(puVar3 + 7) = param_1->NextResult;
    param_1->NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  }
  pTVar4 = &this->NextResult;
  if (local_18 == pTVar4) {
    if ((TPimplPtr<UE::Net::FNetResult,1>)(puVar3 + 2) != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (*(code *)*puVar3)(puVar3);
    }
  }
  else {
    TVar1 = *pTVar4;
    *pTVar4 = (TPimplPtr<UE::Net::FNetResult,1>)(puVar3 + 2);
    if (TVar1 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d592d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
      return;
    }
  }
  return;
}

// DynamicToString @ 1441da540

FString * __thiscall
UE::Net::FNetResult::DynamicToString
          (FNetResult *this,FString *__return_storage_ptr__,ENetResultString param_1)

{
  UEnum *this_00;
  ForAnyElementType FVar1;
  int iVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (UEnum *)FWeakObjectPtr::Get(&(this->ResultEnumObj).WeakPtr);
  if (this_00 == (UEnum *)0x0) {
    ::FString::operator=(__return_storage_ptr__,L"BadEnum");
  }
  else {
    for (; this != (FNetResult *)0x0; this = *(FNetResult **)((longlong)this + 0x28)) {
      UEnum::GetNameStringByValue(this_00,&local_18,*(long64 *)this);
      if (param_1 == ResultEnumOnly) {
        iVar2 = local_18.Data.ArrayNum + -1;
        if (local_18.Data.ArrayNum == 0) {
          iVar2 = 0;
        }
        ::FString::AssignRange
                  (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
LAB_1441da601:
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar1.Data = local_18.Data.AllocatorInstance.Data;
      }
      Net::Private::NetResultToString
                (__return_storage_ptr__,(wchar_t *)FVar1.Data,(FString *)((longlong)this + 0x18),
                 param_1);
      if (param_1 != WithChain) goto LAB_1441da601;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

