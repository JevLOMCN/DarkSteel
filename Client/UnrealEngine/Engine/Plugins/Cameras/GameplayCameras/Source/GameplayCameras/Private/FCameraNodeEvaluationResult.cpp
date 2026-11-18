// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// FCameraNodeEvaluationResult @ 14d543180

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraNodeEvaluationResult * __thiscall
UE::Cameras::FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
          (FCameraNodeEvaluationResult *this,FCameraNodeEvaluationResult *param_1)

{
  int *piVar1;
  TMap<FCameraContextDataID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>_>
  *this_00;
  FCameraContextDataTable *pFVar2;
  int iVar3;
  FEntry *pFVar4;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar13;
  FCameraPoseFlags FVar14;
  undefined3 uVar15;
  
  dVar6 = (param_1->CameraPose).Location.field0_0x0._s_0.Y;
  (this->CameraPose).Location.field0_0x0._s_0.X = (param_1->CameraPose).Location.field0_0x0._s_0.X;
  (this->CameraPose).Location.field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->CameraPose).Rotation.Pitch;
  (this->CameraPose).Location.field0_0x0._s_0.Z = (param_1->CameraPose).Location.field0_0x0._s_0.Z;
  (this->CameraPose).Rotation.Pitch = dVar6;
  dVar6 = (param_1->CameraPose).Rotation.Roll;
  (this->CameraPose).Rotation.Yaw = (param_1->CameraPose).Rotation.Yaw;
  (this->CameraPose).Rotation.Roll = dVar6;
  fVar7 = (param_1->CameraPose).FieldOfView;
  fVar8 = (param_1->CameraPose).FocalLength;
  (this->CameraPose).TargetDistance = (param_1->CameraPose).TargetDistance;
  (this->CameraPose).FieldOfView = fVar7;
  (this->CameraPose).FocalLength = fVar8;
  fVar7 = (param_1->CameraPose).Aperture;
  fVar8 = (param_1->CameraPose).ShutterSpeed;
  fVar9 = (param_1->CameraPose).FocusDistance;
  (this->CameraPose).OrthographicWidth = (param_1->CameraPose).OrthographicWidth;
  (this->CameraPose).Aperture = fVar7;
  (this->CameraPose).ShutterSpeed = fVar8;
  (this->CameraPose).FocusDistance = fVar9;
  fVar7 = (param_1->CameraPose).SensorHeight;
  fVar8 = (param_1->CameraPose).SensorHorizontalOffset;
  fVar9 = (param_1->CameraPose).SensorVerticalOffset;
  (this->CameraPose).SensorWidth = (param_1->CameraPose).SensorWidth;
  (this->CameraPose).SensorHeight = fVar7;
  (this->CameraPose).SensorHorizontalOffset = fVar8;
  (this->CameraPose).SensorVerticalOffset = fVar9;
  fVar7 = (param_1->CameraPose).SqueezeFactor;
  fVar8 = (param_1->CameraPose).Overscan;
  iVar3 = (param_1->CameraPose).DiaphragmBladeCount;
  (this->CameraPose).ISO = (param_1->CameraPose).ISO;
  (this->CameraPose).SqueezeFactor = fVar7;
  (this->CameraPose).Overscan = fVar8;
  (this->CameraPose).DiaphragmBladeCount = iVar3;
  fVar7 = (param_1->CameraPose).FarClippingPlane;
  fVar8 = (param_1->CameraPose).PhysicalCameraBlendWeight;
  bVar10 = (param_1->CameraPose).EnablePhysicalCamera;
  bVar11 = (param_1->CameraPose).ConstrainAspectRatio;
  bVar12 = (param_1->CameraPose).OverrideAspectRatioAxisConstraint;
  TVar13.Value = (param_1->CameraPose).AspectRatioAxisConstraint.Value;
  (this->CameraPose).NearClippingPlane = (param_1->CameraPose).NearClippingPlane;
  (this->CameraPose).FarClippingPlane = fVar7;
  (this->CameraPose).PhysicalCameraBlendWeight = fVar8;
  (this->CameraPose).EnablePhysicalCamera = bVar10;
  (this->CameraPose).ConstrainAspectRatio = bVar11;
  (this->CameraPose).OverrideAspectRatioAxisConstraint = bVar12;
  (this->CameraPose).AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar13.Value;
  FVar14 = (param_1->CameraPose).ChangedFlags;
  uVar15 = *(undefined3 *)&(param_1->CameraPose).field_0x85;
  (this->CameraPose).ProjectionMode =
       (TEnumAsByte<ECameraProjectionMode::Type>)(param_1->CameraPose).ProjectionMode.Value;
  (this->CameraPose).ChangedFlags = FVar14;
  *(undefined3 *)&(this->CameraPose).field_0x85 = uVar15;
  FCameraVariableTable::FCameraVariableTable(&this->VariableTable,&param_1->VariableTable);
  pFVar2 = &this->ContextDataTable;
  (pFVar2->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ContextDataTable).Entries.ArrayMax;
  iVar3 = (param_1->ContextDataTable).Entries.ArrayNum;
  pFVar4 = (FEntry *)(param_1->ContextDataTable).Entries.AllocatorInstance.Data;
  (this->ContextDataTable).Entries.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    ConstructItems<UE::Cameras::FCameraContextDataTable::FEntry,UE::Cameras::FCameraContextDataTable::FEntry,int>
              ((pFVar2->Entries).AllocatorInstance.Data,pFVar4,iVar3);
  }
  this_00 = &(this->ContextDataTable).EntryLookup;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->ContextDataTable).EntryLookup.field_0x8 = 0;
  *(undefined8 *)&(this->ContextDataTable).EntryLookup.field_0x20 = 0;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x28 = 0;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x34 = 0;
  *(undefined8 *)&(this->ContextDataTable).EntryLookup.field_0x40 = 0;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x48 = 0;
  TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FCameraContextDataID,int>,TDefaultMapHashableKeyFuncs<FCameraContextDataID,int,0>,FDefaultSetAllocator>
               *)&(param_1->ContextDataTable).EntryLookup);
  (this->ContextDataTable).Memory = (param_1->ContextDataTable).Memory;
  (this->ContextDataTable).Capacity = (param_1->ContextDataTable).Capacity;
  (this->ContextDataTable).Used = (param_1->ContextDataTable).Used;
  (this->CameraRigJoints).Joints.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigJoint>)0x0;
  if ((param_1->CameraRigJoints).Joints.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    memmove(&this->CameraRigJoints,&param_1->CameraRigJoints,0xe0);
  }
  FVar5 = (this->CameraRigJoints).Joints.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  (this->CameraRigJoints).Joints.AllocatorInstance.SecondaryData =
       (param_1->CameraRigJoints).Joints.AllocatorInstance.SecondaryData;
  (param_1->CameraRigJoints).Joints.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigJoint>)0x0;
  (this->CameraRigJoints).Joints.ArrayNum = (param_1->CameraRigJoints).Joints.ArrayNum;
  (this->CameraRigJoints).Joints.ArrayMax = (param_1->CameraRigJoints).Joints.ArrayMax;
  (param_1->CameraRigJoints).Joints.ArrayNum = 0;
  (param_1->CameraRigJoints).Joints.ArrayMax = 2;
  FPostProcessSettings::FPostProcessSettings
            (&(this->PostProcessSettings).PostProcessSettings,
             &(param_1->PostProcessSettings).PostProcessSettings);
  this->bIsCameraCut = param_1->bIsCameraCut;
  this->bIsValid = param_1->bIsValid;
  (this->CameraPoseLocationTrail).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraPoseLocationTrail).AllocatorInstance.Data =
       (param_1->CameraPoseLocationTrail).AllocatorInstance.Data;
  (param_1->CameraPoseLocationTrail).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraPoseLocationTrail).ArrayNum = (param_1->CameraPoseLocationTrail).ArrayNum;
  (this->CameraPoseLocationTrail).ArrayMax = (param_1->CameraPoseLocationTrail).ArrayMax;
  (param_1->CameraPoseLocationTrail).ArrayNum = 0;
  (param_1->CameraPoseLocationTrail).ArrayMax = 0;
  return this;
}

