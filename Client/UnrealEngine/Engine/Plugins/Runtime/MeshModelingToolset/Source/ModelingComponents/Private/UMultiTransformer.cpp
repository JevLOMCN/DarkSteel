// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 30

// StaticClass @ 14cbbd5c0

UClass * __cdecl UMultiTransformer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiTransformer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiTransformer",
               &Z_Registration_Info_UClass_UMultiTransformer.InnerSingleton,
               StaticRegisterNativesUMultiTransformer,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMultiTransformer>,
               InternalVTableHelperCtorCaller<UMultiTransformer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiTransformer.InnerSingleton;
}

// UMultiTransformer @ 14cbc16d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMultiTransformer * __thiscall
UMultiTransformer::UMultiTransformer(UMultiTransformer *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->ActiveGizmoSubElements = FullTranslateRotateScale;
  this->GizmoCoordSystem = World;
  this->bForceGizmoCoordSystem = false;
  *(undefined ***)this = &___7UMultiTransformer__6B_;
  *(undefined8 *)&this->OnTransformStarted = 0;
  *(undefined8 *)&(this->OnTransformStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformStarted).field_0x10 = 0;
  *(undefined8 *)&(this->OnTransformStarted).field_0x18 = 2;
  *(undefined8 *)&this->OnTransformUpdated = 0;
  *(undefined8 *)&(this->OnTransformUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->OnTransformUpdated).field_0x18 = 2;
  *(undefined8 *)&this->OnTransformCompleted = 0;
  *(undefined8 *)&(this->OnTransformCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformCompleted).field_0x10 = 0;
  *(undefined8 *)&(this->OnTransformCompleted).field_0x18 = 2;
  *(undefined8 *)&this->OnEndPivotEdit = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x10 = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x18 = 2;
  (this->GizmoManager).field0_0x0.DebugPtr = (UInteractiveGizmoManager *)0x0;
  this->bShouldBeVisible = true;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bRepositionableGizmo = false;
  this->bDisallowNegativeScaling = false;
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  *(undefined8 *)&this->EnableSnapToWorldGridFunc = 0;
  *(undefined8 *)&(this->EnableSnapToWorldGridFunc).field_0x28 = 0;
  *(undefined8 *)&this->IsNonUniformScaleAllowed = 0;
  *(undefined8 *)&(this->IsNonUniformScaleAllowed).field_0x28 = 0;
  this->bInGizmoEdit = false;
  return this;
}

// UMultiTransformer @ 14cbc1820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMultiTransformer * __thiscall
UMultiTransformer::UMultiTransformer(UMultiTransformer *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->ActiveGizmoSubElements = FullTranslateRotateScale;
  this->GizmoCoordSystem = World;
  this->bForceGizmoCoordSystem = false;
  *(undefined ***)this = &___7UMultiTransformer__6B_;
  *(undefined8 *)&this->OnTransformStarted = 0;
  *(undefined8 *)&(this->OnTransformStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformStarted).field_0x10 = 0;
  *(undefined8 *)&(this->OnTransformStarted).field_0x18 = 2;
  *(undefined8 *)&this->OnTransformUpdated = 0;
  *(undefined8 *)&(this->OnTransformUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->OnTransformUpdated).field_0x18 = 2;
  *(undefined8 *)&this->OnTransformCompleted = 0;
  *(undefined8 *)&(this->OnTransformCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformCompleted).field_0x10 = 0;
  *(undefined8 *)&(this->OnTransformCompleted).field_0x18 = 2;
  *(undefined8 *)&this->OnEndPivotEdit = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x10 = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x18 = 2;
  (this->GizmoManager).field0_0x0.DebugPtr = (UInteractiveGizmoManager *)0x0;
  this->bShouldBeVisible = true;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bRepositionableGizmo = false;
  this->bDisallowNegativeScaling = false;
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  *(undefined8 *)&this->EnableSnapToWorldGridFunc = 0;
  *(undefined8 *)&(this->EnableSnapToWorldGridFunc).field_0x28 = 0;
  *(undefined8 *)&this->IsNonUniformScaleAllowed = 0;
  *(undefined8 *)&(this->IsNonUniformScaleAllowed).field_0x28 = 0;
  this->bInGizmoEdit = false;
  return this;
}

