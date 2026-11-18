// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// FSingleParticlePhysicsProxy @ 1440cc640

FSingleParticlePhysicsProxy * __thiscall
Chaos::FSingleParticlePhysicsProxy::FSingleParticlePhysicsProxy
          (FSingleParticlePhysicsProxy *this,
          TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
          *param_1,TGeometryParticleHandleImp<double,3,1> *param_2,UObject *param_3)

{
  TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter> *this_00;
  TUniquePtr<FProxyInterpolationBase,TDefaultDelete<FProxyInterpolationBase>_> *pTVar1;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar2;
  int iVar3;
  TGeometryParticle<double,3> *pTVar4;
  IPhysicsProxyBase *pIVar5;
  longlong lVar6;
  FPhysicsObject *pFVar7;
  code *pcVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  FSingleParticlePhysicsProxy *pFVar11;
  TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter> TVar12;
  FProxyInterpolationBase *pFVar13;
  undefined8 *puVar14;
  FProxyInterpolationBase *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar17;
  TReferenceControllerBase<1> *pTVar18;
  atomic<int> *paVar19;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  FPhysicsObject *local_res18;
  undefined8 local_48 [2];
  
  pTVar10 = ::operator_new(0xb0);
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar19 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSingleParticleProxyTimestamp___00_SharedPointerInternals__6B_
    ;
    memset(pTVar10 + 1,0,0xa0);
    *(undefined4 *)((longlong)&pTVar10[1]._padding_ + 4) = 0xffffffff;
    pTVar18 = pTVar10 + 1;
    *(undefined4 *)&pTVar10[3]._padding_ = 0xffffffff;
    *(undefined4 *)&pTVar10[6]._padding_ = 0xffffffff;
    pTVar10[8].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar10[10].SharedReferenceCount = (atomic<int>)0xffffffff;
    if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FSingleParticlePhysicsProxy *)(*pcVar8)();
      return pFVar11;
    }
    paVar19 = &pTVar10->SharedReferenceCount;
    LOCK();
    *paVar19 = (atomic<int>)((int)*paVar19 + 1);
    UNLOCK();
    pTVar16 = pTVar10;
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IPhysicsProxyBase__6B_;
  this->_padding_ = (longlong)pTVar18;
  this->_padding_ = (longlong)param_3;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xb;
  this->_padding_ = (longlong)pTVar16;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar19 = (atomic<int>)((int)*paVar19 + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  this->_padding_ = (longlong)&___7FSingleParticlePhysicsProxy_Chaos__6B_;
  (this->Particle).Ptr = param_1->Ptr;
  param_1->Ptr = (TGeometryParticle<double,3> *)0x0;
  pTVar4 = (this->Particle).Ptr;
  this->Handle = param_2;
  this_00 = &this->Reference;
  this_00->Ptr = (FPhysicsObject *)0x0;
  pTVar1 = &this->InterpolationData;
  pTVar1->Ptr = (FProxyInterpolationBase *)0x0;
  iVar3 = (pTVar4->MDirtyFlags).Bits;
  pTVar4->Proxy = (IPhysicsProxyBase *)this;
  if ((iVar3 != 0) && ((FPhysicsSolverBase *)this->_padding_ != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy
              ((FPhysicsSolverBase *)this->_padding_,(IPhysicsProxyBase *)this);
  }
  FVar17 = (pTVar4->MShapesArray).AllocatorInstance.SecondaryData;
  iVar3 = (pTVar4->MShapesArray).ArrayNum;
  if (FVar17 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                 )0x0) {
    FVar17 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )&pTVar4->MShapesArray;
  }
  FVar2 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
           )((longlong)FVar17 + (longlong)iVar3 * 8);
  while( true ) {
    if ((pTVar4->MShapesArray).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar17 == FVar2) break;
    pIVar5 = pTVar4->Proxy;
    lVar6 = *(longlong *)FVar17;
    *(IPhysicsProxyBase **)(lVar6 + 0x48) = pIVar5;
    if (((pIVar5 != (IPhysicsProxyBase *)0x0) && (*(int *)(lVar6 + 0xc) != 0)) &&
       (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar5->Solver,pIVar5,*(uint *)(lVar6 + 8) >> 3);
    }
    FVar17 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
              )((longlong)FVar17 + 8);
  }
  pFVar15 = (FProxyInterpolationBase *)0x0;
  local_res10 = 0;
  TVar12 = FPhysicsObjectFactory::CreatePhysicsObject
                     ((IPhysicsProxyBase *)&local_res18,(int)this,(FName *)&DAT_ffffffff);
  if ((FPhysicsObject *)this_00 != TVar12.Ptr) {
    pFVar7 = this_00->Ptr;
    this_00->Ptr = (FPhysicsObject *)(TVar12.Ptr)->Proxy;
    (TVar12.Ptr)->Proxy = (IPhysicsProxyBase *)0x0;
    FPhysicsObjectDeleter::operator()((FPhysicsObjectDeleter *)this_00,pFVar7);
  }
  FPhysicsObjectDeleter::operator()((FPhysicsObjectDeleter *)&local_res18,local_res18);
  pFVar13 = ::operator_new(0x10);
  if (pFVar13 != (FProxyInterpolationBase *)0x0) {
    pFVar13->PullDataInterpIdx_External = -1;
    pFVar13->_padding_ = (longlong)&___7FProxyInterpolationBase__6B_;
    pFVar13->InterpChannel_External = 0;
    pFVar15 = pFVar13;
  }
  if (pTVar1 == (TUniquePtr<FProxyInterpolationBase,TDefaultDelete<FProxyInterpolationBase>_> *)
                local_48) {
    if (pFVar15 == (FProxyInterpolationBase *)0x0) {
      return this;
    }
    puVar14 = (undefined8 *)pFVar15->_padding_;
  }
  else {
    pFVar13 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar15;
    if (pFVar13 == (FProxyInterpolationBase *)0x0) {
      return this;
    }
    puVar14 = (undefined8 *)pFVar13->_padding_;
    pFVar15 = pFVar13;
  }
  (*(code *)*puVar14)(pFVar15,1);
  return this;
}

// ~FSingleParticlePhysicsProxy @ 1440cd710

void __thiscall
Chaos::FSingleParticlePhysicsProxy::~FSingleParticlePhysicsProxy(FSingleParticlePhysicsProxy *this)

