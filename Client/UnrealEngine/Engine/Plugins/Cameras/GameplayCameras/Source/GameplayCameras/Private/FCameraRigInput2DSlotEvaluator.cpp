// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// FCameraRigInput2DSlotEvaluator @ 14d655950

FCameraRigInput2DSlotEvaluator * __thiscall
UE::Cameras::FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator
          (FCameraRigInput2DSlotEvaluator *this)

{
  TVector2<double> TVar1;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  (this->RevertAxisXReader).DefaultValuePtr = (bool *)0x0;
  (this->RevertAxisYReader).DefaultValuePtr = (bool *)0x0;
  (this->SpeedReader).DefaultValuePtr = (TVector2<double> *)0x0;
  (this->RevertAxisXReader).VariableID.Value = 0xffffffff;
  (this->RevertAxisYReader).VariableID.Value = 0xffffffff;
  (this->SpeedReader).VariableID.Value = 0xffffffff;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FCameraRigInput2DSlotEvaluator_Cameras_UE__6B_;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->bIsAccumulated = true;
  (this->DeltaInputValue).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,Default);
  return this;
}

// GetTypeID @ 14d661b70

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraRigInput2DSlotEvaluator::GetTypeID(FCameraRigInput2DSlotEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662d90

bool __thiscall
UE::Cameras::FCameraRigInput2DSlotEvaluator::IsKindOf
          (FCameraRigInput2DSlotEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FInput2DCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnExecuteOperation @ 14d666de0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigInput2DSlotEvaluator::OnExecuteOperation
          (FCameraRigInput2DSlotEvaluator *this,FCameraOperationParams *param_1,
          FCameraOperation *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FCameraOperation *pFVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pFVar3 = (FCameraOperation *)0x0;
  if ((param_2->OperationTypeID).Value != 0) {
    param_2 = pFVar3;
  }
  if (param_2 != (FCameraOperation *)0x0) {
    if (this->_padding_ != 0) {
      pUVar2 = UCameraRigInput2DSlot::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
      if (bVar1) {
        pFVar3 = (FCameraOperation *)this->_padding_;
      }
    }
    uVar8 = SUB84(__real_ffefffffffffffff,0);
    uVar9 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    dVar4 = __real_ffefffffffffffff;
    if ((char)pFVar3[0x12].OperationTypeID.Value != '\0') {
      dVar4 = *(double *)(pFVar3 + 0xe);
    }
    uVar6 = SUB84(__real_7fefffffffffffff,0);
    uVar7 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    dVar5 = __real_7fefffffffffffff;
    if (*(char *)((longlong)&pFVar3[0x12].OperationTypeID.Value + 1) != '\0') {
      dVar5 = *(double *)(pFVar3 + 0x10);
    }
    if ((char)pFVar3[0x18].OperationTypeID.Value != '\0') {
      uVar8 = (undefined4)*(undefined8 *)(pFVar3 + 0x14);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(pFVar3 + 0x14) >> 0x20);
    }
    if (*(char *)((longlong)&pFVar3[0x18].OperationTypeID.Value + 1) != '\0') {
      uVar6 = (undefined4)*(undefined8 *)(pFVar3 + 0x16);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(pFVar3 + 0x16) >> 0x20);
    }
    dVar4 = TConsumableValue<double>::Apply
                      ((TConsumableValue<double> *)(param_2 + 2),(double)this->_padding_,dVar4,dVar5
                      );
    this->_padding_ = (longlong)dVar4;
    dVar4 = TConsumableValue<double>::Apply
                      ((TConsumableValue<double> *)(param_2 + 6),(double)this->_padding_,
                       (double)CONCAT44(uVar9,uVar8),(double)CONCAT44(uVar7,uVar6));
    this->_padding_ = (longlong)dVar4;
  }
  return;
}

// OnInitialize @ 14d667c90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigInput2DSlotEvaluator::OnInitialize
          (FCameraRigInput2DSlotEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraNodeEvaluationResult *pFVar1;
  double dVar2;
  bool bVar3;
  UClass *pUVar4;
  TVector2<double> *pTVar5;
  longlong lVar6;
  
  if (this->_padding_ != 0) {
    pUVar4 = UCameraRigInput2DSlot::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar6 = this->_padding_;
      goto LAB_14d667cc9;
    }
  }
  lVar6 = 0;
