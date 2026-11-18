// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 21

// StaticClass @ 14962b210

UClass * __cdecl UAxisAngleGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAxisAngleGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"AxisAngleGizmo",
               &Z_Registration_Info_UClass_UAxisAngleGizmo.InnerSingleton,
               StaticRegisterNativesUAxisAngleGizmo,0x1b0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAxisAngleGizmo>,
               InternalVTableHelperCtorCaller<UAxisAngleGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAxisAngleGizmo.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14962f290

bool __cdecl UAxisAngleGizmo::<lambda_60_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// <lambda_invoker_cdecl> @ 14962f2a0

bool __cdecl
UAxisAngleGizmo::<lambda_61_>::<lambda_invoker_cdecl>
          (FCustomDestinationParams *param_1,TVector<double> *param_2)

{
  return false;
}

// UAxisAngleGizmo @ 149639050

UAxisAngleGizmo * __thiscall
UAxisAngleGizmo::UAxisAngleGizmo(UAxisAngleGizmo *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->AxisSource = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->AngleSource = 0;
  *(undefined8 *)&(this->AngleSource).field_0x8 = 0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  *(undefined8 *)&this->StateTarget = 0;
  *(undefined8 *)&(this->StateTarget).field_0x8 = 0;
  (this->MouseBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  *(undefined8 *)&this->ShouldUseCustomDestinationFunc = 0;
  *(undefined8 *)&(this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldUseCustomDestinationFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldUseCustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_60_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldUseCustomDestinationFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->CustomDestinationFunc = 0;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->CustomDestinationFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFCustomDestinationParams_UAxisAngleGizmo__AEAU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->CustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_61_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CustomDestinationFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  this->bInInteraction = false;
  return this;
}

// UAxisAngleGizmo @ 149639150

UAxisAngleGizmo * __thiscall UAxisAngleGizmo::UAxisAngleGizmo(UAxisAngleGizmo *this)

{
  undefined1 *puVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->AxisSource = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->AngleSource = 0;
  *(undefined8 *)&(this->AngleSource).field_0x8 = 0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  *(undefined8 *)&this->StateTarget = 0;
  *(undefined8 *)&(this->StateTarget).field_0x8 = 0;
  (this->MouseBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  *(undefined8 *)&this->ShouldUseCustomDestinationFunc = 0;
  *(undefined8 *)&(this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldUseCustomDestinationFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldUseCustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_60_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldUseCustomDestinationFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->CustomDestinationFunc = 0;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->CustomDestinationFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFCustomDestinationParams_UAxisAngleGizmo__AEAU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->CustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_61_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CustomDestinationFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  this->bInInteraction = false;
  return this;
}

// ~UAxisAngleGizmo @ 14963df80

void __thiscall UAxisAngleGizmo::~UAxisAngleGizmo(UAxisAngleGizmo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  if (*(longlong *)&this->CustomDestinationFunc != 0) {
    plVar1 = *(longlong **)&(this->CustomDestinationFunc).field_0x28;
    plVar2 = (longlong *)&(this->CustomDestinationFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ShouldUseCustomDestinationFunc != 0) {
    plVar1 = *(longlong **)&(this->ShouldUseCustomDestinationFunc).field_0x28;
    plVar2 = (longlong *)&(this->ShouldUseCustomDestinationFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  return;
}

// BeginHoverSequenceHitTest @ 14964b2c0

FInputRayHit * __thiscall
UAxisAngleGizmo::BeginHoverSequenceHitTest
          (UAxisAngleGizmo *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  double dVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  undefined8 *puVar4;
  undefined1 local_48 [64];
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)this->_padding_ + 0x10))
                       ((longlong *)this->_padding_,local_48,param_1);
    dVar1 = (double)puVar4[1];
    *(undefined8 *)__return_storage_ptr__ = *puVar4;
    __return_storage_ptr__->HitDepth = dVar1;
    dVar1 = (double)puVar4[3];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = (double)puVar4[2];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dVar1;
    uVar2 = puVar4[5];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = (double)puVar4[4];
    __return_storage_ptr__->bHasHitNormal = (bool)(char)uVar2;
    *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)((ulonglong)uVar2 >> 8);
    __return_storage_ptr__->HitIdentifier = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FWeakObjectPtr *)(puVar4 + 7);
    __return_storage_ptr__->HitOwner = (void *)puVar4[6];
    (__return_storage_ptr__->HitObject).WeakPtr = FVar3;
  }
  return __return_storage_ptr__;
}

// CanBeginClickDragSequence @ 14964d000

FInputRayHit * __thiscall
UAxisAngleGizmo::CanBeginClickDragSequence
          (UAxisAngleGizmo *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  FWeakObjectPtr FVar7;
  undefined8 *puVar8;
  undefined1 local_48 [64];
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (this->_padding_ != 0)) &&
     (((this->_padding_ != 0 && (this->_padding_ != 0)) && (this->_padding_ != 0)))) {
    puVar8 = (undefined8 *)
             (**(code **)(*(longlong *)this->_padding_ + 0x10))
                       ((longlong *)this->_padding_,local_48,param_1);
    dVar1 = (double)puVar8[1];
    *(undefined8 *)__return_storage_ptr__ = *puVar8;
    __return_storage_ptr__->HitDepth = dVar1;
    dVar1 = (double)puVar8[3];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = (double)puVar8[2];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dVar1;
    uVar6 = puVar8[5];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = (double)puVar8[4];
    __return_storage_ptr__->bHasHitNormal = (bool)(char)uVar6;
    *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)((ulonglong)uVar6 >> 8);
    __return_storage_ptr__->HitIdentifier = (int)((ulonglong)uVar6 >> 0x20);
    FVar7 = *(FWeakObjectPtr *)(puVar8 + 7);
    __return_storage_ptr__->HitOwner = (void *)puVar8[6];
    (__return_storage_ptr__->HitObject).WeakPtr = FVar7;
    if (__return_storage_ptr__->bHit != false) {
      dVar1 = __return_storage_ptr__->HitDepth;
      dVar4 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
      dVar5 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
      dVar3 = dVar1 * (param_1->WorldRay).Direction.field0_0x0._s_0.Z +
              (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
      (this->InteractionStartPoint).field0_0x0._s_0.X =
           dVar1 * (param_1->WorldRay).Direction.field0_0x0._s_0.X +
           (param_1->WorldRay).Origin.field0_0x0._s_0.X;
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar1 * dVar4 + dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(this->InteractionStartPoint).field0_0x0 + 8) = auVar2;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149655710

UClass * __cdecl UAxisAngleGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAxisAngleGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"AxisAngleGizmo",
               &Z_Registration_Info_UClass_UAxisAngleGizmo.InnerSingleton,
               StaticRegisterNativesUAxisAngleGizmo,0x1b0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAxisAngleGizmo>,
               InternalVTableHelperCtorCaller<UAxisAngleGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAxisAngleGizmo.InnerSingleton;
}

