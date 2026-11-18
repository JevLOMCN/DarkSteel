// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 19

// StaticClass @ 14caae550

UClass * __cdecl URectangleMarqueeMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URectangleMarqueeMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"RectangleMarqueeMechanic",
               &Z_Registration_Info_UClass_URectangleMarqueeMechanic.InnerSingleton,
               StaticRegisterNativesURectangleMarqueeMechanic,0x230,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URectangleMarqueeMechanic>,
               InternalVTableHelperCtorCaller<URectangleMarqueeMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URectangleMarqueeMechanic.InnerSingleton;
}

// URectangleMarqueeMechanic @ 14cacf190

URectangleMarqueeMechanic * __thiscall
URectangleMarqueeMechanic::URectangleMarqueeMechanic
          (URectangleMarqueeMechanic *this,FVTableHelper *param_1)

{
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  this->bUseExternalClickDragBehavior = false;
  this->bUseExternalUpdateCameraState = false;
  *(undefined8 *)&this->UpdateCameraStateFunc = 0;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined8 *)&(this->UpdateCameraStateFunc).field_0x28 = 0;
  *(undefined8 *)&this->OnDragRectangleStarted = 0;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnDragRectangleChanged = 0;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnDragRectangleFinished = 0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x10 = 0;
  (this->ClickDragBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  this->OnDragRectangleChangedDeferredThreshold = 1.7976931348623157e+308;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x18 = 2;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x18 = 2;
  FCameraRectangle::FCameraRectangle(&this->CameraRectangle);
  (this->BasePriority).Priority = 100;
  return this;
}

// URectangleMarqueeMechanic @ 14cacf260

URectangleMarqueeMechanic * __thiscall
URectangleMarqueeMechanic::URectangleMarqueeMechanic(URectangleMarqueeMechanic *this)

{
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  this->bUseExternalClickDragBehavior = false;
  this->bUseExternalUpdateCameraState = false;
  *(undefined8 *)&this->UpdateCameraStateFunc = 0;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined8 *)&(this->UpdateCameraStateFunc).field_0x28 = 0;
  *(undefined8 *)&this->OnDragRectangleStarted = 0;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnDragRectangleChanged = 0;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnDragRectangleFinished = 0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x10 = 0;
  (this->ClickDragBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  this->OnDragRectangleChangedDeferredThreshold = 1.7976931348623157e+308;
  *(undefined8 *)&(this->OnDragRectangleStarted).field_0x18 = 2;
  *(undefined8 *)&(this->OnDragRectangleChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnDragRectangleFinished).field_0x18 = 2;
  FCameraRectangle::FCameraRectangle(&this->CameraRectangle);
  (this->BasePriority).Priority = 100;
  return this;
}

// ~URectangleMarqueeMechanic @ 14cad2b10

