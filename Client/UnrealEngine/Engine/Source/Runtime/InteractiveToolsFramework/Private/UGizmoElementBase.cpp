// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 147

// StaticClass @ 14966c930

UClass * __cdecl UGizmoElementBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementBase",
               &Z_Registration_Info_UClass_UGizmoElementBase.InnerSingleton,
               StaticRegisterNativesUGizmoElementBase,0x150,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementBase>,
               InternalVTableHelperCtorCaller<UGizmoElementBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementBase.InnerSingleton;
}

// UGizmoElementBase @ 1496843f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UGizmoElementBase * __thiscall
UGizmoElementBase::UGizmoElementBase(UGizmoElementBase *this,FVTableHelper *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  UObject::UObject((UObject *)this,param_1);
  this->bEnabled = true;
  this->bEnabledForPerspectiveProjection = true;
  this->bEnabledForOrthographicProjection = true;
  this->bEnabledForDefaultState = true;
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  this->bEnabledForHoveringState = true;
  this->bEnabledForInteractingState = true;
  this->bEnabledForSelectedState = true;
  this->bEnabledForSubduedState = true;
  this->PartIdentifier = 0;
  FGizmoElementMeshRenderStateAttributes::FGizmoElementMeshRenderStateAttributes
            (&this->MeshRenderAttributes);
  uVar7 = _UNK_15066df7c;
  uVar6 = _UNK_15066df78;
  uVar2 = __xmm_80000000000000008000000000000000._4_4_;
  uVar1 = (uint)__xmm_80000000000000008000000000000000;
  this->ElementState = VisibleAndHittable;
  this->ElementInteractionState = None;
  uVar3 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  this->ViewDependentType = None;
  (this->ViewDependentAxis).field0_0x0._s_0.X =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->ViewDependentAxis).field0_0x0._s_0.Y = (double)uVar3;
  (this->ViewDependentAxis).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  this->ViewDependentAngleTol = 0.052;
  this->ViewDependentAxialMaxCosAngleTol = 0.998;
  this->ViewDependentPlanarMinCosAngleTol = 0.052;
  uVar3 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  this->ViewAlignType = None;
  (this->ViewAlignAxis).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->ViewAlignAxis).field0_0x0._s_0.Y = (double)uVar3;
  (this->ViewAlignAxis).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_ ^ uVar1;
  uVar5 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_ ^ uVar2;
  uVar6 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_ ^ uVar6;
  uVar7 = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_ ^ uVar7;
  this->ViewAlignAxialAngleTol = 0.052;
  this->ViewAlignAxialMaxCosAngleTol = 0.998;
  *(uint *)&(this->ViewAlignNormal).field0_0x0 = uVar4;
  *(uint *)((longlong)&(this->ViewAlignNormal).field0_0x0 + 4) = uVar5;
  *(uint *)((longlong)&(this->ViewAlignNormal).field0_0x0 + 8) = uVar6;
  *(uint *)((longlong)&(this->ViewAlignNormal).field0_0x0 + 0xc) = uVar7;
  this->PixelHitDistanceThreshold = 7.0;
  (this->ViewAlignNormal).field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar2,(uint)uVar3 ^ uVar1);
  this->MinimumPixelHitDistanceThreshold = 1.0;
  this->HitPriority = 0;
  this->ViewDepthOffset = 0.0;
  return this;
}

// UGizmoElementBase @ 149684500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UGizmoElementBase * __thiscall
UGizmoElementBase::UGizmoElementBase(UGizmoElementBase *this,FObjectInitializer *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  UObject::UObject((UObject *)this,param_1);
  this->bEnabled = true;
  this->bEnabledForPerspectiveProjection = true;
  this->bEnabledForOrthographicProjection = true;
  this->bEnabledForDefaultState = true;
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  this->bEnabledForHoveringState = true;
  this->bEnabledForInteractingState = true;
  this->bEnabledForSelectedState = true;
  this->bEnabledForSubduedState = true;
  this->PartIdentifier = 0;
  FGizmoElementMeshRenderStateAttributes::FGizmoElementMeshRenderStateAttributes
            (&this->MeshRenderAttributes);
  uVar7 = _UNK_15066df7c;
  uVar6 = _UNK_15066df78;
  uVar2 = __xmm_80000000000000008000000000000000._4_4_;
  uVar1 = (uint)__xmm_80000000000000008000000000000000;
  this->ElementState = VisibleAndHittable;
  this->ElementInteractionState = None;
  uVar3 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  this->ViewDependentType = None;
  (this->ViewDependentAxis).field0_0x0._s_0.X =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->ViewDependentAxis).field0_0x0._s_0.Y = (double)uVar3;
  (this->ViewDependentAxis).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  this->ViewDependentAngleTol = 0.052;
  this->ViewDependentAxialMaxCosAngleTol = 0.998;
  this->ViewDependentPlanarMinCosAngleTol = 0.052;
  uVar3 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  this->ViewAlignType = None;
  (this->ViewAlignAxis).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->ViewAlignAxis).field0_0x0._s_0.Y = (double)uVar3;
  (this->ViewAlignAxis).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_ ^ uVar1;
  uVar5 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_ ^ uVar2;
  uVar6 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_ ^ uVar6;
  uVar7 = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_ ^ uVar7;
  this->ViewAlignAxialAngleTol = 0.052;
  this->ViewAlignAxialMaxCosAngleTol = 0.998;
  *(uint *)&(this->ViewAlignNormal).field0_0x0 = uVar4;
  *(uint *)((longlong)&(this->ViewAlignNormal).field0_0x0 + 4) = uVar5;
  *(uint *)((longlong)&(this->ViewAlignNormal).field0_0x0 + 8) = uVar6;
  *(uint *)((longlong)&(this->ViewAlignNormal).field0_0x0 + 0xc) = uVar7;
  this->PixelHitDistanceThreshold = 7.0;
  (this->ViewAlignNormal).field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar2,(uint)uVar3 ^ uVar1);
  this->MinimumPixelHitDistanceThreshold = 1.0;
  this->HitPriority = 0;
  this->ViewDepthOffset = 0.0;
  return this;
}

// ~UGizmoElementBase @ 1496899c0

void __thiscall UGizmoElementBase::~UGizmoElementBase(UGizmoElementBase *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyViewDepthOffset @ 149692170

void __thiscall
UGizmoElementBase::ApplyViewDepthOffset
          (UGizmoElementBase *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3,
          TTransform<double> *param_4)

{
  (**(code **)(this->_padding_ + 0x678))();
  return;
}

// ApplyViewDepthOffset @ 1496921c0

void __thiscall
UGizmoElementBase::ApplyViewDepthOffset
          (UGizmoElementBase *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3,
          double *param_4,TTransform<double> *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar15 = (param_2->field0_0x0)._s_0.Z;
  dVar13 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar16 = (param_5->Translation).ZW.m128d_f64[0] - dVar2;
  dVar11 = (param_5->Translation).XY.m128d_f64[0];
  dVar12 = (param_5->Translation).XY.m128d_f64[1];
  dVar8 = *param_4 * (param_5->Scale3D).XY.m128d_f64[0];
  dVar9 = SUB168(*(undefined1 (*) [16])&param_1->field0_0x0,0);
  dVar5 = dVar11 - dVar9;
  dVar10 = SUB168(*(undefined1 (*) [16])&param_1->field0_0x0,8);
  dVar6 = dVar12 - dVar10;
  dVar14 = dVar1 * dVar6 + dVar13 * dVar5 + dVar15 * dVar16;
  if (param_3) {
    dVar14 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar16 * dVar16);
  }
  else {
    dVar9 = dVar11 - dVar13 * dVar14;
    dVar10 = dVar12 - dVar1 * dVar14;
    dVar2 = (param_5->Translation).ZW.m128d_f64[0] - dVar15 * dVar14;
  }
  if (__real_3f1a36e2eb1c432d <= dVar14) {
    dVar15 = *param_4 + dVar14;
    if (dVar15 <= __real_3f1a36e2e0000000) {
      dVar15 = __real_3f1a36e2e0000000;
    }
    if (dVar15 <= __real_3f1a36e2eb1c432d) {
      dVar15 = __real_3ff0000000000000;
    }
    dVar13 = dVar5 * dVar5 + dVar6 * dVar6 + dVar16 * dVar16;
    dVar14 = dVar15 / dVar14;
    if (__real_3e45798ee0000000 < dVar13) {
      dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
      dVar5 = dVar5 * dVar13;
      dVar6 = dVar6 * dVar13;
      dVar16 = dVar16 * dVar13;
    }
    dVar10 = dVar6 * dVar15 + dVar10;
    auVar4._8_4_ = SUB84(dVar10,0);
    auVar4._0_8_ = dVar5 * dVar15 + dVar9;
    auVar4._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])(param_5->Translation).XY.m128d_f64 = auVar4;
    (param_5->Translation).ZW.m128d_f64[0] = dVar16 * dVar15 + dVar2;
    (param_5->Translation).ZW.m128d_f64[1] = 0.0;
    dVar15 = (param_5->Scale3D).XY.m128d_f64[1] * dVar14;
    auVar3._8_4_ = SUB84(dVar15,0);
    auVar3._0_8_ = (param_5->Scale3D).XY.m128d_f64[0] * dVar14;
    auVar3._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_5->Scale3D).XY.m128d_f64 = auVar3;
    (param_5->Scale3D).ZW.m128d_f64[0] = (param_5->Scale3D).ZW.m128d_f64[0] * dVar14;
    (param_5->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  else {
    dVar10 = dVar1 * dVar8 + dVar10;
    auVar7._8_4_ = SUB84(dVar10,0);
    auVar7._0_8_ = dVar13 * dVar8 + dVar9;
    auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])(param_5->Translation).XY.m128d_f64 = auVar7;
    (param_5->Translation).ZW.m128d_f64[0] = dVar15 * dVar8 + dVar2;
    (param_5->Translation).ZW.m128d_f64[1] = 0.0;
  }
  return;
}

// ApplyViewDepthOffset @ 149692450

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
UGizmoElementBase::ApplyViewDepthOffset
          (UGizmoElementBase *this,FSceneView *param_1,double *param_2,TTransform<double> *param_3)

{
  double *pdVar1;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_10 = (param_1->ViewLocation).field0_0x0._s_0.Z;
  local_20 = (param_1->ViewLocation).field0_0x0._s_0.X;
  dStack_18 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  local_30 = (param_1->ViewMatrices).ViewMatrix.M[1][2];
  local_38 = (param_1->ViewMatrices).ViewMatrix.M[0][2];
  pdVar1 = (param_1->ViewMatrices).ProjectionMatrix.M[3] + 3;
  local_28 = (param_1->ViewMatrices).ViewMatrix.M[2][2];
  (**(code **)(this->_padding_ + 0x678))
            (SUB84(local_28,0),&local_20,&local_38,
             *pdVar1 <= __real_3ff0000000000000 && __real_3ff0000000000000 != *pdVar1,param_2,
             param_3);
  return;
}

// ClearHoverMaterial @ 149697680

void __thiscall UGizmoElementBase::ClearHoverMaterial(UGizmoElementBase *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->MeshRenderAttributes).HoverMaterial.Value.WeakPtr = local_res8;
  (this->MeshRenderAttributes).HoverMaterial.bOverridesChildState = false;
  return;
}

// ClearHoverVertexColor @ 1496976c0

void __thiscall UGizmoElementBase::ClearHoverVertexColor(UGizmoElementBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->MeshRenderAttributes).HoverVertexColor.bHasValue = false;
  (this->MeshRenderAttributes).HoverVertexColor.bOverridesChildState = false;
  (this->MeshRenderAttributes).HoverVertexColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ClearInteractMaterial @ 149697700

void __thiscall UGizmoElementBase::ClearInteractMaterial(UGizmoElementBase *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->MeshRenderAttributes).InteractMaterial.Value.WeakPtr = local_res8;
  (this->MeshRenderAttributes).InteractMaterial.bOverridesChildState = false;
  return;
}

// ClearInteractVertexColor @ 149697740

void __thiscall UGizmoElementBase::ClearInteractVertexColor(UGizmoElementBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->MeshRenderAttributes).InteractVertexColor.bHasValue = false;
  (this->MeshRenderAttributes).InteractVertexColor.bOverridesChildState = false;
  (this->MeshRenderAttributes).InteractVertexColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ClearMaterial @ 149697780

void __thiscall UGizmoElementBase::ClearMaterial(UGizmoElementBase *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->MeshRenderAttributes).Material.Value.WeakPtr = local_res8;
  (this->MeshRenderAttributes).Material.bOverridesChildState = false;
  return;
}

// ClearSelectMaterial @ 1496977e0

void __thiscall UGizmoElementBase::ClearSelectMaterial(UGizmoElementBase *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->MeshRenderAttributes).SelectMaterial.Value.WeakPtr = local_res8;
  (this->MeshRenderAttributes).SelectMaterial.bOverridesChildState = false;
  return;
}

// ClearSelectVertexColor @ 149697820

void __thiscall UGizmoElementBase::ClearSelectVertexColor(UGizmoElementBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->MeshRenderAttributes).SelectVertexColor.bHasValue = false;
  (this->MeshRenderAttributes).SelectVertexColor.bOverridesChildState = false;
  (this->MeshRenderAttributes).SelectVertexColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ClearSubdueMaterial @ 1496978a0

void __thiscall UGizmoElementBase::ClearSubdueMaterial(UGizmoElementBase *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->MeshRenderAttributes).SubdueMaterial.Value.WeakPtr = local_res8;
  (this->MeshRenderAttributes).SubdueMaterial.bOverridesChildState = false;
  return;
}

// ClearSubdueVertexColor @ 1496978e0

