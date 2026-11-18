// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// CallVisitor @ 143a0a7e0

bool __thiscall
Chaos::Private::
TSimSweepSQVisitor<`Chaos::Private::SimSweepParticle<Chaos::Private::FSimSweepParticleFilterBroadPhase,Chaos::Private::FSimSweepShapeFilterNarrowPhase,Chaos::Private::FSimSweepCollectorFirstHit>'::__l2::<lambda_1>_>
::CallVisitor(void *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  undefined8 *puVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  bool bVar3;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  pTVar2 = (param_1->Payload).GeometryParticleHandle;
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)*puVar1) {
    bVar3 = ParticlePairBroadPhaseFilter
                      ((TGeometryParticleHandleImp<double,3,1> *)*puVar1,pTVar2,
                       *(FIgnoreCollisionManager **)puVar1[5]);
    if (bVar3) {
      SimSweepParticlePair<Chaos::Private::FSimSweepShapeFilterNarrowPhase,Chaos::Private::FSimSweepCollectorFirstHit>
                ((TGeometryParticleHandleImp<double,3,1> *)*puVar1,pTVar2,
                 (TVector<double,3> *)puVar1[1],(TRotation<double,3> *)puVar1[4],
                 (TVector<double,3> *)puVar1[2],*(double *)puVar1[3],
                 (FSimSweepShapeFilterNarrowPhase *)puVar1[6],
                 (FSimSweepCollectorFirstHit *)puVar1[7]);
    }
  }
  return true;
}

// Overlap @ 143a0fe80

bool __thiscall
Chaos::Private::
TSimSweepSQVisitor<`Chaos::Private::SimOverlapBounds<`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_1>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_2>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_3>_const_>'::__l2::<lambda_1>_>
::Overlap(void *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  `Chaos::Private::
  SimOverlapBounds<`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_1>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_2>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_3>_const_>'
  ::__l2::<lambda_1>::operator()
            (*(void **)((longlong)this + 8),(param_1->Payload).GeometryParticleHandle);
  return true;
}

// Overlap @ 143a0fea0

bool __thiscall
Chaos::Private::
TSimSweepSQVisitor<`Chaos::Private::SimSweepParticle<Chaos::Private::FSimSweepParticleFilterBroadPhase,Chaos::Private::FSimSweepShapeFilterNarrowPhase,Chaos::Private::FSimSweepCollectorFirstHit>'::__l2::<lambda_1>_>
::Overlap(void *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  undefined8 *puVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  bool bVar3;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  pTVar2 = (param_1->Payload).GeometryParticleHandle;
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)*puVar1) {
    bVar3 = ParticlePairBroadPhaseFilter
                      ((TGeometryParticleHandleImp<double,3,1> *)*puVar1,pTVar2,
                       *(FIgnoreCollisionManager **)puVar1[5]);
    if (bVar3) {
      SimSweepParticlePair<Chaos::Private::FSimSweepShapeFilterNarrowPhase,Chaos::Private::FSimSweepCollectorFirstHit>
                ((TGeometryParticleHandleImp<double,3,1> *)*puVar1,pTVar2,
                 (TVector<double,3> *)puVar1[1],(TRotation<double,3> *)puVar1[4],
                 (TVector<double,3> *)puVar1[2],*(double *)puVar1[3],
                 (FSimSweepShapeFilterNarrowPhase *)puVar1[6],
                 (FSimSweepCollectorFirstHit *)puVar1[7]);
    }
  }
  return true;
}

// Raycast @ 143a113a0

bool __thiscall
Chaos::Private::
TSimSweepSQVisitor<`Chaos::Private::SimOverlapBounds<`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_1>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_2>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_3>_const_>'::__l2::<lambda_1>_>
::Raycast(void *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
         FQueryFastData *param_2)

{
  `Chaos::Private::
  SimOverlapBounds<`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_1>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_2>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_3>_const_>'
  ::__l2::<lambda_1>::operator()
            (*(void **)((longlong)this + 8),(param_1->Payload).GeometryParticleHandle);
  return true;
}

// Raycast @ 143a113c0

bool __thiscall
Chaos::Private::
TSimSweepSQVisitor<`Chaos::Private::SimSweepParticle<Chaos::Private::FSimSweepParticleFilterBroadPhase,Chaos::Private::FSimSweepShapeFilterNarrowPhase,Chaos::Private::FSimSweepCollectorFirstHit>'::__l2::<lambda_1>_>
::Raycast(void *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
         FQueryFastData *param_2)

{
  undefined8 *puVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  bool bVar3;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  pTVar2 = (param_1->Payload).GeometryParticleHandle;
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)*puVar1) {
    bVar3 = ParticlePairBroadPhaseFilter
                      ((TGeometryParticleHandleImp<double,3,1> *)*puVar1,pTVar2,
                       *(FIgnoreCollisionManager **)puVar1[5]);
    if (bVar3) {
      SimSweepParticlePair<Chaos::Private::FSimSweepShapeFilterNarrowPhase,Chaos::Private::FSimSweepCollectorFirstHit>
                ((TGeometryParticleHandleImp<double,3,1> *)*puVar1,pTVar2,
                 (TVector<double,3> *)puVar1[1],(TRotation<double,3> *)puVar1[4],
                 (TVector<double,3> *)puVar1[2],*(double *)puVar1[3],
                 (FSimSweepShapeFilterNarrowPhase *)puVar1[6],
                 (FSimSweepCollectorFirstHit *)puVar1[7]);
    }
  }
  return true;
}

// Sweep @ 143a1bc80

bool __thiscall
Chaos::Private::
TSimSweepSQVisitor<`Chaos::Private::SimOverlapBounds<`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_1>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_2>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_3>_const_>'::__l2::<lambda_1>_>
::Sweep(void *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
       FQueryFastData *param_2)

{
  `Chaos::Private::
  SimOverlapBounds<`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_1>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_2>_const_,`Chaos::Private::SimOverlapBoundsAll'::__l2::<lambda_3>_const_>'
  ::__l2::<lambda_1>::operator()
            (*(void **)((longlong)this + 8),(param_1->Payload).GeometryParticleHandle);
  return true;
}

// Sweep @ 143a1bca0

bool __thiscall
Chaos::Private::
TSimSweepSQVisitor<`Chaos::Private::SimSweepParticle<Chaos::Private::FSimSweepParticleFilterBroadPhase,Chaos::Private::FSimSweepShapeFilterNarrowPhase,Chaos::Private::FSimSweepCollectorFirstHit>'::__l2::<lambda_1>_>
::Sweep(void *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1,
       FQueryFastData *param_2)

{
  undefined8 *puVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  bool bVar3;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  pTVar2 = (param_1->Payload).GeometryParticleHandle;
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)*puVar1) {
    bVar3 = ParticlePairBroadPhaseFilter
                      ((TGeometryParticleHandleImp<double,3,1> *)*puVar1,pTVar2,
                       *(FIgnoreCollisionManager **)puVar1[5]);
    if (bVar3) {
      SimSweepParticlePair<Chaos::Private::FSimSweepShapeFilterNarrowPhase,Chaos::Private::FSimSweepCollectorFirstHit>
                ((TGeometryParticleHandleImp<double,3,1> *)*puVar1,pTVar2,
                 (TVector<double,3> *)puVar1[1],(TRotation<double,3> *)puVar1[4],
                 (TVector<double,3> *)puVar1[2],*(double *)puVar1[3],
                 (FSimSweepShapeFilterNarrowPhase *)puVar1[6],
                 (FSimSweepCollectorFirstHit *)puVar1[7]);
    }
  }
  return true;
}

