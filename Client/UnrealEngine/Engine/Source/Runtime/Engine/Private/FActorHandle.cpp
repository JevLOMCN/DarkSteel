// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 53

// FActorHandle @ 14824dc60

FActorHandle * __thiscall
ImmediatePhysics_Chaos::FActorHandle::FActorHandle
          (FActorHandle *this,FPBDRigidsSOAs *param_1,
          TArrayCollectionArray<Chaos::TVector<double,3>_> *param_2,
          TArrayCollectionArray<Chaos::TRotation<double,3>_> *param_3,FActorSetup *param_4)

{
  this->Particles = param_1;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->ParticleHandle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this->ParticlePrevXs = param_2;
  this->ParticlePrevRs = param_3;
  CreateParticleHandle(this,param_4);
  return this;
}

// ~FActorHandle @ 148252740

void __thiscall ImmediatePhysics_Chaos::FActorHandle::~FActorHandle(FActorHandle *this)

{
  if (this->ParticleHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    Chaos::FPBDRigidsSOAs::DestroyParticle(this->Particles,this->ParticleHandle);
    this->ParticleHandle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  return;
}

// AddForce @ 148263700

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::AddForce(FActorHandle *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  TVector<double,3> *pTVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    dVar9 = (param_1->field0_0x0)._s_0.X;
    dVar10 = (param_1->field0_0x0)._s_0.Y;
    pTVar12 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Acceleration
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    pdVar13 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    dVar2 = *pdVar13;
    dVar3 = *(double *)&pTVar12->field_0x10;
    dVar4 = *(double *)pTVar12;
    dVar5 = *(double *)&pTVar12->field_0x8;
    uVar6 = (uint)this_00->_padding_;
    lVar14 = (longlong)(int)uVar6;
    lVar7 = this_00->_padding_;
    uVar15 = 0;
    if ((int)uVar6 < *(int *)(lVar7 + 0x328)) {
      uVar15 = ~uVar6 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar7 = *(longlong *)(lVar7 + 800);
    *(double *)(lVar7 + lVar14 * 0x18) = dVar2 * dVar9 + dVar4;
    *(double *)(lVar7 + 8 + lVar14 * 0x18) = dVar2 * dVar10 + dVar5;
    *(double *)(lVar7 + 0x10 + lVar14 * 0x18) = dVar2 * dVar1 + dVar3;
  }
  return;
}

// AddImpulseAtLocation @ 148264120

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::AddImpulseAtLocation
          (FActorHandle *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  TVector<double,3> *pTVar11;
  double *pdVar12;
  uint uVar13;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  TVector<double,3> local_78 [4];
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar11 = Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
              GetCoMWorldPosition<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                        (local_78,(TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    dVar1 = *(double *)&pTVar11->field_0x10;
    dVar8 = *(double *)pTVar11;
    dVar9 = *(double *)&pTVar11->field_0x8;
    Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
    GetWorldInvInertia<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
              ((PMatrix<double,3,3> *)&local_f8,(TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    pdVar12 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    uVar5 = (uint)this_00->_padding_;
    lVar14 = (longlong)(int)uVar5;
    lVar6 = this_00->_padding_;
    dVar2 = *pdVar12;
    dVar16 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    dVar4 = (param_1->field0_0x0)._s_0.Z;
    uVar13 = 0;
    if ((int)uVar5 < *(int *)(lVar6 + 0x358)) {
      uVar13 = ~uVar5 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar6 = *(longlong *)(lVar6 + 0x350);
    dVar15 = (param_2->field0_0x0)._s_0.Y;
    *(double *)(lVar6 + lVar14 * 0x18) = dVar2 * dVar16 + *(double *)(lVar6 + lVar14 * 0x18);
    dVar1 = (param_2->field0_0x0)._s_0.Z - dVar1;
    *(double *)(lVar6 + 0x10 + lVar14 * 0x18) =
         dVar2 * dVar4 + *(double *)(lVar6 + 0x10 + lVar14 * 0x18);
    dVar8 = (param_2->field0_0x0)._s_0.X - dVar8;
    *(double *)(lVar6 + 8 + lVar14 * 0x18) = dVar2 * dVar3 + *(double *)(lVar6 + 8 + lVar14 * 0x18);
    dVar15 = dVar15 - dVar9;
    dVar16 = dVar15 * (param_1->field0_0x0)._s_0.Z - dVar1 * (param_1->field0_0x0)._s_0.Y;
    uVar5 = (uint)this_00->_padding_;
    lVar14 = (longlong)(int)uVar5;
    lVar6 = this_00->_padding_;
    dVar2 = dVar1 * (param_1->field0_0x0)._s_0.X - dVar8 * (param_1->field0_0x0)._s_0.Z;
    dVar1 = dVar8 * (param_1->field0_0x0)._s_0.Y - dVar15 * (param_1->field0_0x0)._s_0.X;
    uVar13 = 0;
    if ((int)uVar5 < *(int *)(lVar6 + 0x370)) {
      uVar13 = ~uVar5 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar6 = *(longlong *)(lVar6 + 0x368);
    *(double *)(lVar6 + lVar14 * 0x18) =
         dVar2 * local_f0 + dVar16 * local_f8 + dVar1 * local_e8 +
         *(double *)(lVar6 + lVar14 * 0x18);
    *(double *)(lVar6 + 8 + lVar14 * 0x18) =
         dVar2 * local_d0 + dVar16 * local_d8 + dVar1 * local_c8 +
         *(double *)(lVar6 + 8 + lVar14 * 0x18);
    *(double *)(lVar6 + 0x10 + lVar14 * 0x18) =
         dVar2 * local_b0 + dVar16 * local_b8 + dVar1 * local_a8 +
         *(double *)(lVar6 + 0x10 + lVar14 * 0x18);
  }
  return;
}

// AddRadialForce @ 148264cc0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::AddRadialForce
          (FActorHandle *this,TVector<double> *param_1,double param_2,double param_3,
          ERadialImpulseFalloff param_4,EForceType param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double,3> *pTVar4;
  double *pdVar5;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  double dVar6;
  double dVar7;
  undefined1 local_98 [16];
  double local_88;
  double local_78;
  double local_70;
  double local_68;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
    GetCoMWorldRotation<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
              ((TRotation<double,3> *)local_98,(TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    pTVar4 = Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
             GetCoMWorldPosition<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                       ((TVector<double,3> *)&local_78,
                        (TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    local_68 = *(double *)&pTVar4->field_0x10;
    dVar2 = *(double *)pTVar4 - (param_1->field0_0x0)._s_0.X;
    dVar3 = local_68 - (param_1->field0_0x0)._s_0.Z;
    dVar1 = *(double *)&pTVar4->field_0x8 - (param_1->field0_0x0)._s_0.Y;
    dVar6 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
    if (SQRT(dVar6) <= param_3) {
      if (__real_3e45798ee0000000 < dVar6) {
        dVar7 = __real_3ff0000000000000 / SQRT(dVar6);
        dVar2 = dVar2 * dVar7;
        dVar1 = dVar1 * dVar7;
        dVar3 = dVar3 * dVar7;
      }
      if (param_4 == RIF_Linear) {
        param_2 = param_2 * (__real_3ff0000000000000 - SQRT(dVar6) / param_3);
      }
      dVar2 = dVar2 * param_2;
      dVar1 = dVar1 * param_2;
      dVar3 = dVar3 * param_2;
      if ((param_5 - AddAcceleration & 0xfffffffd) != 0) {
        pdVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM
                           ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        dVar6 = *pdVar5;
        dVar3 = dVar6 * dVar3;
        dVar1 = dVar6 * dVar1;
        dVar2 = dVar6 * dVar2;
      }
      if (param_5 - AddImpulse < 2) {
        Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                   (TVector<double,3> *)local_98,(int)this_00->_padding_);
        local_78 = (double)local_98._0_8_ + dVar2;
        local_70 = (double)local_98._8_8_ + dVar1;
        local_68 = local_88 + dVar3;
        Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                   (int)this_00->_padding_,(TVector<double,3> *)&local_78);
      }
      else {
        pdVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM
                           ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        dVar6 = *pdVar5;
        pTVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Acceleration
                           ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        *(double *)pTVar4 = dVar6 * dVar2 + *(double *)pTVar4;
        *(double *)&pTVar4->field_0x8 = dVar6 * dVar1 + *(double *)&pTVar4->field_0x8;
        *(double *)&pTVar4->field_0x10 = dVar6 * dVar3 + *(double *)&pTVar4->field_0x10;
      }
    }
  }
  return;
}

// AddTorque @ 1482667c0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::AddTorque(FActorHandle *this,TVector<double> *param_1)

{
  TGeometryParticleHandleImp<double,3,1> *this_00;
  double local_28;
  double dStack_20;
  double local_18;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_28 = (param_1->field0_0x0)._s_0.X;
    dStack_20 = (param_1->field0_0x0)._s_0.Y;
    local_18 = (param_1->field0_0x0)._s_0.Z;
    Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddTorque
              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,(TVector<double,3> *)&local_28,true
              );
  }
  return;
}

// CouldBeDynamic @ 148271720

bool __thiscall ImmediatePhysics_Chaos::FActorHandle::CouldBeDynamic(FActorHandle *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    pTVar1 = this->ParticleHandle;
  }
  return pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0;
}

// CreateParticleHandle @ 148275b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::CreateParticleHandle(FActorHandle *this,FActorSetup *param_1)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  double *pdVar3;
  ushort *puVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  EActorType EVar8;
  int iVar9;
  FPBDRigidsSOAs *pFVar10;
  longlong lVar11;
  IPhysicsProxyBase *pIVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  bool bVar21;
  EObjectStateType EVar22;
  uint uVar23;
  uint uVar24;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar25;
  FImplicitObject *pFVar26;
  bool *pbVar27;
  undefined8 *puVar28;
  TAABB<double,3> *pTVar29;
  TVector<double,3> *pTVar30;
  longlong lVar31;
  TGeometryParticleHandleImp<double,3,1> *pTVar32;
  uint uVar33;
  bool bVar34;
  undefined1 auStackY_268 [32];
  FGeometryParticleParameters local_238;
  FGeometryParticleParameters local_237;
  undefined1 local_236;
  undefined4 local_235;
  FLLMScope local_230;
  FLLMScope local_22c;
  FLLMScope local_228 [2];
  FCollisionData local_220;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  FMemScope local_1d8;
  FMemScope local_1d0;
  FMemScope local_1c8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  local_1b0;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_1a0;
  TVector<double,3> local_190;
  FShapeFilterData local_178;
  double local_160;
  double dStack_158;
  double local_150;
  double local_138;
  undefined1 local_130 [56];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_268;
  EVar8 = param_1->ActorType;
  if (EVar8 == StaticActor) {
    pFVar10 = this->Particles;
    local_237.bDisabled = false;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TArray<Chaos::TGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateStaticParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FGeometryParticleParameters_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TArray<Chaos::TGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateStaticParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FGeometryParticleParameters_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TArray<Chaos::TGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateStaticParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FGeometryParticleParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_TArray<Chaos::TGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateStaticParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FGeometryParticleParameters_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name337,L"Physics/StaticParticles");
      _Init_thread_footer(&`public:_class_TArray<Chaos::TGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateStaticParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FGeometryParticleParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_228,
               `public:_class_TArray<Chaos::TGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateStaticParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FGeometryParticleParameters_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name337,false,None,Default,true);
    FMemScope::FMemScope
              (&local_1c8,
               &`public:_class_TArray<Chaos::TGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateStaticParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FGeometryParticleParameters_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name337,true);
    Chaos::FPBDRigidsSOAs::
    CreateParticlesHelper<Chaos::TGeometryParticleHandleImp<double,3,1>,Chaos::TGeometryParticlesImp<double,3,0>_>
              (pFVar10,&local_1a0,1,(FUniqueIdx *)0x0,&pFVar10->StaticParticles,&local_237);
    Chaos::FPBDRigidsSOAs::UpdateViews(pFVar10);
    FMemScope::~FMemScope(&local_1c8);
    FLLMScope::~FLLMScope(local_228);
    if ((local_1a0.ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  else if (EVar8 == KinematicActor) {
    pFVar10 = this->Particles;
    local_238.bDisabled = false;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateKinematicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FKinematicGeometryParticleParameters_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateKinematicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FKinematicGeometryParticleParameters_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateKinematicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FKinematicGeometryParticleParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateKinematicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FKinematicGeometryParticleParameters_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name345,L"Physics/KinematicParticles");
      _Init_thread_footer(&`public:_class_TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateKinematicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FKinematicGeometryParticleParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&local_22c,
               `public:_class_TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateKinematicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FKinematicGeometryParticleParameters_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name345,false,None,Default,true);
    FMemScope::FMemScope
              (&local_1d0,
               &`public:_class_TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateKinematicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FKinematicGeometryParticleParameters_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name345,true);
    Chaos::FPBDRigidsSOAs::
    CreateParticlesHelper<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>,Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
              (pFVar10,&local_1b0,1,(FUniqueIdx *)0x0,&pFVar10->KinematicParticles,&local_238);
    Chaos::FPBDRigidsSOAs::UpdateViews(pFVar10);
    FMemScope::~FMemScope(&local_1d0);
    FLLMScope::~FLLMScope(&local_22c);
    local_1a0.AllocatorInstance.Data = local_1b0.AllocatorInstance.Data;
    if ((local_1b0.ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       local_1a0.AllocatorInstance.Data = local_1b0.AllocatorInstance.Data, bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  else {
    if (EVar8 != DynamicActor) goto LAB_148275e70;
    pFVar10 = this->Particles;
    local_235 = 0x10000;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateDynamicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateDynamicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateDynamicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateDynamicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name353,L"Physics/DynamicParticles");
      _Init_thread_footer(&`public:_class_TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateDynamicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&local_230,
               `public:_class_TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateDynamicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name353,false,None,Default,true);
    FMemScope::FMemScope
              (&local_1d8,
               &`public:_class_TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateDynamicParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name353,true);
    Chaos::FPBDRigidsSOAs::
    CreateParticlesHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>,Chaos::TPBDRigidParticles<double,3>_>
              (pFVar10,&local_1c0,1,(FUniqueIdx *)0x0,&pFVar10->DynamicParticles,
               (FGeometryParticleParameters *)&local_235);
    Chaos::FPBDRigidsSOAs::AddToActiveArray(pFVar10,&local_1c0);
    Chaos::FPBDRigidsSOAs::UpdateViews(pFVar10);
    FMemScope::~FMemScope(&local_1d8);
    FLLMScope::~FLLMScope(&local_230);
    local_1a0.AllocatorInstance.Data = local_1c0.AllocatorInstance.Data;
    if ((local_1c0.ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       local_1a0.AllocatorInstance.Data = local_1c0.AllocatorInstance.Data, bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  this->ParticleHandle =
       *(TGeometryParticleHandleImp<double,3,1> **)local_1a0.AllocatorInstance.Data;
  FMemory::Free(local_1a0.AllocatorInstance.Data);
LAB_148275e70:
  if (this->ParticleHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    SetWorldTransform(this,&param_1->Transform);
    (**(code **)(*(longlong *)this->ParticleHandle->_padding_ + 0x10))();
    Chaos::Filter::FShapeFilterBuilder::BuildLegacyBlockAllSimShapeFilter(&local_178,'\0','\0',All);
    local_220.QueryData.Word2 = 0;
    local_220.QueryData.Word3 = 0;
    local_220.bIsProbe = '\0';
    local_220.bQueryCollision = '\x01';
    local_220.bSimCollision = '\x01';
    local_220.QueryData.Word0 = 0;
    local_220.QueryData.Word1 = 0;
    local_220.SimData.Word2 = 0;
    local_220.SimData.Word3 = 0;
    local_220.SimData.Word0 = 0;
    local_220.SimData.Word1 = 0;
    local_220.UserData = (void *)0x0;
    local_220.CollisionTraceType = Chaos_CTF_UseDefault;
    Chaos::FCollisionData::SetShapeFilterData(&local_220,&local_178);
    local_220.bSimCollision = '\x01';
    FVar25 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                         ((TGeometryParticlesImp<double,3,0> *)this->ParticleHandle->_padding_,
                          (int)this->ParticleHandle->_padding_);
    iVar9 = *(int *)((longlong)FVar25 + 0x10);
    piVar1 = (int *)((longlong)FVar25 + 0x10);
    if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
         ((longlong)FVar25 + 8) !=
        (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0
       ) {
      FVar25 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 *)((longlong)FVar25 + 8);
    }
    FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar25 + (longlong)iVar9 * 8);
    while( true ) {
      if (*piVar1 != iVar9) {
        local_236 = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_236);
      }
      if (FVar25 == FVar2) break;
      lVar11 = *(longlong *)FVar25;
      if ((*(uint *)(lVar11 + 8) & 3) == 0) {
        pIVar12 = *(IPhysicsProxyBase **)(lVar11 + 0x48);
        *(undefined8 *)(lVar11 + 0x50) = local_220.QueryData._0_8_;
        *(undefined8 *)(lVar11 + 0x58) = local_220.QueryData._8_8_;
        *(undefined8 *)(lVar11 + 0x60) = local_220.SimData._0_8_;
        *(undefined8 *)(lVar11 + 0x68) = local_220.SimData._8_8_;
        *(void **)(lVar11 + 0x70) = local_220.UserData;
        *(ulonglong *)(lVar11 + 0x78) =
             CONCAT62(local_220._42_6_,CONCAT11(local_220._41_1_,local_220.CollisionTraceType));
        uVar33 = *(uint *)(lVar11 + 0xc);
        *(uint *)(lVar11 + 0xc) = uVar33 | 1;
        if (((uVar33 != 0) || (pIVar12 == (IPhysicsProxyBase *)0x0)) ||
           (pIVar12->Solver == (FPhysicsSolverBase *)0x0)) goto LAB_148275fd7;
        Chaos::FPhysicsSolverBase::AddDirtyProxyShape
                  (pIVar12->Solver,pIVar12,*(uint *)(lVar11 + 8) >> 3);
        FVar25 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar25 + 8);
      }
      else {
        *(undefined8 *)(lVar11 + 0x48) = local_220.QueryData._0_8_;
        *(undefined8 *)(lVar11 + 0x50) = local_220.QueryData._8_8_;
        *(undefined8 *)(lVar11 + 0x58) = local_220.SimData._0_8_;
        *(undefined8 *)(lVar11 + 0x60) = local_220.SimData._8_8_;
        *(void **)(lVar11 + 0x68) = local_220.UserData;
        *(ulonglong *)(lVar11 + 0x70) =
             CONCAT62(local_220._42_6_,CONCAT11(local_220._41_1_,local_220.CollisionTraceType));
LAB_148275fd7:
        FVar25 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar25 + 8);
      }
    }
    pFVar26 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this->ParticleHandle);
    uVar33 = 0;
    if ((pFVar26 != (FImplicitObject *)0x0) &&
       (pFVar26 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this->ParticleHandle),
       pFVar26->bHasBoundingBox != false)) {
      pbVar27 = Chaos::TGeometryParticlesImp<double,3,0>::HasBounds
                          ((TGeometryParticlesImp<double,3,0> *)this->ParticleHandle->_padding_,
                           (int)this->ParticleHandle->_padding_);
      *pbVar27 = true;
      pTVar32 = this->ParticleHandle;
      pFVar26 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(pTVar32);
      puVar28 = (undefined8 *)(**(code **)(pFVar26->_padding_ + 0x90))(pFVar26,local_130);
      pTVar29 = Chaos::TGeometryParticlesImp<double,3,0>::LocalBounds
                          ((TGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                           (int)pTVar32->_padding_);
      uVar6 = puVar28[1];
      local_190._16_8_ = 0;
      *(undefined8 *)&pTVar29->MMin = *puVar28;
      *(undefined8 *)&(pTVar29->MMin).field_0x8 = uVar6;
      *(undefined8 *)&(pTVar29->MMin).field_0x10 = puVar28[2];
      uVar6 = puVar28[4];
      *(undefined8 *)&pTVar29->MMax = puVar28[3];
      *(undefined8 *)&(pTVar29->MMax).field_0x8 = uVar6;
      *(undefined8 *)&(pTVar29->MMax).field_0x10 = puVar28[5];
      pTVar32 = this->ParticleHandle;
      local_190._0_8_ = 0;
      local_190._8_8_ = 0;
      uVar24 = (uint)pTVar32->_padding_;
      lVar31 = (longlong)(int)uVar24;
      lVar11 = pTVar32->_padding_;
      uVar23 = uVar33;
      if ((int)uVar24 < *(int *)(lVar11 + 0x50)) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar11 = *(longlong *)(lVar11 + 0x48);
      fVar5 = *(float *)(lVar11 + lVar31 * 0x10);
      uVar6 = *(undefined8 *)(lVar11 + 8 + lVar31 * 0x10);
      dVar14 = (double)(float)((ulonglong)uVar6 >> 0x20);
      dVar15 = (double)*(float *)(lVar11 + 4 + lVar31 * 0x10);
      pTVar30 = Chaos::TParticles<double,3>::GetX
                          ((TParticles<double,3> *)this->ParticleHandle->_padding_,
                           (int)this->ParticleHandle->_padding_);
      local_e8._8_4_ = SUB84(dVar14,0);
      local_e8._0_8_ = (double)(float)uVar6;
      local_e8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      local_f8._8_4_ = SUB84(dVar15,0);
      local_f8._0_8_ = (double)fVar5;
      local_f8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      local_d8 = *(undefined8 *)pTVar30;
      uStack_d0 = *(undefined8 *)&pTVar30->field_0x8;
      local_c8 = *(undefined8 *)&pTVar30->field_0x10;
      local_a8 = ___xmm_00000000000000003ff0000000000000;
      uStack_a0 = _UNK_150689518;
      uStack_c0 = 0;
      local_b8 = ___xmm_3ff00000000000003ff0000000000000;
      uStack_b0 = _UNK_150689688;
      Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
                ((TGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,(int)pTVar32->_padding_,
                 (TRigidTransform<double,3> *)local_f8,&local_190);
    }
    uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
      pTVar32 = this->ParticleHandle;
    }
    if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      uVar24 = (uint)pTVar32->_padding_;
      lVar11 = pTVar32->_padding_;
      uVar23 = uVar33;
      if ((int)uVar24 < *(int *)(lVar11 + 0x298)) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar11 = *(longlong *)(lVar11 + 0x290);
      *(undefined8 *)(lVar11 + (longlong)(int)uVar24 * 0xc) = uVar6;
      *(undefined4 *)(lVar11 + 8 + (longlong)(int)uVar24 * 0xc) = uVar20;
      uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar24 = (uint)pTVar32->_padding_;
      lVar11 = pTVar32->_padding_;
      if ((int)uVar24 < *(int *)(lVar11 + 0x2b0)) {
        uVar33 = ~uVar24 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar11 = *(longlong *)(lVar11 + 0x2a8);
      *(undefined8 *)(lVar11 + (longlong)(int)uVar24 * 0xc) = uVar6;
      *(undefined4 *)(lVar11 + 8 + (longlong)(int)uVar24 * 0xc) = uVar20;
    }
    pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
      pTVar32 = this->ParticleHandle;
    }
    if ((pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (EVar22 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32), EVar22 == Dynamic))
    {
      dVar14 = param_1->Mass;
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
        local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        dVar15 = (param_1->Inertia).field0_0x0._s_0.X;
        dVar14 = __real_3ff0000000000000 / dVar14;
        uVar6 = __real_47eff933c0000000;
        if (dVar15 != 0.0) {
          uVar6 = __real_3ff0000000000000 / dVar15;
        }
        dVar15 = (param_1->Inertia).field0_0x0._s_0.Y;
        uVar16 = __real_47eff933c0000000;
        if (dVar15 != 0.0) {
          uVar16 = __real_3ff0000000000000 / dVar15;
        }
        dVar15 = (param_1->Inertia).field0_0x0._s_0.Z;
        uVar17 = __real_47eff933c0000000;
        if (dVar15 != 0.0) {
          uVar17 = __real_3ff0000000000000 / dVar15;
        }
      }
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetM
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,&param_1->Mass);
      uVar33 = (uint)pTVar32->_padding_;
      lVar11 = pTVar32->_padding_;
      uVar23 = 0;
      uVar24 = uVar23;
      if ((int)uVar33 < *(int *)(lVar11 + 1000)) {
        uVar24 = ~uVar33 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(double *)(*(longlong *)(lVar11 + 0x3e0) + (longlong)(int)uVar33 * 8) = dVar14;
      uVar33 = (uint)pTVar32->_padding_;
      dVar14 = (param_1->CoMTransform).Translation.ZW.m128d_f64[0];
      lVar11 = pTVar32->_padding_;
      dVar15 = (param_1->CoMTransform).Translation.XY.m128d_f64[0];
      dVar18 = (param_1->CoMTransform).Translation.XY.m128d_f64[1];
      uVar24 = uVar23;
      if ((int)uVar33 < *(int *)(lVar11 + 0x400)) {
        uVar24 = ~uVar33 >> 0x1f;
      }
      local_160 = dVar15;
      dStack_158 = dVar18;
      local_150 = dVar14;
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar11 = *(longlong *)(lVar11 + 0x3f8);
      pdVar3 = (double *)(lVar11 + (longlong)(int)uVar33 * 0x18);
      *pdVar3 = dVar15;
      pdVar3[1] = dVar18;
      *(double *)(lVar11 + 0x10 + (longlong)(int)uVar33 * 0x18) = dVar14;
      uVar33 = (uint)pTVar32->_padding_;
      lVar11 = pTVar32->_padding_;
      dVar14 = (param_1->CoMTransform).Rotation.XY.m128d_f64[0];
      dVar15 = (param_1->CoMTransform).Rotation.XY.m128d_f64[1];
      dVar18 = (param_1->CoMTransform).Rotation.ZW.m128d_f64[0];
      dVar19 = (param_1->CoMTransform).Rotation.ZW.m128d_f64[1];
      uVar24 = uVar23;
      if ((int)uVar33 < *(int *)(lVar11 + 0x418)) {
        uVar24 = ~uVar33 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar11 = *(longlong *)(lVar11 + 0x410);
      pdVar3 = (double *)((longlong)(int)uVar33 * 0x20 + lVar11);
      *pdVar3 = dVar14;
      pdVar3[1] = dVar15;
      pdVar3 = (double *)((longlong)(int)uVar33 * 0x20 + 0x10 + lVar11);
      *pdVar3 = dVar18;
      pdVar3[1] = dVar19;
      local_1f0 = (float)(param_1->Inertia).field0_0x0._s_0.X;
      local_1ec = (float)(param_1->Inertia).field0_0x0._s_0.Y;
      local_1e8 = (float)(param_1->Inertia).field0_0x0._s_0.Z;
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetI
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,(TVector<float,3> *)&local_1f0);
      local_1e4 = (float)(double)uVar6;
      local_1dc = (float)(double)uVar17;
      local_1e0 = (float)(double)uVar16;
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvI
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,(TVector<float,3> *)&local_1e4);
      bVar34 = param_1->bInertiaConditioningEnabled;
      bVar21 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InertiaConditioningEnabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32);
      if (bVar34 != bVar21) {
        uVar33 = (uint)pTVar32->_padding_;
        lVar11 = pTVar32->_padding_;
        uVar24 = uVar23;
        if ((int)uVar33 < *(int *)(lVar11 + 0x2e0)) {
          uVar24 = ~uVar33 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar11 = *(longlong *)(lVar11 + 0x2d8);
        puVar4 = (ushort *)((longlong)(int)uVar33 * 0x10 + 8 + lVar11);
        *puVar4 = *puVar4 & 0xffef;
        puVar4 = (ushort *)((longlong)(int)uVar33 * 0x10 + 8 + lVar11);
        *puVar4 = *puVar4 | (ushort)bVar34 << 4;
        Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32);
      }
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetLinearEtherDrag
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,&param_1->LinearDamping);
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetAngularEtherDrag
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,&param_1->AngularDamping);
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetGravityEnabled
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,param_1->bEnableGravity);
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetGravityGroupIndex
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,(int)param_1->GravityGroupIndex);
      uVar33 = (uint)pTVar32->_padding_;
      lVar11 = pTVar32->_padding_;
      uVar24 = uVar23;
      if ((int)uVar33 < *(int *)(lVar11 + 0x2e0)) {
        uVar24 = ~uVar33 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar11 = *(longlong *)(lVar11 + 0x2d8);
      puVar4 = (ushort *)((longlong)(int)uVar33 * 0x10 + 8 + lVar11);
      *puVar4 = *puVar4 & 0xfeff;
      puVar4 = (ushort *)((longlong)(int)uVar33 * 0x10 + 8 + lVar11);
      *puVar4 = *puVar4 | param_1->bUpdateKinematicFromSimulation << 8;
      uVar33 = (uint)pTVar32->_padding_;
      lVar11 = pTVar32->_padding_;
      if ((int)uVar33 < *(int *)(lVar11 + 0x2e0)) {
        uVar23 = ~uVar33 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar11 = *(longlong *)(lVar11 + 0x2d8);
      puVar4 = (ushort *)((longlong)(int)uVar33 * 0x10 + 8 + lVar11);
      *puVar4 = *puVar4 & 0xf7ff;
      puVar4 = (ushort *)((longlong)(int)uVar33 * 0x10 + 8 + lVar11);
      *puVar4 = *puVar4 | param_1->bGyroscopicTorqueEnabled << 0xb;
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32,true);
    }
  }
  return;
}

// GetAngularDamping @ 148284a10

double __thiscall ImmediatePhysics_Chaos::FActorHandle::GetAngularDamping(FActorHandle *this)

{
  double *pdVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pdVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularEtherDrag
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    return *pdVar1;
  }
  return 0.0;
}

// GetAngularVelocity @ 148284da0

TVector<double> * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetAngularVelocity
          (FActorHandle *this,TVector<double> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar1 = this->ParticleHandle;
  }
  if (pTVar1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_28 = (double)Chaos::FGenericParticleHandleImp::ZeroVector._0_8_;
    dStack_20 = (double)Chaos::FGenericParticleHandleImp::ZeroVector._8_8_;
    local_18 = (double)Chaos::FGenericParticleHandleImp::ZeroVector._16_8_;
  }
  else {
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar1->_padding_,
               (TVector<double,3> *)&local_28,(int)pTVar1->_padding_);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetEnabled @ 148287790

bool __thiscall ImmediatePhysics_Chaos::FActorHandle::GetEnabled(FActorHandle *this)

{
  bool *pbVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pbVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    return *pbVar1 == false;
  }
  return true;
}

// GetHasCollision @ 148288e70

bool __thiscall ImmediatePhysics_Chaos::FActorHandle::GetHasCollision(FActorHandle *this)

{
  bool *pbVar1;
  
  pbVar1 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                     ((TGeometryParticlesImp<double,3,0> *)this->ParticleHandle->_padding_,
                      (int)this->ParticleHandle->_padding_);
  return *pbVar1;
}

// GetInertia @ 148288eb0

TVector<double> * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetInertia
          (FActorHandle *this,TVector<double> *__return_storage_ptr__)

{
  uint uVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  FGenericParticleHandleImp local_res8;
  
  pTVar2 = this->ParticleHandle;
  local_res8.MHandle = pTVar2;
  bVar5 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar5) {
    pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
      pTVar6 = pTVar2;
    }
    uVar1 = (uint)pTVar6->_padding_;
    lVar3 = pTVar6->_padding_;
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar3 + 0x388)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TVector<double> *)(*pcVar4)();
        return pTVar7;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x380);
    uVar9 = *(undefined8 *)(lVar3 + (longlong)(int)uVar1 * 0xc);
    fVar11 = *(float *)(lVar3 + 8 + (longlong)(int)uVar1 * 0xc);
    fVar10 = (float)((ulonglong)uVar9 >> 0x20);
  }
  else {
    fVar11 = 0.0;
    fVar10 = 0.0;
    uVar9 = 0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar11;
  return __return_storage_ptr__;
}

// GetInverseInertia @ 1482891a0

TVector<double> * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetInverseInertia
          (FActorHandle *this,TVector<double> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  bool bVar2;
  TVector<float,3> *pTVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  float fVar5;
  undefined8 uVar4;
  float fVar6;
  FGenericParticleHandleImp local_res8;
  
  pTVar1 = this->ParticleHandle;
  local_res8.MHandle = pTVar1;
  bVar2 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar2) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
      this_00 = pTVar1;
    }
    pTVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvI
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    uVar4 = *(undefined8 *)pTVar3;
    fVar6 = *(float *)&pTVar3->field_0x8;
    fVar5 = (float)((ulonglong)uVar4 >> 0x20);
  }
  else {
    fVar6 = 0.0;
    fVar5 = 0.0;
    uVar4 = 0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar6;
  return __return_storage_ptr__;
}

// GetInverseMass @ 148289220

double __thiscall ImmediatePhysics_Chaos::FActorHandle::GetInverseMass(FActorHandle *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  EObjectStateType EVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  double *pdVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  pTVar1 = this->ParticleHandle;
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar3 = this_00;
  if (*(char *)((longlong)&pTVar1->_padding_ + 4) != '\0') {
    pTVar3 = pTVar1;
  }
  if (pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar5 = this_00;
    if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
      pTVar5 = pTVar3;
    }
    if (pTVar5 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar2 = Kinematic;
    }
    else {
      EVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar5);
    }
    if (EVar2 == Dynamic) goto LAB_148289288;
  }
  pTVar3 = this_00;
  if (*(char *)((longlong)&pTVar1->_padding_ + 4) != '\0') {
    pTVar3 = pTVar1;
  }
  if (pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar5 = this_00;
    if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
      pTVar5 = pTVar3;
    }
    if (pTVar5 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar2 = Kinematic;
    }
    else {
      EVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar5);
    }
    if (EVar2 == Sleeping) {
LAB_148289288:
      if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
        this_00 = pTVar1;
      }
      pdVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      return *pdVar4;
    }
  }
  return 0.0;
}

// GetIsKinematic @ 1482892c0

bool __thiscall ImmediatePhysics_Chaos::FActorHandle::GetIsKinematic(FActorHandle *this)

{
  EObjectStateType EVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar2 = this->ParticleHandle;
  }
  if (pTVar2 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return false;
  }
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
    this_00 = pTVar2;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    return EVar1 == Kinematic;
  }
  return true;
}

// GetKinematicTarget @ 148289320

FKinematicTarget * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetKinematicTarget(FActorHandle *this)

{
  code *pcVar1;
  bool bVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  FKinematicTarget *pFVar4;
  
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar3 = this->ParticleHandle;
  }
  if (pTVar3 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleHandle->CastToKinematicParticle()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ImmediatePhysics\\ImmediatePhysicsChaos\\ImmediatePhysicsActorHandle_Chaos.cpp"
                       ,0x11f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKinematicTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar3 = this->ParticleHandle;
  }
  pFVar4 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                     ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                      (int)pTVar3->_padding_);
  return pFVar4;
}

// GetKinematicTarget @ 148289390

FKinematicTarget * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetKinematicTarget(FActorHandle *this)

{
  code *pcVar1;
  bool bVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  FKinematicTarget *pFVar4;
  
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar3 = this->ParticleHandle;
  }
  if (pTVar3 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleHandle->CastToKinematicParticle()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ImmediatePhysics\\ImmediatePhysicsChaos\\ImmediatePhysicsActorHandle_Chaos.cpp"
                       ,0x119,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKinematicTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar3 = this->ParticleHandle;
  }
  pFVar4 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                     ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                      (int)pTVar3->_padding_);
  return pFVar4;
}

// GetLevel @ 148289660

int __thiscall ImmediatePhysics_Chaos::FActorHandle::GetLevel(FActorHandle *this)

{
  return this->Level;
}

// GetLinearDamping @ 148289860

double __thiscall ImmediatePhysics_Chaos::FActorHandle::GetLinearDamping(FActorHandle *this)

{
  double *pdVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pdVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearEtherDrag
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    return *pdVar1;
  }
  return 0.0;
}

// GetLinearVelocity @ 148289c40

TVector<double> * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetLinearVelocity
          (FActorHandle *this,TVector<double> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar1 = this->ParticleHandle;
  }
  if (pTVar1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_28 = (double)Chaos::FGenericParticleHandleImp::ZeroVector._0_8_;
    dStack_20 = (double)Chaos::FGenericParticleHandleImp::ZeroVector._8_8_;
    local_18 = (double)Chaos::FGenericParticleHandleImp::ZeroVector._16_8_;
  }
  else {
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar1->_padding_,
               (TVector<double,3> *)&local_28,(int)pTVar1->_padding_);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetLocalCoMLocation @ 148289d90

TVector<double> * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetLocalCoMLocation
          (FActorHandle *this,TVector<double> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  bool bVar2;
  TVector<double,3> *pTVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FGenericParticleHandleImp local_res8;
  
  pTVar1 = this->ParticleHandle;
  local_res8.MHandle = pTVar1;
  bVar2 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar2) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
      this_00 = pTVar1;
    }
    pTVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    uVar5 = *(undefined4 *)pTVar3;
    uVar6 = *(undefined4 *)&pTVar3->field_0x4;
    uVar7 = *(undefined4 *)&pTVar3->field_0x8;
    uVar8 = *(undefined4 *)&pTVar3->field_0xc;
    dVar4 = *(double *)&pTVar3->field_0x10;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    dVar4 = 0.0;
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  return __return_storage_ptr__;
}

// GetLocalCoMTransform @ 148289df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetLocalCoMTransform
          (FActorHandle *this,TTransform<double> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  bool bVar2;
  TVector<double,3> *pTVar3;
  TRotation<double,3> *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FGenericParticleHandleImp local_res8;
  
  pTVar1 = this->ParticleHandle;
  local_res8.MHandle = pTVar1;
  bVar2 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar2) {
    pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
      pTVar5 = pTVar1;
    }
    pTVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar5);
    uVar13 = *(undefined4 *)pTVar3;
    uVar14 = *(undefined4 *)&pTVar3->field_0x4;
    uVar15 = *(undefined4 *)&pTVar3->field_0x8;
    uVar16 = *(undefined4 *)&pTVar3->field_0xc;
    uVar11 = (undefined4)*(undefined8 *)&pTVar3->field_0x10;
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)&pTVar3->field_0x10 >> 0x20);
  }
  else {
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  pTVar1 = this->ParticleHandle;
  local_res8.MHandle = pTVar1;
  bVar2 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar2) {
    pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
      pTVar5 = pTVar1;
    }
    pTVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar5);
    dVar6 = *(double *)pTVar4;
    uVar7 = *(undefined4 *)&pTVar4->field_0x8;
    uVar8 = *(undefined4 *)&pTVar4->field_0xc;
    dVar9 = *(double *)&pTVar4->field_0x10;
    dVar10 = *(double *)&pTVar4->field_0x18;
  }
  else {
    dVar6 = 0.0;
    uVar7 = 0;
    uVar8 = 0;
    dVar9 = ___xmm_3ff00000000000000000000000000000;
    dVar10 = _UNK_15061cbc8;
  }
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = dVar6;
  *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = uVar7;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = uVar8;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar9;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar10;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar13;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar14;
  *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uVar15;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uVar16;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)CONCAT44(uVar12,uVar11);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar6 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  dVar6 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar6;
  return __return_storage_ptr__;
}

// GetMass @ 14828a510

double __thiscall ImmediatePhysics_Chaos::FActorHandle::GetMass(FActorHandle *this)

{
  uint uVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  EObjectStateType EVar5;
  bool bVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  uint uVar10;
  double dVar11;
  
  pTVar2 = this->ParticleHandle;
  pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar7 = pTVar8;
  if (*(char *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
    pTVar7 = pTVar2;
  }
  if (pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar9 = pTVar8;
    if (1 < *(byte *)((longlong)&pTVar7->_padding_ + 4)) {
      pTVar9 = pTVar7;
    }
    if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar5 = Kinematic;
    }
    else {
      EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar9);
    }
    if (EVar5 == Dynamic) goto LAB_14828a57c;
  }
  pTVar7 = pTVar8;
  if (*(char *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
    pTVar7 = pTVar2;
  }
  if (pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar9 = pTVar8;
    if (1 < *(byte *)((longlong)&pTVar7->_padding_ + 4)) {
      pTVar9 = pTVar7;
    }
    if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar5 = Kinematic;
    }
    else {
      EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar9);
    }
    if (EVar5 == Sleeping) {
LAB_14828a57c:
      if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
        pTVar8 = pTVar2;
      }
      uVar1 = (uint)pTVar8->_padding_;
      lVar3 = pTVar8->_padding_;
      uVar10 = 0;
      if ((int)uVar1 < *(int *)(lVar3 + 0x3d0)) {
        uVar10 = ~uVar1 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          dVar11 = (double)(*pcVar4)();
          return dVar11;
        }
      }
      return *(double *)(*(longlong *)(lVar3 + 0x3c8) + (longlong)(int)uVar1 * 8);
    }
  }
  return 0.0;
}

// GetMaxAngularVelocitySquared @ 14828b240

double __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetMaxAngularVelocitySquared(FActorHandle *this)

{
  return __real_47efffffe0000000;
}

// GetMaxContactImpulse @ 14828b250

double __thiscall ImmediatePhysics_Chaos::FActorHandle::GetMaxContactImpulse(FActorHandle *this)

{
  return __real_47efffffe0000000;
}

// GetMaxDepenetrationVelocity @ 14828b260

double __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetMaxDepenetrationVelocity(FActorHandle *this)

{
  return __real_47efffffe0000000;
}

// GetMaxLinearVelocitySquared @ 14828b270

double __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetMaxLinearVelocitySquared(FActorHandle *this)

{
  return __real_47efffffe0000000;
}

// GetParticle @ 14828b580

TGeometryParticleHandleImp<double,3,1> * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetParticle(FActorHandle *this)

{
  return this->ParticleHandle;
}

// GetParticle @ 14828b590

TGeometryParticleHandleImp<double,3,1> * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetParticle(FActorHandle *this)

{
  return this->ParticleHandle;
}

// GetWorldTransform @ 14828ef00

TTransform<double> * __thiscall
ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
          (FActorHandle *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TRigidTransform<double,3> *pTVar5;
  TRigidTransform<double,3> local_68;
  
  pTVar5 = Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
           GetActorWorldTransform<Chaos::FGenericParticleHandle>
                     (&local_68,(FGenericParticleHandle)this->ParticleHandle);
  dVar1 = *(double *)&pTVar5->field_0x8;
  dVar2 = *(double *)&pTVar5->field_0x10;
  dVar3 = *(double *)&pTVar5->field_0x18;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)pTVar5;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)&pTVar5->field_0x20;
  dVar4 = *(double *)&pTVar5->field_0x28;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = *(double *)&pTVar5->field_0x30;
  dVar3 = *(double *)&pTVar5->field_0x38;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = *(double *)&pTVar5->field_0x40;
  dVar4 = *(double *)&pTVar5->field_0x48;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = *(double *)&pTVar5->field_0x50;
  dVar3 = *(double *)&pTVar5->field_0x58;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// Handle @ 14828ef60

FGenericParticleHandle __thiscall ImmediatePhysics_Chaos::FActorHandle::Handle(FActorHandle *this)

{
  FGenericParticleHandleImp in_RDX;
  
  (in_RDX.MHandle)->_padding_ = (longlong)this->ParticleHandle;
  return (FGenericParticleHandle)(FGenericParticleHandleImp)in_RDX.MHandle;
}

// HasKinematicTarget @ 148293000

bool __thiscall ImmediatePhysics_Chaos::FActorHandle::HasKinematicTarget(FActorHandle *this)

{
  code *pcVar1;
  EObjectStateType EVar2;
  bool bVar3;
  undefined1 uVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FKinematicTarget *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  
  pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar5 = pTVar7;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar5 = this->ParticleHandle;
  }
  if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = pTVar7;
    if (1 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
      this_00 = pTVar5;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar2 = Kinematic;
    }
    else {
      EVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
    if (EVar2 == Kinematic) {
      pTVar5 = pTVar7;
      if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
        pTVar5 = this->ParticleHandle;
      }
      if (pTVar5 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleHandle->CastToKinematicParticle()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ImmediatePhysics\\ImmediatePhysicsChaos\\ImmediatePhysicsActorHandle_Chaos.cpp"
                           ,0x119,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
        pTVar7 = this->ParticleHandle;
      }
      pFVar6 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                         ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar7->_padding_,
                          (int)pTVar7->_padding_);
      return pFVar6->Mode == Position;
    }
  }
  return false;
}

// InitWorldTransform @ 148293c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform
          (FActorHandle *this,TTransform<double> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  FKinematicTarget *pFVar10;
  TVector<double,3> *pTVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  TVector<float,3> local_128;
  TVector<float,3> local_11c;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  TVector<double,3> local_f8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  SetWorldTransform(this,param_1);
  pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar12 = this->ParticleHandle;
  }
  if (pTVar12 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_128._0_8_ = 0;
    local_128._8_4_ = 0;
    Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetVf
              ((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar12,&local_128,false);
    local_11c._0_8_ = 0;
    local_11c._8_4_ = 0;
    Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetWf
              ((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar12,&local_11c,false);
    pFVar10 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                        ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar12->_padding_,
                         (int)pTVar12->_padding_);
    local_d8 = 0;
    uStack_d0 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    *(undefined8 *)&pFVar10->Position = 0;
    *(undefined8 *)&(pFVar10->Position).field_0x8 = 0;
    pFVar10->Mode = None;
    *(undefined8 *)&(pFVar10->Position).field_0x10 = 0;
    *(undefined8 *)&pFVar10->Rotation = 0;
    *(undefined8 *)&(pFVar10->Rotation).field_0x8 = 0;
  }
  pTVar12 = this->ParticleHandle;
  local_f8._16_8_ = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  uVar3 = (uint)pTVar12->_padding_;
  lVar13 = (longlong)(int)uVar3;
  lVar5 = pTVar12->_padding_;
  iVar4 = *(int *)(lVar5 + 0x50);
  uVar14 = 0;
  if ((int)uVar3 < iVar4) {
    uVar14 = ~uVar3 >> 0x1f;
  }
  if (uVar14 == 0) {
    local_138 = lVar13;
    local_130 = (longlong)iVar4;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  fVar1 = *(float *)(lVar5 + lVar13 * 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 8 + lVar13 * 0x10);
  dVar7 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar8 = (double)*(float *)(lVar5 + 4 + lVar13 * 0x10);
  pTVar11 = Chaos::TParticles<double,3>::GetX
                      ((TParticles<double,3> *)this->ParticleHandle->_padding_,
                       (int)this->ParticleHandle->_padding_);
  local_b8._8_4_ = SUB84(dVar7,0);
  local_b8._0_8_ = (double)(float)uVar2;
  local_b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_c8._8_4_ = SUB84(dVar8,0);
  local_c8._0_8_ = (double)fVar1;
  local_c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_a8 = *(undefined8 *)pTVar11;
  uStack_a0 = *(undefined8 *)&pTVar11->field_0x8;
  local_98 = *(undefined8 *)&pTVar11->field_0x10;
  local_78 = ___xmm_00000000000000003ff0000000000000;
  uStack_70 = _UNK_150689518;
  uStack_90 = 0;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
            ((TGeometryParticlesImp<double,3,0> *)pTVar12->_padding_,(int)pTVar12->_padding_,
             (TRigidTransform<double,3> *)local_c8,&local_f8);
  return;
}

// IsGravityEnabled @ 148294db0

bool __thiscall ImmediatePhysics_Chaos::FActorHandle::IsGravityEnabled(FActorHandle *this)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  EObjectStateType EVar5;
  bool bVar6;
  undefined1 uVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  uint uVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  
  pTVar9 = this->ParticleHandle;
  bVar1 = *(byte *)((longlong)&pTVar9->_padding_ + 4);
  pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < bVar1) {
    pTVar11 = pTVar9;
  }
  if (pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (bVar1 != 0) {
      pTVar8 = pTVar9;
    }
    if (pTVar8 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
        pTVar9 = pTVar8;
      }
      if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar5 = Kinematic;
      }
      else {
        EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar9);
      }
      if (EVar5 == Dynamic) {
        uVar2 = (uint)pTVar11->_padding_;
        lVar3 = pTVar11->_padding_;
        uVar10 = 0;
        if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
          uVar10 = ~uVar2 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        if ((*(byte *)(*(longlong *)(lVar3 + 0x2d8) + 8 + (longlong)(int)uVar2 * 0x10) & 1) != 0) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsSimulated @ 148295060

bool __thiscall ImmediatePhysics_Chaos::FActorHandle::IsSimulated(FActorHandle *this)

{
  byte bVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  EObjectStateType EVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  pTVar2 = this->ParticleHandle;
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  bVar1 = *(byte *)((longlong)&pTVar2->_padding_ + 4);
  pTVar4 = this_00;
  if (1 < bVar1) {
    pTVar4 = pTVar2;
  }
  if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar4 = this_00;
    if (bVar1 != 0) {
      pTVar4 = pTVar2;
    }
    if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
        this_00 = pTVar4;
      }
      if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar3 = Kinematic;
      }
      else {
        EVar3 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      }
      if (EVar3 == Dynamic) {
        return true;
      }
    }
  }
  return false;
}

// SetAngularDamping @ 1482a9510

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetAngularDamping(FActorHandle *this,double param_1)

{
  double *pdVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pdVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularEtherDrag
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    *pdVar1 = param_1;
  }
  return;
}

// SetAngularVelocity @ 1482a9e70

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetAngularVelocity
          (FActorHandle *this,TVector<double> *param_1)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar1 = this->ParticleHandle;
  }
  if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_28 = (param_1->field0_0x0)._s_0.X;
    dStack_20 = (param_1->field0_0x0)._s_0.Y;
    local_18 = (param_1->field0_0x0)._s_0.Z;
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar1->_padding_,
               (int)pTVar1->_padding_,(TVector<double,3> *)&local_28);
  }
  return;
}

// SetEnabled @ 1482aac00

void __thiscall ImmediatePhysics_Chaos::FActorHandle::SetEnabled(FActorHandle *this,bool param_1)

{
  EObjectStateType EVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    if (EVar1 == Dynamic) {
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,!param_1);
    }
  }
  return;
}

// SetGravityEnabled @ 1482aae20

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetGravityEnabled(FActorHandle *this,bool param_1)

{
  ushort *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  longlong lVar7;
  
  pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    pTVar6 = this->ParticleHandle;
  }
  if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return;
  }
  uVar2 = (uint)pTVar6->_padding_;
  lVar7 = pTVar6->_padding_;
  uVar5 = 0;
  if ((int)uVar2 < *(int *)(lVar7 + 0x2e0)) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar7 = (longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar7 + 0x2d8);
  puVar1 = (ushort *)(lVar7 + 8);
  *puVar1 = *puVar1 & 0xfffe;
  puVar1 = (ushort *)(lVar7 + 8);
  *puVar1 = *puVar1 | (ushort)param_1;
  return;
}

// SetHasCollision @ 1482aae40

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetHasCollision(FActorHandle *this,bool param_1)

{
  bool *pbVar1;
  
  pbVar1 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                     ((TGeometryParticlesImp<double,3,0> *)this->ParticleHandle->_padding_,
                      (int)this->ParticleHandle->_padding_);
  *pbVar1 = param_1;
  return;
}

// SetInverseInertia @ 1482ab4b0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetInverseInertia(FActorHandle *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  EObjectStateType EVar4;
  bool bVar5;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  float local_48;
  float local_44;
  float local_40;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if ((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), EVar4 == Dynamic)) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    local_48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    local_44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    local_40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if ((__real_3e45798ee0000000 < dVar1) &&
       ((dVar2 = (param_1->field0_0x0)._s_0.Y, __real_3e45798ee0000000 < dVar2 &&
        (dVar3 = (param_1->field0_0x0)._s_0.Z, __real_3e45798ee0000000 < dVar3)))) {
      local_48 = (float)(__real_3ff0000000000000 / dVar1);
      local_44 = (float)(__real_3ff0000000000000 / dVar2);
      local_40 = (float)(__real_3ff0000000000000 / dVar3);
    }
    Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetI
              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,(TVector<float,3> *)&local_48);
    local_48 = (float)(param_1->field0_0x0)._s_0.X;
    local_44 = (float)(param_1->field0_0x0)._s_0.Y;
    local_40 = (float)(param_1->field0_0x0)._s_0.Z;
    Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvI
              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,(TVector<float,3> *)&local_48);
    bVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InertiaConditioningEnabled
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    if (bVar5) {
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
  }
  return;
}

// SetInverseMass @ 1482ab620

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetInverseMass(FActorHandle *this,double param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  EObjectStateType EVar5;
  bool bVar6;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  uint uVar7;
  double local_res10;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_res10 = param_1;
    EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    if (EVar5 == Dynamic) {
      if (param_1 <= __real_3e45798ee0000000) {
        dVar4 = 0.0;
      }
      else {
        dVar4 = __real_3ff0000000000000 / param_1;
      }
      uVar1 = (uint)this_00->_padding_;
      lVar2 = this_00->_padding_;
      uVar7 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0x3d0)) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(double *)(*(longlong *)(lVar2 + 0x3c8) + (longlong)(int)uVar1 * 8) = dVar4;
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvM
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,&local_res10);
    }
  }
  return;
}

// SetIsKinematic @ 1482ab790

bool __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetIsKinematic(FActorHandle *this,bool param_1)

{
  char cVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  EObjectStateType EVar2;
  
  this_00 = this->ParticleHandle;
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    cVar1 = *(char *)((longlong)&this_00->_padding_ + 4);
    if (cVar1 == '\x01') {
      if (param_1) {
        return true;
      }
    }
    else if (cVar1 == '\x02') {
      EVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      if ((EVar2 != Kinematic) && (param_1)) {
        Chaos::TPBDRigidParticles<double,3>::SetObjectState
                  ((TPBDRigidParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_,
                   Kinematic);
        return true;
      }
      EVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      if (EVar2 != Kinematic) {
        return true;
      }
      if (param_1) {
        return true;
      }
      Chaos::TPBDRigidParticles<double,3>::SetObjectState
                ((TPBDRigidParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_,Dynamic)
      ;
      return true;
    }
  }
  return false;
}

// SetKinematicTarget @ 1482ab910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetKinematicTarget
          (FActorHandle *this,TTransform<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  EObjectStateType EVar9;
  bool bVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  FKinematicTarget *pFVar12;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  
  pTVar13 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar11 = pTVar13;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar11 = this->ParticleHandle;
  }
  if (pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = pTVar13;
    if (1 < *(byte *)((longlong)&pTVar11->_padding_ + 4)) {
      this_00 = pTVar11;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar9 = Kinematic;
    }
    else {
      EVar9 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
    if (EVar9 == Kinematic) {
      dVar2 = (param_1->Rotation).XY.m128d_f64[0];
      dVar3 = (param_1->Rotation).XY.m128d_f64[1];
      pTVar11 = pTVar13;
      if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
        pTVar11 = this->ParticleHandle;
      }
      dVar4 = (param_1->Rotation).ZW.m128d_f64[0];
      dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
      dVar6 = (param_1->Translation).ZW.m128d_f64[0];
      dVar7 = (param_1->Translation).XY.m128d_f64[0];
      dVar8 = (param_1->Translation).XY.m128d_f64[1];
      if ((pTVar11 == (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleHandle->CastToKinematicParticle()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ImmediatePhysics\\ImmediatePhysicsChaos\\ImmediatePhysicsActorHandle_Chaos.cpp"
                              ,0x11f,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
        pTVar13 = this->ParticleHandle;
      }
      pFVar12 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar13->_padding_,
                           (int)pTVar13->_padding_);
      *(double *)&pFVar12->Position = dVar7;
      *(double *)&(pFVar12->Position).field_0x8 = dVar8;
      *(double *)&(pFVar12->Position).field_0x10 = dVar6;
      *(float *)&pFVar12->Rotation = (float)dVar2;
      *(float *)&(pFVar12->Rotation).field_0x4 = (float)dVar3;
      *(float *)&(pFVar12->Rotation).field_0x8 = (float)dVar4;
      *(float *)&(pFVar12->Rotation).field_0xc = (float)dVar5;
      pFVar12->Mode = Position;
      return;
    }
  }
  bVar10 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<3394155690154000679>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ImmediatePhysics\\ImmediatePhysicsChaos\\ImmediatePhysicsActorHandle_Chaos.cpp"
                      ,0x127,"GetIsKinematic()");
  if (!bVar10) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// SetLevel @ 1482abb10

void __thiscall ImmediatePhysics_Chaos::FActorHandle::SetLevel(FActorHandle *this,int param_1)

{
  this->Level = param_1;
  return;
}

// SetLinearDamping @ 1482abba0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetLinearDamping(FActorHandle *this,double param_1)

{
  double *pdVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pdVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearEtherDrag
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    *pdVar1 = param_1;
  }
  return;
}

// SetLinearVelocity @ 1482ac5d0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetLinearVelocity(FActorHandle *this,TVector<double> *param_1)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar1 = this->ParticleHandle;
  }
  if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_28 = (param_1->field0_0x0)._s_0.X;
    dStack_20 = (param_1->field0_0x0)._s_0.Y;
    local_18 = (param_1->field0_0x0)._s_0.Z;
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar1->_padding_,
               (int)pTVar1->_padding_,(TVector<double,3> *)&local_28);
  }
  return;
}

// SetMaxAngularVelocitySquared @ 1482ad6a0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetMaxAngularVelocitySquared
          (FActorHandle *this,double param_1)

{
  return;
}

// SetMaxContactImpulse @ 1482ad6b0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetMaxContactImpulse(FActorHandle *this,double param_1)

{
  return;
}

// SetMaxDepenetrationVelocity @ 1482ad6c0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetMaxDepenetrationVelocity(FActorHandle *this,double param_1)

{
  return;
}

// SetMaxLinearVelocitySquared @ 1482ad6d0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetMaxLinearVelocitySquared(FActorHandle *this,double param_1)

{
  return;
}

// SetWorldTransform @ 1482aedc0

void __thiscall
ImmediatePhysics_Chaos::FActorHandle::SetWorldTransform
          (FActorHandle *this,TTransform<double> *param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  EObjectStateType EVar14;
  TVector<double,3> *pTVar15;
  TRotation<double,3> *pTVar16;
  uint uVar17;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  uint uVar18;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  TRotation<double,3> local_58 [2];
  
  dVar7 = (param_1->Translation).ZW.m128d_f64[0];
  uVar18 = (uint)this->ParticleHandle->_padding_;
  lVar4 = this->ParticleHandle->_padding_;
  dVar8 = (param_1->Translation).XY.m128d_f64[0];
  dVar9 = (param_1->Translation).XY.m128d_f64[1];
  uVar17 = 0;
  if ((int)uVar18 < *(int *)(lVar4 + 0x30)) {
    uVar17 = ~uVar18 >> 0x1f;
  }
  if (uVar17 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x28);
  pdVar1 = (double *)(lVar4 + (longlong)(int)uVar18 * 0x18);
  *pdVar1 = dVar8;
  pdVar1[1] = dVar9;
  *(double *)(lVar4 + 0x10 + (longlong)(int)uVar18 * 0x18) = dVar7;
  local_78 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_70 = (param_1->Rotation).XY.m128d_f64[1];
  local_68 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_60 = (param_1->Rotation).ZW.m128d_f64[1];
  Chaos::TGeometryParticleHandleImp<double,3,1>::SetR
            (this->ParticleHandle,(TRotation<double,3> *)&local_78,false);
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->ParticleHandle->_padding_ + 4)) {
    this_00 = this->ParticleHandle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar14 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    if (EVar14 == Dynamic) {
      pTVar15 = Chaos::TParticles<double,3>::GetX
                          ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetP
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,pTVar15);
      uVar18 = (uint)this_00->_padding_;
      lVar4 = this_00->_padding_;
      uVar17 = 0;
      if ((int)uVar18 < *(int *)(lVar4 + 0x50)) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar17 = (uint)this_00->_padding_;
      lVar5 = this_00->_padding_;
      puVar2 = (undefined8 *)(*(longlong *)(lVar4 + 0x48) + (longlong)(int)uVar18 * 0x10);
      uVar3 = *puVar2;
      uVar10 = puVar2[1];
      uVar18 = 0;
      if ((int)uVar17 < *(int *)(lVar5 + 0x568)) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x560) + (longlong)(int)uVar17 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar10;
      pTVar15 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetP
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      uVar10 = *(undefined8 *)pTVar15;
      uVar11 = *(undefined8 *)&pTVar15->field_0x8;
      uVar3 = *(undefined8 *)&pTVar15->field_0x10;
      pTVar15 = Chaos::TGeometryParticleHandleImp<double,3,1>::
                AuxilaryValue<Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_>
                          (this_00,this->ParticlePrevXs);
      *(undefined8 *)pTVar15 = uVar10;
      *(undefined8 *)&pTVar15->field_0x8 = uVar11;
      *(undefined8 *)&pTVar15->field_0x10 = uVar3;
      pTVar16 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetQ
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,local_58);
      uVar3 = *(undefined8 *)pTVar16;
      uVar10 = *(undefined8 *)&pTVar16->field_0x8;
      uVar11 = *(undefined8 *)&pTVar16->field_0x10;
      uVar12 = *(undefined8 *)&pTVar16->field_0x18;
      pTVar16 = Chaos::TGeometryParticleHandleImp<double,3,1>::
                AuxilaryValue<Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>_>
                          (this_00,this->ParticlePrevRs);
      *(undefined8 *)pTVar16 = uVar3;
      *(undefined8 *)&pTVar16->field_0x8 = uVar10;
      *(undefined8 *)&pTVar16->field_0x10 = uVar11;
      *(undefined8 *)&pTVar16->field_0x18 = uVar12;
    }
  }
  return;
}

