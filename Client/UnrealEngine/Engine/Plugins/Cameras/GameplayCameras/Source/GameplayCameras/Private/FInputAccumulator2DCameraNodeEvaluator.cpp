// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FInputAccumulator2DCameraNodeEvaluator @ 14d655a80

FInputAccumulator2DCameraNodeEvaluator * __thiscall
UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::FInputAccumulator2DCameraNodeEvaluator
          (FInputAccumulator2DCameraNodeEvaluator *this)

{
  FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator
            ((FCameraRigInput2DSlotEvaluator *)this);
  this->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  this->_padding_ = (longlong)&___7FInputAccumulator2DCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// GetTypeID @ 14d661c50

FCameraObjectTypeID * __thiscall
UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::GetTypeID
          (FInputAccumulator2DCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662fa0

bool __thiscall
UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::IsKindOf
          (FInputAccumulator2DCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if ((((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
       (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                 FCameraRigInput2DSlotEvaluator::PrivateTypeID)) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FInput2DCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d663a20

void __thiscall
UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::OnBuild
          (FInputAccumulator2DCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UClass *pUVar4;
  FInput2DCameraNodeEvaluator *pFVar5;
  longlong lVar6;
  
  if (this->_padding_ != 0) {
    pUVar4 = UInputAccumulator2DCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar2) {
      lVar6 = this->_padding_;
      goto LAB_14d663a59;
    }
  }
  lVar6 = 0;
LAB_14d663a59:
  pFVar5 = (FInput2DCameraNodeEvaluator *)
           FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,*(UCameraNode **)(lVar6 + 0xf0));
  if (pFVar5 == (FInput2DCameraNodeEvaluator *)0x0) {
    this->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
    return;
  }
  cVar3 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,&FInput2DCameraNodeEvaluator::PrivateTypeID);
  if (cVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                       ,0x123,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->InputSlotEvaluator = pFVar5;
  return;
}

// OnGetChildren @ 14d667510

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::OnGetChildren
          (FInputAccumulator2DCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FInput2DCameraNodeEvaluator *local_res8;
  FCameraNodeEvaluator *local_res10 [3];
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_18;
  
  local_res8 = this->InputSlotEvaluator;
  local_18._First = (FCameraNodeEvaluator **)&local_res8;
  local_18._Last = local_res10;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// OnRun @ 14d66d0f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::OnRun
          (FInputAccumulator2DCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  double dVar1;
  
  if (this->InputSlotEvaluator != (FInput2DCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->InputSlotEvaluator,param_1,param_2);
    dVar1 = (this->InputSlotEvaluator->InputValue).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)(this->InputSlotEvaluator->InputValue).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar1;
  }
  FCameraRigInput2DSlotEvaluator::OnRun((FCameraRigInput2DSlotEvaluator *)this,param_1,param_2);
  return;
}