// InitializeAsRotateGizmo @ 149659630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UAxisAngleGizmo::InitializeAsRotateGizmo
          (UAxisAngleGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  bool bVar1;
  UPackage *pUVar2;
  IGizmoAxisSource *pIVar3;
  IGizmoAxisSource *pIVar4;
  UGizmoScaledAndUnscaledTransformSources *local_res10 [2];
  UGizmoAxisRotationParameterSource *local_res20;
  
  if ((((param_1->Component != (UPrimitiveComponent *)0x0) &&
       (param_1->TransformProxy != (UTransformProxy *)0x0)) && (param_1->Axis != None)) &&
     (bVar1 = UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>
                        (this,param_1,param_2,local_res10), bVar1)) {
    pUVar2 = (UPackage *)param_1->OuterForSubobjects;
    if (pUVar2 == (UPackage *)0x0) {
      pUVar2 = GetTransientPackage();
    }
    pIVar3 = (IGizmoAxisSource *)0x0;
    pIVar4 = pIVar3;
    if (local_res10[0] != (UGizmoScaledAndUnscaledTransformSources *)0x0) {
      pIVar4 = (IGizmoAxisSource *)&local_res10[0]->_padding_;
    }
    if (*(longlong *)&this->AxisSource != 0) {
      pIVar3 = *(IGizmoAxisSource **)&(this->AxisSource).field_0x8;
    }
    local_res20 = UGizmoAxisRotationParameterSource::Construct
                            (pIVar3,(IGizmoTransformSource *)pIVar4,(UObject *)pUVar2);
    TScriptInterface<IGizmoFloatParameterSource>::operator=<UGizmoAxisRotationParameterSource_*_&>
              (&this->AngleSource,&local_res20);
    return true;
  }
  return false;
}

