// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 63

// StaticClass @ 14962eda0

UClass * __cdecl UCombinedTransformGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedTransformGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmo",
               &Z_Registration_Info_UClass_UCombinedTransformGizmo.InnerSingleton,
               StaticRegisterNativesUCombinedTransformGizmo,0x560,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombinedTransformGizmo>,
               InternalVTableHelperCtorCaller<UCombinedTransformGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedTransformGizmo.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14962f060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
`UCombinedTransformGizmo::Setup'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (UPrimitiveComponent *param_1,bool param_2)

{
  UClass *pUVar1;
  longlong *plVar2;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar1 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 14962f110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
`UCombinedTransformGizmo::Setup'::__l8::<lambda_2>::<lambda_invoker_cdecl>
          (UPrimitiveComponent *param_1,EToolContextCoordinateSystem param_2)

{
  UClass *pUVar1;
  longlong *plVar2;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar1 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2 == World);
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 14962f2d0

bool __cdecl UCombinedTransformGizmo::<lambda_64_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// <lambda_invoker_cdecl> @ 14962f2e0

bool __cdecl
UCombinedTransformGizmo::<lambda_65_>::<lambda_invoker_cdecl>
          (TRay<double> *param_1,TVector<double> *param_2)

{
  return false;
}

// UCombinedTransformGizmo @ 149639910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __thiscall
UCombinedTransformGizmo::UCombinedTransformGizmo
          (UCombinedTransformGizmo *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this,param_1);
  this->bSnapToWorldGrid = true;
  (this->RelativeTranslationSnapping).bEnabledDirectly = true;
  (this->RelativeTranslationSnapping).bEnabledInContext = false;
  (this->RelativeTranslationSnapping).bInheritFromContext = true;
  this->bGridSizeIsExplicit = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  (this->ActiveTarget).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  this->bRotationGridSizeIsExplicit = false;
  this->bSnapToWorldRotGrid = true;
  this->bSnapToScaleGrid = true;
  this->bUseContextCoordinateSystem = true;
  this->CurrentCoordinateSystem = Local;
  this->bUseContextGizmoMode = true;
  this->ActiveGizmoMode = Combined;
  *(undefined8 *)&this->OnDisplaySpaceTransformChanged = 0;
  *(undefined8 *)&(this->OnDisplaySpaceTransformChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDisplaySpaceTransformChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnDisplaySpaceTransformChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnSetActiveTarget = 0;
  *(undefined8 *)&(this->OnSetActiveTarget).field_0x8 = 0;
  *(undefined8 *)&(this->OnSetActiveTarget).field_0x10 = 0;
  *(undefined8 *)&(this->OnSetActiveTarget).field_0x18 = 2;
  *(undefined8 *)&this->OnAboutToClearActiveTarget = 0;
  *(undefined8 *)&(this->OnAboutToClearActiveTarget).field_0x8 = 0;
  *(undefined8 *)&(this->OnAboutToClearActiveTarget).field_0x10 = 0;
  *(undefined8 *)&(this->OnAboutToClearActiveTarget).field_0x18 = 2;
  *(undefined8 *)&this->OnVisibilityChanged = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x18 = 2;
  (this->GizmoActorBuilder).Object = (FCombinedTransformGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AxisPositionBuilderIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AxisPositionBuilderIdentifier).Data.ArrayNum = 0;
  (this->AxisPositionBuilderIdentifier).Data.ArrayMax = 0;
  (this->PlanePositionBuilderIdentifier).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlanePositionBuilderIdentifier).Data.ArrayNum = 0;
  (this->PlanePositionBuilderIdentifier).Data.ArrayMax = 0;
  (this->AxisAngleBuilderIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisAngleBuilderIdentifier).Data.ArrayNum = 0;
  (this->AxisAngleBuilderIdentifier).Data.ArrayMax = 0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateCoordSystemFunction = 0;
  *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x28 = 0;
  (this->ActiveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveComponents).ArrayNum = 0;
  (this->ActiveComponents).ArrayMax = 0;
  (this->ActiveGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGizmos).ArrayNum = 0;
  (this->ActiveGizmos).ArrayMax = 0;
  (this->TranslationSubGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslationSubGizmos).ArrayNum = 0;
  (this->TranslationSubGizmos).ArrayMax = 0;
  (this->RotationSubGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationSubGizmos).ArrayNum = 0;
  (this->RotationSubGizmos).ArrayMax = 0;
  (this->UniformScaleSubGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniformScaleSubGizmos).ArrayNum = 0;
  (this->UniformScaleSubGizmos).ArrayMax = 0;
  (this->NonUniformScaleSubGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonUniformScaleSubGizmos).ArrayNum = 0;
  (this->NonUniformScaleSubGizmos).ArrayMax = 0;
  (this->AxisScaleXGizmo).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AxisScaleYGizmo).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AxisScaleZGizmo).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)this->CustomTranslationDeltaConstraintFunctions = 0;
  *(undefined8 *)&this->CustomTranslationDeltaConstraintFunctions[0].field_0x28 = 0;
  *(undefined8 *)(this->CustomTranslationDeltaConstraintFunctions + 1) = 0;
  *(undefined8 *)&this->CustomTranslationDeltaConstraintFunctions[1].field_0x28 = 0;
  *(undefined8 *)(this->CustomTranslationDeltaConstraintFunctions + 2) = 0;
  *(undefined8 *)&this->CustomTranslationDeltaConstraintFunctions[2].field_0x28 = 0;
  *(undefined8 *)this->CustomRotationDeltaConstraintFunctions = 0;
  *(undefined8 *)&this->CustomRotationDeltaConstraintFunctions[0].field_0x28 = 0;
  *(undefined8 *)(this->CustomRotationDeltaConstraintFunctions + 1) = 0;
  *(undefined8 *)&this->CustomRotationDeltaConstraintFunctions[1].field_0x28 = 0;
  *(undefined8 *)(this->CustomRotationDeltaConstraintFunctions + 2) = 0;
  *(undefined8 *)&this->CustomRotationDeltaConstraintFunctions[2].field_0x28 = 0;
  *(undefined8 *)this->CustomScaleDeltaConstraintFunctions = 0;
  *(undefined8 *)&this->CustomScaleDeltaConstraintFunctions[0].field_0x28 = 0;
  *(undefined8 *)(this->CustomScaleDeltaConstraintFunctions + 1) = 0;
  *(undefined8 *)&this->CustomScaleDeltaConstraintFunctions[1].field_0x28 = 0;
  *(undefined8 *)(this->CustomScaleDeltaConstraintFunctions + 2) = 0;
  *(undefined8 *)&this->CustomScaleDeltaConstraintFunctions[2].field_0x28 = 0;
  (this->GizmoActor).field0_0x0.DebugPtr = (ACombinedTransformGizmoActor *)0x0;
  (this->CameraAxisSource).field0_0x0.DebugPtr = (UGizmoConstantFrameAxisSource *)0x0;
  (this->AxisXSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisYSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisZSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->UnitAxisXSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->UnitAxisYSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->UnitAxisZSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->StateTarget).field0_0x0.DebugPtr = (UGizmoTransformChangeStateTarget *)0x0;
  *(undefined8 *)&this->ShouldAlignDestination = 0;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAlignDestination).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldAlignDestination).field_0x18;
  *(code **)puVar1 = <lambda_64_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAlignDestination =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->DestinationAlignmentRayCaster = 0;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x28 = 0;
  *(undefined ***)&(this->DestinationAlignmentRayCaster).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->DestinationAlignmentRayCaster).field_0x18;
  *(code **)puVar1 = <lambda_65_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->DestinationAlignmentRayCaster =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  *(undefined8 *)&this->IsNonUniformScaleAllowedFunc = 0;
  *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x28 = 0;
  *(undefined ***)&(this->IsNonUniformScaleAllowedFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_66_>_UCombinedTransformGizmo___00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->IsNonUniformScaleAllowedFunc).field_0x18;
  *(UCombinedTransformGizmo **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->IsNonUniformScaleAllowedFunc =
         UE::Core::Private::Function::TFunctionRefCaller<UCombinedTransformGizmo::<lambda_66_>,bool>
         ::Call;
  }
  this->bDisallowNegativeScaling = false;
  (this->DisplaySpaceTransform).bIsSet = false;
  (this->SubGizmoSharedState).Ptr = (FTransformSubGizmoSharedState *)0x0;
  this->TransactionProviderAtLastSetActiveTarget = (IToolContextTransactionProvider *)0x0;
  this->PreviousActiveGizmoMode = Combined;
  return this;
}

// UCombinedTransformGizmo @ 149639c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __thiscall
UCombinedTransformGizmo::UCombinedTransformGizmo(UCombinedTransformGizmo *this)

{
  undefined1 *puVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this);
  this->bSnapToWorldGrid = true;
  (this->RelativeTranslationSnapping).bEnabledDirectly = true;
  (this->RelativeTranslationSnapping).bEnabledInContext = false;
  (this->RelativeTranslationSnapping).bInheritFromContext = true;
  this->bGridSizeIsExplicit = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  (this->ActiveTarget).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  this->bRotationGridSizeIsExplicit = false;
  this->bSnapToWorldRotGrid = true;
  this->bSnapToScaleGrid = true;
  this->bUseContextCoordinateSystem = true;
  this->CurrentCoordinateSystem = Local;
  this->bUseContextGizmoMode = true;
  this->ActiveGizmoMode = Combined;
  *(undefined8 *)&this->OnDisplaySpaceTransformChanged = 0;
  *(undefined8 *)&(this->OnDisplaySpaceTransformChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDisplaySpaceTransformChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnDisplaySpaceTransformChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnSetActiveTarget = 0;
  *(undefined8 *)&(this->OnSetActiveTarget).field_0x8 = 0;
  *(undefined8 *)&(this->OnSetActiveTarget).field_0x10 = 0;
  *(undefined8 *)&(this->OnSetActiveTarget).field_0x18 = 2;
  *(undefined8 *)&this->OnAboutToClearActiveTarget = 0;
  *(undefined8 *)&(this->OnAboutToClearActiveTarget).field_0x8 = 0;
  *(undefined8 *)&(this->OnAboutToClearActiveTarget).field_0x10 = 0;
  *(undefined8 *)&(this->OnAboutToClearActiveTarget).field_0x18 = 2;
  *(undefined8 *)&this->OnVisibilityChanged = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x18 = 2;
  (this->GizmoActorBuilder).Object = (FCombinedTransformGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AxisPositionBuilderIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AxisPositionBuilderIdentifier).Data.ArrayNum = 0;
  (this->AxisPositionBuilderIdentifier).Data.ArrayMax = 0;
  (this->PlanePositionBuilderIdentifier).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlanePositionBuilderIdentifier).Data.ArrayNum = 0;
  (this->PlanePositionBuilderIdentifier).Data.ArrayMax = 0;
  (this->AxisAngleBuilderIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisAngleBuilderIdentifier).Data.ArrayNum = 0;
  (this->AxisAngleBuilderIdentifier).Data.ArrayMax = 0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateCoordSystemFunction = 0;
  *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x28 = 0;
  (this->ActiveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveComponents).ArrayNum = 0;
  (this->ActiveComponents).ArrayMax = 0;
  (this->ActiveGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGizmos).ArrayNum = 0;
  (this->ActiveGizmos).ArrayMax = 0;
  (this->TranslationSubGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslationSubGizmos).ArrayNum = 0;
  (this->TranslationSubGizmos).ArrayMax = 0;
  (this->RotationSubGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationSubGizmos).ArrayNum = 0;
  (this->RotationSubGizmos).ArrayMax = 0;
  (this->UniformScaleSubGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniformScaleSubGizmos).ArrayNum = 0;
  (this->UniformScaleSubGizmos).ArrayMax = 0;
  (this->NonUniformScaleSubGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonUniformScaleSubGizmos).ArrayNum = 0;
  (this->NonUniformScaleSubGizmos).ArrayMax = 0;
  (this->AxisScaleXGizmo).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AxisScaleYGizmo).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AxisScaleZGizmo).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)this->CustomTranslationDeltaConstraintFunctions = 0;
  *(undefined8 *)&this->CustomTranslationDeltaConstraintFunctions[0].field_0x28 = 0;
  *(undefined8 *)(this->CustomTranslationDeltaConstraintFunctions + 1) = 0;
  *(undefined8 *)&this->CustomTranslationDeltaConstraintFunctions[1].field_0x28 = 0;
  *(undefined8 *)(this->CustomTranslationDeltaConstraintFunctions + 2) = 0;
  *(undefined8 *)&this->CustomTranslationDeltaConstraintFunctions[2].field_0x28 = 0;
  *(undefined8 *)this->CustomRotationDeltaConstraintFunctions = 0;
  *(undefined8 *)&this->CustomRotationDeltaConstraintFunctions[0].field_0x28 = 0;
  *(undefined8 *)(this->CustomRotationDeltaConstraintFunctions + 1) = 0;
  *(undefined8 *)&this->CustomRotationDeltaConstraintFunctions[1].field_0x28 = 0;
  *(undefined8 *)(this->CustomRotationDeltaConstraintFunctions + 2) = 0;
  *(undefined8 *)&this->CustomRotationDeltaConstraintFunctions[2].field_0x28 = 0;
  *(undefined8 *)this->CustomScaleDeltaConstraintFunctions = 0;
  *(undefined8 *)&this->CustomScaleDeltaConstraintFunctions[0].field_0x28 = 0;
  *(undefined8 *)(this->CustomScaleDeltaConstraintFunctions + 1) = 0;
  *(undefined8 *)&this->CustomScaleDeltaConstraintFunctions[1].field_0x28 = 0;
  *(undefined8 *)(this->CustomScaleDeltaConstraintFunctions + 2) = 0;
  *(undefined8 *)&this->CustomScaleDeltaConstraintFunctions[2].field_0x28 = 0;
  (this->GizmoActor).field0_0x0.DebugPtr = (ACombinedTransformGizmoActor *)0x0;
  (this->CameraAxisSource).field0_0x0.DebugPtr = (UGizmoConstantFrameAxisSource *)0x0;
  (this->AxisXSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisYSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisZSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->UnitAxisXSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->UnitAxisYSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->UnitAxisZSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->StateTarget).field0_0x0.DebugPtr = (UGizmoTransformChangeStateTarget *)0x0;
  *(undefined8 *)&this->ShouldAlignDestination = 0;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAlignDestination).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldAlignDestination).field_0x18;
  *(code **)puVar1 = <lambda_64_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAlignDestination =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->DestinationAlignmentRayCaster = 0;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x28 = 0;
  *(undefined ***)&(this->DestinationAlignmentRayCaster).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->DestinationAlignmentRayCaster).field_0x18;
  *(code **)puVar1 = <lambda_65_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->DestinationAlignmentRayCaster =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  *(undefined8 *)&this->IsNonUniformScaleAllowedFunc = 0;
  *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x28 = 0;
  *(undefined ***)&(this->IsNonUniformScaleAllowedFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_66_>_UCombinedTransformGizmo___00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->IsNonUniformScaleAllowedFunc).field_0x18;
  *(UCombinedTransformGizmo **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->IsNonUniformScaleAllowedFunc =
         UE::Core::Private::Function::TFunctionRefCaller<UCombinedTransformGizmo::<lambda_66_>,bool>
         ::Call;
  }
  this->bDisallowNegativeScaling = false;
  (this->DisplaySpaceTransform).bIsSet = false;
  (this->SubGizmoSharedState).Ptr = (FTransformSubGizmoSharedState *)0x0;
  this->TransactionProviderAtLastSetActiveTarget = (IToolContextTransactionProvider *)0x0;
  this->PreviousActiveGizmoMode = Combined;
  return this;
}

// ~UCombinedTransformGizmo @ 14963e1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::~UCombinedTransformGizmo(UCombinedTransformGizmo *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  ::operator_delete((this->SubGizmoSharedState).Ptr,0x48);
  if (*(longlong *)&this->IsNonUniformScaleAllowedFunc != 0) {
    plVar1 = *(longlong **)&(this->IsNonUniformScaleAllowedFunc).field_0x28;
    plVar4 = (longlong *)&(this->IsNonUniformScaleAllowedFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->DestinationAlignmentRayCaster != 0) {
    plVar1 = *(longlong **)&(this->DestinationAlignmentRayCaster).field_0x28;
    plVar4 = (longlong *)&(this->DestinationAlignmentRayCaster).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->ShouldAlignDestination != 0) {
    plVar1 = *(longlong **)&(this->ShouldAlignDestination).field_0x28;
    plVar4 = (longlong *)&(this->ShouldAlignDestination).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)(this->CustomScaleDeltaConstraintFunctions + 2) != 0) {
    plVar1 = *(longlong **)&this->CustomScaleDeltaConstraintFunctions[2].field_0x28;
    plVar4 = (longlong *)&this->CustomScaleDeltaConstraintFunctions[2].field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)(this->CustomScaleDeltaConstraintFunctions + 1) != 0) {
    plVar1 = *(longlong **)&this->CustomScaleDeltaConstraintFunctions[1].field_0x28;
    plVar4 = (longlong *)&this->CustomScaleDeltaConstraintFunctions[1].field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)this->CustomScaleDeltaConstraintFunctions != 0) {
    plVar1 = *(longlong **)&this->CustomScaleDeltaConstraintFunctions[0].field_0x28;
    plVar4 = (longlong *)&this->CustomScaleDeltaConstraintFunctions[0].field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)(this->CustomRotationDeltaConstraintFunctions + 2) != 0) {
    plVar1 = *(longlong **)&this->CustomRotationDeltaConstraintFunctions[2].field_0x28;
    plVar4 = (longlong *)&this->CustomRotationDeltaConstraintFunctions[2].field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)(this->CustomRotationDeltaConstraintFunctions + 1) != 0) {
    plVar1 = *(longlong **)&this->CustomRotationDeltaConstraintFunctions[1].field_0x28;
    plVar4 = (longlong *)&this->CustomRotationDeltaConstraintFunctions[1].field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)this->CustomRotationDeltaConstraintFunctions != 0) {
    plVar1 = *(longlong **)&this->CustomRotationDeltaConstraintFunctions[0].field_0x28;
    plVar4 = (longlong *)&this->CustomRotationDeltaConstraintFunctions[0].field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)(this->CustomTranslationDeltaConstraintFunctions + 2) != 0) {
    plVar1 = *(longlong **)&this->CustomTranslationDeltaConstraintFunctions[2].field_0x28;
    plVar4 = (longlong *)&this->CustomTranslationDeltaConstraintFunctions[2].field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)(this->CustomTranslationDeltaConstraintFunctions + 1) != 0) {
    plVar1 = *(longlong **)&this->CustomTranslationDeltaConstraintFunctions[1].field_0x28;
    plVar4 = (longlong *)&this->CustomTranslationDeltaConstraintFunctions[1].field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)this->CustomTranslationDeltaConstraintFunctions != 0) {
    plVar1 = *(longlong **)&this->CustomTranslationDeltaConstraintFunctions[0].field_0x28;
    plVar4 = (longlong *)&this->CustomTranslationDeltaConstraintFunctions[0].field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar2 = (this->NonUniformScaleSubGizmos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UniformScaleSubGizmos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RotationSubGizmos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TranslationSubGizmos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveGizmos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)&this->UpdateCoordSystemFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateCoordSystemFunction).field_0x28;
    plVar4 = (longlong *)&(this->UpdateCoordSystemFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateHoverFunction).field_0x28;
    plVar4 = (longlong *)&(this->UpdateHoverFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar2 = (this->AxisAngleBuilderIdentifier).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PlanePositionBuilderIdentifier).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AxisPositionBuilderIdentifier).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GizmoActorBuilder).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnVisibilityChanged).field_0x8,*(int *)&(this->OnVisibilityChanged).field_0x10
            );
  pvVar3 = *(void **)&(this->OnVisibilityChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVisibilityChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAboutToClearActiveTarget).field_0x8,
             *(int *)&(this->OnAboutToClearActiveTarget).field_0x10);
  pvVar3 = *(void **)&(this->OnAboutToClearActiveTarget).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAboutToClearActiveTarget);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSetActiveTarget).field_0x8,*(int *)&(this->OnSetActiveTarget).field_0x10);
  pvVar3 = *(void **)&(this->OnSetActiveTarget).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSetActiveTarget);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDisplaySpaceTransformChanged).field_0x8,
             *(int *)&(this->OnDisplaySpaceTransformChanged).field_0x10);
  pvVar3 = *(void **)&(this->OnDisplaySpaceTransformChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDisplaySpaceTransformChanged);
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  return;
}

// operator() @ 149640b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`UCombinedTransformGizmo::ApplyGizmoActiveMode'::__l8::<lambda_3>::operator()
          (void *this,UPrimitiveComponent *param_1,UPrimitiveComponent *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  char *pcVar6;
  atomic<unsigned_char> *paVar7;
  FWeakObjectPtr *this_00;
  UPrimitiveComponent *this_01;
  FWeakObjectPtr *pFVar8;
  int iVar9;
  UPrimitiveComponent *local_res8;
  
  lVar1 = *(longlong *)this;
  this_01 = param_1;
  if (*(char *)(lVar1 + 0x85) == '\b') {
    this_01 = param_2;
    param_2 = param_1;
  }
  if ((param_2 != (UPrimitiveComponent *)0x0) && (this_01 != (UPrimitiveComponent *)0x0)) {
    this_00 = *(FWeakObjectPtr **)(lVar1 + 0x200);
    pFVar8 = this_00 + (longlong)*(int *)(lVar1 + 0x208) * 2;
    for (; this_00 != pFVar8; this_00 = this_00 + 2) {
      bVar3 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
              UEOpEquals<UPrimitiveComponent,bool>
                        ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)this_00,param_2);
      if ((bVar3) ||
         (bVar3 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
                  UEOpEquals<UPrimitiveComponent,bool>
                            ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)this_00,this_01),
         bVar3)) {
        if (this_00 == (FWeakObjectPtr *)0x0) {
          return;
        }
        bVar3 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
                UEOpEquals<UPrimitiveComponent,bool>
                          ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)this_00,param_2);
        if (bVar3) {
          return;
        }
        pUVar4 = FWeakObjectPtr::Get(this_00 + 1);
        if (pUVar4 != (UObject *)0x0) {
          pUVar5 = UAxisPositionGizmo::StaticClass();
          iVar9 = (int)pUVar5->_padding_;
          if ((iVar9 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
              &pUVar5->_padding_)) {
            lVar1 = *(longlong *)&pUVar4[2].field_0x20;
            if (lVar1 != 0) {
              pUVar5 = Z_Construct_UClass_UGizmoComponentHitTarget_NoRegister();
              iVar9 = (int)pUVar5->_padding_;
              if ((iVar9 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar9 * 8) ==
                  &pUVar5->_padding_)) {
                USceneComponent::SetVisibility((USceneComponent *)this_01,false,DirtyOnly);
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)param_2);
                }
                *(UPrimitiveComponent **)(lVar1 + 0x30) = param_2;
                local_res8 = param_2;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)param_2);
                }
                FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
                return;
              }
            }
            pcVar6 = "HitTarget";
            iVar9 = 0x4ec;
            paVar7 = &bGEnsureHasExecuted<4678433611253286124>;
            goto LAB_149640c95;
          }
        }
        pcVar6 = "SubGizmo";
        iVar9 = 0x4ea;
        paVar7 = &bGEnsureHasExecuted<4678433611253286122>;
LAB_149640c95:
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (paVar7,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                           ,iVar9,pcVar6);
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// operator() @ 149641060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`UCombinedTransformGizmo::ApplyGizmoActiveMode'::__l8::<lambda_4>::operator()
          (void *this,UViewAdjustedStaticMeshGizmoComponent *param_1,Type param_2)

{
  TTransform<double> *pTVar1;
  TVector<double> *pTVar2;
  undefined1 auStack_118 [32];
  TSharedPtr<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> local_e8;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  if (param_1 != (UViewAdjustedStaticMeshGizmoComponent *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
    pTVar2 = &CombinedTransformGizmoLocals::CornerScalePositionSeparate;
    local_d8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_d8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    if (*(char *)(*(longlong *)this + 0x85) == '\b') {
      pTVar2 = &CombinedTransformGizmoLocals::CornerScalePositionCombined;
    }
    local_d8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_d8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84(CombinedTransformGizmoLocals::CornerScaleHandleScale,0);
    local_d8.Scale3D.XY.m128d_f64[0] = CombinedTransformGizmoLocals::CornerScaleHandleScale;
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)CombinedTransformGizmoLocals::CornerScaleHandleScale >> 0x20);
    local_d8.Translation.XY.m128d_f64[0] = (pTVar2->field0_0x0)._s_0.X;
    local_d8.Translation.XY.m128d_f64[1] = (pTVar2->field0_0x0)._s_0.Y;
    local_d8.Translation.ZW.m128d_f64[0] = (pTVar2->field0_0x0)._s_0.Z;
    local_d8.Translation.ZW.m128d_f64[1] = 0.0;
    local_d8.Scale3D.ZW.m128d_f64[0] = CombinedTransformGizmoLocals::CornerScaleHandleScale;
    local_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
    pTVar1 = UE::GizmoUtil::GetRotatedBasisTransform(&local_78,&local_d8,param_2);
    USceneComponent::SetRelativeTransform
              ((USceneComponent *)param_1,pTVar1,false,(FHitResult *)0x0,None);
    UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::AddTransformAdjuster
              (&local_e8,param_1,
               *(USceneComponent **)(*(longlong *)(*(longlong *)this + 1000) + 0x1b8),
               *(char *)(*(longlong *)this + 0x85) == '\b');
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// AddAxisRotationGizmo @ 1496452b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddAxisRotationGizmo
          (UCombinedTransformGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  int *piVar1;
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  UPrimitiveComponent *pUVar6;
  FWeakObjectPtr *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  UAxisAngleGizmo *pUVar14;
  UClass *pUVar15;
  UInteractiveGizmo *pUVar16;
  UPackage *pUVar17;
  UAxisAngleGizmo *pUVar18;
  UAxisAngleGizmo *pUVar19;
  undefined4 uVar20;
  undefined1 auStackY_128 [32];
  UPrimitiveComponent *local_d8;
  UAxisAngleGizmo *local_d0;
  FWeakObjectPtr local_c8;
  FWeakObjectPtr FStack_c0;
  void *local_b8;
  undefined8 local_b0;
  UGizmoScaledAndUnscaledTransformSources *local_a8;
  UGizmoAxisRotationParameterSource *local_a0;
  UPrimitiveComponent *local_98;
  UAxisAngleGizmo *local_90 [2];
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  plVar13 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar18 = (UAxisAngleGizmo *)0x0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  pUVar14 = (UAxisAngleGizmo *)
            (**(code **)(*plVar13 + 0x2d0))(plVar13,&this->AxisAngleBuilderIdentifier,&local_b8,0);
  if (pUVar14 == (UAxisAngleGizmo *)0x0) {
LAB_14964533a:
    pUVar14 = pUVar18;
  }
  else {
    pUVar15 = UAxisAngleGizmo::StaticClass();
    iVar12 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar15->_padding_)) goto LAB_14964533a;
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (pUVar14 == (UAxisAngleGizmo *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286509>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x66d,"Gizmo");
    if (!bVar11) {
      return (UInteractiveGizmo *)0x0;
    }
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
  uVar20 = 0;
  if ((((param_1->Component == (UPrimitiveComponent *)0x0) ||
       (param_1->TransformProxy == (UTransformProxy *)0x0)) || (param_1->Axis == None)) ||
     (bVar11 = UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>
                         (pUVar14,param_1,param_2,&local_a8), !bVar11)) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286513>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x671,"Gizmo->InitializeAsRotateGizmo(Params, &SharedState)");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
      return pUVar16;
    }
  }
  else {
    pUVar17 = (UPackage *)param_1->OuterForSubobjects;
    if (pUVar17 == (UPackage *)0x0) {
      pUVar17 = GetTransientPackage();
    }
    pUVar19 = (UAxisAngleGizmo *)&local_a8->_padding_;
    if (local_a8 == (UGizmoScaledAndUnscaledTransformSources *)0x0) {
      pUVar19 = pUVar18;
    }
    if (*(longlong *)&pUVar14->AxisSource != 0) {
      pUVar18 = *(UAxisAngleGizmo **)&(pUVar14->AxisSource).field_0x8;
    }
    local_a0 = UGizmoAxisRotationParameterSource::Construct
                         ((IGizmoAxisSource *)pUVar18,(IGizmoTransformSource *)pUVar19,
                          (UObject *)pUVar17);
    TScriptInterface<IGizmoFloatParameterSource>::operator=<UGizmoAxisRotationParameterSource_*_&>
              (&pUVar14->AngleSource,&local_a0);
  }
  lVar5 = *(longlong *)&pUVar14->AngleSource;
  if (lVar5 != 0) {
    pUVar15 = Z_Construct_UClass_UGizmoAxisRotationParameterSource_NoRegister();
    iVar12 = (int)pUVar15->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar12 * 8)
        == &pUVar15->_padding_)) {
      if (param_1->Axis == Y) {
        uVar20 = 1;
      }
      else if (param_1->Axis == Z) {
        uVar20 = 2;
      }
      local_78 = *(longlong *)(lVar5 + 0x50);
      uVar10 = *(undefined8 *)(lVar5 + 0x58);
      local_68 = *(longlong *)(lVar5 + 0x60);
      uStack_60 = *(undefined8 *)(lVar5 + 0x68);
      local_58 = *(undefined8 *)(lVar5 + 0x70);
      plStack_50 = *(longlong **)(lVar5 + 0x78);
      *(code **)(lVar5 + 0x50) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l8::<lambda_1>,bool,double,double_&>
           ::Call;
      *(undefined8 *)(lVar5 + 0x58) = uStack_70;
      *(undefined4 *)(lVar5 + 0x60) = 0x51e77738;
      *(undefined4 *)(lVar5 + 100) = 1;
      *(UCombinedTransformGizmo **)(lVar5 + 0x68) = this;
      *(undefined4 *)(lVar5 + 0x70) = uVar20;
      *(undefined4 *)(lVar5 + 0x74) = local_7c;
      *(undefined4 *)(lVar5 + 0x78) = 0;
      *(undefined4 *)(lVar5 + 0x7c) = 0;
      uStack_70 = uVar10;
      if (local_78 != 0) {
        plVar13 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar13 = plStack_50;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      goto LAB_149645529;
    }
  }
  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4678433611253286522>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                      ,0x67a,"false");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
