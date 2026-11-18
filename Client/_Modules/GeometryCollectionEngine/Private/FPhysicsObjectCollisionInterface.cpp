// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// LineTrace<ChaosInterface::FRaycastHit> @ 14635a4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<0>::LineTrace<ChaosInterface::FRaycastHit>
          (FPhysicsObjectCollisionInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,bool param_4,FRaycastHit *param_5)

{
  FPhysicsObject **ppFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  FPhysicsObject **ppFVar14;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar56;
  undefined1 unaff_XMM12 [16];
  undefined1 auVar57 [16];
  undefined1 auStack_288 [32];
  char local_268 [8];
  FPhysicsObject *local_260;
  double local_258;
  double dStack_250;
  double local_248;
  FPhysicsObject **local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  code *local_228;
  FPhysicsObjectCollisionInterface<0> **local_220;
  FPhysicsObjectCollisionInterface<0> *local_218;
  char *local_210;
  TTransform<double> *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  double *local_1f0;
  double local_1e8;
  double *local_1e0;
  bool local_1d8;
  FRaycastHit *local_1d0;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_1c8;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined1 local_1a0 [16];
  double local_190;
  double local_188 [2];
  double local_178 [2];
  double local_168 [2];
  double local_158 [2];
  double local_148 [2];
  double local_138 [2];
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_288;
  local_268[0] = '\0';
  *(undefined4 *)&param_5->_padding_ = 0x7f7fffff;
  dStack_250 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  local_258 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  local_248 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  auVar57._0_8_ = dStack_250 * dStack_250 + local_258 * local_258 + local_248 * local_248;
  auVar57._8_8_ = 0;
  auVar57 = sqrtpd(unaff_XMM12,auVar57);
  if (__real_3f1a36e2e0000000 <= auVar57._0_8_) {
    ppFVar14 = param_1->DataPtr;
    local_188[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_188[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_178[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_178[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    ppFVar1 = ppFVar14 + param_1->ArrayNum;
    local_168[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_168[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_158[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_158[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_148[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_148[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_138[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_138[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    cVar13 = '\0';
    if (ppFVar14 != ppFVar1) {
      do {
        local_260 = *ppFVar14;
        FReadPhysicsObjectInterface<0>::GetTransform(this->Interface,&local_128,local_260);
        dVar55 = local_128.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar56 = local_128.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar11 = local_128.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar12 = local_128.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar4 = (param_2->field0_0x0)._s_0.Z - local_128.Translation.ZW.m128d_f64[0];
        dVar41 = (param_2->field0_0x0)._s_0.X - local_128.Translation.XY.m128d_f64[0];
        dVar47 = (param_2->field0_0x0)._s_0.Y - local_128.Translation.XY.m128d_f64[1];
        auVar48._8_8_ = 0;
        auVar48._0_8_ = dVar4;
        auVar38._8_4_ = SUB84(dVar47,0);
        auVar38._0_8_ = dVar41;
        uVar37 = (undefined4)((ulonglong)dVar47 >> 0x20);
        auVar38._12_4_ = uVar37;
        auVar15._8_4_ = SUB84(dVar47,0);
        auVar15._0_8_ = dVar41;
        auVar15._12_4_ = uVar37;
        auVar16 = blendpd(auVar15,auVar48,2);
        auVar53._8_4_ = SUB84(dVar56,0);
        auVar53._0_8_ = dVar55;
        auVar53._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
        auVar39._0_8_ = auVar38._8_8_ * dVar55 - dVar56 * dVar41;
        auVar39._8_8_ = dVar4 * dVar56 - dVar11 * dVar47;
        auVar54._8_4_ = SUB84(dVar12,0);
        auVar54._0_8_ = dVar11;
        auVar54._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar54 = blendpd(auVar53,auVar54,2);
        dVar10 = auVar54._0_8_;
        dVar8 = auVar54._8_8_;
        auVar17._0_8_ = auVar16._0_8_ * dVar11 - dVar10 * dVar4;
        auVar17._8_8_ = auVar16._8_8_ * dVar12 - dVar8 * 0.0;
        auVar54 = blendpd(auVar39,auVar17,2);
        dVar7 = auVar39._8_8_ + auVar39._8_8_;
        dVar9 = auVar17._0_8_ + auVar17._0_8_;
        uVar37 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar40._0_8_ = auVar54._0_8_ + auVar54._0_8_;
        auVar40._8_8_ = auVar54._8_8_ + auVar54._8_8_;
        auVar29._8_4_ = SUB84(dVar9,0);
        auVar29._0_8_ = dVar7;
        auVar29._12_4_ = uVar37;
        auVar18._8_4_ = SUB84(dVar9,0);
        auVar18._0_8_ = dVar7;
        auVar18._12_4_ = uVar37;
        auVar54 = blendpd(auVar18,auVar40,2);
        auVar30._0_8_ = auVar29._8_8_ * dVar55 - dVar7 * dVar56;
        auVar30._8_8_ = auVar40._0_8_ * dVar56 - dVar9 * dVar11;
        auVar19._0_8_ = auVar54._0_8_ * dVar11 - auVar40._0_8_ * dVar10;
        auVar19._8_8_ = auVar54._8_8_ * dVar12 - auVar40._8_8_ * dVar8;
        auVar49._8_8_ = 0;
        auVar49._0_8_ = local_248;
        dVar9 = dVar9 * dVar12 + dVar47 + auVar19._0_8_;
        auVar54 = blendpd(auVar30,auVar19,2);
        local_1a8 = auVar40._0_8_ * dVar12 + dVar4 + auVar54._0_8_;
        local_1b8._8_4_ = SUB84(dVar9,0);
        local_1b8._0_8_ = dVar7 * dVar12 + dVar41 + auVar30._8_8_;
        local_1b8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar16._8_8_ = dStack_250;
        auVar16._0_8_ = local_258;
        auVar54 = blendpd(auVar16,auVar49,2);
        auVar42._0_8_ = dStack_250 * dVar55 - local_258 * dVar56;
        auVar42._8_8_ = local_248 * dVar56 - dStack_250 * dVar11;
        auVar20._0_8_ = auVar54._0_8_ * dVar11 - dVar10 * local_248;
        auVar20._8_8_ = auVar54._8_8_ * dVar12 - dVar8 * 0.0;
        dVar4 = auVar42._8_8_ + auVar42._8_8_;
        dVar7 = auVar20._0_8_ + auVar20._0_8_;
        uVar37 = (undefined4)((ulonglong)dVar7 >> 0x20);
        auVar54 = blendpd(auVar42,auVar20,2);
        auVar31._8_4_ = SUB84(dVar7,0);
        auVar31._0_8_ = dVar4;
        auVar31._12_4_ = uVar37;
        auVar43._0_8_ = auVar54._0_8_ + auVar54._0_8_;
        auVar43._8_8_ = auVar54._8_8_ + auVar54._8_8_;
        local_210 = local_268;
        local_208 = &local_128;
        uStack_230 = 1;
        local_200 = local_1b8;
        local_1f8 = local_1a0;
        local_1f0 = &local_258;
        local_220 = &local_218;
        local_238 = &local_260;
        auVar21._8_4_ = SUB84(dVar7,0);
        auVar21._0_8_ = dVar4;
        auVar21._12_4_ = uVar37;
        auVar54 = blendpd(auVar21,auVar43,2);
        local_1d8 = param_4;
        local_1d0 = param_5;
        local_228 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::LineTrace<ChaosInterface::FRaycastHit>'::__l9::<lambda_1>,bool,Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*>
                    ::Call;
        auVar32._0_8_ = auVar31._8_8_ * dVar55 - dVar4 * dVar56;
        auVar32._8_8_ = auVar43._0_8_ * dVar56 - dVar7 * dVar11;
        auVar22._0_8_ = auVar54._0_8_ * dVar11 - auVar43._0_8_ * dVar10;
        auVar22._8_8_ = auVar54._8_8_ * dVar12 - auVar43._8_8_ * dVar8;
        dVar10 = dVar7 * dVar12 + dStack_250 + auVar22._0_8_;
        local_1c8._12_4_ = uStack_22c;
        local_1c8.ArrayNum = 1;
        auVar54 = blendpd(auVar32,auVar22,2);
        local_190 = auVar43._0_8_ * dVar12 + local_248 + auVar54._0_8_;
        local_1a0._8_4_ = SUB84(dVar10,0);
        local_1a0._0_8_ = dVar4 * dVar12 + local_258 + auVar32._8_8_;
        local_1a0._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_218 = this;
        local_1e8 = auVar57._0_8_;
        local_1e0 = local_188;
        local_1c8.DataPtr = local_238;
        FReadPhysicsObjectInterface<0>::VisitEveryShape
                  (this->Interface,&local_1c8,
                   (TFunctionRef<bool___cdecl(Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*)>
                    *)&local_228);
        ppFVar14 = ppFVar14 + 1;
      } while (ppFVar14 != ppFVar1);
      cVar13 = local_268[0];
      if (local_268[0] != '\0') {
        auVar2._0_8_ = param_5->_padding_;
        auVar2._8_8_ = param_5->_padding_;
        dVar10 = (double)param_5->_padding_;
        auVar50._8_8_ = 0;
        auVar50._0_8_ = dVar10;
        auVar57 = blendpd(auVar2,auVar50,2);
        dVar41 = local_178[0];
        dVar47 = local_178[1];
        dVar11 = local_188[0];
        dVar12 = local_188[1];
        auVar54 = blendpd((undefined1  [16])local_188,(undefined1  [16])local_178,2);
        auVar44._0_8_ = (double)auVar2._8_8_ * dVar11 - dVar12 * (double)auVar2._0_8_;
        auVar44._8_8_ = dVar10 * dVar12 - dVar41 * (double)auVar2._8_8_;
        dVar8 = auVar54._0_8_;
        dVar4 = auVar54._8_8_;
        auVar23._0_8_ = auVar57._0_8_ * dVar41 - dVar8 * dVar10;
        auVar23._8_8_ = auVar57._8_8_ * dVar47 - dVar4 * 0.0;
        auVar57 = blendpd(auVar44,auVar23,2);
        dVar7 = auVar44._8_8_ + auVar44._8_8_;
        dVar9 = auVar23._0_8_ + auVar23._0_8_;
        uVar37 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar45._0_8_ = auVar57._0_8_ + auVar57._0_8_;
        auVar45._8_8_ = auVar57._8_8_ + auVar57._8_8_;
        auVar33._8_4_ = SUB84(dVar9,0);
        auVar33._0_8_ = dVar7;
        auVar33._12_4_ = uVar37;
        auVar24._8_4_ = SUB84(dVar9,0);
        auVar24._0_8_ = dVar7;
        auVar24._12_4_ = uVar37;
        auVar57 = blendpd(auVar24,auVar45,2);
        auVar34._0_8_ = auVar33._8_8_ * dVar11 - dVar7 * dVar12;
        auVar34._8_8_ = auVar45._0_8_ * dVar12 - dVar9 * dVar41;
        auVar25._0_8_ = auVar57._0_8_ * dVar41 - auVar45._0_8_ * dVar8;
        auVar25._8_8_ = auVar57._8_8_ * dVar47 - auVar45._8_8_ * dVar4;
        auVar57 = blendpd(auVar34,auVar25,2);
        dVar7 = dVar7 * dVar47 + (double)auVar2._0_8_ + auVar34._8_8_;
        dVar9 = dVar9 * dVar47 + (double)auVar2._8_8_ + auVar25._0_8_;
        auVar5._8_4_ = SUB84(dVar9,0);
        auVar5._0_8_ = dVar7;
        auVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        param_5->_padding_ = (longlong)dVar7;
        param_5->_padding_ = auVar5._8_8_;
        param_5->_padding_ = (longlong)(auVar45._0_8_ * dVar47 + dVar10 + auVar57._0_8_);
        auVar3._0_8_ = param_5->_padding_;
        auVar3._8_8_ = param_5->_padding_;
        dVar10 = (double)param_5->_padding_;
        auVar46._8_8_ = 0;
        auVar46._0_8_ = dVar10;
        auVar57 = blendpd(auVar3,auVar46,2);
        auVar51._0_8_ = (double)auVar3._8_8_ * dVar11 - dVar12 * (double)auVar3._0_8_;
        auVar51._8_8_ = dVar10 * dVar12 - dVar41 * (double)auVar3._8_8_;
        auVar26._0_8_ = auVar57._0_8_ * dVar41 - dVar8 * dVar10;
        auVar26._8_8_ = auVar57._8_8_ * dVar47 - dVar4 * 0.0;
        auVar57 = blendpd(auVar51,auVar26,2);
        dVar7 = auVar51._8_8_ + auVar51._8_8_;
        dVar9 = auVar26._0_8_ + auVar26._0_8_;
        uVar37 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar52._0_8_ = auVar57._0_8_ + auVar57._0_8_;
        auVar52._8_8_ = auVar57._8_8_ + auVar57._8_8_;
        auVar35._8_4_ = SUB84(dVar9,0);
        auVar35._0_8_ = dVar7;
        auVar35._12_4_ = uVar37;
        auVar27._8_4_ = SUB84(dVar9,0);
        auVar27._0_8_ = dVar7;
        auVar27._12_4_ = uVar37;
        auVar57 = blendpd(auVar27,auVar52,2);
        auVar36._0_8_ = auVar35._8_8_ * dVar11 - dVar7 * dVar12;
        auVar36._8_8_ = auVar52._0_8_ * dVar12 - dVar9 * dVar41;
        auVar28._0_8_ = auVar57._0_8_ * dVar41 - auVar52._0_8_ * dVar8;
        auVar28._8_8_ = auVar57._8_8_ * dVar47 - auVar52._8_8_ * dVar4;
        auVar57 = blendpd(auVar36,auVar28,2);
        dVar8 = dVar7 * dVar47 + (double)auVar3._0_8_ + auVar36._8_8_ + local_168[0];
        local_168[1] = dVar9 * dVar47 + (double)auVar3._8_8_ + auVar28._0_8_ + local_168[1];
        auVar6._8_4_ = SUB84(local_168[1],0);
        auVar6._0_8_ = dVar8;
        auVar6._12_4_ = (int)((ulonglong)local_168[1] >> 0x20);
        param_5->_padding_ = (longlong)dVar8;
        param_5->_padding_ = auVar6._8_8_;
        param_5->_padding_ =
             (longlong)(auVar52._0_8_ * dVar47 + dVar10 + auVar57._0_8_ + local_158[0]);
      }
    }
  }
  else {
    cVar13 = '\0';
  }
  return (bool)cVar13;
}

// operator() @ 14635ff40

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::LineTrace<ChaosInterface::FRaycastHit>'::__l9::
<lambda_1>::operator()(void *this,FPhysicsObject *param_1,FShapeInstanceProxy *param_2)

{
  ulonglong uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  FCollisionFilterData *pFVar12;
  TGeometryParticle<double,3> *pTVar13;
  double dVar14;
  undefined4 local_res8 [2];
  double local_res18;
  undefined1 local_68 [16];
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if ((param_2 == (FShapeInstanceProxy *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shape",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsObjectCollisionInterface.h"
                         ,0x58,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pFVar12 = Chaos::FCollisionData::GetQueryData(&(param_2->CollisionData).Property);
  uVar1._0_4_ = pFVar12->Word2;
  uVar1._4_4_ = pFVar12->Word3;
  uVar7 = uVar1 & 0x100000000;
  if (*(char *)((longlong)this + 0x40) != '\0') {
    uVar7 = uVar1 & 0x200000000;
  }
  if (uVar7 != 0) {
    dVar14 = __real_3ff0000000000000 / *(double *)((longlong)this + 0x30);
    pcVar6 = *(code **)(*(longlong *)param_2->_padding_ + 0xb0);
    pdVar2 = *(double **)((longlong)this + 0x20);
    local_58 = dVar14 * pdVar2[2];
    puVar3 = *(undefined8 **)((longlong)this + 0x18);
    local_68._8_4_ = SUB84(pdVar2[1] * dVar14,0);
    local_68._0_8_ = *pdVar2 * dVar14;
    local_68._12_4_ = (int)((ulonglong)(pdVar2[1] * dVar14) >> 0x20);
    local_50 = *puVar3;
    uStack_48 = puVar3[1];
    local_40 = puVar3[2];
    cVar11 = (*pcVar6)((longlong *)param_2->_padding_,&local_50,local_68,pcVar6,0,&local_res18,
                       &local_20,&local_38,local_res8);
    if ((cVar11 != '\0') &&
       (local_res18 < (double)*(float *)(*(longlong *)((longlong)this + 0x48) + 0x70))) {
      **(undefined1 **)((longlong)this + 8) = 1;
      puVar3 = *(undefined8 **)((longlong)this + 0x10);
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
      uVar8 = puVar3[1];
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
      uVar8 = puVar3[3];
      puVar4[2] = puVar3[2];
      puVar4[3] = uVar8;
      uVar8 = puVar3[5];
      puVar4[4] = puVar3[4];
      puVar4[5] = uVar8;
      uVar8 = puVar3[7];
      puVar4[6] = puVar3[6];
      puVar4[7] = uVar8;
      uVar8 = puVar3[9];
      puVar4[8] = puVar3[8];
      puVar4[9] = uVar8;
      uVar8 = puVar3[0xb];
      puVar4[10] = puVar3[10];
      puVar4[0xb] = uVar8;
      *(float *)(*(longlong *)((longlong)this + 0x48) + 0x70) = (float)local_res18;
      lVar5 = *(longlong *)((longlong)this + 0x48);
      *(undefined8 *)(lVar5 + 0x58) = local_38;
      *(undefined8 *)(lVar5 + 0x60) = uStack_30;
      *(undefined8 *)(lVar5 + 0x68) = local_28;
      lVar5 = *(longlong *)((longlong)this + 0x48);
      *(undefined8 *)(lVar5 + 0x40) = local_20;
      *(undefined8 *)(lVar5 + 0x48) = uStack_18;
      *(undefined8 *)(lVar5 + 0x50) = local_10;
      *(FShapeInstanceProxy **)(*(longlong *)((longlong)this + 0x48) + 8) = param_2;
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
      pTVar13 = Chaos::FReadPhysicsObjectInterface<0>::GetParticle
                          ((FReadPhysicsObjectInterface<0> *)**(undefined8 **)this,param_1);
      *puVar3 = pTVar13;
      *(undefined4 *)(*(longlong *)((longlong)this + 0x48) + 0x10) = local_res8[0];
    }
  }
  return false;
}

