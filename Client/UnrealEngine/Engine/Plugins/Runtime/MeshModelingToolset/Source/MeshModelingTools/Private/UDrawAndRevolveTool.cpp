// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 23

// StaticClass @ 14cbfde30

UClass * __cdecl UDrawAndRevolveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawAndRevolveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawAndRevolveTool",
               &Z_Registration_Info_UClass_UDrawAndRevolveTool.InnerSingleton,
               StaticRegisterNativesUDrawAndRevolveTool,0x1d0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawAndRevolveTool>,
               InternalVTableHelperCtorCaller<UDrawAndRevolveTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawAndRevolveTool.InnerSingleton;
}

// UDrawAndRevolveTool @ 14cc1d500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDrawAndRevolveTool * __thiscall
UDrawAndRevolveTool::UDrawAndRevolveTool(UDrawAndRevolveTool *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bProfileCurveComplete = false;
  (this->ControlPointsMechanic).field0_0x0.DebugPtr = (UCurveControlPointsMechanic *)0x0;
  (this->PlaneMechanic).field0_0x0.DebugPtr = (UConstructionPlaneMechanic *)0x0;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (URevolveToolProperties *)0x0;
  (this->MaterialProperties).field0_0x0.DebugPtr = (UNewMeshMaterialProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  return this;
}

// UDrawAndRevolveTool @ 14cc1d630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDrawAndRevolveTool * __thiscall UDrawAndRevolveTool::UDrawAndRevolveTool(UDrawAndRevolveTool *this)

{
  undefined8 uVar1;
  
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bProfileCurveComplete = false;
  (this->ControlPointsMechanic).field0_0x0.DebugPtr = (UCurveControlPointsMechanic *)0x0;
  (this->PlaneMechanic).field0_0x0.DebugPtr = (UConstructionPlaneMechanic *)0x0;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (URevolveToolProperties *)0x0;
  (this->MaterialProperties).field0_0x0.DebugPtr = (UNewMeshMaterialProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  return this;
}

// ~UDrawAndRevolveTool @ 14cc22990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawAndRevolveTool::~UDrawAndRevolveTool(UDrawAndRevolveTool *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  return;
}

// operator() @ 14cc2e640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `UDrawAndRevolveTool::Setup'::__l2::<lambda_3>::operator()(void *this)

{
  UDrawAndRevolveTool *this_00;
  UMeshOpPreviewWithBackgroundCompute *this_01;
  longlong *plVar1;
  FText *pFVar2;
  
  this_00 = *(UDrawAndRevolveTool **)this;
  if (((this_00->ControlPointsMechanic).field0_0x0.DebugPtr)->bInteractiveInitializationMode ==
      false) {
    UDrawAndRevolveTool::StartPreview(this_00);
    plVar1 = (longlong *)(**(code **)(**(longlong **)this + 0x2d8))();
    pFVar2 = &EditModeMessage;
  }
  else {
    this_01 = (this_00->Preview).field0_0x0.DebugPtr;
    if (this_01 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
      UMeshOpPreviewWithBackgroundCompute::Cancel(this_01);
      *(undefined8 *)(*(longlong *)this + 0x1c8) = 0;
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)this + 0x2d8))();
    pFVar2 = &InitializationModeMessage;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cc2e6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x360))(plVar1,pFVar2,2,*(code **)(*plVar1 + 0x360));
  return;
}

// operator() @ 14cc2e950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `UDrawAndRevolveTool::Setup'::__l2::<lambda_5>::operator()(void *this)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  UCurveControlPointsMechanic *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  TRotator<double> *pTVar10;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  lVar3 = *(longlong *)(*(longlong *)this + 0x1a8);
  uVar9 = *(undefined8 *)(lVar3 + 0x70);
  uVar1 = *(undefined8 *)(lVar3 + 0x78);
  lVar4 = *(longlong *)(*(longlong *)this + 0x1b8);
  *(undefined8 *)(lVar4 + 0x128) = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar4 + 0x130) = uVar9;
  *(undefined8 *)(lVar4 + 0x138) = uVar1;
  lVar3 = *(longlong *)(*(longlong *)this + 0x1a8);
  local_28.X = *(double *)(lVar3 + 0x80);
  local_28.Y = *(double *)(lVar3 + 0x88);
  local_28.Z = *(double *)(lVar3 + 0x90);
  local_28.W = *(double *)(lVar3 + 0x98);
  pTVar10 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  uVar6 = *(undefined4 *)((longlong)&pTVar10->Pitch + 4);
  uVar7 = *(undefined4 *)&pTVar10->Yaw;
  uVar8 = *(undefined4 *)((longlong)&pTVar10->Yaw + 4);
  dVar2 = pTVar10->Roll;
  lVar3 = *(longlong *)(*(longlong *)this + 0x1b8);
  *(undefined4 *)(lVar3 + 0x140) = *(undefined4 *)&pTVar10->Pitch;
  *(undefined4 *)(lVar3 + 0x144) = uVar6;
  *(undefined4 *)(lVar3 + 0x148) = uVar7;
  *(undefined4 *)(lVar3 + 0x14c) = uVar8;
  *(double *)(lVar3 + 0x150) = dVar2;
  plVar5 = *(longlong **)this;
  (**(code **)(*plVar5 + 0x340))(plVar5,plVar5[0x37]);
  this_00 = *(UCurveControlPointsMechanic **)(*(longlong *)this + 0x1a0);
  if (this_00 != (UCurveControlPointsMechanic *)0x0) {
    UCurveControlPointsMechanic::SetPlane
              (this_00,(TFrame3<double> *)(*(longlong *)(*(longlong *)this + 0x1a8) + 0x68));
  }
  UDrawAndRevolveTool::UpdateRevolutionAxis(*(UDrawAndRevolveTool **)this);
  return;
}