LAB_149645529:
  pTVar2 = &this->RotationSubGizmos;
  pUVar6 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_c8.ObjectIndex = 0;
  local_c8.ObjectSerialNumber = 0;
  local_98 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_98);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  FStack_c0.ObjectIndex = 0;
  FStack_c0.ObjectSerialNumber = 0;
  local_90[0] = pUVar14;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  FWeakObjectPtr::operator=(&FStack_c0,(FObjectPtr)local_90);
  pFVar7 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar7 <= &local_c8) &&
      (&local_c8 < pFVar7 + (longlong)(this->RotationSubGizmos).ArrayMax * 2)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
  iVar12 = (this->RotationSubGizmos).ArrayNum;
  piVar1 = &(this->RotationSubGizmos).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RotationSubGizmos).ArrayNum = iVar12 + 1;
  pTVar3 = &this->ActiveComponents;
  pFVar7 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10);
  *pFVar7 = local_c8;
  pFVar7[1] = FStack_c0;
  local_d8 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_d8 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  pFVar8 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 <
       pFVar8 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
  iVar12 = (this->ActiveComponents).ArrayNum;
  piVar1 = &(this->ActiveComponents).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ActiveComponents).ArrayNum = iVar12 + 1;
  *(UPrimitiveComponent **)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_d8 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  pTVar4 = &this->ActiveGizmos;
  local_d0 = pUVar14;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_d0) &&
      ((FScriptContainerElement *)&local_d0 < pFVar8 + (longlong)(this->ActiveGizmos).ArrayMax * 8))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar11)) {
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
  iVar12 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar4->AllocatorInstance,piVar1);
  }
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar12 + 1;
  *(UAxisAngleGizmo **)(pFVar8 + (longlong)iVar12 * 8) = local_d0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UAxisAngleGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_d0);
  }
  return (UInteractiveGizmo *)pUVar14;
}

// AddAxisRotationGizmo @ 149645820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddAxisRotationGizmo
          (UCombinedTransformGizmo *this,UPrimitiveComponent *param_1,USceneComponent *param_2,
          IGizmoAxisSource *param_3,IGizmoTransformSource *param_4,IGizmoStateTarget *param_5)

{
  int *piVar1;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  UInteractiveGizmo *pUVar11;
  UClass *pUVar12;
  UInteractiveGizmo *this_00;
  UInteractiveGizmo *pUVar13;
  UGizmoAxisRotationParameterSource *pUVar14;
  UGizmoComponentHitTarget *pUVar15;
  UObject *this_01;
  UObject *pUVar16;
  TObjectPtr<UInputBehaviorSet>_u_0 *pTVar17;
  longlong lVar18;
  UInteractiveGizmo *pUVar19;
  UObject *pUVar20;
  undefined1 auStack_178 [32];
  UInteractiveGizmo **local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  UInteractiveGizmo *local_128;
  void *local_120;
  undefined8 local_118;
  IGizmoTransformSource *local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  TObjectPtr<UInputBehaviorSet>_u_0 local_98;
  longlong lStack_90;
  undefined8 local_88;
  TObjectPtr<UInputBehaviorSet>_u_0 *pTStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  TObjectPtr<UInputBehaviorSet>_u_0 TStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_110 = param_4;
  plVar10 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar19 = (UInteractiveGizmo *)0x0;
  local_120 = (void *)0x0;
  local_118 = 0;
  pUVar11 = (UInteractiveGizmo *)
            (**(code **)(*plVar10 + 0x2d0))(plVar10,&this->AxisAngleBuilderIdentifier,&local_120,0);
  if (pUVar11 != (UInteractiveGizmo *)0x0) {
    pUVar12 = UAxisAngleGizmo::StaticClass();
    iVar9 = (int)pUVar12->_padding_;
    if ((iVar9 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar9 * 8)
        == &pUVar12->_padding_)) goto LAB_1496458c9;
  }
  pUVar11 = pUVar19;
LAB_1496458c9:
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  if ((pUVar11 == (UInteractiveGizmo *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RotateGizmo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x761,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pUVar11 = (UInteractiveGizmo *)(*pcVar4)();
    return pUVar11;
  }
  pUVar13 = pUVar19;
  if ((param_3 != (IGizmoAxisSource *)0x0) &&
     (this_00 = (UInteractiveGizmo *)(**(code **)((longlong)*param_3 + 8))(param_3),
     this_00 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar12 = Z_Construct_UClass_UGizmoAxisSource_NoRegister();
    pUVar13 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar12);
    pUVar19 = this_00;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  pUVar11[1]._padding_ = (longlong)pUVar19;
  pUVar11[1]._padding_ = (longlong)pUVar13;
  pUVar14 = UGizmoAxisRotationParameterSource::Construct(param_3,local_110,(UObject *)this);
  pUVar20 = (UObject *)0x0;
  local_d8 = *(longlong *)&pUVar14->AngleDeltaConstraintFunction;
  uVar6 = *(undefined8 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x8;
  local_c8 = *(longlong *)&(pUVar14->AngleDeltaConstraintFunction).field_0x10;
  uStack_c0 = *(undefined8 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x20;
  plStack_b0 = *(longlong **)&(pUVar14->AngleDeltaConstraintFunction).field_0x28;
  *(code **)&pUVar14->AngleDeltaConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l2::<lambda_1>,bool,double,double_&>
       ::Call;
  *(undefined8 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x8 = uStack_d0;
  *(undefined4 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x10 = 0x51e77998;
  *(undefined4 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar14->AngleDeltaConstraintFunction).field_0x18 = this;
  *(undefined4 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x20 = (undefined4)local_b8;
  *(undefined4 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x24 = local_b8._4_4_;
  *(undefined4 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar14->AngleDeltaConstraintFunction).field_0x2c = 0;
  uStack_d0 = uVar6;
  local_b8 = uVar5;
  if (local_d8 != 0) {
    plVar10 = &local_c8;
    if (plStack_b0 != (longlong *)0x0) {
      plVar10 = plStack_b0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  pUVar16 = pUVar20;
  if (pUVar14 != (UGizmoAxisRotationParameterSource *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    pUVar16 = (UObject *)&pUVar14->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UGizmoAxisRotationParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  pUVar11[1]._padding_ = (longlong)pUVar14;
  pUVar11[1]._padding_ = (longlong)pUVar16;
  pUVar15 = UGizmoComponentHitTarget::Construct(param_1,(UObject *)this);
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    local_108 = *(longlong *)&pUVar15->UpdateHoverFunction;
    uVar5 = *(undefined8 *)&(pUVar15->UpdateHoverFunction).field_0x8;
    local_f8 = *(longlong *)&(pUVar15->UpdateHoverFunction).field_0x10;
    uStack_f0 = *(undefined8 *)&(pUVar15->UpdateHoverFunction).field_0x18;
    local_e8 = *(undefined8 *)&(pUVar15->UpdateHoverFunction).field_0x20;
    plStack_e0 = *(longlong **)&(pUVar15->UpdateHoverFunction).field_0x28;
    *(code **)&pUVar15->UpdateHoverFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l12::<lambda_2>,void,bool>
         ::Call;
    *(undefined8 *)&(pUVar15->UpdateHoverFunction).field_0x8 = uStack_100;
    *(undefined4 *)&(pUVar15->UpdateHoverFunction).field_0x10 = 0x51e779b8;
    *(undefined4 *)&(pUVar15->UpdateHoverFunction).field_0x14 = 1;
    *(UPrimitiveComponent **)&(pUVar15->UpdateHoverFunction).field_0x18 = param_1;
    *(UCombinedTransformGizmo **)&(pUVar15->UpdateHoverFunction).field_0x20 = this;
    *(undefined4 *)&(pUVar15->UpdateHoverFunction).field_0x28 = 0;
    *(undefined4 *)&(pUVar15->UpdateHoverFunction).field_0x2c = 0;
    uStack_100 = uVar5;
    if (local_108 != 0) {
      plVar10 = &local_f8;
      if (plStack_e0 != (longlong *)0x0) {
        plVar10 = plStack_e0;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  pUVar16 = pUVar20;
  if (pUVar15 != (UGizmoComponentHitTarget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    pUVar16 = (UObject *)&pUVar15->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pUVar11[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)pUVar15;
  pUVar11[2]._padding_ = (longlong)pUVar16;
  pUVar16 = pUVar20;
  if ((param_5 != (IGizmoStateTarget *)0x0) &&
     (this_01 = (UObject *)(**(code **)((longlong)*param_5 + 8))(param_5), this_01 != (UObject *)0x0
     )) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_01);
    }
    pUVar12 = Z_Construct_UClass_UGizmoStateTarget_NoRegister();
    pUVar16 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar12);
    pUVar20 = this_01;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar20);
  }
  pUVar11[2]._padding_ = (longlong)pUVar20;
  pUVar11[2]._padding_ = (longlong)pUVar16;
  local_a8 = pUVar11[2]._padding_;
  lVar7 = pUVar11[2]._padding_;
  local_98 = pUVar11[2].InputBehaviors.field0_0x0;
  lStack_90 = pUVar11[3]._padding_;
  lVar18 = pUVar11[3]._padding_;
  pTStack_80 = (TObjectPtr<UInputBehaviorSet>_u_0 *)pUVar11[3]._padding_;
  pUVar11[2]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l2::<lambda_3>,bool>::
       Call;
  pUVar11[2]._padding_ = lStack_a0;
  *(undefined4 *)&pUVar11[2].InputBehaviors.field0_0x0 = 0x51e779d8;
  *(undefined4 *)((longlong)&pUVar11[2].InputBehaviors.field0_0x0 + 4) = 1;
  pUVar11[3]._padding_ = (longlong)this;
  *(undefined4 *)&pUVar11[3]._padding_ = (undefined4)local_88;
  *(undefined4 *)((longlong)&pUVar11[3]._padding_ + 4) = local_88._4_4_;
  *(undefined4 *)&pUVar11[3]._padding_ = 0;
  *(undefined4 *)((longlong)&pUVar11[3]._padding_ + 4) = 0;
  lStack_a0 = lVar7;
  local_88 = lVar18;
  if (local_a8 != 0) {
    pTVar17 = &local_98;
    if (pTStack_80 != (TObjectPtr<UInputBehaviorSet>_u_0 *)0x0) {
      pTVar17 = pTStack_80;
    }
    (*(code *)pTVar17->DebugPtr->_padding_)();
  }
  local_78 = pUVar11[3]._padding_;
  lVar7 = pUVar11[3]._padding_;
  local_68 = pUVar11[3]._padding_;
  TStack_60 = pUVar11[3].InputBehaviors.field0_0x0;
  lVar18 = pUVar11[4]._padding_;
  plStack_50 = (longlong *)pUVar11[4]._padding_;
  pUVar11[3]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l2::<lambda_4>,bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
       ::Call;
  pUVar11[3]._padding_ = lStack_70;
  *(undefined4 *)&pUVar11[3]._padding_ = 0x51e779f8;
  *(undefined4 *)((longlong)&pUVar11[3]._padding_ + 4) = 1;
  pUVar11[3].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)this;
  *(undefined4 *)&pUVar11[4]._padding_ = (undefined4)local_58;
  *(undefined4 *)((longlong)&pUVar11[4]._padding_ + 4) = local_58._4_4_;
  *(undefined4 *)&pUVar11[4]._padding_ = 0;
  *(undefined4 *)((longlong)&pUVar11[4]._padding_ + 4) = 0;
  lStack_70 = lVar7;
  local_58 = lVar18;
  if (local_78 != 0) {
    plVar10 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar10 = plStack_50;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  pTVar2 = &this->ActiveGizmos;
  local_128 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_128) &&
     (lVar18 = (longlong)(this->ActiveGizmos).ArrayMax,
     (FScriptContainerElement *)&local_128 < pFVar3 + lVar18 * 8)) {
    local_140 = (longlong)(this->ActiveGizmos).ArrayNum;
    local_138 = 8;
    local_158 = &local_128;
    local_150 = pFVar3;
    local_148 = lVar18;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pUVar11 = (UInteractiveGizmo *)(*pcVar4)();
      return pUVar11;
    }
  }
  iVar9 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar9 + 1;
  *(UInteractiveGizmo **)(pFVar3 + (longlong)iVar9 * 8) = local_128;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_128 != (UInteractiveGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_128);
  }
  return pUVar11;
}

// AddAxisScaleGizmo @ 149645d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddAxisScaleGizmo
          (UCombinedTransformGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  int *piVar1;
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  UPrimitiveComponent *pUVar6;
  FWeakObjectPtr *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  longlong *plVar14;
  UAxisPositionGizmo *this_00;
  UClass *pUVar15;
  UInteractiveGizmo *pUVar16;
  undefined1 auStackY_118 [32];
  UPrimitiveComponent *local_c8;
  UAxisPositionGizmo *local_c0;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr FStack_b0;
  void *local_a8;
  undefined8 local_a0;
  UPrimitiveComponent *local_98;
  UAxisPositionGizmo *local_90 [2];
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  plVar14 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  local_a8 = (void *)0x0;
  local_a0 = 0;
  this_00 = (UAxisPositionGizmo *)
            (**(code **)(*plVar14 + 0x2d0))
                      (plVar14,&this->AxisPositionBuilderIdentifier,&local_a8,0);
  if (this_00 == (UAxisPositionGizmo *)0x0) {
LAB_149645e0a:
    this_00 = (UAxisPositionGizmo *)0x0;
  }
  else {
    pUVar15 = UAxisPositionGizmo::StaticClass();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_149645e0a;
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (this_00 == (UAxisPositionGizmo *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286536>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x688,"Gizmo");
    if (!bVar11) {
      return (UInteractiveGizmo *)0x0;
    }
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
  bVar11 = UAxisPositionGizmo::InitializeAsScaleGizmo
                     (this_00,param_1,this->bDisallowNegativeScaling,param_2);
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4678433611253286540>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                          ,0x68c,
                          "Gizmo->InitializeAsScaleGizmo(Params, bDisallowNegativeScaling, &SharedState)"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
  lVar5 = *(longlong *)&this_00->ParameterSource;
  if (lVar5 != 0) {
    pUVar15 = Z_Construct_UClass_UGizmoAxisScaleParameterSource_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar13 * 8)
        == &pUVar15->_padding_)) {
      if (param_1->Axis == Y) {
        uVar12 = 1;
      }
      else {
        uVar12 = 0;
        if (param_1->Axis == Z) {
          uVar12 = 2;
        }
      }
      local_78 = *(longlong *)(lVar5 + 0x50);
      uVar10 = *(undefined8 *)(lVar5 + 0x58);
      local_68 = *(longlong *)(lVar5 + 0x60);
      uStack_60 = *(undefined8 *)(lVar5 + 0x68);
      local_58 = *(undefined8 *)(lVar5 + 0x70);
      plStack_50 = *(longlong **)(lVar5 + 0x78);
      *(code **)(lVar5 + 0x50) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisScaleGizmo'::__l8::<lambda_1>,bool,double_const_&,double_&>
           ::Call;
      *(undefined8 *)(lVar5 + 0x58) = uStack_70;
      *(undefined4 *)(lVar5 + 0x60) = 0x51e77758;
      *(undefined4 *)(lVar5 + 100) = 1;
      *(UCombinedTransformGizmo **)(lVar5 + 0x68) = this;
      *(undefined4 *)(lVar5 + 0x70) = uVar12;
      *(undefined4 *)(lVar5 + 0x74) = local_7c;
      *(undefined4 *)(lVar5 + 0x78) = 0;
      *(undefined4 *)(lVar5 + 0x7c) = 0;
      uStack_70 = uVar10;
      if (local_78 != 0) {
        plVar14 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar14 = plStack_50;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      goto LAB_149645fa4;
    }
  }
  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4678433611253286549>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                      ,0x695,"false");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
LAB_149645fa4:
  pTVar2 = &this->NonUniformScaleSubGizmos;
  pUVar6 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  local_98 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_98);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FStack_b0.ObjectIndex = 0;
  FStack_b0.ObjectSerialNumber = 0;
  local_90[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&FStack_b0,(FObjectPtr)local_90);
  pFVar7 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar7 <= &local_b8) &&
      (&local_b8 < pFVar7 + (longlong)(this->NonUniformScaleSubGizmos).ArrayMax * 2)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
  iVar13 = (this->NonUniformScaleSubGizmos).ArrayNum;
  piVar1 = &(this->NonUniformScaleSubGizmos).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NonUniformScaleSubGizmos).ArrayNum = iVar13 + 1;
  pTVar3 = &this->ActiveComponents;
  pFVar7 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10);
  *pFVar7 = local_b8;
  pFVar7[1] = FStack_b0;
  local_c8 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c8 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  pFVar8 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 <
       pFVar8 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
  iVar13 = (this->ActiveComponents).ArrayNum;
  piVar1 = &(this->ActiveComponents).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ActiveComponents).ArrayNum = iVar13 + 1;
  *(UPrimitiveComponent **)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_c8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c8 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  pTVar4 = &this->ActiveGizmos;
  local_c0 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_c0) &&
      ((FScriptContainerElement *)&local_c0 < pFVar8 + (longlong)(this->ActiveGizmos).ArrayMax * 8))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar11)) {
    pcVar9 = (code *)swi(3);
    pUVar16 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar16;
  }
  iVar13 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar4->AllocatorInstance,piVar1);
  }
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar13 + 1;
  *(UAxisPositionGizmo **)(pFVar8 + (longlong)iVar13 * 8) = local_c0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c0 != (UAxisPositionGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c0);
  }
  return (UInteractiveGizmo *)this_00;
}

// AddAxisScaleGizmo @ 1496462a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddAxisScaleGizmo
          (UCombinedTransformGizmo *this,UPrimitiveComponent *param_1,USceneComponent *param_2,
          IGizmoAxisSource *param_3,IGizmoAxisSource *param_4,IGizmoTransformSource *param_5,
          IGizmoStateTarget *param_6)

{
  int *piVar1;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  UInteractiveGizmo *pUVar10;
  UClass *pUVar11;
  UInteractiveGizmo *this_00;
  UInteractiveGizmo *pUVar12;
  UGizmoAxisScaleParameterSource *pUVar13;
  UGizmoComponentHitTarget *pUVar14;
  UInteractiveGizmo *pUVar15;
  longlong lVar16;
  UInteractiveGizmo *pUVar17;
  undefined1 auStack_128 [32];
  UInteractiveGizmo **local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  UInteractiveGizmo *local_d8;
  void *local_d0;
  undefined8 local_c8;
  IGizmoTransformSource *local_c0;
  IGizmoAxisSource *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_b8 = param_4;
  local_c0 = param_5;
  plVar9 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar15 = (UInteractiveGizmo *)0x0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  pUVar10 = (UInteractiveGizmo *)
            (**(code **)(*plVar9 + 0x2d0))(plVar9,&this->AxisPositionBuilderIdentifier,&local_d0,0);
  if (pUVar10 != (UInteractiveGizmo *)0x0) {
    pUVar11 = UAxisPositionGizmo::StaticClass();
    iVar8 = (int)pUVar11->_padding_;
    if ((iVar8 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar11->_padding_)) goto LAB_149646349;
  }
  pUVar10 = pUVar15;
LAB_149646349:
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  *(undefined1 *)&pUVar10[2]._padding_ = 1;
  pUVar17 = pUVar15;
  pUVar12 = pUVar15;
  if ((param_3 != (IGizmoAxisSource *)0x0) &&
     (this_00 = (UInteractiveGizmo *)(**(code **)((longlong)*param_3 + 8))(param_3),
     this_00 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar11 = Z_Construct_UClass_UGizmoAxisSource_NoRegister();
    pUVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar11);
    pUVar17 = this_00;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  pUVar10[1]._padding_ = (longlong)pUVar17;
  pUVar10[1]._padding_ = (longlong)pUVar12;
  pUVar13 = UGizmoAxisScaleParameterSource::Construct(local_b8,local_c0,(UObject *)this);
  local_78 = *(longlong *)&pUVar13->ScaleAxisDeltaConstraintFunction;
  uVar6 = *(undefined8 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x8;
  local_68 = *(longlong *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x10;
  uStack_60 = *(undefined8 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x20;
  plStack_50 = *(longlong **)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x28;
  *(code **)&pUVar13->ScaleAxisDeltaConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisScaleGizmo'::__l2::<lambda_1>,bool,double_const_&,double_&>
       ::Call;
  *(undefined8 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x8 = uStack_70;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x10 = 0x51e77a18;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x18 = this;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x2c = 0;
  uStack_70 = uVar6;
  local_58 = uVar5;
  if (local_78 != 0) {
    plVar9 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar9 = plStack_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pUVar13->bClampToZero = this->bDisallowNegativeScaling;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pUVar10[1]._padding_ = (longlong)pUVar13;
  pUVar10[1]._padding_ = (longlong)&pUVar13->_padding_;
  pUVar14 = UGizmoComponentHitTarget::Construct(param_1,(UObject *)this);
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    local_a8 = *(longlong *)&pUVar14->UpdateHoverFunction;
    uVar5 = *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x8;
    local_98 = *(longlong *)&(pUVar14->UpdateHoverFunction).field_0x10;
    uStack_90 = *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x18;
    local_88 = *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x20;
    plStack_80 = *(longlong **)&(pUVar14->UpdateHoverFunction).field_0x28;
    *(code **)&pUVar14->UpdateHoverFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisScaleGizmo'::__l12::<lambda_2>,void,bool>
         ::Call;
    *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x8 = uStack_a0;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x10 = 0x51e77a38;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x14 = 1;
    *(UPrimitiveComponent **)&(pUVar14->UpdateHoverFunction).field_0x18 = param_1;
    *(UCombinedTransformGizmo **)&(pUVar14->UpdateHoverFunction).field_0x20 = this;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x28 = 0;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x2c = 0;
    uStack_a0 = uVar5;
    if (local_a8 != 0) {
      plVar9 = &local_98;
      if (plStack_80 != (longlong *)0x0) {
        plVar9 = plStack_80;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  pUVar17 = pUVar15;
  if (pUVar14 != (UGizmoComponentHitTarget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    pUVar17 = (UInteractiveGizmo *)&pUVar14->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  pUVar10[2]._padding_ = (longlong)pUVar14;
  pUVar10[2]._padding_ = (longlong)pUVar17;
  pUVar17 = pUVar15;
  if ((param_6 != (IGizmoStateTarget *)0x0) &&
     (pUVar12 = (UInteractiveGizmo *)(**(code **)((longlong)*param_6 + 8))(param_6),
     pUVar12 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    pUVar11 = Z_Construct_UClass_UGizmoStateTarget_NoRegister();
    pUVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar12,pUVar11);
    pUVar17 = pUVar12;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  pUVar10[2]._padding_ = (longlong)pUVar17;
  pTVar2 = &this->ActiveGizmos;
  pUVar10[2]._padding_ = (longlong)pUVar15;
  local_d8 = pUVar10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
     (lVar16 = (longlong)(this->ActiveGizmos).ArrayMax,
     (FScriptContainerElement *)&local_d8 < pFVar3 + lVar16 * 8)) {
    local_f0 = (longlong)(this->ActiveGizmos).ArrayNum;
    local_e8 = 8;
    local_108 = &local_d8;
    local_100 = pFVar3;
    local_f8 = lVar16;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (UInteractiveGizmo *)(*pcVar4)();
      return pUVar10;
    }
  }
  iVar8 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar8 + 1;
  *(UInteractiveGizmo **)(pFVar3 + (longlong)iVar8 * 8) = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UInteractiveGizmo *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  return pUVar10;
}

// AddAxisTranslationGizmo @ 1496466d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddAxisTranslationGizmo
          (UCombinedTransformGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  int *piVar1;
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  UPrimitiveComponent *pUVar6;
  FWeakObjectPtr *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  longlong *plVar14;
  UAxisPositionGizmo *pUVar15;
  UClass *pUVar16;
  UInteractiveGizmo *pUVar17;
  UPackage *pUVar18;
  UGizmoAxisTranslationParameterSource *pUVar19;
  UAxisPositionGizmo *pUVar20;
  UAxisPositionGizmo *pUVar21;
  UAxisPositionGizmo *pUVar22;
  undefined4 uVar23;
  undefined1 auStackY_158 [32];
  UPrimitiveComponent *local_108;
  UAxisPositionGizmo *local_100;
  FWeakObjectPtr local_f8;
  FWeakObjectPtr FStack_f0;
  void *local_e8;
  undefined8 local_e0;
  UGizmoScaledAndUnscaledTransformSources *local_d8;
  UPrimitiveComponent *local_d0;
  UAxisPositionGizmo *local_c8 [2];
  undefined4 local_b4;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  plVar14 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar22 = (UAxisPositionGizmo *)0x0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  pUVar15 = (UAxisPositionGizmo *)
            (**(code **)(*plVar14 + 0x2d0))
                      (plVar14,&this->AxisPositionBuilderIdentifier,&local_e8,0);
  if (pUVar15 == (UAxisPositionGizmo *)0x0) {
LAB_14964675d:
    pUVar15 = pUVar22;
  }
  else {
    pUVar16 = UAxisPositionGizmo::StaticClass();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14964675d;
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (pUVar15 == (UAxisPositionGizmo *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286449>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x631,"Gizmo");
    if (!bVar12) {
      return (UInteractiveGizmo *)0x0;
    }
    pcVar9 = (code *)swi(3);
    pUVar17 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar17;
  }
  uVar23 = 0;
  if ((((param_1->Component == (UPrimitiveComponent *)0x0) ||
       (param_1->TransformProxy == (UTransformProxy *)0x0)) || (param_1->Axis == None)) ||
     (bVar12 = UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>
                         (pUVar15,param_1,param_2,&local_d8), !bVar12)) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286454>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x636,"Gizmo->InitializeAsTranslateGizmo(Params, &SharedState)");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pUVar17 = (UInteractiveGizmo *)(*pcVar9)();
      return pUVar17;
    }
  }
  else {
    pUVar18 = (UPackage *)param_1->OuterForSubobjects;
    if (pUVar18 == (UPackage *)0x0) {
      pUVar18 = GetTransientPackage();
    }
    pUVar21 = (UAxisPositionGizmo *)&local_d8->_padding_;
    if (local_d8 == (UGizmoScaledAndUnscaledTransformSources *)0x0) {
      pUVar21 = pUVar22;
    }
    pUVar20 = pUVar22;
    if (*(longlong *)&pUVar15->AxisSource != 0) {
      pUVar20 = *(UAxisPositionGizmo **)&(pUVar15->AxisSource).field_0x8;
    }
    pUVar19 = UGizmoAxisTranslationParameterSource::Construct
                        ((IGizmoAxisSource *)pUVar20,(IGizmoTransformSource *)pUVar21,
                         (UObject *)pUVar18);
    if (pUVar19 != (UGizmoAxisTranslationParameterSource *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      pUVar22 = (UAxisPositionGizmo *)&pUVar19->_padding_;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar19 != (UGizmoAxisTranslationParameterSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    *(UGizmoAxisTranslationParameterSource **)&pUVar15->ParameterSource = pUVar19;
    *(UAxisPositionGizmo **)&(pUVar15->ParameterSource).field_0x8 = pUVar22;
  }
  lVar5 = *(longlong *)&pUVar15->ParameterSource;
  if (lVar5 != 0) {
    pUVar16 = Z_Construct_UClass_UGizmoAxisTranslationParameterSource_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar13 * 8)
        == &pUVar16->_padding_)) {
      if (param_1->Axis == Y) {
        uVar23 = 1;
      }
      else if (param_1->Axis == Z) {
        uVar23 = 2;
      }
      local_78 = *(longlong *)(lVar5 + 0x80);
      uVar11 = *(undefined8 *)(lVar5 + 0x88);
      local_68 = *(longlong *)(lVar5 + 0x90);
      uStack_60 = *(undefined8 *)(lVar5 + 0x98);
      uVar10 = *(undefined8 *)(lVar5 + 0xa0);
      plStack_50 = *(longlong **)(lVar5 + 0xa8);
      *(code **)(lVar5 + 0x80) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l8::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
      *(undefined8 *)(lVar5 + 0x88) = uStack_70;
      *(undefined4 *)(lVar5 + 0x90) = 0x51e77698;
      *(undefined4 *)(lVar5 + 0x94) = 1;
      *(UCombinedTransformGizmo **)(lVar5 + 0x98) = this;
      *(undefined4 *)(lVar5 + 0xa0) = (undefined4)local_58;
      *(undefined4 *)(lVar5 + 0xa4) = local_58._4_4_;
      *(undefined4 *)(lVar5 + 0xa8) = 0;
      *(undefined4 *)(lVar5 + 0xac) = 0;
      uStack_70 = uVar11;
      local_58 = uVar10;
      if (local_78 != 0) {
        plVar14 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar14 = plStack_50;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      local_a8 = *(longlong *)(lVar5 + 0x50);
      uVar10 = *(undefined8 *)(lVar5 + 0x58);
      local_98 = *(longlong *)(lVar5 + 0x60);
      uStack_90 = *(undefined8 *)(lVar5 + 0x68);
      local_88 = *(undefined8 *)(lVar5 + 0x70);
      plStack_80 = *(longlong **)(lVar5 + 0x78);
      *(code **)(lVar5 + 0x50) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l8::<lambda_2>,bool,double,double_&>
           ::Call;
      *(undefined8 *)(lVar5 + 0x58) = uStack_a0;
      *(undefined4 *)(lVar5 + 0x60) = 0x51e776b8;
      *(undefined4 *)(lVar5 + 100) = 1;
      *(UCombinedTransformGizmo **)(lVar5 + 0x68) = this;
      *(undefined4 *)(lVar5 + 0x70) = uVar23;
      *(undefined4 *)(lVar5 + 0x74) = local_b4;
      *(undefined4 *)(lVar5 + 0x78) = 0;
      *(undefined4 *)(lVar5 + 0x7c) = 0;
      uStack_a0 = uVar10;
      if (local_a8 != 0) {
        plVar14 = &local_98;
        if (plStack_80 != (longlong *)0x0) {
          plVar14 = plStack_80;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      goto LAB_149646a0d;
    }
  }
  bVar12 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4678433611253286464>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                      ,0x640,"false");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    pUVar17 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar17;
  }
LAB_149646a0d:
  pTVar2 = &this->TranslationSubGizmos;
  pUVar6 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_f8.ObjectIndex = 0;
  local_f8.ObjectSerialNumber = 0;
  local_d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_d0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  FStack_f0.ObjectIndex = 0;
  FStack_f0.ObjectSerialNumber = 0;
  local_c8[0] = pUVar15;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  FWeakObjectPtr::operator=(&FStack_f0,(FObjectPtr)local_c8);
  pFVar7 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar7 <= &local_f8) &&
      (&local_f8 < pFVar7 + (longlong)(this->TranslationSubGizmos).ArrayMax * 2)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar17 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar17;
  }
  iVar13 = (this->TranslationSubGizmos).ArrayNum;
  piVar1 = &(this->TranslationSubGizmos).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TranslationSubGizmos).ArrayNum = iVar13 + 1;
  pTVar3 = &this->ActiveComponents;
  pFVar7 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10);
  *pFVar7 = local_f8;
  pFVar7[1] = FStack_f0;
  local_108 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_108 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_108);
  }
  pFVar8 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 <
       pFVar8 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar17 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar17;
  }
  iVar13 = (this->ActiveComponents).ArrayNum;
  piVar1 = &(this->ActiveComponents).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ActiveComponents).ArrayNum = iVar13 + 1;
  *(UPrimitiveComponent **)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_108;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_108 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_108);
  }
  pTVar4 = &this->ActiveGizmos;
  local_100 = pUVar15;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_100) &&
      ((FScriptContainerElement *)&local_100 < pFVar8 + (longlong)(this->ActiveGizmos).ArrayMax * 8)
      ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar17 = (UInteractiveGizmo *)(*pcVar9)();
    return pUVar17;
  }
  iVar13 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar4->AllocatorInstance,piVar1);
  }
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar13 + 1;
  *(UAxisPositionGizmo **)(pFVar8 + (longlong)iVar13 * 8) = local_100;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_100 != (UAxisPositionGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_100);
  }
  return (UInteractiveGizmo *)pUVar15;
}

