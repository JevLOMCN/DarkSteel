// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 20

// StaticClass @ 14966da40

UClass * __cdecl UGizmoElementLineStrip::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementLineStrip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementLineStrip",
               &Z_Registration_Info_UClass_UGizmoElementLineStrip.InnerSingleton,
               StaticRegisterNativesUGizmoElementLineStrip,0x240,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementLineStrip>,
               InternalVTableHelperCtorCaller<UGizmoElementLineStrip>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementLineStrip.InnerSingleton;
}

// UGizmoElementLineStrip @ 149685010

UGizmoElementLineStrip * __thiscall
UGizmoElementLineStrip::UGizmoElementLineStrip(UGizmoElementLineStrip *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementLineStrip__6B_;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Base).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Base).field0_0x0._s_0.Y = (double)uVar1;
  (this->Base).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpDirection).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  (this->UpDirection).field0_0x0._s_0.X = 0.0;
  (this->UpDirection).field0_0x0._s_0.Y = 0.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  this->bDrawLineStrip = true;
  (this->ProjectedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectedVertices).ArrayNum = 0;
  (this->ProjectedVertices).ArrayMax = 0;
  return this;
}

// UGizmoElementLineStrip @ 1496850b0

UGizmoElementLineStrip * __thiscall
UGizmoElementLineStrip::UGizmoElementLineStrip
          (UGizmoElementLineStrip *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementLineStrip__6B_;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Base).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Base).field0_0x0._s_0.Y = (double)uVar1;
  (this->Base).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpDirection).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  (this->UpDirection).field0_0x0._s_0.X = 0.0;
  (this->UpDirection).field0_0x0._s_0.Y = 0.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  this->bDrawLineStrip = true;
  (this->ProjectedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectedVertices).ArrayNum = 0;
  (this->ProjectedVertices).ArrayMax = 0;
  return this;
}

// ~UGizmoElementLineStrip @ 149689c00

