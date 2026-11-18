// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// StaticClass @ 1496701b0

UClass * __cdecl UGizmoElementSphere::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementSphere.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementSphere",
               &Z_Registration_Info_UClass_UGizmoElementSphere.InnerSingleton,
               StaticRegisterNativesUGizmoElementSphere,0x170,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementSphere>,
               InternalVTableHelperCtorCaller<UGizmoElementSphere>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementSphere.InnerSingleton;
}

// UGizmoElementSphere @ 149685290

UGizmoElementSphere * __thiscall
UGizmoElementSphere::UGizmoElementSphere(UGizmoElementSphere *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementSphere__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Radius = 0.5;
  this->NumSides = 0x20;
  return this;
}

// UGizmoElementSphere @ 1496852f0

UGizmoElementSphere * __thiscall
UGizmoElementSphere::UGizmoElementSphere(UGizmoElementSphere *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementSphere__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Radius = 0.5;
  this->NumSides = 0x20;
  return this;
}

// ~UGizmoElementSphere @ 149689c80

void __thiscall UGizmoElementSphere::~UGizmoElementSphere(UGizmoElementSphere *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetCenter @ 1496a0550

TVector<double> * __thiscall
UGizmoElementSphere::GetCenter(UGizmoElementSphere *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Center).field0_0x0._s_0.Y;
  dVar1 = (this->Center).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetNumSides @ 1496a3900

int __thiscall UGizmoElementSphere::GetNumSides(UGizmoElementSphere *this)

{
  return this->NumSides;
}

// GetPrivateStaticClass @ 1496a5710

UClass * __cdecl UGizmoElementSphere::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementSphere.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementSphere",
               &Z_Registration_Info_UClass_UGizmoElementSphere.InnerSingleton,
               StaticRegisterNativesUGizmoElementSphere,0x170,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementSphere>,
               InternalVTableHelperCtorCaller<UGizmoElementSphere>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementSphere.InnerSingleton;
}

// GetRadius @ 1496a7ab0

float __thiscall UGizmoElementSphere::GetRadius(UGizmoElementSphere *this)

{
  return this->Radius;
}