// AddAxisTranslationGizmo @ 149646d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddAxisTranslationGizmo
          (UCombinedTransformGizmo *this,UPrimitiveComponent *param_1,USceneComponent *param_2,
          IGizmoAxisSource *param_3,IGizmoTransformSource *param_4,IGizmoStateTarget *param_5,
          int param_6)

{
  int *piVar1;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  TObjectPtr<UInputBehaviorSet>_u_0 TVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  UInteractiveGizmo *pUVar12;
  UClass *pUVar13;
  UInteractiveGizmo *this_00;
  UInteractiveGizmo *pUVar14;
  UGizmoAxisTranslationParameterSource *pUVar15;
  UGizmoComponentHitTarget *pUVar16;
  UObject *this_01;
  UObject *pUVar17;
  longlong lVar18;
  UInteractiveGizmo *pUVar19;
  UObject *pUVar20;
  undefined1 auStack_1b8 [32];
  UInteractiveGizmo **local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  UInteractiveGizmo *local_168;
  void *local_160;
  undefined8 local_158;
  IGizmoTransformSource *local_150;
  undefined4 local_13c;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  UInputBehaviorSet *local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  TObjectPtr<UInputBehaviorSet>_u_0 TStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_150 = param_4;
  plVar11 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar19 = (UInteractiveGizmo *)0x0;
  local_160 = (void *)0x0;
  local_158 = 0;
  pUVar12 = (UInteractiveGizmo *)
            (**(code **)(*plVar11 + 0x2d0))
                      (plVar11,&this->AxisPositionBuilderIdentifier,&local_160,0);
  if (pUVar12 != (UInteractiveGizmo *)0x0) {
    pUVar13 = UAxisPositionGizmo::StaticClass();
    iVar10 = (int)pUVar13->_padding_;
    if ((iVar10 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar13->_padding_)) goto LAB_149646db9;
  }
  pUVar12 = pUVar19;
LAB_149646db9:
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  if ((pUVar12 == (UInteractiveGizmo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TranslateGizmo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x713,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pUVar12 = (UInteractiveGizmo *)(*pcVar4)();
    return pUVar12;
  }
  pUVar14 = pUVar19;
  if ((param_3 != (IGizmoAxisSource *)0x0) &&
     (this_00 = (UInteractiveGizmo *)(**(code **)((longlong)*param_3 + 8))(param_3),
     this_00 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar13 = Z_Construct_UClass_UGizmoAxisSource_NoRegister();
    pUVar14 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar13);
    pUVar19 = this_00;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  pUVar12[1]._padding_ = (longlong)pUVar19;
  pUVar12[1]._padding_ = (longlong)pUVar14;
  pUVar15 = UGizmoAxisTranslationParameterSource::Construct(param_3,local_150,(UObject *)this);
  pUVar20 = (UObject *)0x0;
  local_d8 = *(longlong *)&pUVar15->PositionConstraintFunction;
  uVar6 = *(undefined8 *)&(pUVar15->PositionConstraintFunction).field_0x8;
  local_c8 = *(longlong *)&(pUVar15->PositionConstraintFunction).field_0x10;
  uStack_c0 = *(undefined8 *)&(pUVar15->PositionConstraintFunction).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar15->PositionConstraintFunction).field_0x20;
  plStack_b0 = *(longlong **)&(pUVar15->PositionConstraintFunction).field_0x28;
  *(code **)&pUVar15->PositionConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
       ::Call;
  *(undefined8 *)&(pUVar15->PositionConstraintFunction).field_0x8 = uStack_d0;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x10 = 0x51e77838;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar15->PositionConstraintFunction).field_0x18 = this;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x20 = (undefined4)local_b8;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x24 = local_b8._4_4_;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x2c = 0;
  uStack_d0 = uVar6;
  local_b8 = uVar5;
  if (local_d8 != 0) {
    plVar11 = &local_c8;
    if (plStack_b0 != (longlong *)0x0) {
      plVar11 = plStack_b0;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  local_138 = *(longlong *)&pUVar15->AxisDeltaConstraintFunction;
  uVar5 = *(undefined8 *)&(pUVar15->AxisDeltaConstraintFunction).field_0x8;
  local_128 = *(longlong *)&(pUVar15->AxisDeltaConstraintFunction).field_0x10;
  uStack_120 = *(undefined8 *)&(pUVar15->AxisDeltaConstraintFunction).field_0x18;
  local_118 = *(undefined8 *)&(pUVar15->AxisDeltaConstraintFunction).field_0x20;
  plStack_110 = *(longlong **)&(pUVar15->AxisDeltaConstraintFunction).field_0x28;
  *(code **)&pUVar15->AxisDeltaConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l2::<lambda_2>,bool,double,double_&>
       ::Call;
  *(undefined8 *)&(pUVar15->AxisDeltaConstraintFunction).field_0x8 = uStack_130;
  *(undefined4 *)&(pUVar15->AxisDeltaConstraintFunction).field_0x10 = 0x51e77858;
  *(undefined4 *)&(pUVar15->AxisDeltaConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar15->AxisDeltaConstraintFunction).field_0x18 = this;
  *(int *)&(pUVar15->AxisDeltaConstraintFunction).field_0x20 = param_6;
  *(undefined4 *)&(pUVar15->AxisDeltaConstraintFunction).field_0x24 = local_13c;
  *(undefined4 *)&(pUVar15->AxisDeltaConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar15->AxisDeltaConstraintFunction).field_0x2c = 0;
  uStack_130 = uVar5;
  if (local_138 != 0) {
    plVar11 = &local_128;
    if (plStack_110 != (longlong *)0x0) {
      plVar11 = plStack_110;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  pUVar17 = pUVar20;
  if (pUVar15 != (UGizmoAxisTranslationParameterSource *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    pUVar17 = (UObject *)&pUVar15->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UGizmoAxisTranslationParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pUVar12[1]._padding_ = (longlong)pUVar15;
  pUVar12[1]._padding_ = (longlong)pUVar17;
  pUVar16 = UGizmoComponentHitTarget::Construct(param_1,(UObject *)this);
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    local_108 = *(longlong *)&pUVar16->UpdateHoverFunction;
    uVar5 = *(undefined8 *)&(pUVar16->UpdateHoverFunction).field_0x8;
    local_f8 = *(longlong *)&(pUVar16->UpdateHoverFunction).field_0x10;
    uStack_f0 = *(undefined8 *)&(pUVar16->UpdateHoverFunction).field_0x18;
    local_e8 = *(undefined8 *)&(pUVar16->UpdateHoverFunction).field_0x20;
    plStack_e0 = *(longlong **)&(pUVar16->UpdateHoverFunction).field_0x28;
    *(code **)&pUVar16->UpdateHoverFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l12::<lambda_3>,void,bool>
         ::Call;
    *(undefined8 *)&(pUVar16->UpdateHoverFunction).field_0x8 = uStack_100;
    *(undefined4 *)&(pUVar16->UpdateHoverFunction).field_0x10 = 0x51e77878;
    *(undefined4 *)&(pUVar16->UpdateHoverFunction).field_0x14 = 1;
    *(UPrimitiveComponent **)&(pUVar16->UpdateHoverFunction).field_0x18 = param_1;
    *(UCombinedTransformGizmo **)&(pUVar16->UpdateHoverFunction).field_0x20 = this;
    *(undefined4 *)&(pUVar16->UpdateHoverFunction).field_0x28 = 0;
    *(undefined4 *)&(pUVar16->UpdateHoverFunction).field_0x2c = 0;
    uStack_100 = uVar5;
    if (local_108 != 0) {
      plVar11 = &local_f8;
      if (plStack_e0 != (longlong *)0x0) {
        plVar11 = plStack_e0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  pUVar17 = pUVar20;
  if (pUVar16 != (UGizmoComponentHitTarget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    pUVar17 = (UObject *)&pUVar16->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  pUVar12[2]._padding_ = (longlong)pUVar16;
  pUVar12[2]._padding_ = (longlong)pUVar17;
  pUVar17 = pUVar20;
  if ((param_5 != (IGizmoStateTarget *)0x0) &&
     (this_01 = (UObject *)(**(code **)((longlong)*param_5 + 8))(param_5), this_01 != (UObject *)0x0
     )) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_01);
    }
    pUVar13 = Z_Construct_UClass_UGizmoStateTarget_NoRegister();
    pUVar17 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar13);
    pUVar20 = this_01;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar20);
  }
  pUVar12[2]._padding_ = (longlong)pUVar20;
  pUVar12[2]._padding_ = (longlong)pUVar17;
  local_a8 = pUVar12[2].InputBehaviors.field0_0x0.DebugPtr;
  lVar7 = pUVar12[3]._padding_;
  local_98 = pUVar12[3]._padding_;
  lStack_90 = pUVar12[3]._padding_;
  lVar18 = pUVar12[3]._padding_;
  plStack_80 = (longlong *)pUVar12[3]._padding_;
  pUVar12[2].InputBehaviors.field0_0x0.DebugPtr =
       (UInputBehaviorSet *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l2::<lambda_4>,bool>
       ::Call;
  pUVar12[3]._padding_ = lStack_a0;
  *(undefined4 *)&pUVar12[3]._padding_ = 0x51e77898;
  *(undefined4 *)((longlong)&pUVar12[3]._padding_ + 4) = 1;
  pUVar12[3]._padding_ = (longlong)this;
  *(undefined4 *)&pUVar12[3]._padding_ = (undefined4)local_88;
  *(undefined4 *)((longlong)&pUVar12[3]._padding_ + 4) = local_88._4_4_;
  *(undefined4 *)&pUVar12[3]._padding_ = 0;
  *(undefined4 *)((longlong)&pUVar12[3]._padding_ + 4) = 0;
  lStack_a0 = lVar7;
  local_88 = lVar18;
  if (local_a8 != (UInputBehaviorSet *)0x0) {
    plVar11 = &local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar11 = plStack_80;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  local_78 = pUVar12[3]._padding_;
  TVar8 = pUVar12[3].InputBehaviors.field0_0x0;
  local_68 = pUVar12[4]._padding_;
  lStack_60 = pUVar12[4]._padding_;
  lVar18 = pUVar12[4]._padding_;
  plStack_50 = (longlong *)pUVar12[4]._padding_;
  pUVar12[3]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l2::<lambda_5>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
       ::Call;
  pUVar12[3].InputBehaviors.field0_0x0 = TStack_70;
  *(undefined4 *)&pUVar12[4]._padding_ = 0x51e778b8;
  *(undefined4 *)((longlong)&pUVar12[4]._padding_ + 4) = 1;
  pUVar12[4]._padding_ = (longlong)this;
  *(undefined4 *)&pUVar12[4]._padding_ = (undefined4)local_58;
  *(undefined4 *)((longlong)&pUVar12[4]._padding_ + 4) = local_58._4_4_;
  *(undefined4 *)&pUVar12[4]._padding_ = 0;
  *(undefined4 *)((longlong)&pUVar12[4]._padding_ + 4) = 0;
  TStack_70 = TVar8;
  local_58 = lVar18;
  if (local_78 != 0) {
    plVar11 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar11 = plStack_50;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  pTVar2 = &this->ActiveGizmos;
  local_168 = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_168) &&
     (lVar18 = (longlong)(this->ActiveGizmos).ArrayMax,
     (FScriptContainerElement *)&local_168 < pFVar3 + lVar18 * 8)) {
    local_180 = (longlong)(this->ActiveGizmos).ArrayNum;
    local_178 = 8;
    local_198 = &local_168;
    local_190 = pFVar3;
    local_188 = lVar18;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pUVar12 = (UInteractiveGizmo *)(*pcVar4)();
      return pUVar12;
    }
  }
  iVar10 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar10 + 1;
  *(UInteractiveGizmo **)(pFVar3 + (longlong)iVar10 * 8) = local_168;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_168 != (UInteractiveGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168);
  }
  return pUVar12;
}

// AddFreeRotationGizmo @ 149647a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddFreeRotationGizmo
          (UCombinedTransformGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UInteractiveGizmoManager *pUVar8;
  UFreeRotationSubGizmo *this_00;
  UClass *pUVar9;
  UInteractiveGizmo *pUVar10;
  UGizmoViewContext *pUVar11;
  UClass *local_res8;
  UPrimitiveComponent *local_38;
  UFreeRotationSubGizmo *local_30;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pUVar8 = (UInteractiveGizmoManager *)(**(code **)(*(longlong *)this + 0x2d8))();
  local_res8 = UFreeRotationSubGizmo::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  this_00 = (UFreeRotationSubGizmo *)
            UE::GizmoUtil::CreateGizmoViaSimpleBuilder
                      (pUVar8,(TSubclassOf<UInteractiveGizmo>)&local_res8,&local_28,this);
  if (this_00 != (UFreeRotationSubGizmo *)0x0) {
    pUVar9 = UFreeRotationSubGizmo::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar9->_padding_)) goto LAB_149647b31;
  }
  this_00 = (UFreeRotationSubGizmo *)0x0;
LAB_149647b31:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (this_00 == (UFreeRotationSubGizmo *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253286649>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x6f9,"Gizmo");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UInteractiveGizmo *)(*pcVar5)();
      return pUVar10;
    }
    this_00 = (UFreeRotationSubGizmo *)0x0;
  }
  else {
    pUVar8 = (UInteractiveGizmoManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    pUVar11 = UE::GizmoUtil::GetGizmoViewContext(pUVar8);
    bVar6 = UFreeRotationSubGizmo::InitializeAsRotationGizmo(this_00,param_1,pUVar11,param_2);
    if ((!bVar6) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4678433611253286654>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                           ,0x6fe,
                           "Gizmo->InitializeAsRotationGizmo(Params, GizmoViewContext, &SharedState)"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UInteractiveGizmo *)(*pcVar5)();
      return pUVar10;
    }
    pTVar2 = &this->ActiveComponents;
    local_38 = param_1->Component;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar4 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UInteractiveGizmo *)(*pcVar5)();
      return pUVar10;
    }
    iVar7 = (this->ActiveComponents).ArrayNum;
    piVar1 = &(this->ActiveComponents).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ActiveComponents).ArrayNum = iVar7 + 1;
    *(UPrimitiveComponent **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    pTVar3 = &this->ActiveGizmos;
    local_30 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_30) &&
        ((FScriptContainerElement *)&local_30 < pFVar4 + (longlong)(this->ActiveGizmos).ArrayMax * 8
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UInteractiveGizmo *)(*pcVar5)();
      return pUVar10;
    }
    iVar7 = (this->ActiveGizmos).ArrayNum;
    piVar1 = &(this->ActiveGizmos).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar3->AllocatorInstance,piVar1);
    }
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    (this->ActiveGizmos).ArrayNum = iVar7 + 1;
    *(UFreeRotationSubGizmo **)(pFVar4 + (longlong)iVar7 * 8) = local_30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_30 != (UFreeRotationSubGizmo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_30);
    }
  }
  return (UInteractiveGizmo *)this_00;
}

// AddFreeTranslationGizmo @ 149647da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddFreeTranslationGizmo
          (UCombinedTransformGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  UInteractiveGizmoManager *pUVar10;
  UFreePositionSubGizmo *this_00;
  UClass *pUVar11;
  UInteractiveGizmo *pUVar12;
  longlong *plVar13;
  UFreePositionSubGizmo *pUVar14;
  undefined1 auStackY_178 [32];
  UPrimitiveComponent *local_128;
  UFreePositionSubGizmo *local_120;
  FString local_118;
  UClass *local_108 [2];
  undefined4 local_f4;
  undefined4 local_e4;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  pUVar10 = (UInteractiveGizmoManager *)(**(code **)(*(longlong *)this + 0x2d8))();
  local_108[0] = UFreePositionSubGizmo::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_108[0]);
  }
  this_00 = (UFreePositionSubGizmo *)
            UE::GizmoUtil::CreateGizmoViaSimpleBuilder
                      (pUVar10,(TSubclassOf<UInteractiveGizmo>)local_108,&local_118,this);
  if (this_00 == (UFreePositionSubGizmo *)0x0) {
LAB_149647e47:
    this_00 = (UFreePositionSubGizmo *)0x0;
  }
  else {
    pUVar11 = UFreePositionSubGizmo::StaticClass();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_)) goto LAB_149647e47;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (this_00 == (UFreePositionSubGizmo *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253286620>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x6dc,"Gizmo");
    if (!bVar8) {
      return (UInteractiveGizmo *)0x0;
    }
    pcVar5 = (code *)swi(3);
    pUVar12 = (UInteractiveGizmo *)(*pcVar5)();
    return pUVar12;
  }
  bVar8 = UFreePositionSubGizmo::InitializeAsScreenPlaneTranslateGizmo(this_00,param_1,param_2);
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4678433611253286624>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x6e0,"Gizmo->InitializeAsScreenPlaneTranslateGizmo(Params, &SharedState)"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pUVar12 = (UInteractiveGizmo *)(*pcVar5)();
    return pUVar12;
  }
  pUVar14 = (UFreePositionSubGizmo *)this_00->_padding_;
  if (pUVar14 != (UFreePositionSubGizmo *)0x0) {
    pUVar11 = Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((iVar9 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar9 * 8)
        == &pUVar11->_padding_)) goto LAB_149647f00;
  }
  pUVar14 = (UFreePositionSubGizmo *)0x0;
LAB_149647f00:
  if (pUVar14 == (UFreePositionSubGizmo *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253286634>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x6ea,"false");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UInteractiveGizmo *)(*pcVar5)();
      return pUVar12;
    }
  }
  else {
    local_78 = pUVar14->_padding_;
    lVar7 = pUVar14->_padding_;
    local_68 = pUVar14->_padding_;
    lStack_60 = pUVar14->_padding_;
    lVar6 = pUVar14->_padding_;
    plStack_50 = (longlong *)pUVar14->_padding_;
    pUVar14->_padding_ =
         (longlong)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddFreeTranslationGizmo'::__l8::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
         ::Call;
    pUVar14->_padding_ = lStack_70;
    *(undefined4 *)&pUVar14->_padding_ = 0x51e777d8;
    *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = 1;
    pUVar14->_padding_ = (longlong)this;
    *(undefined4 *)&pUVar14->_padding_ = (undefined4)local_58;
    *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = local_58._4_4_;
    *(undefined4 *)&pUVar14->_padding_ = 0;
    *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = 0;
    lStack_70 = lVar7;
    local_58 = lVar6;
    if (local_78 != 0) {
      plVar13 = &local_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar13 = plStack_50;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    *(undefined1 *)&pUVar14->_padding_ = 0;
    local_d8 = pUVar14->_padding_;
    lVar6 = pUVar14->_padding_;
    local_c8 = pUVar14->_padding_;
    lStack_c0 = pUVar14->_padding_;
    local_b8 = pUVar14->_padding_;
    plStack_b0 = (longlong *)pUVar14->_padding_;
    pUVar14->_padding_ =
         (longlong)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddFreeTranslationGizmo'::__l8::<lambda_2>,bool,double,double_&>
         ::Call;
    pUVar14->_padding_ = lStack_d0;
    *(undefined4 *)&pUVar14->_padding_ = 0x51e777f8;
    *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = 1;
    pUVar14->_padding_ = (longlong)this;
    *(undefined4 *)&pUVar14->_padding_ = 0;
    *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = local_f4;
    *(undefined4 *)&pUVar14->_padding_ = 0;
    *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = 0;
    lStack_d0 = lVar6;
    if (local_d8 != 0) {
      plVar13 = &local_c8;
      if (plStack_b0 != (longlong *)0x0) {
        plVar13 = plStack_b0;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    local_a8 = pUVar14->_padding_;
    lVar6 = pUVar14->_padding_;
    local_98 = pUVar14->_padding_;
    lStack_90 = pUVar14->_padding_;
    local_88 = pUVar14->_padding_;
    plStack_80 = (longlong *)pUVar14->_padding_;
    pUVar14->_padding_ =
         (longlong)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddFreeTranslationGizmo'::__l8::<lambda_3>,bool,double,double_&>
         ::Call;
    pUVar14->_padding_ = lStack_a0;
    *(undefined4 *)&pUVar14->_padding_ = 0x51e77818;
    *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = 1;
    pUVar14->_padding_ = (longlong)this;
    *(undefined4 *)&pUVar14->_padding_ = 1;
    *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = local_e4;
    *(undefined4 *)&pUVar14->_padding_ = 0;
    *(undefined4 *)((longlong)&pUVar14->_padding_ + 4) = 0;
    lStack_a0 = lVar6;
    if (local_a8 != 0) {
      plVar13 = &local_98;
      if (plStack_80 != (longlong *)0x0) {
        plVar13 = plStack_80;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  pTVar2 = &this->ActiveComponents;
  local_128 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_128 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_128);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       pFVar4 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pUVar12 = (UInteractiveGizmo *)(*pcVar5)();
    return pUVar12;
  }
  iVar9 = (this->ActiveComponents).ArrayNum;
  piVar1 = &(this->ActiveComponents).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ActiveComponents).ArrayNum = iVar9 + 1;
  *(UPrimitiveComponent **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_128;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_128 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_128);
  }
  pTVar3 = &this->ActiveGizmos;
  local_120 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_120) &&
      ((FScriptContainerElement *)&local_120 < pFVar4 + (longlong)(this->ActiveGizmos).ArrayMax * 8)
      ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pUVar12 = (UInteractiveGizmo *)(*pcVar5)();
    return pUVar12;
  }
  iVar9 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar9 + 1;
  *(UFreePositionSubGizmo **)(pFVar4 + (longlong)iVar9 * 8) = local_120;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_120 != (UFreePositionSubGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_120);
  }
  return (UInteractiveGizmo *)this_00;
}

