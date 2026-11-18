// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e4c0

FCameraObjectTypeID * __thiscall
UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator::GetTypeID
          (FAttachToPlayerPawnCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621000

bool __thiscall
UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator::IsKindOf
          (FAttachToPlayerPawnCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d627c10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator::OnInitialize
          (FAttachToPlayerPawnCameraNodeEvaluator *this,
          FCameraNodeEvaluatorInitializeParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  APlayerController *this_00;
  APawn *this_01;
  USkeletalMeshComponent *pUVar4;
  FName FVar5;
  FStaticBasicLogRecord *pFVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ == 0) {
LAB_14d627c4e:
    lVar7 = 0;
  }
  else {
    pUVar3 = UAttachToPlayerPawnCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (!bVar2) goto LAB_14d627c4e;
    lVar7 = this->_padding_;
  }
  (this->AttachToLocationReader).DefaultValuePtr = (bool *)(lVar7 + 0x38);
  (this->AttachToLocationReader).VariableID.Value = *(uint *)(lVar7 + 0x3c);
  (this->AttachToRotationReader).DefaultValuePtr = (bool *)(lVar7 + 0x48);
  (this->AttachToRotationReader).VariableID.Value = *(uint *)(lVar7 + 0x4c);
  if ((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (APlayerController *)
            FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakPlayerController).
                                 WeakPtr);
  if (this_00 == (APlayerController *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) goto LAB_14d627ce6;
    pFVar6 = &::LOG_Static;
  }
  else {
    this_01 = APlayerController::GetPawnOrSpectator(this_00);
    if (this_01 != (APawn *)0x0) {
      if ((*(longlong *)(lVar7 + 0x58) != 0) || (*(longlong *)(lVar7 + 0x60) != 0)) {
        pUVar4 = AActor::FindComponentByClass<USkeletalMeshComponent>((AActor *)this_01);
        this->CachedSkeletalMeshComponent = pUVar4;
      }
      pUVar4 = this->CachedSkeletalMeshComponent;
      (this->CachedBoneName).ComparisonIndex = 0;
      (this->CachedBoneName).Number = 0;
      if ((pUVar4 != (USkeletalMeshComponent *)0x0) &&
         (this->CachedBoneName = *(FName *)(lVar7 + 0x60), *(longlong *)(lVar7 + 0x58) != 0)) {
        FVar5 = USkinnedMeshComponent::GetSocketBoneName
                          ((USkinnedMeshComponent *)pUVar4,(FName)local_res10);
        this->CachedBoneName = *(FName *)FVar5;
      }
      return;
    }
    if ((byte)LogCameraSystem._0_1_ < 2) goto LAB_14d627ce6;
    pFVar6 = &::LOG_Static;
  }
  Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogCameraSystem);
LAB_14d627ce6:
  this->bHasValidPlayerController = false;
  return;
}

