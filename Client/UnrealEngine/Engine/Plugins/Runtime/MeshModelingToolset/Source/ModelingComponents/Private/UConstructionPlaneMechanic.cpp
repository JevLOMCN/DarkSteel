// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 17

// StaticClass @ 14caad290

UClass * __cdecl UConstructionPlaneMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstructionPlaneMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ConstructionPlaneMechanic",
               &Z_Registration_Info_UClass_UConstructionPlaneMechanic.InnerSingleton,
               StaticRegisterNativesUConstructionPlaneMechanic,0xf0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UConstructionPlaneMechanic>,
               InternalVTableHelperCtorCaller<UConstructionPlaneMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstructionPlaneMechanic.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cab0c10

bool __cdecl UConstructionPlaneMechanic::<lambda_39_>::<lambda_invoker_cdecl>(void)

{
  return true;
}

// UConstructionPlaneMechanic @ 14cacc970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UConstructionPlaneMechanic * __thiscall
UConstructionPlaneMechanic::UConstructionPlaneMechanic
          (UConstructionPlaneMechanic *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  *(undefined ***)this = &___7UConstructionPlaneMechanic__6B_;
  *(undefined8 *)&this->CanUpdatePlaneFunc = 0;
  *(undefined8 *)&(this->CanUpdatePlaneFunc).field_0x28 = 0;
  *(undefined ***)&(this->CanUpdatePlaneFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->CanUpdatePlaneFunc).field_0x18;
  *(code **)puVar1 = <lambda_39_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CanUpdatePlaneFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  this->bShowGrid = true;
  (this->Plane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Plane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.X = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Plane).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Plane).Origin.field0_0x0._s_0.Y = (double)uVar2;
  (this->Plane).Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Plane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&this->OnPlaneChanged = 0;
  *(undefined8 *)&(this->OnPlaneChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaneChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlaneChanged).field_0x18 = 2;
  (this->PlaneTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->PlaneTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->SetPlaneCtrlClickBehaviorTarget).Ptr = (FSelectClickedAction *)0x0;
  (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  (this->MiddleClickToSetGizmoBehavior).field0_0x0.DebugPtr = (ULocalSingleClickInputBehavior *)0x0;
  return this;
}

// UConstructionPlaneMechanic @ 14cacca70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UConstructionPlaneMechanic * __thiscall
UConstructionPlaneMechanic::UConstructionPlaneMechanic(UConstructionPlaneMechanic *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined ***)this = &___7UConstructionPlaneMechanic__6B_;
  *(undefined8 *)&this->CanUpdatePlaneFunc = 0;
  *(undefined8 *)&(this->CanUpdatePlaneFunc).field_0x28 = 0;
  *(undefined ***)&(this->CanUpdatePlaneFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->CanUpdatePlaneFunc).field_0x18;
  *(code **)puVar1 = <lambda_39_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CanUpdatePlaneFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  this->bShowGrid = true;
  (this->Plane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Plane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.X = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Plane).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Plane).Origin.field0_0x0._s_0.Y = (double)uVar2;
  (this->Plane).Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Plane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&this->OnPlaneChanged = 0;
  *(undefined8 *)&(this->OnPlaneChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlaneChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnPlaneChanged).field_0x18 = 2;
  (this->PlaneTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->PlaneTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->SetPlaneCtrlClickBehaviorTarget).Ptr = (FSelectClickedAction *)0x0;
  (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  (this->MiddleClickToSetGizmoBehavior).field0_0x0.DebugPtr = (ULocalSingleClickInputBehavior *)0x0;
  return this;
}

// ~UConstructionPlaneMechanic @ 14cad1f90

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
UConstructionPlaneMechanic::~UConstructionPlaneMechanic(UConstructionPlaneMechanic *this)