// AddPlaneScaleGizmo @ 1496482a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddPlaneScaleGizmo
          (UCombinedTransformGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  int *piVar1;
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined4 uVar5;
  longlong lVar6;
  UPrimitiveComponent *pUVar7;
  FWeakObjectPtr *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  longlong *plVar16;
  UPlanePositionGizmo *this_00;
  UClass *pUVar17;
  UInteractiveGizmo *pUVar18;
  UPlanePositionGizmo *pUVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined1 auStackY_178 [32];
  UPrimitiveComponent *local_128;
  UPlanePositionGizmo *local_120;
  FWeakObjectPtr local_118;
  FWeakObjectPtr FStack_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  void *local_e8;
  undefined8 local_e0;
  UPrimitiveComponent *local_d8;
  UPlanePositionGizmo *local_d0 [2];
  undefined4 local_bc;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  UCombinedTransformGizmo *pUStack_90;
  undefined8 local_88;
  undefined ***pppuStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined ***pppuStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  plVar16 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar19 = (UPlanePositionGizmo *)0x0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  this_00 = (UPlanePositionGizmo *)
            (**(code **)(*plVar16 + 0x2d0))
                      (plVar16,&this->PlanePositionBuilderIdentifier,&local_e8,0);
  if (this_00 == (UPlanePositionGizmo *)0x0) {
LAB_14964832a:
    this_00 = pUVar19;
  }
  else {
    pUVar17 = Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
    iVar15 = (int)pUVar17->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar17->_padding_)) goto LAB_14964832a;
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (this_00 == (UPlanePositionGizmo *)0x0) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286563>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x6a3,"Gizmo");
    if (!bVar14) {
      return (UInteractiveGizmo *)0x0;
    }
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  bVar14 = UPlanePositionGizmo::InitializeAsScaleGizmo
                     (this_00,param_1,this->bDisallowNegativeScaling,param_2);
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4678433611253286567>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                          ,0x6a7,
                          "Gizmo->InitializeAsScaleGizmo(Params, bDisallowNegativeScaling, &SharedState)"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  lVar6 = *(longlong *)&this_00->ParameterSource;
  if (lVar6 != 0) {
    pUVar17 = Z_Construct_UClass_UGizmoPlaneScaleParameterSource_NoRegister();
    iVar15 = (int)pUVar17->_padding_;
    if ((iVar15 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar15 * 8)
        == &pUVar17->_padding_)) {
      if (param_1->Axis == Y) {
        pUVar19 = (UPlanePositionGizmo *)&DAT_00000001;
      }
      else if (param_1->Axis == Z) {
        pUVar19 = (UPlanePositionGizmo *)&DAT_00000002;
      }
      local_a8 = *(longlong *)(lVar6 + 0x80);
      uVar11 = *(undefined8 *)(lVar6 + 0x88);
      ppuVar12 = *(undefined ***)(lVar6 + 0x90);
      uVar13 = *(undefined8 *)(lVar6 + 0x98);
      local_88 = *(undefined8 *)(lVar6 + 0xa0);
      pppuVar21 = *(undefined ****)(lVar6 + 0xa8);
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      pUStack_90 = this;
      pppuStack_80 = (undefined ***)0x0;
      local_108 = 1;
      local_104 = 2;
      uVar5 = (&local_108)[(longlong)pUVar19];
      *(code **)(lVar6 + 0x80) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l8::<lambda_1>,bool,double,double_&>
           ::Call;
      *(undefined8 *)(lVar6 + 0x88) = uStack_a0;
      *(undefined4 *)(lVar6 + 0x90) = 0x51e77778;
      *(undefined4 *)(lVar6 + 0x94) = 1;
      *(UCombinedTransformGizmo **)(lVar6 + 0x98) = this;
      *(undefined4 *)(lVar6 + 0xa0) = uVar5;
      *(undefined4 *)(lVar6 + 0xa4) = local_bc;
      *(undefined4 *)(lVar6 + 0xa8) = 0;
      *(undefined4 *)(lVar6 + 0xac) = 0;
      local_f8 = 2;
      local_f0 = 1;
      local_98 = ppuVar12;
      pUStack_90 = (UCombinedTransformGizmo *)uVar13;
      pppuStack_80 = pppuVar21;
      uStack_a0 = uVar11;
      if (local_a8 != 0) {
        pppuVar20 = &local_98;
        if (pppuVar21 != (undefined ***)0x0) {
          pppuVar20 = pppuVar21;
        }
        (*(code *)(*pppuVar20)[2])();
      }
      local_78 = *(longlong *)(lVar6 + 0xb0);
      uVar11 = *(undefined8 *)(lVar6 + 0xb8);
      ppuVar12 = *(undefined ***)(lVar6 + 0xc0);
      uStack_60 = *(undefined8 *)(lVar6 + 200);
      local_58 = *(undefined8 *)(lVar6 + 0xd0);
      pppuStack_50 = *(undefined ****)(lVar6 + 0xd8);
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::`8'::<lambda_2>,1,0>
                  ::_vftable_;
      uVar5 = *(undefined4 *)((longlong)&local_f8 + (longlong)pUVar19 * 4);
      *(code **)(lVar6 + 0xb0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l8::<lambda_2>,bool,double,double_&>
           ::Call;
      *(undefined8 *)(lVar6 + 0xb8) = uStack_70;
      *(undefined4 *)(lVar6 + 0xc0) = 0x51e77798;
      *(undefined4 *)(lVar6 + 0xc4) = 1;
      *(UCombinedTransformGizmo **)(lVar6 + 200) = this;
      *(undefined4 *)(lVar6 + 0xd0) = uVar5;
      *(undefined4 *)(lVar6 + 0xd4) = local_ac;
      *(undefined4 *)(lVar6 + 0xd8) = 0;
      *(undefined4 *)(lVar6 + 0xdc) = 0;
      uStack_70 = uVar11;
      local_68 = ppuVar12;
      if (local_78 != 0) {
        pppuVar21 = &local_68;
        if (pppuStack_50 != (undefined ***)0x0) {
          pppuVar21 = pppuStack_50;
        }
        (*(code *)(*pppuVar21)[2])();
      }
      goto LAB_14964858c;
    }
  }
  bVar14 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4678433611253286579>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                      ,0x6b3,"false");
  if (bVar14) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
LAB_14964858c:
  pTVar2 = &this->NonUniformScaleSubGizmos;
  pUVar7 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  local_d8 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_d8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FStack_110.ObjectIndex = 0;
  FStack_110.ObjectSerialNumber = 0;
  local_d0[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&FStack_110,(FObjectPtr)local_d0);
  pFVar8 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar8 <= &local_118) &&
      (&local_118 < pFVar8 + (longlong)(this->NonUniformScaleSubGizmos).ArrayMax * 2)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  iVar15 = (this->NonUniformScaleSubGizmos).ArrayNum;
  piVar1 = &(this->NonUniformScaleSubGizmos).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NonUniformScaleSubGizmos).ArrayNum = iVar15 + 1;
  pTVar3 = &this->ActiveComponents;
  pFVar8 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x10);
  *pFVar8 = local_118;
  pFVar8[1] = FStack_110;
  local_128 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_128 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_128);
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       pFVar9 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  iVar15 = (this->ActiveComponents).ArrayNum;
  piVar1 = &(this->ActiveComponents).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ActiveComponents).ArrayNum = iVar15 + 1;
  *(UPrimitiveComponent **)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_128;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_128 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_128);
  }
  pTVar4 = &this->ActiveGizmos;
  local_120 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar9 = (pTVar4->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_120) &&
      ((FScriptContainerElement *)&local_120 < pFVar9 + (longlong)(this->ActiveGizmos).ArrayMax * 8)
      ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  iVar15 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar4->AllocatorInstance,piVar1);
  }
  pFVar9 = (pTVar4->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar15 + 1;
  *(UPlanePositionGizmo **)(pFVar9 + (longlong)iVar15 * 8) = local_120;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_120 != (UPlanePositionGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_120);
  }
  return (UInteractiveGizmo *)this_00;
}

// AddPlaneScaleGizmo @ 149648890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddPlaneScaleGizmo
          (UCombinedTransformGizmo *this,UPrimitiveComponent *param_1,USceneComponent *param_2,
          IGizmoAxisSource *param_3,IGizmoAxisSource *param_4,IGizmoTransformSource *param_5,
          IGizmoStateTarget *param_6)

{
  int *piVar1;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  UInteractiveGizmo *pUVar10;
  UClass *pUVar11;
  UInteractiveGizmo *this_00;
  UInteractiveGizmo *pUVar12;
  UGizmoPlaneScaleParameterSource *pUVar13;
  UGizmoComponentHitTarget *pUVar14;
  UInteractiveGizmo *pUVar15;
  longlong lVar16;
  UInteractiveGizmo *pUVar17;
  undefined1 auStack_158 [32];
  UInteractiveGizmo **local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  UInteractiveGizmo *local_108;
  void *local_100;
  undefined8 local_f8;
  IGizmoTransformSource *local_f0;
  IGizmoAxisSource *local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_e8 = param_4;
  local_f0 = param_5;
  plVar9 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar15 = (UInteractiveGizmo *)0x0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  pUVar10 = (UInteractiveGizmo *)
            (**(code **)(*plVar9 + 0x2d0))
                      (plVar9,&this->PlanePositionBuilderIdentifier,&local_100,0);
  if (pUVar10 != (UInteractiveGizmo *)0x0) {
    pUVar11 = Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
    iVar8 = (int)pUVar11->_padding_;
    if ((iVar8 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar11->_padding_)) goto LAB_149648944;
  }
  pUVar10 = pUVar15;
LAB_149648944:
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  *(undefined1 *)&pUVar10[2]._padding_ = 1;
  pUVar17 = pUVar15;
  pUVar12 = pUVar15;
  if ((param_3 != (IGizmoAxisSource *)0x0) &&
     (this_00 = (UInteractiveGizmo *)(**(code **)((longlong)*param_3 + 8))(param_3),
     this_00 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar11 = Z_Construct_UClass_UGizmoAxisSource_NoRegister();
    pUVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar11);
    pUVar17 = this_00;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  pUVar10[1]._padding_ = (longlong)pUVar17;
  pUVar10[1]._padding_ = (longlong)pUVar12;
  pUVar13 = UGizmoPlaneScaleParameterSource::Construct(local_e8,local_f0,(UObject *)this);
  local_a8 = *(longlong *)&pUVar13->ScaleAxisXDeltaConstraintFunction;
  uVar6 = *(undefined8 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x8;
  local_98 = *(longlong *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x10;
  uStack_90 = *(undefined8 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x20;
  plStack_80 = *(longlong **)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x28;
  *(code **)&pUVar13->ScaleAxisXDeltaConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l2::<lambda_1>,bool,double,double_&>
       ::Call;
  *(undefined8 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x8 = uStack_a0;
  *(undefined4 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x10 = 0x51e77a58;
  *(undefined4 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x18 = this;
  *(undefined4 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x20 = (undefined4)local_88;
  *(undefined4 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x24 = local_88._4_4_;
  *(undefined4 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar13->ScaleAxisXDeltaConstraintFunction).field_0x2c = 0;
  uStack_a0 = uVar6;
  local_88 = uVar5;
  if (local_a8 != 0) {
    plVar9 = &local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar9 = plStack_80;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  local_78 = *(longlong *)&pUVar13->ScaleAxisYDeltaConstraintFunction;
  uVar6 = *(undefined8 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x8;
  local_68 = *(longlong *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x10;
  uStack_60 = *(undefined8 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x20;
  plStack_50 = *(longlong **)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x28;
  *(code **)&pUVar13->ScaleAxisYDeltaConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l2::<lambda_2>,bool,double,double_&>
       ::Call;
  *(undefined8 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x8 = uStack_70;
  *(undefined4 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x10 = 0x51e77a78;
  *(undefined4 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x18 = this;
  *(undefined4 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar13->ScaleAxisYDeltaConstraintFunction).field_0x2c = 0;
  uStack_70 = uVar6;
  local_58 = uVar5;
  if (local_78 != 0) {
    plVar9 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar9 = plStack_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pUVar13->bClampToZero = this->bDisallowNegativeScaling;
  pUVar13->bUseEqualScaling = true;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pUVar10[1]._padding_ = (longlong)pUVar13;
  pUVar10[1]._padding_ = (longlong)&pUVar13->_padding_;
  pUVar14 = UGizmoComponentHitTarget::Construct(param_1,(UObject *)this);
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    local_d8 = *(longlong *)&pUVar14->UpdateHoverFunction;
    uVar5 = *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x8;
    local_c8 = *(longlong *)&(pUVar14->UpdateHoverFunction).field_0x10;
    uStack_c0 = *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x18;
    local_b8 = *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x20;
    plStack_b0 = *(longlong **)&(pUVar14->UpdateHoverFunction).field_0x28;
    *(code **)&pUVar14->UpdateHoverFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l12::<lambda_3>,void,bool>
         ::Call;
    *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x8 = uStack_d0;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x10 = 0x51e77a98;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x14 = 1;
    *(UPrimitiveComponent **)&(pUVar14->UpdateHoverFunction).field_0x18 = param_1;
    *(UCombinedTransformGizmo **)&(pUVar14->UpdateHoverFunction).field_0x20 = this;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x28 = 0;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x2c = 0;
    uStack_d0 = uVar5;
    if (local_d8 != 0) {
      plVar9 = &local_c8;
      if (plStack_b0 != (longlong *)0x0) {
        plVar9 = plStack_b0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  pUVar17 = pUVar15;
  if (pUVar14 != (UGizmoComponentHitTarget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    pUVar17 = (UInteractiveGizmo *)&pUVar14->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  pUVar10[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)pUVar14;
  pUVar10[2]._padding_ = (longlong)pUVar17;
  pUVar17 = pUVar15;
  if ((param_6 != (IGizmoStateTarget *)0x0) &&
     (pUVar12 = (UInteractiveGizmo *)(**(code **)((longlong)*param_6 + 8))(param_6),
     pUVar12 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    pUVar11 = Z_Construct_UClass_UGizmoStateTarget_NoRegister();
    pUVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar12,pUVar11);
    pUVar17 = pUVar12;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  pUVar10[2]._padding_ = (longlong)pUVar17;
  pTVar2 = &this->ActiveGizmos;
  pUVar10[2]._padding_ = (longlong)pUVar15;
  local_108 = pUVar10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_108) &&
     (lVar16 = (longlong)(this->ActiveGizmos).ArrayMax,
     (FScriptContainerElement *)&local_108 < pFVar3 + lVar16 * 8)) {
    local_120 = (longlong)(this->ActiveGizmos).ArrayNum;
    local_118 = 8;
    local_138 = &local_108;
    local_130 = pFVar3;
    local_128 = lVar16;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (UInteractiveGizmo *)(*pcVar4)();
      return pUVar10;
    }
  }
  iVar8 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar8 + 1;
  *(UInteractiveGizmo **)(pFVar3 + (longlong)iVar8 * 8) = local_108;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_108 != (UInteractiveGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_108);
  }
  return pUVar10;
}

// AddPlaneTranslationGizmo @ 149648d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddPlaneTranslationGizmo
          (UCombinedTransformGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  int *piVar1;
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined4 uVar5;
  longlong lVar6;
  UPrimitiveComponent *pUVar7;
  FWeakObjectPtr *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  bool bVar14;
  int iVar15;
  longlong *plVar16;
  UPlanePositionGizmo *this_00;
  UClass *pUVar17;
  UInteractiveGizmo *pUVar18;
  undefined ***pppuVar19;
  UPlanePositionGizmo *pUVar20;
  undefined1 auStackY_1a8 [32];
  UPrimitiveComponent *local_158;
  UPlanePositionGizmo *local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr FStack_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_128;
  undefined4 local_120;
  void *local_118;
  undefined8 local_110;
  UPrimitiveComponent *local_108;
  UPlanePositionGizmo *local_100 [2];
  undefined4 local_ec;
  undefined4 local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined ***pppuStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined ***pppuStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  plVar16 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar20 = (UPlanePositionGizmo *)0x0;
  local_118 = (void *)0x0;
  local_110 = 0;
  this_00 = (UPlanePositionGizmo *)
            (**(code **)(*plVar16 + 0x2d0))
                      (plVar16,&this->PlanePositionBuilderIdentifier,&local_118,0);
  if (this_00 == (UPlanePositionGizmo *)0x0) {
LAB_149648dea:
    this_00 = pUVar20;
  }
  else {
    pUVar17 = Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
    iVar15 = (int)pUVar17->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar17->_padding_)) goto LAB_149648dea;
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if (this_00 == (UPlanePositionGizmo *)0x0) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286478>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x64e,"Gizmo");
    if (!bVar14) {
      return (UInteractiveGizmo *)0x0;
    }
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  bVar14 = UPlanePositionGizmo::InitializeAsTranslateGizmo(this_00,param_1,param_2);
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4678433611253286482>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                          ,0x652,"Gizmo->InitializeAsTranslateGizmo(Params, &SharedState)"), bVar14)
     ) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  lVar6 = *(longlong *)&this_00->ParameterSource;
  if (lVar6 != 0) {
    pUVar17 = Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_NoRegister();
    iVar15 = (int)pUVar17->_padding_;
    if ((iVar15 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar15 * 8)
        == &pUVar17->_padding_)) {
      if (param_1->Axis == Y) {
        pUVar20 = (UPlanePositionGizmo *)&DAT_00000001;
      }
      else if (param_1->Axis == Z) {
        pUVar20 = (UPlanePositionGizmo *)&DAT_00000002;
      }
      local_78 = *(longlong *)(lVar6 + 0xb0);
      uVar12 = *(undefined8 *)(lVar6 + 0xb8);
      local_68 = *(longlong *)(lVar6 + 0xc0);
      uStack_60 = *(undefined8 *)(lVar6 + 200);
      uVar11 = *(undefined8 *)(lVar6 + 0xd0);
      plStack_50 = *(longlong **)(lVar6 + 0xd8);
      *(code **)(lVar6 + 0xb0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l8::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
      *(undefined8 *)(lVar6 + 0xb8) = uStack_70;
      *(undefined4 *)(lVar6 + 0xc0) = 0x51e776d8;
      *(undefined4 *)(lVar6 + 0xc4) = 1;
      *(UCombinedTransformGizmo **)(lVar6 + 200) = this;
      *(undefined4 *)(lVar6 + 0xd0) = (undefined4)local_58;
      *(undefined4 *)(lVar6 + 0xd4) = local_58._4_4_;
      *(undefined4 *)(lVar6 + 0xd8) = 0;
      *(undefined4 *)(lVar6 + 0xdc) = 0;
      local_138 = 1;
      local_134 = 2;
      local_128 = 2;
      local_120 = 1;
      uStack_70 = uVar12;
      local_58 = uVar11;
      if (local_78 != 0) {
        plVar16 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar16 = plStack_50;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      local_d8 = *(longlong *)(lVar6 + 0x50);
      uVar11 = *(undefined8 *)(lVar6 + 0x58);
      ppuVar13 = *(undefined ***)(lVar6 + 0x60);
      uStack_c0 = *(undefined8 *)(lVar6 + 0x68);
      local_b8 = *(undefined8 *)(lVar6 + 0x70);
      pppuStack_b0 = *(undefined ****)(lVar6 + 0x78);
      local_c8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::`8'::<lambda_2>,1,0>
                  ::_vftable_;
      uVar5 = (&local_138)[(longlong)pUVar20];
      *(code **)(lVar6 + 0x50) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l8::<lambda_2>,bool,double,double_&>
           ::Call;
      *(undefined8 *)(lVar6 + 0x58) = uStack_d0;
      *(undefined4 *)(lVar6 + 0x60) = 0x51e776f8;
      *(undefined4 *)(lVar6 + 100) = 1;
      *(UCombinedTransformGizmo **)(lVar6 + 0x68) = this;
      *(undefined4 *)(lVar6 + 0x70) = uVar5;
      *(undefined4 *)(lVar6 + 0x74) = local_ec;
      *(undefined4 *)(lVar6 + 0x78) = 0;
      *(undefined4 *)(lVar6 + 0x7c) = 0;
      local_c8 = ppuVar13;
      uStack_d0 = uVar11;
      if (local_d8 != 0) {
        pppuVar19 = &local_c8;
        if (pppuStack_b0 != (undefined ***)0x0) {
          pppuVar19 = pppuStack_b0;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      local_a8 = *(longlong *)(lVar6 + 0x80);
      uVar11 = *(undefined8 *)(lVar6 + 0x88);
      ppuVar13 = *(undefined ***)(lVar6 + 0x90);
      uStack_90 = *(undefined8 *)(lVar6 + 0x98);
      local_88 = *(undefined8 *)(lVar6 + 0xa0);
      pppuStack_80 = *(undefined ****)(lVar6 + 0xa8);
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::`8'::<lambda_3>,1,0>
                  ::_vftable_;
      uVar5 = *(undefined4 *)((longlong)&local_128 + (longlong)pUVar20 * 4);
      *(code **)(lVar6 + 0x80) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l8::<lambda_3>,bool,double,double_&>
           ::Call;
      *(undefined8 *)(lVar6 + 0x88) = uStack_a0;
      *(undefined4 *)(lVar6 + 0x90) = 0x51e77718;
      *(undefined4 *)(lVar6 + 0x94) = 1;
      *(UCombinedTransformGizmo **)(lVar6 + 0x98) = this;
      *(undefined4 *)(lVar6 + 0xa0) = uVar5;
      *(undefined4 *)(lVar6 + 0xa4) = local_dc;
      *(undefined4 *)(lVar6 + 0xa8) = 0;
      *(undefined4 *)(lVar6 + 0xac) = 0;
      uStack_a0 = uVar11;
      local_98 = ppuVar13;
      if (local_a8 != 0) {
        pppuVar19 = &local_98;
        if (pppuStack_80 != (undefined ***)0x0) {
          pppuVar19 = pppuStack_80;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      goto LAB_1496490af;
    }
  }
  bVar14 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4678433611253286495>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                      ,0x65f,"false");
  if (bVar14) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
LAB_1496490af:
  pTVar2 = &this->TranslationSubGizmos;
  pUVar7 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_108 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_108);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FStack_140.ObjectIndex = 0;
  FStack_140.ObjectSerialNumber = 0;
  local_100[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&FStack_140,(FObjectPtr)local_100);
  pFVar8 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar8 <= &local_148) &&
      (&local_148 < pFVar8 + (longlong)(this->TranslationSubGizmos).ArrayMax * 2)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  iVar15 = (this->TranslationSubGizmos).ArrayNum;
  piVar1 = &(this->TranslationSubGizmos).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TranslationSubGizmos).ArrayNum = iVar15 + 1;
  pTVar3 = &this->ActiveComponents;
  pFVar8 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x10);
  *pFVar8 = local_148;
  pFVar8[1] = FStack_140;
  local_158 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_158 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158);
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_158) &&
      ((FScriptContainerElement *)&local_158 <
       pFVar9 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  iVar15 = (this->ActiveComponents).ArrayNum;
  piVar1 = &(this->ActiveComponents).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ActiveComponents).ArrayNum = iVar15 + 1;
  *(UPrimitiveComponent **)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_158;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_158 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158);
  }
  pTVar4 = &this->ActiveGizmos;
  local_150 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar9 = (pTVar4->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_150) &&
      ((FScriptContainerElement *)&local_150 < pFVar9 + (longlong)(this->ActiveGizmos).ArrayMax * 8)
      ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (UInteractiveGizmo *)(*pcVar10)();
    return pUVar18;
  }
  iVar15 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar4->AllocatorInstance,piVar1);
  }
  pFVar9 = (pTVar4->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar15 + 1;
  *(UPlanePositionGizmo **)(pFVar9 + (longlong)iVar15 * 8) = local_150;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_150 != (UPlanePositionGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_150);
  }
  return (UInteractiveGizmo *)this_00;
}

// AddPlaneTranslationGizmo @ 1496493c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddPlaneTranslationGizmo
          (UCombinedTransformGizmo *this,UPrimitiveComponent *param_1,USceneComponent *param_2,
          IGizmoAxisSource *param_3,IGizmoTransformSource *param_4,IGizmoStateTarget *param_5,
          int param_6,int param_7)

{
  int *piVar1;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  TObjectPtr<UInputBehaviorSet>_u_0 TVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  UInteractiveGizmo *pUVar12;
  UClass *pUVar13;
  UInteractiveGizmo *this_00;
  UInteractiveGizmo *pUVar14;
  UGizmoPlaneTranslationParameterSource *pUVar15;
  UGizmoComponentHitTarget *pUVar16;
  UObject *this_01;
  UObject *pUVar17;
  longlong lVar18;
  UInteractiveGizmo *pUVar19;
  UObject *pUVar20;
  undefined1 auStack_1f8 [32];
  UInteractiveGizmo **local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  UInteractiveGizmo *local_1a8;
  void *local_1a0;
  undefined8 local_198;
  IGizmoTransformSource *local_190;
  undefined4 local_17c;
  undefined4 local_16c;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong *plStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  UInputBehaviorSet *local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  TObjectPtr<UInputBehaviorSet>_u_0 TStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_190 = param_4;
  plVar11 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar19 = (UInteractiveGizmo *)0x0;
  local_1a0 = (void *)0x0;
  local_198 = 0;
  pUVar12 = (UInteractiveGizmo *)
            (**(code **)(*plVar11 + 0x2d0))
                      (plVar11,&this->PlanePositionBuilderIdentifier,&local_1a0,0);
  if (pUVar12 != (UInteractiveGizmo *)0x0) {
    pUVar13 = Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
    iVar10 = (int)pUVar13->_padding_;
    if ((iVar10 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar13->_padding_)) goto LAB_14964946f;
  }
  pUVar12 = pUVar19;
LAB_14964946f:
  if (local_1a0 != (void *)0x0) {
    FMemory::Free(local_1a0);
  }
  if ((pUVar12 == (UInteractiveGizmo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TranslateGizmo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x73a,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pUVar12 = (UInteractiveGizmo *)(*pcVar4)();
    return pUVar12;
  }
  pUVar14 = pUVar19;
  if ((param_3 != (IGizmoAxisSource *)0x0) &&
     (this_00 = (UInteractiveGizmo *)(**(code **)((longlong)*param_3 + 8))(param_3),
     this_00 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar13 = Z_Construct_UClass_UGizmoAxisSource_NoRegister();
    pUVar14 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar13);
    pUVar19 = this_00;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  pUVar12[1]._padding_ = (longlong)pUVar19;
  pUVar12[1]._padding_ = (longlong)pUVar14;
  pUVar15 = UGizmoPlaneTranslationParameterSource::Construct(param_3,local_190,(UObject *)this);
  pUVar20 = (UObject *)0x0;
  local_d8 = *(longlong *)&pUVar15->PositionConstraintFunction;
  uVar6 = *(undefined8 *)&(pUVar15->PositionConstraintFunction).field_0x8;
  local_c8 = *(longlong *)&(pUVar15->PositionConstraintFunction).field_0x10;
  uStack_c0 = *(undefined8 *)&(pUVar15->PositionConstraintFunction).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar15->PositionConstraintFunction).field_0x20;
  plStack_b0 = *(longlong **)&(pUVar15->PositionConstraintFunction).field_0x28;
  *(code **)&pUVar15->PositionConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
       ::Call;
  *(undefined8 *)&(pUVar15->PositionConstraintFunction).field_0x8 = uStack_d0;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x10 = 0x51e778d8;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar15->PositionConstraintFunction).field_0x18 = this;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x20 = (undefined4)local_b8;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x24 = local_b8._4_4_;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar15->PositionConstraintFunction).field_0x2c = 0;
  uStack_d0 = uVar6;
  local_b8 = uVar5;
  if (local_d8 != 0) {
    plVar11 = &local_c8;
    if (plStack_b0 != (longlong *)0x0) {
      plVar11 = plStack_b0;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  local_168 = *(longlong *)&pUVar15->AxisXDeltaConstraintFunction;
  uVar5 = *(undefined8 *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x8;
  local_158 = *(longlong *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x10;
  uStack_150 = *(undefined8 *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x18;
  local_148 = *(undefined8 *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x20;
  plStack_140 = *(longlong **)&(pUVar15->AxisXDeltaConstraintFunction).field_0x28;
  *(code **)&pUVar15->AxisXDeltaConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_2>,bool,double,double_&>
       ::Call;
  *(undefined8 *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x8 = uStack_160;
  *(undefined4 *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x10 = 0x51e778f8;
  *(undefined4 *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar15->AxisXDeltaConstraintFunction).field_0x18 = this;
  *(int *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x20 = param_6;
  *(undefined4 *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x24 = local_17c;
  *(undefined4 *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar15->AxisXDeltaConstraintFunction).field_0x2c = 0;
  uStack_160 = uVar5;
  if (local_168 != 0) {
    plVar11 = &local_158;
    if (plStack_140 != (longlong *)0x0) {
      plVar11 = plStack_140;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  local_138 = *(longlong *)&pUVar15->AxisYDeltaConstraintFunction;
  uVar5 = *(undefined8 *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x8;
  local_128 = *(longlong *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x10;
  uStack_120 = *(undefined8 *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x18;
  local_118 = *(undefined8 *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x20;
  plStack_110 = *(longlong **)&(pUVar15->AxisYDeltaConstraintFunction).field_0x28;
  *(code **)&pUVar15->AxisYDeltaConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_3>,bool,double,double_&>
       ::Call;
  *(undefined8 *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x8 = uStack_130;
  *(undefined4 *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x10 = 0x51e77918;
  *(undefined4 *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar15->AxisYDeltaConstraintFunction).field_0x18 = this;
  *(int *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x20 = param_7;
  *(undefined4 *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x24 = local_16c;
  *(undefined4 *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar15->AxisYDeltaConstraintFunction).field_0x2c = 0;
  uStack_130 = uVar5;
  if (local_138 != 0) {
    plVar11 = &local_128;
    if (plStack_110 != (longlong *)0x0) {
      plVar11 = plStack_110;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  pUVar17 = pUVar20;
  if (pUVar15 != (UGizmoPlaneTranslationParameterSource *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    pUVar17 = (UObject *)&pUVar15->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UGizmoPlaneTranslationParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pUVar12[1]._padding_ = (longlong)pUVar15;
  pUVar12[1]._padding_ = (longlong)pUVar17;
  pUVar16 = UGizmoComponentHitTarget::Construct(param_1,(UObject *)this);
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    local_108 = *(longlong *)&pUVar16->UpdateHoverFunction;
    uVar5 = *(undefined8 *)&(pUVar16->UpdateHoverFunction).field_0x8;
    local_f8 = *(longlong *)&(pUVar16->UpdateHoverFunction).field_0x10;
    uStack_f0 = *(undefined8 *)&(pUVar16->UpdateHoverFunction).field_0x18;
    local_e8 = *(undefined8 *)&(pUVar16->UpdateHoverFunction).field_0x20;
    plStack_e0 = *(longlong **)&(pUVar16->UpdateHoverFunction).field_0x28;
    *(code **)&pUVar16->UpdateHoverFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l12::<lambda_4>,void,bool>
         ::Call;
    *(undefined8 *)&(pUVar16->UpdateHoverFunction).field_0x8 = uStack_100;
    *(undefined4 *)&(pUVar16->UpdateHoverFunction).field_0x10 = 0x51e77938;
    *(undefined4 *)&(pUVar16->UpdateHoverFunction).field_0x14 = 1;
    *(UPrimitiveComponent **)&(pUVar16->UpdateHoverFunction).field_0x18 = param_1;
    *(UCombinedTransformGizmo **)&(pUVar16->UpdateHoverFunction).field_0x20 = this;
    *(undefined4 *)&(pUVar16->UpdateHoverFunction).field_0x28 = 0;
    *(undefined4 *)&(pUVar16->UpdateHoverFunction).field_0x2c = 0;
    uStack_100 = uVar5;
    if (local_108 != 0) {
      plVar11 = &local_f8;
      if (plStack_e0 != (longlong *)0x0) {
        plVar11 = plStack_e0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  pUVar17 = pUVar20;
  if (pUVar16 != (UGizmoComponentHitTarget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    pUVar17 = (UObject *)&pUVar16->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  pUVar12[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)pUVar16;
  pUVar12[2]._padding_ = (longlong)pUVar17;
  pUVar17 = pUVar20;
  if ((param_5 != (IGizmoStateTarget *)0x0) &&
     (this_01 = (UObject *)(**(code **)((longlong)*param_5 + 8))(param_5), this_01 != (UObject *)0x0
     )) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_01);
    }
    pUVar13 = Z_Construct_UClass_UGizmoStateTarget_NoRegister();
    pUVar17 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar13);
    pUVar20 = this_01;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar20);
  }
  pUVar12[2]._padding_ = (longlong)pUVar20;
  pUVar12[2]._padding_ = (longlong)pUVar17;
  local_a8 = pUVar12[2].InputBehaviors.field0_0x0.DebugPtr;
  lVar7 = pUVar12[3]._padding_;
  local_98 = pUVar12[3]._padding_;
  lStack_90 = pUVar12[3]._padding_;
  lVar18 = pUVar12[3]._padding_;
  plStack_80 = (longlong *)pUVar12[3]._padding_;
  pUVar12[2].InputBehaviors.field0_0x0.DebugPtr =
       (UInputBehaviorSet *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_5>,bool>
       ::Call;
  pUVar12[3]._padding_ = lStack_a0;
  *(undefined4 *)&pUVar12[3]._padding_ = 0x51e77958;
  *(undefined4 *)((longlong)&pUVar12[3]._padding_ + 4) = 1;
  pUVar12[3]._padding_ = (longlong)this;
  *(undefined4 *)&pUVar12[3]._padding_ = (undefined4)local_88;
  *(undefined4 *)((longlong)&pUVar12[3]._padding_ + 4) = local_88._4_4_;
  *(undefined4 *)&pUVar12[3]._padding_ = 0;
  *(undefined4 *)((longlong)&pUVar12[3]._padding_ + 4) = 0;
  lStack_a0 = lVar7;
  local_88 = lVar18;
  if (local_a8 != (UInputBehaviorSet *)0x0) {
    plVar11 = &local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar11 = plStack_80;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  local_78 = pUVar12[3]._padding_;
  TVar8 = pUVar12[3].InputBehaviors.field0_0x0;
  local_68 = pUVar12[4]._padding_;
  lStack_60 = pUVar12[4]._padding_;
  lVar18 = pUVar12[4]._padding_;
  plStack_50 = (longlong *)pUVar12[4]._padding_;
  pUVar12[3]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_6>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
       ::Call;
  pUVar12[3].InputBehaviors.field0_0x0 = TStack_70;
  *(undefined4 *)&pUVar12[4]._padding_ = 0x51e77978;
  *(undefined4 *)((longlong)&pUVar12[4]._padding_ + 4) = 1;
  pUVar12[4]._padding_ = (longlong)this;
  *(undefined4 *)&pUVar12[4]._padding_ = (undefined4)local_58;
  *(undefined4 *)((longlong)&pUVar12[4]._padding_ + 4) = local_58._4_4_;
  *(undefined4 *)&pUVar12[4]._padding_ = 0;
  *(undefined4 *)((longlong)&pUVar12[4]._padding_ + 4) = 0;
  TStack_70 = TVar8;
  local_58 = lVar18;
  if (local_78 != 0) {
    plVar11 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar11 = plStack_50;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  pTVar2 = &this->ActiveGizmos;
  local_1a8 = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_1a8) &&
     (lVar18 = (longlong)(this->ActiveGizmos).ArrayMax,
     (FScriptContainerElement *)&local_1a8 < pFVar3 + lVar18 * 8)) {
    local_1c0 = (longlong)(this->ActiveGizmos).ArrayNum;
    local_1b8 = 8;
    local_1d8 = &local_1a8;
    local_1d0 = pFVar3;
    local_1c8 = lVar18;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pUVar12 = (UInteractiveGizmo *)(*pcVar4)();
      return pUVar12;
    }
  }
  iVar10 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar10 + 1;
  *(UInteractiveGizmo **)(pFVar3 + (longlong)iVar10 * 8) = local_1a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1a8 != (UInteractiveGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a8);
  }
  return pUVar12;
}

// AddUniformScaleGizmo @ 149649a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddUniformScaleGizmo
          (UCombinedTransformGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  int *piVar1;
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar4;
  UPrimitiveComponent *pUVar5;
  FWeakObjectPtr *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  UPlanePositionGizmo *this_00;
  UClass *pUVar14;
  UInteractiveGizmo *pUVar15;
  UPlanePositionGizmo *pUVar16;
  undefined1 auStackY_108 [32];
  UPrimitiveComponent *local_b8;
  UPlanePositionGizmo *local_b0;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr FStack_a0;
  void *local_98;
  undefined8 local_90;
  UPrimitiveComponent *local_88;
  UPlanePositionGizmo *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  plVar13 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  local_98 = (void *)0x0;
  local_90 = 0;
  this_00 = (UPlanePositionGizmo *)
            (**(code **)(*plVar13 + 0x2d0))
                      (plVar13,&this->PlanePositionBuilderIdentifier,&local_98,0);
  if (this_00 == (UPlanePositionGizmo *)0x0) {
LAB_149649afa:
    this_00 = (UPlanePositionGizmo *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
    iVar12 = (int)pUVar14->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar14->_padding_)) goto LAB_149649afa;
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (this_00 == (UPlanePositionGizmo *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286593>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x6c1,"Gizmo");
    if (!bVar11) {
      return (UInteractiveGizmo *)0x0;
    }
    pcVar8 = (code *)swi(3);
    pUVar15 = (UInteractiveGizmo *)(*pcVar8)();
    return pUVar15;
  }
  bVar11 = UPlanePositionGizmo::InitializeAsUniformScaleGizmo
                     (this_00,param_1,this->bDisallowNegativeScaling,param_2);
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4678433611253286597>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                          ,0x6c5,
                          "Gizmo->InitializeAsUniformScaleGizmo(Params, bDisallowNegativeScaling, &SharedState)"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    pUVar15 = (UInteractiveGizmo *)(*pcVar8)();
    return pUVar15;
  }
  pUVar16 = *(UPlanePositionGizmo **)&this_00->ParameterSource;
  if (pUVar16 != (UPlanePositionGizmo *)0x0) {
    pUVar14 = Z_Construct_UClass_UGizmoUniformScaleParameterSource_NoRegister();
    iVar12 = (int)pUVar14->_padding_;
    if ((iVar12 <= *(int *)(pUVar16->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar14->_padding_)) goto LAB_149649bc2;
  }
  pUVar16 = (UPlanePositionGizmo *)0x0;
LAB_149649bc2:
  if (pUVar16 == (UPlanePositionGizmo *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286605>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x6cd,"false");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pUVar15 = (UInteractiveGizmo *)(*pcVar8)();
      return pUVar15;
    }
  }
  else {
    local_78 = *(longlong *)&(pUVar16->AxisSource).field_0x8;
    uVar10 = *(undefined8 *)&pUVar16->ParameterSource;
    local_68 = *(longlong *)&(pUVar16->ParameterSource).field_0x8;
    uStack_60 = *(undefined8 *)&pUVar16->HitTarget;
    uVar9 = *(undefined8 *)&(pUVar16->HitTarget).field_0x8;
    plStack_50 = *(longlong **)&pUVar16->StateTarget;
    *(code **)&(pUVar16->AxisSource).field_0x8 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddUniformScaleGizmo'::__l8::<lambda_1>,bool,double,double_&>
         ::Call;
    *(undefined8 *)&pUVar16->ParameterSource = uStack_70;
    *(undefined4 *)&(pUVar16->ParameterSource).field_0x8 = 0x51e777b8;
    *(undefined4 *)&(pUVar16->ParameterSource).field_0xc = 1;
    *(UCombinedTransformGizmo **)&pUVar16->HitTarget = this;
    *(undefined4 *)&(pUVar16->HitTarget).field_0x8 = (undefined4)local_58;
    *(undefined4 *)&(pUVar16->HitTarget).field_0xc = local_58._4_4_;
    *(undefined4 *)&pUVar16->StateTarget = 0;
    *(undefined4 *)&(pUVar16->StateTarget).field_0x4 = 0;
    local_58 = uVar9;
    uStack_70 = uVar10;
    if (local_78 != 0) {
      plVar13 = &local_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar13 = plStack_50;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  pTVar2 = &this->UniformScaleSubGizmos;
  pUVar5 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  local_88 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_88);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FStack_a0.ObjectIndex = 0;
  FStack_a0.ObjectSerialNumber = 0;
  local_80 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&FStack_a0,(FObjectPtr)&local_80);
  pFVar6 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar6 <= &local_a8) &&
      (&local_a8 < pFVar6 + (longlong)(this->UniformScaleSubGizmos).ArrayMax * 2)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    pUVar15 = (UInteractiveGizmo *)(*pcVar8)();
    return pUVar15;
  }
  iVar12 = (this->UniformScaleSubGizmos).ArrayNum;
  piVar1 = &(this->UniformScaleSubGizmos).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->UniformScaleSubGizmos).ArrayNum = iVar12 + 1;
  pTVar3 = &this->ActiveComponents;
  pFVar6 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10);
  *pFVar6 = local_a8;
  pFVar6[1] = FStack_a0;
  local_b8 = param_1->Component;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_b8 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8);
  }
  pFVar7 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 <
       pFVar7 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    pUVar15 = (UInteractiveGizmo *)(*pcVar8)();
    return pUVar15;
  }
  iVar12 = (this->ActiveComponents).ArrayNum;
  piVar1 = &(this->ActiveComponents).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ActiveComponents).ArrayNum = iVar12 + 1;
  *(UPrimitiveComponent **)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_b8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_b8 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8);
  }
  pTVar4 = &this->ActiveGizmos;
  local_b0 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_b0) &&
      ((FScriptContainerElement *)&local_b0 < pFVar7 + (longlong)(this->ActiveGizmos).ArrayMax * 8))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar11)) {
    pcVar8 = (code *)swi(3);
    pUVar15 = (UInteractiveGizmo *)(*pcVar8)();
    return pUVar15;
  }
  iVar12 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar4->AllocatorInstance,piVar1);
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar12 + 1;
  *(UPlanePositionGizmo **)(pFVar7 + (longlong)iVar12 * 8) = local_b0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_b0 != (UPlanePositionGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b0);
  }
  return (UInteractiveGizmo *)this_00;
}

// AddUniformScaleGizmo @ 149649f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmo::AddUniformScaleGizmo
          (UCombinedTransformGizmo *this,UPrimitiveComponent *param_1,USceneComponent *param_2,
          IGizmoAxisSource *param_3,IGizmoAxisSource *param_4,IGizmoTransformSource *param_5,
          IGizmoStateTarget *param_6)

{
  int *piVar1;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  UInteractiveGizmo *pUVar10;
  UClass *pUVar11;
  UInteractiveGizmo *this_00;
  UInteractiveGizmo *pUVar12;
  UGizmoUniformScaleParameterSource *pUVar13;
  UGizmoComponentHitTarget *pUVar14;
  UInteractiveGizmo *pUVar15;
  longlong lVar16;
  UInteractiveGizmo *pUVar17;
  undefined1 auStack_128 [32];
  UInteractiveGizmo **local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  UInteractiveGizmo *local_d8;
  void *local_d0;
  undefined8 local_c8;
  IGizmoTransformSource *local_c0;
  IGizmoAxisSource *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_b8 = param_4;
  local_c0 = param_5;
  plVar9 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pUVar15 = (UInteractiveGizmo *)0x0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  pUVar10 = (UInteractiveGizmo *)
            (**(code **)(*plVar9 + 0x2d0))(plVar9,&this->PlanePositionBuilderIdentifier,&local_d0,0)
  ;
  if (pUVar10 != (UInteractiveGizmo *)0x0) {
    pUVar11 = Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
    iVar8 = (int)pUVar11->_padding_;
    if ((iVar8 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar11->_padding_)) goto LAB_14964a009;
  }
  pUVar10 = pUVar15;
LAB_14964a009:
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  if ((pUVar10 == (UInteractiveGizmo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScaleGizmo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x7cd,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pUVar10 = (UInteractiveGizmo *)(*pcVar4)();
    return pUVar10;
  }
  pUVar17 = pUVar15;
  pUVar12 = pUVar15;
  if ((param_3 != (IGizmoAxisSource *)0x0) &&
     (this_00 = (UInteractiveGizmo *)(**(code **)((longlong)*param_3 + 8))(param_3),
     this_00 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar11 = Z_Construct_UClass_UGizmoAxisSource_NoRegister();
    pUVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar11);
    pUVar17 = this_00;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  pUVar10[1]._padding_ = (longlong)pUVar17;
  pUVar10[1]._padding_ = (longlong)pUVar12;
  pUVar13 = UGizmoUniformScaleParameterSource::Construct(local_b8,local_c0,(UObject *)this);
  local_78 = *(longlong *)&pUVar13->ScaleAxisDeltaConstraintFunction;
  uVar6 = *(undefined8 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x8;
  local_68 = *(longlong *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x10;
  uStack_60 = *(undefined8 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x20;
  plStack_50 = *(longlong **)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x28;
  *(code **)&pUVar13->ScaleAxisDeltaConstraintFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCombinedTransformGizmo::AddUniformScaleGizmo'::__l2::<lambda_1>,bool,double,double_&>
       ::Call;
  *(undefined8 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x8 = uStack_70;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x10 = 0x51e77ab8;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x14 = 1;
  *(UCombinedTransformGizmo **)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x18 = this;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x28 = 0;
  *(undefined4 *)&(pUVar13->ScaleAxisDeltaConstraintFunction).field_0x2c = 0;
  uStack_70 = uVar6;
  local_58 = uVar5;
  if (local_78 != 0) {
    plVar9 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar9 = plStack_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pUVar17 = pUVar15;
  if (pUVar13 != (UGizmoUniformScaleParameterSource *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    pUVar17 = (UInteractiveGizmo *)&pUVar13->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UGizmoUniformScaleParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pUVar10[1]._padding_ = (longlong)pUVar13;
  pUVar10[1]._padding_ = (longlong)pUVar17;
  pUVar14 = UGizmoComponentHitTarget::Construct(param_1,(UObject *)this);
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    local_a8 = *(longlong *)&pUVar14->UpdateHoverFunction;
    uVar5 = *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x8;
    local_98 = *(longlong *)&(pUVar14->UpdateHoverFunction).field_0x10;
    uStack_90 = *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x18;
    local_88 = *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x20;
    plStack_80 = *(longlong **)&(pUVar14->UpdateHoverFunction).field_0x28;
    *(code **)&pUVar14->UpdateHoverFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCombinedTransformGizmo::AddUniformScaleGizmo'::__l12::<lambda_2>,void,bool>
         ::Call;
    *(undefined8 *)&(pUVar14->UpdateHoverFunction).field_0x8 = uStack_a0;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x10 = 0x51e77ad8;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x14 = 1;
    *(UPrimitiveComponent **)&(pUVar14->UpdateHoverFunction).field_0x18 = param_1;
    *(UCombinedTransformGizmo **)&(pUVar14->UpdateHoverFunction).field_0x20 = this;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x28 = 0;
    *(undefined4 *)&(pUVar14->UpdateHoverFunction).field_0x2c = 0;
    uStack_a0 = uVar5;
    if (local_a8 != 0) {
      plVar9 = &local_98;
      if (plStack_80 != (longlong *)0x0) {
        plVar9 = plStack_80;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  pUVar17 = pUVar15;
  if (pUVar14 != (UGizmoComponentHitTarget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    pUVar17 = (UInteractiveGizmo *)&pUVar14->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  pUVar10[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)pUVar14;
  pUVar10[2]._padding_ = (longlong)pUVar17;
  pUVar17 = pUVar15;
  if ((param_6 != (IGizmoStateTarget *)0x0) &&
     (pUVar12 = (UInteractiveGizmo *)(**(code **)((longlong)*param_6 + 8))(param_6),
     pUVar12 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    pUVar11 = Z_Construct_UClass_UGizmoStateTarget_NoRegister();
    pUVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar12,pUVar11);
    pUVar17 = pUVar12;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  pUVar10[2]._padding_ = (longlong)pUVar17;
  pTVar2 = &this->ActiveGizmos;
  pUVar10[2]._padding_ = (longlong)pUVar15;
  local_d8 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
     (lVar16 = (longlong)(this->ActiveGizmos).ArrayMax,
     (FScriptContainerElement *)&local_d8 < pFVar3 + lVar16 * 8)) {
    local_f0 = (longlong)(this->ActiveGizmos).ArrayNum;
    local_e8 = 8;
    local_108 = &local_d8;
    local_100 = pFVar3;
    local_f8 = lVar16;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (UInteractiveGizmo *)(*pcVar4)();
      return pUVar10;
    }
  }
  iVar8 = (this->ActiveGizmos).ArrayNum;
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->ActiveGizmos).ArrayNum = iVar8 + 1;
  *(UInteractiveGizmo **)(pFVar3 + (longlong)iVar8 * 8) = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UInteractiveGizmo *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  return pUVar10;
}

// ApplyGizmoActiveMode @ 14964a3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::ApplyGizmoActiveMode(UCombinedTransformGizmo *this)

{
  EToolContextTransformGizmoMode EVar1;
  int iVar2;
  longlong *plVar3;
  ACombinedTransformGizmoActor *pAVar4;
  UPrimitiveComponent *pUVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  atomic<int> aVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  atomic<int> aVar13;
  undefined8 uVar14;
  USceneComponent *pUVar15;
  UClass *pUVar16;
  longlong *plVar17;
  UViewAdjustedStaticMeshGizmoComponent *pUVar18;
  FWeakObjectPtr *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  FWeakObjectPtr *pFVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  longlong lVar25;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UCombinedTransformGizmo *local_48;
  UCombinedTransformGizmo *local_40;
  
  EVar1 = this->ActiveGizmoMode;
  if ((EVar1 == Combined) || (EVar1 == Translation)) {
    bVar11 = true;
    if (EVar1 != Combined) goto LAB_14964a3dd;
LAB_14964a3e6:
    bVar24 = true;
    if (EVar1 != Combined) goto LAB_14964a3ed;
LAB_14964a3f6:
    bVar23 = true;
    if ((EVar1 == Combined) || (EVar1 == Scale)) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->IsNonUniformScaleAllowedFunc);
      pcVar8 = *(code **)&this->IsNonUniformScaleAllowedFunc;
      plVar3 = *(longlong **)&(this->IsNonUniformScaleAllowedFunc).field_0x28;
      plVar17 = (longlong *)&(this->IsNonUniformScaleAllowedFunc).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar17 = plVar3;
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      (*pcVar8)(uVar14);
    }
  }
  else {
    bVar11 = false;
LAB_14964a3dd:
    if (EVar1 == Rotation) goto LAB_14964a3e6;
    bVar24 = false;
LAB_14964a3ed:
    if (EVar1 == Scale) goto LAB_14964a3f6;
    bVar23 = false;
  }
  iVar2 = (this->TranslationSubGizmos).ArrayNum;
  pFVar19 = (FWeakObjectPtr *)(this->TranslationSubGizmos).AllocatorInstance.Data;
  pFVar21 = pFVar19 + (longlong)iVar2 * 2;
  while( true ) {
    if ((this->TranslationSubGizmos).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UCombinedTransformGizmo::FSubGizmoInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == pFVar21) break;
    bVar10 = FWeakObjectPtr::IsValid(pFVar19);
    if (bVar10) {
      pUVar15 = (USceneComponent *)FWeakObjectPtr::Get(pFVar19);
      USceneComponent::SetVisibility(pUVar15,bVar11,DirtyOnly);
    }
    pFVar19 = pFVar19 + 2;
  }
  iVar2 = (this->RotationSubGizmos).ArrayNum;
  pFVar19 = (FWeakObjectPtr *)(this->RotationSubGizmos).AllocatorInstance.Data;
  pFVar21 = pFVar19 + (longlong)iVar2 * 2;
  while( true ) {
    if ((this->RotationSubGizmos).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UCombinedTransformGizmo::FSubGizmoInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar19 == pFVar21) break;
    bVar11 = FWeakObjectPtr::IsValid(pFVar19);
    if (bVar11) {
      pUVar15 = (USceneComponent *)FWeakObjectPtr::Get(pFVar19);
      USceneComponent::SetVisibility(pUVar15,bVar24,DirtyOnly);
    }
    pFVar19 = pFVar19 + 2;
  }
  iVar2 = (this->UniformScaleSubGizmos).ArrayNum;
  pFVar19 = (FWeakObjectPtr *)(this->UniformScaleSubGizmos).AllocatorInstance.Data;
  pFVar21 = pFVar19 + (longlong)iVar2 * 2;
  while( true ) {
    if ((this->UniformScaleSubGizmos).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UCombinedTransformGizmo::FSubGizmoInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar19 == pFVar21) break;
    bVar11 = FWeakObjectPtr::IsValid(pFVar19);
    if (bVar11) {
      pUVar15 = (USceneComponent *)FWeakObjectPtr::Get(pFVar19);
      USceneComponent::SetVisibility(pUVar15,bVar23,DirtyOnly);
    }
    pFVar19 = pFVar19 + 2;
  }
  pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
  if ((pAVar4 == (ACombinedTransformGizmoActor *)0x0) ||
     (((uint)pAVar4->_padding_ >> 0x1e & 1) != 0)) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286098>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x4d2,"IsValid(GizmoActor)");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    goto LAB_14964a8c8;
  }
  if ((this->ActiveGizmoMode == Combined) || (this->ActiveGizmoMode == Scale)) {
    pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
    local_48 = this;
    `UCombinedTransformGizmo::ApplyGizmoActiveMode'::__l8::<lambda_3>::operator()
              (&local_48,(pAVar4->AxisScaleX).field0_0x0.DebugPtr,
               (pAVar4->FullAxisScaleX).field0_0x0.DebugPtr);
    pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
    `UCombinedTransformGizmo::ApplyGizmoActiveMode'::__l8::<lambda_3>::operator()
              (&local_48,(pAVar4->AxisScaleY).field0_0x0.DebugPtr,
               (pAVar4->FullAxisScaleY).field0_0x0.DebugPtr);
    pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
    `UCombinedTransformGizmo::ApplyGizmoActiveMode'::__l8::<lambda_3>::operator()
              (&local_48,(pAVar4->AxisScaleZ).field0_0x0.DebugPtr,
               (pAVar4->FullAxisScaleZ).field0_0x0.DebugPtr);
    pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
    local_40 = this;
    if ((pAVar4->PlaneScaleXY).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
LAB_14964a62b:
      pUVar18 = (UViewAdjustedStaticMeshGizmoComponent *)0x0;
    }
    else {
      pUVar16 = Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister();
      bVar11 = FObjectPtr::IsA((FObjectPtr *)&pAVar4->PlaneScaleXY,pUVar16);
      if (!bVar11) goto LAB_14964a62b;
      pUVar18 = (UViewAdjustedStaticMeshGizmoComponent *)(pAVar4->PlaneScaleXY).field0_0x0.DebugPtr;
    }
    `UCombinedTransformGizmo::ApplyGizmoActiveMode'::__l8::<lambda_4>::operator()
              (&local_40,pUVar18,Z);
    pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
    if ((pAVar4->PlaneScaleXZ).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
LAB_14964a66f:
      pUVar18 = (UViewAdjustedStaticMeshGizmoComponent *)0x0;
    }
    else {
      pUVar16 = Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister();
      bVar11 = FObjectPtr::IsA((FObjectPtr *)&pAVar4->PlaneScaleXZ,pUVar16);
      if (!bVar11) goto LAB_14964a66f;
      pUVar18 = (UViewAdjustedStaticMeshGizmoComponent *)(pAVar4->PlaneScaleXZ).field0_0x0.DebugPtr;
    }
    `UCombinedTransformGizmo::ApplyGizmoActiveMode'::__l8::<lambda_4>::operator()
              (&local_40,pUVar18,Y);
    pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
    if ((pAVar4->PlaneScaleYZ).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
LAB_14964a6b3:
      pUVar18 = (UViewAdjustedStaticMeshGizmoComponent *)0x0;
    }
    else {
      pUVar16 = Z_Construct_UClass_UViewAdjustedStaticMeshGizmoComponent_NoRegister();
      bVar11 = FObjectPtr::IsA((FObjectPtr *)&pAVar4->PlaneScaleYZ,pUVar16);
      if (!bVar11) goto LAB_14964a6b3;
      pUVar18 = (UViewAdjustedStaticMeshGizmoComponent *)(pAVar4->PlaneScaleYZ).field0_0x0.DebugPtr;
    }
    `UCombinedTransformGizmo::ApplyGizmoActiveMode'::__l8::<lambda_4>::operator()
              (&local_40,pUVar18,X);
  }
  iVar2 = (this->NonUniformScaleSubGizmos).ArrayNum;
  pFVar19 = (FWeakObjectPtr *)(this->NonUniformScaleSubGizmos).AllocatorInstance.Data;
  pFVar21 = pFVar19 + (longlong)iVar2 * 2;
  while( true ) {
    if ((this->NonUniformScaleSubGizmos).ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UCombinedTransformGizmo::FSubGizmoInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar19 == pFVar21) break;
    bVar11 = FWeakObjectPtr::IsValid(pFVar19);
    if (bVar11) {
      pUVar15 = (USceneComponent *)FWeakObjectPtr::Get(pFVar19);
      USceneComponent::SetVisibility(pUVar15,bVar23,DirtyOnly);
    }
    pFVar19 = pFVar19 + 2;
  }
  pUVar5 = (((this->GizmoActor).field0_0x0.DebugPtr)->FreeRotateHandle).field0_0x0.DebugPtr;
  if (pUVar5 != (UPrimitiveComponent *)0x0) {
    USceneComponent::SetVisibility
              ((USceneComponent *)pUVar5,this->ActiveGizmoMode == Rotation,DirtyOnly);
  }
  pUVar5 = (((this->GizmoActor).field0_0x0.DebugPtr)->FreeTranslateHandle).field0_0x0.DebugPtr;
  if (pUVar5 != (UPrimitiveComponent *)0x0) {
    if ((this->ActiveGizmoMode == Translation) ||
       ((this->ActiveGizmoMode == Combined && ((this->UniformScaleSubGizmos).ArrayNum == 0)))) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    USceneComponent::SetVisibility((USceneComponent *)pUVar5,bVar11,DirtyOnly);
  }
  if ((CombinedTransformGizmoLocals::GizmoDrawMode == 1) &&
     (uVar22 = (((this->GizmoActor).field0_0x0.DebugPtr)->AdjustersThatMirrorOnlyInCombinedMode).
               ArrayNum - 1, -1 < (int)uVar22)) {
    lVar25 = (longlong)(int)uVar22 << 4;
    do {
      pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
      uVar12 = 0;
      if ((int)uVar22 < (pAVar4->AdjustersThatMirrorOnlyInCombinedMode).ArrayNum) {
        uVar12 = ~uVar22 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (pAVar4->AdjustersThatMirrorOnlyInCombinedMode).AllocatorInstance.Data;
      pTVar20 = *(TReferenceControllerBase<1> **)(pFVar6 + lVar25 + 8);
      if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
LAB_14964a840:
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4678433611253286182>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                            ,0x526,"Adjuster");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        aVar9 = pTVar20->SharedReferenceCount;
        do {
          if (aVar9 == (atomic<int>)0x0) {
            pTVar20 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14964a840;
          }
          LOCK();
          aVar13 = pTVar20->SharedReferenceCount;
          bVar11 = aVar9 == aVar13;
          if (bVar11) {
            pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
            aVar13 = aVar9;
          }
          UNLOCK();
          aVar9 = aVar13;
        } while (!bVar11);
        lVar7 = *(longlong *)(pFVar6 + lVar25);
        if (lVar7 == 0) goto LAB_14964a840;
        *(bool *)(lVar7 + 0xe1) = this->ActiveGizmoMode == Combined;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      lVar25 = lVar25 + -0x10;
      uVar22 = uVar22 - 1;
    } while (-1 < (int)uVar22);
  }
LAB_14964a8c8:
  this->PreviousActiveGizmoMode = this->ActiveGizmoMode;
  return;
}

// BeginTransformEditSequence @ 14964b5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::BeginTransformEditSequence(UCombinedTransformGizmo *this)

{
  UGizmoTransformChangeStateTarget *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  pUVar1 = (this->StateTarget).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoTransformChangeStateTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014964b5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x10))(&pUVar1->_padding_);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4678433611253286365>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                     ,0x5dd,"StateTarget");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ClearActiveTarget @ 14964d320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::ClearActiveTarget(UCombinedTransformGizmo *this)

{
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  TMulticastDelegate<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnAboutToClearActiveTarget,this,(this->ActiveTarget).field0_0x0.DebugPtr);
  pTVar1 = &this->ActiveGizmos;
  iVar5 = (this->ActiveGizmos).ArrayNum;
  piVar4 = &(this->ActiveGizmos).ArrayNum;
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  pFVar3 = pFVar8 + (longlong)iVar5 * 8;
  while( true ) {
    if (*piVar4 != iVar5) {
      `TCheckedPointerIterator<TObjectPtr<UInteractiveGizmo>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar3) break;
    plVar7 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    (**(code **)(*plVar7 + 0x2d8))(plVar7);
    pFVar8 = pFVar8 + 8;
  }
  iVar5 = *piVar4;
  if (iVar5 < 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar5,&pTVar1->AllocatorInstance,piVar4,&(this->ActiveGizmos).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,0,(longlong)-iVar5 << 3);
  }
  else if (0 < iVar5) {
    *piVar4 = *piVar4 - iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar1->AllocatorInstance,*piVar4,&(this->ActiveGizmos).ArrayMax);
  }
  pTVar2 = &this->ActiveComponents;
  iVar5 = (this->ActiveComponents).ArrayNum;
  piVar4 = &(this->ActiveComponents).ArrayNum;
  if (iVar5 < 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar5,&pTVar2->AllocatorInstance,piVar4,
                       &(this->ActiveComponents).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8,0,(longlong)-iVar5 << 3);
  }
  else if (0 < iVar5) {
    *piVar4 = *piVar4 - iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,*piVar4,&(this->ActiveComponents).ArrayMax);
  }
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TranslationSubGizmos,0,Default);
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_>::SetNum
            (&this->RotationSubGizmos,0,Default);
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_>::SetNum
            (&this->UniformScaleSubGizmos,0,Default);
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_>::SetNum
            (&this->NonUniformScaleSubGizmos,0,Default);
  (this->CameraAxisSource).field0_0x0.DebugPtr = (UGizmoConstantFrameAxisSource *)0x0;
  (this->AxisXSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisYSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisZSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->UnitAxisXSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->UnitAxisYSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->UnitAxisZSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->StateTarget).field0_0x0.DebugPtr = (UGizmoTransformChangeStateTarget *)0x0;
  (this->ActiveTarget).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  this->TransactionProviderAtLastSetActiveTarget = (IToolContextTransactionProvider *)0x0;
  return;
}