// CanAccept @ 14cc47930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawAndRevolveTool::CanAccept(UDrawAndRevolveTool *this)

{
  UMeshOpPreviewWithBackgroundCompute *pUVar1;
  UPreviewMesh *this_00;
  FDynamicMesh3 *pFVar2;
  
  pUVar1 = (this->Preview).field0_0x0.DebugPtr;
  if (((pUVar1 != (UMeshOpPreviewWithBackgroundCompute *)0x0) && (pUVar1->bResultValid != false)) &&
     (this_00 = (pUVar1->PreviewMesh).field0_0x0.DebugPtr, this_00 != (UPreviewMesh *)0x0)) {
    pFVar2 = UPreviewMesh::GetMesh(this_00);
    if (pFVar2 != (FDynamicMesh3 *)0x0) {
      pFVar2 = UPreviewMesh::GetMesh((pUVar1->PreviewMesh).field0_0x0.DebugPtr);
      if (0 < (pFVar2->TriangleRefCounts).UsedCount) {
        return true;
      }
    }
  }
  return false;
}

// CanGenerateAsset @ 14cc47c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawAndRevolveTool::CanGenerateAsset(UDrawAndRevolveTool *this)

{
  UMeshOpPreviewWithBackgroundCompute *pUVar1;
  FDynamicMesh3 *pFVar2;
  
  pUVar1 = (this->Preview).field0_0x0.DebugPtr;
  if (pUVar1 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    pFVar2 = UPreviewMesh::GetMesh((pUVar1->PreviewMesh).field0_0x0.DebugPtr);
    return 0 < (pFVar2->TriangleRefCounts).UsedCount;
  }
  return false;
}

// GenerateAsset @ 14cc58280

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
UDrawAndRevolveTool::GenerateAsset(UDrawAndRevolveTool *this,FDynamicMeshOpResult *param_1)

{
  int iVar1;
  code *pcVar2;
  UCreateMeshObjectTypeProperties *pUVar3;
  bool bVar4;
  longlong lVar5;
  FText *pFVar6;
  UInteractiveToolManager *pUVar7;
  undefined1 auStack_788 [32];
  UObject **local_768;
  FScriptContainerElement *local_760;
  longlong local_758;
  longlong local_750;
  undefined8 local_748;
  UObject *local_738;
  FText local_730;
  FCreateMeshObjectResult local_720;
  double local_6f0;
  FCreateMeshObjectParams local_6e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_788;
  if (0 < (((param_1->Mesh).Ptr)->TriangleRefCounts).UsedCount) {
    lVar5 = (**(code **)(this->_padding_ + 0x2d8))();
    pcVar2 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_730,L"UDrawAndRevolveTool",L"RevolveToolTransactionName",
                        L"Path Revolve Tool");
    (*pcVar2)(lVar5 + 0x28,pFVar6);
    if (local_730.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_730.TextData.Reference + 0x10))();
    }
    FCreateMeshObjectParams::FCreateMeshObjectParams(&local_6e8,true);
    local_6e8.TargetWorld.field0_0x0 = (TObjectPtr<UWorld>_u_0)this->TargetWorld;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_6e8.TargetWorld.field0_0x0.DebugPtr != (TObjectPtr<UWorld>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_6e8.TargetWorld.field0_0x0);
    }
    local_6e8.Transform.Translation.XY.m128d_f64[0] =
         (param_1->Transform).Translation.field0_0x0._s_0.X;
    local_6e8.Transform.Translation.XY.m128d_f64[1] =
         (param_1->Transform).Translation.field0_0x0._s_0.Y;
    local_6e8.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
         (undefined4)
         ((ulonglong)*(undefined8 *)((longlong)&(param_1->Transform).Rotation.field0_0x0 + 0x18) >>
         0x20);
    local_6e8.Transform.Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.field0_0x0._s_0.X;
    local_6e8.Transform.Scale3D.XY.m128d_f64[1] = (param_1->Transform).Scale3D.field0_0x0._s_0.Y;
    local_6e8.Transform.Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.field0_0x0._s_0.X;
    local_6e8.Transform.Rotation.XY.m128d_f64[1] = (param_1->Transform).Rotation.field0_0x0._s_0.Y;
    local_6e8.Transform.Translation.ZW.m128d_f64[0] =
         (param_1->Transform).Translation.field0_0x0._s_0.Z;
    local_6f0 = (param_1->Transform).Scale3D.field0_0x0._s_0.Z;
    local_6e8.Transform.Rotation.ZW.m128d_f64[0]._0_4_ =
         *(undefined4 *)((longlong)&(param_1->Transform).Rotation.field0_0x0 + 0x10);
    local_6e8.Transform.Rotation.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)&(param_1->Transform).Rotation.field0_0x0 + 0x14);
    local_6e8.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)((longlong)&(param_1->Transform).Rotation.field0_0x0 + 0x18);
    local_6e8.Transform.Translation.ZW.m128d_f64[1] = 0.0;
    local_6e8.Transform.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_6e8.Transform.Scale3D.ZW.m128d_f64[0] = local_6f0;
    ::FString::operator=(&local_6e8.BaseName,L"Revolve");
    local_738 = FWeakObjectPtr::Get(&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).
                                     WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_738 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_738);
    }
    if ((local_6e8.Materials.AllocatorInstance.Data <= (FScriptContainerElement *)&local_738) &&
       ((FScriptContainerElement *)&local_738 <
        local_6e8.Materials.AllocatorInstance.Data + (longlong)local_6e8.Materials.ArrayMax * 8)) {
      local_750 = (longlong)local_6e8.Materials.ArrayNum;
      local_748 = 8;
      local_768 = &local_738;
      local_760 = local_6e8.Materials.AllocatorInstance.Data;
      local_758 = (longlong)local_6e8.Materials.ArrayMax;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_6e8.Materials.ArrayNum == local_6e8.Materials.ArrayMax) {
      local_6e8.Materials.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_6e8.Materials.AllocatorInstance,&local_6e8.Materials.ArrayMax);
    }
    iVar1 = local_6e8.Materials.ArrayNum + 1;
    *(UObject **)
     (local_6e8.Materials.AllocatorInstance.Data + (longlong)local_6e8.Materials.ArrayNum * 8) =
         local_738;
    local_6e8.Materials.ArrayNum = iVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_738 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_738);
    }
    FCreateMeshObjectParams::SetMesh(&local_6e8,(param_1->Mesh).Ptr);
    pUVar3 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
    (**(code **)(pUVar3->_padding_ + 0x2d0))(pUVar3,&local_6e8);
    pUVar7 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    UE::Modeling::CreateMeshObject(&local_720,pUVar7,&local_6e8);
    if ((local_720.ResultCode == Ok) &&
       (local_720.NewActor.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
      pUVar7 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
      ToolSelectionUtil::SetNewActorSelection(pUVar7,(AActor *)local_720.NewActor.field0_0x0);
    }
    lVar5 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
    FCreateMeshObjectParams::~FCreateMeshObjectParams(&local_6e8);
  }
  return;
}

