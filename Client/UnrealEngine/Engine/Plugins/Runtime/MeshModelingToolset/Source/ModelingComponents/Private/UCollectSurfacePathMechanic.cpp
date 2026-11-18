// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 22

// StaticClass @ 14caad0b0

UClass * __cdecl UCollectSurfacePathMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCollectSurfacePathMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"CollectSurfacePathMechanic",
               &Z_Registration_Info_UClass_UCollectSurfacePathMechanic.InnerSingleton,
               StaticRegisterNativesUCollectSurfacePathMechanic,0x5b0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCollectSurfacePathMechanic>,
               InternalVTableHelperCtorCaller<UCollectSurfacePathMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCollectSurfacePathMechanic.InnerSingleton;
}

// UCollectSurfacePathMechanic @ 14cacbbf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCollectSurfacePathMechanic * __thiscall
UCollectSurfacePathMechanic::UCollectSurfacePathMechanic
          (UCollectSurfacePathMechanic *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  *(undefined ***)this = &___7UCollectSurfacePathMechanic__6B_;
  *(undefined8 *)&this->IsDoneFunc = 0;
  *(undefined8 *)&(this->IsDoneFunc).field_0x28 = 0;
  *(undefined8 *)&this->SpatialSnapPointsFunc = 0;
  *(undefined8 *)&(this->SpatialSnapPointsFunc).field_0x28 = 0;
  (this->HitPath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitPath).ArrayNum = 0;
  (this->HitPath).ArrayMax = 0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.W = 1.0;
  this->ConstantSnapDistance = 10.0;
  this->bSnapToTargetMeshVertices = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bSnapToWorldGrid = false;
  (this->PreviewPathPoint).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviewPathPoint).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PreviewPathPoint).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.W = 1.0;
  this->bPreviewPathPointValid = false;
  FToolDataVisualizer::FToolDataVisualizer(&this->PathDrawer);
  this->bDrawPath = true;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->TargetSurface);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->TargetSurfaceAABB);
  (this->TargetPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->TargetPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.W = 1.0;
  this->bCurrentPreviewWillComplete = false;
  this->bGeometricCloseOccurred = false;
  this->bLoopWasClosed = false;
  this->DoneMode = SnapDoubleClick;
  this->FixedPointTargetCount = 0;
  return this;
}

// UCollectSurfacePathMechanic @ 14cacbd70

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

UCollectSurfacePathMechanic * __thiscall
UCollectSurfacePathMechanic::UCollectSurfacePathMechanic(UCollectSurfacePathMechanic *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined ***)this = &___7UCollectSurfacePathMechanic__6B_;
  *(undefined8 *)&this->IsDoneFunc = 0;
  *(undefined8 *)&(this->IsDoneFunc).field_0x28 = 0;
  *(undefined8 *)&this->SpatialSnapPointsFunc = 0;
  *(undefined8 *)&(this->SpatialSnapPointsFunc).field_0x28 = 0;
  (this->HitPath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitPath).ArrayNum = 0;
  (this->HitPath).ArrayMax = 0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.W = 1.0;
  this->ConstantSnapDistance = 10.0;
  this->bSnapToTargetMeshVertices = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bSnapToWorldGrid = false;
  (this->PreviewPathPoint).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviewPathPoint).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PreviewPathPoint).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.W = 1.0;
  this->bPreviewPathPointValid = false;
  FToolDataVisualizer::FToolDataVisualizer(&this->PathDrawer);
  this->bDrawPath = true;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->TargetSurface);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->TargetSurfaceAABB);
  (this->TargetPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->TargetPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->TargetPlane).Rotation.field0_0x0._s_0.W = 1.0;
  this->DoneMode = SnapDoubleClick;
  this->FixedPointTargetCount = 0;
  this->bCurrentPreviewWillComplete = false;
  this->bGeometricCloseOccurred = false;
  this->bLoopWasClosed = false;
  local_48 = *(longlong *)&this->SpatialSnapPointsFunc;
  uVar2 = *(undefined8 *)&(this->SpatialSnapPointsFunc).field_0x8;
  local_38 = *(longlong *)&(this->SpatialSnapPointsFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->SpatialSnapPointsFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->SpatialSnapPointsFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->SpatialSnapPointsFunc).field_0x28;
  *(code **)&this->SpatialSnapPointsFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCollectSurfacePathMechanic::UCollectSurfacePathMechanic'::__l2::<lambda_1>,bool,UE::Math::TVector<double>,UE::Math::TVector<double>_>
       ::Call;
  *(undefined8 *)&(this->SpatialSnapPointsFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->SpatialSnapPointsFunc).field_0x10 = 0x52911c58;
  *(undefined4 *)&(this->SpatialSnapPointsFunc).field_0x14 = 1;
  *(UCollectSurfacePathMechanic **)&(this->SpatialSnapPointsFunc).field_0x18 = this;
  *(undefined4 *)&(this->SpatialSnapPointsFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->SpatialSnapPointsFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->SpatialSnapPointsFunc).field_0x28 = 0;
  *(undefined4 *)&(this->SpatialSnapPointsFunc).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  (this->PathColor).field0_0x0._s_0.R = 1.0;
  *(undefined8 *)((longlong)&(this->PathColor).field0_0x0 + 4) = 0x3f0c8c8d;
  *(undefined8 *)((longlong)&(this->PathColor).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->PreviewColor).field0_0x0 + 4) = 0x3f800000;
  (this->PreviewColor).field0_0x0._s_0.A = 1.0;
  (this->PathCompleteColor).field0_0x0._s_0.R = 1.0;
  *(undefined8 *)((longlong)&(this->PathCompleteColor).field0_0x0 + 4) = 0x3f800000;
  (this->PathCompleteColor).field0_0x0._s_0.A = 1.0;
  uVar1 = *(undefined8 *)&(this->PathColor).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(this->PathColor).field0_0x0 + 8);
  (this->PathDrawer).LineThickness = 4.0;
  (this->PathDrawer).PointSize = 8.0;
  *(undefined8 *)&(this->PathDrawer).LineColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->PathDrawer).LineColor.field0_0x0 + 8) = uVar2;
  (this->PathDrawer).bDepthTested = false;
  return this;
}