// OnBeginHover @ 14965cd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UAxisAngleGizmo::OnBeginHover(UAxisAngleGizmo *this,FInputDeviceRay *param_1)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014965cda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014965cdab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,1);
  return;
}

// OnClickDrag @ 14965ce80

void __thiscall UAxisAngleGizmo::OnClickDrag(UAxisAngleGizmo *this,FInputDeviceRay *param_1)

{
  TVector<double> *pTVar1;
  TScriptInterface<IGizmoClickTarget> *pTVar2;
  TObjectPtr<UClickDragInputBehavior>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  TScriptInterface<IGizmoClickTarget> *pTVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar12;
  undefined4 uVar13;
  bool local_res8 [8];
  FInputDeviceRay *local_res10;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_30;
  
  if (((this->ShouldUseCustomDestinationFunc).field_0x28 == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInInteraction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisAngleGizmo.cpp"
                         ,0x93,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res10 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->AngleSource);
  pcVar4 = *(code **)&this->AngleSource;
  pTVar2 = *(TScriptInterface<IGizmoClickTarget> **)&(this->StateTarget).field_0x8;
  pTVar8 = &this->HitTarget;
  if (pTVar2 != (TScriptInterface<IGizmoClickTarget> *)0x0) {
    pTVar8 = pTVar2;
  }
  uVar7 = (**(code **)(*(longlong *)pTVar8 + 8))();
  cVar6 = (*pcVar4)(uVar7);
  if (cVar6 != '\0') {
    UE::Core::Private::Function::CheckCallable((this->MouseBehavior).field0_0x0.DebugPtr);
    TVar3 = (this->MouseBehavior).field0_0x0;
    plVar10 = *(longlong **)&(this->ShouldUseCustomDestinationFunc).field_0x20;
    plVar9 = (longlong *)&(this->ShouldUseCustomDestinationFunc).field_0x8;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar6 = (*(code *)TVar3)(uVar7,&local_res10,&local_48);
    if (cVar6 != '\0') {
      pTVar1 = (TVector<double> *)((longlong)&(this->RotationPlaneX).field0_0x0 + 0x10);
      (pTVar1->field0_0x0)._s_0.X = local_48;
      (this->RotationPlaneY).field0_0x0._s_0.X = dStack_40;
      (this->RotationPlaneY).field0_0x0._s_0.Y = local_38;
      fVar11 = GizmoMath::ComputeAngleInPlane
                         (pTVar1,(TVector<double> *)&this->CustomDestinationFunc,
                          (TVector<double> *)&(this->CustomDestinationFunc).field_0x18,
                          (TVector<double> *)&this->bInInteraction,
                          (TVector<double> *)((longlong)&(this->RotationOrigin).field0_0x0 + 0x10));
      fVar12 = fVar11 - *(float *)((longlong)&(this->InteractionCurPoint).field0_0x0 + 4);
      uVar13 = extraout_XMM0_Db;
      goto LAB_14965d013;
    }
  }
  GizmoMath::RayPlaneIntersectionPoint
            ((TVector<double> *)&this->CustomDestinationFunc,
             (TVector<double> *)&(this->CustomDestinationFunc).field_0x18,(TVector<double> *)param_1
             ,&(param_1->WorldRay).Direction,local_res8,(TVector<double> *)&local_30._s_0);
  if (local_res8[0] == false) {
    return;
  }
  pTVar1 = (TVector<double> *)((longlong)&(this->RotationPlaneX).field0_0x0 + 0x10);
  (pTVar1->field0_0x0)._s_0.X = local_30._s_0.X;
  (this->RotationPlaneY).field0_0x0._s_0.X = local_30._s_0.Y;
  (this->RotationPlaneY).field0_0x0._s_0.Y = local_30._s_0.Z;
  fVar11 = GizmoMath::ComputeAngleInPlane
                     (pTVar1,(TVector<double> *)&this->CustomDestinationFunc,
                      (TVector<double> *)&(this->CustomDestinationFunc).field_0x18,
                      (TVector<double> *)&this->bInInteraction,
                      (TVector<double> *)((longlong)&(this->RotationOrigin).field0_0x0 + 0x10));
  fVar12 = fVar11 - *(float *)((longlong)&(this->RotationPlaneY).field0_0x0 + 0x10);
  uVar13 = extraout_XMM0_Db_00;
LAB_14965d013:
  *(float *)((longlong)&(this->RotationPlaneY).field0_0x0 + 0x14) = fVar11;
  if (this->_padding_ == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)this->_padding_;
  }
  (**(code **)(*plVar10 + 0x20))
            (plVar10,CONCAT44(uVar13,fVar12 + *(float *)&(this->InteractionCurPoint).field0_0x0));
  return;
}