{
  FSelectClickedAction *pFVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7UConstructionPlaneMechanic__6B_;
  pFVar1 = (this->SetPlaneCtrlClickBehaviorTarget).Ptr;
  if (pFVar1 != (FSelectClickedAction *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlaneChanged).field_0x8,*(int *)&(this->OnPlaneChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnPlaneChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlaneChanged);
  if (*(longlong *)&this->CanUpdatePlaneFunc != 0) {
    plVar3 = *(longlong **)&(this->CanUpdatePlaneFunc).field_0x28;
    plVar4 = (longlong *)&(this->CanUpdatePlaneFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cadb610

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
`UConstructionPlaneMechanic::Initialize'::__l2::<lambda_4>::operator()
          (void *this,FInputDeviceRay *param_1)

{
  bool bVar1;
  undefined1 auStackY_c8 [32];
  TVector<double>_u_0 local_98;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar1 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                    ((TFrame3<double> *)(*(longlong *)this + 0x68),(TVector<double> *)param_1,
                     &(param_1->WorldRay).Direction,2,(TVector<double> *)&local_98._s_0);
  if (bVar1) {
    UCombinedTransformGizmo::GetGizmoTransform
              (*(UCombinedTransformGizmo **)(*(longlong *)this + 0xc0),&local_78);
    local_78.Translation.XY.m128d_f64[0]._0_4_ = local_98._0_4_;
    local_78.Translation.XY.m128d_f64[0]._4_4_ = local_98._4_4_;
    local_78.Translation.XY.m128d_f64[1]._0_4_ = local_98._8_4_;
    local_78.Translation.XY.m128d_f64[1]._4_4_ = local_98._12_4_;
    local_78.Translation.ZW.m128d_f64[0] = local_98._s_0.Z;
    local_78.Translation.ZW.m128d_f64[1] = 0.0;
    (**(code **)(**(longlong **)(*(longlong *)this + 0xc0) + 0x340))
              (*(longlong **)(*(longlong *)this + 0xc0),&local_78,1);
  }
  return;
}

// GetPrivateStaticClass @ 14cb12010

UClass * __cdecl UConstructionPlaneMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstructionPlaneMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ConstructionPlaneMechanic",
               &Z_Registration_Info_UClass_UConstructionPlaneMechanic.InnerSingleton,
               StaticRegisterNativesUConstructionPlaneMechanic,0xf0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UConstructionPlaneMechanic>,
               InternalVTableHelperCtorCaller<UConstructionPlaneMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstructionPlaneMechanic.InnerSingleton;
}

// Initialize @ 14cb1bf60

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UConstructionPlaneMechanic::Initialize
          (UConstructionPlaneMechanic *this,UWorld *param_1,TFrame3<double> *param_2)

{
  TUniquePtr<FSelectClickedAction,TDefaultDelete<FSelectClickedAction>_> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  UInteractiveTool *pUVar7;
  UInteractiveToolManager *pUVar8;
  UInteractiveGizmoManager *pUVar9;
  UTransformProxy *pUVar10;
  UCombinedTransformGizmo *pUVar11;
  longlong lVar12;
  FSelectClickedAction *pFVar13;
  undefined8 *puVar14;
  USceneSnappingManager *pUVar15;
  UObject *pUVar16;
  USingleClickInputBehavior *pUVar17;
  UClass *pUVar18;
  ULocalSingleClickInputBehavior *pUVar19;
  FSelectClickedAction *pFVar20;
  double *pdVar21;
  FObjectInstancingGraph **ppFVar22;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  undefined1 local_e8 [40];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FObjectInstancingGraph *local_b8;
  UPackage *pUStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double *local_80;
  undefined1 local_68 [16];
  FObjectInstancingGraph *local_58;
  code *pcStack_50;
  longlong local_48;
  FObjectInstancingGraph **ppFStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  dVar6 = (param_2->Origin).field0_0x0._s_0.Y;
  (this->Plane).Origin.field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
  (this->Plane).Origin.field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_2->Rotation).field0_0x0._s_0.X;
  (this->Plane).Origin.field0_0x0._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
  (this->Plane).Rotation.field0_0x0._s_0.X = dVar6;
  dVar6 = (param_2->Rotation).field0_0x0._s_0.Z;
  (this->Plane).Rotation.field0_0x0._s_0.Y = (param_2->Rotation).field0_0x0._s_0.Y;
  (this->Plane).Rotation.field0_0x0._s_0.Z = dVar6;
  (this->Plane).Rotation.field0_0x0._s_0.W = (param_2->Rotation).field0_0x0._s_0.W;
  pUVar7 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar8 = (UInteractiveToolManager *)(**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
  pUVar9 = UInteractiveToolManager::GetPairedGizmoManager(pUVar8);
  pUVar10 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pFVar20 = (FSelectClickedAction *)0x0;
  (this->PlaneTransformProxy).field0_0x0.DebugPtr = pUVar10;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  pUVar11 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar9,StandardTranslateRotate,this,(FString *)local_68);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->PlaneTransformGizmo).field0_0x0.DebugPtr = pUVar11;
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddUObject<UConstructionPlaneMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&((this->PlaneTransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
             (UConstructionPlaneMechanic *)local_68,(pmf_987fd5c0)this);
  pUVar11 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(*(longlong *)pUVar11 + 0x330);
  pUVar7 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  lVar12 = (**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
  pFVar13 = (FSelectClickedAction *)(lVar12 + 0x28);
  if (lVar12 == 0) {
    pFVar13 = pFVar20;
  }
  (*pcVar2)(pUVar11,(this->PlaneTransformProxy).field0_0x0.DebugPtr,pFVar13);
  local_e8._32_4_ = *(undefined4 *)&(this->Plane).Origin.field0_0x0;
  local_e8._36_4_ = *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 4);
  uStack_c0 = *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 8);
  uStack_bc = *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 0xc);
  local_e8._0_8_ = (this->Plane).Rotation.field0_0x0._s_0.X;
  local_e8._8_8_ = (this->Plane).Rotation.field0_0x0._s_0.Y;
  local_e8._16_8_ = (this->Plane).Rotation.field0_0x0._s_0.Z;
  local_e8._24_8_ = (this->Plane).Rotation.field0_0x0._s_0.W;
  local_b8 = (FObjectInstancingGraph *)(this->Plane).Origin.field0_0x0._s_0.Z;
  pUStack_b0 = (UPackage *)0x0;
  local_a8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_a0 = _UNK_150689688;
  local_98 = ___xmm_00000000000000003ff0000000000000;
  dStack_90 = _UNK_150689518;
  local_58 = local_b8;
  UCombinedTransformGizmo::ReinitializeGizmoTransform
            ((this->PlaneTransformGizmo).field0_0x0.DebugPtr,(TTransform<double> *)local_e8,true);
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 != (FSelectClickedAction *)0x0) {
    memset(pFVar13,0,0xb0);
    *(undefined ***)pFVar13 = &___7FSelectClickedAction__6B_;
    pFVar20 = pFVar13;
  }
  pTVar1 = &this->SetPlaneCtrlClickBehaviorTarget;
  if (pTVar1 == (TUniquePtr<FSelectClickedAction,TDefaultDelete<FSelectClickedAction>_> *)local_f8)
  {
    if (pFVar20 == (FSelectClickedAction *)0x0) goto LAB_14cb1c188;
    puVar14 = *(undefined8 **)pFVar20;
  }
  else {
    pFVar13 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar20;
    if (pFVar13 == (FSelectClickedAction *)0x0) goto LAB_14cb1c188;
    puVar14 = *(undefined8 **)pFVar13;
    pFVar20 = pFVar13;
  }
  (*(code *)*puVar14)(pFVar20,1);
LAB_14cb1c188:
  pUVar7 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar8 = (UInteractiveToolManager *)(**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
  pUVar15 = USceneSnappingManager::Find(pUVar8);
  pTVar1->Ptr->SnapManager = pUVar15;
  pFVar20 = pTVar1->Ptr;
  local_68._0_8_ = *(undefined8 *)&pFVar20->OnClickedPositionFunc;
  uVar4 = *(undefined8 *)&(pFVar20->OnClickedPositionFunc).field_0x8;
  local_58 = *(FObjectInstancingGraph **)&(pFVar20->OnClickedPositionFunc).field_0x10;
  pcStack_50 = *(code **)&(pFVar20->OnClickedPositionFunc).field_0x18;
  uVar3 = *(undefined8 *)&(pFVar20->OnClickedPositionFunc).field_0x20;
  ppFStack_40 = *(FObjectInstancingGraph ***)&(pFVar20->OnClickedPositionFunc).field_0x28;
  *(code **)&pFVar20->OnClickedPositionFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UConstructionPlaneMechanic::Initialize'::__l2::<lambda_1>,void,FHitResult_const_&>
       ::Call;
  *(undefined8 *)&(pFVar20->OnClickedPositionFunc).field_0x8 = local_68._8_8_;
  *(undefined ***)&(pFVar20->OnClickedPositionFunc).field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UConstructionPlaneMechanic::Initialize'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(UConstructionPlaneMechanic **)&(pFVar20->OnClickedPositionFunc).field_0x18 = this;
  *(longlong *)&(pFVar20->OnClickedPositionFunc).field_0x20 = local_48;
  *(undefined8 *)&(pFVar20->OnClickedPositionFunc).field_0x28 = 0;
  local_68._8_8_ = uVar4;
  local_48 = uVar3;
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    ppFVar22 = &local_58;
    if (ppFStack_40 != (FObjectInstancingGraph **)0x0) {
      ppFVar22 = ppFStack_40;
    }
    (**(code **)&(*ppFVar22)->InstancingOptions)();
  }
  pFVar20 = pTVar1->Ptr;
  local_68._0_8_ = *(undefined8 *)&pFVar20->ExternalCanClickPredicate;
  uVar4 = *(undefined8 *)&(pFVar20->ExternalCanClickPredicate).field_0x8;
  local_58 = *(FObjectInstancingGraph **)&(pFVar20->ExternalCanClickPredicate).field_0x10;
  pcStack_50 = *(code **)&(pFVar20->ExternalCanClickPredicate).field_0x18;
  uVar3 = *(undefined8 *)&(pFVar20->ExternalCanClickPredicate).field_0x20;
  ppFStack_40 = *(FObjectInstancingGraph ***)&(pFVar20->ExternalCanClickPredicate).field_0x28;
  *(code **)&pFVar20->ExternalCanClickPredicate =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UConstructionPlaneMechanic::Initialize'::__l2::<lambda_2>,bool>::Call;
  *(undefined8 *)&(pFVar20->ExternalCanClickPredicate).field_0x8 = local_68._8_8_;
  *(undefined ***)&(pFVar20->ExternalCanClickPredicate).field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UConstructionPlaneMechanic::Initialize'::`2'::<lambda_2>,1,0>::
        _vftable_;
  *(UConstructionPlaneMechanic **)&(pFVar20->ExternalCanClickPredicate).field_0x18 = this;
  *(longlong *)&(pFVar20->ExternalCanClickPredicate).field_0x20 = local_48;
  *(undefined8 *)&(pFVar20->ExternalCanClickPredicate).field_0x28 = 0;
  local_68._8_8_ = uVar4;
  local_48 = uVar3;
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    ppFVar22 = &local_58;
    if (ppFStack_40 != (FObjectInstancingGraph **)0x0) {
      ppFVar22 = ppFStack_40;
    }
    (**(code **)&(*ppFVar22)->InstancingOptions)();
  }
  pUVar16 = GetTransientPackageAsObject();
  pUVar17 = NewObject<USingleClickInputBehavior>(pUVar16);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (USingleClickInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr = pUVar17;
  local_68._0_8_ = *(undefined8 *)&pUVar17->ModifierCheckFunc;
  uVar4 = *(undefined8 *)&(pUVar17->ModifierCheckFunc).field_0x8;
  local_58 = *(FObjectInstancingGraph **)&(pUVar17->ModifierCheckFunc).field_0x10;
  pcStack_50 = *(code **)&(pUVar17->ModifierCheckFunc).field_0x18;
  uVar3 = *(undefined8 *)&(pUVar17->ModifierCheckFunc).field_0x20;
  ppFStack_40 = *(FObjectInstancingGraph ***)&(pUVar17->ModifierCheckFunc).field_0x28;
  *(code **)&pUVar17->ModifierCheckFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
       ::Call;
  *(undefined8 *)&(pUVar17->ModifierCheckFunc).field_0x8 = local_68._8_8_;
  *(undefined ***)&(pUVar17->ModifierCheckFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&(pUVar17->ModifierCheckFunc).field_0x18 = FInputDeviceState::IsCtrlKeyDown;
  *(longlong *)&(pUVar17->ModifierCheckFunc).field_0x20 = local_48;
  *(undefined8 *)&(pUVar17->ModifierCheckFunc).field_0x28 = 0;
  local_68._8_8_ = uVar4;
  local_48 = uVar3;
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    ppFVar22 = &local_58;
    if (ppFStack_40 != (FObjectInstancingGraph **)0x0) {
      ppFVar22 = ppFStack_40;
    }
    (**(code **)&(*ppFVar22)->InstancingOptions)();
  }
  ppFStack_40 = (FObjectInstancingGraph **)0x0;
  local_58 = (FObjectInstancingGraph *)
             &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pcStack_50 = FInputDeviceState::IsShiftKeyDown;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
       ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr)->Modifiers,1,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_68);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    ppFVar22 = &local_58;
    if (ppFStack_40 != (FObjectInstancingGraph **)0x0) {
      ppFVar22 = ppFStack_40;
    }
    (**(code **)&(*ppFVar22)->InstancingOptions)();
  }
  pUVar17 = (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr;
  (**(code **)(pUVar17->_padding_ + 0x378))(pUVar17,pTVar1->Ptr);
  pUVar7 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  (**(code **)(pUVar7->_padding_ + 0x2f8))
            (pUVar7,(this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr,0);
  pUVar16 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar16,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar18 = Z_Construct_UClass_ULocalSingleClickInputBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_e8,pUVar18);
  local_e8._8_8_ = pUVar16;
  pUVar19 = (ULocalSingleClickInputBehavior *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
  if (local_a8 != 0.0) {
    pdVar21 = &local_98;
    if (local_80 != (double *)0x0) {
      pdVar21 = local_80;
    }
    (**(code **)((longlong)*pdVar21 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (ULocalSingleClickInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->MiddleClickToSetGizmoBehavior).field0_0x0.DebugPtr = pUVar19;
  local_68._0_8_ = *(undefined8 *)&pUVar19->IsHitByClickFunc;
  uVar4 = *(undefined8 *)&(pUVar19->IsHitByClickFunc).field_0x8;
  local_58 = *(FObjectInstancingGraph **)&(pUVar19->IsHitByClickFunc).field_0x10;
  pcStack_50 = *(code **)&(pUVar19->IsHitByClickFunc).field_0x18;
  uVar3 = *(undefined8 *)&(pUVar19->IsHitByClickFunc).field_0x20;
  ppFStack_40 = *(FObjectInstancingGraph ***)&(pUVar19->IsHitByClickFunc).field_0x28;
  *(code **)&pUVar19->IsHitByClickFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UConstructionPlaneMechanic::Initialize'::__l2::<lambda_3>,FInputRayHit,FInputDeviceRay_const_&>
       ::Call;
  *(undefined8 *)&(pUVar19->IsHitByClickFunc).field_0x8 = local_68._8_8_;
  *(undefined ***)&(pUVar19->IsHitByClickFunc).field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UConstructionPlaneMechanic::Initialize'::`2'::<lambda_3>,1,0>::
        _vftable_;
  *(UConstructionPlaneMechanic **)&(pUVar19->IsHitByClickFunc).field_0x18 = this;
  *(longlong *)&(pUVar19->IsHitByClickFunc).field_0x20 = local_48;
  *(undefined8 *)&(pUVar19->IsHitByClickFunc).field_0x28 = 0;
  local_68._8_8_ = uVar4;
  local_48 = uVar3;
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    ppFVar22 = &local_58;
    if (ppFStack_40 != (FObjectInstancingGraph **)0x0) {
      ppFVar22 = ppFStack_40;
    }
    (**(code **)&(*ppFVar22)->InstancingOptions)();
  }
  pUVar19 = (this->MiddleClickToSetGizmoBehavior).field0_0x0.DebugPtr;
  local_68._0_8_ = *(undefined8 *)&pUVar19->OnClickedFunc;
  lVar5 = *(longlong *)&(pUVar19->OnClickedFunc).field_0x8;
  local_58 = *(FObjectInstancingGraph **)&(pUVar19->OnClickedFunc).field_0x10;
  pcStack_50 = *(code **)&(pUVar19->OnClickedFunc).field_0x18;
  lVar12 = *(longlong *)&(pUVar19->OnClickedFunc).field_0x20;
  ppFStack_40 = *(FObjectInstancingGraph ***)&(pUVar19->OnClickedFunc).field_0x28;
  *(code **)&pUVar19->OnClickedFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UConstructionPlaneMechanic::Initialize'::__l2::<lambda_4>,void,FInputDeviceRay_const_&>
       ::Call;
  *(undefined8 *)&(pUVar19->OnClickedFunc).field_0x8 = local_68._8_8_;
  *(undefined ***)&(pUVar19->OnClickedFunc).field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UConstructionPlaneMechanic::Initialize'::`2'::<lambda_4>,1,0>::
        _vftable_;
  *(UConstructionPlaneMechanic **)&(pUVar19->OnClickedFunc).field_0x18 = this;
  *(longlong *)&(pUVar19->OnClickedFunc).field_0x20 = local_48;
  *(undefined8 *)&(pUVar19->OnClickedFunc).field_0x28 = 0;
  local_68._8_8_ = lVar5;
  local_48 = lVar12;
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    ppFVar22 = &local_58;
    if (ppFStack_40 != (FObjectInstancingGraph **)0x0) {
      ppFVar22 = ppFStack_40;
    }
    (**(code **)&(*ppFVar22)->InstancingOptions)();
  }
  pUVar19 = (this->MiddleClickToSetGizmoBehavior).field0_0x0.DebugPtr;
  local_68._0_8_ = pUVar19->_padding_;
  lVar5 = pUVar19->_padding_;
  local_58 = (FObjectInstancingGraph *)pUVar19->_padding_;
  pcStack_50 = (code *)pUVar19->_padding_;
  lVar12 = pUVar19->_padding_;
  ppFStack_40 = (FObjectInstancingGraph **)pUVar19->_padding_;
  pUVar19->_padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
       ::Call;
  pUVar19->_padding_ = local_68._8_8_;
  pUVar19->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pUVar19->_padding_ = (longlong)FInputDeviceState::IsCtrlKeyDown;
  pUVar19->_padding_ = local_48;
  pUVar19->_padding_ = 0;
  local_68._8_8_ = lVar5;
  local_48 = lVar12;
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    ppFVar22 = &local_58;
    if (ppFStack_40 != (FObjectInstancingGraph **)0x0) {
      ppFVar22 = ppFStack_40;
    }
    (**(code **)&(*ppFVar22)->InstancingOptions)();
  }
  (**(code **)(((this->MiddleClickToSetGizmoBehavior).field0_0x0.DebugPtr)->_padding_ + 0x360))();
  (**(code **)(((this->MiddleClickToSetGizmoBehavior).field0_0x0.DebugPtr)->_padding_ + 0x388))();
  pUVar7 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  (**(code **)(pUVar7->_padding_ + 0x2f8))
            (pUVar7,(this->MiddleClickToSetGizmoBehavior).field0_0x0.DebugPtr,0);
  return;
}

// Render @ 14cb2fc50

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
UConstructionPlaneMechanic::Render(UConstructionPlaneMechanic *this,IToolsContextRenderAPI *param_1)

{
  char cVar1;
  UObject *pUVar2;
  UTransformProxy *pUVar3;
  undefined1 auVar4 [16];
  double dVar5;
  int iVar6;
  UClass *this_00;
  longlong lVar7;
  FPrimitiveDrawInterface *pFVar8;
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auStackY_268 [32];
  TArray<FColor,TSizedDefaultAllocator<32>_> local_1f0;
  TVector<double>_u_0 local_1e0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178 [2];
  float local_138;
  TTransform<double> local_118;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_00 = UModelingComponentsEditorSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((this->bShowGrid != false) && (pUVar2 != (UObject *)0x0)) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1,local_178);
    pUVar3 = (this->PlaneTransformProxy).field0_0x0.DebugPtr;
    fVar11 = local_138 * __real_3c360b61;
    auVar10 = *(undefined1 (*) [16])&(this->Plane).Rotation.field0_0x0;
    dVar9 = (this->Plane).Rotation.field0_0x0._s_0.Z;
    dVar5 = (this->Plane).Rotation.field0_0x0._s_0.W;
    lVar7 = (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,local_b8);
    iVar6 = *(int *)&pUVar2[1].field_0x14;
    fVar11 = fVar11 * __real_3f400000;
    local_1e0._0_4_ = *(undefined4 *)(lVar7 + 0x20);
    local_1e0._4_4_ = *(undefined4 *)(lVar7 + 0x24);
    local_1e0._8_4_ = *(undefined4 *)(lVar7 + 0x28);
    local_1e0._12_4_ = *(undefined4 *)(lVar7 + 0x2c);
    local_1e0._s_0.Z = *(double *)(lVar7 + 0x30);
    local_1c8 = auVar10;
    local_1b8 = dVar9;
    dStack_1b0 = dVar5;
    pFVar8 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
    cVar1 = pUVar2[1].field_0x10;
    local_118.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_118.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_118.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_118.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_118.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_118.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    if (cVar1 == '\0') {
      MeshDebugDraw::DrawSimpleGrid
                ((TFrame3<double> *)&local_1e0._s_0,iVar6,(double)*(float *)&pUVar2[1].field_0x18,
                 fVar11,(FColor)0x20808080,false,pFVar8,&local_118);
    }
    else if (cVar1 == '\x01') {
      dVar9 = (double)CONCAT44(local_1e0._4_4_,local_1e0._0_4_) - (double)local_178[0]._0_8_;
      dVar5 = (double)CONCAT44(local_1e0._12_4_,local_1e0._8_4_) - (double)local_178[0]._8_8_;
      local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.ArrayNum = 0;
      local_1f0.ArrayMax = 0;
      local_1a8._s_0.Z = 0.0;
      local_190._s_0.Z = __real_8000000000000000;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar5 * dVar5 + dVar9 * dVar9 +
                     (local_1e0._s_0.Z - (double)local_178[0]._16_8_) *
                     (local_1e0._s_0.Z - (double)local_178[0]._16_8_);
      auVar10 = sqrtpd(auVar10,auVar4);
      dVar9 = auVar10._0_8_;
      local_190._0_4_ = auVar10._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
      local_190._4_4_ = auVar10._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
      local_190._8_4_ = auVar10._0_4_ ^ _UNK_15066df78;
      local_190._12_4_ = auVar10._4_4_ ^ _UNK_15066df7c;
      local_1a8._s_0.X = dVar9;
      local_1a8._s_0.Y = dVar9;
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
      local_1f0.ArrayNum = iVar6 + 1;
      *(undefined4 *)(local_1f0.AllocatorInstance.Data + (longlong)iVar6 * 4) = 0x20808080;
      MeshDebugDraw::DrawHierarchicalGrid
                ((double)*(float *)&pUVar2[1].field_0x1c,
                 dVar9 / (double)*(float *)&pUVar2[1].field_0x1c,500,
                 (TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_190._s_0,2,5,
                 &local_1f0,(TFrame3<double> *)&local_1e0._s_0,fVar11,false,pFVar8,&local_118);
      if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
      }
    }
    else if (cVar1 == '\x02') {
      MeshDebugDraw::DrawSimpleFixedScreenAreaGrid
                ((FViewCameraState *)&local_178[0]._s_0,(TFrame3<double> *)&local_1e0._s_0,iVar6,
                 (double)(*(float *)&pUVar2[1].field_0x20 * __real_42b40000),fVar11,
                 (FColor)0x20808080,false,pFVar8,&local_118);
    }
  }
  return;
}