{
  FProxyInterpolationBase *pFVar1;
  TGeometryParticle<double,3> *pTVar2;
  
  this->_padding_ = (longlong)&___7FSingleParticlePhysicsProxy_Chaos__6B_;
  pFVar1 = (this->InterpolationData).Ptr;
  if (pFVar1 != (FProxyInterpolationBase *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  FPhysicsObjectDeleter::operator()((FPhysicsObjectDeleter *)&this->Reference,(this->Reference).Ptr)
  ;
  pTVar2 = (this->Particle).Ptr;
  if (pTVar2 != (TGeometryParticle<double,3> *)0x0) {
    (**(code **)pTVar2->_padding_)(pTVar2,1);
  }
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  return;
}

// BufferPhysicsResults @ 1440d4710

void __thiscall
Chaos::FSingleParticlePhysicsProxy::BufferPhysicsResults
          (FSingleParticlePhysicsProxy *this,FDirtyRigidParticleData *param_1)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  EObjectStateType EVar8;
  TVector<double,3> *pTVar9;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong lVar10;
  uint uVar11;
  TVector<double,3> local_38;
  TVector<double,3> local_20;
  
  pTVar4 = this->Handle;
  if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
      this_00 = pTVar4;
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TBasePullData<Chaos::FSingleParticlePhysicsProxy,FSingleParticleProxyTimestamp>::SetProxy
                ((TBasePullData<Chaos::FSingleParticlePhysicsProxy,FSingleParticleProxyTimestamp> *)
                 param_1,this);
      pTVar9 = TParticles<double,3>::GetX
                         ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
      uVar2 = *(undefined8 *)&pTVar9->field_0x8;
      *(undefined8 *)&param_1->X = *(undefined8 *)pTVar9;
      *(undefined8 *)&(param_1->X).field_0x8 = uVar2;
      *(undefined8 *)&(param_1->X).field_0x10 = *(undefined8 *)&pTVar9->field_0x10;
      uVar3 = (uint)this_00->_padding_;
      lVar10 = (longlong)(int)uVar3;
      lVar5 = this_00->_padding_;
      uVar11 = 0;
      if ((int)uVar3 < *(int *)(lVar5 + 0x50)) {
        uVar11 = ~uVar3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)(lVar5 + 0x48);
      uVar2 = *(undefined8 *)(lVar5 + 4 + lVar10 * 0x10);
      fVar1 = *(float *)(lVar5 + 0xc + lVar10 * 0x10);
      (param_1->R).X = (double)*(float *)(lVar5 + lVar10 * 0x10);
      (param_1->R).Y = (double)(float)uVar2;
      (param_1->R).Z = (double)(float)((ulonglong)uVar2 >> 0x20);
      (param_1->R).W = (double)fVar1;
      TKinematicGeometryParticlesImp<double,3,0>::GetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,&local_38,
                 (int)this_00->_padding_);
      *(undefined8 *)&param_1->V = local_38._0_8_;
      *(undefined8 *)&(param_1->V).field_0x8 = local_38._8_8_;
      *(undefined8 *)&(param_1->V).field_0x10 = local_38._16_8_;
      TKinematicGeometryParticlesImp<double,3,0>::GetW
                ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,&local_20,
                 (int)this_00->_padding_);
      *(undefined8 *)&param_1->W = local_20._0_8_;
      *(undefined8 *)&(param_1->W).field_0x8 = local_20._8_8_;
      *(undefined8 *)&(param_1->W).field_0x10 = local_20._16_8_;
      EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      param_1->ObjectState = EVar8;
    }
  }
  return;
}

// BufferPhysicsResults_External @ 1440d4c40

void __thiscall
Chaos::FSingleParticlePhysicsProxy::BufferPhysicsResults_External
          (FSingleParticlePhysicsProxy *this,FDirtyRigidParticleData *param_1)

{
  float fVar1;
  undefined8 uVar2;
  IPhysicsProxyBase *pIVar3;
  TGeometryParticle<double,3> *pTVar4;
  
  pTVar4 = (this->Particle).Ptr;
  if (pTVar4->Type < Rigid) {
    pTVar4 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar4 != (TGeometryParticle<double,3> *)0x0) {
    TBasePullData<Chaos::FSingleParticlePhysicsProxy,FSingleParticleProxyTimestamp>::SetProxy
              ((TBasePullData<Chaos::FSingleParticlePhysicsProxy,FSingleParticleProxyTimestamp> *)
               param_1,this);
    uVar2 = *(undefined8 *)&(pTVar4->MXR).Property.MX.field_0x8;
    *(undefined8 *)&param_1->X = *(undefined8 *)&(pTVar4->MXR).Property.MX;
    *(undefined8 *)&(param_1->X).field_0x8 = uVar2;
    *(undefined8 *)&(param_1->X).field_0x10 = *(undefined8 *)&(pTVar4->MXR).Property.MX.field_0x10;
    uVar2 = *(undefined8 *)&(pTVar4->MXR).Property.MR.field_0x4;
    fVar1 = *(float *)&(pTVar4->MXR).Property.MR.field_0xc;
    (param_1->R).X = (double)*(float *)&(pTVar4->MXR).Property.MR;
    (param_1->R).Y = (double)(float)uVar2;
    (param_1->R).Z = (double)(float)((ulonglong)uVar2 >> 0x20);
    (param_1->R).W = (double)fVar1;
    uVar2 = *(undefined8 *)((longlong)&pTVar4[1]._padding_ + 4);
    *(double *)&param_1->V = (double)*(float *)&pTVar4[1]._padding_;
    *(double *)&(param_1->V).field_0x8 = (double)(float)uVar2;
    *(double *)&(param_1->V).field_0x10 = (double)(float)((ulonglong)uVar2 >> 0x20);
    pIVar3 = pTVar4[1].Proxy;
    *(double *)&param_1->W = (double)*(float *)((longlong)&pTVar4[1]._padding_ + 4);
    *(double *)&(param_1->W).field_0x8 = (double)SUB84(pIVar3,0);
    *(double *)&(param_1->W).field_0x10 = (double)(float)((ulonglong)pIVar3 >> 0x20);
    param_1->ObjectState = *(EObjectStateType *)&pTVar4[2].MNonFrequentData.Property.MSpatialIdx;
  }
  return;
}

// ClearAccumulatedData @ 1440d73e0

void __thiscall
Chaos::FSingleParticlePhysicsProxy::ClearAccumulatedData(FSingleParticlePhysicsProxy *this)

{
  TGeometryParticle<double,3> *pTVar1;
  
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    pTVar1[2].Proxy = (IPhysicsProxyBase *)0x0;
    pTVar1[2]._padding_ = 0;
    *(undefined8 *)&pTVar1[2].MXR.Property.MX = 0;
    *(undefined8 *)&pTVar1[2].MXR.Property.MX.field_0x8 = 0;
    *(undefined8 *)&pTVar1[2].MXR.Property.MX.field_0x10 = 0;
    pTVar1[2].MXR.Property._padding_ = 0;
  }
  (((this->Particle).Ptr)->MDirtyFlags).Bits = 0;
  return;
}

// ClearEvents @ 1440d7ac0

void __thiscall Chaos::FSingleParticlePhysicsProxy::ClearEvents(FSingleParticlePhysicsProxy *this)