LAB_14d667cc9:
  (this->RevertAxisXReader).DefaultValuePtr = (bool *)(lVar6 + 0x88);
  (this->RevertAxisXReader).VariableID.Value = *(uint *)(lVar6 + 0x8c);
  (this->RevertAxisYReader).DefaultValuePtr = (bool *)(lVar6 + 0x98);
  (this->RevertAxisYReader).VariableID.Value = *(uint *)(lVar6 + 0x9c);
  (this->SpeedReader).DefaultValuePtr = (TVector2<double> *)(lVar6 + 0xa8);
  (this->SpeedReader).VariableID.Value = *(uint *)(lVar6 + 0xb8);
  (this->DeltaInputValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(TVector2<double>_u_0 *)&this->_padding_ =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if ((*(uint *)(lVar6 + 0xe8) != 0xffffffff) &&
     (pFVar1 = (param_1->LastActiveCameraRigInfo).LastResult,
     pFVar1 != (FCameraNodeEvaluationResult *)0x0)) {
    pTVar5 = FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                       (&pFVar1->VariableTable,(FCameraVariableID)*(uint *)(lVar6 + 0xe8));
    if (pTVar5 != (TVector2<double> *)0x0) {
      dVar2 = (pTVar5->field0_0x0)._s_0.Y;
      this->_padding_ = (longlong)(pTVar5->field0_0x0)._s_0.X;
      this->_padding_ = (longlong)dVar2;
    }
  }
  return;
}

// OnRun @ 14d66b860

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigInput2DSlotEvaluator::OnRun
          (FCameraRigInput2DSlotEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  UClass *pUVar5;
  FEntry *pFVar6;
  TVector2<double> *pTVar7;
  bool *pbVar8;
  longlong lVar9;
  FCameraVariableTable *this_00;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint local_res8 [2];
  uint *local_res10;
  FString local_68 [4];
  
  if (this->_padding_ == 0) {
LAB_14d66b8a9:
    lVar9 = 0;
  }
  else {
    pUVar5 = UCameraRigInput2DSlot::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
    if (!bVar4) goto LAB_14d66b8a9;
    lVar9 = this->_padding_;
  }
  this_00 = &param_2->VariableTable;
  if (*(char *)(lVar9 + 0xe0) == '\0') {
    pTVar7 = TCameraParameterReader<UE::Math::TVector2<double>_>::Get(&this->SpeedReader,this_00);
  }
  else {
    local_res8[0] = *(uint *)(lVar9 + 0xe4);
    pFVar6 = FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)local_res8[0]);
    if (pFVar6 == (FEntry *)0x0) {
      local_res10 = local_res8;
      bVar4 = `UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector2<double>_>'::__l3::
              <lambda_1>::operator()(&local_res10);
      if (!bVar4) {
        pTVar7 = &`public:_struct_UE::Math::TVector2<double>_const&___ptr64___cdecl_UE::Cameras::FCameraVariableTable::GetValue<UE::Math::TVector2<double>_>(FCameraVariableID)const___ptr64'
                  ::__l2::DefaultValue;
        goto LAB_14d66b9d1;
      }
    }
    if ((pFVar6->Type != Vector2d) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar6->Flags & Written) == None) {
      ::FString::PrintfImpl(local_68,L"%u");
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(Entry->Flags, EEntryFlags::Written)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0x12a,
                         L"Variable \'%s\' has never been written to. GetValue() will return uninitialized memory!"
                        );
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar7 = (TVector2<double> *)((param_2->VariableTable).Memory + pFVar6->Offset);
  }
