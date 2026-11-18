// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// ConnectivityEdges @ 1436fbde0

TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x688)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *)
         ((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar2 + 0x680));
}

// ConvexOptimizer @ 14375b5b0

TPimplPtr<Chaos::Private::FConvexOptimizer,0> * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::ConvexOptimizer
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TPimplPtr<Chaos::Private::FConvexOptimizer,0> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x6b8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPimplPtr<Chaos::Private::FConvexOptimizer,0> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TPimplPtr<Chaos::Private::FConvexOptimizer,0> *)
         (*(longlong *)(lVar2 + 0x6b0) + (longlong)(int)uVar1 * 8);
}

// GetInternalStrains @ 143790ca0

float * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x670)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pfVar6 = (float *)(*pcVar3)();
      return pfVar6;
    }
  }
  return (float *)(*(longlong *)(lVar2 + 0x668) + (longlong)(int)uVar1 * 4);
}

// ConnectivityEdges @ 1438a9b80

TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x688)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *)
         ((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar2 + 0x680));
}

// Parent @ 1438c4cb0

TPBDRigidClusteredParticleHandleImp<double,3,1> * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::Parent
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  ClusterId *pCVar1;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar2;
  
  pCVar1 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                     (*(TPBDRigidClusteredParticles<double,3> **)this,*(int *)&this->field_0x8);
  if (pCVar1->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    pCVar1 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)this,*(int *)&this->field_0x8);
    pTVar2 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)pCVar1->Id->field_0xc) {
      pTVar2 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pCVar1->Id;
    }
    return pTVar2;
  }
  return (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
}

// ConvexOptimizer @ 1439c88c0

TPimplPtr<Chaos::Private::FConvexOptimizer,0> * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::ConvexOptimizer
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TPimplPtr<Chaos::Private::FConvexOptimizer,0> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x6b8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPimplPtr<Chaos::Private::FConvexOptimizer,0> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TPimplPtr<Chaos::Private::FConvexOptimizer,0> *)
         (*(longlong *)(lVar2 + 0x6b0) + (longlong)(int)uVar1 * 8);
}

// GetChildrenSpatial @ 143c9d980

TRefCountPtr<Chaos::FImplicitObjectUnionClustered> * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetChildrenSpatial
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRefCountPtr<Chaos::FImplicitObjectUnionClustered> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x610)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TRefCountPtr<Chaos::FImplicitObjectUnionClustered> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObjectUnionClustered> *)
         (*(longlong *)(lVar2 + 0x608) + (longlong)(int)uVar1 * 8);
}

// Handle @ 143d57ff0

TPBDRigidClusteredParticleHandleImp<double,3,1> * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,0>::Handle
          (TPBDRigidClusteredParticleHandleImp<double,3,0> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
          (*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8);
}

// InternalCluster @ 143d59a00

bool __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x6a0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return (bool)(*(byte *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x698)) & 1);
}

// GetExternalStrain @ 143e291a0

float __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x658)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  return *(float *)(*(longlong *)(lVar2 + 0x650) + (longlong)(int)uVar1 * 4);
}

// ClusterIds @ 14407f910

ClusterId * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::ClusterIds
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ClusterId *pCVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x5c8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pCVar6 = (ClusterId *)(*pcVar3)();
      return pCVar6;
    }
  }
  return (ClusterId *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar2 + 0x5c0));
}

// ChildToParent @ 1440d7300

TRigidTransform<double,3> * __thiscall
Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::ChildToParent
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRigidTransform<double,3> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x5e0)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TRigidTransform<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TRigidTransform<double,3> *)((longlong)(int)uVar1 * 0x60 + *(longlong *)(lVar2 + 0x5d8));
}