{
  TGeometryParticle<double,3> *pTVar1;
  
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    *(undefined1 *)
     ((longlong)
      &pTVar1[2].MNonFrequentData.Property.MDebugName.SharedReferenceCount.ReferenceController + 1)
         = 0;
  }
  return;
}

// GetHandleUnsafe @ 1440e4f00

void * __thiscall
Chaos::FSingleParticlePhysicsProxy::GetHandleUnsafe(FSingleParticlePhysicsProxy *this)

{
  return this->Handle;
}

// GetWakeEvent @ 1440e5d60

EWakeEventEntry __thiscall
Chaos::FSingleParticlePhysicsProxy::GetWakeEvent(FSingleParticlePhysicsProxy *this)

{
  TGeometryParticle<double,3> *pTVar1;
  
  pTVar1 = (this->Particle).Ptr;
  if (pTVar1->Type < Rigid) {
    pTVar1 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    return *(EWakeEventEntry *)
            ((longlong)
             &pTVar1[2].MNonFrequentData.Property.MDebugName.SharedReferenceCount.
              ReferenceController + 1);
  }
  return None;
}

// IsDirty @ 1440e8410

bool __thiscall Chaos::FSingleParticlePhysicsProxy::IsDirty(FSingleParticlePhysicsProxy *this)

{
  return (((this->Particle).Ptr)->MDirtyFlags).Bits != 0;
}

// PullFromPhysicsState @ 1440eabd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FSingleParticlePhysicsProxy::PullFromPhysicsState
          (FSingleParticlePhysicsProxy *this,FDirtyRigidParticleData *param_1,int param_2,
          FDirtyRigidParticleData *param_3,float *param_4,
          FDirtyRigidParticleReplicationErrorData *param_5,double param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  EObjectStateType EVar5;
  int iVar6;
  TPBDRigidParticle<double,3> *pTVar7;
  FDirtyRigidParticleData *pFVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  char cVar15;
  EObjectStateType EVar16;
  FProxyInterpolationErrorVelocity *pFVar17;
  float *pfVar18;
  TVector<double,3> *pTVar19;
  double *pdVar20;
  FDebugDrawQueue *pFVar21;
  TQuat<double> *pTVar22;
  undefined1 (*pauVar23) [16];
  FColor *pFVar24;
  int iVar25;
  FDirtyRigidParticleData *pFVar26;
  FProxyInterpolationBase *pFVar27;
  TPBDRigidParticle<double,3> *this_00;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  uint uVar48;
  double dVar47;
  uint uVar50;
  double dVar49;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  byte local_res8;
  undefined8 in_stack_fffffffffffffad8;
  undefined4 uVar56;
  bool local_4f8;
  char local_4f7;
  undefined1 *local_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_488;
  double local_480;
  double local_478;
  TVector<double>_u_0 local_468;
  TVector<double>_u_0 local_450;
  TVector<double>_u_0 local_438;
  TVector<double>_u_0 local_420;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3f0;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3c0;
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_390;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_360;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_330;
  TVector<double>_u_0 local_318;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  TQuat<double> local_258;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  TQuat<double> local_1f8;
  TQuat<double> local_1d8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  TQuat<double> local_108;
  undefined1 local_e8 [192];
  
  dVar4 = __real_4000000000000000;
  dVar39 = __real_3fe0000000000000;
  uVar56 = (undefined4)((ulonglong)in_stack_fffffffffffffad8 >> 0x20);
  pTVar7 = (TPBDRigidParticle<double,3> *)(this->Particle).Ptr;
  if (pTVar7 == (TPBDRigidParticle<double,3> *)0x0) {
    return true;
  }
  this_00 = (TPBDRigidParticle<double,3> *)0x0;
  if (Kinematic < (byte)pTVar7->field_0x98) {
    this_00 = pTVar7;
  }
  if (this_00 == (TPBDRigidParticle<double,3> *)0x0) {
    return true;
  }
  local_4f8 = bPullPhysicsStateForceUpdateBounds;
  if ((this_00->MMiscData).Property.MObjectState == Kinematic) {
    if (SyncKinematicOnGameThread == 0) {
      local_res8 = 0;
    }
    else {
      if (SyncKinematicOnGameThread == 1) goto LAB_1440eac83;
      local_res8 = *(byte *)((longlong)&(this_00->MMiscData).Property.MControlFlags.field0_0x0 + 1)
                   & 1;
    }
  }
  else {
LAB_1440eac83:
    local_res8 = 1;
  }
  pFVar8 = *(FDirtyRigidParticleData **)&param_1->field_0x8;
  pFVar27 = (this->InterpolationData).Ptr;
  if (param_5 != (FDirtyRigidParticleReplicationErrorData *)0x0) {
    if (RenderInterpolationCVars::bRenderInterpErrorVelocityCorrection) {
      if (pFVar27 == (FProxyInterpolationBase *)0x0) {
        pFVar17 = ::operator_new(0xf0);
        if (pFVar17 == (FProxyInterpolationErrorVelocity *)0x0) {
LAB_1440eaeaa:
          pFVar17 = (FProxyInterpolationErrorVelocity *)0x0;
        }
        else {
          pFVar17 = FProxyInterpolationErrorVelocity::FProxyInterpolationErrorVelocity(pFVar17,-1,0)
          ;
        }
        goto LAB_1440eaeac;
      }
      iVar25 = (**(code **)(pFVar27->_padding_ + 8))(pFVar27);
      if (iVar25 != 2) {
        pFVar27 = (this->InterpolationData).Ptr;
        iVar25 = pFVar27->InterpChannel_External;
        iVar6 = pFVar27->PullDataInterpIdx_External;
        pFVar17 = ::operator_new(0xf0);
        if (pFVar17 == (FProxyInterpolationErrorVelocity *)0x0) goto LAB_1440eaeaa;
        pFVar17 = FProxyInterpolationErrorVelocity::FProxyInterpolationErrorVelocity
                            (pFVar17,iVar6,iVar25);
        goto LAB_1440eaeac;
      }
    }
    else {
      if (pFVar27 == (FProxyInterpolationBase *)0x0) {
        pFVar17 = ::operator_new(0xa0);
        if (pFVar17 == (FProxyInterpolationErrorVelocity *)0x0) goto LAB_1440eaeaa;
        *(undefined4 *)&pFVar17->field_0x8 = 0xffffffff;
        *(undefined ***)pFVar17 = &___7FProxyInterpolationError__6B_;
        *(undefined8 *)&pFVar17->field_0xc = 0;
        *(undefined8 *)&pFVar17->field_0x14 = 0;
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        *(double *)&pFVar17->field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)&pFVar17->field_0x28 = uVar11;
        *(double *)&pFVar17->field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        *(double *)&pFVar17->field_0x38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)&pFVar17->field_0x40 = uVar11;
        *(double *)&pFVar17->field_0x48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dVar40 = UE::Math::TQuat<double>::Identity.Y;
        *(double *)&pFVar17->field_0x50 = UE::Math::TQuat<double>::Identity.X;
        *(double *)&pFVar17->field_0x58 = dVar40;
        dVar40 = UE::Math::TQuat<double>::Identity.W;
        *(double *)&pFVar17->field_0x60 = UE::Math::TQuat<double>::Identity.Z;
        *(double *)&pFVar17->field_0x68 = dVar40;
        dVar40 = UE::Math::TQuat<double>::Identity.Y;
        *(double *)&pFVar17->field_0x70 = UE::Math::TQuat<double>::Identity.X;
        *(double *)&pFVar17->field_0x78 = dVar40;
        dVar40 = UE::Math::TQuat<double>::Identity.W;
        *(double *)&pFVar17->field_0x80 = UE::Math::TQuat<double>::Identity.Z;
        *(double *)&pFVar17->field_0x88 = dVar40;
        *(undefined8 *)&pFVar17->field_0x90 = 0;
      }
      else {
        iVar25 = (**(code **)(pFVar27->_padding_ + 8))(pFVar27);
        if (iVar25 == 1) goto LAB_1440eaec3;
        pFVar27 = (this->InterpolationData).Ptr;
        iVar25 = pFVar27->InterpChannel_External;
        iVar6 = pFVar27->PullDataInterpIdx_External;
        pFVar17 = ::operator_new(0xa0);
        if (pFVar17 == (FProxyInterpolationErrorVelocity *)0x0) goto LAB_1440eaeaa;
        *(int *)&pFVar17->field_0x8 = iVar6;
        *(undefined ***)pFVar17 = &___7FProxyInterpolationError__6B_;
        *(undefined8 *)&pFVar17->field_0x10 = 0;
        *(undefined4 *)&pFVar17->field_0x18 = 0;
        *(int *)&pFVar17->field_0xc = iVar25;
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        *(double *)&pFVar17->field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)&pFVar17->field_0x28 = uVar11;
        *(double *)&pFVar17->field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        *(double *)&pFVar17->field_0x38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)&pFVar17->field_0x40 = uVar11;
        *(double *)&pFVar17->field_0x48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dVar40 = UE::Math::TQuat<double>::Identity.Y;
        *(double *)&pFVar17->field_0x50 = UE::Math::TQuat<double>::Identity.X;
        *(double *)&pFVar17->field_0x58 = dVar40;
        dVar40 = UE::Math::TQuat<double>::Identity.W;
        *(double *)&pFVar17->field_0x60 = UE::Math::TQuat<double>::Identity.Z;
        *(double *)&pFVar17->field_0x68 = dVar40;
        dVar40 = UE::Math::TQuat<double>::Identity.Y;
        *(double *)&pFVar17->field_0x70 = UE::Math::TQuat<double>::Identity.X;
        *(double *)&pFVar17->field_0x78 = dVar40;
        dVar40 = UE::Math::TQuat<double>::Identity.W;
        *(double *)&pFVar17->field_0x80 = UE::Math::TQuat<double>::Identity.Z;
        *(double *)&pFVar17->field_0x88 = dVar40;
        *(undefined8 *)&pFVar17->field_0x90 = 0;
      }
