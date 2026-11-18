// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// ClusterIds @ 1436fbce0

ClusterId * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
          (TPBDRigidClusteredParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ClusterId *pCVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MClusterIds).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pCVar4 = (ClusterId *)(*pcVar1)();
      return pCVar4;
    }
  }
  return (ClusterId *)((longlong)param_1 * 0x10 + *(longlong *)&(this->MClusterIds).field_0x8);
}

// RigidClusteredFlags @ 143703ca0

FRigidClusteredFlags * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
          (TPBDRigidClusteredParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigidClusteredFlags *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MRigidClusteredFlags).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigidClusteredFlags *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRigidClusteredFlags *)
         ((longlong)param_1 + *(longlong *)&(this->MRigidClusteredFlags).field_0x8);
}

// Strains @ 1437045b0

float * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::Strains
          (TPBDRigidClusteredParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MStrains).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)(*(longlong *)&(this->MStrains).field_0x8 + (longlong)param_1 * 4);
}

// ChildToParent @ 1438a7420

TRigidTransform<double,3> * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::ChildToParent
          (TPBDRigidClusteredParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TRigidTransform<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MChildToParent).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRigidTransform<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TRigidTransform<double,3> *)
         ((longlong)param_1 * 0x60 + *(longlong *)&(this->MChildToParent).field_0x8);
}

// TPBDRigidClusteredParticles<double,3> @ 143af8b00

TPBDRigidClusteredParticles<double,3> * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::TPBDRigidClusteredParticles<double,3>
          (TPBDRigidClusteredParticles<double,3> *this)

{
  TPBDRigidParticles<double,3>::TPBDRigidParticles<double,3>((TPBDRigidParticles<double,3> *)this);
  this->_padding_ = (longlong)&___7__TPBDRigidClusteredParticles_N_02_Chaos__6B_;
  *(undefined ***)&this->MChildToParent =
       &___7__TArrayCollectionArray_V__TRigidTransform_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MClusterIds = &___7__TArrayCollectionArray_UClusterId_Chaos___Chaos__6B_;
  *(undefined ***)&this->MClusterGroupIndex = &___7__TArrayCollectionArray_H_Chaos__6B_;
  *(undefined ***)&this->MChildrenSpatial =
       &
       ___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObjectUnionClustered_Chaos_____Chaos__6B_
  ;
  *(undefined ***)&this->MPhysicsProxies =
       &
       ___7__TArrayCollectionArray_V__TSet_PEAVIPhysicsProxyBase__U__DefaultKeyFuncs_PEAVIPhysicsProxyBase___0A___VFDefaultSetAllocator_____Chaos__6B_
  ;
  *(undefined ***)&this->MCollisionImpulses = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MExternalStrains = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MStrains = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined ***)&this->MConnectivityEdges =
       &
       ___7__TArrayCollectionArray_V__TArray_U__TConnectivityEdge_N_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->MRigidClusteredFlags =
       &___7__TArrayCollectionArray_VFRigidClusteredFlags_Chaos___Chaos__6B_;
  *(undefined ***)&this->MConvexOptimizers =
       &___7__TArrayCollectionArray_U__TPimplPtr_VFConvexOptimizer_Private_Chaos___0A____Chaos__6B_;
  *(undefined8 *)&(this->MClusterIds).field_0x8 = 0;
  *(undefined8 *)&(this->MClusterIds).field_0x10 = 0;
  *(undefined8 *)&(this->MChildToParent).field_0x8 = 0;
  *(undefined8 *)&(this->MChildToParent).field_0x10 = 0;
  *(undefined8 *)&(this->MClusterGroupIndex).field_0x8 = 0;
  *(undefined8 *)&(this->MClusterGroupIndex).field_0x10 = 0;
  *(undefined8 *)&(this->MChildrenSpatial).field_0x8 = 0;
  *(undefined8 *)&(this->MChildrenSpatial).field_0x10 = 0;
  *(undefined8 *)&(this->MPhysicsProxies).field_0x8 = 0;
  *(undefined8 *)&(this->MPhysicsProxies).field_0x10 = 0;
  *(undefined8 *)&(this->MCollisionImpulses).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionImpulses).field_0x10 = 0;
  *(undefined8 *)&(this->MExternalStrains).field_0x8 = 0;
  *(undefined8 *)&(this->MExternalStrains).field_0x10 = 0;
  *(undefined8 *)&(this->MStrains).field_0x8 = 0;
  *(undefined8 *)&(this->MStrains).field_0x10 = 0;
  *(undefined8 *)&(this->MConnectivityEdges).field_0x8 = 0;
  *(undefined8 *)&(this->MConnectivityEdges).field_0x10 = 0;
  *(undefined8 *)&(this->MRigidClusteredFlags).field_0x8 = 0;
  *(undefined8 *)&(this->MRigidClusteredFlags).field_0x10 = 0;
  *(undefined8 *)&(this->MConvexOptimizers).field_0x8 = 0;
  *(undefined8 *)&(this->MConvexOptimizers).field_0x10 = 0;
  *(undefined1 *)&this->_padding_ = 3;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MClusterIds);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MChildToParent);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MClusterGroupIndex);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MChildrenSpatial);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MPhysicsProxies);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MCollisionImpulses);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MStrains);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MConnectivityEdges);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MExternalStrains);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MRigidClusteredFlags);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MConvexOptimizers);
  return this;
}

