// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 19

// FSkeletalMeshPhysicsProxy @ 1440cc8f0

FSkeletalMeshPhysicsProxy * __thiscall
FSkeletalMeshPhysicsProxy::FSkeletalMeshPhysicsProxy
          (FSkeletalMeshPhysicsProxy *this,UObject *param_1,
          TFunction<void___cdecl(FSkeletalMeshPhysicsProxyParams_&)> *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  bool bVar11;
  TReferenceControllerBase<1> *pTVar12;
  FSkeletalMeshPhysicsProxy *pFVar13;
  atomic<int> *paVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  
  pTVar12 = ::operator_new(0x18);
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar14 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar15 = pTVar12 + 1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFProxyTimestampBase___00_SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar12[1]._padding_ = 0;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar11) {
        pcVar1 = (code *)swi(3);
        pFVar13 = (FSkeletalMeshPhysicsProxy *)(*pcVar1)();
        return pFVar13;
      }
    }
    paVar14 = &pTVar12->SharedReferenceCount;
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
    pTVar16 = pTVar12;
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IPhysicsProxyBase__6B_;
  this->_padding_ = (longlong)pTVar15;
  this->_padding_ = (longlong)param_1;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
  this->_padding_ = (longlong)pTVar16;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  this->_padding_ = (longlong)&___7FSkeletalMeshPhysicsProxy__6B_;
  ::FString::FString(&(this->Parameters).Name,"");
  FBoneHierarchy::FBoneHierarchy(&(this->Parameters).BoneHierarchy);
  (this->Parameters).MeshVertexPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).MeshVertexPositions.ArrayNum = 0;
  (this->Parameters).MeshVertexPositions.ArrayMax = 0;
  (this->Parameters).Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).Triangles.ArrayNum = 0;
  (this->Parameters).Triangles.ArrayMax = 0;
  *&(this->Parameters).InitialTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Parameters).InitialTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Parameters).InitialTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Parameters).InitialTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Parameters).InitialTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Parameters).InitialTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Parameters).LocalToWorld.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Parameters).LocalToWorld.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Parameters).LocalToWorld.Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Parameters).LocalToWorld.Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Parameters).LocalToWorld.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Parameters).LocalToWorld.Scale3D.ZW.m128d_f64 = auVar9;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Parameters).InitialLinearVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Parameters).InitialLinearVelocity.field0_0x0._s_0.Y = (double)uVar10;
  (this->Parameters).InitialLinearVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Parameters).InitialAngularVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Parameters).InitialAngularVelocity.field0_0x0._s_0.Y = (double)uVar10;
  (this->Parameters).InitialAngularVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Parameters).PhysicalMaterial.Ptr = (FChaosPhysicsMaterial *)0x0;
  (this->Parameters).ObjectType = Chaos_Object_Kinematic;
  (this->Parameters).CollisionType = Chaos_Volumetric;
  (this->Parameters).ParticlesPerUnitArea = 0.1;
  (this->Parameters).MinNumParticles = 0;
  (this->Parameters).MaxNumParticles = 0x32;
  (this->Parameters).MinRes = 5;
  (this->Parameters).MaxRes = 10;
  (this->Parameters).CollisionGroup = 0;
  (this->Parameters).Density = 2.4;
  (this->Parameters).MinMass = 0.001;
  (this->Parameters).MaxMass = 1e+06;
  (this->Parameters).bSimulating = false;
  return this;
}

// ~FSkeletalMeshPhysicsProxy @ 1440cd770

void __thiscall
FSkeletalMeshPhysicsProxy::~FSkeletalMeshPhysicsProxy(FSkeletalMeshPhysicsProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshPhysicsProxy__6B_;
  pFVar1 = (this->Parameters).Triangles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Parameters).MeshVertexPositions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBoneHierarchy::~FBoneHierarchy(&(this->Parameters).BoneHierarchy);
  pFVar1 = (this->Parameters).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)
       &
       ___7__TPhysicsProxy_VFSkeletalMeshPhysicsProxy__UFSkeletalMeshPhysicsProxyOutputs__UFProxyTimestampBase____6B_
  ;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  return;
}

// AddForceCallback @ 1440d2f40

