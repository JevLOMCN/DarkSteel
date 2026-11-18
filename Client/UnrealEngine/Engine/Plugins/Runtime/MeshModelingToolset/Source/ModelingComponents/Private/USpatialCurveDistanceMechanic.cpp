// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// StaticClass @ 14caac7c0

UClass * __cdecl USpatialCurveDistanceMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SpatialCurveDistanceMechanic",
               &Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.InnerSingleton,
               StaticRegisterNativesUSpatialCurveDistanceMechanic,0x400,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USpatialCurveDistanceMechanic>,
               InternalVTableHelperCtorCaller<USpatialCurveDistanceMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.InnerSingleton;
}

// USpatialCurveDistanceMechanic @ 14cacf8b0

USpatialCurveDistanceMechanic * __thiscall
USpatialCurveDistanceMechanic::USpatialCurveDistanceMechanic
          (USpatialCurveDistanceMechanic *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  this->_padding_ = (longlong)&___7USpatialCurveDistanceMechanic__6B_;
  *(undefined8 *)&this->WorldPointSnapFunc = 0;
  *(undefined8 *)&(this->WorldPointSnapFunc).field_0x28 = 0;
  this->CurrentDistance = 0.0;
  (this->Curve).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curve).ArrayNum = 0;
  (this->Curve).ArrayMax = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->TargetHitMesh);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->TargetHitMeshAABB);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// USpatialCurveDistanceMechanic @ 14cacf970

USpatialCurveDistanceMechanic * __thiscall
USpatialCurveDistanceMechanic::USpatialCurveDistanceMechanic(USpatialCurveDistanceMechanic *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  this->_padding_ = (longlong)&___7USpatialCurveDistanceMechanic__6B_;
  *(undefined8 *)&this->WorldPointSnapFunc = 0;
  *(undefined8 *)&(this->WorldPointSnapFunc).field_0x28 = 0;
  this->CurrentDistance = 0.0;
  (this->Curve).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curve).ArrayNum = 0;
  (this->Curve).ArrayMax = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->TargetHitMesh);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->TargetHitMeshAABB);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~USpatialCurveDistanceMechanic @ 14cad2d40

