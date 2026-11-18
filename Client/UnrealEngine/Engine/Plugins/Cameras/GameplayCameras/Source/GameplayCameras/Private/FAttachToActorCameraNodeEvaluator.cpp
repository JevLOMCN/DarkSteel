// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// GetTypeID @ 14d61e4a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FAttachToActorCameraNodeEvaluator::GetTypeID(FAttachToActorCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d620fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FAttachToActorCameraNodeEvaluator::IsKindOf
          (FAttachToActorCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FAttachToActorCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d624200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAttachToActorCameraNodeEvaluator::OnBuildDebugBlocks
          (FAttachToActorCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  AActor *pAVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> TVar6;
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> TVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> TVar11;
  double dVar12;
  FCameraDebugBlock *pFVar13;
  TTransform<double> *pTVar14;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar13 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      (this_00,0xa0,0x10);
  pFVar13[1]._padding_ = 0;
  pFVar13[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &pFVar13[3].Children;
  pFVar13[1].Attachments.ArrayNum = 0;
  pFVar13[1].Attachments.ArrayMax = 0;
  pFVar13[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar13[1].Children.ArrayNum = 0;
  pFVar13[1].Children.ArrayMax = 0;
  pFVar13[2]._padding_ = 0;
  pFVar13[2].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar13[2].Attachments.ArrayNum = 0;
  pFVar13[2].Attachments.ArrayMax = 0;
  pFVar13[2].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar13[2].Children.ArrayNum = 0;
  pFVar13[2].Children.ArrayMax = 0;
  pFVar13[3]._padding_ = 0;
  pFVar13[3].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar13[3].Attachments.ArrayNum = 0;
  pFVar13[3].Attachments.ArrayMax = 0;
  pFVar13[3].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar13[3].Children.ArrayNum = 0;
  pFVar13[3].Children.ArrayMax = 0;
  pFVar13->_padding_ = (longlong)&___7FAttachToActorCameraDebugBlock_Cameras_UE__6B_;
  (pFVar13->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar13->Attachments).ArrayNum = 0;
  (pFVar13->Attachments).ArrayMax = 0;
  (pFVar13->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar13->Children).ArrayNum = 0;
  (pFVar13->Children).ArrayMax = 0;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  TVar6.ArrayNum = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TVar6.AllocatorInstance.Data =
       (FScriptContainerElement *)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  TVar6.ArrayMax = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  pFVar13[1].Attachments = TVar6;
  TVar7.ArrayNum = SUB84((double)fVar5,0);
  TVar7.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar4;
  TVar7.ArrayMax = (int)((ulonglong)(double)fVar5 >> 0x20);
  pFVar13[1].Children = TVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  pFVar13[2]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
  pFVar13[2].Attachments.AllocatorInstance = (ForAnyElementType)auVar8._8_8_;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])&pFVar13[2].Attachments.ArrayNum = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&pFVar13[2].Children.ArrayNum = auVar10;
  TVar11.ArrayNum = SUB84((double)fVar5,0);
  TVar11.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar4;
  TVar11.ArrayMax = (int)((ulonglong)(double)fVar5 >> 0x20);
  pFVar13[3].Attachments = TVar11;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar13[3].Children.ArrayNum = 0;
  pFVar13[3].Children.ArrayMax = 0;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar13);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar13);
  pTVar14 = &UE::Math::TTransform<double>::Identity;
  if ((this->LastAttachTransform).bIsSet != false) {
    pTVar14 = &(this->LastAttachTransform).TypedValue;
  }
  dVar12 = (((TTransform<double> *)&pTVar14->Rotation)->Rotation).XY.m128d_f64[1];
  pFVar13[1].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((TTransform<double> *)&pTVar14->Rotation)->Rotation).XY.m128d_f64[0];
  *(double *)&pFVar13[1].Attachments.ArrayNum = dVar12;
  dVar12 = (((TTransform<double> *)&pTVar14->Rotation)->Rotation).ZW.m128d_f64[1];
  pFVar13[1].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((TTransform<double> *)&pTVar14->Rotation)->Rotation).ZW.m128d_f64[0];
  *(double *)&pFVar13[1].Children.ArrayNum = dVar12;
  pFVar3 = (FScriptContainerElement *)
           (((TTransform<double> *)&pTVar14->Rotation)->Translation).XY.m128d_f64[1];
  pFVar13[2]._padding_ =
       (longlong)(((TTransform<double> *)&pTVar14->Rotation)->Translation).XY.m128d_f64[0];
  pFVar13[2].Attachments.AllocatorInstance.Data = pFVar3;
  pFVar3 = (FScriptContainerElement *)
           (((TTransform<double> *)&pTVar14->Rotation)->Translation).ZW.m128d_f64[1];
  *(double *)&pFVar13[2].Attachments.ArrayNum =
       (((TTransform<double> *)&pTVar14->Rotation)->Translation).ZW.m128d_f64[0];
  pFVar13[2].Children.AllocatorInstance.Data = pFVar3;
  dVar12 = (((TTransform<double> *)&pTVar14->Rotation)->Scale3D).XY.m128d_f64[1];
  *(double *)&pFVar13[2].Children.ArrayNum =
       (((TTransform<double> *)&pTVar14->Rotation)->Scale3D).XY.m128d_f64[0];
  pFVar13[3]._padding_ = (longlong)dVar12;
  dVar12 = (((TTransform<double> *)&pTVar14->Rotation)->Scale3D).ZW.m128d_f64[1];
  pFVar13[3].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((TTransform<double> *)&pTVar14->Rotation)->Scale3D).ZW.m128d_f64[0];
  *(double *)&pFVar13[3].Attachments.ArrayNum = dVar12;
  ::FName::ToString(&(this->AttachmentReader).CachedBoneName,&local_28);
  pAVar2 = (this->AttachmentReader).CachedAttachmentInfo.Actor.field0_0x0.DebugPtr;
  if (pAVar2 == (AActor *)0x0) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    local_res8 = (FName)pAVar2->_padding_;
    ::FName::ToString(&local_res8,&local_38);
  }
  ::FString::PrintfImpl(&local_48,L"Actor \'%s\' (Bone \'%s\')");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pTVar1 != (TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&local_48) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data.AllocatorInstance.Data;
    pFVar13[3].Children.ArrayNum = local_48.Data.ArrayNum;
    pFVar13[3].Children.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// OnInitialize @ 14d627a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAttachToActorCameraNodeEvaluator::OnInitialize
          (FAttachToActorCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  uint uVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsSerialize);
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar3 = UAttachToActorCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar3);
    if (bVar2) {
      lVar4 = *(longlong *)&this->field_0x10;
      goto LAB_14d627ad6;
    }
  }
  lVar4 = 0;
