// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// FCameraRigInput1DSlotEvaluator @ 14d6558f0

FCameraRigInput1DSlotEvaluator * __thiscall
UE::Cameras::FCameraRigInput1DSlotEvaluator::FCameraRigInput1DSlotEvaluator
          (FCameraRigInput1DSlotEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  (this->RevertAxisReader).DefaultValuePtr = (bool *)0x0;
  (this->SpeedReader).DefaultValuePtr = (double *)0x0;
  this->DeltaInputValue = 0.0;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FCameraRigInput1DSlotEvaluator_Cameras_UE__6B_;
  (this->RevertAxisReader).VariableID.Value = 0xffffffff;
  (this->SpeedReader).VariableID.Value = 0xffffffff;
  this->bIsAccumulated = true;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,Default);
  return this;
}

// GetTypeID @ 14d661b60

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraRigInput1DSlotEvaluator::GetTypeID(FCameraRigInput1DSlotEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662d60

bool __thiscall
UE::Cameras::FCameraRigInput1DSlotEvaluator::IsKindOf
          (FCameraRigInput1DSlotEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FInput1DCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnExecuteOperation @ 14d666d40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigInput1DSlotEvaluator::OnExecuteOperation
          (FCameraRigInput1DSlotEvaluator *this,FCameraOperationParams *param_1,
          FCameraOperation *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FCameraOperation *pFVar3;
  double dVar4;
  double dVar5;
  
  pFVar3 = (FCameraOperation *)0x0;
  if ((param_2->OperationTypeID).Value != 1) {
    param_2 = pFVar3;
  }
  if (param_2 != (FCameraOperation *)0x0) {
    if (this->_padding_ != 0) {
      pUVar2 = UCameraRigInput1DSlot::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
      if (bVar1) {
        pFVar3 = (FCameraOperation *)this->_padding_;
      }
    }
    dVar4 = __real_ffefffffffffffff;
    if ((char)pFVar3[0x12].OperationTypeID.Value != '\0') {
      dVar4 = *(double *)(pFVar3 + 0xe);
    }
    dVar5 = __real_7fefffffffffffff;
    if (*(char *)((longlong)&pFVar3[0x12].OperationTypeID.Value + 1) != '\0') {
      dVar5 = *(double *)(pFVar3 + 0x10);
    }
    dVar4 = TConsumableValue<double>::Apply
                      ((TConsumableValue<double> *)(param_2 + 2),(double)this->_padding_,dVar4,dVar5
                      );
    this->_padding_ = (longlong)dVar4;
  }
  return;
}

// OnInitialize @ 14d667be0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigInput1DSlotEvaluator::OnInitialize
          (FCameraRigInput1DSlotEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  bool bVar2;
  UClass *pUVar3;
  double *pdVar4;
  longlong lVar5;
  
  if (this->_padding_ != 0) {
    pUVar3 = UCameraRigInput1DSlot::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar5 = this->_padding_;
      goto LAB_14d667c19;
    }
  }
  lVar5 = 0;
LAB_14d667c19:
  (this->RevertAxisReader).DefaultValuePtr = (bool *)(lVar5 + 0x60);
  (this->RevertAxisReader).VariableID.Value = *(uint *)(lVar5 + 100);
  (this->SpeedReader).DefaultValuePtr = (double *)(lVar5 + 0x70);
  (this->SpeedReader).VariableID.Value = *(uint *)(lVar5 + 0x78);
  this->DeltaInputValue = 0.0;
  this->_padding_ = 0;
  if ((*(uint *)(lVar5 + 0xa8) != 0xffffffff) &&
     (pFVar1 = (param_1->LastActiveCameraRigInfo).LastResult,
     pFVar1 != (FCameraNodeEvaluationResult *)0x0)) {
    pdVar4 = FCameraVariableTable::FindValue<double>
                       (&pFVar1->VariableTable,(FCameraVariableID)*(uint *)(lVar5 + 0xa8));
    if (pdVar4 != (double *)0x0) {
      this->_padding_ = (longlong)*pdVar4;
    }
  }
  return;
}

// OnRun @ 14d66b660

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigInput1DSlotEvaluator::OnRun
          (FCameraRigInput1DSlotEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FEntry *pFVar4;
  double *pdVar5;
  longlong lVar6;
  FCameraVariableTable *this_00;
  double dVar7;
  double dVar8;
  uint local_res8 [2];
  uint *local_res10;
  FString local_38;
  
  if (this->_padding_ == 0) {
LAB_14d66b698:
    lVar6 = 0;
  }
  else {
    pUVar3 = UCameraRigInput1DSlot::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (!bVar2) goto LAB_14d66b698;
    lVar6 = this->_padding_;
  }
  this_00 = &param_2->VariableTable;
  if (*(char *)(lVar6 + 0xa0) == '\0') {
    pdVar5 = TCameraParameterReader<double>::Get(&this->SpeedReader,this_00);
  }
  else {
    local_res8[0] = *(uint *)(lVar6 + 0xa4);
    pFVar4 = FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)local_res8[0]);
    if (pFVar4 == (FEntry *)0x0) {
      local_res10 = local_res8;
      bVar2 = `UE::Cameras::FCameraVariableTable::GetValue<double>'::__l3::<lambda_1>::operator()
                        (&local_res10);
      if (!bVar2) {
        pdVar5 = &`public:_double_const&___ptr64___cdecl_UE::Cameras::FCameraVariableTable::GetValue<double>(FCameraVariableID)const___ptr64'
                  ::__l2::DefaultValue;
        goto LAB_14d66b7c3;
      }
    }
    if ((pFVar4->Type != Double) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((pFVar4->Flags & Written) == None) {
      ::FString::PrintfImpl(&local_38,L"%u");
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(Entry->Flags, EEntryFlags::Written)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0x12a,
                         L"Variable \'%s\' has never been written to. GetValue() will return uninitialized memory!"
                        );
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pdVar5 = (double *)((param_2->VariableTable).Memory + pFVar4->Offset);
  }
