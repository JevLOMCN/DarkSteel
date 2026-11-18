// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// FSplineOrbitCameraNodeEvaluator @ 14d5fd090

FSplineOrbitCameraNodeEvaluator * __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::FSplineOrbitCameraNodeEvaluator
          (FSplineOrbitCameraNodeEvaluator *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->field_0x8 = 1;
  *(undefined ***)this = &___7FSplineOrbitCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  this->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  *(undefined4 *)&this->field_0x18 = 7;
  this->LocationOffsetSpline[0].CompressionFormat = '\0';
  this->LocationOffsetSpline[0].KeyTimeCompressionFormat = '\x01';
  this->LocationOffsetSpline[0].PreInfinityExtrap = '\x05';
  this->LocationOffsetSpline[0].PostInfinityExtrap = '\x05';
  this->LocationOffsetSpline[0].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->LocationOffsetSpline[0].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->LocationOffsetSpline[0].CompressedKeys.ArrayNum = 0;
  this->LocationOffsetSpline[0].CompressedKeys.ArrayMax = 0;
  this->LocationOffsetSpline[1].CompressionFormat = '\0';
  this->LocationOffsetSpline[1].KeyTimeCompressionFormat = '\x01';
  this->LocationOffsetSpline[1].PreInfinityExtrap = '\x05';
  this->LocationOffsetSpline[1].PostInfinityExtrap = '\x05';
  this->LocationOffsetSpline[1].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->LocationOffsetSpline[1].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->LocationOffsetSpline[1].CompressedKeys.ArrayNum = 0;
  this->LocationOffsetSpline[1].CompressedKeys.ArrayMax = 0;
  this->LocationOffsetSpline[2].CompressionFormat = '\0';
  this->LocationOffsetSpline[2].KeyTimeCompressionFormat = '\x01';
  this->LocationOffsetSpline[2].PreInfinityExtrap = '\x05';
  this->LocationOffsetSpline[2].PostInfinityExtrap = '\x05';
  this->LocationOffsetSpline[2].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->LocationOffsetSpline[2].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->LocationOffsetSpline[2].CompressedKeys.ArrayNum = 0;
  this->LocationOffsetSpline[2].CompressedKeys.ArrayMax = 0;
  this->TargetOffsetSpline[0].CompressionFormat = '\0';
  this->TargetOffsetSpline[0].KeyTimeCompressionFormat = '\x01';
  this->TargetOffsetSpline[0].PreInfinityExtrap = '\x05';
  this->TargetOffsetSpline[0].PostInfinityExtrap = '\x05';
  this->TargetOffsetSpline[0].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->TargetOffsetSpline[0].CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->TargetOffsetSpline[0].CompressedKeys.ArrayNum = 0;
  this->TargetOffsetSpline[0].CompressedKeys.ArrayMax = 0;
  this->TargetOffsetSpline[1].CompressionFormat = '\0';
  this->TargetOffsetSpline[1].KeyTimeCompressionFormat = '\x01';
  this->TargetOffsetSpline[1].PreInfinityExtrap = '\x05';
  this->TargetOffsetSpline[1].PostInfinityExtrap = '\x05';
  this->TargetOffsetSpline[1].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->TargetOffsetSpline[1].CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->TargetOffsetSpline[1].CompressedKeys.ArrayNum = 0;
  this->TargetOffsetSpline[1].CompressedKeys.ArrayMax = 0;
  this->TargetOffsetSpline[2].CompressionFormat = '\0';
  this->TargetOffsetSpline[2].KeyTimeCompressionFormat = '\x01';
  this->TargetOffsetSpline[2].PreInfinityExtrap = '\x05';
  this->TargetOffsetSpline[2].PostInfinityExtrap = '\x05';
  this->TargetOffsetSpline[2].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->TargetOffsetSpline[2].CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->TargetOffsetSpline[2].CompressedKeys.ArrayNum = 0;
  this->TargetOffsetSpline[2].CompressedKeys.ArrayMax = 0;
  this->RotationOffsetSpline[0].CompressionFormat = '\0';
  this->RotationOffsetSpline[0].KeyTimeCompressionFormat = '\x01';
  this->RotationOffsetSpline[0].PreInfinityExtrap = '\x05';
  this->RotationOffsetSpline[0].PostInfinityExtrap = '\x05';
  this->RotationOffsetSpline[0].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->RotationOffsetSpline[0].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->RotationOffsetSpline[0].CompressedKeys.ArrayNum = 0;
  this->RotationOffsetSpline[0].CompressedKeys.ArrayMax = 0;
  this->RotationOffsetSpline[1].CompressionFormat = '\0';
  this->RotationOffsetSpline[1].KeyTimeCompressionFormat = '\x01';
  this->RotationOffsetSpline[1].PreInfinityExtrap = '\x05';
  this->RotationOffsetSpline[1].PostInfinityExtrap = '\x05';
  this->RotationOffsetSpline[1].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->RotationOffsetSpline[1].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->RotationOffsetSpline[1].CompressedKeys.ArrayNum = 0;
  this->RotationOffsetSpline[1].CompressedKeys.ArrayMax = 0;
  this->RotationOffsetSpline[2].CompressionFormat = '\0';
  this->RotationOffsetSpline[2].KeyTimeCompressionFormat = '\x01';
  this->RotationOffsetSpline[2].PreInfinityExtrap = '\x05';
  this->RotationOffsetSpline[2].PostInfinityExtrap = '\x05';
  this->RotationOffsetSpline[2].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->RotationOffsetSpline[2].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->RotationOffsetSpline[2].CompressedKeys.ArrayNum = 0;
  this->RotationOffsetSpline[2].CompressedKeys.ArrayMax = 0;
  (this->LocationOffsetMultiplierReader).DefaultValuePtr = (float *)0x0;
  (this->LocationOffsetMultiplierReader).VariableID.Value = 0xffffffff;
  this->bHasAnyTargetOffset = false;
  this->bHasAnyRotationOffset = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->DebugPivotTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->DebugPivotTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->DebugPivotTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DebugPivotTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->DebugPivotTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->DebugPivotTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->DebugPivotTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DebugPivotTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->DebugPivotTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->DebugPivotTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->DebugPivotTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->DebugPivotTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~FSplineOrbitCameraNodeEvaluator @ 14d6004f0

void __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::~FSplineOrbitCameraNodeEvaluator
          (FSplineOrbitCameraNodeEvaluator *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FSplineOrbitCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1 = this->RotationOffsetSpline[2].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->RotationOffsetSpline[1].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->RotationOffsetSpline[0].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->TargetOffsetSpline[2].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->TargetOffsetSpline[1].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->TargetOffsetSpline[0].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->LocationOffsetSpline[2].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->LocationOffsetSpline[1].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->LocationOffsetSpline[0].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetPlayerController @ 14d61b0c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::GetPlayerController
          (FSplineOrbitCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  APlayerController *pAVar1;
  
  if (param_1->Object != (FCameraEvaluationContext *)0x0) {
    pAVar1 = (APlayerController *)
             FWeakObjectPtr::Get(&(param_1->Object->WeakPlayerController).WeakPtr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return pAVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (APlayerController *)0x0;
}

// GetTypeID @ 14d61e740

FCameraObjectTypeID * __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::GetTypeID(FSplineOrbitCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6215b0

bool __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::IsKindOf
          (FSplineOrbitCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FSplineOrbitCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d624060

void __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::OnBuild
          (FSplineOrbitCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UClass *pUVar4;
  FInput2DCameraNodeEvaluator *pFVar5;
  longlong lVar6;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar4 = USplineOrbitCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar4);
    if (bVar2) {
      lVar6 = *(longlong *)&this->field_0x10;
      goto LAB_14d624099;
    }
  }
  lVar6 = 0;
LAB_14d624099:
  pFVar5 = (FInput2DCameraNodeEvaluator *)
           FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,*(UCameraNode **)(lVar6 + 0x4d0))
  ;
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

// OnBuildDebugBlocks @ 14d624b40

void __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::OnBuildDebugBlocks
          (FSplineOrbitCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  float fVar1;
  float fVar2;
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> TVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> TVar7;
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> TVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  bool bVar11;
  FCameraDebugBlock *pFVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  UObject *local_res8;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar12 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      (this_00,0xf0,0x10);
  memset(pFVar12 + 1,0,200);
  pUVar14 = (UObject *)0x0;
  pFVar12->_padding_ = (longlong)&___7FSplineOrbitCameraDebugBlock_Cameras_UE__6B_;
  (pFVar12->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar12->Attachments).ArrayNum = 0;
  (pFVar12->Attachments).ArrayMax = 0;
  (pFVar12->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar12->Children).ArrayNum = 0;
  (pFVar12->Children).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  TVar3.ArrayNum = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TVar3.AllocatorInstance.Data =
       (FScriptContainerElement *)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  TVar3.ArrayMax = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  pFVar12[1].Children = TVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  pFVar12[2]._padding_ = (longlong)(double)fVar1;
  pFVar12[2].Attachments.AllocatorInstance = (ForAnyElementType)auVar4._8_8_;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&pFVar12[2].Attachments.ArrayNum = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])&pFVar12[2].Children.ArrayNum = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  TVar7.ArrayNum = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TVar7.AllocatorInstance.Data =
       (FScriptContainerElement *)(double)GlobalVectorConstants::Float1110.m128_f32[0];
  TVar7.ArrayMax = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  pFVar12[3].Attachments = TVar7;
  TVar8.ArrayNum = SUB84((double)fVar2,0);
  TVar8.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar1;
  TVar8.ArrayMax = (int)((ulonglong)(double)fVar2 >> 0x20);
  pFVar12[3].Children = TVar8;
  pFVar12[5].Children.ArrayNum = 0;
  pFVar12[5].Children.ArrayMax = 0;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar12);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar12);
  pFVar9 = (FScriptContainerElement *)(this->DebugYawPitch).field0_0x0._s_0.Y;
  pFVar12[1]._padding_ = (longlong)(this->DebugYawPitch).field0_0x0._s_0.X;
  pFVar12[1].Attachments.AllocatorInstance.Data = pFVar9;
  dVar10 = (this->DebugPivotTransform).Rotation.XY.m128d_f64[1];
  pFVar12[1].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugPivotTransform).Rotation.XY.m128d_f64[0];
  *(double *)&pFVar12[1].Children.ArrayNum = dVar10;
  pFVar9 = (FScriptContainerElement *)(this->DebugPivotTransform).Rotation.ZW.m128d_f64[1];
  pFVar12[2]._padding_ = (longlong)(this->DebugPivotTransform).Rotation.ZW.m128d_f64[0];
  pFVar12[2].Attachments.AllocatorInstance.Data = pFVar9;
  pFVar9 = (FScriptContainerElement *)(this->DebugPivotTransform).Translation.XY.m128d_f64[1];
  *(double *)&pFVar12[2].Attachments.ArrayNum =
       (this->DebugPivotTransform).Translation.XY.m128d_f64[0];
  pFVar12[2].Children.AllocatorInstance.Data = pFVar9;
  dVar10 = (this->DebugPivotTransform).Translation.ZW.m128d_f64[1];
  *(double *)&pFVar12[2].Children.ArrayNum = (this->DebugPivotTransform).Translation.ZW.m128d_f64[0]
  ;
  pFVar12[3]._padding_ = (longlong)dVar10;
  dVar10 = (this->DebugPivotTransform).Scale3D.XY.m128d_f64[1];
  pFVar12[3].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugPivotTransform).Scale3D.XY.m128d_f64[0];
  *(double *)&pFVar12[3].Attachments.ArrayNum = dVar10;
  dVar10 = (this->DebugPivotTransform).Scale3D.ZW.m128d_f64[1];
  pFVar12[3].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugPivotTransform).Scale3D.ZW.m128d_f64[0];
  *(double *)&pFVar12[3].Children.ArrayNum = dVar10;
  pFVar9 = (FScriptContainerElement *)(this->DebugLocationOffset).field0_0x0._s_0.Y;
  pFVar12[4]._padding_ = (longlong)(this->DebugLocationOffset).field0_0x0._s_0.X;
  pFVar12[4].Attachments.AllocatorInstance.Data = pFVar9;
  *(double *)&pFVar12[4].Attachments.ArrayNum = (this->DebugLocationOffset).field0_0x0._s_0.Z;
  dVar10 = (this->DebugWorldTargetOffset).field0_0x0._s_0.Y;
  pFVar12[4].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugWorldTargetOffset).field0_0x0._s_0.X;
  *(double *)&pFVar12[4].Children.ArrayNum = dVar10;
  pFVar12[5]._padding_ = (longlong)(this->DebugWorldTargetOffset).field0_0x0._s_0.Z;
  dVar10 = (this->DebugRotationOffset).Yaw;
  pFVar12[5].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugRotationOffset).Pitch;
  *(double *)&pFVar12[5].Attachments.ArrayNum = dVar10;
  pFVar12[5].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugRotationOffset).Roll;
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar13 = USplineOrbitCameraNode::StaticClass();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar13);
    if (bVar11) {
      pUVar14 = *(UObject **)&this->field_0x10;
    }
  }
  local_res8 = pUVar14;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar14);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar12[5].Children.ArrayNum,(FObjectPtr)&local_res8)
  ;
  return;
}