// ~UMultiTransformer @ 14cbc1b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMultiTransformer::~UMultiTransformer(UMultiTransformer *this)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMultiTransformer__6B_;
  if (*(longlong *)&this->IsNonUniformScaleAllowed != 0) {
    plVar1 = *(longlong **)&(this->IsNonUniformScaleAllowed).field_0x28;
    plVar3 = (longlong *)&(this->IsNonUniformScaleAllowed).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->EnableSnapToWorldGridFunc != 0) {
    plVar1 = *(longlong **)&(this->EnableSnapToWorldGridFunc).field_0x28;
    plVar3 = (longlong *)&(this->EnableSnapToWorldGridFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEndPivotEdit).field_0x8,*(int *)&(this->OnEndPivotEdit).field_0x10);
  pvVar2 = *(void **)&(this->OnEndPivotEdit).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndPivotEdit);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransformCompleted).field_0x8,
             *(int *)&(this->OnTransformCompleted).field_0x10);
  pvVar2 = *(void **)&(this->OnTransformCompleted).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransformCompleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransformUpdated).field_0x8,*(int *)&(this->OnTransformUpdated).field_0x10);
  pvVar2 = *(void **)&(this->OnTransformUpdated).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransformUpdated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransformStarted).field_0x8,*(int *)&(this->OnTransformStarted).field_0x10);
  pvVar2 = *(void **)&(this->OnTransformStarted).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransformStarted);
  UObject::~UObject((UObject *)this);
  return;
}

// AddAlignmentMechanic @ 14cbc2540

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
UMultiTransformer::AddAlignmentMechanic(UMultiTransformer *this,UDragAlignmentMechanic *param_1)

{
  UCombinedTransformGizmo *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDragAlignmentMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = param_1;
  pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
    FDragAlignmentBase::AddToGizmo
              ((FDragAlignmentBase *)&param_1->_padding_,pUVar1,
               (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
               (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
  }
  return;
}

// GetCurrentGizmoFrame @ 14cbc5530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TFrame3<double> * __thiscall UMultiTransformer::GetCurrentGizmoFrame(UMultiTransformer *this)

{
  return &this->ActiveGizmoFrame;
}

// GetCurrentGizmoScale @ 14cbc5540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<double> * __thiscall UMultiTransformer::GetCurrentGizmoScale(UMultiTransformer *this)

{
  return &this->ActiveGizmoScale;
}

// GetGizmoCoordinateSystem @ 14cbc64e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EToolContextCoordinateSystem __thiscall
UMultiTransformer::GetGizmoCoordinateSystem(UMultiTransformer *this)

{
  UCombinedTransformGizmo *pUVar1;
  
  pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
    return pUVar1->CurrentCoordinateSystem;
  }
  return this->GizmoCoordSystem;
}

// GetMode @ 14cbc6e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EMultiTransformerMode __thiscall UMultiTransformer::GetMode(UMultiTransformer *this)

{
  return this->ActiveMode;
}

// GetPrivateStaticClass @ 14cbc7090

UClass * __cdecl UMultiTransformer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiTransformer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiTransformer",
               &Z_Registration_Info_UClass_UMultiTransformer.InnerSingleton,
               StaticRegisterNativesUMultiTransformer,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMultiTransformer>,
               InternalVTableHelperCtorCaller<UMultiTransformer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiTransformer.InnerSingleton;
}

// InGizmoEdit @ 14cbc8110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMultiTransformer::InGizmoEdit(UMultiTransformer *this)

{
  return this->bInGizmoEdit;
}

// InitializeGizmoPositionFromWorldFrame @ 14cbc86b0

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
UMultiTransformer::InitializeGizmoPositionFromWorldFrame
          (UMultiTransformer *this,TFrame3<double> *param_1,bool param_2)