LAB_14d627ad6:
  uVar1 = *(uint *)(lVar4 + 0x58);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(lVar4 + 0x38) != (UObject *)0x0)) {
    GC::MarkAsReachable(*(UObject **)(lVar4 + 0x38));
  }
  (this->AttachmentReader).DefaultAttachmentInfo.Actor.field0_0x0 =
       *(TObjectPtr<AActor>_u_0 *)(lVar4 + 0x38);
  (this->AttachmentReader).DefaultAttachmentInfo.SocketName = *(FName *)(lVar4 + 0x40);
  (this->AttachmentReader).DefaultAttachmentInfo.BoneName = *(FName *)(lVar4 + 0x48);
  (this->AttachmentReader).DefaultAttachmentInfo.Weight = *(float *)(lVar4 + 0x50);
  (this->AttachmentReader).DataID.Value = uVar1;
  FCameraActorAttachmentInfoReader::CacheAttachmentInfo
            (&this->AttachmentReader,&(this->AttachmentReader).DefaultAttachmentInfo);
  (this->AttachToLocationReader).DefaultValuePtr = (bool *)(lVar4 + 0x60);
  (this->AttachToLocationReader).VariableID.Value = *(uint *)(lVar4 + 100);
  (this->AttachToRotationReader).DefaultValuePtr = (bool *)(lVar4 + 0x70);
  (this->AttachToRotationReader).VariableID.Value = *(uint *)(lVar4 + 0x74);
  return;
}