// GetPrivateStaticClass @ 14cc5c530

UClass * __cdecl UDrawAndRevolveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawAndRevolveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawAndRevolveTool",
               &Z_Registration_Info_UClass_UDrawAndRevolveTool.InnerSingleton,
               StaticRegisterNativesUDrawAndRevolveTool,0x1d0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawAndRevolveTool>,
               InternalVTableHelperCtorCaller<UDrawAndRevolveTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawAndRevolveTool.InnerSingleton;
}

// HasAccept @ 14cc5ea50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawAndRevolveTool::HasAccept(UDrawAndRevolveTool *this)

{
  return true;
}

// HasCancel @ 14cc5eab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawAndRevolveTool::HasCancel(UDrawAndRevolveTool *this)

{
  return true;
}

// OnPointDeletionKeyPress @ 14cc67a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawAndRevolveTool::OnPointDeletionKeyPress(UDrawAndRevolveTool *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 *puVar7;
  longlong lVar8;
  UCurveControlPointsMechanic *this_00;
  bool bVar9;
  uint uVar10;
  UObject *pUVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined1 *puVar16;
  ForAnyElementType FVar17;
  undefined1 auStackX_8 [8];
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  undefined8 *puStackX_20;
  ForAnyElementType FStack_68;
  int iStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  this_00 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
  if (this_00 == (UCurveControlPointsMechanic *)0x0) {
    return;
  }
  if ((this_00->SelectedPointIDs).ArrayNum != 0) {
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x28);
    lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
    (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x10))(lVar12 + 0x28,&PointDeletionTransactionText);
    iStack_60 = (this_00->SelectedPointIDs).ArrayNum;
    lVar12 = (longlong)iStack_60;
    puVar14 = (undefined8 *)0x0;
    pFVar5 = (this_00->SelectedPointIDs).AllocatorInstance.Data;
    FStack_68.Data = (FScriptContainerElement *)0x0;
    if (iStack_60 == 0) {
      iStack_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iStack_60,0,&FStack_68,iStack_60,&iStack_5c);
      memcpy(FStack_68.Data,pFVar5,lVar12 << 2);
    }
    UCurveControlPointsMechanic::ChangeSelection(this_00,-1,false);
    if (this_00->bAutoRevertToInteractiveInitialization != false) {
      if (this_00->bIsLoop == false) {
        iVar1 = this_00->MinPointsForNonLoop;
      }
      else {
        iVar1 = this_00->MinPointsForLoop;
      }
      if ((this_00->ControlPoints).Sequence.ArrayNum - iStack_60 < iVar1) {
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x28);
        lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
        pcVar6 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
        puVar13 = ::operator_new(0x10);
        if (puVar13 != (undefined8 *)0x0) {
          bVar9 = this_00->bIsLoop;
          iVar1 = this_00->CurrentChangeStamp;
          *puVar13 = &___7FCurveControlPointsMechanicModeChange__6B_;
          *(bool *)((longlong)puVar13 + 9) = bVar9;
          *(undefined1 *)(puVar13 + 1) = 0;
          *(int *)((longlong)puVar13 + 0xc) = iVar1;
          puVar14 = puVar13;
        }
        puStackX_10 = puVar14;
        (*pcVar6)(lVar12 + 0x28,this_00,&puStackX_10,&InitializationCompletedTransactionText);
        UCurveControlPointsMechanic::SetInteractiveInitialization(this_00,true);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this_00->OnModeChanged);
      }
    }
    iVar1 = iStack_60;
    pFVar5 = FStack_68.Data + (longlong)iStack_60 * 4;
    FVar17.Data = FStack_68.Data;
    while( true ) {
      if (iStack_60 != iVar1) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (FVar17.Data == pFVar5) break;
      uVar2 = *(uint *)FVar17.Data;
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x28);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      pcVar6 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
      if (((int)uVar2 < 0) || (*(int *)&(this_00->ControlPoints).Vertices.field_0x28 <= (int)uVar2))
      {
LAB_14cb0048e:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidPoint(PointID)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                           ,0x87,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((*(int *)&(this_00->ControlPoints).Vertices.field_0x28 <= (int)uVar2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar7 = *(undefined1 **)&(this_00->ControlPoints).Vertices.field_0x20;
        puVar16 = &(this_00->ControlPoints).Vertices.field_0x10;
        if (puVar7 != (undefined1 *)0x0) {
          puVar16 = puVar7;
        }
        uVar10 = uVar2;
        if ((int)uVar2 < 0) {
          uVar10 = uVar2 + 0x1f;
        }
        if ((*(uint *)(puVar16 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
        goto LAB_14cb0048e;
      }
      lVar8 = *(longlong *)&(this_00->ControlPoints).Vertices;
      puVar14 = (undefined8 *)(lVar8 + (longlong)(int)uVar2 * 0x18);
      uStack_58 = *puVar14;
      uStack_50 = puVar14[1];
      uStackX_18 = *(undefined8 *)(lVar8 + 0x10 + (longlong)(int)uVar2 * 0x18);
      piVar15 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)&(this_00->ControlPoints).PointIDToSequencePosition,uVar2);
      iVar3 = *piVar15;
      puStackX_20 = ::operator_new(0x30);
      if (puStackX_20 != (undefined8 *)0x0) {
        iVar4 = this_00->CurrentChangeStamp;
        *puStackX_20 = &___7FCurveControlPointsMechanicInsertionChange__6B_;
        *(int *)(puStackX_20 + 1) = iVar3;
        puStackX_20[2] = uStack_58;
        puStackX_20[3] = uStack_50;
        *(uint *)((longlong)puStackX_20 + 0xc) = uVar2;
        puStackX_20[4] = uStackX_18;
        *(undefined1 *)(puStackX_20 + 5) = 0;
        *(int *)((longlong)puStackX_20 + 0x2c) = iVar4;
      }
      (*pcVar6)(lVar12 + 0x28,this_00,&puStackX_20,&PointDeletionTransactionText);
      UCurveControlPointsMechanic::DeletePoint(this_00,uVar2);
      FVar17.Data = FVar17.Data + 4;
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this_00->OnPointsChanged);
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x28);
    lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
    (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x18))(lVar12 + 0x28);
    if (FStack_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data);
    }
  }
  return;
}