LAB_1440eaeac:
      pFVar27 = (this->InterpolationData).Ptr;
      (this->InterpolationData).Ptr = (FProxyInterpolationBase *)pFVar17;
      if (pFVar27 != (FProxyInterpolationBase *)0x0) {
        (**(code **)pFVar27->_padding_)();
      }
    }
LAB_1440eaec3:
    pFVar27 = (this->InterpolationData).Ptr;
    if ((pFVar27 == (FProxyInterpolationBase *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InterpData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\SingleParticlePhysicsProxy.cpp"
                            ,0x14b,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return (bool)uVar13;
    }
    fVar3 = RenderInterpolationCVars::RenderInterpMaximumErrorCorrectionDesyncTimeBeforeSnapping;
    fVar2 = RenderInterpolationCVars::RenderInterpMaximumErrorCorrectionBeforeSnapping;
    fVar1 = RenderInterpolationCVars::RenderInterpErrorCorrectionDuration;
    dVar40 = *(double *)&(param_5->ErrorX).field_0x8;
    dVar44 = *(double *)&(param_5->ErrorX).field_0x10;
    dVar40 = dVar40 * dVar40 + *(double *)&param_5->ErrorX * *(double *)&param_5->ErrorX +
             dVar44 * dVar44;
    pfVar18 = (float *)(**(code **)(pFVar27->_padding_ + 0x68))(pFVar27);
    if (pfVar18 != (float *)0x0) {
      fVar1 = *pfVar18;
      fVar2 = pfVar18[1];
      fVar3 = pfVar18[2];
    }
    dVar44 = (double)fVar3;
    if (dVar40 < (double)fVar2 * (double)fVar2) {
LAB_1440eb04e:
      iVar25 = (int)ROUND((dVar4 / param_6) * (double)fVar1 - dVar39) >> 1;
    }
    else if (((0.0 < dVar44) &&
             ((dVar31 = (double)*(float *)&this_00->field_0xa4 * dVar44,
              dVar34 = (double)*(float *)&this_00->field_0xa0 * dVar44,
              dVar38 = (double)*(float *)&this_00->field_0xa8 * dVar44,
              dVar40 < dVar31 * dVar31 + dVar34 * dVar34 + dVar38 * dVar38 ||
              (dVar38 = dVar44 * *(double *)&(param_1->V).field_0x8,
              dVar34 = dVar44 * *(double *)&param_1->V,
              dVar31 = dVar44 * *(double *)&(param_1->V).field_0x10,
              dVar40 < dVar38 * dVar38 + dVar34 * dVar34 + dVar31 * dVar31)))) ||
            ((iVar25 = 0, param_3 != (FDirtyRigidParticleData *)0x0 &&
             ((iVar25 = 0, 0.0 < dVar44 &&
              (dVar31 = dVar44 * *(double *)&param_3->V,
              dVar34 = dVar44 * *(double *)&(param_3->V).field_0x8,
              dVar44 = dVar44 * *(double *)&(param_3->V).field_0x10,
              dVar40 < dVar34 * dVar34 + dVar31 * dVar31 + dVar44 * dVar44)))))) goto LAB_1440eb04e;
    local_4f0 = &this_00->field_0xa0;
    local_1b8 = (param_5->ErrorR).X;
    dStack_1b0 = (param_5->ErrorR).Y;
    local_1a8 = (param_5->ErrorR).Z;
    dStack_1a0 = (param_5->ErrorR).W;
    local_238 = *(undefined8 *)&param_5->ErrorX;
    uStack_230 = *(undefined8 *)&(param_5->ErrorX).field_0x8;
    local_228 = *(undefined8 *)&(param_5->ErrorX).field_0x10;
    (**(code **)(pFVar27->_padding_ + 0x28))
              (pFVar27,&local_238,&local_1b8,param_2,CONCAT44(uVar56,iVar25));
    local_208 = *(undefined8 *)&this_00->field_0x30;
    local_218 = *(undefined8 *)&this_00->field_0x20;
    uStack_210 = *(undefined8 *)&this_00->field_0x28;
    local_4a0 = (double)*(float *)&this_00->field_0xa4;
    local_4a8 = (double)*(float *)local_4f0;
    local_498 = (double)*(float *)&this_00->field_0xa8;
    (**(code **)(pFVar27->_padding_ + 0x60))(pFVar27,&local_4a8,&local_218);
  }
  fVar1 = __real_3f800000;
  if (param_3 == (FDirtyRigidParticleData *)0x0) {
    if (local_res8 != 0) {
      if (*(int *)&(pFVar8->X).field_0x8 <= param_2) {
        uVar11 = *(undefined8 *)&(param_1->X).field_0x8;
        local_4f8 = true;
        *(undefined8 *)&this_00->field_0x20 = *(undefined8 *)&param_1->X;
        *(undefined8 *)&this_00->field_0x28 = uVar11;
        *(undefined8 *)&this_00->field_0x30 = *(undefined8 *)&(param_1->X).field_0x10;
      }
      if (*(int *)&pFVar8->V <= param_2) {
        local_2f8 = (param_1->R).X;
        dStack_2f0 = (param_1->R).Y;
        local_2e8 = (param_1->R).Z;
        dStack_2e0 = (param_1->R).W;
        local_4f8 = true;
        *(float *)&this_00->field_0x40 = (float)local_2f8;
        *(float *)&this_00->field_0x44 = (float)dStack_2f0;
        *(float *)&this_00->field_0x48 = (float)local_2e8;
        *(float *)&this_00->field_0x4c = (float)dStack_2e0;
      }
    }
    if (*(int *)&(pFVar8->W).field_0x10 <= param_2) {
      dVar39 = *(double *)&(param_1->V).field_0x8;
      dVar4 = *(double *)&(param_1->V).field_0x10;
      *(float *)&this_00->field_0xa0 = (float)*(double *)&param_1->V;
      *(float *)&this_00->field_0xa4 = (float)dVar39;
      *(float *)&this_00->field_0xa8 = (float)dVar4;
    }
    if (*(int *)&pFVar8[1].field_0x8 <= param_2) {
      dVar39 = *(double *)&(param_1->W).field_0x8;
      dVar4 = *(double *)&(param_1->W).field_0x10;
      *(float *)&this_00->field_0xac = (float)*(double *)&param_1->W;
      *(float *)&this_00->field_0xb0 = (float)dVar39;
      *(float *)&this_00->field_0xb4 = (float)dVar4;
    }
    if (param_2 < *(int *)&pFVar8->field_0x4) goto LAB_1440ebef9;
    EVar5 = (this_00->MMiscData).Property.MObjectState;
    EVar16 = param_1->ObjectState;
    if (EVar5 == Dynamic) {
      if (EVar16 == Sleeping) {
        this_00->MWakeEvent = Sleep;
LAB_1440ebecb:
        *(undefined8 *)&this_00->field_0xa0 = 0;
        *(undefined8 *)&this_00->field_0xa8 = 0;
        *(undefined8 *)&this_00->field_0xb0 = 0;
        goto LAB_1440ebeec;
      }
    }
    else if ((EVar5 == Sleeping) && (EVar16 == Dynamic)) {
      this_00->MWakeEvent = Awake;
    }
    else if (EVar16 == Sleeping) goto LAB_1440ebecb;
  }
  else {
    if (local_res8 != 0) {
      if (pFVar27 == (FProxyInterpolationBase *)0x0) {
        cVar14 = '\0';
      }
      else {
        (**(code **)(pFVar27->_padding_ + 0x30))(pFVar27,param_2,param_6);
        cVar14 = (**(code **)(pFVar27->_padding_ + 0x10))(pFVar27);
      }
      fVar3 = __real_40a00000;
      fVar2 = __real_3f000000;
      local_4f7 = '\0';
      iVar25 = *(int *)&(pFVar8->X).field_0x8;
      if (iVar25 <= param_2) {
        pTVar19 = &param_1->X;
        if (param_2 <= iVar25) {
          pTVar19 = (TVector<double,3> *)&pFVar8->field_0x8;
        }
        if (pTVar19 != (TVector<double,3> *)0x0) {
          dVar40 = *(double *)&(param_3->X).field_0x10 - *(double *)&pTVar19->field_0x10;
          dVar44 = *(double *)&(param_3->X).field_0x8 - *(double *)&pTVar19->field_0x8;
          dVar31 = *(double *)&param_3->X - *(double *)pTVar19;
          dVar39 = (double)*param_4;
          local_4d8 = dVar40 * dVar39 + *(double *)&pTVar19->field_0x10;
          dStack_4e0 = dVar44 * dVar39 + *(double *)&pTVar19->field_0x8;
          local_4e8 = dVar39 * dVar31 + *(double *)pTVar19;
          if (cVar14 != '\0') {
            local_488 = dVar31;
            local_480 = dVar44;
            local_478 = dVar40;
            local_4f7 = (**(code **)(pFVar27->_padding_ + 0x38))
                                  (pFVar27,&local_488,
                                   RenderInterpolationCVars::
                                   RenderInterpErrorDirectionalDecayMultiplier);
            pdVar20 = (double *)(**(code **)(pFVar27->_padding_ + 0x18))(pFVar27,local_138,*param_4)
            ;
            local_4e8 = local_4e8 + *pdVar20;
            dStack_4e0 = dStack_4e0 + pdVar20[1];
            local_4d8 = local_4d8 + pdVar20[2];
            cVar15 = (**(code **)(pFVar27->_padding_ + 0x48))(pFVar27);
            if (cVar15 != '\0') {
              if (RenderInterpolationCVars::bRenderInterpDebugDraw != false) {
                dVar39 = (double)RenderInterpolationCVars::RenderInterpDebugDrawZOffset;
                pFVar21 = FDebugDrawQueue::GetInstance();
                dVar40 = local_4d8 + dVar39;
                local_468._s_0.X = local_4e8;
                local_468._s_0.Y = dStack_4e0;
                local_468._s_0.Z = dVar40;
                pdVar20 = (double *)
                          (**(code **)(pFVar27->_padding_ + 0x18))(pFVar27,local_180,*param_4);
                local_450._s_0.X = local_4e8 - *pdVar20;
                local_450._s_0.Y = dStack_4e0 - pdVar20[1];
                local_450._s_0.Z = (local_4d8 - pdVar20[2]) + dVar39;
                FDebugDrawQueue::DrawDebugDirectionalArrow
                          (pFVar21,(TVector<double> *)&local_450._s_0,
                           (TVector<double> *)&local_468._s_0,fVar1,&FColor::Blue,false,fVar3,'\0',
                           fVar2);
                pFVar21 = FDebugDrawQueue::GetInstance();
                local_438._s_0.X = local_4e8;
                local_438._s_0.Y = dStack_4e0;
                local_438._s_0.Z = dVar40;
                pdVar20 = (double *)
                          (**(code **)(pFVar27->_padding_ + 0x58))(pFVar27,local_168,*param_4);
                local_420._s_0.Z = dVar39 + pdVar20[2];
                local_420._s_0.X = *pdVar20;
                local_420._s_0.Y = pdVar20[1];
                FDebugDrawQueue::DrawDebugDirectionalArrow
                          (pFVar21,(TVector<double> *)&local_420._s_0,
                           (TVector<double> *)&local_438._s_0,fVar1,&FColor::Blue,false,fVar3,'\0',
                           fVar2);
                pFVar21 = FDebugDrawQueue::GetInstance();
                local_258.X = (double)*(float *)&this_00->field_0x40;
                local_258.Y = (double)*(float *)&this_00->field_0x44;
                local_258.Z = (double)(float)*(undefined8 *)&this_00->field_0x48;
                local_258.W = (double)(float)((ulonglong)*(undefined8 *)&this_00->field_0x48 >> 0x20
                                             );
                local_2d8._s_0.Z = __real_3ff0000000000000;
                local_2d8._s_0.X = ___xmm_3ff00000000000004000000000000000;
                local_2d8._s_0.Y = _UNK_15076b828;
                local_408._s_0.X = local_4e8;
                local_408._s_0.Y = dStack_4e0;
                local_408._s_0.Z = dVar40;
                FDebugDrawQueue::DrawDebugBox
                          (pFVar21,(TVector<double> *)&local_408._s_0,
                           (TVector<double> *)&local_2d8._s_0,&local_258,&FColor::Cyan,false,fVar3,
                           '\0',__real_3e800000);
              }
              fVar30 = (float)(**(code **)(pFVar27->_padding_ + 0x50))
                                        (pFVar27,(int)ROUND((dVar4 / param_6) *
                                                            (double)RenderInterpolationCVars::
                                                                                                                                        
                                                  RenderInterpErrorVelocitySmoothingDuration -
                                                  __real_3fe0000000000000) >> 1);
              pdVar20 = (double *)
                        (**(code **)(pFVar27->_padding_ + 0x58))(pFVar27,local_150,*param_4);
              dVar39 = (double)fVar30;
              local_4e8 = (*pdVar20 - local_4e8) * dVar39 + local_4e8;
              dStack_4e0 = (pdVar20[1] - dStack_4e0) * dVar39 + dStack_4e0;
              local_4d8 = (pdVar20[2] - local_4d8) * dVar39 + local_4d8;
            }
          }
          local_4f8 = true;
          *(double *)&this_00->field_0x20 = local_4e8;
          *(double *)&this_00->field_0x28 = dStack_4e0;
          *(double *)&this_00->field_0x30 = local_4d8;
        }
      }
      if (*(int *)&pFVar8->V <= param_2) {
        pFVar26 = pFVar8;
        if (*(int *)&pFVar8->V < param_2) {
          pFVar26 = param_1;
        }
        if (&pFVar26->R != (TQuat<double> *)0x0) {
          auVar41._0_8_ = (double)*param_4;
          auVar41._8_8_ = 0;
          pTVar22 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              (&local_108,&pFVar26->R,&param_3->R,auVar41._0_8_);
          dVar39 = pTVar22->X;
          dVar40 = pTVar22->Y;
          dVar44 = pTVar22->Z;
          dVar31 = pTVar22->W;
          dVar34 = dVar39 * dVar39 + dVar44 * dVar44;
          dVar38 = dVar40 * dVar40 + dVar31 * dVar31;
          auVar42._8_4_ = SUB84(dVar38,0);
          auVar42._0_8_ = dVar34;
          auVar42._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          auVar51._0_8_ = auVar42._8_8_ + dVar34;
          auVar51._8_8_ = dVar34 + dVar38;
          auVar42 = sqrtpd(auVar41,auVar51);
          uVar28 = -(ulonglong)(__real_3e45798ee0000000 <= auVar51._0_8_);
          uVar29 = -(ulonglong)(__real_3e45798ee0000000 <= auVar51._8_8_);
          auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
          uVar48 = (uint)(uVar28 >> 0x20);
          uVar50 = (uint)(uVar29 >> 0x20);
          auVar52._0_8_ = uVar28 & (ulonglong)(auVar51._0_8_ * dVar39);
          uVar10 = uVar29 & (ulonglong)(auVar51._8_8_ * dVar40);
          auVar52._8_4_ = (undefined4)uVar10;
          auVar52._12_4_ = (undefined4)(uVar10 >> 0x20);
          auVar35._0_4_ =
               ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar35._4_4_ =
               ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar35._8_4_ =
               ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar35._12_4_ =
               ~uVar50 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          local_4c8 = auVar52 | auVar35;
          dVar39 = local_4c8._0_8_;
          auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
          auVar55._0_4_ =
               ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar55._4_4_ =
               ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar55._8_4_ =
               ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar55._12_4_ =
               ~uVar50 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          auVar36._0_8_ = (ulonglong)(auVar42._0_8_ * dVar44) & uVar28;
          uVar29 = (ulonglong)(auVar42._8_8_ * dVar31) & uVar29;
          auVar36._8_4_ = (undefined4)uVar29;
          auVar36._12_4_ = (undefined4)(uVar29 >> 0x20);
          local_4b8 = auVar55 | auVar36;
          if (cVar14 != '\0') {
            pauVar23 = (undefined1 (*) [16])
                       (**(code **)(pFVar27->_padding_ + 0x20))(pFVar27,local_e8,*param_4);
            dVar38 = local_4c8._8_8_;
            dVar47 = local_4b8._0_8_;
            dVar49 = local_4b8._8_8_;
            auVar42 = pauVar23[1];
            dVar45 = auVar42._0_8_;
            dVar46 = auVar42._8_8_;
            auVar43._8_4_ = local_4c8._8_4_;
            auVar43._0_8_ = dVar38;
            auVar43._12_4_ = local_4c8._12_4_;
            auVar51 = *pauVar23;
            auVar37._8_4_ = local_4c8._8_4_;
            auVar37._0_8_ = dVar38;
            auVar37._12_4_ = local_4c8._12_4_;
            auVar32._8_4_ = local_4b8._8_4_;
            auVar32._0_8_ = dVar49;
            auVar32._12_4_ = local_4b8._12_4_;
            dVar40 = auVar51._0_8_;
            dVar44 = auVar51._8_8_;
            auVar53._8_4_ = auVar42._0_4_;
            auVar53._0_8_ = dVar46;
            auVar53._12_4_ = auVar42._4_4_;
            dVar54 = auVar53._8_8_ * dVar39;
            auVar33._8_4_ = auVar51._0_4_;
            auVar33._0_8_ = dVar44;
            auVar33._12_4_ = auVar51._4_4_;
            dVar31 = dVar44 * dVar39;
            dVar34 = dVar40 * dVar39 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar49 * dVar46 +
                     auVar43._8_8_ * dVar44 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar45 * dVar47 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            dVar39 = dVar46 * dVar39 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     dVar49 * dVar40 +
                     dVar38 * dVar45 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar44 * dVar47 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            local_4b8._8_4_ = SUB84(dVar34,0);
            local_4b8._0_8_ =
                 dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar49 * dVar45 +
                 dVar38 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar46 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_4b8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
            local_4c8._8_8_ =
                 dVar54 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar32._8_8_ * dVar44 +
                 auVar37._8_8_ * dVar46 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar33._8_8_ * dVar47 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            local_4c8._0_8_ = dVar39;
          }
          local_4f8 = true;
          *(float *)&this_00->field_0x40 = (float)dVar39;
          *(float *)&this_00->field_0x44 = (float)(double)local_4c8._8_8_;
          *(float *)&this_00->field_0x48 = (float)(double)local_4b8._0_8_;
          *(float *)&this_00->field_0x4c = (float)(double)local_4b8._8_8_;
        }
      }
      if (RenderInterpolationCVars::bRenderInterpDebugDraw != false) {
        dVar39 = (double)RenderInterpolationCVars::RenderInterpDebugDrawZOffset;
        pFVar21 = FDebugDrawQueue::GetInstance();
        dVar40 = __real_3ff0000000000000;
        local_2c0._s_0.X = ___xmm_3ff00000000000004000000000000000;
        local_2c0._s_0.Y = _UNK_15076b828;
        local_3f0._s_0.X = (double)*(undefined8 *)&param_3->X;
        local_3f0._s_0.Y = (double)*(undefined8 *)&(param_3->X).field_0x8;
        local_3f0._s_0.Z = dVar39 + *(double *)&(param_3->X).field_0x10;
        local_2c0._s_0.Z = __real_3ff0000000000000;
        FDebugDrawQueue::DrawDebugBox
                  (pFVar21,(TVector<double> *)&local_3f0._s_0,(TVector<double> *)&local_2c0._s_0,
                   &param_3->R,&FColor::Yellow,false,fVar3,'\0',fVar2);
        pFVar21 = FDebugDrawQueue::GetInstance();
        local_3d8._s_0.X = (double)*(undefined8 *)&param_3->X;
        local_3d8._s_0.Y = (double)*(undefined8 *)&(param_3->X).field_0x8;
        local_3d8._s_0.Z = dVar39 + *(double *)&(param_3->X).field_0x10;
        local_3c0._s_0.X = (double)*(undefined8 *)&param_1->X;
        local_3c0._s_0.Y = (double)*(undefined8 *)&(param_1->X).field_0x8;
        local_3c0._s_0.Z = dVar39 + *(double *)&(param_1->X).field_0x10;
        FDebugDrawQueue::DrawDebugDirectionalArrow
                  (pFVar21,(TVector<double> *)&local_3c0._s_0,(TVector<double> *)&local_3d8._s_0,
                   fVar2,&FColor::Yellow,false,fVar3,'\0',fVar2);
        pFVar21 = FDebugDrawQueue::GetInstance();
        local_1f8.X = (double)*(float *)&this_00->field_0x40;
        pFVar24 = &FColor::Green;
        if (local_4f7 != '\0') {
          pFVar24 = &FColor::Cyan;
        }
        local_1f8.Z = (double)(float)*(undefined8 *)&this_00->field_0x48;
        local_1f8.W = (double)(float)((ulonglong)*(undefined8 *)&this_00->field_0x48 >> 0x20);
        local_1f8.Y = (double)*(float *)&this_00->field_0x44;
        local_3a8._s_0.X = (double)*(undefined8 *)&this_00->field_0x20;
        local_3a8._s_0.Y = (double)*(undefined8 *)&this_00->field_0x28;
        local_3a8._s_0.Z = dVar39 + *(double *)&this_00->field_0x30;
        local_2a8._s_0.Z = dVar40;
        local_2a8._s_0.X = ___xmm_3ff00000000000004000000000000000;
        local_2a8._s_0.Y = _UNK_15076b828;
        FDebugDrawQueue::DrawDebugBox
                  (pFVar21,(TVector<double> *)&local_3a8._s_0,(TVector<double> *)&local_2a8._s_0,
                   &local_1f8,pFVar24,false,fVar3,'\0',fVar2);
        if (cVar14 != '\0') {
          if (param_5 != (FDirtyRigidParticleReplicationErrorData *)0x0) {
            pFVar21 = FDebugDrawQueue::GetInstance();
            local_290._s_0.X = ___xmm_40000000000000004010000000000000;
            local_290._s_0.Y = _UNK_150b4c808;
            local_390._s_0.X = (double)*(undefined8 *)&param_1->X;
            local_390._s_0.Y = (double)*(undefined8 *)&(param_1->X).field_0x8;
            local_390._s_0.Z = dVar39 + *(double *)&(param_1->X).field_0x10;
            local_290._s_0.Z = dVar4;
            FDebugDrawQueue::DrawDebugBox
                      (pFVar21,(TVector<double> *)&local_390._s_0,(TVector<double> *)&local_290._s_0
                       ,&param_1->R,&FColor::Red,false,fVar3,'\0',fVar2);
            pFVar21 = FDebugDrawQueue::GetInstance();
            dVar40 = *(double *)&(param_1->X).field_0x10;
            local_378._s_0.X = (double)*(undefined8 *)&param_1->X;
            local_378._s_0.Y = (double)*(undefined8 *)&(param_1->X).field_0x8;
            local_378._s_0.Z = dVar40 + dVar39;
            local_360._s_0.X = local_378._s_0.X + *(double *)&param_5->ErrorX;
            local_360._s_0.Z = dVar40 + *(double *)&(param_5->ErrorX).field_0x10 + dVar39;
            local_360._s_0.Y = local_378._s_0.Y + *(double *)&(param_5->ErrorX).field_0x8;
            FDebugDrawQueue::DrawDebugDirectionalArrow
                      (pFVar21,(TVector<double> *)&local_360._s_0,(TVector<double> *)&local_378._s_0
                       ,fVar1,&FColor::Red,false,fVar3,'\0',fVar2);
          }
          cVar14 = (**(code **)(pFVar27->_padding_ + 0x48))(pFVar27);
          if (cVar14 == '\0') {
            pFVar21 = FDebugDrawQueue::GetInstance();
            local_330._s_0.X = (double)*(undefined8 *)&this_00->field_0x20;
            local_330._s_0.Y = (double)*(undefined8 *)&this_00->field_0x28;
            local_330._s_0.Z = dVar39 + *(double *)&this_00->field_0x30;
            pdVar20 = (double *)(**(code **)(pFVar27->_padding_ + 0x18))(pFVar27,local_198,*param_4)
            ;
            local_318._s_0.X = *(double *)&this_00->field_0x20 - *pdVar20;
            local_318._s_0.Y = *(double *)&this_00->field_0x28 - pdVar20[1];
            local_318._s_0.Z = (*(double *)&this_00->field_0x30 - pdVar20[2]) + dVar39;
            FDebugDrawQueue::DrawDebugDirectionalArrow
                      (pFVar21,(TVector<double> *)&local_318._s_0,(TVector<double> *)&local_330._s_0
                       ,fVar1,&FColor::Blue,false,fVar3,'\0',fVar2);
          }
          else {
            pFVar21 = FDebugDrawQueue::GetInstance();
            local_1d8.X = (double)*(float *)&this_00->field_0x40;
            local_1d8.Y = (double)*(float *)&this_00->field_0x44;
            local_1d8.Z = (double)(float)*(undefined8 *)&this_00->field_0x48;
            local_1d8.W = (double)(float)((ulonglong)*(undefined8 *)&this_00->field_0x48 >> 0x20);
            local_278._s_0.Z = dVar4;
            local_278._s_0.X = ___xmm_40000000000000004000000000000000;
            local_278._s_0.Y = _UNK_150689698;
            pdVar20 = (double *)(**(code **)(pFVar27->_padding_ + 0x58))(pFVar27,local_120,*param_4)
            ;
            local_348._s_0.Z = dVar39 + pdVar20[2];
            local_348._s_0.X = *pdVar20;
            local_348._s_0.Y = pdVar20[1];
            FDebugDrawQueue::DrawDebugBox
                      (pFVar21,(TVector<double> *)&local_348._s_0,(TVector<double> *)&local_278._s_0
                       ,&local_1d8,&FColor::Purple,false,fVar3,'\0',fVar2);
          }
        }
      }
    }
    iVar25 = *(int *)&(pFVar8->W).field_0x10;
    if (iVar25 <= param_2) {
      pTVar19 = &param_1->V;
      if (param_2 <= iVar25) {
        pTVar19 = (TVector<double,3> *)&(pFVar8->V).field_0x10;
      }
      if (pTVar19 != (TVector<double,3> *)0x0) {
        dVar39 = *(double *)&pTVar19->field_0x10;
        dVar4 = *(double *)&pTVar19->field_0x8;
        dVar40 = *(double *)&(param_3->V).field_0x8;
        dVar31 = (double)*param_4;
        dVar44 = *(double *)&(param_3->V).field_0x10;
        *(float *)&this_00->field_0xa0 =
             (float)((*(double *)&param_3->V - *(double *)pTVar19) * dVar31 + *(double *)pTVar19);
        *(float *)&this_00->field_0xa4 = (float)((dVar40 - dVar4) * dVar31 + dVar4);
        *(float *)&this_00->field_0xa8 = (float)((dVar44 - dVar39) * dVar31 + dVar39);
      }
    }
    if (*(int *)&pFVar8[1].field_0x8 <= param_2) {
      pTVar19 = &param_1->W;
      if (param_2 <= *(int *)&pFVar8[1].field_0x8) {
        pTVar19 = (TVector<double,3> *)&pFVar8->ObjectState;
      }
      if (pTVar19 != (TVector<double,3> *)0x0) {
        dVar39 = *(double *)&(param_3->W).field_0x8;
        dVar4 = *(double *)&pTVar19->field_0x8;
        dVar40 = *(double *)&(param_3->W).field_0x10;
        dVar44 = *(double *)&pTVar19->field_0x10;
        dVar38 = (double)*param_4;
        dVar31 = *(double *)&pTVar19->field_0x8;
        dVar34 = *(double *)&pTVar19->field_0x10;
        *(float *)&this_00->field_0xac =
             (float)((*(double *)&param_3->W - *(double *)pTVar19) * dVar38 + *(double *)pTVar19);
        *(float *)&this_00->field_0xb0 = (float)((dVar39 - dVar4) * dVar38 + dVar31);
        *(float *)&this_00->field_0xb4 = (float)((dVar40 - dVar44) * dVar38 + dVar34);
      }
    }
    if (param_2 <= *(int *)&pFVar8->field_0x4) {
      if ((*(int *)&pFVar8->field_0x4 == param_2) && (fVar1 == *param_4)) {
        TPBDRigidParticle<double,3>::SetObjectState(this_00,param_3->ObjectState,true,false);
      }
      goto LAB_1440ebef9;
    }
    EVar5 = (this_00->MMiscData).Property.MObjectState;
    EVar16 = param_1->ObjectState;
    if (EVar5 == Dynamic) {
      if (EVar16 == Sleeping) {
        this_00->MWakeEvent = Sleep;
LAB_1440ebd3a:
        *(undefined8 *)&this_00->field_0xa0 = 0;
        *(undefined8 *)&this_00->field_0xa8 = 0;
        *(undefined8 *)&this_00->field_0xb0 = 0;
LAB_1440ebeec:
        *(uint *)&this_00->field_0x9c = *(uint *)&this_00->field_0x9c & 0xfffffffb;
      }
    }
    else if ((EVar5 == Sleeping) && (EVar16 == Dynamic)) {
      this_00->MWakeEvent = Awake;
    }
    else if (EVar16 == Sleeping) goto LAB_1440ebd3a;
  }
  (this_00->MMiscData).Property.MObjectState = EVar16;
LAB_1440ebef9:
  if (local_4f8 != false) {
    TGeometryParticle<double,3>::UpdateShapeBounds((TGeometryParticle<double,3> *)this_00);
  }
  return true;
}