{
  UCombinedTransformGizmo *this_00;
  double dVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [64];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.X;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  if (param_2) {
    (this->ActiveGizmoScale).field0_0x0._s_0.X =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    (this->ActiveGizmoScale).field0_0x0._s_0.Y = (double)uVar2;
    (this->ActiveGizmoScale).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  }
  this_00 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (this_00 != (UCombinedTransformGizmo *)0x0) {
    local_78.Translation.XY.m128d_f64[0]._0_4_ =
         *(undefined4 *)&(this->ActiveGizmoFrame).Origin.field0_0x0;
    local_78.Translation.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 4);
    local_78.Translation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 8);
    local_78.Translation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 0xc);
    local_78.Rotation.XY.m128d_f64[0] = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X;
    local_78.Rotation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 8);
    local_78.Rotation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 0xc);
    local_78.Rotation.ZW.m128d_f64[0] = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z;
    local_78.Rotation.ZW.m128d_f64[1] = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W;
    local_78.Translation.ZW.m128d_f64[0] = (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Z;
    local_78.Translation.ZW.m128d_f64[1] = 0.0;
    local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    UCombinedTransformGizmo::ReinitializeGizmoTransform(this_00,&local_78,true);
  }
  return;
}

// OnBeginProxyTransformEdit @ 14cbc89d0

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
UMultiTransformer::OnBeginProxyTransformEdit(UMultiTransformer *this,UTransformProxy *param_1)

{
  this->bInGizmoEdit = true;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnTransformStarted);
  return;
}

// OnEndProxyTransformEdit @ 14cbc8b10

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
UMultiTransformer::OnEndProxyTransformEdit(UMultiTransformer *this,UTransformProxy *param_1)

{
  this->bInGizmoEdit = false;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnTransformCompleted);
  return;
}

// OnProxyTransformChanged @ 14cbc9190

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
UMultiTransformer::OnProxyTransformChanged
          (UMultiTransformer *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  auVar2 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  uVar4 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
  uVar5 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
  uVar6 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
  uVar7 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
  dVar1 = (param_2->Translation).ZW.m128d_f64[0];
  dVar8 = (param_2->Translation).XY.m128d_f64[1];
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Y = dVar8;
  local_30 = SUB84(dVar1,0);
  uStack_2c = (undefined4)((ulonglong)dVar1 >> 0x20);
  *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 0x10) = local_30;
  *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 0x14) = uStack_2c;
  *(int *)&(this->ActiveGizmoFrame).Rotation.field0_0x0 = auVar2._0_4_;
  *(int *)((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 4) = auVar2._4_4_;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->ActiveGizmoScale).field0_0x0._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
  (this->ActiveGizmoScale).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[0];
  auVar3._8_4_ = uVar4;
  auVar3._0_8_ = auVar2._8_8_;
  auVar3._12_4_ = uVar5;
  *(undefined1 (*) [16])((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 8) = auVar3;
  (this->ActiveGizmoScale).field0_0x0._s_0.Z = dVar1;
  *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 0x18) = uVar6;
  *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 0x1c) = uVar7;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnTransformUpdated);
  return;
}

// ResetScale @ 14cbc9df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMultiTransformer::ResetScale(UMultiTransformer *this)

{
  UCombinedTransformGizmo *pUVar1;
  undefined8 uVar2;
  
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ActiveGizmoScale).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ActiveGizmoScale).field0_0x0._s_0.Y = (double)uVar2;
  (this->ActiveGizmoScale).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cbc9e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x358))(pUVar1,&UE::Math::TVector<double>::OneVector);
    return;
  }
  return;
}

// SetDisallowNegativeScaling @ 14cbcaa70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMultiTransformer::SetDisallowNegativeScaling(UMultiTransformer *this,bool param_1)

{
  UCombinedTransformGizmo *pUVar1;
  
  this->bDisallowNegativeScaling = param_1;
  pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cbcaa85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x328))();
    return;
  }
  return;
}

// SetEnabledGizmoSubElements @ 14cbcaaa0

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
UMultiTransformer::SetEnabledGizmoSubElements
          (UMultiTransformer *this,ETransformGizmoSubElements param_1)