// SetDrawPlaneFromWorldPos @ 14cb36320

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
UConstructionPlaneMechanic::SetDrawPlaneFromWorldPos
          (UConstructionPlaneMechanic *this,TVector<double> *param_1,TVector<double> *param_2,
          bool param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UCombinedTransformGizmo *pUVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  UInteractiveTool *pUVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auStack_138 [32];
  TQuaternion<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_138;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->Plane).Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Plane).Origin.field0_0x0._s_0.Y = dVar2;
  (this->Plane).Origin.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if (!param_3) {
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar3 = (param_2->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Z;
    if (dVar3 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X +
        dVar2 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y +
        dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z <= ___real_3fefff2e48e90000
       ) {
      dVar17 = dVar2 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
               dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_d8 = dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
                 dVar3 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      dVar8 = dVar3 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
              dVar2 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      auVar15._0_8_ = dVar17 * dVar17;
      auVar15._8_8_ = 0;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_d8 * local_d8 + auVar15._0_8_ + dVar8 * dVar8;
      auVar16 = sqrtpd(auVar15,auVar16);
      if (auVar16._0_8_ <= 0.0) {
        local_f8._s_0.Y = 0.0;
        local_d8 = 0.0;
        dVar7 = 0.0;
      }
      else {
        dVar7 = __real_3ff0000000000000 / auVar16._0_8_;
        local_f8._s_0.Y = dVar7 * dVar17;
        local_d8 = dVar7 * local_d8;
        dVar7 = dVar7 * dVar8;
      }
      dVar8 = (param_1->field0_0x0)._s_0.X;
      dVar17 = (param_1->field0_0x0)._s_0.Y;
      pdVar1 = &(param_1->field0_0x0)._s_0.Z;
      uVar9 = *(undefined4 *)pdVar1;
      uVar10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
      dVar11 = *pdVar1;
      local_f8._s_0.X = dVar4 * local_d8 - dVar2 * dVar7;
      local_118._s_0.X = 0.0;
      local_118._s_0.W = __real_3ff0000000000000;
      uStack_e0 = dVar3 * dVar7 - dVar4 * local_f8._s_0.Y;
      local_118._s_0.Y = 0.0;
      local_118._s_0.Z = 0.0;
      local_c8._8_4_ = SUB84(dVar7,0);
      local_c8._0_8_ = dVar2 * local_f8._s_0.Y - dVar3 * local_d8;
      local_c8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_f8._s_0.Z = dVar3;
      dStack_d0 = dVar2;
      local_b8 = dVar4;
      UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
                ((TQuaternion<double> *)&local_118._s_0,(TMatrix3<double> *)&local_f8._s_0);
      local_d8 = local_118._s_0.Y;
      uStack_e0._0_4_ = SUB84(local_118._s_0.X,0);
      uStack_e0._4_4_ = (undefined4)((ulonglong)local_118._0_8_ >> 0x20);
      (this->Plane).Origin.field0_0x0._s_0.X = dVar8;
      (this->Plane).Origin.field0_0x0._s_0.Y = dVar17;
      *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 0x10) = uVar9;
      *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 0x14) = uVar10;
      *(undefined4 *)&(this->Plane).Rotation.field0_0x0 = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)&(this->Plane).Rotation.field0_0x0 + 4) = uStack_e0._4_4_;
      dStack_d0 = local_118._s_0.Z;
      local_c8._0_8_ = local_118._s_0.W;
      uStack_e0 = local_118._s_0.X;
      (this->Plane).Rotation.field0_0x0._s_0.Y = local_118._s_0.Y;
      (this->Plane).Rotation.field0_0x0._s_0.Z = local_118._s_0.Z;
      (this->Plane).Rotation.field0_0x0._s_0.W = local_118._s_0.W;
      local_f8._s_0.Z = dVar11;
    }
    else {
      (this->Plane).Rotation.field0_0x0._s_0.X = 0.0;
      (this->Plane).Rotation.field0_0x0._s_0.Y = 0.0;
      (this->Plane).Rotation.field0_0x0._s_0.Z = 0.0;
      (this->Plane).Rotation.field0_0x0._s_0.W = 1.0;
    }
  }
  pUVar5 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
  pcVar6 = *(code **)(*(longlong *)pUVar5 + 0x330);
  pUVar12 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  lVar13 = (**(code **)(pUVar12->_padding_ + 0x2d8))(pUVar12);
  lVar14 = lVar13 + 0x28;
  if (lVar13 == 0) {
    lVar14 = 0;
  }
  (*pcVar6)(pUVar5,(this->PlaneTransformProxy).field0_0x0.DebugPtr,lVar14);
  local_d8 = (this->Plane).Origin.field0_0x0._s_0.X;
  dStack_d0 = (this->Plane).Origin.field0_0x0._s_0.Y;
  pUVar5 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
  local_f8._s_0.X = (this->Plane).Rotation.field0_0x0._s_0.X;
  local_f8._s_0.Y = (this->Plane).Rotation.field0_0x0._s_0.Y;
  local_f8._s_0.Z = (this->Plane).Rotation.field0_0x0._s_0.Z;
  uStack_e0 = (this->Plane).Rotation.field0_0x0._s_0.W;
  local_a8 = ___xmm_00000000000000003ff0000000000000;
  uStack_a0 = _UNK_150689518;
  local_c8._8_8_ = 0;
  local_c8._0_8_ = (this->Plane).Origin.field0_0x0._s_0.Z;
  local_b8 = (double)___xmm_3ff00000000000003ff0000000000000;
  uStack_b0 = _UNK_150689688;
  (**(code **)(*(longlong *)pUVar5 + 0x340))(pUVar5,&local_f8,1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPlaneChanged);
  return;
}

