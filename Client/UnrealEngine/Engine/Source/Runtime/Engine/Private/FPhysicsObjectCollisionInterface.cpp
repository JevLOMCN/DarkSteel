// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ShapeSweep<ChaosInterface::FSweepHit> @ 1478a4ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>
          (FPhysicsObjectCollisionInterface<0> *this,
          TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1,FImplicitObject *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,FSweepParameters *param_5,
          FSweepHit *param_6)

{
  FPhysicsObject **ppFVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  FPhysicsObject **ppFVar5;
  double dVar6;
  double dVar7;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_1d8 [32];
  char local_1b8 [8];
  FImplicitObject *local_1b0;
  FPhysicsObject *local_1a8 [2];
  FPhysicsObject **local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  code *local_188;
  FPhysicsObjectCollisionInterface<0> **local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  FPhysicsObjectCollisionInterface<0> *local_148;
  TTransform<double> *local_140;
  FImplicitObject *local_138;
  TTransform<double> *local_130;
  char *local_128;
  double *local_120;
  double local_118;
  double *local_110;
  FSweepHit *local_108;
  FSweepParameters *local_100;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_f8 [3];
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_150 = 0.0;
  local_178 = (param_4->field0_0x0)._s_0.X - (param_3->Translation).XY.m128d_f64[0];
  local_168 = (param_4->field0_0x0)._s_0.Z - (param_3->Translation).ZW.m128d_f64[0];
  local_170 = (param_4->field0_0x0)._s_0.Y - (param_3->Translation).XY.m128d_f64[1];
  local_1b8[0] = '\0';
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_170 * local_170 + local_178 * local_178 + local_168 * local_168;
  auVar8 = sqrtpd(unaff_XMM7,auVar8);
  dVar7 = auVar8._0_8_;
  if (dVar7 <= 0.0) {
    local_158 = 0.0;
    local_160 = __real_3ff0000000000000;
  }
  else {
    dVar2 = __real_3ff0000000000000 / dVar7;
    local_150 = dVar2 * local_168;
    local_158 = dVar2 * local_170;
    local_160 = dVar2 * local_178;
  }
  ppFVar5 = param_1->DataPtr;
  ppFVar1 = ppFVar5 + param_1->ArrayNum;
  *(undefined4 *)&param_6->field_0x70 = 0x7f7fffff;
  uVar4 = __xmm_80000000800000008000000080000000;
  local_1b0 = param_2;
  if (ppFVar5 == ppFVar1) {
    local_1b8[0] = '\0';
  }
  else {
    do {
      local_1a8[0] = *ppFVar5;
      FReadPhysicsObjectInterface<0>::GetTransform(this->Interface,&local_c8,local_1a8[0]);
      local_140 = &local_c8;
      local_138 = local_1b0;
      local_128 = local_1b8;
      local_120 = &local_178;
      local_110 = &local_160;
      local_180 = &local_148;
      local_188 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::__l6::<lambda_1>,bool,Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*>
                  ::Call;
      local_198 = local_1a8;
      uStack_190 = 1;
      local_f8[0]._12_4_ = uStack_18c;
      local_f8[0].ArrayNum = 1;
      local_108 = param_6;
      local_100 = param_5;
      local_148 = this;
      local_130 = param_3;
      local_118 = dVar7;
      local_f8[0].DataPtr = local_198;
      FReadPhysicsObjectInterface<0>::VisitEveryShape
                (this->Interface,local_f8,
                 (TFunctionRef<bool___cdecl(Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*)>
                  *)&local_188);
      if ((local_1b8[0] != '\0') && (dVar7 <= 0.0)) {
        dVar6 = (double)(float)(*(uint *)&param_6->field_0x70 ^ uVar4);
        dVar2 = dVar6 * *(double *)&param_6->field_0x60;
        auVar3._8_4_ = SUB84(dVar2,0);
        auVar3._0_8_ = dVar6 * *(double *)&param_6->field_0x58;
        auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        *(undefined1 (*) [16])&param_6->field_0x58 = auVar3;
        *(double *)&param_6->field_0x68 = dVar6 * *(double *)&param_6->field_0x68;
      }
      ppFVar5 = ppFVar5 + 1;
    } while (ppFVar5 != ppFVar1);
  }
  return (bool)local_1b8[0];
}

