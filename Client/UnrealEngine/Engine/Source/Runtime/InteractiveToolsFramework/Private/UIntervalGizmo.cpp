// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 34

// StaticClass @ 149670c80

UClass * __cdecl UIntervalGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntervalGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"IntervalGizmo",
               &Z_Registration_Info_UClass_UIntervalGizmo.InnerSingleton,
               StaticRegisterNativesUIntervalGizmo,0x220,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UIntervalGizmo>,
               InternalVTableHelperCtorCaller<UIntervalGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntervalGizmo.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149673280

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
`UIntervalGizmo::Setup'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UPrimitiveComponent *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UGizmoBaseComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_UGizmoBaseComponent_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        param_1 = (UPrimitiveComponent *)0x0;
      }
      (**(code **)(*(longlong *)&param_1->field_0x548 + 0x10))(&param_1->field_0x548,param_2);
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 149673380

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
`UIntervalGizmo::Setup'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UPrimitiveComponent *param_1,EToolContextCoordinateSystem param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UGizmoBaseComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UGizmoBaseComponent_NoRegister();
      lVar2 = *(longlong *)&param_1->field_0x10;
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        param_1 = (UPrimitiveComponent *)0x0;
      }
      (**(code **)(*(longlong *)&param_1->field_0x548 + 0x18))
                (&param_1->field_0x548,CONCAT71((int7)((ulonglong)lVar2 >> 8),param_2 == World));
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 149673500

bool __cdecl UIntervalGizmo::<lambda_51_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// <lambda_invoker_cdecl> @ 149673510

bool __cdecl
UIntervalGizmo::<lambda_52_>::<lambda_invoker_cdecl>(TRay<double> *param_1,TVector<double> *param_2)

{
  return false;
}

// UIntervalGizmo @ 1496872a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UIntervalGizmo * __thiscall
UIntervalGizmo::UIntervalGizmo(UIntervalGizmo *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->StateTarget).field0_0x0.DebugPtr = (UGizmoTransformChangeStateTarget *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  *(undefined8 *)&this->OnIntervalChanged = 0;
  *(undefined8 *)&(this->OnIntervalChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnIntervalChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnIntervalChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnBeginIntervalGizmoEdit = 0;
  *(undefined8 *)&(this->OnBeginIntervalGizmoEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeginIntervalGizmoEdit).field_0x10 = 0;
  *(undefined8 *)&(this->OnBeginIntervalGizmoEdit).field_0x18 = 2;
  *(undefined8 *)&this->OnEndIntervalGizmoEdit = 0;
  *(undefined8 *)&(this->OnEndIntervalGizmoEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndIntervalGizmoEdit).field_0x10 = 0;
  *(undefined8 *)&(this->OnEndIntervalGizmoEdit).field_0x18 = 2;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  (this->GizmoActor).field0_0x0.DebugPtr = (AIntervalGizmoActor *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->ActiveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveComponents).ArrayNum = 0;
  (this->ActiveComponents).ArrayMax = 0;
  (this->ActiveGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGizmos).ArrayNum = 0;
  (this->ActiveGizmos).ArrayMax = 0;
  (this->UpIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->DownIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->ForwardIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->BackwardIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->RightIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->LeftIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->AxisXSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisYSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisZSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->GizmoActorBuilder).Object = (FIntervalGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateCoordSystemFunction = 0;
  *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x28 = 0;
  *(undefined8 *)&this->ShouldAlignDestination = 0;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAlignDestination).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldAlignDestination).field_0x18;
  *(code **)puVar1 = <lambda_51_>::<lambda_invoker_cdecl>;
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
  *(code **)puVar1 = <lambda_52_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->DestinationAlignmentRayCaster =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  (this->UpIntervalRange).Min = 3.4028235e+38;
  (this->UpIntervalRange).Max = -3.4028235e+38;
  (this->DownIntervalRange).Min = 3.4028235e+38;
  (this->DownIntervalRange).Max = -3.4028235e+38;
  (this->ForwardIntervalRange).Min = 3.4028235e+38;
  (this->ForwardIntervalRange).Max = -3.4028235e+38;
  (this->BackwardIntervalRange).Min = 3.4028235e+38;
  (this->BackwardIntervalRange).Max = -3.4028235e+38;
  (this->RightIntervalRange).Min = 3.4028235e+38;
  (this->RightIntervalRange).Max = -3.4028235e+38;
  (this->LeftIntervalRange).Min = 3.4028235e+38;
  (this->LeftIntervalRange).Max = -3.4028235e+38;
  return this;
}

// UIntervalGizmo @ 1496874c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UIntervalGizmo * __thiscall UIntervalGizmo::UIntervalGizmo(UIntervalGizmo *this)

{
  undefined1 *puVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->StateTarget).field0_0x0.DebugPtr = (UGizmoTransformChangeStateTarget *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  *(undefined8 *)&this->OnIntervalChanged = 0;
  *(undefined8 *)&(this->OnIntervalChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnIntervalChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnIntervalChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnBeginIntervalGizmoEdit = 0;
  *(undefined8 *)&(this->OnBeginIntervalGizmoEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeginIntervalGizmoEdit).field_0x10 = 0;
  *(undefined8 *)&(this->OnBeginIntervalGizmoEdit).field_0x18 = 2;
  *(undefined8 *)&this->OnEndIntervalGizmoEdit = 0;
  *(undefined8 *)&(this->OnEndIntervalGizmoEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndIntervalGizmoEdit).field_0x10 = 0;
  *(undefined8 *)&(this->OnEndIntervalGizmoEdit).field_0x18 = 2;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  (this->GizmoActor).field0_0x0.DebugPtr = (AIntervalGizmoActor *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->ActiveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveComponents).ArrayNum = 0;
  (this->ActiveComponents).ArrayMax = 0;
  (this->ActiveGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGizmos).ArrayNum = 0;
  (this->ActiveGizmos).ArrayMax = 0;
  (this->UpIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->DownIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->ForwardIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->BackwardIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->RightIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->LeftIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->AxisXSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisYSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->AxisZSource).field0_0x0.DebugPtr = (UGizmoComponentAxisSource *)0x0;
  (this->GizmoActorBuilder).Object = (FIntervalGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateCoordSystemFunction = 0;
  *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x28 = 0;
  *(undefined8 *)&this->ShouldAlignDestination = 0;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAlignDestination).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldAlignDestination).field_0x18;
  *(code **)puVar1 = <lambda_51_>::<lambda_invoker_cdecl>;
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
  *(code **)puVar1 = <lambda_52_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->DestinationAlignmentRayCaster =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  (this->UpIntervalRange).Min = 3.4028235e+38;
  (this->UpIntervalRange).Max = -3.4028235e+38;
  (this->DownIntervalRange).Min = 3.4028235e+38;
  (this->DownIntervalRange).Max = -3.4028235e+38;
  (this->ForwardIntervalRange).Min = 3.4028235e+38;
  (this->ForwardIntervalRange).Max = -3.4028235e+38;
  (this->BackwardIntervalRange).Min = 3.4028235e+38;
  (this->BackwardIntervalRange).Max = -3.4028235e+38;
  (this->RightIntervalRange).Min = 3.4028235e+38;
  (this->RightIntervalRange).Max = -3.4028235e+38;
  (this->LeftIntervalRange).Min = 3.4028235e+38;
  (this->LeftIntervalRange).Max = -3.4028235e+38;
  return this;
}