// PushToPhysicsState @ 1440ed8f0

void __thiscall
Chaos::FSingleParticlePhysicsProxy::PushToPhysicsState
          (FSingleParticlePhysicsProxy *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyProxy *param_3,FShapeDirtyData *param_4,double param_5)

{
  EParticleType EVar1;
  FPBDRigidsSolver *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  pFVar2 = (FPBDRigidsSolver *)this->_padding_;
  lVar3 = pFVar2->_padding_;
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x4e4) <= *(int *)(lVar3 + 0x4e0))) ||
     (pFVar2->CurrentFrame != (int)this->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  EVar1 = (param_3->PropertyData).ParticleBufferType;
  if (EVar1 == Static) {
    PushToPhysicsStateImp<0>(param_1,this->Handle,param_2,param_3,param_4,pFVar2,bVar5,param_5);
  }
  else {
    if (EVar1 == Kinematic) {
      PushToPhysicsStateImp<1>(param_1,this->Handle,param_2,param_3,param_4,pFVar2,bVar5,param_5);
      return;
    }
    if (EVar1 == Rigid) {
      PushToPhysicsStateImp<2>(param_1,this->Handle,param_2,param_3,param_4,pFVar2,bVar5,param_5);
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\SingleParticlePhysicsProxy.cpp"
                       ,0xf0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