// OnClickPress @ 14965d4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UAxisAngleGizmo::OnClickPress(UAxisAngleGizmo *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  undefined4 *puVar8;
  TVector<double> *pTVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  bool local_res8 [8];
  TVector<double>_u_0 local_88;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  TVector<double> local_40;
  
  if (((this->ShouldUseCustomDestinationFunc).field_0x28 != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInInteraction == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisAngleGizmo.cpp"
                         ,0x5e,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar11 = (longlong *)0x0;
  plVar10 = plVar11;
  if (this->_padding_ != 0) {
    plVar10 = (longlong *)this->_padding_;
  }
  puVar8 = (undefined4 *)(**(code **)(*plVar10 + 0x18))(plVar10,local_70);
  uVar13 = *puVar8;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x18 = uVar13;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x1c = uVar2;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x20 = uVar3;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x24 = uVar4;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x28 = *(undefined8 *)(puVar8 + 4);
  plVar10 = plVar11;
  if (this->_padding_ != 0) {
    plVar10 = (longlong *)this->_padding_;
  }
  pTVar9 = (TVector<double> *)(**(code **)(*plVar10 + 0x10))(uVar13,local_58);
  pTVar9 = GizmoMath::ProjectPointOntoLine
                     (&local_40,&this->InteractionStartPoint,pTVar9,
                      (TVector<double> *)&(this->CustomDestinationFunc).field_0x18);
  uVar13 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 4);
  uVar2 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 0xc);
  *(undefined4 *)&this->CustomDestinationFunc = *(undefined4 *)&pTVar9->field0_0x0;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x4 = uVar13;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x8 = uVar2;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0xc = uVar3;
  *(double *)&(this->CustomDestinationFunc).field_0x10 = (pTVar9->field0_0x0)._s_0.Z;
  plVar10 = plVar11;
  if (this->_padding_ != 0) {
    plVar10 = (longlong *)this->_padding_;
  }
  cVar7 = (**(code **)(*plVar10 + 0x20))();
  if (cVar7 == '\0') {
    GizmoMath::MakeNormalPlaneBasis
              ((TVector<double> *)&(this->CustomDestinationFunc).field_0x18,
               (TVector<double> *)&this->bInInteraction,
               (TVector<double> *)((longlong)&(this->RotationOrigin).field0_0x0 + 0x10));
  }
  else {
    plVar10 = plVar11;
    if (this->_padding_ != 0) {
      plVar10 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar10 + 0x28))
              (plVar10,&this->bInInteraction,
               (undefined1 *)((longlong)&(this->RotationOrigin).field0_0x0 + 0x10));
  }
  GizmoMath::RayPlaneIntersectionPoint
            ((TVector<double> *)&this->CustomDestinationFunc,
             (TVector<double> *)&(this->CustomDestinationFunc).field_0x18,(TVector<double> *)param_1
             ,&(param_1->WorldRay).Direction,local_res8,(TVector<double> *)&local_88._s_0);
  if ((local_res8[0] == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIntersects",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisAngleGizmo.cpp"
                         ,0x71,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar9 = (TVector<double> *)((longlong)&(this->RotationPlaneX).field0_0x0 + 0x10);
  (this->RotationAxis).field0_0x0._s_0.Z = local_88._s_0.X;
  (this->RotationPlaneX).field0_0x0._s_0.X = local_88._s_0.Y;
  (pTVar9->field0_0x0)._s_0.X = local_88._s_0.X;
  (this->RotationPlaneY).field0_0x0._s_0.X = local_88._s_0.Y;
  (this->RotationPlaneX).field0_0x0._s_0.Y = local_88._s_0.Z;
  (this->RotationPlaneY).field0_0x0._s_0.Y = local_88._s_0.Z;
  fVar12 = GizmoMath::ComputeAngleInPlane
                     (pTVar9,(TVector<double> *)&this->CustomDestinationFunc,
                      (TVector<double> *)&(this->CustomDestinationFunc).field_0x18,
                      (TVector<double> *)&this->bInInteraction,
                      (TVector<double> *)((longlong)&(this->RotationOrigin).field0_0x0 + 0x10));
  *(float *)((longlong)&(this->RotationPlaneY).field0_0x0 + 0x10) = fVar12;
  fVar5 = __real_3f490fdb;
  fVar14 = (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  *(float *)((longlong)&(this->RotationPlaneY).field0_0x0 + 0x14) = fVar12;
  if (fVar5 < fVar14) {
    uVar13 = __real_40490fdb;
    if ((fVar14 < __real_4016cbe4) && (uVar13 = __real_bfc90fdb, 0.0 < fVar12)) {
      uVar13 = __real_3fc90fdb;
    }
  }
  else {
    uVar13 = 0;
  }
  *(undefined4 *)((longlong)&(this->InteractionCurPoint).field0_0x0 + 4) = uVar13;
  plVar10 = plVar11;
  if (this->_padding_ != 0) {
    plVar10 = (longlong *)this->_padding_;
  }
  uVar13 = (**(code **)(*plVar10 + 0x10))();
  *(undefined4 *)&(this->InteractionCurPoint).field0_0x0 = uVar13;
  if (this->_padding_ != 0) {
    plVar11 = (longlong *)this->_padding_;
  }
  (**(code **)(*plVar11 + 0x18))(plVar11);
  (this->ShouldUseCustomDestinationFunc).field_0x28 = 1;
  if ((this->_padding_ != 0) && (*(longlong *)&this->AxisSource != 0)) {
    (**(code **)(**(longlong **)&this->AxisSource + 0x10))();
  }
  if ((this->_padding_ == 0) || (this->_padding_ == 0)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2278364100511662217>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisAngleGizmo.cpp"
                       ,0x89,"HitTarget");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(*(longlong *)this->_padding_ + 0x20))
              ((longlong *)this->_padding_,(this->ShouldUseCustomDestinationFunc).field_0x28);
  }
  return;
}

