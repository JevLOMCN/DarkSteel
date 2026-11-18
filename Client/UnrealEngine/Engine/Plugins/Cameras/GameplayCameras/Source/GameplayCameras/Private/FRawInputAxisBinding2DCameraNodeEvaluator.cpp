// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d661cf0

FCameraObjectTypeID * __thiscall
UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator::GetTypeID
          (FRawInputAxisBinding2DCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d663130

bool __thiscall
UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator::IsKindOf
          (FRawInputAxisBinding2DCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

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

// OnInitialize @ 14d668990

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator::OnInitialize
          (FRawInputAxisBinding2DCameraNodeEvaluator *this,
          FCameraNodeEvaluatorInitializeParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  UEnhancedInputComponent *pUVar3;
  UCameraNode *pUVar4;
  
  if (this->_padding_ != 0) {
    pUVar2 = URawInputAxisBinding2DCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      pUVar4 = (UCameraNode *)this->_padding_;
      goto LAB_14d6689ce;
    }
  }
  pUVar4 = (UCameraNode *)0x0;
LAB_14d6689ce:
  (this->MultiplierReader).DefaultValuePtr = (TVector2<double> *)&pUVar4[1]._padding_;
  (this->MultiplierReader).VariableID.Value = (uint)pUVar4[1]._padding_;
  pUVar3 = FInputAxisBindingHelpers::FindInputComponent(param_1);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnhancedInputComponent *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->InputComponent).field0_0x0.DebugPtr = pUVar3;
  FInputAxisBindingHelpers::BindActionValues
            (param_1,pUVar4,pUVar3,
             (TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_> *)(pUVar4 + 1),
             &this->AxisValueBindings);
  return;
}

// OnRun @ 14d66da90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator::OnRun
          (FRawInputAxisBinding2DCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TVector2<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_res8 [8];
  
  if ((this->MultiplierReader).DefaultValuePtr == (TVector2<double> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->MultiplierReader).VariableID.Value != 0xffffffff) {
    pTVar8 = FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->MultiplierReader).VariableID.Value);
    if (pTVar8 != (TVector2<double> *)0x0) goto LAB_14d66db0a;
  }
  pTVar8 = (this->MultiplierReader).DefaultValuePtr;
LAB_14d66db0a:
  pFVar9 = (this->AxisValueBindings).AllocatorInstance.Data;
  iVar3 = (this->AxisValueBindings).ArrayNum;
  dVar5 = (pTVar8->field0_0x0)._s_0.X;
  dVar6 = (pTVar8->field0_0x0)._s_0.Y;
  uVar10 = SUB84(UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar11 = (undefined4)((ulonglong)UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  uVar12 = SUB84(UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar13 = (undefined4)((ulonglong)UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  pFVar1 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AxisValueBindings).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FEnhancedInputActionValueBinding_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if (*(longlong *)pFVar9 != 0) {
      auVar2 = *(undefined1 (*) [16])(*(longlong *)pFVar9 + 0x18);
      if (0.0 < auVar2._8_8_ * auVar2._8_8_ + auVar2._0_8_ * auVar2._0_8_) {
        uVar10 = auVar2._0_4_;
        uVar11 = auVar2._4_4_;
        uVar12 = auVar2._8_4_;
        uVar13 = auVar2._12_4_;
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  this->_padding_ = (longlong)((double)CONCAT44(uVar11,uVar10) * dVar5);
  this->_padding_ = (longlong)((double)CONCAT44(uVar13,uVar12) * dVar6);
  return;
}