// FCameraNodeEvaluationResult @ 14d5433c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraNodeEvaluationResult * __thiscall
UE::Cameras::FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
          (FCameraNodeEvaluationResult *this)

{
  FCameraPose::FCameraPose(&this->CameraPose);
  FCameraVariableTable::FCameraVariableTable(&this->VariableTable);
  (this->ContextDataTable).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextDataTable).Entries.ArrayNum = 0;
  (this->ContextDataTable).Entries.ArrayMax = 0;
  *(undefined8 *)&(this->ContextDataTable).EntryLookup = 0;
  *(undefined8 *)&(this->ContextDataTable).EntryLookup.field_0x8 = 0;
  *(undefined8 *)&(this->ContextDataTable).EntryLookup.field_0x20 = 0;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x28 = 0;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x34 = 0;
  *(undefined8 *)&(this->ContextDataTable).EntryLookup.field_0x40 = 0;
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x48 = 0;
  (this->ContextDataTable).Memory = (uchar *)0x0;
  (this->ContextDataTable).Capacity = 0;
  (this->ContextDataTable).Used = 0;
  (this->CameraRigJoints).Joints.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigJoint>)0x0;
  (this->CameraRigJoints).Joints.ArrayNum = 0;
  (this->CameraRigJoints).Joints.ArrayMax = 2;
  FPostProcessSettings::FPostProcessSettings(&(this->PostProcessSettings).PostProcessSettings);
  this->bIsCameraCut = false;
  this->bIsValid = false;
  (this->CameraPoseLocationTrail).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraPoseLocationTrail).ArrayNum = 0;
  (this->CameraPoseLocationTrail).ArrayMax = 0;
  return this;
}