LAB_14d66b7c3:
  dVar7 = this->DeltaInputValue * *pdVar5 * (double)param_1->DeltaTime;
  if (this->bIsAccumulated != false) {
    dVar7 = dVar7 + (double)this->_padding_;
  }
  this->_padding_ = (longlong)dVar7;
  if ((*(char *)(lVar6 + 0x58) != '\0') &&
     (dVar7 = FGenericPlatformMath::Fmod(dVar7,*(double *)(lVar6 + 0x50)), dVar7 < 0.0)) {
    dVar7 = dVar7 + *(double *)(lVar6 + 0x50);
  }
  this->_padding_ = (longlong)dVar7;
  dVar8 = dVar7;
  if ((*(char *)(lVar6 + 0x48) != '\0') &&
     (dVar8 = *(double *)(lVar6 + 0x38), *(double *)(lVar6 + 0x38) <= dVar7)) {
    dVar8 = dVar7;
  }
  dVar7 = dVar8;
  if ((*(char *)(lVar6 + 0x49) != '\0') &&
     (dVar7 = *(double *)(lVar6 + 0x40), dVar8 <= *(double *)(lVar6 + 0x40))) {
    dVar7 = dVar8;
  }
  this->_padding_ = (longlong)dVar7;
  FCameraVariableTable::SetValue<double>(this_00,(FCameraVariableID)*(uint *)(lVar6 + 0xa8),dVar7);
  return;
}

// OnSerialize @ 14d66e3d0

void __thiscall
UE::Cameras::FCameraRigInput1DSlotEvaluator::OnSerialize
          (FCameraRigInput1DSlotEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  double *pdVar3;
  
  plVar2 = (longlong *)**(longlong **)&param_2->field_0x8;
  if ((longlong *)(*(longlong **)&param_2->field_0x8)[1] < plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->_padding_,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)&this->_padding_);
    }
  }
  else {
    this->_padding_ = *plVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
  }
  pdVar1 = &this->DeltaInputValue;
  pdVar3 = (double *)**(longlong **)&param_2->field_0x8;
  if (pdVar3 + 1 <= (double *)(*(longlong **)&param_2->field_0x8)[1]) {
    *pdVar1 = *pdVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d66e47b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pdVar1,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)pdVar1);
  return;
}

// OnUpdateParameters @ 14d66f060

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigInput1DSlotEvaluator::OnUpdateParameters
          (FCameraRigInput1DSlotEvaluator *this,FCameraBlendedParameterUpdateParams *param_1,
          FCameraBlendedParameterUpdateResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  double *pdVar3;
  longlong lVar4;
  
  if (this->_padding_ != 0) {
    pUVar2 = UCameraRigInput1DSlot::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar4 = this->_padding_;
      goto LAB_14d66f099;
    }
  }
  lVar4 = 0;
LAB_14d66f099:
  if (*(char *)(lVar4 + 0xa0) != '\0') {
    pdVar3 = TCameraParameterReader<double>::Get(&this->SpeedReader,param_2->VariableTable);
    FCameraVariableTable::SetValue<double>
              (param_2->VariableTable,(FCameraVariableID)*(uint *)(lVar4 + 0xa4),*pdVar3);
  }
  return;
}