// OnExecuteOperation @ 14d627470

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::OnExecuteOperation
          (FSplineOrbitCameraNodeEvaluator *this,FCameraOperationParams *param_1,
          FCameraOperation *param_2)

{
  FCameraEvaluationContext *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  UObject *pUVar3;
  double dVar4;
  double dVar5;
  double local_28;
  double local_20;
  
  if (this->InputSlotEvaluator == (FInput2DCameraNodeEvaluator *)0x0) {
    pUVar3 = (UObject *)0x0;
    if ((param_2->OperationTypeID).Value != 0) {
      param_2 = (FCameraOperation *)pUVar3;
    }
    if ((UObject *)param_2 != (UObject *)0x0) {
      pFVar1 = (param_1->EvaluationContext).Object;
      pTVar2 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 != (FCameraEvaluationContext *)0x0) {
        pUVar3 = FWeakObjectPtr::Get(&(pFVar1->WeakPlayerController).WeakPtr);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pUVar3 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar3 + 0x7a8))(pUVar3,&local_28);
        dVar4 = local_20;
        if (((UObject *)param_2)->field_0x10 != '\0') {
          dVar4 = *(double *)&((UObject *)param_2)->field_0x8;
          *(undefined8 *)&((UObject *)param_2)->field_0x8 = 0;
          ((UObject *)param_2)->field_0x10 = 0;
          if (((UObject *)param_2)->field_0x11 != '\0') {
            dVar4 = local_20 + dVar4;
          }
        }
        dVar5 = local_28;
        if (((UObject *)param_2)->field_0x20 != '\0') {
          dVar5 = *(double *)&((UObject *)param_2)->field_0x18;
          *(undefined8 *)&((UObject *)param_2)->field_0x18 = 0;
          ((UObject *)param_2)->field_0x20 = 0;
          if (((UObject *)param_2)->field_0x21 != '\0') {
            dVar5 = local_28 + dVar5;
          }
        }
        local_28 = dVar5;
        local_20 = dVar4;
        (**(code **)(*(longlong *)pUVar3 + 0x7b0))(pUVar3,&local_28);
      }
    }
  }
  return;
}