// SetPlaneWithoutBroadcast @ 14cb37550

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
UConstructionPlaneMechanic::SetPlaneWithoutBroadcast
          (UConstructionPlaneMechanic *this,TFrame3<double> *param_1)

{
  double dVar1;
  undefined1 auStack_b8 [64];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->Plane).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->Plane).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.X;
  (this->Plane).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->Plane).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->Plane).Rotation.field0_0x0._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->Plane).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->Plane).Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  local_78.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&(this->Plane).Origin.field0_0x0;
  local_78.Translation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 4);
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 8);
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 0xc);
  local_78.Rotation.XY.m128d_f64[0] = (this->Plane).Rotation.field0_0x0._s_0.X;
  local_78.Rotation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->Plane).Rotation.field0_0x0 + 8);
  local_78.Rotation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)&(this->Plane).Rotation.field0_0x0 + 0xc);
  local_78.Rotation.ZW.m128d_f64[0] = (this->Plane).Rotation.field0_0x0._s_0.Z;
  local_78.Rotation.ZW.m128d_f64[1] = (this->Plane).Rotation.field0_0x0._s_0.W;
  local_78.Translation.ZW.m128d_f64[0] = (this->Plane).Origin.field0_0x0._s_0.Z;
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  UCombinedTransformGizmo::ReinitializeGizmoTransform
            ((this->PlaneTransformGizmo).field0_0x0.DebugPtr,&local_78,true);
  return;
}

