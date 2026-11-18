// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e4b0

FCameraObjectTypeID * __thiscall
UE::Cameras::FAttachToActorGroupCameraNodeEvaluator::GetTypeID
          (FAttachToActorGroupCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d620fe0

bool __thiscall
UE::Cameras::FAttachToActorGroupCameraNodeEvaluator::IsKindOf
          (FAttachToActorGroupCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FAttachToActorGroupCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d627b60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAttachToActorGroupCameraNodeEvaluator::OnInitialize
          (FAttachToActorGroupCameraNodeEvaluator *this,
          FCameraNodeEvaluatorInitializeParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  int iVar1;
  uint uVar2;
  FCameraActorAttachmentInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  undefined4 uStack_1c;
  TArrayView<FCameraActorAttachmentInfo_const_,int> local_18;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar6 = UAttachToActorGroupCameraNode::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar6);
    if (bVar5) {
      lVar7 = this->_padding_;
      goto LAB_14d627b9d;
    }
  }
  lVar7 = 0;
LAB_14d627b9d:
  pFVar3 = *(FCameraActorAttachmentInfo **)(lVar7 + 0x38);
  iVar1 = *(int *)(lVar7 + 0x40);
  uVar2 = *(uint *)(lVar7 + 0x48);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  (this->AttachmentsReader).DataID.Value = uVar2;
  local_18.DataPtr = pFVar3;
  FCameraActorAttachmentInfoArrayReader::CacheAttachmentInfos(&this->AttachmentsReader,&local_18);
  return;
}

// OnRun @ 14d629790

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAttachToActorGroupCameraNodeEvaluator::OnRun
          (FAttachToActorGroupCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  bool bVar2;
  TTransform<double> local_68;
  
  local_68.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_68.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_68.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  bVar2 = FCameraActorAttachmentInfoArrayReader::GetAttachmentTransform
                    (&this->AttachmentsReader,&param_2->ContextDataTable,&local_68);
  if (bVar2) {
    if (((local_68.Translation.XY.m128d_f64[0] != (param_2->CameraPose).Location.field0_0x0._s_0.X)
        || (local_68.Translation.XY.m128d_f64[1] != (param_2->CameraPose).Location.field0_0x0._s_0.Y
           )) || (local_68.Translation.ZW.m128d_f64[0] !=
                  (param_2->CameraPose).Location.field0_0x0._s_0.Z)) {
      pFVar1->Location = true;
      (param_2->CameraPose).Location.field0_0x0._s_0.X = local_68.Translation.XY.m128d_f64[0];
      (param_2->CameraPose).Location.field0_0x0._s_0.Y = local_68.Translation.XY.m128d_f64[1];
      (param_2->CameraPose).Location.field0_0x0._s_0.Z = local_68.Translation.ZW.m128d_f64[0];
    }
  }
  return;
}