// ~FCameraNodeEvaluationResult @ 14d544840

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult
          (FCameraNodeEvaluationResult *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar2;
  void *pvVar3;
  
  pFVar1 = (this->CameraPoseLocationTrail).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->CameraRigJoints).Joints.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  *(undefined4 *)&(this->ContextDataTable).EntryLookup.field_0x48 = 0;
  pvVar3 = *(void **)&(this->ContextDataTable).EntryLookup.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ContextDataTable).EntryLookup);
  pFVar1 = (this->ContextDataTable).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCameraVariableTable::~FCameraVariableTable(&this->VariableTable);
  return;
}

// AddCameraPoseTrailPointIfNeeded @ 14d546510

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
          (FCameraNodeEvaluationResult *this,TVector<double> *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  pTVar2 = &this->CameraPoseLocationTrail;
  iVar8 = (this->CameraPoseLocationTrail).ArrayNum;
  if (iVar8 != 0) {
    uVar10 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar10 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar9 = (longlong)(this->CameraPoseLocationTrail).ArrayNum;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    dVar6 = *(double *)(pFVar3 + lVar9 * 0x18 + -0x18) - (param_1->field0_0x0)._s_0.X;
    uVar10 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar11 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar11,uVar10) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar11,uVar10) == __real_3f1a36e2e0000000) &&
        (dVar6 = *(double *)(pFVar3 + lVar9 * 0x18 + -0x10) - (param_1->field0_0x0)._s_0.Y,
        uVar10 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar11 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar11,uVar10) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar11,uVar10) == __real_3f1a36e2e0000000)) &&
       (dVar6 = *(double *)(pFVar3 + lVar9 * 0x18 + -8) - (param_1->field0_0x0)._s_0.Z,
       uVar10 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar11 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar11,uVar10) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar11,uVar10) == __real_3f1a36e2e0000000)) {
      return;
    }
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= param_1) &&
      (param_1 < pFVar3 + (longlong)(this->CameraPoseLocationTrail).ArrayMax * 0x18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->CameraPoseLocationTrail).ArrayNum;
  piVar1 = &(this->CameraPoseLocationTrail).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
    (this->CameraPoseLocationTrail).ArrayNum = iVar8;
  }
  (this->CameraPoseLocationTrail).ArrayNum = iVar8 + 1;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(double *)pFVar3 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar3 + 8) = dVar6;
  *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  return;
}

// AddCameraPoseTrailPointIfNeeded @ 14d546690

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
          (FCameraNodeEvaluationResult *this)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (this->CameraPose).Location.field0_0x0._s_0.X;
  local_28._s_0.Y = (this->CameraPose).Location.field0_0x0._s_0.Y;
  local_28._s_0.Z = (this->CameraPose).Location.field0_0x0._s_0.Z;
  AddCameraPoseTrailPointIfNeeded(this,(TVector<double> *)&local_28._s_0);
  return;
}

// AddReferencedObjects @ 14d547a30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResult::AddReferencedObjects
          (FCameraNodeEvaluationResult *this,FReferenceCollector *param_1)

{
  FCameraContextDataTable::AddReferencedObjects(&this->ContextDataTable,param_1);
  return;
}

// AppendCameraPoseLocationTrail @ 14d548720

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResult::AppendCameraPoseLocationTrail
          (FCameraNodeEvaluationResult *this,FCameraNodeEvaluationResult *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this == param_1) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7330225176618991724>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraNodeEvaluator.cpp"
                       ,0x6c,"this != &InResult");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = &this->CameraPoseLocationTrail;
  if (pTVar5 == &param_1->CameraPoseLocationTrail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_1->CameraPoseLocationTrail).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar1,&pTVar5->AllocatorInstance,
                       &(this->CameraPoseLocationTrail).ArrayNum,
                       &(this->CameraPoseLocationTrail).ArrayMax);
    memcpy((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0x18,
           (param_1->CameraPoseLocationTrail).AllocatorInstance.Data,(longlong)iVar1 * 0x18);
  }
  return;
}

