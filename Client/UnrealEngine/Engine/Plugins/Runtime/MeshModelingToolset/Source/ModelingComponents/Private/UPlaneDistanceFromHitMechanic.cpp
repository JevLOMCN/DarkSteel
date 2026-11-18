// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// StaticClass @ 14caad170

UClass * __cdecl UPlaneDistanceFromHitMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PlaneDistanceFromHitMechanic",
               &Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.InnerSingleton,
               StaticRegisterNativesUPlaneDistanceFromHitMechanic,0x510,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlaneDistanceFromHitMechanic>,
               InternalVTableHelperCtorCaller<UPlaneDistanceFromHitMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.InnerSingleton;
}

// UPlaneDistanceFromHitMechanic @ 14cace370

UPlaneDistanceFromHitMechanic * __thiscall
UPlaneDistanceFromHitMechanic::UPlaneDistanceFromHitMechanic
          (UPlaneDistanceFromHitMechanic *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  *(undefined ***)this = &___7UPlaneDistanceFromHitMechanic__6B_;
  *(undefined8 *)&this->WorldHitQueryFunc = 0;
  *(undefined8 *)&(this->WorldHitQueryFunc).field_0x28 = 0;
  *(undefined8 *)&this->WorldPointSnapFunc = 0;
  *(undefined8 *)&(this->WorldPointSnapFunc).field_0x28 = 0;
  this->CurrentHeight = 0.0;
  this->bCurrentHitIsWorldHit = false;
  memset(&this->LastActiveWorldHit,0,0x100);
  (this->LastActiveWorldHit).Time = 1.0;
  (this->LastActiveWorldHit).MyItem = -1;
  (this->LastActiveWorldHit).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastActiveWorldHit).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LastActiveWorldHit).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LastActiveWorldHit).HitObjectHandle.InstanceIndex = -1;
  (this->LastActiveWorldHit).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LastActiveWorldHit).HitObjectHandle.field_0x1d = 0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->bFallbackToLineAxisPoint = true;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->PreviewHeightTarget);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->PreviewHeightTargetAABB);
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.W = 1.0;
  return this;
}

// UPlaneDistanceFromHitMechanic @ 14cace500

UPlaneDistanceFromHitMechanic * __thiscall
UPlaneDistanceFromHitMechanic::UPlaneDistanceFromHitMechanic(UPlaneDistanceFromHitMechanic *this)

{
  undefined8 uVar1;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined ***)this = &___7UPlaneDistanceFromHitMechanic__6B_;
  *(undefined8 *)&this->WorldHitQueryFunc = 0;
  *(undefined8 *)&(this->WorldHitQueryFunc).field_0x28 = 0;
  *(undefined8 *)&this->WorldPointSnapFunc = 0;
  *(undefined8 *)&(this->WorldPointSnapFunc).field_0x28 = 0;
  this->CurrentHeight = 0.0;
  this->bCurrentHitIsWorldHit = false;
  memset(&this->LastActiveWorldHit,0,0x100);
  (this->LastActiveWorldHit).Time = 1.0;
  (this->LastActiveWorldHit).MyItem = -1;
  (this->LastActiveWorldHit).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastActiveWorldHit).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LastActiveWorldHit).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LastActiveWorldHit).HitObjectHandle.InstanceIndex = -1;
  (this->LastActiveWorldHit).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LastActiveWorldHit).HitObjectHandle.field_0x1d = 0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->bFallbackToLineAxisPoint = true;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->PreviewHeightTarget);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->PreviewHeightTargetAABB);
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.W = 1.0;
  return this;
}

// ~UPlaneDistanceFromHitMechanic @ 14cad2630