{
  UCombinedTransformGizmo *pUVar1;
  UInteractiveGizmoManager *pUVar2;
  
  if ((this->ActiveGizmoSubElements != param_1) &&
     (pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr, this->ActiveGizmoSubElements = param_1,
     pUVar1 != (UCombinedTransformGizmo *)0x0)) {
    pUVar2 = (this->GizmoManager).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x2e8))(pUVar2,this);
    (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
    UpdateShowGizmoState(this,true);
    return;
  }
  return;
}

// SetGizmoRepositionable @ 14cbcab00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMultiTransformer::SetGizmoRepositionable(UMultiTransformer *this,bool param_1)

{
  UCombinedTransformGizmo *pUVar1;
  UInteractiveGizmoManager *pUVar2;
  
  if ((this->bRepositionableGizmo != param_1) &&
     (pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr, this->bRepositionableGizmo = param_1,
     pUVar1 != (UCombinedTransformGizmo *)0x0)) {
    pUVar2 = (this->GizmoManager).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x2e8))(pUVar2,this);
    (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
    UpdateShowGizmoState(this,true);
    return;
  }
  return;
}

// SetGizmoVisibility @ 14cbcab60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMultiTransformer::SetGizmoVisibility(UMultiTransformer *this,bool param_1)

{
  UCombinedTransformGizmo *pUVar1;
  
  if (this->bShouldBeVisible != param_1) {
    this->bShouldBeVisible = param_1;
    pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
    if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cbcab7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar1 + 0x360))();
      return;
    }
  }
  return;
}

// SetIsNonUniformScaleAllowedFunction @ 14cbcab90

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
UMultiTransformer::SetIsNonUniformScaleAllowedFunction
          (UMultiTransformer *this,TFunction<bool___cdecl(void)> *param_1)

{
  UCombinedTransformGizmo *pUVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
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
    puVar10 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar10)(puVar10,&local_48);
  }
  lVar8 = *(longlong *)&this->IsNonUniformScaleAllowed;
  uVar9 = *(undefined8 *)&(this->IsNonUniformScaleAllowed).field_0x8;
  uVar3 = *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x10;
  uVar4 = *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x14;
  uVar5 = *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x18;
  uVar6 = *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x1c;
  uVar7 = *(undefined8 *)&(this->IsNonUniformScaleAllowed).field_0x20;
  plVar13 = *(longlong **)&(this->IsNonUniformScaleAllowed).field_0x28;
  *(longlong *)&this->IsNonUniformScaleAllowed = local_58;
  *(undefined8 *)&(this->IsNonUniformScaleAllowed).field_0x8 = uStack_50;
  *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x18 = uStack_40;
  *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->IsNonUniformScaleAllowed).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar3;
  local_48._4_4_ = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar13;
  local_58 = lVar8;
  uStack_50 = uVar9;
  if (lVar8 != 0) {
    plVar11 = &local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar11 = plVar13;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
    uStack_30 = (longlong *)0x0;
    pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x318);
    local_58 = *(longlong *)&this->IsNonUniformScaleAllowed;
    if (local_58 != 0) {
      puVar10 = *(undefined8 **)&(this->IsNonUniformScaleAllowed).field_0x28;
      puVar12 = (undefined8 *)&(this->IsNonUniformScaleAllowed).field_0x10;
      if (puVar10 != (undefined8 *)0x0) {
        puVar12 = puVar10;
      }
      (**(code **)*puVar12)(puVar12,&local_48);
    }
    (*pcVar2)(pUVar1,&local_58);
    if (local_58 != 0) {
      plVar13 = &local_48;
      if (uStack_30 != (longlong *)0x0) {
        plVar13 = uStack_30;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar13 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// SetMode @ 14cbcad20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMultiTransformer::SetMode(UMultiTransformer *this,EMultiTransformerMode param_1)

{
  UInteractiveGizmoManager *pUVar1;
  
  if (param_1 != this->ActiveMode) {
    if (param_1 == DefaultGizmo) {
      UpdateShowGizmoState(this,true);
      this->ActiveMode = DefaultGizmo;
      return;
    }
    pUVar1 = (this->GizmoManager).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,this);
    (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
    this->ActiveMode = param_1;
  }
  return;
}

// SetOverrideGizmoCoordinateSystem @ 14cbcad90

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
UMultiTransformer::SetOverrideGizmoCoordinateSystem
          (UMultiTransformer *this,EToolContextCoordinateSystem param_1)

{
  UCombinedTransformGizmo *pUVar1;
  UInteractiveGizmoManager *pUVar2;
  
  if ((this->GizmoCoordSystem != param_1) || (this->bForceGizmoCoordSystem == false)) {
    pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
    this->bForceGizmoCoordSystem = true;
    this->GizmoCoordSystem = param_1;
    if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
      pUVar2 = (this->GizmoManager).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x2e8))(pUVar2,this);
      (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
      UpdateShowGizmoState(this,true);
      return;
    }
  }
  return;
}