// GetCameraPoseLocationTrail @ 14d556360

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TArrayView<UE::Math::TVector<double>_const_,int> * __thiscall
UE::Cameras::FCameraNodeEvaluationResult::GetCameraPoseLocationTrail
          (FCameraNodeEvaluationResult *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar4;
  
  iVar1 = (this->CameraPoseLocationTrail).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TVector<double> *)(this->CameraPoseLocationTrail).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::Math::TVector<double>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// LerpAll @ 14d55a640

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResult::LerpAll
          (FCameraNodeEvaluationResult *this,FCameraNodeEvaluationResult *param_1,float param_2,
          bool param_3)

{
  FCameraPose::LerpAll(&this->CameraPose,&param_1->CameraPose,param_2);
  FCameraVariableTable::LerpAll(&this->VariableTable,&param_1->VariableTable,param_2,param_3);
  FCameraRigJoints::LerpAll(&this->CameraRigJoints,&param_1->CameraRigJoints,param_2);
  FPostProcessSettingsCollection::LerpAll
            (&this->PostProcessSettings,&param_1->PostProcessSettings,param_2);
  if ((0.0 < param_2) && (param_1->bIsCameraCut != false)) {
    this->bIsCameraCut = true;
  }
  if ((this->bIsValid == false) || (param_1->bIsValid == false)) {
    this->bIsValid = false;
  }
  else {
    this->bIsValid = true;
  }
  return;
}

// OverrideAll @ 14d55d4f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResult::OverrideAll
          (FCameraNodeEvaluationResult *this,FCameraNodeEvaluationResult *param_1,bool param_2)

{
  FCameraPose::OverrideAll(&this->CameraPose,&param_1->CameraPose);
  FCameraVariableTable::OverrideAll(&this->VariableTable,&param_1->VariableTable,param_2);
  FCameraContextDataTable::InternalOverride(&this->ContextDataTable,&param_1->ContextDataTable,None)
  ;
  FCameraRigJoints::OverrideAll(&this->CameraRigJoints,&param_1->CameraRigJoints);
  FPostProcessSettingsCollection::OverrideAll
            (&this->PostProcessSettings,&param_1->PostProcessSettings);
  this->bIsCameraCut = param_1->bIsCameraCut;
  this->bIsValid = param_1->bIsValid;
  return;
}

// Reset @ 14d5615e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraNodeEvaluationResult::Reset(FCameraNodeEvaluationResult *this)

{
  FCameraPose::Reset(&this->CameraPose);
  FCameraRigJoints::Reset(&this->CameraRigJoints);
  FPostProcessSettingsCollection::Reset(&this->PostProcessSettings);
  this->bIsCameraCut = false;
  this->bIsValid = false;
  (this->CameraPoseLocationTrail).ArrayNum = 0;
  if ((this->CameraPoseLocationTrail).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->CameraPoseLocationTrail).AllocatorInstance,0,
               &(this->CameraPoseLocationTrail).ArrayMax);
  }
  return;
}

// ResetFrameFlags @ 14d561650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResult::ResetFrameFlags(FCameraNodeEvaluationResult *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  FCameraPose::ClearAllChangedFlags(&this->CameraPose);
  FCameraVariableTable::ClearAllWrittenThisFrameFlags(&this->VariableTable);
  iVar1 = (this->ContextDataTable).Entries.ArrayNum;
  pFVar2 = (this->ContextDataTable).Entries.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->ContextDataTable).Entries.ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x1c] = (FScriptContainerElement)((byte)pFVar2[0x1c] & 0xf7);
    pFVar2 = pFVar2 + 0x20;
  }
  return;
}

// Serialize @ 14d562ae0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluationResult::Serialize
          (FCameraNodeEvaluationResult *this,FArchive *param_1)

{
  FCameraPose::SerializeWithFlags(&this->CameraPose,param_1);
  FCameraVariableTable::Serialize(&this->VariableTable,param_1);
  FCameraRigJoints::Serialize(&this->CameraRigJoints,param_1);
  FPostProcessSettingsCollection::Serialize(&this->PostProcessSettings,param_1);
  ::operator<<(param_1,&this->bIsCameraCut);
  ::operator<<(param_1,&this->bIsValid);
  return;
}

