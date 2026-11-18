// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 26

// StaticClass @ 14966e2e0

UClass * __cdecl UGizmoElementRectangle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementRectangle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementRectangle",
               &Z_Registration_Info_UClass_UGizmoElementRectangle.InnerSingleton,
               StaticRegisterNativesUGizmoElementRectangle,0x228,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementRectangle>,
               InternalVTableHelperCtorCaller<UGizmoElementRectangle>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementRectangle.InnerSingleton;
}

// UGizmoElementRectangle @ 149685150

UGizmoElementRectangle * __thiscall
UGizmoElementRectangle::UGizmoElementRectangle(UGizmoElementRectangle *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementRectangle__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpDirection).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  this->Width = 1.0;
  this->Height = 1.0;
  (this->UpDirection).field0_0x0._s_0.X = 0.0;
  (this->UpDirection).field0_0x0._s_0.Y = 0.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  this->bDrawMesh = true;
  this->bDrawLine = false;
  this->bHitMesh = true;
  this->bHitLine = false;
  return this;
}

// UGizmoElementRectangle @ 1496851f0

UGizmoElementRectangle * __thiscall
UGizmoElementRectangle::UGizmoElementRectangle
          (UGizmoElementRectangle *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementRectangle__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpDirection).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  this->Width = 1.0;
  this->Height = 1.0;
  (this->UpDirection).field0_0x0._s_0.X = 0.0;
  (this->UpDirection).field0_0x0._s_0.Y = 0.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  this->bDrawMesh = true;
  this->bDrawLine = false;
  this->bHitMesh = true;
  this->bHitLine = false;
  return this;
}

// ~UGizmoElementRectangle @ 149689c60

void __thiscall UGizmoElementRectangle::~UGizmoElementRectangle(UGizmoElementRectangle *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetCenter @ 1496a0520

TVector<double> * __thiscall
UGizmoElementRectangle::GetCenter
          (UGizmoElementRectangle *this,TVector<double> *__return_storage_ptr__)

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

// GetDrawLine @ 1496a0ed0

bool __thiscall UGizmoElementRectangle::GetDrawLine(UGizmoElementRectangle *this)

{
  return this->bDrawLine;
}

// GetDrawMesh @ 1496a0f00

bool __thiscall UGizmoElementRectangle::GetDrawMesh(UGizmoElementRectangle *this)

{
  return this->bDrawMesh;
}

// GetHeight @ 1496a2d80

float __thiscall UGizmoElementRectangle::GetHeight(UGizmoElementRectangle *this)

{
  return this->Height;
}

// GetHitLine @ 1496a2da0

bool __thiscall UGizmoElementRectangle::GetHitLine(UGizmoElementRectangle *this)

{
  return this->bHitLine;
}

// GetHitMesh @ 1496a2dc0

bool __thiscall UGizmoElementRectangle::GetHitMesh(UGizmoElementRectangle *this)

{
  return this->bHitMesh;
}

// GetPrivateStaticClass @ 1496a5650

UClass * __cdecl UGizmoElementRectangle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementRectangle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementRectangle",
               &Z_Registration_Info_UClass_UGizmoElementRectangle.InnerSingleton,
               StaticRegisterNativesUGizmoElementRectangle,0x228,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementRectangle>,
               InternalVTableHelperCtorCaller<UGizmoElementRectangle>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementRectangle.InnerSingleton;
}

// GetSideDirection @ 1496a7f40

TVector<double> * __thiscall
UGizmoElementRectangle::GetSideDirection
          (UGizmoElementRectangle *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SideDirection).field0_0x0._s_0.Y;
  dVar1 = (this->SideDirection).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SideDirection).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetUpDirection @ 1496a9380

TVector<double> * __thiscall
UGizmoElementRectangle::GetUpDirection
          (UGizmoElementRectangle *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->UpDirection).field0_0x0._s_0.Y;
  dVar1 = (this->UpDirection).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->UpDirection).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetWidth @ 1496ab0a0

float __thiscall UGizmoElementRectangle::GetWidth(UGizmoElementRectangle *this)

{
  return this->Width;
}