void __thiscall
USpatialCurveDistanceMechanic::~USpatialCurveDistanceMechanic(USpatialCurveDistanceMechanic *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7USpatialCurveDistanceMechanic__6B_;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->TargetHitMeshAABB);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->TargetHitMesh);
  pFVar1 = (this->Curve).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->WorldPointSnapFunc != 0) {
    plVar2 = *(longlong **)&(this->WorldPointSnapFunc).field_0x28;
    plVar3 = (longlong *)&(this->WorldPointSnapFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// GetPrivateStaticClass @ 14cb131b0

UClass * __cdecl USpatialCurveDistanceMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SpatialCurveDistanceMechanic",
               &Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.InnerSingleton,
               StaticRegisterNativesUSpatialCurveDistanceMechanic,0x400,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USpatialCurveDistanceMechanic>,
               InternalVTableHelperCtorCaller<USpatialCurveDistanceMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.InnerSingleton;
}

// InitializePolyCurve @ 14cb20050

void __thiscall
USpatialCurveDistanceMechanic::InitializePolyCurve
          (USpatialCurveDistanceMechanic *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
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
  
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=(&this->Curve,param_1);
  dVar7 = (param_2->Rotation).XY.m128d_f64[1];
  uVar15 = 0;
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_2->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_2->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_2->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar7;
  if (0 < (this->Curve).ArrayNum) {
    lVar16 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar15 < (this->Curve).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      auVar25 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      pFVar3 = (this->Curve).AllocatorInstance.Data;
      auVar21 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      dVar12 = (param_2->Rotation).ZW.m128d_f64[1];
      pFVar1 = pFVar3 + lVar16;
      dVar7 = *(double *)(pFVar3 + lVar16 + 0x10) * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar8 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      uVar14 = 0;
      if ((int)uVar15 < (this->Curve).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      dVar5 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)pFVar1;
      dVar6 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar1 + 8);
      uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar17 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar26._8_4_ = SUB84(dVar6,0);
      auVar26._0_8_ = dVar5;
      auVar26._12_4_ = uVar29;
      dVar2 = auVar25._0_8_;
      auVar19 = blendpd(auVar17,auVar25,2);
      auVar27._0_8_ = auVar26._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar5;
      auVar27._8_8_ = dVar7 * auVar17._8_8_ - dVar2 * dVar6;
      auVar22._8_4_ = SUB84(dVar6,0);
      auVar22._0_8_ = dVar5;
      auVar22._12_4_ = uVar29;
      auVar17._8_4_ = SUB84(dVar8,0);
      auVar17._0_8_ = dVar7;
      auVar17._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar17 = blendpd(auVar22,auVar17,2);
      auVar18._0_8_ = auVar17._0_8_ * dVar2 - auVar19._0_8_ * dVar7;
      auVar18._8_8_ = auVar17._8_8_ * auVar25._8_8_ - auVar19._8_8_ * dVar8;
      auVar17 = blendpd(auVar27,auVar18,2);
      dVar10 = auVar27._8_8_ + auVar27._8_8_;
      dVar11 = auVar18._0_8_ + auVar18._0_8_;
      uVar29 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar28._0_8_ = auVar17._0_8_ + auVar17._0_8_;
      auVar28._8_8_ = auVar17._8_8_ + auVar17._8_8_;
      auVar23._8_4_ = SUB84(dVar11,0);
      auVar23._0_8_ = dVar10;
      auVar23._12_4_ = uVar29;
      auVar20._8_4_ = SUB84(dVar11,0);
      auVar20._0_8_ = dVar10;
      auVar20._12_4_ = uVar29;
      auVar17 = blendpd(auVar20,auVar28,2);
      auVar24._0_8_ = auVar23._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar10;
      auVar24._8_8_ = auVar28._0_8_ * auVar21._8_8_ - dVar2 * dVar11;
      auVar19._8_4_ = SUB84(auVar24._8_8_,0);
      auVar19._0_8_ = auVar24._0_8_;
      auVar19._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
      auVar22 = blendpd(auVar21,auVar25,2);
      auVar21._0_8_ = auVar17._0_8_ * dVar2 - auVar22._0_8_ * auVar28._0_8_;
      auVar21._8_8_ = auVar17._8_8_ * auVar25._8_8_ - auVar22._8_8_ * auVar28._8_8_;
      auVar25 = blendpd(auVar24,auVar21,2);
      dVar8 = (param_2->Translation).XY.m128d_f64[0];
      dVar6 = dVar11 * dVar12 + dVar6 + auVar21._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      dVar2 = (param_2->Translation).ZW.m128d_f64[0];
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (this->Curve).AllocatorInstance.Data;
      uVar15 = uVar15 + 1;
      auVar9._8_4_ = SUB84(dVar6,0);
      auVar9._0_8_ = dVar10 * dVar12 + dVar5 + auVar19._8_8_ + dVar8;
      auVar9._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar16) = auVar9;
      *(double *)(pFVar1 + lVar16 + 0x10) = auVar28._0_8_ * dVar12 + dVar7 + auVar25._0_8_ + dVar2;
      lVar16 = lVar16 + 0x18;
    } while ((int)uVar15 < (this->Curve).ArrayNum);
  }
  return;
}

// InitializePolyLoop @ 14cb20350

void __thiscall
USpatialCurveDistanceMechanic::InitializePolyLoop
          (USpatialCurveDistanceMechanic *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  
  (**(code **)(this->_padding_ + 0x2e0))();
  pTVar9 = &this->Curve;
  if (param_1->ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)(this->Curve).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->Curve).ArrayNum;
  piVar1 = &(this->Curve).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->Curve).ArrayNum = iVar8 + 1;
  uVar6 = *(undefined8 *)(pFVar2 + 8);
  pFVar4 = (pTVar9->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(undefined8 *)pFVar3 = *(undefined8 *)pFVar2;
  *(undefined8 *)(pFVar3 + 8) = uVar6;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = *(undefined8 *)(pFVar2 + 0x10);
  return;
}