// OnPropertyModified @ 14cc680c0

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
UDrawAndRevolveTool::OnPropertyModified
          (UDrawAndRevolveTool *this,UObject *param_1,FProperty *param_2)

{
  URevolveToolProperties *pUVar1;
  FName FVar2;
  UMeshOpPreviewWithBackgroundCompute *this_00;
  bool bVar3;
  TQuat<double> *pTVar4;
  FName *pFVar5;
  FName FVar6;
  UInteractiveToolManager *pUVar7;
  UMaterialInterface *pUVar8;
  UMaterialInterface *pUVar9;
  FName local_res8;
  TQuat<double> local_68;
  TVector<double>_u_0 local_48;
  double local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  
  pTVar4 = UE::Math::TRotator<double>::Quaternion
                     (&((this->Settings).field0_0x0.DebugPtr)->DrawPlaneOrientation,&local_68);
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  local_48._s_0.X = (pUVar1->DrawPlaneOrigin).field0_0x0._s_0.X;
  local_48._s_0.Y = (pUVar1->DrawPlaneOrigin).field0_0x0._s_0.Y;
  local_48._s_0.Z = (pUVar1->DrawPlaneOrigin).field0_0x0._s_0.Z;
  local_30 = pTVar4->X;
  dStack_28 = pTVar4->Y;
  local_20 = pTVar4->Z;
  dStack_18 = pTVar4->W;
  UCurveControlPointsMechanic::SetPlane
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,(TFrame3<double> *)&local_48._s_0);
  UConstructionPlaneMechanic::SetPlaneWithoutBroadcast
            ((this->PlaneMechanic).field0_0x0.DebugPtr,(TFrame3<double> *)&local_48._s_0);
  UpdateRevolutionAxis(this);
  UCurveControlPointsMechanic::SetSnappingEnabled
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,
             ((this->Settings).field0_0x0.DebugPtr)->bEnableSnapping);
  if ((this->Preview).field0_0x0.DebugPtr != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    if (param_2 != (FProperty *)0x0) {
      pFVar5 = ::FName::FName(&local_res8,8,L"Material",FNAME_Add);
      FVar2 = *pFVar5;
      bVar3 = IsThisNotNull(param_2,"FField::GetFName");
      if (bVar3) {
        FVar6 = (FName)param_2->_padding_;
      }
      else {
        FVar6.ComparisonIndex.Value = 0;
        FVar6.Number = 0;
      }
      if (FVar6 == FVar2) {
        this_00 = (this->Preview).field0_0x0.DebugPtr;
        pUVar7 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
        pUVar8 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar7);
        pUVar9 = (UMaterialInterface *)
                 FWeakObjectPtr::Get(&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).
                                      WeakPtr);
        UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials(this_00,pUVar9,pUVar8);
      }
    }
    UPreviewMesh::EnableWireframe
              ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
               ((this->MaterialProperties).field0_0x0.DebugPtr)->bShowWireframe);
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  }
  return;
}

// OnTick @ 14cc69a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawAndRevolveTool::OnTick(UDrawAndRevolveTool *this,float param_1)

