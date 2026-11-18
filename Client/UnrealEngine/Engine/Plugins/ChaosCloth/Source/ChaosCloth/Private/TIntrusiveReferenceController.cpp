// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 32

// DestroyObject @ 14dbd45a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FManagedArrayCollection,1>::DestroyObject
          (TIntrusiveReferenceController<FManagedArrayCollection,1> *this)

{
  FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14dbd45b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>,1>
::DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>,1>
                *this)

{
  Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
  ::~FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
            ((FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd45c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
::DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
                *this)

{
  Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
  ~FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>
            ((FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd45d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FExternalForces,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FExternalForces,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FExternalForcesBase_Softs_Chaos__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14dbd45f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FMultiResConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FMultiResConstraints,1> *this)

{
  Chaos::Softs::FMultiResConstraints::~FMultiResConstraints
            ((FMultiResConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd4600

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FPBDAnimDriveConstraint,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDAnimDriveConstraint,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x78);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x68);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14dbd4660

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FPBDAreaSpringConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDAreaSpringConstraints,1> *this)

{
  Chaos::Softs::FPBDAreaSpringConstraints::~FPBDAreaSpringConstraints
            ((FPBDAreaSpringConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd4670

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FPBDBendingConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDBendingConstraints,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FPBDBendingConstraints_Softs_Chaos__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x120);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  Chaos::Softs::FPBDBendingConstraintsBase::~FPBDBendingConstraintsBase
            ((FPBDBendingConstraintsBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd46b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FPBDBendingSpringConstraints,1>
::DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDBendingSpringConstraints,1> *this)

{
  Chaos::Softs::FPBDSpringConstraints::~FPBDSpringConstraints
            ((FPBDSpringConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd46c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FPBDCollisionSpringConstraints,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FPBDCollisionSpringConstraints,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FPBDCollisionSpringConstraints_Softs_Chaos__6B_;
  Chaos::Softs::FPBDCollisionSpringConstraintsBase::~FPBDCollisionSpringConstraintsBase
            ((FPBDCollisionSpringConstraintsBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd46e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FPBDEdgeSpringConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDEdgeSpringConstraints,1> *this)

{
  Chaos::Softs::FPBDEdgeSpringConstraints::~FPBDEdgeSpringConstraints
            ((FPBDEdgeSpringConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd46f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FPBDExtremeDeformationConstraints,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FPBDExtremeDeformationConstraints,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7FPBDExtremeDeformationConstraints_Softs_Chaos__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14dbd4740

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FPBDLongRangeConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDLongRangeConstraints,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FPBDLongRangeConstraintsBase_Softs_Chaos__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x78);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x68);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14dbd47a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FPBDSelfCollisionSphereConstraints,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FPBDSelfCollisionSphereConstraints,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7FPBDSelfCollisionSphereConstraintsBase_Softs_Chaos__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14dbd47c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints,1>
              *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0xb8] = '\0';
  (this->ObjectStorage).Pad[0xb9] = '\0';
  (this->ObjectStorage).Pad[0xba] = '\0';
  (this->ObjectStorage).Pad[0xbb] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xb0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x70));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// DestroyObject @ 14dbd4830

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FPBDSoftBodyCollisionConstraint,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FPBDSoftBodyCollisionConstraint,1> *this)

{
  Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::~FPBDSoftBodyCollisionConstraintBase
            ((FPBDSoftBodyCollisionConstraintBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd4840

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FPBDSphericalBackstopConstraint,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FPBDSphericalBackstopConstraint,1> *this)

{
  return;
}

// DestroyObject @ 14dbd4850

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FPBDSphericalConstraint,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDSphericalConstraint,1> *this)

{
  return;
}

// DestroyObject @ 14dbd4860

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FPBDTriangleMeshCollisions,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDTriangleMeshCollisions,1> *this)

{
  Chaos::Softs::FPBDTriangleMeshCollisions::~FPBDTriangleMeshCollisions
            ((FPBDTriangleMeshCollisions *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd4870

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FPBDTriangleMeshIntersections,1>
::DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FPBDTriangleMeshIntersections,1> *this)

{
  return;
}

// DestroyObject @ 14dbd4880

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FPBDVertexFaceRepulsionConstraints,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FPBDVertexFaceRepulsionConstraints,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14dbd48e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FVelocityAndPressureField,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FVelocityAndPressureField,1> *this)

{
  Chaos::Softs::FVelocityAndPressureField::~FVelocityAndPressureField
            ((FVelocityAndPressureField *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd48f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FXPBDAnisotropicBendingConstraints,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FXPBDAnisotropicBendingConstraints,1> *this)

{
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::~FXPBDAnisotropicBendingConstraints
            ((FXPBDAnisotropicBendingConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd4900

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FXPBDAnisotropicSpringConstraints,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FXPBDAnisotropicSpringConstraints,1> *this)

{
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::~FXPBDAnisotropicAxialSpringConstraints
            ((FXPBDAnisotropicAxialSpringConstraints *)((this->ObjectStorage).Pad + 0x208));
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::~FXPBDAnisotropicEdgeSpringConstraints
            ((FXPBDAnisotropicEdgeSpringConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd4930

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FXPBDAreaSpringConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FXPBDAreaSpringConstraints,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FXPBDAxialSpringConstraints_Softs_Chaos__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x88);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  Chaos::Softs::FPBDAxialSpringConstraintsBase::~FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd4970

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FXPBDBendingConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FXPBDBendingConstraints,1> *this)

{
  Chaos::Softs::FXPBDBendingConstraints::~FXPBDBendingConstraints
            ((FXPBDBendingConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd4980

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FXPBDBendingSpringConstraints,1>
::DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FXPBDBendingSpringConstraints,1> *this)

{
  Chaos::Softs::FXPBDSpringConstraints::~FXPBDSpringConstraints
            ((FXPBDSpringConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd4990

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FXPBDEdgeSpringConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FXPBDEdgeSpringConstraints,1> *this)

{
  Chaos::Softs::FXPBDSpringConstraints::~FXPBDSpringConstraints
            ((FXPBDSpringConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd49a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FXPBDFaceConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FXPBDFaceConstraints,1> *this)

{
  Chaos::Softs::FXPBDFaceConstraints::~FXPBDFaceConstraints
            ((FXPBDFaceConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd49b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FXPBDStretchBiasElementConstraints,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FXPBDStretchBiasElementConstraints,1> *this)

{
  Chaos::Softs::FXPBDStretchBiasElementConstraints::~FXPBDStretchBiasElementConstraints
            ((FXPBDStretchBiasElementConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd49c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FXPBDVertexConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FXPBDVertexConstraints,1> *this)

{
  Chaos::Softs::FXPBDVertexConstraints::~FXPBDVertexConstraints
            ((FXPBDVertexConstraints *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dbd49d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::Softs::FXPBDVertexFaceConstraints,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::Softs::FXPBDVertexFaceConstraints,1> *this)

{
  Chaos::Softs::FXPBDVertexFaceConstraints::~FXPBDVertexFaceConstraints
            ((FXPBDVertexFaceConstraints *)&this->ObjectStorage);
  return;
}

