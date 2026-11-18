// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// operator() @ 1476229a0

void __thiscall
`FSubsystemCollection<UAudioEngineSubsystem>::ForEachSubsystem'::__l2::<lambda_1>::operator()
          (void *this,USubsystem *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  USubsystem *local_res8;
  FString local_28;
  FString local_18;
  
  if (param_1 == (USubsystem *)0x0) {
    pFVar3 = GetTypeName<UAudioEngineSubsystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UAudioEngineSubsystem_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    local_res8 = param_1;
    (**(code **)this)(*(undefined8 *)((longlong)this + 8),&local_res8);
    return;
  }
  pFVar3 = GetTypeName<UAudioEngineSubsystem>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<USubsystem>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// AddReferencedObjects @ 147628ca0

void __thiscall
FSubsystemCollection<UAudioEngineSubsystem>::AddReferencedObjects
          (FSubsystemCollection<UAudioEngineSubsystem> *this,FReferenceCollector *param_1)

{
  FSubsystemCollectionBase::AddReferencedObjects
            ((FSubsystemCollectionBase *)&this[-1].field_0x10,(UObject *)0x0,param_1);
  return;
}

// GetReferencerName @ 14763f410

FString * __thiscall
FSubsystemCollection<UAudioEngineSubsystem>::GetReferencerName
          (FSubsystemCollection<UAudioEngineSubsystem> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSubsystemCollection");
  return __return_storage_ptr__;
}