void __thiscall UGizmoElementBase::ClearSubdueVertexColor(UGizmoElementBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->MeshRenderAttributes).SubdueVertexColor.bHasValue = false;
  (this->MeshRenderAttributes).SubdueVertexColor.bOverridesChildState = false;
  (this->MeshRenderAttributes).SubdueVertexColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ClearVertexColor @ 149697900

void __thiscall UGizmoElementBase::ClearVertexColor(UGizmoElementBase *this)

{
  FLinearColor FVar1;
  
  FVar1.field0_0x0 = FGizmoElementColorAttribute::DefaultColor.field0_0x0;
  (this->MeshRenderAttributes).VertexColor.bHasValue = false;
  (this->MeshRenderAttributes).VertexColor.bOverridesChildState = false;
  (this->MeshRenderAttributes).VertexColor.Value.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// DoesHoverMaterialOverrideChildState @ 14969c9f0

bool __thiscall UGizmoElementBase::DoesHoverMaterialOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).HoverMaterial.bOverridesChildState;
}

// DoesHoverVertexColorOverrideChildState @ 14969ca00

bool __thiscall UGizmoElementBase::DoesHoverVertexColorOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).HoverVertexColor.bOverridesChildState;
}

// DoesInteractMaterialOverrideChildState @ 14969ca20

bool __thiscall UGizmoElementBase::DoesInteractMaterialOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).InteractMaterial.bOverridesChildState;
}

// DoesInteractVertexColorOverrideChildState @ 14969ca30

bool __thiscall
UGizmoElementBase::DoesInteractVertexColorOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).InteractVertexColor.bOverridesChildState;
}

// DoesMaterialOverrideChildState @ 14969ca50

bool __thiscall UGizmoElementBase::DoesMaterialOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).Material.bOverridesChildState;
}

// DoesSelectMaterialOverrideChildState @ 14969ca70

bool __thiscall UGizmoElementBase::DoesSelectMaterialOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).SelectMaterial.bOverridesChildState;
}

// DoesSelectVertexColorOverrideChildState @ 14969ca80

bool __thiscall UGizmoElementBase::DoesSelectVertexColorOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).SelectVertexColor.bOverridesChildState;
}

// DoesSubdueMaterialOverrideChildState @ 14969caa0

bool __thiscall UGizmoElementBase::DoesSubdueMaterialOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).SubdueMaterial.bOverridesChildState;
}

// DoesSubdueVertexColorOverrideChildState @ 14969cab0

bool __thiscall UGizmoElementBase::DoesSubdueVertexColorOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).SubdueVertexColor.bOverridesChildState;
}

// DoesVertexColorOverrideChildState @ 14969cac0

bool __thiscall UGizmoElementBase::DoesVertexColorOverrideChildState(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).VertexColor.bOverridesChildState;
}

// DrawHUD @ 14969d520

void __thiscall
UGizmoElementBase::DrawHUD
          (UGizmoElementBase *this,FCanvas *param_1,IToolsContextRenderAPI *param_2,
          FRenderTraversalState *param_3)

{
  return;
}

// FindPartElement @ 14969f040

UGizmoElementBase * __thiscall
UGizmoElementBase::FindPartElement(UGizmoElementBase *this,uint param_1)

{
  uint uVar1;
  UGizmoElementBase *pUVar2;
  
  uVar1 = (**(code **)(this->_padding_ + 0x398))();
  pUVar2 = (UGizmoElementBase *)0x0;
  if (uVar1 == param_1) {
    pUVar2 = this;
  }
  return pUVar2;
}

// FindPartElement @ 14969f080

UGizmoElementBase * __thiscall
UGizmoElementBase::FindPartElement(UGizmoElementBase *this,uint param_1)

{
  uint uVar1;
  UGizmoElementBase *pUVar2;
  
  uVar1 = (**(code **)(this->_padding_ + 0x390))();
  pUVar2 = (UGizmoElementBase *)0x0;
  if (uVar1 == param_1) {
    pUVar2 = this;
  }
  return pUVar2;
}

// ForEachSubElement @ 14969f1e0

void __thiscall
UGizmoElementBase::ForEachSubElement
          (UGizmoElementBase *this,TFunctionRef<void___cdecl(UGizmoElementBase_*)> *param_1)

{
  longlong *plVar1;
  longlong local_res8;
  longlong *local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x3b0))(this,&local_18);
  for (plVar1 = local_18; plVar1 != local_18 + local_10; plVar1 = plVar1 + 1) {
    local_res8 = *plVar1;
    if (local_res8 != 0) {
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    }
  }
  return;
}

// ForEachSubElementRecursive @ 14969f250

