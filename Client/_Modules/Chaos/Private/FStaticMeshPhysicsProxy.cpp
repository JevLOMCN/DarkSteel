// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// FStaticMeshPhysicsProxy @ 1440ccb80

FStaticMeshPhysicsProxy * __thiscall
FStaticMeshPhysicsProxy::FStaticMeshPhysicsProxy
          (FStaticMeshPhysicsProxy *this,UObject *param_1,
          TFunction<void___cdecl(FStaticMeshPhysicsProxy::Params_&)> *param_2,
          TFunction<void___cdecl(UE::Math::TTransform<double>_const_&)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FStaticMeshPhysicsProxy *pFVar4;
  longlong *plVar5;
  atomic<int> *paVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    paVar6 = (atomic<int> *)&DAT_00000008;
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFProxyTimestampBase___00_SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar3[1]._padding_ = 0;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FStaticMeshPhysicsProxy *)(*pcVar1)();
        return pFVar4;
      }
    }
    paVar6 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7IPhysicsProxyBase__6B_;
  *(TReferenceControllerBase<1> **)&this->field_0x20 = pTVar7;
  *(UObject **)&this->field_0x10 = param_1;
  *(undefined4 *)&this->field_0x18 = 0xffffffff;
  *(undefined4 *)&this->field_0x1c = 1;
  *(TReferenceControllerBase<1> **)&this->field_0x28 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0xffffffffffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7FStaticMeshPhysicsProxy__6B_;
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar5 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// AddForceCallback @ 1440d2f50

void __thiscall
FStaticMeshPhysicsProxy::AddForceCallback
          (FStaticMeshPhysicsProxy *this,TPBDRigidParticles<double,3> *param_1,float param_2,
          int param_3)

{
  return;
}

// BindParticleCallbackMapping @ 1440d3de0

void __thiscall
FStaticMeshPhysicsProxy::BindParticleCallbackMapping
          (FStaticMeshPhysicsProxy *this,TArrayCollectionArray<PhysicsProxyWrapper> *param_1,
          TArrayCollectionArray<int> *param_2)

{
  return;
}

// BufferKinematicUpdate @ 1440d4020

void __thiscall
FStaticMeshPhysicsProxy::BufferKinematicUpdate
          (FStaticMeshPhysicsProxy *this,FPhysicsProxyKinematicUpdate *param_1)

{
  return;
}

// BufferPhysicsResults @ 1440d4880

void __thiscall FStaticMeshPhysicsProxy::BufferPhysicsResults(FStaticMeshPhysicsProxy *this)

{
  return;
}

// CreateRigidBodyCallback @ 1440db0e0

void __thiscall
FStaticMeshPhysicsProxy::CreateRigidBodyCallback
          (FStaticMeshPhysicsProxy *this,TPBDRigidParticles<double,3> *param_1)

{
  return;
}

// DisableCollisionsCallback @ 1440db4c0

void __thiscall
FStaticMeshPhysicsProxy::DisableCollisionsCallback
          (FStaticMeshPhysicsProxy *this,
          TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// EndFrameCallback @ 1440dbea0

void __thiscall
FStaticMeshPhysicsProxy::EndFrameCallback(FStaticMeshPhysicsProxy *this,float param_1)

{
  return;
}

// FlipBuffer @ 1440e3820

void __thiscall FStaticMeshPhysicsProxy::FlipBuffer(FStaticMeshPhysicsProxy *this)

{
  return;
}

// Initialize @ 1440e62b0

void __thiscall FStaticMeshPhysicsProxy::Initialize(FStaticMeshPhysicsProxy *this)

{
  return;
}

// IsSimulating @ 1440e84a0

bool __thiscall FStaticMeshPhysicsProxy::IsSimulating(FStaticMeshPhysicsProxy *this)

{
  return false;
}

// OnRemoveFromScene @ 1440e8a70

void __thiscall FStaticMeshPhysicsProxy::OnRemoveFromScene(FStaticMeshPhysicsProxy *this)

{
  return;
}

// ParameterUpdateCallback @ 1440e8a90

void __thiscall
FStaticMeshPhysicsProxy::ParameterUpdateCallback
          (FStaticMeshPhysicsProxy *this,TPBDRigidParticles<double,3> *param_1,float param_2)

{
  return;
}

// PullFromPhysicsState @ 1440ebfa0

bool __thiscall
FStaticMeshPhysicsProxy::PullFromPhysicsState(FStaticMeshPhysicsProxy *this,int param_1)

{
  return true;
}

// Reset @ 1440ef440

void __thiscall FStaticMeshPhysicsProxy::Reset(FStaticMeshPhysicsProxy *this)

{
  return;
}

// StartFrameCallback @ 1440f2450

void __thiscall
FStaticMeshPhysicsProxy::StartFrameCallback
          (FStaticMeshPhysicsProxy *this,float param_1,float param_2)

{
  return;
}

// UpdateKinematicBodiesCallback @ 1440f7480

void __thiscall
FStaticMeshPhysicsProxy::UpdateKinematicBodiesCallback
          (FStaticMeshPhysicsProxy *this,TPBDRigidParticles<double,3> *param_1,float param_2,
          float param_3,FKinematicProxy *param_4)

{
  return;
}

