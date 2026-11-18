// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// <lambda_1> @ 143a30e30

<lambda_1> * __thiscall
`Chaos::FChaosDDParticleShape::Draw'::__l2::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  FImplicitObject *pFVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)&(param_1->Transform).field_0x8;
  *(undefined8 *)this = *(undefined8 *)&param_1->Transform;
  *(undefined8 *)((longlong)this + 8) = uVar2;
  uVar2 = *(undefined8 *)&(param_1->Transform).field_0x18;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&(param_1->Transform).field_0x10;
  *(undefined8 *)((longlong)this + 0x18) = uVar2;
  uVar2 = *(undefined8 *)&(param_1->Transform).field_0x28;
  *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&(param_1->Transform).field_0x20;
  *(undefined8 *)((longlong)this + 0x28) = uVar2;
  uVar2 = *(undefined8 *)&(param_1->Transform).field_0x38;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&(param_1->Transform).field_0x30;
  *(undefined8 *)((longlong)this + 0x38) = uVar2;
  uVar2 = *(undefined8 *)&(param_1->Transform).field_0x48;
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)&(param_1->Transform).field_0x40;
  *(undefined8 *)((longlong)this + 0x48) = uVar2;
  uVar2 = *(undefined8 *)&(param_1->Transform).field_0x58;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)&(param_1->Transform).field_0x50;
  *(undefined8 *)((longlong)this + 0x58) = uVar2;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  pFVar1 = (param_1->ImplicitObject).Reference;
  *(FImplicitObject **)((longlong)this + 0x60) = pFVar1;
  if (pFVar1 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&param_1->ParticleData;
  *(undefined4 *)((longlong)this + 0x70) = *(undefined4 *)&(param_1->ParticleData).ObjectState;
  *(FChaosDDShapeData *)((longlong)this + 0x74) = param_1->ShapeData;
  *(FColor_u_0 *)((longlong)this + 0x78) = (param_1->InColor).field0_0x0;
  *(bool *)((longlong)this + 0x7c) = param_1->bInAutoColor;
  return this;
}

// operator() @ 143a3e2f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
`Chaos::FChaosDDParticleShape::Draw'::__l2::<lambda_1>::operator()
          (void *this,IChaosDDRenderer *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FChaosDDShapeData FVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  FImplicitObject *pFVar7;
  longlong lVar8;
  float fVar9;
  bool bVar10;
  char cVar11;
  FColor FVar12;
  undefined4 extraout_var;
  undefined8 *puVar13;
  uint uVar14;
  TRefCountPtr<Chaos::FImplicitObject_const_> local_res8;
  FChaosDDParticleData local_res10;
  TRefCountPtr<Chaos::FImplicitObject_const_> local_res20;
  undefined1 local_98 [16];
  void *local_88;
  IChaosDDRenderer *local_80;
  TRefCountPtr<Chaos::FImplicitObject_const_> *local_78;
  undefined1 *local_70;
  longlong local_68;
  
  local_res10._0_8_ = local_res10._0_8_ & 0xffffffff00000000;
  bVar10 = (bool)(**(code **)((longlong)*param_1 + 8))(param_1);
  pFVar7 = *(FImplicitObject **)((longlong)this + 0x60);
  FVar4 = *(FChaosDDShapeData *)((longlong)this + 0x74);
  local_98._0_8_ = *(undefined8 *)((longlong)this + 0x68);
  local_98._8_4_ = *(undefined4 *)((longlong)this + 0x70);
  if (pFVar7 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
  }
  local_res8.Reference = pFVar7;
  cVar11 = Chaos::FChaosDDParticleShape::ShouldRender
                     (&local_res8,(FChaosDDParticleData *)local_98,FVar4,bVar10);
  local_res8.Reference._0_1_ = cVar11;
  if (pFVar7 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar7->_padding_;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (*(int *)((longlong)&pFVar7->_padding_ + 4) == 0)) {
      (**(code **)pFVar7->_padding_)(pFVar7);
      cVar11 = (char)local_res8.Reference;
    }
  }
  fVar9 = Chaos::CVars::ChaosSolverDebugDebugDrawSettings.LineThickness;
  if (cVar11 != '\0') {
    if (*(char *)((longlong)this + 0x7c) == '\0') {
      local_res8.Reference._0_4_ = *(undefined4 *)((longlong)this + 0x78);
      local_78 = &local_res8;
      puVar13 = (undefined8 *)local_res10._0_8_;
      uVar14 = local_res10.IslandId;
    }
    else {
      (**(code **)((longlong)*param_1 + 8))(param_1);
      puVar13 = *(undefined8 **)((longlong)this + 0x60);
      uVar5 = *(undefined2 *)((longlong)this + 0x74);
      local_98._0_8_ = *(undefined8 *)((longlong)this + 0x68);
      uVar6 = *(undefined4 *)((longlong)this + 0x70);
      if (puVar13 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        UNLOCK();
      }
      local_98._8_4_ = uVar6;
      local_res10._0_8_ = puVar13;
      FVar12 = Chaos::FChaosDDParticleShape::GetRenderColor
                         (&local_res20,&local_res10,SUB82(local_98,0),SUB21(uVar5,0));
      local_78 = (TRefCountPtr<Chaos::FImplicitObject_const_> *)
                 CONCAT44(extraout_var,FVar12.field0_0x0);
      uVar14 = 1;
    }
    pFVar7 = *(FImplicitObject **)((longlong)this + 0x60);
    if (pFVar7 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
    }
    local_70 = (undefined1 *)&local_res10;
    local_res10.IslandId = (int)fVar9;
    local_68 = (longlong)&local_res10 + 8;
    local_res10.ObjectState = Uninitialized;
    local_res10._9_3_ = 0;
    local_98._8_8_ = &local_88;
    local_98._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Private::ChaosDDRenderImplicitObject'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
         ::Call;
    local_88 = this;
    local_80 = param_1;
    Chaos::FImplicitObject::VisitLeafObjects
              (pFVar7,(TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
                       *)local_98);
    if (pFVar7 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar7->_padding_;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (*(int *)((longlong)&pFVar7->_padding_ + 4) == 0)) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
    if (((uVar14 & 1) != 0) && (puVar13 != (undefined8 *)0x0)) {
      LOCK();
      piVar2 = (int *)(puVar13 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(int *)((longlong)puVar13 + 0xc) == 0)) {
        (**(code **)*puVar13)(puVar13,1);
      }
    }
  }
  return;
}

