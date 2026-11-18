// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// FCameraShakeCameraNodeEvaluator @ 14d6559c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::FCameraShakeCameraNodeEvaluator
          (FCameraShakeCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->CameraShakeRootEvaluator = (FShakeCameraNodeEvaluator *)0x0;
  (this->CameraShakeService).Object = (FCameraShakeService *)0x0;
  (this->CameraShakeService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FCameraShakeCameraNodeEvaluator_Cameras_UE__6B_;
  this->EvaluationMode = VisualLayer;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsParameterUpdate);
  return this;
}

// ApplyParameterOverrides @ 14d65c520

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::ApplyParameterOverrides
          (FCameraShakeCameraNodeEvaluator *this,FCameraVariableTable *param_1,
          FCameraContextDataTable *param_2,bool param_3)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  if (this->_padding_ != 0) {
    pUVar2 = UCameraShakeCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d65c564;
    }
  }
  lVar3 = 0;
LAB_14d65c564:
  FCameraShakeAssetReference::ApplyParameterOverrides
            ((FCameraShakeAssetReference *)(lVar3 + 0x40),param_1,param_2,param_3);
  return;
}

// ApplyParameterOverrides @ 14d65c5a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::ApplyParameterOverrides
          (FCameraShakeCameraNodeEvaluator *this,FCameraVariableTable *param_1,bool param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  if (this->_padding_ != 0) {
    pUVar2 = UCameraShakeCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d65c5dc;
    }
  }
  lVar3 = 0;
LAB_14d65c5dc:
  FCameraShakeAssetReference::ApplyParameterOverrides
            ((FCameraShakeAssetReference *)(lVar3 + 0x40),param_1,param_2);
  return;
}

// GetTypeID @ 14d661b80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::GetTypeID(FCameraShakeCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662dc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::IsKindOf
          (FCameraShakeCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraShakeCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d663720

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::OnBuild
          (FCameraShakeCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  UCameraNode *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  FShakeCameraNodeEvaluator *pFVar4;
  longlong lVar5;
  
  if (this->_padding_ != 0) {
    pUVar3 = UCameraShakeCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar5 = this->_padding_;
      goto LAB_14d663759;
    }
  }
  lVar5 = 0;
LAB_14d663759:
  this->EvaluationMode = *(ECameraShakeEvaluationMode *)(lVar5 + 0x80);
  if (((*(char *)(lVar5 + 0x80) == '\0') && (*(longlong *)(lVar5 + 0x78) != 0)) &&
     (pUVar1 = *(UCameraNode **)(*(longlong *)(lVar5 + 0x78) + 0xc0), pUVar1 != (UCameraNode *)0x0))
  {
    pFVar4 = FCameraNodeEvaluatorBuildParams::
             BuildEvaluatorAs<UE::Cameras::FShakeCameraNodeEvaluator>(param_1,pUVar1);
    this->CameraShakeRootEvaluator = pFVar4;
  }
  return;
}