// ~UCollectSurfacePathMechanic @ 14cad1ce0

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
UCollectSurfacePathMechanic::~UCollectSurfacePathMechanic(UCollectSurfacePathMechanic *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UCollectSurfacePathMechanic__6B_;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->TargetSurfaceAABB);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->TargetSurface);
  FToolDataVisualizer::~FToolDataVisualizer(&this->PathDrawer);
  pFVar1 = (this->HitPath).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->SpatialSnapPointsFunc != 0) {
    plVar2 = *(longlong **)&(this->SpatialSnapPointsFunc).field_0x28;
    plVar3 = (longlong *)&(this->SpatialSnapPointsFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->IsDoneFunc != 0) {
    plVar2 = *(longlong **)&(this->IsDoneFunc).field_0x28;
    plVar3 = (longlong *)&(this->IsDoneFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// CheckGeometricClosure @ 14caf3ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UCollectSurfacePathMechanic::CheckGeometricClosure
          (UCollectSurfacePathMechanic *this,TFrame3<double> *param_1,bool *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (param_2 != (bool *)0x0) {
    *param_2 = false;
  }
  iVar1 = (this->HitPath).ArrayNum;
  if (iVar1 != 0) {
    if (((this->DoneMode == SnapCloseLoop) || (this->DoneMode == SnapDoubleClickOrCloseLoop)) &&
       (2 < iVar1)) {
      pFVar2 = (this->HitPath).AllocatorInstance.Data;
      local_88 = *(undefined8 *)pFVar2;
      uStack_80 = *(undefined8 *)(pFVar2 + 8);
      local_78 = *(undefined8 *)(pFVar2 + 0x10);
      local_68 = (param_1->Origin).field0_0x0._s_0.X;
      dStack_60 = (param_1->Origin).field0_0x0._s_0.Y;
      local_58 = (param_1->Origin).field0_0x0._s_0.Z;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->SpatialSnapPointsFunc);
      pcVar3 = *(code **)&this->SpatialSnapPointsFunc;
      plVar4 = *(longlong **)&(this->SpatialSnapPointsFunc).field_0x28;
      plVar11 = (longlong *)&(this->SpatialSnapPointsFunc).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar11 = plVar4;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      cVar6 = (*pcVar3)(uVar10,&local_68,&local_88);
      if (cVar6 != '\0') {
        if (param_2 != (bool *)0x0) {
          *param_2 = true;
        }
        return true;
      }
    }
    if (((this->DoneMode == SnapDoubleClick) || (this->DoneMode == SnapDoubleClickOrCloseLoop)) &&
       (iVar1 = (this->HitPath).ArrayNum, 1 < iVar1)) {
      uVar12 = iVar1 - 1;
      uVar9 = 0;
      if ((int)uVar12 < iVar1) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar5 = (this->HitPath).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(int)uVar12 * 0x38;
      local_48 = *(undefined8 *)pFVar2;
      uStack_40 = *(undefined8 *)(pFVar2 + 8);
      local_38 = *(undefined8 *)(pFVar5 + (longlong)(int)uVar12 * 0x38 + 0x10);
      local_28 = (param_1->Origin).field0_0x0._s_0.X;
      dStack_20 = (param_1->Origin).field0_0x0._s_0.Y;
      local_18 = (param_1->Origin).field0_0x0._s_0.Z;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->SpatialSnapPointsFunc);
      pcVar3 = *(code **)&this->SpatialSnapPointsFunc;
      plVar4 = *(longlong **)&(this->SpatialSnapPointsFunc).field_0x28;
      plVar11 = (longlong *)&(this->SpatialSnapPointsFunc).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar11 = plVar4;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      cVar6 = (*pcVar3)(uVar10,&local_28,&local_48);
      return cVar6 != '\0';
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14cb11e90

UClass * __cdecl UCollectSurfacePathMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCollectSurfacePathMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"CollectSurfacePathMechanic",
               &Z_Registration_Info_UClass_UCollectSurfacePathMechanic.InnerSingleton,
               StaticRegisterNativesUCollectSurfacePathMechanic,0x5b0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCollectSurfacePathMechanic>,
               InternalVTableHelperCtorCaller<UCollectSurfacePathMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCollectSurfacePathMechanic.InnerSingleton;
}

// InitializeMeshSurface @ 14cb1ff80

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
UCollectSurfacePathMechanic::InitializeMeshSurface
          (UCollectSurfacePathMechanic *this,FDynamicMesh3 *param_1)

{
  ulong64 uVar1;
  
  UE::Geometry::FDynamicMesh3::operator=(&this->TargetSurface,param_1);
  (this->TargetSurfaceAABB).Mesh = &this->TargetSurface;
  (this->TargetSurfaceAABB).MeshChangeStamp = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            (&this->TargetSurfaceAABB,false);
  uVar1 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->TargetSurfaceAABB).Mesh);
  (this->TargetSurfaceAABB).MeshChangeStamp = uVar1;
  return;
}

// InitializePlaneSurface @ 14cb20010

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
UCollectSurfacePathMechanic::InitializePlaneSurface
          (UCollectSurfacePathMechanic *this,TFrame3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->TargetPlane).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->TargetPlane).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.X;
  (this->TargetPlane).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->TargetPlane).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->TargetPlane).Rotation.field0_0x0._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->TargetPlane).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->TargetPlane).Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  this->bHaveTargetPlane = true;
  return;
}

// IsDone @ 14cb21f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UCollectSurfacePathMechanic::IsDone(UCollectSurfacePathMechanic *this)

{
  ECollectSurfacePathDoneMode EVar1;
  longlong *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  EVar1 = this->DoneMode;
  if (EVar1 == FixedNumPoints) {
    return this->FixedPointTargetCount <= (this->HitPath).ArrayNum;
  }
  if (EVar1 == ExternalLambda) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->IsDoneFunc);
    plVar2 = *(longlong **)&(this->IsDoneFunc).field_0x28;
    UNRECOVERED_JUMPTABLE = *(code **)&this->IsDoneFunc;
    plVar6 = (longlong *)&(this->IsDoneFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014cb21ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return (bool)uVar3;
  }
  if (EVar1 < ExternalLambda) {
    return this->bGeometricCloseOccurred;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6519649807164768535>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollectSurfacePathMechanic.cpp"
                     ,0x117,"false");
  if (bVar4) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
    return (bool)uVar3;
  }
  return false;
}