void __thiscall
UPlaneDistanceFromHitMechanic::~UPlaneDistanceFromHitMechanic(UPlaneDistanceFromHitMechanic *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined ***)this = &___7UPlaneDistanceFromHitMechanic__6B_;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->PreviewHeightTargetAABB);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->PreviewHeightTarget);
  if (*(longlong *)&this->WorldPointSnapFunc != 0) {
    plVar1 = *(longlong **)&(this->WorldPointSnapFunc).field_0x28;
    plVar2 = (longlong *)&(this->WorldPointSnapFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->WorldHitQueryFunc != 0) {
    plVar1 = *(longlong **)&(this->WorldHitQueryFunc).field_0x28;
    plVar2 = (longlong *)&(this->WorldHitQueryFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// GetPrivateStaticClass @ 14cb12a60

UClass * __cdecl UPlaneDistanceFromHitMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PlaneDistanceFromHitMechanic",
               &Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.InnerSingleton,
               StaticRegisterNativesUPlaneDistanceFromHitMechanic,0x510,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlaneDistanceFromHitMechanic>,
               InternalVTableHelperCtorCaller<UPlaneDistanceFromHitMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.InnerSingleton;
}

// Initialize @ 14cb1d160

void __thiscall
UPlaneDistanceFromHitMechanic::Initialize
          (UPlaneDistanceFromHitMechanic *this,FDynamicMesh3 *param_1,TFrame3<double> *param_2,
          TTransform<double> *param_3)

{
  FDynamicMesh3 *this_00;
  double dVar1;
  ulong64 uVar2;
  TQuaternion<double>_u_0 local_60;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  dVar1 = (param_2->Origin).field0_0x0._s_0.Y;
  this_00 = &this->PreviewHeightTarget;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->Rotation).field0_0x0._s_0.X;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_2->Rotation).field0_0x0._s_0.Z;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Y = (param_2->Rotation).field0_0x0._s_0.Y;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.W = (param_2->Rotation).field0_0x0._s_0.W;
  UE::Geometry::FDynamicMesh3::operator=(this_00,param_1);
  local_60._s_0.X = (param_3->Rotation).XY.m128d_f64[0];
  local_60._s_0.Y = (param_3->Rotation).XY.m128d_f64[1];
  local_60._s_0.Z = (param_3->Rotation).ZW.m128d_f64[0];
  local_60._s_0.W = (param_3->Rotation).ZW.m128d_f64[1];
  local_30 = (param_3->Translation).ZW.m128d_f64[0];
  local_18 = (param_3->Scale3D).ZW.m128d_f64[0];
  local_40 = (param_3->Translation).XY.m128d_f64[0];
  dStack_38 = (param_3->Translation).XY.m128d_f64[1];
  local_28 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_20 = (param_3->Scale3D).XY.m128d_f64[1];
  MeshTransforms::ApplyTransform(this_00,(TTransformSRT3<double> *)&local_60._s_0,false,All);
  (this->PreviewHeightTargetAABB).Mesh = this_00;
  (this->PreviewHeightTargetAABB).MeshChangeStamp = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            (&this->PreviewHeightTargetAABB,false);
  uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->PreviewHeightTargetAABB).Mesh);
  (this->PreviewHeightTargetAABB).MeshChangeStamp = uVar2;
  return;
}

// Initialize @ 14cb1d280

void __thiscall
UPlaneDistanceFromHitMechanic::Initialize
          (UPlaneDistanceFromHitMechanic *this,FDynamicMesh3 *param_1,TFrame3<double> *param_2,
          bool param_3)

{
  FDynamicMesh3 *this_00;
  double dVar1;
  ulong64 uVar2;
  
  dVar1 = (param_2->Origin).field0_0x0._s_0.Y;
  this_00 = &this->PreviewHeightTarget;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->Rotation).field0_0x0._s_0.X;
  (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_2->Rotation).field0_0x0._s_0.Z;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Y = (param_2->Rotation).field0_0x0._s_0.Y;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.W = (param_2->Rotation).field0_0x0._s_0.W;
  UE::Geometry::FDynamicMesh3::operator=(this_00,param_1);
  if (param_3) {
    MeshTransforms::WorldToFrameCoords(this_00,&this->PreviewHeightFrame,All);
  }
  (this->PreviewHeightTargetAABB).Mesh = this_00;
  (this->PreviewHeightTargetAABB).MeshChangeStamp = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            (&this->PreviewHeightTargetAABB,false);
  uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->PreviewHeightTargetAABB).Mesh);
  (this->PreviewHeightTargetAABB).MeshChangeStamp = uVar2;
  return;
}

// Render @ 14cb30580

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
UPlaneDistanceFromHitMechanic::Render
          (UPlaneDistanceFromHitMechanic *this,IToolsContextRenderAPI *param_1)