// EndTransformEditSequence @ 149652120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::EndTransformEditSequence(UCombinedTransformGizmo *this)

{
  UGizmoTransformChangeStateTarget *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  pUVar1 = (this->StateTarget).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoTransformChangeStateTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014965216e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x18))(&pUVar1->_padding_);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4678433611253286373>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                     ,0x5e5,"StateTarget");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// GetGizmoElements @ 149654e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ETransformGizmoSubElements __thiscall
UCombinedTransformGizmo::GetGizmoElements(UCombinedTransformGizmo *this)

{
  ACombinedTransformGizmoActor *pAVar1;
  ETransformGizmoSubElements EVar2;
  ETransformGizmoSubElements EVar3;
  
  pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
  if (pAVar1 == (ACombinedTransformGizmoActor *)0x0) {
    return None;
  }
  EVar3 = -(uint)((pAVar1->TranslateX).field0_0x0.DebugPtr != (UPrimitiveComponent *)0x0) &
          TranslateAxisX;
  EVar2 = EVar3 | TranslateAxisY;
  if ((pAVar1->TranslateY).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar2 = EVar3;
  }
  EVar3 = EVar2 | TranslateAxisZ;
  if ((pAVar1->TranslateZ).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | TranslatePlaneXY;
  if ((pAVar1->TranslateXY).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar2 = EVar3;
  }
  EVar3 = EVar2 | TranslatePlaneYZ;
  if ((pAVar1->TranslateYZ).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | TranslatePlaneXZ;
  if ((pAVar1->TranslateXZ).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar2 = EVar3;
  }
  EVar3 = EVar2 | FreeTranslate;
  if ((pAVar1->FreeTranslateHandle).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | RotateAxisX;
  if ((pAVar1->RotateX).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar2 = EVar3;
  }
  EVar3 = EVar2 | RotateAxisY;
  if ((pAVar1->RotateY).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | RotateAxisZ;
  if ((pAVar1->RotateZ).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar2 = EVar3;
  }
  EVar3 = EVar2 | FreeRotate;
  if ((pAVar1->FreeRotateHandle).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | ScaleAxisX;
  if ((pAVar1->AxisScaleX).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar2 = EVar3;
  }
  EVar3 = EVar2 | ScaleAxisY;
  if ((pAVar1->AxisScaleY).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | ScaleAxisZ;
  if ((pAVar1->AxisScaleZ).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar2 = EVar3;
  }
  EVar3 = EVar2 | ScalePlaneXY;
  if ((pAVar1->PlaneScaleXY).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | ScalePlaneYZ;
  if ((pAVar1->PlaneScaleYZ).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar2 = EVar3;
  }
  EVar3 = EVar2 | ScalePlaneXZ;
  if ((pAVar1->PlaneScaleXZ).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar3 = EVar2;
  }
  EVar2 = EVar3 | ScaleUniform;
  if ((pAVar1->UniformScale).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
    EVar2 = EVar3;
  }
  return EVar2;
}

// GetGizmoTransform @ 149654f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
UCombinedTransformGizmo::GetGizmoTransform
          (UCombinedTransformGizmo *this,TTransform<double> *__return_storage_ptr__)

{
  ACombinedTransformGizmoActor *pAVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  __m128d _Var8;
  __m128d _Var9;
  bool bVar10;
  TTransform<double> *pTVar11;
  
  pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
  if ((pAVar1 != (ACombinedTransformGizmoActor *)0x0) &&
     (((uint)pAVar1->_padding_ >> 0x1e & 1) == 0)) {
    lVar2 = ((this->GizmoActor).field0_0x0.DebugPtr)->_padding_;
    dVar4 = *(double *)(lVar2 + 0x1f8);
    dVar5 = *(double *)(lVar2 + 0x200);
    dVar6 = *(double *)(lVar2 + 0x208);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar2 + 0x1f0);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar4;
    dVar4 = *(double *)(lVar2 + 0x210);
    dVar7 = *(double *)(lVar2 + 0x218);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar6;
    dVar5 = *(double *)(lVar2 + 0x220);
    dVar6 = *(double *)(lVar2 + 0x228);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar7;
    dVar4 = *(double *)(lVar2 + 0x230);
    dVar7 = *(double *)(lVar2 + 0x238);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar6;
    dVar5 = *(double *)(lVar2 + 0x240);
    dVar6 = *(double *)(lVar2 + 0x248);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar7;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar6;
    return __return_storage_ptr__;
  }
  bVar10 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4678433611253286315>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                      ,0x5ab,"IsValid(GizmoActor)");
  _Var8 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  if (bVar10) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TTransform<double> *)(*pcVar3)();
    return pTVar11;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var9.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var9.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var8.m128d_f64;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149655c50

UClass * __cdecl UCombinedTransformGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedTransformGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmo",
               &Z_Registration_Info_UClass_UCombinedTransformGizmo.InnerSingleton,
               StaticRegisterNativesUCombinedTransformGizmo,0x560,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombinedTransformGizmo>,
               InternalVTableHelperCtorCaller<UCombinedTransformGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedTransformGizmo.InnerSingleton;
}

// IsNonUniformScaleAllowed @ 14965a4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UCombinedTransformGizmo::IsNonUniformScaleAllowed(UCombinedTransformGizmo *this)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->IsNonUniformScaleAllowedFunc);
  UNRECOVERED_JUMPTABLE = *(code **)&this->IsNonUniformScaleAllowedFunc;
  plVar1 = *(longlong **)&(this->IsNonUniformScaleAllowedFunc).field_0x28;
  plVar4 = (longlong *)&(this->IsNonUniformScaleAllowedFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014965a538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// IsVisible @ 14965a6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UCombinedTransformGizmo::IsVisible(UCombinedTransformGizmo *this)

{
  ACombinedTransformGizmoActor *pAVar1;
  
  pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
  if (((pAVar1 != (ACombinedTransformGizmoActor *)0x0) &&
      (((uint)pAVar1->_padding_ >> 0x1e & 1) == 0)) &&
     (-1 < (char)((this->GizmoActor).field0_0x0.DebugPtr)->_padding_)) {
    return true;
  }
  return false;
}

// PositionAxisDeltaSnapFunction @ 14965e940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCombinedTransformGizmo::PositionAxisDeltaSnapFunction
          (UCombinedTransformGizmo *this,double param_1,double *param_2,int param_3)

{
  code *pcVar1;
  longlong lVar2;
  ForAnyElementType FVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  UInteractiveGizmoManager *pUVar9;
  USceneSnappingManager *pUVar10;
  char cVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStackY_1e8 [32];
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  double local_1a8 [2];
  undefined1 local_198 [184];
  TVector<double>_u_0 local_e0 [5];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  lVar13 = (longlong)param_3;
  if (*(void **)(this->CustomTranslationDeltaConstraintFunctions + lVar13) == (void *)0x0) {
    if (this->bSnapToWorldGrid != false) {
      plVar8 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x328))(plVar8);
      cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8);
      if ((this->RelativeTranslationSnapping).bInheritFromContext == false) {
        cVar11 = (this->RelativeTranslationSnapping).bEnabledDirectly;
      }
      else {
        cVar11 = (this->RelativeTranslationSnapping).bEnabledInContext;
      }
      if ((cVar11 != '\0') || (cVar5 != '\0')) {
        pUVar9 = (UInteractiveGizmoManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
        pUVar10 = USceneSnappingManager::Find(pUVar9);
        if (pUVar10 != (USceneSnappingManager *)0x0) {
          FSceneSnapQueryRequest::FSceneSnapQueryRequest((FSceneSnapQueryRequest *)local_198);
          local_198[3] = Position;
          local_198[4] = Grid;
          if ((this->bGridSizeIsExplicit != false) &&
             (&this->ExplicitGridSize != (TVector<double> *)(local_198 + 0x58))) {
            local_198._88_8_ = (this->ExplicitGridSize).field0_0x0._s_0.X;
            local_198._96_8_ = (this->ExplicitGridSize).field0_0x0._s_0.Y;
            local_198[0x70] = true;
            local_198._104_8_ = (this->ExplicitGridSize).field0_0x0._s_0.Z;
          }
          local_1b8.Data = (FScriptContainerElement *)0x0;
          local_1b0 = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,0x10,1,&local_1b8,0,(int *)((longlong)&local_1b0 + 4));
          local_e0[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_e0[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_e0[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if ((2 < (uint)param_3) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                 ,0x7a2,L""), bVar6)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          lVar2 = *(longlong *)pUVar10;
          *(double *)((longlong)local_e0 + lVar13 * 8) = param_1;
          cVar5 = (**(code **)(lVar2 + 0x2b8))(pUVar10,local_198,&local_1b8);
          if (cVar5 != '\0') {
            if (((int)local_1b0 < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            FVar3.Data = local_1b8.Data;
            if ((2 < (uint)param_3) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                   ,0x7a2,L""), bVar6)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            *param_2 = *(double *)(FVar3.Data + lVar13 * 8 + 0x20);
            if (local_1b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data);
            }
            local_198._80_4_ = 0;
            if ((ForElementType<FSetElementId>)local_198._72_8_ !=
                (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_198._72_8_);
            }
            TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)(local_198 + 8));
            return true;
          }
          if (local_1b8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data);
          }
          local_198._80_4_ = 0;
          if ((ForElementType<FSetElementId>)local_198._72_8_ != (ForElementType<FSetElementId>)0x0)
          {
            FMemory::Free((void *)local_198._72_8_);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_198 + 8));
        }
      }
    }
    uVar4 = 0;
  }
  else {
    local_1a8[0] = param_1;
    UE::Core::Private::Function::CheckCallable
              (*(void **)(this->CustomTranslationDeltaConstraintFunctions + lVar13));
    pcVar1 = *(code **)(this->CustomTranslationDeltaConstraintFunctions + lVar13);
    plVar12 = (longlong *)&this->CustomTranslationDeltaConstraintFunctions[lVar13].field_0x10;
    plVar8 = *(longlong **)((longlong)plVar12 + 0x18);
    if (plVar8 != (longlong *)0x0) {
      plVar12 = plVar8;
    }
    uVar7 = (**(code **)(*plVar12 + 8))();
    uVar4 = (*pcVar1)(uVar7,local_1a8,param_2);
  }
  return (bool)uVar4;
}