void __thiscall
UGizmoElementBase::ForEachSubElementRecursive
          (UGizmoElementBase *this,TFunctionRef<void___cdecl(UGizmoElementBase_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  longlong local_res18;
  TArray<TObjectPtr<UGizmoElementBase>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar3 = GetSubElementsRecursive(this,&local_18);
  if (bVar3) {
    iVar2 = local_18.ArrayNum;
    pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
    FVar4.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if (local_18.ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res18);
      }
      if (FVar4.Data == pFVar1) break;
      if (*(longlong *)FVar4.Data != 0) {
        local_res18 = *(longlong *)FVar4.Data;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res18);
      }
      FVar4.Data = FVar4.Data + 8;
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ForEachSubElementRecursive @ 14969f300

void __thiscall
UGizmoElementBase::ForEachSubElementRecursive
          (UGizmoElementBase *this,TFunctionRef<void___cdecl(UGizmoElementBase_*)> *param_1,
          uint param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  longlong local_res20;
  TArray<TObjectPtr<UGizmoElementBase>,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int local_20;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x3b0))(this,&local_28);
  FVar7.Data = local_38.AllocatorInstance.Data;
  pFVar6 = local_28;
  do {
    local_38.AllocatorInstance.Data = FVar7.Data;
    if (pFVar6 == local_28 + (longlong)local_20 * 8) {
      iVar5 = local_38.ArrayNum;
      if (local_38.ArrayNum != 0) {
        pFVar6 = FVar7.Data + (longlong)local_38.ArrayNum * 8;
        while( true ) {
          if (local_38.ArrayNum != iVar5) {
            `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (FVar7.Data == pFVar6) break;
          if (*(longlong *)FVar7.Data != 0) {
            local_res20 = *(longlong *)FVar7.Data;
            (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res20);
          }
          FVar7.Data = FVar7.Data + 8;
        }
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return;
    }
    if (*(longlong **)pFVar6 != (longlong *)0x0) {
      uVar4 = (**(code **)(**(longlong **)pFVar6 + 0x398))();
      if (uVar4 == param_2) {
        if (((local_38.AllocatorInstance.Data <= pFVar6) &&
            (pFVar6 < local_38.AllocatorInstance.Data + (longlong)local_38.ArrayMax * 8)) &&
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
        iVar5 = local_38.ArrayNum;
        if (local_38.ArrayNum == local_38.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
        }
        local_38.ArrayNum = iVar5 + 1;
        pUVar1 = *(UObject **)pFVar6;
        *(UObject **)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 8) = pUVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      GetSubElementsRecursive(*(UGizmoElementBase **)pFVar6,&local_38,param_2);
    }
    pFVar6 = pFVar6 + 8;
    FVar7.Data = local_38.AllocatorInstance.Data;
  } while( true );
}

// GetAlignRotBetweenCoordSpaces @ 1496a00e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __thiscall
UGizmoElementBase::GetAlignRotBetweenCoordSpaces
          (UGizmoElementBase *this,TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TVector<double> *param_5,TVector<double> *param_6)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  undefined1 auStack_1e8 [48];
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_138.M[0][0] = (param_1->field0_0x0)._s_0.X;
  local_138.M[0][1] = (param_2->field0_0x0)._s_0.X;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_138.M[0][2] = (param_3->field0_0x0)._s_0.X;
  local_138.M[1][0] = (param_1->field0_0x0)._s_0.Y;
  local_138.M[1][2] = (param_3->field0_0x0)._s_0.Y;
  local_138.M[2][1] = (param_2->field0_0x0)._s_0.Z;
  local_138.M[1][1] = (param_2->field0_0x0)._s_0.Y;
  local_138.M[2][0] = (param_1->field0_0x0)._s_0.Z;
  local_138.M[2][2] = (param_3->field0_0x0)._s_0.Z;
  local_138.M[0][3] = 0.0;
  local_138.M[1][3] = 0.0;
  local_1b8.M[0][0] = (param_4->field0_0x0)._s_0.X;
  local_1b8.M[0][1] = (param_4->field0_0x0)._s_0.Y;
  local_138.M[2][3] = 0.0;
  local_1b8.M[0][2] = (param_4->field0_0x0)._s_0.Z;
  local_138.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_138.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1b8.M[1][0] = (param_5->field0_0x0)._s_0.X;
  local_1b8.M[1][1] = (param_5->field0_0x0)._s_0.Y;
  local_138.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1b8.M[1][2] = (param_5->field0_0x0)._s_0.Z;
  local_138.M[3][3] = __real_3ff0000000000000;
  local_1b8.M[0][3] = 0.0;
  local_1b8.M[2][0] = (param_6->field0_0x0)._s_0.X;
  local_1b8.M[2][1] = (param_6->field0_0x0)._s_0.Y;
  local_1b8.M[1][3] = 0.0;
  local_1b8.M[2][2] = (param_6->field0_0x0)._s_0.Z;
  local_1b8.M[2][3] = 0.0;
  local_1b8.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1b8.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1b8.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1b8.M[3][3] = __real_3ff0000000000000;
  VectorMatrixMultiply(&local_b8,&local_138,&local_1b8);
  UE::Math::TMatrix<double>::ToQuat(&local_b8,__return_storage_ptr__);
  dVar3 = __return_storage_ptr__->X;
  dVar4 = __return_storage_ptr__->Y;
  dVar5 = __return_storage_ptr__->Z;
  dVar6 = __return_storage_ptr__->W;
  dVar9 = dVar5 * dVar5 + dVar3 * dVar3;
  dVar11 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar1 = dVar11 + dVar9;
  dVar9 = dVar9 + dVar11;
  auVar14._8_4_ = SUB84(dVar9,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar14 = sqrtpd(auVar13,auVar14);
  uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
  uVar17 = (uint)(uVar7 >> 0x20);
  uVar18 = (uint)(uVar8 >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
  auVar16._0_8_ = uVar7 & (ulonglong)(auVar15._0_8_ * dVar3);
  uVar2 = uVar8 & (ulonglong)(auVar15._8_8_ * dVar4);
  auVar16._8_4_ = (undefined4)uVar2;
  auVar16._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar15._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar15._4_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._12_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
  auVar12._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar12._4_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar12._12_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar16 | auVar15,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar16 | auVar15,8);
  auVar10._0_8_ = (ulonglong)(auVar14._0_8_ * dVar5) & uVar7;
  uVar8 = (ulonglong)(auVar14._8_8_ * dVar6) & uVar8;
  auVar10._8_4_ = (undefined4)uVar8;
  auVar10._12_4_ = (undefined4)(uVar8 >> 0x20);
  __return_storage_ptr__->Z = (double)SUB168(auVar12 | auVar10,0);
  __return_storage_ptr__->W = (double)SUB168(auVar12 | auVar10,8);
  return __return_storage_ptr__;
}

// GetElementInteractionState @ 1496a2b30

EGizmoElementInteractionState __thiscall
UGizmoElementBase::GetElementInteractionState(UGizmoElementBase *this)

{
  return this->ElementInteractionState;
}

// GetElementState @ 1496a2b40

EGizmoElementState __thiscall UGizmoElementBase::GetElementState(UGizmoElementBase *this)

{
  return this->ElementState;
}

// GetEnabled @ 1496a2b50

bool __thiscall UGizmoElementBase::GetEnabled(UGizmoElementBase *this)

{
  return this->bEnabled;
}

// GetEnabledForDefaultState @ 1496a2b60

bool __thiscall UGizmoElementBase::GetEnabledForDefaultState(UGizmoElementBase *this)

{
  return this->bEnabledForDefaultState;
}

// GetEnabledForHoveringState @ 1496a2b70

bool __thiscall UGizmoElementBase::GetEnabledForHoveringState(UGizmoElementBase *this)

{
  return this->bEnabledForHoveringState;
}

// GetEnabledForInteractingState @ 1496a2b80

bool __thiscall UGizmoElementBase::GetEnabledForInteractingState(UGizmoElementBase *this)

{
  return this->bEnabledForInteractingState;
}

// GetEnabledForInteractionState @ 1496a2b90

bool __thiscall
UGizmoElementBase::GetEnabledForInteractionState
          (UGizmoElementBase *this,EGizmoElementInteractionState param_1)

{
  if (this->bEnabled != false) {
    if (param_1 == None) {
      return this->bEnabledForDefaultState;
    }
    if (param_1 == Hovering) {
      return this->bEnabledForHoveringState;
    }
    if (param_1 == Interacting) {
      return this->bEnabledForInteractingState;
    }
    if (param_1 == Selected) {
      return this->bEnabledForSelectedState;
    }
    if (param_1 == Subdued) {
      return this->bEnabledForSubduedState;
    }
  }
  return false;
}

// GetEnabledForPerspectiveProjection @ 1496a2bd0

bool __thiscall UGizmoElementBase::GetEnabledForPerspectiveProjection(UGizmoElementBase *this)

{
  return this->bEnabledForPerspectiveProjection;
}

// GetEnabledForSelectedState @ 1496a2be0

bool __thiscall UGizmoElementBase::GetEnabledForSelectedState(UGizmoElementBase *this)

{
  return this->bEnabledForSelectedState;
}

// GetEnabledForSubduedState @ 1496a2bf0

bool __thiscall UGizmoElementBase::GetEnabledForSubduedState(UGizmoElementBase *this)

{
  return this->bEnabledForSubduedState;
}

// GetEnabledForViewProjection @ 1496a2c00

bool __thiscall UGizmoElementBase::GetEnabledForViewProjection(UGizmoElementBase *this,bool param_1)

{
  if (this->bEnabled == false) {
    return false;
  }
  if (param_1) {
    return this->bEnabledForPerspectiveProjection;
  }
  return this->bEnabledForOrthographicProjection;
}

// GetEnabledInOrthographicProjection @ 1496a2c20

bool __thiscall UGizmoElementBase::GetEnabledInOrthographicProjection(UGizmoElementBase *this)

{
  return this->bEnabledForOrthographicProjection;
}

// GetHitPriority @ 1496a2de0

int __thiscall UGizmoElementBase::GetHitPriority(UGizmoElementBase *this)

{
  return this->HitPriority;
}

// GetHittableState @ 1496a2df0

bool __thiscall UGizmoElementBase::GetHittableState(UGizmoElementBase *this)

{
  return (bool)(this->ElementState >> 2 & 1);
}

// GetHoverMaterial @ 1496a2e80

UMaterialInterface * __thiscall UGizmoElementBase::GetHoverMaterial(UGizmoElementBase *this)

{
  FGizmoElementMaterialAttribute *this_00;
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  this_00 = &(this->MeshRenderAttributes).HoverMaterial;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetHoverMaterial @ 1496a2ec0

UMaterialInterface * __thiscall UGizmoElementBase::GetHoverMaterial(UGizmoElementBase *this)

{
  FGizmoElementMaterialAttribute *this_00;
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  this_00 = &(this->MeshRenderAttributes).HoverMaterial;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetHoverVertexColor @ 1496a2f30

FLinearColor * __thiscall
UGizmoElementBase::GetHoverVertexColor(UGizmoElementBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->MeshRenderAttributes).HoverVertexColor.bHasValue != false) {
    uVar1 = *(undefined8 *)
             ((longlong)&(this->MeshRenderAttributes).HoverVertexColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->MeshRenderAttributes).HoverVertexColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetInteractMaterial @ 1496a3030

UMaterialInterface * __thiscall UGizmoElementBase::GetInteractMaterial(UGizmoElementBase *this)

{
  FGizmoElementMaterialAttribute *this_00;
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  this_00 = &(this->MeshRenderAttributes).InteractMaterial;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetInteractMaterial @ 1496a3070

UMaterialInterface * __thiscall UGizmoElementBase::GetInteractMaterial(UGizmoElementBase *this)

{
  FGizmoElementMaterialAttribute *this_00;
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  this_00 = &(this->MeshRenderAttributes).InteractMaterial;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetInteractVertexColor @ 1496a30e0

FLinearColor * __thiscall
UGizmoElementBase::GetInteractVertexColor
          (UGizmoElementBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->MeshRenderAttributes).InteractVertexColor.bHasValue != false) {
    uVar1 = *(undefined8 *)
             ((longlong)&(this->MeshRenderAttributes).InteractVertexColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->MeshRenderAttributes).InteractVertexColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetMaterial @ 1496a3330

UMaterialInterface * __thiscall UGizmoElementBase::GetMaterial(UGizmoElementBase *this)

{
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->MeshRenderAttributes);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)&this->MeshRenderAttributes);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterial @ 1496a3370

UMaterialInterface * __thiscall UGizmoElementBase::GetMaterial(UGizmoElementBase *this)

{
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->MeshRenderAttributes);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)&this->MeshRenderAttributes);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetMinimumPixelHitDistanceThreshold @ 1496a3870

float __thiscall UGizmoElementBase::GetMinimumPixelHitDistanceThreshold(UGizmoElementBase *this)

{
  return this->MinimumPixelHitDistanceThreshold;
}

// GetPartHittableState @ 1496a3bd0

TOptional<bool> __thiscall
UGizmoElementBase::GetPartHittableState(UGizmoElementBase *this,uint param_1)

{
  undefined1 uVar1;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  if (in_R8D == this->PartIdentifier) {
    uVar1 = (**(code **)(this->_padding_ + 0x2e8))();
    *(undefined1 *)CONCAT44(in_register_00000014,param_1) = uVar1;
    ((undefined1 *)CONCAT44(in_register_00000014,param_1))[1] = 1;
    return SUB42(param_1,0);
  }
  *(undefined1 *)(CONCAT44(in_register_00000014,param_1) + 1) = 0;
  return SUB42(param_1,0);
}

// GetPartIdentifier @ 1496a3ce0

uint __thiscall UGizmoElementBase::GetPartIdentifier(UGizmoElementBase *this)

{
  return this->PartIdentifier;
}

// GetPartIdentifier @ 1496a3cf0

uint __thiscall UGizmoElementBase::GetPartIdentifier(UGizmoElementBase *this)

{
  return this->PartIdentifier;
}

// GetPartInteractionState @ 1496a3d00

TOptional<EGizmoElementInteractionState> __thiscall
UGizmoElementBase::GetPartInteractionState(UGizmoElementBase *this,uint param_1)

{
  TOptional<EGizmoElementInteractionState> TVar1;
  undefined4 uVar2;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  TVar1._4_4_ = in_register_00000014;
  TVar1.TypedValue = param_1;
  if (in_R8D == this->PartIdentifier) {
    uVar2 = (**(code **)(this->_padding_ + 0x3d0))();
    *(undefined4 *)TVar1 = uVar2;
    *(undefined1 *)((longlong)TVar1 + 4) = 1;
    return TVar1;
  }
  *(undefined1 *)(CONCAT44(in_register_00000014,param_1) + 4) = 0;
  return TVar1;
}

// GetPartVisibleState @ 1496a3e10

TOptional<bool> __thiscall
UGizmoElementBase::GetPartVisibleState(UGizmoElementBase *this,uint param_1)

{
  undefined1 uVar1;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  if (in_R8D == this->PartIdentifier) {
    uVar1 = (**(code **)(this->_padding_ + 0x2d8))();
    *(undefined1 *)CONCAT44(in_register_00000014,param_1) = uVar1;
    ((undefined1 *)CONCAT44(in_register_00000014,param_1))[1] = 1;
    return SUB42(param_1,0);
  }
  *(undefined1 *)(CONCAT44(in_register_00000014,param_1) + 1) = 0;
  return SUB42(param_1,0);
}

// GetPixelHitDistanceThreshold @ 1496a3f60

float __thiscall UGizmoElementBase::GetPixelHitDistanceThreshold(UGizmoElementBase *this)

{
  return this->PixelHitDistanceThreshold;
}

// GetPrivateStaticClass @ 1496a4d80

UClass * __cdecl UGizmoElementBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementBase",
               &Z_Registration_Info_UClass_UGizmoElementBase.InnerSingleton,
               StaticRegisterNativesUGizmoElementBase,0x150,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementBase>,
               InternalVTableHelperCtorCaller<UGizmoElementBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementBase.InnerSingleton;
}

// GetSelectMaterial @ 1496a7df0

UMaterialInterface * __thiscall UGizmoElementBase::GetSelectMaterial(UGizmoElementBase *this)

{
  FGizmoElementMaterialAttribute *this_00;
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  this_00 = &(this->MeshRenderAttributes).SelectMaterial;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetSelectMaterial @ 1496a7e30

UMaterialInterface * __thiscall UGizmoElementBase::GetSelectMaterial(UGizmoElementBase *this)

{
  FGizmoElementMaterialAttribute *this_00;
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  this_00 = &(this->MeshRenderAttributes).SelectMaterial;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetSelectVertexColor @ 1496a7ea0

FLinearColor * __thiscall
UGizmoElementBase::GetSelectVertexColor
          (UGizmoElementBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->MeshRenderAttributes).SelectVertexColor.bHasValue != false) {
    uVar1 = *(undefined8 *)
             ((longlong)&(this->MeshRenderAttributes).SelectVertexColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->MeshRenderAttributes).SelectVertexColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetSubElements @ 1496a7fd0

TArrayView<TObjectPtr<UGizmoElementBase>_const_,int> * __thiscall
UGizmoElementBase::GetSubElements
          (UGizmoElementBase *this,
          TArrayView<TObjectPtr<UGizmoElementBase>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TObjectPtr<UGizmoElementBase> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSubElementsRecursive @ 1496a8080

bool __thiscall
UGizmoElementBase::GetSubElementsRecursive
          (UGizmoElementBase *this,
          TArray<TObjectPtr<UGizmoElementBase>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *local_28;
  int local_20;
  undefined1 local_18 [16];
  
  puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x3b0))(this,local_18);
  iVar1 = *(int *)(puVar6 + 1);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else if (iVar1 == 0) goto LAB_1496a8127;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
  ConstructItems<TObjectPtr<UGizmoElementBase>,TObjectPtr<UGizmoElementBase>,int>
            ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8,
             (TObjectPtr<UGizmoElementBase> *)*puVar6,iVar1);
LAB_1496a8127:
  (**(code **)(this->_padding_ + 0x3b0))(this,&local_28);
  for (puVar6 = local_28; puVar6 != local_28 + local_20; puVar6 = puVar6 + 1) {
    if ((UGizmoElementBase *)*puVar6 != (UGizmoElementBase *)0x0) {
      GetSubElementsRecursive((UGizmoElementBase *)*puVar6,param_1);
    }
  }
  return param_1->ArrayNum != 0;
}

// GetSubElementsRecursive @ 1496a81a0

bool __thiscall
UGizmoElementBase::GetSubElementsRecursive
          (UGizmoElementBase *this,
          TArray<TObjectPtr<UGizmoElementBase>,TSizedDefaultAllocator<32>_> *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x3b0))(this,&local_18);
  pFVar8 = local_18;
  do {
    if (pFVar8 == local_18 + (longlong)local_10 * 8) {
      return param_1->ArrayNum != 0;
    }
    if (*(longlong **)pFVar8 != (longlong *)0x0) {
      uVar6 = (**(code **)(**(longlong **)pFVar8 + 0x398))();
      if (uVar6 == param_2) {
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (((pFVar1 <= pFVar8) && (pFVar8 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        param_1->ArrayNum = iVar7 + 1;
        pUVar2 = *(UObject **)pFVar8;
        *(UObject **)(pFVar1 + (longlong)iVar7 * 8) = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
      }
      GetSubElementsRecursive(*(UGizmoElementBase **)pFVar8,param_1,param_2);
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetSubdueMaterial @ 1496a8d80

UMaterialInterface * __thiscall UGizmoElementBase::GetSubdueMaterial(UGizmoElementBase *this)

{
  FGizmoElementMaterialAttribute *this_00;
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  this_00 = &(this->MeshRenderAttributes).SubdueMaterial;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetSubdueMaterial @ 1496a8dc0

UMaterialInterface * __thiscall UGizmoElementBase::GetSubdueMaterial(UGizmoElementBase *this)

{
  FGizmoElementMaterialAttribute *this_00;
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  this_00 = &(this->MeshRenderAttributes).SubdueMaterial;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetSubdueVertexColor @ 1496a8e30

FLinearColor * __thiscall
UGizmoElementBase::GetSubdueVertexColor
          (UGizmoElementBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->MeshRenderAttributes).SubdueVertexColor.bHasValue != false) {
    uVar1 = *(undefined8 *)
             ((longlong)&(this->MeshRenderAttributes).SubdueVertexColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->MeshRenderAttributes).SubdueVertexColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetVertexColor @ 1496a9670

FLinearColor * __thiscall
UGizmoElementBase::GetVertexColor(UGizmoElementBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if ((this->MeshRenderAttributes).VertexColor.bHasValue != false) {
    uVar1 = *(undefined8 *)
             ((longlong)&(this->MeshRenderAttributes).VertexColor.Value.field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->MeshRenderAttributes).VertexColor.Value.field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
  return __return_storage_ptr__;
}

// GetViewAlignAxialAngleTol @ 1496a97d0

float __thiscall UGizmoElementBase::GetViewAlignAxialAngleTol(UGizmoElementBase *this)

{
  return this->ViewAlignAxialAngleTol;
}

// GetViewAlignAxis @ 1496a97e0

TVector<double> * __thiscall
UGizmoElementBase::GetViewAlignAxis(UGizmoElementBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ViewAlignAxis).field0_0x0._s_0.Y;
  dVar1 = (this->ViewAlignAxis).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ViewAlignAxis).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetViewAlignNormal @ 1496a9810

TVector<double> * __thiscall
UGizmoElementBase::GetViewAlignNormal
          (UGizmoElementBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ViewAlignNormal).field0_0x0._s_0.Y;
  dVar1 = (this->ViewAlignNormal).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ViewAlignNormal).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetViewAlignRot @ 1496a9840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UGizmoElementBase::GetViewAlignRot
          (UGizmoElementBase *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,bool param_4,TTransform<double> *param_5,TVector<double> *param_6
          ,TQuat<double> *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  ulonglong uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  TVector<double> *pTVar9;
  TQuat<double> *pTVar10;
  EGizmoElementViewAlignType EVar11;
  TVector<double>_u_0 *pTVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  double dVar48;
  undefined4 uVar49;
  undefined1 auVar47 [16];
  undefined4 uVar50;
  double dVar51;
  double dVar52;
  double dVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  __m128d _Var56;
  double dVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  undefined1 auStack_348 [32];
  double local_328;
  TVector<double>_u_0 local_318;
  double local_2f8;
  double dStack_2f0;
  undefined8 local_2e8;
  double local_2d8 [2];
  TVector<double>_u_0 local_2c8 [2];
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 local_288 [24];
  double dStack_270;
  double local_268 [2];
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_348;
  EVar11 = this->ViewAlignType;
  local_328 = (param_5->Scale3D).ZW.m128d_f64[0];
  auVar21 = *(undefined1 (*) [16])(param_5->Scale3D).XY.m128d_f64;
  if (EVar11 != None) {
    auVar4._4_8_ = in_XMM3_Qb;
    auVar4._0_4_ = auVar21._4_4_;
    auVar43._0_8_ = auVar4._0_8_ << 0x20;
    auVar43._8_4_ = auVar21._8_4_;
    auVar43._12_4_ = auVar21._12_4_;
    dVar31 = auVar21._0_8_ - auVar43._8_8_;
    uVar16 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar17 = (uint)((ulonglong)dVar31 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_318._s_0.Z = local_328;
    if (((double)CONCAT44(uVar17,uVar16) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar17,uVar16) == __real_3f1a36e2e0000000) &&
       (dVar31 = auVar21._0_8_ - local_328,
       uVar16 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar17 = (uint)((ulonglong)dVar31 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar17,uVar16) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar17,uVar16) == __real_3f1a36e2e0000000)) {
      auVar32._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(param_5->Scale3D).ZW.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(param_5->Scale3D).ZW.m128d_f64);
      auVar32._8_4_ = _UNK_15061cc88 & *(uint *)((param_5->Scale3D).ZW.m128d_f64 + 1);
      auVar32._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_5->Scale3D).ZW.m128d_f64 + 0xc);
      auVar41._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(param_5->Scale3D).XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(param_5->Scale3D).XY.m128d_f64);
      auVar41._8_4_ = _UNK_15061cc88 & *(uint *)((param_5->Scale3D).XY.m128d_f64 + 1);
      auVar41._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_5->Scale3D).XY.m128d_f64 + 0xc);
      auVar19._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar32._8_8_);
      auVar19._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar32._0_8_);
      uVar16 = movmskpd((int)param_1,auVar19);
      lVar14 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar41._8_8_);
      auVar21._8_4_ = (int)lVar14;
      auVar21._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar41._0_8_);
      auVar21._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar8 = movmskpd((int)local_d8,auVar21);
      if ((uVar16 & 0x3fffffff) == 0 && iVar8 == 0) {
        local_258.M[0][0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        local_258.M[0][0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        local_258.M[0][1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        local_258.M[0][1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        local_258.M[1][0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        local_258.M[1][0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        local_258.M[1][1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        local_258.M[1][1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        local_258.M[1][2]._0_4_ =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        local_258.M[1][2]._4_4_ =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        _local_2f8 = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        local_268 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        _Var56.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(param_5,(TTransform<double> *)&local_258);
        dStack_2f0 = local_258.M[2][3];
        local_2f8 = local_258.M[2][2];
        local_268[1] = local_258.M[2][1];
        local_268[0] = local_258.M[2][0];
        EVar11 = this->ViewAlignType;
        _Var56.m128d_f64[1] = local_258.M[0][3];
        _Var56.m128d_f64[0] = local_258.M[0][2];
      }
      local_2d8 = _Var56.m128d_f64;
      local_298 = local_258.M[0][0]._0_4_;
      uStack_294 = local_258.M[0][0]._4_4_;
      uStack_290 = local_258.M[0][1]._0_4_;
      uStack_28c = local_258.M[0][1]._4_4_;
      if ((param_4) && (EVar11 = this->ViewAlignType, EVar11 != PointScreen)) {
        uVar50 = SUB84(__real_3e45798ee0000000,0);
        uVar62 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        dVar31 = local_268[0] * (param_1->field0_0x0)._s_0.X;
        dVar18 = local_268[1] * (param_1->field0_0x0)._s_0.Y;
        uVar49 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar52 = (param_1->field0_0x0)._s_0.Z * local_2f8;
        dVar45 = local_2f8._8_8_ * 0.0;
        dVar51 = _Var56.m128d_f64[0];
        dVar60 = _Var56.m128d_f64[1];
        auVar38._4_4_ = local_258.M[0][0]._4_4_;
        auVar38._0_4_ = local_258.M[0][0]._0_4_;
        auVar38._8_4_ = local_258.M[0][1]._0_4_;
        auVar38._12_4_ = local_258.M[0][1]._4_4_;
        auVar42._4_4_ = local_258.M[0][0]._4_4_;
        auVar42._0_4_ = local_258.M[0][0]._0_4_;
        auVar42._8_4_ = local_258.M[0][1]._0_4_;
        auVar42._12_4_ = local_258.M[0][1]._4_4_;
        auVar43 = blendpd(auVar42,(undefined1  [16])_Var56.m128d_f64,2);
        auVar53._8_4_ = SUB84(dVar18,0);
        auVar53._0_8_ = dVar31;
        auVar53._12_4_ = uVar49;
        local_2c8[0]._s_0.X = __real_3e45798ee0000000;
        local_2c8[0]._s_0.Y = 0.0;
        auVar20._8_4_ = SUB84(dVar18,0);
        auVar20._0_8_ = dVar31;
        auVar20._12_4_ = uVar49;
        auVar54._0_8_ =
             auVar53._8_8_ * (double)CONCAT44(local_258.M[0][0]._4_4_,local_258.M[0][0]._0_4_) -
             auVar38._8_8_ * dVar31;
        auVar54._8_8_ =
             dVar52 * (double)CONCAT44(local_258.M[0][1]._4_4_,local_258.M[0][1]._0_4_) -
             dVar51 * dVar18;
        auVar3._8_4_ = SUB84(dVar45,0);
        auVar3._0_8_ = dVar52;
        auVar3._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        auVar21 = blendpd(auVar20,auVar3,2);
        auVar46._8_4_ = SUB84(auVar54._8_8_,0);
        auVar46._0_8_ = auVar54._0_8_;
        auVar46._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
        auVar22._0_8_ = auVar21._0_8_ * dVar51 - auVar43._0_8_ * dVar52;
        auVar22._8_8_ = auVar21._8_8_ * dVar60 - auVar43._8_8_ * dVar45;
        auVar21 = blendpd(auVar54,auVar22,2);
        dVar45 = auVar46._8_8_ + auVar46._8_8_;
        dVar48 = auVar22._0_8_ + auVar22._0_8_;
        auVar55._0_8_ = auVar21._0_8_ + auVar21._0_8_;
        auVar55._8_8_ = auVar21._8_8_ + auVar21._8_8_;
        auVar33._8_4_ = SUB84(dVar48,0);
        auVar33._0_8_ = dVar45;
        uVar49 = (undefined4)((ulonglong)dVar48 >> 0x20);
        auVar33._12_4_ = uVar49;
        auVar23._8_4_ = SUB84(dVar48,0);
        auVar23._0_8_ = dVar45;
        auVar23._12_4_ = uVar49;
        auVar21 = blendpd(auVar23,auVar55,2);
        auVar34._0_8_ =
             auVar33._8_8_ * (double)CONCAT44(local_258.M[0][0]._4_4_,local_258.M[0][0]._0_4_) -
             dVar45 * auVar38._8_8_;
        auVar34._8_8_ =
             auVar55._0_8_ * (double)CONCAT44(local_258.M[0][1]._4_4_,local_258.M[0][1]._0_4_) -
             dVar48 * dVar51;
        auVar24._0_8_ = auVar21._0_8_ * dVar51 - auVar55._0_8_ * auVar43._0_8_;
        auVar24._8_8_ = auVar21._8_8_ * dVar60 - auVar55._8_8_ * auVar43._8_8_;
        auVar21 = blendpd(auVar34,auVar24,2);
        local_318._s_0.X =
             (param_6->field0_0x0)._s_0.X -
             (dVar45 * dVar60 + dVar31 + auVar34._8_8_ +
             (double)CONCAT44(local_258.M[1][0]._4_4_,local_258.M[1][0]._0_4_));
        local_318._s_0.Y =
             (param_6->field0_0x0)._s_0.Y -
             (dVar48 * dVar60 + dVar18 + auVar24._0_8_ +
             (double)CONCAT44(local_258.M[1][1]._4_4_,local_258.M[1][1]._0_4_));
        local_318._s_0.Z =
             (param_6->field0_0x0)._s_0.Z -
             (auVar55._0_8_ * dVar60 + dVar52 + auVar21._0_8_ +
             (double)CONCAT44(local_258.M[1][2]._4_4_,local_258.M[1][2]._0_4_));
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_318._s_0,__real_3e45798ee0000000);
        _Var56.m128d_f64 = local_2d8;
      }
      else {
        local_318._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_318._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_318._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        local_288._0_4_ = local_258.M[0][0]._0_4_;
        local_288._4_4_ = local_258.M[0][0]._4_4_;
        local_288._8_4_ = local_258.M[0][1]._0_4_;
        local_288._12_4_ = local_258.M[0][1]._4_4_;
        unique0x10001f73 = _Var56.m128d_f64;
        pTVar9 = UE::Math::TQuat<double>::RotateVector
                           ((TQuat<double> *)local_288,(TVector<double> *)&local_2c8[0]._s_0,
                            (TVector<double> *)&local_318._s_0);
        uVar50 = SUB84(__real_3e45798ee0000000,0);
        uVar62 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        local_318._s_0.X = (pTVar9->field0_0x0)._s_0.X;
        local_318._s_0.Y = (pTVar9->field0_0x0)._s_0.Y;
        local_318._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
        local_2c8[0]._s_0.X = __real_3e45798ee0000000;
        local_2c8[0]._s_0.Y = 0.0;
        dVar31 = local_318._s_0.Y * local_318._s_0.Y + local_318._s_0.X * local_318._s_0.X +
                 local_318._s_0.Z * local_318._s_0.Z;
        if (__real_3e45798ee0000000 < dVar31) {
          dVar31 = __real_3ff0000000000000 / SQRT(dVar31);
          local_318._s_0.X = local_318._s_0.X * dVar31;
          local_318._s_0.Y = local_318._s_0.Y * dVar31;
          local_318._s_0.Z = local_318._s_0.Z * dVar31;
        }
      }
      uVar64 = (uint)((ulonglong)local_318._s_0.Z >> 0x20);
      uVar63 = SUB84(local_318._s_0.Z,0);
      uVar68 = (uint)((ulonglong)local_318._s_0.Y >> 0x20);
      uVar67 = SUB84(local_318._s_0.Y,0);
      uVar66 = (uint)((ulonglong)local_318._s_0.X >> 0x20);
      uVar65 = SUB84(local_318._s_0.X,0);
      uVar16 = (uint)__xmm_80000000000000008000000000000000;
      uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      if (EVar11 != PointOnly) {
        if (EVar11 - PointEye < 2) {
          dVar31 = (this->ViewAlignAxis).field0_0x0._s_0.Z;
          dVar18 = (this->ViewAlignAxis).field0_0x0._s_0.Y;
          dVar52 = (this->ViewAlignAxis).field0_0x0._s_0.X;
          dVar45 = (this->ViewAlignNormal).field0_0x0._s_0.Y;
          dVar48 = (this->ViewAlignNormal).field0_0x0._s_0.Z;
          dVar51 = (this->ViewAlignNormal).field0_0x0._s_0.X;
          local_318._s_0.X = dVar48 * dVar18 - dVar45 * dVar31;
          local_318._s_0.Y = dVar51 * dVar31 - dVar52 * dVar48;
          local_318._s_0.Z = dVar52 * dVar45 - dVar51 * dVar18;
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_318._s_0,(double)local_2c8[0]._0_8_);
          auVar7._8_4_ = uStack_290;
          auVar7._0_8_ = CONCAT44(uStack_294,local_298);
          auVar7._12_4_ = uStack_28c;
          dVar31 = (param_3->field0_0x0)._s_0.X * local_268[0];
          dVar18 = (param_3->field0_0x0)._s_0.Y * local_268[1];
          uVar50 = (undefined4)((ulonglong)dVar18 >> 0x20);
          local_2f8 = (param_3->field0_0x0)._s_0.Z * local_2f8;
          dStack_2f0 = dStack_2f0 * 0.0;
          dVar61 = _Var56.m128d_f64[1];
          dVar40 = auVar7._8_8_;
          auVar43 = blendpd(auVar7,(undefined1  [16])_Var56.m128d_f64,2);
          auVar25._8_4_ = SUB84(dVar18,0);
          auVar25._0_8_ = dVar31;
          auVar25._12_4_ = uVar50;
          auVar2._8_4_ = SUB84(dStack_2f0,0);
          auVar2._0_8_ = local_2f8;
          auVar2._12_4_ = (int)((ulonglong)dStack_2f0 >> 0x20);
          auVar21 = blendpd(auVar25,auVar2,2);
          auVar57._8_4_ = SUB84(dVar18,0);
          auVar57._0_8_ = dVar31;
          auVar57._12_4_ = uVar50;
          auVar58._0_8_ = auVar57._8_8_ * (double)CONCAT44(uStack_294,local_298) - dVar31 * dVar40;
          auVar58._8_8_ = local_2f8 * dVar40 - dVar18 * _Var56.m128d_f64[0];
          auVar26._0_8_ = auVar21._0_8_ * local_2d8[0] - local_2f8 * auVar43._0_8_;
          auVar26._8_8_ = auVar21._8_8_ * local_2d8[1] - dStack_2f0 * auVar43._8_8_;
          auVar21 = blendpd(auVar58,auVar26,2);
          dVar52 = auVar58._8_8_ + auVar58._8_8_;
          dVar60 = auVar26._0_8_ + auVar26._0_8_;
          uVar50 = (undefined4)((ulonglong)dVar60 >> 0x20);
          auVar59._0_8_ = auVar21._0_8_ + auVar21._0_8_;
          auVar59._8_8_ = auVar21._8_8_ + auVar21._8_8_;
          auVar35._8_4_ = SUB84(dVar60,0);
          auVar35._0_8_ = dVar52;
          auVar35._12_4_ = uVar50;
          auVar27._8_4_ = SUB84(dVar60,0);
          auVar27._0_8_ = dVar52;
          auVar27._12_4_ = uVar50;
          auVar21 = blendpd(auVar27,auVar59,2);
          auVar36._0_8_ = auVar35._8_8_ * (double)CONCAT44(uStack_294,local_298) - dVar52 * dVar40;
          auVar36._8_8_ =
               auVar59._0_8_ * (double)CONCAT44(uStack_28c,uStack_290) -
               dVar60 * _Var56.m128d_f64[0];
          auVar28._0_8_ = auVar21._0_8_ * local_2d8[0] - auVar59._0_8_ * auVar43._0_8_;
          auVar28._8_8_ = auVar21._8_8_ * local_2d8[1] - auVar59._8_8_ * auVar43._8_8_;
          auVar21 = blendpd(auVar36,auVar28,2);
          dVar31 = dVar52 * dVar61 + dVar31 + auVar36._8_8_;
          dVar18 = dVar60 * dVar61 + dVar18 + auVar28._0_8_;
          uVar16 = (uint)__xmm_80000000000000008000000000000000;
          uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          dVar52 = auVar59._0_8_ * dVar61 + local_2f8 + auVar21._0_8_;
          auVar5._4_8_ = auVar21._8_8_;
          auVar5._0_4_ = (int)((ulonglong)dVar31 >> 0x20);
          auVar37._0_8_ = auVar5._0_8_ << 0x20;
          auVar37._8_4_ = SUB84(dVar18,0);
          auVar37._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          uVar65 = uVar65 ^ uVar16;
          uVar66 = uVar66 ^ uVar17;
          uVar67 = uVar67 ^ uVar16;
          uVar68 = uVar68 ^ uVar17;
          uVar63 = uVar63 ^ uVar16;
          uVar64 = uVar64 ^ uVar17;
          local_2f8 = auVar37._8_8_ * (double)CONCAT44(uVar64,uVar63) -
                      dVar52 * (double)CONCAT44(uVar68,uVar67);
          dStack_2f0 = dVar52 * (double)CONCAT44(uVar66,uVar65) -
                       dVar31 * (double)CONCAT44(uVar64,uVar63);
          local_2e8 = dVar31 * (double)CONCAT44(uVar68,uVar67) -
                      auVar37._8_8_ * (double)CONCAT44(uVar66,uVar65);
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_2f8,(double)local_2c8[0]._0_8_);
          local_1d8.M[0][0] = (this->ViewAlignNormal).field0_0x0._s_0.X;
          local_1d8.M[1][0] = (this->ViewAlignNormal).field0_0x0._s_0.Y;
          local_1d8.M[2][0] = (this->ViewAlignNormal).field0_0x0._s_0.Z;
          local_1d8.M[0][2] = dVar45 * local_318._s_0.Z - dVar48 * local_318._s_0.Y;
          local_1d8.M[1][1] = local_318._s_0.Y;
          local_1d8.M[1][2] = dVar48 * local_318._s_0.X - dVar51 * local_318._s_0.Z;
          local_1d8.M[2][1] = local_318._s_0.Z;
          local_1d8.M[0][1] = local_318._s_0.X;
          local_258.M[1][2] = (double)local_2e8;
          local_1d8.M[2][2] = dVar51 * local_318._s_0.Y - dVar45 * local_318._s_0.X;
          local_258.M[2][0] =
               (double)local_2e8 * (double)CONCAT44(uVar68,uVar67) -
               dStack_2f0 * (double)CONCAT44(uVar64,uVar63);
          local_258.M[2][1] =
               local_2f8 * (double)CONCAT44(uVar64,uVar63) -
               (double)local_2e8 * (double)CONCAT44(uVar66,uVar65);
          local_258.M[1][1] = dStack_2f0;
          local_1d8.M[0][3] = 0.0;
          local_1d8.M[1][3] = 0.0;
          local_1d8.M[2][3] = 0.0;
          local_1d8.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1d8.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1d8.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_1d8.M[3][3] = __real_3ff0000000000000;
          local_258.M[0][0] = (double)CONCAT44(uVar66,uVar65);
          local_258.M[0][1] = (double)CONCAT44(uVar68,uVar67);
          local_258.M[0][2] = (double)CONCAT44(uVar64,uVar63);
          local_258.M[0][3] = 0.0;
          local_258.M[1][0] = local_2f8;
          local_258.M[1][3] = 0.0;
          local_258.M[2][3] = 0.0;
          local_258.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_258.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          auVar44._0_8_ =
               dStack_2f0 * (double)CONCAT44(uVar66,uVar65) -
               local_2f8 * (double)CONCAT44(uVar68,uVar67);
          auVar44._8_8_ = 0;
          local_258.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_258.M[3][3] = __real_3ff0000000000000;
          local_258.M[2][2] = auVar44._0_8_;
          VectorMatrixMultiply(&local_158,&local_1d8,&local_258);
          UE::Math::TMatrix<double>::ToQuat(&local_158,(TQuat<double> *)local_288);
          dVar52 = (double)CONCAT44(local_288._4_4_,local_288._0_4_);
          dVar45 = (double)CONCAT44(local_288._12_4_,local_288._8_4_);
          dVar18 = dVar52 * dVar52 + (double)local_288._16_8_ * (double)local_288._16_8_;
          dVar48 = dVar45 * dVar45 + dStack_270 * dStack_270;
          dVar31 = dVar48 + dVar18;
          dVar18 = dVar18 + dVar48;
          auVar1._8_4_ = SUB84(dVar18,0);
          auVar1._0_8_ = dVar31;
          auVar1._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          auVar21 = sqrtpd(auVar44,auVar1);
          uVar13 = -(ulonglong)((double)local_2c8[0]._0_8_ <= dVar31);
          uVar15 = -(ulonglong)((double)local_2c8[0]._0_8_ <= dVar18);
          uVar16 = (uint)(uVar13 >> 0x20);
          uVar17 = (uint)(uVar15 >> 0x20);
          auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
          auVar47._0_8_ = uVar13 & (ulonglong)(auVar43._0_8_ * dVar52);
          uVar6 = uVar15 & (ulonglong)(auVar43._8_8_ * dVar45);
          auVar47._8_4_ = (undefined4)uVar6;
          auVar47._12_4_ = (undefined4)(uVar6 >> 0x20);
          auVar29._0_4_ =
               ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar29._4_4_ =
               ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar29._8_4_ =
               ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar29._12_4_ =
               ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
          auVar39._0_4_ =
               ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar39._4_4_ =
               ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar39._8_4_ =
               ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar39._12_4_ =
               ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          param_7->X = (double)SUB168(auVar47 | auVar29,0);
          param_7->Y = (double)SUB168(auVar47 | auVar29,8);
          auVar30._0_8_ = (ulonglong)(auVar21._0_8_ * (double)local_288._16_8_) & uVar13;
          uVar15 = (ulonglong)(auVar21._8_8_ * dStack_270) & uVar15;
          auVar30._8_4_ = (undefined4)uVar15;
          auVar30._12_4_ = (undefined4)(uVar15 >> 0x20);
          param_7->Z = (double)SUB168(auVar39 | auVar30,0);
          param_7->W = (double)SUB168(auVar39 | auVar30,8);
        }
        else if (EVar11 == Axial) {
          dVar31 = (this->ViewAlignAxis).field0_0x0._s_0.X;
          uVar67 = uVar67 ^ uVar16;
          uVar68 = uVar68 ^ uVar17;
          dVar18 = (this->ViewAlignAxis).field0_0x0._s_0.Y;
          uVar63 = uVar63 ^ uVar16;
          uVar64 = uVar64 ^ uVar17;
          dVar52 = (this->ViewAlignAxis).field0_0x0._s_0.Z;
          uVar65 = uVar65 ^ uVar16;
          uVar66 = uVar66 ^ uVar17;
          dVar45 = dVar18 * (double)CONCAT44(uVar68,uVar67) +
                   dVar31 * (double)CONCAT44(uVar66,uVar65) +
                   dVar52 * (double)CONCAT44(uVar64,uVar63);
          if ((double)this->ViewAlignAxialMaxCosAngleTol <=
              (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar45,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
            return false;
          }
          local_318._s_0.X =
               dVar52 * (double)CONCAT44(uVar68,uVar67) - (double)CONCAT44(uVar64,uVar63) * dVar18;
          local_318._s_0.Y =
               (double)CONCAT44(uVar64,uVar63) * dVar31 - dVar52 * (double)CONCAT44(uVar66,uVar65);
          local_318._s_0.Z =
               dVar18 * (double)CONCAT44(uVar66,uVar65) - dVar31 * (double)CONCAT44(uVar68,uVar67);
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_318._s_0,(double)CONCAT44(uVar62,uVar50));
          local_2e8 = local_318._s_0.Y * dVar31 - local_318._s_0.X * dVar18;
          dStack_2f0 = local_318._s_0.X * dVar52 - local_318._s_0.Z * dVar31;
          local_2f8 = local_318._s_0.Z * dVar18 - local_318._s_0.Y * dVar52;
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_2f8,(double)CONCAT44(uVar62,uVar50));
          pTVar12 = (TVector<double>_u_0 *)&local_2f8;
          goto LAB_1496a9c2e;
        }
        return true;
      }
      pTVar12 = &local_318;
      local_318._s_0.X = (double)CONCAT44(uVar66 ^ uVar17,uVar65 ^ uVar16);
      local_318._s_0.Y = (double)CONCAT44(uVar68 ^ uVar17,uVar67 ^ uVar16);
      local_318._s_0.Z = (double)CONCAT44(uVar64 ^ uVar17,uVar63 ^ uVar16);
LAB_1496a9c2e:
      pTVar10 = UE::Math::TQuat<double>::FindBetweenNormals
                          ((TQuat<double> *)local_288,&this->ViewAlignNormal,
                           (TVector<double> *)&pTVar12->_s_0);
      dVar31 = pTVar10->Y;
      param_7->X = pTVar10->X;
      param_7->Y = dVar31;
      dVar31 = pTVar10->W;
      param_7->Z = pTVar10->Z;
      param_7->W = dVar31;
      return true;
    }
    if (bNonUniformScaleWarning) {
      if (2 < (byte)LogGizmoElementBase._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGizmoElementBase);
      }
      bNonUniformScaleWarning = false;
    }
  }
  return false;
}

// GetViewAlignRot @ 1496aa290

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
UGizmoElementBase::GetViewAlignRot
          (UGizmoElementBase *this,FSceneView *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,TQuat<double> *param_4)

{
  double *pdVar1;
  undefined1 uVar2;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_28 = (param_1->ViewLocation).field0_0x0._s_0.X;
  dStack_20 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  local_18 = (param_1->ViewLocation).field0_0x0._s_0.Z;
  local_40 = (param_1->ViewMatrices).ViewMatrix.M[0][2];
  local_30 = (param_1->ViewMatrices).ViewMatrix.M[2][2];
  local_38 = (param_1->ViewMatrices).ViewMatrix.M[1][2];
  local_50 = (param_1->ViewMatrices).ViewMatrix.M[1][1];
  local_58 = (param_1->ViewMatrices).ViewMatrix.M[0][1];
  pdVar1 = (param_1->ViewMatrices).ProjectionMatrix.M[3] + 3;
  local_48 = (param_1->ViewMatrices).ViewMatrix.M[2][1];
  uVar2 = (**(code **)(this->_padding_ + 0x660))
                    (this,&local_28,&local_40,&local_58,
                     *pdVar1 <= __real_3ff0000000000000 && __real_3ff0000000000000 != *pdVar1,
                     param_2,param_3,param_4);
  return (bool)uVar2;
}

// GetViewAlignRot @ 1496aa360

bool __thiscall
UGizmoElementBase::GetViewAlignRot
          (UGizmoElementBase *this,UGizmoViewContext *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,TQuat<double> *param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  undefined1 local_30 [24];
  
  uVar1 = (**(code **)(*(longlong *)&param_1->field_0x28 + 0x40))(&param_1->field_0x28);
  local_48 = *(undefined4 *)&(param_1->ViewLocation).field0_0x0;
  uStack_44 = *(undefined4 *)((longlong)&(param_1->ViewLocation).field0_0x0 + 4);
  uStack_40 = *(undefined4 *)((longlong)&(param_1->ViewLocation).field0_0x0 + 8);
  uStack_3c = *(undefined4 *)((longlong)&(param_1->ViewLocation).field0_0x0 + 0xc);
  local_38 = (param_1->ViewLocation).field0_0x0._s_0.Z;
  puVar2 = (undefined4 *)
           (**(code **)(*(longlong *)&param_1->field_0x28 + 0x18))(&param_1->field_0x28,local_30);
  local_60 = *puVar2;
  uStack_5c = puVar2[1];
  uStack_58 = puVar2[2];
  uStack_54 = puVar2[3];
  local_50 = *(undefined8 *)(puVar2 + 4);
  puVar2 = (undefined4 *)
           (**(code **)(*(longlong *)&param_1->field_0x28 + 0x28))(&param_1->field_0x28,local_30);
  local_78 = *puVar2;
  uStack_74 = puVar2[1];
  uStack_70 = puVar2[2];
  uStack_6c = puVar2[3];
  local_68 = *(undefined8 *)(puVar2 + 4);
  uVar1 = (**(code **)(this->_padding_ + 0x660))
                    (this,&local_48,&local_60,&local_78,uVar1,param_2,param_3,param_4);
  return (bool)uVar1;
}

// GetViewAlignType @ 1496aa460

EGizmoElementViewAlignType __thiscall UGizmoElementBase::GetViewAlignType(UGizmoElementBase *this)

{
  return this->ViewAlignType;
}

// GetViewDependentAngleTol @ 1496aa470

float __thiscall UGizmoElementBase::GetViewDependentAngleTol(UGizmoElementBase *this)

{
  return this->ViewDependentAngleTol;
}

// GetViewDependentAxis @ 1496aa480

TVector<double> * __thiscall
UGizmoElementBase::GetViewDependentAxis
          (UGizmoElementBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ViewDependentAxis).field0_0x0._s_0.Y;
  dVar1 = (this->ViewDependentAxis).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ViewDependentAxis).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetViewDependentType @ 1496aa4b0

EGizmoElementViewDependentType __thiscall
UGizmoElementBase::GetViewDependentType(UGizmoElementBase *this)

{
  return this->ViewDependentType;
}

// GetViewDependentVisibility @ 1496aa4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UGizmoElementBase::GetViewDependentVisibility
          (UGizmoElementBase *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3,
          TTransform<double> *param_4,TVector<double> *param_5)

{
  EGizmoElementViewDependentType EVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  bool bVar8;
  undefined1 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
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
  undefined1 auVar25 [16];
  undefined4 uVar26;
  double dVar27;
  double dVar30;
  double dVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  TVector<double>_u_0 local_a8;
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 local_68 [16];
  double local_58;
  
  EVar1 = this->ViewDependentType;
  if (((EVar1 != None) && (this->ViewAlignType != PointOnly)) && (this->ViewAlignType != PointEye))
  {
    if (param_3) {
      auVar23 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
      dVar32 = (param_4->Rotation).ZW.m128d_f64[1];
      dVar31 = (param_5->field0_0x0)._s_0.Z * (param_4->Scale3D).ZW.m128d_f64[0];
      dVar5 = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar27 = (param_4->Scale3D).XY.m128d_f64[0] * (param_5->field0_0x0)._s_0.X;
      dVar30 = (param_4->Scale3D).XY.m128d_f64[1] * (param_5->field0_0x0)._s_0.Y;
      auVar10 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      auVar15 = blendpd(auVar10,auVar23,2);
      auVar33._8_4_ = SUB84(dVar30,0);
      auVar33._0_8_ = dVar27;
      uVar26 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar33._12_4_ = uVar26;
      dVar14 = auVar23._0_8_;
      auVar34._0_8_ = auVar33._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar27;
      auVar34._8_8_ = dVar31 * auVar10._8_8_ - dVar14 * dVar30;
      auVar35._8_4_ = SUB84(dVar30,0);
      auVar35._0_8_ = dVar27;
      auVar35._12_4_ = uVar26;
      auVar10._8_4_ = SUB84(dVar5,0);
      auVar10._0_8_ = dVar31;
      auVar10._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar10 = blendpd(auVar35,auVar10,2);
      auVar16._0_8_ = auVar10._0_8_ * dVar14 - auVar15._0_8_ * dVar31;
      auVar16._8_8_ = auVar10._8_8_ * auVar23._8_8_ - auVar15._8_8_ * dVar5;
      auVar10 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      auVar35 = blendpd(auVar34,auVar16,2);
      dVar5 = auVar34._8_8_ + auVar34._8_8_;
      dVar3 = auVar16._0_8_ + auVar16._0_8_;
      uVar26 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar36._0_8_ = auVar35._0_8_ + auVar35._0_8_;
      auVar36._8_8_ = auVar35._8_8_ + auVar35._8_8_;
      auVar21._8_4_ = SUB84(dVar3,0);
      auVar21._0_8_ = dVar5;
      auVar21._12_4_ = uVar26;
      auVar17._8_4_ = SUB84(dVar3,0);
      auVar17._0_8_ = dVar5;
      auVar17._12_4_ = uVar26;
      auVar35 = blendpd(auVar17,auVar36,2);
      auVar22._0_8_ = auVar21._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar5;
      auVar22._8_8_ = auVar36._0_8_ * auVar10._8_8_ - dVar14 * dVar3;
      auVar10 = blendpd(auVar10,auVar23,2);
      auVar15._8_4_ = SUB84(auVar22._8_8_,0);
      auVar15._0_8_ = auVar22._0_8_;
      auVar15._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
      auVar18._0_8_ = auVar35._0_8_ * dVar14 - auVar10._0_8_ * auVar36._0_8_;
      auVar18._8_8_ = auVar35._8_8_ * auVar23._8_8_ - auVar10._8_8_ * auVar36._8_8_;
      auVar23 = blendpd(auVar22,auVar18,2);
      dVar14 = dVar5 * dVar32 + dVar27 + auVar15._8_8_ + (param_4->Translation).XY.m128d_f64[0];
      dVar5 = dVar3 * dVar32 + dVar30 + auVar18._0_8_ + (param_4->Translation).XY.m128d_f64[1];
      local_68._8_4_ = SUB84(dVar5,0);
      local_68._0_8_ = dVar14;
      local_68._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_58 = auVar36._0_8_ * dVar32 + dVar31 + auVar23._0_8_ +
                 (param_4->Translation).ZW.m128d_f64[0];
      local_a8._s_0.Y = dVar5 - (param_1->field0_0x0)._s_0.Y;
      local_a8._s_0.X = dVar14 - (param_1->field0_0x0)._s_0.X;
      local_a8._s_0.Z = local_58 - (param_1->field0_0x0)._s_0.Z;
    }
    else {
      local_a8._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_a8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    }
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_a8._s_0,__real_3e45798ee0000000);
    auVar23 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
    dVar14 = (this->ViewDependentAxis).field0_0x0._s_0.Z;
    auVar10 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
    dVar3 = (param_4->Rotation).ZW.m128d_f64[1];
    auVar35 = *(undefined1 (*) [16])&(this->ViewDependentAxis).field0_0x0;
    auVar16 = blendpd(auVar10,auVar23,2);
    dVar31 = auVar35._8_8_;
    dVar5 = auVar23._0_8_;
    auVar28._0_8_ = dVar31 * auVar10._0_8_ - auVar10._8_8_ * auVar35._0_8_;
    auVar28._8_8_ = dVar14 * auVar10._8_8_ - dVar5 * dVar31;
    auVar37._8_4_ = SUB84(auVar28._8_8_,0);
    auVar37._0_8_ = auVar28._0_8_;
    auVar37._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar14;
    auVar10 = blendpd(auVar35,auVar4,2);
    auVar11._0_8_ = auVar10._0_8_ * dVar5 - auVar16._0_8_ * dVar14;
    auVar11._8_8_ = auVar10._8_8_ * auVar23._8_8_ - auVar16._8_8_ * 0.0;
    auVar10 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
    auVar16 = blendpd(auVar28,auVar11,2);
    auVar29._0_8_ = auVar16._0_8_ + auVar16._0_8_;
    auVar29._8_8_ = auVar16._8_8_ + auVar16._8_8_;
    dVar32 = auVar37._8_8_ + auVar37._8_8_;
    dVar27 = auVar11._0_8_ + auVar11._0_8_;
    auVar24._8_4_ = SUB84(dVar27,0);
    auVar24._0_8_ = dVar32;
    uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
    auVar24._12_4_ = uVar26;
    auVar19._8_4_ = SUB84(dVar27,0);
    auVar19._0_8_ = dVar32;
    auVar19._12_4_ = uVar26;
    auVar16 = blendpd(auVar19,auVar29,2);
    auVar25._0_8_ = auVar24._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar32;
    auVar25._8_8_ = auVar29._0_8_ * auVar10._8_8_ - dVar5 * dVar27;
    auVar10 = blendpd(auVar10,auVar23,2);
    auVar12._8_4_ = SUB84(auVar25._8_8_,0);
    auVar12._0_8_ = auVar25._0_8_;
    auVar12._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
    auVar20._0_8_ = auVar16._0_8_ * dVar5 - auVar10._0_8_ * auVar29._0_8_;
    auVar20._8_8_ = auVar16._8_8_ * auVar23._8_8_ - auVar10._8_8_ * auVar29._8_8_;
    auVar23 = blendpd(auVar25,auVar20,2);
    local_78 = auVar29._0_8_ * dVar3 + dVar14 + auVar23._0_8_;
    local_88 = dVar32 * dVar3 + auVar35._0_8_ + auVar12._8_8_;
    dStack_80 = dVar27 * dVar3 + dVar31 + auVar20._0_8_;
    if (EVar1 != None) {
      uVar26 = (undefined4)((ulonglong)local_88 >> 0x20);
      uVar38 = (undefined4)((ulonglong)dStack_80 >> 0x20);
      if (EVar1 == Axis) {
        auVar7._4_8_ = auVar20._0_8_;
        auVar7._0_4_ = uVar26;
        auVar23._0_8_ = auVar7._0_8_ << 0x20;
        auVar23._8_4_ = SUB84(dStack_80,0);
        auVar23._12_4_ = uVar38;
        dVar14 = local_a8._s_0.Y * auVar23._8_8_ + local_a8._s_0.X * local_88 +
                 local_a8._s_0.Z * local_78;
        return (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
               ___real_3fefef9dc0000000;
      }
      if (EVar1 == Plane) {
        auVar6._4_8_ = auVar20._0_8_;
        auVar6._0_4_ = uVar26;
        auVar13._0_8_ = auVar6._0_8_ << 0x20;
        auVar13._8_4_ = SUB84(dStack_80,0);
        auVar13._12_4_ = uVar38;
        dVar14 = local_a8._s_0.Y * auVar13._8_8_ + local_a8._s_0.X * local_88 +
                 local_a8._s_0.Z * local_78;
        return __real_3faa9fbe80000000 <
               (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      }
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8003199191297818536>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementBase.cpp"
                         ,0x58,"false");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return (bool)uVar9;
      }
    }
  }
  return true;
}

// GetViewDependentVisibility @ 1496aa880

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
UGizmoElementBase::GetViewDependentVisibility
          (UGizmoElementBase *this,FSceneView *param_1,TTransform<double> *param_2,
          TVector<double> *param_3)

{
  double *pdVar1;
  undefined1 uVar2;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_10 = (param_1->ViewLocation).field0_0x0._s_0.Z;
  local_20 = (param_1->ViewLocation).field0_0x0._s_0.X;
  dStack_18 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  local_30 = (param_1->ViewMatrices).ViewMatrix.M[1][2];
  local_38 = (param_1->ViewMatrices).ViewMatrix.M[0][2];
  pdVar1 = (param_1->ViewMatrices).ProjectionMatrix.M[3] + 3;
  local_28 = (param_1->ViewMatrices).ViewMatrix.M[2][2];
  uVar2 = (**(code **)(this->_padding_ + 0x638))
                    (SUB84(local_28,0),&local_20,&local_38,
                     *pdVar1 <= __real_3ff0000000000000 && __real_3ff0000000000000 != *pdVar1,
                     param_2,param_3);
  return (bool)uVar2;
}

// GetViewDependentVisibility @ 1496aa910

bool __thiscall
UGizmoElementBase::GetViewDependentVisibility
          (UGizmoElementBase *this,UGizmoViewContext *param_1,TTransform<double> *param_2,
          TVector<double> *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  undefined1 local_38 [32];
  
  uVar1 = (**(code **)(*(longlong *)&param_1->field_0x28 + 0x40))(&param_1->field_0x28);
  local_50 = *(undefined4 *)&(param_1->ViewLocation).field0_0x0;
  uStack_4c = *(undefined4 *)((longlong)&(param_1->ViewLocation).field0_0x0 + 4);
  uStack_48 = *(undefined4 *)((longlong)&(param_1->ViewLocation).field0_0x0 + 8);
  uStack_44 = *(undefined4 *)((longlong)&(param_1->ViewLocation).field0_0x0 + 0xc);
  local_40 = (param_1->ViewLocation).field0_0x0._s_0.Z;
  puVar2 = (undefined4 *)
           (**(code **)(*(longlong *)&param_1->field_0x28 + 0x18))(&param_1->field_0x28,local_38);
  local_68 = *puVar2;
  uStack_64 = puVar2[1];
  uStack_60 = puVar2[2];
  uStack_5c = puVar2[3];
  local_58 = *(undefined8 *)(puVar2 + 4);
  (**(code **)(*(longlong *)&param_1->field_0x28 + 0x28))(&param_1->field_0x28,local_38);
  uVar1 = (**(code **)(this->_padding_ + 0x638))(this,&local_50,&local_68,uVar1,param_2,param_3);
  return (bool)uVar1;
}

// GetViewDepthOffset @ 1496aa9e0

float __thiscall UGizmoElementBase::GetViewDepthOffset(UGizmoElementBase *this)

{
  return this->ViewDepthOffset;
}

// GetVisibleState @ 1496ab080

bool __thiscall UGizmoElementBase::GetVisibleState(UGizmoElementBase *this)

{
  return (bool)(this->ElementState >> 1 & 1);
}

// HasHoverVertexColor @ 1496ab8f0

bool __thiscall UGizmoElementBase::HasHoverVertexColor(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).HoverVertexColor.bHasValue;
}

// HasInteractVertexColor @ 1496ab910

bool __thiscall UGizmoElementBase::HasInteractVertexColor(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).InteractVertexColor.bHasValue;
}

// HasSelectVertexColor @ 1496ab9e0

bool __thiscall UGizmoElementBase::HasSelectVertexColor(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).SelectVertexColor.bHasValue;
}

// HasSubdueVertexColor @ 1496aba00

bool __thiscall UGizmoElementBase::HasSubdueVertexColor(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).SubdueVertexColor.bHasValue;
}

// HasVertexColor @ 1496aba10

bool __thiscall UGizmoElementBase::HasVertexColor(UGizmoElementBase *this)

{
  return (this->MeshRenderAttributes).VertexColor.bHasValue;
}

// IsHittable @ 1496ae050

bool __thiscall
UGizmoElementBase::IsHittable
          (UGizmoElementBase *this,UGizmoViewContext *param_1,TTransform<double> *param_2,
          TVector<double> *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x2e8))();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(this->_padding_ + 0x650))(this,0), cVar2 != '\0')) {
    pcVar1 = *(code **)(this->_padding_ + 0x658);
    uVar3 = (**(code **)(*(longlong *)&param_1->field_0x28 + 0x40))();
    cVar2 = (*pcVar1)(this,uVar3);
    if ((cVar2 != '\0') &&
       ((cVar2 = (**(code **)(this->_padding_ + 0x2d8))(this), cVar2 == '\0' ||
        (cVar2 = (**(code **)(this->_padding_ + 0x640))(this,param_1,param_2,param_3), cVar2 != '\0'
        )))) {
      return true;
    }
  }
  return false;
}

// IsVisible @ 1496ae4f0

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
UGizmoElementBase::IsVisible
          (UGizmoElementBase *this,FSceneView *param_1,EGizmoElementInteractionState param_2,
          TTransform<double> *param_3,TVector<double> *param_4)

{
  double *pdVar1;
  char cVar2;
  
  cVar2 = (**(code **)(this->_padding_ + 0x2d8))();
  if ((((cVar2 != '\0') &&
       (cVar2 = (**(code **)(this->_padding_ + 0x650))(this,param_2), cVar2 != '\0')) &&
      (pdVar1 = (param_1->ViewMatrices).ProjectionMatrix.M[3] + 3,
      cVar2 = (**(code **)(this->_padding_ + 0x658))
                        (this,*pdVar1 <= __real_3ff0000000000000 &&
                              __real_3ff0000000000000 != *pdVar1), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x648))(this,param_1,param_3,param_4), cVar2 != '\0'))
  {
    return true;
  }
  return false;
}

// LineTrace @ 1496ae590

FInputRayHit * __thiscall
UGizmoElementBase::LineTrace
          (UGizmoElementBase *this,FInputRayHit *__return_storage_ptr__,UGizmoViewContext *param_1,
          FLineTraceTraversalState *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  (**(code **)(this->_padding_ + 0x2c8))();
  return __return_storage_ptr__;
}

// LineTrace @ 1496ae5e0

FInputRayHit * __thiscall
UGizmoElementBase::LineTrace
          (UGizmoElementBase *this,FInputRayHit *__return_storage_ptr__,UGizmoViewContext *param_1,
          FLineTraceTraversalState *param_2,TVector<double> *param_3,TVector<double> *param_4,
          FLineTraceOutput *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos\\GizmoElementBase.h"
             ,0x8e,L"Pure virtual not implemented (%s)");
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeRayHit @ 1496b3760

FInputRayHit * __thiscall
UGizmoElementBase::MakeRayHit
          (UGizmoElementBase *this,FInputRayHit *__return_storage_ptr__,double param_1,
          FLineTraceOutput *param_2)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  __return_storage_ptr__->bHit = true;
  (__return_storage_ptr__->HitObject).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->HitDepth = (double)(float)param_1;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->bHasHitNormal = false;
  __return_storage_ptr__->HitIdentifier = 0;
  __return_storage_ptr__->HitOwner = (void *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (__return_storage_ptr__->HitObject).WeakPtr = local_res8;
  local_res8 = (FWeakObjectPtr)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UGizmoElementBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(__return_storage_ptr__->HitObject).WeakPtr,(FObjectPtr)&local_res8);
  __return_storage_ptr__->HitOwner = this;
  __return_storage_ptr__->HitIdentifier = this->PartIdentifier;
  param_2->HitPriority = this->HitPriority;
  return __return_storage_ptr__;
}

// Render @ 1496b8720

void __thiscall
UGizmoElementBase::Render
          (UGizmoElementBase *this,IToolsContextRenderAPI *param_1,FRenderTraversalState *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos\\GizmoElementBase.h"
             ,0x88,L"Pure virtual not implemented (%s)");
  return;
}

// SetElementInteractionState @ 1496bd520

void __thiscall
UGizmoElementBase::SetElementInteractionState
          (UGizmoElementBase *this,EGizmoElementInteractionState param_1)

{
  this->ElementInteractionState = param_1;
  return;
}

// SetElementState @ 1496bd530

void __thiscall
UGizmoElementBase::SetElementState(UGizmoElementBase *this,EGizmoElementState param_1)

{
  this->ElementState = param_1;
  return;
}

// SetEnabled @ 1496bd540

void __thiscall UGizmoElementBase::SetEnabled(UGizmoElementBase *this,bool param_1)

{
  this->bEnabled = param_1;
  return;
}

// SetEnabledForDefaultState @ 1496bd550

void __thiscall UGizmoElementBase::SetEnabledForDefaultState(UGizmoElementBase *this,bool param_1)

{
  this->bEnabledForDefaultState = param_1;
  return;
}

// SetEnabledForHoveringState @ 1496bd560

void __thiscall UGizmoElementBase::SetEnabledForHoveringState(UGizmoElementBase *this,bool param_1)

{
  this->bEnabledForHoveringState = param_1;
  return;
}

// SetEnabledForInteractingState @ 1496bd570

void __thiscall
UGizmoElementBase::SetEnabledForInteractingState(UGizmoElementBase *this,bool param_1)

{
  this->bEnabledForInteractingState = param_1;
  return;
}

// SetEnabledForPerspectiveProjection @ 1496bd580

void __thiscall
UGizmoElementBase::SetEnabledForPerspectiveProjection(UGizmoElementBase *this,bool param_1)

{
  this->bEnabledForPerspectiveProjection = param_1;
  return;
}

// SetEnabledForSelectedState @ 1496bd590

void __thiscall UGizmoElementBase::SetEnabledForSelectedState(UGizmoElementBase *this,bool param_1)

{
  this->bEnabledForSelectedState = param_1;
  return;
}

// SetEnabledForSubduedState @ 1496bd5a0

void __thiscall UGizmoElementBase::SetEnabledForSubduedState(UGizmoElementBase *this,bool param_1)

{
  this->bEnabledForSubduedState = param_1;
  return;
}

// SetEnabledInOrthographicProjection @ 1496bd5b0

void __thiscall
UGizmoElementBase::SetEnabledInOrthographicProjection(UGizmoElementBase *this,bool param_1)

{
  this->bEnabledForOrthographicProjection = param_1;
  return;
}

// SetHitPriority @ 1496bd9f0

void __thiscall UGizmoElementBase::SetHitPriority(UGizmoElementBase *this,int param_1)

{
  this->HitPriority = param_1;
  return;
}

// SetHittableState @ 1496bda00

void __thiscall UGizmoElementBase::SetHittableState(UGizmoElementBase *this,bool param_1)

{
  EGizmoElementState EVar1;
  
  EVar1 = this->ElementState | Hittable;
  if (!param_1) {
    EVar1 = this->ElementState & ~Hittable;
  }
  this->ElementState = EVar1;
  return;
}

// SetHoverMaterial @ 1496bda80

void __thiscall
UGizmoElementBase::SetHoverMaterial
          (UGizmoElementBase *this,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_1,
          bool param_2)

{
  (this->MeshRenderAttributes).HoverMaterial.Value.WeakPtr = param_1.WeakPtr;
  (this->MeshRenderAttributes).HoverMaterial.bOverridesChildState = param_2;
  return;
}

// SetHoverVertexColor @ 1496bdb00

void __thiscall
UGizmoElementBase::SetHoverVertexColor(UGizmoElementBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->MeshRenderAttributes).HoverVertexColor.bHasValue = true;
  (this->MeshRenderAttributes).HoverVertexColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->MeshRenderAttributes).HoverVertexColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->MeshRenderAttributes).HoverVertexColor.Value.field0_0x0 + 8) =
       uVar2;
  return;
}

// SetInteractMaterial @ 1496bdb80

void __thiscall
UGizmoElementBase::SetInteractMaterial
          (UGizmoElementBase *this,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_1,
          bool param_2)

{
  (this->MeshRenderAttributes).InteractMaterial.Value.WeakPtr = param_1.WeakPtr;
  (this->MeshRenderAttributes).InteractMaterial.bOverridesChildState = param_2;
  return;
}

// SetInteractVertexColor @ 1496bdbb0

void __thiscall
UGizmoElementBase::SetInteractVertexColor
          (UGizmoElementBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->MeshRenderAttributes).InteractVertexColor.bHasValue = true;
  (this->MeshRenderAttributes).InteractVertexColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->MeshRenderAttributes).InteractVertexColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->MeshRenderAttributes).InteractVertexColor.Value.field0_0x0 + 8)
       = uVar2;
  return;
}

// SetMaterial @ 1496bdc80

void __thiscall
UGizmoElementBase::SetMaterial
          (UGizmoElementBase *this,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_1,
          bool param_2)

{
  (this->MeshRenderAttributes).Material.Value.WeakPtr = param_1.WeakPtr;
  (this->MeshRenderAttributes).Material.bOverridesChildState = param_2;
  return;
}

// SetMinimumPixelHitDistanceThreshold @ 1496bdc90

void __thiscall
UGizmoElementBase::SetMinimumPixelHitDistanceThreshold(UGizmoElementBase *this,float param_1)

{
  this->MinimumPixelHitDistanceThreshold = param_1;
  return;
}

// SetPartIdentifier @ 1496bf1e0

void __thiscall UGizmoElementBase::SetPartIdentifier(UGizmoElementBase *this,uint param_1)

{
  this->PartIdentifier = param_1;
  return;
}

// SetPartIdentifier @ 1496bf1f0

void __thiscall
UGizmoElementBase::SetPartIdentifier(UGizmoElementBase *this,uint param_1,bool param_2,bool param_3)

{
  int iVar1;
  
  if ((!param_3) && (iVar1 = (**(code **)(this->_padding_ + 0x398))(), iVar1 != 0)) {
    return;
  }
  (**(code **)(this->_padding_ + 0x388))(this,param_1);
  return;
}

// SetPixelHitDistanceThreshold @ 1496bf950

void __thiscall
UGizmoElementBase::SetPixelHitDistanceThreshold(UGizmoElementBase *this,float param_1)

{
  this->PixelHitDistanceThreshold = param_1;
  return;
}

// SetSelectMaterial @ 1496bfb80

void __thiscall
UGizmoElementBase::SetSelectMaterial
          (UGizmoElementBase *this,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_1,
          bool param_2)

{
  (this->MeshRenderAttributes).SelectMaterial.Value.WeakPtr = param_1.WeakPtr;
  (this->MeshRenderAttributes).SelectMaterial.bOverridesChildState = param_2;
  return;
}

// SetSelectVertexColor @ 1496bfbb0

void __thiscall
UGizmoElementBase::SetSelectVertexColor(UGizmoElementBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->MeshRenderAttributes).SelectVertexColor.bHasValue = true;
  (this->MeshRenderAttributes).SelectVertexColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->MeshRenderAttributes).SelectVertexColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->MeshRenderAttributes).SelectVertexColor.Value.field0_0x0 + 8) =
       uVar2;
  return;
}

// SetSubdueMaterial @ 1496bfe80

void __thiscall
UGizmoElementBase::SetSubdueMaterial
          (UGizmoElementBase *this,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_1,
          bool param_2)

{
  (this->MeshRenderAttributes).SubdueMaterial.Value.WeakPtr = param_1.WeakPtr;
  (this->MeshRenderAttributes).SubdueMaterial.bOverridesChildState = param_2;
  return;
}

// SetSubdueVertexColor @ 1496bfeb0

void __thiscall
UGizmoElementBase::SetSubdueVertexColor(UGizmoElementBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->MeshRenderAttributes).SubdueVertexColor.bHasValue = true;
  (this->MeshRenderAttributes).SubdueVertexColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->MeshRenderAttributes).SubdueVertexColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->MeshRenderAttributes).SubdueVertexColor.Value.field0_0x0 + 8) =
       uVar2;
  return;
}

// SetVertexColor @ 1496c0b70

void __thiscall
UGizmoElementBase::SetVertexColor(UGizmoElementBase *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  (this->MeshRenderAttributes).VertexColor.bHasValue = true;
  (this->MeshRenderAttributes).VertexColor.bOverridesChildState = param_2;
  *(undefined8 *)&(this->MeshRenderAttributes).VertexColor.Value.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->MeshRenderAttributes).VertexColor.Value.field0_0x0 + 8) = uVar2;
  return;
}

// SetViewAlignAxialAngleTol @ 1496c0bd0

void __thiscall UGizmoElementBase::SetViewAlignAxialAngleTol(UGizmoElementBase *this,float param_1)

{
  float fVar1;
  
  this->ViewAlignAxialAngleTol = param_1;
  fVar1 = cosf(param_1);
  this->ViewAlignAxialMaxCosAngleTol = (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)
  ;
  return;
}

// SetViewAlignAxis @ 1496c0c10

void __thiscall
UGizmoElementBase::SetViewAlignAxis(UGizmoElementBase *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->ViewAlignAxis).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->ViewAlignAxis).field0_0x0._s_0.Y = dVar2;
  (this->ViewAlignAxis).field0_0x0._s_0.Z = dVar1;
  UE::Math::TVector<double>::Normalize(&this->ViewAlignAxis,__real_3e45798ee0000000);
  return;
}

// SetViewAlignNormal @ 1496c0c40

void __thiscall
UGizmoElementBase::SetViewAlignNormal(UGizmoElementBase *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->ViewAlignNormal).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->ViewAlignNormal).field0_0x0._s_0.Y = dVar2;
  (this->ViewAlignNormal).field0_0x0._s_0.Z = dVar1;
  UE::Math::TVector<double>::Normalize(&this->ViewAlignNormal,__real_3e45798ee0000000);
  return;
}

// SetViewAlignType @ 1496c0c70

void __thiscall
UGizmoElementBase::SetViewAlignType(UGizmoElementBase *this,EGizmoElementViewAlignType param_1)

{
  this->ViewAlignType = param_1;
  return;
}

// SetViewDependentAngleTol @ 1496c0c80

void __thiscall UGizmoElementBase::SetViewDependentAngleTol(UGizmoElementBase *this,float param_1)

{
  float fVar1;
  float _X;
  
  this->ViewDependentAngleTol = param_1;
  fVar1 = cosf(param_1);
  _X = param_1 + __real_3fc90fdb;
  this->ViewDependentAxialMaxCosAngleTol =
       (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar1 = cosf(_X);
  this->ViewDependentPlanarMinCosAngleTol =
       (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  return;
}

// SetViewDependentAxis @ 1496c0ce0

void __thiscall
UGizmoElementBase::SetViewDependentAxis(UGizmoElementBase *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->ViewDependentAxis).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->ViewDependentAxis).field0_0x0._s_0.Y = dVar2;
  (this->ViewDependentAxis).field0_0x0._s_0.Z = dVar1;
  UE::Math::TVector<double>::Normalize(&this->ViewDependentAxis,__real_3e45798ee0000000);
  return;
}

// SetViewDependentType @ 1496c0d10

void __thiscall
UGizmoElementBase::SetViewDependentType
          (UGizmoElementBase *this,EGizmoElementViewDependentType param_1)

{
  this->ViewDependentType = param_1;
  return;
}

// SetViewDepthOffset @ 1496c0d20

void __thiscall UGizmoElementBase::SetViewDepthOffset(UGizmoElementBase *this,float param_1)

{
  this->ViewDepthOffset = param_1;
  return;
}

// SetVisibleState @ 1496c0d50

void __thiscall UGizmoElementBase::SetVisibleState(UGizmoElementBase *this,bool param_1)

{
  EGizmoElementState EVar1;
  
  EVar1 = this->ElementState | Visible;
  if (!param_1) {
    EVar1 = this->ElementState & ~Visible;
  }
  this->ElementState = EVar1;
  return;
}

// StaticRegisterNativesUGizmoElementBase @ 1496c2900

void __cdecl UGizmoElementBase::StaticRegisterNativesUGizmoElementBase(void)

{
  return;
}

// UpdateLineTraceState @ 1496c4370

bool __thiscall
UGizmoElementBase::UpdateLineTraceState
          (UGizmoElementBase *this,UGizmoViewContext *param_1,TVector<double> *param_2,
          FLineTraceTraversalState *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x6a0))();
  return (bool)uVar1;
}

// UpdateLineTraceState @ 1496c43a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UGizmoElementBase::UpdateLineTraceState
          (UGizmoElementBase *this,UGizmoViewContext *param_1,TVector<double> *param_2,
          FLineTraceTraversalState *param_3,bool *param_4,TQuat<double> *param_5)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_1d8 [32];
  FLineTraceTraversalState *local_1b8;
  FLineTraceTraversalState *local_1b0;
  TVector<double> *local_1a8;
  TQuat<double> *local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (param_1 == (UGizmoViewContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementBase.cpp"
                       ,0x1c6,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  param_5->X = UE::Math::TQuat<double>::Identity.X;
  param_5->Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  param_5->Z = UE::Math::TQuat<double>::Identity.Z;
  param_5->W = dVar2;
  *param_4 = false;
  cVar5 = (**(code **)(this->_padding_ + 0x630))(this,param_1,param_3,param_2);
  if (cVar5 == '\0') {
    bVar3 = false;
  }
  else {
    local_198 = (**(code **)(*(longlong *)&param_1->field_0x28 + 0x40))(&param_1->field_0x28);
    local_178 = (param_1->ViewLocation).field0_0x0._s_0.X;
    dStack_170 = (param_1->ViewLocation).field0_0x0._s_0.Y;
    local_168 = (param_1->ViewLocation).field0_0x0._s_0.Z;
    puVar6 = (undefined8 *)
             (**(code **)(*(longlong *)&param_1->field_0x28 + 0x18))(&param_1->field_0x28,local_148)
    ;
    local_190 = *puVar6;
    uStack_188 = puVar6[1];
    local_180 = puVar6[2];
    puVar6 = (undefined8 *)
             (**(code **)(*(longlong *)&param_1->field_0x28 + 0x28))(&param_1->field_0x28,local_130)
    ;
    uVar4 = local_198;
    local_1a0 = param_5;
    local_160 = *puVar6;
    uStack_158 = puVar6[1];
    local_1b8 = (FLineTraceTraversalState *)CONCAT71(local_1b8._1_7_,local_198);
    local_150 = puVar6[2];
    local_1b0 = param_3;
    local_1a8 = param_2;
    bVar3 = (bool)(**(code **)(this->_padding_ + 0x660))(this,&local_178,&local_190,&local_160);
    *param_4 = bVar3;
    local_b8.Rotation.XY.m128d_f64[0] = param_5->X;
    local_b8.Rotation.XY.m128d_f64[1] = param_5->Y;
    local_b8.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
    local_b8.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
    local_b8.Rotation.ZW.m128d_f64[0] = param_5->Z;
    local_b8.Rotation.ZW.m128d_f64[1] = param_5->W;
    local_b8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_b8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_b8.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
    local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_b8.Translation.ZW.m128d_f64[1] = 0.0;
    local_b8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_b8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_118.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_118.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_118.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_118,&local_b8,&param_3->LocalToWorldTransform);
    (param_3->LocalToWorldTransform).Rotation.XY.m128d_f64[0] = local_118.Rotation.XY.m128d_f64[0];
    (param_3->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = local_118.Rotation.XY.m128d_f64[1];
    (param_3->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = local_118.Rotation.ZW.m128d_f64[0];
    (param_3->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = local_118.Rotation.ZW.m128d_f64[1];
    (param_3->LocalToWorldTransform).Translation.XY.m128d_f64[0] =
         local_118.Translation.XY.m128d_f64[0];
    (param_3->LocalToWorldTransform).Translation.XY.m128d_f64[1] =
         local_118.Translation.XY.m128d_f64[1];
    (param_3->LocalToWorldTransform).Translation.ZW.m128d_f64[0] =
         local_118.Translation.ZW.m128d_f64[0];
    (param_3->LocalToWorldTransform).Translation.ZW.m128d_f64[1] =
         local_118.Translation.ZW.m128d_f64[1];
    (param_3->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] = local_118.Scale3D.XY.m128d_f64[0];
    (param_3->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = local_118.Scale3D.XY.m128d_f64[1];
    (param_3->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = local_118.Scale3D.ZW.m128d_f64[0];
    (param_3->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = local_118.Scale3D.ZW.m128d_f64[1];
    if (__real_322bcc77 <
        (float)((uint)this->ViewDepthOffset & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_1b8 = param_3;
      (**(code **)(this->_padding_ + 0x680))(this,&local_178,&local_190,uVar4);
    }
    bVar3 = true;
  }
  return bVar3;
}

// UpdatePartHittableState @ 1496c4c80

bool __thiscall
UGizmoElementBase::UpdatePartHittableState
          (UGizmoElementBase *this,bool param_1,uint param_2,bool param_3)

{
  if (param_2 != this->PartIdentifier) {
    return false;
  }
  (**(code **)(this->_padding_ + 0x2e0))();
  return true;
}

// UpdatePartHittableState @ 1496c4cb0

bool __thiscall
UGizmoElementBase::UpdatePartHittableState(UGizmoElementBase *this,bool param_1,uint param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496c4cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x3f0))();
  return (bool)uVar1;
}

// UpdatePartInteractionState @ 1496c4da0

bool __thiscall
UGizmoElementBase::UpdatePartInteractionState
          (UGizmoElementBase *this,EGizmoElementInteractionState param_1,uint param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496c4da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x408))();
  return (bool)uVar1;
}

// UpdatePartInteractionState @ 1496c4dc0

bool __thiscall
UGizmoElementBase::UpdatePartInteractionState
          (UGizmoElementBase *this,EGizmoElementInteractionState param_1,uint param_2,bool param_3)

{
  if (param_2 != this->PartIdentifier) {
    return false;
  }
  this->ElementInteractionState = param_1;
  return true;
}

// UpdatePartVisibleState @ 1496c4ea0

bool __thiscall
UGizmoElementBase::UpdatePartVisibleState
          (UGizmoElementBase *this,bool param_1,uint param_2,bool param_3)

{
  if (param_2 != this->PartIdentifier) {
    return false;
  }
  (**(code **)(this->_padding_ + 0x2d0))();
  return true;
}

// UpdatePartVisibleState @ 1496c4ed0

bool __thiscall
UGizmoElementBase::UpdatePartVisibleState(UGizmoElementBase *this,bool param_1,uint param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496c4ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x3d8))();
  return (bool)uVar1;
}

// UpdateRenderState @ 1496c50f0

bool __thiscall
UGizmoElementBase::UpdateRenderState
          (UGizmoElementBase *this,IToolsContextRenderAPI *param_1,TVector<double> *param_2,
          FRenderTraversalState *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x690))();
  return (bool)uVar1;
}

// UpdateRenderState @ 1496c5120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UGizmoElementBase::UpdateRenderState
          (UGizmoElementBase *this,IToolsContextRenderAPI *param_1,TVector<double> *param_2,
          FRenderTraversalState *param_3,bool *param_4,TQuat<double> *param_5)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [32];
  FRenderTraversalState *local_188;
  FRenderTraversalState *local_180;
  TVector<double> *local_178;
  TQuat<double> *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (param_1 == (IToolsContextRenderAPI *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderAPI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementBase.cpp"
                       ,0x19b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  lVar7 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if (lVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("View",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementBase.cpp"
                       ,0x19d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  param_5->X = UE::Math::TQuat<double>::Identity.X;
  param_5->Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  param_5->Z = UE::Math::TQuat<double>::Identity.Z;
  param_5->W = dVar2;
  *param_4 = false;
  if (param_3->InteractionState == None) {
    param_3->InteractionState = this->ElementInteractionState;
  }
  FGizmoElementMeshRenderStateAttributes::Update
            (&param_3->MeshRenderState,&this->MeshRenderAttributes);
  local_188 = (FRenderTraversalState *)param_2;
  cVar5 = (**(code **)(this->_padding_ + 0x628))(this,lVar7,param_3->InteractionState,param_3);
  if (cVar5 == '\0') {
    bVar3 = false;
  }
  else {
    local_170 = param_5;
    local_138 = *(undefined8 *)(lVar7 + 0xc30);
    uStack_130 = *(undefined8 *)(lVar7 + 0xc38);
    local_128 = *(undefined8 *)(lVar7 + 0xc40);
    bVar3 = *(double *)(lVar7 + 0x428) <= __real_3ff0000000000000 &&
            __real_3ff0000000000000 != *(double *)(lVar7 + 0x428);
    local_188 = (FRenderTraversalState *)CONCAT71(local_188._1_7_,bVar3);
    local_168 = *(undefined8 *)(lVar7 + 0x540);
    local_160 = *(undefined8 *)(lVar7 + 0x560);
    local_158 = *(undefined8 *)(lVar7 + 0x580);
    local_150 = *(undefined8 *)(lVar7 + 0x538);
    local_148 = *(undefined8 *)(lVar7 + 0x558);
    local_140 = *(undefined8 *)(lVar7 + 0x578);
    local_180 = param_3;
    local_178 = param_2;
    bVar6 = (bool)(**(code **)(this->_padding_ + 0x660))(this,&local_138,&local_168,&local_150);
    *param_4 = bVar6;
    local_b8.Rotation.XY.m128d_f64[0] = param_5->X;
    local_b8.Rotation.XY.m128d_f64[1] = param_5->Y;
    local_b8.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
    local_b8.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
    local_b8.Rotation.ZW.m128d_f64[0] = param_5->Z;
    local_b8.Rotation.ZW.m128d_f64[1] = param_5->W;
    local_b8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_b8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_b8.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
    local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_b8.Translation.ZW.m128d_f64[1] = 0.0;
    local_b8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_b8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_118.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_118.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_118.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_118,&local_b8,&param_3->LocalToWorldTransform);
    (param_3->LocalToWorldTransform).Rotation.XY.m128d_f64[0] = local_118.Rotation.XY.m128d_f64[0];
    (param_3->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = local_118.Rotation.XY.m128d_f64[1];
    (param_3->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = local_118.Rotation.ZW.m128d_f64[0];
    (param_3->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = local_118.Rotation.ZW.m128d_f64[1];
    (param_3->LocalToWorldTransform).Translation.XY.m128d_f64[0] =
         local_118.Translation.XY.m128d_f64[0];
    (param_3->LocalToWorldTransform).Translation.XY.m128d_f64[1] =
         local_118.Translation.XY.m128d_f64[1];
    (param_3->LocalToWorldTransform).Translation.ZW.m128d_f64[0] =
         local_118.Translation.ZW.m128d_f64[0];
    (param_3->LocalToWorldTransform).Translation.ZW.m128d_f64[1] =
         local_118.Translation.ZW.m128d_f64[1];
    (param_3->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] = local_118.Scale3D.XY.m128d_f64[0];
    (param_3->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = local_118.Scale3D.XY.m128d_f64[1];
    (param_3->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = local_118.Scale3D.ZW.m128d_f64[0];
    (param_3->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = local_118.Scale3D.ZW.m128d_f64[1];
    if (__real_322bcc77 <
        (float)((uint)this->ViewDepthOffset & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_188 = param_3;
      (**(code **)(this->_padding_ + 0x680))(this,&local_138,&local_168,bVar3);
    }
    bVar3 = true;
  }
  return bVar3;
}

// VerifyUniformScale @ 1496c5bb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UGizmoElementBase::VerifyUniformScale(UGizmoElementBase *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar1 = dVar2 - (param_1->field0_0x0)._s_0.Y;
  if (((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000) &&
     (dVar2 = dVar2 - (param_1->field0_0x0)._s_0.Z,
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return true;
  }
  if (bNonUniformScaleWarning) {
    if (2 < (byte)LogGizmoElementBase._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGizmoElementBase);
    }
    bNonUniformScaleWarning = false;
  }
  return false;
}

