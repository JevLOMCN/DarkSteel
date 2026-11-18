// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// StaticClass @ 14caaf690

UClass * __cdecl URectangleMarqueeInteraction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URectangleMarqueeInteraction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"RectangleMarqueeInteraction",
               &Z_Registration_Info_UClass_URectangleMarqueeInteraction.InnerSingleton,
               StaticRegisterNativesURectangleMarqueeInteraction,0x240,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URectangleMarqueeInteraction>,
               InternalVTableHelperCtorCaller<URectangleMarqueeInteraction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URectangleMarqueeInteraction.InnerSingleton;
}

// URectangleMarqueeInteraction @ 14cacef90

URectangleMarqueeInteraction * __thiscall
URectangleMarqueeInteraction::URectangleMarqueeInteraction
          (URectangleMarqueeInteraction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x18 = 2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x18 = 2;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined8 *)&this->OnDragRectangleStarted = 0;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnDragRectangleChanged = 0;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnDragRectangleFinished = 0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x10 = 0;
  (this->CurrentCameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CurrentCameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CurrentCameraState).Position.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x8 = 0;
  (this->CurrentCameraState).Orientation.X = 0.0;
  (this->CurrentCameraState).Orientation.Y = 0.0;
  (this->CurrentCameraState).Orientation.Z = 0.0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x18 = 2;
  (this->CurrentCameraState).Orientation.W = 1.0;
  (this->CurrentCameraState).HorizontalFOVDegrees = 90.0;
  (this->CurrentCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CurrentCameraState).AspectRatio = 1.0;
  (this->CurrentCameraState).bIsOrthographic = false;
  (this->CurrentCameraState).bIsVR = false;
  (this->CurrentCameraState).DPIScale = 1.0;
  FCameraRectangle::FCameraRectangle(&this->CameraRectangle);
  this->bIsDragging = false;
  return this;
}

// URectangleMarqueeInteraction @ 14cacf090

URectangleMarqueeInteraction * __thiscall
URectangleMarqueeInteraction::URectangleMarqueeInteraction
          (URectangleMarqueeInteraction *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x18 = 2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x18 = 2;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined8 *)&this->OnDragRectangleStarted = 0;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnDragRectangleChanged = 0;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnDragRectangleFinished = 0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x10 = 0;
  (this->CurrentCameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CurrentCameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CurrentCameraState).Position.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x8 = 0;
  (this->CurrentCameraState).Orientation.X = 0.0;
  (this->CurrentCameraState).Orientation.Y = 0.0;
  (this->CurrentCameraState).Orientation.Z = 0.0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x18 = 2;
  (this->CurrentCameraState).Orientation.W = 1.0;
  (this->CurrentCameraState).HorizontalFOVDegrees = 90.0;
  (this->CurrentCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CurrentCameraState).AspectRatio = 1.0;
  (this->CurrentCameraState).bIsOrthographic = false;
  (this->CurrentCameraState).bIsVR = false;
  (this->CurrentCameraState).DPIScale = 1.0;
  FCameraRectangle::FCameraRectangle(&this->CameraRectangle);
  this->bIsDragging = false;
  return this;
}

// ~URectangleMarqueeInteraction @ 14cad2a50

void __thiscall
URectangleMarqueeInteraction::~URectangleMarqueeInteraction(URectangleMarqueeInteraction *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IClickDragBehaviorTarget__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDragRectangleFinished).field_0x8,
             *(int *)&(this->OnDragRectangleFinished).field_0x10);
  pvVar1 = *(void **)&(this->OnDragRectangleFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragRectangleFinished);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDragRectangleChanged).field_0x8,
             *(int *)&(this->OnDragRectangleChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnDragRectangleChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragRectangleChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDragRectangleStarted).field_0x8,
             *(int *)&(this->OnDragRectangleStarted).field_0x10);
  pvVar1 = *(void **)&(this->OnDragRectangleStarted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragRectangleStarted);
  *(undefined ***)&this->field_0x28 = &___7IModifierToggleBehaviorTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanBeginClickDragSequence @ 14caf2a90

FInputRayHit * __thiscall
URectangleMarqueeInteraction::CanBeginClickDragSequence
          (URectangleMarqueeInteraction *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FWeakObjectPtr local_res10 [2];
  undefined8 local_res20;
  
  __return_storage_ptr__->bHit = true;
  (__return_storage_ptr__->HitObject).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->HitDepth = 3.4028234663852886e+38;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->bHasHitNormal = false;
  __return_storage_ptr__->HitIdentifier = 0;
  __return_storage_ptr__->HitOwner = (void *)0x0;
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
  (__return_storage_ptr__->HitObject).WeakPtr = local_res10[0];
  return __return_storage_ptr__;
}