{
  UConstructionPlaneMechanic *pUVar1;
  UMeshOpPreviewWithBackgroundCompute *this_00;
  
  pUVar1 = (this->PlaneMechanic).field0_0x0.DebugPtr;
  if (pUVar1 != (UConstructionPlaneMechanic *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2c8))();
  }
  this_00 = (this->Preview).field0_0x0.DebugPtr;
  if (this_00 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::Tick(this_00,param_1);
  }
  return;
}

// RegisterActions @ 14cc6dc60

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
UDrawAndRevolveTool::RegisterActions(UDrawAndRevolveTool *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString local_68;
  FText local_58;
  FText local_48;
  code *local_38 [2];
  undefined **local_28;
  UDrawAndRevolveTool *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDrawAndRevolveTool::RegisterActions'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDrawAndRevolveTool::RegisterActions'::__l2::<lambda_1>,void>::
                Call;
  local_20 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UDrawAndRevolveTool",L"DeletePointTooltip",
                      L"Delete currently selected point(s)");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UDrawAndRevolveTool",L"DeletePointUIName",L"Delete Point");
  ::FString::FString(&local_68,L"DeletePointBackspaceKey");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2711,&local_68,pFVar2,pFVar1,'\0',&EKeys::BackSpace,
             (TFunction<void___cdecl(void)> *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDrawAndRevolveTool::RegisterActions'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDrawAndRevolveTool::RegisterActions'::__l2::<lambda_2>,void>::
                Call;
  local_20 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UDrawAndRevolveTool",L"DeletePointTooltip",
                      L"Delete currently selected point(s)");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UDrawAndRevolveTool",L"DeletePointUIName",L"Delete Point");
  ::FString::FString(&local_68,L"DeletePointDeleteKey");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2712,&local_68,pFVar2,pFVar1,'\0',&EKeys::Delete,
             (TFunction<void___cdecl(void)> *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// Render @ 14cc70be0

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
UDrawAndRevolveTool::Render(UDrawAndRevolveTool *this,IToolsContextRenderAPI *param_1)

{
  UConstructionPlaneMechanic *pUVar1;
  UCurveControlPointsMechanic *pUVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x398))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4,&this->CameraState);
  pUVar1 = (this->PlaneMechanic).field0_0x0.DebugPtr;
  if (pUVar1 != (UConstructionPlaneMechanic *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,param_1);
    fVar7 = (this->CameraState).HorizontalFOVDegrees * __real_3c360b61;
    plVar4 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    dVar5 = ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
                      (&this->CameraState,&this->RevolutionAxisOrigin,__real_4056800000000000);
    local_50 = (this->RevolutionAxisOrigin).field0_0x0._s_0.X;
    local_48 = (this->RevolutionAxisOrigin).field0_0x0._s_0.Y;
    local_40 = (this->RevolutionAxisOrigin).field0_0x0._s_0.Z;
    local_74 = FLinearColor::sRGBToLinearTable[0x10];
    local_6c = 0x3f800000;
    dVar5 = dVar5 * (double)fVar7;
    local_78 = FLinearColor::sRGBToLinearTable[0xf0];
    local_70 = FLinearColor::sRGBToLinearTable[0xf0];
    dVar6 = dVar5 * (this->RevolutionAxisDirection).field0_0x0._s_0.X;
    dVar3 = dVar5 * (this->RevolutionAxisDirection).field0_0x0._s_0.Y;
    dVar5 = dVar5 * (this->RevolutionAxisDirection).field0_0x0._s_0.Z;
    local_68 = dVar6 + local_50;
    local_60 = dVar3 + local_48;
    local_50 = local_50 - dVar6;
    local_48 = local_48 - dVar3;
    local_58 = dVar5 + local_40;
    local_40 = local_40 - dVar5;
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_50,&local_68,&local_78,1,fVar7,0,1);
  }
  pUVar2 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
  if (pUVar2 != (UCurveControlPointsMechanic *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,param_1);
  }
  return;
}

// SetWorld @ 14cc75fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawAndRevolveTool::SetWorld(UDrawAndRevolveTool *this,UWorld *param_1)

{
  this->TargetWorld = param_1;
  return;
}

// Setup @ 14cc78780

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDrawAndRevolveTool::Setup(UDrawAndRevolveTool *this)