void __thiscall
URectangleMarqueeMechanic::~URectangleMarqueeMechanic(URectangleMarqueeMechanic *this)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickDragBehaviorTarget__;
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
  if (*(longlong *)&this->UpdateCameraStateFunc != 0) {
    plVar2 = *(longlong **)&(this->UpdateCameraStateFunc).field_0x28;
    plVar3 = (longlong *)&(this->UpdateCameraStateFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined ***)&this->field_0x30 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// CanBeginClickDragSequence @ 14caf2b10

FInputRayHit * __thiscall
URectangleMarqueeMechanic::CanBeginClickDragSequence
          (URectangleMarqueeMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  if (*(char *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 4) !=
      '\0') {
    FInputRayHit::FInputRayHit(__return_storage_ptr__,__real_47efffffe0000000);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->HitObject).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->bHit = false;
  __return_storage_ptr__->HitDepth = 3.4028234663852886e+38;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->bHasHitNormal = false;
  __return_storage_ptr__->HitIdentifier = 0;
  __return_storage_ptr__->HitOwner = (void *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (__return_storage_ptr__->HitObject).WeakPtr = local_res8;
  return __return_storage_ptr__;
}

// DrawHUD @ 14cb02ce0

void __thiscall
URectangleMarqueeMechanic::DrawHUD
          (URectangleMarqueeMechanic *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  float fVar4;
  double dVar5;
  FCanvasItem local_88;
  double local_48;
  double local_40;
  undefined4 local_38;
  void *local_30;
  undefined8 local_28;
  
  uVar3 = (**(code **)((longlong)*param_2 + 0x20))();
  if (((uVar3 & 2) != 0) && (this->bIsDragging != false)) {
    dVar1 = (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.X;
    dVar2 = (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.Y;
    local_48 = (this->CameraRectangle).RectangleEndRay.ScreenPosition.field0_0x0._s_0.X - dVar1;
    local_40 = (this->CameraRectangle).RectangleEndRay.ScreenPosition.field0_0x0._s_0.Y - dVar2;
    fVar4 = __real_3f800000;
    if (param_1->bStereoRendering == false) {
      dVar5 = __real_3ff0000000000000 / (double)param_1->DPIScale;
      local_48 = local_48 * dVar5;
      local_40 = local_40 * dVar5;
      fVar4 = param_1->DPIScale;
    }
    local_88.StereoDepth = 0;
    local_88.BlendMode = SE_BLEND_Opaque;
    local_88.bFreezeTime = false;
    local_88.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_38 = 0;
    local_30 = (void *)0x0;
    local_28 = 0;
    local_88._padding_ = (longlong)&___7FCanvasBoxItem__6B_;
    local_88.Position.field0_0x0._s_0.X = (__real_3ff0000000000000 / (double)fVar4) * dVar1;
    local_88.Position.field0_0x0._s_0.Y = (__real_3ff0000000000000 / (double)fVar4) * dVar2;
    local_88.Color.field0_0x0._s_0 = FLinearColor::White.field0_0x0;
    FCanvas::DrawItem(param_1,&local_88);
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
  }
  return;
}

// GetPriorityRange @ 14cb11cf0

TTuple<FInputCapturePriority,FInputCapturePriority> __thiscall
URectangleMarqueeMechanic::GetPriorityRange(URectangleMarqueeMechanic *this)

{
  TTuple<FInputCapturePriority,FInputCapturePriority> in_RDX;
  
  *(int *)in_RDX = (this->BasePriority).Priority;
  *(int *)((longlong)in_RDX + 4) = (this->BasePriority).Priority;
  return in_RDX;
}

// GetPrivateStaticClass @ 14cb12f70

UClass * __cdecl URectangleMarqueeMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URectangleMarqueeMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"RectangleMarqueeMechanic",
               &Z_Registration_Info_UClass_URectangleMarqueeMechanic.InnerSingleton,
               StaticRegisterNativesURectangleMarqueeMechanic,0x230,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URectangleMarqueeMechanic>,
               InternalVTableHelperCtorCaller<URectangleMarqueeMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URectangleMarqueeMechanic.InnerSingleton;
}

// IsEnabled @ 14cb22060

bool __thiscall URectangleMarqueeMechanic::IsEnabled(URectangleMarqueeMechanic *this)

{
  return this->bIsEnabled;
}

// OnClickDrag @ 14cb23eb0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
URectangleMarqueeMechanic::OnClickDrag(URectangleMarqueeMechanic *this,FInputDeviceRay *param_1)

{
  double dVar1;
  LARGE_INTEGER local_res10 [3];
  
  if (param_1->bHas2D != false) {
    *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 5)
         = 1;
    dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.X =
         (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Z =
         (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    *(double *)&(this->CameraRectangle).RectangleStartRay.bHas2D = dVar1;
    dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.X =
         (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->ScreenPosition).field0_0x0._s_0.X;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.X =
         *(double *)&param_1->bHas2D;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Y = dVar1;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Z =
         (param_1->ScreenPosition).field0_0x0._s_0.Y;
    FCameraRectangle::Initialize((FCameraRectangle *)&(this->OnDragRectangleChanged).field_0x18);
    if (*(char *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 6)
        == '\0') {
      QueryPerformanceCounter(local_res10);
      dVar1 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
      TMulticastDelegate<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
                 *)&(this->UpdateCameraStateFunc).field_0x28,
                (FCameraRectangle *)&(this->OnDragRectangleChanged).field_0x18);
      QueryPerformanceCounter(local_res10);
      dVar1 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
      if (*(double *)&this->UpdateCameraStateFunc <= dVar1 &&
          dVar1 != *(double *)&this->UpdateCameraStateFunc) {
        *(undefined1 *)
         ((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 6) = 1;
      }
    }
  }
  return;
}

// OnClickPress @ 14cb24400

/* WARNING: Type propagation algorithm not settling */

void __thiscall
URectangleMarqueeMechanic::OnClickPress(URectangleMarqueeMechanic *this,FInputDeviceRay *param_1)

{
  double dVar1;
  
  if (param_1->bHas2D == false) {
    *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 5)
         = 0;
    return;
  }
  dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  (this->CameraRectangle).CameraState.Orientation.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  (this->CameraRectangle).CameraState.Orientation.W = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  *(double *)&(this->CameraRectangle).CameraState.HorizontalFOVDegrees =
       (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  *(double *)&(this->CameraRectangle).CameraState.AspectRatio = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  (this->CameraRectangle).CameraState.DPIScale = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  *(double *)&(this->CameraRectangle).CameraState.field_0x58 = dVar1;
  dVar1 = (param_1->ScreenPosition).field0_0x0._s_0.X;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Origin.field0_0x0._s_0.X =
       *(double *)&param_1->bHas2D;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Origin.field0_0x0._s_0.Y = dVar1;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Origin.field0_0x0._s_0.Z =
       (param_1->ScreenPosition).field0_0x0._s_0.Y;
  dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.X =
       (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Z =
       (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  *(double *)&(this->CameraRectangle).RectangleStartRay.bHas2D = dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.X =
       (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->ScreenPosition).field0_0x0._s_0.X;
  (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.X =
       *(double *)&param_1->bHas2D;
  (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Y = dVar1;
  (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Z =
       (param_1->ScreenPosition).field0_0x0._s_0.Y;
  FCameraRectangle::Initialize((FCameraRectangle *)&(this->OnDragRectangleChanged).field_0x18);
  *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 6) =
       0;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(this->UpdateCameraStateFunc).field_0x8);
  return;
}

// OnClickRelease @ 14cb24770

/* WARNING: Type propagation algorithm not settling */

void __thiscall
URectangleMarqueeMechanic::OnClickRelease(URectangleMarqueeMechanic *this,FInputDeviceRay *param_1)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  if ((*(char *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 6) !=
       '\0') &&
     (*(undefined1 *)
       ((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 6) = 0,
     param_1->bHas2D != false)) {
    *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 5)
         = 1;
    dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.X =
         (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    (this->CameraRectangle).RectangleStartRay.WorldRay.Direction.field0_0x0._s_0.Z =
         (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    *(double *)&(this->CameraRectangle).RectangleStartRay.bHas2D = dVar1;
    dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.X =
         (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    (this->CameraRectangle).RectangleStartRay.ScreenPosition.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->ScreenPosition).field0_0x0._s_0.X;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.X =
         *(double *)&param_1->bHas2D;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Y = dVar1;
    (this->CameraRectangle).RectangleEndRay.WorldRay.Origin.field0_0x0._s_0.Z =
         (param_1->ScreenPosition).field0_0x0._s_0.Y;
    FCameraRectangle::Initialize((FCameraRectangle *)&(this->OnDragRectangleChanged).field_0x18);
    if (*(char *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 6)
        == '\0') {
      QueryPerformanceCounter(&local_res8);
      dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      TMulticastDelegate<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
                 *)&(this->UpdateCameraStateFunc).field_0x28,
                (FCameraRectangle *)&(this->OnDragRectangleChanged).field_0x18);
      QueryPerformanceCounter(&local_res8);
      dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
      if (*(double *)&this->UpdateCameraStateFunc <= dVar1 &&
          dVar1 != *(double *)&this->UpdateCameraStateFunc) {
        *(undefined1 *)
         ((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 6) = 1;
      }
    }
  }
  *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 5) =
       0;
  TMulticastDelegate<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
             *)&(this->OnDragRectangleStarted).field_0x10,
            (FCameraRectangle *)&(this->OnDragRectangleChanged).field_0x18,false);
  return;
}

// OnTerminateDragSequence @ 14cb27b00

void __thiscall URectangleMarqueeMechanic::OnTerminateDragSequence(URectangleMarqueeMechanic *this)

{
  *(undefined1 *)((longlong)&(this->CameraRectangle).SelectionDomain.Rectangle.Min.field0_0x0 + 5) =
       0;
  TMulticastDelegate<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
             *)&(this->OnDragRectangleStarted).field_0x10,
            (FCameraRectangle *)&(this->OnDragRectangleChanged).field_0x18,true);
  return;
}

// Render @ 14cb30be0

void __thiscall
URectangleMarqueeMechanic::Render(URectangleMarqueeMechanic *this,IToolsContextRenderAPI *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined8 uVar14;
  double *pdVar15;
  UInteractiveTool *pUVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 local_res8 [8];
  undefined1 local_68 [96];
  
  if (this->bUseExternalUpdateCameraState != false) {
    if (*(longlong *)&this->UpdateCameraStateFunc == 0) {
      bVar13 = `URectangleMarqueeMechanic::Render'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar13) goto LAB_14cb30c98;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&this->UpdateCameraStateFunc);
    plVar17 = *(longlong **)&(this->UpdateCameraStateFunc).field_0x28;
    pcVar1 = *(code **)&this->UpdateCameraStateFunc;
    plVar18 = (longlong *)&(this->UpdateCameraStateFunc).field_0x10;
    if (plVar17 != (longlong *)0x0) {
      plVar18 = plVar17;
    }
    uVar14 = (**(code **)(*plVar18 + 8))();
    pdVar15 = (double *)(*pcVar1)(local_68,uVar14);
    dVar2 = pdVar15[1];
    dVar3 = pdVar15[2];
    dVar4 = pdVar15[3];
    dVar5 = pdVar15[4];
    dVar6 = pdVar15[5];
    dVar7 = pdVar15[6];
    dVar8 = pdVar15[7];
    dVar9 = pdVar15[8];
    dVar10 = pdVar15[9];
    dVar11 = pdVar15[10];
    dVar12 = pdVar15[0xb];
    (this->CameraRectangle).CameraState.Position.field0_0x0._s_0.X = *pdVar15;
    (this->CameraRectangle).CameraState.Position.field0_0x0._s_0.Y = dVar2;
    (this->CameraRectangle).CameraState.Position.field0_0x0._s_0.Z = dVar3;
    *(double *)&(this->CameraRectangle).CameraState.field_0x18 = dVar4;
    (this->CameraRectangle).CameraState.Orientation.X = dVar5;
    (this->CameraRectangle).CameraState.Orientation.Y = dVar6;
    (this->CameraRectangle).CameraState.Orientation.Z = dVar7;
    (this->CameraRectangle).CameraState.Orientation.W = dVar8;
    *(double *)&(this->CameraRectangle).CameraState.HorizontalFOVDegrees = dVar9;
    *(double *)&(this->CameraRectangle).CameraState.AspectRatio = dVar10;
    (this->CameraRectangle).CameraState.DPIScale = dVar11;
    *(double *)&(this->CameraRectangle).CameraState.field_0x58 = dVar12;
    return;
  }
LAB_14cb30c98:
  pUVar16 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  plVar17 = (longlong *)(**(code **)(pUVar16->_padding_ + 0x2d8))(pUVar16);
  plVar17 = (longlong *)(**(code **)(*plVar17 + 0x398))(plVar17);
                    /* WARNING: Could not recover jumptable at 0x00014cb30cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar17 + 0x18))(plVar17,&this->CameraRectangle,*(code **)(*plVar17 + 0x18));
  return;
}

// SetBasePriority @ 14cb35c20

void __thiscall
URectangleMarqueeMechanic::SetBasePriority
          (URectangleMarqueeMechanic *this,FInputCapturePriority *param_1)

{
  UClickDragInputBehavior *pUVar1;
  
  (this->BasePriority).Priority = param_1->Priority;
  pUVar1 = (this->ClickDragBehavior).field0_0x0.DebugPtr;
  if (pUVar1 != (UClickDragInputBehavior *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cb35c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    return;
  }
  return;
}

// SetIsEnabled @ 14cb36a00

void __thiscall
URectangleMarqueeMechanic::SetIsEnabled(URectangleMarqueeMechanic *this,bool param_1)

{
  if ((this->bIsDragging != false) && (!param_1)) {
    this->bIsDragging = false;
    TMulticastDelegate<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>::
    Broadcast(&this->OnDragRectangleFinished,&this->CameraRectangle,true);
    this->bIsEnabled = false;
    return;
  }
  this->bIsEnabled = param_1;
  return;
}

// Setup @ 14cb3b1e0

void __thiscall
URectangleMarqueeMechanic::Setup(URectangleMarqueeMechanic *this,UInteractiveTool *param_1)

{
  UClickDragInputBehavior *pUVar1;
  UObject *pUVar2;
  undefined1 *puVar3;
  
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  if (this->bUseExternalClickDragBehavior == false) {
    pUVar1 = NewObject<UClickDragInputBehavior>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UClickDragInputBehavior *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ClickDragBehavior).field0_0x0.DebugPtr = pUVar1;
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,&this->BasePriority);
    pUVar1 = (this->ClickDragBehavior).field0_0x0.DebugPtr;
    puVar3 = &this->field_0x30;
    if (this == (URectangleMarqueeMechanic *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    (**(code **)(*(longlong *)pUVar1 + 0x378))(pUVar1,puVar3);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    (**(code **)(*(longlong *)pUVar2 + 0x2f8))
              (pUVar2,(this->ClickDragBehavior).field0_0x0.DebugPtr,this);
  }
  this->bIsEnabled = true;
  return;
}

// StaticRegisterNativesURectangleMarqueeMechanic @ 14cb3ec90

void __cdecl URectangleMarqueeMechanic::StaticRegisterNativesURectangleMarqueeMechanic(void)

{
  return;
}

// operator() @ 1505767b0

bool __thiscall `URectangleMarqueeMechanic::Render'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5156035937368539446>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5156035937368539446>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