// PositionSnapFunction @ 14965ec20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCombinedTransformGizmo::PositionSnapFunction
          (UCombinedTransformGizmo *this,TVector<double> *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong *plVar9;
  UInteractiveGizmoManager *pUVar10;
  USceneSnappingManager *pUVar11;
  undefined1 auStackY_1b8 [32];
  ForAnyElementType local_188;
  undefined8 local_180;
  FSceneSnapQueryRequest local_178;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar2 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar3 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  *(undefined4 *)&param_2->field0_0x0 = *(undefined4 *)&param_1->field0_0x0;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 4) = uVar2;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 8) = uVar3;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc) = uVar4;
  (param_2->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if (this->bSnapToWorldGrid != false) {
    if ((this->RelativeTranslationSnapping).bInheritFromContext == false) {
      cVar6 = (this->RelativeTranslationSnapping).bEnabledDirectly;
    }
    else {
      cVar6 = (this->RelativeTranslationSnapping).bEnabledInContext;
    }
    if (cVar6 != '\x01') {
      plVar9 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x328))(plVar9);
      cVar6 = (**(code **)(*plVar9 + 0x20))(plVar9);
      if (cVar6 == '\0') {
        pUVar10 = (UInteractiveGizmoManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
        pUVar11 = USceneSnappingManager::Find(pUVar10);
        if (pUVar11 != (USceneSnappingManager *)0x0) {
          FSceneSnapQueryRequest::FSceneSnapQueryRequest(&local_178);
          local_178.RequestType = Position;
          local_178.TargetTypes = Grid;
          if ((this->bGridSizeIsExplicit != false) &&
             ((TOptional<UE::Math::TVector<double>_> *)&this->ExplicitGridSize !=
              &local_178.GridSize)) {
            local_178.GridSize.TypedValue.field0_0x0._s_0.X =
                 (this->ExplicitGridSize).field0_0x0._s_0.X;
            local_178.GridSize.TypedValue.field0_0x0._s_0.Y =
                 (this->ExplicitGridSize).field0_0x0._s_0.Y;
            local_178.GridSize.bIsSet = true;
            local_178.GridSize.TypedValue.field0_0x0._s_0.Z =
                 (this->ExplicitGridSize).field0_0x0._s_0.Z;
          }
          local_188.Data = (FScriptContainerElement *)0x0;
          local_180 = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,0x10,1,&local_188,0,(int *)((longlong)&local_180 + 4));
          local_178.Position.field0_0x0._0_4_ = *(undefined4 *)&param_1->field0_0x0;
          local_178.Position.field0_0x0._4_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
          local_178.Position.field0_0x0._8_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
          local_178.Position.field0_0x0._12_4_ =
               *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
          local_178.Position.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
          cVar6 = (**(code **)(*(longlong *)pUVar11 + 0x2b8))(pUVar11,&local_178,&local_188);
          if (cVar6 != '\0') {
            if (((int)local_180 < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return (bool)uVar8;
            }
            dVar5 = *(double *)(local_188.Data + 0x28);
            (param_2->field0_0x0)._s_0.X = *(double *)(local_188.Data + 0x20);
            (param_2->field0_0x0)._s_0.Y = dVar5;
            (param_2->field0_0x0)._s_0.Z = *(double *)(local_188.Data + 0x30);
            FMemory::Free(local_188.Data);
            local_178.CustomTargetTypes.HashSize = 0;
            if (local_178.CustomTargetTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0
               ) {
              FMemory::Free((void *)local_178.CustomTargetTypes.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_178.CustomTargetTypes.Elements);
            return true;
          }
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data);
          }
          local_178.CustomTargetTypes.HashSize = 0;
          if (local_178.CustomTargetTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
          {
            FMemory::Free((void *)local_178.CustomTargetTypes.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_178.CustomTargetTypes.Elements);
        }
      }
    }
  }
  return false;
}

// ReinitializeGizmoTransform @ 14965f220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::ReinitializeGizmoTransform
          (UCombinedTransformGizmo *this,TTransform<double> *param_1,bool param_2)

{
  FTransformUpdated *this_00;
  ACombinedTransformGizmoActor *pAVar1;
  USceneComponent *this_01;
  UTransformProxy *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_118 [32];
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_e8;
  FDestructionSentinel local_c8 [2];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
  if ((pAVar1 == (ACombinedTransformGizmoActor *)0x0) ||
     (((uint)pAVar1->_padding_ >> 0x1e & 1) != 0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253286325>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x5b5,"IsValid(GizmoActor)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_01 = (USceneComponent *)((this->GizmoActor).field0_0x0.DebugPtr)->_padding_;
    local_e8._padding_ = 0;
    local_e8.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.InvocationList._8_8_ = ___xmm_00000000000000020000000000000000;
    local_e8._24_8_ = _UNK_150631d48;
    this_00 = &this_01->TransformUpdated;
    if ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00 != &local_e8) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>_>
                (&local_e8,(TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)local_c8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (local_c8[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8[0].Accessor,local_c8);
    }
    local_98.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_98.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_98.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_98.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_98.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_98.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_98.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_98.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_98.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_98.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_98.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_98.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    if (param_2) {
      local_98.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_98.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_98.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
      local_98.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    USceneComponent::SetWorldTransform(this_01,&local_98,false,(FHitResult *)0x0,None);
    if (&local_e8 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,&local_e8);
    }
    pUVar2 = (this->ActiveTarget).field0_0x0.DebugPtr;
    bVar4 = pUVar2->bSetPivotMode;
    pUVar2->bSetPivotMode = true;
    pUVar2 = (this->ActiveTarget).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,param_1);
    ((this->ActiveTarget).field0_0x0.DebugPtr)->bSetPivotMode = bVar4;
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               local_e8.InvocationList.AllocatorInstance.Data,local_e8.InvocationList.ArrayNum);
    if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
        local_e8.InvocationList.AllocatorInstance.Data !=
        (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free(local_e8.InvocationList.AllocatorInstance.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_e8);
  }
  return;
}

// RotationAxisAngleSnapFunction @ 149660680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCombinedTransformGizmo::RotationAxisAngleSnapFunction
          (UCombinedTransformGizmo *this,double param_1,double *param_2,int param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  double dVar6;
  double local_res8;
  undefined1 local_68 [32];
  char local_48;
  double local_38;
  
  if (*(void **)(this->CustomRotationDeltaConstraintFunctions + param_3) == (void *)0x0) {
    if (this->bSnapToWorldRotGrid != false) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x328))(plVar4);
      (**(code **)(*plVar4 + 0x30))(plVar4,local_68);
      if (local_48 != '\0') {
        if (this->bRotationGridSizeIsExplicit != false) {
          local_38 = (this->ExplicitRotationGridSize).Yaw;
        }
        dVar6 = UE::Geometry::SnapToIncrement<double>
                          (param_1 * __real_404ca5dc1a63c1f8,local_38,0.0);
        *param_2 = dVar6 * __real_3f91df46a2529d39;
        return true;
      }
    }
    uVar2 = 0;
  }
  else {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable
              (*(void **)(this->CustomRotationDeltaConstraintFunctions + param_3));
    pcVar1 = *(code **)(this->CustomRotationDeltaConstraintFunctions + param_3);
    plVar5 = (longlong *)&this->CustomRotationDeltaConstraintFunctions[param_3].field_0x10;
    plVar4 = *(longlong **)((longlong)plVar5 + 0x18);
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    uVar3 = (**(code **)(*plVar5 + 8))();
    uVar2 = (*pcVar1)(uVar3,&local_res8,param_2);
  }
  return (bool)uVar2;
}

// RotationSnapFunction @ 1496607a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TQuat<double> * __thiscall
UCombinedTransformGizmo::RotationSnapFunction
          (UCombinedTransformGizmo *this,TQuat<double> *__return_storage_ptr__,
          TQuat<double> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  longlong *plVar8;
  UInteractiveGizmoManager *pUVar9;
  USceneSnappingManager *pUVar10;
  TQuat<double> *pTVar11;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  void *local_178;
  undefined8 local_170;
  FSceneSnapQueryRequest local_168;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar2 = *(undefined4 *)((longlong)&param_1->X + 4);
  uVar3 = *(undefined4 *)&param_1->Y;
  uVar4 = *(undefined4 *)((longlong)&param_1->Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&param_1->X;
  *(undefined4 *)((longlong)&__return_storage_ptr__->X + 4) = uVar2;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Y + 4) = uVar4;
  uVar2 = *(undefined4 *)((longlong)&param_1->Z + 4);
  uVar3 = *(undefined4 *)&param_1->W;
  uVar4 = *(undefined4 *)((longlong)&param_1->W + 4);
  *(undefined4 *)&__return_storage_ptr__->Z = *(undefined4 *)&param_1->Z;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Z + 4) = uVar2;
  *(undefined4 *)&__return_storage_ptr__->W = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->W + 4) = uVar4;
  if (this->bSnapToWorldRotGrid != false) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x328))(plVar8);
    cVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
    if (cVar6 == '\0') {
      pUVar9 = (UInteractiveGizmoManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      pUVar10 = USceneSnappingManager::Find(pUVar9);
      if (pUVar10 != (USceneSnappingManager *)0x0) {
        FSceneSnapQueryRequest::FSceneSnapQueryRequest(&local_168);
        local_168.DeltaRotation.X._0_4_ = *(undefined4 *)&param_1->X;
        local_168.DeltaRotation.X._4_4_ = *(undefined4 *)((longlong)&param_1->X + 4);
        local_168.DeltaRotation.Y._0_4_ = *(undefined4 *)&param_1->Y;
        local_168.DeltaRotation.Y._4_4_ = *(undefined4 *)((longlong)&param_1->Y + 4);
        local_168.DeltaRotation.Z._0_4_ = *(undefined4 *)&param_1->Z;
        local_168.DeltaRotation.Z._4_4_ = *(undefined4 *)((longlong)&param_1->Z + 4);
        local_168.DeltaRotation.W._0_4_ = *(undefined4 *)&param_1->W;
        local_168.DeltaRotation.W._4_4_ = *(undefined4 *)((longlong)&param_1->W + 4);
        local_168.RequestType = Rotation;
        local_168.TargetTypes = Grid;
        if ((this->bRotationGridSizeIsExplicit != false) &&
           ((TOptional<UE::Math::TRotator<double>_> *)&this->ExplicitRotationGridSize !=
            &local_168.RotGridSize)) {
          local_168.RotGridSize.TypedValue.Pitch._0_4_ =
               *(undefined4 *)&(this->ExplicitRotationGridSize).Pitch;
          local_168.RotGridSize.TypedValue.Pitch._4_4_ =
               *(undefined4 *)((longlong)&(this->ExplicitRotationGridSize).Pitch + 4);
          local_168.RotGridSize.TypedValue.Yaw._0_4_ =
               *(undefined4 *)&(this->ExplicitRotationGridSize).Yaw;
          local_168.RotGridSize.TypedValue.Yaw._4_4_ =
               *(undefined4 *)((longlong)&(this->ExplicitRotationGridSize).Yaw + 4);
          local_168.RotGridSize.bIsSet = true;
          local_168.RotGridSize.TypedValue.Roll = (this->ExplicitRotationGridSize).Roll;
        }
        local_178 = (void *)0x0;
        local_170 = 0;
        cVar6 = (**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10,&local_168,&local_178);
        if (cVar6 != '\0') {
          if ((int)local_170 < 1) {
            local_188 = 0;
            local_180 = (longlong)(int)local_170;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar1 = (code *)swi(3);
              pTVar11 = (TQuat<double> *)(*pcVar1)();
              return pTVar11;
            }
          }
          dVar5 = *(double *)((longlong)local_178 + 0x58);
          __return_storage_ptr__->X = *(double *)((longlong)local_178 + 0x50);
          __return_storage_ptr__->Y = dVar5;
          dVar5 = *(double *)((longlong)local_178 + 0x68);
          __return_storage_ptr__->Z = *(double *)((longlong)local_178 + 0x60);
          __return_storage_ptr__->W = dVar5;
        }
        if (local_178 != (void *)0x0) {
          FMemory::Free(local_178);
        }
        local_168.CustomTargetTypes.HashSize = 0;
        if (local_168.CustomTargetTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_168.CustomTargetTypes.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_168.CustomTargetTypes.Elements);
      }
    }
  }
  return __return_storage_ptr__;
}

// ScaleAxisDeltaSnapFunction @ 149660970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
          (UCombinedTransformGizmo *this,double param_1,double *param_2,int param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double local_res8;
  
  if (*(void **)(this->CustomScaleDeltaConstraintFunctions + param_3) != (void *)0x0) {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable
              (*(void **)(this->CustomScaleDeltaConstraintFunctions + param_3));
    pcVar1 = *(code **)(this->CustomScaleDeltaConstraintFunctions + param_3);
    plVar6 = (longlong *)&this->CustomScaleDeltaConstraintFunctions[param_3].field_0x10;
    plVar2 = *(longlong **)((longlong)plVar6 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    uVar3 = (*pcVar1)(uVar5,&local_res8,param_2);
    return (bool)uVar3;
  }
  bVar4 = ScaleAxisDeltaSnapFunction(this,param_1,param_2);
  return bVar4;
}

// ScaleAxisDeltaSnapFunction @ 149660a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
          (UCombinedTransformGizmo *this,double param_1,double *param_2)

{
  longlong *plVar1;
  double dVar2;
  undefined1 local_68 [64];
  char local_28;
  float local_24;
  
  if (this->bSnapToScaleGrid != false) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x328))(plVar1);
    (**(code **)(*plVar1 + 0x30))(plVar1,local_68);
    if (local_28 != '\0') {
      dVar2 = UE::Geometry::SnapToIncrement<double>(param_1,(double)local_24,0.0);
      *param_2 = dVar2;
      return true;
    }
  }
  return false;
}

// SetActiveTarget @ 149660aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetActiveTarget
          (UCombinedTransformGizmo *this,UTransformProxy *param_1,
          IToolContextTransactionProvider *param_2)

{
  int *piVar1;
  TUniquePtr<UE::GizmoUtil::FTransformSubGizmoSharedState,TDefaultDelete<UE::GizmoUtil::FTransformSubGizmoSharedState>_>
  *pTVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  ACombinedTransformGizmoActor *pAVar5;
  USceneComponent *this_00;
  TObjectPtr<UPrimitiveComponent>_u_0 TVar6;
  TObjectPtr<UPrimitiveComponent>_u_0 TVar7;
  TObjectPtr<UPrimitiveComponent>_u_0 TVar8;
  FScriptContainerElement *pFVar9;
  UPrimitiveComponent *pUVar10;
  FWeakObjectPtr *pFVar11;
  UGizmoTransformChangeStateTarget *pUVar12;
  UGizmoComponentAxisSource *pUVar13;
  UGizmoConstantFrameAxisSource *pUVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  FTransformSubGizmoSharedState *pFVar18;
  FTransformSubGizmoSharedState *pFVar19;
  TObjectPtr<UPrimitiveComponent> *pTVar20;
  undefined1 auStackY_1c8 [32];
  TObjectPtr<UPrimitiveComponent>_u_0 local_178;
  TObjectPtr<UTransformProxy>_u_0 local_170;
  undefined4 local_168;
  undefined1 local_164;
  longlong *local_160;
  undefined4 local_158;
  IToolContextTransactionProvider *local_150;
  undefined8 local_148;
  undefined1 local_140;
  FWeakObjectPtr local_138;
  FWeakObjectPtr FStack_130;
  UPrimitiveComponent *local_128;
  undefined8 local_120;
  longlong local_118;
  double local_110;
  double dStack_108;
  double local_100;
  TTransform<double> local_f8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->ActiveTarget).field0_0x0.DebugPtr != (UTransformProxy *)0x0) {
    (**(code **)(*(longlong *)this + 0x338))();
  }
  pAVar5 = (this->GizmoActor).field0_0x0.DebugPtr;
  if ((pAVar5 == (ACombinedTransformGizmoActor *)0x0) ||
     (((uint)pAVar5->_padding_ >> 0x1e & 1) != 0)) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253286199>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x537,"IsValid(GizmoActor)");
    if (bVar16) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTransformProxy *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->ActiveTarget).field0_0x0.DebugPtr = param_1;
    pAVar5 = (this->GizmoActor).field0_0x0.DebugPtr;
    this->TransactionProviderAtLastSetActiveTarget = param_2;
    this_00 = (USceneComponent *)pAVar5->_padding_;
    (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    local_f8.Rotation.XY.m128d_f64[0] = local_98;
    local_f8.Rotation.XY.m128d_f64[1] = dStack_90;
    local_f8.Rotation.ZW.m128d_f64[0] = local_88;
    local_f8.Rotation.ZW.m128d_f64[1] = dStack_80;
    local_f8.Translation.XY.m128d_f64[0] = local_78;
    local_f8.Translation.XY.m128d_f64[1] = dStack_70;
    local_f8.Translation.ZW.m128d_f64[0] = local_68;
    local_f8.Translation.ZW.m128d_f64[1] = dStack_60;
    local_100 = __real_3ff0000000000000;
    local_110 = ___xmm_3ff00000000000003ff0000000000000;
    dStack_108 = _UNK_150689688;
    local_f8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_f8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_f8.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
    local_f8.Scale3D.ZW.m128d_f64[1] = 0.0;
    USceneComponent::SetWorldTransform(this_00,&local_f8,false,(FHitResult *)0x0,None);
    local_170 = (this->ActiveTarget).field0_0x0;
    local_178.DebugPtr = (UPrimitiveComponent *)0x0;
    local_168 = 0;
    local_164 = 1;
    local_160 = (longlong *)0x0;
    local_158 = 0;
    local_148 = 0;
    local_140 = 1;
    local_150 = param_2;
    pFVar18 = ::operator_new(0x48);
    pFVar19 = (FTransformSubGizmoSharedState *)0x0;
    if (pFVar18 != (FTransformSubGizmoSharedState *)0x0) {
      pFVar18->TransformSource = (UGizmoScaledAndUnscaledTransformSources *)0x0;
      pFVar18->StateTarget = (UGizmoTransformChangeStateTarget *)0x0;
      pFVar18->CameraAxisSource = (UGizmoConstantFrameAxisSource *)0x0;
      pFVar18->CardinalAxisSources[0] = (UGizmoComponentAxisSource *)0x0;
      pFVar18->CardinalAxisSources[1] = (UGizmoComponentAxisSource *)0x0;
      pFVar18->CardinalAxisSources[2] = (UGizmoComponentAxisSource *)0x0;
      pFVar18->UnitCardinalAxisSources[0] = (UGizmoComponentAxisSource *)0x0;
      pFVar18->UnitCardinalAxisSources[1] = (UGizmoComponentAxisSource *)0x0;
      pFVar18->UnitCardinalAxisSources[2] = (UGizmoComponentAxisSource *)0x0;
      pFVar19 = pFVar18;
    }
    pTVar2 = &this->SubGizmoSharedState;
    if (pTVar2 != (TUniquePtr<UE::GizmoUtil::FTransformSubGizmoSharedState,TDefaultDelete<UE::GizmoUtil::FTransformSubGizmoSharedState>_>
                   *)&local_118) {
      pFVar18 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar19;
      ::operator_delete(pFVar18,0x48);
      pFVar19 = (FTransformSubGizmoSharedState *)0x0;
    }
    ::operator_delete(pFVar19,0x48);
    pAVar5 = (this->GizmoActor).field0_0x0.DebugPtr;
    TVar6 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->TranslateX).field0_0x0.DebugPtr;
    TVar7 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->TranslateY).field0_0x0.DebugPtr;
    TVar8 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->TranslateZ).field0_0x0.DebugPtr;
    if (TVar6.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 1;
      local_178 = TVar6;
      (**(code **)(*(longlong *)this + 0x378))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar7.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 2;
      local_178 = TVar7;
      (**(code **)(*(longlong *)this + 0x378))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar8.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 3;
      local_178 = TVar8;
      (**(code **)(*(longlong *)this + 0x378))(this,&local_178,pTVar2->Ptr);
    }
    pAVar5 = (this->GizmoActor).field0_0x0.DebugPtr;
    TVar6 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->TranslateYZ).field0_0x0.DebugPtr;
    TVar7 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->TranslateXZ).field0_0x0.DebugPtr;
    TVar8 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->TranslateXY).field0_0x0.DebugPtr;
    if (TVar6.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 1;
      local_178 = TVar6;
      (**(code **)(*(longlong *)this + 0x388))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar7.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 2;
      local_178 = TVar7;
      (**(code **)(*(longlong *)this + 0x388))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar8.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 3;
      local_178 = TVar8;
      (**(code **)(*(longlong *)this + 0x388))(this,&local_178,pTVar2->Ptr);
    }
    TVar6 = (TObjectPtr<UPrimitiveComponent>_u_0)
            (((this->GizmoActor).field0_0x0.DebugPtr)->FreeTranslateHandle).field0_0x0.DebugPtr;
    if (TVar6.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 0;
      local_178 = TVar6;
      (**(code **)(*(longlong *)this + 0x3d0))(this,&local_178,pTVar2->Ptr);
    }
    pAVar5 = (this->GizmoActor).field0_0x0.DebugPtr;
    TVar6 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->RotateX).field0_0x0.DebugPtr;
    TVar7 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->RotateY).field0_0x0.DebugPtr;
    TVar8 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->RotateZ).field0_0x0.DebugPtr;
    if (TVar6.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 1;
      local_178 = TVar6;
      (**(code **)(*(longlong *)this + 0x398))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar7.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 2;
      local_178 = TVar7;
      (**(code **)(*(longlong *)this + 0x398))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar8.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 3;
      local_178 = TVar8;
      (**(code **)(*(longlong *)this + 0x398))(this,&local_178,pTVar2->Ptr);
    }
    pTVar20 = &((this->GizmoActor).field0_0x0.DebugPtr)->RotationSphere;
    if ((pTVar20->field0_0x0).DebugPtr != (UPrimitiveComponent *)0x0) {
      pTVar3 = &this->ActiveComponents;
      pFVar9 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar9 <= pTVar20) &&
          (pTVar20 < pFVar9 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar17 = (this->ActiveComponents).ArrayNum;
      piVar1 = &(this->ActiveComponents).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar1);
      }
      pFVar9 = (pTVar3->AllocatorInstance).Data;
      (this->ActiveComponents).ArrayNum = iVar17 + 1;
      pUVar10 = (pTVar20->field0_0x0).DebugPtr;
      *(UPrimitiveComponent **)(pFVar9 + (longlong)iVar17 * 8) = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      pTVar4 = &this->RotationSubGizmos;
      pUVar10 = (((this->GizmoActor).field0_0x0.DebugPtr)->RotationSphere).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar10 != (UPrimitiveComponent *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
      }
      local_138.ObjectIndex = 0;
      local_138.ObjectSerialNumber = 0;
      local_128 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_128);
      FStack_130.ObjectIndex = 0;
      FStack_130.ObjectSerialNumber = 0;
      local_120 = 0;
      FWeakObjectPtr::operator=(&FStack_130,(FObjectPtr)&local_120);
      pFVar11 = (FWeakObjectPtr *)(pTVar4->AllocatorInstance).Data;
      if (((pFVar11 <= &local_138) &&
          (&local_138 < pFVar11 + (longlong)(this->RotationSubGizmos).ArrayMax * 2)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar17 = (this->RotationSubGizmos).ArrayNum;
      piVar1 = &(this->RotationSubGizmos).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar4->AllocatorInstance,piVar1);
      }
      (this->RotationSubGizmos).ArrayNum = iVar17 + 1;
      pFVar11 = (FWeakObjectPtr *)((pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 0x10);
      *pFVar11 = local_138;
      pFVar11[1] = FStack_130;
    }
    TVar6 = (TObjectPtr<UPrimitiveComponent>_u_0)
            (((this->GizmoActor).field0_0x0.DebugPtr)->FreeRotateHandle).field0_0x0.DebugPtr;
    if (TVar6.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 0;
      local_178 = TVar6;
      (**(code **)(*(longlong *)this + 0x3d8))(this,&local_178,pTVar2->Ptr);
    }
    TVar6 = (TObjectPtr<UPrimitiveComponent>_u_0)
            (((this->GizmoActor).field0_0x0.DebugPtr)->UniformScale).field0_0x0.DebugPtr;
    if (TVar6.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 0;
      local_178 = TVar6;
      (**(code **)(*(longlong *)this + 0x3c8))(this,&local_178,pTVar2->Ptr);
    }
    pAVar5 = (this->GizmoActor).field0_0x0.DebugPtr;
    TVar6 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->AxisScaleX).field0_0x0.DebugPtr;
    TVar7 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->AxisScaleY).field0_0x0.DebugPtr;
    TVar8 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->AxisScaleZ).field0_0x0.DebugPtr;
    if (TVar6.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 1;
      local_178 = TVar6;
      (**(code **)(*(longlong *)this + 0x3a8))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar7.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 2;
      local_178 = TVar7;
      (**(code **)(*(longlong *)this + 0x3a8))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar8.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 3;
      local_178 = TVar8;
      (**(code **)(*(longlong *)this + 0x3a8))(this,&local_178,pTVar2->Ptr);
    }
    pAVar5 = (this->GizmoActor).field0_0x0.DebugPtr;
    TVar6 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->PlaneScaleYZ).field0_0x0.DebugPtr;
    TVar7 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->PlaneScaleXZ).field0_0x0.DebugPtr;
    TVar8 = (TObjectPtr<UPrimitiveComponent>_u_0)(pAVar5->PlaneScaleXY).field0_0x0.DebugPtr;
    if (TVar6.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 1;
      local_178 = TVar6;
      (**(code **)(*(longlong *)this + 0x3b8))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar7.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 2;
      local_178 = TVar7;
      (**(code **)(*(longlong *)this + 0x3b8))(this,&local_178,pTVar2->Ptr);
    }
    if (TVar8.DebugPtr != (UPrimitiveComponent *)0x0) {
      local_168 = 3;
      local_178 = TVar8;
      (**(code **)(*(longlong *)this + 0x3b8))(this,&local_178,pTVar2->Ptr);
    }
    pUVar12 = pTVar2->Ptr->StateTarget;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UGizmoTransformChangeStateTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->StateTarget).field0_0x0.DebugPtr = pUVar12;
    pUVar13 = pTVar2->Ptr->CardinalAxisSources[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UGizmoComponentAxisSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->AxisXSource).field0_0x0.DebugPtr = pUVar13;
    pUVar13 = pTVar2->Ptr->CardinalAxisSources[1];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UGizmoComponentAxisSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->AxisYSource).field0_0x0.DebugPtr = pUVar13;
    pUVar13 = pTVar2->Ptr->CardinalAxisSources[2];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UGizmoComponentAxisSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->AxisZSource).field0_0x0.DebugPtr = pUVar13;
    pUVar14 = pTVar2->Ptr->CameraAxisSource;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar14 != (UGizmoConstantFrameAxisSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    (this->CameraAxisSource).field0_0x0.DebugPtr = pUVar14;
    pUVar13 = pTVar2->Ptr->UnitCardinalAxisSources[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UGizmoComponentAxisSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->UnitAxisXSource).field0_0x0.DebugPtr = pUVar13;
    pUVar13 = pTVar2->Ptr->UnitCardinalAxisSources[1];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UGizmoComponentAxisSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->UnitAxisYSource).field0_0x0.DebugPtr = pUVar13;
    pUVar13 = pTVar2->Ptr->UnitCardinalAxisSources[2];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UGizmoComponentAxisSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->UnitAxisZSource).field0_0x0.DebugPtr = pUVar13;
    ApplyGizmoActiveMode(this);
    TMulticastDelegate<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->OnSetActiveTarget,this,(this->ActiveTarget).field0_0x0.DebugPtr);
    if (local_160 != (longlong *)0x0) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
  return;
}

// SetCustomRotationDeltaFunctions @ 149661450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetCustomRotationDeltaFunctions
          (UCombinedTransformGizmo *this,TFunction<bool___cdecl(double,double_&)> *param_1,
          TFunction<bool___cdecl(double,double_&)> *param_2,
          TFunction<bool___cdecl(double,double_&)> *param_3)

