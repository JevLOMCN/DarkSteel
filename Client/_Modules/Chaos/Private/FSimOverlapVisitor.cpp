// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FSimOverlapVisitor @ 143d023e0

FSimOverlapVisitor * __thiscall
Chaos::Private::FSimOverlapVisitor::FSimOverlapVisitor
          (FSimOverlapVisitor *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FBroadPhaseContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  FUniqueIdx *pFVar3;
  TGeometryParticle<double,3> **ppTVar4;
  FSimOverlapVisitor *pFVar5;
  int iVar6;
  
  this->Context = param_2;
  (this->SimFilterData).Word2 = 0;
  (this->SimFilterData).Word3 = 0;
  (this->SimFilterData).Word0 = 0;
  (this->SimFilterData).Word1 = 0;
  if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    iVar6 = 0;
  }
  else {
    pFVar3 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    iVar6 = pFVar3->Idx;
  }
  (this->ParticleUniqueIdx).Idx = iVar6;
  ppTVar4 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  (this->AccelerationHandle).ExternalGeometryParticle = *ppTVar4;
  (this->AccelerationHandle).GeometryParticleHandle = param_1;
  pFVar3 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  (this->AccelerationHandle).CachedUniqueIdx.Idx = pFVar3->Idx;
  iVar6 = (this->AccelerationHandle).CachedUniqueIdx.Idx;
  (this->AccelerationHandle).UnionQueryFilterData.Word2 = 0;
  (this->AccelerationHandle).UnionQueryFilterData.Word3 = 0;
  (this->AccelerationHandle).UnionQueryFilterData.Word0 = 0;
  (this->AccelerationHandle).UnionQueryFilterData.Word1 = 0;
  (this->AccelerationHandle).UnionSimFilterData.Word2 = 0;
  (this->AccelerationHandle).UnionSimFilterData.Word3 = 0;
  (this->AccelerationHandle).UnionSimFilterData.Word0 = 0;
  (this->AccelerationHandle).UnionSimFilterData.Word1 = 0;
  (this->AccelerationHandle).bCanPrePreFilter = false;
  if (iVar6 == -1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3133560516564218025>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0xf57,"CachedUniqueIdx.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FSimOverlapVisitor *)(*pcVar1)();
      return pFVar5;
    }
  }
  FAccelerationStructureHandle::
  ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&(this->AccelerationHandle).UnionQueryFilterData);
  FAccelerationStructureHandle::
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&(this->AccelerationHandle).UnionSimFilterData);
  (this->AccelerationHandle).bCanPrePreFilter = true;
  FAccelerationStructureHandle::
  ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
            (param_1,&this->SimFilterData);
  return this;
}