// ~UIntervalGizmo @ 14968a4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UIntervalGizmo::~UIntervalGizmo(UIntervalGizmo *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GizmoActorBuilder).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->ActiveGizmos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEndIntervalGizmoEdit).field_0x8,
             *(int *)&(this->OnEndIntervalGizmoEdit).field_0x10);
  pvVar3 = *(void **)&(this->OnEndIntervalGizmoEdit).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndIntervalGizmoEdit);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBeginIntervalGizmoEdit).field_0x8,
             *(int *)&(this->OnBeginIntervalGizmoEdit).field_0x10);
  pvVar3 = *(void **)&(this->OnBeginIntervalGizmoEdit).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBeginIntervalGizmoEdit);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnIntervalChanged).field_0x8,*(int *)&(this->OnIntervalChanged).field_0x10);
  pvVar3 = *(void **)&(this->OnIntervalChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIntervalChanged);
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  return;
}

// operator() @ 14968bd50

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

void __thiscall
`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_5>::operator()
          (void *this,USceneComponent *param_1,EUpdateTransformFlags param_2,ETeleportType param_3)

{
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (param_1->ComponentToWorld).Rotation.XY.m128d_f64[0];
  dStack_70 = (param_1->ComponentToWorld).Rotation.XY.m128d_f64[1];
  local_68 = (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  dStack_60 = (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  local_58 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[0];
  dStack_50 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
  local_48 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  dStack_40 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[1];
  local_38 = *(undefined4 *)((longlong)this + 8);
  uStack_34 = *(undefined4 *)((longlong)this + 0xc);
  uStack_30 = *(undefined4 *)((longlong)this + 0x10);
  uStack_2c = *(undefined4 *)((longlong)this + 0x14);
  local_28 = *(undefined8 *)((longlong)this + 0x18);
  uStack_20 = 0;
  (**(code **)(**(longlong **)(*(longlong *)this + 0xb0) + 0x2c8))
            (*(longlong **)(*(longlong *)this + 0xb0),&local_78);
  return;
}

// operator() @ 14968bdf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_6>::operator()
          (void *this,UGizmoLocalFloatParameterSource *param_1,UGizmoLineHandleComponent *param_2,
          UGizmoComponentAxisSource *param_3,TInterval1<float> *param_4,TVector<double> *param_5,
          float param_6)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ForAnyElementType *pFVar6;
  UGizmoLocalFloatParameterSource *local_res8;
  undefined8 *local_18 [2];
  
  lVar1 = *(longlong *)(*(longlong *)this + 0x38);
  pFVar6 = (ForAnyElementType *)(lVar1 + 0x120);
  puVar5 = ::operator_new(0x18);
  local_18[0] = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *puVar5 = &___7FGizmoFloatParameterChangeSource__6B_;
    puVar5[2] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UGizmoLocalFloatParameterSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 1),(FObjectPtr)&local_res8);
    local_18[0] = puVar5;
  }
  if (((pFVar6->Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar6->Data + (longlong)*(int *)(lVar1 + 300) * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)(lVar1 + 0x128);
  if (iVar4 == *(int *)(lVar1 + 300)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar6,(int *)(lVar1 + 300));
  }
  *(int *)(lVar1 + 0x128) = iVar4 + 1;
  *(undefined8 **)(pFVar6->Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// operator() @ 14968bf30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_8>::operator()
          (void *this,UGizmoLocalFloatParameterSource *param_1,UGizmoLineHandleComponent *param_2,
          UGizmoComponentAxisSource *param_3,TInterval1<float> *param_4,TVector<double> *param_5,
          float param_6)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  ForAnyElementType *pFVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  UGizmoLineHandleComponent *local_18 [2];
  
  plVar1 = *(longlong **)this;
  plVar8 = (longlong *)0x0;
  plVar10 = (longlong *)(plVar1[7] + 0x28);
  if (plVar1[7] == 0) {
    plVar10 = plVar8;
  }
  plVar6 = &param_1->_padding_;
  if (param_1 == (UGizmoLocalFloatParameterSource *)0x0) {
    plVar6 = plVar8;
  }
  plVar9 = &param_3->_padding_;
  if (param_3 == (UGizmoComponentAxisSource *)0x0) {
    plVar9 = plVar8;
  }
  (**(code **)(*plVar1 + 0x350))
            (plVar1,*(undefined8 *)((longlong)this + 8),param_2,plVar9,plVar6,param_4->Min,
             param_4->Max,plVar10);
  lVar2 = *(longlong *)this;
  pFVar7 = (ForAnyElementType *)(lVar2 + 0xb8);
  local_18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UGizmoLineHandleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  if ((pFVar7->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar7->Data + (longlong)*(int *)(lVar2 + 0xc4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0xc0);
  if (iVar5 == *(int *)(lVar2 + 0xc4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar7,(int *)(lVar2 + 0xc4));
  }
  *(int *)(lVar2 + 0xc0) = iVar5 + 1;
  *(UGizmoLineHandleComponent **)(pFVar7->Data + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UGizmoLineHandleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  USceneComponent::SetVisibility((USceneComponent *)param_2,true,DirtyOnly);
  return;
}

// AddIntervalHandleGizmo @ 149691620

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
UIntervalGizmo::AddIntervalHandleGizmo
          (UIntervalGizmo *this,USceneComponent *param_1,UPrimitiveComponent *param_2,
          IGizmoAxisSource *param_3,IGizmoFloatParameterSource *param_4,float param_5,float param_6,
          IGizmoStateTarget *param_7)

{
  int *piVar1;
  TArray<TObjectPtr<UInteractiveGizmo>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  TObjectPtr<UInputBehaviorSet>_u_0 TVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  UInteractiveGizmo *pUVar11;
  UClass *pUVar12;
  UInteractiveGizmo *this_00;
  UInteractiveGizmo *pUVar13;
  UGizmoAxisIntervalParameterSource *pUVar14;
  UGizmoComponentHitTarget *pUVar15;
  UObject *this_01;
  UObject *pUVar16;
  longlong lVar17;
  UObject *pUVar18;
  UInteractiveGizmo *pUVar19;
  undefined1 auStack_168 [32];
  UInteractiveGizmo **local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  UInteractiveGizmo *local_118;
  void *local_110;
  undefined8 local_108;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  UInputBehaviorSet *local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_98;
  TObjectPtr<UInputBehaviorSet>_u_0 TStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_168;
  plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
  pUVar13 = (UInteractiveGizmo *)0x0;
  local_110 = (void *)0x0;
  local_108 = 0;
  pUVar11 = (UInteractiveGizmo *)
            (**(code **)(*plVar10 + 0x2d0))
                      (plVar10,&UInteractiveGizmoManager::DefaultAxisPositionBuilderIdentifier,
                       &local_110,0);
  if (pUVar11 != (UInteractiveGizmo *)0x0) {
    pUVar12 = Z_Construct_UClass_UAxisPositionGizmo_NoRegister();
    iVar9 = (int)pUVar12->_padding_;
    if ((iVar9 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar9 * 8)
        == &pUVar12->_padding_)) goto LAB_1496916dc;
  }
  pUVar11 = pUVar13;
LAB_1496916dc:
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  if ((pUVar11 == (UInteractiveGizmo *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntervalGizmo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\IntervalGizmo.cpp"
                         ,0x1de,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pUVar11 = (UInteractiveGizmo *)(*pcVar4)();
    return pUVar11;
  }
  pUVar19 = pUVar13;
  if ((param_3 != (IGizmoAxisSource *)0x0) &&
     (this_00 = (UInteractiveGizmo *)(**(code **)((longlong)*param_3 + 8))(param_3),
     this_00 != (UInteractiveGizmo *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar12 = UGizmoAxisSource::StaticClass();
    pUVar13 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar12);
    pUVar19 = this_00;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  pUVar11[1]._padding_ = (longlong)pUVar19;
  pUVar11[1]._padding_ = (longlong)pUVar13;
  pUVar14 = UGizmoAxisIntervalParameterSource::Construct(param_4,param_5,param_6,(UObject *)this);
  if (pUVar14 == (UGizmoAxisIntervalParameterSource *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    plVar10 = &pUVar14->_padding_;
  }
  pUVar16 = (UObject *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UGizmoAxisIntervalParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  pUVar11[1]._padding_ = (longlong)pUVar14;
  pUVar11[1]._padding_ = (longlong)plVar10;
  pUVar15 = NewObject<UGizmoComponentHitTarget>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (pUVar15->Component).field0_0x0.DebugPtr = param_2;
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    local_f8 = *(longlong *)&pUVar15->UpdateHoverFunction;
    uVar5 = *(undefined8 *)&(pUVar15->UpdateHoverFunction).field_0x8;
    local_e8 = *(longlong *)&(pUVar15->UpdateHoverFunction).field_0x10;
    uStack_e0 = *(undefined8 *)&(pUVar15->UpdateHoverFunction).field_0x18;
    local_d8 = *(undefined8 *)&(pUVar15->UpdateHoverFunction).field_0x20;
    plStack_d0 = *(longlong **)&(pUVar15->UpdateHoverFunction).field_0x28;
    *(code **)&pUVar15->UpdateHoverFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UIntervalGizmo::AddIntervalHandleGizmo'::__l12::<lambda_1>,void,bool>::
         Call;
    *(undefined8 *)&(pUVar15->UpdateHoverFunction).field_0x8 = uStack_f0;
    *(undefined4 *)&(pUVar15->UpdateHoverFunction).field_0x10 = 0x51e9ef68;
    *(undefined4 *)&(pUVar15->UpdateHoverFunction).field_0x14 = 1;
    *(UPrimitiveComponent **)&(pUVar15->UpdateHoverFunction).field_0x18 = param_2;
    *(UIntervalGizmo **)&(pUVar15->UpdateHoverFunction).field_0x20 = this;
    *(undefined4 *)&(pUVar15->UpdateHoverFunction).field_0x28 = 0;
    *(undefined4 *)&(pUVar15->UpdateHoverFunction).field_0x2c = 0;
    uStack_f0 = uVar5;
    if (local_f8 != 0) {
      plVar10 = &local_e8;
      if (plStack_d0 != (longlong *)0x0) {
        plVar10 = plStack_d0;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  pUVar18 = pUVar16;
  if (pUVar15 != (UGizmoComponentHitTarget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    pUVar18 = (UObject *)&pUVar15->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pUVar11[2]._padding_ = (longlong)pUVar15;
  pUVar11[2]._padding_ = (longlong)pUVar18;
  pUVar18 = pUVar16;
  if ((param_7 != (IGizmoStateTarget *)0x0) &&
     (this_01 = (UObject *)(**(code **)((longlong)*param_7 + 8))(param_7), this_01 != (UObject *)0x0
     )) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_01);
    }
    pUVar12 = UGizmoStateTarget::GetPrivateStaticClass();
    pUVar16 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar12);
    pUVar18 = this_01;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar18);
  }
  pUVar11[2]._padding_ = (longlong)pUVar18;
  pUVar11[2]._padding_ = (longlong)pUVar16;
  local_c8 = pUVar11[2].InputBehaviors.field0_0x0.DebugPtr;
  lVar6 = pUVar11[3]._padding_;
  local_b8 = pUVar11[3]._padding_;
  lStack_b0 = pUVar11[3]._padding_;
  lVar17 = pUVar11[3]._padding_;
  plStack_a0 = (longlong *)pUVar11[3]._padding_;
  pUVar11[2].InputBehaviors.field0_0x0.DebugPtr =
       (UInputBehaviorSet *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_2>,bool>::Call;
  pUVar11[3]._padding_ = lStack_c0;
  *(undefined4 *)&pUVar11[3]._padding_ = 0x51e9ef88;
  *(undefined4 *)((longlong)&pUVar11[3]._padding_ + 4) = 1;
  pUVar11[3]._padding_ = (longlong)this;
  *(undefined4 *)&pUVar11[3]._padding_ = (undefined4)local_a8;
  *(undefined4 *)((longlong)&pUVar11[3]._padding_ + 4) = local_a8._4_4_;
  *(undefined4 *)&pUVar11[3]._padding_ = 0;
  *(undefined4 *)((longlong)&pUVar11[3]._padding_ + 4) = 0;
  lStack_c0 = lVar6;
  local_a8 = lVar17;
  if (local_c8 != (UInputBehaviorSet *)0x0) {
    plVar10 = &local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar10 = plStack_a0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  local_98 = pUVar11[3]._padding_;
  TVar7 = pUVar11[3].InputBehaviors.field0_0x0;
  local_88 = pUVar11[4]._padding_;
  lStack_80 = pUVar11[4]._padding_;
  lVar17 = pUVar11[4]._padding_;
  plStack_70 = (longlong *)pUVar11[4]._padding_;
  pUVar11[3]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_3>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
       ::Call;
  pUVar11[3].InputBehaviors.field0_0x0 = TStack_90;
  *(undefined4 *)&pUVar11[4]._padding_ = 0x51e9efa8;
  *(undefined4 *)((longlong)&pUVar11[4]._padding_ + 4) = 1;
  pUVar11[4]._padding_ = (longlong)this;
  *(undefined4 *)&pUVar11[4]._padding_ = (undefined4)local_78;
  *(undefined4 *)((longlong)&pUVar11[4]._padding_ + 4) = local_78._4_4_;
  *(undefined4 *)&pUVar11[4]._padding_ = 0;
  *(undefined4 *)((longlong)&pUVar11[4]._padding_ + 4) = 0;
  TStack_90 = TVar7;
  local_78 = lVar17;
  if (local_98 != 0) {
    plVar10 = &local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar10 = plStack_70;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  pTVar2 = &this->ActiveGizmos;
  local_118 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UInteractiveGizmo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_118) &&
     (lVar17 = (longlong)(this->ActiveGizmos).ArrayMax,
     (FScriptContainerElement *)&local_118 < pFVar3 + lVar17 * 8)) {
    local_130 = (longlong)(this->ActiveGizmos).ArrayNum;
    local_128 = 8;
    local_148 = &local_118;
    local_140 = pFVar3;
    local_138 = lVar17;
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
  *(UInteractiveGizmo **)(pFVar3 + (longlong)iVar9 * 8) = local_118;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_118 != (UInteractiveGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_118);
  }
  return pUVar11;
}

// BeginEditSequence @ 149692930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UIntervalGizmo::BeginEditSequence(UIntervalGizmo *this)

{
  TMulticastDelegate<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnBeginIntervalGizmoEdit,this);
  return;
}

// ClearActiveTarget @ 149697560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UIntervalGizmo::ClearActiveTarget(UIntervalGizmo *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->ActiveGizmos).AllocatorInstance.Data;
  iVar3 = (this->ActiveGizmos).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ActiveGizmos).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UInteractiveGizmo>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    uVar4 = *(undefined8 *)pFVar6;
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar5 + 0x2d8))(plVar5,uVar4);
    pFVar6 = pFVar6 + 8;
  }
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  (this->ActiveGizmos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveGizmos).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ActiveComponents).ArrayMax;
  (this->ActiveComponents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveComponents).AllocatorInstance,0,piVar1);
  }
  (**(code **)(this->_padding_ + 0x330))(this);
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  return;
}

// ClearSources @ 149697840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UIntervalGizmo::ClearSources(UIntervalGizmo *this)

{
  (this->UpIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->DownIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->ForwardIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->BackwardIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->RightIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->LeftIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  return;
}

// EndEditSequence @ 14969dbe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UIntervalGizmo::EndEditSequence(UIntervalGizmo *this)

{
  TMulticastDelegate<void___cdecl(UIntervalGizmo_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnEndIntervalGizmoEdit,this);
  return;
}

// EnumerateAllIntervals @ 14969e050

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
UIntervalGizmo::EnumerateAllIntervals
          (UIntervalGizmo *this,
          TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float)>
          *param_1)

{
  AIntervalGizmoActor *pAVar1;
  undefined4 local_res8 [4];
  TObjectPtr<UGizmoLineHandleComponent>_u_0 local_res18;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 local_res20;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 local_28 [2];
  
  pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
  if (pAVar1 != (AIntervalGizmoActor *)0x0) {
    local_res18 = (pAVar1->RightIntervalComponent).field0_0x0;
    local_res20 = (this->LeftIntervalSource).field0_0x0;
    local_28[0] = (this->RightIntervalSource).field0_0x0;
    local_res8[0] = 0x3f800000;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_28,&local_res20,&local_res18,
               &this->RightIntervalRange,local_res8);
    local_res8[0] = 0xbf800000;
    local_res18 = (((this->GizmoActor).field0_0x0.DebugPtr)->LeftIntervalComponent).field0_0x0;
    local_res20 = (this->RightIntervalSource).field0_0x0;
    local_28[0] = (this->LeftIntervalSource).field0_0x0;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_28,&local_res20,&local_res18,
               &this->LeftIntervalRange,local_res8);
    local_res8[0] = 0x3f800000;
    local_res18 = (((this->GizmoActor).field0_0x0.DebugPtr)->ForwardIntervalComponent).field0_0x0;
    local_res20 = (this->BackwardIntervalSource).field0_0x0;
    local_28[0] = (this->ForwardIntervalSource).field0_0x0;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_28,&local_res20,&local_res18,
               &this->ForwardIntervalRange,local_res8);
    local_res8[0] = 0xbf800000;
    local_res18 = (((this->GizmoActor).field0_0x0.DebugPtr)->BackwardIntervalComponent).field0_0x0;
    local_res20 = (this->ForwardIntervalSource).field0_0x0;
    local_28[0] = (this->BackwardIntervalSource).field0_0x0;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_28,&local_res20,&local_res18,
               &this->BackwardIntervalRange,local_res8);
    local_res8[0] = 0x3f800000;
    local_res18 = (((this->GizmoActor).field0_0x0.DebugPtr)->UpIntervalComponent).field0_0x0;
    local_res20 = (this->DownIntervalSource).field0_0x0;
    local_28[0] = (this->UpIntervalSource).field0_0x0;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_28,&local_res20,&local_res18,
               &this->UpIntervalRange,local_res8);
    local_res8[0] = 0xbf800000;
    local_res18 = (((this->GizmoActor).field0_0x0.DebugPtr)->DownIntervalComponent).field0_0x0;
    local_res20 = (this->UpIntervalSource).field0_0x0;
    local_28[0] = (this->DownIntervalSource).field0_0x0;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_28,&local_res20,&local_res18,
               &this->DownIntervalRange,local_res8);
  }
  return;
}

// EnumerateValidIntervals @ 14969e2a0

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
UIntervalGizmo::EnumerateValidIntervals
          (UIntervalGizmo *this,
          TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float)>
          *param_1)

{
  AIntervalGizmoActor *pAVar1;
  TObjectPtr<UGizmoComponentAxisSource>_u_0 TVar2;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 TVar3;
  TObjectPtr<UGizmoLineHandleComponent>_u_0 TVar4;
  TObjectPtr<UGizmoLineHandleComponent>_u_0 TVar5;
  TObjectPtr<UGizmoComponentAxisSource>_u_0 local_res8;
  TObjectPtr<UGizmoComponentAxisSource>_u_0 local_res18;
  TObjectPtr<UGizmoLineHandleComponent>_u_0 local_res20;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  TVar3 = (TObjectPtr<UGizmoLocalFloatParameterSource>_u_0)
          (this->RightIntervalSource).field0_0x0.DebugPtr;
  TVar5.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  if (TVar3.DebugPtr != (UGizmoLocalFloatParameterSource *)0x0) {
    pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
    TVar2 = (this->AxisXSource).field0_0x0;
    TVar4.DebugPtr = TVar5.DebugPtr;
    if (((pAVar1 != (AIntervalGizmoActor *)0x0) &&
        (TVar4 = (TObjectPtr<UGizmoLineHandleComponent>_u_0)
                 (pAVar1->RightIntervalComponent).field0_0x0.DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending)) &&
       (TVar4.DebugPtr != (UGizmoLineHandleComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      TVar3 = (this->RightIntervalSource).field0_0x0;
    }
    local_58 = 0;
    local_68 = ___xmm_00000000000000003ff0000000000000;
    uStack_60 = _UNK_150689518;
    local_res8._0_4_ = 0x3f800000;
    local_res18 = TVar2;
    local_res20 = TVar4;
    local_78[0] = TVar3;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_78,&local_res20,&local_res18,
               &this->RightIntervalRange,&local_68,&local_res8);
  }
  TVar3 = (TObjectPtr<UGizmoLocalFloatParameterSource>_u_0)
          (this->LeftIntervalSource).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr != (UGizmoLocalFloatParameterSource *)0x0) {
    pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
    TVar2 = (this->AxisXSource).field0_0x0;
    TVar4.DebugPtr = TVar5.DebugPtr;
    if (((pAVar1 != (AIntervalGizmoActor *)0x0) &&
        (TVar4 = (TObjectPtr<UGizmoLineHandleComponent>_u_0)
                 (pAVar1->LeftIntervalComponent).field0_0x0.DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (TVar4.DebugPtr != (UGizmoLineHandleComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      TVar3 = (this->LeftIntervalSource).field0_0x0;
    }
    local_58 = 0;
    local_68 = ___xmm_0000000000000000bff0000000000000;
    uStack_60 = _UNK_15076ad98;
    local_res8._0_4_ = 0xbf800000;
    local_res18 = TVar2;
    local_res20 = TVar4;
    local_78[0] = TVar3;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_78,&local_res20,&local_res18,
               &this->LeftIntervalRange,&local_68,&local_res8);
  }
  TVar3 = (TObjectPtr<UGizmoLocalFloatParameterSource>_u_0)
          (this->ForwardIntervalSource).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr != (UGizmoLocalFloatParameterSource *)0x0) {
    pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
    local_res8 = (this->AxisYSource).field0_0x0;
    TVar4.DebugPtr = TVar5.DebugPtr;
    if (((pAVar1 != (AIntervalGizmoActor *)0x0) &&
        (TVar4 = (TObjectPtr<UGizmoLineHandleComponent>_u_0)
                 (pAVar1->ForwardIntervalComponent).field0_0x0.DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (TVar4.DebugPtr != (UGizmoLineHandleComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      TVar3 = (this->ForwardIntervalSource).field0_0x0;
    }
    local_res18 = local_res8;
    local_58 = 0;
    local_68 = ___xmm_3ff00000000000000000000000000000;
    uStack_60 = _UNK_15061cbc8;
    local_res8._0_4_ = 0x3f800000;
    local_res20 = TVar4;
    local_78[0] = TVar3;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_78,&local_res20,&local_res18,
               &this->ForwardIntervalRange,&local_68,&local_res8);
  }
  TVar3 = (TObjectPtr<UGizmoLocalFloatParameterSource>_u_0)
          (this->BackwardIntervalSource).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr != (UGizmoLocalFloatParameterSource *)0x0) {
    TVar2 = (this->AxisYSource).field0_0x0;
    pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
    TVar4.DebugPtr = TVar5.DebugPtr;
    if (((pAVar1 != (AIntervalGizmoActor *)0x0) &&
        (TVar4 = (TObjectPtr<UGizmoLineHandleComponent>_u_0)
                 (pAVar1->BackwardIntervalComponent).field0_0x0.DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (TVar4.DebugPtr != (UGizmoLineHandleComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      TVar3 = (this->BackwardIntervalSource).field0_0x0;
    }
    local_58 = 0;
    local_68 = ___xmm_bff00000000000000000000000000000;
    uStack_60 = _UNK_1508ffb28;
    local_res8._0_4_ = 0xbf800000;
    local_res18 = TVar2;
    local_res20 = TVar4;
    local_78[0] = TVar3;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_78,&local_res20,&local_res18,
               &this->BackwardIntervalRange,&local_68,&local_res8);
  }
  TVar3 = (TObjectPtr<UGizmoLocalFloatParameterSource>_u_0)
          (this->UpIntervalSource).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr != (UGizmoLocalFloatParameterSource *)0x0) {
    pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
    local_res8 = (this->AxisZSource).field0_0x0;
    TVar4.DebugPtr = TVar5.DebugPtr;
    if (((pAVar1 != (AIntervalGizmoActor *)0x0) &&
        (TVar4 = (TObjectPtr<UGizmoLineHandleComponent>_u_0)
                 (pAVar1->UpIntervalComponent).field0_0x0.DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (TVar4.DebugPtr != (UGizmoLineHandleComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      TVar3 = (this->UpIntervalSource).field0_0x0;
    }
    local_res18 = local_res8;
    local_58 = __real_3ff0000000000000;
    local_68 = 0;
    uStack_60 = 0;
    local_res8._0_4_ = 0x3f800000;
    local_res20 = TVar4;
    local_78[0] = TVar3;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_78,&local_res20,&local_res18,
               &this->UpIntervalRange,&local_68,&local_res8);
  }
  TVar3 = (TObjectPtr<UGizmoLocalFloatParameterSource>_u_0)
          (this->DownIntervalSource).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr != (UGizmoLocalFloatParameterSource *)0x0) {
    pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
    TVar2 = (this->AxisZSource).field0_0x0;
    if (((pAVar1 != (AIntervalGizmoActor *)0x0) &&
        (TVar5 = (TObjectPtr<UGizmoLineHandleComponent>_u_0)
                 (pAVar1->DownIntervalComponent).field0_0x0.DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (TVar5.DebugPtr != (UGizmoLineHandleComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      TVar3 = (this->DownIntervalSource).field0_0x0;
    }
    local_58 = __real_bff0000000000000;
    local_68 = 0;
    uStack_60 = 0;
    local_res8._0_4_ = 0xbf800000;
    local_res18 = TVar2;
    local_res20 = TVar5;
    local_78[0] = TVar3;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,local_78,&local_res20,&local_res18,
               &this->DownIntervalRange,&local_68,&local_res8);
  }
  return;
}

// GetGizmoTransform @ 1496a2c50

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
UIntervalGizmo::GetGizmoTransform(UIntervalGizmo *this,TTransform<double> *__return_storage_ptr__)

{
  (**(code **)(((this->TransformProxy).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496a6c30

UClass * __cdecl UIntervalGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntervalGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"IntervalGizmo",
               &Z_Registration_Info_UClass_UIntervalGizmo.InnerSingleton,
               StaticRegisterNativesUIntervalGizmo,0x220,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UIntervalGizmo>,
               InternalVTableHelperCtorCaller<UIntervalGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntervalGizmo.InnerSingleton;
}

// SetActiveTarget @ 1496bbe30

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
UIntervalGizmo::SetActiveTarget
          (UIntervalGizmo *this,UTransformProxy *param_1,FParameterSources *param_2,
          IToolContextTransactionProvider *param_3)

{
  int *piVar1;
  UGizmoLocalFloatParameterSource *pUVar2;
  USceneComponent *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FText *pFVar10;
  UGizmoTransformChangeStateTarget *pUVar11;
  undefined8 *puVar12;
  UGizmoComponentAxisSource *pUVar13;
  TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float)>
  *pTVar14;
  undefined8 *puVar15;
  TArray<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,TSizedDefaultAllocator<32>_>
  *pTVar16;
  undefined1 auStack_238 [32];
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5 [5];
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  UIntervalGizmo *local_1d0;
  UTransformProxy *local_1c8;
  UIntervalGizmo *local_1c0;
  UIntervalGizmo *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  code *local_190;
  undefined1 *local_188;
  code *local_180;
  UIntervalGizmo **local_178;
  code *local_170;
  UIntervalGizmo **local_168;
  code *local_160;
  undefined1 *local_158;
  UIntervalGizmo *local_150;
  USceneComponent *local_148;
  code *local_140;
  UIntervalGizmo **local_138;
  undefined1 local_130 [8];
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  UIntervalGizmo *local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_238;
  if ((this->TransformProxy).field0_0x0.DebugPtr != (UTransformProxy *)0x0) {
    (**(code **)(this->_padding_ + 0x338))();
    (**(code **)(this->_padding_ + 0x330))(this);
  }
  puVar15 = (undefined8 *)0x0;
  if (param_3 == (IToolContextTransactionProvider *)0x0) {
    lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
    param_3 = (IToolContextTransactionProvider *)(lVar9 + 0x28);
    if (lVar9 == 0) {
      param_3 = (IToolContextTransactionProvider *)0x0;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->TransformProxy).field0_0x0.DebugPtr = param_1;
  pUVar2 = param_2->UpInterval;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->UpIntervalSource).field0_0x0.DebugPtr = pUVar2;
  pUVar2 = param_2->DownInterval;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->DownIntervalSource).field0_0x0.DebugPtr = pUVar2;
  pUVar2 = param_2->ForwardInterval;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ForwardIntervalSource).field0_0x0.DebugPtr = pUVar2;
  pUVar2 = param_2->BackwardInterval;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->BackwardIntervalSource).field0_0x0.DebugPtr = pUVar2;
  pUVar2 = param_2->RightInterval;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->RightIntervalSource).field0_0x0.DebugPtr = pUVar2;
  pUVar2 = param_2->LeftInterval;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->LeftIntervalSource).field0_0x0.DebugPtr = pUVar2;
  if (param_2->InitParameterRanges == HalfRange) {
    local_1a8 = &local_1e8;
    pTVar14 = (TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float)>
               *)&local_1b0;
    local_1b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l11::<lambda_1>,void,UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float>
                ::Call;
  }
  else if (param_2->InitParameterRanges == FullRange) {
    local_198 = &local_1e7;
    pTVar14 = (TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float)>
               *)&local_1a0;
    local_1a0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l15::<lambda_2>,void,UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float>
                ::Call;
  }
  else {
    local_188 = &local_1e6;
    pTVar14 = (TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float)>
               *)&local_190;
    local_190 = UE::Core::Private::Function::
                TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l17::<lambda_3>,void,UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float>
                ::Call;
  }
  EnumerateAllIntervals(this,pTVar14);
  local_178 = &local_1d0;
  local_180 = UE::Core::Private::Function::
              TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>,void,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float>
              ::Call;
  local_1d0 = this;
  EnumerateValidIntervals
            (this,(TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float)>
                   *)&local_180);
  this_00 = *(USceneComponent **)((longlong)(this->GizmoActor).field0_0x0 + 0x1b8);
  (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_c8);
  dVar6 = local_c8.Scale3D.XY.m128d_f64[1];
  dVar5 = local_c8.Scale3D.XY.m128d_f64[0];
  local_d0 = __real_3ff0000000000000;
  local_108 = local_c8.Scale3D.ZW.m128d_f64[0];
  local_e0 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_d8 = _UNK_150689688;
  local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_c8.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
  local_c8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_128._s_0.Z = dVar5;
  dStack_110 = dVar6;
  USceneComponent::SetWorldTransform(this_00,&local_c8,false,(FHitResult *)0x0,None);
  local_e8 = local_108;
  local_f8 = dVar5;
  dStack_f0 = dVar6;
  local_100 = this;
  TMulticastDelegateRegistration<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
  ::AddLambda<_UIntervalGizmo::SetActiveTarget_::__l2::<lambda_5>_>
            (&this_00->TransformUpdated,(<lambda_5> *)local_130);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)(local_130 + 8),L"UIntervalGizmo",L"UIntervalGizmoTransaction",
                       L"Interval");
  pUVar11 = UGizmoTransformChangeStateTarget::Construct(this_00,pFVar10,param_3,(UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UGizmoTransformChangeStateTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->StateTarget).field0_0x0.DebugPtr = pUVar11;
  if ((longlong *)local_128._s_0.X != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_128._s_0.X + 0x10))();
  }
  pUVar11 = (this->StateTarget).field0_0x0.DebugPtr;
  pTVar16 = &pUVar11->DependentChangeSources;
  puVar12 = ::operator_new(0x20);
  local_1e0 = puVar15;
  if (puVar12 != (undefined8 *)0x0) {
    local_1c8 = (this->TransformProxy).field0_0x0.DebugPtr;
    *puVar12 = &___7FTransformProxyChangeSource__6B_;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1c8 != (UTransformProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1c8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 1),(FObjectPtr)&local_1c8);
    local_1e0 = puVar12;
  }
  pFVar3 = (pTVar16->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_1e0) &&
      ((FScriptContainerElement *)&local_1e0 <
       pFVar3 + (longlong)(pUVar11->DependentChangeSources).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (pUVar11->DependentChangeSources).ArrayNum;
  piVar1 = &(pUVar11->DependentChangeSources).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar16->AllocatorInstance,piVar1);
  }
  (pUVar11->DependentChangeSources).ArrayNum = iVar8 + 1;
  *(undefined8 **)((pTVar16->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_1e0;
  local_168 = &local_1c0;
  local_1e0 = (undefined8 *)0x0;
  local_170 = UE::Core::Private::Function::
              TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_6>,void,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float>
              ::Call;
  local_1c0 = this;
  EnumerateValidIntervals
            (this,(TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float)>
                   *)&local_170);
  pUVar11 = (this->StateTarget).field0_0x0.DebugPtr;
  pTVar16 = &pUVar11->DependentChangeSources;
  puVar12 = ::operator_new(0x10);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7FIntervalGizmoChangeBroadcaster__6B_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[1] = 0;
    local_1b8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 1),(FObjectPtr)&local_1b8);
    puVar15 = puVar12;
  }
  pFVar3 = (pTVar16->AllocatorInstance).Data;
  local_1d8 = puVar15;
  if (((pFVar3 <= (FScriptContainerElement *)&local_1d8) &&
      ((FScriptContainerElement *)&local_1d8 <
       pFVar3 + (longlong)(pUVar11->DependentChangeSources).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (pUVar11->DependentChangeSources).ArrayNum;
  piVar1 = &(pUVar11->DependentChangeSources).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar16->AllocatorInstance,piVar1);
  }
  (pUVar11->DependentChangeSources).ArrayNum = iVar8 + 1;
  *(undefined8 **)((pTVar16->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_1d8;
  pUVar13 = UGizmoComponentAxisSource::Construct(this_00,0,true,(UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UGizmoComponentAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->AxisXSource).field0_0x0.DebugPtr = pUVar13;
  pUVar13 = UGizmoComponentAxisSource::Construct(this_00,1,true,(UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UGizmoComponentAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->AxisYSource).field0_0x0.DebugPtr = pUVar13;
  pUVar13 = UGizmoComponentAxisSource::Construct(this_00,2,true,(UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UGizmoComponentAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  local_158 = local_1e5;
  (this->AxisZSource).field0_0x0.DebugPtr = pUVar13;
  local_160 = UE::Core::Private::Function::
              TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_7>,void,UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float>
              ::Call;
  EnumerateAllIntervals
            (this,(TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float)>
                   *)&local_160);
  local_138 = &local_150;
  local_140 = UE::Core::Private::Function::
              TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_8>,void,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float>
              ::Call;
  local_150 = this;
  local_148 = this_00;
  EnumerateValidIntervals
            (this,(TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float)>
                   *)&local_140);
  return;
}

// SetActiveTarget @ 1496bc450

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
UIntervalGizmo::SetActiveTarget
          (UIntervalGizmo *this,UTransformProxy *param_1,UGizmoLocalFloatParameterSource *param_2,
          UGizmoLocalFloatParameterSource *param_3,UGizmoLocalFloatParameterSource *param_4,
          IToolContextTransactionProvider *param_5)

{
  undefined8 local_48;
  undefined8 uStack_40;
  UGizmoLocalFloatParameterSource *local_38;
  undefined8 local_30;
  UGizmoLocalFloatParameterSource *local_28;
  UGizmoLocalFloatParameterSource *local_20;
  undefined4 local_18;
  
  local_38 = param_4;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = 0;
  local_18 = 2;
  local_28 = param_2;
  local_20 = param_3;
  (**(code **)(this->_padding_ + 0x308))(0,param_1,&local_48,param_5);
  return;
}

// SetGizmoActorBuilder @ 1496bd5e0

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
UIntervalGizmo::SetGizmoActorBuilder
          (UIntervalGizmo *this,TSharedPtr<FIntervalGizmoActorFactory,1> *param_1)

{
  FIntervalGizmoActorFactory *pFVar1;
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

// SetUpdateCoordSystemFunction @ 1496c0970

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
UIntervalGizmo::SetUpdateCoordSystemFunction
          (UIntervalGizmo *this,
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

// SetUpdateHoverFunction @ 1496c0a70

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
UIntervalGizmo::SetUpdateHoverFunction
          (UIntervalGizmo *this,TFunction<void___cdecl(UPrimitiveComponent_*,bool)> *param_1)

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

// SetVisibility @ 1496c0d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UIntervalGizmo::SetVisibility(UIntervalGizmo *this,bool param_1)

{
  AIntervalGizmoActor *pAVar1;
  
  pAVar1 = (this->GizmoActor).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001496c0d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pAVar1->_padding_ + 0x368))(pAVar1,!param_1);
  return;
}

// SetWorld @ 1496c0d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UIntervalGizmo::SetWorld(UIntervalGizmo *this,UWorld *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->World).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->World).field0_0x0.DebugPtr = param_1;
  return;
}

// SetWorldAlignmentFunctions @ 1496c0e30

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
UIntervalGizmo::SetWorldAlignmentFunctions
          (UIntervalGizmo *this,TUniqueFunction<bool___cdecl(void)> *param_1,
          TUniqueFunction<bool___cdecl(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&)>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  UClass *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  uVar5 = *(undefined8 *)&this->ShouldAlignDestination;
  uVar6 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x8;
  uVar7 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x10;
  uVar8 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x18;
  uVar9 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x20;
  uVar10 = *(undefined8 *)&(this->ShouldAlignDestination).field_0x28;
  *(undefined8 *)&this->ShouldAlignDestination = *(undefined8 *)param_1;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x18 = uVar4;
  uVar4 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->ShouldAlignDestination).field_0x28 = uVar4;
  *(undefined8 *)param_1 = uVar5;
  *(undefined8 *)&param_1->field_0x8 = uVar6;
  *(undefined8 *)&param_1->field_0x10 = uVar7;
  *(undefined8 *)&param_1->field_0x18 = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar9;
  *(undefined8 *)&param_1->field_0x28 = uVar10;
  uVar6 = *(undefined8 *)&param_2->field_0x8;
  uVar7 = *(undefined8 *)&this->DestinationAlignmentRayCaster;
  uVar8 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x8;
  uVar9 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x10;
  uVar10 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x18;
  uVar4 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x20;
  uVar5 = *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x28;
  *(undefined8 *)&this->DestinationAlignmentRayCaster = *(undefined8 *)param_2;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->DestinationAlignmentRayCaster).field_0x28 = uVar6;
  *(undefined8 *)param_2 = uVar7;
  *(undefined8 *)&param_2->field_0x8 = uVar8;
  *(undefined8 *)&param_2->field_0x10 = uVar9;
  *(undefined8 *)&param_2->field_0x18 = uVar10;
  *(undefined8 *)&param_2->field_0x20 = uVar4;
  *(undefined8 *)&param_2->field_0x28 = uVar5;
  pFVar14 = (this->ActiveGizmos).AllocatorInstance.Data;
  iVar2 = (this->ActiveGizmos).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar2 * 8;
  do {
    if ((this->ActiveGizmos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UInteractiveGizmo>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_88);
    }
    if (pFVar14 == pFVar1) {
      return;
    }
    lVar13 = *(longlong *)pFVar14;
    if (lVar13 == 0) {
LAB_1496c0f49:
      lVar13 = 0;
    }
    else {
      pUVar11 = Z_Construct_UClass_UAxisPositionGizmo_NoRegister();
      iVar3 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          != &pUVar11->_padding_)) goto LAB_1496c0f49;
    }
    if (lVar13 != 0) {
      local_78 = *(longlong *)(lVar13 + 0xa0);
      uVar5 = *(undefined8 *)(lVar13 + 0xa8);
      local_68 = *(longlong *)(lVar13 + 0xb0);
      uStack_60 = *(undefined8 *)(lVar13 + 0xb8);
      uVar4 = *(undefined8 *)(lVar13 + 0xc0);
      plStack_50 = *(longlong **)(lVar13 + 200);
      *(code **)(lVar13 + 0xa0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_1>,bool>::
           Call;
      *(undefined8 *)(lVar13 + 0xa8) = uStack_70;
      *(undefined4 *)(lVar13 + 0xb0) = 0x51e9ef28;
      *(undefined4 *)(lVar13 + 0xb4) = 1;
      *(UIntervalGizmo **)(lVar13 + 0xb8) = this;
      *(undefined4 *)(lVar13 + 0xc0) = (undefined4)local_58;
      *(undefined4 *)(lVar13 + 0xc4) = local_58._4_4_;
      *(undefined4 *)(lVar13 + 200) = 0;
      *(undefined4 *)(lVar13 + 0xcc) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      local_78 = *(longlong *)(lVar13 + 0xd0);
      uVar5 = *(undefined8 *)(lVar13 + 0xd8);
      local_68 = *(longlong *)(lVar13 + 0xe0);
      uStack_60 = *(undefined8 *)(lVar13 + 0xe8);
      uVar4 = *(undefined8 *)(lVar13 + 0xf0);
      plStack_50 = *(longlong **)(lVar13 + 0xf8);
      *(code **)(lVar13 + 0xd0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_2>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
           ::Call;
      *(undefined8 *)(lVar13 + 0xd8) = uStack_70;
      *(undefined4 *)(lVar13 + 0xe0) = 0x51e9ef48;
      *(undefined4 *)(lVar13 + 0xe4) = 1;
      *(UIntervalGizmo **)(lVar13 + 0xe8) = this;
      *(undefined4 *)(lVar13 + 0xf0) = (undefined4)local_58;
      *(undefined4 *)(lVar13 + 0xf4) = local_58._4_4_;
      *(undefined4 *)(lVar13 + 0xf8) = 0;
      *(undefined4 *)(lVar13 + 0xfc) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      *(undefined1 *)(lVar13 + 0x100) = 0;
    }
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// Setup @ 1496c1990

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

void __thiscall UIntervalGizmo::Setup(UIntervalGizmo *this)

{
  FIntervalGizmoActorFactory *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  AIntervalGizmoActor *pAVar6;
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
  *(undefined4 *)&(this->UpdateHoverFunction).field_0x18 = 0x49673280;
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
  *(undefined4 *)&(this->UpdateCoordSystemFunction).field_0x18 = 0x49673380;
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
  if ((this->GizmoActorBuilder).Object == (FIntervalGizmoActorFactory *)0x0) {
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
  pAVar6 = (AIntervalGizmoActor *)
           (**(code **)pFVar1->_padding_)(pFVar1,(this->World).field0_0x0.DebugPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (AIntervalGizmoActor *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pAVar6);
  }
  (this->GizmoActor).field0_0x0.DebugPtr = pAVar6;
  return;
}

// Shutdown @ 1496c2620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UIntervalGizmo::Shutdown(UIntervalGizmo *this)

{
  AIntervalGizmoActor *this_00;
  
  (**(code **)(this->_padding_ + 0x338))();
  this_00 = (this->GizmoActor).field0_0x0.DebugPtr;
  if (this_00 != (AIntervalGizmoActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->GizmoActor).field0_0x0.DebugPtr = (AIntervalGizmoActor *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496c265e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this);
  return;
}

// StaticRegisterNativesUIntervalGizmo @ 1496c2c90

void __cdecl UIntervalGizmo::StaticRegisterNativesUIntervalGizmo(void)

{
  return;
}

// Tick @ 1496c2ec0

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

void __thiscall UIntervalGizmo::Tick(UIntervalGizmo *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UTransformProxy *pUVar3;
  USceneComponent *this_00;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_108 [32];
  byte local_d8 [8];
  undefined1 local_d0 [8];
  UIntervalGizmo *local_c8;
  undefined8 local_c0;
  code *local_b8;
  UIntervalGizmo **local_b0;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x328))(plVar7);
  bVar5 = (**(code **)(*plVar7 + 0x20))(plVar7);
  if ((1 < bVar5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CoordSystem == EToolContextCoordinateSystem::World || CoordSystem == EToolContextCoordinateSystem::Local"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\IntervalGizmo.cpp"
                         ,0x10f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x328))(plVar7);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  pUVar3 = (this->TransformProxy).field0_0x0.DebugPtr;
  this_00 = (USceneComponent *)((this->GizmoActor).field0_0x0.DebugPtr)->_padding_;
  (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,&local_88);
  local_88.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_88.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_88.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
  local_88.Scale3D.ZW.m128d_f64[1] = 0.0;
  USceneComponent::SetWorldTransform(this_00,&local_88,false,(FHitResult *)0x0,None);
  local_b0 = &local_c8;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UIntervalGizmo::Tick'::__l2::<lambda_1>,void,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float>
             ::Call;
  local_c8 = this;
  EnumerateValidIntervals
            (this,(TFunctionRef<void___cdecl(UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float)>
                   *)&local_b8);
  if (*(longlong *)&this->UpdateCoordSystemFunction != 0) {
    iVar2 = (this->ActiveComponents).ArrayNum;
    pFVar10 = (this->ActiveComponents).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ActiveComponents).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UPrimitiveComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_d0);
      }
      if (pFVar10 == pFVar1) break;
      local_c0 = *(undefined8 *)pFVar10;
      local_d8[0] = bVar5;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->UpdateCoordSystemFunction);
      plVar7 = *(longlong **)&(this->UpdateCoordSystemFunction).field_0x28;
      pcVar4 = *(code **)&this->UpdateCoordSystemFunction;
      plVar9 = (longlong *)&(this->UpdateCoordSystemFunction).field_0x10;
      if (plVar7 != (longlong *)0x0) {
        plVar9 = plVar7;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar4)(uVar8,&local_c0,local_d8);
      pFVar10 = pFVar10 + 8;
    }
  }
  return;
}

// __DefaultConstructor @ 1496c94c0

void __cdecl UIntervalGizmo::__DefaultConstructor(FObjectInitializer *param_1)

{
  UInteractiveGizmo *this;
  
  this = (UInteractiveGizmo *)param_1->Obj;
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    this[7].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[7]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    this[7]._padding_ = (longlong)<lambda_51_>::<lambda_invoker_cdecl>;
    if (&this[7]._padding_ != (longlong *)0x0) {
      this[7]._padding_ =
           (longlong)
           UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    }
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[8]._padding_ = (longlong)<lambda_52_>::<lambda_invoker_cdecl>;
    if (&this[8]._padding_ != (longlong *)0x0) {
      this[8]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined4 *)&this[8].InputBehaviors.field0_0x0 = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[8].InputBehaviors.field0_0x0 + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
  }
  return;
}

// __VTableCtorCaller @ 1496ca480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UIntervalGizmo::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInteractiveGizmo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UInteractiveGizmo *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveGizmo *)0x0) {
    UInteractiveGizmo::UInteractiveGizmo(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    this[7].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[7]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    this[7]._padding_ = (longlong)<lambda_51_>::<lambda_invoker_cdecl>;
    if (&this[7]._padding_ != (longlong *)0x0) {
      this[7]._padding_ =
           (longlong)
           UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    }
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[8]._padding_ = (longlong)<lambda_52_>::<lambda_invoker_cdecl>;
    if (&this[8]._padding_ != (longlong *)0x0) {
      this[8]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined4 *)&this[8].InputBehaviors.field0_0x0 = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[8].InputBehaviors.field0_0x0 + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    *(undefined4 *)&this[9]._padding_ = 0x7f7fffff;
    *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0xff7fffff;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