LAB_14d66b9d1:
  dVar12 = (pTVar7->field0_0x0)._s_0.Y * (this->DeltaInputValue).field0_0x0._s_0.Y *
           (double)param_1->DeltaTime;
  dVar13 = (pTVar7->field0_0x0)._s_0.X * (this->DeltaInputValue).field0_0x0._s_0.X *
           (double)param_1->DeltaTime;
  if (((this->RevertAxisXReader).DefaultValuePtr == (bool *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->RevertAxisXReader).VariableID.Value == 0xffffffff) ||
     (pbVar8 = FCameraVariableTable::FindValue<bool>
                         (this_00,(FCameraVariableID)(this->RevertAxisXReader).VariableID.Value),
     pbVar8 == (bool *)0x0)) {
    pbVar8 = (this->RevertAxisXReader).DefaultValuePtr;
  }
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (*pbVar8 != false) {
    dVar13 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar15,SUB84(dVar13,0) ^ uVar14);
  }
  if (((this->RevertAxisYReader).DefaultValuePtr == (bool *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->RevertAxisYReader).VariableID.Value == 0xffffffff) ||
     (pbVar8 = FCameraVariableTable::FindValue<bool>
                         (this_00,(FCameraVariableID)(this->RevertAxisYReader).VariableID.Value),
     pbVar8 == (bool *)0x0)) {
    pbVar8 = (this->RevertAxisYReader).DefaultValuePtr;
  }
  if (*pbVar8 != false) {
    dVar12 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar15,SUB84(dVar12,0) ^ uVar14);
  }
  if (this->bIsAccumulated == false) {
    auVar3._8_4_ = SUB84(dVar12,0);
    auVar3._0_8_ = dVar13;
    auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    this->_padding_ = (longlong)dVar13;
    this->_padding_ = auVar3._8_8_;
  }
  else {
    this->_padding_ = (longlong)(dVar13 + (double)this->_padding_);
    this->_padding_ = (longlong)(dVar12 + (double)this->_padding_);
  }
  dVar12 = (double)this->_padding_;
  if ((*(char *)(lVar9 + 0x70) != '\0') &&
     (dVar12 = FGenericPlatformMath::Fmod(dVar12,*(double *)(lVar9 + 0x68)), dVar12 < 0.0)) {
    dVar12 = dVar12 + *(double *)(lVar9 + 0x68);
  }
  dVar13 = (double)this->_padding_;
  this->_padding_ = (longlong)dVar12;
  if ((*(char *)(lVar9 + 0x80) != '\0') &&
     (dVar13 = FGenericPlatformMath::Fmod(dVar13,*(double *)(lVar9 + 0x78)), dVar13 < 0.0)) {
    dVar13 = dVar13 + *(double *)(lVar9 + 0x78);
  }
  dVar12 = (double)this->_padding_;
  this->_padding_ = (longlong)dVar13;
  if ((*(char *)(lVar9 + 0x48) != '\0') && (dVar12 <= *(double *)(lVar9 + 0x38))) {
    dVar12 = *(double *)(lVar9 + 0x38);
  }
  if (*(char *)(lVar9 + 0x49) != '\0') {
    dVar1 = *(double *)(lVar9 + 0x40);
    uVar10 = SUB84(dVar1,0);
    uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (dVar12 <= dVar1) {
      uVar10 = SUB84(dVar12,0);
      uVar11 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    dVar12 = (double)CONCAT44(uVar11,uVar10);
  }
  this->_padding_ = (longlong)dVar12;
  if (*(char *)(lVar9 + 0x60) != '\0') {
    dVar12 = *(double *)(lVar9 + 0x50);
    uVar10 = SUB84(dVar12,0);
    uVar11 = (undefined4)((ulonglong)dVar12 >> 0x20);
    if (dVar12 <= dVar13) {
      uVar10 = SUB84(dVar13,0);
      uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
    }
    dVar13 = (double)CONCAT44(uVar11,uVar10);
  }
  if (*(char *)(lVar9 + 0x61) != '\0') {
    dVar12 = *(double *)(lVar9 + 0x58);
    uVar10 = SUB84(dVar12,0);
    uVar11 = (undefined4)((ulonglong)dVar12 >> 0x20);
    if (dVar13 <= dVar12) {
      uVar10 = SUB84(dVar13,0);
      uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
    }
    dVar13 = (double)CONCAT44(uVar11,uVar10);
  }
  this->_padding_ = (longlong)dVar13;
  FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>
            (this_00,(FCameraVariableID)*(uint *)(lVar9 + 0xe8),(TVector2<double> *)&this->_padding_
            );
  return;
}

// OnSerialize @ 14d66e4a0

void __thiscall
UE::Cameras::FCameraRigInput2DSlotEvaluator::OnSerialize
          (FCameraRigInput2DSlotEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  UE::Math::operator<<(param_2,(TVector2<double> *)&this->_padding_);
  UE::Math::operator<<(param_2,&this->DeltaInputValue);
  return;
}

// OnUpdateParameters @ 14d66f0e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigInput2DSlotEvaluator::OnUpdateParameters
          (FCameraRigInput2DSlotEvaluator *this,FCameraBlendedParameterUpdateParams *param_1,
          FCameraBlendedParameterUpdateResult *param_2)

{
  double *pdVar1;
  FCameraVariableTable *this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UClass *pUVar6;
  TVector2<double> *pTVar7;
  FEntry *pFVar8;
  longlong lVar9;
  uint local_res8 [2];
  uint *local_res20;
  
  if (this->_padding_ != 0) {
    pUVar6 = UCameraRigInput2DSlot::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar6);
    if (bVar5) {
      lVar9 = this->_padding_;
      goto LAB_14d66f119;
    }
  }
  lVar9 = 0;
LAB_14d66f119:
  if (*(char *)(lVar9 + 0xe0) != '\0') {
    pTVar7 = TCameraParameterReader<UE::Math::TVector2<double>_>::Get
                       (&this->SpeedReader,param_2->VariableTable);
    this_00 = param_2->VariableTable;
    local_res8[0] = *(uint *)(lVar9 + 0xe4);
    dVar3 = (pTVar7->field0_0x0)._s_0.X;
    dVar4 = (pTVar7->field0_0x0)._s_0.Y;
    pFVar8 = FCameraVariableTable::FindEntry(this_00,(FCameraVariableID)local_res8[0]);
    if (pFVar8 == (FEntry *)0x0) {
      local_res20 = local_res8;
      bVar5 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>'::__l3::
              <lambda_1>::operator()(&local_res20);
      if (!bVar5) {
        return;
      }
    }
    if ((pFVar8->Type != Vector2d) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pdVar1 = (double *)(this_00->Memory + pFVar8->Offset);
    *pdVar1 = dVar3;
    pdVar1[1] = dVar4;
    pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  }
  return;
}