{
  double dVar1;
  code *pcVar2;
  FName FVar3;
  USingleClickInputBehavior *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  FText *pFVar8;
  longlong *plVar9;
  UCreateMeshObjectTypeProperties *pUVar10;
  FName *pFVar11;
  UClass *pUVar12;
  URevolveToolProperties *pUVar13;
  UNewMeshMaterialProperties *pUVar14;
  UCurveControlPointsMechanic *pUVar15;
  TQuat<double> *pTVar16;
  UConstructionPlaneMechanic *pUVar17;
  int *piVar18;
  undefined ***pppuVar19;
  undefined1 auStack_158 [32];
  FName local_138;
  TRotator<double> local_130;
  TVector<double>_u_0 local_118;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  undefined1 local_d8 [128];
  code *local_58;
  double dStack_50;
  undefined **local_48;
  UDrawAndRevolveTool *pUStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined ***pppuStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pcVar2 = *(code **)(this->_padding_ + 0x380);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_130,L"UDrawAndRevolveTool",L"ToolName",L"Revolve PolyPath");
  (*pcVar2)(this,pFVar8);
  if ((longlong *)local_130.Pitch != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_130.Pitch + 0x10))();
  }
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*plVar9 + 0x360))(plVar9,&InitializationModeMessage,2);
  pUVar10 = NewObject<UCreateMeshObjectTypeProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UCreateMeshObjectTypeProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->OutputTypeProperties).field0_0x0.DebugPtr = pUVar10;
  pcVar2 = *(code **)(pUVar10->_padding_ + 0x2b8);
  ::FString::FString((FString *)&local_130,L"");
  (*pcVar2)(pUVar10,this,&local_130);
  if ((longlong *)local_130.Pitch != (longlong *)0x0) {
    FMemory::Free((void *)local_130.Pitch);
  }
  UCreateMeshObjectTypeProperties::InitializeDefault
            ((this->OutputTypeProperties).field0_0x0.DebugPtr);
  pUVar10 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDrawAndRevolveTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDrawAndRevolveTool::Setup'::__l2::<lambda_1>,void,FString_const_&>
             ::Call;
  pppuStack_30 = (undefined ***)0x0;
  pUStack_40 = this;
  FWatchablePropertySet::WatchProperty<FString>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->OutputType,
             (TFunction<void___cdecl(FString_const_&)> *)&local_58);
  (**(code **)(this->_padding_ + 0x318))(this,(this->OutputTypeProperties).field0_0x0.DebugPtr);
  pFVar11 = ::FName::FName(&local_138,L"Revolve Tool Settings");
  FVar3 = *pFVar11;
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar12 = URevolveToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar12);
  local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_d8._56_8_ = (UPackage *)0x0;
  local_d8._24_4_ = RF_NoFlags;
  local_d8._40_8_ = (UObject *)0x0;
  local_d8[0x20] = false;
  local_d8._8_8_ = this;
  local_d8._16_8_ = FVar3;
  pUVar13 = (URevolveToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar9 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (URevolveToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar13;
  pcVar2 = *(code **)(pUVar13->_padding_ + 0x2b8);
  ::FString::FString((FString *)&local_130,L"");
  (*pcVar2)(pUVar13,this,&local_130);
  if ((longlong *)local_130.Pitch != (longlong *)0x0) {
    FMemory::Free((void *)local_130.Pitch);
  }
  ((this->Settings).field0_0x0.DebugPtr)->bAllowedToEditDrawPlane = true;
  (**(code **)(this->_padding_ + 0x318))(this,(this->Settings).field0_0x0.DebugPtr);
  dVar1 = (this->InitialDrawFrame).Origin.field0_0x0._s_0.Z;
  pUVar13 = (this->Settings).field0_0x0.DebugPtr;
  dVar7 = (this->InitialDrawFrame).Origin.field0_0x0._s_0.Y;
  (pUVar13->DrawPlaneOrigin).field0_0x0._s_0.X = (this->InitialDrawFrame).Origin.field0_0x0._s_0.X;
  (pUVar13->DrawPlaneOrigin).field0_0x0._s_0.Y = dVar7;
  (pUVar13->DrawPlaneOrigin).field0_0x0._s_0.Z = dVar1;
  local_58 = (code *)(this->InitialDrawFrame).Rotation.field0_0x0._s_0.X;
  dStack_50 = (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Y;
  local_48 = (undefined **)(this->InitialDrawFrame).Rotation.field0_0x0._s_0.Z;
  pUStack_40 = (UDrawAndRevolveTool *)(this->InitialDrawFrame).Rotation.field0_0x0._s_0.W;
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)&local_58,&local_130);
  pUVar13 = (this->Settings).field0_0x0.DebugPtr;
  (pUVar13->DrawPlaneOrientation).Pitch = local_130.Pitch;
  (pUVar13->DrawPlaneOrientation).Yaw = local_130.Yaw;
  (pUVar13->DrawPlaneOrientation).Roll = local_130.Roll;
  pUVar14 = NewObject<UNewMeshMaterialProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UNewMeshMaterialProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->MaterialProperties).field0_0x0.DebugPtr = pUVar14;
  (**(code **)(this->_padding_ + 0x318))(this,pUVar14);
  pUVar14 = (this->MaterialProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar14->_padding_ + 0x2b8);
  ::FString::FString((FString *)&local_130,L"");
  (*pcVar2)(pUVar14,this,&local_130);
  if ((longlong *)local_130.Pitch != (longlong *)0x0) {
    FMemory::Free((void *)local_130.Pitch);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar12);
  local_d8._8_8_ = this;
  pUVar15 = (UCurveControlPointsMechanic *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar9 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UCurveControlPointsMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->ControlPointsMechanic).field0_0x0.DebugPtr = pUVar15;
  (**(code **)(*(longlong *)pUVar15 + 0x2b0))(pUVar15,this);
  UCurveControlPointsMechanic::SetWorld
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,this->TargetWorld);
  local_138 = (FName)this;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_UDrawAndRevolveTool::Setup_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->ControlPointsMechanic).field0_0x0.DebugPtr)->OnPointsChanged,
             (<lambda_2> *)&local_130);
  local_138 = (FName)this;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_UDrawAndRevolveTool::Setup_::__l2::<lambda_3>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->ControlPointsMechanic).field0_0x0.DebugPtr)->OnModeChanged,
             (<lambda_3> *)&local_130);
  UCurveControlPointsMechanic::SetSnappingEnabled
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,
             ((this->Settings).field0_0x0.DebugPtr)->bEnableSnapping);
  UpdateRevolutionAxis(this);
  pTVar16 = UE::Math::TRotator<double>::Quaternion
                      (&((this->Settings).field0_0x0.DebugPtr)->DrawPlaneOrientation,
                       (TQuat<double> *)&local_58);
  pUVar13 = (this->Settings).field0_0x0.DebugPtr;
  local_118._s_0.X = (pUVar13->DrawPlaneOrigin).field0_0x0._s_0.X;
  local_118._s_0.Y = (pUVar13->DrawPlaneOrigin).field0_0x0._s_0.Y;
  local_118._s_0.Z = (pUVar13->DrawPlaneOrigin).field0_0x0._s_0.Z;
  local_100 = pTVar16->X;
  dStack_f8 = pTVar16->Y;
  local_f0 = pTVar16->Z;
  dStack_e8 = pTVar16->W;
  pUVar17 = NewObject<UConstructionPlaneMechanic>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UConstructionPlaneMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->PlaneMechanic).field0_0x0.DebugPtr = pUVar17;
  (**(code **)(*(longlong *)pUVar17 + 0x2b0))(pUVar17,this);
  UConstructionPlaneMechanic::Initialize
            ((this->PlaneMechanic).field0_0x0.DebugPtr,this->TargetWorld,
             (TFrame3<double> *)&local_118._s_0);
  pUVar17 = (this->PlaneMechanic).field0_0x0.DebugPtr;
  pUVar4 = (((this->ControlPointsMechanic).field0_0x0.DebugPtr)->ClickBehavior).field0_0x0.DebugPtr;
  piVar18 = (int *)(**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,&local_138);
  UConstructionPlaneMechanic::UpdateClickPriority(pUVar17,(FInputCapturePriority)(*piVar18 + -1));
  pUVar17 = (this->PlaneMechanic).field0_0x0.DebugPtr;
  local_58 = *(code **)&pUVar17->CanUpdatePlaneFunc;
  uVar6 = *(undefined8 *)&(pUVar17->CanUpdatePlaneFunc).field_0x8;
  local_48 = *(undefined ***)&(pUVar17->CanUpdatePlaneFunc).field_0x10;
  pUStack_40 = *(UDrawAndRevolveTool **)&(pUVar17->CanUpdatePlaneFunc).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar17->CanUpdatePlaneFunc).field_0x20;
  pppuStack_30 = *(undefined ****)&(pUVar17->CanUpdatePlaneFunc).field_0x28;
  *(code **)&pUVar17->CanUpdatePlaneFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDrawAndRevolveTool::Setup'::__l2::<lambda_4>,bool>::Call;
  *(double *)&(pUVar17->CanUpdatePlaneFunc).field_0x8 = dStack_50;
  *(undefined4 *)&(pUVar17->CanUpdatePlaneFunc).field_0x10 = 0x52952740;
  *(undefined4 *)&(pUVar17->CanUpdatePlaneFunc).field_0x14 = 1;
  *(UDrawAndRevolveTool **)&(pUVar17->CanUpdatePlaneFunc).field_0x18 = this;
  *(undefined4 *)&(pUVar17->CanUpdatePlaneFunc).field_0x20 = local_38;
  *(undefined4 *)&(pUVar17->CanUpdatePlaneFunc).field_0x24 = uStack_34;
  *(undefined4 *)&(pUVar17->CanUpdatePlaneFunc).field_0x28 = 0;
  *(undefined4 *)&(pUVar17->CanUpdatePlaneFunc).field_0x2c = 0;
  dStack_50 = (double)uVar6;
  _local_38 = uVar5;
  if (local_58 != (code *)0x0) {
    pppuVar19 = &local_48;
    if (pppuStack_30 != (undefined ***)0x0) {
      pppuVar19 = pppuStack_30;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  local_138 = (FName)this;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_UDrawAndRevolveTool::Setup_::__l2::<lambda_5>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->PlaneMechanic).field0_0x0.DebugPtr)->OnPlaneChanged,(<lambda_5> *)&local_130);
  UCurveControlPointsMechanic::SetPlane
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,
             &((this->PlaneMechanic).field0_0x0.DebugPtr)->Plane);
  UCurveControlPointsMechanic::SetInteractiveInitialization
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,true);
  ((this->ControlPointsMechanic).field0_0x0.DebugPtr)->bAutoRevertToInteractiveInitialization = true
  ;
  pUVar15 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
  pUVar15->MinPointsForLoop = 3;
  pUVar15->MinPointsForNonLoop = 2;
  return;
}