// LineTrace @ 1496b0d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputRayHit * __thiscall
UGizmoElementSphere::LineTrace
          (UGizmoElementSphere *this,FInputRayHit *__return_storage_ptr__,UGizmoViewContext *param_1
          ,FLineTraceTraversalState *param_2,TVector<double> *param_3,TVector<double> *param_4,
          FLineTraceOutput *param_5)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_188 [32];
  double local_168;
  double dStack_160;
  double local_158;
  TVector<double>_u_0 local_150 [2];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_118 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  dStack_110 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  local_108 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_100 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  local_f8 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  dStack_f0 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  local_d8 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_d0 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  local_e8 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  dStack_e0 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  local_b8 = *(undefined4 *)&param_2->PixelToWorldScale;
  uStack_b4 = *(undefined4 *)((longlong)&param_2->PixelToWorldScale + 4);
  uStack_b0._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_b0._1_1_ = param_2->HitSortType;
  uStack_b0._2_2_ = *(undefined2 *)&param_2->field_0x6a;
  uStack_ac = *(undefined4 *)&param_2->field_0x6c;
  local_c8 = *(undefined4 *)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
  uStack_c4 = *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
  uStack_c0 = *(undefined4 *)((param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 1);
  uStack_bc = *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 0xc)
  ;
  cVar7 = (**(code **)(this->_padding_ + 0x6a8))(local_b8,param_1,&this->Center,&local_118);
  dVar4 = local_e8;
  dVar10 = dStack_f0;
  dVar9 = local_f8;
  if (cVar7 != '\0') {
    local_158 = (param_3->field0_0x0)._s_0.Z;
    dVar3 = (double)this->Radius * local_d8;
    fVar1 = *(float *)&this->_padding_;
    dVar6 = (double)CONCAT44(uStack_b4,local_b8);
    local_168 = (param_3->field0_0x0)._s_0.X;
    dStack_160 = (param_3->field0_0x0)._s_0.Y;
    local_150[0]._16_8_ = (param_4->field0_0x0)._s_0.Z;
    local_150[0]._0_8_ = (param_4->field0_0x0)._s_0.X;
    local_150[0]._8_8_ = (param_4->field0_0x0)._s_0.Y;
    UE::Math::TVector<double>::Normalize
              ((TVector<double> *)&local_150[0]._s_0,__real_3e45798ee0000000);
    dVar8 = dVar9 - local_168;
    dVar12 = dVar4 - local_158;
    dVar11 = dVar10 - dStack_160;
    dVar5 = dVar11 * (double)local_150[0]._8_8_ + dVar8 * (double)local_150[0]._0_8_ +
            dVar12 * (double)local_150[0]._16_8_;
    if (0.0 <= dVar5) {
      dVar9 = dVar9 - ((double)local_150[0]._0_8_ * dVar5 + local_168);
      dVar10 = dVar10 - ((double)local_150[0]._8_8_ * dVar5 + dStack_160);
      dVar4 = dVar4 - ((double)local_150[0]._16_8_ * dVar5 + local_158);
      dVar9 = dVar10 * dVar10 + dVar9 * dVar9 + dVar4 * dVar4;
    }
    else {
      dVar9 = dVar8 * dVar8 + dVar11 * dVar11 + dVar12 * dVar12;
    }
    if (SQRT(dVar9) < (double)fVar1 * dVar6 + dVar3) {
      pcVar2 = *(code **)(this->_padding_ + 0x6b0);
      (*pcVar2)(this,__return_storage_ptr__,pcVar2,param_5);
      return __return_storage_ptr__;
    }
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Render @ 1496bab00

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
UGizmoElementSphere::Render
          (UGizmoElementSphere *this,IToolsContextRenderAPI *param_1,FRenderTraversalState *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FWeakObjectPtr FVar13;
  double *pdVar14;
  char cVar15;
  double *pdVar16;
  UMaterialInterface *pUVar17;
  FPrimitiveDrawInterface *pFVar18;
  FMaterialRenderProxy *pFVar19;
  longlong lVar20;
  FRenderTraversalState *pFVar21;
  double dVar22;
  undefined1 auStackY_258 [32];
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  TQuat<double> local_1d8;
  TRotator<double> local_1b8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  EGizmoElementInteractionState EStack_130;
  FGizmoElementMeshRenderStateAttributes FStack_12c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_258;
  lVar20 = 2;
  pdVar14 = &local_198;
  do {
    pFVar21 = param_2;
    pdVar16 = pdVar14;
    dVar22 = (pFVar21->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar10 = (pFVar21->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar11 = (pFVar21->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_2 = (FRenderTraversalState *)
              &(pFVar21->MeshRenderState).HoverMaterial.bOverridesChildState;
    *pdVar16 = (pFVar21->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    pdVar16[1] = dVar22;
    dVar22 = (pFVar21->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar12 = (pFVar21->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    pdVar16[2] = dVar10;
    pdVar16[3] = dVar11;
    dVar10 = (pFVar21->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar11 = (pFVar21->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    pdVar16[4] = dVar22;
    pdVar16[5] = dVar12;
    dVar22 = (pFVar21->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar12 = (pFVar21->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    pdVar16[6] = dVar10;
    pdVar16[7] = dVar11;
    dVar10 = (pFVar21->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar11 = (pFVar21->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    pdVar16[8] = dVar22;
    pdVar16[9] = dVar12;
    dVar22 = pFVar21->PixelToWorldScale;
    dVar12 = *(double *)&pFVar21->InteractionState;
    pdVar16[10] = dVar10;
    pdVar16[0xb] = dVar11;
    dVar10 = *(double *)&(pFVar21->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar13 = (pFVar21->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pdVar16[0xc] = dVar22;
    pdVar16[0xd] = dVar12;
    pdVar16[0xe] = dVar10;
    *(FWeakObjectPtr *)(pdVar16 + 0xf) = FVar13;
    lVar20 = lVar20 + -1;
    pdVar14 = pdVar16 + 0x10;
  } while (lVar20 != 0);
  dVar22 = *(double *)&(pFVar21->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar13 = (pFVar21->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar10 = *(double *)&(pFVar21->MeshRenderState).SelectMaterial.bOverridesChildState;
  pdVar16[0x10] = *(double *)param_2;
  pdVar16[0x11] = dVar22;
  dVar22 = *(double *)&(pFVar21->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar11 = *(double *)&(pFVar21->MeshRenderState).VertexColor.Value.field0_0x0;
  *(FWeakObjectPtr *)(pdVar16 + 0x12) = FVar13;
  pdVar16[0x13] = dVar10;
  dVar10 = *(double *)((longlong)&(pFVar21->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar12 = *(double *)&(pFVar21->MeshRenderState).VertexColor.bHasValue;
  pdVar16[0x14] = dVar22;
  pdVar16[0x15] = dVar11;
  dVar22 = *(double *)((longlong)&(pFVar21->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar11 = *(double *)
            ((longlong)&(pFVar21->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
  pdVar16[0x16] = dVar10;
  pdVar16[0x17] = dVar12;
  fVar2 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.R;
  fVar3 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.G;
  fVar4 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.B;
  fVar5 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.A;
  pdVar16[0x18] = dVar22;
  pdVar16[0x19] = dVar11;
  uVar6._0_1_ = (pFVar21->MeshRenderState).InteractVertexColor.bHasValue;
  uVar6._1_1_ = (pFVar21->MeshRenderState).InteractVertexColor.bOverridesChildState;
  uVar6._2_2_ = *(undefined2 *)&(pFVar21->MeshRenderState).InteractVertexColor.field_0x12;
  fVar7 = (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
  fVar8 = (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
  fVar9 = (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
  *(float *)(pdVar16 + 0x1a) = fVar2;
  *(float *)((longlong)pdVar16 + 0xd4) = fVar3;
  *(float *)(pdVar16 + 0x1b) = fVar4;
  *(float *)((longlong)pdVar16 + 0xdc) = fVar5;
  *(undefined4 *)(pdVar16 + 0x1c) = uVar6;
  *(float *)((longlong)pdVar16 + 0xe4) = fVar7;
  *(float *)(pdVar16 + 0x1d) = fVar8;
  *(float *)((longlong)pdVar16 + 0xec) = fVar9;
  cVar15 = (**(code **)(this->_padding_ + 0x698))(uVar6,param_1,&this->Center,&local_198);
  if ((cVar15 != '\0') &&
     (pUVar17 = FGizmoElementMeshRenderStateAttributes::GetMaterialInternal(&FStack_12c,EStack_130),
     pUVar17 != (UMaterialInterface *)0x0)) {
    pFVar18 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
    pFVar19 = (FMaterialRenderProxy *)(**(code **)(pUVar17->_padding_ + 0x310))(pUVar17);
    iVar1 = this->NumSides;
    dVar22 = (double)this->Radius;
    local_208._s_0.X = dVar22 * local_158;
    local_208._s_0.Y = dVar22 * dStack_150;
    local_208._s_0.Z = dVar22 * local_148;
    local_1d8.Z = local_188;
    local_1d8.W = dStack_180;
    local_1d8.X = local_198;
    local_1d8.Y = dStack_190;
    UE::Math::TQuat<double>::Rotator(&local_1d8,&local_1b8);
    local_1f0._s_0.X = local_178;
    local_1f0._s_0.Y = dStack_170;
    local_1f0._s_0.Z = local_168;
    DrawSphere(pFVar18,(TVector<double> *)&local_1f0._s_0,&local_1b8,
               (TVector<double> *)&local_208._s_0,iVar1,iVar1,pFVar19,'\x01',false);
  }
  return;
}

// SetCenter @ 1496bd3a0

void __thiscall UGizmoElementSphere::SetCenter(UGizmoElementSphere *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar1;
  (this->Center).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetNumSides @ 1496bdce0

void __thiscall UGizmoElementSphere::SetNumSides(UGizmoElementSphere *this,int param_1)

{
  this->NumSides = param_1;
  return;
}

// SetRadius @ 1496bf990

void __thiscall UGizmoElementSphere::SetRadius(UGizmoElementSphere *this,float param_1)

{
  this->Radius = param_1;
  return;
}

// StaticRegisterNativesUGizmoElementSphere @ 1496c29d0

void __cdecl UGizmoElementSphere::StaticRegisterNativesUGizmoElementSphere(void)

{
  return;
}

