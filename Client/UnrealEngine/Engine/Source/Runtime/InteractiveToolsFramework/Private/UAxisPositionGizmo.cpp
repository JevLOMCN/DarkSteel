// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 20

// StaticClass @ 14962c240

UClass * __cdecl UAxisPositionGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAxisPositionGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"AxisPositionGizmo",
               &Z_Registration_Info_UClass_UAxisPositionGizmo.InnerSingleton,
               StaticRegisterNativesUAxisPositionGizmo,0x1a0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAxisPositionGizmo>,
               InternalVTableHelperCtorCaller<UAxisPositionGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAxisPositionGizmo.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14962f2b0

bool __cdecl UAxisPositionGizmo::<lambda_62_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// <lambda_invoker_cdecl> @ 14962f2c0

bool __cdecl
UAxisPositionGizmo::<lambda_63_>::<lambda_invoker_cdecl>
          (FCustomDestinationParams *param_1,TVector<double> *param_2)

{
  return false;
}

// UAxisPositionGizmo @ 1496392b0

UAxisPositionGizmo * __thiscall
UAxisPositionGizmo::UAxisPositionGizmo(UAxisPositionGizmo *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&this->AxisSource = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->ParameterSource = 0;
  *(undefined8 *)&(this->ParameterSource).field_0x8 = 0;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  *(undefined8 *)&this->StateTarget = 0;
  *(undefined8 *)&(this->StateTarget).field_0x8 = 0;
  (this->MouseBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  this->bEnableSignedAxis = false;
  *(undefined8 *)&this->ShouldUseCustomDestinationFunc = 0;
  *(undefined8 *)&(this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldUseCustomDestinationFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldUseCustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_62_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldUseCustomDestinationFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->CustomDestinationFunc = 0;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->CustomDestinationFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFCustomDestinationParams_UAxisPositionGizmo__AEAU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->CustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_63_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CustomDestinationFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  this->bCustomDestinationAlignsAxisOrigin = true;
  this->bInInteraction = false;
  this->ParameterSign = 1.0;
  this->InteractionStartAxisOriginParameterOffset = 0.0;
  return this;
}

// UAxisPositionGizmo @ 1496393d0

UAxisPositionGizmo * __thiscall UAxisPositionGizmo::UAxisPositionGizmo(UAxisPositionGizmo *this)

{
  undefined1 *puVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&this->AxisSource = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->ParameterSource = 0;
  *(undefined8 *)&(this->ParameterSource).field_0x8 = 0;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  *(undefined8 *)&this->StateTarget = 0;
  *(undefined8 *)&(this->StateTarget).field_0x8 = 0;
  (this->MouseBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  this->bEnableSignedAxis = false;
  *(undefined8 *)&this->ShouldUseCustomDestinationFunc = 0;
  *(undefined8 *)&(this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldUseCustomDestinationFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldUseCustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_62_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldUseCustomDestinationFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->CustomDestinationFunc = 0;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->CustomDestinationFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFCustomDestinationParams_UAxisPositionGizmo__AEAU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->CustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_63_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CustomDestinationFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  this->bCustomDestinationAlignsAxisOrigin = true;
  this->bInInteraction = false;
  this->ParameterSign = 1.0;
  this->InteractionStartAxisOriginParameterOffset = 0.0;
  return this;
}

// ~UAxisPositionGizmo @ 14963e040

void __thiscall UAxisPositionGizmo::~UAxisPositionGizmo(UAxisPositionGizmo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IHoverBehaviorTarget__;
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
  *(undefined ***)&this->field_0x40 = &___7IModifierToggleBehaviorTarget__6B_;
  *(undefined ***)&this->field_0x38 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  return;
}

// BeginHoverSequenceHitTest @ 14964b340

FInputRayHit * __thiscall
UAxisPositionGizmo::BeginHoverSequenceHitTest
          (UAxisPositionGizmo *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  double dVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  undefined8 *puVar4;
  undefined1 local_48 [64];
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if ((*(longlong *)&this->field_0x30 != 0) && (*(longlong *)&this->field_0x38 != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(**(longlong **)&this->field_0x38 + 0x10))
                       (*(longlong **)&this->field_0x38,local_48,param_1);
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

// CanBeginClickDragSequence @ 14964d100

FInputRayHit * __thiscall
UAxisPositionGizmo::CanBeginClickDragSequence
          (UAxisPositionGizmo *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

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
  if ((((*(longlong *)&this->field_0x38 != 0) && (*(longlong *)&this->field_0x40 != 0)) &&
      (*(longlong *)&this->field_0x10 != 0)) &&
     (((*(longlong *)&this->field_0x18 != 0 && (*(longlong *)&this->field_0x20 != 0)) &&
      (*(longlong *)&this->field_0x28 != 0)))) {
    puVar8 = (undefined8 *)
             (**(code **)(**(longlong **)&this->field_0x40 + 0x10))
                       (*(longlong **)&this->field_0x40,local_48,param_1);
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
      (this->InteractionStartPoint).field0_0x0._s_0.Y =
           dVar1 * (param_1->WorldRay).Direction.field0_0x0._s_0.X +
           (param_1->WorldRay).Origin.field0_0x0._s_0.X;
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar1 * dVar4 + dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(this->InteractionStartPoint).field0_0x0 + 0x10) = auVar2;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149655890

UClass * __cdecl UAxisPositionGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAxisPositionGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"AxisPositionGizmo",
               &Z_Registration_Info_UClass_UAxisPositionGizmo.InnerSingleton,
               StaticRegisterNativesUAxisPositionGizmo,0x1a0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAxisPositionGizmo>,
               InternalVTableHelperCtorCaller<UAxisPositionGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAxisPositionGizmo.InnerSingleton;
}

// InitializeAsScaleGizmo @ 149659990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UAxisPositionGizmo::InitializeAsScaleGizmo
          (UAxisPositionGizmo *this,FTransformSubGizmoCommonParams *param_1,bool param_2,
          FTransformSubGizmoSharedState *param_3)

{
  Type TVar1;
  USceneComponent *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UGizmoComponentAxisSource *pUVar6;
  UGizmoAxisScaleParameterSource *pUVar7;
  longlong *plVar8;
  IGizmoTransformSource *pIVar9;
  IGizmoAxisSource *pIVar10;
  undefined1 auStack_f8 [32];
  UGizmoScaledAndUnscaledTransformSources *local_d8;
  UGizmoAxisScaleParameterSource *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (((param_1->Component != (UPrimitiveComponent *)0x0) &&
      (param_1->TransformProxy != (UTransformProxy *)0x0)) && (TVar1 = param_1->Axis, TVar1 != None)
     ) {
    pIVar10 = (IGizmoAxisSource *)0x0;
    if (TVar1 == Y) {
      pIVar9 = (IGizmoTransformSource *)&DAT_00000001;
    }
    else {
      pIVar9 = (IGizmoTransformSource *)pIVar10;
      if (TVar1 == Z) {
        pIVar9 = (IGizmoTransformSource *)&DAT_00000002;
      }
    }
    bVar3 = UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>
                      (this,param_1,param_3,&local_d8);
    if (bVar3) {
      pUVar4 = (UPackage *)param_1->OuterForSubobjects;
      if (pUVar4 == (UPackage *)0x0) {
        pUVar4 = GetTransientPackage();
      }
      this->bEnableSignedAxis = true;
      if ((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
         (pUVar6 = param_3->UnitCardinalAxisSources[(longlong)pIVar9],
         pUVar6 == (UGizmoComponentAxisSource *)0x0)) {
        pUVar2 = *(USceneComponent **)(*(longlong *)&param_1->Component->field_0xa8 + 0x1b8);
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar4,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar5 = UGizmoComponentAxisSource::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar5);
        local_c8._8_8_ = pUVar4;
        pUVar6 = (UGizmoComponentAxisSource *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar8 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar8 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (USceneComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        (pUVar6->Component).field0_0x0.DebugPtr = pUVar2;
        pUVar6->AxisIndex = (int)pIVar9;
        pUVar6->bLocalAxes = false;
        if (param_3 != (FTransformSubGizmoSharedState *)0x0) {
          param_3->UnitCardinalAxisSources[(longlong)pIVar9] = pUVar6;
        }
      }
      pIVar9 = (IGizmoTransformSource *)&local_d8->_padding_;
      if (local_d8 == (UGizmoScaledAndUnscaledTransformSources *)0x0) {
        pIVar9 = (IGizmoTransformSource *)pIVar10;
      }
      if (pUVar6 != (UGizmoComponentAxisSource *)0x0) {
        pIVar10 = (IGizmoAxisSource *)&pUVar6->_padding_;
      }
      pUVar7 = UGizmoAxisScaleParameterSource::Construct(pIVar10,pIVar9,(UObject *)pUVar4);
      local_d0 = pUVar7;
      TScriptInterface<IGizmoFloatParameterSource>::operator=<UGizmoAxisScaleParameterSource_*_&>
                (&this->ParameterSource,&local_d0);
      pUVar7->bClampToZero = param_2;
      return true;
    }
  }
  return false;
}

// InitializeAsTranslateGizmo @ 149659e70

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
UAxisPositionGizmo::InitializeAsTranslateGizmo
          (UAxisPositionGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  bool bVar1;
  UPackage *pUVar2;
  UGizmoAxisTranslationParameterSource *pUVar3;
  IGizmoAxisSource *pIVar4;
  IGizmoAxisSource *pIVar5;
  IGizmoAxisSource *pIVar6;
  UGizmoScaledAndUnscaledTransformSources *local_res10;
  
  if ((((param_1->Component != (UPrimitiveComponent *)0x0) &&
       (param_1->TransformProxy != (UTransformProxy *)0x0)) && (param_1->Axis != None)) &&
     (bVar1 = UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>
                        (this,param_1,param_2,&local_res10), bVar1)) {
    pUVar2 = (UPackage *)param_1->OuterForSubobjects;
    if (pUVar2 == (UPackage *)0x0) {
      pUVar2 = GetTransientPackage();
    }
    pIVar6 = (IGizmoAxisSource *)0x0;
    pIVar5 = (IGizmoAxisSource *)&local_res10->_padding_;
    if (local_res10 == (UGizmoScaledAndUnscaledTransformSources *)0x0) {
      pIVar5 = pIVar6;
    }
    pIVar4 = pIVar6;
    if (*(longlong *)&this->AxisSource != 0) {
      pIVar4 = *(IGizmoAxisSource **)&(this->AxisSource).field_0x8;
    }
    pUVar3 = UGizmoAxisTranslationParameterSource::Construct
                       (pIVar4,(IGizmoTransformSource *)pIVar5,(UObject *)pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UGizmoAxisTranslationParameterSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pIVar5 = (IGizmoAxisSource *)&pUVar3->_padding_;
    if (pUVar3 == (UGizmoAxisTranslationParameterSource *)0x0) {
      pIVar5 = pIVar6;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UGizmoAxisTranslationParameterSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    *(UGizmoAxisTranslationParameterSource **)&this->ParameterSource = pUVar3;
    *(IGizmoAxisSource **)&(this->ParameterSource).field_0x8 = pIVar5;
    return true;
  }
  return false;
}

// OnBeginHover @ 14965cdc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UAxisPositionGizmo::OnBeginHover(UAxisPositionGizmo *this,FInputDeviceRay *param_1)

{
  if (*(longlong *)&this->field_0x30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014965cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x38 + 0x18))(*(longlong **)&this->field_0x38,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014965cddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,1);
  return;
}

// OnClickDrag @ 14965d050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UAxisPositionGizmo::OnClickDrag(UAxisPositionGizmo *this,FInputDeviceRay *param_1)

{
  float *pfVar1;
  TObjectPtr<UGizmoViewContext>_u_0 TVar2;
  UClickDragInputBehavior *pUVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  UClickDragInputBehavior *pUVar8;
  longlong *plVar9;
  float local_res8 [2];
  float local_res10 [2];
  FInputDeviceRay *local_res18 [2];
  TVector<double> local_48;
  TVector<double> local_30;
  
  local_res18[0] = param_1;
  UE::Core::Private::Function::CheckCallable((this->GizmoViewContext).field0_0x0.DebugPtr);
  TVar2 = (this->GizmoViewContext).field0_0x0;
  pUVar3 = (this->MouseBehavior).field0_0x0.DebugPtr;
  pUVar8 = (UClickDragInputBehavior *)&(this->HitTarget).field_0x8;
  if (pUVar3 != (UClickDragInputBehavior *)0x0) {
    pUVar8 = pUVar3;
  }
  uVar7 = (**(code **)(*(longlong *)pUVar8 + 8))();
  cVar6 = (*(code *)TVar2)(uVar7);
  if (cVar6 != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->bEnableSignedAxis);
    pcVar4 = *(code **)&this->bEnableSignedAxis;
    plVar5 = *(longlong **)&(this->ShouldUseCustomDestinationFunc).field_0x20;
    plVar9 = (longlong *)&(this->ShouldUseCustomDestinationFunc).field_0x8;
    if (plVar5 != (longlong *)0x0) {
      plVar9 = plVar5;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar6 = (*pcVar4)(uVar7,local_res18,&local_48);
    if (cVar6 != '\0') {
      pfVar1 = (float *)((longlong)&(this->InteractionAxis).field0_0x0._s_0.Z + 4);
      GizmoMath::NearestPointOnLine
                ((TVector<double> *)&this->CustomDestinationFunc,
                 (TVector<double> *)&(this->CustomDestinationFunc).field_0x18,&local_48,
                 (TVector<double> *)((longlong)&(this->InteractionOrigin).field0_0x0 + 0x10),pfVar1)
      ;
      if ((this->ShouldUseCustomDestinationFunc).field_0x28 == '\0') {
        local_res8[0] = *pfVar1 + 0.0;
        *pfVar1 = local_res8[0];
      }
      else {
        local_res8[0] =
             *(float *)((longlong)&(this->InteractionCurPoint).field0_0x0 + 0xc) + *pfVar1;
        *pfVar1 = local_res8[0];
      }
      goto LAB_14965d18c;
    }
  }
  GizmoMath::NearestPointOnLineToRay
            ((TVector<double> *)&this->CustomDestinationFunc,
             (TVector<double> *)&(this->CustomDestinationFunc).field_0x18,(TVector<double> *)param_1
             ,&(param_1->WorldRay).Direction,
             (TVector<double> *)((longlong)&(this->InteractionOrigin).field0_0x0 + 0x10),local_res8,
             &local_30,local_res10);
  local_res8[0] = local_res8[0] * *(float *)&(this->InteractionStartPoint).field0_0x0;
  *(float *)((longlong)&(this->InteractionAxis).field0_0x0 + 0x14) = local_res8[0];
LAB_14965d18c:
  if (*(longlong *)&this->field_0x20 != 0) {
    (**(code **)(**(longlong **)&this->field_0x28 + 0x20))();
    return;
  }
  (**(code **)(_DAT_00000000 + 0x20))
            (0,(local_res8[0] - *(float *)((longlong)&(this->InteractionAxis).field0_0x0 + 0x10)) +
               *(float *)((longlong)&(this->InteractionCurPoint).field0_0x0 + 8));
  return;
}

// OnClickPress @ 14965d7d0

void __thiscall UAxisPositionGizmo::OnClickPress(UAxisPositionGizmo *this,FInputDeviceRay *param_1)

{
  undefined1 *puVar1;
  double *pdVar2;
  bool *pbVar3;
  double dVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 uVar14;
  float fVar15;
  float local_res8 [2];
  float local_res10 [2];
  TVector<double>_u_0 local_78;
  TVector<double> local_60;
  undefined1 local_48 [32];
  
  uVar14 = *(undefined4 *)((longlong)&(this->InteractionStartPoint).field0_0x0 + 8);
  uVar6 = *(undefined4 *)((longlong)&(this->InteractionStartPoint).field0_0x0 + 0xc);
  uVar7 = *(undefined4 *)((longlong)&(this->InteractionStartPoint).field0_0x0 + 0x10);
  uVar8 = *(undefined4 *)((longlong)&(this->InteractionStartPoint).field0_0x0 + 0x14);
  plVar13 = (longlong *)0x0;
  dVar4 = (this->InteractionCurPoint).field0_0x0._s_0.X;
  *(undefined4 *)&this->CustomDestinationFunc = uVar14;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x4 = uVar6;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x8 = uVar7;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0xc = uVar8;
  *(double *)&(this->CustomDestinationFunc).field_0x10 = dVar4;
  plVar12 = plVar13;
  if (*(longlong *)&this->field_0x10 != 0) {
    plVar12 = *(longlong **)&this->field_0x18;
  }
  puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x18))(uVar14,local_48);
  puVar1 = &(this->CustomDestinationFunc).field_0x18;
  pdVar2 = &(this->InteractionAxis).field0_0x0._s_0.Z;
  pbVar3 = &this->bCustomDestinationAlignsAxisOrigin;
  uVar9 = puVar11[1];
  *(undefined8 *)puVar1 = *puVar11;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x20 = uVar9;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x28 = puVar11[2];
  GizmoMath::NearestPointOnLineToRay
            ((TVector<double> *)&this->CustomDestinationFunc,(TVector<double> *)puVar1,
             (TVector<double> *)param_1,&(param_1->WorldRay).Direction,(TVector<double> *)pbVar3,
             (float *)pdVar2,&local_60,local_res10);
  plVar12 = plVar13;
  if (*(longlong *)&this->field_0x10 != 0) {
    plVar12 = *(longlong **)&this->field_0x18;
  }
  (**(code **)(*plVar12 + 0x10))(plVar12,&local_78);
  uVar14 = __real_3f800000;
  if (((this->ParameterSource).field_0x8 != '\0') &&
     (((this->InteractionOrigin).field0_0x0._s_0.X - local_78._s_0.Y) *
      *(double *)&(this->CustomDestinationFunc).field_0x20 +
      (*(double *)pbVar3 - local_78._s_0.X) * *(double *)puVar1 +
      ((this->InteractionOrigin).field0_0x0._s_0.Y - local_78._s_0.Z) *
      *(double *)&(this->CustomDestinationFunc).field_0x28 < 0.0)) {
    uVar14 = __real_bf800000;
  }
  *(undefined4 *)&(this->InteractionStartPoint).field0_0x0 = uVar14;
  GizmoMath::NearestPointOnLine
            ((TVector<double> *)&this->CustomDestinationFunc,(TVector<double> *)puVar1,
             (TVector<double> *)&local_78._s_0,&local_60,local_res8);
  dVar4 = (this->InteractionOrigin).field0_0x0._s_0.Y;
  fVar15 = *(float *)pdVar2 * *(float *)&(this->InteractionStartPoint).field0_0x0;
  *(float *)((longlong)&(this->InteractionCurPoint).field0_0x0 + 0xc) =
       *(float *)pdVar2 - local_res8[0];
  uVar14 = *(undefined4 *)pbVar3;
  uVar6 = *(undefined4 *)&this->field_0x104;
  uVar7 = *(undefined4 *)&(this->InteractionOrigin).field0_0x0;
  uVar8 = *(undefined4 *)((longlong)&(this->InteractionOrigin).field0_0x0 + 4);
  *(float *)pdVar2 = fVar15;
  *(undefined4 *)((longlong)&(this->InteractionOrigin).field0_0x0 + 0x10) = uVar14;
  *(undefined4 *)((longlong)&(this->InteractionOrigin).field0_0x0 + 0x14) = uVar6;
  *(undefined4 *)&(this->InteractionAxis).field0_0x0 = uVar7;
  *(undefined4 *)((longlong)&(this->InteractionAxis).field0_0x0 + 4) = uVar8;
  (this->InteractionAxis).field0_0x0._s_0.Y = dVar4;
  *(float *)((longlong)&(this->InteractionAxis).field0_0x0 + 0x14) = fVar15;
  plVar12 = plVar13;
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar12 = *(longlong **)&this->field_0x28;
  }
  uVar14 = (**(code **)(*plVar12 + 0x10))();
  *(undefined4 *)((longlong)&(this->InteractionCurPoint).field0_0x0 + 8) = uVar14;
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar13 = *(longlong **)&this->field_0x28;
  }
  (**(code **)(*plVar13 + 0x18))(plVar13);
  (this->ShouldUseCustomDestinationFunc).field_0x29 = 1;
  if ((*(longlong *)&this->AxisSource != 0) && (*(longlong *)&(this->AxisSource).field_0x8 != 0)) {
    (**(code **)(**(longlong **)&(this->AxisSource).field_0x8 + 0x10))();
  }
  if ((*(longlong *)&this->field_0x38 == 0) || (*(longlong *)&this->field_0x40 == 0)) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7500148977795334325>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisPositionGizmo.cpp"
                        ,0xb5,"HitTarget");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    (**(code **)(**(longlong **)&this->field_0x40 + 0x20))
              (*(longlong **)&this->field_0x40,(this->ShouldUseCustomDestinationFunc).field_0x29);
  }
  return;
}

// OnClickRelease @ 14965dd40

void __thiscall
UAxisPositionGizmo::OnClickRelease(UAxisPositionGizmo *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((this->ShouldUseCustomDestinationFunc).field_0x29 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInInteraction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisPositionGizmo.cpp"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)&this->field_0x20 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)&this->field_0x28;
  }
  (**(code **)(*plVar3 + 0x28))();
  if ((*(longlong *)&this->AxisSource != 0) && (*(longlong *)&(this->AxisSource).field_0x8 != 0)) {
    (**(code **)(**(longlong **)&(this->AxisSource).field_0x8 + 0x18))();
  }
  (this->ShouldUseCustomDestinationFunc).field_0x29 = 0;
  if ((*(longlong *)&this->field_0x38 != 0) && (*(longlong *)&this->field_0x40 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014965ddc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x40 + 0x20))(*(longlong **)&this->field_0x40,0);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7500148977795334373>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisPositionGizmo.cpp"
                     ,0xe5,"HitTarget");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnEndHover @ 14965e2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UAxisPositionGizmo::OnEndHover(UAxisPositionGizmo *this)

{
  if (*(longlong *)&this->field_0x30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014965e2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x38 + 0x18))(*(longlong **)&this->field_0x38,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014965e2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,0);
  return;
}

// OnTerminateDragSequence @ 14965e500

void __thiscall UAxisPositionGizmo::OnTerminateDragSequence(UAxisPositionGizmo *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((this->ShouldUseCustomDestinationFunc).field_0x29 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInInteraction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisPositionGizmo.cpp"
                       ,0xee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)&this->field_0x20 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)&this->field_0x28;
  }
  (**(code **)(*plVar3 + 0x28))();
  if ((*(longlong *)&this->AxisSource != 0) && (*(longlong *)&(this->AxisSource).field_0x8 != 0)) {
    (**(code **)(**(longlong **)&(this->AxisSource).field_0x8 + 0x18))();
  }
  (this->ShouldUseCustomDestinationFunc).field_0x29 = 0;
  if ((*(longlong *)&this->field_0x38 != 0) && (*(longlong *)&this->field_0x40 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014965e588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x40 + 0x20))(*(longlong **)&this->field_0x40,0);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7500148977795334390>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\AxisPositionGizmo.cpp"
                     ,0xf6,"HitTarget");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnUpdateHover @ 14965e700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UAxisPositionGizmo::OnUpdateHover(UAxisPositionGizmo *this,FInputDeviceRay *param_1)