// Shutdown @ 14cc7fe60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawAndRevolveTool::Shutdown(UDrawAndRevolveTool *this,EToolShutdownType param_1)

{
  UCreateMeshObjectTypeProperties *pUVar1;
  code *pcVar2;
  URevolveToolProperties *pUVar3;
  UNewMeshMaterialProperties *pUVar4;
  UMeshOpPreviewWithBackgroundCompute *this_00;
  FDynamicMeshOpResult *pFVar5;
  FString local_78;
  FDynamicMeshOpResult local_68;
  
  pUVar1 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_78,L"");
  (*pcVar2)(pUVar1,this,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString(&local_78,L"");
  (*pcVar2)(pUVar3,this,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->MaterialProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString(&local_78,L"");
  (*pcVar2)(pUVar4,this,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  (**(code **)(*(longlong *)(this->PlaneMechanic).field0_0x0.DebugPtr + 0x2b8))();
  (**(code **)(*(longlong *)(this->ControlPointsMechanic).field0_0x0.DebugPtr + 0x2b8))();
  this_00 = (this->Preview).field0_0x0.DebugPtr;
  if (this_00 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    if (param_1 == Accept) {
      UPreviewMesh::CalculateTangents((this_00->PreviewMesh).field0_0x0.DebugPtr);
      pFVar5 = UMeshOpPreviewWithBackgroundCompute::Shutdown
                         ((this->Preview).field0_0x0.DebugPtr,&local_68);
      GenerateAsset(this,pFVar5);
      if (local_68.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
        (**(code **)(local_68.Mesh.Ptr)->_padding_)(local_68.Mesh.Ptr,1);
      }
    }
    else {
      UMeshOpPreviewWithBackgroundCompute::Cancel(this_00);
    }
  }
  return;
}

// StartPreview @ 14cc82010

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDrawAndRevolveTool::StartPreview(UDrawAndRevolveTool *this)

{
  FName FVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FName *pFVar4;
  UMeshOpPreviewWithBackgroundCompute *pUVar5;
  UInteractiveToolManager *pUVar6;
  UMaterialInterface *pUVar7;
  UMaterialInterface *pUVar8;
  longlong *plVar9;
  UObject *pUVar10;
  undefined1 auStack_148 [32];
  FName local_128;
  <lambda_1> local_120;
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = URevolveOperatorFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar2;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDrawAndRevolveTool *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(UDrawAndRevolveTool **)&pUVar2[1].field_0x8 = this;
  pFVar4 = ::FName::FName(&local_128,"RevolveToolPreview");
  FVar1 = *pFVar4;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar3);
  local_118._48_8_ = (FObjectInstancingGraph *)0x0;
  local_118._56_8_ = (UPackage *)0x0;
  local_118._24_4_ = RF_NoFlags;
  local_118._40_8_ = (UObject *)0x0;
  local_118[0x20] = false;
  local_118._8_8_ = pUVar2;
  local_118._16_8_ = FVar1;
  pUVar5 = (UMeshOpPreviewWithBackgroundCompute *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar9 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Preview).field0_0x0.DebugPtr = pUVar5;
  pUVar10 = pUVar2 + 1;
  if (pUVar2 == (UObject *)0x0) {
    pUVar10 = (UObject *)0x0;
  }
  UMeshOpPreviewWithBackgroundCompute::Setup
            (pUVar5,this->TargetWorld,(IDynamicMeshOperatorFactory *)pUVar10);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (UToolTarget *)0x0);
  UPreviewMesh::SetTangentsMode
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,AutoCalculated
            );
  pUVar5 = (this->Preview).field0_0x0.DebugPtr;
  pUVar6 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar7 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar6);
  pUVar8 = (UMaterialInterface *)
           FWeakObjectPtr::Get(&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).WeakPtr
                              );
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials(pUVar5,pUVar8,pUVar7);
  UPreviewMesh::EnableWireframe
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             ((this->MaterialProperties).field0_0x0.DebugPtr)->bShowWireframe);
  local_128 = (FName)this;
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_UDrawAndRevolveTool::StartPreview_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((this->Preview).field0_0x0.DebugPtr)->OnMeshUpdated,&local_120);
  UMeshOpPreviewWithBackgroundCompute::SetVisibility((this->Preview).field0_0x0.DebugPtr,true);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  return;
}