// Draw @ 143a62510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
Chaos::FChaosDDParticleShape::Draw
          (TRigidTransform<double,3> *param_1,FConstGenericParticleHandle *param_2,
          FShapeInstance *param_3,FImplicitObject *param_4,TRigidTransform<double,3> *param_5,
          bool param_6,bool param_7,bool param_8,FColor *param_9)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar2;
  undefined1 uVar3;
  EChaosCollisionTraceFlag EVar4;
  FColor_u_0 FVar5;
  TGeometryParticleHandleImp<double,3,1> *this;
  double dVar6;
  undefined1 uVar7;
  bool bVar8;
  TAABB<double,3> *pTVar9;
  TAABB<double,3> *pTVar10;
  TMatrix<double> *pTVar11;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  double *pdVar12;
  undefined1 auStack_248 [33];
  byte local_227;
  FChaosDDParticleData local_220;
  FChaosDDFrameWriter local_210;
  undefined1 local_1f8 [24];
  TVector<double>_u_0 TStack_1e0;
  __m128d local_1c8;
  __m128d local_1b8;
  __m128d local_1a8;
  undefined1 local_198 [24];
  undefined8 local_180;
  undefined8 uStack_178;
  double *local_170;
  undefined1 local_168;
  TTransform<double> local_138;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_248;
  if (((param_2->Imp).MHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (param_3 != (FShapeInstance *)0x0)) {
    pTVar9 = FGenericParticleHandleImp::WorldSpaceInflatedBounds(&param_2->Imp);
    pTVar10 = FGenericParticleHandleImp::WorldSpaceInflatedBounds(&param_2->Imp);
    local_168 = 1;
    local_198._0_8_ = *(undefined8 *)&pTVar10->MMin;
    local_198._8_8_ = *(undefined8 *)&(pTVar10->MMin).field_0x8;
    local_198._16_8_ = *(undefined8 *)&(pTVar10->MMin).field_0x10;
    local_180 = *(undefined8 *)&pTVar9->MMax;
    uStack_178 = *(undefined8 *)&(pTVar9->MMax).field_0x8;
    local_170 = *(double **)&(pTVar9->MMax).field_0x10;
    pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale
                        ((TTransform<double> *)param_1,&local_d8);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&((TVector<double>_u_0 *)local_198)->_s_0,(TBox<double> *)local_1f8,
               pTVar11);
    ChaosDD::Private::FChaosDDContext::GetWriter(&local_210);
    if (local_210.Frame.Object != (FChaosDDFrame *)0x0) {
      dVar2 = ((local_210.Frame.Object)->DrawRegion).W;
      if (dVar2 <= 0.0) {
        bVar8 = true;
      }
      else {
        dVar6 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)local_1f8,(TVector<double> *)&TStack_1e0._s_0,
                           &((local_210.Frame.Object)->DrawRegion).Center);
        bVar8 = dVar6 < dVar2 * dVar2;
      }
      if (bVar8) {
        lpCriticalSection = &(local_210.Frame.Object)->CommandsCS;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        (local_210.Frame.Object)->CommandCost = (local_210.Frame.Object)->CommandCost + 1;
        if (((local_210.Frame.Object)->CommandBudget < (local_210.Frame.Object)->CommandCost) &&
           ((local_210.Frame.Object)->CommandBudget != 0)) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        else {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          bVar8 = FGenericParticleHandleImp::IsDynamic(&param_2->Imp);
          this = (param_2->Imp).MHandle;
          if (bVar8) {
            this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&this->_padding_ + 4)) {
              this_00 = this;
            }
            TPBDRigidParticleHandleImp<double,3,1>::GetTransformPQ
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,
                       (TRigidTransform<double,3> *)&((TVector<double>_u_0 *)local_198)->_s_0);
          }
          else {
            TGeometryParticleHandleImp<double,3,1>::GetTransformXR
                      (this,(TRigidTransform<double,3> *)&((TVector<double>_u_0 *)local_198)->_s_0);
          }
          local_1f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_1f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1f8._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          unique0x10000169 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_1f8._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          unique0x1000016d =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          TStack_1e0._16_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          TStack_1e0._s_0.Y = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          TStack_1e0._20_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1c8.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1c8.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1b8.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1b8.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1a8.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_1a8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1a8.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    ((TTransform<double> *)local_1f8,
                     (TTransform<double> *)&((TVector<double>_u_0 *)local_198)->_s_0,
                     (TTransform<double> *)param_1);
          local_138.Rotation.XY.m128d_f64[0] = (double)local_1f8._0_8_;
          local_138.Rotation.XY.m128d_f64[1] = (double)local_1f8._8_8_;
          local_138.Rotation.ZW.m128d_f64[0] = (double)local_1f8._16_8_;
          local_138.Rotation.ZW.m128d_f64[1] = TStack_1e0._s_0.X;
          local_138.Translation.XY.m128d_f64[0] = TStack_1e0._s_0.Y;
          local_138.Translation.XY.m128d_f64[1] = TStack_1e0._s_0.Z;
          local_138.Translation.ZW.m128d_f64[0] = local_1c8.m128d_f64[0];
          local_138.Translation.ZW.m128d_f64[1] = local_1c8.m128d_f64[1];
          local_138.Scale3D.XY.m128d_f64[0] = local_1b8.m128d_f64[0];
          local_138.Scale3D.XY.m128d_f64[1] = local_1b8.m128d_f64[1];
          local_138.Scale3D.ZW.m128d_f64[0] = local_1a8.m128d_f64[0];
          local_138.Scale3D.ZW.m128d_f64[1] = local_1a8.m128d_f64[1];
          FChaosDDParticleData::FChaosDDParticleData(&local_220,param_2);
          puVar1 = &(param_3->CollisionData).field_0x29;
          uVar3 = *puVar1;
          EVar4 = (param_3->CollisionData).CollisionTraceType;
          local_1f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_1f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1f8._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          unique0x10000265 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_1f8._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          unique0x10000269 =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          TStack_1e0._16_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          TStack_1e0._s_0.Y = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          TStack_1e0._20_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1c8.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_1c8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1c8.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1b8.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1b8.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1a8.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_1a8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1a8.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    ((TTransform<double> *)local_1f8,(TTransform<double> *)param_5,&local_138);
          if (param_4 != (FImplicitObject *)0x0) {
            LOCK();
            *(int *)&param_4->_padding_ = (int)param_4->_padding_ + 1;
            UNLOCK();
          }
          local_198._0_8_ = (code *)0x0;
          FVar5 = param_9->field0_0x0;
          local_170 = FMemory::Malloc(0x90,0x10);
          *local_170 = (double)&
                               ___7__TFunction_OwnedObject_V<lambda_1>__1__Draw_FChaosDDParticleShape_Chaos__SAXAEBV__TRigidTransform_N_02_4_AEBVFConstGenericParticleHandle_4_PEBVFShapeInstance_4_PEBVFImplicitObject_4_0_N44AEBUFColor___Z__0A__00_Function_Private_Core_UE__6B_
          ;
          local_170[2] = (double)local_1f8._0_8_;
          local_170[3] = (double)local_1f8._8_8_;
          local_170[4] = (double)local_1f8._16_8_;
          local_170[5] = TStack_1e0._s_0.X;
          local_170[6] = TStack_1e0._s_0.Y;
          local_170[7] = TStack_1e0._s_0.Z;
          local_170[8] = local_1c8.m128d_f64[0];
          local_170[9] = local_1c8.m128d_f64[1];
          local_170[10] = local_1b8.m128d_f64[0];
          local_170[0xb] = local_1b8.m128d_f64[1];
          local_170[0xc] = local_1a8.m128d_f64[0];
          local_170[0xd] = local_1a8.m128d_f64[1];
          local_170[0xe] = (double)param_4;
          *(ushort *)((longlong)local_170 + 0x84) =
               CONCAT11(((param_7 * '\x02' | param_6) << 2 | (param_3->CollisionData).bSimCollision)
                        * '\x02' | (param_3->CollisionData).bQueryCollision | local_227 & 0xe0 |
                        uVar3 & 4,EVar4);
          local_170[0xf] = (double)local_220._0_8_;
          *(undefined4 *)(local_170 + 0x10) = local_220._8_4_;
          *(bool *)((longlong)local_170 + 0x8c) = param_8;
          ((FColor_u_0 *)(local_170 + 0x11))->_s_0 = (FColor_u_0_s_0)FVar5;
          if (local_170 + 2 != (double *)0x0) {
            local_198._0_8_ =
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FChaosDDParticleShape::Draw'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                 ::Call;
          }
          ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                    (local_210.Frame.Object,
                     (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)
                     &((TVector<double>_u_0 *)local_198)->_s_0);
          if ((code *)local_198._0_8_ != (code *)0x0) {
            pdVar12 = &(((TVector<double>_u_0 *)local_198)->_s_0).Z;
            if (local_170 != (double *)0x0) {
              pdVar12 = local_170;
            }
            (**(code **)((longlong)*pdVar12 + 0x10))();
          }
        }
      }
      (**(code **)((local_210.Frame.Object)->_padding_ + 0x10))(local_210.Frame.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_210.Frame.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetRenderColor @ 143a6f650

FColor __cdecl
Chaos::FChaosDDParticleShape::GetRenderColor
          (TRefCountPtr<Chaos::FImplicitObject_const_> *param_1,FChaosDDParticleData *param_2,
          FChaosDDShapeData param_3,bool param_4)

{
  int iVar1;
  byte bVar2;
  FColor FVar3;
  FChaosDebugDrawColorsByState *this;
  int *piVar4;
  undefined1 uVar5;
  undefined6 in_register_00000082;
  uint7 in_register_00000089;
  char in_stack_00000028;
  FChaosDebugDrawColorsByState local_28;
  
  piVar4 = (int *)CONCAT62(in_register_00000082,param_3);
  bVar2 = FImplicitObject::GetType(*(FImplicitObject **)param_2);
  FVar3.field0_0x0 = SUB84(param_1,0);
  if (CVars::ChaosSolverDebugDrawColorShapeByClientServer == 0) {
    if (Chaos::DebugDraw::bChaosDebugDebugDrawColorShapesByShapeType != false) {
      Chaos::DebugDraw::FChaosDebugDrawColorsByShapeType::GetColorFromShapeType
                (&CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerShapeType,
                 (EObjectStateType)param_1);
      return (FColor)FVar3.field0_0x0;
    }
    if (Chaos::DebugDraw::bChaosDebugDebugDrawColorShapesByIsland != false) {
      iVar1 = *piVar4;
      piVar4 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c);
      if (*piVar4 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          SleepingColor = FColor::Black;
          _Init_thread_footer(&::_TSS0);
        }
      }
      if (*piVar4 < ::_TSS1) {
        _Init_thread_header(&::_TSS1);
        if (::_TSS1 == -1) {
          NullColor = FColor::White;
          _Init_thread_footer(&::_TSS1);
        }
      }
      if (iVar1 == -1) {
        *(FColor_u_0 *)&param_1->Reference = NullColor.field0_0x0;
        return (FColor)FVar3.field0_0x0;
      }
      GetIndexColor((int)FVar3.field0_0x0);
      return (FColor)FVar3.field0_0x0;
    }
    if (Chaos::DebugDraw::bChaosDebugDebugDrawColorShapesByInternalCluster != false) {
      if ((*(byte *)((longlong)piVar4 + 9) & 1) != 0) {
        if (Chaos::DebugDraw::bChaosDebugDebugDrawColorShapesByClusterUnion != false) {
          GetIndexColor((int)FVar3.field0_0x0);
          return (FColor)FVar3.field0_0x0;
        }
        if ((*(byte *)((longlong)piVar4 + 9) & 2) != 0) {
          *(FColor_u_0 *)&param_1->Reference = FColor::Purple.field0_0x0;
          return (FColor)FVar3.field0_0x0;
        }
      }
      *(FColor_u_0 *)&param_1->Reference = FColor::Black.field0_0x0;
      return (FColor)FVar3.field0_0x0;
    }
    if ((Chaos::DebugDraw::bChaosDebugDebugDrawColorShapesByConvexType != false) &&
       ((bVar2 & 0x1f) == 8)) {
      if ((in_register_00000089 & 8) == 0) {
        *(FColor_u_0 *)&param_1->Reference = FColor::Green.field0_0x0;
        return (FColor)FVar3.field0_0x0;
      }
      *(FColor_u_0 *)&param_1->Reference = FColor::Orange.field0_0x0;
      return (FColor)FVar3.field0_0x0;
    }
    this = &CVars::ChaosSolverDebugDebugDrawSettings.ShapesColorsPerState;
    uVar5 = (undefined1)piVar4[2];
  }
  else {
    uVar5 = (undefined1)piVar4[2];
    if (in_stack_00000028 == '\0') {
      this = CVars::GetSolverShapesColorsByState_Client(&local_28);
    }
    else {
      this = CVars::GetSolverShapesColorsByState_Server(&local_28);
    }
  }
  Chaos::DebugDraw::FChaosDebugDrawColorsByState::GetColorFromState
            (this,(EObjectStateType)param_1,(bool)uVar5);
  return (FColor)FVar3.field0_0x0;
}