{
  longlong *plVar1;
  
  TFunction<bool___cdecl(double,double_&)>::operator=
            (this->CustomRotationDeltaConstraintFunctions,param_1);
  TFunction<bool___cdecl(double,double_&)>::operator=
            (this->CustomRotationDeltaConstraintFunctions + 1,param_2);
  TFunction<bool___cdecl(double,double_&)>::operator=
            (this->CustomRotationDeltaConstraintFunctions + 2,param_3);
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar1 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// SetCustomScaleDeltaFunctions @ 149661500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetCustomScaleDeltaFunctions
          (UCombinedTransformGizmo *this,TFunction<bool___cdecl(double,double_&)> *param_1,
          TFunction<bool___cdecl(double,double_&)> *param_2,
          TFunction<bool___cdecl(double,double_&)> *param_3)

{
  longlong *plVar1;
  
  TFunction<bool___cdecl(double,double_&)>::operator=
            (this->CustomScaleDeltaConstraintFunctions,param_1);
  TFunction<bool___cdecl(double,double_&)>::operator=
            (this->CustomScaleDeltaConstraintFunctions + 1,param_2);
  TFunction<bool___cdecl(double,double_&)>::operator=
            (this->CustomScaleDeltaConstraintFunctions + 2,param_3);
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar1 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// SetCustomTranslationDeltaFunctions @ 1496615b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetCustomTranslationDeltaFunctions
          (UCombinedTransformGizmo *this,TFunction<bool___cdecl(double,double_&)> *param_1,
          TFunction<bool___cdecl(double,double_&)> *param_2,
          TFunction<bool___cdecl(double,double_&)> *param_3)

{
  longlong *plVar1;
  
  TFunction<bool___cdecl(double,double_&)>::operator=
            (this->CustomTranslationDeltaConstraintFunctions,param_1);
  TFunction<bool___cdecl(double,double_&)>::operator=
            (this->CustomTranslationDeltaConstraintFunctions + 1,param_2);
  TFunction<bool___cdecl(double,double_&)>::operator=
            (this->CustomTranslationDeltaConstraintFunctions + 2,param_3);
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar1 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// SetDisallowNegativeScaling @ 149661750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetDisallowNegativeScaling(UCombinedTransformGizmo *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  if (this->bDisallowNegativeScaling != param_1) {
    this->bDisallowNegativeScaling = param_1;
    iVar2 = (this->ActiveGizmos).ArrayNum;
    pFVar7 = (this->ActiveGizmos).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ActiveGizmos).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UInteractiveGizmo>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar7 == pFVar1) break;
      lVar4 = *(longlong *)pFVar7;
      if (lVar4 != 0) {
        pUVar6 = UAxisPositionGizmo::StaticClass();
        iVar3 = (int)pUVar6->_padding_;
        if (((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar6->_padding_)) && (lVar5 = *(longlong *)(lVar4 + 0x58), lVar5 != 0)) {
          pUVar6 = Z_Construct_UClass_UGizmoAxisScaleParameterSource_NoRegister();
          iVar3 = (int)pUVar6->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar6->_padding_)) {
            *(bool *)(lVar5 + 0xd4) = param_1;
          }
        }
        pUVar6 = Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
        iVar3 = (int)pUVar6->_padding_;
        if (((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar6->_padding_)) && (lVar4 = *(longlong *)(lVar4 + 0x58), lVar4 != 0)) {
          pUVar6 = Z_Construct_UClass_UGizmoPlaneScaleParameterSource_NoRegister();
          iVar3 = (int)pUVar6->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar6->_padding_)) {
            *(bool *)(lVar4 + 0x135) = param_1;
          }
        }
      }
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

// SetDisplaySpaceTransform @ 1496618b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetDisplaySpaceTransform
          (UCombinedTransformGizmo *this,TOptional<UE::Math::TTransform<double>_> *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  undefined7 extraout_var;
  uint uVar27;
  int iVar28;
  char *pcVar29;
  longlong lVar30;
  FDestructionSentinel local_1c8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double dStack_e0;
  char local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  
  bVar22 = param_1->bIsSet;
  uVar26 = (uint)bVar22;
  if ((this->DisplaySpaceTransform).bIsSet == bVar22) {
    if (bVar22 == false) {
      return;
    }
    pcVar29 = (char *)this;
    if ((this->DisplaySpaceTransform).bIsSet == false) {
      pcVar29 = "IsSet()";
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         );
      uVar26 = (uint)CONCAT71(extraout_var,bVar22);
      if (bVar22) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    dVar10 = (param_1->TypedValue).Translation.ZW.m128d_f64[0] -
             (this->DisplaySpaceTransform).TypedValue.Translation.ZW.m128d_f64[0];
    dVar11 = (param_1->TypedValue).Translation.ZW.m128d_f64[1] -
             (this->DisplaySpaceTransform).TypedValue.Translation.ZW.m128d_f64[1];
    dVar12 = (param_1->TypedValue).Translation.XY.m128d_f64[0] -
             (this->DisplaySpaceTransform).TypedValue.Translation.XY.m128d_f64[0];
    dVar13 = (param_1->TypedValue).Translation.XY.m128d_f64[1] -
             (this->DisplaySpaceTransform).TypedValue.Translation.XY.m128d_f64[1];
    lVar30 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar11,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar30;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
    uVar27 = movmskpd((int)pcVar29,auVar5);
    lVar30 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar13,0) & _UNK_15061cc88));
    auVar14._8_4_ = (int)lVar30;
    auVar14._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar14._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
    iVar25 = movmskpd(uVar26,auVar14);
    if ((uVar27 & 0x3fffffff) == 0 && iVar25 == 0) {
      dVar19 = (param_1->TypedValue).Rotation.ZW.m128d_f64[0];
      dVar20 = (param_1->TypedValue).Rotation.ZW.m128d_f64[1];
      dVar17 = (param_1->TypedValue).Rotation.XY.m128d_f64[0];
      dVar18 = (param_1->TypedValue).Rotation.XY.m128d_f64[1];
      dVar10 = dVar19 - (this->DisplaySpaceTransform).TypedValue.Rotation.ZW.m128d_f64[0];
      dVar11 = dVar20 - (this->DisplaySpaceTransform).TypedValue.Rotation.ZW.m128d_f64[1];
      dVar19 = dVar19 + (this->DisplaySpaceTransform).TypedValue.Rotation.ZW.m128d_f64[0];
      dVar20 = dVar20 + (this->DisplaySpaceTransform).TypedValue.Rotation.ZW.m128d_f64[1];
      dVar12 = dVar17 - (this->DisplaySpaceTransform).TypedValue.Rotation.XY.m128d_f64[0];
      dVar13 = dVar18 - (this->DisplaySpaceTransform).TypedValue.Rotation.XY.m128d_f64[1];
      dVar17 = dVar17 + (this->DisplaySpaceTransform).TypedValue.Rotation.XY.m128d_f64[0];
      dVar18 = dVar18 + (this->DisplaySpaceTransform).TypedValue.Rotation.XY.m128d_f64[1];
      lVar30 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar11,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar30;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar10,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      iVar28 = movmskpd(0,auVar6);
      lVar30 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar13,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar30;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar12,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      uVar26 = movmskpd(iVar25,auVar7);
      uVar27 = iVar28 << 2 | uVar26;
      if (uVar27 != 0) {
        lVar30 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar20,0) & _UNK_15061cc88));
        auVar8._8_4_ = (int)lVar30;
        auVar8._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar19,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar8._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
        uVar27 = movmskpd(uVar27,auVar8);
        lVar30 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar18,0) & _UNK_15061cc88));
        auVar15._8_4_ = (int)lVar30;
        auVar15._0_8_ =
             -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar15._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
        uVar26 = movmskpd(uVar26,auVar15);
        if ((uVar27 & 0x3fffffff) != 0 || uVar26 != 0) goto LAB_149661a4f;
      }
      dVar10 = (param_1->TypedValue).Scale3D.ZW.m128d_f64[0] -
               (this->DisplaySpaceTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
      dVar11 = (param_1->TypedValue).Scale3D.ZW.m128d_f64[1] -
               (this->DisplaySpaceTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
      dVar12 = (param_1->TypedValue).Scale3D.XY.m128d_f64[0] -
               (this->DisplaySpaceTransform).TypedValue.Scale3D.XY.m128d_f64[0];
      dVar13 = (param_1->TypedValue).Scale3D.XY.m128d_f64[1] -
               (this->DisplaySpaceTransform).TypedValue.Scale3D.XY.m128d_f64[1];
      lVar30 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar11,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar30;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar10,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      uVar27 = movmskpd(0,auVar9);
      lVar30 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar13,0) & _UNK_15061cc88));
      auVar16._8_4_ = (int)lVar30;
      auVar16._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar16._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      iVar25 = movmskpd(uVar26,auVar16);
      if ((uVar27 & 0x3fffffff) == 0 && iVar25 == 0) {
        return;
      }
    }
  }
LAB_149661a4f:
  if (param_1 != &this->DisplaySpaceTransform) {
    if (param_1->bIsSet == false) {
      if ((this->DisplaySpaceTransform).bIsSet != false) {
        (this->DisplaySpaceTransform).bIsSet = false;
      }
    }
    else {
      dVar10 = (param_1->TypedValue).Rotation.XY.m128d_f64[1];
      (this->DisplaySpaceTransform).TypedValue.Rotation.XY.m128d_f64[0] =
           (param_1->TypedValue).Rotation.XY.m128d_f64[0];
      (this->DisplaySpaceTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar10;
      dVar10 = (param_1->TypedValue).Rotation.ZW.m128d_f64[1];
      (this->DisplaySpaceTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
           (param_1->TypedValue).Rotation.ZW.m128d_f64[0];
      (this->DisplaySpaceTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar10;
      dVar10 = (param_1->TypedValue).Translation.XY.m128d_f64[1];
      (this->DisplaySpaceTransform).TypedValue.Translation.XY.m128d_f64[0] =
           (param_1->TypedValue).Translation.XY.m128d_f64[0];
      (this->DisplaySpaceTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar10;
      dVar10 = (param_1->TypedValue).Translation.ZW.m128d_f64[1];
      (this->DisplaySpaceTransform).TypedValue.Translation.ZW.m128d_f64[0] =
           (param_1->TypedValue).Translation.ZW.m128d_f64[0];
      (this->DisplaySpaceTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar10;
      dVar10 = (param_1->TypedValue).Scale3D.XY.m128d_f64[1];
      (this->DisplaySpaceTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
           (param_1->TypedValue).Scale3D.XY.m128d_f64[0];
      (this->DisplaySpaceTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar10;
      dVar10 = (param_1->TypedValue).Scale3D.ZW.m128d_f64[1];
      (this->DisplaySpaceTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
           (param_1->TypedValue).Scale3D.ZW.m128d_f64[0];
      (this->DisplaySpaceTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar10;
      (this->DisplaySpaceTransform).bIsSet = true;
    }
  }
  bVar22 = param_1->bIsSet;
  if (bVar22 != false) {
    local_1a8 = (param_1->TypedValue).Rotation.XY.m128d_f64[0];
    dStack_1a0 = (param_1->TypedValue).Rotation.XY.m128d_f64[1];
    local_198 = (param_1->TypedValue).Rotation.ZW.m128d_f64[0];
    dStack_190 = (param_1->TypedValue).Rotation.ZW.m128d_f64[1];
    local_188 = (param_1->TypedValue).Translation.XY.m128d_f64[0];
    dStack_180 = (param_1->TypedValue).Translation.XY.m128d_f64[1];
    local_178 = (param_1->TypedValue).Translation.ZW.m128d_f64[0];
    dStack_170 = (param_1->TypedValue).Translation.ZW.m128d_f64[1];
    local_168 = (param_1->TypedValue).Scale3D.XY.m128d_f64[0];
    uStack_160 = (param_1->TypedValue).Scale3D.XY.m128d_f64[1];
    local_158 = (param_1->TypedValue).Scale3D.ZW.m128d_f64[0];
    dStack_150 = (param_1->TypedValue).Scale3D.ZW.m128d_f64[1];
    local_c8 = local_1a8;
    dStack_c0 = dStack_1a0;
    local_b8 = local_198;
    dStack_b0 = dStack_190;
    local_a8 = local_188;
    dStack_a0 = dStack_180;
    local_98 = local_178;
    dStack_90 = dStack_170;
    local_88 = local_168;
    dStack_80 = uStack_160;
    local_78 = local_158;
    dStack_70 = dStack_150;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDisplaySpaceTransformChanged,(FWriteAccessScope *)&local_1c8);
  puVar1 = &(this->OnDisplaySpaceTransformChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar21 = false;
  uVar26 = *(int *)&(this->OnDisplaySpaceTransformChanged).field_0x10 - 1;
  if (-1 < (int)uVar26) {
    lVar30 = (longlong)(int)uVar26 << 4;
    bVar21 = false;
    do {
      uVar27 = 0;
      if ((int)uVar26 < *(int *)&(this->OnDisplaySpaceTransformChanged).field_0x10) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnDisplaySpaceTransformChanged).field_0x8;
      if ((*(int *)(lVar2 + 8 + lVar30) == 0) ||
         (plVar3 = *(longlong **)(lVar2 + lVar30), plVar3 == (longlong *)0x0)) {
LAB_149661bf7:
        bVar21 = true;
      }
      else {
        if (bVar22 != false) {
          local_138 = local_1a8;
          dStack_130 = dStack_1a0;
          local_128 = local_198;
          dStack_120 = dStack_190;
          local_118 = local_188;
          dStack_110 = dStack_180;
          local_108 = local_178;
          dStack_100 = dStack_170;
          local_f8 = (undefined4)local_168;
          uStack_f4 = local_168._4_4_;
          uStack_f0 = (undefined4)uStack_160;
          uStack_ec = uStack_160._4_4_;
          local_e8 = local_158;
          dStack_e0 = dStack_150;
        }
        local_d8 = bVar22;
        cVar24 = (**(code **)(*plVar3 + 0x68))(plVar3,this,&local_138);
        if (cVar24 == '\0') goto LAB_149661bf7;
      }
      lVar30 = lVar30 + -0x10;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  puVar1 = &(this->OnDisplaySpaceTransformChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar21) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnDisplaySpaceTransformChanged,false);
  }
  if (local_1c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
  }
  return;
}

// SetGizmoActorBuilder @ 149661d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetGizmoActorBuilder
          (UCombinedTransformGizmo *this,TSharedPtr<FCombinedTransformGizmoActorFactory,1> *param_1)

{
  FCombinedTransformGizmoActorFactory *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController;
  (this->GizmoActorBuilder).Object = pFVar1;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsNonUniformScaleAllowedFunction @ 149661e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetIsNonUniformScaleAllowedFunction
          (UCombinedTransformGizmo *this,TUniqueFunction<bool___cdecl(void)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->IsNonUniformScaleAllowedFunc;
  uVar3 = *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x8;
  uVar4 = *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x10;
  uVar5 = *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x18;
  uVar6 = *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x20;
  uVar7 = *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x28;
  *(undefined8 *)&this->IsNonUniformScaleAllowedFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x10 =
       *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x20 =
       *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->IsNonUniformScaleAllowedFunc).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  return;
}

// SetNewChildScale @ 149661f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetNewChildScale(UCombinedTransformGizmo *this,TVector<double> *param_1)

{
  bool bVar1;
  UTransformProxy *pUVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pUVar2 = (this->ActiveTarget).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,local_78);
  local_38 = *(undefined4 *)&param_1->field0_0x0;
  uStack_34 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_30 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_2c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  pUVar2 = (this->ActiveTarget).field0_0x0.DebugPtr;
  local_28 = (param_1->field0_0x0)._s_0.Z;
  uStack_20 = 0;
  bVar1 = pUVar2->bSetPivotMode;
  pUVar2->bSetPivotMode = true;
  pUVar2 = (this->ActiveTarget).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,local_78);
  ((this->ActiveTarget).field0_0x0.DebugPtr)->bSetPivotMode = bVar1;
  return;
}

// SetNewGizmoTransform @ 149661fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetNewGizmoTransform
          (UCombinedTransformGizmo *this,TTransform<double> *param_1,bool param_2)

{
  ACombinedTransformGizmoActor *pAVar1;
  UTransformProxy *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_c8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((this->ActiveTarget).field0_0x0.DebugPtr == (UTransformProxy *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253286353>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x5d1,"ActiveTarget");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x348))();
    if ((((this->ActiveTarget).field0_0x0.DebugPtr == (UTransformProxy *)0x0) ||
        (pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr,
        pAVar1 == (ACombinedTransformGizmoActor *)0x0)) ||
       (((uint)pAVar1->_padding_ >> 0x1e & 1) != 0)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4678433611253286381>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x5ed,"ActiveTarget && IsValid(GizmoActor)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_78.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
      local_78.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
      local_78.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
      local_78.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
      local_78.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
      local_78.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
      local_78.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
      local_78.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
      local_78.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
      local_78.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
      local_78.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
      local_78.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
      if (param_2) {
        local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        local_78.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
        local_78.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      USceneComponent::SetWorldTransform
                ((USceneComponent *)((this->GizmoActor).field0_0x0.DebugPtr)->_padding_,&local_78,
                 false,(FHitResult *)0x0,None);
      pUVar2 = (this->ActiveTarget).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,param_1);
    }
    (**(code **)(*(longlong *)this + 0x350))(this);
  }
  return;
}

// SetSubGizmoBuilderIdentifiers @ 1496625b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetSubGizmoBuilderIdentifiers
          (UCombinedTransformGizmo *this,FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->AxisPositionBuilderIdentifier,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
             iVar3);
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->PlanePositionBuilderIdentifier,(wchar_t *)(param_2->Data).AllocatorInstance.Data
             ,iVar3);
  iVar1 = (param_3->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->AxisAngleBuilderIdentifier,(wchar_t *)(param_3->Data).AllocatorInstance.Data,
             iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetSubGizmoComponent @ 149662680

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UCombinedTransformGizmo::SetSubGizmoComponent
          (UCombinedTransformGizmo *this,ETransformGizmoSubElements param_1,
          UPrimitiveComponent *param_2,TTransform<double> *param_3)

{
  int *piVar1;
  TUniquePtr<UE::GizmoUtil::FTransformSubGizmoSharedState,TDefaultDelete<UE::GizmoUtil::FTransformSubGizmoSharedState>_>
  *pTVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  ACombinedTransformGizmoActor *pAVar5;
  UPrimitiveComponent *pUVar6;
  FWeakObjectPtr *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  Type TVar11;
  int iVar12;
  longlong lVar13;
  FTransformSubGizmoSharedState *pFVar14;
  UObject *pUVar15;
  longlong *plVar16;
  uint uVar17;
  FTransformSubGizmoSharedState *pFVar18;
  int iVar19;
  TObjectPtr<UPrimitiveComponent> *pTVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  int iVar23;
  ForAnyElementType *pFVar24;
  uint uVar25;
  FScriptContainerElement *this_00;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  FWeakObjectPtr FStack_c0;
  UPrimitiveComponent *local_b8 [2];
  UPrimitiveComponent *local_a8;
  TObjectPtr<UTransformProxy>_u_0 local_a0;
  Type local_98;
  undefined1 local_94;
  longlong *local_90;
  undefined4 local_88;
  IToolContextTransactionProvider *local_80;
  undefined8 local_78;
  undefined1 local_70;
  TObjectPtr<UPrimitiveComponent>_u_0 local_68;
  FScriptContainerElement *local_60;
  ForAnyElementType *local_58;
  UPrimitiveComponent *local_50;
  undefined8 local_48;
  longlong local_40;
  
  pAVar5 = (this->GizmoActor).field0_0x0.DebugPtr;
  if ((pAVar5 == (ACombinedTransformGizmoActor *)0x0) ||
     (((uint)pAVar5->_padding_ >> 0x1e & 1) != 0)) {
    return false;
  }
  TVar11 = UE::GizmoUtil::ToAxis(param_1);
  local_b8[0] = (UPrimitiveComponent *)0x0;
  bVar9 = ACombinedTransformGizmoActor::ReplaceSubGizmoComponent
                    ((this->GizmoActor).field0_0x0.DebugPtr,param_1,param_2,param_3,local_b8);
  if (!bVar9) {
    return false;
  }
  if ((this->ActiveTarget).field0_0x0.DebugPtr == (UTransformProxy *)0x0) {
    return true;
  }
  if (local_b8[0] != (UPrimitiveComponent *)0x0) {
    local_68.DebugPtr = local_b8[0];
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_b8[0]);
    }
    TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&this->ActiveComponents,(TObjectPtr<UPrimitiveComponent> *)&local_68.ObjectPtr,
               Default);
    pUVar6 = local_b8[0];
    if ((param_1 & (TranslateAllPlanes|TranslateAllAxes)) == None) {
      if ((param_1 & RotateAllAxes) != None) {
        lVar13 = 0x1e0;
        goto LAB_14966277e;
      }
      if ((param_1 & (ScaleAllPlanes|ScaleAllAxes)) != None) {
        lVar13 = 0x200;
        goto LAB_14966277e;
      }
      if ((param_1 >> 0x10 & 1) != 0) {
        lVar13 = 0x1f0;
        goto LAB_14966277e;
      }
LAB_149662b67:
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4678433611253285736>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x368,"ArrayToSearch");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    else {
      lVar13 = 0x1d0;
LAB_14966277e:
      pFVar24 = (ForAnyElementType *)(&this->field_0x0 + lVar13);
      local_58 = pFVar24;
      if (pFVar24 == (ForAnyElementType *)0x0) goto LAB_149662b67;
      pFVar21 = pFVar24->Data;
      iVar12 = *(int *)&pFVar24[1].Data;
      this_00 = pFVar21;
      if (pFVar21 != pFVar21 + (longlong)iVar12 * 0x10) {
LAB_1496627b0:
        bVar9 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
                UEOpEquals<UPrimitiveComponent,bool>
                          ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)this_00,pUVar6);
        if (!bVar9) goto code_r0x0001496627c3;
        uVar25 = (uint)((longlong)this_00 - (longlong)pFVar21 >> 4);
        if (-1 < (int)uVar25) {
          uVar17 = 0;
          if ((int)uVar25 < *(int *)&pFVar24[1].Data) {
            uVar17 = ~uVar25 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            uVar10 = (*pcVar8)();
            return (bool)uVar10;
          }
          if (pFVar24->Data + (longlong)(int)uVar25 * 0x10 != (FScriptContainerElement *)0x0) {
            pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          (pFVar24->Data + (longlong)(int)uVar25 * 0x10 + 8));
            if (pUVar15 != (UObject *)0x0) {
              plVar16 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
              (**(code **)(*plVar16 + 0x2d8))(plVar16,pUVar15);
              local_d0 = pUVar15;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar15);
              }
              pFVar21 = (this->ActiveGizmos).AllocatorInstance.Data;
              if (((pFVar21 <= (FScriptContainerElement *)&local_d0) &&
                  ((FScriptContainerElement *)&local_d0 <
                   pFVar21 + (longlong)(this->ActiveGizmos).ArrayMax * 8)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar8 = (code *)swi(3);
                uVar10 = (*pcVar8)();
                return (bool)uVar10;
              }
              iVar12 = (this->ActiveGizmos).ArrayNum;
              if (iVar12 != 0) {
                pFVar21 = (this->ActiveGizmos).AllocatorInstance.Data;
                iVar19 = 0;
                bVar9 = *(UObject **)pFVar21 != local_d0;
                lVar13 = 0;
                pUVar15 = local_d0;
                iVar22 = 0;
                local_60 = pFVar21;
                do {
                  iVar23 = iVar22;
                  do {
                    lVar13 = lVar13 + 1;
                    iVar23 = iVar23 + 1;
                    if (iVar12 <= lVar13) break;
                  } while (bVar9 == (*(UObject **)(pFVar21 + lVar13 * 8) != pUVar15));
                  if (bVar9 != false) {
                    if (iVar19 != iVar22) {
                      memmove(pFVar21 + (longlong)iVar19 * 8,pFVar21 + (longlong)iVar22 * 8,
                              (longlong)(iVar23 - iVar22) << 3);
                      pUVar15 = local_d0;
                      pFVar21 = local_60;
                    }
                    iVar19 = iVar19 + (iVar23 - iVar22);
                  }
                  bVar9 = (bool)(bVar9 ^ 1);
                  iVar22 = iVar23;
                } while (lVar13 < iVar12);
                (this->ActiveGizmos).ArrayNum = iVar19;
                pFVar24 = local_58;
              }
            }
            uVar17 = 0;
            if ((int)uVar25 < *(int *)&pFVar24[1].Data) {
              uVar17 = ~uVar25 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              uVar10 = (*pcVar8)();
              return (bool)uVar10;
            }
            iVar12 = *(int *)&pFVar24[1].Data + ~uVar25;
            if (1 < iVar12) {
              iVar12 = 1;
            }
            if (iVar12 != 0) {
              memmove(pFVar24->Data + (longlong)(int)uVar25 * 0x10,
                      pFVar24->Data + (longlong)(*(int *)&pFVar24[1].Data - iVar12) * 0x10,
                      (longlong)iVar12 << 4);
            }
            *(int *)&pFVar24[1].Data = *(int *)&pFVar24[1].Data + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,pFVar24,*(int *)&pFVar24[1].Data,
                       (int *)((longlong)&pFVar24[1].Data + 4));
            goto LAB_149662808;
          }
        }
      }
    }
LAB_1496627cf:
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253285746>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x372,"ExistingGizmoInfo");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
LAB_149662808:
  if (param_2 == (UPrimitiveComponent *)0x0) {
    return true;
  }
  local_a0 = (this->ActiveTarget).field0_0x0;
  pTVar2 = &this->SubGizmoSharedState;
  local_80 = this->TransactionProviderAtLastSetActiveTarget;
  local_94 = 1;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 1;
  local_a8 = param_2;
  local_98 = TVar11;
  if (pTVar2->Ptr == (FTransformSubGizmoSharedState *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253285775>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x38f,"SubGizmoSharedState.IsValid()");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    pFVar14 = ::operator_new(0x48);
    pFVar18 = (FTransformSubGizmoSharedState *)0x0;
    if (pFVar14 != (FTransformSubGizmoSharedState *)0x0) {
      pFVar14->TransformSource = (UGizmoScaledAndUnscaledTransformSources *)0x0;
      pFVar14->StateTarget = (UGizmoTransformChangeStateTarget *)0x0;
      pFVar14->CameraAxisSource = (UGizmoConstantFrameAxisSource *)0x0;
      pFVar14->CardinalAxisSources[0] = (UGizmoComponentAxisSource *)0x0;
      pFVar14->CardinalAxisSources[1] = (UGizmoComponentAxisSource *)0x0;
      pFVar14->CardinalAxisSources[2] = (UGizmoComponentAxisSource *)0x0;
      pFVar14->UnitCardinalAxisSources[0] = (UGizmoComponentAxisSource *)0x0;
      pFVar14->UnitCardinalAxisSources[1] = (UGizmoComponentAxisSource *)0x0;
      pFVar14->UnitCardinalAxisSources[2] = (UGizmoComponentAxisSource *)0x0;
      pFVar18 = pFVar14;
    }
    if (pTVar2 != (TUniquePtr<UE::GizmoUtil::FTransformSubGizmoSharedState,TDefaultDelete<UE::GizmoUtil::FTransformSubGizmoSharedState>_>
                   *)&local_40) {
      pFVar14 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar18;
      ::operator_delete(pFVar14,0x48);
      pFVar18 = (FTransformSubGizmoSharedState *)0x0;
    }
    ::operator_delete(pFVar18,0x48);
  }
  if ((int)param_1 < 0x381) {
    if (param_1 == RotateAllAxes) {
      pTVar20 = &((this->GizmoActor).field0_0x0.DebugPtr)->RotationSphere;
      if (((pTVar20->field0_0x0).DebugPtr == (UPrimitiveComponent *)0x0) ||
         ((pTVar20->field0_0x0).DebugPtr != param_2)) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4678433611253285835>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                           ,0x3cb,"GizmoActor->RotationSphere == NewComponent");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
      }
      else {
        pTVar3 = &this->ActiveComponents;
        pFVar21 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar21 <= pTVar20) &&
            (pTVar20 < pFVar21 + (longlong)(this->ActiveComponents).ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar12 = (this->ActiveComponents).ArrayNum;
        piVar1 = &(this->ActiveComponents).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar3->AllocatorInstance,piVar1);
        }
        pFVar21 = (pTVar3->AllocatorInstance).Data;
        (this->ActiveComponents).ArrayNum = iVar12 + 1;
        pUVar6 = (pTVar20->field0_0x0).DebugPtr;
        *(UPrimitiveComponent **)(pFVar21 + (longlong)iVar12 * 8) = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        pTVar4 = &this->RotationSubGizmos;
        pUVar6 = (((this->GizmoActor).field0_0x0.DebugPtr)->RotationSphere).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar6 != (UPrimitiveComponent *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar6 != (UPrimitiveComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
        }
        local_c8.ObjectIndex = 0;
        local_c8.ObjectSerialNumber = 0;
        local_50 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_50);
        FStack_c0.ObjectIndex = 0;
        FStack_c0.ObjectSerialNumber = 0;
        local_48 = 0;
        FWeakObjectPtr::operator=(&FStack_c0,(FObjectPtr)&local_48);
        pFVar7 = (FWeakObjectPtr *)(pTVar4->AllocatorInstance).Data;
        if (((pFVar7 <= &local_c8) &&
            (&local_c8 < pFVar7 + (longlong)(this->RotationSubGizmos).ArrayMax * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar12 = (this->RotationSubGizmos).ArrayNum;
        piVar1 = &(this->RotationSubGizmos).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar4->AllocatorInstance,piVar1);
        }
        (this->RotationSubGizmos).ArrayNum = iVar12 + 1;
        pFVar7 = (FWeakObjectPtr *)((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x10);
        *pFVar7 = local_c8;
        pFVar7[1] = FStack_c0;
      }
    }
    else {
      if ((int)param_1 < 0x21) {
        if (param_1 != TranslatePlaneXZ) {
          if (((param_1 - TranslateAxisX & 0xfffffff9) == 0) &&
             (param_1 != (TranslateAxisY|TranslateAxisX))) {
            (**(code **)(*(longlong *)this + 0x378))(this,&local_a8,pTVar2->Ptr);
            goto LAB_149662edd;
          }
          if (param_1 != TranslatePlaneXY) goto LAB_149662f16;
        }
      }
      else if (param_1 != TranslatePlaneYZ) {
        if (((param_1 != RotateAxisX) && (param_1 != RotateAxisY)) && (param_1 != RotateAxisZ)) {
LAB_149662f16:
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4678433611253285843>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                             ,0x3d3,"false");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            uVar10 = (*pcVar8)();
            return (bool)uVar10;
          }
          bVar9 = false;
          goto LAB_149662edf;
        }
        (**(code **)(*(longlong *)this + 0x398))(this,&local_a8,pTVar2->Ptr);
        goto LAB_149662edd;
      }
      (**(code **)(*(longlong *)this + 0x388))(this,&local_a8,pTVar2->Ptr);
    }
  }
  else {
    if ((int)param_1 < 0x4001) {
      if (param_1 != ScalePlaneXZ) {
        if (((param_1 - ScaleAxisX & 0xfffff3ff) == 0) && (param_1 != (ScaleAxisY|ScaleAxisX))) {
          (**(code **)(*(longlong *)this + 0x3a8))(this,&local_a8,pTVar2->Ptr);
          goto LAB_149662edd;
        }
        if (param_1 != ScalePlaneYZ) goto LAB_149662f16;
      }
    }
    else if (param_1 != ScalePlaneXY) {
      if (param_1 == ScaleUniform) {
        (**(code **)(*(longlong *)this + 0x3c8))(this,&local_a8,pTVar2->Ptr);
      }
      else if (param_1 == FreeTranslate) {
        (**(code **)(*(longlong *)this + 0x3d0))(this,&local_a8,pTVar2->Ptr);
      }
      else {
        if (param_1 != FreeRotate) goto LAB_149662f16;
        (**(code **)(*(longlong *)this + 0x3d8))(this,&local_a8,pTVar2->Ptr);
      }
      goto LAB_149662edd;
    }
    (**(code **)(*(longlong *)this + 0x3b8))(this,&local_a8,pTVar2->Ptr);
  }