// StaticRegisterNativesUDrawAndRevolveTool @ 14cc823c0

void __cdecl UDrawAndRevolveTool::StaticRegisterNativesUDrawAndRevolveTool(void)

{
  return;
}

// UpdateRevolutionAxis @ 14cc86ca0

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

void __thiscall UDrawAndRevolveTool::UpdateRevolutionAxis(UDrawAndRevolveTool *this)

{
  double dVar1;
  URevolveToolProperties *pUVar2;
  UCurveControlPointsMechanic *this_00;
  double dVar3;
  TVector<double> *pTVar4;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  double local_28;
  double dStack_20;
  double local_18;
  
  pUVar2 = (this->Settings).field0_0x0.DebugPtr;
  dVar1 = (pUVar2->DrawPlaneOrigin).field0_0x0._s_0.Z;
  dVar3 = (pUVar2->DrawPlaneOrigin).field0_0x0._s_0.Y;
  (this->RevolutionAxisOrigin).field0_0x0._s_0.X = (pUVar2->DrawPlaneOrigin).field0_0x0._s_0.X;
  (this->RevolutionAxisOrigin).field0_0x0._s_0.Y = dVar3;
  (this->RevolutionAxisOrigin).field0_0x0._s_0.Z = dVar1;
  local_58._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_58._s_0.Y = _UNK_150689518;
  local_58._s_0.Z = 0.0;
  pTVar4 = UE::Math::TRotator<double>::RotateVector
                     (&pUVar2->DrawPlaneOrientation,(TVector<double> *)&local_40._s_0,
                      (TVector<double> *)&local_58._s_0);
  this_00 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
  dVar1 = (pTVar4->field0_0x0)._s_0.Y;
  (this->RevolutionAxisDirection).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (this->RevolutionAxisDirection).field0_0x0._s_0.Y = dVar1;
  (this->RevolutionAxisDirection).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  UCurveControlPointsMechanic::RemoveSnapLine(this_00,1);
  local_40._s_0.X = (this->RevolutionAxisOrigin).field0_0x0._s_0.X;
  local_40._s_0.Y = (this->RevolutionAxisOrigin).field0_0x0._s_0.Y;
  local_40._s_0.Z = (this->RevolutionAxisOrigin).field0_0x0._s_0.Z;
  local_28 = (this->RevolutionAxisDirection).field0_0x0._s_0.X;
  dStack_20 = (this->RevolutionAxisDirection).field0_0x0._s_0.Y;
  local_18 = (this->RevolutionAxisDirection).field0_0x0._s_0.Z;
  UCurveControlPointsMechanic::AddSnapLine
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,1,(TLine3<double> *)&local_40._s_0);
  return;
}