// operator() @ 1478ad920

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlap<ChaosInterface::FOverlapHit>'::
__l2::<lambda_1>::operator()
          (void *this,FShapeOverlapData *param_1,FShapeOverlapData *param_2,FMTDInfo *param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  TGeometryParticle<double,3> *local_48;
  FShapeInstanceProxy *pFStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_38 = 0xffffffff;
  uStack_20 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_18 = 0xffffffff;
  pFStack_40 = param_1->Shape;
  local_48 = Chaos::FReadPhysicsObjectInterface<0>::GetParticle
                       ((FReadPhysicsObjectInterface<0> *)**(undefined8 **)this,
                        *(FPhysicsObject **)((longlong)this + 8));
  pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
  if ((pFVar2->Data <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x38)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x38;
  pFVar3 = pFVar2->Data;
  *(TGeometryParticle<double,3> **)(pFVar3 + lVar8) = local_48;
  *(FShapeInstanceProxy **)(pFVar3 + lVar8 + 8) = pFStack_40;
  *(ulonglong *)(pFVar3 + lVar8 + 0x10) = CONCAT44(uStack_34,local_38);
  *(undefined8 *)(pFVar3 + lVar8 + 0x10 + 8) = uStack_30;
  *(undefined8 *)(pFVar3 + lVar8 + 0x20) = uStack_28;
  *(undefined8 *)(pFVar3 + lVar8 + 0x20 + 8) = uStack_20;
  *(ulonglong *)(pFVar3 + lVar8 + 0x30) = CONCAT44(uStack_14,local_18);
  return false;
}

// operator() @ 1478adf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6
::<lambda_1>::operator()(void *this,FPhysicsObject *param_1,FShapeInstanceProxy *param_2)

{
  int *piVar1;
  double *pdVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uchar uVar8;
  int iVar9;
  TBox<double,3> *pTVar10;
  FCapsule *pFVar11;
  FConvex *pFVar12;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar13;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar14;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar15;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar16;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar17;
  TSphere<double,3> *pTVar18;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar19;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar20;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar21;
  TImplicitObjectTransformed<double,3,1> *pTVar22;
  longlong lVar23;
  undefined1 auStackY_268 [32];
  <lambda_1> local_218;
  TGeometryParticle<double,3> *local_200;
  FShapeInstanceProxy *pFStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((param_2 == (FShapeInstanceProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shape",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsObjectCollisionInterface.h"
                         ,0x9f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_218.WorldTM = *(TTransform<double> **)((longlong)this + 0x10);
  pFVar12 = *(FConvex **)((longlong)this + 0x18);
  local_218.MTD = *(FMTDInfo **)((longlong)this + 0x30);
  pdVar2 = *(double **)((longlong)this + 0x20);
  local_1c8.Rotation.XY.m128d_f64[0] = *pdVar2;
  local_1c8.Rotation.XY.m128d_f64[1] = pdVar2[1];
  local_1c8.Rotation.ZW.m128d_f64[0] = pdVar2[2];
  local_1c8.Rotation.ZW.m128d_f64[1] = pdVar2[3];
  local_1c8.Translation.XY.m128d_f64[0] = pdVar2[4];
  local_1c8.Translation.XY.m128d_f64[1] = pdVar2[5];
  local_1c8.Translation.ZW.m128d_f64[0] = pdVar2[6];
  local_1c8.Translation.ZW.m128d_f64[1] = pdVar2[7];
  local_1c8.Scale3D.XY.m128d_f64[0] = pdVar2[8];
  local_1c8.Scale3D.XY.m128d_f64[1] = pdVar2[9];
  local_1c8.Scale3D.ZW.m128d_f64[0] = pdVar2[10];
  local_1c8.Scale3D.ZW.m128d_f64[1] = pdVar2[0xb];
  local_218.Shape = param_2;
  uVar8 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar12);
  switch(uVar8) {
  case '\0':
    if (((char)pFVar12->_padding_ != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    bVar6 = ``Chaos::FPhysicsObjectCollisionInterface<0>::
            ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>::operator()'::__l2::
            <lambda_1>::operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                      (&local_218,(TSphere<double,3> *)pFVar12,
                       (TRigidTransform<double,3> *)&local_1c8);
    break;
  case '\x01':
    goto LAB_1478ae06a;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (((char)pFVar12->_padding_ != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    local_a8 = ((local_218.WorldTM)->Rotation).XY.m128d_f64[0];
    dStack_a0 = ((local_218.WorldTM)->Rotation).XY.m128d_f64[1];
    local_98 = ((local_218.WorldTM)->Rotation).ZW.m128d_f64[0];
    dStack_90 = ((local_218.WorldTM)->Rotation).ZW.m128d_f64[1];
    local_88 = ((local_218.WorldTM)->Translation).XY.m128d_f64[0];
    dStack_80 = ((local_218.WorldTM)->Translation).XY.m128d_f64[1];
    local_78 = ((local_218.WorldTM)->Translation).ZW.m128d_f64[0];
    dStack_70 = ((local_218.WorldTM)->Translation).ZW.m128d_f64[1];
    local_68 = ((local_218.WorldTM)->Scale3D).XY.m128d_f64[0];
    dStack_60 = ((local_218.WorldTM)->Scale3D).XY.m128d_f64[1];
    local_58 = ((local_218.WorldTM)->Scale3D).ZW.m128d_f64[0];
    dStack_50 = ((local_218.WorldTM)->Scale3D).ZW.m128d_f64[1];
    bVar6 = Chaos::OverlapQuery<Chaos::TSphere<double,3>_>
                      ((FImplicitObject *)(local_218.Shape)->_padding_,
                       (TRigidTransform<double,3> *)&local_a8,(TSphere<double,3> *)pFVar12,
                       (TRigidTransform<double,3> *)&local_1c8,0.0,local_218.MTD);
    break;
  case '\x03':
    goto LAB_1478ae088;
  case '\x04':
    pTVar22 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        ((FImplicitObject *)pFVar12);
    local_168.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_168.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_168.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_168.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_168.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_168.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_168,(TTransform<double> *)&pTVar22->MTransform,&local_1c8);
    local_108 = local_168.Rotation.XY.m128d_f64[0];
    dStack_100 = local_168.Rotation.XY.m128d_f64[1];
    local_f8 = local_168.Rotation.ZW.m128d_f64[0];
    dStack_f0 = local_168.Rotation.ZW.m128d_f64[1];
    local_e8 = local_168.Translation.XY.m128d_f64[0];
    dStack_e0 = local_168.Translation.XY.m128d_f64[1];
    local_d8 = local_168.Translation.ZW.m128d_f64[0];
    dStack_d0 = local_168.Translation.ZW.m128d_f64[1];
    local_c8 = local_168.Scale3D.XY.m128d_f64[0];
    dStack_c0 = local_168.Scale3D.XY.m128d_f64[1];
    local_b8 = local_168.Scale3D.ZW.m128d_f64[0];
    dStack_b0 = local_168.Scale3D.ZW.m128d_f64[1];
    bVar6 = Chaos::Utilities::
            CastHelper<__Chaos::FPhysicsObjectCollisionInterface<0>::ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>_::__l6::<lambda_1>::operator()_::__l2::<lambda_1>_>
                      ((pTVar22->MObject).Reference,(TRigidTransform<double,3> *)&local_108,
                       &local_218);
    break;
  case '\b':
    goto LAB_1478ae0a6;
  case '@':
    pTVar17 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
                        ((FImplicitObject *)pFVar12);
    pTVar18 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar17->MObject).Reference);
    bVar6 = ``Chaos::FPhysicsObjectCollisionInterface<0>::
            ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>::operator()'::__l2::
            <lambda_1>::operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                      (&local_218,pTVar18,(TRigidTransform<double,3> *)&local_1c8);
    break;
  case 'A':
    pTVar19 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
                        ((FImplicitObject *)pFVar12);
    pFVar12 = (FConvex *)(pTVar19->MObject).Reference;
LAB_1478ae06a:
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)pFVar12);
    bVar6 = ``Chaos::FPhysicsObjectCollisionInterface<0>::
            ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>::operator()'::__l2::
            <lambda_1>::operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                      (&local_218,pTVar10,(TRigidTransform<double,3> *)&local_1c8);
    break;
  case 'C':
    pTVar20 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        ((FImplicitObject *)pFVar12);
    pFVar12 = (FConvex *)(pTVar20->MObject).Reference;
LAB_1478ae088:
    pFVar11 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>((FImplicitObject *)pFVar12);
    bVar6 = ``Chaos::FPhysicsObjectCollisionInterface<0>::
            ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>::operator()'::__l2::
            <lambda_1>::operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                      (&local_218,pFVar11,(TRigidTransform<double,3> *)&local_1c8);
    break;
  case 'H':
    pTVar21 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        ((FImplicitObject *)pFVar12);
    pFVar12 = (pTVar21->MObject).Reference;
LAB_1478ae0a6:
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>((FImplicitObject *)pFVar12);
    bVar6 = ``Chaos::FPhysicsObjectCollisionInterface<0>::
            ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>::operator()'::__l2::
            <lambda_1>::operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                      (&local_218,pFVar12,(TRigidTransform<double,3> *)&local_1c8);
    break;
  case 0x80:
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                        ((FImplicitObject *)pFVar12);
    bVar6 = ``Chaos::FPhysicsObjectCollisionInterface<0>::
            ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>::operator()'::__l2::
            <lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_218,pTVar13,(TRigidTransform<double,3> *)&local_1c8);
    break;
  case 0x81:
    pTVar14 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                        ((FImplicitObject *)pFVar12);
    bVar6 = ``Chaos::FPhysicsObjectCollisionInterface<0>::
            ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>::operator()'::__l2::
            <lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_218,pTVar14,(TRigidTransform<double,3> *)&local_1c8);
    break;
  case 0x83:
    pTVar15 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                        ((FImplicitObject *)pFVar12);
    bVar6 = ``Chaos::FPhysicsObjectCollisionInterface<0>::
            ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>::operator()'::__l2::
            <lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_218,pTVar15,(TRigidTransform<double,3> *)&local_1c8);
    break;
  case 0x88:
    pTVar16 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        ((FImplicitObject *)pFVar12);
    bVar6 = ``Chaos::FPhysicsObjectCollisionInterface<0>::
            ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>::operator()'::__l2::
            <lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_218,pTVar16,(TRigidTransform<double,3> *)&local_1c8);
  }
  if (bVar6 != false) {
    **(undefined1 **)((longlong)this + 8) = 1;
    uStack_1d8 = 0;
    local_1f0 = 0xffffffff;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    local_1d0 = 0xffffffff;
    pFStack_1f8 = param_2;
    local_200 = Chaos::FReadPhysicsObjectInterface<0>::GetParticle
                          ((FReadPhysicsObjectInterface<0> *)**(undefined8 **)this,param_1);
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x28);
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_200) &&
        ((FScriptContainerElement *)&local_200 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x38)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar9 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar9 + 1;
    lVar23 = (longlong)iVar9 * 0x38;
    pFVar4 = pFVar3->Data;
    *(TGeometryParticle<double,3> **)(pFVar4 + lVar23) = local_200;
    *(FShapeInstanceProxy **)(pFVar4 + lVar23 + 8) = pFStack_1f8;
    *(ulonglong *)(pFVar4 + lVar23 + 0x10) = CONCAT44(uStack_1ec,local_1f0);
    *(undefined8 *)(pFVar4 + lVar23 + 0x10 + 8) = uStack_1e8;
    *(undefined8 *)(pFVar4 + lVar23 + 0x20) = uStack_1e0;
    *(undefined8 *)(pFVar4 + lVar23 + 0x20 + 8) = uStack_1d8;
    *(ulonglong *)(pFVar4 + lVar23 + 0x30) = CONCAT44(uStack_1cc,local_1d0);
  }
  return false;
}