// IsHitByRay @ 14cb223d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UCollectSurfacePathMechanic::IsHitByRay
          (UCollectSurfacePathMechanic *this,TRay<double> *param_1,TFrame3<double> *param_2)

{
  bool bVar1;
  
  bVar1 = RayToPathPoint(this,param_1,param_2,false);
  return bVar1;
}

// PopLastPoint @ 14cb28b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UCollectSurfacePathMechanic::PopLastPoint(UCollectSurfacePathMechanic *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *_Dst;
  int iVar6;
  uint uVar7;
  
  if (this->bGeometricCloseOccurred != false) {
    this->bGeometricCloseOccurred = false;
    this->bLoopWasClosed = false;
    return true;
  }
  iVar6 = (this->HitPath).ArrayNum;
  if (0 < iVar6) {
    uVar7 = iVar6 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar6) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    _Dst = (this->HitPath).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38;
    iVar6 = (this->HitPath).ArrayNum + ~uVar7;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x38,(longlong)iVar6 * 0x38);
    }
    piVar1 = &(this->HitPath).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,&(this->HitPath).AllocatorInstance,(this->HitPath).ArrayNum,
               &(this->HitPath).ArrayMax);
    return true;
  }
  return false;
}

// RayToPathPoint @ 14cb2ad20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UCollectSurfacePathMechanic::RayToPathPoint
          (UCollectSurfacePathMechanic *this,TRay<double> *param_1,TFrame3<double> *param_2,
          bool param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double *pdVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  TFrame3<double> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined8 uVar16;
  TVector<double> *pTVar17;
  UInteractiveTool *pUVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_378 [32];
  bool local_348 [8];
  double local_340;
  double dStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  TVector<double>_u_0 local_308;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [8];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 TStack_250;
  TVector<double>_u_0 local_238;
  TVector<double> local_218;
  TFrame3<double> local_200;
  TVector<double>_u_0 local_1c8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  TVector<double>_u_0 local_148;
  EIntersectionType local_130 [2];
  double local_128 [2];
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  undefined1 local_e8;
  double local_d8;
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  char local_98;
  ulonglong local_88;
  
  dVar2 = __real_7fefffffffffffff;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_378;
  bVar9 = false;
  local_340 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_338 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_330 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  uStack_318 = ___xmm_3ff00000000000000000000000000000;
  uStack_310 = _UNK_15061cbc8;
  uStack_328 = 0;
  uStack_320 = 0.0;
  if ((this->TargetSurface).TriangleRefCounts.UsedCount < 1) {
LAB_14cb2afd0:
    uVar29 = (undefined4)uStack_310;
    uVar30 = (undefined4)((ulonglong)uStack_310 >> 0x20);
    uVar25 = (undefined4)uStack_320;
    uVar26 = uStack_320._4_4_;
    uVar27 = (undefined4)uStack_318;
    uVar28 = uStack_318._4_4_;
    dVar5 = dVar2;
  }
  else {
    local_118 = 0;
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    local_128[0] = __real_7fefffffffffffff;
    iVar12 = (**(code **)((this->TargetSurfaceAABB)._padding_ + 0x40))
                       (&this->TargetSurfaceAABB,0,local_128);
    if (local_118 != 0) {
      plVar19 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar19 = local_f0;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (iVar12 == -1) goto LAB_14cb2afd0;
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (&this->TargetSurface,iVar12,(TVector<double> *)&local_268._s_0,
               (TVector<double> *)&TStack_250._s_0,(TVector<double> *)&local_238._s_0);
    local_1c8._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
    local_1c8._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
    local_1c8._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
    dStack_1b0 = (param_1->Direction).field0_0x0._s_0.X;
    local_1a8 = (param_1->Direction).field0_0x0._s_0.Y;
    dStack_1a0 = (param_1->Direction).field0_0x0._s_0.Z;
    local_198._s_0.X = local_268._s_0.X;
    local_198._s_0.Y = local_268._s_0.Y;
    local_198._s_0.Z = local_268._s_0.Z;
    dStack_180 = TStack_250._s_0.X;
    local_178 = TStack_250._s_0.Y;
    dStack_170 = TStack_250._s_0.Z;
    local_168 = local_238._s_0.X;
    dStack_160 = local_238._s_0.Y;
    local_158 = local_238._s_0.Z;
    UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
              ((TRay<double> *)&local_1c8._s_0,(TTriangle3<double> *)&local_198._s_0,&local_150,
               (TVector<double> *)&local_148._s_0,local_130);
    pTVar14 = UE::Geometry::FDynamicMesh3::GetTriFrame(&this->TargetSurface,&local_200,iVar12,0);
    bVar9 = true;
    uStack_328 = *(undefined8 *)&(pTVar14->Rotation).field0_0x0;
    pdVar1 = &(pTVar14->Rotation).field0_0x0._s_0.Y;
    uStack_320 = *pdVar1;
    pdVar6 = &(pTVar14->Rotation).field0_0x0._s_0.Z;
    uStack_318 = *pdVar6;
    uStack_310 = *(undefined8 *)((longlong)&(pTVar14->Rotation).field0_0x0 + 0x18);
    uVar29 = (undefined4)uStack_310;
    uVar30 = (undefined4)((ulonglong)uStack_310 >> 0x20);
    local_340 = local_148._s_0.Y * dStack_180 + local_148._s_0.X * local_198._s_0.X +
                local_148._s_0.Z * local_168;
    dStack_338 = local_148._s_0.Y * local_178 + local_148._s_0.X * local_198._s_0.Y +
                 local_148._s_0.Z * dStack_160;
    local_330 = local_148._s_0.Y * dStack_170 + local_148._s_0.X * local_198._s_0.Z +
                local_148._s_0.Z * local_158;
    uVar25 = *(undefined4 *)pdVar1;
    uVar26 = *(undefined4 *)((longlong)&(pTVar14->Rotation).field0_0x0 + 0xc);
    uVar27 = *(undefined4 *)pdVar6;
    uVar28 = *(undefined4 *)((longlong)&(pTVar14->Rotation).field0_0x0 + 0x14);
    dVar5 = (dStack_338 - (param_1->Origin).field0_0x0._s_0.Y) *
            (param_1->Direction).field0_0x0._s_0.Y +
            (local_340 - (param_1->Origin).field0_0x0._s_0.X) *
            (param_1->Direction).field0_0x0._s_0.X +
            (local_330 - (param_1->Origin).field0_0x0._s_0.Z) *
            (param_1->Direction).field0_0x0._s_0.Z;
  }
  if (this->bHaveTargetPlane != false) {
    local_308._s_0.X = (this->TargetPlane).Origin.field0_0x0._s_0.X;
    local_308._s_0.Y = (this->TargetPlane).Origin.field0_0x0._s_0.Y;
    local_308._s_0.Z = *(double *)((longlong)&(this->TargetPlane).Origin.field0_0x0 + 0x10);
    uStack_2f0 = *(undefined8 *)&(this->TargetPlane).Rotation.field0_0x0;
    local_2e8 = *(double *)((longlong)&(this->TargetPlane).Rotation.field0_0x0 + 8);
    uStack_2e0 = *(double *)((longlong)&(this->TargetPlane).Rotation.field0_0x0 + 0x10);
    local_2d8 = *(undefined8 *)((longlong)&(this->TargetPlane).Rotation.field0_0x0 + 0x18);
    bVar8 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                      (&this->TargetPlane,&param_1->Origin,&param_1->Direction,2,
                       (TVector<double> *)&local_308._s_0);
    if ((bVar8) &&
       ((local_308._s_0.Y - (param_1->Origin).field0_0x0._s_0.Y) *
        (param_1->Direction).field0_0x0._s_0.Y +
        (local_308._s_0.X - (param_1->Origin).field0_0x0._s_0.X) *
        (param_1->Direction).field0_0x0._s_0.X +
        (local_308._s_0.Z - (param_1->Origin).field0_0x0._s_0.Z) *
        (param_1->Direction).field0_0x0._s_0.Z < dVar5)) {
      uVar29 = (undefined4)local_2d8;
      uVar30 = (undefined4)((ulonglong)local_2d8 >> 0x20);
      local_340 = local_308._s_0.X;
      dStack_338 = local_308._s_0.Y;
      local_330 = local_308._s_0.Z;
      uStack_328 = uStack_2f0;
      uStack_320 = local_2e8;
      uStack_318 = uStack_2e0;
      uStack_310 = local_2d8;
      uVar21 = local_308._16_4_;
      uVar22 = local_308._20_4_;
      uVar23 = (undefined4)uStack_2f0;
      uVar24 = uStack_2f0._4_4_;
      uVar25 = (undefined4)local_2e8;
      uVar26 = local_2e8._4_4_;
      uVar27 = (undefined4)uStack_2e0;
      uVar28 = uStack_2e0._4_4_;
      goto LAB_14cb2b0ba;
    }
  }
  if (!bVar9) {
    return false;
  }
  uVar21 = (undefined4)local_330;
  uVar22 = local_330._4_4_;
  uVar23 = (undefined4)uStack_328;
  uVar24 = uStack_328._4_4_;
LAB_14cb2b0ba:
  (param_2->Origin).field0_0x0._s_0.X = local_340;
  (param_2->Origin).field0_0x0._s_0.Y = dStack_338;
  cVar11 = '\0';
  *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 0x10) = uVar21;
  *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 0x14) = uVar22;
  *(undefined4 *)&(param_2->Rotation).field0_0x0 = uVar23;
  *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 4) = uVar24;
  *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 8) = uVar25;
  *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0xc) = uVar26;
  *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x10) = uVar27;
  *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x14) = uVar28;
  local_348[0] = false;
  (param_2->Rotation).field0_0x0._s_0.W = (double)CONCAT44(uVar30,uVar29);
  bVar9 = CheckGeometricClosure(this,param_2,local_348);
  if (bVar9) {
    cVar11 = '\x01';
    iVar12 = (this->HitPath).ArrayNum;
    if (local_348[0] == false) {
      uVar13 = 0;
      if ((int)(iVar12 - 1U) < iVar12) {
        uVar13 = ~(iVar12 - 1U) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar15 = (this->HitPath).AllocatorInstance.Data +
                (longlong)((this->HitPath).ArrayNum + -1) * 0x38;
    }
    else {
      if ((iVar12 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar15 = (this->HitPath).AllocatorInstance.Data;
    }
    dVar5 = *(double *)(pFVar15 + 8);
    (param_2->Origin).field0_0x0._s_0.X = *(double *)pFVar15;
    (param_2->Origin).field0_0x0._s_0.Y = dVar5;
    dVar5 = *(double *)(pFVar15 + 0x18);
    (param_2->Origin).field0_0x0._s_0.Z = *(double *)(pFVar15 + 0x10);
    (param_2->Rotation).field0_0x0._s_0.X = dVar5;
    dVar5 = *(double *)(pFVar15 + 0x28);
    (param_2->Rotation).field0_0x0._s_0.Y = *(double *)(pFVar15 + 0x20);
    (param_2->Rotation).field0_0x0._s_0.Z = dVar5;
    (param_2->Rotation).field0_0x0._s_0.W = *(double *)(pFVar15 + 0x30);
  }
  if ((param_3) && (cVar11 == '\0')) {
    if ((this->bSnapToTargetMeshVertices != false) &&
       (0 < (this->TargetSurface).TriangleRefCounts.UsedCount)) {
      local_d8 = dVar2;
      local_c8 = 0;
      local_a0 = (longlong *)0x0;
      local_98 = cVar11;
      uVar13 = (**(code **)((this->TargetSurfaceAABB)._padding_ + 0x60))
                         (&this->TargetSurfaceAABB,param_2,local_2d0,dVar2);
      if (local_c8 != 0) {
        plVar19 = local_b8;
        if (local_a0 != (longlong *)0x0) {
          plVar19 = local_a0;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      if (uVar13 != 0xffffffff) {
        local_2a8 = (param_2->Origin).field0_0x0._s_0.X;
        dStack_2a0 = (param_2->Origin).field0_0x0._s_0.Y;
        local_298 = (param_2->Origin).field0_0x0._s_0.Z;
        lVar3 = *(longlong *)
                 ((this->TargetSurface).Vertices.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar13 >> 9) * 8);
        pdVar1 = (double *)(lVar3 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
        dVar5 = *pdVar1;
        dVar7 = pdVar1[1];
        dVar2 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
        local_2c8 = dVar5;
        dStack_2c0 = dVar7;
        local_2b8 = dVar2;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->SpatialSnapPointsFunc);
        pcVar4 = *(code **)&this->SpatialSnapPointsFunc;
        plVar19 = *(longlong **)&(this->SpatialSnapPointsFunc).field_0x28;
        plVar20 = (longlong *)&(this->SpatialSnapPointsFunc).field_0x10;
        if (plVar19 != (longlong *)0x0) {
          plVar20 = plVar19;
        }
        uVar16 = (**(code **)(*plVar20 + 8))();
        cVar11 = (*pcVar4)(uVar16,&local_2a8,&local_2c8);
        if (cVar11 != '\0') {
          (param_2->Origin).field0_0x0._s_0.X = dVar5;
          (param_2->Origin).field0_0x0._s_0.Y = dVar7;
          (param_2->Origin).field0_0x0._s_0.Z = dVar2;
          pTVar17 = UE::Geometry::FMeshNormals::ComputeVertexNormal
                              (&local_218,&this->TargetSurface,uVar13,true,true);
          UE::Geometry::TFrame3<double>::AlignAxis(param_2,2,pTVar17);
        }
      }
    }
    if ((this->bSnapToWorldGrid != false) &&
       (bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28), bVar9)) {
      pUVar18 = (UInteractiveTool *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      bVar9 = ToolSceneQueriesUtil::FindWorldGridSnapPoint
                        (pUVar18,&param_2->Origin,(TVector<double> *)&local_288._s_0);
      if (bVar9) {
        (param_2->Origin).field0_0x0._s_0.X = local_288._s_0.X;
        (param_2->Origin).field0_0x0._s_0.Y = local_288._s_0.Y;
        (param_2->Origin).field0_0x0._s_0.Z = local_288._s_0.Z;
      }
    }
  }
  return true;
}

// Render @ 14cb2f460

/* WARNING: Type propagation algorithm not settling */
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
UCollectSurfacePathMechanic::Render
          (UCollectSurfacePathMechanic *this,IToolsContextRenderAPI *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FLinearColor *pFVar23;
  uint uVar24;
  ulonglong uVar25;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  longlong local_res18;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_100 [16];
  double local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_c8 [16];
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  
  if (this->bDrawPath != true) {
    return;
  }
  FToolDataVisualizer::BeginFrame(&this->PathDrawer,param_1);
  iVar1 = (this->HitPath).ArrayNum;
  if (0 < iVar1) {
    if ((this->bCurrentPreviewWillComplete != false) ||
       (lVar17 = 0x230, this->bGeometricCloseOccurred != false)) {
      lVar17 = 0x250;
    }
    uVar24 = iVar1 - 1;
    pFVar23 = (FLinearColor *)(&this->field_0x0 + lVar17);
    uVar20 = 0;
    local_res18 = (longlong)(int)uVar24;
    uVar19 = 0;
    uVar25 = uVar20;
    if (0 < (int)uVar24) {
      do {
        uVar13 = (uint)uVar20;
        uVar21 = uVar13 + 1;
        uVar16 = uVar19;
        if ((int)uVar21 < (this->HitPath).ArrayNum) {
          uVar16 = ~uVar21 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar22 = (this->HitPath).AllocatorInstance.Data;
        uVar16 = uVar19;
        if ((int)uVar13 < (this->HitPath).ArrayNum) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar18 = pFVar22 + uVar25 + 0x38;
        local_a8 = *(double *)pFVar18;
        dStack_a0 = *(double *)(pFVar18 + 8);
        pFVar18 = (this->HitPath).AllocatorInstance.Data;
        local_98 = *(double *)(pFVar22 + uVar25 + 0x48);
        auVar40 = *(undefined1 (*) [16])(this->PathDrawer).TotalTransform.Rotation.XY.m128d_f64;
        dVar9 = local_98 * (this->PathDrawer).TotalTransform.Scale3D.ZW.m128d_f64[0];
        dVar10 = (this->PathDrawer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar14 = (this->PathDrawer).TotalTransform.Rotation.ZW.m128d_f64[1];
        auVar26 = *(undefined1 (*) [16])(this->PathDrawer).TotalTransform.Rotation.XY.m128d_f64;
        dVar5 = (this->PathDrawer).TotalTransform.Scale3D.XY.m128d_f64[0] * local_a8;
        dVar6 = (this->PathDrawer).TotalTransform.Scale3D.XY.m128d_f64[1] * dStack_a0;
        uVar49 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar50._8_4_ = SUB84(dVar6,0);
        auVar50._0_8_ = dVar5;
        auVar50._12_4_ = uVar49;
        auVar39 = *(undefined1 (*) [16])(this->PathDrawer).TotalTransform.Rotation.ZW.m128d_f64;
        dVar4 = auVar39._0_8_;
        auVar34 = blendpd(auVar26,auVar39,2);
        auVar51._0_8_ = auVar50._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar5;
        auVar51._8_8_ = dVar9 * auVar26._8_8_ - dVar4 * dVar6;
        auVar37._8_4_ = SUB84(dVar6,0);
        auVar37._0_8_ = dVar5;
        auVar37._12_4_ = uVar49;
        auVar26._8_4_ = SUB84(dVar10,0);
        auVar26._0_8_ = dVar9;
        auVar26._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar26 = blendpd(auVar37,auVar26,2);
        dVar12 = auVar39._8_8_;
        auVar27._0_8_ = auVar26._0_8_ * dVar4 - auVar34._0_8_ * dVar9;
        auVar27._8_8_ = auVar26._8_8_ * dVar12 - auVar34._8_8_ * dVar10;
        auVar26 = blendpd(auVar51,auVar27,2);
        auVar52._0_8_ = auVar26._0_8_ + auVar26._0_8_;
        auVar52._8_8_ = auVar26._8_8_ + auVar26._8_8_;
        dVar10 = auVar51._8_8_ + auVar51._8_8_;
        dVar3 = auVar27._0_8_ + auVar27._0_8_;
        uVar49 = (undefined4)((ulonglong)dVar3 >> 0x20);
        auVar43._8_4_ = SUB84(dVar3,0);
        auVar43._0_8_ = dVar10;
        auVar43._12_4_ = uVar49;
        auVar35._8_4_ = SUB84(dVar3,0);
        auVar35._0_8_ = dVar10;
        auVar35._12_4_ = uVar49;
        auVar26 = blendpd(auVar35,auVar52,2);
        auVar44._0_8_ = auVar43._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar10;
        auVar44._8_8_ = auVar52._0_8_ * auVar40._8_8_ - dVar4 * dVar3;
        auVar34._8_4_ = SUB84(auVar44._8_8_,0);
        auVar34._0_8_ = auVar44._0_8_;
        auVar34._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
        auVar40 = blendpd(auVar40,auVar39,2);
        auVar36._0_8_ = auVar26._0_8_ * dVar4 - auVar40._0_8_ * auVar52._0_8_;
        auVar36._8_8_ = auVar26._8_8_ * dVar12 - auVar40._8_8_ * auVar52._8_8_;
        pFVar22 = pFVar18 + uVar25;
        local_90 = *(double *)pFVar22;
        dStack_88 = *(double *)(pFVar22 + 8);
        local_80 = *(double *)(pFVar18 + uVar25 + 0x10);
        dVar3 = dVar3 * dVar14 + dVar6 + auVar36._0_8_ +
                (this->PathDrawer).TotalTransform.Translation.XY.m128d_f64[1];
        local_c8 = *(undefined1 (*) [16])(this->PathDrawer).TotalTransform.Rotation.XY.m128d_f64;
        dVar6 = local_80 * (this->PathDrawer).TotalTransform.Scale3D.ZW.m128d_f64[0];
        dVar7 = (this->PathDrawer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar40 = blendpd(auVar44,auVar36,2);
        local_108 = auVar52._0_8_ * dVar14 + dVar9 + auVar40._0_8_ +
                    (this->PathDrawer).TotalTransform.Translation.ZW.m128d_f64[0];
        dVar9 = local_90 * (this->PathDrawer).TotalTransform.Scale3D.XY.m128d_f64[0];
        dVar11 = dStack_88 * (this->PathDrawer).TotalTransform.Scale3D.XY.m128d_f64[1];
        uVar49 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar53._8_4_ = SUB84(dVar11,0);
        auVar53._0_8_ = dVar9;
        auVar53._12_4_ = uVar49;
        local_118._8_4_ = SUB84(dVar3,0);
        local_118._0_8_ =
             dVar10 * dVar14 + dVar5 + auVar34._8_8_ +
             (this->PathDrawer).TotalTransform.Translation.XY.m128d_f64[0];
        local_118._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        auVar54._0_8_ = auVar53._8_8_ * local_c8._0_8_ - local_c8._8_8_ * dVar9;
        auVar54._8_8_ = dVar6 * local_c8._8_8_ - dVar4 * dVar11;
        auVar28._8_4_ = SUB84(dVar11,0);
        auVar28._0_8_ = dVar9;
        auVar28._12_4_ = uVar49;
        auVar40._8_4_ = SUB84(dVar7,0);
        auVar40._0_8_ = dVar6;
        auVar40._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar26 = blendpd(auVar28,auVar40,2);
        auVar40 = *(undefined1 (*) [16])(this->PathDrawer).TotalTransform.Rotation.XY.m128d_f64;
        auVar37 = blendpd(local_c8,auVar39,2);
        auVar29._0_8_ = auVar26._0_8_ * dVar4 - auVar37._0_8_ * dVar6;
        auVar29._8_8_ = auVar26._8_8_ * dVar12 - auVar37._8_8_ * dVar7;
        auVar26 = blendpd(auVar54,auVar29,2);
        dVar10 = auVar54._8_8_ + auVar54._8_8_;
        dVar3 = auVar29._0_8_ + auVar29._0_8_;
        uVar49 = (undefined4)((ulonglong)dVar3 >> 0x20);
        auVar55._0_8_ = auVar26._0_8_ + auVar26._0_8_;
        auVar55._8_8_ = auVar26._8_8_ + auVar26._8_8_;
        auVar45._8_4_ = SUB84(dVar3,0);
        auVar45._0_8_ = dVar10;
        auVar45._12_4_ = uVar49;
        auVar38._8_4_ = SUB84(dVar3,0);
        auVar38._0_8_ = dVar10;
        auVar38._12_4_ = uVar49;
        auVar26 = blendpd(auVar38,auVar55,2);
        auVar46._0_8_ = auVar45._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar10;
        auVar46._8_8_ = auVar55._0_8_ * auVar40._8_8_ - dVar4 * dVar3;
        auVar30._8_4_ = SUB84(auVar46._8_8_,0);
        auVar30._0_8_ = auVar46._0_8_;
        auVar30._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
        auVar40 = blendpd(auVar40,auVar39,2);
        auVar39._0_8_ = auVar26._0_8_ * dVar4 - auVar40._0_8_ * auVar55._0_8_;
        auVar39._8_8_ = auVar26._8_8_ * dVar12 - auVar40._8_8_ * auVar55._8_8_;
        dVar4 = dVar3 * dVar12 + dVar11 + auVar39._0_8_ +
                (this->PathDrawer).TotalTransform.Translation.XY.m128d_f64[1];
        auVar40 = blendpd(auVar46,auVar39,2);
        local_100._8_4_ = SUB84(dVar4,0);
        local_100._0_8_ =
             dVar10 * dVar12 + dVar9 + auVar30._8_8_ +
             (this->PathDrawer).TotalTransform.Translation.XY.m128d_f64[0];
        local_100._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_f0 = auVar55._0_8_ * dVar12 + dVar6 + auVar40._0_8_ +
                   (this->PathDrawer).TotalTransform.Translation.ZW.m128d_f64[0];
        (**(code **)((this->PathDrawer)._padding_ + 8))
                  (&this->PathDrawer,local_100,local_118,pFVar23,(this->PathDrawer).LineThickness,
                   (this->PathDrawer).bDepthTested);
        uVar20 = (ulonglong)uVar21;
        local_res18 = local_res18 + -1;
        uVar25 = uVar25 + 0x38;
      } while (local_res18 != 0);
    }
    if (this->bGeometricCloseOccurred == false) {
      if (this->bPreviewPathPointValid == false) goto LAB_14cb2fa3b;
      lVar17 = 0x240;
      if (this->bCurrentPreviewWillComplete != false) {
        lVar17 = 0x250;
      }
      pFVar23 = (FLinearColor *)(&this->field_0x0 + lVar17);
      if ((int)uVar24 < (this->HitPath).ArrayNum) {
        uVar19 = ~uVar24 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar22 = (FScriptContainerElement *)&this->PreviewPathPoint;
      pFVar18 = (this->HitPath).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x38;
    }
    else {
      if (this->bLoopWasClosed == false) goto LAB_14cb2fa3b;
      iVar1 = (this->HitPath).ArrayNum;
      uVar24 = iVar1 - 1;
      if ((int)uVar24 < iVar1) {
        uVar19 = ~uVar24 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar22 = (this->HitPath).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x38;
      if (((this->HitPath).ArrayNum < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (this->HitPath).AllocatorInstance.Data;
    }
    FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
              (&this->PathDrawer,(TVector<double> *)pFVar18,(TVector<double> *)pFVar22,pFVar23);
  }
LAB_14cb2fa3b:
  if ((this->bGeometricCloseOccurred == false) && (this->bPreviewPathPointValid != false)) {
    auVar40 = *(undefined1 (*) [16])(this->PathDrawer).TotalTransform.Rotation.ZW.m128d_f64;
    auVar26 = *(undefined1 (*) [16])(this->PathDrawer).TotalTransform.Rotation.XY.m128d_f64;
    dVar3 = (this->PreviewPathPoint).Origin.field0_0x0._s_0.X *
            (this->PathDrawer).TotalTransform.Scale3D.XY.m128d_f64[0];
    dVar5 = (this->PreviewPathPoint).Origin.field0_0x0._s_0.Y *
            (this->PathDrawer).TotalTransform.Scale3D.XY.m128d_f64[1];
    uVar49 = (undefined4)((ulonglong)dVar5 >> 0x20);
    pcVar2 = *(code **)((this->PathDrawer)._padding_ + 0x18);
    dVar6 = (this->PreviewPathPoint).Origin.field0_0x0._s_0.Z *
            (this->PathDrawer).TotalTransform.Scale3D.ZW.m128d_f64[0];
    dVar12 = (this->PathDrawer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar7 = (this->PathDrawer).TotalTransform.Rotation.ZW.m128d_f64[1];
    auVar56._8_4_ = SUB84(dVar5,0);
    auVar56._0_8_ = dVar3;
    auVar56._12_4_ = uVar49;
    dVar4 = auVar40._0_8_;
    auVar39 = blendpd(auVar26,auVar40,2);
    auVar57._0_8_ = auVar56._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar3;
    auVar57._8_8_ = dVar6 * auVar26._8_8_ - dVar4 * dVar5;
    auVar31._8_4_ = SUB84(dVar5,0);
    auVar31._0_8_ = dVar3;
    auVar31._12_4_ = uVar49;
    auVar8._8_4_ = SUB84(dVar12,0);
    auVar8._0_8_ = dVar6;
    auVar8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar26 = blendpd(auVar31,auVar8,2);
    auVar32._0_8_ = auVar26._0_8_ * dVar4 - auVar39._0_8_ * dVar6;
    auVar32._8_8_ = auVar26._8_8_ * auVar40._8_8_ - auVar39._8_8_ * dVar12;
    auVar26 = *(undefined1 (*) [16])(this->PathDrawer).TotalTransform.Rotation.XY.m128d_f64;
    auVar39 = blendpd(auVar57,auVar32,2);
    dVar12 = auVar57._8_8_ + auVar57._8_8_;
    dVar10 = auVar32._0_8_ + auVar32._0_8_;
    uVar49 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar58._0_8_ = auVar39._0_8_ + auVar39._0_8_;
    auVar58._8_8_ = auVar39._8_8_ + auVar39._8_8_;
    auVar47._8_4_ = SUB84(dVar10,0);
    auVar47._0_8_ = dVar12;
    auVar47._12_4_ = uVar49;
    auVar41._8_4_ = SUB84(dVar10,0);
    auVar41._0_8_ = dVar12;
    auVar41._12_4_ = uVar49;
    auVar39 = blendpd(auVar41,auVar58,2);
    auVar48._0_8_ = auVar47._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar12;
    auVar48._8_8_ = auVar58._0_8_ * auVar26._8_8_ - dVar4 * dVar10;
    auVar33._8_4_ = SUB84(auVar48._8_8_,0);
    auVar33._0_8_ = auVar48._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
    auVar26 = blendpd(auVar26,auVar40,2);
    auVar42._0_8_ = auVar39._0_8_ * dVar4 - auVar26._0_8_ * auVar58._0_8_;
    auVar42._8_8_ = auVar39._8_8_ * auVar40._8_8_ - auVar26._8_8_ * auVar58._8_8_;
    auVar40 = blendpd(auVar48,auVar42,2);
    dVar4 = dVar10 * dVar7 + dVar5 + auVar42._0_8_ +
            (this->PathDrawer).TotalTransform.Translation.XY.m128d_f64[1];
    local_d8 = auVar58._0_8_ * dVar7 + dVar6 + auVar40._0_8_ +
               (this->PathDrawer).TotalTransform.Translation.ZW.m128d_f64[0];
    local_e8._8_4_ = SUB84(dVar4,0);
    local_e8._0_8_ =
         dVar12 * dVar7 + dVar3 + auVar33._8_8_ +
         (this->PathDrawer).TotalTransform.Translation.XY.m128d_f64[0];
    local_e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    (*pcVar2)(&this->PathDrawer,local_e8,&this->PreviewColor,pcVar2,(this->PathDrawer).bDepthTested)
    ;
  }
  FToolDataVisualizer::EndFrame(&this->PathDrawer);
  return;
}

// SetCloseWithLambdaMode @ 14cb35e50

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
UCollectSurfacePathMechanic::SetCloseWithLambdaMode(UCollectSurfacePathMechanic *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)&this->IsDoneFunc != 0) {
    this->DoneMode = ExternalLambda;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsDoneFunc",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollectSurfacePathMechanic.cpp"
                     ,0x69,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->DoneMode = ExternalLambda;
  return;
}

// SetDoubleClickOrCloseLoopMode @ 14cb362e0

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
UCollectSurfacePathMechanic::SetDoubleClickOrCloseLoopMode(UCollectSurfacePathMechanic *this)

{
  this->DoneMode = SnapDoubleClickOrCloseLoop;
  return;
}

// SetDrawClosedLoopMode @ 14cb36300

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
UCollectSurfacePathMechanic::SetDrawClosedLoopMode(UCollectSurfacePathMechanic *this)

{
  this->DoneMode = SnapCloseLoop;
  return;
}

// SetFixedNumPointsMode @ 14cb36710

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
UCollectSurfacePathMechanic::SetFixedNumPointsMode(UCollectSurfacePathMechanic *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 - 1U < 99) {
    this->DoneMode = FixedNumPoints;
    this->FixedPointTargetCount = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NumPoints > 0 && NumPoints < 100",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollectSurfacePathMechanic.cpp"
                     ,0x62,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->DoneMode = FixedNumPoints;
  this->FixedPointTargetCount = param_1;
  return;
}

// Setup @ 14cb39010

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
UCollectSurfacePathMechanic::Setup(UCollectSurfacePathMechanic *this,UInteractiveTool *param_1)

{
  UInteractiveTool *apUStackX_8 [4];
  
  apUStackX_8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)apUStackX_8);
  return;
}

// Shutdown @ 14cb3bc60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCollectSurfacePathMechanic::Shutdown(UCollectSurfacePathMechanic *this)

{
  FWeakObjectPtr FStackX_8;
  undefined8 auStackX_10 [3];
  
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  auStackX_10[0] = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)auStackX_10);
  *(int *)&this->field_0x28 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x2c = FStackX_8.ObjectSerialNumber;
  return;
}

// StaticRegisterNativesUCollectSurfacePathMechanic @ 14cb3ea60

void __cdecl UCollectSurfacePathMechanic::StaticRegisterNativesUCollectSurfacePathMechanic(void)

{
  return;
}

// TryAddPointFromRay @ 14cb436c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UCollectSurfacePathMechanic::TryAddPointFromRay
          (UCollectSurfacePathMechanic *this,TRay<double> *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TVector<double>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  TVector<double>_u_0 local_48;
  double dStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_20 = ___xmm_3ff00000000000000000000000000000;
  uStack_18 = _UNK_15061cbc8;
  dStack_30 = 0.0;
  uStack_28 = 0;
  bVar6 = RayToPathPoint(this,param_1,(TFrame3<double> *)&local_48._s_0,true);
  if (!bVar6) {
    return false;
  }
  bVar6 = CheckGeometricClosure(this,(TFrame3<double> *)&local_48._s_0,&this->bLoopWasClosed);
  if (bVar6) {
    this->bGeometricCloseOccurred = true;
    this->bCurrentPreviewWillComplete = false;
    return true;
  }
  pTVar2 = &this->HitPath;
  pTVar3 = (TVector<double>_u_0 *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= &local_48) &&
     (&local_48 <
      (TVector<double>_u_0 *)((longlong)pTVar3 + (longlong)(this->HitPath).ArrayMax * 0x38))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (this->HitPath).ArrayNum;
  piVar1 = &(this->HitPath).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->HitPath).ArrayNum = iVar8 + 1;
  lVar9 = (longlong)iVar8 * 0x38;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(double *)(pFVar4 + lVar9) = local_48._s_0.X;
  *(double *)(pFVar4 + lVar9 + 8) = local_48._s_0.Y;
  *(double *)(pFVar4 + lVar9 + 0x10) = local_48._s_0.Z;
  *(double *)(pFVar4 + lVar9 + 0x10 + 8) = dStack_30;
  *(undefined8 *)(pFVar4 + lVar9 + 0x20) = uStack_28;
  *(undefined8 *)(pFVar4 + lVar9 + 0x20 + 8) = uStack_20;
  *(undefined8 *)(pFVar4 + lVar9 + 0x30) = uStack_18;
  this->bCurrentPreviewWillComplete = false;
  return true;
}

// UpdatePreviewPoint @ 14cb488e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UCollectSurfacePathMechanic::UpdatePreviewPoint
          (UCollectSurfacePathMechanic *this,TRay<double> *param_1)

{
  bool bVar1;
  TVector<double>_u_0 local_48;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_20 = ___xmm_3ff00000000000000000000000000000;
  dStack_18 = _UNK_15061cbc8;
  dStack_30 = 0.0;
  dStack_28 = 0.0;
  bVar1 = RayToPathPoint(this,param_1,(TFrame3<double> *)&local_48._s_0,true);
  this->bPreviewPathPointValid = bVar1;
  if (!bVar1) {
    return false;
  }
  (this->PreviewPathPoint).Origin.field0_0x0._s_0.X = local_48._s_0.X;
  (this->PreviewPathPoint).Origin.field0_0x0._s_0.Y = local_48._s_0.Y;
  (this->PreviewPathPoint).Origin.field0_0x0._s_0.Z = local_48._s_0.Z;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.X = dStack_30;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Y = dStack_28;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.Z = dStack_20;
  (this->PreviewPathPoint).Rotation.field0_0x0._s_0.W = dStack_18;
  bVar1 = CheckGeometricClosure(this,&this->PreviewPathPoint,(bool *)0x0);
  this->bCurrentPreviewWillComplete = bVar1;
  return true;
}

