// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 7

// StaticStruct @ 14a873730

UScriptStruct * __cdecl FEvaluateChooser::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEvaluateChooser,(UObject *)pUVar1,
                         L"EvaluateChooser");
  }
  return Z_Registration_Info_UScriptStruct_FEvaluateChooser.OuterSingleton;
}

// ChooseObject @ 14a873770

void __thiscall
FEvaluateChooser::ChooseObject
          (FEvaluateChooser *this,FChooserEvaluationContext *param_1,
          TSoftObjectPtr<UObject> *param_2)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__AEBU__TSoftObjectPtr_VUObject_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy,`FEvaluateChooser::ChooseObject'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = param_2;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  UChooserTable::EvaluateChooser
            (param_1,(this->Chooser).field0_0x0.DebugPtr,
             (TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
              *)local_48);
  return;
}

// ChooseObject @ 14a873830

UObject * __thiscall
FEvaluateChooser::ChooseObject(FEvaluateChooser *this,FChooserEvaluationContext *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UObject *local_res8;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  local_res8 = (UObject *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy,`FEvaluateChooser::ChooseObject'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = &local_res8;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  UChooserTable::EvaluateChooser
            (param_1,(this->Chooser).field0_0x0.DebugPtr,
             (TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
              *)local_48);
  return local_res8;
}

// ChooseMulti @ 14a873900

EIteratorStatus __thiscall
FEvaluateChooser::ChooseMulti
          (FEvaluateChooser *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  EIteratorStatus EVar1;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *pTVar2;
  undefined1 local_28 [32];
  
  pTVar2 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           ::
           TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                     (local_28,param_2);
  EVar1 = UChooserTable::EvaluateChooser(param_1,(this->Chooser).field0_0x0.DebugPtr,pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return EVar1;
}

// ChooseMulti @ 14a873960

EIteratorStatus __thiscall
FEvaluateChooser::ChooseMulti
          (FEvaluateChooser *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  EIteratorStatus EVar1;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  undefined1 local_28 [32];
  
  pTVar2 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
                     (local_28,param_2);
  EVar1 = UChooserTable::EvaluateChooser(param_1,(this->Chooser).field0_0x0.DebugPtr,pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return EVar1;
}

// IterateObjects @ 14a8739c0

EIteratorStatus __thiscall
FEvaluateChooser::IterateObjects
          (FEvaluateChooser *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  EIteratorStatus EVar1;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *pTVar2;
  undefined1 local_28 [32];
  
  pTVar2 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           ::
           TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                     (local_28,param_2);
  EVar1 = UChooserTable::IterateChooser(param_1,(this->Chooser).field0_0x0.DebugPtr,pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return EVar1;
}

// GetDebugName @ 14a873a20

void __thiscall FEvaluateChooser::GetDebugName(FEvaluateChooser *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_res8 [4];
  FString local_18;
  
  if ((this->Chooser).field0_0x0.DebugPtr != (UChooserTable *)0x0) {
    local_res8[0] = UE::CoreUObject::Private::GetFName((UObject *)(local_res8 + 2));
    local_res8[0] = *(FName *)local_res8[0];
    ::FName::ToString(local_res8,&local_18);
    if (param_1 != &local_18) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_18.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