// SetSnapToWorldGridSourceFunc @ 14cbcae00

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
UMultiTransformer::SetSnapToWorldGridSourceFunc
          (UMultiTransformer *this,TUniqueFunction<bool___cdecl(void)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->EnableSnapToWorldGridFunc;
  uVar2 = *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->EnableSnapToWorldGridFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->EnableSnapToWorldGridFunc).field_0x28;
  *(undefined8 *)&this->EnableSnapToWorldGridFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->EnableSnapToWorldGridFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10
  ;
  *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20
  ;
  *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->EnableSnapToWorldGridFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cbcae58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// Setup @ 14cbcb250

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
UMultiTransformer::Setup
          (UMultiTransformer *this,UInteractiveGizmoManager *param_1,
          IToolContextTransactionProvider *param_2)

{
  undefined8 uVar1;
  UClass *pUVar2;
  UTransformProxy *pUVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [32];
  UMultiTransformer *local_d8;
  undefined1 local_d0 [40];
  undefined1 local_a8 [24];
  undefined1 local_90 [8];
  undefined1 auStack_88 [16];
  FObjectInstancingGraph *pFStack_78;
  UPackage *pUStack_70;
  undefined1 local_68 [40];
  longlong *local_40;
  TObjectPtr<UInteractiveGizmoManager>_u_0 local_28;
  
  local_28.DebugPtr = (UInteractiveGizmoManager *)(__security_cookie.value ^ (ulonglong)auStack_f8);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveGizmoManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFStack_78 = _UNK_15061cbc8;
  auStack_88._8_8_ = ___xmm_3ff00000000000000000000000000000;
  (this->GizmoManager).field0_0x0.DebugPtr = param_1;
  auStack_88._0_8_ = 0;
  this->TransactionProvider = param_2;
  local_a8._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Z = (double)local_a8._16_8_;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  local_90 = (undefined1  [8])0x0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z = (double)auStack_88._8_8_;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W = (double)pFStack_78;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ActiveGizmoScale).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ActiveGizmoScale).field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveGizmoScale).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->ActiveMode = DefaultGizmo;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UTransformProxy_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._8_8_ = this;
  pUVar3 = (UTransformProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_68._0_8_ != 0) {
    plVar4 = (longlong *)(local_68 + 0x10);
    if (local_40 != (longlong *)0x0) {
      plVar4 = local_40;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_a8._0_8_ = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X;
  local_a8._8_8_ = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Y;
  (this->TransformProxy).field0_0x0.DebugPtr = pUVar3;
  auStack_88._0_8_ = (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.X;
  auStack_88._8_8_ = (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Y;
  local_a8._16_8_ = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z;
  local_90 = (undefined1  [8])(this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W;
  pFStack_78 = (FObjectInstancingGraph *)(this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Z;
  pUStack_70 = (UPackage *)0x0;
  local_68._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
  local_68._8_8_ = _UNK_150689688;
  local_68._16_8_ = ___xmm_00000000000000003ff0000000000000;
  local_68._24_8_ = _UNK_150689518;
  (**(code **)(pUVar3->_padding_ + 0x2c8))(pUVar3,local_a8);
  UpdateShowGizmoState(this,true);
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddUObject<UMultiTransformer>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
             (UMultiTransformer *)&local_d8,(pmf_ad369853)this);
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddUObject<UMultiTransformer>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
             (UMultiTransformer *)&local_d8,(pmf_66c7b0fc)this);
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddUObject<UMultiTransformer>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
             (UMultiTransformer *)&local_d8,(pmf_66c7b0fc)this);
  local_d8 = this;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddWeakLambda<UMultiTransformer,_UMultiTransformer::Setup_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnPivotChanged,
             (UMultiTransformer *)local_d0,(<lambda_1> *)this);
  local_d8 = this;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddWeakLambda<UMultiTransformer,_UMultiTransformer::Setup_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnEndPivotEdit,
             (UMultiTransformer *)local_d0,(<lambda_2> *)this);
  return;
}

