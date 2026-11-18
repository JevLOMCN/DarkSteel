// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// ApplyAfter<<lambda_11>_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&> @ 1442a1b20

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<<lambda_11>_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_11> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  UReplicationSystem *this_00;
  UObjectReplicationBridge *this_01;
  wchar_t *pwVar2;
  uint local_res20 [2];
  
  local_res20[0] = 0;
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_2,(<lambda_1>)0x0);
  if (pFVar1 != (FString *)0x0) {
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar2,L"RepSystemId=",local_res20);
  }
  this_00 = Net::GetReplicationSystem(local_res20[0]);
  if (this_00 != (UReplicationSystem *)0x0) {
    this_01 = UReplicationSystem::GetReplicationBridge(this_00);
    if (this_01 != (UObjectReplicationBridge *)0x0) {
      UObjectReplicationBridge::PrintNetCullDistances(this_01,param_2);
      return;
    }
  }
  return;
}