// OnClickRelease @ 14965dc70

void __thiscall UAxisAngleGizmo::OnClickRelease(UAxisAngleGizmo *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((this->ShouldUseCustomDestinationFunc).field_0x28 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInInteraction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisAngleGizmo.cpp"
                       ,0xc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)this->_padding_;
  }
  (**(code **)(*plVar3 + 0x28))();
  if ((this->_padding_ != 0) && (*(longlong *)&this->AxisSource != 0)) {
    (**(code **)(**(longlong **)&this->AxisSource + 0x18))();
  }
  (this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014965dcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,0);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2278364100511662281>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisAngleGizmo.cpp"
                     ,0xc9,"HitTarget");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnEndHover @ 14965e290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UAxisAngleGizmo::OnEndHover(UAxisAngleGizmo *this)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014965e2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014965e2ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,0);
  return;
}

// OnTerminateDragSequence @ 14965e430

void __thiscall UAxisAngleGizmo::OnTerminateDragSequence(UAxisAngleGizmo *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((this->ShouldUseCustomDestinationFunc).field_0x28 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInInteraction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisAngleGizmo.cpp"
                       ,0xd2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)this->_padding_;
  }
  (**(code **)(*plVar3 + 0x28))();
  if ((this->_padding_ != 0) && (*(longlong *)&this->AxisSource != 0)) {
    (**(code **)(**(longlong **)&this->AxisSource + 0x18))();
  }
  (this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014965e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,0);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2278364100511662299>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisAngleGizmo.cpp"
                     ,0xdb,"HitTarget");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnUpdateHover @ 14965e6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UAxisAngleGizmo::OnUpdateHover(UAxisAngleGizmo *this,FInputDeviceRay *param_1)

{
  if (this->_padding_ != 0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,1);
    return true;
  }
  (**(code **)(_DAT_00000000 + 0x18))(0,1);
  return true;
}

// OnUpdateModifierState @ 14965e7f0