// Render @ 14cb30f80

void __thiscall
USpatialCurveDistanceMechanic::Render
          (USpatialCurveDistanceMechanic *this,IToolsContextRenderAPI *param_1)

{
  longlong *plVar1;
  float fVar2;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_80;
  undefined1 local_78 [64];
  float local_38;
  
  (**(code **)((longlong)*param_1 + 0x18))(param_1,local_78);
  fVar2 = local_38 * __real_3c360b61;
  plVar1 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
  local_a8 = (this->CurrentSpacePoint).field0_0x0._s_0.X;
  dStack_a0 = (this->CurrentSpacePoint).field0_0x0._s_0.Y;
  local_b8 = FLinearColor::sRGBToLinearTable[0x80];
  local_b4 = FLinearColor::sRGBToLinearTable[0x80];
  local_b0 = FLinearColor::sRGBToLinearTable[0];
  local_98 = (this->CurrentSpacePoint).field0_0x0._s_0.Z;
  local_80 = (this->CurrentCurvePoint).field0_0x0._s_0.Z;
  local_ac = 0x3f800000;
  local_90 = *(undefined4 *)&(this->CurrentCurvePoint).field0_0x0;
  uStack_8c = *(undefined4 *)((longlong)&(this->CurrentCurvePoint).field0_0x0 + 4);
  uStack_88 = *(undefined4 *)((longlong)&(this->CurrentCurvePoint).field0_0x0 + 8);
  uStack_84 = *(undefined4 *)((longlong)&(this->CurrentCurvePoint).field0_0x0 + 0xc);
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_90,&local_a8,&local_b8,1,fVar2,0,1);
  return;
}

// Setup @ 14cb3ba10

void __thiscall
USpatialCurveDistanceMechanic::Setup(USpatialCurveDistanceMechanic *this,UInteractiveTool *param_1)

{
  UInteractiveTool *apUStackX_8 [4];
  
  apUStackX_8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)apUStackX_8);
  return;
}

// StaticRegisterNativesUSpatialCurveDistanceMechanic @ 14cb3ecc0

void __cdecl USpatialCurveDistanceMechanic::StaticRegisterNativesUSpatialCurveDistanceMechanic(void)

{
  return;
}

// UpdateCurrentDistance @ 14cb456a0