// LineTrace @ 1496b0480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FInputRayHit * __thiscall
UGizmoElementRectangle::LineTrace
          (UGizmoElementRectangle *this,FInputRayHit *__return_storage_ptr__,
          UGizmoViewContext *param_1,FLineTraceTraversalState *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FLineTraceOutput *param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  double dVar15;
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
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStack_228 [32];
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [32];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  undefined8 local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  void *local_158;
  FWeakObjectPtr FStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_148 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  dStack_140 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  local_138 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_130 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  local_128 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  dStack_120 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  local_108 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_100 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  local_118 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  dStack_110 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  local_e8 = *(undefined4 *)&param_2->PixelToWorldScale;
  uStack_e4 = *(undefined4 *)((longlong)&param_2->PixelToWorldScale + 4);
  uStack_e0._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_e0._1_1_ = param_2->HitSortType;
  uStack_e0._2_2_ = *(undefined2 *)&param_2->field_0x6a;
  uStack_dc = *(undefined4 *)&param_2->field_0x6c;
  local_f8 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_f0 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
  cVar10 = (**(code **)(this->_padding_ + 0x6a8))(local_e8,param_1,&this->Center,&local_148);
  if (cVar10 == '\0') {
LAB_1496b0cea:
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  auVar9._8_8_ = dStack_130;
  auVar9._0_8_ = local_138;
  auVar8._8_8_ = dStack_140;
  auVar8._0_8_ = local_148;
  auVar20 = *(undefined1 (*) [16])&(this->UpDirection).field0_0x0;
  dVar37 = auVar20._8_8_;
  dVar1 = (this->UpDirection).field0_0x0._s_0.Z;
  auVar45._0_8_ = dVar37 * local_148 - auVar20._0_8_ * dStack_140;
  auVar45._8_8_ = dVar1 * dStack_140 - dVar37 * local_138;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar1;
  auVar16 = blendpd(auVar20,auVar16,2);
  auVar42 = blendpd(auVar8,auVar9,2);
  dVar40 = auVar42._0_8_;
  dVar43 = auVar42._8_8_;
  auVar17._0_8_ = auVar16._0_8_ * local_138 - dVar1 * dVar40;
  auVar17._8_8_ = auVar16._8_8_ * dStack_130 - dVar43 * 0.0;
  auVar16 = blendpd(auVar45,auVar17,2);
  dVar39 = auVar45._8_8_ + auVar45._8_8_;
  dVar15 = auVar17._0_8_ + auVar17._0_8_;
  uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
  auVar46._0_8_ = auVar16._0_8_ + auVar16._0_8_;
  auVar46._8_8_ = auVar16._8_8_ + auVar16._8_8_;
  auVar28._8_4_ = SUB84(dVar15,0);
  auVar28._0_8_ = dVar39;
  auVar28._12_4_ = uVar14;
  auVar18._8_4_ = SUB84(dVar15,0);
  auVar18._0_8_ = dVar39;
  auVar18._12_4_ = uVar14;
  auVar16 = blendpd(auVar18,auVar46,2);
  auVar29._0_8_ = auVar28._8_8_ * local_148 - dVar39 * dStack_140;
  auVar29._8_8_ = auVar46._0_8_ * dStack_140 - dVar15 * local_138;
  auVar19._0_8_ = auVar16._0_8_ * local_138 - auVar46._0_8_ * dVar40;
  auVar19._8_8_ = auVar16._8_8_ * dStack_130 - auVar46._8_8_ * dVar43;
  auVar42 = blendpd(auVar29,auVar19,2);
  auVar16 = *(undefined1 (*) [16])&(this->SideDirection).field0_0x0;
  dVar38 = auVar16._8_8_;
  dVar6 = dVar39 * dStack_130 + auVar20._0_8_ + auVar29._8_8_;
  dVar7 = dVar15 * dStack_130 + dVar37 + auVar19._0_8_;
  dVar39 = (this->SideDirection).field0_0x0._s_0.Z;
  dVar44 = auVar46._0_8_ * dStack_130 + dVar1 + auVar42._0_8_;
  auVar48._0_8_ = dVar38 * local_148 - auVar16._0_8_ * dStack_140;
  auVar48._8_8_ = dVar39 * dStack_140 - dVar38 * local_138;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = dVar39;
  auVar20 = blendpd(auVar16,auVar42,2);
  auVar21._0_8_ = auVar20._0_8_ * local_138 - dVar39 * dVar40;
  auVar21._8_8_ = auVar20._8_8_ * dStack_130 - dVar43 * 0.0;
  dVar1 = auVar48._8_8_ + auVar48._8_8_;
  dVar15 = auVar21._0_8_ + auVar21._0_8_;
  uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
  auVar20 = blendpd(auVar48,auVar21,2);
  auVar49._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar49._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar30._8_4_ = SUB84(dVar15,0);
  auVar30._0_8_ = dVar1;
  auVar30._12_4_ = uVar14;
  auVar22._8_4_ = SUB84(dVar15,0);
  auVar22._0_8_ = dVar1;
  auVar22._12_4_ = uVar14;
  auVar20 = blendpd(auVar22,auVar49,2);
  auVar31._0_8_ = auVar30._8_8_ * local_148 - dVar1 * dStack_140;
  auVar31._8_8_ = auVar49._0_8_ * dStack_140 - dVar15 * local_138;
  auVar23._0_8_ = auVar20._0_8_ * local_138 - auVar49._0_8_ * dVar40;
  auVar23._8_8_ = auVar20._8_8_ * dStack_130 - auVar49._8_8_ * dVar43;
  auVar20 = blendpd(auVar31,auVar23,2);
  dVar4 = dVar1 * dStack_130 + auVar16._0_8_ + auVar31._8_8_;
  dVar5 = dVar15 * dStack_130 + dVar38 + auVar23._0_8_;
  dVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_f8;
  dVar38 = dStack_f0 * 0.0;
  dVar47 = auVar49._0_8_ * dStack_130 + dVar39 + auVar20._0_8_;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_1f0 = dVar47 * dVar7 - dVar44 * dVar5;
  local_208 = dVar44 * dVar4 - dVar47 * dVar6;
  local_200 = dVar6 * dVar5 - dVar7 * dVar4;
  local_1a0 = local_108;
  dStack_198 = dStack_100;
  dVar36 = local_108 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar39 = dStack_100 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auVar32._8_4_ = SUB84(dVar39,0);
  auVar32._0_8_ = dVar36;
  uVar14 = (undefined4)((ulonglong)dVar39 >> 0x20);
  auVar32._12_4_ = uVar14;
  auVar24._8_4_ = SUB84(dVar39,0);
  auVar24._0_8_ = dVar36;
  auVar24._12_4_ = uVar14;
  auVar2._8_4_ = SUB84(dVar38,0);
  auVar2._0_8_ = dVar37;
  auVar2._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  auVar20 = blendpd(auVar24,auVar2,2);
  auVar33._0_8_ = auVar32._8_8_ * local_148 - dVar36 * dStack_140;
  auVar33._8_8_ = dVar37 * dStack_140 - dVar39 * local_138;
  auVar25._0_8_ = auVar20._0_8_ * local_138 - dVar37 * dVar40;
  auVar25._8_8_ = auVar20._8_8_ * dStack_130 - dVar38 * dVar43;
  auVar20 = blendpd(auVar33,auVar25,2);
  dVar15 = auVar33._8_8_ + auVar33._8_8_;
  dVar1 = auVar25._0_8_ + auVar25._0_8_;
  uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_1d8._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  local_1d8._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar20._8_4_ = SUB84(dVar1,0);
  auVar20._0_8_ = dVar15;
  auVar20._12_4_ = uVar14;
  auVar34._8_4_ = SUB84(dVar1,0);
  auVar34._0_8_ = dVar15;
  auVar34._12_4_ = uVar14;
  auVar16 = blendpd(auVar20,local_1d8._0_16_,2);
  local_1e8._8_8_ = auVar20._8_8_;
  auVar35._0_8_ = auVar34._8_8_ * local_148 - dVar15 * dStack_140;
  auVar35._8_8_ = (double)local_1d8._0_8_ * dStack_140 - dVar1 * local_138;
  auVar26._0_8_ = auVar16._0_8_ * local_138 - (double)local_1d8._0_8_ * dVar40;
  auVar26._8_8_ = auVar16._8_8_ * dStack_130 - (double)local_1d8._8_8_ * dVar43;
  auVar20 = blendpd(auVar35,auVar26,2);
  dVar27 = (double)local_1e8._8_8_ * dStack_130 + dVar39 + auVar26._0_8_ + dStack_120;
  dVar40 = (double)local_1d8._8_8_ * dStack_130 + dVar38 + auVar20._8_8_ + dStack_110;
  dVar1 = (param_4->field0_0x0)._s_0.X;
  dVar39 = (param_4->field0_0x0)._s_0.Y;
  local_1a8 = (double)*(float *)&this->_padding_ * (double)CONCAT44(uStack_e4,local_e8);
  dVar41 = (double)this->Width * local_108 + local_1a8 + local_1a8;
  dVar43 = (double)this->Height * local_108 + local_1a8 + local_1a8;
  local_1f8 = ((dVar15 * dStack_130 + dVar36 + auVar35._8_8_ + local_128) -
              dVar43 * dVar6 * __real_3fe0000000000000) - dVar41 * dVar4 * __real_3fe0000000000000;
  dVar38 = (dVar27 - dVar43 * dVar7 * __real_3fe0000000000000) -
           dVar41 * dVar5 * __real_3fe0000000000000;
  local_1e8._8_4_ = SUB84(dVar27,0);
  local_1e8._0_8_ = dVar38;
  local_1e8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  dVar37 = (((double)local_1d8._0_8_ * dStack_130 + dVar37 + auVar20._0_8_ + local_118) -
           dVar43 * dVar44 * __real_3fe0000000000000) - dVar41 * dVar47 * __real_3fe0000000000000;
  local_1d8._8_4_ = SUB84(dVar40,0);
  local_1d8._0_8_ = dVar37;
  local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  dVar15 = (param_4->field0_0x0)._s_0.Z;
  local_1b8 = dVar39 * local_208 + dVar1 * local_1f0 + dVar15 * local_200;
  uStack_1b0 = auVar3._8_8_;
  uVar12 = SUB84(local_1b8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)local_1b8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar13,uVar12) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar13,uVar12) == __real_3e45798ee2308c3a) goto LAB_1496b0cea;
  if (this->bHitMesh == false) {
    if (this->bHitLine == false) goto LAB_1496b0cea;
    dVar27 = dVar38 * local_208 + local_1f0 * local_1f8 + dVar37 * local_200;
    dVar40 = (param_3->field0_0x0)._s_0.Z;
    dVar27 = ((local_1f0 * dVar27 - (param_3->field0_0x0)._s_0.X) * local_1f0 +
              (local_208 * dVar27 - (param_3->field0_0x0)._s_0.Y) * local_208 +
             (local_200 * dVar27 - dVar40) * local_200) / local_1b8;
    if (dVar27 < __real_3e45798ee2308c3a) goto LAB_1496b0cea;
    dVar1 = (dVar1 * dVar27 + (param_3->field0_0x0)._s_0.X) - local_1f8;
    dVar38 = (dVar39 * dVar27 + (param_3->field0_0x0)._s_0.Y) - dVar38;
    dVar37 = (dVar15 * dVar27 + dVar40) - dVar37;
    dVar39 = dVar7 * dVar38 + dVar6 * dVar1 + dVar44 * dVar37;
    dVar1 = dVar5 * dVar38 + dVar4 * dVar1 + dVar47 * dVar37;
    if (((((dVar39 < __real_3e45798ee2308c3a) || (dVar43 < dVar39)) ||
         (dVar1 < __real_3e45798ee2308c3a)) || (dVar41 < dVar1)) ||
       (((dVar15 = (double)*(float *)((longlong)&this->_padding_ + 4) + local_1a8, dVar15 < dVar1 &&
         (dVar1 < dVar41 - dVar15)) && ((dVar15 < dVar39 && (dVar39 < dVar43 - dVar15))))))
    goto LAB_1496b0cea;
    (**(code **)(this->_padding_ + 0x6b0))(this,&local_188);
    dVar15 = (double)*(float *)((longlong)&this->_padding_ + 4) *
             (double)CONCAT44(uStack_e4,local_e8) +
             (double)*(float *)((longlong)&this->_padding_ + 4);
    if (((dVar15 < dVar1) && (dVar1 < dVar41 - dVar15)) &&
       ((dVar15 < dVar39 && (dVar39 < dVar43 - dVar15)))) goto LAB_1496b0afc;
  }
  else {
    dVar27 = dVar38 * local_208 + local_1f0 * local_1f8 + dVar37 * local_200;
    dVar40 = (param_3->field0_0x0)._s_0.Z;
    dVar27 = ((local_1f0 * dVar27 - (param_3->field0_0x0)._s_0.X) * local_1f0 +
              (local_208 * dVar27 - (param_3->field0_0x0)._s_0.Y) * local_208 +
             (local_200 * dVar27 - dVar40) * local_200) / local_1b8;
    if (dVar27 < __real_3e45798ee2308c3a) goto LAB_1496b0cea;
    dVar1 = (dVar1 * dVar27 + (param_3->field0_0x0)._s_0.X) - local_1f8;
    dVar38 = (dVar39 * dVar27 + (param_3->field0_0x0)._s_0.Y) - dVar38;
    dVar37 = (dVar15 * dVar27 + dVar40) - dVar37;
    dVar39 = dVar7 * dVar38 + dVar6 * dVar1 + dVar44 * dVar37;
    dVar1 = dVar5 * dVar38 + dVar4 * dVar1 + dVar47 * dVar37;
    if ((((dVar39 < __real_3e45798ee2308c3a) || (dVar43 < dVar39)) ||
        (dVar1 < __real_3e45798ee2308c3a)) || (dVar41 < dVar1)) goto LAB_1496b0cea;
    (**(code **)(this->_padding_ + 0x6b0))(this,&local_188);
    dVar15 = (double)*(float *)((longlong)&this->_padding_ + 4) *
             (double)CONCAT44(uStack_e4,local_e8);
    dVar15 = dVar15 + dVar15;
    if (((double)this->Height * local_1a0 + dVar15 < dVar39) ||
       ((double)this->Width * local_1a0 + dVar15 < dVar1)) {
LAB_1496b0afc:
      bVar11 = false;
      goto LAB_1496b0afe;
    }
  }
  bVar11 = true;
