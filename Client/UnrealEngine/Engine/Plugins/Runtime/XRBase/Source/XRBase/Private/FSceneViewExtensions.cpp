// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 1

// NewExtension<FDefaultXRCamera,FXRTrackingSystemBase_*,int_&> @ 14cf7c830

TSharedRef<FDefaultXRCamera,1> * __cdecl
FSceneViewExtensions::NewExtension<FDefaultXRCamera,FXRTrackingSystemBase_*,int_&>
          (TSharedRef<FDefaultXRCamera,1> *__return_storage_ptr__,FXRTrackingSystemBase **param_1,
          int *param_2)

{
  int iVar1;
  FXRTrackingSystemBase *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FDefaultXRCamera *pFVar6;
  TSharedRef<FDefaultXRCamera,1> *pTVar7;
  FAutoRegister local_res8 [8];
  TRawPtrProxy<FDefaultXRCamera> local_res20;
  TSharedRef<ISceneViewExtension,1> local_28;
  
  pFVar6 = ::operator_new(0x240);
  if (pFVar6 == (FDefaultXRCamera *)0x0) {
    pFVar6 = (FDefaultXRCamera *)0x0;
  }
  else {
    iVar1 = *param_2;
    pFVar2 = *param_1;
    *(undefined ***)pFVar6 = &___7IXRCamera__6B_;
    FSceneViewExtensionBase::FSceneViewExtensionBase
              ((FSceneViewExtensionBase *)&pFVar6->field_0x8,local_res8);
    pFVar6->TrackingSystem = (IXRTrackingSystem *)pFVar2;
    *(undefined ***)pFVar6 = &FDefaultXRCamera::_vftable__for__IXRCamera__;
    pFVar6->DeviceId = iVar1;
    *(undefined ***)&pFVar6->field_0x8 = &FDefaultXRCamera::_vftable__for__FHMDSceneViewExtension__;
    (pFVar6->DeltaControlRotation).Pitch = 0.0;
    (pFVar6->DeltaControlRotation).Yaw = 0.0;
    (pFVar6->DeltaControlRotation).Roll = 0.0;
    dVar4 = UE::Math::TQuat<double>::Identity.Y;
    (pFVar6->DeltaControlOrientation).X = UE::Math::TQuat<double>::Identity.X;
    (pFVar6->DeltaControlOrientation).Y = dVar4;
    dVar4 = UE::Math::TQuat<double>::Identity.W;
    (pFVar6->DeltaControlOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
    (pFVar6->DeltaControlOrientation).W = dVar4;
    (pFVar6->LateUpdate)._padding_ = (longlong)&___7FLateUpdateManager__6B_;
    (pFVar6->SmoothedCameraRotation).Pitch = 0.0;
    (pFVar6->SmoothedCameraRotation).Yaw = 0.0;
    (pFVar6->SmoothedCameraRotation).Roll = 0.0;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    *(undefined8 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.Primitives = 0;
    *(undefined8 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x8 = 0;
    *(undefined8 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x20 = 0;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x28 = 0;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x30 =
         0xffffffff;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x34 = 0;
    *(undefined8 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x40 = 0;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x48 = 0;
    (pFVar6->LateUpdate).PipelinedUpdateStatesGame.bSkip = false;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    *(undefined8 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.Primitives = 0;
    *(undefined8 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x8 = 0;
    *(undefined8 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x20 = 0;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x28 = 0;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x2c = 0x80
    ;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x30 =
         0xffffffff;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x34 = 0;
    *(undefined8 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x40 = 0;
    *(undefined4 *)&(pFVar6->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x48 = 0;
    (pFVar6->LateUpdate).PipelinedUpdateStatesRendering.bSkip = false;
    pFVar6->bUseImplicitHMDPosition = false;
    if (((*(longlong *)&pFVar6->field_0x10 != 0) && (*(longlong *)&pFVar6->field_0x18 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar6->field_0x18 + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedRef<FDefaultXRCamera,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  local_res20.Object = pFVar6;
  TSharedRef<FDefaultXRCamera,1>::TSharedRef<FDefaultXRCamera,1><FDefaultXRCamera>
            (__return_storage_ptr__,&local_res20);
  if (__return_storage_ptr__->Object == (FDefaultXRCamera *)0x0) {
    local_28.Object = (ISceneViewExtension *)0x0;
  }
  else {
    local_28.Object = (ISceneViewExtension *)&__return_storage_ptr__->Object->field_0x8;
  }
  local_28.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RegisterExtension(&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