// DrawHUD @ 14cb02b40

void __thiscall
URectangleMarqueeInteraction::DrawHUD
          (URectangleMarqueeInteraction *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  ulonglong uVar9;
  float fVar10;
  FCanvasItem local_88;
  double local_48;
  double local_40;
  undefined4 local_38;
  void *local_30;
  undefined8 local_28;
  
  pdVar8 = (double *)(**(code **)((longlong)*param_2 + 0x18))(param_2,&local_88);
  dVar6 = pdVar8[1];
  (this->CurrentCameraState).Position.field0_0x0._s_0.X = *pdVar8;
  (this->CurrentCameraState).Position.field0_0x0._s_0.Y = dVar6;
  dVar6 = pdVar8[3];
  (this->CurrentCameraState).Position.field0_0x0._s_0.Z = pdVar8[2];
  *(double *)&(this->CurrentCameraState).field_0x18 = dVar6;
  dVar6 = pdVar8[5];
  (this->CurrentCameraState).Orientation.X = pdVar8[4];
  (this->CurrentCameraState).Orientation.Y = dVar6;
  dVar6 = pdVar8[7];
  (this->CurrentCameraState).Orientation.Z = pdVar8[6];
  (this->CurrentCameraState).Orientation.W = dVar6;
  fVar10 = *(float *)((longlong)pdVar8 + 0x44);
  fVar2 = *(float *)(pdVar8 + 9);
  uVar3 = *(undefined4 *)((longlong)pdVar8 + 0x4c);
  (this->CurrentCameraState).HorizontalFOVDegrees = *(float *)(pdVar8 + 8);
  (this->CurrentCameraState).OrthoWorldCoordinateWidth = fVar10;
  (this->CurrentCameraState).AspectRatio = fVar2;
  (this->CurrentCameraState).bIsOrthographic = (bool)(char)uVar3;
  (this->CurrentCameraState).bIsVR = (bool)(char)((uint)uVar3 >> 8);
  *(short *)&(this->CurrentCameraState).field_0x4e = (short)((uint)uVar3 >> 0x10);
  uVar3 = *(undefined4 *)((longlong)pdVar8 + 0x54);
  uVar4 = *(undefined4 *)(pdVar8 + 0xb);
  uVar5 = *(undefined4 *)((longlong)pdVar8 + 0x5c);
  *(undefined4 *)&(this->CurrentCameraState).DPIScale = *(undefined4 *)(pdVar8 + 10);
  *(undefined4 *)((longlong)&(this->CurrentCameraState).DPIScale + 4) = uVar3;
  *(undefined4 *)&(this->CurrentCameraState).field_0x58 = uVar4;
  *(undefined4 *)&(this->CurrentCameraState).field_0x5c = uVar5;
  uVar9 = (**(code **)((longlong)*param_2 + 0x20))();
  if (((uVar9 & 2) != 0) && (this->bIsDragging != false)) {
    dVar6 = (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.X;
    dVar7 = (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.Y;
    local_48 = (this->CameraRectangle).RectangleEndRay.ScreenPosition.field0_0x0._s_0.X - dVar6;
    local_40 = (this->CameraRectangle).RectangleEndRay.ScreenPosition.field0_0x0._s_0.Y - dVar7;
    fVar10 = __real_3f800000;
    if (param_1->bStereoRendering == false) {
      dVar1 = __real_3ff0000000000000 / (double)param_1->DPIScale;
      local_48 = local_48 * dVar1;
      local_40 = local_40 * dVar1;
      fVar10 = param_1->DPIScale;
    }
    local_88.StereoDepth = 0;
    local_88.BlendMode = SE_BLEND_Opaque;
    local_88.bFreezeTime = false;
    local_88.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_38 = 0;
    local_30 = (void *)0x0;
    local_28 = 0;
    local_88._padding_ = (longlong)&___7FCanvasBoxItem__6B_;
    local_88.Position.field0_0x0._s_0.X = (__real_3ff0000000000000 / (double)fVar10) * dVar6;
    local_88.Position.field0_0x0._s_0.Y = (__real_3ff0000000000000 / (double)fVar10) * dVar7;
    local_88.Color.field0_0x0._s_0 = FLinearColor::White.field0_0x0;
    FCanvas::DrawItem(param_1,&local_88);
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14cb12ec0

UClass * __cdecl URectangleMarqueeInteraction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URectangleMarqueeInteraction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"RectangleMarqueeInteraction",
               &Z_Registration_Info_UClass_URectangleMarqueeInteraction.InnerSingleton,
               StaticRegisterNativesURectangleMarqueeInteraction,0x240,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URectangleMarqueeInteraction>,
               InternalVTableHelperCtorCaller<URectangleMarqueeInteraction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URectangleMarqueeInteraction.InnerSingleton;
}

// OnClickDrag @ 14cb23e30

/* WARNING: Type propagation algorithm not settling */

void __thiscall
URectangleMarqueeInteraction::OnClickDrag
          (URectangleMarqueeInteraction *this,FInputDeviceRay *param_1)

{
  double dVar1;
  
  if (param_1->bHas2D != false) {
    *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 8)
         = 1;
    dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Y =
         (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Z = dVar1;
    dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    *(double *)&(this->CameraRectangle).RectangleStartRay.bHas2D =
         (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.X = dVar1;
    dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.Y =
         (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.X = dVar1;
    dVar1 = (param_1->ScreenPosition).field0_0x0._s_0.X;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Y =
         *(double *)&param_1->bHas2D;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Z = dVar1;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Direction.field0_0x0._s_0.X =
         (param_1->ScreenPosition).field0_0x0._s_0.Y;
    FCameraRectangle::Initialize((FCameraRectangle *)&(this->CurrentCameraState).Orientation.W);
    TMulticastDelegate<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
                *)&this->field_0x28,(FCameraRectangle *)&(this->CurrentCameraState).Orientation.W);
  }
  return;
}

// OnClickPress @ 14cb24350

/* WARNING: Type propagation algorithm not settling */

void __thiscall
URectangleMarqueeInteraction::OnClickPress
          (URectangleMarqueeInteraction *this,FInputDeviceRay *param_1)

{
  double dVar1;
  
  if (param_1->bHas2D == false) {
    *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 8)
         = 0;
    return;
  }
  dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  (this->CameraRectangle).CameraState.Orientation.W = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  *(double *)&(this->CameraRectangle).CameraState.HorizontalFOVDegrees = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  *(double *)&(this->CameraRectangle).CameraState.AspectRatio =
       (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  (this->CameraRectangle).CameraState.DPIScale = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  *(double *)&(this->CameraRectangle).CameraState.field_0x58 =
       (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Origin.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->ScreenPosition).field0_0x0._s_0.X;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Origin.field0_0x0._s_0.Y =
       *(double *)&param_1->bHas2D;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Origin.field0_0x0._s_0.Z = dVar1;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.X =
       (param_1->ScreenPosition).field0_0x0._s_0.Y;
  dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Y =
       (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  *(double *)&(this->CameraRectangle).RectangleStartRay.bHas2D =
       (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.Y =
       (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->ScreenPosition).field0_0x0._s_0.X;
  (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Y =
       *(double *)&param_1->bHas2D;
  (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Z = dVar1;
  (this->CameraRectangle).RectangleEndRay.WorldRay.Direction.field0_0x0._s_0.X =
       (param_1->ScreenPosition).field0_0x0._s_0.Y;
  FCameraRectangle::Initialize((FCameraRectangle *)&(this->CurrentCameraState).Orientation.W);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x8);
  return;
}

// OnClickRelease @ 14cb24750

void __thiscall
URectangleMarqueeInteraction::OnClickRelease
          (URectangleMarqueeInteraction *this,FInputDeviceRay *param_1)

{
  *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 8) =
       0;
  TMulticastDelegate<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
             *)&(this->OnDragRectangleStarted).field_0x18,
            (FCameraRectangle *)&(this->CurrentCameraState).Orientation.W,false);
  return;
}

// OnTerminateDragSequence @ 14cb27ae0

void __thiscall
URectangleMarqueeInteraction::OnTerminateDragSequence(URectangleMarqueeInteraction *this)

{
  *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 8) =
       0;
  TMulticastDelegate<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
             *)&(this->OnDragRectangleStarted).field_0x18,
            (FCameraRectangle *)&(this->CurrentCameraState).Orientation.W,true);
  return;
}

// StaticRegisterNativesURectangleMarqueeInteraction @ 14cb3ec80

void __cdecl URectangleMarqueeInteraction::StaticRegisterNativesURectangleMarqueeInteraction(void)

{
  return;
}