{
  TFrame3<double> *pTVar1;
  TQuaternion<double> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_308 [32];
  FLinearColor_u_0 local_2c8;
  TVector<double>_u_0 local_2b8;
  undefined1 local_2a0 [24];
  TVector<double> local_288;
  FViewCameraState local_268;
  FToolDataVisualizer local_208;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_268);
  fVar18 = local_268.HorizontalFOVDegrees * __real_3c360b61;
  FToolDataVisualizer::FToolDataVisualizer(&local_208);
  FToolDataVisualizer::BeginFrame(&local_208,param_1,&local_268);
  pTVar1 = &this->CurrentHitPosFrameWorld;
  dVar7 = ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
                    (&local_268,&pTVar1->Origin,__real_3fe999999999999a);
  fVar11 = __real_3f800000;
  bVar6 = this->bCurrentHitIsWorldHit;
  fVar20 = (float)dVar7;
  fVar19 = __real_40000000;
  if (bVar6 != false) {
    fVar19 = fVar18 * __real_40800000;
  }
  local_2c8._s_0.G = FLinearColor::sRGBToLinearTable[0x80];
  local_2c8._s_0.A = 1.0;
  dVar7 = (double)fVar20;
  uVar14 = (ulonglong)(-(uint)(bVar6 != false) & 0x3fc);
  lVar13 = 0;
  if (bVar6 == false) {
    lVar13 = 0x200;
  }
  local_2c8._s_0.R = *(float *)((longlong)FLinearColor::sRGBToLinearTable + uVar14);
  local_2c8._s_0.B = *(float *)((longlong)FLinearColor::sRGBToLinearTable + lVar13);
  local_2a0._16_8_ = 0.0;
  local_2a0._8_4_ = SUB84(dVar7,0);
  local_2a0._0_8_ = dVar7;
  local_2a0._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  pTVar12 = UE::Geometry::operator*<double>
                      (&local_288,&(this->CurrentHitPosFrameWorld).Rotation,
                       (TVector<double> *)local_2a0);
  dVar3 = (pTVar1->Origin).field0_0x0._s_0.X;
  pTVar2 = &(this->CurrentHitPosFrameWorld).Rotation;
  dVar4 = (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Y;
  dVar16 = (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Z;
  local_2a0._16_8_ = 0.0;
  local_2b8._s_0.X = dVar3 + (pTVar12->field0_0x0)._s_0.X;
  local_2b8._s_0.Y = dVar4 + (pTVar12->field0_0x0)._s_0.Y;
  local_2b8._s_0.Z = dVar16 + (pTVar12->field0_0x0)._s_0.Z;
  dVar15 = (double)(float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000);
  local_2a0._8_4_ = SUB84(dVar15,0);
  local_2a0._0_8_ = dVar15;
  local_2a0._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  pTVar12 = UE::Geometry::operator*<double>(&local_288,pTVar2,(TVector<double> *)local_2a0);
  local_2a0._0_8_ = dVar3 + (pTVar12->field0_0x0)._s_0.X;
  local_2a0._8_8_ = dVar4 + (pTVar12->field0_0x0)._s_0.Y;
  local_2a0._16_8_ = dVar16 + (pTVar12->field0_0x0)._s_0.Z;
  FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
            (&local_208,(TVector<double> *)local_2a0,(TVector<double> *)&local_2b8._s_0,
             (FLinearColor *)&local_2c8._s_0,fVar19,false);
  local_2c8._s_0.R = *(float *)((longlong)FLinearColor::sRGBToLinearTable + uVar14);
  local_2c8._s_0.B = *(float *)((longlong)FLinearColor::sRGBToLinearTable + lVar13);
  local_2c8._s_0.G = FLinearColor::sRGBToLinearTable[0x80];
  local_2b8._s_0.Z = 0.0;
  local_2c8._s_0.A = 1.0;
  local_2b8._s_0.X = dVar7;
  local_2b8._s_0.Y = dVar15;
  pTVar12 = UE::Geometry::operator*<double>
                      (&local_288,&(this->CurrentHitPosFrameWorld).Rotation,
                       (TVector<double> *)&local_2b8._s_0);
  dVar3 = (pTVar1->Origin).field0_0x0._s_0.X;
  dVar4 = (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Y;
  dVar16 = (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Z;
  local_2a0._16_8_ = dVar16 + (pTVar12->field0_0x0)._s_0.Z;
  local_2b8._s_0.Z = 0.0;
  local_2a0._8_8_ = dVar4 + (pTVar12->field0_0x0)._s_0.Y;
  local_2a0._0_8_ = dVar3 + (pTVar12->field0_0x0)._s_0.X;
  local_2b8._s_0.X = dVar15;
  local_2b8._s_0.Y = dVar7;
  pTVar12 = UE::Geometry::operator*<double>(&local_288,pTVar2,(TVector<double> *)&local_2b8._s_0);
  local_2b8._s_0.X = dVar3 + (pTVar12->field0_0x0)._s_0.X;
  local_2b8._s_0.Y = dVar4 + (pTVar12->field0_0x0)._s_0.Y;
  local_2b8._s_0.Z = dVar16 + (pTVar12->field0_0x0)._s_0.Z;
  FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
            (&local_208,(TVector<double> *)&local_2b8._s_0,(TVector<double> *)local_2a0,
             (FLinearColor *)&local_2c8._s_0,fVar19,false);
  dVar7 = __real_3ff0000000000000;
  if (this->bCurrentHitIsWorldHit != false) {
    dVar3 = (pTVar2->field0_0x0)._s_0.X;
    dVar4 = (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Y;
    dVar16 = (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Z;
    dVar16 = dVar16 + dVar16;
    local_2c8._s_0.R = *(float *)((longlong)FLinearColor::sRGBToLinearTable + uVar14);
    dVar15 = (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.W;
    local_2c8._s_0.B = *(float *)((longlong)FLinearColor::sRGBToLinearTable + lVar13);
    local_2c8._s_0.G = FLinearColor::sRGBToLinearTable[0x80];
    local_2c8._s_0.A = 1.0;
    local_2b8._s_0.X = dVar15 * (dVar4 + dVar4) + dVar16 * dVar3;
    local_2b8._s_0.Y = dVar16 * dVar4 - dVar15 * (dVar3 + dVar3);
    local_2a0._16_8_ = (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Z;
    local_2b8._s_0.Z = __real_3ff0000000000000 - ((dVar4 + dVar4) * dVar4 + (dVar3 + dVar3) * dVar3)
    ;
    local_2a0._0_16_ = *(undefined1 (*) [16])&(pTVar1->Origin).field0_0x0;
    (**(code **)(local_208._padding_ + 0x20))(&local_208,local_2a0,&local_2b8,fVar20 + fVar20);
  }
  dVar3 = (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.X;
  dVar4 = (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Y;
  dVar9 = (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X;
  dVar10 = (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y;
  dVar16 = (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Z;
  dVar15 = (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.W;
  dVar16 = dVar16 + dVar16;
  dVar5 = (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z;
  local_2c8._s_0.A = 1.0;
  dVar8 = dVar15 * (dVar4 + dVar4) + dVar16 * dVar3;
  dVar16 = dVar16 * dVar4 - dVar15 * (dVar3 + dVar3);
  local_2c8._s_0.R = FLinearColor::sRGBToLinearTable[0x80];
  local_2c8._s_0.G = FLinearColor::sRGBToLinearTable[0x80];
  local_2c8._s_0.B = FLinearColor::sRGBToLinearTable[0];
  dVar15 = dVar16 * __real_408f400000000000;
  dVar17 = dVar8 * __real_408f400000000000;
  dVar7 = dVar7 - ((dVar4 + dVar4) * dVar4 + (dVar3 + dVar3) * dVar3);
  local_2b8._s_0.Y = dVar15 + dVar10;
  local_2a0._16_8_ = dVar7 * __real_408f400000000000;
  local_2b8._s_0.X = dVar17 + dVar9;
  local_2b8._s_0.Z = (double)local_2a0._16_8_ + dVar5;
  local_2a0._8_8_ = dVar10 - dVar15;
  local_2a0._0_8_ = dVar9 - dVar17;
  local_2a0._16_8_ = dVar5 - (double)local_2a0._16_8_;
  FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
            (&local_208,(TVector<double> *)local_2a0,(TVector<double> *)&local_2b8._s_0,
             (FLinearColor *)&local_2c8._s_0,fVar11,false);
  local_2c8._s_0.G = FLinearColor::sRGBToLinearTable[0];
  dVar3 = (double)this->CurrentHeight;
  local_2c8._s_0.A = 1.0;
  local_2c8._s_0.R = FLinearColor::sRGBToLinearTable[0x80];
  local_2b8._s_0.X = dVar8 * dVar3 + dVar9;
  local_2c8._s_0.B = FLinearColor::sRGBToLinearTable[0x80];
  local_2b8._s_0.Y = dVar16 * dVar3 + dVar10;
  local_2b8._s_0.Z = dVar7 * dVar3 + dVar5;
  FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
            (&local_208,(TVector<double> *)&local_2b8._s_0,&pTVar1->Origin,
             (FLinearColor *)&local_2c8._s_0,fVar11,false);
  FToolDataVisualizer::EndFrame(&local_208);
  FToolDataVisualizer::~FToolDataVisualizer(&local_208);
  return;
}

// Setup @ 14cb3b080

void __thiscall
UPlaneDistanceFromHitMechanic::Setup(UPlaneDistanceFromHitMechanic *this,UInteractiveTool *param_1)

{
  UInteractiveTool *apUStackX_8 [4];
  
  apUStackX_8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)apUStackX_8);
  return;
}

// StaticRegisterNativesUPlaneDistanceFromHitMechanic @ 14cb3ebc0

void __cdecl UPlaneDistanceFromHitMechanic::StaticRegisterNativesUPlaneDistanceFromHitMechanic(void)

{
  return;
}

// UpdateCurrentDistance @ 14cb44c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UPlaneDistanceFromHitMechanic::UpdateCurrentDistance
          (UPlaneDistanceFromHitMechanic *this,TRay<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  TVector<double> *pTVar20;
  undefined8 uVar21;
  FHitResult *pFVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  longlong lVar26;
  double dVar27;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined1 auStackY_6f8 [32];
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double dStack_6b0;
  double dStack_6a8;
  double dStack_6a0;
  double dStack_698;
  TVector<double>_u_0 local_690;
  double local_678;
  double dStack_670;
  double local_668;
  TQuaternion<double>_u_0 TStack_660;
  double local_640;
  double dStack_638;
  double local_630;
  TQuaternion<double>_u_0 TStack_628;
  double local_608;
  double dStack_600;
  double local_5f8;
  TQuaternion<double>_u_0 TStack_5f0;
  undefined8 local_5c0;
  undefined4 uStack_5b8;
  undefined1 uStack_5b4;
  undefined2 uStack_5b3;
  undefined1 uStack_5b1;
  double local_5b0;
  double dStack_5a8;
  double local_5a0;
  TVector<double>_u_0 TStack_598;
  TVector<double>_u_0 local_580;
  TVector<double>_u_0 local_568;
  TVector<double>_u_0 local_550;
  TVector<double>_u_0 local_538;
  TVector<double>_u_0 local_520;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4f0;
  TVector<double>_u_0 local_4d8;
  TVector<double>_u_0 local_4c0;
  TVector<double>_u_0 local_4a8;
  TVector<double>_u_0 local_490;
  double local_478;
  double dStack_470;
  double local_468;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 TStack_440;
  TVector<double>_u_0 local_428;
  TVector<double>_u_0 local_408;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_380;
  double local_378;
  double local_370;
  TVector<double> local_358;
  TVector<double> local_340;
  TVector<double> local_328;
  TVector<double> local_310;
  TVector<double> local_2f8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  TVector<double>_u_0 TStack_2c8;
  undefined8 local_2a8;
  double local_280;
  double dStack_278;
  double local_270;
  double local_250;
  double dStack_248;
  double local_240;
  undefined4 local_204;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  TVector<double> local_1a8;
  undefined8 local_188 [2];
  longlong local_178;
  longlong local_168 [3];
  longlong *local_150;
  undefined1 local_148;
  undefined1 local_138 [48];
  TVector<double>_u_0 local_108;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  TVector<double> local_b8;
  EIntersectionType local_a0 [2];
  ulonglong local_98;
  
  local_6b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar32 = __real_7f7fffff;
  fVar31 = __real_3f800000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  local_6c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_6c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  bVar17 = false;
  this->bCurrentHitIsWorldHit = false;
  dVar11 = (param_1->Origin).field0_0x0._s_0.X;
  dVar27 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar1 = (param_1->Origin).field0_0x0._s_0.Z;
  TStack_2c8._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  dStack_6a0 = ___xmm_3ff00000000000000000000000000000;
  dStack_698 = _UNK_15061cbc8;
  TStack_2c8._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  TStack_2c8._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  dStack_6b0 = 0.0;
  dStack_6a8 = 0.0;
  local_2e0 = dVar11;
  dStack_2d8 = dVar27;
  local_2d0 = dVar1;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(this->PreviewHeightFrame).Rotation,(TVector<double> *)&local_4f0._s_0,
             (TVector<double> *)&TStack_2c8._s_0);
  local_580._s_0.Z = dVar1 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z;
  local_580._s_0.X = dVar11 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X;
  local_580._s_0.Y = dVar27 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(this->PreviewHeightFrame).Rotation,(TVector<double> *)&local_508._s_0,
             (TVector<double> *)&local_580._s_0);
  local_5a0 = local_508._s_0.Z;
  local_5b0 = local_508._s_0.X;
  dStack_5a8 = local_508._s_0.Y;
  TStack_598._s_0.Z = local_4f0._s_0.Z;
  TStack_598._s_0.X = local_4f0._s_0.X;
  TStack_598._s_0.Y = local_4f0._s_0.Y;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_598._s_0,__real_3e45798ee0000000);
  local_188[0] = __real_7fefffffffffffff;
  local_178 = 0;
  local_150 = (longlong *)0x0;
  local_148 = 0;
  uVar19 = (**(code **)((this->PreviewHeightTargetAABB)._padding_ + 0x40))
                     (&this->PreviewHeightTargetAABB,&local_5b0,local_188);
  if (local_178 != 0) {
    plVar23 = local_168;
    if (local_150 != (longlong *)0x0) {
      plVar23 = local_150;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  dVar11 = __real_3ff0000000000000;
  if (-1 < (int)uVar19) {
    if ((((int)((this->PreviewHeightTarget).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               (this->PreviewHeightTarget).TriangleRefCounts.RefCounts.CurBlockUsed) <= (int)uVar19)
        || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->PreviewHeightTarget).TriangleRefCounts.RefCounts.
                                           Blocks.AllocatorInstance.Data +
                                          (ulonglong)(uVar19 >> 9) * 8) +
                                        (ulonglong)(uVar19 & 0x1ff) * 2) - 1U))) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mesh.IsTriangle(TriIdx)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                            ,0x2b,L""), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (&this->PreviewHeightTarget,uVar19,(TVector<double> *)&local_458._s_0,
               (TVector<double> *)&TStack_440._s_0,(TVector<double> *)&local_428._s_0);
    uVar12 = TStack_598._s_0.Z;
    uVar21 = TStack_598._s_0.Y;
    dVar27 = local_5a0;
    dVar2 = dStack_5a8;
    dVar1 = local_5b0;
    local_138._24_8_ = TStack_598._s_0.X;
    local_138._16_8_ = local_5a0;
    uVar15 = (ulonglong)local_5a0 >> 0x20;
    uVar6 = SUB84(TStack_598._s_0.X,0);
    uVar16 = (ulonglong)TStack_598._0_8_ >> 0x20;
    local_108._s_0.X = local_458._s_0.X;
    local_108._s_0.Y = local_458._s_0.Y;
    local_e8 = TStack_440._s_0.Y;
    dStack_e0 = TStack_440._s_0.Z;
    local_108._s_0.Z = local_458._s_0.Z;
    dStack_f0 = TStack_440._s_0.X;
    local_c8 = local_428._s_0.Z;
    local_138._0_8_ = local_5b0;
    local_138._8_8_ = dStack_5a8;
    local_138._32_8_ = TStack_598._s_0.Y;
    local_138._40_8_ = TStack_598._s_0.Z;
    local_d8 = local_428._s_0.X;
    dStack_d0 = local_428._s_0.Y;
    UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
              ((TRay<double> *)local_138,(TTriangle3<double> *)&local_108._s_0,&local_c0,&local_b8,
               local_a0);
    auVar9._4_8_ = extraout_XMM0_Qb;
    auVar9._0_4_ = (int)uVar15;
    auVar30._0_8_ = auVar9._0_8_ << 0x20;
    auVar30._8_4_ = uVar6;
    auVar30._12_4_ = (int)uVar16;
    local_568._s_0.X = auVar30._8_8_ * local_c0 + dVar1;
    dVar27 = (double)uVar12 * local_c0 + dVar27;
    local_568._s_0.Y = (double)uVar21 * local_c0 + dVar2;
    local_568._s_0.Z = dVar27;
    UE::Geometry::FDynamicMesh3::GetTriNormal(&this->PreviewHeightTarget,&local_358,uVar19);
    UE::Geometry::operator*<double>(&local_340,&(this->PreviewHeightFrame).Rotation,&local_358);
    pTVar20 = UE::Geometry::operator*<double>
                        (&local_1a8,&(this->PreviewHeightFrame).Rotation,
                         (TVector<double> *)&local_568._s_0);
    TStack_660._s_0.X = 0.0;
    TStack_660._s_0.W = dVar11;
    local_678 = (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X + (pTVar20->field0_0x0)._s_0.X;
    dStack_670 = (pTVar20->field0_0x0)._s_0.Y + (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y;
    TStack_660._s_0.Y = 0.0;
    TStack_660._s_0.Z = 0.0;
    local_668 = (pTVar20->field0_0x0)._s_0.Z + (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z;
    local_4d8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_4d8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_4d8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&TStack_660._s_0,(TVector<double> *)&local_4d8._s_0,&local_340
              );
    local_6c8 = local_678;
    dStack_6c0 = dStack_670;
    local_6b8 = local_668;
    dStack_6b0 = TStack_660._s_0.X;
    bVar17 = true;
    dStack_6a8 = TStack_660._s_0.Y;
    dStack_6a0 = TStack_660._s_0.Z;
    auVar10._4_8_ = TStack_660._s_0.Z;
    auVar10._0_4_ = (int)((ulonglong)local_678 >> 0x20);
    auVar28._0_8_ = auVar10._0_8_ << 0x20;
    auVar28._8_4_ = SUB84(dStack_670,0);
    auVar28._12_4_ = (int)((ulonglong)dStack_670 >> 0x20);
    dStack_698 = TStack_660._s_0.W;
    fVar31 = (float)dVar27;
    fVar32 = (float)((auVar28._8_8_ - (param_1->Origin).field0_0x0._s_0.Y) *
                     (param_1->Direction).field0_0x0._s_0.Y +
                     (local_678 - (param_1->Origin).field0_0x0._s_0.X) *
                     (param_1->Direction).field0_0x0._s_0.X +
                    (local_668 - (param_1->Origin).field0_0x0._s_0.Z) *
                    (param_1->Direction).field0_0x0._s_0.Z);
  }
  pvVar4 = *(void **)&this->WorldHitQueryFunc;
  if (pvVar4 != (void *)0x0) {
    memset(&local_2a8,0,0x100);
    uStack_5b3 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    uStack_5b1 = 0;
    local_5c0 = 0;
    uStack_5b8 = 0xffffffff;
    uStack_5b4 = 0;
    uStack_1d8 = 0xffffffff;
    local_2a8._4_4_ = 0x3f800000;
    local_204 = 0xffffffff;
    local_1e0 = 0;
    UE::Core::Private::Function::CheckCallable(pvVar4);
    plVar23 = *(longlong **)&(this->WorldHitQueryFunc).field_0x28;
    pcVar5 = *(code **)&this->WorldHitQueryFunc;
    plVar25 = (longlong *)&(this->WorldHitQueryFunc).field_0x10;
    if (plVar23 != (longlong *)0x0) {
      plVar25 = plVar23;
    }
    uVar21 = (**(code **)(*plVar25 + 8))();
    cVar18 = (*pcVar5)(uVar21,param_1,&local_2a8);
    if ((cVar18 != '\0') &&
       ((float)((dStack_278 - (param_1->Origin).field0_0x0._s_0.Y) *
                (param_1->Direction).field0_0x0._s_0.Y +
                (local_280 - (param_1->Origin).field0_0x0._s_0.X) *
                (param_1->Direction).field0_0x0._s_0.X +
               (local_270 - (param_1->Origin).field0_0x0._s_0.Z) *
               (param_1->Direction).field0_0x0._s_0.Z) < fVar32)) {
      local_4c0._s_0.X = local_250;
      local_4c0._s_0.Y = dStack_248;
      local_4c0._s_0.Z = local_240;
      local_640 = local_280;
      dStack_638 = dStack_278;
      TStack_628._s_0.X = 0.0;
      local_4a8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_4a8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_4a8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      TStack_628._s_0.W = dVar11;
      TStack_628._s_0.Y = 0.0;
      TStack_628._s_0.Z = 0.0;
      local_630 = local_270;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&TStack_628._s_0,(TVector<double> *)&local_4a8._s_0,
                 (TVector<double> *)&local_4c0._s_0);
      local_6c8 = local_640;
      dStack_6c0 = dStack_638;
      local_6b8 = local_630;
      dStack_6b0 = TStack_628._s_0.X;
      dStack_6a8 = TStack_628._s_0.Y;
      dStack_6a0 = TStack_628._s_0.Z;
      local_550._s_0.X = local_280 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X;
      dStack_698 = TStack_628._s_0.W;
      local_550._s_0.Y = dStack_278 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y;
      local_550._s_0.Z = local_270 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z;
      UE::Geometry::TQuaternion<double>::InverseMultiply
                (&(this->PreviewHeightFrame).Rotation,&local_328,(TVector<double> *)&local_550._s_0)
      ;
      fVar31 = (float)local_328.field0_0x0._s_0.Z;
      lVar26 = 2;
      pFVar22 = &this->LastActiveWorldHit;
      puVar24 = &local_2a8;
      do {
        uVar21 = *puVar24;
        uVar12 = puVar24[1];
        uVar13 = puVar24[2];
        uVar14 = puVar24[3];
        pFVar22->FaceIndex = (int)uVar21;
        pFVar22->Time = (float)(int)((ulonglong)uVar21 >> 0x20);
        pFVar22->Distance = (float)(int)uVar12;
        pFVar22->_padding_ = (int)((ulonglong)uVar12 >> 0x20);
        uVar21 = puVar24[4];
        uVar12 = puVar24[5];
        *(undefined8 *)&pFVar22->Location = uVar13;
        *(undefined8 *)&(pFVar22->Location).field_0x8 = uVar14;
        uVar13 = puVar24[6];
        uVar14 = puVar24[7];
        *(undefined8 *)&(pFVar22->Location).field_0x10 = uVar21;
        *(undefined8 *)&pFVar22->ImpactPoint = uVar12;
        uVar21 = puVar24[8];
        uVar12 = puVar24[9];
        *(undefined8 *)&(pFVar22->ImpactPoint).field_0x8 = uVar13;
        *(undefined8 *)&(pFVar22->ImpactPoint).field_0x10 = uVar14;
        uVar13 = puVar24[10];
        uVar14 = puVar24[0xb];
        *(undefined8 *)&pFVar22->Normal = uVar21;
        *(undefined8 *)&(pFVar22->Normal).field_0x8 = uVar12;
        uVar21 = puVar24[0xc];
        uVar12 = puVar24[0xd];
        *(undefined8 *)&(pFVar22->Normal).field_0x10 = uVar13;
        *(undefined8 *)&pFVar22->ImpactNormal = uVar14;
        uVar13 = puVar24[0xe];
        uVar14 = puVar24[0xf];
        *(undefined8 *)&(pFVar22->ImpactNormal).field_0x8 = uVar21;
        *(undefined8 *)&(pFVar22->ImpactNormal).field_0x10 = uVar12;
        *(undefined8 *)&pFVar22->TraceStart = uVar13;
        *(undefined8 *)&(pFVar22->TraceStart).field_0x8 = uVar14;
        lVar26 = lVar26 + -1;
        pFVar22 = (FHitResult *)&(pFVar22->TraceStart).field_0x10;
        puVar24 = puVar24 + 0x10;
      } while (lVar26 != 0);
      this->bCurrentHitIsWorldHit = true;
      goto LAB_14cb45555;
    }
  }
  if (!bVar17) {
    if (this->bFallbackToLineAxisPoint == false) {
      return;
    }
    dVar27 = (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Y;
    dVar1 = (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.X;
    dVar2 = (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.W;
    dVar3 = (this->PreviewHeightFrame).Rotation.field0_0x0._s_0.Z;
    local_408._s_0.X = (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X;
    local_408._s_0.Y = (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y;
    dVar3 = dVar3 + dVar3;
    dStack_3f0 = dVar2 * (dVar27 + dVar27) + dVar3 * dVar1;
    local_3a8 = __real_bff0000000000000;
    local_408._s_0.Z = (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z;
    local_3c8 = (param_1->Origin).field0_0x0._s_0.Z;
    dStack_3c0 = (param_1->Direction).field0_0x0._s_0.X;
    local_3d8 = (param_1->Origin).field0_0x0._s_0.X;
    dStack_3d0 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar8 = dVar11 - ((dVar27 + dVar27) * dVar27 + (dVar1 + dVar1) * dVar1);
    local_3b8 = (param_1->Direction).field0_0x0._s_0.Y;
    dStack_3b0 = (param_1->Direction).field0_0x0._s_0.Z;
    local_3e8._8_4_ = SUB84(dVar8,0);
    local_3e8._0_8_ = dVar3 * dVar27 - dVar2 * (dVar1 + dVar1);
    local_3e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    UE::Geometry::TDistLine3Ray3<double>::ComputeResult((TDistLine3Ray3<double> *)&local_408._s_0);
    local_3a0 = local_380 - local_3a0;
    local_398 = local_378 - local_398;
    local_390 = local_370 - local_390;
    auVar29._0_8_ = local_390 * local_390;
    auVar29._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_398 * local_398 + local_3a0 * local_3a0 + auVar29._0_8_;
    auVar30 = sqrtpd(auVar29,auVar7);
    if (auVar30._0_8_ <= 0.0) {
      local_690._s_0.Z = 0.0;
      local_690._s_0.X = 0.0;
      local_690._s_0.Y = 0.0;
    }
    else {
      dVar27 = dVar11 / auVar30._0_8_;
      local_690._s_0.X = local_3a0 * dVar27;
      local_690._s_0.Y = local_398 * dVar27;
      local_690._s_0.Z = local_390 * dVar27;
    }
    TStack_5f0._s_0.X = 0.0;
    local_608 = local_380;
    dStack_600 = local_378;
    local_5f8 = local_370;
    local_490._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    TStack_5f0._s_0.W = dVar11;
    TStack_5f0._s_0.Y = 0.0;
    TStack_5f0._s_0.Z = 0.0;
    local_490._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_490._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&TStack_5f0._s_0,(TVector<double> *)&local_490._s_0,
               (TVector<double> *)&local_690._s_0);
    local_538._s_0.X = local_380 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X;
    local_538._s_0.Y = local_378 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y;
    local_538._s_0.Z = local_370 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z;
    local_6c8 = local_608;
    dStack_6c0 = dStack_600;
    local_6b8 = local_5f8;
    dStack_6b0 = TStack_5f0._s_0.X;
    dStack_6a8 = TStack_5f0._s_0.Y;
    dStack_6a0 = TStack_5f0._s_0.Z;
    dStack_698 = TStack_5f0._s_0.W;
    UE::Geometry::TQuaternion<double>::InverseMultiply
              (&(this->PreviewHeightFrame).Rotation,&local_310,(TVector<double> *)&local_538._s_0);
    fVar31 = (float)local_310.field0_0x0._s_0.Z;
    this->bCurrentHitIsWorldHit = false;
  }
LAB_14cb45555:
  if (*(void **)&this->WorldPointSnapFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->WorldPointSnapFunc);
    pcVar5 = *(code **)&this->WorldPointSnapFunc;
    plVar23 = *(longlong **)&(this->WorldPointSnapFunc).field_0x28;
    plVar25 = (longlong *)&(this->WorldPointSnapFunc).field_0x10;
    if (plVar23 != (longlong *)0x0) {
      plVar25 = plVar23;
    }
    uVar21 = (**(code **)(*plVar25 + 8))();
    cVar18 = (*pcVar5)(uVar21,&local_6c8,&local_478);
    if (cVar18 != '\0') {
      local_6b8 = local_468;
      local_520._s_0.X = local_478 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.X;
      local_520._s_0.Z = local_468 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Z;
      local_6c8 = local_478;
      dStack_6c0 = dStack_470;
      local_520._s_0.Y = dStack_470 - (this->PreviewHeightFrame).Origin.field0_0x0._s_0.Y;
      UE::Geometry::TQuaternion<double>::InverseMultiply
                (&(this->PreviewHeightFrame).Rotation,&local_2f8,(TVector<double> *)&local_520._s_0)
      ;
      fVar31 = (float)local_2f8.field0_0x0._s_0.Z;
    }
  }
  (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.X = local_6c8;
  (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Y = dStack_6c0;
  (this->CurrentHitPosFrameWorld).Origin.field0_0x0._s_0.Z = local_6b8;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.X = dStack_6b0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Y = dStack_6a8;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.Z = dStack_6a0;
  (this->CurrentHitPosFrameWorld).Rotation.field0_0x0._s_0.W = dStack_698;
  this->CurrentHeight = fVar31;
  return;
}