{
  if (*(longlong *)&this->field_0x30 != 0) {
    (**(code **)(**(longlong **)&this->field_0x38 + 0x18))(*(longlong **)&this->field_0x38,1);
    return true;
  }
  (**(code **)(_DAT_00000000 + 0x18))(0,1);
  return true;
}

// Setup @ 149664220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAxisPositionGizmo::Setup(UAxisPositionGizmo *this)

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
  plVar8 = (longlong *)&this->field_0x38;
  if (this == (UAxisPositionGizmo *)0x0) {
    plVar8 = plVar9;
  }
  (**(code **)(*(longlong *)pUVar2 + 0x378))(pUVar2,plVar8);
  pUVar2 = (this->MouseBehavior).field0_0x0.DebugPtr;
  local_res8[0] = 0x32;
  (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,local_res8);
  (**(code **)(*(longlong *)this + 0x2e0))(this,(this->MouseBehavior).field0_0x0.DebugPtr);
  pUVar1 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UMouseHoverBehavior>(pUVar1);
  plVar8 = (longlong *)&this->field_0x40;
  if (this == (UAxisPositionGizmo *)0x0) {
    plVar8 = plVar9;
  }
  (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3,plVar8);
  local_res8[0] = 0x32;
  (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,local_res8);
  (**(code **)(*(longlong *)this + 0x2e0))(this,pUVar3);
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
  *(UGizmoLocalFloatParameterSource **)&this->ParameterSource = pUVar5;
  *(longlong **)&(this->ParameterSource).field_0x8 = plVar8;
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

// StaticRegisterNativesUAxisPositionGizmo @ 1496649c0

void __cdecl UAxisPositionGizmo::StaticRegisterNativesUAxisPositionGizmo(void)

{
  return;
}

