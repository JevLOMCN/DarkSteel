// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1440ca8e0

TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_> *
__thiscall
Chaos::FRewindData::
TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>::
TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
           *this,TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                 *param_1)

{
  FGeometryParticleStateBase::FGeometryParticleStateBase(&this->History,&param_1->History);
  this->ObjPtr = param_1->ObjPtr;
  this->PropertiesPool = param_1->PropertiesPool;
  this->DirtyDynamics = -1;
  this->LastDirtyFrame = param_1->LastDirtyFrame;
  this->InitializedOnStep = param_1->InitializedOnStep;
  this->bResimAsFollower = param_1->bResimAsFollower;
  this->bNeedsResim = param_1->bNeedsResim;
  param_1->PropertiesPool = (FDirtyPropertiesPool *)0x0;
  return this;
}

// ~TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1440cce30

void __thiscall
Chaos::FRewindData::
TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>::
~TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
           *this)

{
  FDirtyPropertiesPool *pFVar1;
  
  pFVar1 = this->PropertiesPool;
  if (pFVar1 != (FDirtyPropertiesPool *)0x0) {
    TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Release
              ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)this,pFVar1);
    TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::Release
              (&(this->History).NonFrequentData,pFVar1);
    TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Release
              (&(this->History).Velocities,pFVar1);
    TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Release(&(this->History).Dynamics,pFVar1)
    ;
    TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Release
              (&(this->History).DynamicsMisc,pFVar1);
    TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Release
              (&(this->History).MassProps,pFVar1);
    TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::Release
              (&(this->History).KinematicTarget,pFVar1);
    TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::Release
              (&(this->History).TargetPositions,pFVar1);
    TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::Release
              (&(this->History).TargetVelocities,pFVar1);
    TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::Release
              (&(this->History).TargetStates,pFVar1);
  }
  FGeometryParticleStateBase::~FGeometryParticleStateBase(&this->History);
  return;
}