void __thiscall
USpatialCurveDistanceMechanic::UpdateCurrentDistance
          (USpatialCurveDistanceMechanic *this,TRay<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
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
  undefined4 uVar31;
  undefined4 uVar32;
  TVector<double>_u_0 TStack_1d0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  TVector<double>_u_0 local_178;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  
  uVar11 = __real_bff0000000000000;
  dVar10 = __real_3fe0000000000000;
  local_1b0 = (param_1->Origin).field0_0x0._s_0.X;
  dStack_1a8 = (param_1->Origin).field0_0x0._s_0.Y;
  iVar13 = (this->Curve).ArrayNum + -1;
  uVar19 = (undefined4)__real_7fefffffffffffff;
  uVar20 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar25 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar26 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  lVar17 = (longlong)iVar13;
  local_1a0 = (param_1->Origin).field0_0x0._s_0.Z;
  dStack_198 = (param_1->Direction).field0_0x0._s_0.X;
  local_190 = (param_1->Direction).field0_0x0._s_0.Y;
  dStack_188 = (param_1->Direction).field0_0x0._s_0.Z;
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar31 = uVar25;
  uVar32 = uVar26;
  if (0 < iVar13) {
    lVar18 = 0;
    uVar15 = 0;
    do {
      uVar16 = uVar15 + 1;
      uVar14 = 0;
      if ((int)uVar16 < (this->Curve).ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (this->Curve).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar15 < (this->Curve).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (this->Curve).AllocatorInstance.Data;
      dVar1 = *(double *)(pFVar7 + lVar18 + 0x18);
      dVar2 = *(double *)(pFVar7 + lVar18 + 0x20);
      dVar3 = *(double *)(pFVar7 + lVar18 + 0x28);
      dVar4 = *(double *)(pFVar8 + lVar18);
      dVar5 = *(double *)(pFVar8 + lVar18 + 8);
      TStack_1d0._s_0.X = dVar1 - *(double *)(pFVar8 + lVar18);
      local_1b8 = 0.0;
      TStack_1d0._s_0.Y = dVar2 - *(double *)(pFVar8 + lVar18 + 8);
      dVar6 = *(double *)(pFVar8 + lVar18 + 0x10);
      TStack_1d0._s_0.Z = dVar3 - *(double *)(pFVar8 + lVar18 + 0x10);
      local_1b8 = UE::Geometry::Normalize<double>((TVector<double> *)&TStack_1d0._s_0,0.0);
      local_178._s_0.X = local_1b0;
      local_178._s_0.Y = dStack_1a8;
      local_1b8 = local_1b8 * dVar10;
      local_178._s_0.Z = local_1a0;
      dStack_160 = dStack_198;
      local_110 = uVar11;
      local_158 = local_190;
      dStack_150 = dStack_188;
      dStack_130 = TStack_1d0._s_0.X;
      local_128 = TStack_1d0._s_0.Y;
      dStack_120 = TStack_1d0._s_0.Z;
      local_148 = (dVar4 + dVar1) * dVar10;
      dStack_140 = (dVar5 + dVar2) * dVar10;
      local_138 = (dVar6 + dVar3) * dVar10;
      local_118 = local_1b8;
      dVar1 = UE::Geometry::TDistRay3Segment3<double>::ComputeResult
                        ((TDistRay3Segment3<double> *)&local_178._s_0);
      if (dVar1 < (double)CONCAT44(uVar20,uVar19)) {
        uVar25 = (undefined4)local_f8;
        uVar26 = (undefined4)((ulonglong)local_f8 >> 0x20);
        uVar31 = (undefined4)local_d8;
        uVar32 = (undefined4)((ulonglong)local_d8 >> 0x20);
        uVar19 = SUB84(dVar1,0);
        uVar20 = (int)((ulonglong)dVar1 >> 0x20);
        uVar21 = local_108;
        uVar22 = uStack_104;
        uVar23 = uStack_100;
        uVar24 = uStack_fc;
        uVar27 = local_e8;
        uVar28 = uStack_e4;
        uVar29 = uStack_e0;
        uVar30 = uStack_dc;
      }
      lVar18 = lVar18 + 0x18;
      lVar17 = lVar17 + -1;
      uVar15 = uVar16;
    } while (lVar17 != 0);
  }
  *(undefined4 *)&(this->CurrentCurvePoint).field0_0x0 = uVar27;
  *(undefined4 *)((longlong)&(this->CurrentCurvePoint).field0_0x0 + 4) = uVar28;
  *(undefined4 *)((longlong)&(this->CurrentCurvePoint).field0_0x0 + 8) = uVar29;
  *(undefined4 *)((longlong)&(this->CurrentCurvePoint).field0_0x0 + 0xc) = uVar30;
  *(undefined4 *)&(this->CurrentSpacePoint).field0_0x0 = uVar21;
  *(undefined4 *)((longlong)&(this->CurrentSpacePoint).field0_0x0 + 4) = uVar22;
  *(undefined4 *)((longlong)&(this->CurrentSpacePoint).field0_0x0 + 8) = uVar23;
  *(undefined4 *)((longlong)&(this->CurrentSpacePoint).field0_0x0 + 0xc) = uVar24;
  (this->CurrentCurvePoint).field0_0x0._s_0.Z = (double)CONCAT44(uVar32,uVar31);
  (this->CurrentSpacePoint).field0_0x0._s_0.Z = (double)CONCAT44(uVar26,uVar25);
  this->CurrentDistance = SQRT((double)CONCAT44(uVar20,uVar19));
  return;
}