// Setup @ 14cb39ee0

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
UConstructionPlaneMechanic::Setup(UConstructionPlaneMechanic *this,UInteractiveTool *param_1)

{
  UInteractiveTool *apUStackX_8 [4];
  
  apUStackX_8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)apUStackX_8);
  return;
}

// Shutdown @ 14cb3bd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConstructionPlaneMechanic::Shutdown(UConstructionPlaneMechanic *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UInteractiveTool *pUVar1;
  UInteractiveToolManager *this_00;
  UInteractiveGizmoManager *pUVar2;
  
  pUVar1 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  this_00 = (UInteractiveToolManager *)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
  pUVar2 = UInteractiveToolManager::GetPairedGizmoManager(this_00);
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x2e8);
                    /* WARNING: Could not recover jumptable at 0x00014cb3bd77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar2,this,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesUConstructionPlaneMechanic @ 14cb3ea80

void __cdecl UConstructionPlaneMechanic::StaticRegisterNativesUConstructionPlaneMechanic(void)

{
  return;
}

// Tick @ 14cb409f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConstructionPlaneMechanic::Tick(UConstructionPlaneMechanic *this,float param_1)

{
  UCombinedTransformGizmo *pUVar1;
  code *pcVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  pUVar1 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
    pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x360);
    UE::Core::Private::Function::CheckCallable(*(void **)&this->CanUpdatePlaneFunc);
    plVar3 = *(longlong **)&(this->CanUpdatePlaneFunc).field_0x28;
    pcVar4 = *(code **)&this->CanUpdatePlaneFunc;
    plVar7 = (longlong *)&(this->CanUpdatePlaneFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    uVar5 = (*pcVar4)(uVar6);
    (*pcVar2)(pUVar1,uVar5);
  }
  return;
}

// TransformChanged @ 14cb417f0

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
UConstructionPlaneMechanic::TransformChanged
          (UConstructionPlaneMechanic *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  dVar2 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
  (this->Plane).Rotation.field0_0x0._s_0.X = (param_2->Rotation).XY.m128d_f64[0];
  (this->Plane).Rotation.field0_0x0._s_0.Y = dVar1;
  (this->Plane).Rotation.field0_0x0._s_0.Z = dVar2;
  (this->Plane).Rotation.field0_0x0._s_0.W = dVar3;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (this->Plane).Origin.field0_0x0._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  (this->Plane).Origin.field0_0x0._s_0.Y = dVar1;
  (this->Plane).Origin.field0_0x0._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPlaneChanged);
  return;
}

// UpdateClickPriority @ 14cb44a10

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
UConstructionPlaneMechanic::UpdateClickPriority
          (UConstructionPlaneMechanic *this,FInputCapturePriority param_1)

{
  USingleClickInputBehavior *pUVar1;
  code *pcVar2;
  bool bVar3;
  int local_res10 [6];
  
  local_res10[0] = param_1.Priority;
  if ((this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr == (USingleClickInputBehavior *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2461915472140959836>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\ConstructionPlaneMechanic.cpp"
                       ,0x5c,"ClickToSetPlaneBehavior != nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr;
  if (pUVar1 != (USingleClickInputBehavior *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,local_res10);
  }
  return;
}