// OnRun @ 14d629850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator::OnRun
          (FAttachToPlayerPawnCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  APlayerController *this_00;
  APawn *pAVar7;
  bool *pbVar8;
  TTransform<double> *pTVar9;
  TRotator<double> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_178 [32];
  TQuat<double> local_148;
  double local_118;
  TRotator<double> local_110 [5];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->bHasValidPlayerController != false) {
    if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (APlayerController *)
              FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakPlayerController).
                                   WeakPtr);
    if (this_00 == (APlayerController *)0x0) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1796958520726257566>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Attach\\AttachToPlayerPawnCameraNode.cpp"
                         ,0x62,"PlayerController");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this->bHasValidPlayerController = false;
    }
    else {
      pAVar7 = APlayerController::GetPawnOrSpectator(this_00);
      if (pAVar7 == (APawn *)0x0) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1796958520726257559>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Attach\\AttachToPlayerPawnCameraNode.cpp"
                           ,0x69,"Pawn");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        pbVar8 = TCameraParameterReader<bool>::Get
                           (&this->AttachToLocationReader,&param_2->VariableTable);
        bVar6 = *pbVar8;
        pbVar8 = TCameraParameterReader<bool>::Get
                           (&this->AttachToRotationReader,&param_2->VariableTable);
        bVar2 = *pbVar8;
        if (pAVar7->_padding_ == 0) {
          pTVar9 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar9 = (TTransform<double> *)(pAVar7->_padding_ + 0x1f0);
        }
        pUVar3 = this->CachedSkeletalMeshComponent;
        local_148.X._0_4_ = *(undefined4 *)(pTVar9->Rotation).XY.m128d_f64;
        local_148.X._4_4_ = *(undefined4 *)((longlong)(pTVar9->Rotation).XY.m128d_f64 + 4);
        local_148.Y._0_4_ = *(undefined4 *)((pTVar9->Rotation).XY.m128d_f64 + 1);
        local_148.Y._4_4_ = *(undefined4 *)((longlong)(pTVar9->Rotation).XY.m128d_f64 + 0xc);
        local_148.Z._0_4_ = *(undefined4 *)(pTVar9->Rotation).ZW.m128d_f64;
        local_148.Z._4_4_ = *(undefined4 *)((longlong)(pTVar9->Rotation).ZW.m128d_f64 + 4);
        local_148.W._0_4_ = *(undefined4 *)((pTVar9->Rotation).ZW.m128d_f64 + 1);
        local_148.W._4_4_ = *(undefined4 *)((longlong)(pTVar9->Rotation).ZW.m128d_f64 + 0xc);
        uVar11 = *(undefined4 *)(pTVar9->Translation).XY.m128d_f64;
        uVar12 = *(undefined4 *)((longlong)(pTVar9->Translation).XY.m128d_f64 + 4);
        uVar13 = *(undefined4 *)((pTVar9->Translation).XY.m128d_f64 + 1);
        uVar14 = *(undefined4 *)((longlong)(pTVar9->Translation).XY.m128d_f64 + 0xc);
        uVar15 = *(undefined4 *)(pTVar9->Translation).ZW.m128d_f64;
        uVar16 = *(undefined4 *)((longlong)(pTVar9->Translation).ZW.m128d_f64 + 4);
        if ((pUVar3 != (USkeletalMeshComponent *)0x0) && (this->CachedBoneName != (FName)0x0)) {
          (**(code **)(pUVar3->_padding_ + 0x520))(pUVar3,&local_98,this->CachedBoneName,0);
          uVar11 = local_78;
          uVar12 = uStack_74;
          uVar13 = uStack_70;
          uVar14 = uStack_6c;
          uVar15 = local_68;
          uVar16 = uStack_64;
          local_148.X._0_4_ = local_98;
          local_148.X._4_4_ = uStack_94;
          local_148.Y._0_4_ = uStack_90;
          local_148.Y._4_4_ = uStack_8c;
          local_148.Z._0_4_ = local_88;
          local_148.Z._4_4_ = uStack_84;
          local_148.W._0_4_ = uStack_80;
          local_148.W._4_4_ = uStack_7c;
        }
        if ((bVar6 != false) &&
           (((local_118 = (double)CONCAT44(uVar16,uVar15),
             (double)CONCAT44(uVar12,uVar11) != (param_2->CameraPose).Location.field0_0x0._s_0.X ||
             ((double)CONCAT44(uVar14,uVar13) != (param_2->CameraPose).Location.field0_0x0._s_0.Y))
            || (local_118 != (param_2->CameraPose).Location.field0_0x0._s_0.Z)))) {
          pFVar1->Location = true;
          *(undefined4 *)&(param_2->CameraPose).Location.field0_0x0 = uVar11;
          *(undefined4 *)((longlong)&(param_2->CameraPose).Location.field0_0x0 + 4) = uVar12;
          *(undefined4 *)((longlong)&(param_2->CameraPose).Location.field0_0x0 + 8) = uVar13;
          *(undefined4 *)((longlong)&(param_2->CameraPose).Location.field0_0x0 + 0xc) = uVar14;
          (param_2->CameraPose).Location.field0_0x0._s_0.Z = (double)CONCAT44(uVar16,uVar15);
        }
        if ((bVar2 != false) &&
           (((pTVar10 = UE::Math::TQuat<double>::Rotator(&local_148,local_110),
             pTVar10->Pitch != (param_2->CameraPose).Rotation.Pitch ||
             (pTVar10->Yaw != (param_2->CameraPose).Rotation.Yaw)) ||
            (pTVar10->Roll != (param_2->CameraPose).Rotation.Roll)))) {
          pFVar1->Rotation = true;
          dVar5 = pTVar10->Yaw;
          (param_2->CameraPose).Rotation.Pitch = pTVar10->Pitch;
          (param_2->CameraPose).Rotation.Yaw = dVar5;
          (param_2->CameraPose).Rotation.Roll = pTVar10->Roll;
        }
      }
    }
  }
  return;
}