void __thiscall
FSkeletalMeshPhysicsProxy::AddForceCallback
          (FSkeletalMeshPhysicsProxy *this,TPBDRigidParticles<double,3> *param_1,float param_2,
          int param_3)

{
  return;
}

// BindParticleCallbackMapping @ 1440d3dd0

void __thiscall
FSkeletalMeshPhysicsProxy::BindParticleCallbackMapping
          (FSkeletalMeshPhysicsProxy *this,TArrayCollectionArray<PhysicsProxyWrapper> *param_1,
          TArrayCollectionArray<int> *param_2)

{
  return;
}

// BufferPhysicsResults @ 1440d4870

void __thiscall FSkeletalMeshPhysicsProxy::BufferPhysicsResults(FSkeletalMeshPhysicsProxy *this)

{
  return;
}

// CaptureInputs @ 1440d7080

void __thiscall
FSkeletalMeshPhysicsProxy::CaptureInputs
          (FSkeletalMeshPhysicsProxy *this,float param_1,
          TFunction<bool___cdecl(float,FSkeletalMeshPhysicsProxyParams_&)> *param_2)

{
  return;
}

// CreateRigidBodyCallback @ 1440db0d0

void __thiscall
FSkeletalMeshPhysicsProxy::CreateRigidBodyCallback
          (FSkeletalMeshPhysicsProxy *this,TPBDRigidParticles<double,3> *param_1)

{
  return;
}

// DisableCollisionsCallback @ 1440db4b0

void __thiscall
FSkeletalMeshPhysicsProxy::DisableCollisionsCallback
          (FSkeletalMeshPhysicsProxy *this,
          TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// EndFrameCallback @ 1440dbe90

void __thiscall
FSkeletalMeshPhysicsProxy::EndFrameCallback(FSkeletalMeshPhysicsProxy *this,float param_1)

{
  return;
}

// FlipBuffer @ 1440e3810

void __thiscall FSkeletalMeshPhysicsProxy::FlipBuffer(FSkeletalMeshPhysicsProxy *this)

{
  return;
}

// Initialize @ 1440e62a0

void __thiscall FSkeletalMeshPhysicsProxy::Initialize(FSkeletalMeshPhysicsProxy *this)

{
  return;
}

// IsSimulating @ 1440e8490

bool __thiscall FSkeletalMeshPhysicsProxy::IsSimulating(FSkeletalMeshPhysicsProxy *this)

{
  return false;
}

// OnRemoveFromScene @ 1440e8a60

void __thiscall FSkeletalMeshPhysicsProxy::OnRemoveFromScene(FSkeletalMeshPhysicsProxy *this)

{
  return;
}

// ParameterUpdateCallback @ 1440e8a80

void __thiscall
FSkeletalMeshPhysicsProxy::ParameterUpdateCallback
          (FSkeletalMeshPhysicsProxy *this,TPBDRigidParticles<double,3> *param_1,float param_2)

{
  return;
}

// PullFromPhysicsState @ 1440ebf90

bool __thiscall
FSkeletalMeshPhysicsProxy::PullFromPhysicsState(FSkeletalMeshPhysicsProxy *this,int param_1)

{
  return true;
}

// Reset @ 1440ef430

void __thiscall FSkeletalMeshPhysicsProxy::Reset(FSkeletalMeshPhysicsProxy *this)

{
  return;
}

// StartFrameCallback @ 1440f2440

void __thiscall
FSkeletalMeshPhysicsProxy::StartFrameCallback
          (FSkeletalMeshPhysicsProxy *this,float param_1,float param_2)

{
  return;
}

// SyncBeforeDestroy @ 1440f2d90

void __thiscall FSkeletalMeshPhysicsProxy::SyncBeforeDestroy(FSkeletalMeshPhysicsProxy *this)

{
  return;
}

// UpdateKinematicBodiesCallback @ 1440f7470

void __thiscall
FSkeletalMeshPhysicsProxy::UpdateKinematicBodiesCallback
          (FSkeletalMeshPhysicsProxy *this,TPBDRigidParticles<double,3> *param_1,float param_2,
          float param_3,FKinematicProxy *param_4)

{
  return;
}