void __thiscall
UAxisAngleGizmo::OnUpdateModifierState(UAxisAngleGizmo *this,int param_1,bool param_2)

{
  return;
}

// OnUpdateModifierState`adjustor{8}' @ 14965e7fc

/* [thunk]:public: virtual void __cdecl UAxisAngleGizmo::OnUpdateModifierState`adjustor{8}'
   (int,bool) __ptr64 */

void __thiscall
UAxisAngleGizmo::OnUpdateModifierState_adjustor_8__(UAxisAngleGizmo *this,int param_1,bool param_2)

{
  OnUpdateModifierState((UAxisAngleGizmo *)&this[-1].InitialTargetAngle,param_1,param_2);
  return;
}

// Setup @ 149663fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAxisAngleGizmo::Setup(UAxisAngleGizmo *this)

{
  UObject *pUVar1;
  UClickDragInputBehavior *pUVar2;
  UMouseHoverBehavior *pUVar3;
  UGizmoConstantAxisSource *pUVar4;
  UGizmoLocalFloatParameterSource *pUVar5;
  UGizmoComponentHitTarget *pUVar6;
  UGizmoNilStateTarget *pUVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 local_res8 [2];
  
  UInteractiveGizmo::Setup((UInteractiveGizmo *)this);
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UClickDragInputBehavior>(pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UClickDragInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  plVar9 = (longlong *)0x0;
  (this->MouseBehavior).field0_0x0.DebugPtr = pUVar2;
  plVar8 = &this->_padding_;
  if (this == (UAxisAngleGizmo *)0x0) {
    plVar8 = plVar9;
  }
  (**(code **)(*(longlong *)pUVar2 + 0x378))(pUVar2,plVar8);
  pUVar2 = (this->MouseBehavior).field0_0x0.DebugPtr;
  local_res8[0] = 0x32;
  (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,local_res8);
  (**(code **)(this->_padding_ + 0x2e0))(this,(this->MouseBehavior).field0_0x0.DebugPtr);
  pUVar1 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UMouseHoverBehavior>(pUVar1);
  plVar8 = &this->_padding_;
  if (this == (UAxisAngleGizmo *)0x0) {
    plVar8 = plVar9;
  }
  (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3,plVar8);
  local_res8[0] = 0x32;
  (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,local_res8);
  (**(code **)(this->_padding_ + 0x2e0))(this,pUVar3);
  pUVar4 = NewObject<UGizmoConstantAxisSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGizmoConstantAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  plVar8 = &pUVar4->_padding_;
  if (pUVar4 == (UGizmoConstantAxisSource *)0x0) {
    plVar8 = plVar9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGizmoConstantAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UGizmoConstantAxisSource **)&this->AxisSource = pUVar4;
  *(longlong **)&(this->AxisSource).field_0x8 = plVar8;
  pUVar5 = NewObject<UGizmoLocalFloatParameterSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  plVar8 = &pUVar5->_padding_;
  if (pUVar5 == (UGizmoLocalFloatParameterSource *)0x0) {
    plVar8 = plVar9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  *(UGizmoLocalFloatParameterSource **)&this->AngleSource = pUVar5;
  *(longlong **)&(this->AngleSource).field_0x8 = plVar8;
  pUVar6 = NewObject<UGizmoComponentHitTarget>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  plVar8 = &pUVar6->_padding_;
  if (pUVar6 == (UGizmoComponentHitTarget *)0x0) {
    plVar8 = plVar9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UGizmoComponentHitTarget **)&this->HitTarget = pUVar6;
  *(longlong **)&(this->HitTarget).field_0x8 = plVar8;
  pUVar7 = NewObject<UGizmoNilStateTarget>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UGizmoNilStateTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  plVar8 = (longlong *)&pUVar7->field_0x28;
  if (pUVar7 == (UGizmoNilStateTarget *)0x0) {
    plVar8 = plVar9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UGizmoNilStateTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UGizmoNilStateTarget **)&this->StateTarget = pUVar7;
  *(longlong **)&(this->StateTarget).field_0x8 = plVar8;
  this->bInInteraction = false;
  return;
}

// StaticRegisterNativesUAxisAngleGizmo @ 1496649a0

void __cdecl UAxisAngleGizmo::StaticRegisterNativesUAxisAngleGizmo(void)

{
  return;
}