// OnGetChildren @ 14d6277f0

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::OnGetChildren
          (FSplineOrbitCameraNodeEvaluator *this,
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

// OnInitialize @ 14d628e20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::OnInitialize
          (FSplineOrbitCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  longlong lVar6;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,SupportsOperations);
  lVar6 = 0;
  lVar5 = lVar6;
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar4 = USplineOrbitCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar4);
    if (bVar3) {
      lVar5 = *(longlong *)&this->field_0x10;
    }
  }
  bVar3 = FCameraVectorCurve::HasAnyData((FCameraVectorCurve *)(lVar5 + 0x1b8));
  this->bHasAnyTargetOffset = bVar3;
  bVar3 = FCameraRotatorCurve::HasAnyData((FCameraRotatorCurve *)(lVar5 + 0x338));
  fVar2 = __real_42f00000;
  fVar1 = __real_38d1b717;
  this->bHasAnyRotationOffset = bVar3;
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x38),this->LocationOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0xb8),this->LocationOffsetSpline + 1,fVar1,fVar2)
  ;
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar5 + 0x138),this->LocationOffsetSpline + 2,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x1b8),this->TargetOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x238),this->TargetOffsetSpline + 1,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x2b8),this->TargetOffsetSpline + 2,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x338),this->RotationOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar5 + 0x3b8),this->RotationOffsetSpline + 1,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar5 + 0x438),this->RotationOffsetSpline + 2,fVar1,fVar2);
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar4 = USplineOrbitCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar4);
    if (bVar3) {
      lVar6 = *(longlong *)&this->field_0x10;
    }
  }
  (this->LocationOffsetMultiplierReader).DefaultValuePtr = (float *)(lVar6 + 0x4b8);
  (this->LocationOffsetMultiplierReader).VariableID.Value = *(uint *)(lVar6 + 0x4bc);
  return;
}