// OnGetChildren @ 14d667170

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::OnGetChildren
          (FCameraShakeCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FCameraNodeEvaluator *local_res8;
  FCameraNodeEvaluator *local_res10 [3];
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_18;
  
  local_res8 = (FCameraNodeEvaluator *)this->CameraShakeRootEvaluator;
  local_18._First = &local_res8;
  local_18._Last = local_res10;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// OnInitialize @ 14d667d60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::OnInitialize
          (FCameraShakeCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  TSharedPtr<UE::Cameras::FCameraShakeService,1> *pTVar5;
  FCameraShakeService *local_38;
  FSharedReferencer<1> FStack_30;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_28 [2];
  
  if (this->_padding_ != 0) {
    pUVar3 = UCameraShakeCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar4 = this->_padding_;
      goto LAB_14d667da2;
    }
  }
  lVar4 = 0;
LAB_14d667da2:
  FCameraShakeAssetReference::ApplyParameterOverrides
            ((FCameraShakeAssetReference *)(lVar4 + 0x40),&param_2->VariableTable,
             &param_2->ContextDataTable,false);
  if (this->EvaluationMode == VisualLayer) {
    FCameraSystemEvaluator::FindEvaluationService
              (param_1->Evaluator,local_28,
               (FCameraObjectTypeID *)&FCameraShakeService::PrivateTypeID);
    if ((FCameraShakeService *)local_28[0].Object == (FCameraShakeService *)0x0) {
      local_38 = (FCameraShakeService *)0x0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28[0].SharedReferenceCount.ReferenceController);
      local_28[0].Object = (FCameraEvaluationService *)0x0;
      local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_38 = (FCameraShakeService *)local_28[0].Object;
      FStack_30.ReferenceController = local_28[0].SharedReferenceCount.ReferenceController;
      if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
         ) {
        LOCK();
        (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
        ;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28[0].SharedReferenceCount.ReferenceController);
    }
    pTVar5 = &this->CameraShakeService;
    if (pTVar5 != (TSharedPtr<UE::Cameras::FCameraShakeService,1> *)&local_38) {
      pTVar5->Object = (FCameraShakeService *)local_28[0].Object;
      local_38 = (FCameraShakeService *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CameraShakeService).SharedReferenceCount,&FStack_30);
      local_28[0].SharedReferenceCount.ReferenceController = FStack_30.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    if (pTVar5->Object == (FCameraShakeService *)0x0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8576352750063845464>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Shakes\\CameraShakeCameraNode.cpp"
                         ,0x58,"CameraShakeService");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// OnRun @ 14d66bbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::OnRun
          (FCameraShakeCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  int iVar1;
  UCameraShakeAsset *pUVar2;
  FCameraShakeService *this_00;
  FCameraShakeServiceCameraNodeEvaluator *this_01;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FShakeEntry *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  FStartCameraShakeParams local_140;
  FCameraNodeShakeResult local_118;
  FCameraNodeShakeParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((FCameraNodeEvaluator *)this->CameraShakeRootEvaluator != (FCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluator::Run
              ((FCameraNodeEvaluator *)this->CameraShakeRootEvaluator,param_1,param_2);
    local_c8.UserPlaySpaceMatrix.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_c8.UserPlaySpaceMatrix.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_c8.UserPlaySpaceMatrix.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_c8.UserPlaySpaceMatrix.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_c8.UserPlaySpaceMatrix.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_c8.UserPlaySpaceMatrix.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_c8.UserPlaySpaceMatrix.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_c8.UserPlaySpaceMatrix.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_c8.UserPlaySpaceMatrix.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_c8.UserPlaySpaceMatrix.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_c8.UserPlaySpaceMatrix.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_c8.UserPlaySpaceMatrix.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_c8.UserPlaySpaceMatrix.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_c8.UserPlaySpaceMatrix.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_c8.UserPlaySpaceMatrix.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    local_c8.UserPlaySpaceMatrix.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_118.ShakeDelta.Location.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_118.ShakeDelta.Location.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_c8.ShakeScale = 1.0;
    local_c8.PlaySpace = CameraLocal;
    local_118.ShakeDelta.Location.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_118.ShakeDelta.Rotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_118.ShakeDelta.Rotation.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_118.ShakeDelta.Rotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_118.ShakeDelta.FieldOfView = 0.0;
    local_118.ShakeTimeLeft = 0.0;
    local_118.ShakenResult = param_2;
    local_c8.ChildParams = param_1;
    FShakeCameraNodeEvaluator::ShakeResult(this->CameraShakeRootEvaluator,&local_c8,&local_118);
    FCameraNodeShakeResult::ApplyDelta(&local_118,&local_c8);
    return;
  }
  if ((this->CameraShakeService).Object == (FCameraShakeService *)0x0) {
    return;
  }
  if (this->_padding_ != 0) {
    pUVar5 = UCameraShakeCameraNode::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
    if (bVar4) {
      lVar8 = this->_padding_;
      goto LAB_14d66bcea;
    }
  }
  lVar8 = 0;
LAB_14d66bcea:
  pUVar2 = *(UCameraShakeAsset **)(lVar8 + 0x78);
  local_140.ShakeScale = 1.0;
  local_140.PlaySpace = CameraLocal;
  local_140.CameraShake = pUVar2;
  if (((this->CameraShakeService).Object == (FCameraShakeService *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (this->CameraShakeService).Object;
  FCameraShakeService::EnsureShakeContextCreated(this_00);
  this_01 = this_00->ShakeEvaluator;
  if (this_01 == (FCameraShakeServiceCameraNodeEvaluator *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6255406376684618284>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraShakeService.cpp"
                       ,0x22c,"ShakeEvaluator");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (pUVar2 != (UCameraShakeAsset *)0x0) {
    pFVar7 = (this_01->Entries).AllocatorInstance.Data;
    iVar1 = (this_01->Entries).ArrayNum;
    pFVar9 = pFVar7 + (longlong)iVar1 * 0xb50;
    while( true ) {
      if ((this_01->Entries).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_148);
      }
      if (pFVar7 == pFVar9) {
        pFVar6 = FCameraShakeServiceCameraNodeEvaluator::AddCameraShake(this_01,&local_140);
        if (pFVar6 == (FShakeEntry *)0x0) {
          return;
        }
        pFVar6->NumRequests = '\x01';
        pFVar6->bPersistentRequest = false;
        return;
      }
      if (*(UCameraShakeAsset **)(pFVar7 + 0x18) == (UCameraShakeAsset *)0x0) {
        bVar4 = pUVar2 == (UCameraShakeAsset *)0x0;
      }
      else {
        bVar4 = *(UCameraShakeAsset **)(pFVar7 + 0x18) == pUVar2;
      }
      if ((bVar4) && (pFVar7[0xb41] == (FScriptContainerElement)0x0)) break;
      pFVar7 = pFVar7 + 0xb50;
    }
    pFVar7[0xb40] = (FScriptContainerElement)((char)pFVar7[0xb40] + '\x01');
  }
  return;
}

// OnUpdateParameters @ 14d66f1d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::OnUpdateParameters
          (FCameraShakeCameraNodeEvaluator *this,FCameraBlendedParameterUpdateParams *param_1,
          FCameraBlendedParameterUpdateResult *param_2)

{
  FCameraVariableTable *pFVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  pFVar1 = param_2->VariableTable;
  if (this->_padding_ != 0) {
    pUVar3 = UCameraShakeCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar4 = this->_padding_;
      goto LAB_14d66f203;
    }
  }
  lVar4 = 0;
LAB_14d66f203:
  FCameraShakeAssetReference::ApplyParameterOverrides
            ((FCameraShakeAssetReference *)(lVar4 + 0x40),pFVar1,false);
  return;
}