// Shutdown @ 14cbcb520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMultiTransformer::Shutdown(UMultiTransformer *this)

{
  UInteractiveGizmoManager *pUVar1;
  
  pUVar1 = (this->GizmoManager).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cbcb52d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,this);
  return;
}

// StaticRegisterNativesUMultiTransformer @ 14cbcb540

void __cdecl UMultiTransformer::StaticRegisterNativesUMultiTransformer(void)

{
  return;
}

// Tick @ 14cbcb550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMultiTransformer::Tick(UMultiTransformer *this,float param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if ((this->TransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0) {
    if (*(void **)&this->EnableSnapToWorldGridFunc != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->EnableSnapToWorldGridFunc);
      pcVar1 = *(code **)&this->EnableSnapToWorldGridFunc;
      plVar2 = *(longlong **)&(this->EnableSnapToWorldGridFunc).field_0x28;
      plVar5 = (longlong *)&(this->EnableSnapToWorldGridFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar5 = plVar2;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      bVar3 = (bool)(*pcVar1)(uVar4);
      ((this->TransformGizmo).field0_0x0.DebugPtr)->bSnapToWorldGrid = bVar3;
      return;
    }
    ((this->TransformGizmo).field0_0x0.DebugPtr)->bSnapToWorldGrid = false;
  }
  return;
}

// UpdateGizmoPositionFromWorldFrame @ 14cbccb30

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
UMultiTransformer::UpdateGizmoPositionFromWorldFrame
          (UMultiTransformer *this,TFrame3<double> *param_1,bool param_2)

{
  UCombinedTransformGizmo *pUVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [64];
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  dVar2 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Rotation).field0_0x0._s_0.X;
  (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z = dVar2;
  (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  if (param_2) {
    (this->ActiveGizmoScale).field0_0x0._s_0.X =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    (this->ActiveGizmoScale).field0_0x0._s_0.Y = (double)uVar3;
    (this->ActiveGizmoScale).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  }
  pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
    local_58 = *(undefined4 *)&(this->ActiveGizmoFrame).Origin.field0_0x0;
    uStack_54 = *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 4);
    uStack_50 = *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 8);
    uStack_4c = *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 0xc);
    local_78 = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X;
    uStack_70 = *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 8);
    uStack_6c = *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 0xc);
    local_68 = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z;
    dStack_60 = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W;
    local_48 = (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Z;
    uStack_40 = 0;
    local_38 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_30 = _UNK_150689688;
    local_28 = ___xmm_00000000000000003ff0000000000000;
    uStack_20 = _UNK_150689518;
    (**(code **)(*(longlong *)pUVar1 + 0x340))(pUVar1,&local_78,1);
  }
  return;
}

// UpdateShowGizmoState @ 14cbccc50

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

void __thiscall UMultiTransformer::UpdateShowGizmoState(UMultiTransformer *this,bool param_1)

