// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 5

// GetTypeID @ 14d6dc290

FCameraObjectTypeID * __thiscall
UE::Cameras::FLensCalibrationCameraNodeEvaluator::GetTypeID
          (FLensCalibrationCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6e1b90

bool __thiscall
UE::Cameras::FLensCalibrationCameraNodeEvaluator::IsKindOf
          (FLensCalibrationCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FLensCalibrationCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnAddReferencedObjects @ 14d6e49e0

void __thiscall
UE::Cameras::FLensCalibrationCameraNodeEvaluator::OnAddReferencedObjects
          (FLensCalibrationCameraNodeEvaluator *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->LensFile,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014d6e4a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->DistortionHandler,0,0);
  return;
}

// OnInitialize @ 14d6e4ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Cameras::FLensCalibrationCameraNodeEvaluator::OnInitialize
          (FLensCalibrationCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  int iVar1;
  ULensFile *pUVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  ULensDistortionModelHandlerBase *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  UClass *local_c8;
  FName local_c0;
  UClass *local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ == 0) {
LAB_14d6e4d2c:
    lVar12 = 0;
  }
  else {
    pUVar7 = ULensCalibrationCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if (!bVar6) goto LAB_14d6e4d2c;
    lVar12 = this->_padding_;
  }
  if (*(UObject **)(lVar12 + 0x38) == (UObject *)0x0) {
    return;
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(*(UObject **)(lVar12 + 0x38));
  }
  pUVar2 = *(ULensFile **)(lVar12 + 0x38);
  (this->LensFile).field0_0x0.DebugPtr = pUVar2;
  local_b8 = (pUVar2->LensInfo).LensModel.Class.field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_b8);
  }
  ULensModel::GetHandlerClass((TSubclassOf<ULensModel>)&local_c8);
  if (local_c8 == (UClass *)0x0) {
    return;
  }
  pUVar7 = ULensDistortionModelHandlerBase::StaticClass();
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar7->_padding_;
  if (((int)local_c8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(local_c8->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
     ) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar8 = (UPackage *)
           FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakOwner).WeakPtr);
  if (pUVar8 == (UPackage *)0x0) {
    pUVar8 = GetTransientPackage();
  }
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  if ((local_c8 != (UClass *)0x0) &&
     (pUVar7 = ULensDistortionModelHandlerBase::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)local_c8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(local_c8->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pUVar7 = local_c8;
    if (bVar6) goto LAB_14d6e4e55;
  }
  pUVar7 = (UClass *)0x0;
LAB_14d6e4e55:
  FVar4 = local_c0;
  if (local_c0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = ULensDistortionModelHandlerBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar9,pUVar7);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  FVar5 = local_c0;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_c0.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_c0.Number = FVar4.Number;
  local_a8._16_4_ = local_c0.ComparisonIndex.Value;
  local_a8._20_4_ = local_c0.Number;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_c0 = FVar5;
  local_a8._8_8_ = pUVar8;
  pUVar10 = (ULensDistortionModelHandlerBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (ULensDistortionModelHandlerBase *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->DistortionHandler).field0_0x0.DebugPtr = pUVar10;
  return;
}

// OnRun @ 14d6e4f60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FLensCalibrationCameraNodeEvaluator::OnRun
          (FLensCalibrationCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  FWeightedBlendables *pFVar3;
  undefined1 auVar4 [16];
  ULensFile *this_00;
  ULensDistortionModelHandlerBase *pUVar5;
  UMaterialInstanceDynamic *pUVar6;
  UMaterialInstanceDynamic *pUVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined4 local_98 [2];
  UMaterialInstanceDynamic *local_90;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [5];
  
  local_88._s_0.X = (double)(param_2->CameraPose).SensorWidth;
  local_88._s_0.Y = (double)(param_2->CameraPose).SensorHeight;
  if ((local_88._s_0.X <= 0.0) ||
     (dVar11 = (double)local_88._0_8_, dVar12 = (double)local_88._8_8_, local_88._s_0.Y <= 0.0)) {
    auVar4 = *(undefined1 (*) [16])((longlong)(this->LensFile).field0_0x0 + 0x58);
    dVar11 = auVar4._0_8_;
    dVar12 = auVar4._8_8_;
  }
  fVar20 = (param_2->CameraPose).FocalLength;
  if (fVar20 <= 0.0) {
    if (((param_2->CameraPose).FieldOfView <= 0.0) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2855550796777390006>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\GameplayCameras\\LensCalibrationCameraNode.cpp"
                            ,0x4a,"CameraPose.GetFieldOfView() > 0.f"), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    dVar10 = dVar11 * __real_3fe0000000000000;
    fVar20 = tanf((param_2->CameraPose).FieldOfView * __real_3c0efa35);
    fVar20 = (float)(dVar10 / (double)fVar20);
  }
  this_00 = (this->LensFile).field0_0x0.DebugPtr;
  if (this_00 != (ULensFile *)0x0) {
    local_88._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
    local_88._s_0.Y = _UNK_152bc18c8;
    bVar13 = ULensFile::EvaluateFocalLength
                       (this_00,(param_2->CameraPose).FocusDistance,fVar20,
                        (FFocalLengthInfo *)&local_88._s_0);
    if (((bVar13) && (fVar21 = (float)(local_88._s_0.X * dVar11), 0.0 < fVar21)) &&
       (fVar21 != (param_2->CameraPose).FocalLength)) {
      (param_2->CameraPose).ChangedFlags.FocalLength = true;
      (param_2->CameraPose).FocalLength = fVar21;
    }
  }
  pUVar5 = (this->DistortionHandler).field0_0x0.DebugPtr;
  if (pUVar5 == (ULensDistortionModelHandlerBase *)0x0) {
    return;
  }
  local_78[0]._0_8_ = dVar11;
  local_78[0]._8_8_ = dVar12;
  bVar13 = ULensFile::EvaluateDistortionData
                     ((this->LensFile).field0_0x0.DebugPtr,(param_2->CameraPose).FocusDistance,
                      fVar20,(TVector2<double> *)&local_78[0]._s_0,pUVar5);
  fVar20 = __real_3f800000;
  if (!bVar13) {
    return;
  }
  pUVar6 = (((this->DistortionHandler).field0_0x0.DebugPtr)->DistortionPostProcessMID).field0_0x0.
           DebugPtr;
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UMaterialInstanceDynamic *)0x0) goto LAB_14d6e52e4;
  }
  else {
    if (pUVar6 == (UMaterialInstanceDynamic *)0x0) goto LAB_14d6e52e4;
    GC::MarkAsReachable((UObject *)pUVar6);
  }
  lVar16 = (longlong)
           (param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayNum;
  uVar17 = 0;
  if (0 < lVar16) {
    lVar18 = 0;
    lVar19 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar17 <
          (param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pUVar7 = *(UMaterialInstanceDynamic **)
                ((param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.
                 AllocatorInstance.Data + lVar19 + 8);
      if (pUVar7 == (UMaterialInstanceDynamic *)0x0) {
        bVar13 = pUVar6 == (UMaterialInstanceDynamic *)0x0;
      }
      else {
        bVar13 = pUVar7 == pUVar6;
      }
      if (bVar13) {
        uVar14 = 0;
        if ((int)uVar17 <
            (param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        *(undefined4 *)
         ((param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.
          AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10) = 0x3f800000;
        goto LAB_14d6e52e4;
      }
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 0x10;
    } while (lVar18 < lVar16);
  }
  pFVar3 = &(param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables;
  local_98[0] = 0x3f800000;
  local_90 = pUVar6;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)pUVar6);
  }
  pFVar8 = (pFVar3->Array).AllocatorInstance.Data;
  if ((pFVar8 <= (FScriptContainerElement *)local_98) &&
     ((FScriptContainerElement *)local_98 <
      pFVar8 + (longlong)
               (param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayMax
               * 0x10)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar15 = (param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayNum;
  piVar1 = &(param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)pFVar3,piVar1);
  }
  (param_2->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayNum = iVar15 + 1;
  pFVar8 = (pFVar3->Array).AllocatorInstance.Data;
  *(undefined4 *)(pFVar8 + (longlong)iVar15 * 0x10) = local_98[0];
  *(UMaterialInstanceDynamic **)(pFVar8 + (longlong)iVar15 * 0x10 + 8) = local_90;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_90 != (UMaterialInstanceDynamic *)0x0)) {
    GC::MarkAsReachable((UObject *)local_90);
  }
LAB_14d6e52e4:
  fVar21 = ((this->DistortionHandler).field0_0x0.DebugPtr)->OverscanFactor - fVar20;
  if (fVar20 <= fVar21) {
    fVar21 = fVar20;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  if (fVar21 != (param_2->CameraPose).Overscan) {
    (param_2->CameraPose).ChangedFlags.Overscan = true;
    (param_2->CameraPose).Overscan = fVar21;
  }
  return;
}

