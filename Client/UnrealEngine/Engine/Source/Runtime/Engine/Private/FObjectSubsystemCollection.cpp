// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 147eaae80

void __thiscall
`FObjectSubsystemCollection<ULocalPlayerSubsystem>::ForEachSubsystem'::__l2::<lambda_1>::operator()
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
    pFVar3 = GetTypeName<ULocalPlayerSubsystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    local_res8 = param_1;
    (**(code **)this)(*(undefined8 *)((longlong)this + 8),&local_res8);
    return;
  }
  pFVar3 = GetTypeName<ULocalPlayerSubsystem>(&local_28);
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

// ForEachSubsystemWithInterface<UStreamingWorldSubsystemInterface> @ 1489ab8d0

void __thiscall
FObjectSubsystemCollection<UWorldSubsystem>::
ForEachSubsystemWithInterface<UStreamingWorldSubsystemInterface>
          (FObjectSubsystemCollection<UWorldSubsystem> *this,
          TFunctionRef<void___cdecl(UWorldSubsystem_*)> *param_1)

{
  UClass *pUVar1;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  pUVar1 = Z_Construct_UClass_UStreamingWorldSubsystemInterface_NoRegister();
  local_28 = *(undefined8 *)param_1;
  local_10 = &local_28;
  local_20 = *(undefined8 *)&param_1->field_0x8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FObjectSubsystemCollection<UWorldSubsystem>::ForEachSubsystemWithInterface<UStreamingWorldSubsystemInterface>'::__l2::<lambda_1>,void,USubsystem_*>
             ::Call;
  FSubsystemCollectionBase::ForEachSubsystemOfClass
            ((FSubsystemCollectionBase *)this,pUVar1,
             (TFunctionRef<void___cdecl(USubsystem_*)> *)&local_18);
  return;
}