// OnRun @ 14d62c940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::OnRun
          (FSplineOrbitCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraEvaluationContext *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  TQuat<double> *pTVar11;
  float *pfVar12;
  TRotator<double> *pTVar13;
  UObject *pUVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  TVector2<double>_u_0_s_0 in_XMM1;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auStackY_5f8 [32];
  undefined1 local_5c8 [16];
  double local_5b8;
  TVector<double>_u_0 local_5b0;
  TVector<double>_u_0 local_598;
  FCameraNodeSpaceParams local_580;
  undefined8 local_570;
  undefined8 uStack_568;
  double local_560;
  TVector<double>_u_0 local_558;
  TVector<double>_u_0 local_540;
  TVector<double>_u_0 local_528;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4e8;
  double local_4c0;
  TRotator<double> local_4b8 [2];
  double local_488;
  double dStack_480;
  double local_478;
  TQuat<double> local_468;
  TQuat<double> local_448;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  double local_418;
  TRotator<double> local_410;
  TTransform<double> local_3f8;
  double local_398;
  double dStack_390;
  double local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  TRotator<double> local_360;
  TRotator<double> local_348;
  TQuat<double> local_328;
  TQuat<double> local_308;
  TQuat<double> local_2e8;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  pUVar14 = (UObject *)0x0;
  local_5c8._8_8_ = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_5c8._0_8_ = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_5b8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  if (this->InputSlotEvaluator == (FInput2DCameraNodeEvaluator *)0x0) {
    pFVar1 = (param_1->EvaluationContext).Object;
    pTVar2 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar9 = pUVar14;
    if (pFVar1 != (FCameraEvaluationContext *)0x0) {
      pUVar9 = FWeakObjectPtr::Get(&(pFVar1->WeakPlayerController).WeakPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pUVar9 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar9 + 0x7a8))(pUVar9,&local_570);
      local_5c8._8_8_ = uStack_568;
      local_5c8._0_8_ = local_570;
      local_5b8 = local_560;
    }
  }
  else {
    FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->InputSlotEvaluator,param_1,param_2);
    in_XMM1 = (this->InputSlotEvaluator->InputValue).field0_0x0._s_0;
    local_5b8 = 0.0;
    local_5c8._0_8_ = in_XMM1.Y;
    local_5c8._8_8_ = in_XMM1.X;
  }
  auVar22 = divpd(local_5c8,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar22 = roundpd((undefined1  [16])in_XMM1,auVar22,3);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_5b8;
  dVar33 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar28._0_8_ = auVar22._0_8_ * dVar33;
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar28._8_8_ = auVar22._8_8_ * dVar6;
  auVar22 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar35 = local_5c8._0_8_ - auVar28._0_8_;
  dVar37 = local_5c8._8_8_ - auVar28._8_8_;
  auVar22 = roundpd(auVar28,auVar22,3);
  auVar24._8_4_ = SUB84(dVar37,0);
  auVar24._0_8_ = dVar35;
  auVar24._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar27 = auVar24._8_8_ + dVar6;
  local_5b8 = local_5b8 - auVar22._0_8_ * dVar5;
  dVar4 = 0.0 - auVar22._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar15 = -(ulonglong)(0.0 <= dVar35);
  uVar16 = -(ulonglong)(0.0 <= dVar37);
  auVar29._0_8_ = uVar15 & (ulonglong)dVar35;
  auVar29._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar37);
  auVar29._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar37) >> 0x20);
  auVar34._0_4_ = ~(uint)uVar15 & SUB84(dVar35 + dVar33,0);
  auVar34._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar33) >> 0x20);
  auVar34._8_4_ = ~(uint)uVar16 & SUB84(dVar27,0);
  auVar34._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
  auVar25._8_4_ = SUB84(dVar4,0);
  auVar25._0_8_ = local_5b8;
  auVar25._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar34 = auVar34 | auVar29;
  uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar34._0_8_);
  uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar34._8_8_);
  dVar27 = auVar25._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar15 = -(ulonglong)(0.0 <= local_5b8);
  uVar18 = -(ulonglong)(0.0 <= dVar4);
  auVar36._0_4_ = ~(uint)uVar15 & SUB84(local_5b8 + dVar5,0);
  auVar36._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(local_5b8 + dVar5) >> 0x20);
  auVar36._8_4_ = ~(uint)uVar18 & SUB84(dVar27,0);
  auVar36._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
  auVar22._8_4_ = (int)((ulonglong)dVar4 & uVar18);
  auVar22._0_8_ = (ulonglong)local_5b8 & uVar15;
  auVar22._12_4_ = (int)(((ulonglong)dVar4 & uVar18) >> 0x20);
  auVar36 = auVar36 | auVar22;
  uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar36._0_8_);
  auVar26._0_8_ = (ulonglong)(auVar34._0_8_ - dVar33) & uVar16;
  uVar15 = uVar17 & (ulonglong)(auVar34._8_8_ - dVar6);
  auVar26._8_4_ = (undefined4)uVar15;
  auVar26._12_4_ = (undefined4)(uVar15 >> 0x20);
  auVar30._0_4_ = ~(uint)uVar16 & auVar34._0_4_;
  auVar30._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar34._4_4_;
  auVar30._8_4_ = ~(uint)uVar17 & auVar34._8_4_;
  auVar30._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar34._12_4_;
  local_5c8 = auVar26 | auVar30;
  local_5b8 = (double)(uVar18 & (ulonglong)(auVar36._0_8_ - dVar5) |
                      CONCAT44(~(uint)(uVar18 >> 0x20) & auVar36._4_4_,~(uint)uVar18 & auVar36._0_4_
                              ));
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar10 = USplineOrbitCameraNode::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar10);
    if (bVar8) {
      pUVar14 = *(UObject **)&this->field_0x10;
    }
  }
  uVar31 = *(undefined4 *)&(param_2->CameraPose).Location.field0_0x0;
  uVar32 = *(undefined4 *)((longlong)&(param_2->CameraPose).Location.field0_0x0 + 4);
  uVar38 = *(undefined4 *)((longlong)&(param_2->CameraPose).Location.field0_0x0 + 8);
  uVar39 = *(undefined4 *)((longlong)&(param_2->CameraPose).Location.field0_0x0 + 0xc);
  dVar4 = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
  local_428 = uVar31;
  uStack_424 = uVar32;
  uStack_420 = uVar38;
  uStack_41c = uVar39;
  pTVar11 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_5c8,&local_328);
  local_388 = pTVar11->Z;
  uStack_380 = *(undefined4 *)&pTVar11->W;
  uStack_37c = *(undefined4 *)((longlong)&pTVar11->W + 4);
  local_398 = pTVar11->X;
  dStack_390 = pTVar11->Y;
  local_268.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_268.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_268.Translation.ZW.m128d_f64[1] = 0.0;
  local_268.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_268.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_418 = dVar4;
  local_268.Rotation.XY.m128d_f64[0] = local_398;
  local_268.Rotation.XY.m128d_f64[1] = dStack_390;
  local_268.Rotation.ZW.m128d_f64[0] = local_388;
  local_268.Rotation.ZW.m128d_f64[1]._0_4_ = uStack_380;
  local_268.Rotation.ZW.m128d_f64[1]._4_4_ = uStack_37c;
  local_268.Translation.XY.m128d_f64[0]._0_4_ = uVar31;
  local_268.Translation.XY.m128d_f64[0]._4_4_ = uVar32;
  local_268.Translation.XY.m128d_f64[1]._0_4_ = uVar38;
  local_268.Translation.XY.m128d_f64[1]._4_4_ = uVar39;
  local_268.Translation.ZW.m128d_f64[0] = dVar4;
  fVar19 = FCompressedRichCurve::Eval
                     (this->LocationOffsetSpline + 2,(float)(double)local_5c8._0_8_,0.0);
  fVar20 = FCompressedRichCurve::Eval
                     (this->LocationOffsetSpline + 1,(float)(double)local_5c8._0_8_,0.0);
  fVar21 = FCompressedRichCurve::Eval(this->LocationOffsetSpline,(float)(double)local_5c8._0_8_,0.0)
  ;
  if (((this->LocationOffsetMultiplierReader).DefaultValuePtr == (float *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->LocationOffsetMultiplierReader).VariableID.Value == 0xffffffff) ||
     (pfVar12 = FCameraVariableTable::FindValue<float>
                          (&param_2->VariableTable,
                           (FCameraVariableID)
                           (this->LocationOffsetMultiplierReader).VariableID.Value),
     pfVar12 == (float *)0x0)) {
    pfVar12 = (this->LocationOffsetMultiplierReader).DefaultValuePtr;
  }
  uVar31 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1a8.Translation.ZW.m128d_f64[0] = (double)*pfVar12;
  local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar31;
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar32;
  local_1a8.Translation.XY.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[0] * (double)fVar20;
  local_1a8.Translation.XY.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0] * (double)fVar21;
  local_1a8.Translation.ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0] * (double)fVar19;
  local_2c8.Rotation.XY.m128d_f64[1]._0_4_ = uVar31;
  local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2c8.Rotation.XY.m128d_f64[1]._4_4_ = uVar32;
  local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar31;
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar32;
  local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar31;
  local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar32;
  local_1a8.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
  local_1a8.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
  local_1a8.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
  local_1a8.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
  UE::Math::TTransform<double>::Multiply(&local_2c8,&local_1a8,&local_268);
  (this->DebugYawPitch).field0_0x0._s_0.X = (double)local_5c8._8_8_;
  (this->DebugYawPitch).field0_0x0._s_0.Y = (double)local_5c8._0_8_;
  (this->DebugPivotTransform).Rotation.XY.m128d_f64[0] = local_268.Rotation.XY.m128d_f64[0];
  (this->DebugPivotTransform).Rotation.XY.m128d_f64[1] = local_268.Rotation.XY.m128d_f64[1];
  (this->DebugPivotTransform).Rotation.ZW.m128d_f64[0] = local_268.Rotation.ZW.m128d_f64[0];
  (this->DebugPivotTransform).Rotation.ZW.m128d_f64[1] =
       (double)CONCAT44(local_268.Rotation.ZW.m128d_f64[1]._4_4_,
                        local_268.Rotation.ZW.m128d_f64[1]._0_4_);
  (this->DebugPivotTransform).Translation.XY.m128d_f64[0] =
       (double)CONCAT44(local_268.Translation.XY.m128d_f64[0]._4_4_,
                        local_268.Translation.XY.m128d_f64[0]._0_4_);
  (this->DebugPivotTransform).Translation.XY.m128d_f64[1] =
       (double)CONCAT44(local_268.Translation.XY.m128d_f64[1]._4_4_,
                        local_268.Translation.XY.m128d_f64[1]._0_4_);
  (this->DebugPivotTransform).Translation.ZW.m128d_f64[0] = local_268.Translation.ZW.m128d_f64[0];
  (this->DebugPivotTransform).Translation.ZW.m128d_f64[1] = local_268.Translation.ZW.m128d_f64[1];
  (this->DebugPivotTransform).Scale3D.XY.m128d_f64[0] = local_268.Scale3D.XY.m128d_f64[0];
  (this->DebugPivotTransform).Scale3D.XY.m128d_f64[1] = local_268.Scale3D.XY.m128d_f64[1];
  (this->DebugPivotTransform).Scale3D.ZW.m128d_f64[0] = local_268.Scale3D.ZW.m128d_f64[0];
  (this->DebugPivotTransform).Scale3D.ZW.m128d_f64[1] = local_268.Scale3D.ZW.m128d_f64[1];
  (this->DebugLocationOffset).field0_0x0._s_0.X = (double)fVar21;
  (this->DebugLocationOffset).field0_0x0._s_0.Y = (double)fVar20;
  (this->DebugLocationOffset).field0_0x0._s_0.Z = (double)fVar19;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar4 = __real_3f1a36e2e0000000;
  uVar41 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  bVar8 = this->bHasAnyTargetOffset;
  (this->DebugWorldTargetOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DebugWorldTargetOffset).field0_0x0._s_0.Y = (double)uVar7;
  (this->DebugWorldTargetOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar33 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DebugRotationOffset).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DebugRotationOffset).Yaw = dVar33;
  (this->DebugRotationOffset).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  if (bVar8 != false) {
    fVar19 = FCompressedRichCurve::Eval
                       (this->TargetOffsetSpline + 2,(float)(double)local_5c8._0_8_,0.0);
    dVar33 = (double)fVar19;
    fVar19 = FCompressedRichCurve::Eval
                       (this->TargetOffsetSpline + 1,(float)(double)local_5c8._0_8_,0.0);
    dVar6 = (double)fVar19;
    fVar19 = FCompressedRichCurve::Eval(this->TargetOffsetSpline,(float)(double)local_5c8._0_8_,0.0)
    ;
    local_558._s_0.X = (double)fVar19;
    local_558._s_0.Y = dVar6;
    local_558._s_0.Z = dVar33;
    if (((dVar4 < (double)CONCAT44((uint)((ulonglong)local_558._s_0.X >> 0x20) & uVar41,
                                   SUB84(local_558._s_0.X,0) & uVar40)) ||
        (uVar42 = SUB84(dVar6,0) & uVar40, uVar43 = (uint)((ulonglong)dVar6 >> 0x20) & uVar41,
        dVar4 <= (double)CONCAT44(uVar43,uVar42) && (double)CONCAT44(uVar43,uVar42) != dVar4)) ||
       (uVar42 = SUB84(dVar33,0) & uVar40, uVar43 = (uint)((ulonglong)dVar33 >> 0x20) & uVar41,
       dVar4 <= (double)CONCAT44(uVar43,uVar42) && (double)CONCAT44(uVar43,uVar42) != dVar4)) {
      local_468.X = local_2c8.Rotation.XY.m128d_f64[0];
      local_468.Y = local_2c8.Rotation.XY.m128d_f64[1];
      local_508._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_508._s_0.Y = _UNK_150689518;
      local_508._s_0.Z = 0.0;
      local_468.Z = local_2c8.Rotation.ZW.m128d_f64[0];
      local_468.W = local_2c8.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::RotateVector
                (&local_468,(TVector<double> *)&local_4e8._s_0,(TVector<double> *)&local_508._s_0);
      dVar5 = local_2c8.Translation.XY.m128d_f64[1];
      dVar6 = local_2c8.Translation.XY.m128d_f64[0];
      local_4c0 = local_2c8.Translation.ZW.m128d_f64[0];
      local_478 = local_4e8._s_0.Z;
      local_488 = local_4e8._s_0.X;
      dStack_480 = local_4e8._s_0.Y;
      dVar33 = local_4e8._s_0.Y * local_4e8._s_0.Y + local_4e8._s_0.X * local_4e8._s_0.X +
               local_4e8._s_0.Z * local_4e8._s_0.Z;
      if (__real_3e45798ee0000000 < dVar33) {
        dVar33 = __real_3ff0000000000000 / SQRT(dVar33);
        local_4e8._s_0.X = local_4e8._s_0.X * dVar33;
        local_4e8._s_0.Y = local_4e8._s_0.Y * dVar33;
        local_4e8._s_0.Z = local_4e8._s_0.Z * dVar33;
      }
      dVar33 = ((double)CONCAT44(local_268.Translation.XY.m128d_f64[1]._4_4_,
                                 local_268.Translation.XY.m128d_f64[1]._0_4_) -
               local_2c8.Translation.XY.m128d_f64[1]) * local_4e8._s_0.Y +
               ((double)CONCAT44(local_268.Translation.XY.m128d_f64[0]._4_4_,
                                 local_268.Translation.XY.m128d_f64[0]._0_4_) -
               local_2c8.Translation.XY.m128d_f64[0]) * local_4e8._s_0.X +
               (local_268.Translation.ZW.m128d_f64[0] - local_2c8.Translation.ZW.m128d_f64[0]) *
               local_4e8._s_0.Z;
      dVar27 = local_2c8.Translation.XY.m128d_f64[0];
      dVar35 = local_2c8.Translation.XY.m128d_f64[1];
      dVar37 = local_2c8.Translation.ZW.m128d_f64[0];
      if (0.0 <= dVar33) {
        dVar27 = local_4e8._s_0.X * dVar33 + local_2c8.Translation.XY.m128d_f64[0];
        dVar35 = local_4e8._s_0.Y * dVar33 + local_2c8.Translation.XY.m128d_f64[1];
        dVar37 = local_4e8._s_0.Z * dVar33 + local_2c8.Translation.ZW.m128d_f64[0];
      }
      local_5b0._s_0.X = dVar27;
      local_5b0._s_0.Y = dVar35;
      local_5b0._s_0.Z = dVar37;
      local_580.EvaluationParams = param_1;
      local_580.EvaluationResult = param_2;
      FCameraNodeSpaceMath::OffsetCameraNodeSpacePosition
                (&local_580,(TVector<double> *)&local_5b0._s_0,(TVector<double> *)&local_558._s_0,
                 pUVar14[0x1e].field_0x18,(TVector<double> *)&local_540._s_0);
      local_528._s_0.X = local_540._s_0.X - dVar6;
      local_528._s_0.Y = local_540._s_0.Y - dVar5;
      local_528._s_0.Z = local_540._s_0.Z - local_4c0;
      UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_528._s_0,local_4b8);
      local_448.X = local_2c8.Rotation.XY.m128d_f64[0];
      local_448.Y = local_2c8.Rotation.XY.m128d_f64[1];
      local_448.Z = local_2c8.Rotation.ZW.m128d_f64[0];
      local_448.W = local_2c8.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_448,&local_410);
      local_4b8[0].Roll = local_410.Roll;
      pTVar11 = UE::Math::TRotator<double>::Quaternion(local_4b8,&local_308);
      local_2c8.Rotation.ZW.m128d_f64[0] = pTVar11->Z;
      local_2c8.Rotation.ZW.m128d_f64[1] = pTVar11->W;
      local_2c8.Rotation.XY.m128d_f64[0] = pTVar11->X;
      local_2c8.Rotation.XY.m128d_f64[1] = pTVar11->Y;
      (this->DebugWorldTargetOffset).field0_0x0._s_0.X = local_540._s_0.X - dVar27;
      (this->DebugWorldTargetOffset).field0_0x0._s_0.Y = local_540._s_0.Y - dVar35;
      (this->DebugWorldTargetOffset).field0_0x0._s_0.Z = local_540._s_0.Z - dVar37;
    }
  }
  if (this->bHasAnyRotationOffset != false) {
    fVar19 = FCompressedRichCurve::Eval
                       (this->RotationOffsetSpline + 2,(float)(double)local_5c8._0_8_,0.0);
    dVar33 = (double)fVar19;
    fVar19 = FCompressedRichCurve::Eval
                       (this->RotationOffsetSpline + 1,(float)(double)local_5c8._0_8_,0.0);
    dVar6 = (double)fVar19;
    fVar19 = FCompressedRichCurve::Eval
                       (this->RotationOffsetSpline,(float)(double)local_5c8._0_8_,0.0);
    local_598._s_0.X = (double)fVar19;
    local_598._s_0.Y = dVar6;
    local_598._s_0.Z = dVar33;
    if (((dVar4 < (double)CONCAT44((uint)((ulonglong)local_598._s_0.X >> 0x20) & uVar41,
                                   SUB84(local_598._s_0.X,0) & uVar40)) ||
        (uVar42 = SUB84(dVar6,0) & uVar40, uVar43 = (uint)((ulonglong)dVar6 >> 0x20) & uVar41,
        dVar4 <= (double)CONCAT44(uVar43,uVar42) && (double)CONCAT44(uVar43,uVar42) != dVar4)) ||
       (uVar40 = SUB84(dVar33,0) & uVar40, uVar41 = (uint)((ulonglong)dVar33 >> 0x20) & uVar41,
       dVar4 <= (double)CONCAT44(uVar41,uVar40) && (double)CONCAT44(uVar41,uVar40) != dVar4)) {
      pTVar13 = UE::Math::TRotator<double>::MakeFromEuler
                          (&local_360,(TVector<double> *)&local_598._s_0);
      pTVar11 = UE::Math::TRotator<double>::Quaternion(pTVar13,&local_2e8);
      uVar38 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      uVar39 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
      ;
      local_148.Rotation.ZW.m128d_f64[0] = pTVar11->Z;
      local_148.Rotation.ZW.m128d_f64[1] = pTVar11->W;
      local_148.Rotation.XY.m128d_f64[0] = pTVar11->X;
      local_148.Rotation.XY.m128d_f64[1] = pTVar11->Y;
      local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_148.Translation.XY.m128d_f64[1]._0_4_ = uVar38;
      local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_148.Translation.XY.m128d_f64[1]._4_4_ = uVar39;
      local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar31;
      local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar32;
      local_208.Translation.XY.m128d_f64[1]._0_4_ = uVar38;
      local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_208.Translation.XY.m128d_f64[1]._4_4_ = uVar39;
      local_208.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar31;
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar32;
      local_148.Translation.ZW.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
      local_148.Translation.ZW.m128d_f64[1] = local_208.Translation.ZW.m128d_f64[1];
      local_148.Scale3D.XY.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
      local_148.Scale3D.XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply(&local_208,&local_148,&local_2c8);
      local_2c8.Rotation.XY.m128d_f64[1] = local_208.Rotation.XY.m128d_f64[1];
      local_2c8.Rotation.XY.m128d_f64[0] = local_208.Rotation.XY.m128d_f64[0];
      local_2c8.Rotation.ZW.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
      local_2c8.Rotation.ZW.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
      local_2c8.Translation.XY.m128d_f64[0] = local_208.Translation.XY.m128d_f64[0];
      local_2c8.Translation.XY.m128d_f64[1] = local_208.Translation.XY.m128d_f64[1];
      local_2c8.Translation.ZW.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
      local_2c8.Translation.ZW.m128d_f64[1] = local_208.Translation.ZW.m128d_f64[1];
      local_2c8.Scale3D.XY.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
      local_2c8.Scale3D.XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
      local_2c8.Scale3D.ZW.m128d_f64[0] = local_208.Scale3D.ZW.m128d_f64[0];
      local_2c8.Scale3D.ZW.m128d_f64[1] = local_208.Scale3D.ZW.m128d_f64[1];
      pTVar13 = UE::Math::TRotator<double>::MakeFromEuler
                          (&local_348,(TVector<double> *)&local_598._s_0);
      dVar4 = pTVar13->Yaw;
      (this->DebugRotationOffset).Pitch = pTVar13->Pitch;
      (this->DebugRotationOffset).Yaw = dVar4;
      (this->DebugRotationOffset).Roll = pTVar13->Roll;
    }
  }
  local_3f8.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
  local_3f8.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
  local_3f8.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
  local_3f8.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
  local_3f8.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
  local_3f8.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
  local_3f8.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
  local_3f8.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
  local_3f8.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
  local_3f8.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
  local_3f8.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
  local_3f8.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
  FCameraPose::SetTransform(&param_2->CameraPose,&local_3f8,false);
  FCameraRigJoints::AddYawPitchJoint(&param_2->CameraRigJoints,&local_268);
  return;
}

