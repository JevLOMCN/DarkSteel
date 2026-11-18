// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 290

// StaticClass @ 14798e8e0

UClass * __cdecl USplineComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SplineComponent",
               &Z_Registration_Info_UClass_USplineComponent.InnerSingleton,
               StaticRegisterNativesUSplineComponent,0x700,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USplineComponent>,
               InternalVTableHelperCtorCaller<USplineComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineComponent.InnerSingleton;
}

// USplineComponent @ 1479a6db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

USplineComponent * __thiscall
USplineComponent::USplineComponent(USplineComponent *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FSpline::FSpline(&this->Spline);
  (this->SplineCurves).Version = 0xffffffff;
  *(undefined8 *)&(this->SplineCurves).Position = 0;
  puVar1 = &(this->LineMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SplineCurves).Position.field_0x8 = 0;
  (this->SplineCurves).Position.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Position.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
  (this->SplineCurves).Rotation.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Rotation.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Scale = 0;
  *(undefined8 *)&(this->SplineCurves).Scale.field_0x8 = 0;
  (this->SplineCurves).Scale.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Scale.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable.field_0x8 = 0;
  (this->SplineCurves).ReparamTable.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).ReparamTable.field_0x14 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->LineMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LineMaterial).SoftObjectPtr = 0;
  *(undefined8 *)&(this->LineMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LineMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->LineMaterial).SoftObjectPtr,(FObjectPtr)&local_res8);
  puVar1 = &(this->PointMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->PointMaterial).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->PointMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PointMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PointMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->PointMaterial).SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->LineMaterialLifetimePtr).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PointMaterialLifetimePtr).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->OnSplineChanged = 0;
  *(undefined8 *)&(this->OnSplineChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSplineChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnSplineUpdated = 0;
  *(undefined8 *)&(this->OnSplineUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnSplineUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnSplineDisplayChanged = 0;
  *(undefined8 *)&(this->OnSplineDisplayChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSplineDisplayChanged).field_0x10 = 0;
  this->LastAuthority = Unset;
  this->LineMaterialLoadID = -1;
  this->PointMaterialLoadID = -1;
  *(undefined8 *)&(this->OnSplineChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnSplineUpdated).field_0x18 = 2;
  *(undefined8 *)&(this->OnSplineDisplayChanged).field_0x18 = 2;
  return this;
}

// USplineComponent @ 1479a6fb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

USplineComponent * __thiscall
USplineComponent::USplineComponent(USplineComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  TSoftObjectPtr<UMaterialInterface> *this_00;
  TSoftObjectPtr<UMaterialInterface> *this_01;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  size_t sVar4;
  undefined8 local_res8;
  TStringView<wchar_t> local_88;
  FSoftObjectPath local_78;
  undefined8 local_58;
  FName local_50;
  undefined1 auStack_48 [16];
  int local_38;
  int aiStack_34 [3];
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FSpline::FSpline(&this->Spline);
  this->Duration = 1.0;
  this->bStationaryEndpoints = false;
  this->bSplineHasBeenEdited = false;
  this->bModifiedByConstructionScript = false;
  this->bInputSplinePointsToConstructionScript = false;
  *(undefined8 *)&(this->SplineCurves).Position = 0;
  this_00 = &this->LineMaterial;
  *(undefined8 *)&(this->SplineCurves).Position.field_0x8 = 0;
  puVar1 = &(this->LineMaterial).SoftObjectPtr.field_0x18;
  (this->SplineCurves).Position.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Position.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
  (this->SplineCurves).Rotation.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Rotation.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Scale = 0;
  *(undefined8 *)&(this->SplineCurves).Scale.field_0x8 = 0;
  (this->SplineCurves).Scale.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Scale.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable.field_0x8 = 0;
  (this->SplineCurves).ReparamTable.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).ReparamTable.field_0x14 = 0;
  (this->SplineCurves).Version = 0xffffffff;
  this->ReparamStepsPerSegment = 10;
  this->bDrawDebug = true;
  this->bClosedLoop = false;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->LineMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&this_00->SoftObjectPtr = 0;
  *(undefined8 *)&(this->LineMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LineMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&this_00->SoftObjectPtr,(FObjectPtr)&local_res8);
  this_01 = &this->PointMaterial;
  puVar1 = &(this->PointMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&this_01->SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->PointMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PointMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PointMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&this_01->SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->LineMaterialLifetimePtr).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PointMaterialLifetimePtr).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->LineMaterialLoadID = -1;
  uVar2 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  this->PointMaterialLoadID = -1;
  (this->DefaultUpVector).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = (double)uVar2;
  (this->DefaultUpVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->OnSplineChanged = 0;
  *(undefined8 *)&(this->OnSplineChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSplineChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnSplineChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnSplineUpdated = 0;
  *(undefined8 *)&(this->OnSplineUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnSplineUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->OnSplineUpdated).field_0x18 = 2;
  *(undefined8 *)&this->OnSplineDisplayChanged = 0;
  *(undefined8 *)&(this->OnSplineDisplayChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSplineDisplayChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnSplineDisplayChanged).field_0x18 = 2;
  this->LastAuthority = Unset;
  SetDefaultSpline(this);
  auStack_48._0_8_ = this->_padding_;
  auStack_48._8_8_ = this->_padding_;
  _local_38 = this->_padding_;
  local_50.Number = (uint)this->LoopPosition;
  local_58._1_1_ = this->bStationaryEndpoints;
  local_58._0_1_ = this->bClosedLoop;
  local_58._4_4_ = this->ReparamStepsPerSegment;
  local_50.ComparisonIndex.Value._0_1_ = this->bLoopPositionOverride;
  FSplineCurves::UpdateSpline
            (&this->SplineCurves,this->bClosedLoop,this->bStationaryEndpoints,
             this->ReparamStepsPerSegment,this->bLoopPositionOverride,this->LoopPosition,
             (TVector<double> *)auStack_48);
  FSpline::UpdateSpline(&this->Spline,(FUpdateSplineParams *)&local_58);
  if (this->bDrawDebug != false) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineUpdated);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  local_88.Size = 0x49;
  local_88.DataPtr = L"/Engine/EngineMaterials/LineSetComponentMaterial.LineSetComponentMaterial";
  local_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_78.AssetPath.PackageName.Number = 0;
  local_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetPath.AssetName.Number = 0;
  local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.SubPathString.Data.ArrayNum = 0;
  local_78.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_78,&local_88);
  FVar3.Data = local_78.SubPathString.Data.AllocatorInstance.Data;
  sVar4 = (size_t)local_78.SubPathString.Data.ArrayNum;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  auStack_48._8_8_ = (void *)0x0;
  local_38 = local_78.SubPathString.Data.ArrayNum;
  local_50 = local_78.AssetPath.PackageName;
  auStack_48._0_4_ = local_78.AssetPath.AssetName.ComparisonIndex.Value;
  auStack_48._4_4_ = local_78.AssetPath.AssetName.Number;
  if (local_78.SubPathString.Data.ArrayNum == 0) {
    _local_38 = local_78.SubPathString.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_78.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)(auStack_48 + 8),
               local_78.SubPathString.Data.ArrayNum,aiStack_34);
    memcpy((void *)auStack_48._8_8_,FVar3.Data,sVar4);
  }
  if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
  }
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)this_00,
             (TPersistentObjectPtr<FSoftObjectPath> *)&local_58);
  if ((void *)auStack_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_48._8_8_);
  }
  local_88.Size = 0x49;
  local_88.DataPtr = L"/Engine/EngineMaterials/LineSetComponentMaterial.LineSetComponentMaterial";
  local_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_78.AssetPath.PackageName.Number = 0;
  local_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetPath.AssetName.Number = 0;
  local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.SubPathString.Data.ArrayNum = 0;
  local_78.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_78,&local_88);
  FVar3.Data = local_78.SubPathString.Data.AllocatorInstance.Data;
  sVar4 = (size_t)local_78.SubPathString.Data.ArrayNum;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  auStack_48._8_8_ = (void *)0x0;
  local_38 = local_78.SubPathString.Data.ArrayNum;
  local_50 = local_78.AssetPath.PackageName;
  auStack_48._0_4_ = local_78.AssetPath.AssetName.ComparisonIndex.Value;
  auStack_48._4_4_ = local_78.AssetPath.AssetName.Number;
  if (local_78.SubPathString.Data.ArrayNum == 0) {
    _local_38 = local_78.SubPathString.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_78.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)(auStack_48 + 8),
               local_78.SubPathString.Data.ArrayNum,aiStack_34);
    memcpy((void *)auStack_48._8_8_,FVar3.Data,sVar4);
  }
  if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
  }
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)this_01,
             (TPersistentObjectPtr<FSoftObjectPath> *)&local_58);
  if ((void *)auStack_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_48._8_8_);
  }
  return this;
}

// ~USplineComponent @ 1479a97b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall USplineComponent::~USplineComponent(USplineComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSplineDisplayChanged).field_0x8,
             *(int *)&(this->OnSplineDisplayChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnSplineDisplayChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSplineDisplayChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSplineUpdated).field_0x8,*(int *)&(this->OnSplineUpdated).field_0x10);
  pvVar1 = *(void **)&(this->OnSplineUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSplineUpdated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSplineChanged).field_0x8,*(int *)&(this->OnSplineChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnSplineChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSplineChanged);
  pvVar1 = *(void **)&(this->PointMaterial).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->LineMaterial).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurves).ReparamTable;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurves).Scale;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurves).Rotation;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurves).Position;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FSpline::~FSpline(&this->Spline);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// operator() @ 1479abfa0

float __thiscall
`USplineComponent::ConvertSplineToPolyline_InTimeRange'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  longlong lVar1;
  USplineComponent *this_00;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar1 = *(longlong *)this;
  auVar8._4_4_ = in_XMM1_Db;
  auVar8._0_4_ = param_1;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar7._4_12_ = auVar8._4_12_;
  auVar7._0_4_ = param_1 / *(float *)(lVar1 + 0x604);
  if (*(char *)((longlong)this + 8) != '\0') {
    if (!UE::SplineComponent::GUseSplineCurves) {
      bVar2 = FSpline::IsEnabledStatic();
      if (bVar2) {
        fVar4 = FSpline::GetSplineLength((FSpline *)(lVar1 + 0x548));
        return fVar4 * auVar7._0_4_;
      }
    }
    fVar4 = FSplineCurves::GetSplineLength((FSplineCurves *)(lVar1 + 0x598));
    return fVar4 * auVar7._0_4_;
  }
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      iVar3 = FSpline::GetNumControlPoints((FSpline *)(lVar1 + 0x548));
      goto LAB_1479ac04b;
    }
  }
  iVar3 = *(int *)(lVar1 + 0x5a0);
LAB_1479ac04b:
  this_00 = *(USplineComponent **)this;
  bVar2 = this_00->bClosedLoop == false;
  if (bVar2) {
    iVar3 = iVar3 + -1;
  }
  fVar4 = (float)iVar3;
  if ((bVar2) || (*(char *)((longlong)this + 9) == '\0')) {
    fVar4 = USplineComponent::GetDistanceAlongSplineAtSplineInputKey(this_00,fVar4 * auVar7._0_4_);
  }
  else {
    auVar8 = roundps(auVar7,ZEXT416((uint)auVar7._0_4_),1);
    fVar5 = USplineComponent::GetSplineLength(this_00);
    fVar6 = FGenericPlatformMath::Fmod(fVar4 * auVar7._0_4_,fVar4);
    if (fVar6 < 0.0) {
      fVar6 = fVar6 + fVar4;
    }
    fVar4 = USplineComponent::GetDistanceAlongSplineAtSplineInputKey
                      (*(USplineComponent **)this,fVar6);
    fVar4 = fVar4 + fVar5 * auVar8._0_4_;
  }
  return fVar4;
}

// AddPoint @ 1479af250

void __thiscall
USplineComponent::AddPoint(USplineComponent *this,FSplinePoint *param_1,bool param_2)

{
  uchar uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  TQuat<double> *pTVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_198;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_140;
  FInterpCurvePoint<UE::Math::TQuat<double>_> local_e8;
  TQuat<double> local_68;
  
  uVar10 = *(uint *)&(this->SplineCurves).Position.field_0x8;
  uVar12 = 0;
  fVar15 = param_1->InputKey;
  if (0 < (int)uVar10) {
    do {
      uVar13 = uVar10 >> 1;
      uVar6 = uVar13 + uVar12;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(float *)((longlong)(int)uVar6 * 0x58 + *(longlong *)&(this->SplineCurves).Position) <=
          fVar15) {
        uVar12 = uVar6 + 1;
        uVar13 = uVar10 + (-1 - uVar13);
      }
      uVar10 = uVar13;
    } while (0 < (int)uVar10);
    if (0 < (int)uVar12) {
      uVar10 = uVar12 - 1;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar15 = __real_3f800000;
      lVar14 = (longlong)(int)uVar10 * 0x58;
      if ((param_1->InputKey == *(float *)(lVar14 + *(longlong *)&(this->SplineCurves).Position)) &&
         (uVar12 = uVar10, (int)uVar10 < *(int *)&(this->SplineCurves).Position.field_0x8)) {
        lVar11 = (longlong)(int)uVar10 << 7;
        do {
          uVar13 = ~uVar10 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar10 < *(int *)&(this->SplineCurves).Position.field_0x8) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)&(this->SplineCurves).Position;
          *(float *)(lVar2 + lVar14) = *(float *)(lVar2 + lVar14) + fVar15;
          uVar6 = 0;
          if ((int)uVar10 < *(int *)&(this->SplineCurves).Rotation.field_0x8) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)&(this->SplineCurves).Rotation;
          *(float *)(lVar11 + lVar2) = *(float *)(lVar11 + lVar2) + fVar15;
          uVar6 = 0;
          if ((int)uVar10 < *(int *)&(this->SplineCurves).Scale.field_0x8) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)&(this->SplineCurves).Scale;
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x80;
          *(float *)(lVar2 + lVar14) = *(float *)(lVar2 + lVar14) + fVar15;
          lVar14 = lVar14 + 0x58;
        } while ((int)uVar10 < *(int *)&(this->SplineCurves).Position.field_0x8);
      }
    }
  }
  uVar1 = (param_1->Type).Value;
  if (uVar1 == '\0') {
    local_198.InterpMode.Value = '\0';
  }
  else if (uVar1 == '\x01') {
    local_198.InterpMode.Value = '\x01';
  }
  else if (uVar1 == '\x02') {
    local_198.InterpMode.Value = '\x02';
  }
  else if (uVar1 == '\x03') {
    local_198.InterpMode.Value = '\x05';
  }
  else if (uVar1 == '\x04') {
    local_198.InterpMode.Value = '\x03';
  }
  else {
    local_198.InterpMode.Value = '\x06';
  }
  local_198.OutVal.field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  local_198.OutVal.field0_0x0._s_0.Y = (param_1->Position).field0_0x0._s_0.Y;
  local_198.InVal = param_1->InputKey;
  local_198.OutVal.field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  local_198.ArriveTangent.field0_0x0._s_0.X = (param_1->ArriveTangent).field0_0x0._s_0.X;
  local_198.ArriveTangent.field0_0x0._s_0.Y = (param_1->ArriveTangent).field0_0x0._s_0.Y;
  local_198.ArriveTangent.field0_0x0._s_0.Z = (param_1->ArriveTangent).field0_0x0._s_0.Z;
  local_198.LeaveTangent.field0_0x0._s_0.X = (param_1->LeaveTangent).field0_0x0._s_0.X;
  local_198.LeaveTangent.field0_0x0._s_0.Y = (param_1->LeaveTangent).field0_0x0._s_0.Y;
  local_198.LeaveTangent.field0_0x0._s_0.Z = (param_1->LeaveTangent).field0_0x0._s_0.Z;
  TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
             &this->SplineCurves,&local_198,uVar12);
  pTVar8 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,&local_68);
  local_e8.InVal = param_1->InputKey;
  local_e8.OutVal.X = pTVar8->X;
  local_e8.OutVal.Y = pTVar8->Y;
  local_e8.OutVal.Z = pTVar8->Z;
  local_e8.OutVal.W = pTVar8->W;
  local_e8.ArriveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
  local_e8.ArriveTangent.W = UE::Math::TQuat<double>::Identity.W;
  local_e8.LeaveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
  local_e8.LeaveTangent.W = UE::Math::TQuat<double>::Identity.W;
  local_e8.ArriveTangent.X = UE::Math::TQuat<double>::Identity.X;
  local_e8.ArriveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
  local_e8.LeaveTangent.X = UE::Math::TQuat<double>::Identity.X;
  local_e8.LeaveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
  local_e8.InterpMode.Value = '\x01';
  TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_> *)
             &(this->SplineCurves).Rotation,&local_e8,uVar12);
  local_140.OutVal.field0_0x0._s_0.X = (param_1->Scale).field0_0x0._s_0.X;
  local_140.OutVal.field0_0x0._s_0.Y = (param_1->Scale).field0_0x0._s_0.Y;
  local_140.InVal = param_1->InputKey;
  local_140.OutVal.field0_0x0._s_0.Z = (param_1->Scale).field0_0x0._s_0.Z;
  local_140.InterpMode.Value = '\x01';
  local_140.ArriveTangent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_140.ArriveTangent.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_140.LeaveTangent.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  local_140.LeaveTangent.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y
  ;
  local_140.ArriveTangent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_140.LeaveTangent.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
             &(this->SplineCurves).Scale,&local_140,uVar12);
  FSpline::AddPoint(&this->Spline,param_1);
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0xa98))(this);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x2c0))(plVar9,param_1->InputKey);
  }
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar4 = FSpline::IsEnabledStatic(), bVar4)) {
    iVar7 = FSpline::GetNumControlPoints(&this->Spline);
  }
  else {
    iVar7 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  fVar15 = GetInputKeyValueAtSplinePoint(this,iVar7 + -1);
  if ((this->bLoopPositionOverride != false) && (this->LoopPosition <= fVar15)) {
    this->bLoopPositionOverride = false;
  }
  if (param_2) {
    (**(code **)(this->_padding_ + 0xad0))(this);
  }
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  return;
}

// AddPoints @ 1479af7a0

void __thiscall
USplineComponent::AddPoints
          (USplineComponent *this,TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  FSplinePoint *pFVar4;
  FSplinePoint *pFVar5;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)&(this->SplineCurves).Position.field_0x8;
  uVar3 = param_1->ArrayNum + iVar2;
  if (-1 < (int)uVar3) {
    puVar1 = &(this->SplineCurves).Position.field_0xc;
    if (*(int *)puVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar3,(ForAnyElementType *)&this->SplineCurves,iVar2,(int *)puVar1);
    }
    if (*(int *)&(this->SplineCurves).Rotation.field_0xc < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar3,(ForAnyElementType *)&(this->SplineCurves).Rotation,
                 *(int *)&(this->SplineCurves).Rotation.field_0x8,
                 (int *)&(this->SplineCurves).Rotation.field_0xc);
    }
    if (*(int *)&(this->SplineCurves).Scale.field_0xc < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar3,(ForAnyElementType *)&(this->SplineCurves).Scale,
                 *(int *)&(this->SplineCurves).Scale.field_0x8,
                 (int *)&(this->SplineCurves).Scale.field_0xc);
    }
    iVar2 = param_1->ArrayNum;
    pFVar4 = (FSplinePoint *)(param_1->AllocatorInstance).Data;
    pFVar5 = pFVar4 + iVar2;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSplinePoint_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      AddPoint(this,pFVar4,false);
      pFVar4 = pFVar4 + 1;
    }
    if (param_2) {
      (**(code **)(this->_padding_ + 0xad0))(this);
    }
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSplineChanged);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// AddSplinePoint @ 1479afdc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USplineComponent::AddSplinePoint
          (USplineComponent *this,TVector<double> *param_1,Type param_2,bool param_3)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  TRotator<double> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  FSplinePoint local_168;
  TRotator<double> local_d8 [8];
  
  if (param_2 == World) {
    dVar28 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar4 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar6 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar23 = (param_1->field0_0x0)._s_0.Z - (double)this->_padding_;
    auVar32._8_4_ = SUB84(dVar4,0);
    auVar32._0_8_ = dVar28;
    auVar32._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar33._8_4_ = SUB84(dVar6,0);
    auVar33._0_8_ = dVar5;
    auVar33._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar33 = blendpd(auVar32,auVar33,2);
    dVar9 = (param_1->field0_0x0)._s_0.X - (double)this->_padding_;
    dVar10 = (param_1->field0_0x0)._s_0.Y - (double)this->_padding_;
    uVar37 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar41._8_4_ = SUB84(dVar10,0);
    auVar41._0_8_ = dVar9;
    auVar41._12_4_ = uVar37;
    auVar24._8_4_ = SUB84(dVar5,0);
    auVar24._0_8_ = dVar4;
    auVar24._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar29._8_4_ = SUB84(dVar10,0);
    auVar29._0_8_ = dVar9;
    auVar29._12_4_ = uVar37;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar23;
    auVar30 = blendpd(auVar29,auVar11,2);
    auVar42._0_8_ = auVar41._8_8_ * dVar28 - dVar4 * dVar9;
    auVar42._8_8_ = dVar23 * dVar4 - auVar24._8_8_ * dVar10;
    auVar31._0_8_ = auVar30._0_8_ * dVar5 - auVar33._0_8_ * dVar23;
    auVar31._8_8_ = auVar30._8_8_ * dVar6 - auVar33._8_8_ * 0.0;
    dVar7 = auVar42._8_8_ + auVar42._8_8_;
    dVar8 = auVar31._0_8_ + auVar31._0_8_;
    uVar37 = SUB84(dVar8,0);
    uVar38 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar30 = blendpd(auVar42,auVar31,2);
    auVar39._8_4_ = uVar37;
    auVar39._0_8_ = dVar7;
    auVar39._12_4_ = uVar38;
    auVar25._8_4_ = uVar37;
    auVar25._0_8_ = dVar7;
    auVar25._12_4_ = uVar38;
    auVar34._8_4_ = uVar37;
    auVar34._0_8_ = dVar7;
    auVar34._12_4_ = uVar38;
    auVar43._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar43._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    auVar30._0_8_ = this->_padding_;
    auVar30._8_8_ = this->_padding_;
    auVar40._0_8_ = auVar39._8_8_ * dVar28 - dVar7 * dVar4;
    auVar40._8_8_ = auVar43._0_8_ * dVar4 - auVar25._8_8_ * dVar5;
    auVar35 = blendpd(auVar34,auVar43,2);
    auVar26._8_4_ = SUB84(auVar43._8_8_,0);
    auVar26._0_8_ = auVar43._0_8_;
    auVar26._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
    auVar36._0_8_ = auVar35._0_8_ * dVar5 - auVar43._0_8_ * auVar33._0_8_;
    auVar36._8_8_ = auVar35._8_8_ * dVar6 - auVar26._8_8_ * auVar33._8_8_;
    uVar3 = this->_padding_;
    lVar19 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                (uint)((ulonglong)uVar3 >> 0x20),
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar3) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
    lVar20 = -(ulonglong)
              ((double)CONCAT44((uint)((ulonglong)auVar30._0_8_ >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                (uint)auVar30._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
              <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar21 = -(ulonglong)
              ((double)CONCAT44((uint)((ulonglong)auVar30._8_8_ >> 0x20) & _UNK_15061cc8c,
                                (uint)auVar30._8_8_ & _UNK_15061cc88) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar27._8_4_ = SUB84(auVar40._8_8_,0);
    auVar27._0_8_ = auVar40._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
    dVar4 = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar33._4_4_,
                             ~(uint)lVar20 & auVar33._0_4_) *
            (dVar7 * dVar6 + dVar9 + auVar27._8_8_);
    dVar5 = (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar33._12_4_,
                             ~(uint)lVar21 & auVar33._8_4_) *
            (dVar8 * dVar6 + dVar10 + auVar36._0_8_);
    auVar35._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar35._0_8_ = uVar3;
    auVar35._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
    auVar33 = blendpd(auVar40,auVar36,2);
    dVar28 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar30._4_4_,
                              ~(uint)lVar19 & auVar30._0_4_) *
             (auVar43._0_8_ * dVar6 + dVar23 + auVar33._0_8_);
  }
  else {
    dVar4 = *(double *)&param_1->field0_0x0;
    dVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    dVar28 = (param_1->field0_0x0)._s_0.Z;
  }
  uVar37 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479b0023:
    iVar16 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    bVar15 = FSpline::IsEnabledStatic();
    if (!bVar15) goto LAB_1479b0023;
    iVar16 = FSpline::GetNumControlPoints(&this->Spline);
  }
  fVar13 = __real_3f800000;
  if (iVar16 < 1) {
    fVar22 = 0.0;
    goto LAB_1479b0074;
  }
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar15 = FSpline::IsEnabledStatic();
    if (!bVar15) goto LAB_1479b005b;
    iVar16 = FSpline::GetNumControlPoints(&this->Spline);
  }
  else {
LAB_1479b005b:
    iVar16 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  fVar22 = GetInputKeyValueAtSplinePoint(this,iVar16 + -1);
  fVar22 = fVar22 + fVar13;
LAB_1479b0074:
  local_168.Rotation.Roll = 0.0;
  local_168.Rotation.Pitch = 0.0;
  local_168.Rotation.Yaw = 0.0;
  local_168.ArriveTangent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_168.ArriveTangent.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_168.LeaveTangent.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  local_168.LeaveTangent.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y
  ;
  local_168.Position.field0_0x0._8_4_ = SUB84(dVar5,0);
  local_168.Position.field0_0x0._0_8_ = dVar4;
  local_168.Position.field0_0x0._12_4_ = uVar37;
  local_168.ArriveTangent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_168.LeaveTangent.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  local_168.InputKey = fVar22;
  local_168.Position.field0_0x0._s_0.Z = dVar28;
  pTVar17 = UE::Math::TQuat<double>::Rotator(&UE::Math::TQuat<double>::Identity,local_d8);
  local_168.Rotation.Pitch = pTVar17->Pitch;
  local_168.Rotation.Yaw = pTVar17->Yaw;
  local_168.Rotation.Roll = pTVar17->Roll;
  local_168.Scale.field0_0x0._s_0.Y = ___xmm_3ff00000000000003ff0000000000000;
  local_168.Scale.field0_0x0._s_0.Z = _UNK_150689688;
  local_168.Scale.field0_0x0._s_0.X = __real_3ff0000000000000;
  local_168.Type.Value = '\x01';
  FSpline::AddPoint(&this->Spline,&local_168);
  iVar16 = *(int *)&(this->SplineCurves).Position.field_0x8;
  puVar1 = &(this->SplineCurves).Position.field_0xc;
  if (iVar16 == *(int *)puVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,(ForAnyElementType *)&this->SplineCurves,(int *)puVar1);
  }
  *(int *)&(this->SplineCurves).Position.field_0x8 = iVar16 + 1;
  puVar1 = &(this->SplineCurves).Rotation.field_0xc;
  lVar20 = (longlong)iVar16 * 0x58;
  lVar19 = *(longlong *)&(this->SplineCurves).Position;
  auVar12._8_4_ = SUB84(dVar5,0);
  auVar12._0_8_ = dVar4;
  auVar12._12_4_ = uVar37;
  *(undefined1 (*) [16])(lVar20 + 8 + lVar19) = auVar12;
  *(double *)(lVar20 + 0x18 + lVar19) = dVar28;
  *(float *)(lVar20 + lVar19) = fVar22;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar2 = (double *)(lVar20 + 0x20 + lVar19);
  *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar2[1] = (double)uVar14;
  *(double *)(lVar20 + 0x30 + lVar19) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar2 = (double *)(lVar20 + 0x38 + lVar19);
  *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar2[1] = (double)uVar14;
  *(double *)(lVar20 + 0x48 + lVar19) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)(lVar20 + 0x50 + lVar19) = 1;
  iVar16 = *(int *)&(this->SplineCurves).Rotation.field_0x8;
  if (iVar16 == *(int *)puVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1080,(ForAnyElementType *)&(this->SplineCurves).Rotation,(int *)puVar1);
  }
  lVar19 = *(longlong *)&(this->SplineCurves).Rotation;
  puVar1 = &(this->SplineCurves).Scale.field_0xc;
  *(int *)&(this->SplineCurves).Rotation.field_0x8 = iVar16 + 1;
  lVar20 = (longlong)iVar16 * 0x80;
  *(float *)(lVar20 + lVar19) = fVar22;
  dVar28 = UE::Math::TQuat<double>::Identity.Y;
  pdVar2 = (double *)(lVar20 + 0x10 + lVar19);
  *pdVar2 = UE::Math::TQuat<double>::Identity.X;
  pdVar2[1] = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.W;
  pdVar2 = (double *)(lVar20 + 0x20 + lVar19);
  *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
  pdVar2[1] = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.Y;
  pdVar2 = (double *)(lVar20 + 0x30 + lVar19);
  *pdVar2 = UE::Math::TQuat<double>::Identity.X;
  pdVar2[1] = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.W;
  pdVar2 = (double *)(lVar20 + 0x40 + lVar19);
  *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
  pdVar2[1] = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.Y;
  pdVar2 = (double *)(lVar20 + 0x50 + lVar19);
  *pdVar2 = UE::Math::TQuat<double>::Identity.X;
  pdVar2[1] = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.W;
  pdVar2 = (double *)(lVar20 + 0x60 + lVar19);
  *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
  pdVar2[1] = dVar28;
  *(undefined1 *)(lVar20 + 0x70 + lVar19) = 1;
  iVar16 = *(int *)&(this->SplineCurves).Scale.field_0x8;
  if (iVar16 == *(int *)puVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,(ForAnyElementType *)&(this->SplineCurves).Scale,(int *)puVar1);
  }
  *(int *)&(this->SplineCurves).Scale.field_0x8 = iVar16 + 1;
  lVar20 = (longlong)iVar16 * 0x58;
  lVar19 = *(longlong *)&(this->SplineCurves).Scale;
  *(float *)(lVar20 + lVar19) = fVar22;
  *(undefined8 *)(lVar20 + 8 + lVar19) = 0x3ff0000000000000;
  *(undefined8 *)(lVar20 + 0x10 + lVar19) = 0x3ff0000000000000;
  *(undefined8 *)(lVar20 + 0x18 + lVar19) = 0x3ff0000000000000;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar2 = (double *)(lVar20 + 0x20 + lVar19);
  *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar2[1] = (double)uVar14;
  *(double *)(lVar20 + 0x30 + lVar19) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar2 = (double *)(lVar20 + 0x38 + lVar19);
  *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar2[1] = (double)uVar14;
  *(double *)(lVar20 + 0x48 + lVar19) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)(lVar20 + 0x50 + lVar19) = 1;
  plVar18 = (longlong *)(**(code **)(this->_padding_ + 0xa98))(this);
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x2c0))(plVar18);
  }
  if (this->bLoopPositionOverride != false) {
    this->LoopPosition = this->LoopPosition + fVar13;
  }
  if (param_3) {
    (**(code **)(this->_padding_ + 0xad0))(this);
  }
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  return;
}

// AddSplinePointAtIndex @ 1479b0380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USplineComponent::AddSplinePointAtIndex
          (USplineComponent *this,TVector<double> *param_1,int param_2,Type param_3,bool param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  float fVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  TRotator<double> *pTVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  FSplinePoint local_2d8;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_248;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_1f0;
  undefined1 local_198 [16];
  double local_188;
  FInterpCurvePoint<UE::Math::TQuat<double>_> local_178;
  TRotator<double> local_f8 [8];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar13 = FSpline::IsEnabledStatic(), !bVar13)) {
    iVar14 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar14 = FSpline::GetNumControlPoints(&this->Spline);
  }
  fVar12 = __real_3f800000;
  if (param_3 == World) {
    dVar29 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar4 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar6 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar24 = (param_1->field0_0x0)._s_0.Z - (double)this->_padding_;
    auVar33._8_4_ = SUB84(dVar4,0);
    auVar33._0_8_ = dVar29;
    auVar33._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar34._8_4_ = SUB84(dVar6,0);
    auVar34._0_8_ = dVar5;
    auVar34._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar34 = blendpd(auVar33,auVar34,2);
    dVar9 = (param_1->field0_0x0)._s_0.X - (double)this->_padding_;
    dVar10 = (param_1->field0_0x0)._s_0.Y - (double)this->_padding_;
    uVar38 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar42._8_4_ = SUB84(dVar10,0);
    auVar42._0_8_ = dVar9;
    auVar42._12_4_ = uVar38;
    auVar25._8_4_ = SUB84(dVar5,0);
    auVar25._0_8_ = dVar4;
    auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar30._8_4_ = SUB84(dVar10,0);
    auVar30._0_8_ = dVar9;
    auVar30._12_4_ = uVar38;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar24;
    auVar31 = blendpd(auVar30,auVar11,2);
    auVar43._0_8_ = auVar42._8_8_ * dVar29 - dVar4 * dVar9;
    auVar43._8_8_ = dVar24 * dVar4 - auVar25._8_8_ * dVar10;
    auVar32._0_8_ = auVar31._0_8_ * dVar5 - auVar34._0_8_ * dVar24;
    auVar32._8_8_ = auVar31._8_8_ * dVar6 - auVar34._8_8_ * 0.0;
    dVar7 = auVar43._8_8_ + auVar43._8_8_;
    dVar8 = auVar32._0_8_ + auVar32._0_8_;
    uVar38 = SUB84(dVar8,0);
    uVar39 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar31 = blendpd(auVar43,auVar32,2);
    auVar40._8_4_ = uVar38;
    auVar40._0_8_ = dVar7;
    auVar40._12_4_ = uVar39;
    auVar26._8_4_ = uVar38;
    auVar26._0_8_ = dVar7;
    auVar26._12_4_ = uVar39;
    auVar35._8_4_ = uVar38;
    auVar35._0_8_ = dVar7;
    auVar35._12_4_ = uVar39;
    auVar44._0_8_ = auVar31._0_8_ + auVar31._0_8_;
    auVar44._8_8_ = auVar31._8_8_ + auVar31._8_8_;
    auVar31._0_8_ = this->_padding_;
    auVar31._8_8_ = this->_padding_;
    auVar41._0_8_ = auVar40._8_8_ * dVar29 - dVar7 * dVar4;
    auVar41._8_8_ = auVar44._0_8_ * dVar4 - auVar26._8_8_ * dVar5;
    auVar36 = blendpd(auVar35,auVar44,2);
    auVar27._8_4_ = SUB84(auVar44._8_8_,0);
    auVar27._0_8_ = auVar44._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
    auVar37._0_8_ = auVar36._0_8_ * dVar5 - auVar44._0_8_ * auVar34._0_8_;
    auVar37._8_8_ = auVar36._8_8_ * dVar6 - auVar27._8_8_ * auVar34._8_8_;
    uVar1 = this->_padding_;
    lVar21 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                (uint)((ulonglong)uVar1 >> 0x20),
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar1) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar31);
    lVar22 = -(ulonglong)
              ((double)CONCAT44((uint)((ulonglong)auVar31._0_8_ >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                (uint)auVar31._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
              <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar23 = -(ulonglong)
              ((double)CONCAT44((uint)((ulonglong)auVar31._8_8_ >> 0x20) & _UNK_15061cc8c,
                                (uint)auVar31._8_8_ & _UNK_15061cc88) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar28._8_4_ = SUB84(auVar41._8_8_,0);
    auVar28._0_8_ = auVar41._0_8_;
    auVar28._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
    dVar4 = (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar34._4_4_,
                             ~(uint)lVar22 & auVar34._0_4_) *
            (dVar7 * dVar6 + dVar9 + auVar28._8_8_);
    dVar5 = (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar34._12_4_,
                             ~(uint)lVar23 & auVar34._8_4_) *
            (dVar8 * dVar6 + dVar10 + auVar37._0_8_);
    auVar36._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar36._0_8_ = uVar1;
    auVar36._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
    local_198._8_4_ = SUB84(dVar5,0);
    local_198._0_8_ = dVar4;
    local_198._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar34 = blendpd(auVar41,auVar37,2);
    dVar29 = (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar31._4_4_,
                              ~(uint)lVar21 & auVar31._0_4_) *
             (auVar44._0_8_ * dVar6 + dVar24 + auVar34._0_8_);
    local_188 = dVar29;
  }
  else {
    dVar4 = *(double *)&param_1->field0_0x0;
    dVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    dVar29 = (param_1->field0_0x0)._s_0.Z;
  }
  uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if ((-1 < param_2) && (param_2 <= iVar14)) {
    if (param_2 == 0) {
      local_1f0.InVal = 0.0;
    }
    else {
      local_1f0.InVal = GetInputKeyValueAtSplinePoint(this,param_2 + -1);
      local_1f0.InVal = local_1f0.InVal + fVar12;
    }
    local_2d8.Rotation.Pitch = 0.0;
    local_2d8.Rotation.Yaw = 0.0;
    local_2d8.Type.Value = '\x01';
    local_2d8.ArriveTangent.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_2d8.ArriveTangent.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2d8.LeaveTangent.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_2d8.LeaveTangent.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2d8.Rotation.Roll = 0.0;
    local_2d8.Position.field0_0x0._8_4_ = SUB84(dVar5,0);
    local_2d8.Position.field0_0x0._0_8_ = dVar4;
    local_2d8.Position.field0_0x0._12_4_ = uVar38;
    local_2d8.ArriveTangent.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2d8.LeaveTangent.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2d8.InputKey = local_1f0.InVal;
    local_2d8.Position.field0_0x0._s_0.Z = dVar29;
    pTVar16 = UE::Math::TQuat<double>::Rotator(&UE::Math::TQuat<double>::Identity,local_f8);
    dVar6 = __real_3ff0000000000000;
    local_2d8.Rotation.Pitch = pTVar16->Pitch;
    local_2d8.Rotation.Yaw = pTVar16->Yaw;
    local_2d8.Rotation.Roll = pTVar16->Roll;
    local_2d8.Scale.field0_0x0._s_0.Y = ___xmm_3ff00000000000003ff0000000000000;
    local_2d8.Scale.field0_0x0._s_0.Z = _UNK_150689688;
    local_2d8.Scale.field0_0x0._s_0.X = __real_3ff0000000000000;
    FSpline::InsertPoint(&this->Spline,&local_2d8,param_2);
    local_248.ArriveTangent.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_248.ArriveTangent.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_248.InterpMode.Value = '\x01';
    local_248.LeaveTangent.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_248.LeaveTangent.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_248.OutVal.field0_0x0._8_4_ = SUB84(dVar5,0);
    local_248.OutVal.field0_0x0._0_8_ = dVar4;
    local_248.OutVal.field0_0x0._12_4_ = uVar38;
    local_248.ArriveTangent.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_248.LeaveTangent.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_248.InVal = local_1f0.InVal;
    local_248.OutVal.field0_0x0._s_0.Z = dVar29;
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
               &this->SplineCurves,&local_248,param_2);
    local_178.OutVal.X = UE::Math::TQuat<double>::Identity.X;
    local_178.OutVal.Y = UE::Math::TQuat<double>::Identity.Y;
    local_178.OutVal.Z = UE::Math::TQuat<double>::Identity.Z;
    local_178.OutVal.W = UE::Math::TQuat<double>::Identity.W;
    local_178.ArriveTangent.X = UE::Math::TQuat<double>::Identity.X;
    local_178.ArriveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
    local_178.ArriveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
    local_178.ArriveTangent.W = UE::Math::TQuat<double>::Identity.W;
    local_178.LeaveTangent.X = UE::Math::TQuat<double>::Identity.X;
    local_178.LeaveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
    local_178.LeaveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
    local_178.LeaveTangent.W = UE::Math::TQuat<double>::Identity.W;
    local_178.InterpMode.Value = '\x01';
    local_178.InVal = local_1f0.InVal;
    TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_> *)
               &(this->SplineCurves).Rotation,&local_178,param_2);
    local_1f0.OutVal.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_1f0.OutVal.field0_0x0._s_0.Y = _UNK_150689688;
    local_1f0.InterpMode.Value = '\x01';
    local_1f0.ArriveTangent.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1f0.LeaveTangent.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1f0.OutVal.field0_0x0._s_0.Z = dVar6;
    local_1f0.ArriveTangent.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1f0.ArriveTangent.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1f0.LeaveTangent.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1f0.LeaveTangent.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
               &(this->SplineCurves).Scale,&local_1f0,param_2);
    plVar17 = (longlong *)(**(code **)(this->_padding_ + 0xa98))(this);
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0x2b0))(plVar17,param_2,__real_3f000000,this->bClosedLoop);
    }
    lVar21 = (longlong)*(int *)&(this->SplineCurves).Position.field_0x8;
    uVar18 = param_2 + 1;
    lVar22 = (longlong)(int)uVar18;
    if (lVar22 < lVar21) {
      lVar20 = lVar22 * 0x58;
      lVar23 = lVar22 << 7;
      do {
        uVar19 = ~uVar18 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar18 < *(int *)&(this->SplineCurves).Position.field_0x8) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)&(this->SplineCurves).Position;
        *(float *)(lVar2 + lVar20) = *(float *)(lVar2 + lVar20) + fVar12;
        uVar15 = 0;
        if ((int)uVar18 < *(int *)&(this->SplineCurves).Rotation.field_0x8) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)&(this->SplineCurves).Rotation;
        *(float *)(lVar2 + lVar23) = *(float *)(lVar2 + lVar23) + fVar12;
        uVar15 = 0;
        if ((int)uVar18 < *(int *)&(this->SplineCurves).Scale.field_0x8) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)&(this->SplineCurves).Scale;
        uVar18 = uVar18 + 1;
        lVar22 = lVar22 + 1;
        lVar23 = lVar23 + 0x80;
        *(float *)(lVar2 + lVar20) = *(float *)(lVar2 + lVar20) + fVar12;
        lVar20 = lVar20 + 0x58;
      } while (lVar22 < lVar21);
    }
    if (this->bLoopPositionOverride != false) {
      this->LoopPosition = this->LoopPosition + fVar12;
    }
  }
  if (param_4) {
    (**(code **)(this->_padding_ + 0xad0))(this);
  }
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  return;
}

// AllowsSpinePointLocationEditing @ 1479b1b90

bool __thiscall USplineComponent::AllowsSpinePointLocationEditing(USplineComponent *this)

{
  return true;
}

// AllowsSplinePointArriveTangentEditing @ 1479b1ba0

bool __thiscall USplineComponent::AllowsSplinePointArriveTangentEditing(USplineComponent *this)

{
  return true;
}

// AllowsSplinePointLeaveTangentEditing @ 1479b1bb0

bool __thiscall USplineComponent::AllowsSplinePointLeaveTangentEditing(USplineComponent *this)

{
  return true;
}

// AllowsSplinePointRotationEditing @ 1479b1bc0

bool __thiscall USplineComponent::AllowsSplinePointRotationEditing(USplineComponent *this)

{
  return true;
}

// AllowsSplinePointScaleEditing @ 1479b1bd0

bool __thiscall USplineComponent::AllowsSplinePointScaleEditing(USplineComponent *this)

{
  return true;
}

// ApplyComponentInstanceData @ 1479b1ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USplineComponent::ApplyComponentInstanceData
          (USplineComponent *this,FSplineComponentInstanceData *param_1,bool param_2)

{
  ulonglong uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FSplineCurves *pFVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 auStackY_268 [32];
  undefined1 local_1f8 [8];
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> local_1f0;
  FProperty *local_1e0;
  int local_1d8;
  int local_1d4;
  FUObjectCppClassStaticFunctions local_1d0;
  USplineComponent *local_1c8;
  FSplineComponentInstanceData *local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  FName local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  initializer_list<FName> local_148;
  FName local_138;
  FName local_130;
  void *local_128 [3];
  void *local_110;
  void *local_f8;
  void *local_e0;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1c8 = this;
  local_1c0 = param_1;
  if ((param_1 == (FSplineComponentInstanceData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SplineInstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                         ,0xdf9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2) {
    if (this->bInputSplinePointsToConstructionScript != false) {
      return;
    }
    bVar4 = FSpline::operator==(&param_1->SplinePreUCS,&this->Spline);
    this->bModifiedByConstructionScript = !bVar4;
    uVar5 = 1;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    pFVar6 = ::FName::FName(&local_138,0xc,L"SplineCurves",FNAME_Add);
    local_1b8 = *pFVar6;
    pFVar6 = ::FName::FName(&local_130,6,L"Spline",FNAME_Add);
    local_1b0 = *pFVar6;
    local_148._First = &local_1b8;
    local_148._Last = &local_1a8;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_148);
    uVar12 = local_70;
    uStack_1a0 = 0;
    local_188 = 0;
    uStack_18c = uStack_1a0;
    if (local_70 != 0) {
      puVar13 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar13 = local_78;
      }
      uVar11 = *puVar13;
      local_188 = 0;
      uStack_1a0 = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)(int)uStack_1a0;
        local_188 = local_188 + 0x20;
        uStack_1a0 = uStack_1a0 + 1;
        uStack_18c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1a0)
        goto LAB_1479b2191;
        uVar11 = puVar13[lVar9 + 1];
      }
      uVar5 = -uVar11 & uVar11;
      uVar1 = (ulonglong)uVar5 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_1d8 = (int)lVar9;
      uStack_18c = (local_188 - 1) + local_1d8;
      if ((int)local_70 < (int)uStack_18c) {
        uStack_18c = local_70;
      }
    }
LAB_1479b2191:
    local_1a8 = (FName)local_98;
    uStack_184 = local_a4;
    local_198 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar11 = local_70 & 0xffffffe0;
    iStack_180 = local_98._8_4_ - local_64;
    uStack_190 = 0xffffffff;
    TStack_170.CurrentBitIndex = uStack_18c;
    TStack_170.UnvisitedBitMask = 0xffffffff;
    TStack_170._padding_ = CONCAT44(uVar5,uStack_1a0);
    iVar10 = (int)local_70 >> 5;
    TStack_170._28_4_ = local_a4;
    TStack_170.BaseBitIndex = local_188;
    uStack_150 = CONCAT44(uStack_17c,iStack_180);
    bVar8 = (byte)local_70;
    uStack_19c = uVar5;
    local_178 = local_1a8;
    TStack_170.Array = local_198;
    if (((int)local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar12 != local_70) {
      puVar13 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar13 = local_78;
      }
      uVar12 = -1 << (bVar8 & 0x1f) & puVar13[iVar10];
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar10;
        uVar11 = uVar11 + 0x20;
        iVar10 = iVar10 + 1;
        uVar12 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_1479b22a3;
        uVar12 = puVar13[lVar9 + 1];
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_1d4 = (int)lVar9;
      uVar12 = local_1d4 + -1 + uVar11;
      if ((int)local_70 < (int)uVar12) {
        uVar12 = local_70;
      }
    }
LAB_1479b22a3:
    while( true ) {
      FVar2 = local_178;
      if (*(int *)((longlong)local_178 + 8) - *(int *)((longlong)local_178 + 0x34) !=
          (int)uStack_150) {
        local_1f8[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
      }
      param_1 = local_1c0;
      this = local_1c8;
      if (((TStack_170.CurrentBitIndex == uVar12) &&
          (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (FVar2 == (FName)local_98)) break;
      FVar2 = *(FName *)(*(longlong *)FVar2 + (longlong)TStack_170.CurrentBitIndex * 0x10);
      if (Z_Registration_Info_UClass_USplineComponent.InnerSingleton == (UClass *)0x0) {
        local_1d0.AddReferencedObjects = UActorComponent::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/Engine",L"SplineComponent",
                   &Z_Registration_Info_UClass_USplineComponent.InnerSingleton,
                   StaticRegisterNativesUSplineComponent,0x700,0x10,CLASS_Intrinsic|CLASS_Config,
                   CASTCLASS_None,L"Engine",InternalConstructor<USplineComponent>,
                   InternalVTableHelperCtorCaller<USplineComponent>,&local_1d0,
                   UPrimitiveComponent::StaticClass,UObject::StaticClass);
      }
      local_1e0 = FindFProperty<FProperty>
                            ((UStruct *)Z_Registration_Info_UClass_USplineComponent.InnerSingleton,
                             FVar2,Default);
      if (((local_1f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e0) &&
          ((FScriptContainerElement *)&local_1e0 <
           local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = local_1f0.ArrayNum;
      if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
      }
      local_1f0.ArrayNum = iVar10 + 1;
      *(FProperty **)(local_1f0.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_1e0;
      TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    UActorComponent::RemoveUCSModifiedProperties((UActorComponent *)this,&local_1f0);
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
  }
  else {
    FSpline::operator=(&param_1->SplinePreUCS,&this->Spline);
  }
  if (param_1->bSplineHasBeenEdited != false) {
    pFVar7 = FSplineCurves::FromSplineInterface((FSplineCurves *)local_128,&param_1->Spline);
    FSplineCurves::operator=(&this->SplineCurves,pFVar7);
    if (local_e0 != (void *)0x0) {
      FMemory::Free(local_e0);
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
    if (local_128[0] != (void *)0x0) {
      FMemory::Free(local_128[0]);
    }
    FSpline::operator=(&this->Spline,&param_1->Spline);
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSplineChanged);
    this->bClosedLoop = param_1->bClosedLoop;
    this->bModifiedByConstructionScript = false;
  }
  this->bSplineHasBeenEdited = param_1->bSplineHasBeenEdited;
  (**(code **)(this->_padding_ + 0xad0))(this);
  return;
}

// ApplyComponentInstanceData @ 1479b25f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USplineComponent::ApplyComponentInstanceData
          (USplineComponent *this,FSplineInstanceData *param_1,bool param_2)

{
  ulonglong uVar1;
  char cVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSplineCurves *pFVar7;
  FName *pFVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 auStackY_2c8 [32];
  undefined1 local_258 [8];
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> local_250;
  FProperty *local_240;
  int local_238;
  int local_234;
  FUObjectCppClassStaticFunctions local_230;
  FSplineInstanceData *local_228;
  USplineComponent *local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  uint uStack_200;
  uint uStack_1fc;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  uint local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FName local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  initializer_list<FName> local_1a8;
  FName local_198;
  FName local_190;
  void *local_188 [3];
  void *local_170;
  void *local_158;
  void *local_140;
  FScriptContainerElement *local_120 [3];
  void *local_108;
  void *local_f0;
  void *local_d8;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_228 = param_1;
  local_220 = this;
  if ((param_1 == (FSplineInstanceData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SplineInstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                         ,0xdcd,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2) {
    if (this->bInputSplinePointsToConstructionScript != false) {
      return;
    }
    pFVar7 = GetSplineCurves(this,(FSplineCurves *)local_188);
    iVar11 = *(int *)&(param_1->SplineCurvesPreUCS).Position.field_0x8;
    if (((((iVar11 == *(int *)&(pFVar7->Position).field_0x8) &&
          (bVar5 = CompareItems<FInterpCurvePoint<UE::Math::TVector<double>_>,int>
                             (*(FInterpCurvePoint<UE::Math::TVector<double>_> **)
                               &(param_1->SplineCurvesPreUCS).Position,
                              *(FInterpCurvePoint<UE::Math::TVector<double>_> **)&pFVar7->Position,
                              iVar11), bVar5)) &&
         (cVar2 = (param_1->SplineCurvesPreUCS).Position.field_0x10,
         cVar2 == (pFVar7->Position).field_0x10)) &&
        (((cVar2 == '\0' ||
          (*(float *)&(pFVar7->Position).field_0x14 ==
           *(float *)&(param_1->SplineCurvesPreUCS).Position.field_0x14)) &&
         ((iVar11 = *(int *)&(param_1->SplineCurvesPreUCS).Rotation.field_0x8,
          iVar11 == *(int *)&(pFVar7->Rotation).field_0x8 &&
          ((bVar5 = CompareItems<FInterpCurvePoint<UE::Math::TQuat<double>_>,int>
                              (*(FInterpCurvePoint<UE::Math::TQuat<double>_> **)
                                &(param_1->SplineCurvesPreUCS).Rotation,
                               *(FInterpCurvePoint<UE::Math::TQuat<double>_> **)&pFVar7->Rotation,
                               iVar11), bVar5 &&
           (cVar2 = (param_1->SplineCurvesPreUCS).Rotation.field_0x10,
           cVar2 == (pFVar7->Rotation).field_0x10)))))))) &&
       (((cVar2 == '\0' ||
         (*(float *)&(pFVar7->Rotation).field_0x14 ==
          *(float *)&(param_1->SplineCurvesPreUCS).Rotation.field_0x14)) &&
        (bVar5 = ::operator==((FInterpCurve<UE::Math::TVector<double>_> *)
                              &(param_1->SplineCurvesPreUCS).Scale,
                              (FInterpCurve<UE::Math::TVector<double>_> *)&pFVar7->Scale), bVar5))))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    this->bModifiedByConstructionScript = bVar5;
    if (local_140 != (void *)0x0) {
      FMemory::Free(local_140);
    }
    if (local_158 != (void *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_170 != (void *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_188[0] != (void *)0x0) {
      FMemory::Free(local_188[0]);
    }
    uVar6 = 1;
    local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.ArrayNum = 0;
    local_250.ArrayMax = 0;
    pFVar8 = ::FName::FName(&local_198,0xc,L"SplineCurves",FNAME_Add);
    local_218 = *pFVar8;
    pFVar8 = ::FName::FName(&local_190,6,L"Spline",FNAME_Add);
    local_210 = *pFVar8;
    local_1a8._First = &local_218;
    local_1a8._Last = &local_208;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_1a8);
    uVar13 = local_70;
    uStack_200 = 0;
    local_1e8 = 0;
    uStack_1ec = uStack_200;
    if (local_70 != 0) {
      puVar14 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar14 = local_78;
      }
      uVar12 = *puVar14;
      local_1e8 = 0;
      uStack_200 = 0;
      while (uVar12 == 0) {
        lVar10 = (longlong)(int)uStack_200;
        local_1e8 = local_1e8 + 0x20;
        uStack_200 = uStack_200 + 1;
        uStack_1ec = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_200)
        goto LAB_1479b2870;
        uVar12 = puVar14[lVar10 + 1];
      }
      uVar6 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_238 = (int)lVar10;
      uStack_1ec = (local_1e8 - 1) + local_238;
      if ((int)local_70 < (int)uStack_1ec) {
        uStack_1ec = local_70;
      }
    }
LAB_1479b2870:
    local_208 = (FName)local_98;
    uStack_1e4 = local_9c;
    local_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar12 = local_70 & 0xffffffe0;
    iStack_1e0 = local_98._8_4_ - local_64;
    uStack_1f0 = 0xffffffff;
    TStack_1d0.CurrentBitIndex = uStack_1ec;
    TStack_1d0.UnvisitedBitMask = 0xffffffff;
    TStack_1d0._padding_ = CONCAT44(uVar6,uStack_200);
    iVar11 = (int)local_70 >> 5;
    TStack_1d0._28_4_ = local_9c;
    TStack_1d0.BaseBitIndex = local_1e8;
    uStack_1b0 = CONCAT44(uStack_1dc,iStack_1e0);
    bVar9 = (byte)local_70;
    uStack_1fc = uVar6;
    local_1d8 = local_208;
    TStack_1d0.Array = local_1f8;
    if (((int)local_70 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar13 != local_70) {
      puVar14 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar14 = local_78;
      }
      uVar13 = -1 << (bVar9 & 0x1f) & puVar14[iVar11];
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar11;
        uVar12 = uVar12 + 0x20;
        iVar11 = iVar11 + 1;
        uVar13 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1479b2982;
        uVar13 = puVar14[lVar10 + 1];
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_234 = (int)lVar10;
      uVar13 = local_234 + -1 + uVar12;
      if ((int)local_70 < (int)uVar13) {
        uVar13 = local_70;
      }
    }
LAB_1479b2982:
    while( true ) {
      FVar3 = local_1d8;
      if (*(int *)((longlong)local_1d8 + 8) - *(int *)((longlong)local_1d8 + 0x34) !=
          (int)uStack_1b0) {
        local_258[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
      }
      this = local_220;
      param_1 = local_228;
      if (((TStack_1d0.CurrentBitIndex == uVar13) &&
          (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (FVar3 == (FName)local_98)) break;
      FVar3 = *(FName *)(*(longlong *)FVar3 + (longlong)TStack_1d0.CurrentBitIndex * 0x10);
      if (Z_Registration_Info_UClass_USplineComponent.InnerSingleton == (UClass *)0x0) {
        local_230.AddReferencedObjects = UActorComponent::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/Engine",L"SplineComponent",
                   &Z_Registration_Info_UClass_USplineComponent.InnerSingleton,
                   StaticRegisterNativesUSplineComponent,0x700,0x10,CLASS_Intrinsic|CLASS_Config,
                   CASTCLASS_None,L"Engine",InternalConstructor<USplineComponent>,
                   InternalVTableHelperCtorCaller<USplineComponent>,&local_230,
                   UPrimitiveComponent::StaticClass,UObject::StaticClass);
      }
      local_240 = FindFProperty<FProperty>
                            ((UStruct *)Z_Registration_Info_UClass_USplineComponent.InnerSingleton,
                             FVar3,Default);
      if (((local_250.AllocatorInstance.Data <= (FScriptContainerElement *)&local_240) &&
          ((FScriptContainerElement *)&local_240 <
           local_250.AllocatorInstance.Data + (longlong)local_250.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = local_250.ArrayNum;
      if (local_250.ArrayNum == local_250.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_250.AllocatorInstance,&local_250.ArrayMax);
      }
      local_250.ArrayNum = iVar11 + 1;
      *(FProperty **)(local_250.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_240;
      TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    UActorComponent::RemoveUCSModifiedProperties((UActorComponent *)this,&local_250);
    local_120[0] = local_250.AllocatorInstance.Data;
  }
  else {
    pFVar7 = GetSplineCurves(this,(FSplineCurves *)local_120);
    FSplineCurves::operator=(&param_1->SplineCurvesPreUCS,pFVar7);
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
  }
  if (local_120[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120[0]);
  }
  if (param_1->bSplineHasBeenEdited != false) {
    FSplineCurves::operator=(&this->SplineCurves,&param_1->SplineCurves);
    FSpline::operator=(&this->Spline,&param_1->SplineCurves);
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSplineChanged);
    this->bClosedLoop = param_1->bClosedLoop;
    this->bModifiedByConstructionScript = false;
  }
  this->bSplineHasBeenEdited = param_1->bSplineHasBeenEdited;
  (**(code **)(this->_padding_ + 0xad0))(this);
  return;
}

// CalcBounds @ 1479b63c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
USplineComponent::CalcBounds
          (USplineComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FInterpCurveVector *pFVar9;
  TBoxSphereBounds<double,double> *pTVar10;
  TMatrix<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  FInterpCurvePoint<UE::Math::TVector<double>_> *pFVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  uint local_218;
  TVector<double>_u_0 local_210;
  TVector<double>_u_0 local_1f8;
  longlong local_1e0;
  TBoxSphereBounds<double,double> *local_1d8;
  TTransform<double> *local_1d0;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_1c8;
  TVector<double>_u_0 local_168;
  double local_150;
  double local_148;
  double local_140;
  TVector<double>_u_0 local_130;
  double local_118;
  double dStack_110;
  double local_108;
  undefined1 local_100;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_1d8 = __return_storage_ptr__;
  local_1d0 = param_1;
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar6 = FSpline::IsEnabledStatic(), !bVar6)) {
    pFVar9 = &(this->SplineCurves).Position;
  }
  else {
    pFVar9 = FSpline::GetSplinePointsPosition(&this->Spline);
  }
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar6 = FSpline::IsEnabledStatic(), bVar6)) {
    uVar7 = FSpline::GetNumControlPoints(&this->Spline);
  }
  else {
    uVar7 = *(uint *)&(this->SplineCurves).Position.field_0x8;
  }
  uVar1 = uVar7 - 1;
  uVar12 = uVar7;
  if (this->bClosedLoop == false) {
    uVar12 = uVar1;
  }
  local_1f8._s_0.Z = __real_42a0000000000000;
  local_210._s_0.Z = __real_c2a0000000000000;
  local_1f8._s_0.X = ___xmm_42a000000000000042a0000000000000;
  local_1f8._s_0.Y = _UNK_151820658;
  local_210._s_0.X = ___xmm_c2a0000000000000c2a0000000000000;
  local_210._s_0.Y = _UNK_151820678;
  if ((int)uVar12 < 1) {
    if (uVar7 == 1) {
      if (*(int *)&pFVar9->field_0x8 < 1) {
        local_228 = 0;
        local_220 = (longlong)*(int *)&pFVar9->field_0x8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
          return pTVar10;
        }
      }
      lVar14 = *(longlong *)pFVar9;
      local_210._s_0.X = *(double *)(lVar14 + 8);
      local_210._s_0.Y = *(double *)(lVar14 + 0x10);
      local_210._s_0.Z = *(double *)(lVar14 + 0x18);
      local_1f8._s_0.X = local_210._s_0.X;
      local_1f8._s_0.Y = local_210._s_0.Y;
      local_1f8._s_0.Z = local_210._s_0.Z;
    }
    else {
      local_1f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_210._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_210._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_210._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  else {
    local_1e0 = (longlong)(int)uVar12;
    if (0 < (int)uVar12) {
      lVar14 = 0;
      uVar7 = 0;
      do {
        local_218 = uVar7 + 1;
        lVar2 = lVar14 + 1;
        lVar13 = 0;
        if (uVar7 != uVar1) {
          lVar13 = lVar2;
        }
        uVar12 = 0;
        if (uVar7 != uVar1) {
          uVar12 = local_218;
        }
        uVar8 = 0;
        if ((int)uVar7 < *(int *)&pFVar9->field_0x8) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_228 = (longlong)(int)uVar7;
          local_220 = (longlong)*(int *)&pFVar9->field_0x8;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
            return pTVar10;
          }
        }
        pFVar15 = (FInterpCurvePoint<UE::Math::TVector<double>_> *)
                  (lVar14 * 0x58 + *(longlong *)pFVar9);
        uVar8 = 0;
        if ((int)uVar12 < *(int *)&pFVar9->field_0x8) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_228 = (longlong)(int)uVar12;
          local_220 = (longlong)*(int *)&pFVar9->field_0x8;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
            return pTVar10;
          }
        }
        lVar14 = *(longlong *)pFVar9;
        lVar13 = lVar13 * 0x58;
        local_1c8._0_8_ = *(undefined8 *)(lVar13 + lVar14);
        local_1c8.OutVal.field0_0x0._s_0.X = (double)((undefined8 *)(lVar13 + lVar14))[1];
        pdVar3 = (double *)(lVar13 + 0x10 + lVar14);
        local_1c8.OutVal.field0_0x0._s_0.Y = *pdVar3;
        local_1c8.OutVal.field0_0x0._s_0.Z = pdVar3[1];
        pdVar3 = (double *)(lVar13 + 0x20 + lVar14);
        local_1c8.ArriveTangent.field0_0x0._s_0.X = *pdVar3;
        local_1c8.ArriveTangent.field0_0x0._s_0.Y = pdVar3[1];
        pdVar3 = (double *)(lVar13 + 0x30 + lVar14);
        local_1c8.ArriveTangent.field0_0x0._s_0.Z = *pdVar3;
        local_1c8.LeaveTangent.field0_0x0._s_0.X = pdVar3[1];
        pdVar3 = (double *)(lVar13 + 0x40 + lVar14);
        local_1c8.LeaveTangent.field0_0x0._s_0.Y = *pdVar3;
        local_1c8.LeaveTangent.field0_0x0._s_0.Z = pdVar3[1];
        local_1c8._80_8_ = *(undefined8 *)(lVar13 + 0x50 + lVar14);
        if (uVar7 == uVar1) {
          local_1c8.InVal = *(float *)&pFVar9->field_0x14 + pFVar15->InVal;
        }
        CurveVectorFindIntervalBounds
                  (pFVar15,&local_1c8,(TVector<double> *)&local_1f8._s_0,
                   (TVector<double> *)&local_210._s_0);
        lVar14 = lVar2;
        __return_storage_ptr__ = local_1d8;
        uVar7 = local_218;
      } while (lVar2 < local_1e0);
    }
  }
  local_130._s_0.Z = local_1f8._s_0.Z;
  local_100 = 1;
  local_130._s_0.X = local_1f8._s_0.X;
  local_130._s_0.Y = local_1f8._s_0.Y;
  local_118 = local_210._s_0.X;
  dStack_110 = local_210._s_0.Y;
  local_108 = local_210._s_0.Z;
  pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale(local_1d0,&local_f8);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_130._s_0,(TBox<double> *)&local_168._s_0,pTVar11);
  local_140 = local_140 - local_168._s_0.Z;
  local_148 = local_148 - local_168._s_0.Y;
  dVar18 = local_140 * __real_3fe0000000000000;
  dVar5 = (local_150 - local_168._s_0.X) * __real_3fe0000000000000;
  dVar19 = local_148 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar5 + local_168._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar19 + local_168._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar18 + local_168._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar5;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar19;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar18;
  dVar5 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar16._0_8_ = dVar5 * dVar5;
  auVar16._8_8_ = 0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ =
       (local_140 * local_140 + local_148 * local_148) * __real_3fd0000000000000 + auVar16._0_8_;
  auVar17 = sqrtpd(auVar16,auVar17);
  __return_storage_ptr__->SphereRadius = auVar17._0_8_;
  return __return_storage_ptr__;
}

// CanResetToDefault @ 1479b7a60

bool __thiscall USplineComponent::CanResetToDefault(USplineComponent *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  pUVar3 = UObject::GetArchetype((UObject *)this);
  if (pUVar3 == (UObject *)0x0) {
    pFVar5 = GetTypeName<USplineComponent>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar4->_padding_)) {
    bVar2 = FSpline::operator==(&this->Spline,(FSpline *)&pUVar3[0x21].field_0x20);
    return !bVar2;
  }
  pFVar5 = GetTypeName<USplineComponent>(&local_28);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,pUVar3);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// ClearSplinePoints @ 1479b80c0

void __thiscall USplineComponent::ClearSplinePoints(USplineComponent *this,bool param_1)

{
  int iVar1;
  longlong *plVar2;
  
  FSpline::Reset(&this->Spline);
  iVar1 = *(int *)&(this->SplineCurves).Position.field_0xc;
  *(undefined4 *)&(this->SplineCurves).Position.field_0x8 = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&this->SplineCurves,0,
               (int *)&(this->SplineCurves).Position.field_0xc);
  }
  iVar1 = *(int *)&(this->SplineCurves).Rotation.field_0xc;
  *(undefined4 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)&(this->SplineCurves).Rotation,0,
               (int *)&(this->SplineCurves).Rotation.field_0xc);
  }
  iVar1 = *(int *)&(this->SplineCurves).Scale.field_0xc;
  *(undefined4 *)&(this->SplineCurves).Scale.field_0x8 = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&(this->SplineCurves).Scale,0,
               (int *)&(this->SplineCurves).Scale.field_0xc);
  }
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0xa98))(this);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2e0))(plVar2,0);
  }
  if (param_1) {
    (**(code **)(this->_padding_ + 0xad0))(this);
  }
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  return;
}

// ConvertSplineSegmentToPolyLine @ 1479b9480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
USplineComponent::ConvertSplineSegmentToPolyLine
          (USplineComponent *this,int param_1,Type param_2,float param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TVector<double>_u_0 *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float local_res10 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<double,TSizedDefaultAllocator<32>_> local_a8;
  TVector<double>_u_0 local_98 [4];
  
  piVar1 = &param_4->ArrayMax;
  piVar2 = &param_4->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_4->AllocatorInstance,0,piVar1);
  }
  fVar14 = GetDistanceAlongSplineAtSplinePoint(this,param_1);
  fVar15 = GetDistanceAlongSplineAtSplinePoint(this,param_1 + 1);
  dVar8 = ((double)fVar15 - (double)fVar14) * __real_3fe0000000000000;
  if (dVar8 == 0.0) {
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
      fVar14 = FSpline::GetParameterAtDistance(&this->Spline,fVar15);
    }
    else {
      local_res10[0] = 0.0;
      fVar14 = FInterpCurve<float>::Eval
                         ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar15,
                          local_res10);
    }
    GetLocationAtSplineInputKey(this,(TVector<double> *)&local_98[0]._s_0,fVar14,param_2);
    pTVar4 = (TVector<double>_u_0 *)(param_4->AllocatorInstance).Data;
    if (((pTVar4 <= local_98) &&
        (local_98 < (TVector<double>_u_0 *)(pTVar4->XYZ + (longlong)*piVar1 * 3))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    iVar11 = *piVar2;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&param_4->AllocatorInstance,piVar1);
    }
    *piVar2 = iVar11 + 1;
    pFVar5 = (param_4->AllocatorInstance).Data;
    pFVar3 = pFVar5 + (longlong)iVar11 * 0x18;
    *(undefined8 *)pFVar3 = local_98[0]._s_0.X;
    *(undefined8 *)(pFVar3 + 8) = local_98[0]._s_0.Y;
    *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) = local_98[0]._s_0.Z;
    return true;
  }
  dVar7 = dVar8 + (double)fVar14;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar15 = (float)dVar7;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  bVar9 = DivideSplineIntoPolylineRecursiveWithDistancesHelper
                    (this,fVar14,fVar15,param_2,param_3,&local_b8,&local_a8);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (bVar9) {
    iVar11 = *piVar2;
    if (0 < iVar11) {
      uVar12 = 0;
      if ((int)(iVar11 - 1U) < iVar11) {
        uVar12 = ~(iVar11 - 1U) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      lVar13 = (longlong)*piVar2;
      pFVar3 = (param_4->AllocatorInstance).Data;
      if ((local_b8.ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if ((((*(double *)local_b8.AllocatorInstance.Data !=
             *(double *)(pFVar3 + lVar13 * 0x18 + -0x18)) ||
           (*(double *)(local_b8.AllocatorInstance.Data + 8) !=
            *(double *)(pFVar3 + lVar13 * 0x18 + -0x10))) ||
          (*(double *)(local_b8.AllocatorInstance.Data + 0x10) !=
           *(double *)(pFVar3 + lVar13 * 0x18 + -8))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutPoints.Last() == NewPoints[0]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                             ,0x9b4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAt
                (param_4,*piVar2 + -1,Default);
    }
    if ((param_4 == &local_b8) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    lVar13 = (longlong)local_b8.ArrayNum;
    if (local_b8.ArrayNum != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,local_b8.ArrayNum,&param_4->AllocatorInstance,piVar2,piVar1);
      memcpy((param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x18,
             local_b8.AllocatorInstance.Data,lVar13 * 0x18);
    }
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  bVar9 = DivideSplineIntoPolylineRecursiveWithDistancesHelper
                    (this,fVar15,(float)(dVar7 + dVar8),param_2,param_3,&local_b8,&local_a8);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (bVar9) {
    iVar11 = *piVar2;
    if (0 < iVar11) {
      uVar12 = 0;
      if ((int)(iVar11 - 1U) < iVar11) {
        uVar12 = ~(iVar11 - 1U) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      lVar13 = (longlong)*piVar2;
      pFVar3 = (param_4->AllocatorInstance).Data;
      if ((local_b8.ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if ((((*(double *)local_b8.AllocatorInstance.Data !=
             *(double *)(pFVar3 + lVar13 * 0x18 + -0x18)) ||
           (*(double *)(local_b8.AllocatorInstance.Data + 8) !=
            *(double *)(pFVar3 + lVar13 * 0x18 + -0x10))) ||
          (*(double *)(local_b8.AllocatorInstance.Data + 0x10) !=
           *(double *)(pFVar3 + lVar13 * 0x18 + -8))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutPoints.Last() == NewPoints[0]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                             ,0x9b4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAt
                (param_4,*piVar2 + -1,Default);
    }
    if ((param_4 == &local_b8) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    lVar13 = (longlong)local_b8.ArrayNum;
    if (local_b8.ArrayNum != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,local_b8.ArrayNum,&param_4->AllocatorInstance,piVar2,piVar1);
      memcpy((param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x18,
             local_b8.AllocatorInstance.Data,lVar13 * 0x18);
    }
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return 0 < *piVar2;
}

// ConvertSplineToPolyLine @ 1479b9a50

bool __thiscall
USplineComponent::ConvertSplineToPolyLine
          (USplineComponent *this,Type param_1,float param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_58 [2];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar5 = FSpline::IsEnabledStatic(), !bVar5)) {
    uVar7 = *(uint *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    uVar7 = FSpline::GetNumControlPoints(&this->Spline);
  }
  iVar13 = 0;
  uVar10 = 0;
  uVar12 = uVar7;
  if ((this->bClosedLoop == false) && (uVar12 = uVar7 - 1, (int)(uVar7 - 1) < 0)) {
    uVar12 = uVar10;
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  piVar2 = &param_3->ArrayNum;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_3->AllocatorInstance,0,piVar1);
  }
  uVar7 = uVar12 * 2;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (*piVar1 < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar7,&param_3->AllocatorInstance,*piVar2,piVar1);
  }
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  if (0 < (int)uVar12) {
    do {
      bVar5 = ConvertSplineSegmentToPolyLine(this,iVar13,param_1,param_2,local_58);
      if (bVar5) {
        iVar9 = *piVar2;
        if (0 < iVar9) {
          uVar7 = uVar10;
          if ((int)(iVar9 - 1U) < iVar9) {
            uVar7 = ~(iVar9 - 1U) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar8 = (longlong)*piVar2;
          pFVar3 = (param_3->AllocatorInstance).Data;
          if ((local_58[0].ArrayNum < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((((*(double *)local_58[0].AllocatorInstance.Data !=
                 *(double *)(pFVar3 + lVar8 * 0x18 + -0x18)) ||
               (*(double *)(local_58[0].AllocatorInstance.Data + 8) !=
                *(double *)(pFVar3 + lVar8 * 0x18 + -0x10))) ||
              (*(double *)(local_58[0].AllocatorInstance.Data + 0x10) !=
               *(double *)(pFVar3 + lVar8 * 0x18 + -8))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("OutPoints.Last() == SegmentPoints[0]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                                 ,0x9cd,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar11 = *piVar2 - 1;
          uVar7 = uVar10;
          if ((int)uVar11 < *piVar2) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar3 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x18;
          iVar9 = *piVar2 + ~uVar11;
          if (iVar9 != 0) {
            memmove(pFVar3,pFVar3 + 0x18,(longlong)iVar9 * 0x18);
          }
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&param_3->AllocatorInstance,*piVar2,piVar1);
        }
        if ((param_3 == local_58) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar8 = (longlong)local_58[0].ArrayNum;
        if (local_58[0].ArrayNum != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,local_58[0].ArrayNum,&param_3->AllocatorInstance,piVar2,piVar1);
          memcpy((param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x18,
                 local_58[0].AllocatorInstance.Data,lVar8 * 0x18);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)uVar12);
  }
  iVar13 = *piVar2;
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return 0 < iVar13;
}

// ConvertSplineToPolyLineWithDistances @ 1479b9dc0

bool __thiscall
USplineComponent::ConvertSplineToPolyLineWithDistances
          (USplineComponent *this,Type param_1,float param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<double,TSizedDefaultAllocator<32>_> *param_4)

{
  bool bVar1;
  float fVar2;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetSplineLength(&this->Spline);
      goto LAB_1479b9e0b;
    }
  }
  fVar2 = FSplineCurves::GetSplineLength(&this->SplineCurves);
LAB_1479b9e0b:
  bVar1 = ConvertSplineToPolyline_InDistanceRange
                    (this,param_1,param_2,0.0,fVar2,param_3,param_4,false);
  return bVar1;
}

// ConvertSplineToPolyline_InDistanceRange @ 1479b9e60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
USplineComponent::ConvertSplineToPolyline_InDistanceRange
          (USplineComponent *this,Type param_1,float param_2,float param_3,float param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<double,TSizedDefaultAllocator<32>_> *param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  TVector<double>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FSpline *this_00;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_168;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_160;
  TArray<double,TSizedDefaultAllocator<32>_> local_150;
  undefined8 local_140;
  double local_138;
  double local_130;
  float local_128;
  float local_124;
  TArray<double,TSizedDefaultAllocator<32>_> local_120;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_110;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double> local_d0 [6];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar11 = FSpline::IsEnabledStatic(), !bVar11)) {
    iVar13 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar13 = FSpline::GetNumControlPoints(&this->Spline);
  }
  this_00 = &this->Spline;
  if (iVar13 != 0) {
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
      uVar14 = FSpline::GetNumControlPoints(this_00);
    }
    else {
      uVar14 = *(uint *)&(this->SplineCurves).Position.field_0x8;
    }
    uVar19 = uVar14;
    if ((this->bClosedLoop == false) && (uVar19 = uVar14 - 1, (int)(uVar14 - 1) < 0)) {
      uVar19 = 0;
    }
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
      fVar21 = FSpline::GetSplineLength(this_00);
    }
    else {
      fVar21 = FSplineCurves::GetSplineLength(&this->SplineCurves);
    }
    if (0.0 < fVar21) {
      if (param_2 <= __real_322bcc77) {
        param_2 = __real_322bcc77;
      }
      bVar11 = false;
      fVar22 = param_3;
      if ((this->bClosedLoop == false) || (!param_7)) {
        fVar22 = fVar21;
        if (param_4 <= fVar21) {
          fVar22 = param_4;
        }
        param_4 = fVar22;
        fVar22 = fVar21;
        if (param_3 <= fVar21) {
          fVar22 = param_3;
        }
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
      }
      else if ((param_3 < 0.0) || (fVar21 < param_4)) {
        bVar11 = true;
      }
      if (fVar22 <= param_4) {
        piVar2 = &param_5->ArrayMax;
        fVar24 = __real_3f800000 / fVar21;
        param_5->ArrayNum = 0;
        uVar14 = (int)((param_4 - fVar22) * fVar24) * uVar19 * 2;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&param_5->AllocatorInstance,0,piVar2);
        }
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if (*piVar2 < (int)uVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar14,&param_5->AllocatorInstance,param_5->ArrayNum,piVar2);
        }
        piVar2 = &param_6->ArrayMax;
        param_6->ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&param_6->AllocatorInstance,0,piVar2);
        }
        if (*piVar2 < (int)uVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar14,&param_6->AllocatorInstance,param_6->ArrayNum,piVar2);
        }
        fVar23 = __real_3f000000;
        if (fVar22 == param_4) {
          pFVar16 = (FScriptContainerElement *)
                    GetLocationAtDistanceAlongSpline(this,local_d0,fVar22,param_1);
          pFVar1 = (param_5->AllocatorInstance).Data;
          if (((pFVar1 <= pFVar16) && (pFVar16 < pFVar1 + (longlong)param_5->ArrayMax * 0x18)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar12 = (*pcVar5)();
            return (bool)uVar12;
          }
          iVar13 = param_5->ArrayNum;
          if (iVar13 == param_5->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar13 + 1;
          dVar9 = *(double *)(pFVar16 + 8);
          pFVar4 = (param_5->AllocatorInstance).Data;
          pFVar1 = pFVar4 + (longlong)iVar13 * 0x18;
          *(double *)pFVar1 = (((TVector<double>_u_0 *)&pFVar16->field_0x0)->_s_0).X;
          *(double *)(pFVar1 + 8) = dVar9;
          *(undefined8 *)(pFVar4 + (longlong)iVar13 * 0x18 + 0x10) = *(undefined8 *)(pFVar16 + 0x10)
          ;
          pFVar1 = (param_6->AllocatorInstance).Data;
          local_138 = (double)fVar22;
          if (((pFVar1 <= (FScriptContainerElement *)&local_138) &&
              ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)param_6->ArrayMax * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar12 = (*pcVar5)();
            return (bool)uVar12;
          }
          iVar13 = param_6->ArrayNum;
          if (iVar13 == param_6->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
          }
          param_6->ArrayNum = iVar13 + 1;
          *(double *)((param_6->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_138;
          return true;
        }
        if (bVar11) {
          iVar13 = (int)ROUND((fVar22 + fVar22) * fVar24 - __real_3f000000) >> 1;
          fVar22 = FGenericPlatformMath::Fmod(fVar22,fVar21);
          if (fVar22 < 0.0) {
            fVar22 = fVar22 + fVar21;
          }
          iVar20 = (int)ROUND((param_4 + param_4) / fVar21 - fVar23) >> 1;
          fVar24 = FGenericPlatformMath::Fmod(param_4,fVar21);
          if (fVar24 < 0.0) {
            fVar24 = fVar24 + fVar21;
          }
          if (iVar20 < iVar13) {
            return false;
          }
          while( true ) {
            fVar23 = fVar21;
            if (iVar13 == iVar20) {
              fVar23 = fVar24;
            }
            local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_110.ArrayNum = 0;
            local_110.ArrayMax = 0;
            local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_120.ArrayNum = 0;
            local_120.ArrayMax = 0;
            ConvertSplineToPolyline_InDistanceRange
                      (this,param_1,param_2,fVar22,fVar23,&local_110,&local_120,false);
            if ((param_5 == &local_110) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
            lVar18 = (longlong)local_110.ArrayNum;
            if (local_110.ArrayNum != 0) {
              iVar15 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x18,8,local_110.ArrayNum,&param_5->AllocatorInstance,
                                  &param_5->ArrayNum,&param_5->ArrayMax);
              memcpy((param_5->AllocatorInstance).Data + (longlong)iVar15 * 0x18,
                     local_110.AllocatorInstance.Data,lVar18 * 0x18);
            }
            if ((param_6 == &local_120) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar11)) break;
            lVar18 = (longlong)local_120.ArrayNum;
            if (local_120.ArrayNum != 0) {
              iVar15 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,8,local_120.ArrayNum,&param_6->AllocatorInstance,
                                  &param_6->ArrayNum,&param_6->ArrayMax);
              memcpy((param_6->AllocatorInstance).Data + (longlong)iVar15 * 8,
                     local_120.AllocatorInstance.Data,lVar18 << 3);
            }
            fVar22 = 0.0;
            if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.AllocatorInstance.Data);
            }
            if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.AllocatorInstance.Data);
            }
            iVar13 = iVar13 + 1;
            if (iVar20 < iVar13) {
              return true;
            }
            iVar15 = param_5->ArrayNum;
            if (iVar15 == 0) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3237453185589179869>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                                  ,0xa23,"OutPoints.Num()");
              fVar22 = 0.0;
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                uVar12 = (*pcVar5)();
                return (bool)uVar12;
              }
            }
            else {
              TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAt
                        (param_5,iVar15 + -1,No);
              TArray<double,TSizedDefaultAllocator<32>_>::RemoveAt
                        (param_6,param_6->ArrayNum + -1,No);
            }
          }
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        if ((UE::SplineComponent::GUseSplineCurves == false) &&
           (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
          fVar21 = FSpline::GetParameterAtDistance(&this->Spline,fVar22);
          local_168 = (int)ROUND((fVar21 + fVar21) - __real_3f000000) >> 1;
          fVar21 = FSpline::GetParameterAtDistance(&this->Spline,param_4);
          uVar14 = -((int)ROUND(__real_bf000000 - (fVar21 + fVar21)) >> 1);
        }
        else {
          local_168 = FInterpCurve<float>::GetPointIndexForInputValue
                                ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar22);
          iVar13 = FInterpCurve<float>::GetPointIndexForInputValue
                             ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_4);
          local_168 = local_168 / this->ReparamStepsPerSegment;
          uVar14 = iVar13 / this->ReparamStepsPerSegment + 1;
        }
        dVar9 = __real_3fe0000000000000;
        local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.ArrayNum = 0;
        local_160.ArrayMax = 0;
        if ((int)uVar19 < (int)uVar14) {
          uVar14 = uVar19;
        }
        local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_150.ArrayNum = 0;
        local_150.ArrayMax = 0;
        if (local_168 < (int)uVar14) {
          piVar2 = &param_5->ArrayNum;
          do {
            fVar21 = GetDistanceAlongSplineAtSplinePoint(this,local_168);
            if (fVar21 <= fVar22) {
              fVar21 = fVar22;
            }
            fVar24 = GetDistanceAlongSplineAtSplinePoint(this,local_168 + 1U);
            if (param_4 <= fVar24) {
              fVar24 = param_4;
            }
            local_130 = (double)fVar24;
            dVar7 = (local_130 - (double)fVar21) * dVar9;
            if (dVar7 == 0.0) {
              if (local_168 + 1U == uVar14) {
                if ((UE::SplineComponent::GUseSplineCurves == false) &&
                   (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
                  fVar21 = FSpline::GetParameterAtDistance(&this->Spline,fVar24);
                }
                else {
                  local_124 = 0.0;
                  fVar21 = FInterpCurve<float>::Eval
                                     ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,
                                      fVar24,&local_124);
                }
                GetLocationAtSplineInputKey(this,(TVector<double> *)&local_e8._s_0,fVar21,param_1);
                pTVar3 = (TVector<double>_u_0 *)(param_5->AllocatorInstance).Data;
                if (((pTVar3 <= &local_e8) &&
                    (&local_e8 <
                     (TVector<double>_u_0 *)(pTVar3->XYZ + (longlong)param_5->ArrayMax * 3))) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  uVar12 = (*pcVar5)();
                  return (bool)uVar12;
                }
                iVar13 = *piVar2;
                if (iVar13 == param_5->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
                }
                *piVar2 = iVar13 + 1;
                pFVar16 = (param_5->AllocatorInstance).Data;
                pFVar1 = pFVar16 + (longlong)iVar13 * 0x18;
                *(double *)pFVar1 = local_e8._s_0.X;
                *(double *)(pFVar1 + 8) = local_e8._s_0.Y;
                *(double *)(pFVar16 + (longlong)iVar13 * 0x18 + 0x10) = local_e8._s_0.Z;
                pFVar1 = (param_6->AllocatorInstance).Data;
                if (((pFVar1 <= (FScriptContainerElement *)&local_130) &&
                    ((FScriptContainerElement *)&local_130 <
                     pFVar1 + (longlong)param_6->ArrayMax * 8)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  uVar12 = (*pcVar5)();
                  return (bool)uVar12;
                }
                iVar13 = param_6->ArrayNum;
                if (iVar13 == param_6->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
                }
                param_6->ArrayNum = iVar13 + 1;
                *(double *)((param_6->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_130;
                break;
              }
            }
            else {
              lVar18 = 2;
              dVar8 = (double)fVar21;
              do {
                uVar10 = local_160._8_8_;
                iVar13 = local_160.ArrayMax;
                local_160._8_8_ = (ulonglong)(uint)local_160.ArrayMax << 0x20;
                dVar6 = dVar8 + dVar7;
                if (((longlong)uVar10 < 0) && (iVar13 != 0)) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,0,&local_160.AllocatorInstance,0,&local_160.ArrayMax);
                }
                uVar10 = local_150._8_8_;
                iVar13 = local_150.ArrayMax;
                local_150._8_8_ = (ulonglong)(uint)local_150.ArrayMax << 0x20;
                if (((longlong)uVar10 < 0) && (iVar13 != 0)) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,0,&local_150.AllocatorInstance,0,&local_150.ArrayMax);
                }
                bVar11 = DivideSplineIntoPolylineRecursiveWithDistancesHelper
                                   (this,(float)dVar8,(float)dVar6,param_1,param_2,&local_160,
                                    &local_150);
                if (bVar11) {
                  iVar13 = *piVar2;
                  if (0 < iVar13) {
                    uVar19 = 0;
                    if ((int)(iVar13 - 1U) < iVar13) {
                      uVar19 = ~(iVar13 - 1U) >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      uVar12 = (*pcVar5)();
                      return (bool)uVar12;
                    }
                    lVar17 = (longlong)*piVar2;
                    pFVar1 = (param_5->AllocatorInstance).Data;
                    if ((local_160.ArrayNum < 1) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      uVar12 = (*pcVar5)();
                      return (bool)uVar12;
                    }
                    if ((((*(double *)local_160.AllocatorInstance.Data !=
                           *(double *)(pFVar1 + lVar17 * 0x18 + -0x18)) ||
                         (*(double *)(local_160.AllocatorInstance.Data + 8) !=
                          *(double *)(pFVar1 + lVar17 * 0x18 + -0x10))) ||
                        (*(double *)(local_160.AllocatorInstance.Data + 0x10) !=
                         *(double *)(pFVar1 + lVar17 * 0x18 + -8))) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("OutPoints.Last() == NewPoints[0]",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                                            ,0xa6e,L""), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      uVar12 = (*pcVar5)();
                      return (bool)uVar12;
                    }
                    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAt
                              (param_5,*piVar2 + -1,Default);
                    TArray<double,TSizedDefaultAllocator<32>_>::RemoveAt
                              (param_6,param_6->ArrayNum + -1,Default);
                  }
                  if ((param_5 == &local_160) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)this != (void*)&Source",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x96e,L""), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    uVar12 = (*pcVar5)();
                    return (bool)uVar12;
                  }
                  lVar17 = (longlong)local_160.ArrayNum;
                  if (local_160.ArrayNum != 0) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x18,8,local_160.ArrayNum,&param_5->AllocatorInstance,piVar2
                                        ,&param_5->ArrayMax);
                    memcpy((param_5->AllocatorInstance).Data + (longlong)iVar13 * 0x18,
                           local_160.AllocatorInstance.Data,lVar17 * 0x18);
                  }
                  if ((param_6 == &local_150) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)this != (void*)&Source",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x96e,L""), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    uVar12 = (*pcVar5)();
                    return (bool)uVar12;
                  }
                  lVar17 = (longlong)local_150.ArrayNum;
                  if (local_150.ArrayNum != 0) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (8,8,local_150.ArrayNum,&param_6->AllocatorInstance,
                                        &param_6->ArrayNum,&param_6->ArrayMax);
                    memcpy((param_6->AllocatorInstance).Data + (longlong)iVar13 * 8,
                           local_150.AllocatorInstance.Data,lVar17 << 3);
                  }
                }
                lVar18 = lVar18 + -1;
                dVar8 = dVar6;
              } while (lVar18 != 0);
            }
            local_168 = local_168 + 1;
          } while (local_168 < (int)uVar14);
        }
        bVar11 = param_5->ArrayNum != 0;
        if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.AllocatorInstance.Data);
        }
        if (local_160.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return bVar11;
        }
        FMemory::Free(local_160.AllocatorInstance.Data);
        return bVar11;
      }
    }
    else {
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
        fVar21 = FSpline::GetParameterAtDistance(this_00,0.0);
      }
      else {
        local_128 = 0.0;
        fVar21 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,0.0,&local_128
                           );
      }
      GetLocationAtSplineInputKey(this,(TVector<double> *)&local_100._s_0,fVar21,param_1);
      pTVar3 = (TVector<double>_u_0 *)(param_5->AllocatorInstance).Data;
      if (((pTVar3 <= &local_100) &&
          (&local_100 < (TVector<double>_u_0 *)(pTVar3->XYZ + (longlong)param_5->ArrayMax * 3))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      iVar13 = param_5->ArrayNum;
      if (iVar13 == param_5->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar13 + 1;
      pFVar16 = (param_5->AllocatorInstance).Data;
      pFVar1 = pFVar16 + (longlong)iVar13 * 0x18;
      *(double *)pFVar1 = local_100._s_0.X;
      *(double *)(pFVar1 + 8) = local_100._s_0.Y;
      *(double *)(pFVar16 + (longlong)iVar13 * 0x18 + 0x10) = local_100._s_0.Z;
      pFVar1 = (param_6->AllocatorInstance).Data;
      local_140 = 0;
      if (((pFVar1 <= (FScriptContainerElement *)&local_140) &&
          ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)param_6->ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      iVar13 = param_6->ArrayNum;
      if (iVar13 == param_6->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      param_6->ArrayNum = iVar13 + 1;
      *(undefined8 *)((param_6->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_140;
    }
  }
  return false;
}

// ConvertSplineToPolyline_InTimeRange @ 1479bad10

bool __thiscall
USplineComponent::ConvertSplineToPolyline_InTimeRange
          (USplineComponent *this,Type param_1,float param_2,float param_3,float param_4,
          bool param_5,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<double,TSizedDefaultAllocator<32>_> *param_7,bool param_8)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  USplineComponent *local_48;
  bool local_40;
  bool local_3f;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      iVar2 = FSpline::GetNumControlPoints(&this->Spline);
      goto LAB_1479bad5a;
    }
  }
  iVar2 = *(int *)&(this->SplineCurves).Position.field_0x8;
LAB_1479bad5a:
  bVar1 = false;
  if (iVar2 != 0) {
    local_3f = param_8;
    local_40 = param_5;
    local_48 = this;
    fVar3 = `USplineComponent::ConvertSplineToPolyline_InTimeRange'::__l2::<lambda_1>::operator()
                      (&local_48,param_4);
    fVar4 = `USplineComponent::ConvertSplineToPolyline_InTimeRange'::__l2::<lambda_1>::operator()
                      (&local_48,param_3);
    bVar1 = ConvertSplineToPolyline_InDistanceRange
                      (this,param_1,param_2,fVar4,fVar3,param_6,param_7,param_8);
  }
  return bVar1;
}

// CreateFloatPropertyChannel @ 1479bb810

void __thiscall USplineComponent::CreateFloatPropertyChannel(USplineComponent *this,FName param_1)

{
  FSpline *this_00;
  bool bVar1;
  longlong lVar2;
  FProperty *pFVar3;
  
  this_00 = &this->Spline;
  lVar2 = (**(code **)(this->_padding_ + 0xa98))();
  if ((lVar2 != 0) &&
     (pFVar3 = UStruct::FindPropertyByName(*(UStruct **)(lVar2 + 0x10),param_1),
     pFVar3 != (FProperty *)0x0)) {
    return;
  }
  if (((UE::SplineComponent::GUseSplineCurves == false) &&
      (this_00->CurrentImplementation == '\x02')) &&
     (bVar1 = FSpline::HasAttributeChannel(this_00,param_1), !bVar1)) {
    FSpline::CreateAttributeChannel<float>(this_00,param_1);
  }
  return;
}

// CreateSceneProxy @ 1479bc0d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall USplineComponent::CreateSceneProxy(USplineComponent *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  void *this_00;
  FSplineMeshSceneProxy *pFVar5;
  FSplineMeshSceneProxy *this_01;
  FInterpCurveVector *pFVar6;
  USplineComponent *local_res8;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  FLoadAssetAsyncOptionalParams local_40;
  
  if (this->bDrawDebug != false) {
    pFVar5 = (FSplineMeshSceneProxy *)0x0;
    if (((this->LineMaterialLifetimePtr).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) &&
       (this->LineMaterialLoadID == -1)) {
      local_40.PackagePriority = 0;
      local_40._20_4_ = 0;
      local_40.LoadFlags = 0;
      local_40._36_4_ = 0;
      local_40.InstancingContext = (FLinkerInstancingContext *)0x0;
      local_40.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
      local_40.ProgressDelegate.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_78 = (undefined1  [8])0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FWriteAccessScope *)&local_60);
      local_48 = &local_70;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::`8'::<lambda_1>_>
                   ::_vftable_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
        puVar3[4] = this;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      iVar2 = TSoftObjectPtr<UMaterialInterface>::LoadAsync
                        (&this->LineMaterial,
                         (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)local_78,&local_40);
      this->LineMaterialLoadID = iVar2;
    }
    if (((this->PointMaterialLifetimePtr).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) &&
       (this->PointMaterialLoadID == -1)) {
      local_40.PackagePriority = 0;
      local_40._20_4_ = 0;
      local_40.LoadFlags = 0;
      local_40._36_4_ = 0;
      local_40.InstancingContext = (FLinkerInstancingContext *)0x0;
      local_40.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
      local_40.ProgressDelegate.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_78 = (undefined1  [8])0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FWriteAccessScope *)&local_60);
      local_48 = &local_70;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`USplineComponent::CreateSceneProxy'::`11'::<lambda_2>_>
                   ::_vftable_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
        puVar3[4] = this;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      iVar2 = TSoftObjectPtr<UMaterialInterface>::LoadAsync
                        (&this->PointMaterial,
                         (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)local_78,&local_40);
      this->PointMaterialLoadID = iVar2;
    }
    if (((this->LineMaterialLifetimePtr).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) ||
       ((this->PointMaterialLifetimePtr).field0_0x0.DebugPtr == (UMaterialInterface *)0x0)) {
      this_01 = ::operator_new(0x2b0);
      if (this_01 != (FSplineMeshSceneProxy *)0x0) {
        local_res8 = (USplineComponent *)0x0;
        FPrimitiveSceneProxy::FPrimitiveSceneProxy
                  ((FPrimitiveSceneProxy *)this_01,(UPrimitiveComponent *)this,(FName)0x0);
        this_01->_padding_ =
             (longlong)&`USplineComponent::CreateSceneProxy'::`2'::FSplinePDISceneProxy::_vftable_;
        this_01->bDrawDebug = this->bDrawDebug;
        if ((UE::SplineComponent::GUseSplineCurves == false) &&
           (bVar1 = FSpline::IsEnabledStatic(), bVar1)) {
          pFVar6 = FSpline::GetSplinePointsPosition(&this->Spline);
        }
        else {
          pFVar6 = &(this->SplineCurves).Position;
        }
        FInterpCurveVector::FInterpCurveVector(&this_01->SplineInfo,pFVar6);
        (this_01->LineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
        pFVar5 = this_01;
      }
    }
    else {
      this_00 = ::operator_new(0xa70);
      if (this_00 != (void *)0x0) {
        pFVar5 = `USplineComponent::CreateSceneProxy'::__l2::FSplineMeshSceneProxy::
                 FSplineMeshSceneProxy(this_00,this);
      }
    }
    return (FPrimitiveSceneProxy *)pFVar5;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DivideSplineIntoPolylineRecursive @ 1479bd490

bool __thiscall
USplineComponent::DivideSplineIntoPolylineRecursive
          (USplineComponent *this,float param_1,float param_2,Type param_3,float param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  TArray<double,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar1 = ConvertSplineToPolyline_InDistanceRange
                    (this,param_3,param_4,param_1,param_2,param_5,&local_18,false);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// DivideSplineIntoPolylineRecursiveHelper @ 1479bd500

bool __thiscall
USplineComponent::DivideSplineIntoPolylineRecursiveHelper
          (USplineComponent *this,float param_1,float param_2,Type param_3,float param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  TArray<double,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar1 = DivideSplineIntoPolylineRecursiveWithDistancesHelper
                    (this,param_1,param_2,param_3,param_4,param_5,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// DivideSplineIntoPolylineRecursiveWithDistances @ 1479bd560

bool __thiscall
USplineComponent::DivideSplineIntoPolylineRecursiveWithDistances
          (USplineComponent *this,float param_1,float param_2,Type param_3,float param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<double,TSizedDefaultAllocator<32>_> *param_6)

{
  bool bVar1;
  
  bVar1 = ConvertSplineToPolyline_InDistanceRange
                    (this,param_3,param_4,param_1,param_2,param_5,param_6,false);
  return bVar1;
}

// DivideSplineIntoPolylineRecursiveWithDistancesHelper @ 1479bd5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
USplineComponent::DivideSplineIntoPolylineRecursiveWithDistancesHelper
          (USplineComponent *this,float param_1,float param_2,Type param_3,float param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<double,TSizedDefaultAllocator<32>_> *param_6)

{
  float *pfVar1;
  double *pdVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  int *piVar5;
  TVector<double>_u_0 *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  float *pfVar16;
  longlong lVar17;
  double *pdVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_1e8 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_198;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_188;
  double local_178;
  double local_170;
  TArray<double,TSizedDefaultAllocator<32>_> local_168;
  TArray<double,TSizedDefaultAllocator<32>_> local_158;
  float local_148;
  float local_144;
  float local_140 [2];
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((double)(param_2 - param_1) <= 0.0) {
    bVar11 = false;
  }
  else {
    dVar9 = (double)param_1;
    if ((UE::SplineComponent::GUseSplineCurves) || (bVar11 = FSpline::IsEnabledStatic(), !bVar11)) {
      local_148 = 0.0;
      fVar19 = FInterpCurve<float>::Eval
                         ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,
                          &local_148);
    }
    else {
      fVar19 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
    }
    GetLocationAtSplineInputKey(this,(TVector<double> *)&local_138._s_0,fVar19,param_3);
    local_e8._s_0.X = local_138._s_0.X;
    local_e8._s_0.Y = local_138._s_0.Y;
    local_e8._s_0.Z = local_138._s_0.Z;
    fVar19 = (float)((double)(param_2 - param_1) * __real_3fe0000000000000 + dVar9);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
      fVar20 = FSpline::GetParameterAtDistance(&this->Spline,fVar19);
    }
    else {
      local_144 = 0.0;
      fVar20 = FInterpCurve<float>::Eval
                         ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar19,
                          &local_144);
    }
    GetLocationAtSplineInputKey(this,(TVector<double> *)&local_120._s_0,fVar20,param_3);
    local_d0._s_0.X = local_120._s_0.X;
    local_d0._s_0.Y = local_120._s_0.Y;
    local_d0._s_0.Z = local_120._s_0.Z;
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
      fVar20 = FSpline::GetParameterAtDistance(&this->Spline,param_2);
    }
    else {
      local_140[0] = 0.0;
      fVar20 = FInterpCurve<float>::Eval
                         ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_2,
                          local_140);
    }
    GetLocationAtSplineInputKey(this,(TVector<double> *)&local_108._s_0,fVar20,param_3);
    local_b8._s_0.X = local_108._s_0.X;
    local_b8._s_0.Y = local_108._s_0.Y;
    local_b8._s_0.Z = local_108._s_0.Z;
    fVar20 = FMath::PointDistToSegmentSquared
                       ((TVector<double> *)&local_d0._s_0,(TVector<double> *)&local_e8._s_0,
                        (TVector<double> *)&local_b8._s_0);
    if (fVar20 <= param_4) {
      pTVar6 = (TVector<double>_u_0 *)(param_5->AllocatorInstance).Data;
      if (((pTVar6 <= &local_e8) && (&local_e8 < pTVar6 + param_5->ArrayMax)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      iVar13 = param_5->ArrayNum;
      piVar3 = &param_5->ArrayNum;
      if (iVar13 == param_5->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      *piVar3 = iVar13 + 1;
      pFVar7 = (param_5->AllocatorInstance).Data;
      pFVar4 = pFVar7 + (longlong)iVar13 * 0x18;
      *(double *)pFVar4 = local_e8._s_0.X;
      *(double *)(pFVar4 + 8) = local_e8._s_0.Y;
      *(double *)(pFVar7 + (longlong)iVar13 * 0x18 + 0x10) = local_e8._s_0.Z;
      pFVar4 = (param_6->AllocatorInstance).Data;
      local_178 = dVar9;
      if (((pFVar4 <= (FScriptContainerElement *)&local_178) &&
          ((FScriptContainerElement *)&local_178 < pFVar4 + (longlong)param_6->ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      iVar13 = param_6->ArrayNum;
      piVar5 = &param_6->ArrayNum;
      if (iVar13 == param_6->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      *piVar5 = iVar13 + 1;
      *(double *)((param_6->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_178;
      if (((local_e8._s_0.X != local_b8._s_0.X) || (local_e8._s_0.Y != local_b8._s_0.Y)) ||
         (local_e8._s_0.Z != local_b8._s_0.Z)) {
        pTVar6 = (TVector<double>_u_0 *)(param_5->AllocatorInstance).Data;
        if (((pTVar6 <= &local_b8) &&
            (&local_b8 < (TVector<double>_u_0 *)(pTVar6->XYZ + (longlong)param_5->ArrayMax * 3))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar13 = *piVar3;
        if (iVar13 == param_5->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        *piVar3 = iVar13 + 1;
        pFVar7 = (param_5->AllocatorInstance).Data;
        pFVar4 = pFVar7 + (longlong)iVar13 * 0x18;
        *(double *)pFVar4 = local_b8._s_0.X;
        *(double *)(pFVar4 + 8) = local_b8._s_0.Y;
        *(double *)(pFVar7 + (longlong)iVar13 * 0x18 + 0x10) = local_b8._s_0.Z;
        pFVar4 = (param_6->AllocatorInstance).Data;
        local_170 = (double)param_2;
        if (((pFVar4 <= (FScriptContainerElement *)&local_170) &&
            ((FScriptContainerElement *)&local_170 < pFVar4 + (longlong)param_6->ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar13 = *piVar5;
        if (iVar13 == param_6->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
        }
        *piVar5 = iVar13 + 1;
        *(double *)((param_6->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_170;
      }
    }
    else {
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 0;
      local_188.ArrayMax = 0;
      local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.ArrayNum = 0;
      local_168.ArrayMax = 0;
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 0;
      local_158.ArrayMax = 0;
      DivideSplineIntoPolylineRecursiveWithDistancesHelper
                (this,param_1,fVar19,param_3,param_4,&local_198,&local_168);
      DivideSplineIntoPolylineRecursiveWithDistancesHelper
                (this,fVar19,param_2,param_3,param_4,&local_188,&local_158);
      if ((0 < local_198.ArrayNum) && (0 < local_188.ArrayNum)) {
        uVar15 = 0;
        if ((int)(local_198.ArrayNum - 1U) < local_198.ArrayNum) {
          uVar15 = ~(local_198.ArrayNum - 1U) >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
        }
        FVar10.Data = local_198.AllocatorInstance.Data;
        lVar14 = (longlong)local_198.ArrayNum;
        if ((local_188.ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        if ((((*(double *)local_188.AllocatorInstance.Data !=
               *(double *)(FVar10.Data + lVar14 * 0x18 + -0x18)) ||
             (*(double *)(local_188.AllocatorInstance.Data + 8) !=
              *(double *)(FVar10.Data + lVar14 * 0x18 + -0x10))) ||
            (*(double *)(local_188.AllocatorInstance.Data + 0x10) !=
             *(double *)(FVar10.Data + lVar14 * 0x18 + -8))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("NewPoints[0].Last() == NewPoints[1][0]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                                ,0x971,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        if ((local_158.ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        FVar10.Data = local_158.AllocatorInstance.Data;
        uVar15 = 0;
        if ((int)(local_168.ArrayNum - 1U) < local_168.ArrayNum) {
          uVar15 = ~(local_168.ArrayNum - 1U) >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
        }
        if ((*(double *)FVar10.Data !=
             *(double *)(local_168.AllocatorInstance.Data + (longlong)(local_168.ArrayNum + -1) * 8)
            ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("NewDistancesAlongSpline[0].Last() == NewDistancesAlongSpline[1][0]"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                                      ,0x972,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&local_198,local_198.ArrayNum + -1,Default);
        TArray<double,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&local_168,local_168.ArrayNum + -1,Default);
      }
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
      Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(&local_198,&local_188);
      TArray<double,TSizedDefaultAllocator<32>_>::Append<double,TSizedDefaultAllocator<32>_>
                (&local_168,&local_158);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
      Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(param_5,&local_198);
      TArray<double,TSizedDefaultAllocator<32>_>::Append<double,TSizedDefaultAllocator<32>_>
                (param_6,&local_168);
      lVar14 = 2;
      pfVar16 = &local_148;
      lVar17 = 2;
      do {
        pfVar1 = pfVar16 + -4;
        pfVar16 = pfVar16 + -4;
        lVar17 = lVar17 + -1;
        if (*(void **)pfVar1 != (void *)0x0) {
          FMemory::Free(*(void **)pfVar1);
        }
      } while (lVar17 != 0);
      pdVar18 = &local_178;
      do {
        pdVar2 = pdVar18 + -2;
        pdVar18 = pdVar18 + -2;
        lVar14 = lVar14 + -1;
        if ((void *)*pdVar2 != (void *)0x0) {
          FMemory::Free((void *)*pdVar2);
        }
      } while (lVar14 != 0);
    }
    if ((param_5->ArrayNum != param_6->ArrayNum) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutPoints.Num() == OutDistancesAlongSpline.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                            ,0x989,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    bVar11 = 0 < param_5->ArrayNum;
  }
  return bVar11;
}

// Draw @ 1479be8b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USplineComponent::Draw
          (FPrimitiveDrawInterface *param_1,FSceneView *param_2,FInterpCurveVector *param_3,
          TMatrix<double> *param_4,FLinearColor *param_5,uchar param_6)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  TVector<double> *pTVar16;
  TVector4<double> *pTVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  ulonglong in_stack_fffffffffffffe00;
  longlong local_1e8;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  TVector<double>_u_0 local_1c0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double> local_148;
  TVector<double> local_130;
  TVector4<double> local_118;
  TVector4<double> local_f8 [6];
  
  fVar13 = __real_3cf5c28f;
  fVar12 = __real_41200000;
  fVar11 = __real_3d4ccccd;
  dVar10 = __real_3ff0000000000000;
  iVar20 = 0;
  iVar4 = *(int *)&param_3->field_0x8;
  iVar18 = iVar4;
  if (param_3->field_0x10 == '\0') {
    iVar18 = iVar4 + -1;
  }
  if (0 < iVar18 + 1) {
    lVar22 = 0;
    local_1e8 = 0;
    uVar34 = __real_40c00000;
    do {
      if ((longlong)iVar4 < 1) {
        return;
      }
      iVar21 = *(int *)&param_3->field_0x8;
      uVar19 = (ulonglong)iVar21;
      if (iVar20 < iVar21) {
        if ((iVar20 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), in_stack_fffffffffffffe00 = uVar19, bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar23 = *(float *)(lVar22 + *(longlong *)param_3);
      }
      else {
        uVar15 = 0;
        if ((int)(iVar21 - 1U) < iVar21) {
          uVar15 = ~(iVar21 - 1U) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), in_stack_fffffffffffffe00 = uVar19, bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar23 = *(float *)((longlong)*(int *)&param_3->field_0x8 * 0x58 + -0x58 +
                           *(longlong *)param_3) + *(float *)&param_3->field_0x14;
      }
      local_178._s_0.Z = 0.0;
      local_178._s_0.X = 0.0;
      local_178._s_0.Y = 0.0;
      pTVar16 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                          ((FInterpCurve<UE::Math::TVector<double>_> *)param_3,&local_148,fVar23,
                           (TVector<double> *)&local_178._s_0);
      dVar7 = (pTVar16->field0_0x0)._s_0.X;
      dVar8 = (pTVar16->field0_0x0)._s_0.Y;
      dVar3 = (pTVar16->field0_0x0)._s_0.Z;
      auVar24._8_4_ = SUB84(dVar3,0);
      auVar24._0_8_ = dVar3;
      auVar24._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      uVar30 = SUB84(dVar10,0);
      auVar25._8_4_ = uVar30;
      auVar25._0_8_ = dVar10;
      uVar31 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar25._12_4_ = uVar31;
      local_1c0._s_0.X =
           dVar8 * param_4->M[1][0] + dVar7 * param_4->M[0][0] + dVar3 * param_4->M[2][0] +
           dVar10 * param_4->M[3][0];
      local_1c0._s_0.Y =
           dVar8 * param_4->M[1][1] + dVar7 * param_4->M[0][1] + auVar24._8_8_ * param_4->M[2][1] +
           auVar25._8_8_ * param_4->M[3][1];
      local_1c0._s_0.Z =
           dVar8 * param_4->M[1][2] + dVar7 * param_4->M[0][2] + dVar3 * param_4->M[2][2] +
           dVar10 * param_4->M[3][2];
      if (local_1e8 < iVar4) {
        (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_1c0,param_5,uVar34,param_6);
      }
      if (iVar20 != 0) {
        uVar19 = (ulonglong)*(int *)&param_3->field_0x8;
        uVar15 = 0;
        if (iVar20 + -1 < *(int *)&param_3->field_0x8) {
          uVar15 = (uint)-iVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), in_stack_fffffffffffffe00 = uVar19, bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar32 = __real_3f800000;
        lVar5 = *(longlong *)param_3;
        pdVar1 = (double *)(lVar5 + -0x50 + lVar22);
        dVar8 = *pdVar1;
        dVar9 = pdVar1[1];
        dVar3 = *(double *)(lVar5 + -0x40 + lVar22);
        auVar26._8_4_ = SUB84(dVar3,0);
        auVar26._0_8_ = dVar3;
        auVar26._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        auVar27._8_4_ = uVar30;
        auVar27._0_8_ = dVar10;
        auVar27._12_4_ = uVar31;
        local_1d8 = dVar8 * param_4->M[0][0] + dVar9 * param_4->M[1][0] + dVar3 * param_4->M[2][0] +
                    dVar10 * param_4->M[3][0];
        dVar7 = dVar8 * param_4->M[0][1] + dVar9 * param_4->M[1][1] +
                auVar26._8_8_ * param_4->M[2][1] + auVar27._8_8_ * param_4->M[3][1];
        uVar33 = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_1c8 = dVar8 * param_4->M[0][2] + dVar9 * param_4->M[1][2] + dVar3 * param_4->M[2][2] +
                    dVar10 * param_4->M[3][2];
        dStack_1d0 = dVar7;
        if (*(char *)(lVar5 + -8 + lVar22) == '\x02') {
          pTVar17 = FSceneView::WorldToScreen(param_2,&local_118,(TVector<double> *)&local_1d8);
          fVar32 = (float)(pTVar17->field0_0x0)._s_0.W;
          pTVar17 = FSceneView::WorldToScreen(param_2,local_f8,(TVector<double> *)&local_1c0._s_0);
          fVar23 = (float)(pTVar17->field0_0x0)._s_0.W;
          if ((fVar12 < fVar32) || (fVar12 < fVar23)) {
            if (fVar23 <= fVar32) {
              fVar23 = fVar32;
            }
            in_stack_fffffffffffffe00 = CONCAT71((int7)(in_stack_fffffffffffffe00 >> 8),param_6);
            DrawDashedLine(param_1,(TVector<double> *)&local_1d8,(TVector<double> *)&local_1c0._s_0,
                           param_5,(double)(fVar23 * fVar13),param_6,0.0);
          }
        }
        else {
          fVar2 = *(float *)(lVar5 + -0x58 + lVar22);
          iVar21 = 1;
          unique0x1000019d = SUB84(dVar7,0);
          unique0x100001a1 = uVar33;
          local_190._8_4_ = SUB84(dVar7,0);
          local_190._0_8_ = local_1d8;
          local_190._12_4_ = uVar33;
          local_180 = (double)local_1c8;
          do {
            local_160._s_0.Z = 0.0;
            local_160._s_0.X = 0.0;
            local_160._s_0.Y = 0.0;
            pTVar16 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                                ((FInterpCurve<UE::Math::TVector<double>_> *)param_3,&local_130,
                                 (fVar32 - (float)iVar21 * fVar11) * fVar2 +
                                 (float)iVar21 * fVar11 * fVar23,(TVector<double> *)&local_160._s_0)
            ;
            dVar7 = (pTVar16->field0_0x0)._s_0.X;
            dVar8 = (pTVar16->field0_0x0)._s_0.Y;
            dVar3 = (pTVar16->field0_0x0)._s_0.Z;
            auVar28._8_4_ = SUB84(dVar3,0);
            auVar28._0_8_ = dVar3;
            auVar28._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
            in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffff00000000;
            auVar29._8_4_ = uVar30;
            auVar29._0_8_ = dVar10;
            auVar29._12_4_ = uVar31;
            local_1a8 = dVar8 * param_4->M[1][0] + dVar7 * param_4->M[0][0] +
                        dVar3 * param_4->M[2][0] + dVar10 * param_4->M[3][0];
            dStack_1a0 = dVar8 * param_4->M[1][1] + dVar7 * param_4->M[0][1] +
                         auVar28._8_8_ * param_4->M[2][1] + auVar29._8_8_ * param_4->M[3][1];
            local_198 = dVar7 * param_4->M[0][2] + dVar8 * param_4->M[1][2] +
                        dVar3 * param_4->M[2][2] + dVar10 * param_4->M[3][2];
            (**(code **)(param_1->_padding_ + 0x38))
                      (param_1,local_190,&local_1a8,param_5,param_6,in_stack_fffffffffffffe00,0,0);
            iVar21 = iVar21 + 1;
            local_180 = local_198;
            local_190._8_8_ = dStack_1a0;
            local_190._0_8_ = local_1a8;
            uVar34 = __real_40c00000;
          } while (iVar21 < 0x15);
        }
      }
      local_1e8 = local_1e8 + 1;
      iVar20 = iVar20 + 1;
      lVar22 = lVar22 + 0x58;
    } while (iVar20 < iVar18 + 1);
  }
  return;
}

// FindDirectionClosestToWorldLocation @ 1479c13b0

TVector<double> * __thiscall
USplineComponent::FindDirectionClosestToWorldLocation
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          Type param_2)

{
  float fVar1;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  GetDirectionAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// FindInputKeyClosestToWorldLocation @ 1479c1400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
USplineComponent::FindInputKeyClosestToWorldLocation
          (USplineComponent *this,TVector<double> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float local_c8 [2];
  TVector<double>_u_0 local_c0 [7];
  
  dVar2 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar3 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar4 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar16 = (param_1->field0_0x0)._s_0.Z - (double)this->_padding_;
  auVar24._8_4_ = SUB84(dVar3,0);
  auVar24._0_8_ = dVar2;
  auVar24._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar8 = (param_1->field0_0x0)._s_0.X - (double)this->_padding_;
  dVar9 = (param_1->field0_0x0)._s_0.Y - (double)this->_padding_;
  uVar29 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar25._8_4_ = SUB84(dVar5,0);
  auVar25._0_8_ = dVar4;
  auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar25 = blendpd(auVar24,auVar25,2);
  auVar33._8_4_ = SUB84(dVar9,0);
  auVar33._0_8_ = dVar8;
  auVar33._12_4_ = uVar29;
  auVar17._8_4_ = SUB84(dVar4,0);
  auVar17._0_8_ = dVar3;
  auVar17._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar21._8_4_ = SUB84(dVar9,0);
  auVar21._0_8_ = dVar8;
  auVar21._12_4_ = uVar29;
  auVar34._0_8_ = auVar33._8_8_ * dVar2 - dVar3 * dVar8;
  auVar34._8_8_ = dVar16 * dVar3 - auVar17._8_8_ * dVar9;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar16;
  auVar22 = blendpd(auVar21,auVar10,2);
  auVar23._0_8_ = auVar22._0_8_ * dVar4 - auVar25._0_8_ * dVar16;
  auVar23._8_8_ = auVar22._8_8_ * dVar5 - auVar25._8_8_ * 0.0;
  dVar6 = auVar34._8_8_ + auVar34._8_8_;
  dVar7 = auVar23._0_8_ + auVar23._0_8_;
  uVar29 = SUB84(dVar7,0);
  uVar30 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar22 = blendpd(auVar34,auVar23,2);
  auVar31._8_4_ = uVar29;
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = uVar30;
  auVar18._8_4_ = uVar29;
  auVar18._0_8_ = dVar6;
  auVar18._12_4_ = uVar30;
  auVar26._8_4_ = uVar29;
  auVar26._0_8_ = dVar6;
  auVar26._12_4_ = uVar30;
  auVar35._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar35._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  auVar27 = blendpd(auVar26,auVar35,2);
  auVar32._0_8_ = auVar31._8_8_ * dVar2 - dVar6 * dVar3;
  auVar32._8_8_ = auVar35._0_8_ * dVar3 - auVar18._8_8_ * dVar4;
  auVar22._0_8_ = this->_padding_;
  auVar22._8_8_ = this->_padding_;
  auVar19._8_4_ = SUB84(auVar35._8_8_,0);
  auVar19._0_8_ = auVar35._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  auVar28._0_8_ = auVar27._0_8_ * dVar4 - auVar35._0_8_ * auVar25._0_8_;
  auVar28._8_8_ = auVar27._8_8_ * dVar5 - auVar19._8_8_ * auVar25._8_8_;
  uVar1 = this->_padding_;
  lVar12 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              (uint)((ulonglong)uVar1 >> 0x20),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar1) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
  lVar13 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)auVar22._0_8_ >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)auVar22._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar14 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)auVar22._8_8_ >> 0x20) & _UNK_15061cc8c,
                              (uint)auVar22._8_8_ & _UNK_15061cc88) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar20._8_4_ = SUB84(auVar32._8_8_,0);
  auVar20._0_8_ = auVar32._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  dVar2 = (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar25._12_4_,
                           ~(uint)lVar14 & auVar25._8_4_) * (dVar7 * dVar5 + dVar9 + auVar28._0_8_);
  auVar27._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar27._0_8_ = uVar1;
  auVar27._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
  auVar27 = blendpd(auVar32,auVar28,2);
  local_c0[0]._16_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar22._4_4_,
                        ~(uint)lVar12 & auVar22._0_4_) *
       (auVar35._0_8_ * dVar5 + dVar16 + auVar27._0_8_);
  local_c0[0]._8_4_ = SUB84(dVar2,0);
  local_c0[0]._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar25._4_4_,
                        ~(uint)lVar13 & auVar25._0_4_) * (dVar6 * dVar5 + dVar8 + auVar20._8_8_);
  local_c0[0]._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  if ((!UE::SplineComponent::GUseSplineCurves) && (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
    fVar15 = FSpline::FindNearest(&this->Spline,(TVector<double> *)&local_c0[0]._s_0,local_c8);
    return fVar15;
  }
  fVar15 = FInterpCurve<UE::Math::TVector<double>_>::FindNearest
                     ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
                      (TVector<double> *)&local_c0[0]._s_0,local_c8);
  return fVar15;
}

// FindInputKeyOnSegmentClosestToWorldLocation @ 1479c1670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
USplineComponent::FindInputKeyOnSegmentClosestToWorldLocation
          (USplineComponent *this,TVector<double> *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float local_c8 [2];
  TVector<double>_u_0 local_c0 [7];
  
  dVar2 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar3 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar4 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar16 = (param_1->field0_0x0)._s_0.Z - (double)this->_padding_;
  auVar24._8_4_ = SUB84(dVar3,0);
  auVar24._0_8_ = dVar2;
  auVar24._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar8 = (param_1->field0_0x0)._s_0.X - (double)this->_padding_;
  dVar9 = (param_1->field0_0x0)._s_0.Y - (double)this->_padding_;
  uVar29 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar25._8_4_ = SUB84(dVar5,0);
  auVar25._0_8_ = dVar4;
  auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar25 = blendpd(auVar24,auVar25,2);
  auVar33._8_4_ = SUB84(dVar9,0);
  auVar33._0_8_ = dVar8;
  auVar33._12_4_ = uVar29;
  auVar17._8_4_ = SUB84(dVar4,0);
  auVar17._0_8_ = dVar3;
  auVar17._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar21._8_4_ = SUB84(dVar9,0);
  auVar21._0_8_ = dVar8;
  auVar21._12_4_ = uVar29;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar16;
  auVar22 = blendpd(auVar21,auVar10,2);
  auVar34._0_8_ = auVar33._8_8_ * dVar2 - dVar3 * dVar8;
  auVar34._8_8_ = dVar16 * dVar3 - auVar17._8_8_ * dVar9;
  auVar23._0_8_ = auVar22._0_8_ * dVar4 - auVar25._0_8_ * dVar16;
  auVar23._8_8_ = auVar22._8_8_ * dVar5 - auVar25._8_8_ * 0.0;
  dVar6 = auVar34._8_8_ + auVar34._8_8_;
  dVar7 = auVar23._0_8_ + auVar23._0_8_;
  uVar29 = SUB84(dVar7,0);
  uVar30 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar22 = blendpd(auVar34,auVar23,2);
  auVar31._8_4_ = uVar29;
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = uVar30;
  auVar18._8_4_ = uVar29;
  auVar18._0_8_ = dVar6;
  auVar18._12_4_ = uVar30;
  auVar26._8_4_ = uVar29;
  auVar26._0_8_ = dVar6;
  auVar26._12_4_ = uVar30;
  auVar35._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar35._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  auVar27 = blendpd(auVar26,auVar35,2);
  auVar32._0_8_ = auVar31._8_8_ * dVar2 - dVar6 * dVar3;
  auVar32._8_8_ = auVar35._0_8_ * dVar3 - auVar18._8_8_ * dVar4;
  auVar22._0_8_ = this->_padding_;
  auVar22._8_8_ = this->_padding_;
  auVar19._8_4_ = SUB84(auVar35._8_8_,0);
  auVar19._0_8_ = auVar35._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  auVar28._0_8_ = auVar27._0_8_ * dVar4 - auVar35._0_8_ * auVar25._0_8_;
  auVar28._8_8_ = auVar27._8_8_ * dVar5 - auVar19._8_8_ * auVar25._8_8_;
  uVar1 = this->_padding_;
  lVar12 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              (uint)((ulonglong)uVar1 >> 0x20),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar1) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
  lVar13 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)auVar22._0_8_ >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)auVar22._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar14 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)auVar22._8_8_ >> 0x20) & _UNK_15061cc8c,
                              (uint)auVar22._8_8_ & _UNK_15061cc88) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar20._8_4_ = SUB84(auVar32._8_8_,0);
  auVar20._0_8_ = auVar32._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar27._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar27._0_8_ = uVar1;
  auVar27._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
  auVar27 = blendpd(auVar32,auVar28,2);
  local_c0[0]._16_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar22._4_4_,
                        ~(uint)lVar12 & auVar22._0_4_) *
       (auVar35._0_8_ * dVar5 + dVar16 + auVar27._0_8_);
  dVar2 = (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar25._12_4_,
                           ~(uint)lVar14 & auVar25._8_4_) * (dVar7 * dVar5 + dVar9 + auVar28._0_8_);
  local_c0[0]._8_4_ = SUB84(dVar2,0);
  local_c0[0]._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar25._4_4_,
                        ~(uint)lVar13 & auVar25._0_4_) * (dVar6 * dVar5 + dVar8 + auVar20._8_8_);
  local_c0[0]._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  if ((!UE::SplineComponent::GUseSplineCurves) && (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
    fVar15 = FSpline::FindNearestOnSegment
                       (&this->Spline,(TVector<double> *)&local_c0[0]._s_0,param_2,local_c8);
    return fVar15;
  }
  fVar15 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                     ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
                      (TVector<double> *)&local_c0[0]._s_0,param_2,local_c8);
  return fVar15;
}

// FindLocationClosestToWorldLocation @ 1479c18f0

TVector<double> * __thiscall
USplineComponent::FindLocationClosestToWorldLocation
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          Type param_2)

{
  float fVar1;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  GetLocationAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// FindQuaternionClosestToWorldLocation @ 1479c1da0

TQuat<double> * __thiscall
USplineComponent::FindQuaternionClosestToWorldLocation
          (USplineComponent *this,TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,
          Type param_2)

{
  float fVar1;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  GetQuaternionAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// FindRightVectorClosestToWorldLocation @ 1479c1df0

TVector<double> * __thiscall
USplineComponent::FindRightVectorClosestToWorldLocation
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          Type param_2)

{
  float fVar1;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  GetRightVectorAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// FindRollClosestToWorldLocation @ 1479c1e40

float __thiscall
USplineComponent::FindRollClosestToWorldLocation
          (USplineComponent *this,TVector<double> *param_1,Type param_2)

{
  TQuat<double> *this_00;
  float fVar1;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  this_00 = GetQuaternionAtSplineInputKey(this,&local_28,fVar1,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,&local_48);
  return (float)local_48.Roll;
}

// FindRotationClosestToWorldLocation @ 1479c1e90

TRotator<double> * __thiscall
USplineComponent::FindRotationClosestToWorldLocation
          (USplineComponent *this,TRotator<double> *__return_storage_ptr__,TVector<double> *param_1,
          Type param_2)

{
  TQuat<double> *this_00;
  float fVar1;
  TQuat<double> local_28;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  this_00 = GetQuaternionAtSplineInputKey(this,&local_28,fVar1,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindScaleClosestToWorldLocation @ 1479c1ef0

TVector<double> * __thiscall
USplineComponent::FindScaleClosestToWorldLocation
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  float fVar1;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  GetScaleAtSplineInputKey(this,__return_storage_ptr__,fVar1);
  return __return_storage_ptr__;
}

// FindTangentClosestToWorldLocation @ 1479c1f30

TVector<double> * __thiscall
USplineComponent::FindTangentClosestToWorldLocation
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          Type param_2)

{
  float fVar1;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  GetTangentAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// FindTransformClosestToWorldLocation @ 1479c1f80

TTransform<double> * __thiscall
USplineComponent::FindTransformClosestToWorldLocation
          (USplineComponent *this,TTransform<double> *__return_storage_ptr__,
          TVector<double> *param_1,Type param_2,bool param_3)

{
  float fVar1;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  GetTransformAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2,param_3);
  return __return_storage_ptr__;
}

// FindUpVectorClosestToWorldLocation @ 1479c1fe0

TVector<double> * __thiscall
USplineComponent::FindUpVectorClosestToWorldLocation
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          Type param_2)

{
  float fVar1;
  
  fVar1 = FindInputKeyClosestToWorldLocation(this,param_1);
  GetUpVectorAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// GetArriveTangentAtSplinePoint @ 1479c3e00

TVector<double> * __thiscall
USplineComponent::GetArriveTangentAtSplinePoint
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,int param_1,Type param_2)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TVector<double>_u_0 *pTVar13;
  TVector<double> *pTVar14;
  double *pdVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  TVector<double>_u_0 local_c8;
  undefined1 local_b0 [16];
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  TVector<double> local_78 [4];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar9 = FSpline::IsEnabledStatic(), !bVar9)) {
    iVar10 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar10 = FSpline::GetNumControlPoints(&this->Spline);
  }
  uVar8 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  if (iVar10 != 0) {
    uVar11 = GetClampedIndex(this,param_1);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
      pTVar13 = &FSpline::GetInTangent(&this->Spline,local_78,uVar11)->field0_0x0;
    }
    else {
      uVar12 = 0;
      if ((int)uVar11 < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        pTVar14 = (TVector<double> *)(*pcVar2)();
        return pTVar14;
      }
      lVar1 = *(longlong *)&(this->SplineCurves).Position;
      pdVar15 = (double *)((longlong)(int)uVar11 * 0x58 + 0x20 + lVar1);
      pTVar13 = &local_c8;
      local_c8._s_0.X = *pdVar15;
      local_c8._s_0.Y = pdVar15[1];
      local_c8._s_0.Z = *(double *)((longlong)(int)uVar11 * 0x58 + 0x30 + lVar1);
    }
    local_98 = (((TVector<double>_u_0 *)&(pTVar13->_s_0).X)->_s_0).X;
    if (param_2 == World) {
      auVar26._0_8_ = this->_padding_;
      auVar26._8_8_ = this->_padding_;
      dVar7 = (double)this->_padding_;
      local_98 = (double)this->_padding_ * local_98;
      dVar4 = (double)this->_padding_ * (pTVar13->_s_0).Y;
      uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar17._0_8_ = this->_padding_;
      auVar17._8_8_ = this->_padding_;
      auVar28._8_4_ = SUB84(dVar4,0);
      auVar28._0_8_ = local_98;
      auVar28._12_4_ = uVar27;
      dVar5 = (pTVar13->_s_0).Z * (double)this->_padding_;
      dVar6 = (double)this->_padding_ * 0.0;
      pdVar15 = (double *)local_b0;
      auVar20 = blendpd(auVar17,auVar26,2);
      auVar29._0_8_ = auVar28._8_8_ * (double)auVar17._0_8_ - (double)auVar17._8_8_ * local_98;
      auVar29._8_8_ = dVar5 * (double)auVar17._8_8_ - (double)auVar26._0_8_ * dVar4;
      auVar16._8_4_ = SUB84(dVar4,0);
      auVar16._0_8_ = local_98;
      auVar16._12_4_ = uVar27;
      auVar22._8_4_ = SUB84(dVar6,0);
      auVar22._0_8_ = dVar5;
      auVar22._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar17 = blendpd(auVar16,auVar22,2);
      auVar18._0_8_ = auVar17._0_8_ * (double)auVar26._0_8_ - auVar20._0_8_ * dVar5;
      auVar18._8_8_ = auVar17._8_8_ * (double)auVar26._8_8_ - auVar20._8_8_ * dVar6;
      auVar20._0_8_ = this->_padding_;
      auVar20._8_8_ = this->_padding_;
      auVar17 = blendpd(auVar29,auVar18,2);
      auVar30._0_8_ = auVar17._0_8_ + auVar17._0_8_;
      auVar30._8_8_ = auVar17._8_8_ + auVar17._8_8_;
      dVar6 = auVar29._8_8_ + auVar29._8_8_;
      dVar3 = auVar18._0_8_ + auVar18._0_8_;
      uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar24._8_4_ = SUB84(dVar3,0);
      auVar24._0_8_ = dVar6;
      auVar24._12_4_ = uVar27;
      auVar21._8_4_ = SUB84(dVar3,0);
      auVar21._0_8_ = dVar6;
      auVar21._12_4_ = uVar27;
      auVar22 = blendpd(auVar21,auVar30,2);
      auVar25._0_8_ = auVar24._8_8_ * (double)auVar20._0_8_ - (double)auVar20._8_8_ * dVar6;
      auVar25._8_8_ = auVar30._0_8_ * (double)auVar20._8_8_ - (double)auVar26._0_8_ * dVar3;
      auVar19._8_4_ = SUB84(auVar25._8_8_,0);
      auVar19._0_8_ = auVar25._0_8_;
      auVar19._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar17 = blendpd(auVar20,auVar26,2);
      auVar23._0_8_ = auVar22._0_8_ * (double)auVar26._0_8_ - auVar17._0_8_ * auVar30._0_8_;
      auVar23._8_8_ = auVar22._8_8_ * (double)auVar26._8_8_ - auVar17._8_8_ * auVar30._8_8_;
      auVar26 = blendpd(auVar25,auVar23,2);
      dVar3 = dVar3 * dVar7 + dVar4 + auVar23._0_8_;
      local_a0 = auVar30._0_8_ * dVar7 + dVar5 + auVar26._0_8_;
      local_b0._8_4_ = SUB84(dVar3,0);
      local_b0._0_8_ = dVar6 * dVar7 + local_98 + auVar19._8_8_;
      local_b0._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      pdVar15 = &local_98;
      local_88 = (pTVar13->_s_0).Z;
      dStack_90 = (pTVar13->_s_0).Y;
    }
    dVar3 = pdVar15[1];
    dVar6 = pdVar15[2];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar15;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetClampedIndex @ 1479c49f0

int __thiscall USplineComponent::GetClampedIndex(USplineComponent *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479c4a37:
    iVar2 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    bVar1 = FSpline::IsEnabledStatic();
    if (!bVar1) goto LAB_1479c4a37;
    iVar2 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if (this->bClosedLoop == false) goto LAB_1479c4a80;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar1 = FSpline::IsEnabledStatic();
    if (!bVar1) goto LAB_1479c4a77;
    iVar3 = FSpline::GetNumControlPoints(&this->Spline);
  }
  else {
LAB_1479c4a77:
    iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  if (param_1 == iVar3) {
    param_1 = 0;
  }
LAB_1479c4a80:
  iVar3 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar3 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}

// GetComponentInstanceData @ 1479c5020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TStructOnScope<FActorComponentInstanceData> * __thiscall
USplineComponent::GetComponentInstanceData
          (USplineComponent *this,
          TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  bool bVar2;
  uint uVar3;
  UPackage *pUVar4;
  FSceneComponentInstanceData *pFVar5;
  FSplineComponentInstanceData *pFVar6;
  UObject *pUVar7;
  FSplineCurves *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  UScriptStruct *local_res18;
  FStructOnScope local_d8;
  FStructOnScope local_b0;
  void *local_88 [3];
  void *local_70;
  void *local_58;
  void *local_40;
  
  lVar11 = 0;
  if ((!UE::SplineComponent::GUseSplineCurves) && (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
    FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TStructOnScope_UFActorComponentInstanceData____6B_;
    if (this->bSplineHasBeenEdited == false) {
      FStructOnScope::FStructOnScope(&local_b0);
      local_b0._padding_ = (longlong)&___7__TStructOnScope_UFActorComponentInstanceData____6B_;
      FStructOnScope::Destroy(&local_b0);
      if (Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_Engine();
        Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FSplineComponentInstanceData,
                             (UObject *)pUVar4,L"SplineComponentInstanceData");
        if (Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_1479c52c8;
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton;
      local_res18 = Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton);
      }
      FWeakObjectPtr::operator=(&local_b0.ScriptStruct.WeakPtr,(FObjectPtr)&local_res18);
      iVar9 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
      uVar10 = (int)pUVar1->_padding_ + -1 + iVar9 & ~(iVar9 - 1U);
      uVar3 = 1;
      if (uVar10 != 0) {
        uVar3 = uVar10;
      }
      pFVar5 = FMemory::Malloc((longlong)(int)uVar3,0);
      local_b0.SampleStructMemory = (uchar *)pFVar5;
      FSceneComponentInstanceData::FSceneComponentInstanceData(pFVar5,(USceneComponent *)this);
      *(undefined1 *)&pFVar5[1]._padding_ = 0;
      pFVar5->_padding_ = (longlong)&___7FSplineComponentInstanceData__6B_;
      FSpline::FSpline((FSpline *)&pFVar5[1]._padding_);
      *(undefined1 *)&pFVar5[1]._padding_ = 0;
      FSpline::FSpline((FSpline *)&pFVar5[1]._padding_);
      local_b0.OwnsMemory = true;
LAB_1479c52c8:
      if ((FStructOnScope *)__return_storage_ptr__ != &local_b0) {
        if (*(code **)(*(longlong *)__return_storage_ptr__ + 0x48) == FStructOnScope::Reset) {
          FStructOnScope::Reset((FStructOnScope *)__return_storage_ptr__);
        }
        else {
          (**(code **)(*(longlong *)__return_storage_ptr__ + 0x48))();
        }
        *(int *)&__return_storage_ptr__->field_0x8 = local_b0.ScriptStruct.WeakPtr.ObjectIndex;
        *(int *)&__return_storage_ptr__->field_0xc =
             local_b0.ScriptStruct.WeakPtr.ObjectSerialNumber;
        *(uchar **)&__return_storage_ptr__->field_0x10 = local_b0.SampleStructMemory;
        __return_storage_ptr__->field_0x20 = local_b0.OwnsMemory;
        local_b0.OwnsMemory = false;
        if (*(code **)(local_b0._padding_ + 0x48) == FStructOnScope::Reset) {
          FStructOnScope::Reset(&local_b0);
        }
        else {
          (**(code **)(local_b0._padding_ + 0x48))();
        }
      }
      FStructOnScope::~FStructOnScope(&local_b0);
      pFVar6 = TStructOnScope<FActorComponentInstanceData>::Cast<FSplineComponentInstanceData>
                         (__return_storage_ptr__);
      pFVar6->bSplineHasBeenEdited = this->bSplineHasBeenEdited;
      return __return_storage_ptr__;
    }
    FStructOnScope::FStructOnScope(&local_d8);
    local_d8._padding_ = (longlong)&___7__TStructOnScope_UFActorComponentInstanceData____6B_;
    FStructOnScope::Destroy(&local_d8);
    if (Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSplineComponentInstanceData,(UObject *)pUVar4,
                           L"SplineComponentInstanceData");
      if (Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1479c515f;
    }
    pUVar1 = Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton;
    local_res18 = Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable
                ((UObject *)
                 Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton);
    }
    FWeakObjectPtr::operator=(&local_d8.ScriptStruct.WeakPtr,(FObjectPtr)&local_res18);
    iVar9 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
    uVar10 = (int)pUVar1->_padding_ + -1 + iVar9 & ~(iVar9 - 1U);
    uVar3 = 1;
    if (uVar10 != 0) {
      uVar3 = uVar10;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar3,0);
    local_d8.SampleStructMemory = (uchar *)pFVar5;
    FSceneComponentInstanceData::FSceneComponentInstanceData(pFVar5,(USceneComponent *)this);
    *(undefined1 *)&pFVar5[1]._padding_ = 0;
    pFVar5->_padding_ = (longlong)&___7FSplineComponentInstanceData__6B_;
    FSpline::FSpline((FSpline *)&pFVar5[1]._padding_,&this->Spline);
    *(undefined1 *)&pFVar5[1]._padding_ = 0;
    FSpline::FSpline((FSpline *)&pFVar5[1]._padding_);
    local_d8.OwnsMemory = true;
LAB_1479c515f:
    if ((FStructOnScope *)__return_storage_ptr__ != &local_d8) {
      if (*(code **)(*(longlong *)__return_storage_ptr__ + 0x48) == FStructOnScope::Reset) {
        FStructOnScope::Reset((FStructOnScope *)__return_storage_ptr__);
      }
      else {
        (**(code **)(*(longlong *)__return_storage_ptr__ + 0x48))();
      }
      *(int *)&__return_storage_ptr__->field_0x8 = local_d8.ScriptStruct.WeakPtr.ObjectIndex;
      *(int *)&__return_storage_ptr__->field_0xc = local_d8.ScriptStruct.WeakPtr.ObjectSerialNumber;
      *(uchar **)&__return_storage_ptr__->field_0x10 = local_d8.SampleStructMemory;
      __return_storage_ptr__->field_0x20 = local_d8.OwnsMemory;
      local_d8.OwnsMemory = false;
      if (*(code **)(local_d8._padding_ + 0x48) == FStructOnScope::Reset) {
        FStructOnScope::Reset(&local_d8);
      }
      else {
        (**(code **)(local_d8._padding_ + 0x48))();
      }
    }
    FStructOnScope::~FStructOnScope(&local_d8);
    pFVar6 = TStructOnScope<FActorComponentInstanceData>::Cast<FSplineComponentInstanceData>
                       (__return_storage_ptr__);
    pFVar6->bClosedLoop = this->bClosedLoop;
    pFVar6->bSplineHasBeenEdited = this->bSplineHasBeenEdited;
    return __return_storage_ptr__;
  }
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineInstanceData,(UObject *)pUVar4,
                         L"SplineInstanceData");
    if (Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton != (UScriptStruct *)0x0
       ) goto LAB_1479c53a4;
  }
  else {
LAB_1479c53a4:
    pUVar1 = Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton;
    local_res18 = Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res18);
    iVar9 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
    uVar10 = (int)pUVar1->_padding_ + -1 + iVar9 & ~(iVar9 - 1U);
    uVar3 = 1;
    if (uVar10 != 0) {
      uVar3 = uVar10;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar3,0);
    *(FSceneComponentInstanceData **)&__return_storage_ptr__->field_0x10 = pFVar5;
    FSceneComponentInstanceData::FSceneComponentInstanceData(pFVar5,(USceneComponent *)this);
    *(undefined1 *)&pFVar5[1]._padding_ = 0;
    pFVar5->_padding_ = (longlong)&___7FSplineInstanceData__6B_;
    pFVar5[1]._padding_ = 0;
    pFVar5[1]._padding_ = 0;
    *(undefined1 *)&pFVar5[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
    pFVar5[1]._padding_ = 0;
    pFVar5[1]._padding_ = 0;
    *(undefined1 *)&pFVar5[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
    pFVar5[1]._padding_ = 0;
    pFVar5[1]._padding_ = 0;
    *(undefined1 *)&pFVar5[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
    pFVar5[1]._padding_ = 0;
    pFVar5[1]._padding_ = 0;
    *(undefined1 *)&pFVar5[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
    *(undefined4 *)&pFVar5[1].AttachedInstanceComponents = 0xffffffff;
    *(undefined8 *)&pFVar5[1].AttachedInstanceComponents.field_0x10 = 0;
    *(undefined8 *)&pFVar5[1].AttachedInstanceComponents.field_0x18 = 0;
    pFVar5[1].AttachedInstanceComponents.field_0x20 = 0;
    *(undefined4 *)&pFVar5[1].AttachedInstanceComponents.field_0x24 = 0;
    *(undefined8 *)&pFVar5[1].AttachedInstanceComponents.field_0x28 = 0;
    *(undefined8 *)&pFVar5[1].AttachedInstanceComponents.field_0x30 = 0;
    pFVar5[1].AttachedInstanceComponents.field_0x38 = 0;
    *(undefined4 *)&pFVar5[1].AttachedInstanceComponents.field_0x3c = 0;
    *(undefined8 *)&pFVar5[1].AttachedInstanceComponents.field_0x40 = 0;
    *(undefined8 *)&pFVar5[1].AttachedInstanceComponents.field_0x48 = 0;
    *(undefined1 *)&pFVar5[2]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar5[2]._padding_ + 4) = 0;
    pFVar5[2]._padding_ = 0;
    pFVar5[2]._padding_ = 0;
    *(undefined1 *)&pFVar5[2]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar5[2]._padding_ + 4) = 0;
    *(undefined4 *)&pFVar5[2]._padding_ = 0xffffffff;
    pFVar5[1].AttachedInstanceComponents.field_0x8 = 0;
    __return_storage_ptr__->field_0x20 = 1;
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8);
  if (Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineInstanceData,(UObject *)pUVar4,
                         L"SplineInstanceData");
    if (Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton == (UScriptStruct *)0x0
       ) goto LAB_1479c557b;
  }
  iVar9 = (int)(Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton)->_padding_;
  if ((*(int *)&pUVar7[1].field_0x10 < iVar9) ||
     ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar9 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton)->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar11 = *(longlong *)&__return_storage_ptr__->field_0x10;
  }
LAB_1479c557b:
  if (this->bSplineHasBeenEdited != false) {
    pFVar8 = GetSplineCurves(this,(FSplineCurves *)local_88);
    FSplineCurves::operator=((FSplineCurves *)(lVar11 + 0xc0),pFVar8);
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    *(bool *)(lVar11 + 0x128) = this->bClosedLoop;
  }
  *(bool *)(lVar11 + 0xb8) = this->bSplineHasBeenEdited;
  return __return_storage_ptr__;
}

// GetDefaultSpline @ 1479c5cd0

FSpline * __cdecl USplineComponent::GetDefaultSpline(FSpline *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FSpline *pFVar7;
  
  pUVar6 = StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar2 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSpline *)(*pcVar4)();
      return pFVar7;
    }
  }
  FSpline::FSpline(__return_storage_ptr__,(FSpline *)&pUVar2[0x21].field_0x20);
  return __return_storage_ptr__;
}

// GetDefaultUpVector @ 1479c5d70

TVector<double> * __thiscall
USplineComponent::GetDefaultUpVector
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,Type param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if (param_1 == World) {
    auVar18._0_8_ = this->_padding_;
    auVar18._8_8_ = this->_padding_;
    auVar9._0_8_ = this->_padding_;
    auVar9._8_8_ = this->_padding_;
    dVar7 = (double)this->_padding_;
    dVar2 = (this->DefaultUpVector).field0_0x0._s_0.X * (double)this->_padding_;
    dVar3 = (this->DefaultUpVector).field0_0x0._s_0.Y * (double)this->_padding_;
    uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar5 = (this->DefaultUpVector).field0_0x0._s_0.Z * (double)this->_padding_;
    dVar6 = (double)this->_padding_ * 0.0;
    auVar12 = blendpd(auVar9,auVar18,2);
    auVar20._8_4_ = SUB84(dVar3,0);
    auVar20._0_8_ = dVar2;
    auVar20._12_4_ = uVar19;
    auVar21._0_8_ = auVar20._8_8_ * (double)auVar9._0_8_ - (double)auVar9._8_8_ * dVar2;
    auVar21._8_8_ = dVar5 * (double)auVar9._8_8_ - (double)auVar18._0_8_ * dVar3;
    auVar8._8_4_ = SUB84(dVar3,0);
    auVar8._0_8_ = dVar2;
    auVar8._12_4_ = uVar19;
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar9 = blendpd(auVar8,auVar4,2);
    auVar10._0_8_ = auVar9._0_8_ * (double)auVar18._0_8_ - auVar12._0_8_ * dVar5;
    auVar10._8_8_ = auVar9._8_8_ * (double)auVar18._8_8_ - auVar12._8_8_ * dVar6;
    auVar12._0_8_ = this->_padding_;
    auVar12._8_8_ = this->_padding_;
    auVar9 = blendpd(auVar21,auVar10,2);
    auVar22._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar22._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    dVar6 = auVar21._8_8_ + auVar21._8_8_;
    dVar1 = auVar10._0_8_ + auVar10._0_8_;
    uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar16._8_4_ = SUB84(dVar1,0);
    auVar16._0_8_ = dVar6;
    auVar16._12_4_ = uVar19;
    auVar13._8_4_ = SUB84(dVar1,0);
    auVar13._0_8_ = dVar6;
    auVar13._12_4_ = uVar19;
    auVar14 = blendpd(auVar13,auVar22,2);
    auVar17._0_8_ = auVar16._8_8_ * (double)auVar12._0_8_ - (double)auVar12._8_8_ * dVar6;
    auVar17._8_8_ = auVar22._0_8_ * (double)auVar12._8_8_ - (double)auVar18._0_8_ * dVar1;
    auVar11._8_4_ = SUB84(auVar17._8_8_,0);
    auVar11._0_8_ = auVar17._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
    auVar9 = blendpd(auVar12,auVar18,2);
    auVar15._0_8_ = auVar14._0_8_ * (double)auVar18._0_8_ - auVar9._0_8_ * auVar22._0_8_;
    auVar15._8_8_ = auVar14._8_8_ * (double)auVar18._8_8_ - auVar9._8_8_ * auVar22._8_8_;
    auVar18 = blendpd(auVar17,auVar15,2);
    dVar1 = dVar1 * dVar7 + dVar3 + auVar15._0_8_;
    auVar14._8_4_ = SUB84(dVar1,0);
    auVar14._0_8_ = dVar6 * dVar7 + dVar2 + auVar11._8_8_;
    auVar14._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar14;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar22._0_8_ * dVar7 + dVar5 + auVar18._0_8_;
    return __return_storage_ptr__;
  }
  dVar6 = (this->DefaultUpVector).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->DefaultUpVector).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->DefaultUpVector).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetDirectionAtDistanceAlongSpline @ 1479c5ff0

TVector<double> * __thiscall
USplineComponent::GetDirectionAtDistanceAlongSpline
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  bool bVar1;
  float fVar2;
  float local_res10 [2];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      goto LAB_1479c604f;
    }
  }
  local_res10[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res10);
LAB_1479c604f:
  GetDirectionAtSplineInputKey(this,__return_storage_ptr__,fVar2,param_2);
  return __return_storage_ptr__;
}

// GetDirectionAtSplineInputKey @ 1479c6080

TVector<double> * __thiscall
USplineComponent::GetDirectionAtSplineInputKey
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double> local_a0;
  TVector<double> local_88 [5];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar6 = FSpline::IsEnabledStatic(), !bVar6)) {
    pTVar7 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                       ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,local_88,
                        param_1,&UE::Math::TVector<double>::ZeroVector);
  }
  else {
    pTVar7 = FSpline::EvaluateDerivative(&this->Spline,&local_a0,param_1);
  }
  dVar5 = __real_3e45798ee0000000;
  dVar15 = __real_3ff0000000000000;
  local_b8 = (pTVar7->field0_0x0)._s_0.X;
  dStack_b0 = (pTVar7->field0_0x0)._s_0.Y;
  local_a8 = (pTVar7->field0_0x0)._s_0.Z;
  dVar12 = dStack_b0 * dStack_b0 + local_b8 * local_b8 + local_a8 * local_a8;
  if (dVar12 == __real_3ff0000000000000) {
    local_b8 = (pTVar7->field0_0x0)._s_0.X;
    dStack_b0 = (pTVar7->field0_0x0)._s_0.Y;
    local_a8 = (pTVar7->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar12) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
    local_b8 = local_b8 * dVar12;
    local_a8 = local_a8 * dVar12;
    dStack_b0 = dStack_b0 * dVar12;
  }
  else {
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_b8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_b0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_a8;
  if (param_2 == World) {
    dVar13 = (double)this->_padding_;
    local_b8 = local_b8 * (double)this->_padding_;
    dStack_b0 = dStack_b0 * (double)this->_padding_;
    uVar21 = (undefined4)((ulonglong)dStack_b0 >> 0x20);
    auVar9._0_8_ = this->_padding_;
    auVar9._8_8_ = this->_padding_;
    auVar1._0_8_ = this->_padding_;
    auVar1._8_8_ = this->_padding_;
    auVar22._8_4_ = SUB84(dStack_b0,0);
    auVar22._0_8_ = local_b8;
    auVar22._12_4_ = uVar21;
    local_a8 = local_a8 * (double)this->_padding_;
    dVar12 = (double)this->_padding_ * 0.0;
    auVar14 = blendpd(auVar9,auVar1,2);
    auVar23._0_8_ = auVar22._8_8_ * (double)auVar9._0_8_ - (double)auVar9._8_8_ * local_b8;
    auVar23._8_8_ = local_a8 * (double)auVar9._8_8_ - (double)auVar1._0_8_ * dStack_b0;
    auVar8._8_4_ = SUB84(dStack_b0,0);
    auVar8._0_8_ = local_b8;
    auVar8._12_4_ = uVar21;
    auVar4._8_4_ = SUB84(dVar12,0);
    auVar4._0_8_ = local_a8;
    auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar9 = blendpd(auVar8,auVar4,2);
    auVar10._0_8_ = auVar9._0_8_ * (double)auVar1._0_8_ - auVar14._0_8_ * local_a8;
    auVar10._8_8_ = auVar9._8_8_ * (double)auVar1._8_8_ - auVar14._8_8_ * dVar12;
    auVar14._0_8_ = this->_padding_;
    auVar14._8_8_ = this->_padding_;
    auVar9 = blendpd(auVar23,auVar10,2);
    dVar12 = auVar23._8_8_ + auVar23._8_8_;
    dVar3 = auVar10._0_8_ + auVar10._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar19._8_4_ = SUB84(dVar3,0);
    auVar19._0_8_ = dVar12;
    auVar19._12_4_ = uVar21;
    auVar24._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar24._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    auVar16._8_4_ = SUB84(dVar3,0);
    auVar16._0_8_ = dVar12;
    auVar16._12_4_ = uVar21;
    auVar9 = blendpd(auVar14,auVar1,2);
    auVar20._0_8_ = auVar19._8_8_ * (double)auVar14._0_8_ - (double)auVar14._8_8_ * dVar12;
    auVar20._8_8_ = auVar24._0_8_ * (double)auVar14._8_8_ - (double)auVar1._0_8_ * dVar3;
    auVar14 = blendpd(auVar16,auVar24,2);
    auVar17._0_8_ = auVar14._0_8_ * (double)auVar1._0_8_ - auVar9._0_8_ * auVar24._0_8_;
    auVar17._8_8_ = auVar14._8_8_ * (double)auVar1._8_8_ - auVar9._8_8_ * auVar24._8_8_;
    auVar11._8_4_ = SUB84(auVar20._8_8_,0);
    auVar11._0_8_ = auVar20._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
    dVar3 = dVar3 * dVar13 + dStack_b0 + auVar17._0_8_;
    auVar9 = blendpd(auVar20,auVar17,2);
    dVar18 = auVar9._0_8_ + auVar24._0_8_ * dVar13 + local_a8;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar12 * dVar13 + local_b8 + auVar11._8_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar18;
    dVar12 = (__return_storage_ptr__->field0_0x0)._s_0.X;
    dVar3 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
    dVar13 = dVar3 * dVar3 + dVar12 * dVar12 + dVar18 * dVar18;
    if (dVar5 < dVar13) {
      dVar15 = dVar15 / SQRT(dVar13);
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar15;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 * dVar15;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar18 * dVar15;
    }
  }
  return __return_storage_ptr__;
}

// GetDirectionAtSplinePoint @ 1479c6380

TVector<double> * __thiscall
USplineComponent::GetDirectionAtSplinePoint
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,int param_1,Type param_2)

{
  TVector<double> local_28;
  
  GetLeaveTangentAtSplinePoint(this,&local_28,param_1,param_2);
  UE::Math::TVector<double>::GetSafeNormal
            (&local_28,__return_storage_ptr__,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  return __return_storage_ptr__;
}

// GetDirectionAtTime @ 1479c63c0

TVector<double> * __thiscall
USplineComponent::GetDirectionAtTime
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          ,bool param_3)

{
  undefined8 uVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->Duration == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  if (!param_3) {
    fVar3 = GetInputKeyValueAtTime(this,param_1);
    GetDirectionAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
    return __return_storage_ptr__;
  }
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479c644d:
    fVar3 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  }
  else {
    bVar2 = FSpline::IsEnabledStatic();
    if (!bVar2) goto LAB_1479c644d;
    fVar3 = FSpline::GetSplineLength(&this->Spline);
  }
  fVar3 = (param_1 / this->Duration) * fVar3;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance(&this->Spline,fVar3);
      goto LAB_1479c64a7;
    }
  }
  local_res8[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar3,local_res8);
LAB_1479c64a7:
  GetDirectionAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
  return __return_storage_ptr__;
}

// GetDistanceAlongSplineAtLocation @ 1479c6510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
USplineComponent::GetDistanceAlongSplineAtLocation
          (USplineComponent *this,TVector<double> *param_1,Type param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float local_b8 [2];
  TVector<double>_u_0 local_b0 [7];
  
  if (param_2 == World) {
    dVar2 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar3 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar4 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar16 = (param_1->field0_0x0)._s_0.Z - (double)this->_padding_;
    auVar24._8_4_ = SUB84(dVar3,0);
    auVar24._0_8_ = dVar2;
    auVar24._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar25._8_4_ = SUB84(dVar5,0);
    auVar25._0_8_ = dVar4;
    auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar25 = blendpd(auVar24,auVar25,2);
    dVar8 = (param_1->field0_0x0)._s_0.X - (double)this->_padding_;
    dVar9 = (param_1->field0_0x0)._s_0.Y - (double)this->_padding_;
    uVar31 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar35._8_4_ = SUB84(dVar9,0);
    auVar35._0_8_ = dVar8;
    auVar35._12_4_ = uVar31;
    auVar17._8_4_ = SUB84(dVar4,0);
    auVar17._0_8_ = dVar3;
    auVar17._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar21._8_4_ = SUB84(dVar9,0);
    auVar21._0_8_ = dVar8;
    auVar21._12_4_ = uVar31;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar16;
    auVar22 = blendpd(auVar21,auVar10,2);
    auVar36._0_8_ = auVar35._8_8_ * dVar2 - dVar3 * dVar8;
    auVar36._8_8_ = dVar16 * dVar3 - auVar17._8_8_ * dVar9;
    auVar23._0_8_ = auVar22._0_8_ * dVar4 - auVar25._0_8_ * dVar16;
    auVar23._8_8_ = auVar22._8_8_ * dVar5 - auVar25._8_8_ * 0.0;
    dVar6 = auVar36._8_8_ + auVar36._8_8_;
    dVar7 = auVar23._0_8_ + auVar23._0_8_;
    uVar31 = SUB84(dVar7,0);
    uVar32 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar22 = blendpd(auVar36,auVar23,2);
    auVar33._8_4_ = uVar31;
    auVar33._0_8_ = dVar6;
    auVar33._12_4_ = uVar32;
    auVar18._8_4_ = uVar31;
    auVar18._0_8_ = dVar6;
    auVar18._12_4_ = uVar32;
    auVar28._8_4_ = uVar31;
    auVar28._0_8_ = dVar6;
    auVar28._12_4_ = uVar32;
    auVar37._0_8_ = auVar22._0_8_ + auVar22._0_8_;
    auVar37._8_8_ = auVar22._8_8_ + auVar22._8_8_;
    auVar22._0_8_ = this->_padding_;
    auVar22._8_8_ = this->_padding_;
    auVar34._0_8_ = auVar33._8_8_ * dVar2 - dVar6 * dVar3;
    auVar34._8_8_ = auVar37._0_8_ * dVar3 - auVar18._8_8_ * dVar4;
    auVar29 = blendpd(auVar28,auVar37,2);
    auVar19._8_4_ = SUB84(auVar37._8_8_,0);
    auVar19._0_8_ = auVar37._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
    auVar30._0_8_ = auVar29._0_8_ * dVar4 - auVar37._0_8_ * auVar25._0_8_;
    auVar30._8_8_ = auVar29._8_8_ * dVar5 - auVar19._8_8_ * auVar25._8_8_;
    uVar1 = this->_padding_;
    lVar12 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                (uint)((ulonglong)uVar1 >> 0x20),
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar1) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar26._0_8_ =
         (double)CONCAT44((uint)((ulonglong)auVar22._0_8_ >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)auVar22._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar26._8_4_ = (uint)auVar22._8_8_ & _UNK_15061cc88;
    auVar26._12_4_ = (uint)((ulonglong)auVar22._8_8_ >> 0x20) & _UNK_15061cc8c;
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
    lVar13 = -(ulonglong)(auVar26._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar14 = -(ulonglong)(auVar26._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar27._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar22._4_4_,
                          ~(uint)lVar13 & auVar22._0_4_);
    auVar27._8_4_ = ~(uint)lVar14 & auVar22._8_4_;
    auVar27._12_4_ = ~(uint)((ulonglong)lVar14 >> 0x20) & auVar22._12_4_;
    auVar20._8_4_ = SUB84(auVar34._8_8_,0);
    auVar20._0_8_ = auVar34._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
    local_b0[0]._0_8_ = auVar27._0_8_ * (dVar6 * dVar5 + dVar8 + auVar20._8_8_);
    local_b0[0]._8_8_ = auVar27._8_8_ * (dVar7 * dVar5 + dVar9 + auVar30._0_8_);
    auVar29._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar29._0_8_ = uVar1;
    auVar29._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
    auVar25 = blendpd(auVar34,auVar30,2);
    local_b0[0]._16_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar22._4_4_,
                          ~(uint)lVar12 & auVar22._0_4_) *
         (auVar37._0_8_ * dVar5 + dVar16 + auVar25._0_8_);
  }
  else {
    local_b0[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
    local_b0[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
    local_b0[0]._16_8_ = (param_1->field0_0x0)._s_0.Z;
  }
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar11 = FSpline::IsEnabledStatic();
    if (bVar11) {
      fVar15 = FSpline::FindNearest(&this->Spline,(TVector<double> *)&local_b0[0]._s_0,local_b8);
      goto LAB_1479c676d;
    }
  }
  fVar15 = FInterpCurve<UE::Math::TVector<double>_>::FindNearest
                     ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
                      (TVector<double> *)&local_b0[0]._s_0,local_b8);
LAB_1479c676d:
  fVar15 = GetDistanceAlongSplineAtSplineInputKey(this,fVar15);
  return fVar15;
}

// GetDistanceAlongSplineAtSplineInputKey @ 1479c6790

float __thiscall
USplineComponent::GetDistanceAlongSplineAtSplineInputKey(USplineComponent *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar2 = FSpline::IsEnabledStatic(), !bVar2)) {
    iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar3 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if (this->bClosedLoop == false) {
    iVar3 = iVar3 + -1;
  }
  if (param_1 < 0.0) {
    if (param_1 < (float)iVar3) {
      return 0.0;
    }
  }
  else if (param_1 < (float)iVar3) {
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
      fVar6 = FSpline::GetDistanceAtParameter(&this->Spline,param_1);
      return fVar6;
    }
    iVar3 = (int)ROUND((param_1 + param_1) - __real_3f000000) >> 1;
    uVar5 = iVar3 * this->ReparamStepsPerSegment;
    uVar4 = 0;
    if ((int)uVar5 < *(int *)&(this->SplineCurves).ReparamTable.field_0x8) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
    fVar6 = *(float *)(*(longlong *)&(this->SplineCurves).ReparamTable + (longlong)(int)uVar5 * 0x14
                      );
    fVar7 = GetSegmentLength(this,iVar3,param_1 - (float)iVar3);
    return fVar7 + fVar6;
  }
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
    fVar6 = FSpline::GetSplineLength(&this->Spline);
    return fVar6;
  }
  fVar6 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  return fVar6;
}

// GetDistanceAlongSplineAtSplinePoint @ 1479c6940

float __thiscall
USplineComponent::GetDistanceAlongSplineAtSplinePoint(USplineComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSpline *this_00;
  float fVar4;
  
  if (this->bClosedLoop != false) {
    if ((UE::SplineComponent::GUseSplineCurves) || (bVar2 = FSpline::IsEnabledStatic(), !bVar2)) {
      iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
    }
    else {
      iVar3 = FSpline::GetNumControlPoints(&this->Spline);
    }
    if (param_1 == iVar3) {
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
        fVar4 = FSpline::GetSplineLength(&this->Spline);
        return fVar4;
      }
      fVar4 = FSplineCurves::GetSplineLength(&this->SplineCurves);
      return fVar4;
    }
  }
  this_00 = &this->Spline;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar4 = FSpline::GetParameterAtIndex(this_00,param_1);
      fVar4 = FSpline::GetDistanceAtParameter(this_00,fVar4);
      return fVar4;
    }
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
      iVar3 = FSpline::GetNumControlPoints(this_00);
      goto LAB_1479c6a36;
    }
  }
  iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
LAB_1479c6a36:
  if (-1 < param_1) {
    if (this->bClosedLoop == false) {
      iVar3 = iVar3 + -1;
    }
    if ((param_1 < iVar3 + 1) &&
       (iVar3 = param_1 * this->ReparamStepsPerSegment,
       iVar3 < *(int *)&(this->SplineCurves).ReparamTable.field_0x8)) {
      if ((iVar3 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
      return *(float *)(*(longlong *)&(this->SplineCurves).ReparamTable + (longlong)iVar3 * 0x14);
    }
  }
  return 0.0;
}

// GetEnabledSplinePointTypes @ 1479c93f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<ESplinePointType::Type,TSizedDefaultAllocator<32>_> * __thiscall
USplineComponent::GetEnabledSplinePointTypes
          (USplineComponent *this,
          TArray<ESplinePointType::Type,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_150631e08;
  uVar2 = __xmm_00000003000000020000000100000000;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&__return_storage_ptr__->AllocatorInstance,5,&__return_storage_ptr__->ArrayMax)
  ;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)pFVar1 = uVar2;
  *(undefined8 *)(pFVar1 + 8) = uVar3;
  *(undefined4 *)(pFVar1 + 0x10) = 4;
  return __return_storage_ptr__;
}

// GetFloatPropertyAtIndex @ 1479c98d0

float __thiscall
USplineComponent::GetFloatPropertyAtIndex(USplineComponent *this,int param_1,FName param_2)

{
  float fVar1;
  FName local_res8 [4];
  
  if ((!UE::SplineComponent::GUseSplineCurves) && ((this->Spline).CurrentImplementation == '\x02'))
  {
    local_res8[0] = param_2;
    fVar1 = FSpline::GetAttributeValue<float>(&this->Spline,param_1,local_res8);
    return fVar1;
  }
  return 0.0;
}

// GetFloatPropertyAtSplineInputKey @ 1479c9910

float __thiscall
USplineComponent::GetFloatPropertyAtSplineInputKey
          (USplineComponent *this,float param_1,FName param_2)

{
  FSpline *this_00;
  bool bVar1;
  UObject *pUVar2;
  FProperty *this_01;
  FInterpCurve<float> *this_02;
  float fVar3;
  float local_res8 [2];
  
  this_00 = &this->Spline;
  pUVar2 = (UObject *)(**(code **)(this->_padding_ + 0xa90))();
  if ((pUVar2 != (UObject *)0x0) &&
     (this_01 = UStruct::FindPropertyByName(*(UStruct **)&pUVar2->field_0x10,param_2),
     this_01 != (FProperty *)0x0)) {
    this_02 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_01,pUVar2,0);
    local_res8[0] = 0.0;
    fVar3 = FInterpCurve<float>::Eval(this_02,param_1,local_res8);
    return fVar3;
  }
  if (((UE::SplineComponent::GUseSplineCurves == false) &&
      (this_00->CurrentImplementation == '\x02')) &&
     (bVar1 = FSpline::HasAttributeChannel(this_00,param_2), bVar1)) {
    fVar3 = FSpline::EvaluateAttribute<float>(this_00,param_1,param_2);
    return fVar3;
  }
  return 0.0;
}

// GetFloatPropertyAtSplinePoint @ 1479c99d0

float __thiscall
USplineComponent::GetFloatPropertyAtSplinePoint(USplineComponent *this,int param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  UObject *pUVar5;
  FProperty *this_00;
  longlong *plVar6;
  uint uVar7;
  float fVar8;
  
  pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0xa90))();
  if (pUVar5 != (UObject *)0x0) {
    this_00 = UStruct::FindPropertyByName(*(UStruct **)&pUVar5->field_0x10,param_2);
    if (this_00 != (FProperty *)0x0) {
      plVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar5,0);
      iVar1 = (int)plVar6[1];
      if (0 < iVar1) {
        uVar7 = iVar1 - 1U;
        if (param_1 < (int)(iVar1 - 1U)) {
          uVar7 = param_1;
        }
        uVar3 = 0;
        if (0 < (int)uVar7) {
          uVar3 = uVar7;
        }
        uVar7 = 0;
        if ((int)uVar3 < iVar1) {
          uVar7 = ~uVar3 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            fVar8 = (float)(*pcVar2)();
            return fVar8;
          }
        }
        return *(float *)(*plVar6 + 4 + (longlong)(int)uVar3 * 0x14);
      }
    }
  }
  return 0.0;
}

// GetFloatPropertyChannels @ 1479c9ac0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
USplineComponent::GetFloatPropertyChannels
          (USplineComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  bool bVar1;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if ((bVar1) && ((this->Spline).CurrentImplementation == '\x02')) {
      FSpline::GetFloatPropertyChannels(&this->Spline,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetFloatPropertyInputKeyAtIndex @ 1479c9b30

float __thiscall
USplineComponent::GetFloatPropertyInputKeyAtIndex(USplineComponent *this,int param_1,FName param_2)

{
  float fVar1;
  FName local_res8 [4];
  
  if ((!UE::SplineComponent::GUseSplineCurves) && ((this->Spline).CurrentImplementation == '\x02'))
  {
    local_res8[0] = param_2;
    fVar1 = FSpline::GetAttributeParameter<float>(&this->Spline,param_1,local_res8);
    return fVar1;
  }
  return 0.0;
}

// GetIgnoreBoundsForEditorFocus @ 1479c9ce0

bool __thiscall USplineComponent::GetIgnoreBoundsForEditorFocus(USplineComponent *this)

{
  bool bVar1;
  int iVar2;
  
  if ((this->_padding_ & 0x800000000) != 0) {
    return true;
  }
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar1 = FSpline::IsEnabledStatic(), !bVar1)) {
    iVar2 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar2 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if (iVar2 == 0) {
    return true;
  }
  return false;
}

// GetInputKeyAtDistanceAlongSpline @ 1479c9d40

float __thiscall
USplineComponent::GetInputKeyAtDistanceAlongSpline(USplineComponent *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  TInterval1<float> TVar6;
  float fVar7;
  float fVar8;
  float afStackX_18 [4];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar4 = FSpline::IsEnabledStatic(), !bVar4)) {
    iVar5 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar5 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if (1 < iVar5) {
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar4 = FSpline::IsEnabledStatic(), bVar4)) {
      fVar7 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
    }
    else {
      afStackX_18[0] = 0.0;
      fVar7 = FInterpCurve<float>::Eval
                        ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,
                         afStackX_18);
    }
    fVar1 = this->Duration;
    TVar6 = GetInputKeyRange(this);
    fVar2 = *(float *)TVar6;
    fVar8 = 0.0;
    if (((fVar2 < fVar7) &&
        (fVar3 = *(float *)((longlong)TVar6 + 4), fVar8 = __real_3f800000, fVar7 < fVar3)) &&
       (fVar8 = __real_3f000000, fVar2 != fVar3)) {
      fVar8 = (fVar7 - fVar2) / (fVar3 - fVar2);
    }
    return fVar1 * fVar8;
  }
  return 0.0;
}

// GetInputKeyRange @ 1479c9d90

TInterval1<float> __thiscall USplineComponent::GetInputKeyRange(USplineComponent *this)

{
  float fVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TInterval1<float> TVar7;
  uint uVar8;
  TInterval1<float> in_RDX;
  
  iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
  *(undefined4 *)in_RDX = 0x7f7fffff;
  *(undefined4 *)((longlong)in_RDX + 4) = 0xff7fffff;
  if (0 < iVar3) {
    *(undefined4 *)in_RDX = **(undefined4 **)&(this->SplineCurves).Position;
    iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
    uVar8 = iVar3 - 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar3) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar7 = (TInterval1<float>)(*pcVar4)();
      return TVar7;
    }
    cVar2 = (this->SplineCurves).Position.field_0x10;
    fVar1 = *(float *)((longlong)*(int *)&(this->SplineCurves).Position.field_0x8 * 0x58 + -0x58 +
                      *(longlong *)&(this->SplineCurves).Position);
    *(float *)((longlong)in_RDX + 4) = fVar1;
    if (cVar2 != '\0') {
      *(float *)((longlong)in_RDX + 4) = fVar1 + *(float *)&(this->SplineCurves).Position.field_0x14
      ;
      return in_RDX;
    }
  }
  return in_RDX;
}

// GetInputKeyValueAtDistanceAlongSpline @ 1479c9e70

float __thiscall
USplineComponent::GetInputKeyValueAtDistanceAlongSpline(USplineComponent *this,float param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float local_res18 [4];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      iVar2 = FSpline::GetNumControlPoints(&this->Spline);
      goto LAB_1479c9eb5;
    }
  }
  iVar2 = *(int *)&(this->SplineCurves).Position.field_0x8;
LAB_1479c9eb5:
  if (iVar2 < 2) {
    return 0.0;
  }
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar3 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      return fVar3;
    }
  }
  local_res18[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res18);
  return fVar3;
}

// GetInputKeyValueAtSplinePoint @ 1479c9f30

float __thiscall USplineComponent::GetInputKeyValueAtSplinePoint(USplineComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar2 = FSpline::IsEnabledStatic(), !bVar2)) {
    iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar3 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if (iVar3 == 0) {
    return 0.0;
  }
  if (this->bClosedLoop != false) {
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
      iVar3 = FSpline::GetNumControlPoints(&this->Spline);
    }
    else {
      iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
    }
    if (param_1 == iVar3) {
      if ((UE::SplineComponent::GUseSplineCurves != false) ||
         (bVar2 = FSpline::IsEnabledStatic(), !bVar2)) {
        uVar5 = param_1 - 1;
        uVar4 = 0;
        if ((int)uVar5 < *(int *)&(this->SplineCurves).Position.field_0x8) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          fVar6 = (float)(*pcVar1)();
          return fVar6;
        }
        return *(float *)((longlong)(int)uVar5 * 0x58 + *(longlong *)&(this->SplineCurves).Position)
               + *(float *)&(this->SplineCurves).Position.field_0x14;
      }
      goto LAB_1479ca068;
    }
  }
  param_1 = GetClampedIndex(this,param_1);
  if ((UE::SplineComponent::GUseSplineCurves != false) ||
     (bVar2 = FSpline::IsEnabledStatic(), !bVar2)) {
    uVar4 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
    return *(float *)((longlong)param_1 * 0x58 + *(longlong *)&(this->SplineCurves).Position);
  }
LAB_1479ca068:
  fVar6 = FSpline::GetParameterAtIndex(&this->Spline,param_1);
  return fVar6;
}

// GetInputKeyValueAtTime @ 1479ca0f0

float __thiscall USplineComponent::GetInputKeyValueAtTime(USplineComponent *this,float param_1)

{
  float fVar1;
  TInterval1<float> TVar2;
  float fVar3;
  
  fVar1 = this->Duration;
  if (fVar1 <= 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = fVar1;
    if (param_1 <= fVar1) {
      fVar3 = param_1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = fVar3 / fVar1;
  }
  TVar2 = GetInputKeyRange(this);
  return (__real_3f800000 - fVar3) * *(float *)TVar2 + fVar3 * *(float *)((longlong)TVar2 + 4);
}

// GetLeaveTangentAtSplinePoint @ 1479ca160

TVector<double> * __thiscall
USplineComponent::GetLeaveTangentAtSplinePoint
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,int param_1,Type param_2)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TVector<double>_u_0 *pTVar13;
  TVector<double> *pTVar14;
  double *pdVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  TVector<double>_u_0 local_c8;
  undefined1 local_b0 [16];
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  TVector<double> local_78 [4];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar9 = FSpline::IsEnabledStatic(), !bVar9)) {
    iVar10 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar10 = FSpline::GetNumControlPoints(&this->Spline);
  }
  uVar8 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  if (iVar10 != 0) {
    uVar11 = GetClampedIndex(this,param_1);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
      pTVar13 = &FSpline::GetOutTangent(&this->Spline,local_78,uVar11)->field0_0x0;
    }
    else {
      uVar12 = 0;
      if ((int)uVar11 < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        pTVar14 = (TVector<double> *)(*pcVar2)();
        return pTVar14;
      }
      lVar1 = *(longlong *)&(this->SplineCurves).Position;
      pdVar15 = (double *)((longlong)(int)uVar11 * 0x58 + 0x38 + lVar1);
      pTVar13 = &local_c8;
      local_c8._s_0.X = *pdVar15;
      local_c8._s_0.Y = pdVar15[1];
      local_c8._s_0.Z = *(double *)((longlong)(int)uVar11 * 0x58 + 0x48 + lVar1);
    }
    local_98 = (((TVector<double>_u_0 *)&(pTVar13->_s_0).X)->_s_0).X;
    if (param_2 == World) {
      auVar26._0_8_ = this->_padding_;
      auVar26._8_8_ = this->_padding_;
      dVar7 = (double)this->_padding_;
      local_98 = (double)this->_padding_ * local_98;
      dVar4 = (double)this->_padding_ * (pTVar13->_s_0).Y;
      uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar17._0_8_ = this->_padding_;
      auVar17._8_8_ = this->_padding_;
      auVar28._8_4_ = SUB84(dVar4,0);
      auVar28._0_8_ = local_98;
      auVar28._12_4_ = uVar27;
      dVar5 = (pTVar13->_s_0).Z * (double)this->_padding_;
      dVar6 = (double)this->_padding_ * 0.0;
      pdVar15 = (double *)local_b0;
      auVar20 = blendpd(auVar17,auVar26,2);
      auVar29._0_8_ = auVar28._8_8_ * (double)auVar17._0_8_ - (double)auVar17._8_8_ * local_98;
      auVar29._8_8_ = dVar5 * (double)auVar17._8_8_ - (double)auVar26._0_8_ * dVar4;
      auVar16._8_4_ = SUB84(dVar4,0);
      auVar16._0_8_ = local_98;
      auVar16._12_4_ = uVar27;
      auVar22._8_4_ = SUB84(dVar6,0);
      auVar22._0_8_ = dVar5;
      auVar22._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar17 = blendpd(auVar16,auVar22,2);
      auVar18._0_8_ = auVar17._0_8_ * (double)auVar26._0_8_ - auVar20._0_8_ * dVar5;
      auVar18._8_8_ = auVar17._8_8_ * (double)auVar26._8_8_ - auVar20._8_8_ * dVar6;
      auVar20._0_8_ = this->_padding_;
      auVar20._8_8_ = this->_padding_;
      auVar17 = blendpd(auVar29,auVar18,2);
      auVar30._0_8_ = auVar17._0_8_ + auVar17._0_8_;
      auVar30._8_8_ = auVar17._8_8_ + auVar17._8_8_;
      dVar6 = auVar29._8_8_ + auVar29._8_8_;
      dVar3 = auVar18._0_8_ + auVar18._0_8_;
      uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar24._8_4_ = SUB84(dVar3,0);
      auVar24._0_8_ = dVar6;
      auVar24._12_4_ = uVar27;
      auVar21._8_4_ = SUB84(dVar3,0);
      auVar21._0_8_ = dVar6;
      auVar21._12_4_ = uVar27;
      auVar22 = blendpd(auVar21,auVar30,2);
      auVar25._0_8_ = auVar24._8_8_ * (double)auVar20._0_8_ - (double)auVar20._8_8_ * dVar6;
      auVar25._8_8_ = auVar30._0_8_ * (double)auVar20._8_8_ - (double)auVar26._0_8_ * dVar3;
      auVar19._8_4_ = SUB84(auVar25._8_8_,0);
      auVar19._0_8_ = auVar25._0_8_;
      auVar19._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar17 = blendpd(auVar20,auVar26,2);
      auVar23._0_8_ = auVar22._0_8_ * (double)auVar26._0_8_ - auVar17._0_8_ * auVar30._0_8_;
      auVar23._8_8_ = auVar22._8_8_ * (double)auVar26._8_8_ - auVar17._8_8_ * auVar30._8_8_;
      auVar26 = blendpd(auVar25,auVar23,2);
      dVar3 = dVar3 * dVar7 + dVar4 + auVar23._0_8_;
      local_a0 = auVar30._0_8_ * dVar7 + dVar5 + auVar26._0_8_;
      local_b0._8_4_ = SUB84(dVar3,0);
      local_b0._0_8_ = dVar6 * dVar7 + local_98 + auVar19._8_8_;
      local_b0._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      pdVar15 = &local_98;
      local_88 = (pTVar13->_s_0).Z;
      dStack_90 = (pTVar13->_s_0).Y;
    }
    dVar3 = pdVar15[1];
    dVar6 = pdVar15[2];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar15;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 1479ca590

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
USplineComponent::GetLifetimeReplicatedProps
          (USplineComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  UClass *pUVar1;
  UClass *pUVar2;
  
  USceneComponent::GetLifetimeReplicatedProps((USceneComponent *)this,param_1);
  pUVar1 = StaticClass();
  pUVar2 = StaticClass();
  DisableAllReplicatedPropertiesOfClass(pUVar2,pUVar1,ExcludeSuper,param_1);
  return;
}

// GetLocationAndTangentAtSplinePoint @ 1479cab10

void __thiscall
USplineComponent::GetLocationAndTangentAtSplinePoint
          (USplineComponent *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
          Type param_4)

{
  double dVar1;
  TVector<double> *pTVar2;
  float fVar3;
  TVector<double> local_38 [2];
  
  fVar3 = GetInputKeyValueAtSplinePoint(this,param_1);
  pTVar2 = GetLocationAtSplineInputKey(this,local_38,fVar3,param_4);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  pTVar2 = GetTangentAtSplineInputKey(this,local_38,fVar3,param_4);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// GetLocationAtDistanceAlongSpline @ 1479cabb0

TVector<double> * __thiscall
USplineComponent::GetLocationAtDistanceAlongSpline
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  bool bVar1;
  float fVar2;
  float local_res10 [2];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      goto LAB_1479cac0f;
    }
  }
  local_res10[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res10);
LAB_1479cac0f:
  GetLocationAtSplineInputKey(this,__return_storage_ptr__,fVar2,param_2);
  return __return_storage_ptr__;
}

// GetLocationAtSplineInputKey @ 1479cac40

TVector<double> * __thiscall
USplineComponent::GetLocationAtSplineInputKey
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  TVector<double> local_88;
  TVector<double> local_68 [4];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar8 = FSpline::IsEnabledStatic();
    if (bVar8) {
      pTVar9 = FSpline::Evaluate(&this->Spline,&local_88,param_1);
      goto LAB_1479caca6;
    }
  }
  pTVar9 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                     ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,local_68,
                      param_1,&UE::Math::TVector<double>::ZeroVector);
LAB_1479caca6:
  dVar3 = (pTVar9->field0_0x0)._s_0.X;
  dVar4 = (pTVar9->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  dVar1 = (pTVar9->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  if (param_2 == World) {
    dVar3 = dVar3 * (double)this->_padding_;
    dVar4 = dVar4 * (double)this->_padding_;
    uVar20 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar11._0_8_ = this->_padding_;
    auVar11._8_8_ = this->_padding_;
    auVar2._0_8_ = this->_padding_;
    auVar2._8_8_ = this->_padding_;
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar3;
    auVar23._12_4_ = uVar20;
    dVar1 = dVar1 * (double)this->_padding_;
    dVar6 = (double)this->_padding_ * 0.0;
    dVar7 = (double)this->_padding_;
    auVar14 = blendpd(auVar11,auVar2,2);
    auVar24._0_8_ = auVar23._8_8_ * (double)auVar11._0_8_ - (double)auVar11._8_8_ * dVar3;
    auVar24._8_8_ = dVar1 * (double)auVar11._8_8_ - (double)auVar2._0_8_ * dVar4;
    auVar10._8_4_ = SUB84(dVar4,0);
    auVar10._0_8_ = dVar3;
    auVar10._12_4_ = uVar20;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar1;
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar11 = blendpd(auVar10,auVar5,2);
    auVar12._0_8_ = auVar11._0_8_ * (double)auVar2._0_8_ - auVar14._0_8_ * dVar1;
    auVar12._8_8_ = auVar11._8_8_ * (double)auVar2._8_8_ - auVar14._8_8_ * dVar6;
    auVar14._0_8_ = this->_padding_;
    auVar14._8_8_ = this->_padding_;
    auVar11 = blendpd(auVar24,auVar12,2);
    dVar18 = auVar24._8_8_ + auVar24._8_8_;
    dVar19 = auVar12._0_8_ + auVar12._0_8_;
    auVar25._0_8_ = auVar11._0_8_ + auVar11._0_8_;
    auVar25._8_8_ = auVar11._8_8_ + auVar11._8_8_;
    auVar21._8_4_ = SUB84(dVar19,0);
    auVar21._0_8_ = dVar18;
    uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
    auVar21._12_4_ = uVar20;
    auVar15._8_4_ = SUB84(dVar19,0);
    auVar15._0_8_ = dVar18;
    auVar15._12_4_ = uVar20;
    auVar11 = blendpd(auVar14,auVar2,2);
    auVar16 = blendpd(auVar15,auVar25,2);
    auVar22._0_8_ = auVar21._8_8_ * (double)auVar14._0_8_ - (double)auVar14._8_8_ * dVar18;
    auVar22._8_8_ = auVar25._0_8_ * (double)auVar14._8_8_ - (double)auVar2._0_8_ * dVar19;
    auVar13._8_4_ = SUB84(auVar22._8_8_,0);
    auVar13._0_8_ = auVar22._0_8_;
    auVar13._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
    auVar17._0_8_ = auVar16._0_8_ * (double)auVar2._0_8_ - auVar11._0_8_ * auVar25._0_8_;
    auVar17._8_8_ = auVar16._8_8_ * (double)auVar2._8_8_ - auVar11._8_8_ * auVar25._8_8_;
    auVar11 = blendpd(auVar22,auVar17,2);
    dVar6 = (double)this->_padding_;
    dVar4 = dVar7 * dVar19 + dVar4 + auVar17._0_8_ + (double)this->_padding_;
    auVar16._8_4_ = SUB84(dVar4,0);
    auVar16._0_8_ = dVar7 * dVar18 + dVar3 + auVar13._8_8_ + (double)this->_padding_;
    auVar16._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar16;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar7 * auVar25._0_8_ + dVar1 + auVar11._0_8_ + dVar6;
  }
  return __return_storage_ptr__;
}

// GetLocationAtSplinePoint @ 1479cae20

TVector<double> * __thiscall
USplineComponent::GetLocationAtSplinePoint
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,int param_1,Type param_2)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TVector<double>_u_0 *pTVar13;
  TVector<double> *pTVar14;
  double *pdVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  TVector<double>_u_0 local_c8;
  undefined1 local_b0 [16];
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  TVector<double> local_78 [4];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar9 = FSpline::IsEnabledStatic(), !bVar9)) {
    iVar10 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar10 = FSpline::GetNumControlPoints(&this->Spline);
  }
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (iVar10 != 0) {
    uVar11 = GetClampedIndex(this,param_1);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
      pTVar13 = &FSpline::GetLocation(&this->Spline,local_78,uVar11)->field0_0x0;
    }
    else {
      uVar12 = 0;
      if ((int)uVar11 < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        pTVar14 = (TVector<double> *)(*pcVar2)();
        return pTVar14;
      }
      lVar1 = *(longlong *)&(this->SplineCurves).Position;
      pdVar15 = (double *)((longlong)(int)uVar11 * 0x58 + 8 + lVar1);
      pTVar13 = &local_c8;
      local_c8._s_0.X = *pdVar15;
      local_c8._s_0.Y = pdVar15[1];
      local_c8._s_0.Z = *(double *)((longlong)(int)uVar11 * 0x58 + 0x18 + lVar1);
    }
    local_98 = (((TVector<double>_u_0 *)&(pTVar13->_s_0).X)->_s_0).X;
    if (param_2 == World) {
      auVar26._0_8_ = this->_padding_;
      auVar26._8_8_ = this->_padding_;
      dVar7 = (double)this->_padding_;
      local_98 = (double)this->_padding_ * local_98;
      dVar4 = (double)this->_padding_ * (pTVar13->_s_0).Y;
      uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar17._0_8_ = this->_padding_;
      auVar17._8_8_ = this->_padding_;
      auVar28._8_4_ = SUB84(dVar4,0);
      auVar28._0_8_ = local_98;
      auVar28._12_4_ = uVar27;
      dVar5 = (pTVar13->_s_0).Z * (double)this->_padding_;
      dVar6 = (double)this->_padding_ * 0.0;
      pdVar15 = (double *)local_b0;
      auVar20 = blendpd(auVar17,auVar26,2);
      auVar29._0_8_ = auVar28._8_8_ * (double)auVar17._0_8_ - (double)auVar17._8_8_ * local_98;
      auVar29._8_8_ = dVar5 * (double)auVar17._8_8_ - (double)auVar26._0_8_ * dVar4;
      auVar16._8_4_ = SUB84(dVar4,0);
      auVar16._0_8_ = local_98;
      auVar16._12_4_ = uVar27;
      auVar22._8_4_ = SUB84(dVar6,0);
      auVar22._0_8_ = dVar5;
      auVar22._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar17 = blendpd(auVar16,auVar22,2);
      auVar18._0_8_ = auVar17._0_8_ * (double)auVar26._0_8_ - auVar20._0_8_ * dVar5;
      auVar18._8_8_ = auVar17._8_8_ * (double)auVar26._8_8_ - auVar20._8_8_ * dVar6;
      auVar20._0_8_ = this->_padding_;
      auVar20._8_8_ = this->_padding_;
      auVar17 = blendpd(auVar29,auVar18,2);
      auVar30._0_8_ = auVar17._0_8_ + auVar17._0_8_;
      auVar30._8_8_ = auVar17._8_8_ + auVar17._8_8_;
      dVar6 = auVar29._8_8_ + auVar29._8_8_;
      dVar3 = auVar18._0_8_ + auVar18._0_8_;
      uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar24._8_4_ = SUB84(dVar3,0);
      auVar24._0_8_ = dVar6;
      auVar24._12_4_ = uVar27;
      auVar21._8_4_ = SUB84(dVar3,0);
      auVar21._0_8_ = dVar6;
      auVar21._12_4_ = uVar27;
      auVar22 = blendpd(auVar21,auVar30,2);
      auVar25._0_8_ = auVar24._8_8_ * (double)auVar20._0_8_ - (double)auVar20._8_8_ * dVar6;
      auVar25._8_8_ = auVar30._0_8_ * (double)auVar20._8_8_ - (double)auVar26._0_8_ * dVar3;
      auVar19._8_4_ = SUB84(auVar25._8_8_,0);
      auVar19._0_8_ = auVar25._0_8_;
      auVar19._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar17 = blendpd(auVar20,auVar26,2);
      auVar23._0_8_ = auVar22._0_8_ * (double)auVar26._0_8_ - auVar17._0_8_ * auVar30._0_8_;
      auVar23._8_8_ = auVar22._8_8_ * (double)auVar26._8_8_ - auVar17._8_8_ * auVar30._8_8_;
      auVar26 = blendpd(auVar25,auVar23,2);
      local_a0 = auVar30._0_8_ * dVar7 + dVar5 + auVar26._0_8_ + (double)this->_padding_;
      dVar3 = dVar3 * dVar7 + dVar4 + auVar23._0_8_ + (double)this->_padding_;
      local_b0._8_4_ = SUB84(dVar3,0);
      local_b0._0_8_ = dVar6 * dVar7 + local_98 + auVar19._8_8_ + (double)this->_padding_;
      local_b0._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      pdVar15 = &local_98;
      local_88 = (pTVar13->_s_0).Z;
      dStack_90 = (pTVar13->_s_0).Y;
    }
    dVar3 = pdVar15[1];
    dVar6 = pdVar15[2];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar15;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetLocationAtTime @ 1479cb0f0

TVector<double> * __thiscall
USplineComponent::GetLocationAtTime
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          ,bool param_3)

{
  undefined8 uVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->Duration == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  if (!param_3) {
    fVar3 = GetInputKeyValueAtTime(this,param_1);
    GetLocationAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
    return __return_storage_ptr__;
  }
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479cb17d:
    fVar3 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  }
  else {
    bVar2 = FSpline::IsEnabledStatic();
    if (!bVar2) goto LAB_1479cb17d;
    fVar3 = FSpline::GetSplineLength(&this->Spline);
  }
  fVar3 = (param_1 / this->Duration) * fVar3;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance(&this->Spline,fVar3);
      goto LAB_1479cb1d7;
    }
  }
  local_res8[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar3,local_res8);
LAB_1479cb1d7:
  GetLocationAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
  return __return_storage_ptr__;
}

// GetNumberOfPropertyValues @ 1479cc9a0

int __thiscall USplineComponent::GetNumberOfPropertyValues(USplineComponent *this,FName param_1)

{
  bool bVar1;
  int iVar2;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if ((bVar1) && ((this->Spline).CurrentImplementation == '\x02')) {
      iVar2 = FSpline::NumAttributeValues<float>(&this->Spline,param_1);
      return iVar2;
    }
  }
  return 0;
}

// GetNumberOfSplinePoints @ 1479cca00

int __thiscall USplineComponent::GetNumberOfSplinePoints(USplineComponent *this)

{
  bool bVar1;
  int iVar2;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      iVar2 = FSpline::GetNumControlPoints(&this->Spline);
      return iVar2;
    }
  }
  return *(int *)&(this->SplineCurves).Position.field_0x8;
}

// GetNumberOfSplineSegments @ 1479cca40

int __thiscall USplineComponent::GetNumberOfSplineSegments(USplineComponent *this)

{
  bool bVar1;
  int iVar2;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      iVar2 = FSpline::GetNumControlPoints(&this->Spline);
      goto LAB_1479cca6f;
    }
  }
  iVar2 = *(int *)&(this->SplineCurves).Position.field_0x8;
LAB_1479cca6f:
  if ((this->bClosedLoop == false) && (iVar2 = iVar2 + -1, iVar2 < 0)) {
    iVar2 = 0;
  }
  return iVar2;
}

// GetPrivateStaticClass @ 1479cdec0

UClass * __cdecl USplineComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SplineComponent",
               &Z_Registration_Info_UClass_USplineComponent.InnerSingleton,
               StaticRegisterNativesUSplineComponent,0x700,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USplineComponent>,
               InternalVTableHelperCtorCaller<USplineComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineComponent.InnerSingleton;
}

// GetQuaternionAtDistanceAlongSpline @ 1479ce920

TQuat<double> * __thiscall
USplineComponent::GetQuaternionAtDistanceAlongSpline
          (USplineComponent *this,TQuat<double> *__return_storage_ptr__,float param_1,Type param_2)

{
  bool bVar1;
  float fVar2;
  float local_res10 [2];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      goto LAB_1479ce97f;
    }
  }
  local_res10[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res10);
LAB_1479ce97f:
  GetQuaternionAtSplineInputKey(this,__return_storage_ptr__,fVar2,param_2);
  return __return_storage_ptr__;
}

// GetQuaternionAtSplineInputKey @ 1479ce9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __thiscall
USplineComponent::GetQuaternionAtSplineInputKey
          (USplineComponent *this,TQuat<double> *__return_storage_ptr__,float param_1,Type param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [12];
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  TQuat<double> *pTVar13;
  TVector<double> *pTVar14;
  TMatrix<double> *this_00;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 in_XMM3 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  uint uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_1a8 [32];
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TQuat<double> local_148;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479cea2e:
    pTVar13 = FInterpCurve<UE::Math::TQuat<double>_>::Eval
                        ((FInterpCurve<UE::Math::TQuat<double>_> *)&(this->SplineCurves).Rotation,
                         (TQuat<double> *)&local_168._s_0,param_1,&UE::Math::TQuat<double>::Identity
                        );
  }
  else {
    bVar12 = FSpline::IsEnabledStatic();
    if (!bVar12) goto LAB_1479cea2e;
    pTVar13 = FSpline::EvaluateRotation(&this->Spline,&local_148,param_1);
  }
  dVar11 = __real_3e45798ee0000000;
  dVar1 = pTVar13->X;
  dVar22 = pTVar13->Y;
  dVar7 = pTVar13->Z;
  dVar10 = pTVar13->W;
  dVar17 = dVar1 * dVar1 + dVar7 * dVar7;
  dVar21 = dVar22 * dVar22 + dVar10 * dVar10;
  dVar4 = dVar21 + dVar17;
  dVar17 = dVar17 + dVar21;
  auVar28._8_4_ = SUB84(dVar17,0);
  auVar28._0_8_ = dVar4;
  auVar28._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar23 = sqrtpd(in_XMM3,auVar28);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar4);
  uVar16 = -(ulonglong)(__real_3e45798ee0000000 <= dVar17);
  auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
  uVar25 = (uint)(uVar15 >> 0x20);
  uVar26 = (uint)(uVar16 >> 0x20);
  auVar29._0_8_ = uVar15 & (ulonglong)(auVar28._0_8_ * dVar1);
  uVar9 = uVar16 & (ulonglong)(auVar28._8_8_ * dVar22);
  auVar29._8_4_ = (undefined4)uVar9;
  auVar29._12_4_ = (undefined4)(uVar9 >> 0x20);
  auVar18._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar18._4_4_ =
       ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar18._8_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar18._12_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
  auVar31._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar31._4_4_ =
       ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar31._8_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar31._12_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar19._0_8_ = (ulonglong)(auVar28._0_8_ * dVar7) & uVar15;
  uVar16 = (ulonglong)(auVar28._8_8_ * dVar10) & uVar16;
  auVar19._8_4_ = (undefined4)uVar16;
  auVar19._12_4_ = (undefined4)(uVar16 >> 0x20);
  auVar31 = auVar31 | auVar19;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar12 = FSpline::IsEnabledStatic();
    if (bVar12) {
      pTVar14 = FSpline::EvaluateDerivative
                          (&this->Spline,(TVector<double> *)&local_168._s_0,param_1);
      goto LAB_1479ceb20;
    }
  }
  pTVar14 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
                       (TVector<double> *)&local_148,param_1,&UE::Math::TVector<double>::ZeroVector)
  ;
LAB_1479ceb20:
  dVar4 = (pTVar14->field0_0x0)._s_0.X;
  dVar17 = (pTVar14->field0_0x0)._s_0.Y;
  dVar1 = (pTVar14->field0_0x0)._s_0.Z;
  dVar22 = dVar17 * dVar17 + dVar4 * dVar4 + dVar1 * dVar1;
  if (dVar22 == __real_3ff0000000000000) {
    local_188._s_0.X = (pTVar14->field0_0x0)._s_0.X;
    local_188._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
    local_188._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
  }
  else if (dVar11 <= dVar22) {
    dVar22 = __real_3ff0000000000000 / SQRT(dVar22);
    local_188._s_0.X = dVar22 * dVar4;
    local_188._s_0.Y = dVar22 * dVar17;
    auVar23._0_8_ = dVar22 * dVar1;
    auVar23._8_8_ = 0;
    local_188._s_0.Z = auVar23._0_8_;
  }
  else {
    local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  dVar10 = (this->DefaultUpVector).field0_0x0._s_0.X;
  dVar11 = (this->DefaultUpVector).field0_0x0._s_0.Y;
  dVar4 = (this->DefaultUpVector).field0_0x0._s_0.Z;
  local_168._s_0.X = local_188._s_0.X;
  local_168._s_0.Y = local_188._s_0.Y;
  local_168._s_0.Z = local_188._s_0.Z;
  dVar30 = auVar31._0_8_;
  auVar8._4_8_ = auVar23._8_8_;
  auVar8._0_4_ = auVar31._4_4_;
  auVar24._0_8_ = auVar8._0_8_ << 0x20;
  auVar24._8_4_ = auVar31._8_4_;
  auVar24._12_4_ = auVar31._12_4_;
  dVar22 = SUB168(auVar29 | auVar18,8);
  dVar21 = auVar24._8_8_;
  dVar27 = SUB168(auVar29 | auVar18,0);
  dVar7 = dVar4 * dVar22 - dVar11 * dVar30;
  dVar7 = dVar7 + dVar7;
  dVar1 = dVar10 * dVar30 - dVar4 * dVar27;
  dVar1 = dVar1 + dVar1;
  dVar17 = dVar11 * dVar27 - dVar10 * dVar22;
  dVar17 = dVar17 + dVar17;
  local_188._s_0.X = (dVar17 * dVar22 - dVar1 * dVar30) + dVar7 * dVar21 + dVar10;
  local_188._s_0.Y = (dVar7 * dVar30 - dVar17 * dVar27) + dVar1 * dVar21 + dVar11;
  local_188._s_0.Z = (dVar1 * dVar27 - dVar7 * dVar22) + dVar17 * dVar21 + dVar4;
  this_00 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                      (&local_128,(TVector<double> *)&local_168._s_0,
                       (TVector<double> *)&local_188._s_0);
  UE::Math::TMatrix<double>::ToQuat(this_00,__return_storage_ptr__);
  if (param_2 == World) {
    dVar22 = __return_storage_ptr__->Z;
    dVar7 = __return_storage_ptr__->W;
    dVar10 = __return_storage_ptr__->X;
    dVar11 = __return_storage_ptr__->Y;
    uVar2 = this->_padding_;
    uVar3 = this->_padding_;
    dVar21 = (double)this->_padding_;
    dVar27 = (double)this->_padding_;
    auVar20._8_4_ = (int)uVar3;
    auVar20._0_8_ = uVar3;
    auVar20._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
    dVar4 = (double)uVar2 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
            + dVar27 * dVar10 +
            (double)uVar3 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
            + dVar21 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar17 = (double)uVar2 * dVar22 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar27 * dVar11 +
             auVar20._8_8_ * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + dVar21 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar1 = (double)uVar2 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
            + dVar27 * dVar22 +
            (double)uVar3 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
            + dVar21 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar22 = (double)uVar2 * dVar10 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar27 * dVar7 +
             (double)uVar3 * dVar11 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar21 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar5._8_4_ = SUB84(dVar17,0);
    auVar5._0_8_ = dVar4;
    auVar5._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    __return_storage_ptr__->X = dVar4;
    __return_storage_ptr__->Y = (double)auVar5._8_8_;
    auVar6._8_4_ = SUB84(dVar22,0);
    auVar6._0_8_ = dVar1;
    auVar6._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    __return_storage_ptr__->Z = dVar1;
    __return_storage_ptr__->W = (double)auVar6._8_8_;
  }
  return __return_storage_ptr__;
}

// GetQuaternionAtSplinePoint @ 1479cee10

TQuat<double> * __thiscall
USplineComponent::GetQuaternionAtSplinePoint
          (USplineComponent *this,TQuat<double> *__return_storage_ptr__,int param_1,Type param_2)

{
  float fVar1;
  
  fVar1 = GetInputKeyValueAtSplinePoint(this,param_1);
  GetQuaternionAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// GetQuaternionAtTime @ 1479cee60

TQuat<double> * __thiscall
USplineComponent::GetQuaternionAtTime
          (USplineComponent *this,TQuat<double> *__return_storage_ptr__,float param_1,Type param_2,
          bool param_3)

{
  double dVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  if (this->Duration == 0.0) {
    __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
    __return_storage_ptr__->Y = dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
    __return_storage_ptr__->W = dVar1;
    return __return_storage_ptr__;
  }
  if (!param_3) {
    fVar3 = GetInputKeyValueAtTime(this,param_1);
    GetQuaternionAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
    return __return_storage_ptr__;
  }
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479ceeeb:
    fVar3 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  }
  else {
    bVar2 = FSpline::IsEnabledStatic();
    if (!bVar2) goto LAB_1479ceeeb;
    fVar3 = FSpline::GetSplineLength(&this->Spline);
  }
  fVar3 = (param_1 / this->Duration) * fVar3;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance(&this->Spline,fVar3);
      goto LAB_1479cef45;
    }
  }
  local_res8[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar3,local_res8);
LAB_1479cef45:
  GetQuaternionAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
  return __return_storage_ptr__;
}

// GetRightVectorAtDistanceAlongSpline @ 1479cf460

TVector<double> * __thiscall
USplineComponent::GetRightVectorAtDistanceAlongSpline
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  bool bVar1;
  float fVar2;
  float local_res10 [2];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      goto LAB_1479cf4bf;
    }
  }
  local_res10[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res10);
LAB_1479cf4bf:
  GetRightVectorAtSplineInputKey(this,__return_storage_ptr__,fVar2,param_2);
  return __return_storage_ptr__;
}

// GetRightVectorAtSplineInputKey @ 1479cf4f0

TVector<double> * __thiscall
USplineComponent::GetRightVectorAtSplineInputKey
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  GetQuaternionAtSplineInputKey(this,local_68,param_1,Local);
  local_88._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  if (param_2 == World) {
    auVar16._0_8_ = this->_padding_;
    auVar16._8_8_ = this->_padding_;
    auVar7._0_8_ = this->_padding_;
    auVar7._8_8_ = this->_padding_;
    dVar6 = (double)this->_padding_;
    auVar2 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar20 = auVar2._8_8_;
    auVar10 = blendpd(auVar7,auVar16,2);
    auVar18._0_8_ = dVar20 * (double)auVar7._0_8_ - (double)auVar7._8_8_ * auVar2._0_8_;
    auVar18._8_8_ = dVar1 * (double)auVar7._8_8_ - (double)auVar16._0_8_ * dVar20;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar1;
    auVar7 = blendpd(auVar2,auVar5,2);
    auVar8._0_8_ = auVar7._0_8_ * (double)auVar16._0_8_ - auVar10._0_8_ * dVar1;
    auVar8._8_8_ = auVar7._8_8_ * (double)auVar16._8_8_ - auVar10._8_8_ * 0.0;
    auVar10._0_8_ = this->_padding_;
    auVar10._8_8_ = this->_padding_;
    auVar7 = blendpd(auVar18,auVar8,2);
    auVar19._0_8_ = auVar7._0_8_ + auVar7._0_8_;
    auVar19._8_8_ = auVar7._8_8_ + auVar7._8_8_;
    dVar3 = auVar18._8_8_ + auVar18._8_8_;
    dVar4 = auVar8._0_8_ + auVar8._0_8_;
    uVar17 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar14._8_4_ = SUB84(dVar4,0);
    auVar14._0_8_ = dVar3;
    auVar14._12_4_ = uVar17;
    auVar11._8_4_ = SUB84(dVar4,0);
    auVar11._0_8_ = dVar3;
    auVar11._12_4_ = uVar17;
    auVar12 = blendpd(auVar11,auVar19,2);
    auVar15._0_8_ = auVar14._8_8_ * (double)auVar10._0_8_ - (double)auVar10._8_8_ * dVar3;
    auVar15._8_8_ = auVar19._0_8_ * (double)auVar10._8_8_ - (double)auVar16._0_8_ * dVar4;
    auVar9._8_4_ = SUB84(auVar15._8_8_,0);
    auVar9._0_8_ = auVar15._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar7 = blendpd(auVar10,auVar16,2);
    auVar13._0_8_ = auVar12._0_8_ * (double)auVar16._0_8_ - auVar7._0_8_ * auVar19._0_8_;
    auVar13._8_8_ = auVar12._8_8_ * (double)auVar16._8_8_ - auVar7._8_8_ * auVar19._8_8_;
    auVar16 = blendpd(auVar15,auVar13,2);
    dVar4 = dVar4 * dVar6 + dVar20 + auVar13._0_8_;
    auVar12._8_4_ = SUB84(dVar4,0);
    auVar12._0_8_ = dVar3 * dVar6 + auVar2._0_8_ + auVar9._8_8_;
    auVar12._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar12;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar19._0_8_ * dVar6 + dVar1 + auVar16._0_8_;
  }
  return __return_storage_ptr__;
}

// GetRightVectorAtSplinePoint @ 1479cf690

TVector<double> * __thiscall
USplineComponent::GetRightVectorAtSplinePoint
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,int param_1,Type param_2)

{
  float fVar1;
  
  fVar1 = GetInputKeyValueAtSplinePoint(this,param_1);
  GetRightVectorAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// GetRightVectorAtTime @ 1479cf6e0

TVector<double> * __thiscall
USplineComponent::GetRightVectorAtTime
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          ,bool param_3)

{
  undefined8 uVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->Duration == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  if (!param_3) {
    fVar3 = GetInputKeyValueAtTime(this,param_1);
    GetRightVectorAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
    return __return_storage_ptr__;
  }
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479cf76d:
    fVar3 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  }
  else {
    bVar2 = FSpline::IsEnabledStatic();
    if (!bVar2) goto LAB_1479cf76d;
    fVar3 = FSpline::GetSplineLength(&this->Spline);
  }
  fVar3 = (param_1 / this->Duration) * fVar3;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance(&this->Spline,fVar3);
      goto LAB_1479cf7c7;
    }
  }
  local_res8[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar3,local_res8);
LAB_1479cf7c7:
  GetRightVectorAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
  return __return_storage_ptr__;
}

// GetRollAtDistanceAlongSpline @ 1479cf830

float __thiscall
USplineComponent::GetRollAtDistanceAlongSpline(USplineComponent *this,float param_1,Type param_2)

{
  bool bVar1;
  TQuat<double> *this_00;
  float fVar2;
  float local_res20 [2];
  TRotator<double> local_58;
  TQuat<double> local_38;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      goto LAB_1479cf88d;
    }
  }
  local_res20[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res20);
LAB_1479cf88d:
  this_00 = GetQuaternionAtSplineInputKey(this,&local_38,fVar2,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,&local_58);
  return (float)local_58.Roll;
}

// GetRollAtSplineInputKey @ 1479cf8d0

float __thiscall
USplineComponent::GetRollAtSplineInputKey(USplineComponent *this,float param_1,Type param_2)

{
  TQuat<double> *this_00;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  this_00 = GetQuaternionAtSplineInputKey(this,&local_28,param_1,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,&local_48);
  return (float)local_48.Roll;
}

// GetRollAtSplinePoint @ 1479cf910

float __thiscall
USplineComponent::GetRollAtSplinePoint(USplineComponent *this,int param_1,Type param_2)

{
  TQuat<double> *this_00;
  float fVar1;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  fVar1 = GetInputKeyValueAtSplinePoint(this,param_1);
  this_00 = GetQuaternionAtSplineInputKey(this,&local_28,fVar1,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,&local_48);
  return (float)local_48.Roll;
}

// GetRollAtTime @ 1479cf960

float __thiscall
USplineComponent::GetRollAtTime(USplineComponent *this,float param_1,Type param_2,bool param_3)

{
  bool bVar1;
  TQuat<double> *this_00;
  float fVar2;
  TRotator<double> local_58;
  TQuat<double> local_38;
  
  if (this->Duration == 0.0) {
    return 0.0;
  }
  if (param_3) {
    if ((UE::SplineComponent::GUseSplineCurves) || (bVar1 = FSpline::IsEnabledStatic(), !bVar1)) {
      fVar2 = FSplineCurves::GetSplineLength(&this->SplineCurves);
    }
    else {
      fVar2 = FSpline::GetSplineLength(&this->Spline);
    }
    fVar2 = GetRollAtDistanceAlongSpline(this,(param_1 / this->Duration) * fVar2,param_2);
    return fVar2;
  }
  fVar2 = GetInputKeyValueAtTime(this,param_1);
  this_00 = GetQuaternionAtSplineInputKey(this,&local_38,fVar2,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,&local_58);
  return (float)local_58.Roll;
}

// GetRotationAtDistanceAlongSpline @ 1479cfa30

TRotator<double> * __thiscall
USplineComponent::GetRotationAtDistanceAlongSpline
          (USplineComponent *this,TRotator<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  bool bVar1;
  TQuat<double> *this_00;
  float fVar2;
  float local_res10 [2];
  TQuat<double> local_38;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      goto LAB_1479cfa8f;
    }
  }
  local_res10[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res10);
LAB_1479cfa8f:
  this_00 = GetQuaternionAtSplineInputKey(this,&local_38,fVar2,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRotationAtSplineInputKey @ 1479cfad0

TRotator<double> * __thiscall
USplineComponent::GetRotationAtSplineInputKey
          (USplineComponent *this,TRotator<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  TQuat<double> *this_00;
  TQuat<double> local_28;
  
  this_00 = GetQuaternionAtSplineInputKey(this,&local_28,param_1,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRotationAtSplinePoint @ 1479cfb00

TRotator<double> * __thiscall
USplineComponent::GetRotationAtSplinePoint
          (USplineComponent *this,TRotator<double> *__return_storage_ptr__,int param_1,Type param_2)

{
  TQuat<double> *this_00;
  float fVar1;
  TQuat<double> local_28;
  
  fVar1 = GetInputKeyValueAtSplinePoint(this,param_1);
  this_00 = GetQuaternionAtSplineInputKey(this,&local_28,fVar1,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRotationAtTime @ 1479cfb60

TRotator<double> * __thiscall
USplineComponent::GetRotationAtTime
          (USplineComponent *this,TRotator<double> *__return_storage_ptr__,float param_1,
          Type param_2,bool param_3)

{
  double dVar1;
  bool bVar2;
  TQuat<double> *pTVar3;
  float fVar4;
  float local_res8 [2];
  TQuat<double> local_48;
  
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (this->Duration == 0.0) {
    __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = dVar1;
    __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    return __return_storage_ptr__;
  }
  if (!param_3) {
    fVar4 = GetInputKeyValueAtTime(this,param_1);
    pTVar3 = GetQuaternionAtSplineInputKey(this,&local_48,fVar4,param_2);
    UE::Math::TQuat<double>::Rotator(pTVar3,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479cfbf3:
    fVar4 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  }
  else {
    bVar2 = FSpline::IsEnabledStatic();
    if (!bVar2) goto LAB_1479cfbf3;
    fVar4 = FSpline::GetSplineLength(&this->Spline);
  }
  fVar4 = (param_1 / this->Duration) * fVar4;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar4 = FSpline::GetParameterAtDistance(&this->Spline,fVar4);
      goto LAB_1479cfc4d;
    }
  }
  local_res8[0] = 0.0;
  fVar4 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar4,local_res8);
LAB_1479cfc4d:
  pTVar3 = GetQuaternionAtSplineInputKey(this,&local_48,fVar4,param_2);
  UE::Math::TQuat<double>::Rotator(pTVar3,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetScaleAtDistanceAlongSpline @ 1479cfcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
USplineComponent::GetScaleAtDistanceAlongSpline
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  float fVar5;
  float local_res10 [2];
  TVector<double>_u_0 local_68;
  TVector<double> local_50;
  TVector<double> local_38 [2];
  
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479cfd16:
    local_res10[0] = 0.0;
    fVar5 = FInterpCurve<float>::Eval
                      ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res10
                      );
  }
  else {
    bVar3 = FSpline::IsEnabledStatic();
    if (!bVar3) goto LAB_1479cfd16;
    fVar5 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
  }
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar3 = FSpline::IsEnabledStatic();
    if (bVar3) {
      pTVar4 = FSpline::EvaluateScale(&this->Spline,&local_50,fVar5);
      goto LAB_1479cfd9a;
    }
  }
  local_68._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_68._s_0.Y = _UNK_150689688;
  local_68._s_0.Z = __real_3ff0000000000000;
  pTVar4 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                     ((FInterpCurve<UE::Math::TVector<double>_> *)&(this->SplineCurves).Scale,
                      local_38,fVar5,(TVector<double> *)&local_68._s_0);
LAB_1479cfd9a:
  dVar2 = (pTVar4->field0_0x0)._s_0.Y;
  dVar1 = (pTVar4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetScaleAtSplineInputKey @ 1479cfdd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
USplineComponent::GetScaleAtSplineInputKey
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  TVector<double>_u_0 local_68;
  TVector<double> local_50;
  TVector<double> local_38 [2];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar3 = FSpline::IsEnabledStatic();
    if (bVar3) {
      pTVar4 = FSpline::EvaluateScale(&this->Spline,&local_50,param_1);
      goto LAB_1479cfe47;
    }
  }
  local_68._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_68._s_0.Y = _UNK_150689688;
  local_68._s_0.Z = __real_3ff0000000000000;
  pTVar4 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                     ((FInterpCurve<UE::Math::TVector<double>_> *)&(this->SplineCurves).Scale,
                      local_38,param_1,(TVector<double> *)&local_68._s_0);
LAB_1479cfe47:
  dVar2 = (pTVar4->field0_0x0)._s_0.Y;
  dVar1 = (pTVar4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetScaleAtSplinePoint @ 1479cfe80

TVector<double> * __thiscall
USplineComponent::GetScaleAtSplinePoint
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TVector<double>_u_0 *pTVar11;
  TVector<double> *pTVar12;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar7 = FSpline::IsEnabledStatic(), !bVar7)) {
    iVar8 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar8 = FSpline::GetNumControlPoints(&this->Spline);
  }
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  if (iVar8 == 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  uVar9 = GetClampedIndex(this,param_1);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar7 = FSpline::IsEnabledStatic(), bVar7)) {
    pTVar11 = &FSpline::GetScale(&this->Spline,&local_20,uVar9)->field0_0x0;
  }
  else {
    uVar10 = 0;
    if ((int)uVar9 < *(int *)&(this->SplineCurves).Scale.field_0x8) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar4)();
      return pTVar12;
    }
    lVar3 = *(longlong *)&(this->SplineCurves).Scale;
    pdVar1 = (double *)((longlong)(int)uVar9 * 0x58 + 8 + lVar3);
    pTVar11 = &local_38;
    local_38._s_0.X = *pdVar1;
    local_38._s_0.Y = pdVar1[1];
    local_38._s_0.Z = *(double *)((longlong)(int)uVar9 * 0x58 + 0x18 + lVar3);
  }
  dVar5 = (pTVar11->_s_0).Y;
  dVar2 = (pTVar11->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (((TVector<double>_u_0 *)&(pTVar11->_s_0).X)->_s_0).X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetScaleAtTime @ 1479cffc0

TVector<double> * __thiscall
USplineComponent::GetScaleAtTime
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,bool param_2
          )

{
  bool bVar1;
  float fVar2;
  
  if (this->Duration == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
    return __return_storage_ptr__;
  }
  if (!param_2) {
    fVar2 = GetInputKeyValueAtTime(this,param_1);
    GetScaleAtSplineInputKey(this,__return_storage_ptr__,fVar2);
    return __return_storage_ptr__;
  }
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetSplineLength(&this->Spline);
      goto LAB_1479d003d;
    }
  }
  fVar2 = FSplineCurves::GetSplineLength(&this->SplineCurves);
LAB_1479d003d:
  GetScaleAtDistanceAlongSpline(this,__return_storage_ptr__,(param_1 / this->Duration) * fVar2);
  return __return_storage_ptr__;
}

// GetSegmentLength @ 1479d0630

float __thiscall
USplineComponent::GetSegmentLength(USplineComponent *this,int param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      local_48._s_0.X = (double)this->_padding_;
      local_48._s_0.Y = (double)this->_padding_;
      local_48._s_0.Z = (double)this->_padding_;
      fVar2 = FSpline::GetSegmentLength
                        (&this->Spline,param_1,param_2,(TVector<double> *)&local_48._s_0);
      return fVar2;
    }
  }
  local_30._s_0.X = (double)this->_padding_;
  local_30._s_0.Y = (double)this->_padding_;
  local_30._s_0.Z = (double)this->_padding_;
  fVar2 = FSplineCurves::GetSegmentLength
                    (&this->SplineCurves,param_1,param_2,this->bClosedLoop,
                     (TVector<double> *)&local_30._s_0);
  return fVar2;
}

// GetSegmentParamFromLength @ 1479d06f0

float __thiscall
USplineComponent::GetSegmentParamFromLength
          (USplineComponent *this,int param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  TVector<double> *pTVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  TVector<double> local_98;
  TVector<double> local_80 [5];
  
  if (param_3 == 0.0) {
    return 0.0;
  }
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar6 = FSpline::IsEnabledStatic(), !bVar6)) {
    iVar7 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar7 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if (-1 < param_1) {
    if (this->bClosedLoop == false) {
      iVar7 = iVar7 + -1;
    }
    if (param_1 < iVar7) goto LAB_1479d0798;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index >= 0 && ((bClosedLoop && Index < NumPoints) || (!bClosedLoop && Index < LastPoint))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                     ,0x308,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    fVar9 = (float)(*pcVar4)();
    return fVar9;
  }
LAB_1479d0798:
  if (((param_2 < 0.0) || (param_3 < param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Length >= 0.0f && Length <= SegmentLength",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                         ,0x309,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    fVar9 = (float)(*pcVar4)();
    return fVar9;
  }
  fVar9 = param_2 / param_3;
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar6 = FSpline::IsEnabledStatic(), bVar6)) {
    pTVar8 = FSpline::EvaluateDerivative(&this->Spline,&local_98,(float)param_1 + fVar9);
  }
  else {
    pTVar8 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                       ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,local_80,
                        (float)param_1 + fVar9,&UE::Math::TVector<double>::ZeroVector);
  }
  dVar1 = (pTVar8->field0_0x0)._s_0.X;
  dVar2 = (pTVar8->field0_0x0)._s_0.Y;
  dVar3 = (pTVar8->field0_0x0)._s_0.Z;
  auVar11._0_8_ = dVar1 * dVar1;
  auVar11._8_8_ = 0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar2 * dVar2 + auVar11._0_8_ + dVar3 * dVar3;
  auVar12 = sqrtpd(auVar11,auVar12);
  if (0.0 < (float)auVar12._0_8_) {
    fVar10 = GetSegmentLength(this,param_1,fVar9);
    fVar9 = fVar9 - (fVar10 - param_2) / (float)auVar12._0_8_;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
  }
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar6 = FSpline::IsEnabledStatic(), bVar6)) {
    pTVar8 = FSpline::EvaluateDerivative(&this->Spline,&local_98,(float)param_1 + fVar9);
  }
  else {
    pTVar8 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                       ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,local_80,
                        (float)param_1 + fVar9,&UE::Math::TVector<double>::ZeroVector);
  }
  dVar1 = (pTVar8->field0_0x0)._s_0.X;
  dVar2 = (pTVar8->field0_0x0)._s_0.Y;
  dVar3 = (pTVar8->field0_0x0)._s_0.Z;
  auVar13._0_8_ = dVar1 * dVar1;
  auVar13._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + auVar13._0_8_ + dVar3 * dVar3;
  auVar12 = sqrtpd(auVar13,auVar5);
  if (0.0 < (float)auVar12._0_8_) {
    fVar10 = GetSegmentLength(this,param_1,fVar9);
    fVar9 = fVar9 - (fVar10 - param_2) / (float)auVar12._0_8_;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
  }
  return fVar9;
}

// GetSpline @ 1479d1360

FSpline * __thiscall
USplineComponent::GetSpline(USplineComponent *this,FSpline *__return_storage_ptr__)

{
  bool bVar1;
  FSpline local_58;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      FSpline::FSpline(__return_storage_ptr__,&this->Spline);
      return __return_storage_ptr__;
    }
  }
  FSpline::FSpline(&local_58);
  FSpline::operator=(&local_58,&this->SplineCurves);
  FSpline::FSpline(__return_storage_ptr__,&local_58);
  FSpline::~FSpline(&local_58);
  return __return_storage_ptr__;
}

// GetSplineCurves @ 1479d13f0

FSplineCurves * __thiscall
USplineComponent::GetSplineCurves(USplineComponent *this,FSplineCurves *__return_storage_ptr__)

{
  bool bVar1;
  FSplineCurves *pFVar2;
  void *local_d8 [3];
  void *local_c0;
  void *local_a8;
  void *local_90;
  void *local_70 [3];
  void *local_58;
  void *local_40;
  void *local_28;
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar1 = FSpline::IsEnabledStatic(), !bVar1)) {
    pFVar2 = FSplineCurves::FSplineCurves((FSplineCurves *)local_70,&this->SplineCurves);
    FSplineCurves::FSplineCurves(__return_storage_ptr__,pFVar2);
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else {
    pFVar2 = FSplineCurves::FromSplineInterface((FSplineCurves *)local_d8,&this->Spline);
    FSplineCurves::FSplineCurves(__return_storage_ptr__,pFVar2);
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    local_70[0] = local_d8[0];
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
      local_70[0] = local_d8[0];
    }
  }
  if (local_70[0] != (void *)0x0) {
    FMemory::Free(local_70[0]);
  }
  return __return_storage_ptr__;
}

// GetSplineLength @ 1479d1580

float __thiscall USplineComponent::GetSplineLength(USplineComponent *this)

{
  bool bVar1;
  float fVar2;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetSplineLength(&this->Spline);
      return fVar2;
    }
  }
  fVar2 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  return fVar2;
}

// GetSplinePointAt @ 1479d15d0

FSplinePoint * __thiscall
USplineComponent::GetSplinePointAt
          (USplineComponent *this,FSplinePoint *__return_storage_ptr__,int param_1,Type param_2)

{
  double dVar1;
  int iVar2;
  Type TVar3;
  TVector<double> *pTVar4;
  TQuat<double> *this_00;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  float fVar8;
  TRotator<double> local_c8;
  TVector<double> local_b0;
  TVector<double> local_98;
  TVector<double> local_80;
  TVector<double> local_68;
  TQuat<double> local_48;
  
  iVar2 = GetClampedIndex(this,param_1);
  TVar3 = GetSplinePointType(this,iVar2);
  pTVar4 = GetScaleAtSplinePoint(this,&local_b0,iVar2);
  fVar8 = GetInputKeyValueAtSplinePoint(this,iVar2);
  this_00 = GetQuaternionAtSplineInputKey(this,&local_48,fVar8,param_2);
  UE::Math::TQuat<double>::Rotator(this_00,&local_c8);
  pTVar5 = GetLeaveTangentAtSplinePoint(this,&local_98,iVar2,param_2);
  pTVar6 = GetArriveTangentAtSplinePoint(this,&local_80,iVar2,param_2);
  pTVar7 = GetLocationAtSplinePoint(this,&local_68,iVar2,param_2);
  fVar8 = GetInputKeyValueAtSplinePoint(this,iVar2);
  __return_storage_ptr__->InputKey = fVar8;
  dVar1 = (pTVar7->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  dVar1 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
  (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Rotation).Pitch = local_c8.Pitch;
  (__return_storage_ptr__->Rotation).Yaw = local_c8.Yaw;
  (__return_storage_ptr__->Rotation).Roll = local_c8.Roll;
  dVar1 = (pTVar4->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Type).Value = (uchar)TVar3;
  return __return_storage_ptr__;
}

// GetSplinePointType @ 1479d1740

Type __thiscall USplineComponent::GetSplinePointType(USplineComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EInterpCurveMode EVar4;
  uint uVar5;
  Type TVar6;
  
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479d1770:
    iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    bVar2 = FSpline::IsEnabledStatic();
    if (!bVar2) goto LAB_1479d1770;
    iVar3 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if ((param_1 < 0) || (iVar3 <= param_1)) {
    return Constant;
  }
  TVar6 = Linear;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      EVar4 = FSpline::GetSplinePointType(&this->Spline,param_1);
      goto LAB_1479d1809;
    }
  }
  uVar5 = 0;
  if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar6 = (*pcVar1)();
      return TVar6;
    }
  }
  EVar4 = (EInterpCurveMode)
          *(byte *)((longlong)param_1 * 0x58 + 0x50 + *(longlong *)&(this->SplineCurves).Position);
LAB_1479d1809:
  if (EVar4 != CIM_Linear) {
    if (EVar4 != CIM_CurveAuto) {
      if (EVar4 != CIM_Constant) {
        if (EVar4 == CIM_CurveUser) {
          return CurveCustomTangent;
        }
        if (EVar4 == CIM_CurveAutoClamped) {
          return CurveClamped;
        }
      }
      return Constant;
    }
    TVar6 = Curve;
  }
  return TVar6;
}

// GetSplinePointsMetadata @ 1479d18a0

USplineMetadata * __thiscall USplineComponent::GetSplinePointsMetadata(USplineComponent *this)

{
  return (USplineMetadata *)0x0;
}

// GetSplinePointsMetadata @ 1479d18b0

USplineMetadata * __thiscall USplineComponent::GetSplinePointsMetadata(USplineComponent *this)

{
  return (USplineMetadata *)0x0;
}

// GetSplinePointsPosition @ 1479d18c0

FInterpCurveVector * __thiscall USplineComponent::GetSplinePointsPosition(USplineComponent *this)

{
  bool bVar1;
  FInterpCurveVector *pFVar2;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      pFVar2 = FSpline::GetSplinePointsPosition(&this->Spline);
      return pFVar2;
    }
  }
  return &(this->SplineCurves).Position;
}

// GetSplinePointsRotation @ 1479d1900

FInterpCurveQuat * __thiscall USplineComponent::GetSplinePointsRotation(USplineComponent *this)

{
  bool bVar1;
  FInterpCurveQuat *pFVar2;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      pFVar2 = FSpline::GetSplinePointsRotation(&this->Spline);
      return pFVar2;
    }
  }
  return &(this->SplineCurves).Rotation;
}

// GetSplinePointsScale @ 1479d1940

FInterpCurveVector * __thiscall USplineComponent::GetSplinePointsScale(USplineComponent *this)

{
  bool bVar1;
  FInterpCurveVector *pFVar2;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      pFVar2 = FSpline::GetSplinePointsScale(&this->Spline);
      return pFVar2;
    }
  }
  return &(this->SplineCurves).Scale;
}

// GetSplinePropertyName @ 1479d1980

FName __cdecl USplineComponent::GetSplinePropertyName(void)

{
  bool bVar1;
  FName *pFVar2;
  FName in_RCX;
  int iVar3;
  wchar_t *pwVar4;
  FName local_res10 [3];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      pwVar4 = L"Spline";
      iVar3 = 6;
      goto LAB_1479d19b5;
    }
  }
  pwVar4 = L"SplineCurves";
  iVar3 = 0xc;
LAB_1479d19b5:
  pFVar2 = ::FName::FName(local_res10,iVar3,pwVar4,FNAME_Add);
  *(FName *)in_RCX = *pFVar2;
  return in_RCX;
}

// GetSplinePropertyNames @ 1479d19e0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
USplineComponent::GetSplinePropertyNames
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_28;
  FName local_20;
  initializer_list<FName> local_18;
  
  pFVar1 = ::FName::FName(local_res8,0xc,L"SplineCurves",FNAME_Add);
  local_28 = *pFVar1;
  pFVar1 = ::FName::FName(local_res8,6,L"Spline",FNAME_Add);
  local_20 = *pFVar1;
  local_18._First = &local_28;
  local_18._Last = (FName *)&local_18;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// GetTangentAtDistanceAlongSpline @ 1479d2b60

TVector<double> * __thiscall
USplineComponent::GetTangentAtDistanceAlongSpline
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  bool bVar1;
  float fVar2;
  float local_res10 [2];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      goto LAB_1479d2bbf;
    }
  }
  local_res10[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res10);
LAB_1479d2bbf:
  GetTangentAtSplineInputKey(this,__return_storage_ptr__,fVar2,param_2);
  return __return_storage_ptr__;
}

// GetTangentAtSplineInputKey @ 1479d2bf0

TVector<double> * __thiscall
USplineComponent::GetTangentAtSplineInputKey
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  TVector<double> local_88;
  TVector<double> local_68 [4];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar9 = FSpline::IsEnabledStatic();
    if (bVar9) {
      pTVar10 = FSpline::EvaluateDerivative(&this->Spline,&local_88,param_1);
      goto LAB_1479d2c56;
    }
  }
  pTVar10 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,local_68,
                       param_1,&UE::Math::TVector<double>::ZeroVector);
LAB_1479d2c56:
  dVar4 = (pTVar10->field0_0x0)._s_0.X;
  dVar5 = (pTVar10->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  dVar1 = (pTVar10->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  if (param_2 == World) {
    dVar8 = (double)this->_padding_;
    dVar4 = dVar4 * (double)this->_padding_;
    dVar5 = dVar5 * (double)this->_padding_;
    uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar12._0_8_ = this->_padding_;
    auVar12._8_8_ = this->_padding_;
    auVar2._0_8_ = this->_padding_;
    auVar2._8_8_ = this->_padding_;
    auVar22._8_4_ = SUB84(dVar5,0);
    auVar22._0_8_ = dVar4;
    auVar22._12_4_ = uVar21;
    dVar1 = dVar1 * (double)this->_padding_;
    dVar7 = (double)this->_padding_ * 0.0;
    auVar15 = blendpd(auVar12,auVar2,2);
    auVar23._0_8_ = auVar22._8_8_ * (double)auVar12._0_8_ - (double)auVar12._8_8_ * dVar4;
    auVar23._8_8_ = dVar1 * (double)auVar12._8_8_ - (double)auVar2._0_8_ * dVar5;
    auVar11._8_4_ = SUB84(dVar5,0);
    auVar11._0_8_ = dVar4;
    auVar11._12_4_ = uVar21;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = dVar1;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar12 = blendpd(auVar11,auVar6,2);
    auVar13._0_8_ = auVar12._0_8_ * (double)auVar2._0_8_ - auVar15._0_8_ * dVar1;
    auVar13._8_8_ = auVar12._8_8_ * (double)auVar2._8_8_ - auVar15._8_8_ * dVar7;
    auVar15._0_8_ = this->_padding_;
    auVar15._8_8_ = this->_padding_;
    auVar12 = blendpd(auVar23,auVar13,2);
    auVar24._0_8_ = auVar12._0_8_ + auVar12._0_8_;
    auVar24._8_8_ = auVar12._8_8_ + auVar12._8_8_;
    dVar7 = auVar23._8_8_ + auVar23._8_8_;
    dVar3 = auVar13._0_8_ + auVar13._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar19._8_4_ = SUB84(dVar3,0);
    auVar19._0_8_ = dVar7;
    auVar19._12_4_ = uVar21;
    auVar16._8_4_ = SUB84(dVar3,0);
    auVar16._0_8_ = dVar7;
    auVar16._12_4_ = uVar21;
    auVar17 = blendpd(auVar16,auVar24,2);
    auVar20._0_8_ = auVar19._8_8_ * (double)auVar15._0_8_ - (double)auVar15._8_8_ * dVar7;
    auVar20._8_8_ = auVar24._0_8_ * (double)auVar15._8_8_ - (double)auVar2._0_8_ * dVar3;
    auVar14._8_4_ = SUB84(auVar20._8_8_,0);
    auVar14._0_8_ = auVar20._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
    auVar12 = blendpd(auVar15,auVar2,2);
    auVar18._0_8_ = auVar17._0_8_ * (double)auVar2._0_8_ - auVar12._0_8_ * auVar24._0_8_;
    auVar18._8_8_ = auVar17._8_8_ * (double)auVar2._8_8_ - auVar12._8_8_ * auVar24._8_8_;
    auVar12 = blendpd(auVar20,auVar18,2);
    dVar5 = dVar3 * dVar8 + dVar5 + auVar18._0_8_;
    auVar17._8_4_ = SUB84(dVar5,0);
    auVar17._0_8_ = dVar7 * dVar8 + dVar4 + auVar14._8_8_;
    auVar17._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar24._0_8_ * dVar8 + dVar1 + auVar12._0_8_;
  }
  return __return_storage_ptr__;
}

// GetTangentAtSplinePoint @ 1479d2dc0

TVector<double> * __thiscall
USplineComponent::GetTangentAtSplinePoint
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,int param_1,Type param_2)

{
  GetLeaveTangentAtSplinePoint(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetTangentAtTime @ 1479d2de0

TVector<double> * __thiscall
USplineComponent::GetTangentAtTime
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          ,bool param_3)

{
  undefined8 uVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->Duration == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  if (!param_3) {
    fVar3 = GetInputKeyValueAtTime(this,param_1);
    GetTangentAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
    return __return_storage_ptr__;
  }
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479d2e6d:
    fVar3 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  }
  else {
    bVar2 = FSpline::IsEnabledStatic();
    if (!bVar2) goto LAB_1479d2e6d;
    fVar3 = FSpline::GetSplineLength(&this->Spline);
  }
  fVar3 = (param_1 / this->Duration) * fVar3;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance(&this->Spline,fVar3);
      goto LAB_1479d2ec7;
    }
  }
  local_res8[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar3,local_res8);
LAB_1479d2ec7:
  GetTangentAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
  return __return_storage_ptr__;
}

// GetTimeAtDistanceAlongSpline @ 1479d3450

float __thiscall
USplineComponent::GetTimeAtDistanceAlongSpline(USplineComponent *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  TInterval1<float> TVar6;
  float fVar7;
  float fVar8;
  float local_res18 [4];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar4 = FSpline::IsEnabledStatic(), !bVar4)) {
    iVar5 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar5 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if (1 < iVar5) {
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar4 = FSpline::IsEnabledStatic(), bVar4)) {
      fVar7 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
    }
    else {
      local_res18[0] = 0.0;
      fVar7 = FInterpCurve<float>::Eval
                        ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,
                         local_res18);
    }
    fVar1 = this->Duration;
    TVar6 = GetInputKeyRange(this);
    fVar2 = *(float *)TVar6;
    fVar8 = 0.0;
    if (((fVar2 < fVar7) &&
        (fVar3 = *(float *)((longlong)TVar6 + 4), fVar8 = __real_3f800000, fVar7 < fVar3)) &&
       (fVar8 = __real_3f000000, fVar2 != fVar3)) {
      fVar8 = (fVar7 - fVar2) / (fVar3 - fVar2);
    }
    return fVar1 * fVar8;
  }
  return 0.0;
}

// GetTransformAtDistanceAlongSpline @ 1479d3580

TTransform<double> * __thiscall
USplineComponent::GetTransformAtDistanceAlongSpline
          (USplineComponent *this,TTransform<double> *__return_storage_ptr__,float param_1,
          Type param_2,bool param_3)

{
  bool bVar1;
  float fVar2;
  float local_res10 [2];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      goto LAB_1479d35df;
    }
  }
  local_res10[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res10);
LAB_1479d35df:
  GetTransformAtSplineInputKey(this,__return_storage_ptr__,fVar2,param_2,param_3);
  return __return_storage_ptr__;
}

// GetTransformAtSplineInputKey @ 1479d3620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
USplineComponent::GetTransformAtSplineInputKey
          (USplineComponent *this,TTransform<double> *__return_storage_ptr__,float param_1,
          Type param_2,bool param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  TVector<double>_u_0 *pTVar10;
  undefined1 auStack_118 [32];
  TVector<double>_u_0 local_f8;
  TVector<double> local_e0;
  TQuat<double> local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar8 = FSpline::IsEnabledStatic();
    if (bVar8) {
      pTVar9 = FSpline::Evaluate(&this->Spline,&local_e0,param_1);
      goto LAB_1479d369a;
    }
  }
  pTVar9 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                     ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
                      (TVector<double> *)&local_f8._s_0,param_1,
                      &UE::Math::TVector<double>::ZeroVector);
LAB_1479d369a:
  local_e0.field0_0x0._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
  dVar1 = (pTVar9->field0_0x0)._s_0.X;
  uVar6 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 8);
  uVar7 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 0xc);
  GetQuaternionAtSplineInputKey(this,&local_c8,param_1,Local);
  if (param_3) {
    pTVar10 = &GetScaleAtSplineInputKey(this,(TVector<double> *)&local_f8._s_0,param_1)->field0_0x0;
  }
  else {
    pTVar10 = &local_f8;
    local_f8._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_f8._s_0.Y = _UNK_150689688;
    local_f8._s_0.Z = __real_3ff0000000000000;
  }
  local_f8._s_0.Z = (pTVar10->_s_0).Z;
  uVar2 = *(undefined4 *)&(pTVar10->_s_0).X;
  uVar3 = *(undefined4 *)((longlong)&(pTVar10->_s_0).X + 4);
  uVar4 = *(undefined4 *)&(pTVar10->_s_0).Y;
  uVar5 = *(undefined4 *)((longlong)&(pTVar10->_s_0).Y + 4);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_c8.X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_c8.Y;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_c8.Z;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_c8.W;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uVar6;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uVar7;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_e0.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar2;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar3;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar4;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_f8._s_0.Z;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  if (param_2 == World) {
    local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_a8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_a8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_a8,__return_storage_ptr__,(TTransform<double> *)&this->_padding_);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
  }
  return __return_storage_ptr__;
}

// GetTransformAtSplinePoint @ 1479d3810

TTransform<double> * __thiscall
USplineComponent::GetTransformAtSplinePoint
          (USplineComponent *this,TTransform<double> *__return_storage_ptr__,int param_1,
          Type param_2,bool param_3)

{
  float fVar1;
  
  fVar1 = GetInputKeyValueAtSplinePoint(this,param_1);
  GetTransformAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetTransformAtTime @ 1479d3870

TTransform<double> * __thiscall
USplineComponent::GetTransformAtTime
          (USplineComponent *this,TTransform<double> *__return_storage_ptr__,float param_1,
          Type param_2,bool param_3,bool param_4)

{
  bool bVar1;
  float fVar2;
  float local_res8 [2];
  
  if (this->Duration == 0.0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  if (!param_3) {
    fVar2 = GetInputKeyValueAtTime(this,param_1);
    GetTransformAtSplineInputKey(this,__return_storage_ptr__,fVar2,param_2,param_4);
    return __return_storage_ptr__;
  }
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479d392a:
    fVar2 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  }
  else {
    bVar1 = FSpline::IsEnabledStatic();
    if (!bVar1) goto LAB_1479d392a;
    fVar2 = FSpline::GetSplineLength(&this->Spline);
  }
  fVar2 = (param_1 / this->Duration) * fVar2;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,fVar2);
      goto LAB_1479d3984;
    }
  }
  local_res8[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar2,local_res8);
LAB_1479d3984:
  GetTransformAtSplineInputKey(this,__return_storage_ptr__,fVar2,param_2,param_4);
  return __return_storage_ptr__;
}

// GetUpVectorAtDistanceAlongSpline @ 1479d3c30

TVector<double> * __thiscall
USplineComponent::GetUpVectorAtDistanceAlongSpline
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  bool bVar1;
  float fVar2;
  float local_res10 [2];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
      goto LAB_1479d3c8f;
    }
  }
  local_res10[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res10);
LAB_1479d3c8f:
  GetUpVectorAtSplineInputKey(this,__return_storage_ptr__,fVar2,param_2);
  return __return_storage_ptr__;
}

// GetUpVectorAtSplineInputKey @ 1479d3cc0

TVector<double> * __thiscall
USplineComponent::GetUpVectorAtSplineInputKey
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  GetQuaternionAtSplineInputKey(this,local_68,param_1,Local);
  local_88._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  if (param_2 == World) {
    auVar16._0_8_ = this->_padding_;
    auVar16._8_8_ = this->_padding_;
    auVar7._0_8_ = this->_padding_;
    auVar7._8_8_ = this->_padding_;
    dVar6 = (double)this->_padding_;
    auVar2 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar20 = auVar2._8_8_;
    auVar10 = blendpd(auVar7,auVar16,2);
    auVar18._0_8_ = dVar20 * (double)auVar7._0_8_ - (double)auVar7._8_8_ * auVar2._0_8_;
    auVar18._8_8_ = dVar1 * (double)auVar7._8_8_ - (double)auVar16._0_8_ * dVar20;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar1;
    auVar7 = blendpd(auVar2,auVar5,2);
    auVar8._0_8_ = auVar7._0_8_ * (double)auVar16._0_8_ - auVar10._0_8_ * dVar1;
    auVar8._8_8_ = auVar7._8_8_ * (double)auVar16._8_8_ - auVar10._8_8_ * 0.0;
    auVar10._0_8_ = this->_padding_;
    auVar10._8_8_ = this->_padding_;
    auVar7 = blendpd(auVar18,auVar8,2);
    auVar19._0_8_ = auVar7._0_8_ + auVar7._0_8_;
    auVar19._8_8_ = auVar7._8_8_ + auVar7._8_8_;
    dVar3 = auVar18._8_8_ + auVar18._8_8_;
    dVar4 = auVar8._0_8_ + auVar8._0_8_;
    uVar17 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar14._8_4_ = SUB84(dVar4,0);
    auVar14._0_8_ = dVar3;
    auVar14._12_4_ = uVar17;
    auVar11._8_4_ = SUB84(dVar4,0);
    auVar11._0_8_ = dVar3;
    auVar11._12_4_ = uVar17;
    auVar12 = blendpd(auVar11,auVar19,2);
    auVar15._0_8_ = auVar14._8_8_ * (double)auVar10._0_8_ - (double)auVar10._8_8_ * dVar3;
    auVar15._8_8_ = auVar19._0_8_ * (double)auVar10._8_8_ - (double)auVar16._0_8_ * dVar4;
    auVar9._8_4_ = SUB84(auVar15._8_8_,0);
    auVar9._0_8_ = auVar15._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar7 = blendpd(auVar10,auVar16,2);
    auVar13._0_8_ = auVar12._0_8_ * (double)auVar16._0_8_ - auVar7._0_8_ * auVar19._0_8_;
    auVar13._8_8_ = auVar12._8_8_ * (double)auVar16._8_8_ - auVar7._8_8_ * auVar19._8_8_;
    auVar16 = blendpd(auVar15,auVar13,2);
    dVar4 = dVar4 * dVar6 + dVar20 + auVar13._0_8_;
    auVar12._8_4_ = SUB84(dVar4,0);
    auVar12._0_8_ = dVar3 * dVar6 + auVar2._0_8_ + auVar9._8_8_;
    auVar12._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar12;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar19._0_8_ * dVar6 + dVar1 + auVar16._0_8_;
  }
  return __return_storage_ptr__;
}

// GetUpVectorAtSplinePoint @ 1479d3e60

TVector<double> * __thiscall
USplineComponent::GetUpVectorAtSplinePoint
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,int param_1,Type param_2)

{
  float fVar1;
  
  fVar1 = GetInputKeyValueAtSplinePoint(this,param_1);
  GetUpVectorAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// GetUpVectorAtTime @ 1479d3eb0

TVector<double> * __thiscall
USplineComponent::GetUpVectorAtTime
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          ,bool param_3)

{
  undefined8 uVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->Duration == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  if (!param_3) {
    fVar3 = GetInputKeyValueAtTime(this,param_1);
    GetUpVectorAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
    return __return_storage_ptr__;
  }
  if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479d3f3d:
    fVar3 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  }
  else {
    bVar2 = FSpline::IsEnabledStatic();
    if (!bVar2) goto LAB_1479d3f3d;
    fVar3 = FSpline::GetSplineLength(&this->Spline);
  }
  fVar3 = (param_1 / this->Duration) * fVar3;
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance(&this->Spline,fVar3);
      goto LAB_1479d3f97;
    }
  }
  local_res8[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,fVar3,local_res8);
LAB_1479d3f97:
  GetUpVectorAtSplineInputKey(this,__return_storage_ptr__,fVar3,param_2);
  return __return_storage_ptr__;
}

// GetUsedMaterials @ 1479d4000

void __thiscall
USplineComponent::GetUsedMaterials
          (USplineComponent *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *local_18;
  UObject *local_10;
  
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->LineMaterial);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar6->_padding_)) {
      local_18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)&this->LineMaterial);
      if (local_18 == (UObject *)0x0) {
LAB_1479d4094:
        local_18 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        iVar4 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&local_18->field_0x10 + 0x38) < iVar4) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&local_18->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar6->_padding_)) goto LAB_1479d4094;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_18) &&
          ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
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
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar4 + 1;
      *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18;
    }
  }
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->PointMaterial);
  if (pUVar5 == (UObject *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  iVar4 = (int)pUVar6->_padding_;
  if (*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8)
      != &pUVar6->_padding_) {
    return;
  }
  local_10 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->PointMaterial);
  if (local_10 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&local_10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_10->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar6->_padding_)) goto LAB_1479d41b0;
  }
  local_10 = (UObject *)0x0;
LAB_1479d41b0:
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_10) &&
      ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
  return;
}

// GetVectorPropertyAtSplinePoint @ 1479d43a0

TVector<double> * __thiscall
USplineComponent::GetVectorPropertyAtSplinePoint
          (USplineComponent *this,TVector<double> *__return_storage_ptr__,int param_1,FName param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  UObject *pUVar8;
  FProperty *this_00;
  longlong *plVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  
  pUVar8 = (UObject *)(**(code **)(this->_padding_ + 0xa90))();
  if ((pUVar8 != (UObject *)0x0) &&
     (this_00 = UStruct::FindPropertyByName(*(UStruct **)&pUVar8->field_0x10,param_2),
     this_00 != (FProperty *)0x0)) {
    plVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar8,0);
    iVar3 = (int)plVar9[1];
    if (0 < iVar3) {
      uVar11 = iVar3 - 1U;
      if (param_1 < (int)(iVar3 - 1U)) {
        uVar11 = param_1;
      }
      uVar5 = 0;
      if (0 < (int)uVar11) {
        uVar5 = uVar11;
      }
      uVar11 = 0;
      if ((int)uVar5 < iVar3) {
        uVar11 = ~uVar5 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar4)();
        return pTVar10;
      }
      pdVar1 = (double *)((longlong)(int)uVar5 * 0x58 + 8 + *plVar9);
      dVar6 = pdVar1[1];
      dVar2 = *(double *)((longlong)(int)uVar5 * 0x58 + 0x18 + *plVar9);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetVersion @ 1479d44a0

int __thiscall USplineComponent::GetVersion(USplineComponent *this)

{
  bool bVar1;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      return (this->Spline).Version;
    }
  }
  return (this->SplineCurves).Version;
}

// IsClosedLoop @ 1479da3f0

bool __thiscall USplineComponent::IsClosedLoop(USplineComponent *this)

{
  return this->bClosedLoop;
}

// OnRegister @ 1479dc570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USplineComponent::OnRegister(USplineComponent *this)

{
  float fVar1;
  byte bVar2;
  longlong *plVar3;
  byte bVar4;
  float fVar5;
  
  USceneComponent::OnRegister((USceneComponent *)this);
  bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
  if ((char)bVar2 < '\0') {
    bVar4 = (**(code **)(this->_padding_ + 0x4e0))(this);
    bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
    *(byte *)((longlong)&this->_padding_ + 2) = (bVar4 << 6 ^ bVar2) & 0x40 ^ bVar2;
    if ((bVar4 & 1) != 0) {
      FNavigationSystem::OnComponentRegistered((UActorComponent *)this);
    }
  }
  else {
    *(byte *)((longlong)&this->_padding_ + 2) = bVar2 & 0xbf;
  }
  fVar1 = *(float *)&this->_padding_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    fVar5 = (float)(**(code **)(*plVar3 + 0x700))(plVar3);
    if (fVar5 < fVar1) {
      *(float *)(plVar3 + 0x33) = fVar1;
    }
  }
  return;
}

// PopulateFromLegacy @ 1479dd910

void __thiscall USplineComponent::PopulateFromLegacy(USplineComponent *this)

{
  FSplineCurves::operator=(&this->SplineCurves,&this->SplineCurves);
  FSpline::operator=(&this->Spline,&this->SplineCurves);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  return;
}

// PostLoad @ 1479de090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USplineComponent::PostLoad(USplineComponent *this)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  UWorld *this_00;
  AWorldSettings *pAVar4;
  float fVar5;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar2) {
    FBodyInstance::FixupData((FBodyInstance *)&this->_padding_,(UObject *)this);
  }
  fVar5 = *(float *)((longlong)&this->_padding_ + 4);
  if (0.0 < fVar5) {
    fVar1 = *(float *)&this->_padding_;
    if ((fVar1 != 0.0) && (fVar1 <= fVar5)) {
      fVar5 = fVar1;
    }
    if (((this->_padding_ & 0x80000) != 0) || (this->_padding_ != 0)) {
      fVar5 = 0.0;
    }
    *(float *)&this->_padding_ = fVar5;
  }
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (this_00 != (UWorld *)0x0) goto LAB_1478e7ab3;
  }
  else {
LAB_1478e7ab3:
    pAVar4 = UWorld::GetWorldSettings(this_00,false,true);
    if ((pAVar4 != (AWorldSettings *)0x0) && (pAVar4->bForceVolumetricLightmapsOnly != '\0'))
    goto LAB_1478e7aed;
  }
  if (*(char *)((longlong)&this->_padding_ + 7) == '\x01') {
    iVar3 = (**(code **)(this->_padding_ + 2000))(this);
    if (iVar3 == 0) {
      *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
    }
  }
LAB_1478e7aed:
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// RemovePropertyAtIndex @ 1479e40f0

void __thiscall
USplineComponent::RemovePropertyAtIndex(USplineComponent *this,int param_1,FName param_2)

{
  bool bVar1;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if ((bVar1) && ((this->Spline).CurrentImplementation == '\x02')) {
      FSpline::RemoveAttributeValue<float>(&this->Spline,param_1,param_2);
    }
  }
  return;
}

// RemovePropertyChannel @ 1479e4150

bool __thiscall USplineComponent::RemovePropertyChannel(USplineComponent *this,FName param_1)

{
  bool bVar1;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if ((bVar1) && ((this->Spline).CurrentImplementation == '\x02')) {
      bVar1 = FSpline::RemoveAttributeChannel(&this->Spline,param_1);
      return bVar1;
    }
  }
  return false;
}

// RemoveSplinePoint @ 1479e41d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USplineComponent::RemoveSplinePoint(USplineComponent *this,int param_1,bool param_2)

{
  FSplineCurves *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  void *_Dst;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  
  uVar9 = (ulonglong)param_1;
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar4 = FSpline::IsEnabledStatic();
    if (bVar4) {
      iVar5 = FSpline::GetNumControlPoints(&this->Spline);
      goto LAB_1479e4224;
    }
  }
  iVar5 = *(int *)&(this->SplineCurves).Position.field_0x8;
LAB_1479e4224:
  this_00 = &this->SplineCurves;
  if ((-1 < param_1) && (param_1 < iVar5)) {
    FSpline::RemovePoint(&this->Spline,param_1);
    fVar15 = 0.0;
    if (param_1 < 1) {
      if (1 < iVar5) {
        uVar6 = 0;
        if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
          uVar6 = (uint)~param_1 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar11 = param_1 + 1;
        lVar14 = *(longlong *)&this_00->Position;
        uVar6 = 0;
        if ((int)uVar11 < *(int *)&(this->SplineCurves).Position.field_0x8) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        fVar15 = *(float *)((longlong)(int)uVar11 * 0x58 + *(longlong *)&this_00->Position) -
                 *(float *)(uVar9 * 0x58 + lVar14);
      }
    }
    else {
      uVar6 = 0;
      if ((int)(param_1 - 1U) < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar6 = ~(param_1 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar14 = *(longlong *)&this_00->Position;
      uVar6 = 0;
      if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      fVar15 = *(float *)(uVar9 * 0x58 + *(longlong *)&this_00->Position) -
               *(float *)(uVar9 * 0x58 + -0x58 + lVar14);
    }
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::RemoveAt
              ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
               this_00,param_1,No);
    uVar6 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Rotation.field_0x8) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar14 = uVar9 * 0x80;
    _Dst = (void *)(*(longlong *)&(this->SplineCurves).Rotation + lVar14);
    iVar8 = *(int *)&(this->SplineCurves).Rotation.field_0x8 + ~param_1;
    if (iVar8 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x80),(longlong)iVar8 << 7);
    }
    puVar1 = &(this->SplineCurves).Rotation.field_0x8;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::RemoveAt
              ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
               &(this->SplineCurves).Scale,param_1,No);
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0xa98))(this);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x2c8))(plVar7,param_1);
    }
    if ((longlong)uVar9 < (longlong)(iVar5 + -1)) {
      lVar10 = uVar9 * 0x58;
      uVar13 = uVar9;
      do {
        uVar11 = (uint)uVar9;
        uVar12 = ~uVar11 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar11 < *(int *)&(this->SplineCurves).Position.field_0x8) {
          uVar6 = uVar12;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        *(float *)(*(longlong *)&this_00->Position + lVar10) =
             *(float *)(*(longlong *)&this_00->Position + lVar10) - fVar15;
        uVar6 = 0;
        if ((int)uVar11 < *(int *)&(this->SplineCurves).Rotation.field_0x8) {
          uVar6 = uVar12;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar2 = *(longlong *)&(this->SplineCurves).Rotation;
        *(float *)(lVar14 + lVar2) = *(float *)(lVar14 + lVar2) - fVar15;
        uVar6 = 0;
        if ((int)uVar11 < *(int *)&(this->SplineCurves).Scale.field_0x8) {
          uVar6 = uVar12;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar2 = *(longlong *)&(this->SplineCurves).Scale;
        uVar9 = (ulonglong)(uVar11 + 1);
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 0x80;
        *(float *)(lVar2 + lVar10) = *(float *)(lVar2 + lVar10) - fVar15;
        lVar10 = lVar10 + 0x58;
      } while ((longlong)uVar13 < (longlong)(iVar5 + -1));
    }
    if (this->bLoopPositionOverride != false) {
      this->LoopPosition = this->LoopPosition - __real_3f800000;
    }
  }
  if (param_2) {
    (**(code **)(this->_padding_ + 0xad0))(this);
  }
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  return;
}

// ResetToDefault @ 1479e4d60

void __thiscall USplineComponent::ResetToDefault(USplineComponent *this)

{
  undefined8 uVar1;
  
  SetDefaultSpline(this);
  this->ReparamStepsPerSegment = 10;
  this->Duration = 1.0;
  this->bStationaryEndpoints = false;
  this->bSplineHasBeenEdited = false;
  this->bModifiedByConstructionScript = false;
  this->bInputSplinePointsToConstructionScript = false;
  this->bDrawDebug = true;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  this->bClosedLoop = false;
  (this->DefaultUpVector).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->DefaultUpVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
    return;
  }
  return;
}

// Serialize @ 1479e5d80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USplineComponent::Serialize(USplineComponent *this,FArchive *param_1)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TVector<double>_u_0 *pTVar14;
  longlong lVar15;
  FInterpCurveQuat *pFVar16;
  uint uVar17;
  ulong64 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  double local_60;
  TVector<double> local_58;
  TVector<double> local_40;
  
  if ((param_1->field_0x28 & 4) != 0) {
    if (UE::SplineComponent::GUseSplineCurves) {
LAB_1479e5db0:
      cVar7 = '\x01';
    }
    else {
      bVar9 = FSpline::IsEnabledStatic();
      cVar7 = '\0';
      if (!bVar9) goto LAB_1479e5db0;
    }
    this->LastAuthority = cVar7 + Spline;
  }
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1);
  if (((((param_1->field_0x28 & 4) != 0) && (UE::SplineComponent::GValidateOnSave != false)) &&
      (bVar9 = Validate(this), !bVar9)) && (3 < (byte)LogSplineComponent._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent);
  }
  if (0x1c3 < *(int *)&param_1->field_0x40) {
    return;
  }
  uVar17 = *(uint *)&(this->SplineCurves).Position.field_0x8;
  uVar18 = (ulong64)uVar17;
  if (this->bClosedLoop == false) goto LAB_1479e6134;
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
    iVar10 = FSpline::GetNumControlPoints(&this->Spline);
  }
  else {
    iVar10 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  if (iVar10 == 0) {
    uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar20 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    local_b8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    dStack_b0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    uVar13 = GetClampedIndex(this,0);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
      pTVar14 = &FSpline::GetLocation(&this->Spline,&local_58,uVar13)->field0_0x0;
    }
    else {
      uVar11 = 0;
      if ((int)uVar13 < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&(this->SplineCurves).Position;
      pdVar2 = (double *)((longlong)(int)uVar13 * 0x58 + 8 + lVar4);
      pTVar14 = &local_a0;
      local_a0._s_0.X = *pdVar2;
      local_a0._s_0.Y = pdVar2[1];
      local_a0._s_0.Z = *(double *)((longlong)(int)uVar13 * 0x58 + 0x18 + lVar4);
    }
    local_b8 = (((TVector<double>_u_0 *)&(pTVar14->_s_0).X)->_s_0).X;
    dStack_b0 = (pTVar14->_s_0).Y;
    local_a8 = (pTVar14->_s_0).Z;
    uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar20 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar9 = FSpline::IsEnabledStatic();
    if (!bVar9) {
      uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar20 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      goto LAB_1479e5fc4;
    }
    iVar10 = FSpline::GetNumControlPoints(&this->Spline);
    uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar20 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  else {
LAB_1479e5fc4:
    iVar10 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar9 = FSpline::IsEnabledStatic();
    if (!bVar9) {
      uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar20 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      goto LAB_1479e6008;
    }
    iVar12 = FSpline::GetNumControlPoints(&this->Spline);
    uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar20 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  else {
LAB_1479e6008:
    iVar12 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  if (iVar12 != 0) {
    uVar13 = GetClampedIndex(this,iVar10 + -1);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
      pTVar14 = &FSpline::GetLocation(&this->Spline,&local_40,uVar13)->field0_0x0;
    }
    else {
      uVar11 = 0;
      if ((int)uVar13 < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&(this->SplineCurves).Position;
      pdVar2 = (double *)((longlong)(int)uVar13 * 0x58 + 8 + lVar4);
      pTVar14 = &local_88;
      local_88._s_0.X = *pdVar2;
      local_88._s_0.Y = pdVar2[1];
      local_88._s_0.Z = *(double *)((longlong)(int)uVar13 * 0x58 + 0x18 + lVar4);
    }
    uVar19 = SUB84((pTVar14->_s_0).Z,0);
    uVar20 = (undefined4)((ulonglong)(pTVar14->_s_0).Z >> 0x20);
    uVar21 = *(undefined4 *)&(pTVar14->_s_0).Y;
    uVar22 = *(undefined4 *)((longlong)&(pTVar14->_s_0).Y + 4);
    uVar23 = *(undefined4 *)&(pTVar14->_s_0).X;
    uVar24 = *(undefined4 *)((longlong)&(pTVar14->_s_0).X + 4);
  }
  local_60 = (double)CONCAT44(uVar20,uVar19);
  if (((local_b8 == (double)CONCAT44(uVar24,uVar23)) &&
      (dStack_b0 == (double)CONCAT44(uVar22,uVar21))) && (local_a8 == local_60)) {
    iVar10 = FSpline::GetNumControlPoints(&this->Spline);
    FSpline::RemovePoint(&this->Spline,iVar10 + -1);
    uVar17 = uVar17 - 1;
    uVar18 = (ulong64)uVar17;
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::RemoveAt
              ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
               &this->SplineCurves,uVar17,No);
  }
LAB_1479e6134:
  iVar10 = (int)uVar18;
  if (-1 < iVar10) {
    iVar12 = *(int *)&(this->SplineCurves).Rotation.field_0xc;
    *(undefined4 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
    if (iVar12 < iVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar10,(ForAnyElementType *)&(this->SplineCurves).Rotation,0,
                 (int *)&(this->SplineCurves).Rotation.field_0xc);
    }
    pFVar16 = &(this->SplineCurves).Rotation;
    puVar1 = &(this->SplineCurves).Scale.field_0xc;
    iVar12 = *(int *)puVar1;
    *(undefined4 *)&(this->SplineCurves).Scale.field_0x8 = 0;
    if (iVar12 < iVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar10,(ForAnyElementType *)&(this->SplineCurves).Scale,0,(int *)puVar1);
    }
    if (0 < iVar10) {
      do {
        iVar10 = *(int *)&(this->SplineCurves).Rotation.field_0x8;
        if (iVar10 == *(int *)&(this->SplineCurves).Rotation.field_0xc) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1080,(ForAnyElementType *)pFVar16,
                              (int *)&(this->SplineCurves).Rotation.field_0xc);
        }
        *(int *)&(this->SplineCurves).Rotation.field_0x8 = iVar10 + 1;
        lVar4 = *(longlong *)pFVar16;
        lVar15 = (longlong)iVar10 * 0x80;
        *(undefined4 *)(lVar15 + lVar4) = 0;
        dVar8 = UE::Math::TQuat<double>::Identity.Y;
        pdVar2 = (double *)(lVar15 + 0x10 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.X;
        pdVar2[1] = dVar8;
        dVar8 = UE::Math::TQuat<double>::Identity.W;
        pdVar2 = (double *)(lVar15 + 0x20 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
        pdVar2[1] = dVar8;
        dVar8 = UE::Math::TQuat<double>::Identity.Y;
        pdVar2 = (double *)(lVar15 + 0x30 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.X;
        pdVar2[1] = dVar8;
        dVar8 = UE::Math::TQuat<double>::Identity.W;
        pdVar2 = (double *)(lVar15 + 0x40 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
        pdVar2[1] = dVar8;
        dVar8 = UE::Math::TQuat<double>::Identity.Y;
        pdVar2 = (double *)(lVar15 + 0x50 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.X;
        pdVar2[1] = dVar8;
        dVar8 = UE::Math::TQuat<double>::Identity.W;
        pdVar2 = (double *)(lVar15 + 0x60 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
        pdVar2[1] = dVar8;
        *(undefined1 *)(lVar15 + 0x70 + lVar4) = 1;
        iVar10 = *(int *)&(this->SplineCurves).Scale.field_0x8;
        if (iVar10 == *(int *)&(this->SplineCurves).Scale.field_0xc) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,(ForAnyElementType *)&(this->SplineCurves).Scale,
                              (int *)&(this->SplineCurves).Scale.field_0xc);
        }
        *(int *)&(this->SplineCurves).Scale.field_0x8 = iVar10 + 1;
        lVar15 = (longlong)iVar10 * 0x58;
        lVar4 = *(longlong *)&(this->SplineCurves).Scale;
        *(undefined4 *)(lVar15 + lVar4) = 0;
        *(undefined8 *)(lVar15 + 8 + lVar4) = 0x3ff0000000000000;
        *(undefined8 *)(lVar15 + 0x10 + lVar4) = 0x3ff0000000000000;
        *(undefined8 *)(lVar15 + 0x18 + lVar4) = 0x3ff0000000000000;
        uVar6 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        puVar3 = (undefined8 *)(lVar15 + 0x20 + lVar4);
        *puVar3 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        puVar3[1] = uVar6;
        *(double *)(lVar15 + 0x30 + lVar4) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
        ;
        uVar6 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        puVar3 = (undefined8 *)(lVar15 + 0x38 + lVar4);
        *puVar3 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        puVar3[1] = uVar6;
        *(double *)(lVar15 + 0x48 + lVar4) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
        ;
        *(undefined1 *)(lVar15 + 0x50 + lVar4) = 1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    FSpline::ResetRotation(&this->Spline);
    FSpline::ResetScale(&this->Spline);
    (**(code **)(this->_padding_ + 0xad0))(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar18);
}

// Serialize @ 1479e6350

void __thiscall USplineComponent::Serialize(USplineComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetClosedLoop @ 1479e6d50

void __thiscall USplineComponent::SetClosedLoop(USplineComponent *this,bool param_1,bool param_2)

{
  this->bClosedLoop = param_1;
  this->bLoopPositionOverride = false;
  if (param_2) {
    (**(code **)(this->_padding_ + 0xad0))();
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
    return;
  }
  return;
}

// SetClosedLoopAtPosition @ 1479e6db0

void __thiscall
USplineComponent::SetClosedLoopAtPosition
          (USplineComponent *this,bool param_1,float param_2,bool param_3)

{
  this->LoopPosition = param_2;
  this->bClosedLoop = param_1;
  this->bLoopPositionOverride = param_1;
  if (param_3) {
    (**(code **)(this->_padding_ + 0xad0))();
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
    return;
  }
  return;
}

// SetDefaultSpline @ 1479e74b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall USplineComponent::SetDefaultSpline(USplineComponent *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FSplineCurves *pFVar4;
  FInterpCurveQuat *pFVar5;
  FInterpCurveVector *pFVar6;
  undefined8 *puVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  FSplinePoint local_138;
  double local_a0;
  double local_88;
  
  dVar11 = _UNK_150f34e18;
  dVar10 = ___xmm_00000000000000004059000000000000;
  local_a0 = 0.0;
  local_88 = 0.0;
  FSpline::Reset(&this->Spline);
  pFVar4 = &this->SplineCurves;
  iVar14 = *(int *)&(this->SplineCurves).Position.field_0xc;
  puVar1 = &(this->SplineCurves).Position.field_0xc;
  *(undefined4 *)&(this->SplineCurves).Position.field_0x8 = 0;
  if (iVar14 < 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,10,(ForAnyElementType *)pFVar4,0,(int *)puVar1);
  }
  pFVar5 = &(this->SplineCurves).Rotation;
  iVar14 = *(int *)&(this->SplineCurves).Rotation.field_0xc;
  puVar2 = &(this->SplineCurves).Rotation.field_0xc;
  *(undefined4 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
  if (iVar14 < 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,10,(ForAnyElementType *)pFVar5,0,(int *)puVar2);
  }
  pFVar6 = &(this->SplineCurves).Scale;
  iVar14 = *(int *)&(this->SplineCurves).Scale.field_0xc;
  puVar3 = &(this->SplineCurves).Scale.field_0xc;
  *(undefined4 *)&(this->SplineCurves).Scale.field_0x8 = 0;
  if (iVar14 < 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,10,(ForAnyElementType *)pFVar6,0,(int *)puVar3);
  }
  dVar13 = local_a0;
  dVar19 = _UNK_150689688;
  dVar18 = ___xmm_3ff00000000000003ff0000000000000;
  dVar17 = _UNK_15061cbc8;
  dVar16 = ___xmm_3ff00000000000000000000000000000;
  local_138.Position.field0_0x0._s_0.Z = local_a0;
  local_138.ArriveTangent.field0_0x0._s_0.X = 0.0;
  local_138.ArriveTangent.field0_0x0._s_0.Y = 0.0;
  local_138.InputKey = 0.0;
  local_138.ArriveTangent.field0_0x0._s_0.Z = 0.0;
  local_138.LeaveTangent.field0_0x0._s_0.X = 0.0;
  local_138.Type.Value = '\x01';
  local_138.LeaveTangent.field0_0x0._s_0.Y = 0.0;
  local_138.LeaveTangent.field0_0x0._s_0.Z = 0.0;
  local_138.Rotation.Pitch = 0.0;
  local_138.Rotation.Yaw = 0.0;
  local_138.Rotation.Roll = ___xmm_3ff00000000000000000000000000000;
  local_138.Scale.field0_0x0._s_0.X = _UNK_15061cbc8;
  local_138.Scale.field0_0x0._s_0.Y = ___xmm_3ff00000000000003ff0000000000000;
  local_138.Scale.field0_0x0._s_0.Z = _UNK_150689688;
  local_138.Position.field0_0x0._s_0.X = 0.0;
  local_138.Position.field0_0x0._s_0.Y = 0.0;
  FSpline::AddPoint(&this->Spline,&local_138);
  iVar14 = *(int *)&(this->SplineCurves).Position.field_0x8;
  if (iVar14 == *(int *)puVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,(ForAnyElementType *)pFVar4,(int *)puVar1);
  }
  *(int *)&(this->SplineCurves).Position.field_0x8 = iVar14 + 1;
  lVar15 = (longlong)iVar14 * 0x58;
  lVar9 = *(longlong *)&pFVar4->Position;
  puVar7 = (undefined8 *)(lVar9 + lVar15 + 8);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(lVar9 + lVar15) = 0;
  *(double *)(lVar9 + lVar15 + 0x18) = dVar13;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x20);
  *pdVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar8[1] = (double)uVar12;
  *(double *)(lVar9 + lVar15 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x38);
  *pdVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar8[1] = (double)uVar12;
  *(double *)(lVar9 + lVar15 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)(lVar9 + lVar15 + 0x50) = 1;
  iVar14 = *(int *)&(this->SplineCurves).Rotation.field_0x8;
  if (iVar14 == *(int *)puVar2) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1080,(ForAnyElementType *)pFVar5,(int *)puVar2);
    dVar16 = ___xmm_3ff00000000000000000000000000000;
    dVar17 = _UNK_15061cbc8;
    dVar18 = ___xmm_3ff00000000000003ff0000000000000;
    dVar19 = _UNK_150689688;
  }
  *(int *)&(this->SplineCurves).Rotation.field_0x8 = iVar14 + 1;
  lVar9 = *(longlong *)pFVar5;
  lVar15 = (longlong)iVar14 * 0x80;
  *(undefined4 *)(lVar9 + lVar15) = 0;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x10);
  *pdVar8 = UE::Math::TQuat<double>::Identity.X;
  pdVar8[1] = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.W;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x20);
  *pdVar8 = UE::Math::TQuat<double>::Identity.Z;
  pdVar8[1] = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x30);
  *pdVar8 = UE::Math::TQuat<double>::Identity.X;
  pdVar8[1] = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.W;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x40);
  *pdVar8 = UE::Math::TQuat<double>::Identity.Z;
  pdVar8[1] = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x50);
  *pdVar8 = UE::Math::TQuat<double>::Identity.X;
  pdVar8[1] = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.W;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x60);
  *pdVar8 = UE::Math::TQuat<double>::Identity.Z;
  pdVar8[1] = dVar13;
  *(undefined1 *)(lVar9 + lVar15 + 0x70) = 1;
  iVar14 = *(int *)&(this->SplineCurves).Scale.field_0x8;
  if (iVar14 == *(int *)puVar3) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,(ForAnyElementType *)pFVar6,(int *)puVar3);
    dVar16 = ___xmm_3ff00000000000000000000000000000;
    dVar17 = _UNK_15061cbc8;
    dVar18 = ___xmm_3ff00000000000003ff0000000000000;
    dVar19 = _UNK_150689688;
  }
  dVar13 = local_88;
  *(int *)&(this->SplineCurves).Scale.field_0x8 = iVar14 + 1;
  lVar15 = (longlong)iVar14 * 0x58;
  lVar9 = *(longlong *)pFVar6;
  *(undefined4 *)(lVar9 + lVar15) = 0;
  *(undefined8 *)(lVar9 + lVar15 + 8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar9 + lVar15 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar9 + lVar15 + 0x18) = 0x3ff0000000000000;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_138.InputKey = 1.0;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x20);
  *pdVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar8[1] = (double)uVar12;
  local_138.Type.Value = '\x01';
  *(double *)(lVar9 + lVar15 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_138.Position.field0_0x0._s_0.X = dVar10;
  local_138.Position.field0_0x0._s_0.Y = dVar11;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x38);
  *pdVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar8[1] = (double)uVar12;
  *(double *)(lVar9 + lVar15 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)(lVar9 + lVar15 + 0x50) = 1;
  local_138.ArriveTangent.field0_0x0._s_0.X = 0.0;
  local_138.ArriveTangent.field0_0x0._s_0.Y = 0.0;
  local_138.LeaveTangent.field0_0x0._s_0.Y = 0.0;
  local_138.LeaveTangent.field0_0x0._s_0.Z = 0.0;
  local_138.Position.field0_0x0._s_0.Z = local_88;
  local_138.ArriveTangent.field0_0x0._s_0.Z = 0.0;
  local_138.LeaveTangent.field0_0x0._s_0.X = 0.0;
  local_138.Rotation.Pitch = 0.0;
  local_138.Rotation.Yaw = 0.0;
  local_138.Rotation.Roll = dVar16;
  local_138.Scale.field0_0x0._s_0.X = dVar17;
  local_138.Scale.field0_0x0._s_0.Y = dVar18;
  local_138.Scale.field0_0x0._s_0.Z = dVar19;
  FSpline::AddPoint(&this->Spline,&local_138);
  iVar14 = *(int *)&(this->SplineCurves).Position.field_0x8;
  if (iVar14 == *(int *)puVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,(ForAnyElementType *)pFVar4,(int *)puVar1);
  }
  *(int *)&(this->SplineCurves).Position.field_0x8 = iVar14 + 1;
  lVar15 = (longlong)iVar14 * 0x58;
  lVar9 = *(longlong *)&pFVar4->Position;
  pdVar8 = (double *)(lVar9 + lVar15 + 8);
  *pdVar8 = dVar10;
  pdVar8[1] = dVar11;
  *(undefined4 *)(lVar9 + lVar15) = 0x3f800000;
  *(double *)(lVar9 + lVar15 + 0x18) = dVar13;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x20);
  *pdVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar8[1] = (double)uVar12;
  *(double *)(lVar9 + lVar15 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x38);
  *pdVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar8[1] = (double)uVar12;
  *(double *)(lVar9 + lVar15 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)(lVar9 + lVar15 + 0x50) = 1;
  iVar14 = *(int *)&(this->SplineCurves).Rotation.field_0x8;
  if (iVar14 == *(int *)puVar2) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1080,(ForAnyElementType *)pFVar5,(int *)puVar2);
  }
  lVar9 = *(longlong *)pFVar5;
  *(int *)&(this->SplineCurves).Rotation.field_0x8 = iVar14 + 1;
  lVar15 = (longlong)iVar14 * 0x80;
  *(undefined4 *)(lVar9 + lVar15) = 0x3f800000;
  dVar10 = UE::Math::TQuat<double>::Identity.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x10);
  *pdVar8 = UE::Math::TQuat<double>::Identity.X;
  pdVar8[1] = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x20);
  *pdVar8 = UE::Math::TQuat<double>::Identity.Z;
  pdVar8[1] = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x30);
  *pdVar8 = UE::Math::TQuat<double>::Identity.X;
  pdVar8[1] = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x40);
  *pdVar8 = UE::Math::TQuat<double>::Identity.Z;
  pdVar8[1] = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x50);
  *pdVar8 = UE::Math::TQuat<double>::Identity.X;
  pdVar8[1] = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x60);
  *pdVar8 = UE::Math::TQuat<double>::Identity.Z;
  pdVar8[1] = dVar10;
  *(undefined1 *)(lVar9 + lVar15 + 0x70) = 1;
  iVar14 = *(int *)&(this->SplineCurves).Scale.field_0x8;
  if (iVar14 == *(int *)puVar3) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,(ForAnyElementType *)pFVar6,(int *)puVar3);
  }
  *(int *)&(this->SplineCurves).Scale.field_0x8 = iVar14 + 1;
  lVar15 = (longlong)iVar14 * 0x58;
  lVar9 = *(longlong *)pFVar6;
  *(undefined4 *)(lVar9 + lVar15) = 0x3f800000;
  *(undefined8 *)(lVar9 + lVar15 + 8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar9 + lVar15 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar9 + lVar15 + 0x18) = 0x3ff0000000000000;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x20);
  *pdVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar8[1] = (double)uVar12;
  *(double *)(lVar9 + lVar15 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar8 = (double *)(lVar9 + lVar15 + 0x38);
  *pdVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar8[1] = (double)uVar12;
  *(double *)(lVar9 + lVar15 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)(lVar9 + lVar15 + 0x50) = 1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  return;
}

// SetDefaultUpVector @ 1479e79e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USplineComponent::SetDefaultUpVector(USplineComponent *this,TVector<double> *param_1,Type param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  if (param_2 == World) {
    dVar3 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar4 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar6 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar20._8_4_ = SUB84(dVar4,0);
    auVar20._0_8_ = dVar3;
    auVar20._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar2._8_4_ = SUB84(dVar6,0);
    auVar2._0_8_ = dVar5;
    auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar21 = blendpd(auVar20,auVar2,2);
    auVar2 = *(undefined1 (*) [16])&param_1->field0_0x0;
    auVar13._8_4_ = SUB84(dVar5,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar17 = (param_1->field0_0x0)._s_0.Z;
    dVar9 = auVar2._8_8_;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar17;
    auVar18 = blendpd(auVar2,auVar25,2);
    auVar31._0_8_ = dVar9 * dVar3 - dVar4 * auVar2._0_8_;
    auVar31._8_8_ = dVar17 * dVar4 - auVar13._8_8_ * dVar9;
    auVar19._0_8_ = auVar18._0_8_ * dVar5 - auVar21._0_8_ * dVar17;
    auVar19._8_8_ = auVar18._8_8_ * dVar6 - auVar21._8_8_ * 0.0;
    dVar7 = auVar31._8_8_ + auVar31._8_8_;
    dVar8 = auVar19._0_8_ + auVar19._0_8_;
    uVar27 = SUB84(dVar8,0);
    uVar28 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar18 = blendpd(auVar31,auVar19,2);
    auVar29._8_4_ = uVar27;
    auVar29._0_8_ = dVar7;
    auVar29._12_4_ = uVar28;
    auVar14._8_4_ = uVar27;
    auVar14._0_8_ = dVar7;
    auVar14._12_4_ = uVar28;
    auVar24._8_4_ = uVar27;
    auVar24._0_8_ = dVar7;
    auVar24._12_4_ = uVar28;
    auVar32._0_8_ = auVar18._0_8_ + auVar18._0_8_;
    auVar32._8_8_ = auVar18._8_8_ + auVar18._8_8_;
    auVar18._0_8_ = this->_padding_;
    auVar18._8_8_ = this->_padding_;
    auVar30._0_8_ = auVar29._8_8_ * dVar3 - dVar7 * dVar4;
    auVar30._8_8_ = auVar32._0_8_ * dVar4 - auVar14._8_8_ * dVar5;
    auVar25 = blendpd(auVar24,auVar32,2);
    auVar15._8_4_ = SUB84(auVar32._8_8_,0);
    auVar15._0_8_ = auVar32._0_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
    auVar26._0_8_ = auVar25._0_8_ * dVar5 - auVar32._0_8_ * auVar21._0_8_;
    auVar26._8_8_ = auVar25._8_8_ * dVar6 - auVar15._8_8_ * auVar21._8_8_;
    uVar1 = this->_padding_;
    lVar10 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                (uint)((ulonglong)uVar1 >> 0x20),
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar1) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar22._0_8_ =
         (double)CONCAT44((uint)((ulonglong)auVar18._0_8_ >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)auVar18._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar22._8_4_ = (uint)auVar18._8_8_ & _UNK_15061cc88;
    auVar22._12_4_ = (uint)((ulonglong)auVar18._8_8_ >> 0x20) & _UNK_15061cc8c;
    lVar11 = -(ulonglong)(auVar22._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar12 = -(ulonglong)(auVar22._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
    auVar16._8_4_ = SUB84(auVar30._8_8_,0);
    auVar16._0_8_ = auVar30._0_8_;
    auVar16._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
    auVar23._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar18._4_4_,
                          ~(uint)lVar11 & auVar18._0_4_);
    auVar23._8_4_ = ~(uint)lVar12 & auVar18._8_4_;
    auVar23._12_4_ = ~(uint)((ulonglong)lVar12 >> 0x20) & auVar18._12_4_;
    auVar21._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar21._0_8_ = uVar1;
    auVar21._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
    auVar21 = blendpd(auVar30,auVar26,2);
    dVar17 = (double)CONCAT44(~(uint)((ulonglong)lVar10 >> 0x20) & auVar18._4_4_,
                              ~(uint)lVar10 & auVar18._0_4_) *
             (auVar32._0_8_ * dVar6 + dVar17 + auVar21._0_8_);
    (this->DefaultUpVector).field0_0x0._s_0.X =
         auVar23._0_8_ * (dVar7 * dVar6 + auVar2._0_8_ + auVar16._8_8_);
    (this->DefaultUpVector).field0_0x0._s_0.Y =
         auVar23._8_8_ * (dVar8 * dVar6 + dVar9 + auVar26._0_8_);
  }
  else {
    dVar17 = (param_1->field0_0x0)._s_0.Y;
    (this->DefaultUpVector).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->DefaultUpVector).field0_0x0._s_0.Y = dVar17;
    dVar17 = (param_1->field0_0x0)._s_0.Z;
  }
  lVar10 = this->_padding_;
  (this->DefaultUpVector).field0_0x0._s_0.Z = dVar17;
  (**(code **)(lVar10 + 0xad0))();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  return;
}

// SetDrawDebug @ 1479e7f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USplineComponent::SetDrawDebug(USplineComponent *this,bool param_1)

{
  this->bDrawDebug = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetFloatPropertyAtIndex @ 1479e8600

void __thiscall
USplineComponent::SetFloatPropertyAtIndex
          (USplineComponent *this,int param_1,float param_2,FName param_3)

{
  FName local_res8 [2];
  float local_res18 [4];
  
  if ((!UE::SplineComponent::GUseSplineCurves) && ((this->Spline).CurrentImplementation == '\x02'))
  {
    local_res8[0] = param_3;
    local_res18[0] = param_2;
    FSpline::SetAttributeValue<float>(&this->Spline,param_1,local_res18,local_res8);
  }
  return;
}

// SetFloatPropertyAtSplineInputKey @ 1479e8640

int __thiscall
USplineComponent::SetFloatPropertyAtSplineInputKey
          (USplineComponent *this,float param_1,float param_2,FName param_3)

{
  FSpline *this_00;
  bool bVar1;
  int iVar2;
  float local_res18 [4];
  
  this_00 = &this->Spline;
  if ((!UE::SplineComponent::GUseSplineCurves) && (this_00->CurrentImplementation == '\x02')) {
    local_res18[0] = param_2;
    bVar1 = FSpline::HasAttributeChannel(this_00,param_3);
    if (bVar1) {
      iVar2 = FSpline::AddAttributeValue<float>(this_00,param_1,local_res18,param_3);
      return iVar2;
    }
  }
  return -1;
}

// SetFloatPropertyInputKeyAtIndex @ 1479e86c0

int __thiscall
USplineComponent::SetFloatPropertyInputKeyAtIndex
          (USplineComponent *this,int param_1,float param_2,FName param_3)

{
  int iVar1;
  FName local_res8 [4];
  
  if ((!UE::SplineComponent::GUseSplineCurves) && ((this->Spline).CurrentImplementation == '\x02'))
  {
    local_res8[0] = param_3;
    iVar1 = FSpline::SetAttributeParameter<float>(&this->Spline,param_1,param_2,local_res8);
    return iVar1;
  }
  return -1;
}

// SetLocationAtSplinePoint @ 1479e8e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USplineComponent::SetLocationAtSplinePoint
          (USplineComponent *this,int param_1,TVector<double> *param_2,Type param_3,bool param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  TVector<double>_u_0 local_e8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar16 = FSpline::IsEnabledStatic();
    if (bVar16) {
      iVar17 = FSpline::GetNumControlPoints(&this->Spline);
      goto LAB_1479e8e4a;
    }
  }
  iVar17 = *(int *)&(this->SplineCurves).Position.field_0x8;
LAB_1479e8e4a:
  if ((-1 < param_1) && (param_1 < iVar17)) {
    if (param_3 == World) {
      dVar4 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]
      ;
      dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]
      ;
      dVar6 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]
      ;
      dVar7 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
      ;
      dVar22 = (param_2->field0_0x0)._s_0.Z - (double)this->_padding_;
      auVar30._8_4_ = SUB84(dVar5,0);
      auVar30._0_8_ = dVar4;
      auVar30._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar31._8_4_ = SUB84(dVar7,0);
      auVar31._0_8_ = dVar6;
      auVar31._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar31 = blendpd(auVar30,auVar31,2);
      dVar10 = (param_2->field0_0x0)._s_0.X - (double)this->_padding_;
      dVar11 = (param_2->field0_0x0)._s_0.Y - (double)this->_padding_;
      uVar37 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar41._8_4_ = SUB84(dVar11,0);
      auVar41._0_8_ = dVar10;
      auVar41._12_4_ = uVar37;
      auVar23._8_4_ = SUB84(dVar6,0);
      auVar23._0_8_ = dVar5;
      auVar23._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar27._8_4_ = SUB84(dVar11,0);
      auVar27._0_8_ = dVar10;
      auVar27._12_4_ = uVar37;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar22;
      auVar28 = blendpd(auVar27,auVar12,2);
      auVar42._0_8_ = auVar41._8_8_ * dVar4 - dVar5 * dVar10;
      auVar42._8_8_ = dVar22 * dVar5 - auVar23._8_8_ * dVar11;
      auVar29._0_8_ = auVar28._0_8_ * dVar6 - auVar31._0_8_ * dVar22;
      auVar29._8_8_ = auVar28._8_8_ * dVar7 - auVar31._8_8_ * 0.0;
      dVar8 = auVar42._8_8_ + auVar42._8_8_;
      dVar9 = auVar29._0_8_ + auVar29._0_8_;
      uVar37 = SUB84(dVar9,0);
      uVar38 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar28 = blendpd(auVar42,auVar29,2);
      auVar39._8_4_ = uVar37;
      auVar39._0_8_ = dVar8;
      auVar39._12_4_ = uVar38;
      auVar24._8_4_ = uVar37;
      auVar24._0_8_ = dVar8;
      auVar24._12_4_ = uVar38;
      auVar34._8_4_ = uVar37;
      auVar34._0_8_ = dVar8;
      auVar34._12_4_ = uVar38;
      auVar43._0_8_ = auVar28._0_8_ + auVar28._0_8_;
      auVar43._8_8_ = auVar28._8_8_ + auVar28._8_8_;
      auVar28._0_8_ = this->_padding_;
      auVar28._8_8_ = this->_padding_;
      auVar40._0_8_ = auVar39._8_8_ * dVar4 - dVar8 * dVar5;
      auVar40._8_8_ = auVar43._0_8_ * dVar5 - auVar24._8_8_ * dVar6;
      auVar35 = blendpd(auVar34,auVar43,2);
      auVar25._8_4_ = SUB84(auVar43._8_8_,0);
      auVar25._0_8_ = auVar43._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
      auVar36._0_8_ = auVar35._0_8_ * dVar6 - auVar43._0_8_ * auVar31._0_8_;
      auVar36._8_8_ = auVar35._8_8_ * dVar7 - auVar25._8_8_ * auVar31._8_8_;
      uVar2 = this->_padding_;
      lVar19 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  (uint)((ulonglong)uVar2 >> 0x20),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar2) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar32._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar28._0_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)auVar28._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar32._8_4_ = (uint)auVar28._8_8_ & _UNK_15061cc88;
      auVar32._12_4_ = (uint)((ulonglong)auVar28._8_8_ >> 0x20) & _UNK_15061cc8c;
      auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
      lVar20 = -(ulonglong)(auVar32._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar21 = -(ulonglong)(auVar32._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar33._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar28._4_4_,
                            ~(uint)lVar20 & auVar28._0_4_);
      auVar33._8_4_ = ~(uint)lVar21 & auVar28._8_4_;
      auVar33._12_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar28._12_4_;
      auVar26._8_4_ = SUB84(auVar40._8_8_,0);
      auVar26._0_8_ = auVar40._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
      local_e8._s_0.X = auVar33._0_8_ * (dVar8 * dVar7 + dVar10 + auVar26._8_8_);
      local_e8._s_0.Y = auVar33._8_8_ * (dVar9 * dVar7 + dVar11 + auVar36._0_8_);
      auVar35._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar35._0_8_ = uVar2;
      auVar35._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
      auVar31 = blendpd(auVar40,auVar36,2);
      local_e8._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar28._4_4_,
                            ~(uint)lVar19 & auVar28._0_4_) *
           (auVar43._0_8_ * dVar7 + dVar22 + auVar31._0_8_);
      local_d0 = local_e8._s_0.X;
      dStack_c8 = local_e8._s_0.Y;
      local_c0 = local_e8._s_0.Z;
    }
    else {
      local_e8._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_e8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_e8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    }
    FSpline::SetLocation(&this->Spline,param_1,(TVector<double> *)&local_e8._s_0);
    uVar15 = local_e8._s_0.Z;
    uVar14 = local_e8._s_0.Y;
    uVar13 = local_e8._s_0.X;
    uVar18 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
      uVar18 = (uint)~param_1 >> 0x1f;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar19 = *(longlong *)&(this->SplineCurves).Position;
    pdVar1 = (double *)((longlong)param_1 * 0x58 + 8 + lVar19);
    *pdVar1 = (double)uVar13;
    pdVar1[1] = (double)uVar14;
    *(undefined8 *)((longlong)param_1 * 0x58 + 0x18 + lVar19) = uVar15;
    if (param_4) {
      (**(code **)(this->_padding_ + 0xad0))(this);
    }
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSplineChanged);
  }
  return;
}

// SetOverrideConstructionScript @ 1479e9c70

void __thiscall USplineComponent::SetOverrideConstructionScript(USplineComponent *this,bool param_1)

{
  this->bSplineHasBeenEdited = param_1;
  return;
}

// SetQuaternionAtSplinePoint @ 1479e9fb0

void __thiscall
USplineComponent::SetQuaternionAtSplinePoint
          (USplineComponent *this,int param_1,TQuat<double> *param_2,Type param_3,bool param_4)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  bool bVar19;
  int iVar20;
  TVector<double>_u_0 *pTVar21;
  TVector<double> *pTVar22;
  FSpline *this_00;
  undefined1 *puVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_260;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  double local_1f8;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  TQuat<double> local_168;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  TQuat<double> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TVector<double> local_e8;
  TVector<double> local_d0;
  TVector<double> local_b8 [6];
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar19 = FSpline::IsEnabledStatic(), !bVar19)) {
    iVar20 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar20 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if ((-1 < param_1) && (param_1 < iVar20)) {
    if (param_3 == World) {
      dVar14 = param_2->Z;
      dVar15 = param_2->W;
      dVar16 = param_2->X;
      dVar17 = param_2->Y;
      dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]
      ;
      dVar6 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]
      ;
      dVar7 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]
      ;
      dVar8 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
      ;
      auVar28._8_4_ = SUB84(dVar7,0);
      auVar28._0_8_ = dVar7;
      auVar28._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dVar9 = dVar5 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar16 * dVar8 +
              dVar14 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar7 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar10 = dVar5 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar17 * dVar8 +
               dVar15 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar28._8_8_ * dVar16 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar11 = dVar5 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar14 * dVar8 +
               dVar16 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar7 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar5 = dVar5 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar15 * dVar8 +
              dVar17 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar7 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_108._8_4_ = SUB84(dVar10,0);
      local_108._0_8_ = dVar9;
      local_108._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_f8._8_4_ = SUB84(dVar5,0);
      local_f8._0_8_ = dVar11;
      local_f8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      dVar9 = param_2->X;
      dVar10 = param_2->Y;
      dVar11 = param_2->Z;
      dVar5 = param_2->W;
    }
    fVar24 = GetInputKeyValueAtSplinePoint(this,param_1);
    GetQuaternionAtSplineInputKey(this,&local_128,fVar24,Local);
    dVar8 = __real_3ff0000000000000;
    local_128.Z = local_128.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_128.W = local_128.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_128.X = local_128.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_128.Y = local_128.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar25._8_4_ = SUB84(dVar5,0);
    auVar25._0_8_ = dVar5;
    auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar26._8_4_ = SUB84(dVar11,0);
    auVar26._0_8_ = dVar11;
    auVar26._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    dVar6 = dVar9 * local_128.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            auVar25._8_8_ * local_128.Y +
            dVar10 * local_128.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            auVar26._8_8_ * local_128.X *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_148._8_4_ = SUB84(dVar6,0);
    local_148._0_8_ =
         dVar9 * local_128.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar5 * local_128.X +
         dVar10 * local_128.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar11 * local_128.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_148._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dVar7 = dVar9 * local_128.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar5 * local_128.W +
            dVar10 * local_128.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar11 * local_128.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar29 = SUB84(dVar9 + dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar30 = (uint)((ulonglong)(dVar9 + dVar9) >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    dVar6 = dVar10 + dVar10;
    local_138._8_4_ = SUB84(dVar7,0);
    local_138._0_8_ =
         dVar9 * local_128.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar5 * local_128.Z +
         dVar10 * local_128.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar11 * local_128.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_138._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    dVar7 = dVar5 * dVar6 - dVar11 * (double)CONCAT44(uVar30,uVar29);
    dVar11 = dVar11 * dVar6 + dVar5 * (double)CONCAT44(uVar30,uVar29);
    dVar9 = (dVar9 * (double)CONCAT44(uVar30,uVar29) - dVar10 * dVar6) + __real_3ff0000000000000;
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar19 = FSpline::IsEnabledStatic(), bVar19)) {
      iVar20 = FSpline::GetNumControlPoints(&this->Spline);
    }
    else {
      iVar20 = *(int *)&(this->SplineCurves).Position.field_0x8;
    }
    dVar10 = __real_3e45798ee0000000;
    puVar23 = &(this->SplineCurves).Position.field_0x8;
    this_00 = &this->Spline;
    if (param_1 < iVar20) {
      dVar5 = dVar7 * dVar7 + dVar11 * dVar11 + dVar9 * dVar9;
      uVar12 = dVar7;
      uVar13 = dVar11;
      local_1f0._s_0.Z = dVar9;
      uVar18 = dVar9;
      if ((dVar5 != dVar8) &&
         (uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         local_1f0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar18 = local_248._s_0.Z, __real_3e45798ee0000000 <= dVar5)) {
        local_1f8 = dVar8 / SQRT(dVar5);
        uVar12 = dVar7 * local_1f8;
        uVar13 = local_1f8 * dVar11;
        local_1f0._s_0.Z = local_1f8 * dVar9;
        uVar18 = local_1f8 * dVar9;
      }
      local_248._s_0.Z = (double)uVar18;
      local_1f0._8_4_ = (int)uVar13;
      local_1f0._0_8_ = uVar12;
      local_1f0._12_4_ = (int)((ulonglong)uVar13 >> 0x20);
      UE::Math::TQuat<double>::FindBetweenVectors
                (&local_168,&this->DefaultUpVector,(TVector<double> *)&local_1f0._s_0);
      FSpline::SetRotation(this_00,param_1,&local_168);
      uVar29 = 0;
      if (param_1 < *(int *)&(this->SplineCurves).Rotation.field_0x8) {
        uVar29 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)&(this->SplineCurves).Rotation;
      pdVar1 = (double *)((longlong)param_1 * 0x80 + 0x10 + lVar2);
      *pdVar1 = local_168.X;
      pdVar1[1] = local_168.Y;
      pdVar1 = (double *)((longlong)param_1 * 0x80 + 0x20 + lVar2);
      *pdVar1 = local_168.Z;
      pdVar1[1] = local_168.W;
      if (UE::SplineComponent::GValidateOnChange != false) {
        Validate(this);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnSplineChanged);
    }
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar19 = FSpline::IsEnabledStatic(), bVar19)) {
      iVar20 = FSpline::GetNumControlPoints(this_00);
    }
    else {
      iVar20 = *(int *)puVar23;
    }
    uVar31 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
    uVar32 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
    uVar33 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
    uVar34 = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
    local_278._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    if (iVar20 != 0) {
      uVar29 = GetClampedIndex(this,param_1);
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar19 = FSpline::IsEnabledStatic(), bVar19)) {
        pTVar21 = &FSpline::GetInTangent(this_00,&local_e8,uVar29)->field0_0x0;
      }
      else {
        uVar30 = 0;
        if ((int)uVar29 < *(int *)puVar23) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)&(this->SplineCurves).Position;
        pdVar1 = (double *)((longlong)(int)uVar29 * 0x58 + 0x20 + lVar2);
        pTVar21 = &local_1d8;
        local_1d8._s_0.X = *pdVar1;
        local_1d8._s_0.Y = pdVar1[1];
        local_1d8._s_0.Z = *(double *)((longlong)(int)uVar29 * 0x58 + 0x30 + lVar2);
      }
      uVar31 = *(undefined4 *)&(pTVar21->_s_0).X;
      uVar32 = *(undefined4 *)((longlong)&(pTVar21->_s_0).X + 4);
      uVar33 = *(undefined4 *)&(pTVar21->_s_0).Y;
      uVar34 = *(undefined4 *)((longlong)&(pTVar21->_s_0).Y + 4);
      local_278._s_0.Z = (pTVar21->_s_0).Z;
    }
    local_278._0_4_ = uVar31;
    local_278._4_4_ = uVar32;
    local_278._8_4_ = uVar33;
    local_278._12_4_ = uVar34;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_278._s_0,(TVector<double> *)&local_1c0._s_0,dVar10,
               &UE::Math::TVector<double>::ZeroVector);
    local_1a8._s_0.X = local_1c0._s_0.X;
    local_1a8._s_0.Y = local_1c0._s_0.Y;
    local_1a8._s_0.Z = local_1c0._s_0.Z;
    pTVar22 = UE::Math::TQuat<double>::RotateVector
                        ((TQuat<double> *)local_148,&local_d0,(TVector<double> *)&local_1a8._s_0);
    dVar11 = (double)(float)SQRT((double)CONCAT44(uVar32,uVar31) * (double)CONCAT44(uVar32,uVar31) +
                                 (double)CONCAT44(uVar34,uVar33) * (double)CONCAT44(uVar34,uVar33) +
                                 local_278._s_0.Z * local_278._s_0.Z);
    dVar9 = (pTVar22->field0_0x0)._s_0.Y * dVar11;
    local_210._s_0.Z = dVar11 * (pTVar22->field0_0x0)._s_0.Z;
    local_210._8_4_ = SUB84(dVar9,0);
    local_210._0_8_ = (pTVar22->field0_0x0)._s_0.X * dVar11;
    local_210._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    GetLeaveTangentAtSplinePoint(this,(TVector<double> *)&local_260._s_0,param_1,Local);
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_260._s_0,(TVector<double> *)&local_188._s_0,dVar10,
               &UE::Math::TVector<double>::ZeroVector);
    local_248._s_0.X = local_188._s_0.X;
    local_248._s_0.Y = local_188._s_0.Y;
    local_248._s_0.Z = local_188._s_0.Z;
    pTVar22 = UE::Math::TQuat<double>::RotateVector
                        ((TQuat<double> *)local_148,local_b8,(TVector<double> *)&local_248._s_0);
    auVar27._0_8_ = local_260._s_0.Y * local_260._s_0.Y;
    auVar27._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_260._s_0.X * local_260._s_0.X + auVar27._0_8_ +
                   local_260._s_0.Z * local_260._s_0.Z;
    auVar28 = sqrtpd(auVar27,auVar4);
    dVar10 = (double)(float)auVar28._0_8_;
    dVar9 = (pTVar22->field0_0x0)._s_0.Y * dVar10;
    local_228._s_0.Z = dVar10 * (pTVar22->field0_0x0)._s_0.Z;
    local_228._8_4_ = SUB84(dVar9,0);
    local_228._0_8_ = (pTVar22->field0_0x0)._s_0.X * dVar10;
    local_228._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    SetTangentsAtSplinePoint
              (this,param_1,(TVector<double> *)&local_210._s_0,(TVector<double> *)&local_228._s_0,
               Local,false);
    if (param_4) {
      (**(code **)(this->_padding_ + 0xad0))(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSplineChanged);
  }
  return;
}

// SetRotationAtSplinePoint @ 1479eaaa0

void __thiscall
USplineComponent::SetRotationAtSplinePoint
          (USplineComponent *this,int param_1,TRotator<double> *param_2,Type param_3,bool param_4)

{
  TQuat<double> *pTVar1;
  TQuat<double> local_28;
  
  pTVar1 = UE::Math::TRotator<double>::Quaternion(param_2,&local_28);
  SetQuaternionAtSplinePoint(this,param_1,pTVar1,param_3,param_4);
  return;
}

// SetScaleAtSplinePoint @ 1479eab00

void __thiscall
USplineComponent::SetScaleAtSplinePoint
          (USplineComponent *this,int param_1,TVector<double> *param_2,bool param_3)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar9 = FSpline::IsEnabledStatic(), !bVar9)) {
    iVar10 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar10 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if ((-1 < param_1) && (param_1 < iVar10)) {
    uVar5 = *(undefined4 *)&param_2->field0_0x0;
    uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    uVar11 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Scale.field_0x8) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)&(this->SplineCurves).Scale;
    puVar1 = (undefined4 *)((longlong)param_1 * 0x58 + 8 + lVar3);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(double *)((longlong)param_1 * 0x58 + 0x18 + lVar3) = dVar2;
    FSpline::SetScale(&this->Spline,param_1,param_2);
    if (param_3) {
      (**(code **)(this->_padding_ + 0xad0))(this);
    }
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSplineChanged);
  }
  return;
}

// SetSelectedSplineSegmentColor @ 1479eac50

void __thiscall
USplineComponent::SetSelectedSplineSegmentColor(USplineComponent *this,FLinearColor *param_1)

{
  return;
}

// SetSpline @ 1479eb130

void __thiscall USplineComponent::SetSpline(USplineComponent *this,FSpline *param_1)

{
  FSplineCurves *pFVar1;
  void *local_78 [3];
  void *local_60;
  void *local_48;
  void *local_30;
  
  pFVar1 = FSplineCurves::FromSplineInterface((FSplineCurves *)local_78,param_1);
  FSplineCurves::operator=(&this->SplineCurves,pFVar1);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  FSpline::operator=(&this->Spline,param_1);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  return;
}

// SetSpline @ 1479eb1e0

void __thiscall USplineComponent::SetSpline(USplineComponent *this,FSplineCurves *param_1)

{
  FSplineCurves::operator=(&this->SplineCurves,param_1);
  FSpline::operator=(&this->Spline,param_1);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  return;
}

// SetSplinePointType @ 1479eb240

void __thiscall
USplineComponent::SetSplinePointType(USplineComponent *this,int param_1,Type param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  FSpline *this_00;
  
  if ((UE::SplineComponent::GUseSplineCurves) || (bVar2 = FSpline::IsEnabledStatic(), !bVar2)) {
    iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar3 = FSpline::GetNumControlPoints(&this->Spline);
  }
  this_00 = &this->Spline;
  if (param_1 < 0) {
    return;
  }
  if (iVar3 <= param_1) {
    return;
  }
  if (param_2 == Linear) {
    FSpline::SetSplinePointType(this_00,param_1,CIM_Linear);
LAB_1479eb341:
    uVar5 = 0;
  }
  else {
    if (param_2 == Curve) {
      FSpline::SetSplinePointType(this_00,param_1,CIM_CurveAuto);
LAB_1479eb332:
      uVar5 = 1;
      goto LAB_1479eb343;
    }
    if (param_2 == Constant) {
      FSpline::SetSplinePointType(this_00,param_1,CIM_Constant);
LAB_1479eb320:
      uVar5 = 2;
      goto LAB_1479eb343;
    }
    if (param_2 == CurveClamped) {
      FSpline::SetSplinePointType(this_00,param_1,CIM_CurveAutoClamped);
LAB_1479eb30e:
      uVar5 = 5;
      goto LAB_1479eb343;
    }
    if (param_2 == CurveCustomTangent) {
      FSpline::SetSplinePointType(this_00,param_1,CIM_CurveUser);
    }
    else {
      FSpline::SetSplinePointType(this_00,param_1,CIM_Unknown);
      if (param_2 == Linear) goto LAB_1479eb341;
      if (param_2 == Curve) goto LAB_1479eb332;
      if (param_2 == Constant) goto LAB_1479eb320;
      if (param_2 == CurveClamped) goto LAB_1479eb30e;
      if (param_2 != CurveCustomTangent) {
        uVar5 = 6;
        goto LAB_1479eb343;
      }
    }
    uVar5 = 3;
  }
LAB_1479eb343:
  uVar4 = 0;
  if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined1 *)((longlong)param_1 * 0x58 + 0x50 + *(longlong *)&(this->SplineCurves).Position) =
       uVar5;
  if (param_3) {
    (**(code **)(this->_padding_ + 0xad0))(this);
  }
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineChanged);
  return;
}

// SetSplinePoints @ 1479eb3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USplineComponent::SetSplinePoints
          (USplineComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,Type param_2,
          bool param_3)

{
  undefined1 *puVar1;
  FSplineCurves *pFVar2;
  FInterpCurveQuat *pFVar3;
  FInterpCurveVector *pFVar4;
  double *pdVar5;
  undefined8 uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  int iVar18;
  longlong *plVar19;
  TRotator<double> *pTVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 local_1a7 [3];
  Type local_1a4;
  uint local_1a0;
  FScriptContainerElement *local_198;
  FSplinePoint local_188;
  TRotator<double> local_f8 [6];
  
  uVar7 = param_1->ArrayNum;
  pFVar2 = &this->SplineCurves;
  local_1a4 = param_2;
  if (-1 < (int)uVar7) {
    puVar1 = &(this->SplineCurves).Position.field_0xc;
    iVar18 = *(int *)puVar1;
    *(undefined4 *)&(this->SplineCurves).Position.field_0x8 = 0;
    if (iVar18 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar7,(ForAnyElementType *)pFVar2,0,(int *)puVar1);
    }
    pFVar3 = &(this->SplineCurves).Rotation;
    iVar18 = *(int *)&(this->SplineCurves).Rotation.field_0xc;
    *(undefined4 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
    if (iVar18 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar7,(ForAnyElementType *)pFVar3,0,
                 (int *)&(this->SplineCurves).Rotation.field_0xc);
    }
    pFVar4 = &(this->SplineCurves).Scale;
    iVar18 = *(int *)&(this->SplineCurves).Scale.field_0xc;
    *(undefined4 *)&(this->SplineCurves).Scale.field_0x8 = 0;
    if (iVar18 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar7,(ForAnyElementType *)pFVar4,0,
                 (int *)&(this->SplineCurves).Scale.field_0xc);
    }
    FSpline::Reset(&this->Spline);
    plVar19 = (longlong *)(**(code **)(this->_padding_ + 0xa98))(this);
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x2e0))(plVar19,uVar7);
    }
    local_1a0 = param_1->ArrayNum;
    uVar21 = (ulonglong)(int)local_1a0;
    fVar48 = 0.0;
    pFVar22 = (param_1->AllocatorInstance).Data;
    local_198 = pFVar22 + uVar21 * 0x18;
    fVar37 = __real_3f800000;
    while( true ) {
      uVar16 = _UNK_15061cc8c;
      uVar15 = _UNK_15061cc88;
      uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      if (param_1->ArrayNum != (int)uVar21) {
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1a7);
      }
      if (pFVar22 == local_198) break;
      if (local_1a4 == World) {
        dVar31 = (double)this->_padding_ *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar49 = (double)this->_padding_ *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar52 = (double)this->_padding_ *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar8 = (double)this->_padding_ *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar26 = *(double *)(pFVar22 + 0x10) - (double)this->_padding_;
        dVar11 = *(double *)pFVar22 - (double)this->_padding_;
        dVar12 = *(double *)(pFVar22 + 8) - (double)this->_padding_;
        uVar43 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar35._8_4_ = SUB84(dVar49,0);
        auVar35._0_8_ = dVar31;
        auVar35._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        auVar36._8_4_ = SUB84(dVar8,0);
        auVar36._0_8_ = dVar52;
        auVar36._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        auVar36 = blendpd(auVar35,auVar36,2);
        auVar27._8_4_ = SUB84(dVar52,0);
        auVar27._0_8_ = dVar49;
        auVar27._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
        auVar45._8_4_ = SUB84(dVar12,0);
        auVar45._0_8_ = dVar11;
        auVar45._12_4_ = uVar43;
        auVar32._8_4_ = SUB84(dVar12,0);
        auVar32._0_8_ = dVar11;
        auVar32._12_4_ = uVar43;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = dVar26;
        auVar33 = blendpd(auVar32,auVar13,2);
        auVar46._0_8_ = auVar45._8_8_ * dVar31 - dVar49 * dVar11;
        auVar46._8_8_ = dVar26 * dVar49 - auVar27._8_8_ * dVar12;
        auVar34._0_8_ = auVar33._0_8_ * dVar52 - auVar36._0_8_ * dVar26;
        auVar34._8_8_ = auVar33._8_8_ * dVar8 - auVar36._8_8_ * 0.0;
        auVar33 = blendpd(auVar46,auVar34,2);
        dVar9 = auVar46._8_8_ + auVar46._8_8_;
        dVar10 = auVar34._0_8_ + auVar34._0_8_;
        uVar43 = SUB84(dVar10,0);
        uVar44 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar47._0_8_ = auVar33._0_8_ + auVar33._0_8_;
        auVar47._8_8_ = auVar33._8_8_ + auVar33._8_8_;
        auVar41._8_4_ = uVar43;
        auVar41._0_8_ = dVar9;
        auVar41._12_4_ = uVar44;
        auVar28._8_4_ = uVar43;
        auVar28._0_8_ = dVar9;
        auVar28._12_4_ = uVar44;
        auVar38._8_4_ = uVar43;
        auVar38._0_8_ = dVar9;
        auVar38._12_4_ = uVar44;
        auVar39 = blendpd(auVar38,auVar47,2);
        auVar33._0_8_ = this->_padding_;
        auVar33._8_8_ = this->_padding_;
        auVar42._0_8_ = auVar41._8_8_ * dVar31 - dVar9 * dVar49;
        auVar42._8_8_ = auVar47._0_8_ * dVar49 - auVar28._8_8_ * dVar52;
        auVar29._8_4_ = SUB84(auVar47._8_8_,0);
        auVar29._0_8_ = auVar47._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
        auVar50._0_8_ =
             (double)CONCAT44(uVar14 & (uint)((ulonglong)auVar33._0_8_ >> 0x20),
                              uVar7 & (uint)auVar33._0_8_);
        auVar50._8_4_ = uVar15 & (uint)auVar33._8_8_;
        auVar50._12_4_ = uVar16 & (uint)((ulonglong)auVar33._8_8_ >> 0x20);
        auVar40._0_8_ = auVar39._0_8_ * dVar52 - auVar47._0_8_ * auVar36._0_8_;
        auVar40._8_8_ = auVar39._8_8_ * dVar8 - auVar29._8_8_ * auVar36._8_8_;
        uVar6 = this->_padding_;
        lVar23 = -(ulonglong)
                  ((double)CONCAT44(uVar14 & (uint)((ulonglong)uVar6 >> 0x20),uVar7 & (uint)uVar6)
                  <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
        lVar24 = -(ulonglong)
                  (auVar50._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar25 = -(ulonglong)
                  (auVar50._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar30._8_4_ = SUB84(auVar42._8_8_,0);
        auVar30._0_8_ = auVar42._0_8_;
        auVar30._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
        auVar51._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar33._4_4_,
                              ~(uint)lVar24 & auVar33._0_4_);
        auVar51._8_4_ = ~(uint)lVar25 & auVar33._8_4_;
        auVar51._12_4_ = ~(uint)((ulonglong)lVar25 >> 0x20) & auVar33._12_4_;
        auVar39._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar39._0_8_ = uVar6;
        auVar39._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
        auVar36 = blendpd(auVar42,auVar40,2);
        dVar31 = (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar33._4_4_,
                                  ~(uint)lVar23 & auVar33._0_4_) *
                 (auVar47._0_8_ * dVar8 + dVar26 + auVar36._0_8_);
        dVar49 = auVar51._0_8_ * (dVar9 * dVar8 + dVar11 + auVar30._8_8_);
        dVar52 = auVar51._8_8_ * (dVar10 * dVar8 + dVar12 + auVar40._0_8_);
        fVar37 = __real_3f800000;
      }
      else {
        dVar49 = *(double *)pFVar22;
        dVar52 = *(double *)(pFVar22 + 8);
        dVar31 = *(double *)(pFVar22 + 0x10);
      }
      local_188.Type.Value = '\x01';
      local_188.Rotation.Roll = 0.0;
      local_188.Rotation.Pitch = 0.0;
      local_188.Rotation.Yaw = 0.0;
      local_188.ArriveTangent.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188.LeaveTangent.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188.ArriveTangent.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_188.ArriveTangent.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_188.LeaveTangent.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_188.LeaveTangent.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_188.InputKey = fVar48;
      local_188.Position.field0_0x0._s_0.X = dVar49;
      local_188.Position.field0_0x0._s_0.Y = dVar52;
      local_188.Position.field0_0x0._s_0.Z = dVar31;
      pTVar20 = UE::Math::TQuat<double>::Rotator(&UE::Math::TQuat<double>::Identity,local_f8);
      local_188.Rotation.Pitch = pTVar20->Pitch;
      local_188.Rotation.Yaw = pTVar20->Yaw;
      local_188.Rotation.Roll = pTVar20->Roll;
      local_188.Scale.field0_0x0._s_0.X = __real_3ff0000000000000;
      local_188.Scale.field0_0x0._s_0.Y = ___xmm_3ff00000000000003ff0000000000000;
      local_188.Scale.field0_0x0._s_0.Z = _UNK_150689688;
      FSpline::AddPoint(&this->Spline,&local_188);
      iVar18 = *(int *)&(this->SplineCurves).Position.field_0x8;
      if (iVar18 == *(int *)puVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,(ForAnyElementType *)pFVar2,(int *)puVar1);
      }
      *(int *)&(this->SplineCurves).Position.field_0x8 = iVar18 + 1;
      lVar24 = (longlong)iVar18 * 0x58;
      lVar23 = *(longlong *)&pFVar2->Position;
      pdVar5 = (double *)(lVar23 + lVar24 + 8);
      *pdVar5 = dVar49;
      pdVar5[1] = dVar52;
      *(double *)(lVar23 + lVar24 + 0x18) = dVar31;
      *(float *)(lVar23 + lVar24) = fVar48;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x20);
      *pdVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar5[1] = (double)uVar17;
      *(double *)(lVar23 + lVar24 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x38);
      *pdVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar5[1] = (double)uVar17;
      *(double *)(lVar23 + lVar24 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined1 *)(lVar23 + lVar24 + 0x50) = 1;
      iVar18 = *(int *)&(this->SplineCurves).Rotation.field_0x8;
      if (iVar18 == *(int *)&(this->SplineCurves).Rotation.field_0xc) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1080,(ForAnyElementType *)pFVar3,
                            (int *)&(this->SplineCurves).Rotation.field_0xc);
      }
      *(int *)&(this->SplineCurves).Rotation.field_0x8 = iVar18 + 1;
      lVar23 = *(longlong *)pFVar3;
      lVar24 = (longlong)iVar18 * 0x80;
      *(float *)(lVar23 + lVar24) = fVar48;
      dVar31 = UE::Math::TQuat<double>::Identity.Y;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x10);
      *pdVar5 = UE::Math::TQuat<double>::Identity.X;
      pdVar5[1] = dVar31;
      dVar31 = UE::Math::TQuat<double>::Identity.W;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x20);
      *pdVar5 = UE::Math::TQuat<double>::Identity.Z;
      pdVar5[1] = dVar31;
      dVar31 = UE::Math::TQuat<double>::Identity.Y;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x30);
      *pdVar5 = UE::Math::TQuat<double>::Identity.X;
      pdVar5[1] = dVar31;
      dVar31 = UE::Math::TQuat<double>::Identity.W;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x40);
      *pdVar5 = UE::Math::TQuat<double>::Identity.Z;
      pdVar5[1] = dVar31;
      dVar31 = UE::Math::TQuat<double>::Identity.Y;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x50);
      *pdVar5 = UE::Math::TQuat<double>::Identity.X;
      pdVar5[1] = dVar31;
      dVar31 = UE::Math::TQuat<double>::Identity.W;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x60);
      *pdVar5 = UE::Math::TQuat<double>::Identity.Z;
      pdVar5[1] = dVar31;
      *(undefined1 *)(lVar23 + lVar24 + 0x70) = 1;
      iVar18 = *(int *)&(this->SplineCurves).Scale.field_0x8;
      if (iVar18 == *(int *)&(this->SplineCurves).Scale.field_0xc) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,(ForAnyElementType *)pFVar4,
                            (int *)&(this->SplineCurves).Scale.field_0xc);
      }
      *(int *)&(this->SplineCurves).Scale.field_0x8 = iVar18 + 1;
      lVar24 = (longlong)iVar18 * 0x58;
      lVar23 = *(longlong *)pFVar4;
      *(float *)(lVar23 + lVar24) = fVar48;
      *(undefined8 *)(lVar23 + lVar24 + 8) = 0x3ff0000000000000;
      *(undefined8 *)(lVar23 + lVar24 + 0x10) = 0x3ff0000000000000;
      *(undefined8 *)(lVar23 + lVar24 + 0x18) = 0x3ff0000000000000;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x20);
      *pdVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar5[1] = (double)uVar17;
      *(double *)(lVar23 + lVar24 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar5 = (double *)(lVar23 + lVar24 + 0x38);
      *pdVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar5[1] = (double)uVar17;
      *(double *)(lVar23 + lVar24 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined1 *)(lVar23 + lVar24 + 0x50) = 1;
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x2c0))(plVar19);
      }
      uVar21 = (ulonglong)local_1a0;
      fVar48 = fVar48 + fVar37;
      pFVar22 = pFVar22 + 0x18;
    }
    this->bLoopPositionOverride = false;
    if (param_3) {
      (**(code **)(this->_padding_ + 0xad0))(this);
    }
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSplineChanged);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// SetTangentAtSplinePoint @ 1479ec3a0

void __thiscall
USplineComponent::SetTangentAtSplinePoint
          (USplineComponent *this,int param_1,TVector<double> *param_2,Type param_3,bool param_4)

{
  SetTangentsAtSplinePoint(this,param_1,param_2,param_2,param_3,param_4);
  return;
}

// SetTangentColor @ 1479ec3d0

void __thiscall USplineComponent::SetTangentColor(USplineComponent *this,FLinearColor *param_1)

{
  return;
}

// SetTangentsAtSplinePoint @ 1479ec3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USplineComponent::SetTangentsAtSplinePoint
          (USplineComponent *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
          Type param_4,bool param_5)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar45;
  undefined4 uVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar56;
  double dVar57;
  undefined1 auVar58 [16];
  double dVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar68;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar14 = FSpline::IsEnabledStatic();
    if (bVar14) {
      iVar15 = FSpline::GetNumControlPoints(&this->Spline);
      goto LAB_1479ec41e;
    }
  }
  iVar15 = *(int *)&(this->SplineCurves).Position.field_0x8;
LAB_1479ec41e:
  if ((-1 < param_1) && (param_1 < iVar15)) {
    if (param_4 == World) {
      dVar40 = (double)this->_padding_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar45 = (double)this->_padding_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar47._0_8_ =
           (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar47._8_8_ =
           (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar33._8_4_ = SUB84(dVar45,0);
      auVar33._0_8_ = dVar40;
      uVar46 = (undefined4)((ulonglong)dVar45 >> 0x20);
      auVar33._12_4_ = uVar46;
      auVar36._8_4_ = SUB84(dVar45,0);
      auVar36._0_8_ = dVar40;
      auVar36._12_4_ = uVar46;
      auVar61 = *(undefined1 (*) [16])&param_2->field0_0x0;
      auVar65._8_4_ = SUB84(auVar47._8_8_,0);
      auVar65._0_8_ = auVar47._0_8_;
      auVar65._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
      auVar37 = blendpd(auVar36,auVar47,2);
      dVar35 = auVar33._8_8_;
      auVar21._8_4_ = SUB84(auVar47._0_8_,0);
      auVar21._0_8_ = dVar35;
      auVar21._12_4_ = (int)((ulonglong)auVar47._0_8_ >> 0x20);
      dVar29 = auVar61._8_8_;
      dVar2 = (param_2->field0_0x0)._s_0.Z;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = dVar2;
      auVar30 = blendpd(auVar61,auVar70,2);
      auVar69._0_8_ = dVar29 * dVar40 - dVar35 * auVar61._0_8_;
      auVar69._8_8_ = dVar2 * dVar45 - auVar21._8_8_ * dVar29;
      auVar58._8_4_ = SUB84(auVar69._8_8_,0);
      auVar58._0_8_ = auVar69._0_8_;
      auVar58._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
      auVar31._0_8_ = auVar30._0_8_ * auVar47._0_8_ - auVar37._0_8_ * dVar2;
      auVar31._8_8_ = auVar30._8_8_ * auVar47._8_8_ - auVar37._8_8_ * 0.0;
      dVar57 = auVar58._8_8_ + auVar58._8_8_;
      dVar62 = auVar31._0_8_ + auVar31._0_8_;
      auVar70 = blendpd(auVar69,auVar31,2);
      uVar46 = SUB84(dVar62,0);
      auVar63._8_4_ = uVar46;
      auVar63._0_8_ = dVar57;
      uVar56 = (undefined4)((ulonglong)dVar62 >> 0x20);
      auVar63._12_4_ = uVar56;
      auVar22._8_4_ = uVar46;
      auVar22._0_8_ = dVar57;
      auVar22._12_4_ = uVar56;
      auVar30._0_8_ = this->_padding_;
      auVar30._8_8_ = this->_padding_;
      auVar53._8_4_ = uVar46;
      auVar53._0_8_ = dVar57;
      auVar53._12_4_ = uVar56;
      auVar71._0_8_ = auVar70._0_8_ + auVar70._0_8_;
      auVar71._8_8_ = auVar70._8_8_ + auVar70._8_8_;
      auVar70 = blendpd(auVar53,auVar71,2);
      auVar64._0_8_ = auVar63._8_8_ * dVar40 - dVar57 * dVar35;
      auVar64._8_8_ = auVar71._0_8_ * dVar45 - auVar22._8_8_ * auVar47._0_8_;
      auVar6._4_8_ = auVar47._8_8_;
      auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar48._0_8_ = auVar6._0_8_ << 0x20;
      auVar48._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar48._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar23._8_4_ = SUB84(auVar71._8_8_,0);
      auVar23._0_8_ = auVar71._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
      auVar41._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar30._0_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)auVar30._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar41._8_4_ = (uint)auVar30._8_8_ & _UNK_15061cc88;
      auVar41._12_4_ = (uint)((ulonglong)auVar30._8_8_ >> 0x20) & _UNK_15061cc8c;
      auVar54._0_8_ = auVar70._0_8_ * auVar47._0_8_ - auVar71._0_8_ * auVar37._0_8_;
      auVar54._8_8_ = auVar70._8_8_ * auVar47._8_8_ - auVar23._8_8_ * auVar37._8_8_;
      uVar3 = this->_padding_;
      auVar49._8_8_ = auVar48._8_8_;
      auVar49._0_8_ = uVar3;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
      lVar18 = -(ulonglong)(auVar41._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar19 = -(ulonglong)(auVar41._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar42._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._4_4_,
                            ~(uint)lVar18 & auVar30._0_4_);
      auVar42._8_4_ = ~(uint)lVar19 & auVar30._8_4_;
      auVar42._12_4_ = ~(uint)((ulonglong)lVar19 >> 0x20) & auVar30._12_4_;
      auVar24._8_4_ = SUB84(auVar64._8_8_,0);
      auVar24._0_8_ = auVar64._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
      lVar18 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  (uint)((ulonglong)uVar3 >> 0x20),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar3) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      local_138._s_0.X = auVar42._0_8_ * (dVar57 * auVar65._8_8_ + auVar61._0_8_ + auVar24._8_8_);
      local_138._s_0.Y = auVar42._8_8_ * (dVar62 * auVar47._8_8_ + dVar29 + auVar54._0_8_);
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar49);
      auVar50._0_8_ =
           (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar50._8_8_ =
           (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar37 = blendpd(auVar64,auVar54,2);
      dVar40 = (double)this->_padding_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar45 = (double)this->_padding_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar61._8_4_ = SUB84(dVar45,0);
      auVar61._0_8_ = dVar40;
      uVar46 = (undefined4)((ulonglong)dVar45 >> 0x20);
      auVar61._12_4_ = uVar46;
      auVar70 = blendpd(auVar61,auVar50,2);
      auVar61 = *(undefined1 (*) [16])&param_3->field0_0x0;
      local_138._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._4_4_,
                            ~(uint)lVar18 & auVar30._0_4_) *
           (auVar71._0_8_ * auVar65._8_8_ + dVar2 + auVar37._0_8_);
      dVar2 = (param_3->field0_0x0)._s_0.Z;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = dVar2;
      auVar34._8_4_ = SUB84(dVar45,0);
      auVar34._0_8_ = dVar40;
      auVar34._12_4_ = uVar46;
      dVar35 = auVar34._8_8_;
      dVar68 = auVar61._8_8_;
      auVar25._8_4_ = SUB84(auVar50._0_8_,0);
      auVar25._0_8_ = dVar35;
      auVar25._12_4_ = (int)((ulonglong)auVar50._0_8_ >> 0x20);
      auVar30 = blendpd(auVar61,auVar72,2);
      auVar66._0_8_ = dVar68 * dVar40 - dVar35 * auVar61._0_8_;
      auVar66._8_8_ = dVar2 * dVar45 - auVar25._8_8_ * dVar68;
      auVar55._8_4_ = SUB84(auVar66._8_8_,0);
      auVar55._0_8_ = auVar66._0_8_;
      auVar55._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
      dVar29 = auVar70._8_8_;
      auVar32._0_8_ = auVar30._0_8_ * auVar50._0_8_ - auVar70._0_8_ * dVar2;
      auVar32._8_8_ = auVar30._8_8_ * auVar50._8_8_ - dVar29 * 0.0;
      dVar57 = auVar55._8_8_ + auVar55._8_8_;
      dVar62 = auVar32._0_8_ + auVar32._0_8_;
      auVar30 = blendpd(auVar66,auVar32,2);
      auVar37._0_8_ = this->_padding_;
      auVar37._8_8_ = this->_padding_;
      uVar46 = SUB84(dVar62,0);
      auVar59._8_4_ = uVar46;
      auVar59._0_8_ = dVar57;
      uVar56 = (undefined4)((ulonglong)dVar62 >> 0x20);
      auVar59._12_4_ = uVar56;
      auVar67._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar67._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar26._8_4_ = uVar46;
      auVar26._0_8_ = dVar57;
      auVar26._12_4_ = uVar56;
      auVar43._8_4_ = uVar46;
      auVar43._0_8_ = dVar57;
      auVar43._12_4_ = uVar56;
      auVar60._0_8_ = auVar59._8_8_ * dVar40 - dVar57 * dVar35;
      auVar60._8_8_ = auVar67._0_8_ * dVar45 - auVar26._8_8_ * auVar50._0_8_;
      auVar30 = blendpd(auVar43,auVar67,2);
      auVar27._8_4_ = SUB84(auVar67._8_8_,0);
      auVar27._0_8_ = auVar67._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
      auVar7._4_8_ = dVar29;
      auVar7._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar38._0_8_ = auVar7._0_8_ << 0x20;
      auVar38._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar38._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar44._0_8_ = auVar30._0_8_ * auVar50._0_8_ - auVar67._0_8_ * auVar70._0_8_;
      auVar44._8_8_ = auVar30._8_8_ * auVar50._8_8_ - auVar27._8_8_ * dVar29;
      uVar4 = this->_padding_;
      auVar51._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            (uint)((ulonglong)auVar37._0_8_ >> 0x20),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)auVar37._0_8_);
      auVar51._8_4_ = _UNK_15061cc88 & (uint)auVar37._8_8_;
      auVar51._12_4_ = _UNK_15061cc8c & (uint)((ulonglong)auVar37._8_8_ >> 0x20);
      lVar18 = -(ulonglong)(auVar51._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar20 = -(ulonglong)(auVar51._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar39._8_8_ = auVar38._8_8_;
      auVar39._0_8_ = uVar4;
      auVar28._8_4_ = SUB84(auVar60._8_8_,0);
      auVar28._0_8_ = auVar60._0_8_;
      auVar28._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  (uint)((ulonglong)uVar4 >> 0x20),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar4) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar52._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar37._4_4_,
                            ~(uint)lVar18 & auVar37._0_4_);
      auVar52._8_4_ = ~(uint)lVar20 & auVar37._8_4_;
      auVar52._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar37._12_4_;
      local_158._s_0.X = auVar52._0_8_ * (dVar57 * auVar50._8_8_ + auVar61._0_8_ + auVar28._8_8_);
      local_158._s_0.Y = auVar52._8_8_ * (dVar62 * auVar50._8_8_ + dVar68 + auVar44._0_8_);
      auVar61 = blendpd(auVar60,auVar44,2);
      local_158._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar30._4_4_,
                            ~(uint)lVar19 & auVar30._0_4_) *
           (auVar67._0_8_ * auVar50._8_8_ + dVar2 + auVar61._0_8_);
      local_118 = local_158._s_0.X;
      dStack_110 = local_158._s_0.Y;
      local_108 = local_158._s_0.Z;
      local_f8 = local_138._s_0.X;
      dStack_f0 = local_138._s_0.Y;
      local_e8 = local_138._s_0.Z;
    }
    else {
      local_138._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_138._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_138._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_158._s_0.X = (param_3->field0_0x0)._s_0.X;
      local_158._s_0.Y = (param_3->field0_0x0)._s_0.Y;
      local_158._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    }
    FSpline::SetInTangent(&this->Spline,param_1,(TVector<double> *)&local_138._s_0);
    FSpline::SetOutTangent(&this->Spline,param_1,(TVector<double> *)&local_158._s_0);
    uVar13 = local_138._s_0.Z;
    uVar12 = local_138._s_0.Y;
    uVar11 = local_138._s_0.X;
    uVar17 = (uint)~param_1 >> 0x1f;
    uVar16 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
      uVar16 = uVar17;
    }
    if (uVar16 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar10 = local_158._s_0.Z;
    uVar9 = local_158._s_0.Y;
    uVar8 = local_158._s_0.X;
    lVar18 = *(longlong *)&(this->SplineCurves).Position;
    lVar19 = (longlong)param_1 * 0x58;
    pdVar1 = (double *)(lVar19 + 0x20 + lVar18);
    *pdVar1 = (double)uVar11;
    pdVar1[1] = (double)uVar12;
    *(undefined8 *)(lVar19 + 0x30 + lVar18) = uVar13;
    uVar16 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
      uVar16 = uVar17;
    }
    if (uVar16 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar18 = *(longlong *)&(this->SplineCurves).Position;
    pdVar1 = (double *)(lVar19 + 0x38 + lVar18);
    *pdVar1 = (double)uVar8;
    pdVar1[1] = (double)uVar9;
    *(undefined8 *)(lVar19 + 0x48 + lVar18) = uVar10;
    uVar16 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
      uVar16 = uVar17;
    }
    if (uVar16 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined1 *)(lVar19 + 0x50 + *(longlong *)&(this->SplineCurves).Position) = 3;
    if (param_5) {
      (**(code **)(this->_padding_ + 0xad0))(this);
    }
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSplineChanged);
  }
  return;
}

// SetUnselectedSplineSegmentColor @ 1479ecca0

void __thiscall
USplineComponent::SetUnselectedSplineSegmentColor(USplineComponent *this,FLinearColor *param_1)

{
  return;
}

// SetUpVectorAtSplinePoint @ 1479eccb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USplineComponent::SetUpVectorAtSplinePoint
          (USplineComponent *this,int param_1,TVector<double> *param_2,Type param_3,bool param_4)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  TVector<double>_u_0 *pTVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TQuat<double> local_118;
  TVector<double> local_f8;
  TVector<double> local_e0 [7];
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar11 = FSpline::IsEnabledStatic();
    if (bVar11) {
      iVar12 = FSpline::GetNumControlPoints(&this->Spline);
      goto LAB_1479eccfa;
    }
  }
  iVar12 = *(int *)&(this->SplineCurves).Position.field_0x8;
LAB_1479eccfa:
  if ((-1 < param_1) && (param_1 < iVar12)) {
    if (param_3 == World) {
      pTVar14 = UE::Math::TVector<double>::GetSafeNormal
                          (param_2,&local_f8,__real_3e45798ee0000000,
                           &UE::Math::TVector<double>::ZeroVector);
      dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]
      ;
      dVar6 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]
      ;
      auVar23 = *(undefined1 (*) [16])&pTVar14->field0_0x0;
      dVar2 = (pTVar14->field0_0x0)._s_0.Z;
      auVar26._8_4_ = SUB84(dVar6,0);
      auVar26._0_8_ = dVar5;
      auVar26._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar7 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]
      ;
      dVar8 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
      ;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar2;
      auVar24 = blendpd(auVar23,auVar29,2);
      dVar37 = auVar23._8_8_;
      auVar27._8_4_ = SUB84(dVar8,0);
      auVar27._0_8_ = dVar7;
      auVar27._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar27 = blendpd(auVar26,auVar27,2);
      auVar19._8_4_ = SUB84(dVar7,0);
      auVar19._0_8_ = dVar6;
      auVar19._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar35._0_8_ = dVar37 * dVar5 - dVar6 * auVar23._0_8_;
      auVar35._8_8_ = dVar2 * dVar6 - auVar19._8_8_ * dVar37;
      auVar25._0_8_ = auVar24._0_8_ * dVar7 - auVar27._0_8_ * dVar2;
      auVar25._8_8_ = auVar24._8_8_ * dVar8 - auVar27._8_8_ * 0.0;
      dVar9 = auVar35._8_8_ + auVar35._8_8_;
      dVar10 = auVar25._0_8_ + auVar25._0_8_;
      uVar31 = SUB84(dVar10,0);
      uVar32 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar24 = blendpd(auVar35,auVar25,2);
      auVar33._8_4_ = uVar31;
      auVar33._0_8_ = dVar9;
      auVar33._12_4_ = uVar32;
      auVar20._8_4_ = uVar31;
      auVar20._0_8_ = dVar9;
      auVar20._12_4_ = uVar32;
      auVar28._8_4_ = uVar31;
      auVar28._0_8_ = dVar9;
      auVar28._12_4_ = uVar32;
      auVar36._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar36._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar29 = blendpd(auVar28,auVar36,2);
      auVar34._0_8_ = auVar33._8_8_ * dVar5 - dVar9 * dVar6;
      auVar34._8_8_ = auVar36._0_8_ * dVar6 - auVar20._8_8_ * dVar7;
      auVar24._0_8_ = this->_padding_;
      auVar24._8_8_ = this->_padding_;
      auVar21._8_4_ = SUB84(auVar36._8_8_,0);
      auVar21._0_8_ = auVar36._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
      auVar30._0_8_ = auVar29._0_8_ * dVar7 - auVar36._0_8_ * auVar27._0_8_;
      auVar30._8_8_ = auVar29._8_8_ * dVar8 - auVar21._8_8_ * auVar27._8_8_;
      uVar3 = this->_padding_;
      lVar16 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  (uint)((ulonglong)uVar3 >> 0x20),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar3) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
      lVar17 = -(ulonglong)
                ((double)CONCAT44((uint)((ulonglong)auVar24._0_8_ >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)auVar24._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                 ) <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar18 = -(ulonglong)
                ((double)CONCAT44((uint)((ulonglong)auVar24._8_8_ >> 0x20) & _UNK_15061cc8c,
                                  (uint)auVar24._8_8_ & _UNK_15061cc88) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar22._8_4_ = SUB84(auVar34._8_8_,0);
      auVar22._0_8_ = auVar34._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
      dVar5 = (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar27._12_4_,
                               ~(uint)lVar18 & auVar27._8_4_) *
              (dVar10 * dVar8 + dVar37 + auVar30._0_8_);
      local_148._8_4_ = SUB84(dVar5,0);
      local_148._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar27._4_4_,
                            ~(uint)lVar17 & auVar27._0_4_) *
           (dVar9 * dVar8 + auVar23._0_8_ + auVar22._8_8_);
      local_148._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      pTVar15 = &local_148;
      auVar23._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar23._0_8_ = uVar3;
      auVar23._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
      auVar24 = blendpd(auVar34,auVar30,2);
      local_148._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar23._4_4_,
                            ~(uint)lVar16 & auVar23._0_4_) *
           (auVar36._0_8_ * dVar8 + dVar2 + auVar24._0_8_);
    }
    else {
      pTVar15 = &UE::Math::TVector<double>::GetSafeNormal
                           (param_2,local_e0,__real_3e45798ee0000000,
                            &UE::Math::TVector<double>::ZeroVector)->field0_0x0;
    }
    local_130._s_0.X = (((TVector<double>_u_0 *)&(pTVar15->_s_0).X)->_s_0).X;
    local_130._s_0.Y = (pTVar15->_s_0).Y;
    local_130._s_0.Z = (pTVar15->_s_0).Z;
    UE::Math::TQuat<double>::FindBetweenVectors
              (&local_118,&this->DefaultUpVector,(TVector<double> *)&local_130._s_0);
    FSpline::SetRotation(&this->Spline,param_1,&local_118);
    uVar13 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Rotation.field_0x8) {
      uVar13 = (uint)~param_1 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar16 = *(longlong *)&(this->SplineCurves).Rotation;
    pdVar1 = (double *)((longlong)param_1 * 0x80 + 0x10 + lVar16);
    *pdVar1 = local_118.X;
    pdVar1[1] = local_118.Y;
    pdVar1 = (double *)((longlong)param_1 * 0x80 + 0x20 + lVar16);
    *pdVar1 = local_118.Z;
    pdVar1[1] = local_118.W;
    if (param_4) {
      (**(code **)(this->_padding_ + 0xad0))(this);
    }
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate(this);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSplineChanged);
  }
  return;
}

// StaticRegisterNativesUSplineComponent @ 1479edf20

void __cdecl USplineComponent::StaticRegisterNativesUSplineComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x7c;
  local_18.DataPtr = Z_Construct_UClass_USplineComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsAttributes @ 1479ee2e0

bool __thiscall USplineComponent::SupportsAttributes(USplineComponent *this)

{
  bool bVar1;
  
  if (!UE::SplineComponent::GUseSplineCurves) {
    bVar1 = FSpline::IsEnabledStatic();
    if ((bVar1) && ((this->Spline).CurrentImplementation == '\x02')) {
      return true;
    }
  }
  return false;
}

// UpdateSpline @ 1479f3c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USplineComponent::UpdateSpline(USplineComponent *this)

{
  FUpdateSplineParams local_38;
  
  local_38.LoopPosition = this->LoopPosition;
  local_38.bLoopPositionOverride = this->bLoopPositionOverride;
  local_38.bClosedLoop = this->bClosedLoop;
  local_38.bStationaryEndpoints = this->bStationaryEndpoints;
  local_38.ReparamStepsPerSegment = this->ReparamStepsPerSegment;
  local_38.Scale3D.field0_0x0._s_0.X = (double)this->_padding_;
  local_38.Scale3D.field0_0x0._s_0.Y = (double)this->_padding_;
  local_38.Scale3D.field0_0x0._s_0.Z = (double)this->_padding_;
  FSplineCurves::UpdateSpline
            (&this->SplineCurves,local_38.bClosedLoop,local_38.bStationaryEndpoints,
             local_38.ReparamStepsPerSegment,local_38.bLoopPositionOverride,local_38.LoopPosition,
             &local_38.Scale3D);
  FSpline::UpdateSpline(&this->Spline,&local_38);
  if (this->bDrawDebug != false) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSplineUpdated);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate(this);
  }
  return;
}

// Validate @ 1479f4270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USplineComponent::Validate(USplineComponent *this)

{
  double *pdVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  bool bVar21;
  undefined1 uVar22;
  int iVar23;
  EInterpCurveMode EVar24;
  longlong lVar25;
  TQuat<double> *pTVar26;
  int iVar27;
  FSpline *this_00;
  FSpline *pFVar28;
  uint uVar29;
  longlong lVar30;
  uint uVar31;
  longlong lVar32;
  uint uVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  longlong local_res18;
  FString local_258;
  FString local_248;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  double local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  TQuat<double> local_d8 [4];
  
  this_00 = &this->Spline;
  if (this_00->CurrentImplementation == '\0') {
    return true;
  }
  iVar27 = *(int *)&(this->SplineCurves).Position.field_0x8;
  bVar13 = true;
  iVar23 = FSpline::GetNumControlPoints(this_00);
  iVar12 = iVar27;
  if (iVar23 < iVar27) {
    iVar12 = iVar23;
  }
  if (3 < (byte)LogSplineComponent._0_1_) {
    if (UE::SplineComponent::GUseSplineCurves == false) {
      FSpline::IsEnabledStatic();
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_170,(UObject *)0x0);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  if (iVar27 != iVar23) {
    if (3 < (byte)LogSplineComponent._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent);
    }
    bVar13 = false;
  }
  dVar20 = __real_3f1a36e2e0000000;
  uVar19 = _UNK_15061cc8c;
  uVar18 = _UNK_15061cc88;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar14 = __real_322bcc77;
  uVar31 = 0;
  if (0 < iVar12) {
    local_res18 = 0;
    do {
      uVar29 = ~uVar31 >> 0x1f;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->SplineCurves).Position.field_0x8) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        uVar22 = (*pcVar5)();
        return (bool)uVar22;
      }
      lVar32 = *(longlong *)&(this->SplineCurves).Position;
      lVar30 = local_res18 * 0x58;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->SplineCurves).Rotation.field_0x8) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        uVar22 = (*pcVar5)();
        return (bool)uVar22;
      }
      lVar25 = local_res18 * 0x80 + *(longlong *)&(this->SplineCurves).Rotation;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->SplineCurves).Scale.field_0x8) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        uVar22 = (*pcVar5)();
        return (bool)uVar22;
      }
      cVar3 = *(char *)(lVar32 + 0x50 + lVar30);
      lVar4 = *(longlong *)&(this->SplineCurves).Scale;
      if (cVar3 == '\0') {
        iVar27 = 0;
      }
      else if (cVar3 == '\x01') {
        iVar27 = 1;
      }
      else if (cVar3 == '\x02') {
LAB_1479f4548:
        iVar27 = 2;
      }
      else if (cVar3 == '\x03') {
        iVar27 = 4;
      }
      else {
        if (cVar3 != '\x05') goto LAB_1479f4548;
        iVar27 = 3;
      }
      EVar24 = FSpline::GetSplinePointType(this_00,uVar31);
      if (EVar24 == CIM_Linear) {
        iVar23 = 0;
      }
      else if (EVar24 == CIM_CurveAuto) {
        iVar23 = 1;
      }
      else if (EVar24 == CIM_Constant) {
LAB_1479f4592:
        iVar23 = 2;
      }
      else if (EVar24 == CIM_CurveUser) {
        iVar23 = 4;
      }
      else {
        if (EVar24 != CIM_CurveAutoClamped) goto LAB_1479f4592;
        iVar23 = 3;
      }
      if (iVar27 != iVar23) {
        if (3 < (byte)LogSplineComponent._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent);
        }
        bVar13 = false;
      }
      pdVar1 = (double *)(lVar32 + 8 + lVar30);
      dVar9 = *pdVar1;
      dVar11 = pdVar1[1];
      local_1d8._s_0.Z = *(double *)(lVar32 + 0x18 + lVar30);
      local_1d8._s_0.X = dVar9;
      local_1d8._s_0.Y = dVar11;
      FSpline::GetLocation(this_00,(TVector<double> *)&local_238._s_0,uVar31);
      dVar9 = dVar9 - local_238._s_0.X;
      uVar33 = SUB84(dVar9,0) & uVar16;
      uVar29 = (uint)((ulonglong)dVar9 >> 0x20) & uVar17;
      if (((dVar20 <= (double)CONCAT44(uVar29,uVar33) && (double)CONCAT44(uVar29,uVar33) != dVar20)
          || (dVar11 = dVar11 - local_238._s_0.Y, uVar33 = SUB84(dVar11,0) & uVar16,
             uVar29 = (uint)((ulonglong)dVar11 >> 0x20) & uVar17,
             dVar20 <= (double)CONCAT44(uVar29,uVar33) && (double)CONCAT44(uVar29,uVar33) != dVar20)
          ) || (uVar33 = SUB84(local_1d8._s_0.Z - local_238._s_0.Z,0) & uVar16,
               uVar29 = (uint)((ulonglong)(local_1d8._s_0.Z - local_238._s_0.Z) >> 0x20) & uVar17,
               dVar20 <= (double)CONCAT44(uVar29,uVar33) &&
               (double)CONCAT44(uVar29,uVar33) != dVar20)) {
        if (3 < (byte)LogSplineComponent._0_1_) {
          UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_238._s_0,&local_150);
          UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_1d8._s_0,&local_160);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent);
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
        }
        bVar13 = false;
      }
      pdVar1 = (double *)(lVar32 + 0x20 + lVar30);
      dVar9 = *pdVar1;
      dVar11 = pdVar1[1];
      local_1c0._s_0.Z = *(double *)(lVar32 + 0x30 + lVar30);
      local_1c0._s_0.X = dVar9;
      local_1c0._s_0.Y = dVar11;
      FSpline::GetInTangent(this_00,(TVector<double> *)&local_220._s_0,uVar31);
      dVar9 = dVar9 - local_220._s_0.X;
      uVar33 = SUB84(dVar9,0) & uVar16;
      uVar29 = (uint)((ulonglong)dVar9 >> 0x20) & uVar17;
      if (((dVar20 <= (double)CONCAT44(uVar29,uVar33) && (double)CONCAT44(uVar29,uVar33) != dVar20)
          || (dVar11 = dVar11 - local_220._s_0.Y, uVar33 = SUB84(dVar11,0) & uVar16,
             uVar29 = (uint)((ulonglong)dVar11 >> 0x20) & uVar17,
             dVar20 <= (double)CONCAT44(uVar29,uVar33) && (double)CONCAT44(uVar29,uVar33) != dVar20)
          ) || (uVar33 = SUB84(local_1c0._s_0.Z - local_220._s_0.Z,0) & uVar16,
               uVar29 = (uint)((ulonglong)(local_1c0._s_0.Z - local_220._s_0.Z) >> 0x20) & uVar17,
               dVar20 <= (double)CONCAT44(uVar29,uVar33) &&
               (double)CONCAT44(uVar29,uVar33) != dVar20)) {
        if (3 < (byte)LogSplineComponent._0_1_) {
          UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_220._s_0,&local_130);
          UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_1c0._s_0,&local_140);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogSplineComponent._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent)
            ;
          }
        }
        if ((iVar27 == 3) &&
           (UE::SplineComponent::GIgnoreCurveClampedPointTangentsForValidation != false)) {
          if (3 < (byte)LogSplineComponent._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)&PTR_u_Ignoring_incons_1518158a0,
                       (FLogCategoryBase *)&LogSplineComponent);
          }
        }
        else {
          bVar13 = false;
        }
      }
      pdVar1 = (double *)(lVar32 + 0x38 + lVar30);
      dVar9 = *pdVar1;
      dVar11 = pdVar1[1];
      local_1a8._s_0.Z = *(double *)(lVar32 + 0x48 + lVar30);
      local_1a8._s_0.X = dVar9;
      local_1a8._s_0.Y = dVar11;
      FSpline::GetOutTangent(this_00,(TVector<double> *)&local_208._s_0,uVar31);
      dVar9 = dVar9 - local_208._s_0.X;
      uVar33 = SUB84(dVar9,0) & uVar16;
      uVar29 = (uint)((ulonglong)dVar9 >> 0x20) & uVar17;
      if (((dVar20 <= (double)CONCAT44(uVar29,uVar33) && (double)CONCAT44(uVar29,uVar33) != dVar20)
          || (dVar11 = dVar11 - local_208._s_0.Y, uVar33 = SUB84(dVar11,0) & uVar16,
             uVar29 = (uint)((ulonglong)dVar11 >> 0x20) & uVar17,
             dVar20 <= (double)CONCAT44(uVar29,uVar33) && (double)CONCAT44(uVar29,uVar33) != dVar20)
          ) || (uVar33 = SUB84(local_1a8._s_0.Z - local_208._s_0.Z,0) & uVar16,
               uVar29 = (uint)((ulonglong)(local_1a8._s_0.Z - local_208._s_0.Z) >> 0x20) & uVar17,
               dVar20 <= (double)CONCAT44(uVar29,uVar33) &&
               (double)CONCAT44(uVar29,uVar33) != dVar20)) {
        if (3 < (byte)LogSplineComponent._0_1_) {
          UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_208._s_0,&local_110);
          UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_1a8._s_0,&local_120);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogSplineComponent._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent)
            ;
          }
        }
        if ((iVar27 == 3) &&
           (UE::SplineComponent::GIgnoreCurveClampedPointTangentsForValidation != false)) {
          if (3 < (byte)LogSplineComponent._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent)
            ;
          }
        }
        else {
          bVar13 = false;
        }
      }
      fVar2 = *(float *)(lVar32 + lVar30);
      fVar34 = FSpline::GetParameterAtIndex(this_00,uVar31);
      if (fVar14 < (float)((uint)(fVar2 - fVar34) & uVar15)) {
        if (3 < (byte)LogSplineComponent._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent);
        }
        bVar13 = false;
      }
      dVar9 = *(double *)(lVar25 + 0x10);
      dVar11 = *(double *)(lVar25 + 0x18);
      dVar37 = *(double *)(lVar25 + 0x20);
      dVar38 = *(double *)(lVar25 + 0x28);
      pFVar28 = this_00;
      pTVar26 = FSpline::GetRotation(this_00,local_d8,uVar31);
      dVar35 = dVar37 - local_d8[0].Z;
      dVar36 = dVar38 - local_d8[0].W;
      local_178 = dVar20;
      lVar32 = -(ulonglong)
                (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar19,
                                           SUB84(dVar36,0) & uVar18));
      auVar6._8_4_ = (int)lVar32;
      auVar6._0_8_ = -(ulonglong)
                      (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar17,
                                                 SUB84(dVar35,0) & uVar16));
      auVar6._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      iVar27 = movmskpd((int)pFVar28,auVar6);
      dVar35 = dVar9 - local_d8[0].X;
      dVar36 = dVar11 - local_d8[0].Y;
      lVar32 = -(ulonglong)
                (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar19,
                                           SUB84(dVar36,0) & uVar18));
      dVar9 = local_d8[0].X + dVar9;
      dVar11 = local_d8[0].Y + dVar11;
      dVar37 = local_d8[0].Z + dVar37;
      dVar38 = local_d8[0].W + dVar38;
      auVar7._8_4_ = (int)lVar32;
      auVar7._0_8_ = -(ulonglong)
                      (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar17,
                                                 SUB84(dVar35,0) & uVar16));
      auVar7._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      uVar33 = movmskpd((int)pTVar26,auVar7);
      uVar29 = iVar27 << 2 | uVar33;
      if (uVar29 != 0) {
        lVar32 = -(ulonglong)
                  (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar19,
                                             SUB84(dVar38,0) & uVar18));
        auVar8._8_4_ = (int)lVar32;
        auVar8._0_8_ = -(ulonglong)
                        (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar17,
                                                   SUB84(dVar37,0) & uVar16));
        auVar8._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
        uVar29 = movmskpd(uVar29,auVar8);
        lVar32 = -(ulonglong)
                  (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar19,
                                             SUB84(dVar11,0) & uVar18));
        auVar10._8_4_ = (int)lVar32;
        auVar10._0_8_ =
             -(ulonglong)
              (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar17,
                                         SUB84(dVar9,0) & uVar16));
        auVar10._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
        iVar27 = movmskpd(uVar33,auVar10);
        if ((uVar29 & 0x3fffffff) != 0 || iVar27 != 0) {
          if (3 < (byte)LogSplineComponent._0_1_) {
            ::FString::PrintfImpl(&local_248,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
            ::FString::PrintfImpl(&local_258,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent)
            ;
            if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.Data.AllocatorInstance.Data);
            }
            if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.Data.AllocatorInstance.Data);
            }
          }
          bVar13 = false;
        }
      }
      pdVar1 = (double *)(lVar4 + 8 + lVar30);
      dVar9 = *pdVar1;
      dVar11 = pdVar1[1];
      local_190._s_0.Z = *(double *)(lVar4 + 0x18 + lVar30);
      local_190._s_0.X = dVar9;
      local_190._s_0.Y = dVar11;
      FSpline::GetScale(this_00,(TVector<double> *)&local_1f0._s_0,uVar31);
      dVar9 = dVar9 - local_1f0._s_0.X;
      uVar33 = SUB84(dVar9,0) & uVar16;
      uVar29 = (uint)((ulonglong)dVar9 >> 0x20) & uVar17;
      if (((dVar20 <= (double)CONCAT44(uVar29,uVar33) && (double)CONCAT44(uVar29,uVar33) != dVar20)
          || (dVar11 = dVar11 - local_1f0._s_0.Y, uVar33 = SUB84(dVar11,0) & uVar16,
             uVar29 = (uint)((ulonglong)dVar11 >> 0x20) & uVar17,
             dVar20 <= (double)CONCAT44(uVar29,uVar33) && (double)CONCAT44(uVar29,uVar33) != dVar20)
          ) || (uVar33 = SUB84(local_190._s_0.Z - local_1f0._s_0.Z,0) & uVar16,
               uVar29 = (uint)((ulonglong)(local_190._s_0.Z - local_1f0._s_0.Z) >> 0x20) & uVar17,
               dVar20 <= (double)CONCAT44(uVar29,uVar33) &&
               (double)CONCAT44(uVar29,uVar33) != dVar20)) {
        if (3 < (byte)LogSplineComponent._0_1_) {
          UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_1f0._s_0,&local_f0);
          UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_190._s_0,&local_100);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSplineComponent);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
        }
        bVar13 = false;
      }
      uVar31 = uVar31 + 1;
      local_res18 = local_res18 + 1;
    } while (local_res18 < iVar12);
  }
  if (((UE::SplineComponent::GFailedValidationEnsures != false) && (!bVar13)) &&
     (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3237453185589182212>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                          ,0xfc,"bValid"), bVar21)) {
    pcVar5 = (code *)swi(3);
    uVar22 = (*pcVar5)();
    return (bool)uVar22;
  }
  return bVar13;
}

// ValidateGeneratedRepEnums @ 1479f50d0

void __thiscall
USplineComponent::ValidateGeneratedRepEnums
          (USplineComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_SplineCurves,L"SplineCurves");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_ReparamStepsPerSegment,L"ReparamStepsPerSegment");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_bStationaryEndpoints,L"bStationaryEndpoints");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_bSplineHasBeenEdited,L"bSplineHasBeenEdited");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&Name_bInputSplinePointsToConstructionScript,
                   L"bInputSplinePointsToConstructionScript");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar5 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&Name_bClosedLoop,L"bClosedLoop");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar5 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&Name_bLoopPositionOverride,L"bLoopPositionOverride");
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar5 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FName::FName(&Name_LoopPosition,L"LoopPosition");
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar5 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FName::FName(&Name_DefaultUpVector,L"DefaultUpVector");
    _Init_thread_footer(&::_TSS8);
  }
  if ((param_1->ArrayNum < 0x12) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_SplineCurves == FVar4) {
    if ((param_1->ArrayNum < 0x13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x120);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_ReparamStepsPerSegment == FVar4) {
      if ((param_1->ArrayNum < 0x14) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x130);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_bStationaryEndpoints == FVar4) {
        if ((param_1->ArrayNum < 0x15) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x140);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar4 = FVar6;
        if (bVar3) {
          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_bSplineHasBeenEdited == FVar4) {
          if ((param_1->ArrayNum < 0x16) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x150);
          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
          FVar4 = FVar6;
          if (bVar3) {
            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
          }
          if (Name_bInputSplinePointsToConstructionScript == FVar4) {
            if ((param_1->ArrayNum < 0x17) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x160);
            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
            FVar4 = FVar6;
            if (bVar3) {
              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
            }
            if (Name_bClosedLoop == FVar4) {
              if ((param_1->ArrayNum < 0x18) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x170);
              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
              FVar4 = FVar6;
              if (bVar3) {
                FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
              }
              if (Name_bLoopPositionOverride == FVar4) {
                if ((param_1->ArrayNum < 0x19) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x180);
                bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                FVar4 = FVar6;
                if (bVar3) {
                  FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                }
                if (Name_LoopPosition == FVar4) {
                  if ((param_1->ArrayNum < 0x1a) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 400);
                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                  if (bVar3) {
                    FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
                  }
                  if (Name_DefaultUpVector == FVar6) {
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SplineComponent.gen.cpp"
                     ,0x24bd,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USplineComponent"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execAddPoint @ 1479f6a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl USplineComponent::execAddPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSplinePoint *pFVar2;
  int local_res10 [2];
  FSplinePoint local_98;
  
  local_98.InputKey = 0.0;
  local_98.Position.field0_0x0._s_0.X = 0.0;
  local_98.Position.field0_0x0._s_0.Y = 0.0;
  local_98.Position.field0_0x0._s_0.Z = 0.0;
  local_98.ArriveTangent.field0_0x0._s_0.X = 0.0;
  local_98.ArriveTangent.field0_0x0._s_0.Y = 0.0;
  local_98.ArriveTangent.field0_0x0._s_0.Z = 0.0;
  local_98.LeaveTangent.field0_0x0._s_0.X = 0.0;
  local_98.LeaveTangent.field0_0x0._s_0.Y = 0.0;
  local_98.LeaveTangent.field0_0x0._s_0.Z = 0.0;
  local_98.Rotation.Pitch = 0.0;
  local_98.Rotation.Yaw = 0.0;
  local_98.Rotation.Roll = ___xmm_3ff00000000000000000000000000000;
  local_98.Scale.field0_0x0._s_0.X = _UNK_15061cbc8;
  local_98.Scale.field0_0x0._s_0.Y = ___xmm_3ff00000000000003ff0000000000000;
  local_98.Scale.field0_0x0._s_0.Z = _UNK_150689688;
  local_98.Type.Value = '\x01';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0;
  pFVar2 = &local_98;
  if ((FSplinePoint *)param_2->MostRecentPropertyAddress != (FSplinePoint *)0x0) {
    pFVar2 = (FSplinePoint *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddPoint((USplineComponent *)param_1,pFVar2,local_res10[0] != 0);
  return;
}

// execAddPoints @ 1479f6b60

void __cdecl USplineComponent::execAddPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  uint uVar3;
  FSplinePoint *pFVar4;
  FSplinePoint *pFVar5;
  void **ppvVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  void *local_38;
  undefined8 local_30;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  ppvVar6 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar7 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = *(int *)(ppvVar6 + 1) + *(int *)(param_1 + 0x24);
  if (-1 < (int)uVar3) {
    if (*(int *)&param_1[0x24].field_0x4 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar3,(ForAnyElementType *)&param_1[0x23].field_0x20,
                 *(int *)(param_1 + 0x24),(int *)&param_1[0x24].field_0x4);
    }
    if (*(int *)&param_1[0x24].field_0x1c < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar3,(ForAnyElementType *)&param_1[0x24].field_0x10,
                 *(int *)&param_1[0x24].field_0x18,(int *)&param_1[0x24].field_0x1c);
    }
    if (*(int *)&param_1[0x25].field_0xc < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar3,(ForAnyElementType *)(param_1 + 0x25),*(int *)&param_1[0x25].field_0x8
                 ,(int *)&param_1[0x25].field_0xc);
    }
    iVar1 = *(int *)(ppvVar6 + 1);
    pFVar4 = *ppvVar6;
    pFVar5 = pFVar4 + iVar1;
    while( true ) {
      if (*(int *)(ppvVar6 + 1) != iVar1) {
        `TCheckedPointerIterator<FSplinePoint_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      AddPoint((USplineComponent *)param_1,pFVar4,false);
      pFVar4 = pFVar4 + 1;
    }
    if (bVar7) {
      (**(code **)(*(longlong *)param_1 + 0xad0))(param_1);
    }
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate((USplineComponent *)param_1);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &param_1[0x2a].field_0x8);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// execAddSplineLocalPoint @ 1479f6d70

void __cdecl
USplineComponent::execAddSplineLocalPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddSplinePoint((USplineComponent *)param_1,pTVar2,Local,true);
  return;
}

// execAddSplinePoint @ 1479f6e10

void __cdecl USplineComponent::execAddSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  byte local_res10 [16];
  int local_res20 [2];
  TVector<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar2 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddSplinePoint((USplineComponent *)param_1,pTVar2,(uint)local_res10[0],local_res20[0] != 0);
  return;
}

// execAddSplinePointAtIndex @ 1479f6f30

void __cdecl
USplineComponent::execAddSplinePointAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  byte local_res10 [16];
  int local_res20 [2];
  int local_38 [2];
  TVector<double> local_30;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38[0] = 0;
  pTVar2 = &local_30;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddSplinePointAtIndex
            ((USplineComponent *)param_1,pTVar2,local_38[0],(uint)local_res10[0],local_res20[0] != 0
            );
  return;
}

// execAddSplineWorldPoint @ 1479f70a0

void __cdecl
USplineComponent::execAddSplineWorldPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddSplinePoint((USplineComponent *)param_1,pTVar2,World,true);
  return;
}

// execClearSplinePoints @ 1479f7140

void __cdecl USplineComponent::execClearSplinePoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  bool bVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSpline::Reset((FSpline *)&param_1[0x21].field_0x20);
  iVar1 = *(int *)&param_1[0x24].field_0x4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&param_1[0x23].field_0x20,0,
               (int *)&param_1[0x24].field_0x4);
  }
  *(undefined4 *)&param_1[0x24].field_0x18 = 0;
  if (*(int *)&param_1[0x24].field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)&param_1[0x24].field_0x10,0,
               (int *)&param_1[0x24].field_0x1c);
  }
  *(undefined4 *)&param_1[0x25].field_0x8 = 0;
  if (*(int *)&param_1[0x25].field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)(param_1 + 0x25),0,(int *)&param_1[0x25].field_0xc);
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)param_1 + 0xa98))(param_1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2e0))(plVar3,0);
  }
  if (bVar4) {
    (**(code **)(*(longlong *)param_1 + 0xad0))(param_1);
  }
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate((USplineComponent *)param_1);
  }
  return;
}

// execConvertSplineSegmentToPolyLine @ 1479f7540

void __cdecl
USplineComponent::execConvertSplineSegmentToPolyLine(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  byte local_res10 [8];
  float local_res18 [2];
  int local_res20 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConvertSplineSegmentToPolyLine
                    ((USplineComponent *)param_1,local_res20[0],(uint)local_res10[0],local_res18[0],
                     pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConvertSplineToPolyLine @ 1479f76c0

void __cdecl
USplineComponent::execConvertSplineToPolyLine(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  byte local_res10 [8];
  float local_res18 [4];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConvertSplineToPolyLine
                    ((USplineComponent *)param_1,(uint)local_res10[0],local_res18[0],pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConvertSplineToPolyLineWithDistances @ 1479f7800

void __cdecl
USplineComponent::execConvertSplineToPolyLineWithDistances
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  Type TVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar6;
  float fVar7;
  byte local_res10 [8];
  float local_res18 [4];
  TArray<double,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_48 [2];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pTVar5 = local_48;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  fVar2 = local_res18[0];
  pTVar6 = &local_58;
  if ((TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar4 = (Type)local_res10[0];
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar3 = FSpline::IsEnabledStatic();
    if (bVar3) {
      fVar7 = FSpline::GetSplineLength((FSpline *)&param_1[0x21].field_0x20);
      goto LAB_1479f79b2;
    }
  }
  fVar7 = FSplineCurves::GetSplineLength((FSplineCurves *)&param_1[0x23].field_0x20);
LAB_1479f79b2:
  bVar3 = ConvertSplineToPolyline_InDistanceRange
                    ((USplineComponent *)param_1,TVar4,fVar2,0.0,fVar7,pTVar5,pTVar6,false);
  *(bool *)param_3 = bVar3;
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  return;
}

// execConvertSplineToPolyline_InDistanceRange @ 1479f7a20

void __cdecl
USplineComponent::execConvertSplineToPolyline_InDistanceRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  byte local_res10 [8];
  int local_res18 [2];
  float local_res20 [2];
  float local_68;
  float local_64;
  TArray<double,TSizedDefaultAllocator<32>_> local_60;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_50;
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_64 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_64,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_64);
  }
  local_68 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  pTVar4 = &local_50;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res18[0] = 0;
  pTVar3 = &local_60;
  if ((TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConvertSplineToPolyline_InDistanceRange
                    ((USplineComponent *)param_1,(uint)local_res10[0],local_64,local_68,
                     local_res20[0],pTVar4,pTVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// execConvertSplineToPolyline_InTimeRange @ 1479f7ca0

void __cdecl
USplineComponent::execConvertSplineToPolyline_InTimeRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  Type TVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  byte local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  float local_a8;
  float local_a4;
  float local_a0 [2];
  TArray<double,TSizedDefaultAllocator<32>_> local_98;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  UObject *local_78;
  undefined1 local_70;
  undefined1 local_6f;
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_a4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar8 = local_res18[0] != 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pTVar7 = &local_88;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res20[0] = 0;
  pTVar5 = &local_98;
  if ((TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  fVar2 = local_a0[0];
  fVar11 = local_a4;
  fVar10 = local_a8;
  bVar9 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar6 = (Type)local_res10[0];
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar3 = FSpline::IsEnabledStatic();
    if (bVar3) {
      iVar4 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
      goto LAB_1479f7f47;
    }
  }
  iVar4 = *(int *)(param_1 + 0x24);
LAB_1479f7f47:
  bVar3 = false;
  if (iVar4 != 0) {
    local_78 = param_1;
    local_70 = bVar8;
    local_6f = bVar9;
    fVar10 = `USplineComponent::ConvertSplineToPolyline_InTimeRange'::__l2::<lambda_1>::operator()
                       (&local_78,fVar10);
    fVar11 = `USplineComponent::ConvertSplineToPolyline_InTimeRange'::__l2::<lambda_1>::operator()
                       (&local_78,fVar11);
    bVar3 = ConvertSplineToPolyline_InDistanceRange
                      ((USplineComponent *)param_1,TVar6,fVar2,fVar11,fVar10,pTVar7,pTVar5,bVar9);
  }
  *(bool *)param_3 = bVar3;
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execCreateFloatPropertyChannel @ 1479f7ff0

void __cdecl
USplineComponent::execCreateFloatPropertyChannel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  longlong lVar3;
  FProperty *pFVar4;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar1 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (**(code **)(*(longlong *)param_1 + 0xa98))(param_1);
  if ((lVar3 != 0) &&
     (pFVar4 = UStruct::FindPropertyByName(*(UStruct **)(lVar3 + 0x10),FVar1),
     pFVar4 != (FProperty *)0x0)) {
    return;
  }
  if (((UE::SplineComponent::GUseSplineCurves == false) && (param_1[0x21].field_0x20 == '\x02')) &&
     (bVar2 = FSpline::HasAttributeChannel((FSpline *)&param_1[0x21].field_0x20,FVar1), !bVar2)) {
    FSpline::CreateAttributeChannel<float>((FSpline *)&param_1[0x21].field_0x20,FVar1);
  }
  return;
}

// execDivideSplineIntoPolylineRecursive @ 1479f8100

void __cdecl
USplineComponent::execDivideSplineIntoPolylineRecursive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  byte local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  float local_58 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_50;
  TArray<double,TSizedDefaultAllocator<32>_> local_40;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar3 = &local_50;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConvertSplineToPolyline_InDistanceRange
                    ((USplineComponent *)param_1,(uint)local_res10[0],local_58[0],local_res20[0],
                     local_res18[0],pTVar3,&local_40,false);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// execDivideSplineIntoPolylineRecursiveWithDistances @ 1479f82f0

void __cdecl
USplineComponent::execDivideSplineIntoPolylineRecursiveWithDistances
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  byte local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  float local_58 [2];
  TArray<double,TSizedDefaultAllocator<32>_> local_50;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_40;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  pTVar4 = &local_40;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar3 = &local_50;
  if ((TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConvertSplineToPolyline_InDistanceRange
                    ((USplineComponent *)param_1,(uint)local_res10[0],local_58[0],local_res20[0],
                     local_res18[0],pTVar4,pTVar3,false);
  *(bool *)param_3 = bVar2;
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// execFindDirectionClosestToWorldLocation @ 1479f8560

void __cdecl
USplineComponent::execFindDirectionClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  TVector<double> *pTVar3;
  float fVar4;
  byte local_res10 [8];
  TVector<double> local_48;
  TVector<double>_u_0 local_30;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  pTVar3 = &local_48;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar4 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar3);
  GetDirectionAtSplineInputKey
            ((USplineComponent *)param_1,(TVector<double> *)&local_30._s_0,fVar4,(uint)bVar2);
  *(double *)param_3 = local_30._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_30._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_30._s_0.Z;
  return;
}

// execFindInputKeyClosestToWorldLocation @ 1479f8670

void __cdecl
USplineComponent::execFindInputKeyClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  float fVar3;
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar2);
  *(float *)param_3 = fVar3;
  return;
}

// execFindInputKeyOnSegmentClosestToWorldLocation @ 1479f8720

void __cdecl
USplineComponent::execFindInputKeyOnSegmentClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  float fVar3;
  int local_res10 [2];
  TVector<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar2 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = FindInputKeyOnSegmentClosestToWorldLocation
                    ((USplineComponent *)param_1,pTVar2,local_res10[0]);
  *(float *)param_3 = fVar3;
  return;
}

// execFindLocationClosestToWorldLocation @ 1479f8810

void __cdecl
USplineComponent::execFindLocationClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  char local_res10 [8];
  TVector<double> local_a8;
  TVector<double> local_90;
  TVector<double> local_78 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = '\0';
  pTVar10 = &local_a8;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar10 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar11 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar10);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar9 = FSpline::IsEnabledStatic();
    if (bVar9) {
      pTVar10 = FSpline::Evaluate((FSpline *)&param_1[0x21].field_0x20,&local_90,fVar11);
      goto LAB_1479f894d;
    }
  }
  pTVar10 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1[0x23].field_0x20,
                       local_78,fVar11,&UE::Math::TVector<double>::ZeroVector);
LAB_1479f894d:
  dVar3 = (pTVar10->field0_0x0)._s_0.X;
  dVar4 = *(double *)((longlong)&pTVar10->field0_0x0 + 8);
  dVar20 = (pTVar10->field0_0x0)._s_0.Z;
  if (cVar8 == '\x01') {
    auVar19 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    dVar7 = *(double *)(param_1 + 0xd);
    dVar3 = *(double *)(param_1 + 0xe) * dVar3;
    dVar4 = *(double *)&param_1[0xe].field_0x8 * dVar4;
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar20 = dVar20 * *(double *)&param_1[0xe].field_0x10;
    dVar5 = *(double *)&param_1[0xe].field_0x18 * 0.0;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21._8_4_ = SUB84(dVar4,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = uVar25;
    dVar2 = auVar19._0_8_;
    auVar14 = blendpd(auVar12,auVar19,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
    auVar22._8_8_ = dVar20 * auVar12._8_8_ - dVar2 * dVar4;
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar3;
    auVar23._12_4_ = uVar25;
    auVar12._8_4_ = SUB84(dVar5,0);
    auVar12._0_8_ = dVar20;
    auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar12 = blendpd(auVar23,auVar12,2);
    auVar13._0_8_ = auVar12._0_8_ * dVar2 - auVar14._0_8_ * dVar20;
    auVar13._8_8_ = auVar12._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar5;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar23 = blendpd(auVar22,auVar13,2);
    dVar5 = auVar22._8_8_ + auVar22._8_8_;
    dVar6 = auVar13._0_8_ + auVar13._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = uVar25;
    auVar15._8_4_ = SUB84(dVar6,0);
    auVar15._0_8_ = dVar5;
    auVar15._12_4_ = uVar25;
    auVar23 = blendpd(auVar15,auVar24,2);
    auVar18._0_8_ = auVar17._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
    auVar18._8_8_ = auVar24._0_8_ * auVar12._8_8_ - dVar2 * dVar6;
    auVar14._8_4_ = SUB84(auVar18._8_8_,0);
    auVar14._0_8_ = auVar18._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
    auVar12 = blendpd(auVar12,auVar19,2);
    auVar16._0_8_ = auVar23._0_8_ * dVar2 - auVar12._0_8_ * auVar24._0_8_;
    auVar16._8_8_ = auVar23._8_8_ * auVar19._8_8_ - auVar12._8_8_ * auVar24._8_8_;
    auVar19 = blendpd(auVar18,auVar16,2);
    dVar3 = dVar5 * dVar7 + dVar3 + auVar14._8_8_ + *(double *)&param_1[0xd].field_0x8;
    dVar4 = dVar6 * dVar7 + dVar4 + auVar16._0_8_ + *(double *)&param_1[0xd].field_0x10;
    dVar20 = auVar24._0_8_ * dVar7 + dVar20 + auVar19._0_8_ + *(double *)&param_1[0xd].field_0x18;
  }
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar19;
  *(double *)((longlong)param_3 + 0x10) = dVar20;
  return;
}

// execFindRightVectorClosestToWorldLocation @ 1479f8ac0

void __cdecl
USplineComponent::execFindRightVectorClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  TVector<double> *pTVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  char local_res10 [8];
  TVector<double> local_b8;
  TQuat<double> local_98 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res10[0] = '\0';
  pTVar7 = &local_b8;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar7 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar8 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar7);
  GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_98,fVar8,Local);
  dVar4 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_98[0].Y -
          UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_98[0].Z;
  dVar4 = dVar4 + dVar4;
  dVar19 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_98[0].Z -
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_98[0].X;
  dVar19 = dVar19 + dVar19;
  dVar18 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_98[0].X -
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_98[0].Y;
  dVar18 = dVar18 + dVar18;
  dVar11 = (dVar18 * local_98[0].Y - dVar19 * local_98[0].Z) +
           local_98[0].W * dVar4 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  dVar12 = (dVar4 * local_98[0].Z - dVar18 * local_98[0].X) +
           local_98[0].W * dVar19 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  dVar19 = (dVar19 * local_98[0].X - dVar4 * local_98[0].Y) +
           local_98[0].W * dVar18 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  if (cVar6 == '\x01') {
    auVar10 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    auVar21._8_8_ = dVar12;
    auVar21._0_8_ = dVar11;
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar5 = *(double *)(param_1 + 0xd);
    dVar4 = auVar10._0_8_;
    auVar13 = blendpd(auVar9,auVar10,2);
    auVar20._0_8_ = dVar12 * auVar9._0_8_ - auVar9._8_8_ * dVar11;
    auVar20._8_8_ = dVar19 * auVar9._8_8_ - dVar4 * dVar12;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar19;
    auVar9 = blendpd(auVar21,auVar9,2);
    auVar14._0_8_ = auVar9._0_8_ * dVar4 - auVar13._0_8_ * dVar19;
    auVar14._8_8_ = auVar9._8_8_ * auVar10._8_8_ - auVar13._8_8_ * 0.0;
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21 = blendpd(auVar20,auVar14,2);
    dVar18 = auVar20._8_8_ + auVar20._8_8_;
    dVar3 = auVar14._0_8_ + auVar14._0_8_;
    uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    auVar16._8_4_ = SUB84(dVar3,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = uVar23;
    auVar13._8_4_ = SUB84(dVar3,0);
    auVar13._0_8_ = dVar18;
    auVar13._12_4_ = uVar23;
    auVar14 = blendpd(auVar13,auVar22,2);
    auVar21 = blendpd(auVar9,auVar10,2);
    auVar17._0_8_ = auVar16._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar18;
    auVar17._8_8_ = auVar22._0_8_ * auVar9._8_8_ - dVar4 * dVar3;
    auVar15._0_8_ = auVar14._0_8_ * dVar4 - auVar21._0_8_ * auVar22._0_8_;
    auVar15._8_8_ = auVar14._8_8_ * auVar10._8_8_ - auVar21._8_8_ * auVar22._8_8_;
    auVar10._8_4_ = SUB84(auVar17._8_8_,0);
    auVar10._0_8_ = auVar17._0_8_;
    auVar10._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
    auVar9 = blendpd(auVar17,auVar15,2);
    dVar19 = auVar22._0_8_ * dVar5 + dVar19 + auVar9._0_8_;
    dVar11 = dVar18 * dVar5 + dVar11 + auVar10._8_8_;
    dVar12 = dVar3 * dVar5 + dVar12 + auVar15._0_8_;
  }
  auVar2._8_4_ = SUB84(dVar12,0);
  auVar2._0_8_ = dVar11;
  auVar2._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar19;
  return;
}

// execFindRollClosestToWorldLocation @ 1479f8e10

void __cdecl
USplineComponent::execFindRollClosestToWorldLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  TQuat<double> *this;
  TVector<double> *pTVar3;
  float fVar4;
  byte local_res10 [8];
  TVector<double> local_68;
  TRotator<double> local_50;
  TQuat<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  pTVar3 = &local_68;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar4 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar3);
  this = GetQuaternionAtSplineInputKey((USplineComponent *)param_1,&local_38,fVar4,(uint)bVar2);
  UE::Math::TQuat<double>::Rotator(this,&local_50);
  *(float *)param_3 = (float)local_50.Roll;
  return;
}

// execFindRotationClosestToWorldLocation @ 1479f8f40

void __cdecl
USplineComponent::execFindRotationClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  TQuat<double> *this;
  TVector<double> *pTVar3;
  float fVar4;
  byte local_res10 [8];
  TVector<double> local_68;
  TRotator<double> local_50;
  TQuat<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  pTVar3 = &local_68;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar4 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar3);
  this = GetQuaternionAtSplineInputKey((USplineComponent *)param_1,&local_38,fVar4,(uint)bVar2);
  UE::Math::TQuat<double>::Rotator(this,&local_50);
  *(double *)param_3 = local_50.Pitch;
  *(double *)((longlong)param_3 + 8) = local_50.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_50.Roll;
  return;
}

// execFindScaleClosestToWorldLocation @ 1479f9070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USplineComponent::execFindScaleClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FProperty *pFVar2;
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  float fVar6;
  TVector<double> local_78;
  TVector<double>_u_0 local_60;
  TVector<double> local_48;
  TVector<double> local_30;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar5 = &local_78;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar6 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar5);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar4 = FSpline::IsEnabledStatic();
    if (bVar4) {
      pTVar5 = FSpline::EvaluateScale((FSpline *)&param_1[0x21].field_0x20,&local_48,fVar6);
      goto LAB_1479f915b;
    }
  }
  local_60._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_60._s_0.Y = _UNK_150689688;
  local_60._s_0.Z = __real_3ff0000000000000;
  pTVar5 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                     ((FInterpCurve<UE::Math::TVector<double>_> *)(param_1 + 0x25),&local_30,fVar6,
                      (TVector<double> *)&local_60._s_0);
LAB_1479f915b:
  dVar3 = (pTVar5->field0_0x0)._s_0.Y;
  dVar1 = (pTVar5->field0_0x0)._s_0.Z;
  *(double *)param_3 = (pTVar5->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar3;
  *(double *)((longlong)param_3 + 0x10) = dVar1;
  return;
}

// execFindTangentClosestToWorldLocation @ 1479f9190

void __cdecl
USplineComponent::execFindTangentClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  char local_res10 [8];
  TVector<double> local_a8;
  TVector<double> local_90;
  TVector<double> local_78 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = '\0';
  pTVar10 = &local_a8;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar10 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar11 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar10);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar9 = FSpline::IsEnabledStatic();
    if (bVar9) {
      pTVar10 = FSpline::EvaluateDerivative((FSpline *)&param_1[0x21].field_0x20,&local_90,fVar11);
      goto LAB_1479f92cd;
    }
  }
  pTVar10 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1[0x23].field_0x20,
                       local_78,fVar11,&UE::Math::TVector<double>::ZeroVector);
LAB_1479f92cd:
  dVar3 = (pTVar10->field0_0x0)._s_0.X;
  dVar4 = *(double *)((longlong)&pTVar10->field0_0x0 + 8);
  dVar20 = (pTVar10->field0_0x0)._s_0.Z;
  if (cVar8 == '\x01') {
    auVar19 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    dVar7 = *(double *)(param_1 + 0xd);
    dVar3 = *(double *)(param_1 + 0xe) * dVar3;
    dVar4 = *(double *)&param_1[0xe].field_0x8 * dVar4;
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar20 = dVar20 * *(double *)&param_1[0xe].field_0x10;
    dVar5 = *(double *)&param_1[0xe].field_0x18 * 0.0;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21._8_4_ = SUB84(dVar4,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = uVar25;
    dVar2 = auVar19._0_8_;
    auVar14 = blendpd(auVar12,auVar19,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
    auVar22._8_8_ = dVar20 * auVar12._8_8_ - dVar2 * dVar4;
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar3;
    auVar23._12_4_ = uVar25;
    auVar12._8_4_ = SUB84(dVar5,0);
    auVar12._0_8_ = dVar20;
    auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar12 = blendpd(auVar23,auVar12,2);
    auVar13._0_8_ = auVar12._0_8_ * dVar2 - auVar14._0_8_ * dVar20;
    auVar13._8_8_ = auVar12._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar5;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar23 = blendpd(auVar22,auVar13,2);
    dVar5 = auVar22._8_8_ + auVar22._8_8_;
    dVar6 = auVar13._0_8_ + auVar13._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = uVar25;
    auVar15._8_4_ = SUB84(dVar6,0);
    auVar15._0_8_ = dVar5;
    auVar15._12_4_ = uVar25;
    auVar23 = blendpd(auVar15,auVar24,2);
    auVar18._0_8_ = auVar17._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
    auVar18._8_8_ = auVar24._0_8_ * auVar12._8_8_ - dVar2 * dVar6;
    auVar14._8_4_ = SUB84(auVar18._8_8_,0);
    auVar14._0_8_ = auVar18._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
    auVar12 = blendpd(auVar12,auVar19,2);
    auVar16._0_8_ = auVar23._0_8_ * dVar2 - auVar12._0_8_ * auVar24._0_8_;
    auVar16._8_8_ = auVar23._8_8_ * auVar19._8_8_ - auVar12._8_8_ * auVar24._8_8_;
    auVar19 = blendpd(auVar18,auVar16,2);
    dVar20 = auVar24._0_8_ * dVar7 + dVar20 + auVar19._0_8_;
    dVar3 = dVar5 * dVar7 + dVar3 + auVar14._8_8_;
    dVar4 = dVar6 * dVar7 + dVar4 + auVar16._0_8_;
  }
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar19;
  *(double *)((longlong)param_3 + 0x10) = dVar20;
  return;
}

// execFindTransformClosestToWorldLocation @ 1479f9430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USplineComponent::execFindTransformClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  TVector<double> *pTVar3;
  bool bVar4;
  float fVar5;
  undefined1 auStack_e8 [32];
  byte local_b8 [4];
  int local_b4;
  TVector<double> local_b0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8[0] = 0;
  pTVar3 = &local_b0;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_b4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  bVar2 = local_b8[0];
  bVar4 = local_b4 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar5 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar3);
  GetTransformAtSplineInputKey((USplineComponent *)param_1,&local_98,fVar5,(uint)bVar2,bVar4);
  *(double *)param_3 = local_98.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_98.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_98.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = local_98.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = local_98.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = local_98.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = local_98.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_98.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_98.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_98.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_98.Scale3D.ZW.m128d_f64[1];
  return;
}

// execFindUpVectorClosestToWorldLocation @ 1479f95e0

void __cdecl
USplineComponent::execFindUpVectorClosestToWorldLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  TVector<double> *pTVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  char local_res10 [8];
  TVector<double> local_b8;
  TQuat<double> local_98 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res10[0] = '\0';
  pTVar7 = &local_b8;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar7 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar8 = FindInputKeyClosestToWorldLocation((USplineComponent *)param_1,pTVar7);
  GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_98,fVar8,Local);
  dVar4 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_98[0].Y -
          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_98[0].Z;
  dVar4 = dVar4 + dVar4;
  dVar19 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_98[0].Z -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_98[0].X;
  dVar19 = dVar19 + dVar19;
  dVar18 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_98[0].X -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_98[0].Y;
  dVar18 = dVar18 + dVar18;
  dVar11 = (dVar18 * local_98[0].Y - dVar19 * local_98[0].Z) +
           local_98[0].W * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar12 = (dVar4 * local_98[0].Z - dVar18 * local_98[0].X) +
           local_98[0].W * dVar19 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar19 = (dVar19 * local_98[0].X - dVar4 * local_98[0].Y) +
           local_98[0].W * dVar18 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if (cVar6 == '\x01') {
    auVar10 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    auVar21._8_8_ = dVar12;
    auVar21._0_8_ = dVar11;
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar5 = *(double *)(param_1 + 0xd);
    dVar4 = auVar10._0_8_;
    auVar13 = blendpd(auVar9,auVar10,2);
    auVar20._0_8_ = dVar12 * auVar9._0_8_ - auVar9._8_8_ * dVar11;
    auVar20._8_8_ = dVar19 * auVar9._8_8_ - dVar4 * dVar12;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar19;
    auVar9 = blendpd(auVar21,auVar9,2);
    auVar14._0_8_ = auVar9._0_8_ * dVar4 - auVar13._0_8_ * dVar19;
    auVar14._8_8_ = auVar9._8_8_ * auVar10._8_8_ - auVar13._8_8_ * 0.0;
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21 = blendpd(auVar20,auVar14,2);
    dVar18 = auVar20._8_8_ + auVar20._8_8_;
    dVar3 = auVar14._0_8_ + auVar14._0_8_;
    uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    auVar16._8_4_ = SUB84(dVar3,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = uVar23;
    auVar13._8_4_ = SUB84(dVar3,0);
    auVar13._0_8_ = dVar18;
    auVar13._12_4_ = uVar23;
    auVar14 = blendpd(auVar13,auVar22,2);
    auVar21 = blendpd(auVar9,auVar10,2);
    auVar17._0_8_ = auVar16._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar18;
    auVar17._8_8_ = auVar22._0_8_ * auVar9._8_8_ - dVar4 * dVar3;
    auVar15._0_8_ = auVar14._0_8_ * dVar4 - auVar21._0_8_ * auVar22._0_8_;
    auVar15._8_8_ = auVar14._8_8_ * auVar10._8_8_ - auVar21._8_8_ * auVar22._8_8_;
    auVar10._8_4_ = SUB84(auVar17._8_8_,0);
    auVar10._0_8_ = auVar17._0_8_;
    auVar10._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
    auVar9 = blendpd(auVar17,auVar15,2);
    dVar19 = auVar22._0_8_ * dVar5 + dVar19 + auVar9._0_8_;
    dVar11 = dVar18 * dVar5 + dVar11 + auVar10._8_8_;
    dVar12 = dVar3 * dVar5 + dVar12 + auVar15._0_8_;
  }
  auVar2._8_4_ = SUB84(dVar12,0);
  auVar2._0_8_ = dVar11;
  auVar2._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar19;
  return;
}

// execGetArriveTangentAtSplinePoint @ 1479f9930

void __cdecl
USplineComponent::execGetArriveTangentAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  char cVar13;
  int iVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  TVector<double>_u_0 *pTVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  char local_res10 [8];
  int local_res18 [2];
  TVector<double>_u_0 local_b8 [2];
  TVector<double> local_88 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar14 = local_res18[0];
  cVar13 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar15 = FSpline::IsEnabledStatic(), bVar15)) {
    iVar16 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
  }
  else {
    iVar16 = *(int *)(param_1 + 0x24);
  }
  uVar20 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  uVar11 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  if (iVar16 != 0) {
    uVar17 = GetClampedIndex((USplineComponent *)param_1,iVar14);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar15 = FSpline::IsEnabledStatic(), bVar15)) {
      pTVar18 = &FSpline::GetInTangent((FSpline *)&param_1[0x21].field_0x20,local_88,uVar17)->
                 field0_0x0;
    }
    else {
      uVar19 = 0;
      if ((int)uVar17 < *(int *)(param_1 + 0x24)) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pdVar1 = (double *)
               ((longlong)(int)uVar17 * 0x58 + 0x20 + *(longlong *)&param_1[0x23].field_0x20);
      pTVar18 = local_b8;
      local_b8[0]._s_0.X = *pdVar1;
      local_b8[0]._s_0.Y = pdVar1[1];
      local_b8[0]._s_0.Z =
           *(double *)((longlong)(int)uVar17 * 0x58 + 0x30 + *(longlong *)&param_1[0x23].field_0x20)
      ;
    }
    uVar10 = (((TVector<double>_u_0 *)&(pTVar18->_s_0).X)->_s_0).X;
    if (cVar13 == '\x01') {
      auVar28 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      dVar12 = *(double *)(param_1 + 0xd);
      dVar5 = *(double *)(param_1 + 0xe) * (double)uVar10;
      dVar6 = *(double *)&param_1[0xe].field_0x8 * (pTVar18->_s_0).Y;
      uVar33 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar29._8_4_ = SUB84(dVar6,0);
      auVar29._0_8_ = dVar5;
      auVar29._12_4_ = uVar33;
      dVar7 = (pTVar18->_s_0).Z * *(double *)&param_1[0xe].field_0x10;
      dVar8 = *(double *)&param_1[0xe].field_0x18 * 0.0;
      auVar23 = blendpd(auVar21,auVar28,2);
      dVar4 = auVar28._0_8_;
      auVar30._0_8_ = auVar29._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar5;
      auVar30._8_8_ = dVar7 * auVar21._8_8_ - dVar4 * dVar6;
      auVar31._8_4_ = SUB84(dVar6,0);
      auVar31._0_8_ = dVar5;
      auVar31._12_4_ = uVar33;
      auVar21._8_4_ = SUB84(dVar8,0);
      auVar21._0_8_ = dVar7;
      auVar21._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar21 = blendpd(auVar31,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar4 - auVar23._0_8_ * dVar7;
      auVar22._8_8_ = auVar21._8_8_ * auVar28._8_8_ - auVar23._8_8_ * dVar8;
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar31 = blendpd(auVar30,auVar22,2);
      auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      dVar8 = auVar30._8_8_ + auVar30._8_8_;
      dVar9 = auVar22._0_8_ + auVar22._0_8_;
      uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar26._8_4_ = SUB84(dVar9,0);
      auVar26._0_8_ = dVar8;
      auVar26._12_4_ = uVar33;
      auVar24._8_4_ = SUB84(dVar9,0);
      auVar24._0_8_ = dVar8;
      auVar24._12_4_ = uVar33;
      auVar31 = blendpd(auVar24,auVar32,2);
      auVar27._0_8_ = auVar26._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar8;
      auVar27._8_8_ = auVar32._0_8_ * auVar21._8_8_ - dVar4 * dVar9;
      auVar23._8_4_ = SUB84(auVar27._8_8_,0);
      auVar23._0_8_ = auVar27._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
      auVar21 = blendpd(auVar21,auVar28,2);
      auVar25._0_8_ = auVar31._0_8_ * dVar4 - auVar21._0_8_ * auVar32._0_8_;
      auVar25._8_8_ = auVar31._8_8_ * auVar28._8_8_ - auVar21._8_8_ * auVar32._8_8_;
      auVar28 = blendpd(auVar27,auVar25,2);
      uVar20 = auVar32._0_8_ * dVar12 + dVar7 + auVar28._0_8_;
      uVar10 = dVar8 * dVar12 + dVar5 + auVar23._8_8_;
      uVar11 = dVar9 * dVar12 + dVar6 + auVar25._0_8_;
    }
    else {
      uVar20 = (pTVar18->_s_0).Z;
      uVar11 = (pTVar18->_s_0).Y;
    }
  }
  auVar28._8_4_ = (int)uVar11;
  auVar28._0_8_ = uVar10;
  auVar28._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar28;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar20;
  return;
}

// execGetDefaultUpVector @ 1479f9f90

void __cdecl
USplineComponent::execGetDefaultUpVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  char local_res10 [8];
  
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\x01') {
    auVar15 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar7 = *(double *)(param_1 + 0xd);
    dVar2 = *(double *)&param_1[0x29].field_0x18 * *(double *)(param_1 + 0xe);
    dVar3 = *(double *)&param_1[0x29].field_0x20 * *(double *)&param_1[0xe].field_0x8;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar4 = *(double *)(param_1 + 0x2a) * *(double *)&param_1[0xe].field_0x10;
    dVar5 = *(double *)&param_1[0xe].field_0x18 * 0.0;
    auVar10 = blendpd(auVar8,auVar15,2);
    auVar17._8_4_ = SUB84(dVar3,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar21;
    dVar16 = auVar15._0_8_;
    auVar18._0_8_ = auVar17._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar2;
    auVar18._8_8_ = dVar4 * auVar8._8_8_ - dVar16 * dVar3;
    auVar19._8_4_ = SUB84(dVar3,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar21;
    auVar8._8_4_ = SUB84(dVar5,0);
    auVar8._0_8_ = dVar4;
    auVar8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar8 = blendpd(auVar19,auVar8,2);
    auVar9._0_8_ = auVar8._0_8_ * dVar16 - auVar10._0_8_ * dVar4;
    auVar9._8_8_ = auVar8._8_8_ * auVar15._8_8_ - auVar10._8_8_ * dVar5;
    auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar19 = blendpd(auVar18,auVar9,2);
    auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    dVar5 = auVar18._8_8_ + auVar18._8_8_;
    dVar6 = auVar9._0_8_ + auVar9._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar13._8_4_ = SUB84(dVar6,0);
    auVar13._0_8_ = dVar5;
    auVar13._12_4_ = uVar21;
    auVar11._8_4_ = SUB84(dVar6,0);
    auVar11._0_8_ = dVar5;
    auVar11._12_4_ = uVar21;
    auVar19 = blendpd(auVar11,auVar20,2);
    auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar5;
    auVar14._8_8_ = auVar20._0_8_ * auVar8._8_8_ - dVar16 * dVar6;
    auVar10._8_4_ = SUB84(auVar14._8_8_,0);
    auVar10._0_8_ = auVar14._0_8_;
    auVar10._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    auVar8 = blendpd(auVar8,auVar15,2);
    auVar12._0_8_ = auVar19._0_8_ * dVar16 - auVar8._0_8_ * auVar20._0_8_;
    auVar12._8_8_ = auVar19._8_8_ * auVar15._8_8_ - auVar8._8_8_ * auVar20._8_8_;
    auVar15 = blendpd(auVar14,auVar12,2);
    dVar16 = auVar20._0_8_ * dVar7 + dVar4 + auVar15._0_8_;
    dVar2 = dVar5 * dVar7 + dVar2 + auVar10._8_8_;
    dVar3 = dVar6 * dVar7 + dVar3 + auVar12._0_8_;
  }
  else {
    dVar2 = *(double *)&param_1[0x29].field_0x18;
    dVar3 = *(double *)&param_1[0x29].field_0x20;
    dVar16 = *(double *)(param_1 + 0x2a);
  }
  auVar15._8_4_ = SUB84(dVar3,0);
  auVar15._0_8_ = dVar2;
  auVar15._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar15;
  *(double *)((longlong)param_3 + 0x10) = dVar16;
  return;
}

// execGetDirectionAtDistanceAlongSpline @ 1479fa1d0

void __cdecl
USplineComponent::execGetDirectionAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [12];
  double dVar6;
  char cVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  char local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  double local_d8;
  double dStack_d0;
  double local_c8;
  TVector<double> local_c0;
  TVector<double> local_a8 [5];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar10 = local_res18[0];
  cVar7 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar8 = FSpline::IsEnabledStatic();
    if (!bVar8) goto LAB_1479fa2bb;
    fVar10 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar10);
  }
  else {
LAB_1479fa2bb:
    local_res20[0] = 0.0;
    fVar10 = FInterpCurve<float>::Eval
                       ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar10,local_res20);
  }
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar8 = FSpline::IsEnabledStatic();
    if (bVar8) {
      pTVar9 = FSpline::EvaluateDerivative((FSpline *)&param_1[0x21].field_0x20,&local_c0,fVar10);
      goto LAB_1479fa32b;
    }
  }
  pTVar9 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                     ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1[0x23].field_0x20,local_a8
                      ,fVar10,&UE::Math::TVector<double>::ZeroVector);
LAB_1479fa32b:
  local_d8 = (pTVar9->field0_0x0)._s_0.X;
  dStack_d0 = (pTVar9->field0_0x0)._s_0.Y;
  local_c8 = (pTVar9->field0_0x0)._s_0.Z;
  dVar13 = dStack_d0 * dStack_d0 + local_d8 * local_d8 + local_c8 * local_c8;
  if (dVar13 == __real_3ff0000000000000) {
    local_d8 = (pTVar9->field0_0x0)._s_0.X;
    dStack_d0 = *(double *)((longlong)&pTVar9->field0_0x0 + 8);
    local_c8 = (pTVar9->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar13) {
    dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
    local_d8 = local_d8 * dVar13;
    local_c8 = local_c8 * dVar13;
    dStack_d0 = dStack_d0 * dVar13;
  }
  else {
    local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  if (cVar7 == '\x01') {
    auVar19 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    dVar6 = *(double *)(param_1 + 0xd);
    local_d8 = *(double *)(param_1 + 0xe) * local_d8;
    dStack_d0 = *(double *)&param_1[0xe].field_0x8 * dStack_d0;
    uVar25 = (undefined4)((ulonglong)dStack_d0 >> 0x20);
    local_c8 = local_c8 * *(double *)&param_1[0xe].field_0x10;
    dVar2 = *(double *)&param_1[0xe].field_0x18 * 0.0;
    auVar11 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21._8_4_ = SUB84(dStack_d0,0);
    auVar21._0_8_ = local_d8;
    auVar21._12_4_ = uVar25;
    dVar13 = auVar19._0_8_;
    auVar14 = blendpd(auVar11,auVar19,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar11._0_8_ - auVar11._8_8_ * local_d8;
    auVar22._8_8_ = local_c8 * auVar11._8_8_ - dVar13 * dStack_d0;
    auVar23._8_4_ = SUB84(dStack_d0,0);
    auVar23._0_8_ = local_d8;
    auVar23._12_4_ = uVar25;
    auVar11._8_4_ = SUB84(dVar2,0);
    auVar11._0_8_ = local_c8;
    auVar11._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar11 = blendpd(auVar23,auVar11,2);
    auVar12._0_8_ = auVar11._0_8_ * dVar13 - auVar14._0_8_ * local_c8;
    auVar12._8_8_ = auVar11._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar2;
    auVar11 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar23 = blendpd(auVar22,auVar12,2);
    dVar2 = auVar22._8_8_ + auVar22._8_8_;
    dVar4 = auVar12._0_8_ + auVar12._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar17._8_4_ = SUB84(dVar4,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar25;
    auVar15._8_4_ = SUB84(dVar4,0);
    auVar15._0_8_ = dVar2;
    auVar15._12_4_ = uVar25;
    auVar23 = blendpd(auVar15,auVar24,2);
    auVar18._0_8_ = auVar17._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar2;
    auVar18._8_8_ = auVar24._0_8_ * auVar11._8_8_ - dVar13 * dVar4;
    auVar11 = blendpd(auVar11,auVar19,2);
    auVar14._8_4_ = SUB84(auVar18._8_8_,0);
    auVar14._0_8_ = auVar18._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
    auVar16._0_8_ = auVar23._0_8_ * dVar13 - auVar11._0_8_ * auVar24._0_8_;
    auVar16._8_8_ = auVar23._8_8_ * auVar19._8_8_ - auVar11._8_8_ * auVar24._8_8_;
    auVar19 = blendpd(auVar18,auVar16,2);
    local_d8 = dVar2 * dVar6 + local_d8 + auVar14._8_8_;
    dStack_d0 = dVar4 * dVar6 + dStack_d0 + auVar16._0_8_;
    uVar25 = (undefined4)((ulonglong)dStack_d0 >> 0x20);
    local_c8 = auVar24._0_8_ * dVar6 + local_c8 + auVar19._0_8_;
    auVar5._4_8_ = auVar19._8_8_;
    auVar5._0_4_ = (int)((ulonglong)local_d8 >> 0x20);
    auVar20._0_8_ = auVar5._0_8_ << 0x20;
    auVar20._8_4_ = SUB84(dStack_d0,0);
    auVar20._12_4_ = uVar25;
    auVar19._8_4_ = SUB84(dStack_d0,0);
    auVar19._0_8_ = local_d8;
    auVar19._12_4_ = uVar25;
    dVar13 = auVar20._8_8_ * auVar20._8_8_ + local_d8 * local_d8 + local_c8 * local_c8;
    if (__real_3e45798ee0000000 < dVar13) {
      dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
      dStack_d0 = auVar19._8_8_;
      local_d8 = local_d8 * dVar13;
      dStack_d0 = dStack_d0 * dVar13;
      local_c8 = local_c8 * dVar13;
    }
  }
  auVar3._8_4_ = SUB84(dStack_d0,0);
  auVar3._0_8_ = local_d8;
  auVar3._12_4_ = (int)((ulonglong)dStack_d0 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar3;
  *(double *)((longlong)param_3 + 0x10) = local_c8;
  return;
}

// execGetDirectionAtSplineInputKey @ 1479fa5c0

void __cdecl
USplineComponent::execGetDirectionAtSplineInputKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  byte local_res10 [8];
  float local_res18 [2];
  TVector<double> local_28;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetDirectionAtSplineInputKey
                     ((USplineComponent *)param_1,&local_28,local_res18[0],(uint)local_res10[0]);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetDirectionAtSplinePoint @ 1479fa6b0

void __cdecl
USplineComponent::execGetDirectionAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined8 uVar12;
  double dVar13;
  char cVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  TVector<double>_u_0 *pTVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM4 [16];
  undefined8 uVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  char local_res10 [8];
  int local_res18 [4];
  TVector<double>_u_0 local_c8 [2];
  TVector<double> local_98 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar15 = local_res18[0];
  cVar14 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar16 = FSpline::IsEnabledStatic(), bVar16)) {
    iVar17 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x24);
  }
  uVar30 = in_XMM4._8_8_;
  uVar8 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  uVar10 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  uVar32 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  if (iVar17 != 0) {
    uVar18 = GetClampedIndex((USplineComponent *)param_1,iVar15);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar16 = FSpline::IsEnabledStatic(), bVar16)) {
      pTVar19 = &FSpline::GetOutTangent((FSpline *)&param_1[0x21].field_0x20,local_98,uVar18)->
                 field0_0x0;
    }
    else {
      uVar20 = 0;
      if ((int)uVar18 < *(int *)(param_1 + 0x24)) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pdVar1 = (double *)
               ((longlong)(int)uVar18 * 0x58 + 0x38 + *(longlong *)&param_1[0x23].field_0x20);
      pTVar19 = local_c8;
      local_c8[0]._s_0.X = *pdVar1;
      local_c8[0]._s_0.Y = pdVar1[1];
      local_c8[0]._s_0.Z =
           *(double *)((longlong)(int)uVar18 * 0x58 + 0x48 + *(longlong *)&param_1[0x23].field_0x20)
      ;
    }
    uVar8 = (((TVector<double>_u_0 *)&(pTVar19->_s_0).X)->_s_0).X;
    uVar10 = (pTVar19->_s_0).Y;
    if (cVar14 == '\x01') {
      auVar29 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      dVar13 = *(double *)(param_1 + 0xd);
      dVar31 = *(double *)(param_1 + 0xe) * (double)uVar8;
      dVar4 = *(double *)&param_1[0xe].field_0x8 * (double)uVar10;
      uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar33._8_4_ = SUB84(dVar4,0);
      auVar33._0_8_ = dVar31;
      auVar33._12_4_ = uVar37;
      dVar5 = (pTVar19->_s_0).Z * *(double *)&param_1[0xe].field_0x10;
      dVar6 = *(double *)&param_1[0xe].field_0x18 * 0.0;
      auVar23 = blendpd(auVar21,auVar29,2);
      dVar22 = auVar29._0_8_;
      auVar34._0_8_ = auVar33._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar31;
      auVar34._8_8_ = dVar5 * auVar21._8_8_ - dVar22 * dVar4;
      auVar35._8_4_ = SUB84(dVar4,0);
      auVar35._0_8_ = dVar31;
      auVar35._12_4_ = uVar37;
      auVar21._8_4_ = SUB84(dVar6,0);
      auVar21._0_8_ = dVar5;
      auVar21._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar21 = blendpd(auVar35,auVar21,2);
      auVar25._0_8_ = auVar21._0_8_ * dVar22 - auVar23._0_8_ * dVar5;
      auVar25._8_8_ = auVar21._8_8_ * auVar29._8_8_ - auVar23._8_8_ * dVar6;
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar35 = blendpd(auVar34,auVar25,2);
      auVar36._0_8_ = auVar35._0_8_ + auVar35._0_8_;
      auVar36._8_8_ = auVar35._8_8_ + auVar35._8_8_;
      dVar6 = auVar34._8_8_ + auVar34._8_8_;
      dVar9 = auVar25._0_8_ + auVar25._0_8_;
      uVar37 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar27._8_4_ = SUB84(dVar9,0);
      auVar27._0_8_ = dVar6;
      auVar27._12_4_ = uVar37;
      auVar24._8_4_ = SUB84(dVar9,0);
      auVar24._0_8_ = dVar6;
      auVar24._12_4_ = uVar37;
      auVar25 = blendpd(auVar24,auVar36,2);
      auVar35 = blendpd(auVar21,auVar29,2);
      auVar28._0_8_ = auVar27._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar6;
      auVar28._8_8_ = auVar36._0_8_ * auVar21._8_8_ - dVar22 * dVar9;
      auVar23._8_4_ = SUB84(auVar28._8_8_,0);
      auVar23._0_8_ = auVar28._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
      auVar26._0_8_ = auVar25._0_8_ * dVar22 - auVar35._0_8_ * auVar36._0_8_;
      auVar26._8_8_ = auVar25._8_8_ * auVar29._8_8_ - auVar35._8_8_ * auVar36._8_8_;
      in_XMM4 = blendpd(auVar28,auVar26,2);
      uVar32 = auVar36._0_8_ * dVar13 + dVar5 + in_XMM4._0_8_;
      uVar8 = dVar6 * dVar13 + dVar31 + auVar23._8_8_;
      uVar10 = dVar9 * dVar13 + dVar4 + auVar26._0_8_;
    }
    else {
      uVar32 = (pTVar19->_s_0).Z;
    }
    uVar30 = in_XMM4._8_8_;
  }
  auVar11._4_8_ = uVar30;
  auVar11._0_4_ = (int)((ulonglong)uVar8 >> 0x20);
  auVar29._0_8_ = auVar11._0_8_ << 0x20;
  auVar29._8_4_ = (int)uVar10;
  auVar29._12_4_ = (int)((ulonglong)uVar10 >> 0x20);
  dVar31 = auVar29._8_8_;
  dVar22 = dVar31 * dVar31 + (double)uVar8 * (double)uVar8 + (double)uVar32 * (double)uVar32;
  uVar30 = uVar8;
  uVar12 = uVar32;
  if ((dVar22 != __real_3ff0000000000000) &&
     (uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar22)) {
    dVar22 = __real_3ff0000000000000 / SQRT(dVar22);
    uVar30 = (double)uVar8 * dVar22;
    uVar10 = dVar31 * dVar22;
    uVar12 = (double)uVar32 * dVar22;
  }
  auVar7._8_4_ = (int)uVar10;
  auVar7._0_8_ = uVar30;
  auVar7._12_4_ = (int)((ulonglong)uVar10 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar7;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar12;
  return;
}

// execGetDirectionAtTime @ 1479faac0

void __cdecl
USplineComponent::execGetDirectionAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  byte local_res10 [8];
  int local_res18 [2];
  float local_res20 [2];
  TVector<double> local_38;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetDirectionAtTime((USplineComponent *)param_1,&local_38,local_res20[0],
                              (uint)local_res10[0],local_res18[0] != 0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetDistanceAlongSplineAtLocation @ 1479fac10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USplineComponent::execGetDistanceAlongSplineAtLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  char local_f8 [4];
  float local_f4;
  TVector<double>_u_0 local_f0;
  double local_d8 [22];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_f8[0] = '\0';
  pdVar11 = local_d8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f8[0] == '\x01') {
    dVar2 = *(double *)&param_1[0xc].field_0x10 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar3 = *(double *)&param_1[0xc].field_0x18 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar4 = *(double *)&param_1[0xc].field_0x20 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar5 = *(double *)(param_1 + 0xd) *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar16 = pdVar11[2] - *(double *)&param_1[0xd].field_0x18;
    auVar24._8_4_ = SUB84(dVar3,0);
    auVar24._0_8_ = dVar2;
    auVar24._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar22._8_4_ = SUB84(dVar5,0);
    auVar22._0_8_ = dVar4;
    auVar22._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar25 = blendpd(auVar24,auVar22,2);
    dVar8 = *pdVar11 - *(double *)&param_1[0xd].field_0x8;
    dVar9 = pdVar11[1] - *(double *)&param_1[0xd].field_0x10;
    uVar31 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar35._8_4_ = SUB84(dVar9,0);
    auVar35._0_8_ = dVar8;
    auVar35._12_4_ = uVar31;
    auVar17._8_4_ = SUB84(dVar4,0);
    auVar17._0_8_ = dVar3;
    auVar17._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar21._8_4_ = SUB84(dVar9,0);
    auVar21._0_8_ = dVar8;
    auVar21._12_4_ = uVar31;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = dVar16;
    auVar22 = blendpd(auVar21,auVar29,2);
    auVar36._0_8_ = auVar35._8_8_ * dVar2 - dVar3 * dVar8;
    auVar36._8_8_ = dVar16 * dVar3 - auVar17._8_8_ * dVar9;
    auVar23._0_8_ = auVar22._0_8_ * dVar4 - auVar25._0_8_ * dVar16;
    auVar23._8_8_ = auVar22._8_8_ * dVar5 - auVar25._8_8_ * 0.0;
    dVar6 = auVar36._8_8_ + auVar36._8_8_;
    dVar7 = auVar23._0_8_ + auVar23._0_8_;
    uVar31 = SUB84(dVar7,0);
    uVar32 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar22 = blendpd(auVar36,auVar23,2);
    auVar33._8_4_ = uVar31;
    auVar33._0_8_ = dVar6;
    auVar33._12_4_ = uVar32;
    auVar18._8_4_ = uVar31;
    auVar18._0_8_ = dVar6;
    auVar18._12_4_ = uVar32;
    auVar28._8_4_ = uVar31;
    auVar28._0_8_ = dVar6;
    auVar28._12_4_ = uVar32;
    auVar37._0_8_ = auVar22._0_8_ + auVar22._0_8_;
    auVar37._8_8_ = auVar22._8_8_ + auVar22._8_8_;
    auVar22 = *(undefined1 (*) [16])(param_1 + 0xe);
    auVar34._0_8_ = auVar33._8_8_ * dVar2 - dVar6 * dVar3;
    auVar34._8_8_ = auVar37._0_8_ * dVar3 - auVar18._8_8_ * dVar4;
    auVar29 = blendpd(auVar28,auVar37,2);
    auVar19._8_4_ = SUB84(auVar37._8_8_,0);
    auVar19._0_8_ = auVar37._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
    auVar30._0_8_ = auVar29._0_8_ * dVar4 - auVar37._0_8_ * auVar25._0_8_;
    auVar30._8_8_ = auVar29._8_8_ * dVar5 - auVar19._8_8_ * auVar25._8_8_;
    auVar29 = *(undefined1 (*) [16])&param_1[0xe].field_0x10;
    lVar12 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar29._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar29._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar26._0_8_ =
         (double)CONCAT44(auVar22._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar22._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar26._8_4_ = auVar22._8_4_ & _UNK_15061cc88;
    auVar26._12_4_ = auVar22._12_4_ & _UNK_15061cc8c;
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
    lVar13 = -(ulonglong)(auVar26._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar14 = -(ulonglong)(auVar26._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar27._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar22._4_4_,
                          ~(uint)lVar13 & auVar22._0_4_);
    auVar27._8_4_ = ~(uint)lVar14 & auVar22._8_4_;
    auVar27._12_4_ = ~(uint)((ulonglong)lVar14 >> 0x20) & auVar22._12_4_;
    auVar20._8_4_ = SUB84(auVar34._8_8_,0);
    auVar20._0_8_ = auVar34._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
    local_f0._s_0.X = auVar27._0_8_ * (dVar6 * dVar5 + dVar8 + auVar20._8_8_);
    local_f0._s_0.Y = auVar27._8_8_ * (dVar7 * dVar5 + dVar9 + auVar30._0_8_);
    auVar25._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar25._0_8_ = auVar29._0_8_;
    auVar25._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
    auVar29 = blendpd(auVar34,auVar30,2);
    local_f0._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar22._4_4_,
                          ~(uint)lVar12 & auVar22._0_4_) *
         (auVar37._0_8_ * dVar5 + dVar16 + auVar29._0_8_);
  }
  else {
    local_f0._s_0.X = *pdVar11;
    local_f0._s_0.Y = pdVar11[1];
    local_f0._s_0.Z = pdVar11[2];
  }
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar10 = FSpline::IsEnabledStatic();
    if (bVar10) {
      fVar15 = FSpline::FindNearest
                         ((FSpline *)&param_1[0x21].field_0x20,(TVector<double> *)&local_f0._s_0,
                          &local_f4);
      goto LAB_1479faf72;
    }
  }
  fVar15 = FInterpCurve<UE::Math::TVector<double>_>::FindNearest
                     ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1[0x23].field_0x20,
                      (TVector<double> *)&local_f0._s_0,&local_f4);
LAB_1479faf72:
  fVar15 = GetDistanceAlongSplineAtSplineInputKey((USplineComponent *)param_1,fVar15);
  *(float *)param_3 = fVar15;
  return;
}

// execGetDistanceAlongSplineAtSplineInputKey @ 1479fafa0

void __cdecl
USplineComponent::execGetDistanceAlongSplineAtSplineInputKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetDistanceAlongSplineAtSplineInputKey((USplineComponent *)param_1,local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetDistanceAlongSplineAtSplinePoint @ 1479fb040

void __cdecl
USplineComponent::execGetDistanceAlongSplineAtSplinePoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetDistanceAlongSplineAtSplinePoint((USplineComponent *)param_1,local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetFloatPropertyAtIndex @ 1479fb360

void __cdecl
USplineComponent::execGetFloatPropertyAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int local_res8 [2];
  FName local_res10;
  FName local_res18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  if ((UE::SplineComponent::GUseSplineCurves == false) && (param_1[0x21].field_0x20 == '\x02')) {
    fVar2 = FSpline::GetAttributeValue<float>
                      ((FSpline *)&param_1[0x21].field_0x20,local_res8[0],&local_res18);
    *(float *)param_3 = fVar2;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetFloatPropertyAtSplineInputKey @ 1479fb460

void __cdecl
USplineComponent::execGetFloatPropertyAtSplineInputKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  UObject *pUVar3;
  FProperty *pFVar4;
  FInterpCurve<float> *this;
  float fVar5;
  float local_res8 [2];
  float local_res10 [2];
  FName local_res18 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FVar1 = local_res18[0];
  fVar5 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = (UObject *)(**(code **)(*(longlong *)param_1 + 0xa90))(param_1);
  if ((pUVar3 != (UObject *)0x0) &&
     (pFVar4 = UStruct::FindPropertyByName(*(UStruct **)&pUVar3->field_0x10,FVar1),
     pFVar4 != (FProperty *)0x0)) {
    this = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar4,pUVar3,0);
    local_res10[0] = 0.0;
    fVar5 = FInterpCurve<float>::Eval(this,fVar5,local_res10);
    *(float *)param_3 = fVar5;
    return;
  }
  if (((UE::SplineComponent::GUseSplineCurves == false) && (param_1[0x21].field_0x20 == '\x02')) &&
     (bVar2 = FSpline::HasAttributeChannel((FSpline *)&param_1[0x21].field_0x20,FVar1), bVar2)) {
    fVar5 = FSpline::EvaluateAttribute<float>((FSpline *)&param_1[0x21].field_0x20,fVar5,FVar1);
    *(float *)param_3 = fVar5;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetFloatPropertyAtSplinePoint @ 1479fb5e0

void __cdecl
USplineComponent::execGetFloatPropertyAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *pUVar5;
  FProperty *pFVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_res8 [2];
  FName local_res10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res10;
  uVar9 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = (UObject *)(**(code **)(*(longlong *)param_1 + 0xa90))(param_1);
  if (pUVar5 != (UObject *)0x0) {
    pFVar6 = UStruct::FindPropertyByName(*(UStruct **)&pUVar5->field_0x10,FVar3);
    if (pFVar6 != (FProperty *)0x0) {
      plVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar6,pUVar5,0);
      iVar1 = (int)plVar7[1];
      if (0 < iVar1) {
        uVar8 = iVar1 - 1U;
        if ((int)uVar9 < (int)(iVar1 - 1U)) {
          uVar8 = uVar9;
        }
        uVar9 = 0;
        if (0 < (int)uVar8) {
          uVar9 = uVar8;
        }
        uVar8 = 0;
        if ((int)uVar9 < iVar1) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar10 = *(undefined4 *)(*plVar7 + 4 + (longlong)(int)uVar9 * 0x14);
        goto LAB_1479fb743;
      }
    }
  }
  uVar10 = 0;
LAB_1479fb743:
  *(undefined4 *)param_3 = uVar10;
  return;
}

// execGetFloatPropertyChannels @ 1479fb770

void __cdecl
USplineComponent::execGetFloatPropertyChannels(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar1 = FSpline::IsEnabledStatic();
    if ((bVar1) && (param_1[0x21].field_0x20 == '\x02')) {
      FSpline::GetFloatPropertyChannels((FSpline *)&param_1[0x21].field_0x20,&local_18);
      goto LAB_1479fb7d6;
    }
  }
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_1479fb7d6:
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetFloatPropertyInputKeyAtIndex @ 1479fb840

void __cdecl
USplineComponent::execGetFloatPropertyInputKeyAtIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int local_res8 [2];
  FName local_res10;
  FName local_res18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  if ((UE::SplineComponent::GUseSplineCurves == false) && (param_1[0x21].field_0x20 == '\x02')) {
    fVar2 = FSpline::GetAttributeParameter<float>
                      ((FSpline *)&param_1[0x21].field_0x20,local_res8[0],&local_res18);
    *(float *)param_3 = fVar2;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetInputKeyAtDistanceAlongSpline @ 1479fb9a0

void __cdecl
USplineComponent::execGetInputKeyAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetTimeAtDistanceAlongSpline((USplineComponent *)param_1,local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetInputKeyValueAtDistanceAlongSpline @ 1479fba40

void __cdecl
USplineComponent::execGetInputKeyValueAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float local_res10 [2];
  float local_res18 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
    iVar3 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x24);
  }
  if (1 < iVar3) {
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
      fVar4 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar4);
    }
    else {
      local_res18[0] = 0.0;
      fVar4 = FInterpCurve<float>::Eval
                        ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar4,local_res18);
    }
    *(float *)param_3 = fVar4;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetInputKeyValueAtSplinePoint @ 1479fbb60

void __cdecl
USplineComponent::execGetInputKeyValueAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetInputKeyValueAtSplinePoint((USplineComponent *)param_1,local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetInputKeyValueAtTime @ 1479fbc00

void __cdecl
USplineComponent::execGetInputKeyValueAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  TInterval1<float> TVar3;
  float fVar4;
  float local_res8 [4];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&param_1[0x26].field_0x14;
  if (fVar1 <= 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = fVar1;
    if (local_res8[0] <= fVar1) {
      fVar4 = local_res8[0];
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar4 = fVar4 / fVar1;
  }
  TVar3 = GetInputKeyRange((USplineComponent *)param_1);
  *(float *)param_3 =
       (__real_3f800000 - fVar4) * *(float *)TVar3 + fVar4 * *(float *)((longlong)TVar3 + 4);
  return;
}

// execGetLeaveTangentAtSplinePoint @ 1479fbcf0

void __cdecl
USplineComponent::execGetLeaveTangentAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  char cVar13;
  int iVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  TVector<double>_u_0 *pTVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  char local_res10 [8];
  int local_res18 [2];
  TVector<double>_u_0 local_b8 [2];
  TVector<double> local_88 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar14 = local_res18[0];
  cVar13 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar15 = FSpline::IsEnabledStatic(), bVar15)) {
    iVar16 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
  }
  else {
    iVar16 = *(int *)(param_1 + 0x24);
  }
  uVar20 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  uVar11 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  if (iVar16 != 0) {
    uVar17 = GetClampedIndex((USplineComponent *)param_1,iVar14);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar15 = FSpline::IsEnabledStatic(), bVar15)) {
      pTVar18 = &FSpline::GetOutTangent((FSpline *)&param_1[0x21].field_0x20,local_88,uVar17)->
                 field0_0x0;
    }
    else {
      uVar19 = 0;
      if ((int)uVar17 < *(int *)(param_1 + 0x24)) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pdVar1 = (double *)
               ((longlong)(int)uVar17 * 0x58 + 0x38 + *(longlong *)&param_1[0x23].field_0x20);
      pTVar18 = local_b8;
      local_b8[0]._s_0.X = *pdVar1;
      local_b8[0]._s_0.Y = pdVar1[1];
      local_b8[0]._s_0.Z =
           *(double *)((longlong)(int)uVar17 * 0x58 + 0x48 + *(longlong *)&param_1[0x23].field_0x20)
      ;
    }
    uVar10 = (((TVector<double>_u_0 *)&(pTVar18->_s_0).X)->_s_0).X;
    if (cVar13 == '\x01') {
      auVar28 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      dVar12 = *(double *)(param_1 + 0xd);
      dVar5 = *(double *)(param_1 + 0xe) * (double)uVar10;
      dVar6 = *(double *)&param_1[0xe].field_0x8 * (pTVar18->_s_0).Y;
      uVar33 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar29._8_4_ = SUB84(dVar6,0);
      auVar29._0_8_ = dVar5;
      auVar29._12_4_ = uVar33;
      dVar7 = (pTVar18->_s_0).Z * *(double *)&param_1[0xe].field_0x10;
      dVar8 = *(double *)&param_1[0xe].field_0x18 * 0.0;
      auVar23 = blendpd(auVar21,auVar28,2);
      dVar4 = auVar28._0_8_;
      auVar30._0_8_ = auVar29._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar5;
      auVar30._8_8_ = dVar7 * auVar21._8_8_ - dVar4 * dVar6;
      auVar31._8_4_ = SUB84(dVar6,0);
      auVar31._0_8_ = dVar5;
      auVar31._12_4_ = uVar33;
      auVar21._8_4_ = SUB84(dVar8,0);
      auVar21._0_8_ = dVar7;
      auVar21._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar21 = blendpd(auVar31,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar4 - auVar23._0_8_ * dVar7;
      auVar22._8_8_ = auVar21._8_8_ * auVar28._8_8_ - auVar23._8_8_ * dVar8;
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar31 = blendpd(auVar30,auVar22,2);
      auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      dVar8 = auVar30._8_8_ + auVar30._8_8_;
      dVar9 = auVar22._0_8_ + auVar22._0_8_;
      uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar26._8_4_ = SUB84(dVar9,0);
      auVar26._0_8_ = dVar8;
      auVar26._12_4_ = uVar33;
      auVar24._8_4_ = SUB84(dVar9,0);
      auVar24._0_8_ = dVar8;
      auVar24._12_4_ = uVar33;
      auVar31 = blendpd(auVar24,auVar32,2);
      auVar27._0_8_ = auVar26._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar8;
      auVar27._8_8_ = auVar32._0_8_ * auVar21._8_8_ - dVar4 * dVar9;
      auVar23._8_4_ = SUB84(auVar27._8_8_,0);
      auVar23._0_8_ = auVar27._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
      auVar21 = blendpd(auVar21,auVar28,2);
      auVar25._0_8_ = auVar31._0_8_ * dVar4 - auVar21._0_8_ * auVar32._0_8_;
      auVar25._8_8_ = auVar31._8_8_ * auVar28._8_8_ - auVar21._8_8_ * auVar32._8_8_;
      auVar28 = blendpd(auVar27,auVar25,2);
      uVar20 = auVar32._0_8_ * dVar12 + dVar7 + auVar28._0_8_;
      uVar10 = dVar8 * dVar12 + dVar5 + auVar23._8_8_;
      uVar11 = dVar9 * dVar12 + dVar6 + auVar25._0_8_;
    }
    else {
      uVar20 = (pTVar18->_s_0).Z;
      uVar11 = (pTVar18->_s_0).Y;
    }
  }
  auVar28._8_4_ = (int)uVar11;
  auVar28._0_8_ = uVar10;
  auVar28._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar28;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar20;
  return;
}

// execGetLocalLocationAndTangentAtSplinePoint @ 1479fc270

void __cdecl
USplineComponent::execGetLocalLocationAndTangentAtSplinePoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  int local_res10 [2];
  TVector<double> local_38;
  TVector<double> local_20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_38;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pTVar3 = &local_20;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetLocationAndTangentAtSplinePoint((USplineComponent *)param_1,local_res10[0],pTVar2,pTVar3,Local)
  ;
  return;
}

// execGetLocationAndTangentAtSplinePoint @ 1479fc3b0

void __cdecl
USplineComponent::execGetLocationAndTangentAtSplinePoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  byte local_res10 [8];
  int local_res20 [2];
  TVector<double> local_48;
  TVector<double> local_30;
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_48;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10[0] = 0;
  pTVar3 = &local_30;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetLocationAndTangentAtSplinePoint
            ((USplineComponent *)param_1,local_res20[0],pTVar2,pTVar3,(uint)local_res10[0]);
  return;
}

// execGetLocationAtDistanceAlongSpline @ 1479fc550

void __cdecl
USplineComponent::execGetLocationAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  char local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  TVector<double> local_a8;
  TVector<double> local_88 [4];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar11 = local_res18[0];
  cVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar9 = FSpline::IsEnabledStatic();
    if (!bVar9) goto LAB_1479fc656;
    fVar11 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar11);
  }
  else {
LAB_1479fc656:
    local_res20[0] = 0.0;
    fVar11 = FInterpCurve<float>::Eval
                       ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar11,local_res20);
  }
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar9 = FSpline::IsEnabledStatic();
    if (bVar9) {
      pTVar10 = FSpline::Evaluate((FSpline *)&param_1[0x21].field_0x20,&local_a8,fVar11);
      goto LAB_1479fc6c1;
    }
  }
  pTVar10 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1[0x23].field_0x20,
                       local_88,fVar11,&UE::Math::TVector<double>::ZeroVector);
LAB_1479fc6c1:
  dVar3 = (pTVar10->field0_0x0)._s_0.X;
  dVar4 = *(double *)((longlong)&pTVar10->field0_0x0 + 8);
  dVar20 = (pTVar10->field0_0x0)._s_0.Z;
  if (cVar8 == '\x01') {
    auVar19 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    dVar7 = *(double *)(param_1 + 0xd);
    dVar3 = *(double *)(param_1 + 0xe) * dVar3;
    dVar4 = *(double *)&param_1[0xe].field_0x8 * dVar4;
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar20 = dVar20 * *(double *)&param_1[0xe].field_0x10;
    dVar5 = *(double *)&param_1[0xe].field_0x18 * 0.0;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21._8_4_ = SUB84(dVar4,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = uVar25;
    dVar2 = auVar19._0_8_;
    auVar14 = blendpd(auVar12,auVar19,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
    auVar22._8_8_ = dVar20 * auVar12._8_8_ - dVar2 * dVar4;
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar3;
    auVar23._12_4_ = uVar25;
    auVar12._8_4_ = SUB84(dVar5,0);
    auVar12._0_8_ = dVar20;
    auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar12 = blendpd(auVar23,auVar12,2);
    auVar13._0_8_ = auVar12._0_8_ * dVar2 - auVar14._0_8_ * dVar20;
    auVar13._8_8_ = auVar12._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar5;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar23 = blendpd(auVar22,auVar13,2);
    dVar5 = auVar22._8_8_ + auVar22._8_8_;
    dVar6 = auVar13._0_8_ + auVar13._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = uVar25;
    auVar15._8_4_ = SUB84(dVar6,0);
    auVar15._0_8_ = dVar5;
    auVar15._12_4_ = uVar25;
    auVar23 = blendpd(auVar15,auVar24,2);
    auVar18._0_8_ = auVar17._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
    auVar18._8_8_ = auVar24._0_8_ * auVar12._8_8_ - dVar2 * dVar6;
    auVar14._8_4_ = SUB84(auVar18._8_8_,0);
    auVar14._0_8_ = auVar18._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
    auVar12 = blendpd(auVar12,auVar19,2);
    auVar16._0_8_ = auVar23._0_8_ * dVar2 - auVar12._0_8_ * auVar24._0_8_;
    auVar16._8_8_ = auVar23._8_8_ * auVar19._8_8_ - auVar12._8_8_ * auVar24._8_8_;
    auVar19 = blendpd(auVar18,auVar16,2);
    dVar3 = dVar5 * dVar7 + dVar3 + auVar14._8_8_ + *(double *)&param_1[0xd].field_0x8;
    dVar4 = dVar6 * dVar7 + dVar4 + auVar16._0_8_ + *(double *)&param_1[0xd].field_0x10;
    dVar20 = auVar24._0_8_ * dVar7 + dVar20 + auVar19._0_8_ + *(double *)&param_1[0xd].field_0x18;
  }
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar19;
  *(double *)((longlong)param_3 + 0x10) = dVar20;
  return;
}

// execGetLocationAtSplineInputKey @ 1479fc840

void __cdecl
USplineComponent::execGetLocationAtSplineInputKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  float fVar9;
  bool bVar10;
  TVector<double> *pTVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  char local_res10 [8];
  float local_res18 [2];
  TVector<double> local_88;
  TVector<double> local_68 [4];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar9 = local_res18[0];
  cVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar10 = FSpline::IsEnabledStatic();
    if (bVar10) {
      pTVar11 = FSpline::Evaluate((FSpline *)&param_1[0x21].field_0x20,&local_88,fVar9);
      goto LAB_1479fc95d;
    }
  }
  pTVar11 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1[0x23].field_0x20,
                       local_68,fVar9,&UE::Math::TVector<double>::ZeroVector);
LAB_1479fc95d:
  dVar3 = (pTVar11->field0_0x0)._s_0.X;
  dVar4 = *(double *)((longlong)&pTVar11->field0_0x0 + 8);
  dVar20 = (pTVar11->field0_0x0)._s_0.Z;
  if (cVar8 == '\x01') {
    auVar19 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    dVar7 = *(double *)(param_1 + 0xd);
    dVar3 = *(double *)(param_1 + 0xe) * dVar3;
    dVar4 = *(double *)&param_1[0xe].field_0x8 * dVar4;
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar20 = dVar20 * *(double *)&param_1[0xe].field_0x10;
    dVar5 = *(double *)&param_1[0xe].field_0x18 * 0.0;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21._8_4_ = SUB84(dVar4,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = uVar25;
    dVar2 = auVar19._0_8_;
    auVar14 = blendpd(auVar12,auVar19,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
    auVar22._8_8_ = dVar20 * auVar12._8_8_ - dVar2 * dVar4;
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar3;
    auVar23._12_4_ = uVar25;
    auVar12._8_4_ = SUB84(dVar5,0);
    auVar12._0_8_ = dVar20;
    auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar12 = blendpd(auVar23,auVar12,2);
    auVar13._0_8_ = auVar12._0_8_ * dVar2 - auVar14._0_8_ * dVar20;
    auVar13._8_8_ = auVar12._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar5;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar23 = blendpd(auVar22,auVar13,2);
    dVar5 = auVar22._8_8_ + auVar22._8_8_;
    dVar6 = auVar13._0_8_ + auVar13._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = uVar25;
    auVar15._8_4_ = SUB84(dVar6,0);
    auVar15._0_8_ = dVar5;
    auVar15._12_4_ = uVar25;
    auVar23 = blendpd(auVar15,auVar24,2);
    auVar18._0_8_ = auVar17._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
    auVar18._8_8_ = auVar24._0_8_ * auVar12._8_8_ - dVar2 * dVar6;
    auVar14._8_4_ = SUB84(auVar18._8_8_,0);
    auVar14._0_8_ = auVar18._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
    auVar12 = blendpd(auVar12,auVar19,2);
    auVar16._0_8_ = auVar23._0_8_ * dVar2 - auVar12._0_8_ * auVar24._0_8_;
    auVar16._8_8_ = auVar23._8_8_ * auVar19._8_8_ - auVar12._8_8_ * auVar24._8_8_;
    auVar19 = blendpd(auVar18,auVar16,2);
    dVar3 = dVar5 * dVar7 + dVar3 + auVar14._8_8_ + *(double *)&param_1[0xd].field_0x8;
    dVar4 = dVar6 * dVar7 + dVar4 + auVar16._0_8_ + *(double *)&param_1[0xd].field_0x10;
    dVar20 = auVar24._0_8_ * dVar7 + dVar20 + auVar19._0_8_ + *(double *)&param_1[0xd].field_0x18;
  }
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar19;
  *(double *)((longlong)param_3 + 0x10) = dVar20;
  return;
}

// execGetLocationAtSplinePoint @ 1479fcad0

void __cdecl
USplineComponent::execGetLocationAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  char cVar13;
  int iVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  TVector<double>_u_0 *pTVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  char local_res10 [8];
  int local_res18 [2];
  TVector<double>_u_0 local_b8 [2];
  TVector<double> local_88 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar14 = local_res18[0];
  cVar13 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar15 = FSpline::IsEnabledStatic(), bVar15)) {
    iVar16 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
  }
  else {
    iVar16 = *(int *)(param_1 + 0x24);
  }
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (iVar16 != 0) {
    uVar17 = GetClampedIndex((USplineComponent *)param_1,iVar14);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar15 = FSpline::IsEnabledStatic(), bVar15)) {
      pTVar18 = &FSpline::GetLocation((FSpline *)&param_1[0x21].field_0x20,local_88,uVar17)->
                 field0_0x0;
    }
    else {
      uVar19 = 0;
      if ((int)uVar17 < *(int *)(param_1 + 0x24)) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pdVar1 = (double *)((longlong)(int)uVar17 * 0x58 + 8 + *(longlong *)&param_1[0x23].field_0x20)
      ;
      pTVar18 = local_b8;
      local_b8[0]._s_0.X = *pdVar1;
      local_b8[0]._s_0.Y = pdVar1[1];
      local_b8[0]._s_0.Z =
           *(double *)((longlong)(int)uVar17 * 0x58 + 0x18 + *(longlong *)&param_1[0x23].field_0x20)
      ;
    }
    uVar10 = (((TVector<double>_u_0 *)&(pTVar18->_s_0).X)->_s_0).X;
    if (cVar13 == '\x01') {
      auVar28 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      dVar12 = *(double *)(param_1 + 0xd);
      dVar5 = *(double *)(param_1 + 0xe) * (double)uVar10;
      dVar6 = *(double *)&param_1[0xe].field_0x8 * (pTVar18->_s_0).Y;
      uVar33 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar29._8_4_ = SUB84(dVar6,0);
      auVar29._0_8_ = dVar5;
      auVar29._12_4_ = uVar33;
      dVar7 = (pTVar18->_s_0).Z * *(double *)&param_1[0xe].field_0x10;
      dVar8 = *(double *)&param_1[0xe].field_0x18 * 0.0;
      auVar23 = blendpd(auVar21,auVar28,2);
      dVar4 = auVar28._0_8_;
      auVar30._0_8_ = auVar29._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar5;
      auVar30._8_8_ = dVar7 * auVar21._8_8_ - dVar4 * dVar6;
      auVar31._8_4_ = SUB84(dVar6,0);
      auVar31._0_8_ = dVar5;
      auVar31._12_4_ = uVar33;
      auVar21._8_4_ = SUB84(dVar8,0);
      auVar21._0_8_ = dVar7;
      auVar21._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar21 = blendpd(auVar31,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar4 - auVar23._0_8_ * dVar7;
      auVar22._8_8_ = auVar21._8_8_ * auVar28._8_8_ - auVar23._8_8_ * dVar8;
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar31 = blendpd(auVar30,auVar22,2);
      auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      dVar8 = auVar30._8_8_ + auVar30._8_8_;
      dVar9 = auVar22._0_8_ + auVar22._0_8_;
      uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar26._8_4_ = SUB84(dVar9,0);
      auVar26._0_8_ = dVar8;
      auVar26._12_4_ = uVar33;
      auVar24._8_4_ = SUB84(dVar9,0);
      auVar24._0_8_ = dVar8;
      auVar24._12_4_ = uVar33;
      auVar31 = blendpd(auVar24,auVar32,2);
      auVar27._0_8_ = auVar26._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar8;
      auVar27._8_8_ = auVar32._0_8_ * auVar21._8_8_ - dVar4 * dVar9;
      auVar23._8_4_ = SUB84(auVar27._8_8_,0);
      auVar23._0_8_ = auVar27._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
      auVar21 = blendpd(auVar21,auVar28,2);
      auVar25._0_8_ = auVar31._0_8_ * dVar4 - auVar21._0_8_ * auVar32._0_8_;
      auVar25._8_8_ = auVar31._8_8_ * auVar28._8_8_ - auVar21._8_8_ * auVar32._8_8_;
      auVar28 = blendpd(auVar27,auVar25,2);
      uVar20 = auVar32._0_8_ * dVar12 + dVar7 + auVar28._0_8_ + *(double *)&param_1[0xd].field_0x18;
      uVar10 = dVar8 * dVar12 + dVar5 + auVar23._8_8_ + *(double *)&param_1[0xd].field_0x8;
      uVar11 = dVar9 * dVar12 + dVar6 + auVar25._0_8_ + *(double *)&param_1[0xd].field_0x10;
    }
    else {
      uVar20 = (pTVar18->_s_0).Z;
      uVar11 = (pTVar18->_s_0).Y;
    }
  }
  auVar28._8_4_ = (int)uVar11;
  auVar28._0_8_ = uVar10;
  auVar28._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar28;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar20;
  return;
}

// execGetLocationAtTime @ 1479fce40

void __cdecl USplineComponent::execGetLocationAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  byte local_res10 [8];
  int local_res18 [2];
  float local_res20 [2];
  TVector<double> local_38;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetLocationAtTime((USplineComponent *)param_1,&local_38,local_res20[0],
                             (uint)local_res10[0],local_res18[0] != 0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetNumberOfPropertyValues @ 1479fcf90

void __cdecl
USplineComponent::execGetNumberOfPropertyValues(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar3 = FSpline::IsEnabledStatic();
    if ((bVar3) && (param_1[0x21].field_0x20 == '\x02')) {
      iVar4 = FSpline::NumAttributeValues<float>((FSpline *)&param_1[0x21].field_0x20,FVar2);
      *(int *)param_3 = iVar4;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumberOfSplinePoints @ 1479fd060

void __cdecl
USplineComponent::execGetNumberOfSplinePoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      iVar2 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
      *(int *)param_3 = iVar2;
      return;
    }
  }
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}

// execGetNumberOfSplineSegments @ 1479fd0d0

void __cdecl
USplineComponent::execGetNumberOfSplineSegments(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      iVar2 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
      goto LAB_1479fd120;
    }
  }
  iVar2 = *(int *)(param_1 + 0x24);
LAB_1479fd120:
  iVar3 = iVar2;
  if ((param_1[0x26].field_0x1d == '\0') && (iVar3 = iVar2 + -1, iVar2 + -1 < 0)) {
    iVar3 = 0;
  }
  *(int *)param_3 = iVar3;
  return;
}

// execGetRightVectorAtDistanceAlongSpline @ 1479fd3a0

void __cdecl
USplineComponent::execGetRightVectorAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  char local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  TQuat<double> local_b8 [5];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar8 = local_res18[0];
  cVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar7 = FSpline::IsEnabledStatic(), bVar7)) {
    fVar8 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar8);
  }
  else {
    local_res20[0] = 0.0;
    fVar8 = FInterpCurve<float>::Eval
                      ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar8,local_res20);
  }
  GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_b8,fVar8,Local);
  dVar4 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_b8[0].Y -
          UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_b8[0].Z;
  dVar4 = dVar4 + dVar4;
  dVar19 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_b8[0].Z -
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_b8[0].X;
  dVar19 = dVar19 + dVar19;
  dVar18 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_b8[0].X -
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_b8[0].Y;
  dVar18 = dVar18 + dVar18;
  dVar11 = (dVar18 * local_b8[0].Y - dVar19 * local_b8[0].Z) +
           local_b8[0].W * dVar4 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  dVar12 = (dVar4 * local_b8[0].Z - dVar18 * local_b8[0].X) +
           local_b8[0].W * dVar19 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  dVar19 = (dVar19 * local_b8[0].X - dVar4 * local_b8[0].Y) +
           local_b8[0].W * dVar18 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  if (cVar6 == '\x01') {
    auVar10 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    auVar21._8_8_ = dVar12;
    auVar21._0_8_ = dVar11;
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar5 = *(double *)(param_1 + 0xd);
    dVar4 = auVar10._0_8_;
    auVar13 = blendpd(auVar9,auVar10,2);
    auVar20._0_8_ = dVar12 * auVar9._0_8_ - auVar9._8_8_ * dVar11;
    auVar20._8_8_ = dVar19 * auVar9._8_8_ - dVar4 * dVar12;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar19;
    auVar9 = blendpd(auVar21,auVar9,2);
    auVar14._0_8_ = auVar9._0_8_ * dVar4 - auVar13._0_8_ * dVar19;
    auVar14._8_8_ = auVar9._8_8_ * auVar10._8_8_ - auVar13._8_8_ * 0.0;
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21 = blendpd(auVar20,auVar14,2);
    dVar18 = auVar20._8_8_ + auVar20._8_8_;
    dVar3 = auVar14._0_8_ + auVar14._0_8_;
    uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    auVar16._8_4_ = SUB84(dVar3,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = uVar23;
    auVar13._8_4_ = SUB84(dVar3,0);
    auVar13._0_8_ = dVar18;
    auVar13._12_4_ = uVar23;
    auVar14 = blendpd(auVar13,auVar22,2);
    auVar21 = blendpd(auVar9,auVar10,2);
    auVar17._0_8_ = auVar16._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar18;
    auVar17._8_8_ = auVar22._0_8_ * auVar9._8_8_ - dVar4 * dVar3;
    auVar15._0_8_ = auVar14._0_8_ * dVar4 - auVar21._0_8_ * auVar22._0_8_;
    auVar15._8_8_ = auVar14._8_8_ * auVar10._8_8_ - auVar21._8_8_ * auVar22._8_8_;
    auVar10._8_4_ = SUB84(auVar17._8_8_,0);
    auVar10._0_8_ = auVar17._0_8_;
    auVar10._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
    auVar9 = blendpd(auVar17,auVar15,2);
    dVar19 = auVar22._0_8_ * dVar5 + dVar19 + auVar9._0_8_;
    dVar11 = dVar18 * dVar5 + dVar11 + auVar10._8_8_;
    dVar12 = dVar3 * dVar5 + dVar12 + auVar15._0_8_;
  }
  auVar2._8_4_ = SUB84(dVar12,0);
  auVar2._0_8_ = dVar11;
  auVar2._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar19;
  return;
}

// execGetRightVectorAtSplineInputKey @ 1479fd720

void __cdecl
USplineComponent::execGetRightVectorAtSplineInputKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  char local_res10 [8];
  float local_res18 [2];
  TQuat<double> local_a8 [5];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_a8,local_res18[0],Local);
  dVar4 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_a8[0].Y -
          UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_a8[0].Z;
  dVar4 = dVar4 + dVar4;
  dVar17 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_a8[0].Z -
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_a8[0].X;
  dVar17 = dVar17 + dVar17;
  dVar16 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_a8[0].X -
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_a8[0].Y;
  dVar16 = dVar16 + dVar16;
  dVar9 = (dVar16 * local_a8[0].Y - dVar17 * local_a8[0].Z) +
          local_a8[0].W * dVar4 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  dVar10 = (dVar4 * local_a8[0].Z - dVar16 * local_a8[0].X) +
           local_a8[0].W * dVar17 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  dVar17 = (dVar17 * local_a8[0].X - dVar4 * local_a8[0].Y) +
           local_a8[0].W * dVar16 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  if (cVar6 == '\x01') {
    auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    auVar19._8_8_ = dVar10;
    auVar19._0_8_ = dVar9;
    auVar7 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar5 = *(double *)(param_1 + 0xd);
    dVar4 = auVar8._0_8_;
    auVar11 = blendpd(auVar7,auVar8,2);
    auVar18._0_8_ = dVar10 * auVar7._0_8_ - auVar7._8_8_ * dVar9;
    auVar18._8_8_ = dVar17 * auVar7._8_8_ - dVar4 * dVar10;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar17;
    auVar7 = blendpd(auVar19,auVar7,2);
    auVar12._0_8_ = auVar7._0_8_ * dVar4 - auVar11._0_8_ * dVar17;
    auVar12._8_8_ = auVar7._8_8_ * auVar8._8_8_ - auVar11._8_8_ * 0.0;
    auVar7 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar19 = blendpd(auVar18,auVar12,2);
    dVar16 = auVar18._8_8_ + auVar18._8_8_;
    dVar3 = auVar12._0_8_ + auVar12._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar14._8_4_ = SUB84(dVar3,0);
    auVar14._0_8_ = dVar16;
    auVar14._12_4_ = uVar21;
    auVar11._8_4_ = SUB84(dVar3,0);
    auVar11._0_8_ = dVar16;
    auVar11._12_4_ = uVar21;
    auVar12 = blendpd(auVar11,auVar20,2);
    auVar19 = blendpd(auVar7,auVar8,2);
    auVar15._0_8_ = auVar14._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar16;
    auVar15._8_8_ = auVar20._0_8_ * auVar7._8_8_ - dVar4 * dVar3;
    auVar13._0_8_ = auVar12._0_8_ * dVar4 - auVar19._0_8_ * auVar20._0_8_;
    auVar13._8_8_ = auVar12._8_8_ * auVar8._8_8_ - auVar19._8_8_ * auVar20._8_8_;
    auVar8._8_4_ = SUB84(auVar15._8_8_,0);
    auVar8._0_8_ = auVar15._0_8_;
    auVar8._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar7 = blendpd(auVar15,auVar13,2);
    dVar17 = auVar20._0_8_ * dVar5 + dVar17 + auVar7._0_8_;
    dVar9 = dVar16 * dVar5 + dVar9 + auVar8._8_8_;
    dVar10 = dVar3 * dVar5 + dVar10 + auVar13._0_8_;
  }
  auVar2._8_4_ = SUB84(dVar10,0);
  auVar2._0_8_ = dVar9;
  auVar2._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar17;
  return;
}

// execGetRightVectorAtSplinePoint @ 1479fda60

void __cdecl
USplineComponent::execGetRightVectorAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  char local_res10 [8];
  int local_res18 [4];
  TQuat<double> local_b8 [5];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar7 = GetInputKeyValueAtSplinePoint((USplineComponent *)param_1,local_res18[0]);
  GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_b8,fVar7,Local);
  dVar4 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_b8[0].Y -
          UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_b8[0].Z;
  dVar4 = dVar4 + dVar4;
  dVar18 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_b8[0].Z -
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_b8[0].X;
  dVar18 = dVar18 + dVar18;
  dVar17 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_b8[0].X -
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_b8[0].Y;
  dVar17 = dVar17 + dVar17;
  dVar10 = (dVar17 * local_b8[0].Y - dVar18 * local_b8[0].Z) +
           local_b8[0].W * dVar4 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  dVar11 = (dVar4 * local_b8[0].Z - dVar17 * local_b8[0].X) +
           local_b8[0].W * dVar18 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  dVar18 = (dVar18 * local_b8[0].X - dVar4 * local_b8[0].Y) +
           local_b8[0].W * dVar17 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  if (cVar6 == '\x01') {
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    auVar20._8_8_ = dVar11;
    auVar20._0_8_ = dVar10;
    auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar5 = *(double *)(param_1 + 0xd);
    dVar4 = auVar9._0_8_;
    auVar12 = blendpd(auVar8,auVar9,2);
    auVar19._0_8_ = dVar11 * auVar8._0_8_ - auVar8._8_8_ * dVar10;
    auVar19._8_8_ = dVar18 * auVar8._8_8_ - dVar4 * dVar11;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar18;
    auVar8 = blendpd(auVar20,auVar8,2);
    auVar13._0_8_ = auVar8._0_8_ * dVar4 - auVar12._0_8_ * dVar18;
    auVar13._8_8_ = auVar8._8_8_ * auVar9._8_8_ - auVar12._8_8_ * 0.0;
    auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar20 = blendpd(auVar19,auVar13,2);
    dVar17 = auVar19._8_8_ + auVar19._8_8_;
    dVar3 = auVar13._0_8_ + auVar13._0_8_;
    uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    auVar15._8_4_ = SUB84(dVar3,0);
    auVar15._0_8_ = dVar17;
    auVar15._12_4_ = uVar22;
    auVar12._8_4_ = SUB84(dVar3,0);
    auVar12._0_8_ = dVar17;
    auVar12._12_4_ = uVar22;
    auVar13 = blendpd(auVar12,auVar21,2);
    auVar20 = blendpd(auVar8,auVar9,2);
    auVar16._0_8_ = auVar15._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar17;
    auVar16._8_8_ = auVar21._0_8_ * auVar8._8_8_ - dVar4 * dVar3;
    auVar14._0_8_ = auVar13._0_8_ * dVar4 - auVar20._0_8_ * auVar21._0_8_;
    auVar14._8_8_ = auVar13._8_8_ * auVar9._8_8_ - auVar20._8_8_ * auVar21._8_8_;
    auVar9._8_4_ = SUB84(auVar16._8_8_,0);
    auVar9._0_8_ = auVar16._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
    auVar8 = blendpd(auVar16,auVar14,2);
    dVar18 = auVar21._0_8_ * dVar5 + dVar18 + auVar8._0_8_;
    dVar10 = dVar17 * dVar5 + dVar10 + auVar9._8_8_;
    dVar11 = dVar3 * dVar5 + dVar11 + auVar14._0_8_;
  }
  auVar2._8_4_ = SUB84(dVar11,0);
  auVar2._0_8_ = dVar10;
  auVar2._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar18;
  return;
}

// execGetRightVectorAtTime @ 1479fdda0

void __cdecl
USplineComponent::execGetRightVectorAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  char local_res8 [8];
  float local_res10 [2];
  int local_res18 [2];
  float local_res20 [2];
  TQuat<double> local_e8 [5];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  fVar11 = local_res10[0];
  cVar8 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (*(float *)&param_1[0x26].field_0x14 != 0.0) {
    if (local_res18[0] == 0) {
      fVar11 = GetInputKeyValueAtTime((USplineComponent *)param_1,local_res10[0]);
      GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_e8,fVar11,Local);
      dVar7 = local_e8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
              local_e8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
      dVar7 = dVar7 + dVar7;
      dVar5 = local_e8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
              local_e8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      dVar5 = dVar5 + dVar5;
      dVar12 = local_e8[0].Y * dVar7;
      dVar22 = local_e8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
               local_e8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
      dVar22 = dVar22 + dVar22;
      dVar6 = local_e8[0].X * dVar5;
      dVar15 = local_e8[0].X * dVar22;
      local_e8[0].X =
           (local_e8[0].Y * dVar22 - local_e8[0].Z * dVar5) +
           local_e8[0].W * dVar7 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
      local_e8[0].Y =
           (local_e8[0].Z * dVar7 - dVar15) +
           local_e8[0].W * dVar5 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
      local_e8[0].Z =
           (dVar6 - dVar12) +
           local_e8[0].W * dVar22 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
    }
    else {
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
        fVar10 = FSpline::GetSplineLength((FSpline *)&param_1[0x21].field_0x20);
      }
      else {
        fVar10 = FSplineCurves::GetSplineLength((FSplineCurves *)&param_1[0x23].field_0x20);
      }
      fVar10 = (fVar11 / *(float *)&param_1[0x26].field_0x14) * fVar10;
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
        fVar11 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar10);
      }
      else {
        local_res20[0] = 0.0;
        fVar11 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar10,local_res20);
      }
      GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_e8,fVar11,Local);
      dVar6 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_e8[0].Y -
              UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_e8[0].Z;
      dVar6 = dVar6 + dVar6;
      dVar5 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_e8[0].Z -
              UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_e8[0].X;
      dVar22 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_e8[0].X -
               UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_e8[0].Y;
      dVar5 = dVar5 + dVar5;
      dVar22 = dVar22 + dVar22;
      dVar12 = dVar5 * local_e8[0].Z;
      dVar15 = dVar22 * local_e8[0].Y;
      dVar7 = dVar6 * local_e8[0].Y;
      local_e8[0].Y =
           (dVar6 * local_e8[0].Z - dVar22 * local_e8[0].X) +
           local_e8[0].W * dVar5 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
      local_e8[0].Z =
           (dVar5 * local_e8[0].X - dVar7) +
           local_e8[0].W * dVar22 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      local_e8[0].X =
           (dVar15 - dVar12) +
           local_e8[0].W * dVar6 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
    }
    uVar23 = local_e8[0].Z;
    uVar3 = local_e8[0].X;
    uVar4 = local_e8[0].Y;
    if (cVar8 == '\x01') {
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      auVar25._8_8_ = local_e8[0].Y;
      auVar25._0_8_ = local_e8[0].X;
      auVar13 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      dVar12 = *(double *)(param_1 + 0xd);
      dVar5 = auVar21._0_8_;
      auVar16 = blendpd(auVar13,auVar21,2);
      auVar24._0_8_ = local_e8[0].Y * auVar13._0_8_ - auVar13._8_8_ * local_e8[0].X;
      auVar24._8_8_ = local_e8[0].Z * auVar13._8_8_ - dVar5 * local_e8[0].Y;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_e8[0].Z;
      auVar13 = blendpd(auVar25,auVar13,2);
      auVar14._0_8_ = auVar13._0_8_ * dVar5 - auVar16._0_8_ * local_e8[0].Z;
      auVar14._8_8_ = auVar13._8_8_ * auVar21._8_8_ - auVar16._8_8_ * 0.0;
      auVar13 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar25 = blendpd(auVar24,auVar14,2);
      dVar6 = auVar24._8_8_ + auVar24._8_8_;
      dVar7 = auVar14._0_8_ + auVar14._0_8_;
      uVar27 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar26._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar26._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar19._8_4_ = SUB84(dVar7,0);
      auVar19._0_8_ = dVar6;
      auVar19._12_4_ = uVar27;
      auVar17._8_4_ = SUB84(dVar7,0);
      auVar17._0_8_ = dVar6;
      auVar17._12_4_ = uVar27;
      auVar25 = blendpd(auVar17,auVar26,2);
      auVar20._0_8_ = auVar19._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar6;
      auVar20._8_8_ = auVar26._0_8_ * auVar13._8_8_ - dVar5 * dVar7;
      auVar13 = blendpd(auVar13,auVar21,2);
      auVar16._8_4_ = SUB84(auVar20._8_8_,0);
      auVar16._0_8_ = auVar20._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
      auVar18._0_8_ = auVar25._0_8_ * dVar5 - auVar13._0_8_ * auVar26._0_8_;
      auVar18._8_8_ = auVar25._8_8_ * auVar21._8_8_ - auVar13._8_8_ * auVar26._8_8_;
      auVar21 = blendpd(auVar20,auVar18,2);
      uVar23 = auVar26._0_8_ * dVar12 + local_e8[0].Z + auVar21._0_8_;
      uVar3 = dVar6 * dVar12 + local_e8[0].X + auVar16._8_8_;
      uVar4 = dVar7 * dVar12 + local_e8[0].Y + auVar18._0_8_;
    }
  }
  auVar21._8_4_ = (int)uVar4;
  auVar21._0_8_ = uVar3;
  auVar21._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar21;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar23;
  return;
}

// execGetRollAtDistanceAlongSpline @ 1479fe2e0

void __cdecl
USplineComponent::execGetRollAtDistanceAlongSpline(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  byte local_res10 [8];
  float local_res18 [2];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetRollAtDistanceAlongSpline
                    ((USplineComponent *)param_1,local_res18[0],(uint)local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetRollAtSplineInputKey @ 1479fe3c0

void __cdecl
USplineComponent::execGetRollAtSplineInputKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TQuat<double> *this;
  byte local_res10 [8];
  float local_res18 [2];
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetQuaternionAtSplineInputKey
                   ((USplineComponent *)param_1,&local_28,local_res18[0],(uint)local_res10[0]);
  UE::Math::TQuat<double>::Rotator(this,&local_48);
  *(float *)param_3 = (float)local_48.Roll;
  return;
}

// execGetRollAtSplinePoint @ 1479fe4d0

void __cdecl
USplineComponent::execGetRollAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  TQuat<double> *this;
  float fVar3;
  byte local_res10 [8];
  int local_res18 [4];
  TRotator<double> local_58;
  TQuat<double> local_38;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = GetInputKeyValueAtSplinePoint((USplineComponent *)param_1,local_res18[0]);
  this = GetQuaternionAtSplineInputKey((USplineComponent *)param_1,&local_38,fVar3,(uint)bVar2);
  UE::Math::TQuat<double>::Rotator(this,&local_58);
  *(float *)param_3 = (float)local_58.Roll;
  return;
}

// execGetRollAtTime @ 1479fe5f0

void __cdecl USplineComponent::execGetRollAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  bool bVar3;
  TQuat<double> *this;
  Type TVar4;
  float fVar5;
  float fVar6;
  byte local_res8 [8];
  float local_res10 [2];
  int local_res18 [2];
  TRotator<double> local_88;
  TQuat<double> local_68 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  fVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar4 = (Type)local_res8[0];
  if (*(float *)&param_1[0x26].field_0x14 != 0.0) {
    if (local_res18[0] == 0) {
      fVar6 = GetInputKeyValueAtTime((USplineComponent *)param_1,local_res10[0]);
      this = GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_68,fVar6,TVar4);
      UE::Math::TQuat<double>::Rotator(this,&local_88);
      fVar6 = (float)local_88.Roll;
    }
    else {
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar3 = FSpline::IsEnabledStatic(), bVar3)) {
        fVar5 = FSpline::GetSplineLength((FSpline *)&param_1[0x21].field_0x20);
      }
      else {
        fVar5 = FSplineCurves::GetSplineLength((FSplineCurves *)&param_1[0x23].field_0x20);
      }
      fVar6 = GetRollAtDistanceAlongSpline
                        ((USplineComponent *)param_1,
                         (fVar6 / *(float *)&param_1[0x26].field_0x14) * fVar5,TVar4);
    }
    *(float *)param_3 = fVar6;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetRotationAtDistanceAlongSpline @ 1479fe7d0

void __cdecl
USplineComponent::execGetRotationAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  bool bVar3;
  TQuat<double> *this;
  float fVar4;
  byte local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  TRotator<double> local_68;
  TQuat<double> local_48;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar4 = local_res18[0];
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar3 = FSpline::IsEnabledStatic();
    if (bVar3) {
      fVar4 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar4);
      goto LAB_1479fe8e4;
    }
  }
  local_res20[0] = 0.0;
  fVar4 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar4,local_res20);
LAB_1479fe8e4:
  this = GetQuaternionAtSplineInputKey((USplineComponent *)param_1,&local_48,fVar4,(uint)bVar2);
  UE::Math::TQuat<double>::Rotator(this,&local_68);
  *(double *)param_3 = local_68.Pitch;
  *(double *)((longlong)param_3 + 8) = local_68.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_68.Roll;
  return;
}

// execGetRotationAtSplineInputKey @ 1479fe930

void __cdecl
USplineComponent::execGetRotationAtSplineInputKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TQuat<double> *this;
  byte local_res10 [8];
  float local_res18 [2];
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetQuaternionAtSplineInputKey
                   ((USplineComponent *)param_1,&local_28,local_res18[0],(uint)local_res10[0]);
  UE::Math::TQuat<double>::Rotator(this,&local_48);
  *(double *)param_3 = local_48.Pitch;
  *(double *)((longlong)param_3 + 8) = local_48.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_48.Roll;
  return;
}

// execGetRotationAtSplinePoint @ 1479fea40

void __cdecl
USplineComponent::execGetRotationAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  TQuat<double> *this;
  float fVar3;
  byte local_res10 [8];
  int local_res18 [4];
  TRotator<double> local_58;
  TQuat<double> local_38;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = GetInputKeyValueAtSplinePoint((USplineComponent *)param_1,local_res18[0]);
  this = GetQuaternionAtSplineInputKey((USplineComponent *)param_1,&local_38,fVar3,(uint)bVar2);
  UE::Math::TQuat<double>::Rotator(this,&local_58);
  *(double *)param_3 = local_58.Pitch;
  *(double *)((longlong)param_3 + 8) = local_58.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_58.Roll;
  return;
}

// execGetRotationAtTime @ 1479feb60

void __cdecl USplineComponent::execGetRotationAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TRotator<double> *pTVar3;
  byte local_res10 [8];
  int local_res18 [2];
  float local_res20 [2];
  TRotator<double> local_38;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetRotationAtTime((USplineComponent *)param_1,&local_38,local_res20[0],
                             (uint)local_res10[0],local_res18[0] != 0);
  dVar2 = pTVar3->Yaw;
  *(double *)param_3 = pTVar3->Pitch;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = pTVar3->Roll;
  return;
}

// execGetScaleAtDistanceAlongSpline @ 1479fecb0

void __cdecl
USplineComponent::execGetScaleAtDistanceAlongSpline(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  float local_res10 [2];
  TVector<double> local_28;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetScaleAtDistanceAlongSpline((USplineComponent *)param_1,&local_28,local_res10[0]);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetScaleAtSplineInputKey @ 1479fed60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USplineComponent::execGetScaleAtSplineInputKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FProperty *pFVar2;
  double dVar3;
  float fVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  float local_res10 [2];
  TVector<double>_u_0 local_68;
  TVector<double> local_50;
  TVector<double> local_38 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar5 = FSpline::IsEnabledStatic();
    if (bVar5) {
      pTVar6 = FSpline::EvaluateScale((FSpline *)&param_1[0x21].field_0x20,&local_50,fVar4);
      goto LAB_1479fee40;
    }
  }
  local_68._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_68._s_0.Y = _UNK_150689688;
  local_68._s_0.Z = __real_3ff0000000000000;
  pTVar6 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                     ((FInterpCurve<UE::Math::TVector<double>_> *)(param_1 + 0x25),local_38,fVar4,
                      (TVector<double> *)&local_68._s_0);
LAB_1479fee40:
  dVar3 = (pTVar6->field0_0x0)._s_0.Y;
  dVar1 = (pTVar6->field0_0x0)._s_0.Z;
  *(double *)param_3 = (pTVar6->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar3;
  *(double *)((longlong)param_3 + 0x10) = dVar1;
  return;
}

// execGetScaleAtSplinePoint @ 1479fee70

void __cdecl
USplineComponent::execGetScaleAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  int local_res10 [2];
  TVector<double> local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetScaleAtSplinePoint((USplineComponent *)param_1,&local_28,local_res10[0]);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetScaleAtTime @ 1479fef20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl USplineComponent::execGetScaleAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float local_res8 [2];
  int local_res10 [2];
  TVector<double>_u_0 local_98;
  TVector<double> local_80;
  TVector<double> local_68 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar5 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar8 = __real_3ff0000000000000;
  uVar6 = ___xmm_3ff00000000000003ff0000000000000;
  uVar7 = _UNK_150689688;
  if (*(float *)&param_1[0x26].field_0x14 != 0.0) {
    if (local_res10[0] == 0) {
      fVar5 = GetInputKeyValueAtTime((USplineComponent *)param_1,local_res8[0]);
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
        pTVar3 = FSpline::EvaluateScale((FSpline *)&param_1[0x21].field_0x20,&local_80,fVar5);
      }
      else {
        local_98._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
        local_98._s_0.Y = _UNK_150689688;
        local_98._s_0.Z = __real_3ff0000000000000;
        pTVar3 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                           ((FInterpCurve<UE::Math::TVector<double>_> *)(param_1 + 0x25),local_68,
                            fVar5,(TVector<double> *)&local_98._s_0);
      }
      uVar6 = (pTVar3->field0_0x0)._s_0.X;
      uVar7 = (pTVar3->field0_0x0)._s_0.Y;
      uVar8 = (pTVar3->field0_0x0)._s_0.Z;
    }
    else {
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar2 = FSpline::IsEnabledStatic(), bVar2)) {
        fVar4 = FSpline::GetSplineLength((FSpline *)&param_1[0x21].field_0x20);
      }
      else {
        fVar4 = FSplineCurves::GetSplineLength((FSplineCurves *)&param_1[0x23].field_0x20);
      }
      GetScaleAtDistanceAlongSpline
                ((USplineComponent *)param_1,(TVector<double> *)&local_98._s_0,
                 (fVar5 / *(float *)&param_1[0x26].field_0x14) * fVar4);
      uVar8 = local_98._s_0.Z;
      uVar6 = local_98._s_0.X;
      uVar7 = local_98._s_0.Y;
    }
  }
  *(undefined8 *)param_3 = uVar6;
  *(undefined8 *)((longlong)param_3 + 8) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar8;
  return;
}

// execGetSplineLength @ 1479ff230

void __cdecl USplineComponent::execGetSplineLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  float fVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar1 = FSpline::IsEnabledStatic();
    if (bVar1) {
      fVar2 = FSpline::GetSplineLength((FSpline *)&param_1[0x21].field_0x20);
      *(float *)param_3 = fVar2;
      return;
    }
  }
  fVar2 = FSplineCurves::GetSplineLength((FSplineCurves *)&param_1[0x23].field_0x20);
  *(float *)param_3 = fVar2;
  return;
}

// execGetSplinePointAt @ 1479ff2b0

void __cdecl USplineComponent::execGetSplinePointAt(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  int iVar23;
  Type TVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  TVector<double> *pTVar28;
  TQuat<double> *this;
  double dVar29;
  TVector<double>_u_0 *pTVar30;
  UObject *pUVar31;
  Type TVar32;
  undefined1 *this_00;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar45;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined4 uVar71;
  byte local_res10 [8];
  int local_res18 [2];
  Type local_res20;
  undefined1 local_300 [16];
  double local_2f0;
  TVector<double>_u_0 local_2b8;
  undefined1 local_2a0 [16];
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  TVector<double>_u_0 local_270;
  undefined1 local_258 [16];
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  TVector<double>_u_0 local_228;
  TRotator<double> local_210;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined7 uStack_177;
  undefined1 local_168 [16];
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  TVector<double>_u_0 local_128;
  TQuat<double> local_108;
  TVector<double> local_e8;
  TVector<double> local_d0;
  TVector<double> local_b8 [5];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar32 = (Type)local_res10[0];
  local_res20 = TVar32;
  iVar23 = GetClampedIndex((USplineComponent *)param_1,local_res18[0]);
  TVar24 = GetSplinePointType((USplineComponent *)param_1,iVar23);
  pTVar28 = GetScaleAtSplinePoint((USplineComponent *)param_1,&local_e8,iVar23);
  fVar33 = GetInputKeyValueAtSplinePoint((USplineComponent *)param_1,iVar23);
  this = GetQuaternionAtSplineInputKey((USplineComponent *)param_1,&local_108,fVar33,TVar32);
  UE::Math::TQuat<double>::Rotator(this,&local_210);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar22 = FSpline::IsEnabledStatic(), bVar22)) {
    iVar25 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
  }
  else {
    iVar25 = *(int *)(param_1 + 0x24);
  }
  this_00 = &param_1[0x21].field_0x20;
  pUVar31 = param_1 + 0x24;
  if (iVar25 == 0) {
    local_300._4_4_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
    local_300._0_4_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
    local_300._8_4_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
    local_300._12_4_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
    local_2f0 = (double)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_;
  }
  else {
    uVar27 = GetClampedIndex((USplineComponent *)param_1,iVar23);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar22 = FSpline::IsEnabledStatic(), bVar22)) {
      pTVar30 = &FSpline::GetOutTangent((FSpline *)this_00,&local_d0,uVar27)->field0_0x0;
    }
    else {
      uVar26 = 0;
      if ((int)uVar27 < *(int *)pUVar31) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pdVar1 = (double *)
               ((longlong)(int)uVar27 * 0x58 + 0x38 + *(longlong *)&param_1[0x23].field_0x20);
      pTVar30 = &local_2b8;
      local_2b8._s_0.X = *pdVar1;
      local_2b8._s_0.Y = pdVar1[1];
      local_2b8._s_0.Z =
           *(double *)((longlong)(int)uVar27 * 0x58 + 0x48 + *(longlong *)&param_1[0x23].field_0x20)
      ;
    }
    local_148 = (((TVector<double>_u_0 *)&(pTVar30->_s_0).X)->_s_0).X;
    dStack_140 = (pTVar30->_s_0).Y;
    local_138 = (pTVar30->_s_0).Z;
    local_2f0 = local_138;
    dVar6 = local_148;
    dVar8 = dStack_140;
    dVar29 = local_148;
    dVar7 = dStack_140;
    dVar9 = local_138;
    if (local_res20 == World) {
      dVar15 = *(double *)(param_1 + 0xd);
      dVar8 = *(double *)(param_1 + 0xe) * local_148;
      dVar29 = *(double *)&param_1[0xe].field_0x8 * dStack_140;
      uVar34 = (undefined4)((ulonglong)dVar29 >> 0x20);
      auVar60 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      dVar7 = local_138 * *(double *)&param_1[0xe].field_0x10;
      dVar9 = *(double *)&param_1[0xe].field_0x18 * 0.0;
      local_168 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar62._8_4_ = SUB84(dVar29,0);
      auVar62._0_8_ = dVar8;
      auVar62._12_4_ = uVar34;
      dVar6 = auVar60._0_8_;
      auVar46 = blendpd(local_168,auVar60,2);
      auVar63._0_8_ = auVar62._8_8_ * local_168._0_8_ - local_168._8_8_ * dVar8;
      auVar63._8_8_ = dVar7 * local_168._8_8_ - dVar6 * dVar29;
      auVar47._8_4_ = SUB84(dVar29,0);
      auVar47._0_8_ = dVar8;
      auVar47._12_4_ = uVar34;
      auVar40._8_4_ = SUB84(dVar9,0);
      auVar40._0_8_ = dVar7;
      auVar40._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar40 = blendpd(auVar47,auVar40,2);
      auVar35._0_8_ = auVar40._0_8_ * dVar6 - auVar46._0_8_ * dVar7;
      auVar35._8_8_ = auVar40._8_8_ * auVar60._8_8_ - auVar46._8_8_ * dVar9;
      auVar40 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar47 = blendpd(auVar63,auVar35,2);
      dVar9 = auVar63._8_8_ + auVar63._8_8_;
      dVar13 = auVar35._0_8_ + auVar35._0_8_;
      uVar34 = (undefined4)((ulonglong)dVar13 >> 0x20);
      auVar64._0_8_ = auVar47._0_8_ + auVar47._0_8_;
      auVar64._8_8_ = auVar47._8_8_ + auVar47._8_8_;
      auVar54._8_4_ = SUB84(dVar13,0);
      auVar54._0_8_ = dVar9;
      auVar54._12_4_ = uVar34;
      auVar48._8_4_ = SUB84(dVar13,0);
      auVar48._0_8_ = dVar9;
      auVar48._12_4_ = uVar34;
      auVar47 = blendpd(auVar48,auVar64,2);
      auVar55._0_8_ = auVar54._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar9;
      auVar55._8_8_ = auVar64._0_8_ * auVar40._8_8_ - dVar6 * dVar13;
      auVar40 = blendpd(auVar40,auVar60,2);
      auVar46._8_4_ = SUB84(auVar55._8_8_,0);
      auVar46._0_8_ = auVar55._0_8_;
      auVar46._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
      auVar49._0_8_ = auVar47._0_8_ * dVar6 - auVar40._0_8_ * auVar64._0_8_;
      auVar49._8_8_ = auVar47._8_8_ * auVar60._8_8_ - auVar40._8_8_ * auVar64._8_8_;
      auVar60 = blendpd(auVar55,auVar49,2);
      local_290 = auVar64._0_8_ * dVar15 + dVar7 + auVar60._0_8_;
      dVar6 = dVar9 * dVar15 + dVar8 + auVar46._8_8_;
      dVar8 = dVar13 * dVar15 + dVar29 + auVar49._0_8_;
      local_2a0._8_4_ = SUB84(dVar8,0);
      local_2a0._0_8_ = dVar6;
      local_2a0._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_2f0 = local_290;
      dVar29 = local_288;
      dVar7 = dStack_280;
      dVar9 = local_278;
    }
    local_278 = dVar9;
    dStack_280 = dVar7;
    local_288 = dVar29;
    local_300._8_4_ = SUB84(dVar8,0);
    local_300._0_8_ = dVar6;
    local_300._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  }
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar22 = FSpline::IsEnabledStatic(), bVar22)) {
    iVar25 = FSpline::GetNumControlPoints((FSpline *)this_00);
  }
  else {
    iVar25 = *(int *)pUVar31;
  }
  dVar8 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_);
  dVar6 = (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_);
  if (iVar25 == 0) {
    uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
    uVar45 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
  }
  else {
    uVar27 = GetClampedIndex((USplineComponent *)param_1,iVar23);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar22 = FSpline::IsEnabledStatic(), bVar22)) {
      pTVar30 = &FSpline::GetInTangent((FSpline *)this_00,local_b8,uVar27)->field0_0x0;
    }
    else {
      uVar26 = 0;
      if ((int)uVar27 < *(int *)pUVar31) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pdVar1 = (double *)
               ((longlong)(int)uVar27 * 0x58 + 0x20 + *(longlong *)&param_1[0x23].field_0x20);
      pTVar30 = &local_270;
      local_270._s_0.X = *pdVar1;
      local_270._s_0.Y = pdVar1[1];
      local_270._s_0.Z =
           *(double *)((longlong)(int)uVar27 * 0x58 + 0x30 + *(longlong *)&param_1[0x23].field_0x20)
      ;
    }
    dVar6 = (((TVector<double>_u_0 *)&(pTVar30->_s_0).X)->_s_0).X;
    dVar8 = (pTVar30->_s_0).Y;
    local_168 = *(undefined1 (*) [16])&(pTVar30->_s_0).X;
    local_158 = (pTVar30->_s_0).Z;
    dVar29 = local_158;
    dVar7 = dVar6;
    dVar9 = dVar8;
    dVar13 = local_158;
    if (local_res20 == World) {
      dVar15 = *(double *)(param_1 + 0xd);
      dVar6 = *(double *)(param_1 + 0xe) * dVar6;
      dVar8 = *(double *)&param_1[0xe].field_0x8 * dVar8;
      uVar34 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar60 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      dVar7 = local_158 * *(double *)&param_1[0xe].field_0x10;
      dVar9 = *(double *)&param_1[0xe].field_0x18 * 0.0;
      local_128._0_16_ = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar65._8_4_ = SUB84(dVar8,0);
      auVar65._0_8_ = dVar6;
      auVar65._12_4_ = uVar34;
      dVar29 = auVar60._0_8_;
      auVar47 = blendpd(local_128._0_16_,auVar60,2);
      auVar66._0_8_ = auVar65._8_8_ * local_128._0_8_ - local_128._8_8_ * dVar6;
      auVar66._8_8_ = dVar7 * local_128._8_8_ - dVar29 * dVar8;
      auVar36._8_4_ = SUB84(dVar8,0);
      auVar36._0_8_ = dVar6;
      auVar36._12_4_ = uVar34;
      auVar10._8_4_ = SUB84(dVar9,0);
      auVar10._0_8_ = dVar7;
      auVar10._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar40 = blendpd(auVar36,auVar10,2);
      auVar37._0_8_ = auVar40._0_8_ * dVar29 - auVar47._0_8_ * dVar7;
      auVar37._8_8_ = auVar40._8_8_ * auVar60._8_8_ - auVar47._8_8_ * dVar9;
      auVar40 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar47 = blendpd(auVar66,auVar37,2);
      dVar9 = auVar66._8_8_ + auVar66._8_8_;
      dVar13 = auVar37._0_8_ + auVar37._0_8_;
      uVar34 = (undefined4)((ulonglong)dVar13 >> 0x20);
      auVar67._0_8_ = auVar47._0_8_ + auVar47._0_8_;
      auVar67._8_8_ = auVar47._8_8_ + auVar47._8_8_;
      auVar56._8_4_ = SUB84(dVar13,0);
      auVar56._0_8_ = dVar9;
      auVar56._12_4_ = uVar34;
      auVar50._8_4_ = SUB84(dVar13,0);
      auVar50._0_8_ = dVar9;
      auVar50._12_4_ = uVar34;
      auVar47 = blendpd(auVar50,auVar67,2);
      auVar57._0_8_ = auVar56._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar9;
      auVar57._8_8_ = auVar67._0_8_ * auVar40._8_8_ - dVar29 * dVar13;
      auVar40 = blendpd(auVar40,auVar60,2);
      auVar38._8_4_ = SUB84(auVar57._8_8_,0);
      auVar38._0_8_ = auVar57._0_8_;
      auVar38._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar51._0_8_ = auVar47._0_8_ * dVar29 - auVar40._0_8_ * auVar67._0_8_;
      auVar51._8_8_ = auVar47._8_8_ * auVar60._8_8_ - auVar40._8_8_ * auVar67._8_8_;
      auVar60 = blendpd(auVar57,auVar51,2);
      local_248 = auVar67._0_8_ * dVar15 + dVar7 + auVar60._0_8_;
      dVar6 = dVar9 * dVar15 + dVar6 + auVar38._8_8_;
      dVar8 = dVar13 * dVar15 + dVar8 + auVar51._0_8_;
      local_258._8_4_ = SUB84(dVar8,0);
      local_258._0_8_ = dVar6;
      local_258._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar29 = local_248;
      dVar7 = local_240;
      dVar9 = dStack_238;
      dVar13 = local_230;
    }
    local_230 = dVar13;
    dStack_238 = dVar9;
    local_240 = dVar7;
    uVar34 = SUB84(dVar29,0);
    uVar45 = (undefined4)((ulonglong)dVar29 >> 0x20);
  }
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar22 = FSpline::IsEnabledStatic(), bVar22)) {
    iVar25 = FSpline::GetNumControlPoints((FSpline *)this_00);
  }
  else {
    iVar25 = *(int *)pUVar31;
  }
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar61 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (iVar25 != 0) {
    uVar27 = GetClampedIndex((USplineComponent *)param_1,iVar23);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar22 = FSpline::IsEnabledStatic(), bVar22)) {
      pTVar30 = &FSpline::GetLocation((FSpline *)this_00,(TVector<double> *)&local_128._s_0,uVar27)
                 ->field0_0x0;
    }
    else {
      uVar26 = 0;
      if ((int)uVar27 < *(int *)pUVar31) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pdVar1 = (double *)((longlong)(int)uVar27 * 0x58 + 8 + *(longlong *)&param_1[0x23].field_0x20)
      ;
      pTVar30 = &local_228;
      local_228._s_0.X = *pdVar1;
      local_228._s_0.Y = pdVar1[1];
      local_228._s_0.Z =
           *(double *)((longlong)(int)uVar27 * 0x58 + 0x18 + *(longlong *)&param_1[0x23].field_0x20)
      ;
    }
    uVar12 = *(undefined8 *)pTVar30;
    uVar14 = (pTVar30->_s_0).Y;
    if (local_res20 == World) {
      auVar60 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      dVar15 = (double)uVar12 * *(double *)(param_1 + 0xe);
      dVar16 = (double)uVar14 * *(double *)&param_1[0xe].field_0x8;
      uVar71 = (undefined4)((ulonglong)dVar16 >> 0x20);
      auVar40 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      dVar7 = (pTVar30->_s_0).Z * *(double *)&param_1[0xe].field_0x10;
      dVar9 = *(double *)&param_1[0xe].field_0x18 * 0.0;
      dVar19 = *(double *)(param_1 + 0xd);
      auVar68._8_4_ = SUB84(dVar16,0);
      auVar68._0_8_ = dVar15;
      auVar68._12_4_ = uVar71;
      dVar29 = auVar60._0_8_;
      auVar47 = blendpd(auVar40,auVar60,2);
      auVar69._0_8_ = auVar68._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar15;
      auVar69._8_8_ = dVar7 * auVar40._8_8_ - dVar29 * dVar16;
      auVar39._8_4_ = SUB84(dVar16,0);
      auVar39._0_8_ = dVar15;
      auVar39._12_4_ = uVar71;
      auVar5._8_4_ = SUB84(dVar9,0);
      auVar5._0_8_ = dVar7;
      auVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar40 = blendpd(auVar39,auVar5,2);
      auVar41._0_8_ = auVar40._0_8_ * dVar29 - auVar47._0_8_ * dVar7;
      auVar41._8_8_ = auVar40._8_8_ * auVar60._8_8_ - auVar47._8_8_ * dVar9;
      auVar40 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar47 = blendpd(auVar69,auVar41,2);
      dVar9 = auVar69._8_8_ + auVar69._8_8_;
      dVar13 = auVar41._0_8_ + auVar41._0_8_;
      uVar71 = (undefined4)((ulonglong)dVar13 >> 0x20);
      auVar70._0_8_ = auVar47._0_8_ + auVar47._0_8_;
      auVar70._8_8_ = auVar47._8_8_ + auVar47._8_8_;
      auVar58._8_4_ = SUB84(dVar13,0);
      auVar58._0_8_ = dVar9;
      auVar58._12_4_ = uVar71;
      auVar52._8_4_ = SUB84(dVar13,0);
      auVar52._0_8_ = dVar9;
      auVar52._12_4_ = uVar71;
      auVar47 = blendpd(auVar52,auVar70,2);
      auVar59._0_8_ = auVar58._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar9;
      auVar59._8_8_ = auVar70._0_8_ * auVar40._8_8_ - dVar29 * dVar13;
      auVar42._8_4_ = SUB84(auVar59._8_8_,0);
      auVar42._0_8_ = auVar59._0_8_;
      auVar42._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
      auVar40 = blendpd(auVar40,auVar60,2);
      auVar53._0_8_ = auVar47._0_8_ * dVar29 - auVar40._0_8_ * auVar70._0_8_;
      auVar53._8_8_ = auVar47._8_8_ * auVar60._8_8_ - auVar40._8_8_ * auVar70._8_8_;
      auVar60 = blendpd(auVar59,auVar53,2);
      uVar12 = dVar9 * dVar19 + dVar15 + auVar42._8_8_ + *(double *)&param_1[0xd].field_0x8;
      uVar14 = dVar13 * dVar19 + dVar16 + auVar53._0_8_ + *(double *)&param_1[0xd].field_0x10;
      uVar61 = auVar70._0_8_ * dVar19 + dVar7 + auVar60._0_8_ + *(double *)&param_1[0xd].field_0x18;
    }
    else {
      uVar61 = (pTVar30->_s_0).Z;
    }
  }
  fVar33 = GetInputKeyValueAtSplinePoint((USplineComponent *)param_1,iVar23);
  uVar2 = *(undefined8 *)((longlong)&pTVar28->field0_0x0 + 0x10);
  uVar20 = *(undefined8 *)&pTVar28->field0_0x0;
  uVar21 = *(undefined8 *)((longlong)&pTVar28->field0_0x0 + 8);
  auVar11._8_4_ = (int)uVar14;
  auVar11._0_8_ = uVar12;
  auVar11._12_4_ = (int)((ulonglong)uVar14 >> 0x20);
  local_1f0 = (undefined4)uVar12;
  uStack_1ec = (undefined4)((ulonglong)uVar12 >> 0x20);
  uStack_1e8 = auVar11._8_8_;
  *(float *)param_3 = fVar33;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_1f4;
  *(undefined4 *)((longlong)param_3 + 8) = local_1f0;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_1ec;
  uStack_1b8 = local_300._8_4_;
  uStack_1b4 = local_300._12_4_;
  *(undefined8 *)((longlong)param_3 + 0x10) = uStack_1e8;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar61;
  local_1c0 = local_300._0_4_;
  uStack_1bc = local_300._4_4_;
  auVar17._4_8_ = uVar61;
  auVar17._0_4_ = uStack_1c4;
  auVar43._0_8_ = auVar17._0_8_ << 0x20;
  auVar43._8_4_ = local_1c0;
  auVar43._12_4_ = uStack_1bc;
  auVar60._8_4_ = SUB84(dVar8,0);
  auVar60._0_8_ = dVar6;
  auVar60._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar60;
  *(ulonglong *)((longlong)param_3 + 0x30) = CONCAT44(uVar45,uVar34);
  *(longlong *)((longlong)param_3 + 0x38) = auVar43._8_8_;
  local_190 = (undefined4)uVar20;
  uStack_18c = (undefined4)((ulonglong)uVar20 >> 0x20);
  auVar18._4_8_ = auVar43._8_8_;
  auVar18._0_4_ = uStack_194;
  auVar44._0_8_ = auVar18._0_8_ << 0x20;
  auVar44._8_4_ = local_190;
  auVar44._12_4_ = uStack_18c;
  *(undefined4 *)((longlong)param_3 + 0x40) = uStack_1b8;
  *(undefined4 *)((longlong)param_3 + 0x44) = uStack_1b4;
  *(int *)((longlong)param_3 + 0x48) = SUB84(local_2f0,0);
  *(int *)((longlong)param_3 + 0x4c) = (int)((ulonglong)local_2f0 >> 0x20);
  uStack_188 = (undefined4)uVar21;
  uStack_184 = (undefined4)((ulonglong)uVar21 >> 0x20);
  *(double *)((longlong)param_3 + 0x50) = local_210.Pitch;
  *(double *)((longlong)param_3 + 0x58) = local_210.Yaw;
  *(double *)((longlong)param_3 + 0x60) = local_210.Roll;
  *(longlong *)((longlong)param_3 + 0x68) = auVar44._8_8_;
  *(undefined4 *)((longlong)param_3 + 0x70) = uStack_188;
  *(undefined4 *)((longlong)param_3 + 0x74) = uStack_184;
  *(int *)((longlong)param_3 + 0x78) = (int)uVar2;
  *(int *)((longlong)param_3 + 0x7c) = (int)((ulonglong)uVar2 >> 0x20);
  *(ulonglong *)((longlong)param_3 + 0x80) = CONCAT71(uStack_177,(char)TVar24);
  return;
}

// execGetSplinePointType @ 1479ffbe0

void __cdecl
USplineComponent::execGetSplinePointType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  Type TVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar2 = GetSplinePointType((USplineComponent *)param_1,local_res10[0]);
  *(char *)param_3 = (char)TVar2;
  return;
}

// execGetTangentAtDistanceAlongSpline @ 1479ffdd0

void __cdecl
USplineComponent::execGetTangentAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  char local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  TVector<double> local_a8;
  TVector<double> local_88 [4];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar11 = local_res18[0];
  cVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar9 = FSpline::IsEnabledStatic();
    if (!bVar9) goto LAB_1479ffed6;
    fVar11 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar11);
  }
  else {
LAB_1479ffed6:
    local_res20[0] = 0.0;
    fVar11 = FInterpCurve<float>::Eval
                       ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar11,local_res20);
  }
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar9 = FSpline::IsEnabledStatic();
    if (bVar9) {
      pTVar10 = FSpline::EvaluateDerivative((FSpline *)&param_1[0x21].field_0x20,&local_a8,fVar11);
      goto LAB_1479fff41;
    }
  }
  pTVar10 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1[0x23].field_0x20,
                       local_88,fVar11,&UE::Math::TVector<double>::ZeroVector);
LAB_1479fff41:
  dVar3 = (pTVar10->field0_0x0)._s_0.X;
  dVar4 = *(double *)((longlong)&pTVar10->field0_0x0 + 8);
  dVar20 = (pTVar10->field0_0x0)._s_0.Z;
  if (cVar8 == '\x01') {
    auVar19 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    dVar7 = *(double *)(param_1 + 0xd);
    dVar3 = *(double *)(param_1 + 0xe) * dVar3;
    dVar4 = *(double *)&param_1[0xe].field_0x8 * dVar4;
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar20 = dVar20 * *(double *)&param_1[0xe].field_0x10;
    dVar5 = *(double *)&param_1[0xe].field_0x18 * 0.0;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21._8_4_ = SUB84(dVar4,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = uVar25;
    dVar2 = auVar19._0_8_;
    auVar14 = blendpd(auVar12,auVar19,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
    auVar22._8_8_ = dVar20 * auVar12._8_8_ - dVar2 * dVar4;
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar3;
    auVar23._12_4_ = uVar25;
    auVar12._8_4_ = SUB84(dVar5,0);
    auVar12._0_8_ = dVar20;
    auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar12 = blendpd(auVar23,auVar12,2);
    auVar13._0_8_ = auVar12._0_8_ * dVar2 - auVar14._0_8_ * dVar20;
    auVar13._8_8_ = auVar12._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar5;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar23 = blendpd(auVar22,auVar13,2);
    dVar5 = auVar22._8_8_ + auVar22._8_8_;
    dVar6 = auVar13._0_8_ + auVar13._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = uVar25;
    auVar15._8_4_ = SUB84(dVar6,0);
    auVar15._0_8_ = dVar5;
    auVar15._12_4_ = uVar25;
    auVar23 = blendpd(auVar15,auVar24,2);
    auVar18._0_8_ = auVar17._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
    auVar18._8_8_ = auVar24._0_8_ * auVar12._8_8_ - dVar2 * dVar6;
    auVar14._8_4_ = SUB84(auVar18._8_8_,0);
    auVar14._0_8_ = auVar18._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
    auVar12 = blendpd(auVar12,auVar19,2);
    auVar16._0_8_ = auVar23._0_8_ * dVar2 - auVar12._0_8_ * auVar24._0_8_;
    auVar16._8_8_ = auVar23._8_8_ * auVar19._8_8_ - auVar12._8_8_ * auVar24._8_8_;
    auVar19 = blendpd(auVar18,auVar16,2);
    dVar20 = auVar24._0_8_ * dVar7 + dVar20 + auVar19._0_8_;
    dVar3 = dVar5 * dVar7 + dVar3 + auVar14._8_8_;
    dVar4 = dVar6 * dVar7 + dVar4 + auVar16._0_8_;
  }
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar19;
  *(double *)((longlong)param_3 + 0x10) = dVar20;
  return;
}

// execGetTangentAtSplineInputKey @ 147a000b0

void __cdecl
USplineComponent::execGetTangentAtSplineInputKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  float fVar9;
  bool bVar10;
  TVector<double> *pTVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  char local_res10 [8];
  float local_res18 [2];
  TVector<double> local_88;
  TVector<double> local_68 [4];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar9 = local_res18[0];
  cVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar10 = FSpline::IsEnabledStatic();
    if (bVar10) {
      pTVar11 = FSpline::EvaluateDerivative((FSpline *)&param_1[0x21].field_0x20,&local_88,fVar9);
      goto LAB_147a001cd;
    }
  }
  pTVar11 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1[0x23].field_0x20,
                       local_68,fVar9,&UE::Math::TVector<double>::ZeroVector);
LAB_147a001cd:
  dVar3 = (pTVar11->field0_0x0)._s_0.X;
  dVar4 = *(double *)((longlong)&pTVar11->field0_0x0 + 8);
  dVar20 = (pTVar11->field0_0x0)._s_0.Z;
  if (cVar8 == '\x01') {
    auVar19 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    dVar7 = *(double *)(param_1 + 0xd);
    dVar3 = *(double *)(param_1 + 0xe) * dVar3;
    dVar4 = *(double *)&param_1[0xe].field_0x8 * dVar4;
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar20 = dVar20 * *(double *)&param_1[0xe].field_0x10;
    dVar5 = *(double *)&param_1[0xe].field_0x18 * 0.0;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21._8_4_ = SUB84(dVar4,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = uVar25;
    dVar2 = auVar19._0_8_;
    auVar14 = blendpd(auVar12,auVar19,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
    auVar22._8_8_ = dVar20 * auVar12._8_8_ - dVar2 * dVar4;
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar3;
    auVar23._12_4_ = uVar25;
    auVar12._8_4_ = SUB84(dVar5,0);
    auVar12._0_8_ = dVar20;
    auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar12 = blendpd(auVar23,auVar12,2);
    auVar13._0_8_ = auVar12._0_8_ * dVar2 - auVar14._0_8_ * dVar20;
    auVar13._8_8_ = auVar12._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar5;
    auVar12 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar23 = blendpd(auVar22,auVar13,2);
    dVar5 = auVar22._8_8_ + auVar22._8_8_;
    dVar6 = auVar13._0_8_ + auVar13._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = uVar25;
    auVar15._8_4_ = SUB84(dVar6,0);
    auVar15._0_8_ = dVar5;
    auVar15._12_4_ = uVar25;
    auVar23 = blendpd(auVar15,auVar24,2);
    auVar18._0_8_ = auVar17._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
    auVar18._8_8_ = auVar24._0_8_ * auVar12._8_8_ - dVar2 * dVar6;
    auVar14._8_4_ = SUB84(auVar18._8_8_,0);
    auVar14._0_8_ = auVar18._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
    auVar12 = blendpd(auVar12,auVar19,2);
    auVar16._0_8_ = auVar23._0_8_ * dVar2 - auVar12._0_8_ * auVar24._0_8_;
    auVar16._8_8_ = auVar23._8_8_ * auVar19._8_8_ - auVar12._8_8_ * auVar24._8_8_;
    auVar19 = blendpd(auVar18,auVar16,2);
    dVar20 = auVar24._0_8_ * dVar7 + dVar20 + auVar19._0_8_;
    dVar3 = dVar5 * dVar7 + dVar3 + auVar14._8_8_;
    dVar4 = dVar6 * dVar7 + dVar4 + auVar16._0_8_;
  }
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar19;
  *(double *)((longlong)param_3 + 0x10) = dVar20;
  return;
}

// execGetTangentAtSplinePoint @ 147a00330

void __cdecl
USplineComponent::execGetTangentAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  char cVar13;
  int iVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  TVector<double>_u_0 *pTVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  char local_res10 [8];
  int local_res18 [2];
  TVector<double>_u_0 local_b8 [2];
  TVector<double> local_88 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar14 = local_res18[0];
  cVar13 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar15 = FSpline::IsEnabledStatic(), bVar15)) {
    iVar16 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
  }
  else {
    iVar16 = *(int *)(param_1 + 0x24);
  }
  uVar20 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  uVar11 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  if (iVar16 != 0) {
    uVar17 = GetClampedIndex((USplineComponent *)param_1,iVar14);
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar15 = FSpline::IsEnabledStatic(), bVar15)) {
      pTVar18 = &FSpline::GetOutTangent((FSpline *)&param_1[0x21].field_0x20,local_88,uVar17)->
                 field0_0x0;
    }
    else {
      uVar19 = 0;
      if ((int)uVar17 < *(int *)(param_1 + 0x24)) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pdVar1 = (double *)
               ((longlong)(int)uVar17 * 0x58 + 0x38 + *(longlong *)&param_1[0x23].field_0x20);
      pTVar18 = local_b8;
      local_b8[0]._s_0.X = *pdVar1;
      local_b8[0]._s_0.Y = pdVar1[1];
      local_b8[0]._s_0.Z =
           *(double *)((longlong)(int)uVar17 * 0x58 + 0x48 + *(longlong *)&param_1[0x23].field_0x20)
      ;
    }
    uVar10 = (((TVector<double>_u_0 *)&(pTVar18->_s_0).X)->_s_0).X;
    if (cVar13 == '\x01') {
      auVar28 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      dVar12 = *(double *)(param_1 + 0xd);
      dVar5 = *(double *)(param_1 + 0xe) * (double)uVar10;
      dVar6 = *(double *)&param_1[0xe].field_0x8 * (pTVar18->_s_0).Y;
      uVar33 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar29._8_4_ = SUB84(dVar6,0);
      auVar29._0_8_ = dVar5;
      auVar29._12_4_ = uVar33;
      dVar7 = (pTVar18->_s_0).Z * *(double *)&param_1[0xe].field_0x10;
      dVar8 = *(double *)&param_1[0xe].field_0x18 * 0.0;
      auVar23 = blendpd(auVar21,auVar28,2);
      dVar4 = auVar28._0_8_;
      auVar30._0_8_ = auVar29._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar5;
      auVar30._8_8_ = dVar7 * auVar21._8_8_ - dVar4 * dVar6;
      auVar31._8_4_ = SUB84(dVar6,0);
      auVar31._0_8_ = dVar5;
      auVar31._12_4_ = uVar33;
      auVar21._8_4_ = SUB84(dVar8,0);
      auVar21._0_8_ = dVar7;
      auVar21._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar21 = blendpd(auVar31,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar4 - auVar23._0_8_ * dVar7;
      auVar22._8_8_ = auVar21._8_8_ * auVar28._8_8_ - auVar23._8_8_ * dVar8;
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar31 = blendpd(auVar30,auVar22,2);
      auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      dVar8 = auVar30._8_8_ + auVar30._8_8_;
      dVar9 = auVar22._0_8_ + auVar22._0_8_;
      uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar26._8_4_ = SUB84(dVar9,0);
      auVar26._0_8_ = dVar8;
      auVar26._12_4_ = uVar33;
      auVar24._8_4_ = SUB84(dVar9,0);
      auVar24._0_8_ = dVar8;
      auVar24._12_4_ = uVar33;
      auVar31 = blendpd(auVar24,auVar32,2);
      auVar27._0_8_ = auVar26._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar8;
      auVar27._8_8_ = auVar32._0_8_ * auVar21._8_8_ - dVar4 * dVar9;
      auVar23._8_4_ = SUB84(auVar27._8_8_,0);
      auVar23._0_8_ = auVar27._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
      auVar21 = blendpd(auVar21,auVar28,2);
      auVar25._0_8_ = auVar31._0_8_ * dVar4 - auVar21._0_8_ * auVar32._0_8_;
      auVar25._8_8_ = auVar31._8_8_ * auVar28._8_8_ - auVar21._8_8_ * auVar32._8_8_;
      auVar28 = blendpd(auVar27,auVar25,2);
      uVar20 = auVar32._0_8_ * dVar12 + dVar7 + auVar28._0_8_;
      uVar10 = dVar8 * dVar12 + dVar5 + auVar23._8_8_;
      uVar11 = dVar9 * dVar12 + dVar6 + auVar25._0_8_;
    }
    else {
      uVar20 = (pTVar18->_s_0).Z;
      uVar11 = (pTVar18->_s_0).Y;
    }
  }
  auVar28._8_4_ = (int)uVar11;
  auVar28._0_8_ = uVar10;
  auVar28._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar28;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar20;
  return;
}

// execGetTangentAtTime @ 147a00690

void __cdecl USplineComponent::execGetTangentAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  TVector<double> *pTVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  char local_res8 [8];
  float local_res10 [2];
  int local_res18 [2];
  float local_res20 [2];
  TVector<double> local_b8;
  TVector<double> local_98 [4];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  fVar16 = local_res10[0];
  cVar12 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (*(float *)&param_1[0x26].field_0x14 == 0.0) goto LAB_147a00a13;
  if (local_res18[0] == 0) {
    fVar16 = GetInputKeyValueAtTime((USplineComponent *)param_1,local_res10[0]);
    if ((UE::SplineComponent::GUseSplineCurves != false) ||
       (bVar13 = FSpline::IsEnabledStatic(), !bVar13)) {
      pTVar14 = &local_b8;
      goto LAB_147a008fb;
    }
    pTVar14 = FSpline::EvaluateDerivative((FSpline *)&param_1[0x21].field_0x20,local_98,fVar16);
  }
  else {
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar13 = FSpline::IsEnabledStatic(), bVar13)) {
      fVar15 = FSpline::GetSplineLength((FSpline *)&param_1[0x21].field_0x20);
    }
    else {
      fVar15 = FSplineCurves::GetSplineLength((FSplineCurves *)&param_1[0x23].field_0x20);
    }
    fVar15 = (fVar16 / *(float *)&param_1[0x26].field_0x14) * fVar15;
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar13 = FSpline::IsEnabledStatic(), bVar13)) {
      fVar16 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar15);
    }
    else {
      local_res20[0] = 0.0;
      fVar16 = FInterpCurve<float>::Eval
                         ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar15,local_res20);
    }
    if ((UE::SplineComponent::GUseSplineCurves == false) &&
       (bVar13 = FSpline::IsEnabledStatic(), bVar13)) {
      pTVar14 = FSpline::EvaluateDerivative((FSpline *)&param_1[0x21].field_0x20,&local_b8,fVar16);
    }
    else {
      pTVar14 = local_98;
LAB_147a008fb:
      pTVar14 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                          ((FInterpCurve<UE::Math::TVector<double>_> *)&param_1[0x23].field_0x20,
                           pTVar14,fVar16,&UE::Math::TVector<double>::ZeroVector);
    }
  }
  uVar25 = (pTVar14->field0_0x0)._s_0.Z;
  uVar9 = (pTVar14->field0_0x0)._s_0.X;
  uVar11 = *(double *)((longlong)&pTVar14->field0_0x0 + 8);
  if (cVar12 == '\x01') {
    auVar19 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    dVar6 = (double)uVar25 * *(double *)&param_1[0xe].field_0x10;
    dVar7 = *(double *)&param_1[0xe].field_0x18 * 0.0;
    auVar17 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar24 = auVar19._8_8_;
    dVar3 = auVar19._0_8_;
    dVar4 = *(double *)(param_1 + 0xe) * (double)uVar9;
    dVar5 = *(double *)&param_1[0xe].field_0x8 * (double)uVar11;
    uVar30 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar26._8_4_ = SUB84(dVar5,0);
    auVar26._0_8_ = dVar4;
    auVar26._12_4_ = uVar30;
    auVar20 = blendpd(auVar17,auVar19,2);
    auVar27._0_8_ = auVar26._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar4;
    auVar27._8_8_ = dVar6 * auVar17._8_8_ - dVar3 * dVar5;
    auVar28._8_4_ = SUB84(dVar5,0);
    auVar28._0_8_ = dVar4;
    auVar28._12_4_ = uVar30;
    auVar17._8_4_ = SUB84(dVar7,0);
    auVar17._0_8_ = dVar6;
    auVar17._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar17 = blendpd(auVar28,auVar17,2);
    auVar18._0_8_ = auVar17._0_8_ * dVar3 - auVar20._0_8_ * dVar6;
    auVar18._8_8_ = auVar17._8_8_ * dVar24 - auVar20._8_8_ * dVar7;
    auVar17 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar28 = blendpd(auVar27,auVar18,2);
    dVar7 = auVar27._8_8_ + auVar27._8_8_;
    dVar10 = auVar18._0_8_ + auVar18._0_8_;
    uVar30 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar29._0_8_ = auVar28._0_8_ + auVar28._0_8_;
    auVar29._8_8_ = auVar28._8_8_ + auVar28._8_8_;
    auVar22._8_4_ = SUB84(dVar10,0);
    auVar22._0_8_ = dVar7;
    auVar22._12_4_ = uVar30;
    auVar20._8_4_ = SUB84(dVar10,0);
    auVar20._0_8_ = dVar7;
    auVar20._12_4_ = uVar30;
    auVar28 = blendpd(auVar20,auVar29,2);
    auVar23._0_8_ = auVar22._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar7;
    auVar23._8_8_ = auVar29._0_8_ * auVar17._8_8_ - dVar3 * dVar10;
    auVar17 = blendpd(auVar17,auVar19,2);
    auVar19._8_4_ = SUB84(auVar23._8_8_,0);
    auVar19._0_8_ = auVar23._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
    auVar21._0_8_ = auVar28._0_8_ * dVar3 - auVar17._0_8_ * auVar29._0_8_;
    auVar21._8_8_ = auVar28._8_8_ * dVar24 - auVar17._8_8_ * auVar29._8_8_;
    auVar17 = blendpd(auVar23,auVar21,2);
    uVar25 = auVar29._0_8_ * dVar24 + dVar6 + auVar17._0_8_;
    uVar9 = dVar7 * dVar24 + dVar4 + auVar19._8_8_;
    uVar11 = dVar10 * dVar24 + dVar5 + auVar21._0_8_;
  }
LAB_147a00a13:
  auVar8._8_4_ = (int)uVar11;
  auVar8._0_8_ = uVar9;
  auVar8._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar8;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar25;
  return;
}

// execGetTimeAtDistanceAlongSpline @ 147a00bc0

void __cdecl
USplineComponent::execGetTimeAtDistanceAlongSpline(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetTimeAtDistanceAlongSpline((USplineComponent *)param_1,local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetTransformAtDistanceAlongSpline @ 147a00c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USplineComponent::execGetTransformAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  undefined1 auStack_e8 [32];
  byte local_b8 [4];
  int local_b4;
  float local_b0;
  float local_ac;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_b4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  fVar5 = local_b0;
  bVar2 = local_b8[0];
  bVar4 = local_b4 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar3 = FSpline::IsEnabledStatic();
    if (bVar3) {
      fVar5 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar5);
      goto LAB_147a00db8;
    }
  }
  local_ac = 0.0;
  fVar5 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar5,&local_ac);
LAB_147a00db8:
  GetTransformAtSplineInputKey((USplineComponent *)param_1,&local_a8,fVar5,(uint)bVar2,bVar4);
  *(double *)param_3 = local_a8.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_a8.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_a8.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = local_a8.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = local_a8.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = local_a8.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = local_a8.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_a8.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_a8.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_a8.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_a8.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_a8.Scale3D.ZW.m128d_f64[1];
  return;
}

// execGetTransformAtSplineInputKey @ 147a00e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USplineComponent::execGetTransformAtSplineInputKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_c8 [32];
  byte local_98 [4];
  int local_94;
  float local_90 [2];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_90[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  local_98[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_94 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetTransformAtSplineInputKey
                     ((USplineComponent *)param_1,&local_88,local_90[0],(uint)local_98[0],
                      local_94 != 0);
  dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar3->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar3->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar3->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar2;
  dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar3->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar2;
  dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar3->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar2;
  return;
}

// execGetTransformAtSplinePoint @ 147a00fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USplineComponent::execGetTransformAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  bool bVar3;
  float fVar4;
  undefined1 auStack_d8 [32];
  byte local_a8 [4];
  int local_a4;
  int local_a0 [2];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a0[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_a8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_a4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  bVar2 = local_a8[0];
  bVar3 = local_a4 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar4 = GetInputKeyValueAtSplinePoint((USplineComponent *)param_1,local_a0[0]);
  GetTransformAtSplineInputKey((USplineComponent *)param_1,&local_98,fVar4,(uint)bVar2,bVar3);
  *(double *)param_3 = local_98.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_98.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_98.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = local_98.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = local_98.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = local_98.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = local_98.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_98.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_98.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_98.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_98.Scale3D.ZW.m128d_f64[1];
  return;
}

// execGetTransformAtTime @ 147a01150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USplineComponent::execGetTransformAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_118 [32];
  byte local_e8 [4];
  int local_e4;
  int local_e0;
  float local_dc;
  float local_d8 [4];
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_dc = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_dc,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_dc);
  }
  local_e8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_e4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e4);
  }
  bVar4 = local_e4 == 0;
  local_e0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  fVar7 = local_dc;
  bVar3 = local_e8[0];
  bVar5 = local_e0 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(float *)&param_1[0x26].field_0x14 == 0.0) {
    local_c8.Rotation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_c8.Rotation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_c8.Rotation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    local_c8.Rotation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    local_c8.Translation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    local_c8.Translation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    local_c8.Translation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    local_c8.Translation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_c8.Translation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    local_c8.Translation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_c8.Scale3D.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    local_c8.Scale3D.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    local_c8.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_c8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    goto LAB_147a01393;
  }
  if (bVar4) {
    fVar7 = GetInputKeyValueAtTime((USplineComponent *)param_1,local_dc);
  }
  else {
    if (UE::SplineComponent::GUseSplineCurves == false) {
      bVar4 = FSpline::IsEnabledStatic();
      if (!bVar4) goto LAB_147a01302;
      fVar6 = FSpline::GetSplineLength((FSpline *)&param_1[0x21].field_0x20);
    }
    else {
LAB_147a01302:
      fVar6 = FSplineCurves::GetSplineLength((FSplineCurves *)&param_1[0x23].field_0x20);
    }
    fVar6 = (fVar7 / *(float *)&param_1[0x26].field_0x14) * fVar6;
    if (UE::SplineComponent::GUseSplineCurves == false) {
      bVar4 = FSpline::IsEnabledStatic();
      if (bVar4) {
        fVar7 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar6);
        goto LAB_147a01364;
      }
    }
    local_d8[0] = 0.0;
    fVar7 = FInterpCurve<float>::Eval
                      ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar6,local_d8);
  }
LAB_147a01364:
  GetTransformAtSplineInputKey((USplineComponent *)param_1,&local_c8,fVar7,(uint)bVar3,bVar5);
LAB_147a01393:
  *(undefined4 *)param_3 = local_c8.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_c8.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_c8.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_c8.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_c8.Rotation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_c8.Rotation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_c8.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_c8.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_c8.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_c8.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_c8.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_c8.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_c8.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_c8.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_c8.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_c8.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_c8.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_c8.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_c8.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_c8.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_c8.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_c8.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_c8.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_c8.Scale3D.ZW.m128d_f64[1]._4_4_;
  return;
}

// execGetUpVectorAtDistanceAlongSpline @ 147a01470

void __cdecl
USplineComponent::execGetUpVectorAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  char local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  TQuat<double> local_b8 [5];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar8 = local_res18[0];
  cVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar7 = FSpline::IsEnabledStatic(), bVar7)) {
    fVar8 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar8);
  }
  else {
    local_res20[0] = 0.0;
    fVar8 = FInterpCurve<float>::Eval
                      ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar8,local_res20);
  }
  GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_b8,fVar8,Local);
  dVar4 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_b8[0].Y -
          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_b8[0].Z;
  dVar4 = dVar4 + dVar4;
  dVar19 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_b8[0].Z -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_b8[0].X;
  dVar19 = dVar19 + dVar19;
  dVar18 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_b8[0].X -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_b8[0].Y;
  dVar18 = dVar18 + dVar18;
  dVar11 = (dVar18 * local_b8[0].Y - dVar19 * local_b8[0].Z) +
           local_b8[0].W * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar12 = (dVar4 * local_b8[0].Z - dVar18 * local_b8[0].X) +
           local_b8[0].W * dVar19 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar19 = (dVar19 * local_b8[0].X - dVar4 * local_b8[0].Y) +
           local_b8[0].W * dVar18 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if (cVar6 == '\x01') {
    auVar10 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    auVar21._8_8_ = dVar12;
    auVar21._0_8_ = dVar11;
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar5 = *(double *)(param_1 + 0xd);
    dVar4 = auVar10._0_8_;
    auVar13 = blendpd(auVar9,auVar10,2);
    auVar20._0_8_ = dVar12 * auVar9._0_8_ - auVar9._8_8_ * dVar11;
    auVar20._8_8_ = dVar19 * auVar9._8_8_ - dVar4 * dVar12;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar19;
    auVar9 = blendpd(auVar21,auVar9,2);
    auVar14._0_8_ = auVar9._0_8_ * dVar4 - auVar13._0_8_ * dVar19;
    auVar14._8_8_ = auVar9._8_8_ * auVar10._8_8_ - auVar13._8_8_ * 0.0;
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar21 = blendpd(auVar20,auVar14,2);
    dVar18 = auVar20._8_8_ + auVar20._8_8_;
    dVar3 = auVar14._0_8_ + auVar14._0_8_;
    uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    auVar16._8_4_ = SUB84(dVar3,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = uVar23;
    auVar13._8_4_ = SUB84(dVar3,0);
    auVar13._0_8_ = dVar18;
    auVar13._12_4_ = uVar23;
    auVar14 = blendpd(auVar13,auVar22,2);
    auVar21 = blendpd(auVar9,auVar10,2);
    auVar17._0_8_ = auVar16._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar18;
    auVar17._8_8_ = auVar22._0_8_ * auVar9._8_8_ - dVar4 * dVar3;
    auVar15._0_8_ = auVar14._0_8_ * dVar4 - auVar21._0_8_ * auVar22._0_8_;
    auVar15._8_8_ = auVar14._8_8_ * auVar10._8_8_ - auVar21._8_8_ * auVar22._8_8_;
    auVar10._8_4_ = SUB84(auVar17._8_8_,0);
    auVar10._0_8_ = auVar17._0_8_;
    auVar10._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
    auVar9 = blendpd(auVar17,auVar15,2);
    dVar19 = auVar22._0_8_ * dVar5 + dVar19 + auVar9._0_8_;
    dVar11 = dVar18 * dVar5 + dVar11 + auVar10._8_8_;
    dVar12 = dVar3 * dVar5 + dVar12 + auVar15._0_8_;
  }
  auVar2._8_4_ = SUB84(dVar12,0);
  auVar2._0_8_ = dVar11;
  auVar2._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar19;
  return;
}

// execGetUpVectorAtSplineInputKey @ 147a017f0

void __cdecl
USplineComponent::execGetUpVectorAtSplineInputKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  char local_res10 [8];
  float local_res18 [2];
  TQuat<double> local_a8 [5];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_a8,local_res18[0],Local);
  dVar4 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_a8[0].Y -
          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_a8[0].Z;
  dVar4 = dVar4 + dVar4;
  dVar17 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_a8[0].Z -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_a8[0].X;
  dVar17 = dVar17 + dVar17;
  dVar16 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_a8[0].X -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_a8[0].Y;
  dVar16 = dVar16 + dVar16;
  dVar9 = (dVar16 * local_a8[0].Y - dVar17 * local_a8[0].Z) +
          local_a8[0].W * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar10 = (dVar4 * local_a8[0].Z - dVar16 * local_a8[0].X) +
           local_a8[0].W * dVar17 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar17 = (dVar17 * local_a8[0].X - dVar4 * local_a8[0].Y) +
           local_a8[0].W * dVar16 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if (cVar6 == '\x01') {
    auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    auVar19._8_8_ = dVar10;
    auVar19._0_8_ = dVar9;
    auVar7 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar5 = *(double *)(param_1 + 0xd);
    dVar4 = auVar8._0_8_;
    auVar11 = blendpd(auVar7,auVar8,2);
    auVar18._0_8_ = dVar10 * auVar7._0_8_ - auVar7._8_8_ * dVar9;
    auVar18._8_8_ = dVar17 * auVar7._8_8_ - dVar4 * dVar10;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar17;
    auVar7 = blendpd(auVar19,auVar7,2);
    auVar12._0_8_ = auVar7._0_8_ * dVar4 - auVar11._0_8_ * dVar17;
    auVar12._8_8_ = auVar7._8_8_ * auVar8._8_8_ - auVar11._8_8_ * 0.0;
    auVar7 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar19 = blendpd(auVar18,auVar12,2);
    dVar16 = auVar18._8_8_ + auVar18._8_8_;
    dVar3 = auVar12._0_8_ + auVar12._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar14._8_4_ = SUB84(dVar3,0);
    auVar14._0_8_ = dVar16;
    auVar14._12_4_ = uVar21;
    auVar11._8_4_ = SUB84(dVar3,0);
    auVar11._0_8_ = dVar16;
    auVar11._12_4_ = uVar21;
    auVar12 = blendpd(auVar11,auVar20,2);
    auVar19 = blendpd(auVar7,auVar8,2);
    auVar15._0_8_ = auVar14._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar16;
    auVar15._8_8_ = auVar20._0_8_ * auVar7._8_8_ - dVar4 * dVar3;
    auVar13._0_8_ = auVar12._0_8_ * dVar4 - auVar19._0_8_ * auVar20._0_8_;
    auVar13._8_8_ = auVar12._8_8_ * auVar8._8_8_ - auVar19._8_8_ * auVar20._8_8_;
    auVar8._8_4_ = SUB84(auVar15._8_8_,0);
    auVar8._0_8_ = auVar15._0_8_;
    auVar8._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar7 = blendpd(auVar15,auVar13,2);
    dVar17 = auVar20._0_8_ * dVar5 + dVar17 + auVar7._0_8_;
    dVar9 = dVar16 * dVar5 + dVar9 + auVar8._8_8_;
    dVar10 = dVar3 * dVar5 + dVar10 + auVar13._0_8_;
  }
  auVar2._8_4_ = SUB84(dVar10,0);
  auVar2._0_8_ = dVar9;
  auVar2._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar17;
  return;
}

// execGetUpVectorAtSplinePoint @ 147a01b30

void __cdecl
USplineComponent::execGetUpVectorAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  char local_res10 [8];
  int local_res18 [4];
  TQuat<double> local_b8 [5];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar7 = GetInputKeyValueAtSplinePoint((USplineComponent *)param_1,local_res18[0]);
  GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_b8,fVar7,Local);
  dVar4 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_b8[0].Y -
          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_b8[0].Z;
  dVar4 = dVar4 + dVar4;
  dVar18 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_b8[0].Z -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_b8[0].X;
  dVar18 = dVar18 + dVar18;
  dVar17 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_b8[0].X -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_b8[0].Y;
  dVar17 = dVar17 + dVar17;
  dVar10 = (dVar17 * local_b8[0].Y - dVar18 * local_b8[0].Z) +
           local_b8[0].W * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar11 = (dVar4 * local_b8[0].Z - dVar17 * local_b8[0].X) +
           local_b8[0].W * dVar18 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar18 = (dVar18 * local_b8[0].X - dVar4 * local_b8[0].Y) +
           local_b8[0].W * dVar17 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if (cVar6 == '\x01') {
    auVar9 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
    auVar20._8_8_ = dVar11;
    auVar20._0_8_ = dVar10;
    auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    dVar5 = *(double *)(param_1 + 0xd);
    dVar4 = auVar9._0_8_;
    auVar12 = blendpd(auVar8,auVar9,2);
    auVar19._0_8_ = dVar11 * auVar8._0_8_ - auVar8._8_8_ * dVar10;
    auVar19._8_8_ = dVar18 * auVar8._8_8_ - dVar4 * dVar11;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar18;
    auVar8 = blendpd(auVar20,auVar8,2);
    auVar13._0_8_ = auVar8._0_8_ * dVar4 - auVar12._0_8_ * dVar18;
    auVar13._8_8_ = auVar8._8_8_ * auVar9._8_8_ - auVar12._8_8_ * 0.0;
    auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
    auVar20 = blendpd(auVar19,auVar13,2);
    dVar17 = auVar19._8_8_ + auVar19._8_8_;
    dVar3 = auVar13._0_8_ + auVar13._0_8_;
    uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    auVar15._8_4_ = SUB84(dVar3,0);
    auVar15._0_8_ = dVar17;
    auVar15._12_4_ = uVar22;
    auVar12._8_4_ = SUB84(dVar3,0);
    auVar12._0_8_ = dVar17;
    auVar12._12_4_ = uVar22;
    auVar13 = blendpd(auVar12,auVar21,2);
    auVar20 = blendpd(auVar8,auVar9,2);
    auVar16._0_8_ = auVar15._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar17;
    auVar16._8_8_ = auVar21._0_8_ * auVar8._8_8_ - dVar4 * dVar3;
    auVar14._0_8_ = auVar13._0_8_ * dVar4 - auVar20._0_8_ * auVar21._0_8_;
    auVar14._8_8_ = auVar13._8_8_ * auVar9._8_8_ - auVar20._8_8_ * auVar21._8_8_;
    auVar9._8_4_ = SUB84(auVar16._8_8_,0);
    auVar9._0_8_ = auVar16._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
    auVar8 = blendpd(auVar16,auVar14,2);
    dVar18 = auVar21._0_8_ * dVar5 + dVar18 + auVar8._0_8_;
    dVar10 = dVar17 * dVar5 + dVar10 + auVar9._8_8_;
    dVar11 = dVar3 * dVar5 + dVar11 + auVar14._0_8_;
  }
  auVar2._8_4_ = SUB84(dVar11,0);
  auVar2._0_8_ = dVar10;
  auVar2._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar18;
  return;
}

// execGetUpVectorAtTime @ 147a01e70

void __cdecl USplineComponent::execGetUpVectorAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  char local_res8 [8];
  float local_res10 [2];
  int local_res18 [2];
  float local_res20 [2];
  TQuat<double> local_e8 [5];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  fVar11 = local_res10[0];
  cVar8 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (*(float *)&param_1[0x26].field_0x14 != 0.0) {
    if (local_res18[0] == 0) {
      fVar11 = GetInputKeyValueAtTime((USplineComponent *)param_1,local_res10[0]);
      GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_e8,fVar11,Local);
      dVar7 = local_e8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
              local_e8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      dVar7 = dVar7 + dVar7;
      dVar5 = local_e8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
              local_e8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      dVar5 = dVar5 + dVar5;
      dVar12 = local_e8[0].Y * dVar7;
      dVar22 = local_e8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
               local_e8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      dVar22 = dVar22 + dVar22;
      dVar6 = local_e8[0].X * dVar5;
      dVar15 = local_e8[0].X * dVar22;
      local_e8[0].X =
           (local_e8[0].Y * dVar22 - local_e8[0].Z * dVar5) +
           local_e8[0].W * dVar7 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      local_e8[0].Y =
           (local_e8[0].Z * dVar7 - dVar15) +
           local_e8[0].W * dVar5 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      local_e8[0].Z =
           (dVar6 - dVar12) +
           local_e8[0].W * dVar22 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    }
    else {
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
        fVar10 = FSpline::GetSplineLength((FSpline *)&param_1[0x21].field_0x20);
      }
      else {
        fVar10 = FSplineCurves::GetSplineLength((FSplineCurves *)&param_1[0x23].field_0x20);
      }
      fVar10 = (fVar11 / *(float *)&param_1[0x26].field_0x14) * fVar10;
      if ((UE::SplineComponent::GUseSplineCurves == false) &&
         (bVar9 = FSpline::IsEnabledStatic(), bVar9)) {
        fVar11 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar10);
      }
      else {
        local_res20[0] = 0.0;
        fVar11 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar10,local_res20);
      }
      GetQuaternionAtSplineInputKey((USplineComponent *)param_1,local_e8,fVar11,Local);
      dVar6 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_e8[0].Y -
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_e8[0].Z;
      dVar6 = dVar6 + dVar6;
      dVar5 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_e8[0].Z -
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_e8[0].X;
      dVar22 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_e8[0].X -
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * local_e8[0].Y;
      dVar5 = dVar5 + dVar5;
      dVar22 = dVar22 + dVar22;
      dVar12 = dVar5 * local_e8[0].Z;
      dVar15 = dVar22 * local_e8[0].Y;
      dVar7 = dVar6 * local_e8[0].Y;
      local_e8[0].Y =
           (dVar6 * local_e8[0].Z - dVar22 * local_e8[0].X) +
           local_e8[0].W * dVar5 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      local_e8[0].Z =
           (dVar5 * local_e8[0].X - dVar7) +
           local_e8[0].W * dVar22 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      local_e8[0].X =
           (dVar15 - dVar12) +
           local_e8[0].W * dVar6 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    }
    uVar23 = local_e8[0].Z;
    uVar3 = local_e8[0].X;
    uVar4 = local_e8[0].Y;
    if (cVar8 == '\x01') {
      auVar21 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
      auVar25._8_8_ = local_e8[0].Y;
      auVar25._0_8_ = local_e8[0].X;
      auVar13 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      dVar12 = *(double *)(param_1 + 0xd);
      dVar5 = auVar21._0_8_;
      auVar16 = blendpd(auVar13,auVar21,2);
      auVar24._0_8_ = local_e8[0].Y * auVar13._0_8_ - auVar13._8_8_ * local_e8[0].X;
      auVar24._8_8_ = local_e8[0].Z * auVar13._8_8_ - dVar5 * local_e8[0].Y;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_e8[0].Z;
      auVar13 = blendpd(auVar25,auVar13,2);
      auVar14._0_8_ = auVar13._0_8_ * dVar5 - auVar16._0_8_ * local_e8[0].Z;
      auVar14._8_8_ = auVar13._8_8_ * auVar21._8_8_ - auVar16._8_8_ * 0.0;
      auVar13 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
      auVar25 = blendpd(auVar24,auVar14,2);
      dVar6 = auVar24._8_8_ + auVar24._8_8_;
      dVar7 = auVar14._0_8_ + auVar14._0_8_;
      uVar27 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar26._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar26._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar19._8_4_ = SUB84(dVar7,0);
      auVar19._0_8_ = dVar6;
      auVar19._12_4_ = uVar27;
      auVar17._8_4_ = SUB84(dVar7,0);
      auVar17._0_8_ = dVar6;
      auVar17._12_4_ = uVar27;
      auVar25 = blendpd(auVar17,auVar26,2);
      auVar20._0_8_ = auVar19._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar6;
      auVar20._8_8_ = auVar26._0_8_ * auVar13._8_8_ - dVar5 * dVar7;
      auVar13 = blendpd(auVar13,auVar21,2);
      auVar16._8_4_ = SUB84(auVar20._8_8_,0);
      auVar16._0_8_ = auVar20._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
      auVar18._0_8_ = auVar25._0_8_ * dVar5 - auVar13._0_8_ * auVar26._0_8_;
      auVar18._8_8_ = auVar25._8_8_ * auVar21._8_8_ - auVar13._8_8_ * auVar26._8_8_;
      auVar21 = blendpd(auVar20,auVar18,2);
      uVar23 = auVar26._0_8_ * dVar12 + local_e8[0].Z + auVar21._0_8_;
      uVar3 = dVar6 * dVar12 + local_e8[0].X + auVar16._8_8_;
      uVar4 = dVar7 * dVar12 + local_e8[0].Y + auVar18._0_8_;
    }
  }
  auVar21._8_4_ = (int)uVar4;
  auVar21._0_8_ = uVar3;
  auVar21._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar21;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar23;
  return;
}

// execGetVectorPropertyAtSplinePoint @ 147a023b0

void __cdecl
USplineComponent::execGetVectorPropertyAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  UObject *pUVar6;
  FProperty *pFVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  uint local_res8 [2];
  FName local_res10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar4 = local_res10;
  uVar10 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = (UObject *)(**(code **)(*(longlong *)param_1 + 0xa90))(param_1);
  if (pUVar6 != (UObject *)0x0) {
    pFVar7 = UStruct::FindPropertyByName(*(UStruct **)&pUVar6->field_0x10,FVar4);
    if (pFVar7 != (FProperty *)0x0) {
      plVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar7,pUVar6,0);
      iVar2 = (int)plVar8[1];
      if (0 < iVar2) {
        uVar9 = iVar2 - 1U;
        if ((int)uVar10 < (int)(iVar2 - 1U)) {
          uVar9 = uVar10;
        }
        uVar10 = 0;
        if (0 < (int)uVar9) {
          uVar10 = uVar9;
        }
        uVar9 = 0;
        if ((int)uVar10 < iVar2) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        puVar1 = (undefined4 *)((longlong)(int)uVar10 * 0x58 + 8 + *plVar8);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        uVar15 = *(undefined8 *)((longlong)(int)uVar10 * 0x58 + 0x18 + *plVar8);
        goto LAB_147a02529;
      }
    }
  }
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
LAB_147a02529:
  *(undefined4 *)param_3 = uVar11;
  *(undefined4 *)((longlong)param_3 + 4) = uVar12;
  *(undefined4 *)((longlong)param_3 + 8) = uVar13;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar14;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar15;
  return;
}

// execGetWorldDirectionAtDistanceAlongSpline @ 147a02590

void __cdecl
USplineComponent::execGetWorldDirectionAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [2];
  float local_res18 [2];
  TVector<double>_u_0 local_38 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar3);
      goto LAB_147a02648;
    }
  }
  local_res18[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar3,local_res18);
LAB_147a02648:
  GetDirectionAtSplineInputKey
            ((USplineComponent *)param_1,(TVector<double> *)&local_38[0]._s_0,fVar3,World);
  *(undefined8 *)param_3 = local_38[0]._s_0.X;
  *(undefined8 *)((longlong)param_3 + 8) = local_38[0]._s_0.Y;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_38[0]._s_0.Z;
  return;
}

// execGetWorldDirectionAtTime @ 147a02690

void __cdecl
USplineComponent::execGetWorldDirectionAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  float local_res18 [4];
  TVector<double>_u_0 local_38;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetDirectionAtTime((USplineComponent *)param_1,(TVector<double> *)&local_38._s_0,local_res18[0],
                     World,local_res10[0] != 0);
  *(double *)param_3 = local_38._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_38._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_38._s_0.Z;
  return;
}

// execGetWorldLocationAtDistanceAlongSpline @ 147a027a0

void __cdecl
USplineComponent::execGetWorldLocationAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [2];
  float local_res18 [2];
  TVector<double>_u_0 local_38 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar3);
      goto LAB_147a02858;
    }
  }
  local_res18[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar3,local_res18);
LAB_147a02858:
  GetLocationAtSplineInputKey
            ((USplineComponent *)param_1,(TVector<double> *)&local_38[0]._s_0,fVar3,World);
  *(undefined8 *)param_3 = local_38[0]._s_0.X;
  *(undefined8 *)((longlong)param_3 + 8) = local_38[0]._s_0.Y;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_38[0]._s_0.Z;
  return;
}

// execGetWorldLocationAtSplinePoint @ 147a028a0

void __cdecl
USplineComponent::execGetWorldLocationAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  TVector<double>_u_0 local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetLocationAtSplinePoint
            ((USplineComponent *)param_1,(TVector<double> *)&local_28._s_0,local_res10[0],World);
  *(double *)param_3 = local_28._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_28._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_28._s_0.Z;
  return;
}

// execGetWorldLocationAtTime @ 147a02960

void __cdecl
USplineComponent::execGetWorldLocationAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  float local_res18 [4];
  TVector<double>_u_0 local_38;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetLocationAtTime((USplineComponent *)param_1,(TVector<double> *)&local_38._s_0,local_res18[0],
                    World,local_res10[0] != 0);
  *(double *)param_3 = local_38._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_38._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_38._s_0.Z;
  return;
}

// execGetWorldRotationAtDistanceAlongSpline @ 147a02a70

void __cdecl
USplineComponent::execGetWorldRotationAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TQuat<double> *this;
  float fVar3;
  float local_res10 [2];
  float local_res18 [2];
  TRotator<double> local_58;
  TQuat<double> local_38;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar3);
      goto LAB_147a02b36;
    }
  }
  local_res18[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar3,local_res18);
LAB_147a02b36:
  this = GetQuaternionAtSplineInputKey((USplineComponent *)param_1,&local_38,fVar3,World);
  UE::Math::TQuat<double>::Rotator(this,&local_58);
  *(double *)param_3 = local_58.Pitch;
  *(double *)((longlong)param_3 + 8) = local_58.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_58.Roll;
  return;
}

// execGetWorldRotationAtTime @ 147a02b90

void __cdecl
USplineComponent::execGetWorldRotationAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  float local_res18 [4];
  TRotator<double> local_38;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetRotationAtTime((USplineComponent *)param_1,&local_38,local_res18[0],World,local_res10[0] != 0);
  *(double *)param_3 = local_38.Pitch;
  *(double *)((longlong)param_3 + 8) = local_38.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_38.Roll;
  return;
}

// execGetWorldTangentAtDistanceAlongSpline @ 147a02ca0

void __cdecl
USplineComponent::execGetWorldTangentAtDistanceAlongSpline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [2];
  float local_res18 [2];
  TVector<double>_u_0 local_38 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar2 = FSpline::IsEnabledStatic();
    if (bVar2) {
      fVar3 = FSpline::GetParameterAtDistance((FSpline *)&param_1[0x21].field_0x20,fVar3);
      goto LAB_147a02d58;
    }
  }
  local_res18[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&param_1[0x25].field_0x18,fVar3,local_res18);
LAB_147a02d58:
  GetTangentAtSplineInputKey
            ((USplineComponent *)param_1,(TVector<double> *)&local_38[0]._s_0,fVar3,World);
  *(undefined8 *)param_3 = local_38[0]._s_0.X;
  *(undefined8 *)((longlong)param_3 + 8) = local_38[0]._s_0.Y;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_38[0]._s_0.Z;
  return;
}

// execIsClosedLoop @ 147a02e80

void __cdecl USplineComponent::execIsClosedLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x26].field_0x1d;
  return;
}

// execPopulateFromLegacy @ 147a03620

void __cdecl
USplineComponent::execPopulateFromLegacy(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSplineCurves::operator=
            ((FSplineCurves *)&param_1[0x23].field_0x20,(FSplineCurves *)&param_1[0x23].field_0x20);
  FSpline::operator=((FSpline *)&param_1[0x21].field_0x20,(FSplineCurves *)&param_1[0x23].field_0x20
                    );
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate((USplineComponent *)param_1);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &param_1[0x2a].field_0x8);
  return;
}

// execRemovePropertyAtIndex @ 147a03750

void __cdecl
USplineComponent::execRemovePropertyAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int local_res10 [2];
  FName local_res20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FVar3 = local_res20;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar4 = FSpline::IsEnabledStatic();
    if ((bVar4) && (param_1[0x21].field_0x20 == '\x02')) {
      FSpline::RemoveAttributeValue<float>((FSpline *)&param_1[0x21].field_0x20,iVar2,FVar3);
    }
  }
  return;
}

// execRemovePropertyChannel @ 147a03850

void __cdecl
USplineComponent::execRemovePropertyChannel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  bool bVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((UE::SplineComponent::GUseSplineCurves == false) &&
      (bVar3 = FSpline::IsEnabledStatic(), bVar3)) && (param_1[0x21].field_0x20 == '\x02')) {
    bVar3 = FSpline::RemoveAttributeChannel((FSpline *)&param_1[0x21].field_0x20,FVar2);
    *(bool *)param_3 = bVar3;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveSplinePoint @ 147a03910

void __cdecl USplineComponent::execRemoveSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveSplinePoint((USplineComponent *)param_1,local_res20[0],local_res10[0] != 0);
  return;
}

// execSetClosedLoop @ 147a04040

void __cdecl USplineComponent::execSetClosedLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x26].field_0x1d = bVar2;
  param_1[0x26].field_0x1e = 0;
  if (local_res10[0] != 0) {
    (**(code **)(*(longlong *)param_1 + 0xad0))(param_1);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &param_1[0x2a].field_0x8);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate((USplineComponent *)param_1);
  }
  return;
}

// execSetClosedLoopAtPosition @ 147a04140

void __cdecl
USplineComponent::execSetClosedLoopAtPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  int local_res20 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x26].field_0x20 = local_res10[0];
  param_1[0x26].field_0x1d = bVar2;
  param_1[0x26].field_0x1e = bVar2;
  if (local_res20[0] != 0) {
    (**(code **)(*(longlong *)param_1 + 0xad0))(param_1);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &param_1[0x2a].field_0x8);
  if (UE::SplineComponent::GValidateOnChange != false) {
    Validate((USplineComponent *)param_1);
  }
  return;
}

// execSetDefaultUpVector @ 147a04540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USplineComponent::execSetDefaultUpVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  FProperty *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  char local_c8 [8];
  undefined1 local_c0 [168];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c0);
  }
  local_c8[0] = '\0';
  pauVar11 = (undefined1 (*) [16])local_c0;
  if ((undefined1 (*) [16])param_2->MostRecentPropertyAddress != (undefined1 (*) [16])0x0) {
    pauVar11 = (undefined1 (*) [16])param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_c8[0] == '\x01') {
    dVar3 = *(double *)&param_1[0xc].field_0x10 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar4 = *(double *)&param_1[0xc].field_0x18 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar5 = *(double *)&param_1[0xc].field_0x20 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar6 = *(double *)(param_1 + 0xd) *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar21._8_4_ = SUB84(dVar4,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar5;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar22 = blendpd(auVar21,auVar1,2);
    auVar1 = *pauVar11;
    auVar15._8_4_ = SUB84(dVar5,0);
    auVar15._0_8_ = dVar4;
    auVar15._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar18 = *(double *)pauVar11[1];
    dVar9 = auVar1._8_8_;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar18;
    auVar19 = blendpd(auVar1,auVar26,2);
    auVar32._0_8_ = dVar9 * dVar3 - dVar4 * auVar1._0_8_;
    auVar32._8_8_ = dVar18 * dVar4 - auVar15._8_8_ * dVar9;
    auVar20._0_8_ = auVar19._0_8_ * dVar5 - auVar22._0_8_ * dVar18;
    auVar20._8_8_ = auVar19._8_8_ * dVar6 - auVar22._8_8_ * 0.0;
    dVar7 = auVar32._8_8_ + auVar32._8_8_;
    dVar8 = auVar20._0_8_ + auVar20._0_8_;
    uVar28 = SUB84(dVar8,0);
    uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar19 = blendpd(auVar32,auVar20,2);
    auVar30._8_4_ = uVar28;
    auVar30._0_8_ = dVar7;
    auVar30._12_4_ = uVar29;
    auVar16._8_4_ = uVar28;
    auVar16._0_8_ = dVar7;
    auVar16._12_4_ = uVar29;
    auVar25._8_4_ = uVar28;
    auVar25._0_8_ = dVar7;
    auVar25._12_4_ = uVar29;
    auVar33._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar33._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar19 = *(undefined1 (*) [16])(param_1 + 0xe);
    auVar31._0_8_ = auVar30._8_8_ * dVar3 - dVar7 * dVar4;
    auVar31._8_8_ = auVar33._0_8_ * dVar4 - auVar16._8_8_ * dVar5;
    auVar26 = blendpd(auVar25,auVar33,2);
    auVar17._8_4_ = SUB84(auVar33._8_8_,0);
    auVar17._0_8_ = auVar33._0_8_;
    auVar17._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
    auVar27._0_8_ = auVar26._0_8_ * dVar5 - auVar33._0_8_ * auVar22._0_8_;
    auVar27._8_8_ = auVar26._8_8_ * dVar6 - auVar17._8_8_ * auVar22._8_8_;
    auVar26 = *(undefined1 (*) [16])&param_1[0xe].field_0x10;
    lVar12 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar26._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar26._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar23._0_8_ =
         (double)CONCAT44(auVar19._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar19._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar23._8_4_ = auVar19._8_4_ & _UNK_15061cc88;
    auVar23._12_4_ = auVar19._12_4_ & _UNK_15061cc8c;
    lVar13 = -(ulonglong)(auVar23._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar14 = -(ulonglong)(auVar23._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
    auVar22._8_4_ = SUB84(auVar31._8_8_,0);
    auVar22._0_8_ = auVar31._0_8_;
    auVar22._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
    auVar24._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar19._4_4_,
                          ~(uint)lVar13 & auVar19._0_4_);
    auVar24._8_4_ = ~(uint)lVar14 & auVar19._8_4_;
    auVar24._12_4_ = ~(uint)((ulonglong)lVar14 >> 0x20) & auVar19._12_4_;
    auVar19._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar19._0_8_ = auVar26._0_8_;
    auVar19._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
    auVar26 = blendpd(auVar31,auVar27,2);
    dVar18 = (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar19._4_4_,
                              ~(uint)lVar12 & auVar19._0_4_) *
             (auVar33._0_8_ * dVar6 + dVar18 + auVar26._0_8_);
    *(double *)&param_1[0x29].field_0x18 =
         auVar24._0_8_ * (dVar7 * dVar6 + auVar1._0_8_ + auVar22._8_8_);
    *(double *)&param_1[0x29].field_0x20 = auVar24._8_8_ * (dVar8 * dVar6 + dVar9 + auVar27._0_8_);
  }
  else {
    uVar10 = *(undefined8 *)(*pauVar11 + 8);
    *(undefined8 *)&param_1[0x29].field_0x18 = *(undefined8 *)*pauVar11;
    *(undefined8 *)&param_1[0x29].field_0x20 = uVar10;
    dVar18 = *(double *)pauVar11[1];
  }
  *(double *)(param_1 + 0x2a) = dVar18;
  (**(code **)(*(longlong *)param_1 + 0xad0))(param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &param_1[0x2a].field_0x8);
  return;
}

// execSetDrawDebug @ 147a04900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USplineComponent::execSetDrawDebug(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x26].field_0x1c = local_res8[0] != 0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetFloatPropertyAtIndex @ 147a05640

void __cdecl
USplineComponent::execSetFloatPropertyAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  int local_res10 [4];
  float local_res20 [2];
  FName local_28;
  FName local_20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20[0] = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_28;
  if ((UE::SplineComponent::GUseSplineCurves == false) && (param_1[0x21].field_0x20 == '\x02')) {
    FSpline::SetAttributeValue<float>
              ((FSpline *)&param_1[0x21].field_0x20,local_res10[0],local_res20,&local_20);
  }
  return;
}

// execSetFloatPropertyAtSplineInputKey @ 147a05770

void __cdecl
USplineComponent::execSetFloatPropertyAtSplineInputKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  FName local_res20;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FVar3 = local_res20;
  fVar2 = local_res10[0];
  local_res18[0] = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::SplineComponent::GUseSplineCurves == false) && (param_1[0x21].field_0x20 == '\x02')) {
    bVar4 = FSpline::HasAttributeChannel((FSpline *)&param_1[0x21].field_0x20,local_res20);
    if (bVar4) {
      iVar5 = FSpline::AddAttributeValue<float>
                        ((FSpline *)&param_1[0x21].field_0x20,fVar2,local_res18,FVar3);
      *(int *)param_3 = iVar5;
      return;
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execSetFloatPropertyInputKeyAtIndex @ 147a058e0

void __cdecl
USplineComponent::execSetFloatPropertyInputKeyAtIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  float local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res18;
  if ((UE::SplineComponent::GUseSplineCurves == false) && (param_1[0x21].field_0x20 == '\x02')) {
    iVar2 = FSpline::SetAttributeParameter<float>
                      ((FSpline *)&param_1[0x21].field_0x20,local_res10[0],local_res8[0],
                       &local_res20);
    *(int *)param_3 = iVar2;
    return;
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execSetLocationAtSplinePoint @ 147a06a60

void __cdecl
USplineComponent::execSetLocationAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  byte local_res10 [16];
  int local_res20 [2];
  int local_38 [2];
  TVector<double> local_30;
  
  local_38[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10[0] = 0;
  pTVar2 = &local_30;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLocationAtSplinePoint
            ((USplineComponent *)param_1,local_38[0],pTVar2,(uint)local_res10[0],local_res20[0] != 0
            );
  return;
}

// execSetOverrideConstructionScript @ 147a07b00

void __cdecl
USplineComponent::execSetOverrideConstructionScript(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xad8))(param_1,local_res8[0] != 0);
  return;
}

// execSetRotationAtSplinePoint @ 147a08590

void __cdecl
USplineComponent::execSetRotationAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  int iVar3;
  TQuat<double> *pTVar4;
  TRotator<double> *this;
  bool bVar5;
  byte local_res10 [8];
  int local_res20 [2];
  int local_58 [2];
  TRotator<double> local_50;
  TQuat<double> local_38;
  
  local_58[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res10[0] = 0;
  this = &local_50;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    this = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  iVar3 = local_58[0];
  bVar2 = local_res10[0];
  bVar5 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = UE::Math::TRotator<double>::Quaternion(this,&local_38);
  SetQuaternionAtSplinePoint((USplineComponent *)param_1,iVar3,pTVar4,(uint)bVar2,bVar5);
  return;
}

// execSetScaleAtSplinePoint @ 147a08730

void __cdecl
USplineComponent::execSetScaleAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  TVector<double> *pTVar15;
  bool bVar16;
  int local_res10 [4];
  uint local_res20 [2];
  TVector<double> local_40;
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = 0;
  pTVar15 = &local_40;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar15 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar10 = local_res20[0];
  bVar16 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar13 = (longlong)(int)local_res20[0];
  if ((UE::SplineComponent::GUseSplineCurves == false) &&
     (bVar11 = FSpline::IsEnabledStatic(), bVar11)) {
    iVar12 = FSpline::GetNumControlPoints((FSpline *)&param_1[0x21].field_0x20);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x24);
  }
  if ((-1 < (int)uVar10) && ((int)uVar10 < iVar12)) {
    uVar6 = *(undefined4 *)&pTVar15->field0_0x0;
    uVar7 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 4);
    uVar8 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 8);
    uVar9 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 0xc);
    dVar2 = (pTVar15->field0_0x0)._s_0.Z;
    uVar14 = 0;
    if ((int)uVar10 < *(int *)&param_1[0x25].field_0x8) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0x25);
    puVar1 = (undefined4 *)(lVar13 * 0x58 + 8 + lVar4);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    *(double *)(lVar13 * 0x58 + 0x18 + lVar4) = dVar2;
    FSpline::SetScale((FSpline *)&param_1[0x21].field_0x20,uVar10,pTVar15);
    if (bVar16) {
      (**(code **)(*(longlong *)param_1 + 0xad0))(param_1);
    }
    if (UE::SplineComponent::GValidateOnChange != false) {
      Validate((USplineComponent *)param_1);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &param_1[0x2a].field_0x8);
  }
  return;
}

// execSetSelectedSplineSegmentColor @ 147a08970

void __cdecl
USplineComponent::execSetSelectedSplineSegmentColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetSplineLocalPoints @ 147a092a0

void __cdecl
USplineComponent::execSetSplineLocalPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSplinePoints((USplineComponent *)param_1,pTVar2,Local,true);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetSplinePointType @ 147a09360

void __cdecl
USplineComponent::execSetSplinePointType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
  int local_res20 [2];
  int local_18 [4];
  
  local_18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSplinePointType((USplineComponent *)param_1,local_18[0],(uint)local_res10[0],
                     local_res20[0] != 0);
  return;
}

// execSetSplinePoints @ 147a09480

void __cdecl USplineComponent::execSetSplinePoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  byte local_res10 [16];
  int local_res20 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  pTVar2 = &local_28;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSplinePoints((USplineComponent *)param_1,pTVar2,(uint)local_res10[0],local_res20[0] != 0);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetSplineWorldPoints @ 147a09750

void __cdecl
USplineComponent::execSetSplineWorldPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSplinePoints((USplineComponent *)param_1,pTVar2,World,true);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetTangentAtSplinePoint @ 147a0a1f0

void __cdecl
USplineComponent::execSetTangentAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  byte local_res10 [16];
  int local_res20 [2];
  int local_38 [2];
  TVector<double> local_30;
  
  local_38[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10[0] = 0;
  pTVar2 = &local_30;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTangentsAtSplinePoint
            ((USplineComponent *)param_1,local_38[0],pTVar2,pTVar2,(uint)local_res10[0],
             local_res20[0] != 0);
  return;
}

// execSetTangentColor @ 147a0a370

void __cdecl USplineComponent::execSetTangentColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetTangentsAtSplinePoint @ 147a0a3e0

void __cdecl
USplineComponent::execSetTangentsAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  byte local_res10 [8];
  int local_res20 [2];
  int local_58 [2];
  TVector<double> local_50;
  TVector<double> local_38;
  
  local_58[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_50;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar3 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTangentsAtSplinePoint
            ((USplineComponent *)param_1,local_58[0],pTVar2,pTVar3,(uint)local_res10[0],
             local_res20[0] != 0);
  return;
}

// execSetUnselectedSplineSegmentColor @ 147a0ac60

void __cdecl
USplineComponent::execSetUnselectedSplineSegmentColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetUpVectorAtSplinePoint @ 147a0acd0

void __cdecl
USplineComponent::execSetUpVectorAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  byte local_res10 [16];
  int local_res20 [2];
  int local_38 [2];
  TVector<double> local_30;
  
  local_38[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10[0] = 0;
  pTVar2 = &local_30;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetUpVectorAtSplinePoint
            ((USplineComponent *)param_1,local_38[0],pTVar2,(uint)local_res10[0],local_res20[0] != 0
            );
  return;
}

// execSetWorldLocationAtSplinePoint @ 147a0b190

void __cdecl
USplineComponent::execSetWorldLocationAtSplinePoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  int local_res10 [2];
  TVector<double> local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLocationAtSplinePoint((USplineComponent *)param_1,local_res10[0],pTVar2,World,true);
  return;
}

// execSupportsAttributes @ 147a0b620

void __cdecl
USplineComponent::execSupportsAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::SplineComponent::GUseSplineCurves == false) {
    bVar1 = FSpline::IsEnabledStatic();
    if ((bVar1) && (param_1[0x21].field_0x20 == '\x02')) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execUpdateSpline @ 147a0b720

void __cdecl USplineComponent::execUpdateSpline(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147a0b738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xad0))();
  return;
}