// OnRun @ 14d6294c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAttachToActorCameraNodeEvaluator::OnRun
          (FAttachToActorCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool *pbVar5;
  TTransform<double> local_c8;
  TRotator<double> local_68;
  TQuat<double> local_48;
  double local_18;
  
  bVar4 = this->bIsAttachValid;
  local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  bVar3 = FCameraActorAttachmentInfoReader::GetAttachmentTransform
                    (&this->AttachmentReader,&param_2->ContextDataTable,&local_c8);
  this->bIsAttachValid = bVar3;
  if (!bVar3) {
    if ((bVar4 != false) && (2 < (byte)LogCameraSystem._0_1_)) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    }
    if ((this->LastAttachTransform).bIsSet == false) {
      return;
    }
    local_c8.Rotation.XY.m128d_f64 = *&(this->LastAttachTransform).TypedValue.Rotation.XY.m128d_f64;
    local_c8.Rotation.ZW.m128d_f64 = *&(this->LastAttachTransform).TypedValue.Rotation.ZW.m128d_f64;
    local_c8.Translation.XY.m128d_f64 =
         *&(this->LastAttachTransform).TypedValue.Translation.XY.m128d_f64;
    local_c8.Translation.ZW.m128d_f64 =
         *&(this->LastAttachTransform).TypedValue.Translation.ZW.m128d_f64;
    local_c8.Scale3D.XY.m128d_f64 = *&(this->LastAttachTransform).TypedValue.Scale3D.XY.m128d_f64;
    local_c8.Scale3D.ZW.m128d_f64 = *&(this->LastAttachTransform).TypedValue.Scale3D.ZW.m128d_f64;
  }
  if (((this->AttachToLocationReader).DefaultValuePtr == (bool *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->AttachToLocationReader).VariableID.Value == 0xffffffff) ||
     (pbVar5 = FCameraVariableTable::FindValue<bool>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->AttachToLocationReader).VariableID.Value),
     pbVar5 == (bool *)0x0)) {
    pbVar5 = (this->AttachToLocationReader).DefaultValuePtr;
  }
  bVar4 = *pbVar5;
  if (((this->AttachToRotationReader).DefaultValuePtr == (bool *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->AttachToRotationReader).VariableID.Value == 0xffffffff) ||
     (pbVar5 = FCameraVariableTable::FindValue<bool>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->AttachToRotationReader).VariableID.Value),
     pbVar5 == (bool *)0x0)) {
    pbVar5 = (this->AttachToRotationReader).DefaultValuePtr;
  }
  bVar3 = *pbVar5;
  if (bVar4 != false) {
    local_18 = local_c8.Translation.ZW.m128d_f64[0];
    if (((local_c8.Translation.XY.m128d_f64[0] != (param_2->CameraPose).Location.field0_0x0._s_0.X)
        || (local_c8.Translation.XY.m128d_f64[1] != (param_2->CameraPose).Location.field0_0x0._s_0.Y
           )) || (local_c8.Translation.ZW.m128d_f64[0] !=
                  (param_2->CameraPose).Location.field0_0x0._s_0.Z)) {
      pFVar1->Location = true;
      (param_2->CameraPose).Location.field0_0x0._s_0.X = local_c8.Translation.XY.m128d_f64[0];
      (param_2->CameraPose).Location.field0_0x0._s_0.Y = local_c8.Translation.XY.m128d_f64[1];
      (param_2->CameraPose).Location.field0_0x0._s_0.Z = local_c8.Translation.ZW.m128d_f64[0];
    }
  }
  if (bVar3 != false) {
    local_48.X = local_c8.Rotation.XY.m128d_f64[0];
    local_48.Y = local_c8.Rotation.XY.m128d_f64[1];
    local_48.Z = local_c8.Rotation.ZW.m128d_f64[0];
    local_48.W = local_c8.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_48,&local_68);
    if (((local_68.Pitch != (param_2->CameraPose).Rotation.Pitch) ||
        (local_68.Yaw != (param_2->CameraPose).Rotation.Yaw)) ||
       (local_68.Roll != (param_2->CameraPose).Rotation.Roll)) {
      pFVar1->Rotation = true;
      (param_2->CameraPose).Rotation.Pitch = local_68.Pitch;
      (param_2->CameraPose).Rotation.Yaw = local_68.Yaw;
      (param_2->CameraPose).Rotation.Roll = local_68.Roll;
    }
  }
  if ((this->bIsAttachValid != false) &&
     ((TOptional<UE::Math::TTransform<double>_> *)&local_c8 != &this->LastAttachTransform)) {
    (this->LastAttachTransform).TypedValue.Rotation.XY.m128d_f64[0] =
         local_c8.Rotation.XY.m128d_f64[0];
    (this->LastAttachTransform).TypedValue.Rotation.XY.m128d_f64[1] =
         local_c8.Rotation.XY.m128d_f64[1];
    (this->LastAttachTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
         local_c8.Rotation.ZW.m128d_f64[0];
    (this->LastAttachTransform).TypedValue.Rotation.ZW.m128d_f64[1] =
         local_c8.Rotation.ZW.m128d_f64[1];
    (this->LastAttachTransform).TypedValue.Translation.XY.m128d_f64[0] =
         local_c8.Translation.XY.m128d_f64[0];
    (this->LastAttachTransform).TypedValue.Translation.XY.m128d_f64[1] =
         local_c8.Translation.XY.m128d_f64[1];
    (this->LastAttachTransform).TypedValue.Translation.ZW.m128d_f64[0] =
         local_c8.Translation.ZW.m128d_f64[0];
    (this->LastAttachTransform).TypedValue.Translation.ZW.m128d_f64[1] =
         local_c8.Translation.ZW.m128d_f64[1];
    (this->LastAttachTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
         local_c8.Scale3D.XY.m128d_f64[0];
    (this->LastAttachTransform).TypedValue.Scale3D.XY.m128d_f64[1] =
         local_c8.Scale3D.XY.m128d_f64[1];
    (this->LastAttachTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
         local_c8.Scale3D.ZW.m128d_f64[0];
    (this->LastAttachTransform).TypedValue.Scale3D.ZW.m128d_f64[1] =
         local_c8.Scale3D.ZW.m128d_f64[1];
    (this->LastAttachTransform).bIsSet = true;
  }
  return;
}

// OnSerialize @ 14d62d6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAttachToActorCameraNodeEvaluator::OnSerialize
          (FAttachToActorCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  TOptional<UE::Math::TTransform<double>_>::Serialize(&this->LastAttachTransform,param_2);
  ::operator<<(param_2,&this->bIsAttachValid);
  return;
}