// ShouldRender @ 143a93450

bool __cdecl
Chaos::FChaosDDParticleShape::ShouldRender
          (TRefCountPtr<Chaos::FImplicitObject_const_> *param_1,FChaosDDParticleData *param_2,
          FChaosDDShapeData param_3,bool param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  EChaosCollisionTraceFlag EVar4;
  
  if (((((((CVars::ChaosSolverDrawShapesShowStatic != 0) || (param_2->ObjectState != Static)) &&
         ((CVars::ChaosSolverDrawShapesShowKinematic != 0 || (param_2->ObjectState != Kinematic))))
        && ((CVars::ChaosSolverDrawShapesShowDynamic != 0 || (param_2->ObjectState != Dynamic)))) &&
       (((Chaos::DebugDraw::bChaosDebugDebugDrawShowQueryOnlyShapes ||
         (((param_3.bIsQuery == 0 || (param_3.bIsSim != 0)) || (param_3.bIsProbe != 0)))) &&
        (((Chaos::DebugDraw::bChaosDebugDebugDrawShowSimOnlyShapes || (param_3.bIsQuery != 0)) ||
         ((param_3.bIsSim == 0 || (param_3.bIsProbe != 0)))))))) &&
      ((((Chaos::DebugDraw::bChaosDebugDebugDrawShowProbeOnlyShapes || (param_3.bIsQuery != 0)) ||
        (param_3.bIsSim != 0)) || (param_3.bIsProbe == 0)))) &&
     (((((CVars::ChaosSolverDebugDrawShowServer != 0 || (!param_4)) &&
        ((CVars::ChaosSolverDebugDrawShowClient != 0 || (param_4)))) &&
       ((param_3.bIsNonOptimized != 0 ||
        (Chaos::DebugDraw::bChaosDebugDebugDrawShowOptimizedConvexes)))) &&
      ((param_3.bIsOptimized != 0 || (!Chaos::DebugDraw::bChaosDebugDebugDrawShowOptimizedConvexes))
      )))) {
    bVar3 = FImplicitObject::GetType(param_1->Reference);
    EVar4 = param_3.CollisionTraceFlag;
    if (((CVars::ChaosSolverDebugDebugDrawSettings.bShowComplexCollision == false) ||
        (EVar4 == Chaos_CTF_UseSimpleAsComplex)) &&
       ((CVars::ChaosSolverDebugDebugDrawSettings.bShowSimpleCollision == false ||
        (EVar4 != Chaos_CTF_UseComplexAsSimple)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((CVars::ChaosSolverDebugDebugDrawSettings.bShowSimpleCollision == false) ||
        (EVar4 == Chaos_CTF_UseComplexAsSimple)) &&
       ((CVars::ChaosSolverDebugDebugDrawSettings.bShowComplexCollision == false ||
        (EVar4 != Chaos_CTF_UseSimpleAsComplex)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar3 & 0x1f) != 0xb) {
      return bVar1;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