LAB_149662edd:
  bVar9 = true;
LAB_149662edf:
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
    return bVar9;
  }
  return bVar9;
code_r0x0001496627c3:
  this_00 = this_00 + 0x10;
  if (this_00 == pFVar21 + (longlong)iVar12 * 0x10) goto LAB_1496627cf;
  goto LAB_1496627b0;
}

// SetUpdateCoordSystemFunction @ 149663300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetUpdateCoordSystemFunction
          (UCombinedTransformGizmo *this,
          TFunction<void___cdecl(UPrimitiveComponent_*,EToolContextCoordinateSystem)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->UpdateCoordSystemFunction;
  uVar7 = *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x8;
  uVar1 = *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x10;
  uVar2 = *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x14;
  uVar3 = *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x18;
  uVar4 = *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x1c;
  uVar5 = *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x20;
  plVar10 = *(longlong **)&(this->UpdateCoordSystemFunction).field_0x28;
  *(longlong *)&this->UpdateCoordSystemFunction = local_58;
  *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x8 = uStack_50;
  *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// SetUpdateHoverFunction @ 149663400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetUpdateHoverFunction
          (UCombinedTransformGizmo *this,
          TFunction<void___cdecl(UPrimitiveComponent_*,bool)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->UpdateHoverFunction;
  uVar7 = *(undefined8 *)&(this->UpdateHoverFunction).field_0x8;
  uVar1 = *(undefined4 *)&(this->UpdateHoverFunction).field_0x10;
  uVar2 = *(undefined4 *)&(this->UpdateHoverFunction).field_0x14;
  uVar3 = *(undefined4 *)&(this->UpdateHoverFunction).field_0x18;
  uVar4 = *(undefined4 *)&(this->UpdateHoverFunction).field_0x1c;
  uVar5 = *(undefined8 *)&(this->UpdateHoverFunction).field_0x20;
  plVar10 = *(longlong **)&(this->UpdateHoverFunction).field_0x28;
  *(longlong *)&this->UpdateHoverFunction = local_58;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x8 = uStack_50;
  *(undefined4 *)&(this->UpdateHoverFunction).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->UpdateHoverFunction).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->UpdateHoverFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->UpdateHoverFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->UpdateHoverFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->UpdateHoverFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->UpdateHoverFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->UpdateHoverFunction).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// SetVisibility @ 1496637f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::SetVisibility(UCombinedTransformGizmo *this,bool param_1)

{
  undefined1 *puVar1;
  ACombinedTransformGizmoActor *pAVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined7 in_register_00000011;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  pAVar2 = (this->GizmoActor).field0_0x0.DebugPtr;
  if ((pAVar2 == (ACombinedTransformGizmoActor *)0x0) ||
     (((uint)pAVar2->_padding_ >> 0x1e & 1) != 0)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253286410>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x60a,"IsValid(GizmoActor)");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pAVar2 = (this->GizmoActor).field0_0x0.DebugPtr;
    lVar11 = pAVar2->_padding_;
    (**(code **)(pAVar2->_padding_ + 0x368))(pAVar2,CONCAT71(in_register_00000011,!param_1));
    if ((bool)((byte)~(byte)lVar11 >> 7) != param_1) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnVisibilityChanged,(FWriteAccessScope *)&local_38);
      puVar1 = &(this->OnVisibilityChanged).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar8 = false;
      uVar10 = *(int *)&(this->OnVisibilityChanged).field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar8 = false;
        do {
          uVar9 = 0;
          if ((int)uVar10 < *(int *)&(this->OnVisibilityChanged).field_0x10) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(this->OnVisibilityChanged).field_0x8;
          if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar4 + 0x68))(plVar4,this,param_1), cVar7 == '\0')) {
            bVar8 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(this->OnVisibilityChanged).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar8) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnVisibilityChanged,
                   false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// SetWorld @ 1496639a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::SetWorld(UCombinedTransformGizmo *this,UWorld *param_1)

{
  this->World = param_1;
  return;
}

// SetWorldAlignmentFunctions @ 1496639b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::SetWorldAlignmentFunctions
          (UCombinedTransformGizmo *this,TUniqueFunction<bool___cdecl(void)> *param_1,
          TUniqueFunction<bool___cdecl(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&)>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  ACombinedTransformGizmoActor *pAVar4;
  longlong lVar5;
  UPrimitiveComponent *pUVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  UClass *pUVar16;
  longlong *plVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [16];
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong *plStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar8 = *(undefined8 *)&param_1->field_0x8;
  uVar9 = *(undefined8 *)&this->ShouldAlignDestination;
  uVar10 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x8;
  uVar11 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x10;
  uVar12 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x18;
  uVar13 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x20;
  uVar14 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x28;
  *(undefined8 *)&this->ShouldAlignDestination = *(undefined8 *)param_1;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x8 = uVar8;
  uVar8 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x18 = uVar8;
  uVar8 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x28 = uVar8;
  *(undefined8 *)param_1 = uVar9;
  *(undefined8 *)&param_1->field_0x8 = uVar10;
  *(undefined8 *)&param_1->field_0x10 = uVar11;
  *(undefined8 *)&param_1->field_0x18 = uVar12;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  uVar10 = *(undefined8 *)&param_2->field_0x8;
  uVar11 = *(undefined8 *)&this->DestinationAlignmentRayCaster;
  uVar12 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x8;
  uVar13 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x10;
  uVar14 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x18;
  uVar8 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x20;
  uVar9 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x28;
  *(undefined8 *)&this->DestinationAlignmentRayCaster = *(undefined8 *)param_2;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x28 = uVar10;
  *(undefined8 *)param_2 = uVar11;
  *(undefined8 *)&param_2->field_0x8 = uVar12;
  *(undefined8 *)&param_2->field_0x10 = uVar13;
  *(undefined8 *)&param_2->field_0x18 = uVar14;
  *(undefined8 *)&param_2->field_0x20 = uVar8;
  *(undefined8 *)&param_2->field_0x28 = uVar9;
  pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
  if ((pAVar4 == (ACombinedTransformGizmoActor *)0x0) ||
     (((uint)pAVar4->_padding_ >> 0x1e & 1) != 0)) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4678433611253285857>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                        ,0x3e1,"IsValid(GizmoActor)");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pFVar19 = (this->ActiveGizmos).AllocatorInstance.Data;
    iVar2 = (this->ActiveGizmos).ArrayNum;
    pFVar1 = pFVar19 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ActiveGizmos).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UInteractiveGizmo>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_178);
      }
      if (pFVar19 == pFVar1) break;
      lVar18 = *(longlong *)pFVar19;
      if (lVar18 == 0) {
LAB_149663e35:
        lVar18 = 0;
      }
      else {
        pUVar16 = UAxisPositionGizmo::StaticClass();
        iVar3 = (int)pUVar16->_padding_;
        if (((iVar3 <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar16->_padding_)) && (lVar5 = *(longlong *)(lVar18 + 0x70), lVar5 != 0)) {
          pUVar16 = Z_Construct_UClass_UGizmoComponentHitTarget_NoRegister();
          iVar3 = (int)pUVar16->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar16->_padding_)) {
            pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
            pUVar6 = *(UPrimitiveComponent **)(lVar5 + 0x30);
            if ((pUVar6 == (pAVar4->TranslateX).field0_0x0.DebugPtr) ||
               ((pUVar6 == (pAVar4->TranslateY).field0_0x0.DebugPtr ||
                (pUVar6 == (pAVar4->TranslateZ).field0_0x0.DebugPtr)))) {
              local_168 = *(longlong *)(lVar18 + 0xa0);
              uVar9 = *(undefined8 *)(lVar18 + 0xa8);
              local_158 = *(longlong *)(lVar18 + 0xb0);
              uStack_150 = *(undefined8 *)(lVar18 + 0xb8);
              uVar8 = *(undefined8 *)(lVar18 + 0xc0);
              plStack_140 = *(longlong **)(lVar18 + 200);
              *(code **)(lVar18 + 0xa0) =
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l18::<lambda_1>,bool>
                   ::Call;
              *(undefined8 *)(lVar18 + 0xa8) = uStack_160;
              *(undefined4 *)(lVar18 + 0xb0) = 0x51e77598;
              *(undefined4 *)(lVar18 + 0xb4) = 1;
              *(UCombinedTransformGizmo **)(lVar18 + 0xb8) = this;
              *(undefined4 *)(lVar18 + 0xc0) = (undefined4)local_148;
              *(undefined4 *)(lVar18 + 0xc4) = local_148._4_4_;
              *(undefined4 *)(lVar18 + 200) = 0;
              *(undefined4 *)(lVar18 + 0xcc) = 0;
              local_148 = uVar8;
              uStack_160 = uVar9;
              if (local_168 != 0) {
                plVar17 = &local_158;
                if (plStack_140 != (longlong *)0x0) {
                  plVar17 = plStack_140;
                }
                (**(code **)(*plVar17 + 0x10))();
              }
              local_138 = *(longlong *)(lVar18 + 0xd0);
              uVar9 = *(undefined8 *)(lVar18 + 0xd8);
              local_128 = *(longlong *)(lVar18 + 0xe0);
              uStack_120 = *(undefined8 *)(lVar18 + 0xe8);
              uVar8 = *(undefined8 *)(lVar18 + 0xf0);
              plStack_110 = *(longlong **)(lVar18 + 0xf8);
              *(code **)(lVar18 + 0xd0) =
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l18::<lambda_2>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
                   ::Call;
              *(undefined8 *)(lVar18 + 0xd8) = uStack_130;
              *(undefined4 *)(lVar18 + 0xe0) = 0x51e775b8;
              *(undefined4 *)(lVar18 + 0xe4) = 1;
              *(UCombinedTransformGizmo **)(lVar18 + 0xe8) = this;
              *(undefined4 *)(lVar18 + 0xf0) = (undefined4)local_118;
              *(undefined4 *)(lVar18 + 0xf4) = local_118._4_4_;
              *(undefined4 *)(lVar18 + 0xf8) = 0;
              *(undefined4 *)(lVar18 + 0xfc) = 0;
              uStack_130 = uVar9;
              local_118 = uVar8;
              if (local_138 != 0) {
                plVar17 = &local_128;
                if (plStack_110 != (longlong *)0x0) {
                  plVar17 = plStack_110;
                }
                (**(code **)(*plVar17 + 0x10))();
              }
            }
          }
        }
        pUVar16 = Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
        iVar3 = (int)pUVar16->_padding_;
        if (((iVar3 <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar16->_padding_)) && (lVar5 = *(longlong *)(lVar18 + 0x68), lVar5 != 0)) {
          pUVar16 = Z_Construct_UClass_UGizmoComponentHitTarget_NoRegister();
          iVar3 = (int)pUVar16->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar16->_padding_)) {
            pAVar4 = (this->GizmoActor).field0_0x0.DebugPtr;
            pUVar6 = *(UPrimitiveComponent **)(lVar5 + 0x30);
            if (((pUVar6 == (pAVar4->TranslateXY).field0_0x0.DebugPtr) ||
                ((pUVar6 == (pAVar4->TranslateXZ).field0_0x0.DebugPtr ||
                 (pUVar6 == (pAVar4->TranslateYZ).field0_0x0.DebugPtr)))) ||
               (pUVar6 == (pAVar4->FreeTranslateHandle).field0_0x0.DebugPtr)) {
              local_108 = *(longlong *)(lVar18 + 0xa0);
              uVar9 = *(undefined8 *)(lVar18 + 0xa8);
              local_f8 = *(longlong *)(lVar18 + 0xb0);
              uStack_f0 = *(undefined8 *)(lVar18 + 0xb8);
              uVar8 = *(undefined8 *)(lVar18 + 0xc0);
              plStack_e0 = *(longlong **)(lVar18 + 200);
              *(code **)(lVar18 + 0xa0) =
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l27::<lambda_3>,bool>
                   ::Call;
              *(undefined8 *)(lVar18 + 0xa8) = uStack_100;
              *(undefined4 *)(lVar18 + 0xb0) = 0x51e775d8;
              *(undefined4 *)(lVar18 + 0xb4) = 1;
              *(UCombinedTransformGizmo **)(lVar18 + 0xb8) = this;
              *(undefined4 *)(lVar18 + 0xc0) = (undefined4)local_e8;
              *(undefined4 *)(lVar18 + 0xc4) = local_e8._4_4_;
              *(undefined4 *)(lVar18 + 200) = 0;
              *(undefined4 *)(lVar18 + 0xcc) = 0;
              uStack_100 = uVar9;
              local_e8 = uVar8;
              if (local_108 != 0) {
                plVar17 = &local_f8;
                if (plStack_e0 != (longlong *)0x0) {
                  plVar17 = plStack_e0;
                }
                (**(code **)(*plVar17 + 0x10))();
              }
              local_d8 = *(longlong *)(lVar18 + 0xd0);
              uVar9 = *(undefined8 *)(lVar18 + 0xd8);
              local_c8 = *(longlong *)(lVar18 + 0xe0);
              uStack_c0 = *(undefined8 *)(lVar18 + 0xe8);
              uVar8 = *(undefined8 *)(lVar18 + 0xf0);
              plStack_b0 = *(longlong **)(lVar18 + 0xf8);
              *(code **)(lVar18 + 0xd0) =
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l27::<lambda_4>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
                   ::Call;
              *(undefined8 *)(lVar18 + 0xd8) = uStack_d0;
              *(undefined4 *)(lVar18 + 0xe0) = 0x51e775f8;
              *(undefined4 *)(lVar18 + 0xe4) = 1;
              *(UCombinedTransformGizmo **)(lVar18 + 0xe8) = this;
              *(undefined4 *)(lVar18 + 0xf0) = (undefined4)local_b8;
              *(undefined4 *)(lVar18 + 0xf4) = local_b8._4_4_;
              *(undefined4 *)(lVar18 + 0xf8) = 0;
              *(undefined4 *)(lVar18 + 0xfc) = 0;
              uStack_d0 = uVar9;
              local_b8 = uVar8;
              if (local_d8 != 0) {
                plVar17 = &local_c8;
                if (plStack_b0 != (longlong *)0x0) {
                  plVar17 = plStack_b0;
                }
                (**(code **)(*plVar17 + 0x10))();
              }
            }
          }
        }
        pUVar16 = UAxisAngleGizmo::StaticClass();
        iVar3 = (int)pUVar16->_padding_;
        if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar16->_padding_)) goto LAB_149663e35;
      }
      if (lVar18 != 0) {
        local_a8 = *(longlong *)(lVar18 + 0x90);
        uVar9 = *(undefined8 *)(lVar18 + 0x98);
        local_98 = *(longlong *)(lVar18 + 0xa0);
        uStack_90 = *(undefined8 *)(lVar18 + 0xa8);
        uVar8 = *(undefined8 *)(lVar18 + 0xb0);
        plStack_80 = *(longlong **)(lVar18 + 0xb8);
        *(code **)(lVar18 + 0x90) =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l30::<lambda_5>,bool>
             ::Call;
        *(undefined8 *)(lVar18 + 0x98) = uStack_a0;
        *(undefined4 *)(lVar18 + 0xa0) = 0x51e77618;
        *(undefined4 *)(lVar18 + 0xa4) = 1;
        *(UCombinedTransformGizmo **)(lVar18 + 0xa8) = this;
        *(undefined4 *)(lVar18 + 0xb0) = (undefined4)local_88;
        *(undefined4 *)(lVar18 + 0xb4) = local_88._4_4_;
        *(undefined4 *)(lVar18 + 0xb8) = 0;
        *(undefined4 *)(lVar18 + 0xbc) = 0;
        uStack_a0 = uVar9;
        local_88 = uVar8;
        if (local_a8 != 0) {
          plVar17 = &local_98;
          if (plStack_80 != (longlong *)0x0) {
            plVar17 = plStack_80;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        local_78 = *(longlong *)(lVar18 + 0xc0);
        uVar9 = *(undefined8 *)(lVar18 + 200);
        local_68 = *(longlong *)(lVar18 + 0xd0);
        uStack_60 = *(undefined8 *)(lVar18 + 0xd8);
        uVar8 = *(undefined8 *)(lVar18 + 0xe0);
        plStack_50 = *(longlong **)(lVar18 + 0xe8);
        *(code **)(lVar18 + 0xc0) =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l30::<lambda_6>,bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
             ::Call;
        *(undefined8 *)(lVar18 + 200) = uStack_70;
        *(undefined4 *)(lVar18 + 0xd0) = 0x51e77638;
        *(undefined4 *)(lVar18 + 0xd4) = 1;
        *(UCombinedTransformGizmo **)(lVar18 + 0xd8) = this;
        *(undefined4 *)(lVar18 + 0xe0) = (undefined4)local_58;
        *(undefined4 *)(lVar18 + 0xe4) = local_58._4_4_;
        *(undefined4 *)(lVar18 + 0xe8) = 0;
        *(undefined4 *)(lVar18 + 0xec) = 0;
        uStack_70 = uVar9;
        local_58 = uVar8;
        if (local_78 != 0) {
          plVar17 = &local_68;
          if (plStack_50 != (longlong *)0x0) {
            plVar17 = plStack_50;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
      pFVar19 = pFVar19 + 8;
    }
  }
  return;
}

// Setup @ 149664480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::Setup(UCombinedTransformGizmo *this)

{
  FCombinedTransformGizmoActorFactory *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ACombinedTransformGizmoActor *pAVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UInteractiveGizmo::Setup((UInteractiveGizmo *)this);
  if (*(longlong *)&this->UpdateHoverFunction == 0) {
    local_78 = *(longlong *)&this->UpdateHoverFunction;
    uVar4 = *(undefined8 *)&(this->UpdateHoverFunction).field_0x8;
    local_68 = *(longlong *)&(this->UpdateHoverFunction).field_0x10;
    uStack_60 = *(undefined8 *)&(this->UpdateHoverFunction).field_0x18;
    uVar3 = *(undefined8 *)&(this->UpdateHoverFunction).field_0x20;
    plStack_50 = *(longlong **)&(this->UpdateHoverFunction).field_0x28;
    *(code **)&this->UpdateHoverFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(UPrimitiveComponent_*,bool),void,UPrimitiveComponent_*,bool>
         ::Call;
    *(undefined8 *)&(this->UpdateHoverFunction).field_0x8 = uStack_70;
    *(undefined4 *)&(this->UpdateHoverFunction).field_0x10 = 0x51e77658;
    *(undefined4 *)&(this->UpdateHoverFunction).field_0x14 = 1;
    *(undefined4 *)&(this->UpdateHoverFunction).field_0x18 = 0x4962f060;
    *(undefined4 *)&(this->UpdateHoverFunction).field_0x1c = 1;
    *(undefined4 *)&(this->UpdateHoverFunction).field_0x20 = (undefined4)local_58;
    *(undefined4 *)&(this->UpdateHoverFunction).field_0x24 = local_58._4_4_;
    *(undefined4 *)&(this->UpdateHoverFunction).field_0x28 = 0;
    *(undefined4 *)&(this->UpdateHoverFunction).field_0x2c = 0;
    local_58 = uVar3;
    uStack_70 = uVar4;
    if (local_78 != 0) {
      plVar7 = &local_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar7 = plStack_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (*(longlong *)&this->UpdateCoordSystemFunction == 0) {
    local_48 = *(longlong *)&this->UpdateCoordSystemFunction;
    uVar4 = *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x8;
    local_38 = *(longlong *)&(this->UpdateCoordSystemFunction).field_0x10;
    uStack_30 = *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x18;
    uVar3 = *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x20;
    plStack_20 = *(longlong **)&(this->UpdateCoordSystemFunction).field_0x28;
    *(code **)&this->UpdateCoordSystemFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(UPrimitiveComponent_*,enum_EToolContextCoordinateSystem),void,UPrimitiveComponent_*,enum_EToolContextCoordinateSystem>
         ::Call;
    *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x8 = uStack_40;
    *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x10 = 0x51e77678;
    *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x14 = 1;
    *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x18 = 0x4962f110;
    *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x1c = 1;
    *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x28 = 0;
    *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x2c = 0;
    uStack_40 = uVar4;
    local_28 = uVar3;
    if (local_48 != 0) {
      plVar7 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar7 = plStack_20;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if ((this->GizmoActorBuilder).Object == (FCombinedTransformGizmoActorFactory *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->GizmoActorBuilder).Object;
  pAVar6 = (ACombinedTransformGizmoActor *)(**(code **)pFVar1->_padding_)(pFVar1,this->World);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar6 != (ACombinedTransformGizmoActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar6);
  }
  (this->GizmoActor).field0_0x0.DebugPtr = pAVar6;
  this->PreviousActiveGizmoMode = this->ActiveGizmoMode;
  return;
}

// Shutdown @ 1496648a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::Shutdown(UCombinedTransformGizmo *this)

{
  ACombinedTransformGizmoActor *pAVar1;
  
  (**(code **)(*(longlong *)this + 0x338))();
  pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
  if ((pAVar1 != (ACombinedTransformGizmoActor *)0x0) &&
     (((uint)pAVar1->_padding_ >> 0x1e & 1) == 0)) {
    AActor::Destroy((AActor *)(this->GizmoActor).field0_0x0.DebugPtr,false,true);
    (this->GizmoActor).field0_0x0.DebugPtr = (ACombinedTransformGizmoActor *)0x0;
  }
  return;
}

// StaticRegisterNativesUCombinedTransformGizmo @ 149664a10

void __cdecl UCombinedTransformGizmo::StaticRegisterNativesUCombinedTransformGizmo(void)

{
  return;
}

// Tick @ 149664de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::Tick(UCombinedTransformGizmo *this,float param_1)

{
  EToolContextCoordinateSystem *pEVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UGizmoComponentAxisSource *pUVar4;
  ACombinedTransformGizmoActor *pAVar5;
  longlong lVar6;
  code *pcVar7;
  EToolContextCoordinateSystem EVar8;
  bool bVar9;
  EToolContextTransformGizmoMode EVar10;
  longlong *plVar11;
  undefined8 uVar12;
  TTransform<double> *pTVar13;
  UInteractiveGizmoManager *pUVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  EToolContextCoordinateSystem local_res8 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  TVector<double>_u_0 local_98;
  undefined1 local_78 [72];
  char local_30;
  
  pEVar1 = &this->CurrentCoordinateSystem;
  if (this->bUseContextCoordinateSystem != false) {
    plVar11 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x328))(plVar11);
    EVar8 = (**(code **)(*plVar11 + 0x20))(plVar11);
    *pEVar1 = EVar8;
  }
  if (((*pEVar1 != World) && (*pEVar1 != Local)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCoordinateSystem == EToolContextCoordinateSystem::World || CurrentCoordinateSystem == EToolContextCoordinateSystem::Local"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                         ,0x491,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar11 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  plVar11 = (longlong *)(**(code **)(*plVar11 + 0x328))(plVar11);
  (**(code **)(*plVar11 + 0x30))(plVar11,local_78);
  (this->RelativeTranslationSnapping).bEnabledInContext = local_30 == '\0';
  bVar9 = *pEVar1 == Local;
  pUVar4 = (this->AxisXSource).field0_0x0.DebugPtr;
  if (((pUVar4 != (UGizmoComponentAxisSource *)0x0) &&
      ((this->AxisYSource).field0_0x0.DebugPtr != (UGizmoComponentAxisSource *)0x0)) &&
     ((this->AxisZSource).field0_0x0.DebugPtr != (UGizmoComponentAxisSource *)0x0)) {
    pUVar4->bLocalAxes = bVar9;
    ((this->AxisYSource).field0_0x0.DebugPtr)->bLocalAxes = bVar9;
    ((this->AxisZSource).field0_0x0.DebugPtr)->bLocalAxes = bVar9;
  }
  if (*(longlong *)&this->UpdateCoordSystemFunction != 0) {
    iVar3 = (this->ActiveComponents).ArrayNum;
    pFVar16 = (this->ActiveComponents).AllocatorInstance.Data;
    pFVar2 = pFVar16 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->ActiveComponents).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UPrimitiveComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar16 == pFVar2) break;
      local_res8[0] = *pEVar1;
      local_res20 = *(undefined8 *)pFVar16;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->UpdateCoordSystemFunction);
      plVar11 = *(longlong **)&(this->UpdateCoordSystemFunction).field_0x28;
      pcVar7 = *(code **)&this->UpdateCoordSystemFunction;
      plVar15 = (longlong *)&(this->UpdateCoordSystemFunction).field_0x10;
      if (plVar11 != (longlong *)0x0) {
        plVar15 = plVar11;
      }
      uVar12 = (**(code **)(*plVar15 + 8))();
      (*pcVar7)(uVar12,&local_res20,local_res8);
      pFVar16 = pFVar16 + 8;
    }
  }
  if (this->bUseContextGizmoMode != false) {
    plVar11 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x328))(plVar11);
    EVar10 = (**(code **)(*plVar11 + 0x28))(plVar11);
    this->ActiveGizmoMode = EVar10;
  }
  if (this->PreviousActiveGizmoMode != this->ActiveGizmoMode) {
    ApplyGizmoActiveMode(this);
  }
  if ((((this->CameraAxisSource).field0_0x0.DebugPtr != (UGizmoConstantFrameAxisSource *)0x0) &&
      (pAVar5 = (this->GizmoActor).field0_0x0.DebugPtr,
      pAVar5 != (ACombinedTransformGizmoActor *)0x0)) &&
     (((uint)pAVar5->_padding_ >> 0x1e & 1) == 0)) {
    lVar6 = ((this->GizmoActor).field0_0x0.DebugPtr)->_padding_;
    if (lVar6 == 0) {
      pTVar13 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar13 = (TTransform<double> *)(lVar6 + 0x1f0);
    }
    local_98._0_4_ = *(undefined4 *)(pTVar13->Translation).XY.m128d_f64;
    local_98._4_4_ = *(undefined4 *)((longlong)(pTVar13->Translation).XY.m128d_f64 + 4);
    local_98._8_4_ = *(undefined4 *)((pTVar13->Translation).XY.m128d_f64 + 1);
    local_98._12_4_ = *(undefined4 *)((longlong)(pTVar13->Translation).XY.m128d_f64 + 0xc);
    local_98._16_4_ = *(undefined4 *)(pTVar13->Translation).ZW.m128d_f64;
    local_98._20_4_ = *(undefined4 *)((longlong)(pTVar13->Translation).ZW.m128d_f64 + 4);
    pUVar14 = (UInteractiveGizmoManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    UE::GizmoUtil::UpdateCameraAxisSource
              ((this->CameraAxisSource).field0_0x0.DebugPtr,pUVar14,
               (TVector<double> *)&local_98._s_0);
  }
  return;
}

// UpdateCameraAxisSource @ 149665f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCombinedTransformGizmo::UpdateCameraAxisSource(UCombinedTransformGizmo *this)

{
  ACombinedTransformGizmoActor *pAVar1;
  longlong lVar2;
  UInteractiveGizmoManager *pUVar3;
  TTransform<double> *pTVar4;
  TVector<double>_u_0 local_28;
  
  if ((((this->CameraAxisSource).field0_0x0.DebugPtr != (UGizmoConstantFrameAxisSource *)0x0) &&
      (pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr,
      pAVar1 != (ACombinedTransformGizmoActor *)0x0)) &&
     (((uint)pAVar1->_padding_ >> 0x1e & 1) == 0)) {
    lVar2 = ((this->GizmoActor).field0_0x0.DebugPtr)->_padding_;
    if (lVar2 == 0) {
      pTVar4 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar4 = (TTransform<double> *)(lVar2 + 0x1f0);
    }
    local_28._0_4_ = *(undefined4 *)(pTVar4->Translation).XY.m128d_f64;
    local_28._4_4_ = *(undefined4 *)((longlong)(pTVar4->Translation).XY.m128d_f64 + 4);
    local_28._8_4_ = *(undefined4 *)((pTVar4->Translation).XY.m128d_f64 + 1);
    local_28._12_4_ = *(undefined4 *)((longlong)(pTVar4->Translation).XY.m128d_f64 + 0xc);
    local_28._16_4_ = *(undefined4 *)(pTVar4->Translation).ZW.m128d_f64;
    local_28._20_4_ = *(undefined4 *)((longlong)(pTVar4->Translation).ZW.m128d_f64 + 4);
    pUVar3 = (UInteractiveGizmoManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    UE::GizmoUtil::UpdateCameraAxisSource
              ((this->CameraAxisSource).field0_0x0.DebugPtr,pUVar3,(TVector<double> *)&local_28._s_0
              );
  }
  return;
}

// UpdateTransformDuringEditSequence @ 149667180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCombinedTransformGizmo::UpdateTransformDuringEditSequence
          (UCombinedTransformGizmo *this,TTransform<double> *param_1,bool param_2)

{
  ACombinedTransformGizmoActor *pAVar1;
  UTransformProxy *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_c8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((((this->ActiveTarget).field0_0x0.DebugPtr == (UTransformProxy *)0x0) ||
      (pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr,
      pAVar1 == (ACombinedTransformGizmoActor *)0x0)) ||
     (((uint)pAVar1->_padding_ >> 0x1e & 1) != 0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4678433611253286381>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                       ,0x5ed,"ActiveTarget && IsValid(GizmoActor)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_78.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_78.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_78.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_78.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_78.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_78.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_78.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_78.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_78.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_78.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_78.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_78.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    if (param_2) {
      local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_78.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
      local_78.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    USceneComponent::SetWorldTransform
              ((USceneComponent *)((this->GizmoActor).field0_0x0.DebugPtr)->_padding_,&local_78,
               false,(FHitResult *)0x0,None);
    pUVar2 = (this->ActiveTarget).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,param_1);
  }
  return;
}