// RebuildCurves @ 14d62eca0

void __thiscall
UE::Cameras::FSplineOrbitCameraNodeEvaluator::RebuildCurves(FSplineOrbitCameraNodeEvaluator *this)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar4 = USplineOrbitCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar4);
    if (bVar3) {
      lVar5 = *(longlong *)&this->field_0x10;
      goto LAB_14d62eceb;
    }
  }
  lVar5 = 0;
LAB_14d62eceb:
  bVar3 = FCameraVectorCurve::HasAnyData((FCameraVectorCurve *)(lVar5 + 0x1b8));
  this->bHasAnyTargetOffset = bVar3;
  bVar3 = FCameraRotatorCurve::HasAnyData((FCameraRotatorCurve *)(lVar5 + 0x338));
  fVar2 = __real_42f00000;
  fVar1 = __real_38d1b717;
  this->bHasAnyRotationOffset = bVar3;
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x38),this->LocationOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0xb8),this->LocationOffsetSpline + 1,fVar1,fVar2)
  ;
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar5 + 0x138),this->LocationOffsetSpline + 2,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x1b8),this->TargetOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x238),this->TargetOffsetSpline + 1,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x2b8),this->TargetOffsetSpline + 2,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x338),this->RotationOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar5 + 0x3b8),this->RotationOffsetSpline + 1,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar5 + 0x438),this->RotationOffsetSpline + 2,fVar1,fVar2);
  return;
}