// ~TPBDRigidClusteredParticles<double,3> @ 143afbc80

void __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::~TPBDRigidClusteredParticles<double,3>
          (TPBDRigidClusteredParticles<double,3> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TPBDRigidClusteredParticles_N_02_Chaos__6B_;
  *(undefined ***)&this->MConvexOptimizers =
       &___7__TArrayCollectionArray_U__TPimplPtr_VFConvexOptimizer_Private_Chaos___0A____Chaos__6B_;
  DestructItems<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,int>
            (*(TPimplPtr<Chaos::Private::FConvexOptimizer,0> **)&(this->MConvexOptimizers).field_0x8
             ,*(int *)&(this->MConvexOptimizers).field_0x10);
  pvVar1 = *(void **)&(this->MConvexOptimizers).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MRigidClusteredFlags =
       &___7__TArrayCollectionArray_VFRigidClusteredFlags_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MRigidClusteredFlags).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MConnectivityEdges =
       &
       ___7__TArrayCollectionArray_V__TArray_U__TConnectivityEdge_N_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> **)
              &(this->MConnectivityEdges).field_0x8,*(int *)&(this->MConnectivityEdges).field_0x10);
  pvVar1 = *(void **)&(this->MConnectivityEdges).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MStrains = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar1 = *(void **)&(this->MStrains).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MExternalStrains = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar1 = *(void **)&(this->MExternalStrains).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MCollisionImpulses = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar1 = *(void **)&(this->MCollisionImpulses).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MPhysicsProxies =
       &
       ___7__TArrayCollectionArray_V__TSet_PEAVIPhysicsProxyBase__U__DefaultKeyFuncs_PEAVIPhysicsProxyBase___0A___VFDefaultSetAllocator_____Chaos__6B_
  ;
  DestructItems<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,int>
            (*(TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
               **)&(this->MPhysicsProxies).field_0x8,*(int *)&(this->MPhysicsProxies).field_0x10);
  pvVar1 = *(void **)&(this->MPhysicsProxies).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MChildrenSpatial =
       &
       ___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObjectUnionClustered_Chaos_____Chaos__6B_
  ;
  DestructItems<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,int>
            (*(TRefCountPtr<Chaos::FImplicitObjectUnionClustered> **)
              &(this->MChildrenSpatial).field_0x8,*(int *)&(this->MChildrenSpatial).field_0x10);
  pvVar1 = *(void **)&(this->MChildrenSpatial).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MClusterGroupIndex = &___7__TArrayCollectionArray_H_Chaos__6B_;
  pvVar1 = *(void **)&(this->MClusterGroupIndex).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MChildToParent =
       &___7__TArrayCollectionArray_V__TRigidTransform_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MChildToParent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MClusterIds = &___7__TArrayCollectionArray_UClusterId_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MClusterIds).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TPBDRigidParticles<double,3>::~TPBDRigidParticles<double,3>((TPBDRigidParticles<double,3> *)this);
  return;
}

// ClusterGroupIndex @ 143c93990

int * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::ClusterGroupIndex
          (TPBDRigidClusteredParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MClusterGroupIndex).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)(*(longlong *)&(this->MClusterGroupIndex).field_0x8 + (longlong)param_1 * 4);
}

// CollisionImpulses @ 143c93a10

float * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
          (TPBDRigidClusteredParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MCollisionImpulses).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)(*(longlong *)&(this->MCollisionImpulses).field_0x8 + (longlong)param_1 * 4);
}

// ExternalStrains @ 143c9a5f0

float * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::ExternalStrains
          (TPBDRigidClusteredParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MExternalStrains).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)(*(longlong *)&(this->MExternalStrains).field_0x8 + (longlong)param_1 * 4);
}

// PhysicsProxies @ 143ca3a20

TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::PhysicsProxies
          (TPBDRigidClusteredParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MPhysicsProxies).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *)
         ((longlong)param_1 * 0x50 + *(longlong *)&(this->MPhysicsProxies).field_0x8);
}

// Handle @ 1440e5d90

TPBDRigidClusteredParticleHandleImp<double,3,1> * __thiscall
Chaos::TPBDRigidClusteredParticles<double,3>::Handle
          (TPBDRigidClusteredParticles<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
          (this->_padding_ + (longlong)param_1 * 8);
}