// operator() @ 1478ae500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::__l6::
<lambda_1>::operator()(void *this,FPhysicsObject *param_1,FShapeInstanceProxy *param_2)

{
  ulonglong uVar1;
  double *pdVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 uVar14;
  uchar uVar15;
  undefined4 uVar16;
  FCollisionFilterData *pFVar17;
  TBox<double,3> *pTVar18;
  FCapsule *pFVar19;
  FConvex *pFVar20;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar21;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar22;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar23;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar24;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar25;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar26;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar27;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar28;
  TImplicitObjectTransformed<double,3,1> *pTVar29;
  TGeometryParticle<double,3> *pTVar30;
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
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar58;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  int local_2b8 [2];
  <lambda_1> local_2b0;
  double local_260;
  TVector<double,3> local_258;
  TVector<double,3> local_240;
  TVector<double,3> local_228;
  undefined1 local_210 [16];
  double local_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
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
  double local_c8;
  double dStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if ((param_2 == (FShapeInstanceProxy *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shape",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsObjectCollisionInterface.h"
                          ,0xce,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  pFVar17 = Chaos::FCollisionData::GetQueryData(&(param_2->CollisionData).Property);
  local_2b0.Params = *(FSweepParameters **)((longlong)this + 0x48);
  uVar1._0_4_ = pFVar17->Word2;
  uVar1._4_4_ = pFVar17->Word3;
  uVar12 = uVar1 & 0x100000000;
  if ((local_2b0.Params)->bSweepComplex != false) {
    uVar12 = uVar1 & 0x200000000;
  }
  if (uVar12 == 0) {
    return false;
  }
  local_2b0.WorldTM = *(TTransform<double> **)((longlong)this + 8);
  local_2b0.DeltaMag = *(double *)((longlong)this + 0x30);
  local_2b0.Dir = *(TVector<double> **)((longlong)this + 0x38);
  local_2b0.Distance = &local_260;
  local_2b0.WorldPosition = &local_258;
  local_2b0.WorldNormal = &local_240;
  local_2b0.FaceIdx = local_2b8;
  local_2b0.FaceNormal = &local_228;
  pdVar2 = *(double **)((longlong)this + 0x18);
  local_1d8.Rotation.XY.m128d_f64[0] = *pdVar2;
  local_1d8.Rotation.XY.m128d_f64[1] = pdVar2[1];
  local_1d8.Rotation.ZW.m128d_f64[0] = pdVar2[2];
  local_1d8.Rotation.ZW.m128d_f64[1] = pdVar2[3];
  local_1d8.Translation.XY.m128d_f64[0] = pdVar2[4];
  local_1d8.Translation.XY.m128d_f64[1] = pdVar2[5];
  local_1d8.Translation.ZW.m128d_f64[0] = pdVar2[6];
  local_1d8.Translation.ZW.m128d_f64[1] = pdVar2[7];
  local_1d8.Scale3D.XY.m128d_f64[0] = pdVar2[8];
  local_1d8.Scale3D.XY.m128d_f64[1] = pdVar2[9];
  local_1d8.Scale3D.ZW.m128d_f64[0] = pdVar2[10];
  local_1d8.Scale3D.ZW.m128d_f64[1] = pdVar2[0xb];
  pFVar20 = *(FConvex **)((longlong)this + 0x10);
  local_2b0.Shape = param_2;
  uVar15 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar20);
  switch(uVar15) {
  case '\0':
    pFVar20 = (FConvex *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)pFVar20);
    goto LAB_1478ae8ae;
  case '\x01':
    goto LAB_1478ae663;
  default:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                        ,0x7a,L"");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    if (((uchar)pFVar20->_padding_ != '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("T_DERIVED::StaticType() == Type",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                            ,0xbb,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    goto LAB_1478ae8ae;
  case '\x03':
    goto LAB_1478ae681;
  case '\x04':
    pTVar29 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        ((FImplicitObject *)pFVar20);
    local_178.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_178.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_178.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_178.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_178.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_178.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_178,(TTransform<double> *)&pTVar29->MTransform,&local_1d8);
    local_118 = local_178.Rotation.XY.m128d_f64[0];
    dStack_110 = local_178.Rotation.XY.m128d_f64[1];
    local_108 = local_178.Rotation.ZW.m128d_f64[0];
    dStack_100 = local_178.Rotation.ZW.m128d_f64[1];
    local_f8 = local_178.Translation.XY.m128d_f64[0];
    dStack_f0 = local_178.Translation.XY.m128d_f64[1];
    local_e8 = local_178.Translation.ZW.m128d_f64[0];
    dStack_e0 = local_178.Translation.ZW.m128d_f64[1];
    local_d8 = local_178.Scale3D.XY.m128d_f64[0];
    dStack_d0 = local_178.Scale3D.XY.m128d_f64[1];
    local_c8 = local_178.Scale3D.ZW.m128d_f64[0];
    dStack_c0 = local_178.Scale3D.ZW.m128d_f64[1];
    bVar13 = Chaos::Utilities::
             CastHelper<__Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>_::__l6::<lambda_1>::operator()_::__l12::<lambda_1>_>
                       ((pTVar29->MObject).Reference,(TRigidTransform<double,3> *)&local_118,
                        &local_2b0);
    break;
  case '\b':
    goto LAB_1478ae69f;
  case '@':
    pTVar25 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
                        ((FImplicitObject *)pFVar20);
    pFVar20 = (FConvex *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar25->MObject).Reference);
LAB_1478ae8ae:
    bVar13 = ``Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::
             __l6::<lambda_1>::operator()'::__l12::<lambda_1>::
             operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                       (&local_2b0,(TSphere<double,3> *)pFVar20,
                        (TRigidTransform<double,3> *)&local_1d8);
    break;
  case 'A':
    pTVar26 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
                        ((FImplicitObject *)pFVar20);
    pFVar20 = (FConvex *)(pTVar26->MObject).Reference;
LAB_1478ae663:
    pTVar18 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)pFVar20);
    bVar13 = ``Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::
             __l6::<lambda_1>::operator()'::__l12::<lambda_1>::
             operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                       (&local_2b0,pTVar18,(TRigidTransform<double,3> *)&local_1d8);
    break;
  case 'C':
    pTVar27 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        ((FImplicitObject *)pFVar20);
    pFVar20 = (FConvex *)(pTVar27->MObject).Reference;