{
  UInteractiveGizmoManager *pUVar1;
  undefined8 *puVar2;
  UDragAlignmentMechanic *pUVar3;
  code *pcVar4;
  bool bVar5;
  UCombinedTransformGizmo *pUVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  FString local_e8;
  undefined4 local_d8;
  FString local_d0;
  longlong local_b8 [2];
  longlong local_a8 [3];
  longlong *local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d8 = 0;
  if (param_1) {
    if ((this->TransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TransformGizmo == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\MultiTransformer.cpp"
                         ,0xf0,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar1 = (this->GizmoManager).field0_0x0.DebugPtr;
    bVar5 = this->bRepositionableGizmo == false;
    if (bVar5) {
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      pUVar6 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                         (pUVar1,this->ActiveGizmoSubElements,this,&local_e8);
    }
    else {
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
      pUVar6 = UE::TransformGizmoUtil::CreateCustomRepositionableTransformGizmo
                         (pUVar1,this->ActiveGizmoSubElements,this,&local_d0);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UCombinedTransformGizmo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->TransformGizmo).field0_0x0.DebugPtr = pUVar6;
    if (bVar5) {
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    if ((!bVar5) && (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (this->bForceGizmoCoordSystem != false) {
      ((this->TransformGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = false;
      ((this->TransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = this->GizmoCoordSystem
      ;
    }
    if (*(longlong *)&this->IsNonUniformScaleAllowed != 0) {
      pUVar6 = (this->TransformGizmo).field0_0x0.DebugPtr;
      local_90 = (longlong *)0x0;
      pcVar4 = *(code **)(*(longlong *)pUVar6 + 0x318);
      puVar2 = *(undefined8 **)&(this->IsNonUniformScaleAllowed).field_0x28;
      puVar7 = (undefined8 *)&(this->IsNonUniformScaleAllowed).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar7 = puVar2;
      }
      local_b8[0] = *(longlong *)&this->IsNonUniformScaleAllowed;
      (**(code **)*puVar7)(puVar7,local_a8);
      (*pcVar4)(pUVar6,local_b8);
      if (local_b8[0] != 0) {
        plVar8 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar8 = local_90;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    pUVar6 = (this->TransformGizmo).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar6 + 0x328))(pUVar6,this->bDisallowNegativeScaling);
    pUVar3 = (this->DragAlignmentMechanic).field0_0x0.DebugPtr;
    if (pUVar3 != (UDragAlignmentMechanic *)0x0) {
      FDragAlignmentBase::AddToGizmo
                ((FDragAlignmentBase *)&pUVar3->_padding_,(this->TransformGizmo).field0_0x0.DebugPtr
                 ,(TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
                 (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
    }
    pUVar6 = (this->TransformGizmo).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar6 + 0x330))
              (pUVar6,(this->TransformProxy).field0_0x0.DebugPtr,this->TransactionProvider);
    local_88.Translation.XY.m128d_f64[0]._0_4_ =
         *(undefined4 *)&(this->ActiveGizmoFrame).Origin.field0_0x0;
    local_88.Translation.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 4);
    local_88.Translation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 8);
    local_88.Translation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Origin.field0_0x0 + 0xc);
    local_88.Rotation.XY.m128d_f64[0] = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.X;
    local_88.Rotation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 8);
    local_88.Rotation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(this->ActiveGizmoFrame).Rotation.field0_0x0 + 0xc);
    local_88.Rotation.ZW.m128d_f64[0] = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.Z;
    local_88.Rotation.ZW.m128d_f64[1] = (this->ActiveGizmoFrame).Rotation.field0_0x0._s_0.W;
    local_88.Translation.ZW.m128d_f64[0] = (this->ActiveGizmoFrame).Origin.field0_0x0._s_0.Z;
    local_88.Translation.ZW.m128d_f64[1] = 0.0;
    local_88.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_88.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_88.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_88.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    UCombinedTransformGizmo::ReinitializeGizmoTransform
              ((this->TransformGizmo).field0_0x0.DebugPtr,&local_88,true);
    pUVar6 = (this->TransformGizmo).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar6 + 0x360))(pUVar6,this->bShouldBeVisible);
  }
  else {
    pUVar1 = (this->GizmoManager).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,this);
    (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  }
  return;
}