void __thiscall UGizmoElementLineStrip::~UGizmoElementLineStrip(UGizmoElementLineStrip *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGizmoElementLineStrip__6B_;
  pFVar1 = (this->ProjectedVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14968b5b0

bool __thiscall
`UGizmoElementLineStrip::LineTrace'::__l5::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,double param_3,
          double *param_4)

{
  bool bVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  local_c8._s_0.X = (double)*(undefined8 *)this;
  local_c8._s_0.Y = *(double *)((longlong)this + 8);
  local_c8._s_0.Z = *(double *)((longlong)this + 0x10);
  local_b0._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_b0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_b0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_98._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_78._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_78._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_78._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_58._s_0.X = *(double *)((longlong)this + 0x30);
  local_58._s_0.Y = *(double *)((longlong)this + 0x38);
  local_58._s_0.Z = *(double *)((longlong)this + 0x40);
  local_38[0]._0_8_ = *(undefined8 *)this;
  local_38[0]._8_8_ = *(double *)((longlong)this + 8);
  local_38[0]._16_8_ = *(double *)((longlong)this + 0x10);
  FMath::SegmentDistToSegmentSafe<double>
            ((TVector<double> *)&local_38[0]._s_0,(TVector<double> *)&local_58._s_0,
             (TVector<double> *)&local_78._s_0,(TVector<double> *)&local_98._s_0,
             (TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_b0._s_0);
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_c8._s_0.X - *(double *)this) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_c8._s_0.X - *(double *)this,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar2 = local_c8._s_0.Y - *(double *)((longlong)this + 8),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar2 = local_c8._s_0.Z - *(double *)((longlong)this + 0x10),
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    auVar3._0_8_ = (local_b0._s_0.Z - local_c8._s_0.Z) * (local_b0._s_0.Z - local_c8._s_0.Z);
    auVar3._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (local_b0._s_0.Y - local_c8._s_0.Y) * (local_b0._s_0.Y - local_c8._s_0.Y) +
                   (local_b0._s_0.X - local_c8._s_0.X) * (local_b0._s_0.X - local_c8._s_0.X) +
                   auVar3._0_8_;
    auVar4 = sqrtpd(auVar3,auVar4);
    *param_4 = auVar4._0_8_;
    bVar1 = auVar4._0_8_ < param_3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// ComputeProjectedVertices @ 149698d10

void __thiscall
UGizmoElementLineStrip::ComputeProjectedVertices
          (UGizmoElementLineStrip *this,TTransform<double> *param_1,bool param_2)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TVector<double> *pTVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
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
  double dVar42;
  double dVar43;
  double dVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  undefined4 uVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  double dVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  
  auVar39 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar19 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar20 = *(undefined1 (*) [16])&(this->UpDirection).field0_0x0;
  auVar24 = blendpd(auVar19,auVar39,2);
  dVar3 = (this->UpDirection).field0_0x0._s_0.Z;
  dVar47 = auVar20._8_8_;
  dVar9 = auVar39._0_8_;
  auVar44._0_8_ = dVar47 * auVar19._0_8_ - auVar19._8_8_ * auVar20._0_8_;
  auVar44._8_8_ = dVar3 * auVar19._8_8_ - dVar9 * dVar47;
  dVar27 = (param_1->Rotation).ZW.m128d_f64[1];
  auVar52._8_4_ = SUB84(auVar44._8_8_,0);
  auVar52._0_8_ = auVar44._0_8_;
  auVar52._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar3;
  auVar19 = blendpd(auVar20,auVar19,2);
  dVar57 = auVar39._8_8_;
  auVar25._0_8_ = auVar19._0_8_ * dVar9 - auVar24._0_8_ * dVar3;
  auVar25._8_8_ = auVar19._8_8_ * dVar57 - auVar24._8_8_ * 0.0;
  auVar19 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar24 = blendpd(auVar44,auVar25,2);
  dVar50 = auVar52._8_8_ + auVar52._8_8_;
  dVar56 = auVar25._0_8_ + auVar25._0_8_;
  auVar35._8_4_ = SUB84(dVar56,0);
  auVar35._0_8_ = dVar50;
  uVar49 = (undefined4)((ulonglong)dVar56 >> 0x20);
  auVar35._12_4_ = uVar49;
  auVar45._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar45._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar28._8_4_ = SUB84(dVar56,0);
  auVar28._0_8_ = dVar50;
  auVar28._12_4_ = uVar49;
  auVar25 = blendpd(auVar19,auVar39,2);
  auVar36._0_8_ = auVar35._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar50;
  auVar36._8_8_ = auVar45._0_8_ * auVar19._8_8_ - dVar9 * dVar56;
  auVar29 = blendpd(auVar28,auVar45,2);
  auVar19 = *(undefined1 (*) [16])&(this->SideDirection).field0_0x0;
  auVar24._8_4_ = SUB84(auVar36._8_8_,0);
  auVar24._0_8_ = auVar36._0_8_;
  auVar24._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  dVar18 = (this->SideDirection).field0_0x0._s_0.Z;
  dVar43 = auVar19._8_8_;
  auVar30._0_8_ = auVar29._0_8_ * dVar9 - auVar25._0_8_ * auVar45._0_8_;
  auVar30._8_8_ = auVar29._8_8_ * dVar57 - auVar25._8_8_ * auVar45._8_8_;
  dVar51 = dVar50 * dVar27 + auVar20._0_8_ + auVar24._8_8_;
  dVar56 = dVar56 * dVar27 + dVar47 + auVar30._0_8_;
  auVar20 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar25 = blendpd(auVar20,auVar39,2);
  auVar58._0_8_ = dVar43 * auVar20._0_8_ - auVar20._8_8_ * auVar19._0_8_;
  auVar58._8_8_ = dVar18 * auVar20._8_8_ - dVar9 * dVar43;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar18;
  auVar20 = blendpd(auVar19,auVar20,2);
  auVar24 = blendpd(auVar36,auVar30,2);
  auVar29._0_8_ = auVar20._0_8_ * dVar9 - auVar25._0_8_ * dVar18;
  auVar29._8_8_ = auVar20._8_8_ * dVar57 - auVar25._8_8_ * 0.0;
  dStack_a0 = dVar56;
  local_a8 = dVar51;
  auVar20 = blendpd(auVar58,auVar29,2);
  dVar47 = auVar58._8_8_ + auVar58._8_8_;
  dVar50 = auVar29._0_8_ + auVar29._0_8_;
  uVar49 = (undefined4)((ulonglong)dVar50 >> 0x20);
  auVar59._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar59._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  local_98 = dVar27 * auVar45._0_8_ + dVar3 + auVar24._0_8_;
  auVar20 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar37._8_4_ = SUB84(dVar50,0);
  auVar37._0_8_ = dVar47;
  auVar37._12_4_ = uVar49;
  auVar31._8_4_ = SUB84(dVar50,0);
  auVar31._0_8_ = dVar47;
  auVar31._12_4_ = uVar49;
  pTVar15 = &this->Base;
  auVar24 = blendpd(auVar31,auVar59,2);
  auVar25 = blendpd(auVar20,auVar39,2);
  dVar27 = auVar25._8_8_ * auVar59._8_8_;
  auVar38._0_8_ = auVar37._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar47;
  auVar38._8_8_ = auVar59._0_8_ * auVar20._8_8_ - dVar9 * dVar50;
  auVar39._8_4_ = SUB84(auVar38._8_8_,0);
  auVar39._0_8_ = auVar38._0_8_;
  auVar39._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
  auVar32._0_8_ = auVar24._0_8_ * dVar9 - auVar25._0_8_ * auVar59._0_8_;
  auVar32._8_8_ = auVar24._8_8_ * dVar57 - dVar27;
  dVar9 = dVar47 * dVar57 + auVar19._0_8_ + auVar39._8_8_;
  dVar3 = dVar50 * dVar57 + dVar43 + auVar32._0_8_;
  uVar49 = SUB84(dVar3,0);
  uVar60 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar3 = local_98 * dVar9;
  auVar10._4_8_ = dVar27;
  auVar10._0_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar26._0_8_ = auVar10._0_8_ << 0x20;
  auVar26._8_4_ = uVar49;
  auVar26._12_4_ = uVar60;
  dVar47 = local_98 * auVar26._8_8_;
  local_c8._8_4_ = uVar49;
  local_c8._0_8_ = dVar9;
  local_c8._12_4_ = uVar60;
  auVar39 = blendpd(auVar38,auVar32,2);
  local_b8 = auVar59._0_8_ * dVar57 + dVar18 + auVar39._0_8_;
  dVar18 = local_b8 * dVar56;
  dVar57 = local_b8 * dVar51;
  if (!param_2) {
    pTVar15 = &UE::Math::TVector<double>::ZeroVector;
  }
  auVar39 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  pTVar2 = &this->ProjectedVertices;
  auVar19 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  piVar1 = &(this->ProjectedVertices).ArrayMax;
  dVar27 = (pTVar15->field0_0x0)._s_0.X * (param_1->Scale3D).XY.m128d_f64[0];
  dVar43 = (pTVar15->field0_0x0)._s_0.Y * (param_1->Scale3D).XY.m128d_f64[1];
  uVar49 = (undefined4)((ulonglong)dVar43 >> 0x20);
  dVar11 = (param_1->Rotation).ZW.m128d_f64[1];
  auVar53._8_4_ = SUB84(dVar43,0);
  auVar53._0_8_ = dVar27;
  auVar53._12_4_ = uVar49;
  dVar8 = (pTVar15->field0_0x0)._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar42 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar20 = blendpd(auVar19,auVar39,2);
  dVar50 = auVar39._0_8_;
  auVar54._0_8_ = auVar53._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar27;
  auVar54._8_8_ = dVar8 * auVar19._8_8_ - dVar50 * dVar43;
  auVar21._8_4_ = SUB84(dVar43,0);
  auVar21._0_8_ = dVar27;
  auVar21._12_4_ = uVar49;
  auVar46._8_4_ = SUB84(auVar54._8_8_,0);
  auVar46._0_8_ = auVar54._0_8_;
  auVar46._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
  auVar7._8_4_ = SUB84(dVar42,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  auVar19 = blendpd(auVar21,auVar7,2);
  auVar22._0_8_ = auVar19._0_8_ * dVar50 - auVar20._0_8_ * dVar8;
  auVar22._8_8_ = auVar19._8_8_ * auVar39._8_8_ - auVar20._8_8_ * dVar42;
  auVar19 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar20 = blendpd(auVar54,auVar22,2);
  auVar55._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar55._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar42 = auVar46._8_8_ + auVar46._8_8_;
  dVar48 = auVar22._0_8_ + auVar22._0_8_;
  auVar40._8_4_ = SUB84(dVar48,0);
  auVar40._0_8_ = dVar42;
  uVar49 = (undefined4)((ulonglong)dVar48 >> 0x20);
  auVar40._12_4_ = uVar49;
  auVar33._8_4_ = SUB84(dVar48,0);
  auVar33._0_8_ = dVar42;
  auVar33._12_4_ = uVar49;
  auVar20 = blendpd(auVar33,auVar55,2);
  auVar41._0_8_ = auVar40._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar42;
  auVar41._8_8_ = auVar55._0_8_ * auVar19._8_8_ - dVar50 * dVar48;
  auVar23._8_4_ = SUB84(auVar41._8_8_,0);
  auVar23._0_8_ = auVar41._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
  auVar19 = blendpd(auVar19,auVar39,2);
  local_f0 = (param_1->Scale3D).ZW.m128d_f64[0];
  auVar34._0_8_ = auVar20._0_8_ * dVar50 - auVar19._0_8_ * auVar55._0_8_;
  auVar34._8_8_ = auVar20._8_8_ * auVar39._8_8_ - auVar19._8_8_ * auVar55._8_8_;
  local_100 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_f8 = (param_1->Scale3D).XY.m128d_f64[1];
  auVar39 = blendpd(auVar41,auVar34,2);
  dStack_e0 = dVar48 * dVar11 + dVar43 + auVar34._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  local_e8 = dVar42 * dVar11 + dVar27 + auVar23._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  local_d8 = auVar55._0_8_ * dVar11 + dVar8 + auVar39._0_8_ + (param_1->Translation).ZW.m128d_f64[0]
  ;
  (this->ProjectedVertices).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar17 = (this->Vertices).ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar17,&pTVar2->AllocatorInstance,(this->ProjectedVertices).ArrayNum,piVar1);
  }
  uVar17 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar16 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar17 < (this->Vertices).ArrayNum) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->Vertices).AllocatorInstance.Data;
      dVar27 = local_100 * *(double *)(pFVar4 + lVar16);
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      dVar43 = dStack_f8 * *(double *)(pFVar4 + lVar16 + 8);
      dVar50 = local_f0 * *(double *)(pFVar4 + lVar16 + 0x10);
      local_118 = (dVar47 - dVar18) * dVar27 + local_e8 + dVar43 * (double)local_c8._0_8_ +
                  dVar50 * local_a8;
      dStack_110 = (dVar57 - dVar3) * dVar27 + dStack_e0 + dVar43 * (double)local_c8._8_8_ +
                   dVar50 * dStack_a0;
      local_108 = (dVar9 * dVar56 - auVar26._8_8_ * dVar51) * dVar27 + local_d8 + dVar43 * local_b8
                  + dVar50 * local_98;
      if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar5 + (longlong)*piVar1 * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar14 = (this->ProjectedVertices).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      uVar17 = uVar17 + 1;
      (this->ProjectedVertices).ArrayNum = iVar14 + 1;
      lVar16 = lVar16 + 0x18;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      pFVar4 = pFVar5 + (longlong)iVar14 * 0x18;
      *(double *)pFVar4 = local_118;
      *(double *)(pFVar4 + 8) = dStack_110;
      *(double *)(pFVar5 + (longlong)iVar14 * 0x18 + 0x10) = local_108;
    } while ((int)uVar17 < (this->Vertices).ArrayNum);
  }
  return;
}

// GetBase @ 1496a0420

TVector<double> * __thiscall
UGizmoElementLineStrip::GetBase
          (UGizmoElementLineStrip *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Base).field0_0x0._s_0.Y;
  dVar1 = (this->Base).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Base).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetDrawLineStrip @ 1496a0ee0

bool __thiscall UGizmoElementLineStrip::GetDrawLineStrip(UGizmoElementLineStrip *this)

{
  return this->bDrawLineStrip;
}

// GetPrivateStaticClass @ 1496a5590

UClass * __cdecl UGizmoElementLineStrip::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementLineStrip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementLineStrip",
               &Z_Registration_Info_UClass_UGizmoElementLineStrip.InnerSingleton,
               StaticRegisterNativesUGizmoElementLineStrip,0x240,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementLineStrip>,
               InternalVTableHelperCtorCaller<UGizmoElementLineStrip>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementLineStrip.InnerSingleton;
}

// GetSideDirection @ 1496a7f10

TVector<double> * __thiscall
UGizmoElementLineStrip::GetSideDirection
          (UGizmoElementLineStrip *this,TVector<double> *__return_storage_ptr__)

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

// GetUpDirection @ 1496a9350

TVector<double> * __thiscall
UGizmoElementLineStrip::GetUpDirection
          (UGizmoElementLineStrip *this,TVector<double> *__return_storage_ptr__)

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

// GetVertices @ 1496a97b0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
UGizmoElementLineStrip::GetVertices(UGizmoElementLineStrip *this)

{
  return &this->Vertices;
}

// LineTrace @ 1496b0070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FInputRayHit * __thiscall
UGizmoElementLineStrip::LineTrace
          (UGizmoElementLineStrip *this,FInputRayHit *__return_storage_ptr__,
          UGizmoViewContext *param_1,FLineTraceTraversalState *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FLineTraceOutput *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FInputRayHit *pFVar9;
  uint uVar10;
  undefined1 auStackY_188 [32];
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  TVector<double>_u_0 TStack_138;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  TTransform<double> local_c8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_c8.Rotation.XY.m128d_f64[0] = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  local_c8.Rotation.XY.m128d_f64[1] = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  local_c8.Rotation.ZW.m128d_f64[0] = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  local_c8.Rotation.ZW.m128d_f64[1] = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  local_c8.Translation.XY.m128d_f64[0] =
       (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  local_c8.Translation.XY.m128d_f64[1] =
       (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  local_c8.Scale3D.XY.m128d_f64[0] = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  local_c8.Scale3D.XY.m128d_f64[1] = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  local_c8.Translation.ZW.m128d_f64[0] =
       (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  local_c8.Translation.ZW.m128d_f64[1] =
       (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  local_68 = *(undefined4 *)&param_2->PixelToWorldScale;
  uStack_64 = *(undefined4 *)((longlong)&param_2->PixelToWorldScale + 4);
  uStack_60._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_60._1_1_ = param_2->HitSortType;
  uStack_60._2_2_ = *(undefined2 *)&param_2->field_0x6a;
  uStack_5c = *(undefined4 *)&param_2->field_0x6c;
  local_c8.Scale3D.ZW.m128d_f64[0]._0_4_ =
       *(undefined4 *)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
  local_c8.Scale3D.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
  local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       *(undefined4 *)((param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 1);
  local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 0xc);
  cVar5 = (**(code **)(this->_padding_ + 0x6a8))(local_68,param_1,&this->Base,&local_c8);
  if ((cVar5 != '\0') && (1 < (this->Vertices).ArrayNum)) {
    dVar4 = (double)*(float *)&this->_padding_ * (double)CONCAT44(uStack_64,local_68);
    ComputeProjectedVertices(this,&local_c8,false);
    local_150 = (param_3->field0_0x0)._s_0.X;
    dStack_148 = (param_3->field0_0x0)._s_0.Y;
    local_140 = (param_3->field0_0x0)._s_0.Z;
    TStack_138._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    TStack_138._s_0.X = (param_4->field0_0x0)._s_0.X;
    TStack_138._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    UE::Math::TVector<double>::Normalize
              ((TVector<double> *)&TStack_138._s_0,__real_3e45798ee0000000);
    uVar10 = 0;
    iVar1 = (this->ProjectedVertices).ArrayNum;
    local_108 = local_140;
    dStack_100 = TStack_138._s_0.X;
    local_f8 = TStack_138._s_0.Y;
    dStack_f0 = TStack_138._s_0.Z;
    local_118 = local_150;
    dStack_110 = dStack_148;
    local_e8 = TStack_138._s_0.X * __real_40c3880000000000 + local_150;
    local_e0 = TStack_138._s_0.Y * __real_40c3880000000000 + dStack_148;
    local_d8 = TStack_138._s_0.Z * __real_40c3880000000000 + local_140;
    local_158 = 0.0;
    if (this->bDrawLineStrip == false) {
      if (0 < iVar1) {
        do {
          uVar7 = 0;
          if ((int)uVar10 < (this->ProjectedVertices).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FInputRayHit *)(*pcVar3)();
            return pFVar9;
          }
          uVar7 = uVar10 + 1;
          pFVar2 = (this->ProjectedVertices).AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar7 < (this->ProjectedVertices).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FInputRayHit *)(*pcVar3)();
            return pFVar9;
          }
          bVar6 = `UGizmoElementLineStrip::LineTrace'::__l5::<lambda_1>::operator()
                            (&local_118,(TVector<double> *)(pFVar2 + (longlong)(int)uVar10 * 0x18),
                             (TVector<double> *)
                             ((this->ProjectedVertices).AllocatorInstance.Data +
                             (longlong)(int)uVar7 * 0x18),dVar4,&local_158);
          if (bVar6) {
            (**(code **)(this->_padding_ + 0x6b0))
                      (this,__return_storage_ptr__,SUB84(local_158,0),param_5);
            return __return_storage_ptr__;
          }
          uVar10 = uVar10 + 2;
        } while ((int)uVar10 < (this->ProjectedVertices).ArrayNum);
      }
    }
    else if (0 < iVar1 + -1) {
      do {
        uVar7 = 0;
        if ((int)uVar10 < (this->ProjectedVertices).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FInputRayHit *)(*pcVar3)();
          return pFVar9;
        }
        uVar7 = uVar10 + 1;
        pFVar2 = (this->ProjectedVertices).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar7 < (this->ProjectedVertices).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FInputRayHit *)(*pcVar3)();
          return pFVar9;
        }
        bVar6 = `UGizmoElementLineStrip::LineTrace'::__l5::<lambda_1>::operator()
                          (&local_118,(TVector<double> *)(pFVar2 + (longlong)(int)uVar10 * 0x18),
                           (TVector<double> *)
                           ((this->ProjectedVertices).AllocatorInstance.Data +
                           (longlong)(int)uVar7 * 0x18),dVar4,&local_158);
        if (bVar6) {
          (**(code **)(this->_padding_ + 0x6b0))
                    (this,__return_storage_ptr__,SUB84(local_158,0),param_5);
          return __return_storage_ptr__;
        }
        uVar10 = uVar7;
      } while ((int)uVar7 < (this->ProjectedVertices).ArrayNum + -1);
    }
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Render @ 1496b9f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UGizmoElementLineStrip::Render
          (UGizmoElementLineStrip *this,IToolsContextRenderAPI *param_1,
          FRenderTraversalState *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  FWeakObjectPtr FVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  EGizmoElementInteractionState EVar16;
  bool bVar17;
  undefined2 uVar18;
  FRenderTraversalState *pFVar19;
  FRenderTraversalState *pFVar20;
  bool bVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  FRenderTraversalState *pFVar25;
  longlong *plVar26;
  FLinearColor *this_00;
  FRenderTraversalState *pFVar27;
  longlong lVar28;
  uint uVar29;
  undefined1 auStackY_258 [32];
  byte local_218;
  byte local_217;
  byte local_216;
  byte local_215;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  FLinearColor local_1f4;
  FRenderTraversalState local_1d8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (param_1 == (IToolsContextRenderAPI *)0x0) {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5871385787311849456>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementLineStrip.cpp"
                        ,0x10,"RenderAPI");
    if (bVar21) {
code_r0x0001496ba117:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    lVar28 = 2;
    pFVar19 = param_2;
    pFVar20 = &local_1d8;
    do {
      pFVar27 = pFVar20;
      pFVar25 = pFVar19;
      pFVar20 = (FRenderTraversalState *)
                &(pFVar27->MeshRenderState).HoverMaterial.bOverridesChildState;
      dVar7 = (pFVar25->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
      dVar8 = (pFVar25->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
      dVar9 = (pFVar25->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
      pFVar19 = (FRenderTraversalState *)
                &(pFVar25->MeshRenderState).HoverMaterial.bOverridesChildState;
      (pFVar27->LocalToWorldTransform).Rotation.XY.m128d_f64[0] =
           (pFVar25->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
      (pFVar27->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = dVar7;
      dVar7 = (pFVar25->LocalToWorldTransform).Translation.XY.m128d_f64[0];
      dVar10 = (pFVar25->LocalToWorldTransform).Translation.XY.m128d_f64[1];
      (pFVar27->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = dVar8;
      (pFVar27->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = dVar9;
      dVar8 = (pFVar25->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
      dVar9 = (pFVar25->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
      (pFVar27->LocalToWorldTransform).Translation.XY.m128d_f64[0] = dVar7;
      (pFVar27->LocalToWorldTransform).Translation.XY.m128d_f64[1] = dVar10;
      dVar7 = (pFVar25->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
      dVar10 = (pFVar25->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
      (pFVar27->LocalToWorldTransform).Translation.ZW.m128d_f64[0] = dVar8;
      (pFVar27->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = dVar9;
      dVar8 = (pFVar25->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
      dVar9 = (pFVar25->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
      (pFVar27->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] = dVar7;
      (pFVar27->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = dVar10;
      dVar7 = pFVar25->PixelToWorldScale;
      EVar16 = pFVar25->InteractionState;
      iVar1 = (pFVar25->MeshRenderState).Material.Value.WeakPtr.ObjectIndex;
      (pFVar27->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = dVar8;
      (pFVar27->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
      uVar11 = *(undefined8 *)&(pFVar25->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
      FVar12 = (pFVar25->MeshRenderState).HoverMaterial.Value.WeakPtr;
      pFVar27->PixelToWorldScale = dVar7;
      pFVar27->InteractionState = EVar16;
      (pFVar27->MeshRenderState).Material.Value.WeakPtr.ObjectIndex = iVar1;
      *(undefined8 *)&(pFVar27->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber = uVar11;
      (pFVar27->MeshRenderState).HoverMaterial.Value.WeakPtr = FVar12;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    uVar11 = *(undefined8 *)
              &(pFVar25->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
    FVar12 = (pFVar25->MeshRenderState).SelectMaterial.Value.WeakPtr;
    uVar13 = *(undefined8 *)&(pFVar25->MeshRenderState).SelectMaterial.bOverridesChildState;
    *(undefined8 *)pFVar20 = *(undefined8 *)pFVar19;
    *(undefined8 *)&(pFVar27->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber =
         uVar11;
    uVar11 = *(undefined8 *)
              &(pFVar25->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
    uVar14 = *(undefined8 *)&(pFVar25->MeshRenderState).VertexColor.Value.field0_0x0;
    (pFVar27->MeshRenderState).SelectMaterial.Value.WeakPtr = FVar12;
    *(undefined8 *)&(pFVar27->MeshRenderState).SelectMaterial.bOverridesChildState = uVar13;
    uVar13 = *(undefined8 *)((longlong)&(pFVar25->MeshRenderState).VertexColor.Value.field0_0x0 + 8)
    ;
    uVar15 = *(undefined8 *)&(pFVar25->MeshRenderState).VertexColor.bHasValue;
    *(undefined8 *)&(pFVar27->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber =
         uVar11;
    *(undefined8 *)&(pFVar27->MeshRenderState).VertexColor.Value.field0_0x0 = uVar14;
    uVar11 = *(undefined8 *)
              ((longlong)&(pFVar25->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
    uVar14 = *(undefined8 *)
              ((longlong)&(pFVar25->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
    *(undefined8 *)((longlong)&(pFVar27->MeshRenderState).VertexColor.Value.field0_0x0 + 8) = uVar13
    ;
    *(undefined8 *)&(pFVar27->MeshRenderState).VertexColor.bHasValue = uVar15;
    uVar13 = *(undefined8 *)&(pFVar25->MeshRenderState).InteractVertexColor.Value.field0_0x0;
    uVar15 = *(undefined8 *)
              ((longlong)&(pFVar25->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8);
    *(undefined8 *)((longlong)&(pFVar27->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4) =
         uVar11;
    *(undefined8 *)((longlong)&(pFVar27->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc) =
         uVar14;
    bVar21 = (pFVar25->MeshRenderState).InteractVertexColor.bHasValue;
    bVar17 = (pFVar25->MeshRenderState).InteractVertexColor.bOverridesChildState;
    uVar18 = *(undefined2 *)&(pFVar25->MeshRenderState).InteractVertexColor.field_0x12;
    fVar4 = (pFVar25->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
    fVar5 = (pFVar25->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
    fVar6 = (pFVar25->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
    lVar28 = this->_padding_;
    *(undefined8 *)&(pFVar27->MeshRenderState).InteractVertexColor.Value.field0_0x0 = uVar13;
    *(undefined8 *)((longlong)&(pFVar27->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8)
         = uVar15;
    (pFVar27->MeshRenderState).InteractVertexColor.bHasValue = bVar21;
    (pFVar27->MeshRenderState).InteractVertexColor.bOverridesChildState = bVar17;
    *(undefined2 *)&(pFVar27->MeshRenderState).InteractVertexColor.field_0x12 = uVar18;
    (pFVar27->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R = fVar4;
    (pFVar27->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G = fVar5;
    (pFVar27->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B = fVar6;
    cVar22 = (**(code **)(lVar28 + 0x698))(this,param_1,&this->Base,&local_1d8);
    if ((cVar22 != '\0') && (1 < (this->Vertices).ArrayNum)) {
      plVar26 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
      ComputeProjectedVertices(this,&param_2->LocalToWorldTransform,true);
      lVar28 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
      if (lVar28 == 0) {
        bVar21 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5871385787311849442>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementLineStrip.cpp"
                            ,0x1e,"View");
        if (bVar21) goto code_r0x0001496ba117;
      }
      else {
        (**(code **)(this->_padding_ + 0x6b8))
                  (this,*(double *)(lVar28 + 0x428) <= __real_3ff0000000000000 &&
                        __real_3ff0000000000000 != *(double *)(lVar28 + 0x428),
                   *(undefined4 *)(lVar28 + 0xde8));
        this_00 = UGizmoElementBase::FRenderTraversalState::GetCurrentLineColor
                            (&local_1d8,&local_1f4);
        FLinearColor::ToFColorSRGB(this_00);
        fVar4 = __real_3b808081;
        iVar1 = (this->ProjectedVertices).ArrayNum;
        uVar29 = 0;
        if (this->bDrawLineStrip == false) {
          if (0 < iVar1) {
            do {
              uVar23 = 0;
              if ((int)uVar29 < (this->ProjectedVertices).ArrayNum) {
                uVar23 = ~uVar29 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar23 = uVar29 + 1;
              pFVar2 = (this->ProjectedVertices).AllocatorInstance.Data;
              uVar24 = 0;
              if ((int)uVar23 < (this->ProjectedVertices).ArrayNum) {
                uVar24 = ~uVar23 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_204 = FLinearColor::sRGBToLinearTable[local_216];
              local_200 = FLinearColor::sRGBToLinearTable[local_217];
              local_1fc = FLinearColor::sRGBToLinearTable[local_218];
              local_1f8 = (float)local_215 * fVar4;
              (**(code **)(*plVar26 + 0x30))
                        (plVar26,pFVar2 + (longlong)(int)uVar29 * 0x18,
                         (this->ProjectedVertices).AllocatorInstance.Data +
                         (longlong)(int)uVar23 * 0x18,&local_204);
              uVar29 = uVar29 + 2;
            } while ((int)uVar29 < (this->ProjectedVertices).ArrayNum);
          }
        }
        else if (0 < iVar1 + -1) {
          do {
            uVar23 = 0;
            if ((int)uVar29 < (this->ProjectedVertices).ArrayNum) {
              uVar23 = ~uVar29 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar23 = uVar29 + 1;
            pFVar2 = (this->ProjectedVertices).AllocatorInstance.Data;
            uVar24 = 0;
            if ((int)uVar23 < (this->ProjectedVertices).ArrayNum) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_214 = FLinearColor::sRGBToLinearTable[local_216];
            local_210 = FLinearColor::sRGBToLinearTable[local_217];
            local_20c = FLinearColor::sRGBToLinearTable[local_218];
            local_208 = (float)local_215 * fVar4;
            (**(code **)(*plVar26 + 0x30))
                      (plVar26,pFVar2 + (longlong)(int)uVar29 * 0x18,
                       (this->ProjectedVertices).AllocatorInstance.Data +
                       (longlong)(int)uVar23 * 0x18,&local_214);
            uVar29 = uVar23;
          } while ((int)uVar23 < (this->ProjectedVertices).ArrayNum + -1);
        }
      }
    }
  }
  return;
}

// SetBase @ 1496bd2e0

void __thiscall
UGizmoElementLineStrip::SetBase(UGizmoElementLineStrip *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->Base).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Base).field0_0x0._s_0.Y = dVar2;
  (this->Base).field0_0x0._s_0.Z = dVar1;
  return;
}

// SetDrawLineStrip @ 1496bd4f0

void __thiscall UGizmoElementLineStrip::SetDrawLineStrip(UGizmoElementLineStrip *this,bool param_1)

{
  this->bDrawLineStrip = param_1;
  return;
}

// SetSideDirection @ 1496bfc10

void __thiscall
UGizmoElementLineStrip::SetSideDirection(UGizmoElementLineStrip *this,TVector<double> *param_1)

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

// SetUpDirection @ 1496c0760

void __thiscall
UGizmoElementLineStrip::SetUpDirection(UGizmoElementLineStrip *this,TVector<double> *param_1)

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

// SetVertices @ 1496c0b90

void __thiscall
UGizmoElementLineStrip::SetVertices
          (UGizmoElementLineStrip *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  operator=<UE::Math::TVector<double>_const_,int>(&this->Vertices,param_1);
  return;
}

// StaticRegisterNativesUGizmoElementLineStrip @ 1496c29b0

void __cdecl UGizmoElementLineStrip::StaticRegisterNativesUGizmoElementLineStrip(void)

{
  return;
}