LAB_1496b0afe:
  param_5->bIsSurfaceHit = bVar11;
  *(undefined8 *)__return_storage_ptr__ = local_188;
  __return_storage_ptr__->HitDepth = dStack_180;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = local_178;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dStack_170;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = local_168;
  __return_storage_ptr__->bHasHitNormal = (bool)(undefined1)uStack_160;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uStack_160._1_3_;
  __return_storage_ptr__->HitIdentifier = uStack_160._4_4_;
  __return_storage_ptr__->HitOwner = local_158;
  (__return_storage_ptr__->HitObject).WeakPtr = FStack_150;
  return __return_storage_ptr__;
}

// Render @ 1496ba4e0

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
UGizmoElementRectangle::Render
          (UGizmoElementRectangle *this,IToolsContextRenderAPI *param_1,
          FRenderTraversalState *param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  FWeakObjectPtr FVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  EGizmoElementInteractionState EVar14;
  int iVar15;
  bool bVar16;
  undefined2 uVar17;
  FRenderTraversalState *pFVar18;
  bool bVar19;
  char cVar20;
  FRenderTraversalState *pFVar21;
  FPrimitiveDrawInterface *pFVar22;
  UMaterialInterface *pUVar23;
  FMaterialRenderProxy *pFVar24;
  FLinearColor *this_00;
  longlong lVar25;
  FRenderTraversalState *pFVar26;
  float fVar27;
  undefined4 uVar28;
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
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auStackY_328 [32];
  FColor local_2c8;
  FColor local_2c4;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  FLinearColor local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  FLinearColor local_238;
  FRenderTraversalState local_228;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  if (param_1 == (IToolsContextRenderAPI *)0x0) {
    bVar19 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3076203500363841521>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementRectangle.cpp"
                        ,0xf,"RenderAPI");
    if (bVar19) {
code_r0x0001496baa22:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    lVar25 = 2;
    pFVar18 = &local_228;
    do {
      pFVar26 = param_2;
      pFVar21 = pFVar18;
      pFVar18 = (FRenderTraversalState *)
                &(pFVar21->MeshRenderState).HoverMaterial.bOverridesChildState;
      dVar44 = (pFVar26->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
      dVar1 = (pFVar26->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
      dVar3 = (pFVar26->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
      param_2 = (FRenderTraversalState *)
                &(pFVar26->MeshRenderState).HoverMaterial.bOverridesChildState;
      (pFVar21->LocalToWorldTransform).Rotation.XY.m128d_f64[0] =
           (pFVar26->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
      (pFVar21->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = dVar44;
      dVar44 = (pFVar26->LocalToWorldTransform).Translation.XY.m128d_f64[0];
      dVar4 = (pFVar26->LocalToWorldTransform).Translation.XY.m128d_f64[1];
      (pFVar21->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = dVar1;
      (pFVar21->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = dVar3;
      dVar1 = (pFVar26->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
      dVar3 = (pFVar26->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
      (pFVar21->LocalToWorldTransform).Translation.XY.m128d_f64[0] = dVar44;
      (pFVar21->LocalToWorldTransform).Translation.XY.m128d_f64[1] = dVar4;
      dVar44 = (pFVar26->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
      dVar4 = (pFVar26->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
      (pFVar21->LocalToWorldTransform).Translation.ZW.m128d_f64[0] = dVar1;
      (pFVar21->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = dVar3;
      dVar1 = (pFVar26->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
      dVar3 = (pFVar26->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
      (pFVar21->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] = dVar44;
      (pFVar21->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = dVar4;
      dVar44 = pFVar26->PixelToWorldScale;
      EVar14 = pFVar26->InteractionState;
      iVar15 = (pFVar26->MeshRenderState).Material.Value.WeakPtr.ObjectIndex;
      (pFVar21->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = dVar1;
      (pFVar21->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
      uVar9 = *(undefined8 *)&(pFVar26->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
      FVar10 = (pFVar26->MeshRenderState).HoverMaterial.Value.WeakPtr;
      pFVar21->PixelToWorldScale = dVar44;
      pFVar21->InteractionState = EVar14;
      (pFVar21->MeshRenderState).Material.Value.WeakPtr.ObjectIndex = iVar15;
      *(undefined8 *)&(pFVar21->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber = uVar9;
      (pFVar21->MeshRenderState).HoverMaterial.Value.WeakPtr = FVar10;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    uVar9 = *(undefined8 *)
             &(pFVar26->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
    FVar10 = (pFVar26->MeshRenderState).SelectMaterial.Value.WeakPtr;
    uVar11 = *(undefined8 *)&(pFVar26->MeshRenderState).SelectMaterial.bOverridesChildState;
    *(undefined8 *)pFVar18 = *(undefined8 *)param_2;
    *(undefined8 *)&(pFVar21->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber =
         uVar9;
    uVar9 = *(undefined8 *)
             &(pFVar26->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
    uVar12 = *(undefined8 *)&(pFVar26->MeshRenderState).VertexColor.Value.field0_0x0;
    (pFVar21->MeshRenderState).SelectMaterial.Value.WeakPtr = FVar10;
    *(undefined8 *)&(pFVar21->MeshRenderState).SelectMaterial.bOverridesChildState = uVar11;
    uVar11 = *(undefined8 *)((longlong)&(pFVar26->MeshRenderState).VertexColor.Value.field0_0x0 + 8)
    ;
    uVar13 = *(undefined8 *)&(pFVar26->MeshRenderState).VertexColor.bHasValue;
    *(undefined8 *)&(pFVar21->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber =
         uVar9;
    *(undefined8 *)&(pFVar21->MeshRenderState).VertexColor.Value.field0_0x0 = uVar12;
    uVar9 = *(undefined8 *)
             ((longlong)&(pFVar26->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
    uVar12 = *(undefined8 *)
              ((longlong)&(pFVar26->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
    *(undefined8 *)((longlong)&(pFVar21->MeshRenderState).VertexColor.Value.field0_0x0 + 8) = uVar11
    ;
    *(undefined8 *)&(pFVar21->MeshRenderState).VertexColor.bHasValue = uVar13;
    uVar11 = *(undefined8 *)&(pFVar26->MeshRenderState).InteractVertexColor.Value.field0_0x0;
    uVar13 = *(undefined8 *)
              ((longlong)&(pFVar26->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8);
    *(undefined8 *)((longlong)&(pFVar21->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4) =
         uVar9;
    *(undefined8 *)((longlong)&(pFVar21->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc) =
         uVar12;
    bVar19 = (pFVar26->MeshRenderState).InteractVertexColor.bHasValue;
    bVar16 = (pFVar26->MeshRenderState).InteractVertexColor.bOverridesChildState;
    uVar17 = *(undefined2 *)&(pFVar26->MeshRenderState).InteractVertexColor.field_0x12;
    fVar62 = (pFVar26->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
    fVar63 = (pFVar26->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
    fVar27 = (pFVar26->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
    *(undefined8 *)&(pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0 = uVar11;
    *(undefined8 *)((longlong)&(pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8)
         = uVar13;
    (pFVar21->MeshRenderState).InteractVertexColor.bHasValue = bVar19;
    (pFVar21->MeshRenderState).InteractVertexColor.bOverridesChildState = bVar16;
    *(undefined2 *)&(pFVar21->MeshRenderState).InteractVertexColor.field_0x12 = uVar17;
    (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R = fVar62;
    (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G = fVar63;
    (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B = fVar27;
    cVar20 = (**(code **)(this->_padding_ + 0x698))(this,param_1,&this->Center,&local_228);
    if (cVar20 != '\0') {
      auVar38 = *(undefined1 (*) [16])&(this->UpDirection).field0_0x0;
      dVar44 = (this->UpDirection).field0_0x0._s_0.Z;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = dVar44;
      dVar1 = (this->SideDirection).field0_0x0._s_0.Z;
      dVar57 = auVar38._8_8_;
      auVar29 = blendpd(auVar38,auVar58,2);
      dVar5 = local_228.LocalToWorldTransform.Rotation.XY.m128d_f64[0];
      dVar6 = local_228.LocalToWorldTransform.Rotation.XY.m128d_f64[1];
      dVar7 = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[0];
      dVar8 = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[1];
      auVar64 = blendpd((undefined1  [16])local_228.LocalToWorldTransform.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64,2);
      auVar55._0_8_ = dVar57 * dVar5 - dVar6 * auVar38._0_8_;
      auVar55._8_8_ = dVar44 * dVar6 - dVar7 * dVar57;
      dVar3 = auVar64._0_8_;
      dVar4 = auVar64._8_8_;
      auVar45._8_4_ = SUB84(auVar55._8_8_,0);
      auVar45._0_8_ = auVar55._0_8_;
      auVar45._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
      auVar64._0_8_ = auVar29._0_8_ * dVar7 - dVar3 * dVar44;
      auVar64._8_8_ = auVar29._8_8_ * dVar8 - dVar4 * 0.0;
      auVar29 = blendpd(auVar55,auVar64,2);
      dVar43 = auVar45._8_8_ + auVar45._8_8_;
      dVar49 = auVar64._0_8_ + auVar64._0_8_;
      auVar56._0_8_ = auVar29._0_8_ + auVar29._0_8_;
      auVar56._8_8_ = auVar29._8_8_ + auVar29._8_8_;
      auVar36._8_4_ = SUB84(dVar49,0);
      auVar36._0_8_ = dVar43;
      uVar28 = (undefined4)((ulonglong)dVar49 >> 0x20);
      auVar36._12_4_ = uVar28;
      auVar30._8_4_ = SUB84(dVar49,0);
      auVar30._0_8_ = dVar43;
      auVar30._12_4_ = uVar28;
      auVar29 = blendpd(auVar30,auVar56,2);
      auVar37._0_8_ = auVar36._8_8_ * dVar5 - dVar43 * dVar6;
      auVar37._8_8_ = auVar56._0_8_ * dVar6 - dVar49 * dVar7;
      auVar31._0_8_ = auVar29._0_8_ * dVar7 - auVar56._0_8_ * dVar3;
      auVar31._8_8_ = auVar29._8_8_ * dVar8 - auVar56._8_8_ * dVar4;
      local_2a8._s_0.X = dVar43 * dVar8 + auVar38._0_8_ + auVar37._8_8_;
      local_2a8._s_0.Y = dVar49 * dVar8 + dVar57 + auVar31._0_8_;
      auVar38 = blendpd(auVar37,auVar31,2);
      local_2a8._s_0.Z = auVar56._0_8_ * dVar8 + dVar44 + auVar38._0_8_;
      auVar38 = *(undefined1 (*) [16])&(this->SideDirection).field0_0x0;
      dVar49 = auVar38._8_8_;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar1;
      auVar29 = blendpd(auVar38,auVar29,2);
      auVar59._0_8_ = dVar49 * dVar5 - dVar6 * auVar38._0_8_;
      auVar59._8_8_ = dVar1 * dVar6 - dVar7 * dVar49;
      auVar46._8_4_ = SUB84(auVar59._8_8_,0);
      auVar46._0_8_ = auVar59._0_8_;
      auVar46._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
      auVar32._0_8_ = auVar29._0_8_ * dVar7 - dVar3 * dVar1;
      auVar32._8_8_ = auVar29._8_8_ * dVar8 - dVar4 * 0.0;
      dVar44 = auVar46._8_8_ + auVar46._8_8_;
      dVar43 = auVar32._0_8_ + auVar32._0_8_;
      auVar29 = blendpd(auVar59,auVar32,2);
      auVar60._0_8_ = auVar29._0_8_ + auVar29._0_8_;
      auVar60._8_8_ = auVar29._8_8_ + auVar29._8_8_;
      auVar50._8_4_ = SUB84(dVar43,0);
      auVar50._0_8_ = dVar44;
      uVar28 = (undefined4)((ulonglong)dVar43 >> 0x20);
      auVar50._12_4_ = uVar28;
      auVar39._8_4_ = SUB84(dVar43,0);
      auVar39._0_8_ = dVar44;
      auVar39._12_4_ = uVar28;
      auVar51._0_8_ = auVar50._8_8_ * dVar5 - dVar6 * dVar44;
      auVar51._8_8_ = auVar60._0_8_ * dVar6 - dVar7 * dVar43;
      auVar33._8_4_ = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[1]._0_4_;
      auVar33._0_8_ = dVar8;
      auVar33._12_4_ = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[1]._4_4_;
      auVar29 = blendpd(auVar39,auVar60,2);
      auVar40._0_8_ = auVar29._0_8_ * dVar7 - dVar3 * auVar60._0_8_;
      auVar40._8_8_ = auVar29._8_8_ * dVar8 - dVar4 * auVar60._8_8_;
      local_2c0._s_0.X = dVar8 * dVar44 + auVar38._0_8_ + auVar51._8_8_;
      local_2c0._s_0.Y = auVar33._8_8_ * dVar43 + dVar49 + auVar40._0_8_;
      auVar38 = blendpd(auVar51,auVar40,2);
      local_2c0._s_0.Z = dVar8 * auVar60._0_8_ + dVar1 + auVar38._0_8_;
      auVar61._0_8_ =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z *
           local_228.LocalToWorldTransform.Scale3D.ZW.m128d_f64[0];
      auVar61._8_8_ = local_228.LocalToWorldTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      local_258 = local_228.LocalToWorldTransform.Scale3D.ZW.m128d_f64[0];
      dVar43 = local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[0] *
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dVar49 = local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1] *
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_240 = local_228.LocalToWorldTransform.Scale3D.ZW.m128d_f64[0];
      auVar52._8_4_ = SUB84(dVar49,0);
      auVar52._0_8_ = dVar43;
      uVar28 = (undefined4)((ulonglong)dVar49 >> 0x20);
      auVar52._12_4_ = uVar28;
      auVar38._8_4_ = SUB84(dVar49,0);
      auVar38._0_8_ = dVar43;
      auVar38._12_4_ = uVar28;
      auVar38 = blendpd(auVar38,auVar61,2);
      local_268 = local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[0];
      dStack_260 = local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1];
      auVar53._0_8_ = auVar52._8_8_ * dVar5 - dVar6 * dVar43;
      auVar53._8_8_ = auVar61._0_8_ * dVar6 - dVar7 * dVar49;
      local_250 = local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[0];
      dStack_248 = local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1];
      auVar34._0_8_ = auVar38._0_8_ * dVar7 - dVar3 * auVar61._0_8_;
      auVar34._8_8_ = auVar38._8_8_ * dVar8 - dVar4 * auVar61._8_8_;
      dVar44 = auVar53._8_8_ + auVar53._8_8_;
      dVar1 = auVar34._0_8_ + auVar34._0_8_;
      uVar28 = (undefined4)((ulonglong)dVar1 >> 0x20);
      auVar38 = blendpd(auVar53,auVar34,2);
      auVar47._8_4_ = SUB84(dVar1,0);
      auVar47._0_8_ = dVar44;
      auVar47._12_4_ = uVar28;
      auVar41._8_4_ = SUB84(dVar1,0);
      auVar41._0_8_ = dVar44;
      auVar41._12_4_ = uVar28;
      auVar35._8_4_ = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[1]._0_4_;
      auVar35._0_8_ = dVar8;
      auVar35._12_4_ = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[1]._4_4_;
      auVar54._0_8_ = auVar38._0_8_ + auVar38._0_8_;
      auVar54._8_8_ = auVar38._8_8_ + auVar38._8_8_;
      auVar38 = blendpd(auVar41,auVar54,2);
      auVar48._0_8_ = auVar47._8_8_ * dVar5 - dVar6 * dVar44;
      auVar48._8_8_ = auVar54._0_8_ * dVar6 - dVar7 * dVar1;
      auVar42._0_8_ = auVar38._0_8_ * dVar7 - dVar3 * auVar54._0_8_;
      auVar42._8_8_ = auVar38._8_8_ * dVar8 - dVar4 * auVar54._8_8_;
      local_290._s_0.X =
           dVar8 * dVar44 + dVar43 + auVar48._8_8_ +
           local_228.LocalToWorldTransform.Translation.XY.m128d_f64[0];
      local_290._s_0.Y =
           auVar35._8_8_ * dVar1 + dVar49 + auVar42._0_8_ +
           local_228.LocalToWorldTransform.Translation.XY.m128d_f64[1];
      auVar38 = blendpd(auVar48,auVar42,2);
      fVar63 = (float)((double)this->Width * local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[0]
                      );
      local_290._s_0.Z =
           dVar8 * auVar54._0_8_ + auVar61._0_8_ + auVar38._0_8_ +
           local_228.LocalToWorldTransform.Translation.ZW.m128d_f64[0];
      fVar62 = (float)((double)this->Height *
                      local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[0]);
      pFVar22 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
      if (this->bDrawMesh != false) {
        pUVar23 = FGizmoElementMeshRenderStateAttributes::GetMaterialInternal
                            (&local_228.MeshRenderState,local_228.InteractionState);
        if (pUVar23 != (UMaterialInterface *)0x0) {
          FGizmoElementMeshRenderStateAttributes::GetVertexColorInternal
                    (&local_228.MeshRenderState,&local_278,local_228.InteractionState);
          FLinearColor::ToFColorSRGB(&local_278);
          pFVar24 = (FMaterialRenderProxy *)(**(code **)(pUVar23->_padding_ + 0x310))(pUVar23);
          DrawRectangleMesh(pFVar22,(TVector<double> *)&local_290._s_0,
                            (TVector<double> *)&local_2a8._s_0,(TVector<double> *)&local_2c0._s_0,
                            local_2c8,fVar63,fVar62,pFVar24,'\x01');
        }
      }
      if (this->bDrawLine != false) {
        lVar25 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
        if (lVar25 == 0) {
          bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3076203500363841491>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementRectangle.cpp"
                              ,0x2d,"View");
          if (bVar19) goto code_r0x0001496baa22;
        }
        else {
          fVar27 = (float)(**(code **)(this->_padding_ + 0x6b8))
                                    (this,*(double *)(lVar25 + 0x428) <= __real_3ff0000000000000 &&
                                          __real_3ff0000000000000 != *(double *)(lVar25 + 0x428));
          this_00 = UGizmoElementBase::FRenderTraversalState::GetCurrentLineColor
                              (&local_228,&local_238);
          FLinearColor::ToFColorSRGB(this_00);
          DrawRectangle(pFVar22,(TVector<double> *)&local_290._s_0,
                        (TVector<double> *)&local_2a8._s_0,(TVector<double> *)&local_2c0._s_0,
                        local_2c4,fVar63,fVar62,'\x01',fVar27,fVar27 + __real_3f800000,
                        SUB81(this->_padding_,0));
        }
      }
    }
  }
  return;
}

// SetCenter @ 1496bd380

void __thiscall
UGizmoElementRectangle::SetCenter(UGizmoElementRectangle *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->Center).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar2;
  (this->Center).field0_0x0._s_0.Z = dVar1;
  return;
}

// SetDrawLine @ 1496bd4e0

void __thiscall UGizmoElementRectangle::SetDrawLine(UGizmoElementRectangle *this,bool param_1)

{
  this->bDrawLine = param_1;
  return;
}

// SetDrawMesh @ 1496bd510

void __thiscall UGizmoElementRectangle::SetDrawMesh(UGizmoElementRectangle *this,bool param_1)

{
  this->bDrawMesh = param_1;
  return;
}

// SetHeight @ 1496bd990

void __thiscall UGizmoElementRectangle::SetHeight(UGizmoElementRectangle *this,float param_1)

{
  this->Height = param_1;
  return;
}

// SetHitLine @ 1496bd9b0

void __thiscall UGizmoElementRectangle::SetHitLine(UGizmoElementRectangle *this,bool param_1)

{
  this->bHitLine = param_1;
  return;
}

// SetHitMesh @ 1496bd9d0

void __thiscall UGizmoElementRectangle::SetHitMesh(UGizmoElementRectangle *this,bool param_1)

{
  this->bHitMesh = param_1;
  return;
}

// SetSideDirection @ 1496bfcc0

void __thiscall
UGizmoElementRectangle::SetSideDirection(UGizmoElementRectangle *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar8 == __real_3ff0000000000000) {
    uVar7 = (param_1->field0_0x0)._s_0.Z;
    uVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    uVar6 = (param_1->field0_0x0)._s_0.X;
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar7 = dVar2 * dVar8;
      uVar5 = dVar3 * dVar8;
      uVar6 = dVar1 * dVar8;
    }
  }
  auVar4._8_4_ = (int)uVar5;
  auVar4._0_8_ = uVar6;
  auVar4._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->SideDirection).field0_0x0 = auVar4;
  (this->SideDirection).field0_0x0._s_0.Z = (double)uVar7;
  return;
}

// SetUpDirection @ 1496c0810

void __thiscall
UGizmoElementRectangle::SetUpDirection(UGizmoElementRectangle *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar8 == __real_3ff0000000000000) {
    uVar7 = (param_1->field0_0x0)._s_0.Z;
    uVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    uVar6 = (param_1->field0_0x0)._s_0.X;
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar7 = dVar2 * dVar8;
      uVar5 = dVar3 * dVar8;
      uVar6 = dVar1 * dVar8;
    }
  }
  auVar4._8_4_ = (int)uVar5;
  auVar4._0_8_ = uVar6;
  auVar4._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->UpDirection).field0_0x0 = auVar4;
  (this->UpDirection).field0_0x0._s_0.Z = (double)uVar7;
  return;
}

// SetWidth @ 1496c0d80

void __thiscall UGizmoElementRectangle::SetWidth(UGizmoElementRectangle *this,float param_1)

{
  this->Width = param_1;
  return;
}

// StaticRegisterNativesUGizmoElementRectangle @ 1496c29c0

void __cdecl UGizmoElementRectangle::StaticRegisterNativesUGizmoElementRectangle(void)

{
  return;
}