LAB_1478ae681:
    pFVar19 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>((FImplicitObject *)pFVar20);
    bVar13 = ``Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::
             __l6::<lambda_1>::operator()'::__l12::<lambda_1>::
             operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                       (&local_2b0,pFVar19,(TRigidTransform<double,3> *)&local_1d8);
    break;
  case 'H':
    pTVar28 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        ((FImplicitObject *)pFVar20);
    pFVar20 = (pTVar28->MObject).Reference;
LAB_1478ae69f:
    pFVar20 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>((FImplicitObject *)pFVar20);
    bVar13 = ``Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::
             __l6::<lambda_1>::operator()'::__l12::<lambda_1>::
             operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                       (&local_2b0,pFVar20,(TRigidTransform<double,3> *)&local_1d8);
    break;
  case 0x80:
    pTVar21 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                        ((FImplicitObject *)pFVar20);
    bVar13 = ``Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::
             __l6::<lambda_1>::operator()'::__l12::<lambda_1>::
             operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                       (&local_2b0,pTVar21,(TRigidTransform<double,3> *)&local_1d8);
    break;
  case 0x81:
    pTVar22 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                        ((FImplicitObject *)pFVar20);
    bVar13 = ``Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::
             __l6::<lambda_1>::operator()'::__l12::<lambda_1>::
             operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                       (&local_2b0,pTVar22,(TRigidTransform<double,3> *)&local_1d8);
    break;
  case 0x83:
    pTVar23 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                        ((FImplicitObject *)pFVar20);
    bVar13 = ``Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::
             __l6::<lambda_1>::operator()'::__l12::<lambda_1>::
             operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                       (&local_2b0,pTVar23,(TRigidTransform<double,3> *)&local_1d8);
    break;
  case 0x88:
    pTVar24 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        ((FImplicitObject *)pFVar20);
    bVar13 = ``Chaos::FPhysicsObjectCollisionInterface<0>::ShapeSweep<ChaosInterface::FSweepHit>'::
             __l6::<lambda_1>::operator()'::__l12::<lambda_1>::
             operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                       (&local_2b0,pTVar24,(TRigidTransform<double,3> *)&local_1d8);
  }
  if ((bVar13 != false) &&
     ((float)local_260 < *(float *)(*(longlong *)((longlong)this + 0x40) + 0x70))) {
    **(undefined1 **)((longlong)this + 0x20) = 1;
    *(FShapeInstanceProxy **)(*(longlong *)((longlong)this + 0x40) + 8) = param_2;
    lVar3 = *(longlong *)((longlong)this + 0x40);
    *(undefined8 *)(lVar3 + 0x40) = local_258._0_8_;
    *(undefined8 *)(lVar3 + 0x48) = local_258._8_8_;
    *(undefined8 *)(lVar3 + 0x50) = local_258._16_8_;
    lVar3 = *(longlong *)((longlong)this + 0x40);
    *(undefined8 *)(lVar3 + 0x58) = local_240._0_8_;
    *(undefined8 *)(lVar3 + 0x60) = local_240._8_8_;
    *(undefined8 *)(lVar3 + 0x68) = local_240._16_8_;
    *(float *)(*(longlong *)((longlong)this + 0x40) + 0x70) = (float)local_260;
    *(int *)(*(longlong *)((longlong)this + 0x40) + 0x10) = local_2b8[0];
    lVar3 = *(longlong *)((longlong)this + 0x40);
    *(undefined8 *)(lVar3 + 0x18) = local_228._0_8_;
    *(undefined8 *)(lVar3 + 0x20) = local_228._8_8_;
    *(undefined8 *)(lVar3 + 0x28) = local_228._16_8_;
    pdVar2 = *(double **)((longlong)this + 8);
    lVar3 = *(longlong *)((longlong)this + 0x40);
    dVar47 = *pdVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar49 = pdVar2[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar7 = pdVar2[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar8 = pdVar2[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar6 = *(double *)(lVar3 + 0x50) - pdVar2[6];
    dVar55 = *(double *)(lVar3 + 0x40) - pdVar2[4];
    dVar58 = *(double *)(lVar3 + 0x48) - pdVar2[5];
    auVar51._8_4_ = SUB84(dVar58,0);
    auVar51._0_8_ = dVar55;
    uVar16 = (undefined4)((ulonglong)dVar58 >> 0x20);
    auVar51._12_4_ = uVar16;
    auVar43._8_4_ = SUB84(dVar49,0);
    auVar43._0_8_ = dVar47;
    auVar43._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    auVar32._8_4_ = SUB84(dVar8,0);
    auVar32._0_8_ = dVar7;
    auVar32._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar44 = blendpd(auVar43,auVar32,2);
    auVar52._0_8_ = auVar51._8_8_ * dVar47 - dVar49 * dVar55;
    auVar52._8_8_ = dVar6 * dVar49 - dVar7 * dVar58;
    auVar31._8_4_ = SUB84(dVar58,0);
    auVar31._0_8_ = dVar55;
    auVar31._12_4_ = uVar16;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = dVar6;
    auVar32 = blendpd(auVar31,auVar46,2);
    auVar33._0_8_ = auVar32._0_8_ * dVar7 - auVar44._0_8_ * dVar6;
    auVar33._8_8_ = auVar32._8_8_ * dVar8 - auVar44._8_8_ * 0.0;
    dVar10 = auVar52._8_8_ + auVar52._8_8_;
    dVar11 = auVar33._0_8_ + auVar33._0_8_;
    uVar16 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar32 = blendpd(auVar52,auVar33,2);
    auVar53._0_8_ = auVar32._0_8_ + auVar32._0_8_;
    auVar53._8_8_ = auVar32._8_8_ + auVar32._8_8_;
    auVar39._8_4_ = SUB84(dVar11,0);
    auVar39._0_8_ = dVar10;
    auVar39._12_4_ = uVar16;
    auVar34._8_4_ = SUB84(dVar11,0);
    auVar34._0_8_ = dVar10;
    auVar34._12_4_ = uVar16;
    auVar32 = blendpd(auVar34,auVar53,2);
    auVar40._0_8_ = auVar39._8_8_ * dVar47 - dVar10 * dVar49;
    auVar40._8_8_ = auVar53._0_8_ * dVar49 - dVar11 * dVar7;
    auVar35._0_8_ = auVar32._0_8_ * dVar7 - auVar53._0_8_ * auVar44._0_8_;
    auVar35._8_8_ = auVar32._8_8_ * dVar8 - auVar53._8_8_ * auVar44._8_8_;
    dVar48 = *pdVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar50 = pdVar2[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar7 = *(double *)(*(undefined1 (**) [16])((longlong)this + 0x38))[1];
    auVar44 = blendpd(auVar40,auVar35,2);
    dVar49 = dVar11 * dVar8 + dVar58 + auVar35._0_8_;
    auVar45._8_4_ = SUB84(dVar50,0);
    auVar45._0_8_ = dVar48;
    auVar45._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    dVar11 = pdVar2[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar47 = pdVar2[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar16 = (undefined4)((ulonglong)dVar47 >> 0x20);
    auVar32 = **(undefined1 (**) [16])((longlong)this + 0x38);
    local_1e8 = auVar53._0_8_ * dVar8 + dVar6 + auVar44._0_8_;
    dVar58 = auVar32._8_8_;
    auVar44._8_4_ = SUB84(dVar47,0);
    auVar44._0_8_ = dVar11;
    auVar44._12_4_ = uVar16;
    auVar46 = blendpd(auVar45,auVar44,2);
    auVar54._8_4_ = SUB84(dVar47,0);
    auVar54._0_8_ = dVar11;
    auVar54._12_4_ = uVar16;
    auVar56._0_8_ = dVar58 * dVar48 - dVar50 * auVar32._0_8_;
    auVar56._8_8_ = dVar7 * dVar50 - dVar11 * dVar58;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar7;
    auVar44 = blendpd(auVar32,auVar9,2);
    local_1f8._8_4_ = SUB84(dVar49,0);
    local_1f8._0_8_ = dVar10 * dVar8 + dVar55 + auVar40._8_8_;
    local_1f8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    auVar36._0_8_ = auVar44._0_8_ * dVar11 - auVar46._0_8_ * dVar7;
    auVar36._8_8_ = auVar44._8_8_ * dVar47 - auVar46._8_8_ * 0.0;
    auVar44 = blendpd(auVar56,auVar36,2);
    dVar6 = auVar56._8_8_ + auVar56._8_8_;
    dVar8 = auVar36._0_8_ + auVar36._0_8_;
    uVar16 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar57._0_8_ = auVar44._0_8_ + auVar44._0_8_;
    auVar57._8_8_ = auVar44._8_8_ + auVar44._8_8_;
    auVar41._8_4_ = SUB84(dVar8,0);
    auVar41._0_8_ = dVar6;
    auVar41._12_4_ = uVar16;
    auVar37._8_4_ = SUB84(dVar8,0);
    auVar37._0_8_ = dVar6;
    auVar37._12_4_ = uVar16;
    auVar44 = blendpd(auVar37,auVar57,2);
    auVar42._0_8_ = auVar41._8_8_ * dVar48 - dVar6 * dVar50;
    auVar42._8_8_ = auVar57._0_8_ * dVar50 - dVar8 * dVar11;
    auVar38._0_8_ = auVar44._0_8_ * dVar11 - auVar57._0_8_ * auVar46._0_8_;
    auVar38._8_8_ = auVar44._8_8_ * dVar47 - auVar57._8_8_ * auVar46._8_8_;
    dVar8 = dVar8 * dVar47 + dVar58 + auVar38._0_8_;
    auVar44 = blendpd(auVar42,auVar38,2);
    local_200 = auVar57._0_8_ * auVar54._8_8_ + dVar7 + auVar44._0_8_;
    local_210._8_4_ = SUB84(dVar8,0);
    local_210._0_8_ = dVar6 * auVar54._8_8_ + auVar32._0_8_ + auVar42._8_8_;
    local_210._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_2c8 = __real_3ff0000000000000;
    uVar16 = (**(code **)(*(longlong *)param_2->_padding_ + 0xb8))
                       ((longlong *)param_2->_padding_,local_1f8,local_210,
                        *(undefined4 *)(lVar3 + 0x10));
    *(undefined4 *)(*(longlong *)((longlong)this + 0x40) + 0x10) = uVar16;
    puVar4 = *(undefined8 **)((longlong)this + 0x40);
    pTVar30 = Chaos::FReadPhysicsObjectInterface<0>::GetParticle
                        ((FReadPhysicsObjectInterface<0> *)**(undefined8 **)this,param_1);
    *puVar4 = pTVar30;
  }
  return false;
}

