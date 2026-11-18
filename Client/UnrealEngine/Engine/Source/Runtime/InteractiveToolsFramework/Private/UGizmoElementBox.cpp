// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 16

// StaticClass @ 14966f670

UClass * __cdecl UGizmoElementBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementBox",
               &Z_Registration_Info_UClass_UGizmoElementBox.InnerSingleton,
               StaticRegisterNativesUGizmoElementBox,0x1b0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementBox>,
               InternalVTableHelperCtorCaller<UGizmoElementBox>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementBox.InnerSingleton;
}

// UGizmoElementBox @ 149684610

UGizmoElementBox * __thiscall
UGizmoElementBox::UGizmoElementBox(UGizmoElementBox *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementBox__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Dimensions).field0_0x0._s_0.X = 1.0;
  (this->Dimensions).field0_0x0._s_0.Y = 1.0;
  (this->Dimensions).field0_0x0._s_0.Z = 1.0;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->UpDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->UpDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->UpDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  (this->SideDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X
  ;
  (this->SideDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->SideDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z
  ;
  return this;
}

// UGizmoElementBox @ 1496846b0

UGizmoElementBox * __thiscall
UGizmoElementBox::UGizmoElementBox(UGizmoElementBox *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementBox__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Dimensions).field0_0x0._s_0.X = 1.0;
  (this->Dimensions).field0_0x0._s_0.Y = 1.0;
  (this->Dimensions).field0_0x0._s_0.Z = 1.0;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->UpDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->UpDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->UpDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  (this->SideDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X
  ;
  (this->SideDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->SideDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z
  ;
  return this;
}

// ~UGizmoElementBox @ 1496899e0

void __thiscall UGizmoElementBox::~UGizmoElementBox(UGizmoElementBox *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetCenter @ 1496a04c0

TVector<double> * __thiscall
UGizmoElementBox::GetCenter(UGizmoElementBox *this,TVector<double> *__return_storage_ptr__)

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

// GetDimensions @ 1496a0e30

TVector<double> * __thiscall
UGizmoElementBox::GetDimensions(UGizmoElementBox *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Dimensions).field0_0x0._s_0.Y;
  dVar1 = (this->Dimensions).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Dimensions).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496a4e30

UClass * __cdecl UGizmoElementBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementBox",
               &Z_Registration_Info_UClass_UGizmoElementBox.InnerSingleton,
               StaticRegisterNativesUGizmoElementBox,0x1b0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementBox>,
               InternalVTableHelperCtorCaller<UGizmoElementBox>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementBox.InnerSingleton;
}

// GetSideDirection @ 1496a7ee0

TVector<double> * __thiscall
UGizmoElementBox::GetSideDirection(UGizmoElementBox *this,TVector<double> *__return_storage_ptr__)

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

// GetUpDirection @ 1496a9320

TVector<double> * __thiscall
UGizmoElementBox::GetUpDirection(UGizmoElementBox *this,TVector<double> *__return_storage_ptr__)

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

// LineTrace @ 1496ae620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputRayHit * __thiscall
UGizmoElementBox::LineTrace
          (UGizmoElementBox *this,FInputRayHit *__return_storage_ptr__,UGizmoViewContext *param_1,
          FLineTraceTraversalState *param_2,TVector<double> *param_3,TVector<double> *param_4,
          FLineTraceOutput *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  bool bVar18;
  undefined4 uVar19;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_278 [32];
  double local_258;
  double dStack_250;
  TQuaternion<double>_u_0 local_248;
  TVector<double>_u_0 local_228;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  FWeakObjectPtr FStack_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  double local_158;
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
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_278;
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
  cVar17 = (**(code **)(this->_padding_ + 0x6a8))(local_e8,param_1,&this->Center,&local_148);
  if (cVar17 != '\0') {
    auVar12._8_8_ = dStack_130;
    auVar12._0_8_ = local_138;
    auVar24 = *(undefined1 (*) [16])&(this->SideDirection).field0_0x0;
    dVar39 = (this->SideDirection).field0_0x0._s_0.Z;
    auVar11._8_8_ = dStack_140;
    auVar11._0_8_ = local_148;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = dVar39;
    auVar20 = blendpd(auVar24,auVar20,2);
    dVar47 = auVar24._8_8_;
    auVar45 = blendpd(auVar11,auVar12,2);
    auVar52._0_8_ = dVar47 * local_148 - dStack_140 * auVar24._0_8_;
    auVar52._8_8_ = dVar39 * dStack_140 - local_138 * dVar47;
    dVar3 = auVar45._0_8_;
    dVar4 = auVar45._8_8_;
    auVar21._0_8_ = auVar20._0_8_ * local_138 - dVar3 * dVar39;
    auVar21._8_8_ = auVar20._8_8_ * dStack_130 - dVar4 * 0.0;
    auVar20 = blendpd(auVar52,auVar21,2);
    dVar5 = auVar52._8_8_ + auVar52._8_8_;
    dVar7 = auVar21._0_8_ + auVar21._0_8_;
    uVar19 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar53._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar53._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    auVar32._8_4_ = SUB84(dVar7,0);
    auVar32._0_8_ = dVar5;
    auVar32._12_4_ = uVar19;
    auVar22._8_4_ = SUB84(dVar7,0);
    auVar22._0_8_ = dVar5;
    auVar22._12_4_ = uVar19;
    auVar20 = blendpd(auVar22,auVar53,2);
    auVar33._0_8_ = auVar32._8_8_ * local_148 - dVar5 * dStack_140;
    auVar33._8_8_ = auVar53._0_8_ * dStack_140 - dVar7 * local_138;
    auVar23._0_8_ = auVar20._0_8_ * local_138 - auVar53._0_8_ * dVar3;
    auVar23._8_8_ = auVar20._8_8_ * dStack_130 - auVar53._8_8_ * dVar4;
    auVar45 = blendpd(auVar33,auVar23,2);
    auVar20 = *(undefined1 (*) [16])&(this->UpDirection).field0_0x0;
    dVar6 = dVar5 * dStack_130 + auVar24._0_8_ + auVar33._8_8_;
    dVar8 = dVar7 * dStack_130 + dVar47 + auVar23._0_8_;
    dVar5 = (this->UpDirection).field0_0x0._s_0.Z;
    dVar47 = auVar20._8_8_;
    dVar51 = auVar53._0_8_ * dStack_130 + dVar39 + auVar45._0_8_;
    auVar49._0_8_ = dVar47 * local_148 - dStack_140 * auVar20._0_8_;
    auVar49._8_8_ = dVar5 * dStack_140 - local_138 * dVar47;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar5;
    auVar24 = blendpd(auVar20,auVar24,2);
    auVar25._0_8_ = auVar24._0_8_ * local_138 - dVar3 * dVar5;
    auVar25._8_8_ = auVar24._8_8_ * dStack_130 - dVar4 * 0.0;
    auVar24 = blendpd(auVar49,auVar25,2);
    dVar39 = auVar49._8_8_ + auVar49._8_8_;
    dVar7 = auVar25._0_8_ + auVar25._0_8_;
    uVar19 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar50._0_8_ = auVar24._0_8_ + auVar24._0_8_;
    auVar50._8_8_ = auVar24._8_8_ + auVar24._8_8_;
    auVar34._8_4_ = SUB84(dVar7,0);
    auVar34._0_8_ = dVar39;
    auVar34._12_4_ = uVar19;
    auVar26._8_4_ = SUB84(dVar7,0);
    auVar26._0_8_ = dVar39;
    auVar26._12_4_ = uVar19;
    auVar24 = blendpd(auVar26,auVar50,2);
    auVar35._0_8_ = auVar34._8_8_ * local_148 - dVar39 * dStack_140;
    auVar35._8_8_ = auVar50._0_8_ * dStack_140 - dVar7 * local_138;
    auVar27._0_8_ = auVar24._0_8_ * local_138 - auVar50._0_8_ * dVar3;
    auVar27._8_8_ = auVar24._8_8_ * dStack_130 - auVar50._8_8_ * dVar4;
    local_248._s_0.Z = local_f8;
    auVar24 = blendpd(auVar35,auVar27,2);
    dVar1 = dVar39 * dStack_130 + auVar20._0_8_ + auVar35._8_8_;
    dVar2 = dVar7 * dStack_130 + dVar47 + auVar27._0_8_;
    dVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_f8;
    dVar48 = auVar50._0_8_ * dStack_130 + dVar5 + auVar24._0_8_;
    dStack_250 = dStack_100;
    dVar7 = local_108 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dVar47 = dStack_100 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar19 = (undefined4)((ulonglong)dVar47 >> 0x20);
    auVar40._8_4_ = SUB84(dVar47,0);
    auVar40._0_8_ = dVar7;
    auVar40._12_4_ = uVar19;
    auVar28._8_4_ = SUB84(dVar47,0);
    auVar28._0_8_ = dVar7;
    auVar28._12_4_ = uVar19;
    auVar45._8_8_ = dStack_f0 * 0.0;
    auVar45._0_8_ = dVar44;
    auVar24 = blendpd(auVar28,auVar45,2);
    auVar41._0_8_ = auVar40._8_8_ * local_148 - dStack_140 * dVar7;
    auVar41._8_8_ = dVar44 * dStack_140 - local_138 * dVar47;
    auVar29._0_8_ = auVar24._0_8_ * local_138 - dVar3 * dVar44;
    auVar29._8_8_ = auVar24._8_8_ * dStack_130 - dVar4 * dStack_f0 * 0.0;
    dVar39 = auVar41._8_8_ + auVar41._8_8_;
    dVar5 = auVar29._0_8_ + auVar29._0_8_;
    uVar19 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar24 = blendpd(auVar41,auVar29,2);
    auVar30._8_4_ = SUB84(dVar5,0);
    auVar30._0_8_ = dVar39;
    auVar30._12_4_ = uVar19;
    auVar36._8_4_ = SUB84(dVar5,0);
    auVar36._0_8_ = dVar39;
    auVar36._12_4_ = uVar19;
    auVar42._0_8_ = auVar24._0_8_ + auVar24._0_8_;
    auVar42._8_8_ = auVar24._8_8_ + auVar24._8_8_;
    auVar24 = blendpd(auVar30,auVar42,2);
    auVar31._0_8_ = auVar24._0_8_ * local_138 - dVar3 * auVar42._0_8_;
    auVar31._8_8_ = auVar24._8_8_ * dStack_130 - dVar4 * auVar42._8_8_;
    auVar46._8_4_ = SUB84(dStack_130,0);
    auVar46._0_8_ = dStack_130;
    auVar46._12_4_ = (int)((ulonglong)dStack_130 >> 0x20);
    auVar37._0_8_ = auVar36._8_8_ * local_148 - dStack_140 * dVar39;
    auVar37._8_8_ = auVar42._0_8_ * dStack_140 - local_138 * dVar5;
    local_258 = 0.0;
    auVar24 = blendpd(auVar37,auVar31,2);
    local_198._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_158 = dStack_130 * auVar42._0_8_ + dVar44 + auVar24._0_8_ + local_118;
    dVar44 = dStack_130 * dVar39 + dVar7 + auVar37._8_8_ + local_128;
    dVar47 = auVar46._8_8_ * dVar5 + dVar47 + auVar31._0_8_ + dStack_120;
    dVar5 = local_108 * (this->Dimensions).field0_0x0._s_0.X * __real_3fe0000000000000;
    dVar4 = local_108 * (this->Dimensions).field0_0x0._s_0.Y * __real_3fe0000000000000;
    dVar3 = local_108 * (this->Dimensions).field0_0x0._s_0.Z * __real_3fe0000000000000;
    local_198._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_198._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_180._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_180._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    dVar39 = (double)*(float *)&this->_padding_ * (double)CONCAT44(uStack_e4,local_e8);
    local_180._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_180._s_0,__real_3e45798ee0000000)
    ;
    auVar9._4_8_ = auVar42._8_8_;
    auVar9._0_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar43._0_8_ = auVar9._0_8_ << 0x20;
    auVar43._8_4_ = SUB84(dVar8,0);
    auVar43._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dStack_208 = auVar43._8_8_;
    local_1c8 = local_158;
    auVar10._4_8_ = auVar24._8_8_;
    auVar10._0_4_ = (int)((ulonglong)dVar1 >> 0x20);
    auVar38._0_8_ = auVar10._0_8_ << 0x20;
    auVar38._8_4_ = SUB84(dVar2,0);
    auVar38._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dStack_200 = auVar38._8_8_;
    local_228._s_0.X = dVar48 * dStack_208 - dVar51 * dStack_200;
    local_248._s_0.X = 0.0;
    local_248._s_0.Y = 0.0;
    local_248._s_0.Z = 0.0;
    dStack_210 = dVar51 * dVar1 - dVar48 * dVar6;
    local_248._s_0.W = __real_3ff0000000000000;
    local_1f8._8_4_ = SUB84(dVar51,0);
    local_1f8._0_8_ = dVar6 * dStack_200 - dStack_208 * dVar1;
    local_1f8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
    local_228._s_0.Y = dVar6;
    local_228._s_0.Z = dVar1;
    local_1e8 = dVar48;
    UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
              ((TQuaternion<double> *)&local_248._s_0,(TMatrix3<double> *)&local_228._s_0);
    dVar7 = local_1c8;
    uVar16 = local_248._s_0.W;
    uVar15 = local_248._s_0.Z;
    uVar14 = local_248._s_0.Y;
    uVar13 = local_248._s_0.X;
    dStack_1b0 = local_248._s_0.Z;
    uStack_1a8 = local_248._24_4_;
    uStack_1a4 = local_248._28_4_;
    dStack_1c0 = local_248._s_0.X;
    dStack_1b8 = local_248._s_0.Y;
    local_228._s_0.Z = local_1c8;
    dStack_210 = local_248._s_0.X;
    local_1e8 = dVar39 + dVar4;
    dStack_208 = local_248._s_0.Y;
    dStack_200 = local_248._s_0.Z;
    dStack_1e0 = dVar39 + dVar3;
    local_1f8._8_8_ = dVar39 + dVar5;
    local_1f8._0_8_ = local_248._s_0.W;
    local_228._s_0.X = dVar44;
    local_228._s_0.Y = dVar47;
    bVar18 = UE::Geometry::TIntrRay3OrientedBox3<double>::FindIntersection
                       ((TRay<double> *)&local_198._s_0,(TOrientedBox3<double> *)&local_228._s_0,
                        &local_258);
    if (bVar18) {
      (**(code **)(this->_padding_ + 0x6b0))(this,&local_1d8,local_258,param_5);
      dVar39 = (double)*(float *)((longlong)&this->_padding_ + 4) *
               (double)CONCAT44(uStack_e4,local_e8);
      local_228._s_0.Z = dVar7;
      dStack_210 = (double)uVar13;
      dStack_208 = (double)uVar14;
      dStack_200 = (double)uVar15;
      local_1e8 = dVar39 + dVar4;
      dStack_1e0 = dVar39 + dVar3;
      local_1f8._8_8_ = dVar5 + dVar39;
      local_1f8._0_8_ = uVar16;
      local_228._s_0.X = dVar44;
      local_228._s_0.Y = dVar47;
      bVar18 = UE::Geometry::TIntrRay3OrientedBox3<double>::FindIntersection
                         ((TRay<double> *)&local_198._s_0,(TOrientedBox3<double> *)&local_228._s_0,
                          &local_258);
      if (bVar18) {
        dStack_1d0 = local_258;
        param_5->bIsSurfaceHit = true;
      }
      *(undefined8 *)__return_storage_ptr__ = local_1d8;
      __return_storage_ptr__->HitDepth = dStack_1d0;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = local_1c8;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dStack_1c0;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = dStack_1b8;
      *(double *)&__return_storage_ptr__->bHasHitNormal = dStack_1b0;
      __return_storage_ptr__->HitOwner = (void *)CONCAT44(uStack_1a4,uStack_1a8);
      (__return_storage_ptr__->HitObject).WeakPtr = FStack_1a0;
      return __return_storage_ptr__;
    }
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Render @ 1496b8750

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

void __thiscall
UGizmoElementBox::Render
          (UGizmoElementBox *this,IToolsContextRenderAPI *param_1,FRenderTraversalState *param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FWeakObjectPtr FVar12;
  TTransform<double> *pTVar13;
  char cVar14;
  TTransform<double> *pTVar15;
  UMaterialInterface *pUVar16;
  TMatrix<double> *pTVar17;
  FPrimitiveDrawInterface *pFVar18;
  FMaterialRenderProxy *pFVar19;
  longlong lVar20;
  FRenderTraversalState *pFVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_2e8 [32];
  TVector<double>_u_0 local_2b8;
  TQuat<double> local_298;
  TTransform<double> local_278;
  undefined1 local_218 [128];
  TTransform<double> local_198;
  EGizmoElementInteractionState EStack_130;
  FGizmoElementMeshRenderStateAttributes FStack_12c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  lVar20 = 2;
  pTVar13 = &local_198;
  do {
    pFVar21 = param_2;
    pTVar15 = pTVar13;
    dVar1 = (pFVar21->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar9 = (pFVar21->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar10 = (pFVar21->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_2 = (FRenderTraversalState *)
              &(pFVar21->MeshRenderState).HoverMaterial.bOverridesChildState;
    (pTVar15->Rotation).XY.m128d_f64[0] = (pFVar21->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    (pTVar15->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pFVar21->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar11 = (pFVar21->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    (pTVar15->Rotation).ZW.m128d_f64[0] = dVar9;
    (pTVar15->Rotation).ZW.m128d_f64[1] = dVar10;
    dVar9 = (pFVar21->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar10 = (pFVar21->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    (pTVar15->Translation).XY.m128d_f64[0] = dVar1;
    (pTVar15->Translation).XY.m128d_f64[1] = dVar11;
    dVar1 = (pFVar21->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar11 = (pFVar21->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    (pTVar15->Translation).ZW.m128d_f64[0] = dVar9;
    (pTVar15->Translation).ZW.m128d_f64[1] = dVar10;
    dVar9 = (pFVar21->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar10 = (pFVar21->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    (pTVar15->Scale3D).XY.m128d_f64[0] = dVar1;
    (pTVar15->Scale3D).XY.m128d_f64[1] = dVar11;
    dVar1 = pFVar21->PixelToWorldScale;
    dVar11 = *(double *)&pFVar21->InteractionState;
    (pTVar15->Scale3D).ZW.m128d_f64[0] = dVar9;
    (pTVar15->Scale3D).ZW.m128d_f64[1] = dVar10;
    dVar9 = *(double *)&(pFVar21->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar12 = (pFVar21->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pTVar15[1].Rotation.XY.m128d_f64[0] = dVar1;
    pTVar15[1].Rotation.XY.m128d_f64[1] = dVar11;
    pTVar15[1].Rotation.ZW.m128d_f64[0] = dVar9;
    *(FWeakObjectPtr *)(pTVar15[1].Rotation.ZW.m128d_f64 + 1) = FVar12;
    lVar20 = lVar20 + -1;
    pTVar13 = (TTransform<double> *)&pTVar15[1].Translation;
  } while (lVar20 != 0);
  dVar1 = *(double *)&(pFVar21->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar12 = (pFVar21->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar9 = *(double *)&(pFVar21->MeshRenderState).SelectMaterial.bOverridesChildState;
  pTVar15[1].Translation.XY.m128d_f64[0] = *(double *)param_2;
  pTVar15[1].Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)&(pFVar21->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar10 = *(double *)&(pFVar21->MeshRenderState).VertexColor.Value.field0_0x0;
  pTVar15[1].Translation.ZW.m128d_f64[0] = (double)FVar12;
  pTVar15[1].Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = *(double *)((longlong)&(pFVar21->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar11 = *(double *)&(pFVar21->MeshRenderState).VertexColor.bHasValue;
  pTVar15[1].Scale3D.XY.m128d_f64[0] = dVar1;
  pTVar15[1].Scale3D.XY.m128d_f64[1] = dVar10;
  dVar1 = *(double *)((longlong)&(pFVar21->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar10 = *(double *)
            ((longlong)&(pFVar21->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
  pTVar15[1].Scale3D.ZW.m128d_f64[0] = dVar9;
  pTVar15[1].Scale3D.ZW.m128d_f64[1] = dVar11;
  fVar2 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.R;
  fVar3 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.G;
  fVar4 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.B;
  fVar5 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.A;
  pTVar15[2].Rotation.XY.m128d_f64[0] = dVar1;
  pTVar15[2].Rotation.XY.m128d_f64[1] = dVar10;
  uVar22._0_1_ = (pFVar21->MeshRenderState).InteractVertexColor.bHasValue;
  uVar22._1_1_ = (pFVar21->MeshRenderState).InteractVertexColor.bOverridesChildState;
  uVar22._2_2_ = *(undefined2 *)&(pFVar21->MeshRenderState).InteractVertexColor.field_0x12;
  fVar6 = (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
  fVar7 = (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
  fVar8 = (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
  *(float *)pTVar15[2].Rotation.ZW.m128d_f64 = fVar2;
  *(float *)((longlong)pTVar15[2].Rotation.ZW.m128d_f64 + 4) = fVar3;
  *(float *)(pTVar15[2].Rotation.ZW.m128d_f64 + 1) = fVar4;
  *(float *)((longlong)pTVar15[2].Rotation.ZW.m128d_f64 + 0xc) = fVar5;
  *(undefined4 *)pTVar15[2].Translation.XY.m128d_f64 = uVar22;
  *(float *)((longlong)pTVar15[2].Translation.XY.m128d_f64 + 4) = fVar6;
  *(float *)(pTVar15[2].Translation.XY.m128d_f64 + 1) = fVar7;
  *(float *)((longlong)pTVar15[2].Translation.XY.m128d_f64 + 0xc) = fVar8;
  cVar14 = (**(code **)(this->_padding_ + 0x698))(uVar22,param_1,&this->Center,&local_198);
  if ((cVar14 != '\0') &&
     (pUVar16 = FGizmoElementMeshRenderStateAttributes::GetMaterialInternal(&FStack_12c,EStack_130),
     pUVar16 != (UMaterialInterface *)0x0)) {
    pTVar17 = UE::Math::TRotationMatrix<double>::MakeFromYZ
                        ((TMatrix<double> *)local_218,&this->SideDirection,&this->UpDirection);
    UE::Math::TMatrix<double>::ToQuat(pTVar17,&local_298);
    local_218._0_8_ = local_298.X;
    local_218._8_8_ = local_298.Y;
    local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_278.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_278.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_278.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    uVar22 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    uVar23 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_218._16_8_ = local_298.Z;
    local_218._24_8_ = local_298.W;
    local_278.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_278.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_278.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_278.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_218._88_4_ = uVar22;
    local_218._80_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_218._92_4_ = uVar23;
    local_278.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar22;
    local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_278.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar23;
    local_218._32_8_ = local_278.Translation.XY.m128d_f64[0];
    local_218._40_8_ = local_278.Translation.XY.m128d_f64[1];
    local_218._48_8_ = local_278.Translation.ZW.m128d_f64[0];
    local_218._56_8_ = local_278.Translation.ZW.m128d_f64[1];
    local_218._64_8_ = local_278.Scale3D.XY.m128d_f64[0];
    local_218._72_8_ = local_278.Scale3D.XY.m128d_f64[1];
    UE::Math::TTransform<double>::Multiply(&local_278,(TTransform<double> *)local_218,&local_198);
    dVar1 = (this->Dimensions).field0_0x0._s_0.Y * _UNK_150689678;
    local_2b8._s_0.Z =
         (this->Dimensions).field0_0x0._s_0.Z * ___xmm_3fe00000000000003fe0000000000000;
    local_2b8._8_4_ = SUB84(dVar1,0);
    local_2b8._0_8_ = (this->Dimensions).field0_0x0._s_0.X * ___xmm_3fe00000000000003fe0000000000000
    ;
    local_2b8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    pFVar18 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
    pFVar19 = (FMaterialRenderProxy *)(**(code **)(pUVar16->_padding_ + 0x310))(pUVar16);
    pTVar17 = UE::Math::TTransform<double>::ToMatrixWithScale
                        (&local_278,(TMatrix<double> *)local_218);
    DrawBox(pFVar18,pTVar17,(TVector<double> *)&local_2b8._s_0,pFVar19,'\x01');
  }
  return;
}

// SetCenter @ 1496bd340

void __thiscall UGizmoElementBox::SetCenter(UGizmoElementBox *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar1;
  (this->Center).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetDimensions @ 1496bd450

void __thiscall UGizmoElementBox::SetDimensions(UGizmoElementBox *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Dimensions).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Dimensions).field0_0x0._s_0.Y = dVar1;
  (this->Dimensions).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetSideDirection @ 1496bfbe0

void __thiscall UGizmoElementBox::SetSideDirection(UGizmoElementBox *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->SideDirection).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->SideDirection).field0_0x0._s_0.Y = dVar1;
  (this->SideDirection).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->SideDirection,__real_3e45798ee0000000);
  return;
}

// SetUpDirection @ 1496c0730

void __thiscall UGizmoElementBox::SetUpDirection(UGizmoElementBox *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->UpDirection).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->UpDirection).field0_0x0._s_0.Y = dVar1;
  (this->UpDirection).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->UpDirection,__real_3e45798ee0000000);
  return;
}

// StaticRegisterNativesUGizmoElementBox @ 1496c2910

void __cdecl UGizmoElementBox::StaticRegisterNativesUGizmoElementBox(void)

{
  return;
}

