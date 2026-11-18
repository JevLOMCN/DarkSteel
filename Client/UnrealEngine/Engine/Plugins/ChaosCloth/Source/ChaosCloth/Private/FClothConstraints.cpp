// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 60

// FClothConstraints @ 14db8eb80

FClothConstraints * __thiscall Chaos::FClothConstraints::FClothConstraints(FClothConstraints *this)

{
  (this->EdgeConstraints).Object = (FPBDEdgeSpringConstraints *)0x0;
  (this->EdgeConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->XEdgeConstraints).Object = (FXPBDEdgeSpringConstraints *)0x0;
  (this->XEdgeConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->XStretchBiasConstraints).Object = (FXPBDStretchBiasElementConstraints *)0x0;
  (this->XStretchBiasConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->XAnisoSpringConstraints).Object = (FXPBDAnisotropicSpringConstraints *)0x0;
  (this->XAnisoSpringConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BendingConstraints).Object = (FPBDBendingSpringConstraints *)0x0;
  (this->BendingConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->XBendingConstraints).Object = (FXPBDBendingSpringConstraints *)0x0;
  (this->XBendingConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BendingElementConstraints).Object = (FPBDBendingConstraints *)0x0;
  (this->BendingElementConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->XBendingElementConstraints).Object = (FXPBDBendingConstraints *)0x0;
  (this->XBendingElementConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->XAnisoBendingElementConstraints).Object = (FXPBDAnisotropicBendingConstraints *)0x0;
  (this->XAnisoBendingElementConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AreaConstraints).Object = (FPBDAreaSpringConstraints *)0x0;
  (this->AreaConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->XAreaConstraints).Object = (FXPBDAreaSpringConstraints *)0x0;
  (this->XAreaConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LongRangeConstraints).Object = (FPBDLongRangeConstraints *)0x0;
  (this->LongRangeConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MaximumDistanceConstraints).Object = (FPBDSphericalConstraint *)0x0;
  (this->MaximumDistanceConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BackstopConstraints).Object = (FPBDSphericalBackstopConstraint *)0x0;
  (this->BackstopConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimDriveConstraints).Object = (FPBDAnimDriveConstraint *)0x0;
  (this->AnimDriveConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SelfCollisionInit).Object = (FPBDTriangleMeshCollisions *)0x0;
  (this->SelfCollisionInit).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SelfCollisionConstraints).Object = (FPBDCollisionSpringConstraints *)0x0;
  (this->SelfCollisionConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SelfIntersectionConstraints).Object = (FPBDTriangleMeshIntersections *)0x0;
  (this->SelfIntersectionConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SelfCollisionSphereConstraints).Object = (FPBDSelfCollisionSphereConstraints *)0x0;
  (this->SelfCollisionSphereConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GSMainConstraint).Object =
       (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0;
  (this->GSMainConstraint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GSCorotatedCodimensionalConstraint).Object =
       (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *)0x0;
  (this->GSCorotatedCodimensionalConstraint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MultiResConstraints).Object = (FMultiResConstraints *)0x0;
  (this->MultiResConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ExtremeDeformationConstraints).Object = (FPBDExtremeDeformationConstraints *)0x0;
  (this->ExtremeDeformationConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VelocityAndPressureField).Object = (FVelocityAndPressureField *)0x0;
  (this->VelocityAndPressureField).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ExternalForces).Object = (FExternalForces *)0x0;
  (this->ExternalForces).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CollisionConstraint).Object = (FPBDSoftBodyCollisionConstraint *)0x0;
  (this->CollisionConstraint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SkinnedTriangleCollisionsConstraint).Object =
       (FPBDSkinnedTriangleMeshCollisionConstraints *)0x0;
  (this->SkinnedTriangleCollisionsConstraint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ClothVertexSpringConstraints).Object = (FXPBDVertexConstraints *)0x0;
  (this->ClothVertexSpringConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ClothVertexFaceSpringConstraints).Object = (FXPBDVertexFaceConstraints *)0x0;
  (this->ClothVertexFaceSpringConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ClothFaceSpringConstraints).Object = (FXPBDFaceConstraints *)0x0;
  (this->ClothFaceSpringConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RepulsionConstraints).Object = (FPBDVertexFaceRepulsionConstraints *)0x0;
  (this->RepulsionConstraints).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->Evolution = (FEvolution *)0x0;
  this->PBDEvolution = (FPBDEvolution *)0x0;
  this->AnimationPositions = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0;
  this->AnimationNormals = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0;
  this->AnimationVelocities = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0;
  this->ParticleOffset = 0;
  this->ParticleRangeId = 0;
  this->NumParticles = 0;
  this->NumConstraintInits = 0;
  this->NumConstraintRules = 0;
  this->NumPostCollisionConstraintRules = 0;
  this->NumPostprocessingConstraintRules = 0;
  this->bSkipSelfCollisionInit = false;
  this->PerSolverField = (FPerSolverFieldSystem *)0x0;
  this->Normals = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0;
  this->LastSubframeCollisionTransformsCCD =
       (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)0x0;
  this->CollisionParticleCollided = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0;
  this->CollisionContacts = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0;
  this->CollisionNormals = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0;
  this->CollisionPhis = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
  this->NumPreSubstepInits = 0;
  this->NumExternalForceRules = 0;
  this->NumPreSubstepConstraintRules = 0;
  this->NumCollisionConstraintRules = 0;
  this->NumUpdateLinearSystemRules = 0;
  this->NumUpdateLinearSystemCollisionsRules = 0;
  this->ConstraintInitOffset = -1;
  this->ConstraintRuleOffset = -1;
  this->PostCollisionConstraintRuleOffset = -1;
  this->PostprocessingConstraintRuleOffset = -1;
  return this;
}

// ~FClothConstraints @ 14db9f220

void __thiscall Chaos::FClothConstraints::~FClothConstraints(FClothConstraints *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RepulsionConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothFaceSpringConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothVertexFaceSpringConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothVertexSpringConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SkinnedTriangleCollisionsConstraint).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CollisionConstraint).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExternalForces).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VelocityAndPressureField).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExtremeDeformationConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MultiResConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GSCorotatedCodimensionalConstraint).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GSMainConstraint).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelfCollisionSphereConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelfIntersectionConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelfCollisionConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelfCollisionInit).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnimDriveConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackstopConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaximumDistanceConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LongRangeConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->XAreaConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AreaConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->XAnisoBendingElementConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->XBendingElementConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BendingElementConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->XBendingConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BendingConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->XAnisoSpringConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->XStretchBiasConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->XEdgeConstraints).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EdgeConstraints).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14dba0eb0

void __thiscall
`Chaos::FClothConstraints::CreateGSRules'::__l69::<lambda_10>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x130) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)(lVar1 + 0x130),
             param_1,param_2,Chaos::MaxResidualIters,Chaos::bWriteResidual2File,
             (TPBDActiveView<Chaos::Softs::FSolverParticles> *)0x0);
  return;
}

// operator() @ 14dba0f40

void __thiscall
`Chaos::FClothConstraints::CreateForceBasedRules'::__l95::<lambda_10>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res20 [8];
  
  if ((param_3 & PBD) != None) {
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0xb0) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0xb0);
    Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar1 + 0x18),param_2,1);
    Chaos::Softs::FPBDWeightMap::
    ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
              ((FPBDWeightMap *)(lVar1 + 0x60),local_res20,(bool *)0x0);
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0xb0) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
              (*(FPBDLongRangeConstraints **)(lVar1 + 0xb0),param_1,param_2);
  }
  return;
}

// operator() @ 14dba1030

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l88::<lambda_13>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDAnisotropicSpringConstraints::Init
            (*(FXPBDAnisotropicSpringConstraints **)(lVar1 + 0x30));
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDAnisotropicSpringConstraints::ApplyProperties
            (*(FXPBDAnisotropicSpringConstraints **)(lVar1 + 0x30),param_2,
             *(int *)(*(longlong *)(*(longlong *)this + 0x208) + 0x420));
  return;
}

// operator() @ 14dba10e0

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l91::<lambda_15>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res8 [8];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x50) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x50);
  Chaos::Softs::FPBDStiffness::ApplyXPBDValues((FPBDStiffness *)(lVar1 + 0x30),__real_4e6e6b28);
  Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(lVar1 + 0x78),local_res8,(bool *)0x0);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x50) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDSpringConstraints::Init(*(FXPBDSpringConstraints **)(lVar1 + 0x50));
  return;
}

// operator() @ 14dba1190

void __thiscall
`Chaos::FClothConstraints::CreateGSRules'::__l95::<lambda_18>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_28 [2];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x130) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
  ComputeNewtonResiduals
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)(lVar1 + 0x130),
             local_28,param_1,param_2,true,
             (TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *)0x0);
  if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14dba1230

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l97::<lambda_19>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  <lambda_1> local_res8 [8];
  
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x60) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x60);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)this + 0x208) + 0x420);
  Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar2 + 0x30),param_2,iVar1);
  Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(lVar2 + 0x78),local_res8,(bool *)0x0);
  Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar2 + 0xb0),param_2,iVar1);
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x60) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Chaos::Softs::FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticles>
            (*(FPBDBendingConstraintsBase **)(lVar2 + 0x60),param_1);
  return;
}

// operator() @ 14dbaba70

void __thiscall
`Chaos::FClothConstraints::CreateForceBasedRules'::__l14::<lambda_1>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar9;
  TArrayView<float,int> *pTVar10;
  float *pfVar11;
  TVector<double> *pTVar12;
  int iVar13;
  TVector<double> *pTVar14;
  double *pdVar15;
  float *pfVar16;
  TVector<double> *pTVar17;
  bool bVar18;
  float fVar19;
  TArrayView<Chaos::TVector<float,3>,int> local_68;
  TArrayView<UE::Math::TVector<double>_const_,int> local_58;
  TArrayView<UE::Math::TVector<double>_const_,int> local_48;
  TArrayView<float,int> local_38 [3];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1763,"PerSolverField",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
               ,0x6e3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1763);
  }
  pTVar14 = (TVector<double> *)0x0;
  lVar5 = *(longlong *)(*(longlong *)this + 0x248);
  pTVar12 = pTVar14;
  if (*(int *)(lVar5 + 0x58) != 0) {
    pTVar9 = Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
             GetConstArrayView<UE::Math::TVector<double>_>
                       ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_58,
                        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                        (lVar5 + 0x50));
    pTVar12 = pTVar9->DataPtr;
  }
  pTVar17 = pTVar14;
  if (*(int *)(lVar5 + 0x48) != 0) {
    pTVar9 = Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
             GetConstArrayView<UE::Math::TVector<double>_>
                       ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_48,
                        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                        (lVar5 + 0x40));
    pTVar17 = pTVar9->DataPtr;
  }
  if ((pTVar12 != (TVector<double> *)0x0) || (pTVar17 != (TVector<double> *)0x0)) {
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_68,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&param_1->field_0x8 + 0x60));
    pTVar10 = Chaos::Softs::FSolverParticlesRange::GetInvM(param_1,local_38);
    fVar7 = __real_3f800000;
    pfVar16 = pTVar10->DataPtr;
    if (0 < *(int *)&param_1->field_0x14) {
      pdVar15 = &(pTVar17->field0_0x0)._s_0.Z;
      pfVar11 = (float *)&(local_68.DataPtr)->field_0x8;
      do {
        fVar1 = *pfVar16;
        iVar13 = (int)pTVar14;
        if (fVar1 != 0.0) {
          if (pTVar17 != (TVector<double> *)0x0) {
            dVar3 = pdVar15[-1];
            dVar4 = *pdVar15;
            pfVar11[-2] = (float)((TVector<double>_u_0_s_0 *)(pdVar15 + -2))->X * fVar1 +
                          pfVar11[-2];
            *pfVar11 = fVar1 * (float)dVar4 + *pfVar11;
            pfVar11[-1] = fVar1 * (float)dVar3 + pfVar11[-1];
          }
          if (pTVar12 != (TVector<double> *)0x0) {
            dVar3 = pTVar12[iVar13].field0_0x0._s_0.Z;
            dVar4 = pTVar12[iVar13].field0_0x0._s_0.X;
            fVar19 = fVar7 / param_2;
            fVar1 = *(float *)&local_68.DataPtr[iVar13].field_0x8;
            fVar2 = *(float *)(local_68.DataPtr + iVar13);
            *(float *)&local_68.DataPtr[iVar13].field_0x4 =
                 (float)pTVar12[iVar13].field0_0x0._s_0.Y * fVar19 +
                 *(float *)&local_68.DataPtr[iVar13].field_0x4;
            *(float *)&local_68.DataPtr[iVar13].field_0x8 = (float)dVar3 * fVar19 + fVar1;
            *(float *)(local_68.DataPtr + iVar13) = (float)dVar4 * fVar19 + fVar2;
          }
        }
        pTVar14 = (TVector<double> *)(ulonglong)(iVar13 + 1U);
        pfVar16 = pfVar16 + 1;
        pdVar15 = pdVar15 + 3;
        pfVar11 = pfVar11 + 3;
      } while ((int)(iVar13 + 1U) < *(int *)&param_1->field_0x14);
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dbac600

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l100::<lambda_21>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res8 [8];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x70) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(*(longlong *)(lVar1 + 0x70) + 0x78),local_res8,(bool *)0x0);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x70) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDBendingConstraints::Init<Chaos::Softs::FSolverParticles>
            (*(FXPBDBendingConstraints **)(lVar1 + 0x70),param_1);
  return;
}

// operator() @ 14dbac6b0

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l103::<lambda_23>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res8 [8];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x80) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(*(longlong *)(lVar1 + 0x80) + 0x78),local_res8,(bool *)0x0);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x80) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::Init<Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicBendingConstraints **)(lVar1 + 0x80),param_1);
  return;
}

// operator() @ 14dbac770

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l106::<lambda_25>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0xa0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDAxialSpringConstraints::Init(*(FXPBDAxialSpringConstraints **)(lVar1 + 0xa0));
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0xa0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FPBDStiffness::ApplyXPBDValues
            ((FPBDStiffness *)(*(longlong *)(lVar1 + 0xa0) + 0x40),__real_4b189680);
  return;
}

// operator() @ 14dbadbd0

void __thiscall
`Chaos::FClothConstraints::CreateGSRules'::__l42::<lambda_2>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x20);
  *(undefined4 *)(lVar1 + 0x1a8) = 0;
  if (*(int *)(lVar1 + 0x1ac) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)(lVar1 + 0x1a0),0,(int *)(lVar1 + 0x1ac));
  }
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::AddZeroed
            ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x1a0),
             *(int *)(lVar1 + 0x10));
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDStretchBiasElementConstraints::ApplyProperties
            (*(FXPBDStretchBiasElementConstraints **)(lVar1 + 0x20),param_2,
             *(int *)(*(longlong *)(*(longlong *)this + 0x200) + 0xc));
  return;
}

// operator() @ 14dbadcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l64::<lambda_2>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_28 [2];
  
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x130) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)(*(longlong *)(lVar2 + 0x130) + 0x244) != '\0') {
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0x130) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)(*(longlong *)(lVar2 + 0x130) + 0x248) < Chaos::MaxResidualIters) {
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      lVar2 = *(longlong *)this;
      if (*(longlong *)(lVar2 + 0x130) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
      ComputeNewtonResiduals
                (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
                  (lVar2 + 0x130),local_28,param_1,param_2,Chaos::bWriteResidual2File,
                 (TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *)0x0);
      if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].AllocatorInstance.Data);
      }
      lVar2 = *(longlong *)this;
      if (*(longlong *)(lVar2 + 0x130) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x130) + 0x248);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}

// operator() @ 14dbae340

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l118::<lambda_31>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  FPBDSphericalBackstopConstraint *this_00;
  code *pcVar2;
  bool bVar3;
  undefined **local_38;
  FSolverParticles *local_30;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0xd0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = *(FPBDSphericalBackstopConstraint **)(lVar1 + 0xd0);
  local_20 = 0xffffffff;
  local_28 = this_00->ParticleOffset;
  local_24 = this_00->ParticleCount;
  local_38 = &___7FSolverParticlesRange_Softs_Chaos__6B_;
  local_30 = param_1;
  Chaos::Softs::FPBDSphericalBackstopConstraint::Apply
            (this_00,(FSolverParticlesRange *)&local_38,param_2);
  return;
}

// operator() @ 14dbae3e0

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l121::<lambda_32>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0xe0) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0xe0);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)this + 0x208) + 0x420);
  Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar2 + 0x18),param_2,iVar1);
  Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar2 + 0x60),param_2,iVar1);
  return;
}

// operator() @ 14dbae480

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l124::<lambda_34>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  FPBDTriangleMeshCollisions *this_00;
  FPBDCollisionSpringConstraintsBase *this_01;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> local_38 [2];
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x244) == '\0') {
    if (*(longlong *)(lVar1 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = *(FPBDTriangleMeshCollisions **)(lVar1 + 0xf0);
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x100) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Chaos::Softs::FPBDTriangleMeshCollisions::Init<Chaos::Softs::FSolverParticles>
              (this_00,param_1,(FPBDFlatWeightMap *)(*(longlong *)(lVar1 + 0x100) + 8));
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x100) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_01 = *(FPBDCollisionSpringConstraintsBase **)(lVar1 + 0x100);
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0xf0);
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0xf0);
    if ((*(char *)(lVar2 + 0x2e9) == '\0') || (*(int *)(lVar2 + 0x4c8) != *(int *)(lVar2 + 0x2e4)))
    {
      local_38[0].DataPtr = (FGIAColor *)0x0;
      local_38[0].ArrayNum = 0;
    }
    else {
      local_38[0].ArrayNum = *(int *)(lVar2 + 0x2e0) + *(int *)(lVar2 + 0x2e4);
      local_38[0].DataPtr =
           (FGIAColor *)(*(longlong *)(lVar2 + 0x4c0) + (longlong)*(int *)(lVar2 + 0x2e0) * -8);
      if (local_38[0].ArrayNum < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0xf0);
    lVar3 = *(longlong *)this;
    if (*(longlong *)(lVar3 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = *(longlong *)this;
    lVar3 = *(longlong *)(lVar3 + 0xf0);
    if (*(longlong *)(lVar4 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Chaos::Softs::FPBDCollisionSpringConstraintsBase::
    Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>
              (this_01,param_1,param_2,(FTriangleSubMesh *)(*(longlong *)(lVar4 + 0xf0) + 8),
               (THierarchicalSpatialHash<int,float> *)(lVar3 + 0x3a0),
               (THierarchicalSpatialHash<int,float> *)(lVar2 + 0x428),local_38,
               (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
                *)(lVar1 + 0x4d0));
  }
  return;
}

// operator() @ 14dbae780

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'[::C]::<lambda_38>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  FPBDTriangleMeshIntersections *this_00;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x244) == '\0') {
    if (*(longlong *)(lVar1 + 0x110) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = *(FPBDTriangleMeshIntersections **)(lVar1 + 0x110);
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0xf0) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticles>
              (this_00,param_1,
               (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>
                *)(*(longlong *)(lVar1 + 0xf0) + 0x4b0),param_2);
  }
  return;
}

// operator() @ 14dbae860

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'[::C]::<lambda_39>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  FPBDTriangleMeshIntersections *this_00;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)this;
  if (*(char *)(lVar2 + 0x244) == '\0') {
    if ((*(longlong *)(lVar2 + 0xf0) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0xf0) + 0x2ec);
    if (0 < (int)uVar1) {
      uVar5 = (ulonglong)uVar1;
      do {
        lVar2 = *(longlong *)this;
        if ((*(longlong *)(lVar2 + 0xf0) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        Chaos::Softs::FPBDTriangleMeshCollisions::PostStepInit<Chaos::Softs::FSolverParticles>
                  (*(FPBDTriangleMeshCollisions **)(lVar2 + 0xf0),param_1);
        lVar2 = *(longlong *)this;
        if ((*(longlong *)(lVar2 + 0x110) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(FPBDTriangleMeshIntersections **)(lVar2 + 0x110);
        lVar2 = *(longlong *)this;
        if ((*(longlong *)(lVar2 + 0xf0) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticles>
                  (this_00,param_1,
                   (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>
                    *)(*(longlong *)(lVar2 + 0xf0) + 0x508),param_2);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

// operator() @ 14dbaeb30

void __thiscall
`Chaos::FClothConstraints::CreateForceBasedRules'::__l32::<lambda_3>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,FEvolutionLinearSystem *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem
            (*(FXPBDAnisotropicEdgeSpringConstraints **)(lVar1 + 0x30),param_1,param_2,param_3);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem
            ((FXPBDAnisotropicAxialSpringConstraints *)(*(longlong *)(lVar1 + 0x30) + 0x208),param_1
             ,param_2,param_3);
  return;
}

// operator() @ 14dbaec00

void __thiscall
`Chaos::FClothConstraints::CreateGSRules'::__l45::<lambda_3>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res8 [8];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x70) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDBendingConstraints::Init<Chaos::Softs::FSolverParticles>
            (*(FXPBDBendingConstraints **)(lVar1 + 0x70),param_1);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x70) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(*(longlong *)(lVar1 + 0x70) + 0x78),local_res8,(bool *)0x0);
  return;
}

// operator() @ 14dbaf1c0

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'[::F]::<lambda_40>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res8 [8];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0xb0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0xb0);
  Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar1 + 0x18),param_2,1);
  Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(lVar1 + 0x60),local_res8,(bool *)0x0);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0xb0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FPBDLongRangeConstraints **)(lVar1 + 0xb0),param_1,param_2);
  return;
}

// operator() @ 14dbafad0

void __thiscall
`Chaos::FClothConstraints::CreateGSRules'::__l48::<lambda_4>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res8 [8];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x80) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::Init<Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicBendingConstraints **)(lVar1 + 0x80),param_1);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x80) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(*(longlong *)(lVar1 + 0x80) + 0x78),local_res8,(bool *)0x0);
  return;
}

// operator() @ 14dbafb90

void __thiscall
`Chaos::FClothConstraints::CreateForceBasedRules'::__l77::<lambda_4>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,
          TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = *(uint *)&param_1->field_0x18;
  lVar2 = *(longlong *)(*(longlong *)this + 0x200);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x1e8)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x1e0) + (longlong)(int)uVar1 * 4);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x4d8)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x4d0);
  lVar3 = *(longlong *)this;
  if (*(int *)(lVar2 + 8 + (longlong)(int)uVar1 * 0x18) == 1) {
    if (*(longlong *)(lVar3 + 0x1a0) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::Apply
              (*(FPBDSoftBodyCollisionConstraintBase **)(lVar3 + 0x1a0),param_1,param_2,param_3);
  }
  else {
    if (*(longlong *)(lVar3 + 0x1a0) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyWithPlanarConstraints
              (*(FPBDSoftBodyCollisionConstraintBase **)(lVar3 + 0x1a0),param_1,param_2,param_3,
               *(int *)(lVar2 + 0xc + (longlong)(int)uVar1 * 0x18) == 0);
  }
  return;
}

// operator() @ 14dbafd40

void __thiscall
`Chaos::FClothConstraints::CreateForceBasedRules'::__l80::<lambda_5>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x244) != '\0') {
    if ((*(longlong *)(lVar1 + 0x1b0) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)(*(longlong *)(lVar1 + 0x1b0) + 0x6d) != '\0') {
      return;
    }
  }
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 0x1b0) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::Init
            (*(FPBDSkinnedTriangleMeshCollisionConstraints **)(lVar1 + 0x1b0),param_1,param_2);
  return;
}

// operator() @ 14dbafe10

void __thiscall
`Chaos::FClothConstraints::CreateGSRules'::__l57::<lambda_6>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_28 [2];
  
  iVar4 = 0;
  if (0 < *(int *)((longlong)this + 8)) {
    do {
      lVar1 = *(longlong *)this;
      if ((*(longlong *)(lVar1 + 0x20) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>
                (*(FXPBDStretchBiasElementConstraints **)(lVar1 + 0x20),param_1,param_2);
      if (*(FXPBDBendingConstraints **)(*(longlong *)this + 0x70) != (FXPBDBendingConstraints *)0x0)
      {
        Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>
                  (*(FXPBDBendingConstraints **)(*(longlong *)this + 0x70),param_1,param_2);
      }
      if (*(char *)((longlong)this + 0xc) != '\0') {
        lVar1 = *(longlong *)this;
        if ((*(longlong *)(lVar1 + 0x130) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
        ComputeNewtonResiduals
                  (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
                    (lVar1 + 0x130),local_28,param_1,param_2,false,
                   (TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *)0x0);
        if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].AllocatorInstance.Data);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((longlong)this + 8));
  }
  return;
}

// operator() @ 14dbaff40

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l76::<lambda_6>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_28 [2];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x130) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
  ComputeNewtonResiduals
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)(lVar1 + 0x130),
             local_28,param_1,param_2,true,
             (TArray<Chaos::PMatrix<float,3,3>,TSizedDefaultAllocator<32>_> *)0x0);
  if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14dbaffe0

void __thiscall
`Chaos::FClothConstraints::CreateForceBasedRules'::__l83::<lambda_6>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  longlong lVar1;
  FPBDTriangleMeshCollisions *this_00;
  FPBDCollisionSpringConstraintsBase *this_01;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TArrayView<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor_const_,int> local_38 [2];
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x244) == '\0') {
    if (*(longlong *)(lVar1 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = *(FPBDTriangleMeshCollisions **)(lVar1 + 0xf0);
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x100) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Chaos::Softs::FPBDTriangleMeshCollisions::Init<Chaos::Softs::FSolverParticlesRange>
              (this_00,param_1,(FPBDFlatWeightMap *)(*(longlong *)(lVar1 + 0x100) + 8));
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x100) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_01 = *(FPBDCollisionSpringConstraintsBase **)(lVar1 + 0x100);
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0xf0);
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0xf0);
    if ((*(char *)(lVar2 + 0x2e9) == '\0') || (*(int *)(lVar2 + 0x4c8) != *(int *)(lVar2 + 0x2e4)))
    {
      local_38[0].DataPtr = (FGIAColor *)0x0;
      local_38[0].ArrayNum = 0;
    }
    else {
      local_38[0].ArrayNum = *(int *)(lVar2 + 0x2e0) + *(int *)(lVar2 + 0x2e4);
      local_38[0].DataPtr =
           (FGIAColor *)(*(longlong *)(lVar2 + 0x4c0) + (longlong)*(int *)(lVar2 + 0x2e0) * -8);
      if (local_38[0].ArrayNum < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0xf0);
    lVar3 = *(longlong *)this;
    if (*(longlong *)(lVar3 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = *(longlong *)this;
    lVar3 = *(longlong *)(lVar3 + 0xf0);
    if (*(longlong *)(lVar4 + 0xf0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Chaos::Softs::FPBDCollisionSpringConstraintsBase::
    Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>
              (this_01,param_1,param_2,(FTriangleSubMesh *)(*(longlong *)(lVar4 + 0xf0) + 8),
               (THierarchicalSpatialHash<int,float> *)(lVar3 + 0x3a0),
               (THierarchicalSpatialHash<int,float> *)(lVar2 + 0x428),local_38,
               (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor,TSizedDefaultAllocator<32>_>
                *)(lVar1 + 0x4d0));
  }
  return;
}

// operator() @ 14dbb02e0

void __thiscall
`Chaos::FClothConstraints::CreateGSRules'::__l60::<lambda_7>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)((longlong)this + 8)) {
    do {
      lVar1 = *(longlong *)this;
      if ((*(longlong *)(lVar1 + 0x130) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG
                (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
                  (lVar1 + 0x130),param_1,param_2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((longlong)this + 8));
  }
  return;
}

// operator() @ 14dbb0380

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l79::<lambda_7>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x20);
  *(undefined4 *)(lVar1 + 0x1a8) = 0;
  if (*(int *)(lVar1 + 0x1ac) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)(lVar1 + 0x1a0),0,(int *)(lVar1 + 0x1ac));
  }
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::AddZeroed
            ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x1a0),
             *(int *)(lVar1 + 0x10));
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDStretchBiasElementConstraints::ApplyProperties
            (*(FXPBDStretchBiasElementConstraints **)(lVar1 + 0x20),param_2,
             *(int *)(*(longlong *)(*(longlong *)this + 0x208) + 0x420));
  return;
}

// operator() @ 14dbb0480

void __thiscall
`Chaos::FClothConstraints::CreateGSRules'::__l62::<lambda_8>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)((longlong)this + 8)) {
    do {
      lVar1 = *(longlong *)this;
      if ((*(longlong *)(lVar1 + 0x130) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply
                (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
                  (lVar1 + 0x130),param_1,param_2,Chaos::MaxResidualIters,Chaos::bWriteResidual2File
                 ,(TPBDActiveView<Chaos::Softs::FSolverParticles> *)0x0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((longlong)this + 8));
  }
  return;
}

// operator() @ 14dbb0540

void __thiscall
`Chaos::FClothConstraints::CreateForceBasedRules'::__l92::<lambda_8>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  longlong lVar1;
  FPBDTriangleMeshIntersections *this_00;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x244) == '\0') {
    if (*(longlong *)(lVar1 + 0x110) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = *(FPBDTriangleMeshIntersections **)(lVar1 + 0x110);
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0xf0) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticlesRange>
              (this_00,param_1,
               (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>
                *)(*(longlong *)(lVar1 + 0xf0) + 0x4b0),param_2);
  }
  return;
}

// operator() @ 14dbb0620

void __thiscall
`Chaos::FClothConstraints::CreatePBDRules'::__l82::<lambda_9>::operator()
          (void *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res8 [8];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Chaos::Softs::FXPBDSpringConstraints::Init(*(FXPBDSpringConstraints **)(lVar1 + 0x10));
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x10);
  Chaos::Softs::FPBDStiffness::ApplyXPBDValues((FPBDStiffness *)(lVar1 + 0x30),__real_4e6e6b28);
  Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(lVar1 + 0x78),local_res8,(bool *)0x0);
  return;
}

// operator() @ 14dbb06d0

void __thiscall
`Chaos::FClothConstraints::CreateForceBasedRules'::__l92::<lambda_9>::operator()
          (void *this,FSolverParticlesRange *param_1,float param_2,ESolverMode param_3)

{
  uint uVar1;
  longlong lVar2;
  FPBDTriangleMeshIntersections *this_00;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)this;
  if (*(char *)(lVar2 + 0x244) == '\0') {
    if ((*(longlong *)(lVar2 + 0xf0) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0xf0) + 0x2ec);
    if (0 < (int)uVar1) {
      uVar5 = (ulonglong)uVar1;
      do {
        lVar2 = *(longlong *)this;
        if ((*(longlong *)(lVar2 + 0xf0) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        Chaos::Softs::FPBDTriangleMeshCollisions::PostStepInit<Chaos::Softs::FSolverParticlesRange>
                  (*(FPBDTriangleMeshCollisions **)(lVar2 + 0xf0),param_1);
        lVar2 = *(longlong *)this;
        if ((*(longlong *)(lVar2 + 0x110) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(FPBDTriangleMeshIntersections **)(lVar2 + 0x110);
        lVar2 = *(longlong *)this;
        if ((*(longlong *)(lVar2 + 0xf0) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        Chaos::Softs::FPBDTriangleMeshIntersections::Apply<Chaos::Softs::FSolverParticlesRange>
                  (this_00,param_1,
                   (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection,TSizedDefaultAllocator<32>_>
                    *)(*(longlong *)(lVar2 + 0xf0) + 0x508),param_2);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

// AddRules @ 14dbba920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::AddRules
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,FTriangleMesh *param_2,
          FClothingPatternData *param_3,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_4,TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                   *param_5,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *param_6,TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
                   *param_7,
          TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *param_8,
          float param_9,bool param_10,FTriangleMesh *param_11,int param_12,
          TSharedPtr<Chaos::Softs::FMultiResConstraints,1> *param_13,
          TArray<Chaos::FClothComplexColliders_const_*,TSizedDefaultAllocator<32>_> *param_14,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_15,
          TMap<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
          *param_16)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  float fVar4;
  ECollectionPropertyFlags EVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSolverParticlesRange *pFVar10;
  FVelocityAndPressureField *pFVar11;
  FVelocityAndPressureField *pFVar12;
  FVelocityAndPressureField *local_68;
  FSharedReferencer<1> FStack_60;
  FVelocityAndPressureField *local_58;
  FSharedReferencer<1> FStack_50;
  FVelocityAndPressureField *local_48;
  FSharedReferencer<1> aFStack_40 [3];
  
  CreateSelfCollisionConstraints(this,param_1,param_4,param_5,param_6,param_7,param_2);
  CreateStretchConstraints(this,param_1,param_4,param_2,param_3,param_15,param_9);
  CreateBendingConstraints(this,param_1,param_4,param_2,param_3);
  CreateExtremeDeformationConstraints(this,param_1,param_4,param_5,param_2,param_3);
  CreateAreaConstraints(this,param_1,param_4,param_2,param_3);
  CreateLongRangeConstraints(this,param_1,param_4,param_8,param_9);
  CreateMaxDistanceConstraints(this,param_1,param_4,param_9);
  CreateBackstopConstraints(this,param_1,param_4,param_9,param_16);
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,
                      Softs::FPBDAnimDriveConstraint::AnimDriveStiffnessName);
  pFVar12 = (FVelocityAndPressureField *)&DAT_00000010;
  if ((piVar8 != (int *)0x0) && (*piVar8 != -1)) {
    EVar5 = Softs::FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,*piVar8,&param_1->FlagsArray);
    if ((EVar5 & Enabled) != None) {
      if (this->AnimationVelocities ==
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AnimationVelocities",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                           ,0x5a7,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar1 = this->AnimationVelocities;
      pTVar2 = this->AnimationPositions;
      pTVar9 = ::operator_new(0xc0);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        local_68 = ___xmm_00000000000000000000000000000010;
        pFVar11 = (FVelocityAndPressureField *)&DAT_00000010;
        FStack_60.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDAnimDriveConstraint_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        Softs::FPBDAnimDriveConstraint::FPBDAnimDriveConstraint
                  ((FPBDAnimDriveConstraint *)(pTVar9 + 1),this->ParticleOffset,this->NumParticles,
                   pTVar2,pTVar1,param_4,param_1);
        pFVar11 = (FVelocityAndPressureField *)(pTVar9 + 1);
        if (pFVar11 == (FVelocityAndPressureField *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        FStack_60.ReferenceController = pTVar9;
        local_68 = pFVar11;
      }
      if (&this->AnimDriveConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDAnimDriveConstraint,1> *)&local_68) {
        (this->AnimDriveConstraints).Object = (FPBDAnimDriveConstraint *)pFVar11;
        local_68 = (FVelocityAndPressureField *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AnimDriveConstraints).SharedReferenceCount,&FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      this->NumConstraintInits = this->NumConstraintInits + 1;
      this->NumConstraintRules = this->NumConstraintRules + 1;
    }
  }
  if (this->Evolution != (FEvolution *)0x0) {
    if (this->Normals == (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Normals",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x5d1,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar1 = this->Normals;
    pFVar10 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
    pTVar9 = ::operator_new(200);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      local_58 = ___xmm_00000000000000000000000000000010;
      pFVar11 = (FVelocityAndPressureField *)&DAT_00000010;
      FStack_50.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFExternalForces_Softs_Chaos___00_SharedPointerInternals__6B_
      ;
      Softs::FExternalForces::FExternalForces
                ((FExternalForces *)(pTVar9 + 1),pFVar10,pTVar1,param_4,param_1);
      pFVar11 = (FVelocityAndPressureField *)(pTVar9 + 1);
      if (pFVar11 == (FVelocityAndPressureField *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      FStack_50.ReferenceController = pTVar9;
      local_58 = pFVar11;
    }
    if (&this->ExternalForces != (TSharedPtr<Chaos::Softs::FExternalForces,1> *)&local_58) {
      (this->ExternalForces).Object = (FExternalForces *)pFVar11;
      local_58 = (FVelocityAndPressureField *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ExternalForces).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    this->NumExternalForceRules = this->NumExternalForceRules + 1;
    this->NumUpdateLinearSystemRules = this->NumUpdateLinearSystemRules + 1;
    iVar7 = this->NumExternalForceRules;
    if (this->Evolution != (FEvolution *)0x0) {
      pFVar10 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
      pTVar9 = ::operator_new(0x1a8);
      fVar4 = __real_42c80000;
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        local_48 = ___xmm_00000000000000000000000000000010;
        aFStack_40[0].ReferenceController = _UNK_150651568;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFVelocityAndPressureField_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        Softs::FVelocityAndPressureField::FVelocityAndPressureField
                  ((FVelocityAndPressureField *)(pTVar9 + 1),pFVar10,param_2,param_1,param_4,fVar4);
        pFVar12 = (FVelocityAndPressureField *)(pTVar9 + 1);
        if (pFVar12 == (FVelocityAndPressureField *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        aFStack_40[0].ReferenceController = pTVar9;
        local_48 = pFVar12;
      }
      if (&this->VelocityAndPressureField !=
          (TSharedPtr<Chaos::Softs::FVelocityAndPressureField,1> *)&local_48) {
        (this->VelocityAndPressureField).Object = pFVar12;
        local_48 = (FVelocityAndPressureField *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->VelocityAndPressureField).SharedReferenceCount,aFStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (aFStack_40[0].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      this->NumExternalForceRules = this->NumExternalForceRules + 1;
      iVar7 = this->NumExternalForceRules;
    }
    if (this->PerSolverField != (FPerSolverFieldSystem *)0x0) {
      this->NumExternalForceRules = iVar7 + 1;
    }
    CreateCollisionConstraint(this,param_1,param_9,param_4,param_14);
    CreateMultiresConstraint(this,param_1,param_4,param_2,param_11,param_12);
    CreateClothClothConstraints(this,param_1,param_15);
  }
  if (bEnableGS == false) {
    if (this->Evolution == (FEvolution *)0x0) {
      CreatePBDRules(this);
    }
    else {
      CreateForceBasedRules(this,param_13);
    }
  }
  else {
    CreateGSRules(this);
  }
  if (this->PBDEvolution != (FPBDEvolution *)0x0) {
    Enable(this,param_10);
  }
  return;
}

// CreateAnimDriveConstraints @ 14dbc48d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateAnimDriveConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  ECollectionPropertyFlags EVar4;
  bool bVar5;
  int *piVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPBDAnimDriveConstraint *pFVar8;
  FPBDAnimDriveConstraint *local_28;
  FSharedReferencer<1> FStack_20;
  
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,
                      Softs::FPBDAnimDriveConstraint::AnimDriveStiffnessName);
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    EVar4 = Softs::FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,*piVar6,&param_1->FlagsArray);
    if ((EVar4 & Enabled) != None) {
      if (this->AnimationVelocities ==
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AnimationVelocities",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                           ,0x5a7,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar1 = this->AnimationVelocities;
      pTVar2 = this->AnimationPositions;
      pTVar7 = ::operator_new(0xc0);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_28 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDAnimDriveConstraint *)&DAT_00000010;
        FStack_20.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDAnimDriveConstraint_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        Softs::FPBDAnimDriveConstraint::FPBDAnimDriveConstraint
                  ((FPBDAnimDriveConstraint *)(pTVar7 + 1),this->ParticleOffset,this->NumParticles,
                   pTVar2,pTVar1,param_2,param_1);
        pFVar8 = (FPBDAnimDriveConstraint *)(pTVar7 + 1);
        if (pFVar8 == (FPBDAnimDriveConstraint *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FStack_20.ReferenceController = pTVar7;
        local_28 = pFVar8;
      }
      if (&this->AnimDriveConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDAnimDriveConstraint,1> *)&local_28) {
        (this->AnimDriveConstraints).Object = pFVar8;
        local_28 = (FPBDAnimDriveConstraint *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AnimDriveConstraints).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      this->NumConstraintInits = this->NumConstraintInits + 1;
      this->NumConstraintRules = this->NumConstraintRules + 1;
    }
  }
  return;
}

// CreateAreaConstraints @ 14dbc4aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateAreaConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,FTriangleMesh *param_3,FClothingPatternData *param_4)

{
  FPBDEvolution *pFVar1;
  FEvolution *this_00;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  int *piVar5;
  FSolverParticlesRange *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPBDAreaSpringConstraints *pFVar8;
  FSharedReferencer<1> FVar9;
  FPBDAreaSpringConstraints *local_78;
  FSharedReferencer<1> FStack_70;
  FPBDAreaSpringConstraints *local_68;
  FSharedReferencer<1> FStack_60;
  FPBDAreaSpringConstraints *local_58;
  FSharedReferencer<1> FStack_50;
  FPBDAreaSpringConstraints *local_48;
  FSharedReferencer<1> FStack_40;
  FPBDAreaSpringConstraints *local_38;
  FSharedReferencer<1> FStack_30;
  
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,
                      Softs::FXPBDAreaSpringConstraints::XPBDAreaSpringStiffnessName);
  if (((piVar5 == (int *)0x0) || (*piVar5 == -1)) ||
     (EVar3 = Softs::FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,*piVar5,&param_1->FlagsArray), (EVar3 & Enabled) == None)) {
    piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_1->KeyNameIndices,
                  Softs::FPBDAreaSpringConstraints::AreaSpringStiffnessName);
    if (piVar5 == (int *)0x0) {
      return;
    }
    if (*piVar5 == -1) {
      return;
    }
    EVar3 = Softs::FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,*piVar5,&param_1->FlagsArray);
    if ((EVar3 & Enabled) == None) {
      return;
    }
    this_00 = this->Evolution;
    if (this_00 == (FEvolution *)0x0) {
      pFVar1 = this->PBDEvolution;
      pTVar7 = ::operator_new(0x150);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_38 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDAreaSpringConstraints *)&DAT_00000010;
        FVar9.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDAreaSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FPBDAreaSpringConstraints::FPBDAreaSpringConstraints
                  ((FPBDAreaSpringConstraints *)(pTVar7 + 1),&pFVar1->MParticles,
                   this->ParticleOffset,this->NumParticles,&param_3->MElements,param_2,param_1,true)
        ;
        pFVar8 = (FPBDAreaSpringConstraints *)(pTVar7 + 1);
        if ((pFVar8 == (FPBDAreaSpringConstraints *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FVar9.ReferenceController = pTVar7;
        local_38 = pFVar8;
      }
      FStack_30.ReferenceController = FVar9.ReferenceController;
      if (&this->AreaConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDAreaSpringConstraints,1> *)&local_38) {
        (this->AreaConstraints).Object = pFVar8;
        local_38 = (FPBDAreaSpringConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AreaConstraints).SharedReferenceCount,&FStack_30);
        FVar9.ReferenceController = FStack_30.ReferenceController;
      }
    }
    else if ((param_4 == (FClothingPatternData *)0x0) || ((param_4->PatternPositions).ArrayNum == 0)
            ) {
      pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this_00,this->ParticleRangeId);
      pTVar7 = ::operator_new(0x150);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_48 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDAreaSpringConstraints *)&DAT_00000010;
        FVar9.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDAreaSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FPBDAreaSpringConstraints::FPBDAreaSpringConstraints
                  ((FPBDAreaSpringConstraints *)(pTVar7 + 1),pFVar6,&param_3->MElements,param_2,
                   param_1,true);
        pFVar8 = (FPBDAreaSpringConstraints *)(pTVar7 + 1);
        if ((pFVar8 == (FPBDAreaSpringConstraints *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FVar9.ReferenceController = pTVar7;
        local_48 = pFVar8;
      }
      FStack_40.ReferenceController = FVar9.ReferenceController;
      if (&this->AreaConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDAreaSpringConstraints,1> *)&local_48) {
        (this->AreaConstraints).Object = pFVar8;
        local_48 = (FPBDAreaSpringConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AreaConstraints).SharedReferenceCount,&FStack_40);
        FVar9.ReferenceController = FStack_40.ReferenceController;
      }
    }
    else {
      pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this_00,this->ParticleRangeId);
      pTVar7 = ::operator_new(0x150);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_58 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDAreaSpringConstraints *)&DAT_00000010;
        FVar9.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDAreaSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FPBDAreaSpringConstraints::FPBDAreaSpringConstraints
                  ((FPBDAreaSpringConstraints *)(pTVar7 + 1),pFVar6,param_3,
                   &param_4->WeldedFaceVertexPatternPositions,param_2,param_1,true);
        pFVar8 = (FPBDAreaSpringConstraints *)(pTVar7 + 1);
        if ((pFVar8 == (FPBDAreaSpringConstraints *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FVar9.ReferenceController = pTVar7;
        local_58 = pFVar8;
      }
      FStack_50.ReferenceController = FVar9.ReferenceController;
      if (&this->AreaConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDAreaSpringConstraints,1> *)&local_58) {
        (this->AreaConstraints).Object = pFVar8;
        local_58 = (FPBDAreaSpringConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AreaConstraints).SharedReferenceCount,&FStack_50);
        FVar9.ReferenceController = FStack_50.ReferenceController;
      }
    }
  }
  else if (this->Evolution == (FEvolution *)0x0) {
    pFVar1 = this->PBDEvolution;
    pTVar7 = ::operator_new(0xb0);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_68 = ___xmm_00000000000000000000000000000010;
      pFVar8 = (FPBDAreaSpringConstraints *)&DAT_00000010;
      FVar9.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFXPBDAreaSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
      ;
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      Softs::FXPBDAreaSpringConstraints::FXPBDAreaSpringConstraints
                ((FXPBDAreaSpringConstraints *)(pTVar7 + 1),&pFVar1->MParticles,this->ParticleOffset
                 ,this->NumParticles,&param_3->MElements,param_2,param_1,true);
      pFVar8 = (FPBDAreaSpringConstraints *)(pTVar7 + 1);
      if ((pFVar8 == (FPBDAreaSpringConstraints *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      FVar9.ReferenceController = pTVar7;
      local_68 = pFVar8;
    }
    FStack_60.ReferenceController = FVar9.ReferenceController;
    if (&this->XAreaConstraints !=
        (TSharedPtr<Chaos::Softs::FXPBDAreaSpringConstraints,1> *)&local_68) {
      (this->XAreaConstraints).Object = (FXPBDAreaSpringConstraints *)pFVar8;
      local_68 = (FPBDAreaSpringConstraints *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->XAreaConstraints).SharedReferenceCount,&FStack_60);
      FVar9.ReferenceController = FStack_60.ReferenceController;
    }
  }
  else {
    pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
    pTVar7 = ::operator_new(0xb0);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_78 = ___xmm_00000000000000000000000000000010;
      pFVar8 = (FPBDAreaSpringConstraints *)&DAT_00000010;
      FStack_70.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFXPBDAreaSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
      ;
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      Softs::FXPBDAreaSpringConstraints::FXPBDAreaSpringConstraints
                ((FXPBDAreaSpringConstraints *)(pTVar7 + 1),pFVar6,&param_3->MElements,param_2,
                 param_1,true);
      pFVar8 = (FPBDAreaSpringConstraints *)(pTVar7 + 1);
      if ((pFVar8 == (FPBDAreaSpringConstraints *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      FStack_70.ReferenceController = pTVar7;
      local_78 = pFVar8;
    }
    FVar9.ReferenceController = FStack_70.ReferenceController;
    if (&this->XAreaConstraints !=
        (TSharedPtr<Chaos::Softs::FXPBDAreaSpringConstraints,1> *)&local_78) {
      (this->XAreaConstraints).Object = (FXPBDAreaSpringConstraints *)pFVar8;
      local_78 = (FPBDAreaSpringConstraints *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->XAreaConstraints).SharedReferenceCount,&FStack_70);
      FVar9.ReferenceController = FStack_70.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  this->NumConstraintInits = this->NumConstraintInits + 1;
  this->NumConstraintRules = this->NumConstraintRules + 1;
  return;
}

// CreateBackstopConstraints @ 14dbc5080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateBackstopConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,float param_3,
          TMap<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
          *param_4)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ECollectionPropertyFlags EVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  FName *pFVar10;
  FClothingAccessoryMeshData *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  ForAnyElementType FVar14;
  FPBDSphericalBackstopConstraint *pFVar15;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar17;
  FCollectionPropertyConstFacade *local_res10;
  TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
  *local_res18;
  FString local_128;
  FString local_118;
  FCollectionPropertyConstFacade *local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FPBDSphericalBackstopConstraint *local_b0;
  FSharedReferencer<1> FStack_a8;
  FCollectionPropertyConstFacade *local_a0;
  FString local_98;
  FString local_88;
  FName local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_res18 = param_2;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,FClothingSimulationConfig::UseLegacyConfigName);
  if (((piVar9 != (int *)0x0) && (*piVar9 != -1)) &&
     (bVar4 = Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                        (param_1,*piVar9,&param_1->LowValueArray), bVar4)) {
    ::FString::FString(&local_118,L"BackstopRadius");
    ::FString::FString(&local_128,L"BackstopDistance");
    FVar14.Data = local_118.Data.AllocatorInstance.Data;
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Data.ArrayNum = local_118.Data.ArrayNum;
    iVar13 = 0;
    if (local_118.Data.ArrayNum == 0) {
      local_100.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                 local_118.Data.ArrayNum,&local_100.Data.ArrayMax);
      memcpy(local_100.Data.AllocatorInstance.Data,FVar14.Data,(longlong)local_118.Data.ArrayNum * 2
            );
    }
    local_res10 = param_1;
    Softs::FCollectionPropertyConstFacade::
    SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
              (param_1,&local_f0,&Softs::FPBDSphericalBackstopConstraint::BackstopRadiusName,
               (<lambda_1> *)&local_res10,&local_100,(int *)0x0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    FVar14.Data = local_128.Data.AllocatorInstance.Data;
    local_118.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
    local_118.Data.ArrayNum = local_f0.Data.ArrayNum;
    local_118.Data.ArrayMax = local_f0.Data.ArrayMax;
    local_f0.Data.ArrayNum = 0;
    local_f0.Data.ArrayMax = 0;
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = local_128.Data.ArrayNum;
    if (local_128.Data.ArrayNum == 0) {
      local_e0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_e0,
                 local_128.Data.ArrayNum,&local_e0.Data.ArrayMax);
      memcpy(local_e0.Data.AllocatorInstance.Data,FVar14.Data,(longlong)local_128.Data.ArrayNum * 2)
      ;
    }
    local_a0 = param_1;
    Softs::FCollectionPropertyConstFacade::
    SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
              (param_1,&local_d0,&Softs::FPBDSphericalBackstopConstraint::BackstopDistanceName,
               (<lambda_1> *)&local_a0,&local_e0,(int *)0x0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    local_128.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
    local_128.Data.ArrayNum = local_d0.Data.ArrayNum;
    local_128.Data.ArrayMax = local_d0.Data.ArrayMax;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar14.Data = local_118.Data.AllocatorInstance.Data;
    }
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    iVar7 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      iVar7 = iVar13;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar14.Data);
    iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,uVar6,&local_118);
    if ((iVar7 == -1) || (lVar1 = *(longlong *)param_2 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
      uStack_68 = (ulonglong)uStack_68._4_4_ << 0x20;
      iVar7 = iVar13;
    }
    else {
      local_70 = *(undefined8 *)(lVar1 + 0x10);
      uStack_68 = *(longlong *)(lVar1 + 0x18);
      iVar7 = *(int *)(lVar1 + 0x18);
    }
    iVar8 = local_128.Data.ArrayNum + -1;
    FVar14.Data = local_128.Data.AllocatorInstance.Data;
    if (local_128.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar14.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar14.Data);
    iVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,uVar6,&local_128);
    if ((iVar8 == -1) || (lVar1 = *(longlong *)param_2 + (longlong)iVar8 * 0x28, lVar1 == 0)) {
      uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
    }
    else {
      local_60 = *(undefined8 *)(lVar1 + 0x10);
      uStack_58 = *(longlong *)(lVar1 + 0x18);
      iVar13 = *(int *)(lVar1 + 0x18);
    }
    if ((iVar7 != this->NumParticles) || (iVar13 != this->NumParticles)) {
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
      return;
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,
                      Softs::FPBDSphericalBackstopConstraint::BackstopRadiusName);
  if (((piVar9 == (int *)0x0) || (*piVar9 == -1)) ||
     (EVar5 = Softs::FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,*piVar9,&param_1->FlagsArray), (EVar5 & Enabled) == None)) {
    piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_1->KeyNameIndices,
                  Softs::FPBDSphericalBackstopConstraint::BackstopRadiusName);
    if (piVar9 == (int *)0x0) {
      return;
    }
    if (*piVar9 == -1) {
      return;
    }
    EVar5 = Softs::FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,*piVar9,&param_1->FlagsArray);
    if ((EVar5 & Animatable) == None) {
      return;
    }
  }
  bVar4 = true;
  pTVar17 = this->AnimationPositions;
  pTVar16 = this->AnimationNormals;
  if (param_4 !=
      (TMap<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
       *)0x0) {
    ::FString::FString(&local_88,L"");
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108 = (FCollectionPropertyConstFacade *)local_88.Data.AllocatorInstance.Data;
    if (local_88.Data.ArrayNum == 0) {
      local_c0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_c0,local_88.Data.ArrayNum,
                 &local_c0.Data.ArrayMax);
      memcpy(local_c0.Data.AllocatorInstance.Data,local_108,(longlong)local_88.Data.ArrayNum * 2);
    }
    local_108 = param_1;
    Softs::FCollectionPropertyConstFacade::
    SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
              (param_1,&local_98,&Softs::FPBDSphericalBackstopConstraint::BackstopMeshNameName,
               (<lambda_1> *)&local_108,&local_c0,(int *)0x0);
    iVar13 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    pFVar10 = ::FName::FName(&local_78,iVar13,(wchar_t *)local_98.Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar2 = *pFVar10;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar11 = TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
              ::Find((TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
                      *)param_4,FVar2);
    if (((pFVar11 != (FClothingAccessoryMeshData *)0x0) &&
        ((pFVar11->InterpolatedAnimationPositions).ArrayNum == this->NumParticles)) &&
       ((pFVar11->InterpolatedAnimationNormals).ArrayNum == this->NumParticles)) {
      pTVar17 = &pFVar11->InterpolatedAnimationPositions;
      bVar4 = false;
      pTVar16 = &pFVar11->InterpolatedAnimationNormals;
    }
  }
  pTVar12 = ::operator_new(0x70);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    local_b0 = ___xmm_00000000000000000000000000000010;
    pFVar15 = (FPBDSphericalBackstopConstraint *)&DAT_00000010;
    FStack_a8.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPBDSphericalBackstopConstraint_Softs_Chaos___00_SharedPointerInternals__6B_
    ;
    Softs::FPBDSphericalBackstopConstraint::FPBDSphericalBackstopConstraint
              ((FPBDSphericalBackstopConstraint *)(pTVar12 + 1),this->ParticleOffset,
               this->NumParticles,pTVar17,pTVar16,local_res18,param_1,param_3,bVar4);
    pFVar15 = (FPBDSphericalBackstopConstraint *)(pTVar12 + 1);
    if ((pFVar15 == (FPBDSphericalBackstopConstraint *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    FStack_a8.ReferenceController = pTVar12;
    local_b0 = pFVar15;
  }
  if (&this->BackstopConstraints !=
      (TSharedPtr<Chaos::Softs::FPBDSphericalBackstopConstraint,1> *)&local_b0) {
    (this->BackstopConstraints).Object = pFVar15;
    local_b0 = (FPBDSphericalBackstopConstraint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackstopConstraints).SharedReferenceCount,&FStack_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  this->NumConstraintRules = this->NumConstraintRules + 1;
  return;
}

// CreateBendingConstraints @ 14dbc5640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateBendingConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,FTriangleMesh *param_3,FClothingPatternData *param_4)

{
  FPBDEvolution *pFVar1;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  int *piVar5;
  FSolverParticlesRange *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TArrayView<unsigned_char_const_,int> *pTVar8;
  FXPBDAnisotropicBendingConstraints *pFVar9;
  FSharedReferencer<1> FVar10;
  FXPBDAnisotropicBendingConstraints *local_108;
  FSharedReferencer<1> FStack_100;
  FXPBDAnisotropicBendingConstraints *local_f8;
  FSharedReferencer<1> FStack_f0;
  FXPBDAnisotropicBendingConstraints *local_e8;
  FSharedReferencer<1> FStack_e0;
  FXPBDAnisotropicBendingConstraints *local_d8;
  FSharedReferencer<1> FStack_d0;
  FXPBDAnisotropicBendingConstraints *local_c8;
  FSharedReferencer<1> FStack_c0;
  FXPBDAnisotropicBendingConstraints *local_b8;
  FSharedReferencer<1> FStack_b0;
  FXPBDAnisotropicBendingConstraints *local_a8;
  FSharedReferencer<1> FStack_a0;
  FXPBDAnisotropicBendingConstraints *local_98;
  FSharedReferencer<1> FStack_90;
  FXPBDAnisotropicBendingConstraints *local_88;
  FSharedReferencer<1> FStack_80;
  FXPBDAnisotropicBendingConstraints *local_78;
  FSharedReferencer<1> FStack_70;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_68;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_58;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_48;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_38;
  
  if ((((param_4 == (FClothingPatternData *)0x0) || ((param_4->PatternPositions).ArrayNum == 0)) ||
      (piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&param_1->KeyNameIndices,
                     Softs::FXPBDAnisotropicBendingConstraints::XPBDAnisoBendingStiffnessWarpName),
      piVar5 == (int *)0x0)) ||
     ((*piVar5 == -1 ||
      (EVar3 = Softs::FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,*piVar5,&param_1->FlagsArray), (EVar3 & Enabled) == None)))) {
    piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_1->KeyNameIndices,
                  Softs::FXPBDBendingConstraints::XPBDBendingElementStiffnessName);
    if ((piVar5 == (int *)0x0) ||
       ((*piVar5 == -1 ||
        (EVar3 = Softs::FCollectionPropertyConstFacade::
                 GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                           (param_1,*piVar5,&param_1->FlagsArray), (EVar3 & Enabled) == None)))) {
      pTVar8 = &param_1->FlagsArray;
      piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&param_1->KeyNameIndices,
                    Softs::FPBDBendingConstraints::BendingElementStiffnessName);
      if ((piVar5 == (int *)0x0) ||
         ((*piVar5 == -1 ||
          (EVar3 = Softs::FCollectionPropertyConstFacade::
                   GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                             (param_1,*piVar5,pTVar8), (EVar3 & Enabled) == None)))) {
        piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&param_1->KeyNameIndices,
                        Softs::FXPBDBendingSpringConstraints::XPBDBendingSpringStiffnessName);
        if ((piVar5 == (int *)0x0) ||
           ((*piVar5 == -1 ||
            (EVar3 = Softs::FCollectionPropertyConstFacade::
                     GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                               (param_1,*piVar5,pTVar8), (EVar3 & Enabled) == None)))) {
          piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&param_1->KeyNameIndices,
                          Softs::FPBDBendingSpringConstraints::BendingSpringStiffnessName);
          if (piVar5 == (int *)0x0) {
            return;
          }
          if (*piVar5 == -1) {
            return;
          }
          EVar3 = Softs::FCollectionPropertyConstFacade::
                  GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                            (param_1,*piVar5,pTVar8);
          if ((EVar3 & Enabled) == None) {
            return;
          }
          FTriangleMesh::GetUniqueAdjacentPoints(param_3,&local_38);
          if (this->Evolution == (FEvolution *)0x0) {
            pFVar1 = this->PBDEvolution;
            pTVar7 = ::operator_new(0xa0);
            if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
              pTVar7 = (TReferenceControllerBase<1> *)0x0;
              local_78 = ___xmm_00000000000000000000000000000010;
              pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
              FVar10.ReferenceController = _UNK_150651568;
            }
            else {
              pTVar7->SharedReferenceCount = (atomic<int>)0x1;
              pTVar7->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFPBDBendingSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
              ;
              pTVar7->WeakReferenceCount = (atomic<int>)0x1;
              Softs::FPBDBendingSpringConstraints::FPBDBendingSpringConstraints
                        ((FPBDBendingSpringConstraints *)(pTVar7 + 1),&pFVar1->MParticles,
                         this->ParticleOffset,this->NumParticles,&local_38,param_2,param_1,true);
              pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
              if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
              FVar10.ReferenceController = pTVar7;
              local_78 = pFVar9;
            }
            FStack_70.ReferenceController = FVar10.ReferenceController;
            if (&this->BendingConstraints !=
                (TSharedPtr<Chaos::Softs::FPBDBendingSpringConstraints,1> *)&local_78) {
              (this->BendingConstraints).Object = (FPBDBendingSpringConstraints *)pFVar9;
              local_78 = (FXPBDAnisotropicBendingConstraints *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->BendingConstraints).SharedReferenceCount,&FStack_70);
              FVar10.ReferenceController = FStack_70.ReferenceController;
            }
          }
          else {
            pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
            pTVar7 = ::operator_new(0xa0);
            if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
              pTVar7 = (TReferenceControllerBase<1> *)0x0;
              local_88 = ___xmm_00000000000000000000000000000010;
              pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
              FStack_80.ReferenceController = _UNK_150651568;
            }
            else {
              pTVar7->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFPBDBendingSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
              ;
              pTVar7->SharedReferenceCount = (atomic<int>)0x1;
              pTVar7->WeakReferenceCount = (atomic<int>)0x1;
              Softs::FPBDBendingSpringConstraints::FPBDBendingSpringConstraints
                        ((FPBDBendingSpringConstraints *)(pTVar7 + 1),pFVar6,&local_38,param_2,
                         param_1,true);
              pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
              if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
              FStack_80.ReferenceController = pTVar7;
              local_88 = pFVar9;
            }
            FVar10.ReferenceController = FStack_80.ReferenceController;
            if (&this->BendingConstraints !=
                (TSharedPtr<Chaos::Softs::FPBDBendingSpringConstraints,1> *)&local_88) {
              (this->BendingConstraints).Object = (FPBDBendingSpringConstraints *)pFVar9;
              local_88 = (FXPBDAnisotropicBendingConstraints *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->BendingConstraints).SharedReferenceCount,&FStack_80);
              FVar10.ReferenceController = FStack_80.ReferenceController;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar10.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          local_68.AllocatorInstance.Data = local_38.AllocatorInstance.Data;
        }
        else {
          FTriangleMesh::GetUniqueAdjacentPoints(param_3,&local_48);
          if (this->Evolution == (FEvolution *)0x0) {
            pFVar1 = this->PBDEvolution;
            pTVar7 = ::operator_new(0xf8);
            if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
              pTVar7 = (TReferenceControllerBase<1> *)0x0;
              local_98 = ___xmm_00000000000000000000000000000010;
              pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
              FStack_90.ReferenceController = _UNK_150651568;
            }
            else {
              pTVar7->SharedReferenceCount = (atomic<int>)0x1;
              pTVar7->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFXPBDBendingSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
              ;
              pTVar7->WeakReferenceCount = (atomic<int>)0x1;
              Softs::FXPBDBendingSpringConstraints::FXPBDBendingSpringConstraints
                        ((FXPBDBendingSpringConstraints *)(pTVar7 + 1),&pFVar1->MParticles,
                         this->ParticleOffset,this->NumParticles,&local_48,param_2,param_1);
              pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
              if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
              FStack_90.ReferenceController = pTVar7;
              local_98 = pFVar9;
            }
            if (&this->XBendingConstraints !=
                (TSharedPtr<Chaos::Softs::FXPBDBendingSpringConstraints,1> *)&local_98) {
              (this->XBendingConstraints).Object = (FXPBDBendingSpringConstraints *)pFVar9;
              local_98 = (FXPBDAnisotropicBendingConstraints *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->XBendingConstraints).SharedReferenceCount,&FStack_90);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_90.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            local_68.AllocatorInstance.Data = local_48.AllocatorInstance.Data;
          }
          else {
            pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
            pTVar7 = ::operator_new(0xf8);
            if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
              pTVar7 = (TReferenceControllerBase<1> *)0x0;
              local_a8 = ___xmm_00000000000000000000000000000010;
              pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
              FStack_a0.ReferenceController = _UNK_150651568;
            }
            else {
              pTVar7->SharedReferenceCount = (atomic<int>)0x1;
              pTVar7->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFXPBDBendingSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
              ;
              pTVar7->WeakReferenceCount = (atomic<int>)0x1;
              Softs::FXPBDBendingSpringConstraints::FXPBDBendingSpringConstraints
                        ((FXPBDBendingSpringConstraints *)(pTVar7 + 1),pFVar6,&local_48,param_2,
                         param_1);
              pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
              if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
              FStack_a0.ReferenceController = pTVar7;
              local_a8 = pFVar9;
            }
            if (&this->XBendingConstraints !=
                (TSharedPtr<Chaos::Softs::FXPBDBendingSpringConstraints,1> *)&local_a8) {
              (this->XBendingConstraints).Object = (FXPBDBendingSpringConstraints *)pFVar9;
              local_a8 = (FXPBDAnisotropicBendingConstraints *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->XBendingConstraints).SharedReferenceCount,&FStack_a0);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_a0.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            this->NumUpdateLinearSystemRules = this->NumUpdateLinearSystemRules + 1;
            local_68.AllocatorInstance.Data = local_48.AllocatorInstance.Data;
          }
        }
      }
      else {
        FTriangleMesh::GetUniqueAdjacentElements(param_3,&local_58);
        if (this->Evolution == (FEvolution *)0x0) {
          pFVar1 = this->PBDEvolution;
          pTVar7 = ::operator_new(0x158);
          if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            local_b8 = ___xmm_00000000000000000000000000000010;
            pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
            FVar10.ReferenceController = _UNK_150651568;
          }
          else {
            pTVar7->SharedReferenceCount = (atomic<int>)0x1;
            pTVar7->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFPBDBendingConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
            ;
            pTVar7->WeakReferenceCount = (atomic<int>)0x1;
            Softs::FPBDBendingConstraints::FPBDBendingConstraints
                      ((FPBDBendingConstraints *)(pTVar7 + 1),&pFVar1->MParticles,
                       this->ParticleOffset,this->NumParticles,&local_58,param_2,param_1,true);
            pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
            if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
            FVar10.ReferenceController = pTVar7;
            local_b8 = pFVar9;
          }
          FStack_b0.ReferenceController = FVar10.ReferenceController;
          if (&this->BendingElementConstraints !=
              (TSharedPtr<Chaos::Softs::FPBDBendingConstraints,1> *)&local_b8) {
            (this->BendingElementConstraints).Object = (FPBDBendingConstraints *)pFVar9;
            local_b8 = (FXPBDAnisotropicBendingConstraints *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->BendingElementConstraints).SharedReferenceCount,&FStack_b0);
            FVar10.ReferenceController = FStack_b0.ReferenceController;
          }
        }
        else {
          pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
          pTVar7 = ::operator_new(0x158);
          if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            local_c8 = ___xmm_00000000000000000000000000000010;
            pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
            FStack_c0.ReferenceController = _UNK_150651568;
          }
          else {
            pTVar7->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFPBDBendingConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
            ;
            pTVar7->SharedReferenceCount = (atomic<int>)0x1;
            pTVar7->WeakReferenceCount = (atomic<int>)0x1;
            Softs::FPBDBendingConstraints::FPBDBendingConstraints
                      ((FPBDBendingConstraints *)(pTVar7 + 1),pFVar6,&local_58,param_2,param_1,true)
            ;
            pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
            if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
            FStack_c0.ReferenceController = pTVar7;
            local_c8 = pFVar9;
          }
          FVar10.ReferenceController = FStack_c0.ReferenceController;
          if (&this->BendingElementConstraints !=
              (TSharedPtr<Chaos::Softs::FPBDBendingConstraints,1> *)&local_c8) {
            (this->BendingElementConstraints).Object = (FPBDBendingConstraints *)pFVar9;
            local_c8 = (FXPBDAnisotropicBendingConstraints *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->BendingElementConstraints).SharedReferenceCount,&FStack_c0);
            FVar10.ReferenceController = FStack_c0.ReferenceController;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        local_68.AllocatorInstance.Data = local_58.AllocatorInstance.Data;
      }
    }
    else {
      FTriangleMesh::GetUniqueAdjacentElements(param_3,&local_68);
      if (this->Evolution == (FEvolution *)0x0) {
        pFVar1 = this->PBDEvolution;
        pTVar7 = ::operator_new(0x290);
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          local_d8 = ___xmm_00000000000000000000000000000010;
          pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
          FVar10.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar7->SharedReferenceCount = (atomic<int>)0x1;
          pTVar7->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFXPBDBendingConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
          ;
          pTVar7->WeakReferenceCount = (atomic<int>)0x1;
          Softs::FXPBDBendingConstraints::FXPBDBendingConstraints
                    ((FXPBDBendingConstraints *)(pTVar7 + 1),&pFVar1->MParticles,
                     this->ParticleOffset,this->NumParticles,&local_68,param_2,param_1);
          pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
          if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
          FVar10.ReferenceController = pTVar7;
          local_d8 = pFVar9;
        }
        FStack_d0.ReferenceController = FVar10.ReferenceController;
        if (&this->XBendingElementConstraints !=
            (TSharedPtr<Chaos::Softs::FXPBDBendingConstraints,1> *)&local_d8) {
          (this->XBendingElementConstraints).Object = (FXPBDBendingConstraints *)pFVar9;
          local_d8 = (FXPBDAnisotropicBendingConstraints *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->XBendingElementConstraints).SharedReferenceCount,&FStack_d0);
          FVar10.ReferenceController = FStack_d0.ReferenceController;
        }
      }
      else {
        pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
        pTVar7 = ::operator_new(0x290);
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          local_e8 = ___xmm_00000000000000000000000000000010;
          pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
          FStack_e0.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar7->SharedReferenceCount = (atomic<int>)0x1;
          pTVar7->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFXPBDBendingConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
          ;
          pTVar7->WeakReferenceCount = (atomic<int>)0x1;
          Softs::FXPBDBendingConstraints::FXPBDBendingConstraints
                    ((FXPBDBendingConstraints *)(pTVar7 + 1),pFVar6,&local_68,param_2,param_1);
          pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
          if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
          FStack_e0.ReferenceController = pTVar7;
          local_e8 = pFVar9;
        }
        FVar10.ReferenceController = FStack_e0.ReferenceController;
        if (&this->XBendingElementConstraints !=
            (TSharedPtr<Chaos::Softs::FXPBDBendingConstraints,1> *)&local_e8) {
          (this->XBendingElementConstraints).Object = (FXPBDBendingConstraints *)pFVar9;
          local_e8 = (FXPBDAnisotropicBendingConstraints *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->XBendingElementConstraints).SharedReferenceCount,&FStack_e0);
          FVar10.ReferenceController = FStack_e0.ReferenceController;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
    this->NumConstraintInits = this->NumConstraintInits + 1;
    this->NumConstraintRules = this->NumConstraintRules + 1;
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  else {
    if (this->Evolution == (FEvolution *)0x0) {
      pFVar1 = this->PBDEvolution;
      pTVar7 = ::operator_new(0x370);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_f8 = ___xmm_00000000000000000000000000000010;
        pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
        FVar10.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFXPBDAnisotropicBendingConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FXPBDAnisotropicBendingConstraints::FXPBDAnisotropicBendingConstraints
                  ((FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1),&pFVar1->MParticles,
                   this->ParticleOffset,this->NumParticles,param_3,
                   &param_4->WeldedFaceVertexPatternPositions,param_2,param_1);
        pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
        if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FVar10.ReferenceController = pTVar7;
        local_f8 = pFVar9;
      }
      FStack_f0.ReferenceController = FVar10.ReferenceController;
      if (&this->XAnisoBendingElementConstraints !=
          (TSharedPtr<Chaos::Softs::FXPBDAnisotropicBendingConstraints,1> *)&local_f8) {
        (this->XAnisoBendingElementConstraints).Object = pFVar9;
        local_f8 = (FXPBDAnisotropicBendingConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->XAnisoBendingElementConstraints).SharedReferenceCount,&FStack_f0);
        FVar10.ReferenceController = FStack_f0.ReferenceController;
      }
    }
    else {
      pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
      pTVar7 = ::operator_new(0x370);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_108 = ___xmm_00000000000000000000000000000010;
        pFVar9 = (FXPBDAnisotropicBendingConstraints *)&DAT_00000010;
        FStack_100.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFXPBDAnisotropicBendingConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FXPBDAnisotropicBendingConstraints::FXPBDAnisotropicBendingConstraints
                  ((FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1),pFVar6,param_3,
                   &param_4->WeldedFaceVertexPatternPositions,param_2,param_1);
        pFVar9 = (FXPBDAnisotropicBendingConstraints *)(pTVar7 + 1);
        if ((pFVar9 == (FXPBDAnisotropicBendingConstraints *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FStack_100.ReferenceController = pTVar7;
        local_108 = pFVar9;
      }
      FVar10.ReferenceController = FStack_100.ReferenceController;
      if (&this->XAnisoBendingElementConstraints !=
          (TSharedPtr<Chaos::Softs::FXPBDAnisotropicBendingConstraints,1> *)&local_108) {
        (this->XAnisoBendingElementConstraints).Object = pFVar9;
        local_108 = (FXPBDAnisotropicBendingConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->XAnisoBendingElementConstraints).SharedReferenceCount,&FStack_100);
        FVar10.ReferenceController = FStack_100.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    this->NumConstraintInits = this->NumConstraintInits + 1;
    this->NumConstraintRules = this->NumConstraintRules + 1;
  }
  return;
}

// CreateClothClothConstraints @ 14dbc6240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateClothClothConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_2)

{
  TSharedPtr<Chaos::Softs::FXPBDVertexConstraints,1> *pTVar1;
  TSharedPtr<Chaos::Softs::FXPBDVertexFaceConstraints,1> *pTVar2;
  TSharedPtr<Chaos::Softs::FPBDVertexFaceRepulsionConstraints,1> *pTVar3;
  TSharedPtr<Chaos::Softs::FXPBDFaceConstraints,1> *pTVar4;
  undefined8 uVar5;
  code *pcVar6;
  FXPBDFaceConstraints *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong lVar9;
  bool bVar10;
  ECollectionPropertyFlags EVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  int *piVar15;
  FSolverParticlesRange *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  wchar_t *pwVar18;
  FSharedReferencer<1> FVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  int iVar23;
  FXPBDFaceConstraints *pFVar24;
  int iStackX_1c;
  FName local_res20;
  FXPBDFaceConstraints *local_6e8;
  FSharedReferencer<1> FStack_6e0;
  FXPBDFaceConstraints *local_6d8;
  FSharedReferencer<1> FStack_6d0;
  FXPBDFaceConstraints *local_6c8;
  FSharedReferencer<1> FStack_6c0;
  FXPBDFaceConstraints *local_6b8;
  FSharedReferencer<1> FStack_6b0;
  FEmbeddedSpringConstraintFacade local_6a8;
  FEmbeddedSpringBaseFacade local_378;
  
  if (param_2->Object == (FManagedArrayCollection *)0x0) {
    return;
  }
  pFVar14 = ::FName::FName(&local_res20,L"SimVertices3D");
  if ((param_2->Object == (FManagedArrayCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  Softs::FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade(&local_378,param_2->Object,pFVar14);
  pTVar8 = _UNK_150651568;
  pFVar7 = ___xmm_00000000000000000000000000000010;
  iVar23 = 0;
LAB_14dbc62f0:
  if (local_378.ConstraintStartAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) {
    iVar12 = FManagedArrayCollection::NumElements
                       (local_378.ConstraintStartAttribute.ConstCollection,
                        local_378.ConstraintStartAttribute.Group);
  }
  else {
    iVar12 = (**(code **)(*(longlong *)local_378.ConstraintStartAttribute.ConstAttributeArray + 0x60
                         ))();
  }
  if (iVar12 <= iVar23) {
    return;
  }
  Softs::FEmbeddedSpringFacade::GetSpringConstraintConst
            ((FEmbeddedSpringFacade *)&local_378,&local_6a8,iVar23);
  bVar10 = Softs::FEmbeddedSpringBaseFacade::IsValid((FEmbeddedSpringBaseFacade *)&local_6a8);
  iVar12 = local_6a8.ConstraintIndex;
  if (!bVar10) goto LAB_14dbc6af4;
  lVar20 = (longlong)local_6a8.ConstraintIndex;
  if ((local_6a8._padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x60,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar9 = local_6a8._padding_;
  uVar13 = 0;
  if (iVar12 < *(int *)(local_6a8._padding_ + 0x18)) {
    uVar13 = (uint)~iVar12 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar12 = local_6a8.ConstraintIndex;
  lVar21 = (longlong)local_6a8.ConstraintIndex;
  uVar5 = *(undefined8 *)(*(longlong *)(lVar9 + 0x10) + lVar20 * 8);
  if ((local_6a8._padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x60,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar20 = local_6a8._padding_;
  uVar13 = 0;
  if (iVar12 < *(int *)(local_6a8._padding_ + 0x18)) {
    uVar13 = (uint)~iVar12 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStackX_1c = (int)((ulonglong)uVar5 >> 0x20);
  puVar22 = (undefined8 *)(lVar21 * 0x10 + *(longlong *)(lVar20 + 0x10));
  iVar12 = (int)uVar5;
  FVar19.ReferenceController = pTVar8;
  if (iVar12 == 1) {
    if (iStackX_1c == 1) {
      if (*(int *)(puVar22 + 1) == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)*puVar22;
      }
      iVar12 = FGenericPlatformStricmp::Stricmp(pwVar18,L"VertexSpringConstraint");
      if ((((iVar12 != 0) ||
           (piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              *)&param_1->KeyNameIndices,
                             Softs::FXPBDVertexConstraints::VertexSpringExtensionStiffnessName),
           piVar15 == (int *)0x0)) || (*piVar15 == -1)) ||
         (EVar11 = Softs::FCollectionPropertyConstFacade::
                   GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                             (param_1,*piVar15,&param_1->FlagsArray), (EVar11 & Enabled) == None))
      goto LAB_14dbc6af4;
      pTVar1 = &this->ClothVertexSpringConstraints;
      if (pTVar1->Object == (FXPBDVertexConstraints *)0x0) {
        pFVar16 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
        pTVar17 = ::operator_new(0x128);
        if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
          pFVar24 = (FXPBDFaceConstraints *)&DAT_00000010;
          local_6e8 = pFVar7;
          FStack_6e0.ReferenceController = pTVar8;
        }
        else {
          pTVar17->SharedReferenceCount = (atomic<int>)0x1;
          pTVar17->WeakReferenceCount = (atomic<int>)0x1;
          pTVar17->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFXPBDVertexConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
          ;
          Softs::FXPBDVertexConstraints::FXPBDVertexConstraints
                    ((FXPBDVertexConstraints *)(pTVar17 + 1),pFVar16,param_1,&local_6a8);
          pFVar24 = (FXPBDFaceConstraints *)(pTVar17 + 1);
          if ((pFVar24 == (FXPBDFaceConstraints *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
          FStack_6e0.ReferenceController = pTVar17;
          local_6e8 = pFVar24;
        }
        FVar19.ReferenceController = FStack_6e0.ReferenceController;
        if (pTVar1 != (TSharedPtr<Chaos::Softs::FXPBDVertexConstraints,1> *)&local_6e8) {
          pTVar1->Object = (FXPBDVertexConstraints *)pFVar24;
          local_6e8 = (FXPBDFaceConstraints *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ClothVertexSpringConstraints).SharedReferenceCount,&FStack_6e0);
          FVar19.ReferenceController = FStack_6e0.ReferenceController;
        }
        goto LAB_14dbc6ad2;
      }
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6160540479080364417>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                          ,0x67f,"!ClothVertexSpringConstraints");
      if (bVar10) goto code_r0x00014dbc69eb;
      iVar23 = iVar23 + 1;
      goto LAB_14dbc62f0;
    }
    if (iStackX_1c != 3) goto LAB_14dbc693f;
    if (*(int *)(puVar22 + 1) == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)*puVar22;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar18,L"VertexFaceSpringConstraint");
    if (iVar12 == 0) {
      piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&param_1->KeyNameIndices,
                     Softs::FXPBDVertexFaceConstraints::VertexFaceSpringExtensionStiffnessName);
      if (((piVar15 == (int *)0x0) || (*piVar15 == -1)) ||
         (EVar11 = Softs::FCollectionPropertyConstFacade::
                   GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                             (param_1,*piVar15,&param_1->FlagsArray), (EVar11 & Enabled) == None))
      goto LAB_14dbc6af4;
      pTVar2 = &this->ClothVertexFaceSpringConstraints;
      if (pTVar2->Object == (FXPBDVertexFaceConstraints *)0x0) {
        pFVar16 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
        pTVar17 = ::operator_new(0x128);
        if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
          pFVar24 = (FXPBDFaceConstraints *)&DAT_00000010;
          local_6d8 = pFVar7;
        }
        else {
          pTVar17->SharedReferenceCount = (atomic<int>)0x1;
          pTVar17->WeakReferenceCount = (atomic<int>)0x1;
          pTVar17->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFXPBDVertexFaceConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
          ;
          Softs::FXPBDVertexFaceConstraints::FXPBDVertexFaceConstraints
                    ((FXPBDVertexFaceConstraints *)(pTVar17 + 1),pFVar16,param_1,&local_6a8);
          pFVar24 = (FXPBDFaceConstraints *)(pTVar17 + 1);
          if ((pFVar24 == (FXPBDFaceConstraints *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
          FVar19.ReferenceController = pTVar17;
          local_6d8 = pFVar24;
        }
        FStack_6d0.ReferenceController = FVar19.ReferenceController;
        if (pTVar2 != (TSharedPtr<Chaos::Softs::FXPBDVertexFaceConstraints,1> *)&local_6d8) {
          pTVar2->Object = (FXPBDVertexFaceConstraints *)pFVar24;
          local_6d8 = (FXPBDFaceConstraints *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ClothVertexFaceSpringConstraints).SharedReferenceCount,&FStack_6d0);
          FVar19.ReferenceController = FStack_6d0.ReferenceController;
        }
        goto LAB_14dbc6ad2;
      }
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6160540479080364397>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                          ,0x693,"!ClothVertexFaceSpringConstraints");
      if (bVar10) goto code_r0x00014dbc69eb;
      iVar23 = iVar23 + 1;
      goto LAB_14dbc62f0;
    }
    if (*(int *)(puVar22 + 1) == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)*puVar22;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar18,L"VertexFaceRepulsionConstraint");
    if (((iVar12 == 0) &&
        (piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&param_1->KeyNameIndices,
                          Softs::FPBDVertexFaceRepulsionConstraints::
                          VertexFaceRepulsionStiffnessName), piVar15 != (int *)0x0)) &&
       ((*piVar15 != -1 &&
        (EVar11 = Softs::FCollectionPropertyConstFacade::
                  GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                            (param_1,*piVar15,&param_1->FlagsArray), (EVar11 & Enabled) != None))))
    {
      pTVar3 = &this->RepulsionConstraints;
      if (pTVar3->Object == (FPBDVertexFaceRepulsionConstraints *)0x0) {
        pFVar16 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
        pTVar17 = ::operator_new(0x60);
        if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
          pFVar24 = (FXPBDFaceConstraints *)&DAT_00000010;
          local_6c8 = pFVar7;
          FStack_6c0.ReferenceController = pTVar8;
        }
        else {
          pTVar17->SharedReferenceCount = (atomic<int>)0x1;
          pTVar17->WeakReferenceCount = (atomic<int>)0x1;
          pTVar17->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFPBDVertexFaceRepulsionConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
          ;
          Softs::FPBDVertexFaceRepulsionConstraints::FPBDVertexFaceRepulsionConstraints
                    ((FPBDVertexFaceRepulsionConstraints *)(pTVar17 + 1),pFVar16,param_1,&local_6a8)
          ;
          pFVar24 = (FXPBDFaceConstraints *)(pTVar17 + 1);
          if ((pFVar24 == (FXPBDFaceConstraints *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
          FStack_6c0.ReferenceController = pTVar17;
          local_6c8 = pFVar24;
        }
        if (pTVar3 != (TSharedPtr<Chaos::Softs::FPBDVertexFaceRepulsionConstraints,1> *)&local_6c8)
        {
          pTVar3->Object = (FPBDVertexFaceRepulsionConstraints *)pFVar24;
          local_6c8 = (FXPBDFaceConstraints *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->RepulsionConstraints).SharedReferenceCount,&FStack_6c0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_6c0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        this->NumPostCollisionConstraintRules = this->NumPostCollisionConstraintRules + 1;
        iVar23 = iVar23 + 1;
      }
      else {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6160540479080364380>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                            ,0x6a4,"!RepulsionConstraints");
        if (bVar10) goto code_r0x00014dbc69eb;
        iVar23 = iVar23 + 1;
      }
      goto LAB_14dbc62f0;
    }
  }
  else {
LAB_14dbc693f:
    if ((iVar12 == 3) && (iStackX_1c == 3)) {
      if (*(int *)(puVar22 + 1) == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)*puVar22;
      }
      iVar12 = FGenericPlatformStricmp::Stricmp(pwVar18,L"FaceSpringConstraint");
      if ((((iVar12 == 0) &&
           (piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              *)&param_1->KeyNameIndices,
                             Softs::FXPBDFaceConstraints::FaceSpringExtensionStiffnessName),
           piVar15 != (int *)0x0)) && (*piVar15 != -1)) &&
         (EVar11 = Softs::FCollectionPropertyConstFacade::
                   GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                             (param_1,*piVar15,&param_1->FlagsArray), (EVar11 & Enabled) != None)) {
        pTVar4 = &this->ClothFaceSpringConstraints;
        if (pTVar4->Object == (FXPBDFaceConstraints *)0x0) {
          pFVar16 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
          pTVar17 = ::operator_new(0x128);
          if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
            pTVar17 = (TReferenceControllerBase<1> *)0x0;
            pFVar24 = (FXPBDFaceConstraints *)&DAT_00000010;
            local_6b8 = pFVar7;
          }
          else {
            pTVar17->SharedReferenceCount = (atomic<int>)0x1;
            pTVar17->WeakReferenceCount = (atomic<int>)0x1;
            pTVar17->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFXPBDFaceConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
            ;
            Softs::FXPBDFaceConstraints::FXPBDFaceConstraints
                      ((FXPBDFaceConstraints *)(pTVar17 + 1),pFVar16,param_1,&local_6a8);
            pFVar24 = (FXPBDFaceConstraints *)(pTVar17 + 1);
            if ((pFVar24 == (FXPBDFaceConstraints *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            LOCK();
            pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
            UNLOCK();
            FVar19.ReferenceController = pTVar17;
            local_6b8 = pFVar24;
          }
          FStack_6b0.ReferenceController = FVar19.ReferenceController;
          if (pTVar4 != (TSharedPtr<Chaos::Softs::FXPBDFaceConstraints,1> *)&local_6b8) {
            pTVar4->Object = pFVar24;
            local_6b8 = (FXPBDFaceConstraints *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->ClothFaceSpringConstraints).SharedReferenceCount,&FStack_6b0);
            FVar19.ReferenceController = FStack_6b0.ReferenceController;
          }
LAB_14dbc6ad2:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar19.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
          this->NumConstraintInits = this->NumConstraintInits + 1;
          this->NumConstraintRules = this->NumConstraintRules + 1;
        }
        else {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_6160540479080364362>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                              ,0x6b6,"!ClothFaceSpringConstraints");
          if (bVar10) {
code_r0x00014dbc69eb:
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
    }
  }
LAB_14dbc6af4:
  iVar23 = iVar23 + 1;
  goto LAB_14dbc62f0;
}

// CreateCollisionConstraint @ 14dbc6be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateCollisionConstraint
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,float param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,TArray<Chaos::FClothComplexColliders_const_*,TSizedDefaultAllocator<32>_>
                   *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  FPBDSkinnedTriangleMeshCollisionConstraints *pFVar6;
  longlong lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  FPBDSkinnedTriangleMeshCollisions *pFVar18;
  FPBDSoftBodyCollisionConstraint *pFVar19;
  uint uVar20;
  FPBDSkinnedTriangleMeshCollisions *pFVar21;
  FPBDSoftBodyCollisionConstraint *pFVar22;
  TSharedPtr<Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints,1> *pTVar23;
  uint uVar24;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [3];
  uint local_1d4;
  longlong local_1c8;
  FPBDSoftBodyCollisionConstraint *local_1c0;
  FSharedReferencer<1> FStack_1b8;
  FPBDSoftBodyCollisionConstraint *local_1b0;
  FSharedReferencer<1> FStack_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  TSharedPtr<Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints,1> *local_190;
  FPBDSkinnedTriangleMeshCollisions *local_188;
  TPairInitializer<Chaos::Softs::FParticleRangeIndex_const_&,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions_&&>
  local_180;
  FClothConstraints *local_170;
  int local_168 [2];
  FPBDFlatWeightMap *local_160;
  FPBDFlatWeightMap *local_158;
  undefined4 local_150;
  float local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  void *pvStack_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  undefined4 *local_c8;
  int *local_c0;
  undefined1 local_b8 [64];
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if (this->Evolution != (FEvolution *)0x0) {
    local_170 = this;
    if ((this->LastSubframeCollisionTransformsCCD ==
         (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("LastSubframeCollisionTransformsCCD",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                            ,0x5e7,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_b8._0_8_ = 0;
    local_b8._8_8_ = 0;
    local_b8._32_8_ = 0;
    pFVar17 = (param_4->AllocatorInstance).Data;
    iVar3 = param_4->ArrayNum;
    local_b8._40_4_ = 0;
    local_b8._44_4_ = 0x80;
    local_b8._48_4_ = 0xffffffff;
    pFVar2 = pFVar17 + (longlong)iVar3 * 8;
    local_b8._52_4_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    while( true ) {
      if (param_4->ArrayNum != iVar3) {
        local_1d8 = 0;
        `TCheckedPointerIterator<Chaos::FClothComplexColliders_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_1d8);
      }
      if (pFVar17 == pFVar2) break;
      if (*(FClothComplexColliders **)pFVar17 != (FClothComplexColliders *)0x0) {
        FClothComplexColliders::ExtractComplexColliderBoneData
                  (*(FClothComplexColliders **)pFVar17,
                   (TMap<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
                    *)local_b8);
      }
      pFVar17 = pFVar17 + 8;
    }
    pTVar4 = this->LastSubframeCollisionTransformsCCD;
    pTVar15 = ::operator_new(0x1b8);
    pFVar19 = (FPBDSoftBodyCollisionConstraint *)&DAT_00000010;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      local_1c0 = ___xmm_00000000000000000000000000000010;
      pFVar22 = (FPBDSoftBodyCollisionConstraint *)&DAT_00000010;
      FStack_1b8.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar15->SharedReferenceCount = (atomic<int>)0x1;
      pTVar15->WeakReferenceCount = (atomic<int>)0x1;
      pTVar15->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPBDSoftBodyCollisionConstraint_Softs_Chaos___00_SharedPointerInternals__6B_
      ;
      Softs::FPBDSoftBodyCollisionConstraint::FPBDSoftBodyCollisionConstraint
                ((FPBDSoftBodyCollisionConstraint *)(pTVar15 + 1),pTVar4,param_1,param_2,
                 this->CollisionParticleCollided,this->CollisionContacts,this->CollisionNormals,
                 this->CollisionPhis,
                 (TMap<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
                  *)local_b8);
      pFVar22 = (FPBDSoftBodyCollisionConstraint *)(pTVar15 + 1);
      if ((pFVar22 == (FPBDSoftBodyCollisionConstraint *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      FStack_1b8.ReferenceController = pTVar15;
      local_1c0 = pFVar22;
    }
    if (&this->CollisionConstraint !=
        (TSharedPtr<Chaos::Softs::FPBDSoftBodyCollisionConstraint,1> *)&local_1c0) {
      (this->CollisionConstraint).Object = pFVar22;
      local_1c0 = (FPBDSoftBodyCollisionConstraint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CollisionConstraint).SharedReferenceCount,&FStack_1b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_1b8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    this->NumCollisionConstraintRules = this->NumCollisionConstraintRules + 1;
    this->NumUpdateLinearSystemCollisionsRules = this->NumUpdateLinearSystemCollisionsRules + 1;
    pTVar15 = ::operator_new(0xe8);
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      local_1b0 = ___xmm_00000000000000000000000000000010;
      FStack_1a8.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar15->SharedReferenceCount = (atomic<int>)0x1;
      pTVar15->WeakReferenceCount = (atomic<int>)0x1;
      pTVar15->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPBDSkinnedTriangleMeshCollisionConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
      ;
      Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
      FPBDSkinnedTriangleMeshCollisionConstraints
                ((FPBDSkinnedTriangleMeshCollisionConstraints *)(pTVar15 + 1),this->NumParticles,
                 param_3,param_1);
      pFVar19 = (FPBDSoftBodyCollisionConstraint *)(pTVar15 + 1);
      if ((pFVar19 == (FPBDSoftBodyCollisionConstraint *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      FStack_1a8.ReferenceController = pTVar15;
      local_1b0 = pFVar19;
    }
    pTVar23 = &this->SkinnedTriangleCollisionsConstraint;
    local_190 = pTVar23;
    if (pTVar23 !=
        (TSharedPtr<Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints,1> *)&local_1b0) {
      pTVar23->Object = (FPBDSkinnedTriangleMeshCollisionConstraints *)pFVar19;
      local_1b0 = (FPBDSoftBodyCollisionConstraint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SkinnedTriangleCollisionsConstraint).SharedReferenceCount,&FStack_1a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_1a8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar10 = __real_38d1b717;
    local_1d4 = param_4->ArrayNum;
    uVar16 = (ulonglong)(int)local_1d4;
    pFVar18 = (FPBDSkinnedTriangleMeshCollisions *)(param_4->AllocatorInstance).Data;
    pFVar21 = (FPBDSkinnedTriangleMeshCollisions *)(&pFVar18->_padding_ + uVar16);
    local_180.Value = pFVar21;
    while( true ) {
      uVar24 = 0;
      local_188 = pFVar18;
      if (param_4->ArrayNum != (int)uVar16) {
        local_1d7[0] = 0;
        `TCheckedPointerIterator<Chaos::FClothComplexColliders_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_1d7);
      }
      if (pFVar18 == pFVar21) break;
      lVar5 = pFVar18->_padding_;
      if ((lVar5 != 0) && (local_198 = (longlong)*(int *)(lVar5 + 0x118), 0 < local_198)) {
        local_1c8 = 0;
        do {
          lVar12 = local_1c8;
          if ((pTVar23->Object == (FPBDSkinnedTriangleMeshCollisionConstraints *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar6 = pTVar23->Object;
          uVar20 = ~uVar24 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar24 < *(int *)(lVar5 + 0x118)) {
            uVar14 = uVar20;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar7 = *(longlong *)(lVar5 + 0x110);
          uVar14 = 0;
          if ((int)uVar24 < *(int *)(lVar5 + 0x118)) {
            uVar14 = uVar20;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar8 = *(undefined8 **)(*(longlong *)(lVar5 + 0x110) + 0x18 + lVar12);
          if (puVar8 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
            UNLOCK();
          }
          uVar14 = 0;
          if ((int)uVar24 < *(int *)(lVar5 + 0x118)) {
            uVar14 = uVar20;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_160 = &pFVar6->ClothCollisionThickness;
          local_150 = 0x3f800000;
          local_148 = 0;
          uStack_140 = 0;
          local_19c = *(undefined4 *)(local_1c8 + *(longlong *)(lVar5 + 0x110));
          local_1a0 = *(undefined4 *)(lVar5 + 8);
          local_158 = &pFVar6->FrictionCoefficient;
          local_14c = pFVar6->CollisionThickness;
          local_168[0] = pFVar6->NumParticles;
          local_110 = 0;
          pvStack_108 = (void *)0x0;
          local_138 = 0;
          local_130 = 0;
          local_128 = 0;
          local_120 = 0;
          local_118 = 0;
          local_100 = 0;
          local_f8 = (void *)0x0;
          local_f0 = 0;
          local_e8 = (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                      *)0x0;
          local_e0 = 0;
          if ((((0 < (pFVar6->ClothCollisionThickness).MapView.MapValues.ArrayNum) &&
               (fVar10 < (float)(*(uint *)&(pFVar6->ClothCollisionThickness).MapView.OffsetRange.
                                           field_0x4 & uVar11))) &&
              ((pFVar6->ClothCollisionThickness).MapView.MapValues.ArrayNum != local_168[0])) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Thickness.HasWeightMap() || Thickness.Num() == NumParticles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                                  ,0x1f,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (((0 < (local_158->MapView).MapValues.ArrayNum) &&
              (fVar10 < (float)(*(uint *)&(local_158->MapView).OffsetRange.field_0x4 & uVar11))) &&
             (((local_158->MapView).MapValues.ArrayNum != local_168[0] &&
              (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!FrictionCoefficient.HasWeightMap() || FrictionCoefficient.Num() == NumParticles"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDKinematicTriangleMeshCollisions.h"
                                   ,0x20,L""), bVar13)))) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (puVar8 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
            UNLOCK();
          }
          local_c8 = &local_1a0;
          local_c0 = local_168;
          local_d8 = puVar8;
          local_d0 = lVar7 + (longlong)(int)uVar24 * 0x88 + 0x78;
          TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<Chaos::Softs::FParticleRangeIndex_const_&,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions_&&>_>
                    ((TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
                      *)&pFVar6->Collisions,&local_180,(bool *)&local_c8);
          if (local_d8 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_d8 + 1);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (*(int *)((longlong)local_d8 + 0xc) == 0)) {
              (**(code **)*local_d8)(local_d8,1);
            }
          }
          DestructItems<TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,int>
                    (local_e8,(int)local_e0);
          if (local_e8 !=
              (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)0x0)
          {
            FMemory::Free(local_e8);
          }
          if (local_f8 != (void *)0x0) {
            FMemory::Free(local_f8);
          }
          if (pvStack_108 != (void *)0x0) {
            FMemory::Free(pvStack_108);
          }
          if (puVar8 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar8 + 1);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (*(int *)((longlong)puVar8 + 0xc) == 0)) {
              (**(code **)*puVar8)(puVar8,1);
            }
          }
          uVar24 = uVar24 + 1;
          local_1c8 = local_1c8 + 0x88;
          local_198 = local_198 + -1;
          pTVar23 = local_190;
        } while (local_198 != 0);
        local_198 = 0;
        pFVar18 = local_188;
        pFVar21 = local_180.Value;
      }
      pFVar18 = (FPBDSkinnedTriangleMeshCollisions *)&pFVar18->_padding_;
      uVar16 = (ulonglong)local_1d4;
    }
    local_170->NumConstraintInits = local_170->NumConstraintInits + 1;
    local_170->NumPostCollisionConstraintRules = local_170->NumPostCollisionConstraintRules + 1;
    local_70 = 0;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    TSparseArray<TSparseSetElement<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
  }
  return;
}

// CreateExternalForces @ 14dbc9c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateExternalForces
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FSolverParticlesRange *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FExternalForces *pFVar6;
  FExternalForces *local_28;
  FSharedReferencer<1> FStack_20;
  
  if (this->Evolution != (FEvolution *)0x0) {
    if (this->Normals == (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Normals",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x5d1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar1 = this->Normals;
    pFVar4 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
    pTVar5 = ::operator_new(200);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      local_28 = ___xmm_00000000000000000000000000000010;
      pFVar6 = (FExternalForces *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFExternalForces_Softs_Chaos___00_SharedPointerInternals__6B_
      ;
      Softs::FExternalForces::FExternalForces
                ((FExternalForces *)(pTVar5 + 1),pFVar4,pTVar1,param_2,param_1);
      pFVar6 = (FExternalForces *)(pTVar5 + 1);
      if (pFVar6 == (FExternalForces *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      FStack_20.ReferenceController = pTVar5;
      local_28 = pFVar6;
    }
    if (&this->ExternalForces != (TSharedPtr<Chaos::Softs::FExternalForces,1> *)&local_28) {
      (this->ExternalForces).Object = pFVar6;
      local_28 = (FExternalForces *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ExternalForces).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    this->NumExternalForceRules = this->NumExternalForceRules + 1;
    this->NumUpdateLinearSystemRules = this->NumUpdateLinearSystemRules + 1;
  }
  return;
}

// CreateExtremeDeformationConstraints @ 14dbc9e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateExtremeDeformationConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                   *param_3,FTriangleMesh *param_4,FClothingPatternData *param_5)

{
  FPBDEvolution *pFVar1;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  int *piVar5;
  FSolverParticlesRange *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPBDExtremeDeformationConstraints *pFVar8;
  FSharedReferencer<1> FVar9;
  FPBDExtremeDeformationConstraints *local_48;
  FSharedReferencer<1> FStack_40;
  FPBDExtremeDeformationConstraints *local_38;
  FSharedReferencer<1> FStack_30;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_28;
  
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,
                      Softs::FPBDExtremeDeformationConstraints::
                      ExtremeDeformationVertexSelectionName);
  if (((((piVar5 != (int *)0x0) && (*piVar5 != -1)) &&
       (EVar3 = Softs::FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,*piVar5,&param_1->FlagsArray), (EVar3 & Enabled) != None)) &&
      ((piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&param_1->KeyNameIndices,
                        Softs::FPBDExtremeDeformationConstraints::
                        ExtremeDeformationEdgeRatioThresholdName), piVar5 != (int *)0x0 &&
       (*piVar5 != -1)))) &&
     (EVar3 = Softs::FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,*piVar5,&param_1->FlagsArray), (EVar3 & Enabled) != None)) {
    FTriangleMesh::GetUniqueAdjacentPoints(param_4,&local_28);
    if (this->Evolution == (FEvolution *)0x0) {
      pFVar1 = this->PBDEvolution;
      pTVar7 = ::operator_new(0x58);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_38 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDExtremeDeformationConstraints *)&DAT_00000010;
        FVar9.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDExtremeDeformationConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FPBDExtremeDeformationConstraints::FPBDExtremeDeformationConstraints<2>
                  ((FPBDExtremeDeformationConstraints *)(pTVar7 + 1),&pFVar1->MParticles,
                   this->ParticleOffset,this->NumParticles,&local_28,param_2,param_3,param_1,true);
        pFVar8 = (FPBDExtremeDeformationConstraints *)(pTVar7 + 1);
        if ((pFVar8 == (FPBDExtremeDeformationConstraints *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FVar9.ReferenceController = pTVar7;
        local_38 = pFVar8;
      }
      FStack_30.ReferenceController = FVar9.ReferenceController;
      if (&this->ExtremeDeformationConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDExtremeDeformationConstraints,1> *)&local_38) {
        (this->ExtremeDeformationConstraints).Object = pFVar8;
        local_38 = (FPBDExtremeDeformationConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ExtremeDeformationConstraints).SharedReferenceCount,&FStack_30);
        FVar9.ReferenceController = FStack_30.ReferenceController;
      }
    }
    else {
      pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
      pTVar7 = ::operator_new(0x58);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_48 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDExtremeDeformationConstraints *)&DAT_00000010;
        FStack_40.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDExtremeDeformationConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FPBDExtremeDeformationConstraints::FPBDExtremeDeformationConstraints<2>
                  ((FPBDExtremeDeformationConstraints *)(pTVar7 + 1),pFVar6,&local_28,param_2,
                   param_3,param_1,true);
        pFVar8 = (FPBDExtremeDeformationConstraints *)(pTVar7 + 1);
        if ((pFVar8 == (FPBDExtremeDeformationConstraints *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FStack_40.ReferenceController = pTVar7;
        local_48 = pFVar8;
      }
      FVar9.ReferenceController = FStack_40.ReferenceController;
      if (&this->ExtremeDeformationConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDExtremeDeformationConstraints,1> *)&local_48) {
        (this->ExtremeDeformationConstraints).Object = pFVar8;
        local_48 = (FPBDExtremeDeformationConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ExtremeDeformationConstraints).SharedReferenceCount,&FStack_40);
        FVar9.ReferenceController = FStack_40.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateForceBasedRules @ 14dbca110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClothConstraints::CreateForceBasedRules
          (FClothConstraints *this,TSharedPtr<Chaos::Softs::FMultiResConstraints,1> *param_1)

{
  FExternalForces *pFVar1;
  FVelocityAndPressureField *pFVar2;
  FMultiResConstraints *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FXPBDStretchBiasElementConstraints *pFVar5;
  FXPBDEdgeSpringConstraints *pFVar6;
  FPBDEdgeSpringConstraints *pFVar7;
  FXPBDBendingSpringConstraints *pFVar8;
  FPBDBendingSpringConstraints *pFVar9;
  FPBDBendingConstraints *pFVar10;
  FXPBDBendingConstraints *pFVar11;
  FXPBDAnisotropicBendingConstraints *pFVar12;
  FXPBDAreaSpringConstraints *pFVar13;
  FPBDAreaSpringConstraints *pFVar14;
  FPBDSphericalConstraint *pFVar15;
  FPBDSphericalBackstopConstraint *pFVar16;
  FPBDAnimDriveConstraint *pFVar17;
  FXPBDVertexConstraints *pFVar18;
  FXPBDVertexFaceConstraints *pFVar19;
  FXPBDFaceConstraints *pFVar20;
  FPBDVertexFaceRepulsionConstraints *pFVar21;
  code *pcVar22;
  undefined8 uVar23;
  longlong *plVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  longlong lVar30;
  undefined8 uVar31;
  bool bVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *pTVar36;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
  *pTVar37;
  FXPBDAnisotropicSpringConstraints *pFVar38;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
  *pTVar39;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
  *pTVar40;
  undefined ***pppuVar41;
  longlong *plVar42;
  int iVar43;
  atomic<int> *paVar44;
  int iVar45;
  longlong lVar46;
  undefined1 auStack_bb8 [32];
  longlong local_b98;
  longlong local_b90;
  FRuleCreator local_b88;
  code *local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  code *local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  code *local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  code *local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  code *local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  code *local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  code *local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  code *local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  code *local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  code *local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  code *local_8d8;
  undefined8 uStack_8d0;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  code *local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  code *local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  code *local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  code *local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  code *local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  code *local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  code *local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  code *local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  code *local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  code *local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  code *local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  code *local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  code *local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  code *local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  code *local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  code *local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  code *local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  code *local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  code *local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  code *local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  code *local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  code *local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  code *local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  code *local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  code *local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  code *local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  code *local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  code *local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  code *local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  code *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  code *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  code *local_2d8 [2];
  undefined **local_2c8;
  FPBDBendingConstraints *local_2c0;
  FEvolution *local_2b8;
  undefined ***local_2b0;
  code *local_2a8 [2];
  undefined **local_298;
  FXPBDBendingConstraints *local_290;
  FEvolution *local_288;
  undefined ***local_280;
  code *local_278 [2];
  undefined **local_268;
  FXPBDAnisotropicBendingConstraints *local_260;
  FEvolution *local_258;
  undefined ***local_250;
  code *local_248 [2];
  undefined **local_238;
  FXPBDAreaSpringConstraints *local_230;
  FEvolution *local_228;
  undefined ***local_220;
  code *local_218 [2];
  undefined **local_208;
  FPBDAreaSpringConstraints *local_200;
  FEvolution *local_1f8;
  undefined ***local_1f0;
  code *local_1e8 [2];
  undefined **local_1d8;
  FPBDAnimDriveConstraint *local_1d0;
  FEvolution *local_1c8;
  undefined ***local_1c0;
  code *local_1b8 [2];
  undefined **local_1a8;
  FPBDBendingSpringConstraints *local_1a0;
  FEvolution *local_198;
  undefined ***local_190;
  code *local_188 [2];
  undefined **local_178;
  FXPBDVertexFaceConstraints *local_170;
  FEvolution *local_168;
  undefined ***local_160;
  code *local_158 [2];
  undefined **local_148;
  FXPBDFaceConstraints *local_140;
  FEvolution *local_138;
  undefined ***local_130;
  code *local_128 [2];
  undefined **local_118;
  FXPBDVertexConstraints *local_110;
  FEvolution *local_108;
  undefined ***local_100;
  code *local_f8 [2];
  undefined **local_e8;
  FClothConstraints *local_e0;
  undefined ***local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  FClothConstraints *local_b0;
  undefined ***local_a0;
  code *local_98 [2];
  undefined **local_88;
  FPBDCollisionSpringConstraints *local_80;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FClothConstraints *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_bb8;
  if (param_1->Object != (FMultiResConstraints *)0x0) {
    this->NumPostprocessingConstraintRules = this->NumPostprocessingConstraintRules + 1;
  }
  FRuleCreator::FRuleCreator(&local_b88,this);
  iVar43 = local_b88.ExternalForceRulesIndex;
  pFVar1 = (this->ExternalForces).Object;
  uVar35 = 0;
  iVar45 = local_b88.ExternalForceRulesIndex;
  if (pFVar1 != (FExternalForces *)0x0) {
    local_2f8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddExternalForceRule_Apply_VFExternalForces_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFExternalForces_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_2e0 = (longlong *)0x0;
    iVar45 = local_b88.ExternalForceRulesIndex + 1;
    local_308 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddExternalForceRule_Apply<Chaos::Softs::FExternalForces>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ExternalForceRulesIndex = iVar45;
    uStack_2f0 = pFVar1;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.ExternalForceRules,iVar43);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_308;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_300;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_2f8;
    *(undefined4 *)&pTVar36->field_0x14 = local_2f8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_2f0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_2f0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_2e8;
    *(undefined4 *)&pTVar36->field_0x24 = local_2e8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_2e0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_2e0._4_4_;
    local_308 = (code *)lVar46;
    uStack_300 = uVar29;
    local_2f8 = (undefined **)lVar30;
    uStack_2f0 = (FExternalForces *)uVar31;
    local_2e8 = uVar23;
    uStack_2e0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_2f8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    lVar46 = (longlong)local_b88.UpdateLinearSystemRulesIndex;
    local_988 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddUpdateLinearSystemRule_UpdateLinearSystem_VFExternalForces_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFExternalForces_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_980 = (this->ExternalForces).Object;
    local_998 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemRule_UpdateLinearSystem<Chaos::Softs::FExternalForces>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
                ::Call;
    uVar33 = local_b88.UpdateLinearSystemRulesIndex + 1;
    uStack_970 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.UpdateLinearSystemRulesIndex < local_b88.UpdateLinearSystemRules.ArrayNum) {
      uVar34 = (uint)~local_b88.UpdateLinearSystemRulesIndex >> 0x1f;
    }
    local_b88.UpdateLinearSystemRulesIndex = uVar33;
    if ((uVar34 == 0) &&
       (local_b98 = lVar46, local_b90 = (longlong)local_b88.UpdateLinearSystemRules.ArrayNum,
       bVar32 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar32)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    pTVar39 = local_b88.UpdateLinearSystemRules.DataPtr + lVar46;
    lVar46 = *(longlong *)pTVar39;
    uVar29 = *(undefined8 *)&pTVar39->field_0x8;
    lVar30 = *(longlong *)&pTVar39->field_0x10;
    uVar31 = *(undefined8 *)&pTVar39->field_0x18;
    uVar23 = *(undefined8 *)&pTVar39->field_0x20;
    plVar24 = *(longlong **)&pTVar39->field_0x28;
    *(code **)pTVar39 = local_998;
    *(undefined8 *)&pTVar39->field_0x8 = uStack_990;
    *(undefined4 *)&pTVar39->field_0x10 = (undefined4)local_988;
    *(undefined4 *)&pTVar39->field_0x14 = local_988._4_4_;
    *(undefined4 *)&pTVar39->field_0x18 = (undefined4)uStack_980;
    *(undefined4 *)&pTVar39->field_0x1c = uStack_980._4_4_;
    *(undefined4 *)&pTVar39->field_0x20 = (undefined4)local_978;
    *(undefined4 *)&pTVar39->field_0x24 = local_978._4_4_;
    *(undefined4 *)&pTVar39->field_0x28 = (undefined4)uStack_970;
    *(undefined4 *)&pTVar39->field_0x2c = uStack_970._4_4_;
    local_998 = (code *)lVar46;
    uStack_990 = uVar29;
    local_988 = (undefined **)lVar30;
    uStack_980 = (FExternalForces *)uVar31;
    local_978 = uVar23;
    uStack_970 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_988;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar2 = (this->VelocityAndPressureField).Object;
  iVar43 = iVar45;
  if (pFVar2 != (FVelocityAndPressureField *)0x0) {
    local_958 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddExternalForceRule_Apply_VFVelocityAndPressureField_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFVelocityAndPressureField_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_940 = (longlong *)0x0;
    iVar43 = iVar45 + 1;
    local_968 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddExternalForceRule_Apply<Chaos::Softs::FVelocityAndPressureField>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ExternalForceRulesIndex = iVar43;
    uStack_950 = pFVar2;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.ExternalForceRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_968;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_960;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_958;
    *(undefined4 *)&pTVar36->field_0x14 = local_958._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_950;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_950._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_948;
    *(undefined4 *)&pTVar36->field_0x24 = local_948._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_940;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_940._4_4_;
    local_968 = (code *)lVar46;
    uStack_960 = uVar29;
    local_958 = (undefined **)lVar30;
    uStack_950 = (FVelocityAndPressureField *)uVar31;
    local_948 = uVar23;
    uStack_940 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_958;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  if (this->PerSolverField != (FPerSolverFieldSystem *)0x0) {
    uStack_910 = (longlong *)0x0;
    local_928 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`14'::<lambda_1>,0,0>
                 ::_vftable_;
    local_938 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l14::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ExternalForceRulesIndex = iVar43 + 1;
    uStack_920 = this;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.ExternalForceRules,iVar43);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_938;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_930;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_928;
    *(undefined4 *)&pTVar36->field_0x14 = local_928._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_920;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_920._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_918;
    *(undefined4 *)&pTVar36->field_0x24 = local_918._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_910;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_910._4_4_;
    local_938 = (code *)lVar46;
    uStack_930 = uVar29;
    local_928 = (undefined **)lVar30;
    uStack_920 = (FClothConstraints *)uVar31;
    local_918 = uVar23;
    uStack_910 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_928;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar3 = (this->MultiResConstraints).Object;
  if (pFVar3 != (FMultiResConstraints *)0x0) {
    lVar46 = (longlong)local_b88.PostInitialGuessInitsIndex;
    local_a98 = (local_b88.Constraints)->Evolution;
    local_aa8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__0A_VFMultiResConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFMultiResConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_ab8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FMultiResConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                ::Call;
    uVar33 = local_b88.PostInitialGuessInitsIndex + 1;
    uStack_a90 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.PostInitialGuessInitsIndex < local_b88.PostInitialGuessParallelInits.ArrayNum) {
      uVar34 = (uint)~local_b88.PostInitialGuessInitsIndex >> 0x1f;
    }
    local_b88.PostInitialGuessInitsIndex = uVar33;
    uStack_aa0 = pFVar3;
    if ((uVar34 == 0) &&
       (local_b98 = lVar46, local_b90 = (longlong)local_b88.PostInitialGuessParallelInits.ArrayNum,
       bVar32 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar32)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    pTVar40 = local_b88.PostInitialGuessParallelInits.DataPtr + lVar46;
    lVar46 = *(longlong *)pTVar40;
    uVar29 = *(undefined8 *)&pTVar40->field_0x8;
    lVar30 = *(longlong *)&pTVar40->field_0x10;
    uVar31 = *(undefined8 *)&pTVar40->field_0x18;
    uVar23 = *(undefined8 *)&pTVar40->field_0x20;
    plVar24 = *(longlong **)&pTVar40->field_0x28;
    *(code **)pTVar40 = local_ab8;
    *(undefined8 *)&pTVar40->field_0x8 = uStack_ab0;
    *(undefined4 *)&pTVar40->field_0x10 = (undefined4)local_aa8;
    *(undefined4 *)&pTVar40->field_0x14 = local_aa8._4_4_;
    *(undefined4 *)&pTVar40->field_0x18 = (undefined4)uStack_aa0;
    *(undefined4 *)&pTVar40->field_0x1c = uStack_aa0._4_4_;
    *(undefined4 *)&pTVar40->field_0x20 = (undefined4)local_a98;
    *(undefined4 *)&pTVar40->field_0x24 = local_a98._4_4_;
    *(undefined4 *)&pTVar40->field_0x28 = (undefined4)uStack_a90;
    *(undefined4 *)&pTVar40->field_0x2c = uStack_a90._4_4_;
    local_aa8 = (undefined **)lVar30;
    uStack_aa0 = (FMultiResConstraints *)uVar31;
    local_a98 = (FEvolution *)uVar23;
    uStack_a90 = plVar24;
    local_ab8 = (code *)lVar46;
    uStack_ab0 = uVar29;
    if (lVar46 != 0) {
      plVar42 = &local_aa8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_8f8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFMultiResConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFMultiResConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_8f0 = (this->MultiResConstraints).Object;
    local_908 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FMultiResConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_8e0 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_908;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_900;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_8f8;
    *(undefined4 *)&pTVar36->field_0x14 = local_8f8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_8f0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_8f0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_8e8;
    *(undefined4 *)&pTVar36->field_0x24 = local_8e8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_8e0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_8e0._4_4_;
    local_908 = (code *)lVar46;
    uStack_900 = uVar29;
    local_8f8 = (undefined **)lVar30;
    uStack_8f0 = (FMultiResConstraints *)uVar31;
    local_8e8 = uVar23;
    uStack_8e0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_8f8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar3 = param_1->Object;
  if (pFVar3 != (FMultiResConstraints *)0x0) {
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar44 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar44 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar44 = (atomic<int>)((int)*paVar44 + 1);
      UNLOCK();
    }
    local_8d8 = (code *)0x0;
    uStack_8b0 = FMemory::Malloc(0x20,8);
    iVar45 = local_b88.PostSubstepConstraintRulesIndex;
    uStack_8b0[1] = (longlong)pFVar3;
    *uStack_8b0 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`20'::<lambda_2>,0,1>
                   ::_vftable_;
    uStack_8b0[2] = (longlong)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar44 = (atomic<int>)((int)*paVar44 + 1);
      UNLOCK();
    }
    uStack_8b0[3] = (longlong)this;
    if (uStack_8b0 != (longlong *)&DAT_fffffffffffffff8) {
      local_8d8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l20::<lambda_2>,void,Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode>
                  ::Call;
    }
    local_b88.PostSubstepConstraintRulesIndex = local_b88.PostSubstepConstraintRulesIndex + 1;
    pTVar37 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ::operator[](&local_b88.PostSubstepConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar37;
    uVar29 = *(undefined8 *)&pTVar37->field_0x8;
    uVar25 = *(undefined4 *)&pTVar37->field_0x10;
    uVar26 = *(undefined4 *)&pTVar37->field_0x14;
    uVar27 = *(undefined4 *)&pTVar37->field_0x18;
    uVar28 = *(undefined4 *)&pTVar37->field_0x1c;
    uVar23 = *(undefined8 *)&pTVar37->field_0x20;
    plVar24 = *(longlong **)&pTVar37->field_0x28;
    *(code **)pTVar37 = local_8d8;
    *(undefined8 *)&pTVar37->field_0x8 = uStack_8d0;
    *(undefined4 *)&pTVar37->field_0x10 = local_8c8;
    *(undefined4 *)&pTVar37->field_0x14 = uStack_8c4;
    *(undefined4 *)&pTVar37->field_0x18 = uStack_8c0;
    *(undefined4 *)&pTVar37->field_0x1c = uStack_8bc;
    *(undefined4 *)&pTVar37->field_0x20 = (undefined4)local_8b8;
    *(undefined4 *)&pTVar37->field_0x24 = local_8b8._4_4_;
    *(undefined4 *)&pTVar37->field_0x28 = (undefined4)uStack_8b0;
    *(undefined4 *)&pTVar37->field_0x2c = uStack_8b0._4_4_;
    local_8d8 = (code *)lVar46;
    uStack_8d0 = uVar29;
    local_8c8 = uVar25;
    uStack_8c4 = uVar26;
    uStack_8c0 = uVar27;
    uStack_8bc = uVar28;
    local_8b8 = uVar23;
    uStack_8b0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = (longlong *)&local_8c8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  pFVar5 = (this->XStretchBiasConstraints).Object;
  if (pFVar5 != (FXPBDStretchBiasElementConstraints *)0x0) {
    lVar46 = (longlong)local_b88.PostInitialGuessInitsIndex;
    local_a68 = (local_b88.Constraints)->Evolution;
    local_a78 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__0A_VFXPBDStretchBiasElementConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDStretchBiasElementConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_a88 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDStretchBiasElementConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                ::Call;
    uVar33 = local_b88.PostInitialGuessInitsIndex + 1;
    uStack_a60 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.PostInitialGuessInitsIndex < local_b88.PostInitialGuessParallelInits.ArrayNum) {
      uVar34 = (uint)~local_b88.PostInitialGuessInitsIndex >> 0x1f;
    }
    local_b88.PostInitialGuessInitsIndex = uVar33;
    uStack_a70 = pFVar5;
    if (uVar34 == 0) {
      local_b90 = (longlong)local_b88.PostInitialGuessParallelInits.ArrayNum;
      local_b98 = lVar46;
      bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar32) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
    }
    pTVar40 = local_b88.PostInitialGuessParallelInits.DataPtr + lVar46;
    lVar46 = *(longlong *)pTVar40;
    uVar29 = *(undefined8 *)&pTVar40->field_0x8;
    lVar30 = *(longlong *)&pTVar40->field_0x10;
    uVar31 = *(undefined8 *)&pTVar40->field_0x18;
    uVar23 = *(undefined8 *)&pTVar40->field_0x20;
    plVar24 = *(longlong **)&pTVar40->field_0x28;
    *(code **)pTVar40 = local_a88;
    *(undefined8 *)&pTVar40->field_0x8 = uStack_a80;
    *(undefined4 *)&pTVar40->field_0x10 = (undefined4)local_a78;
    *(undefined4 *)&pTVar40->field_0x14 = local_a78._4_4_;
    *(undefined4 *)&pTVar40->field_0x18 = (undefined4)uStack_a70;
    *(undefined4 *)&pTVar40->field_0x1c = uStack_a70._4_4_;
    *(undefined4 *)&pTVar40->field_0x20 = (undefined4)local_a68;
    *(undefined4 *)&pTVar40->field_0x24 = local_a68._4_4_;
    *(undefined4 *)&pTVar40->field_0x28 = (undefined4)uStack_a60;
    *(undefined4 *)&pTVar40->field_0x2c = uStack_a60._4_4_;
    local_a88 = (code *)lVar46;
    uStack_a80 = uVar29;
    local_a78 = (undefined **)lVar30;
    uStack_a70 = (FXPBDStretchBiasElementConstraints *)uVar31;
    local_a68 = (FEvolution *)uVar23;
    uStack_a60 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_a78;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_898 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFXPBDStretchBiasElementConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDStretchBiasElementConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_890 = (this->XStretchBiasConstraints).Object;
    local_8a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDStretchBiasElementConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_880 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_8a8;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_8a0;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_898;
    *(undefined4 *)&pTVar36->field_0x14 = local_898._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_890;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_890._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_888;
    *(undefined4 *)&pTVar36->field_0x24 = local_888._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_880;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_880._4_4_;
    local_8a8 = (code *)lVar46;
    uStack_8a0 = uVar29;
    local_898 = (undefined **)lVar30;
    uStack_890 = (FXPBDStretchBiasElementConstraints *)uVar31;
    local_888 = uVar23;
    uStack_880 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_898;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar6 = (this->XEdgeConstraints).Object;
  if (pFVar6 != (FXPBDEdgeSpringConstraints *)0x0) {
    lVar46 = (longlong)local_b88.PostInitialGuessInitsIndex;
    local_a38 = (local_b88.Constraints)->Evolution;
    local_a48 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__0A_VFXPBDEdgeSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDEdgeSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_a58 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDEdgeSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                ::Call;
    uVar33 = local_b88.PostInitialGuessInitsIndex + 1;
    uStack_a30 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.PostInitialGuessInitsIndex < local_b88.PostInitialGuessParallelInits.ArrayNum) {
      uVar34 = (uint)~local_b88.PostInitialGuessInitsIndex >> 0x1f;
    }
    local_b88.PostInitialGuessInitsIndex = uVar33;
    uStack_a40 = pFVar6;
    if (uVar34 == 0) {
      local_b90 = (longlong)local_b88.PostInitialGuessParallelInits.ArrayNum;
      local_b98 = lVar46;
      bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar32) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
    }
    pTVar40 = local_b88.PostInitialGuessParallelInits.DataPtr + lVar46;
    lVar46 = *(longlong *)pTVar40;
    uVar29 = *(undefined8 *)&pTVar40->field_0x8;
    lVar30 = *(longlong *)&pTVar40->field_0x10;
    uVar31 = *(undefined8 *)&pTVar40->field_0x18;
    uVar23 = *(undefined8 *)&pTVar40->field_0x20;
    plVar24 = *(longlong **)&pTVar40->field_0x28;
    *(code **)pTVar40 = local_a58;
    *(undefined8 *)&pTVar40->field_0x8 = uStack_a50;
    *(undefined4 *)&pTVar40->field_0x10 = (undefined4)local_a48;
    *(undefined4 *)&pTVar40->field_0x14 = local_a48._4_4_;
    *(undefined4 *)&pTVar40->field_0x18 = (undefined4)uStack_a40;
    *(undefined4 *)&pTVar40->field_0x1c = uStack_a40._4_4_;
    *(undefined4 *)&pTVar40->field_0x20 = (undefined4)local_a38;
    *(undefined4 *)&pTVar40->field_0x24 = local_a38._4_4_;
    *(undefined4 *)&pTVar40->field_0x28 = (undefined4)uStack_a30;
    *(undefined4 *)&pTVar40->field_0x2c = uStack_a30._4_4_;
    local_a58 = (code *)lVar46;
    uStack_a50 = uVar29;
    local_a48 = (undefined **)lVar30;
    uStack_a40 = (FXPBDEdgeSpringConstraints *)uVar31;
    local_a38 = (FEvolution *)uVar23;
    uStack_a30 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_a48;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_868 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFXPBDEdgeSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDEdgeSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_860 = (this->XEdgeConstraints).Object;
    local_878 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDEdgeSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_850 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_878;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_870;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_868;
    *(undefined4 *)&pTVar36->field_0x14 = local_868._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_860;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_860._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_858;
    *(undefined4 *)&pTVar36->field_0x24 = local_858._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_850;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_850._4_4_;
    local_878 = (code *)lVar46;
    uStack_870 = uVar29;
    local_868 = (undefined **)lVar30;
    uStack_860 = (FXPBDEdgeSpringConstraints *)uVar31;
    local_858 = uVar23;
    uStack_850 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_868;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    lVar46 = (longlong)local_b88.UpdateLinearSystemRulesIndex;
    local_838 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddUpdateLinearSystemRule_UpdateLinearSystem_VFXPBDEdgeSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDEdgeSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_830 = (this->XEdgeConstraints).Object;
    local_848 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemRule_UpdateLinearSystem<Chaos::Softs::FXPBDEdgeSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
                ::Call;
    uVar33 = local_b88.UpdateLinearSystemRulesIndex + 1;
    uStack_820 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.UpdateLinearSystemRulesIndex < local_b88.UpdateLinearSystemRules.ArrayNum) {
      uVar34 = (uint)~local_b88.UpdateLinearSystemRulesIndex >> 0x1f;
    }
    local_b88.UpdateLinearSystemRulesIndex = uVar33;
    if ((uVar34 == 0) &&
       (local_b98 = lVar46, local_b90 = (longlong)local_b88.UpdateLinearSystemRules.ArrayNum,
       bVar32 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar32)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    pTVar39 = local_b88.UpdateLinearSystemRules.DataPtr + lVar46;
    lVar46 = *(longlong *)pTVar39;
    uVar29 = *(undefined8 *)&pTVar39->field_0x8;
    lVar30 = *(longlong *)&pTVar39->field_0x10;
    uVar31 = *(undefined8 *)&pTVar39->field_0x18;
    uVar23 = *(undefined8 *)&pTVar39->field_0x20;
    plVar24 = *(longlong **)&pTVar39->field_0x28;
    *(code **)pTVar39 = local_848;
    *(undefined8 *)&pTVar39->field_0x8 = uStack_840;
    *(undefined4 *)&pTVar39->field_0x10 = (undefined4)local_838;
    *(undefined4 *)&pTVar39->field_0x14 = local_838._4_4_;
    *(undefined4 *)&pTVar39->field_0x18 = (undefined4)uStack_830;
    *(undefined4 *)&pTVar39->field_0x1c = uStack_830._4_4_;
    *(undefined4 *)&pTVar39->field_0x20 = (undefined4)local_828;
    *(undefined4 *)&pTVar39->field_0x24 = local_828._4_4_;
    *(undefined4 *)&pTVar39->field_0x28 = (undefined4)uStack_820;
    *(undefined4 *)&pTVar39->field_0x2c = uStack_820._4_4_;
    local_848 = (code *)lVar46;
    uStack_840 = uVar29;
    local_838 = (undefined **)lVar30;
    uStack_830 = (FXPBDEdgeSpringConstraints *)uVar31;
    local_828 = uVar23;
    uStack_820 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_838;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar7 = (this->EdgeConstraints).Object;
  if (pFVar7 != (FPBDEdgeSpringConstraints *)0x0) {
    lVar46 = (longlong)local_b88.PostInitialGuessInitsIndex;
    local_a08 = (local_b88.Constraints)->Evolution;
    local_a18 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddPBDParallelInitRule_VFPBDEdgeSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDEdgeSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_a28 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPBDParallelInitRule<Chaos::Softs::FPBDEdgeSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                ::Call;
    uVar33 = local_b88.PostInitialGuessInitsIndex + 1;
    uStack_a00 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.PostInitialGuessInitsIndex < local_b88.PostInitialGuessParallelInits.ArrayNum) {
      uVar34 = (uint)~local_b88.PostInitialGuessInitsIndex >> 0x1f;
    }
    local_b88.PostInitialGuessInitsIndex = uVar33;
    uStack_a10 = pFVar7;
    if (uVar34 == 0) {
      local_b90 = (longlong)local_b88.PostInitialGuessParallelInits.ArrayNum;
      local_b98 = lVar46;
      bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar32) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
    }
    pTVar40 = local_b88.PostInitialGuessParallelInits.DataPtr + lVar46;
    lVar46 = *(longlong *)pTVar40;
    uVar29 = *(undefined8 *)&pTVar40->field_0x8;
    lVar30 = *(longlong *)&pTVar40->field_0x10;
    uVar31 = *(undefined8 *)&pTVar40->field_0x18;
    uVar23 = *(undefined8 *)&pTVar40->field_0x20;
    plVar24 = *(longlong **)&pTVar40->field_0x28;
    *(code **)pTVar40 = local_a28;
    *(undefined8 *)&pTVar40->field_0x8 = uStack_a20;
    *(undefined4 *)&pTVar40->field_0x10 = (undefined4)local_a18;
    *(undefined4 *)&pTVar40->field_0x14 = local_a18._4_4_;
    *(undefined4 *)&pTVar40->field_0x18 = (undefined4)uStack_a10;
    *(undefined4 *)&pTVar40->field_0x1c = uStack_a10._4_4_;
    *(undefined4 *)&pTVar40->field_0x20 = (undefined4)local_a08;
    *(undefined4 *)&pTVar40->field_0x24 = local_a08._4_4_;
    *(undefined4 *)&pTVar40->field_0x28 = (undefined4)uStack_a00;
    *(undefined4 *)&pTVar40->field_0x2c = uStack_a00._4_4_;
    local_a28 = (code *)lVar46;
    uStack_a20 = uVar29;
    local_a18 = (undefined **)lVar30;
    uStack_a10 = (FPBDEdgeSpringConstraints *)uVar31;
    local_a08 = (FEvolution *)uVar23;
    uStack_a00 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_a18;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_808 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFPBDEdgeSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDEdgeSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_800 = (this->EdgeConstraints).Object;
    local_818 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDEdgeSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_7f0 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_818;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_810;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_808;
    *(undefined4 *)&pTVar36->field_0x14 = local_808._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_800;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_800._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_7f8;
    *(undefined4 *)&pTVar36->field_0x24 = local_7f8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_7f0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_7f0._4_4_;
    local_818 = (code *)lVar46;
    uStack_810 = uVar29;
    local_808 = (undefined **)lVar30;
    uStack_800 = (FPBDEdgeSpringConstraints *)uVar31;
    local_7f8 = uVar23;
    uStack_7f0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_808;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar38 = (this->XAnisoSpringConstraints).Object;
  if (pFVar38 != (FXPBDAnisotropicSpringConstraints *)0x0) {
    lVar46 = (longlong)local_b88.PostInitialGuessInitsIndex;
    local_9d8 = (local_b88.Constraints)->Evolution;
    local_9e8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__0A_VFXPBDAnisotropicSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDAnisotropicSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_9f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDAnisotropicSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                ::Call;
    uVar33 = local_b88.PostInitialGuessInitsIndex + 1;
    uStack_9d0 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.PostInitialGuessInitsIndex < local_b88.PostInitialGuessParallelInits.ArrayNum) {
      uVar34 = (uint)~local_b88.PostInitialGuessInitsIndex >> 0x1f;
    }
    local_b88.PostInitialGuessInitsIndex = uVar33;
    uStack_9e0 = pFVar38;
    if (uVar34 == 0) {
      local_b90 = (longlong)local_b88.PostInitialGuessParallelInits.ArrayNum;
      local_b98 = lVar46;
      bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar32) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
    }
    pTVar40 = local_b88.PostInitialGuessParallelInits.DataPtr + lVar46;
    lVar46 = *(longlong *)pTVar40;
    uVar29 = *(undefined8 *)&pTVar40->field_0x8;
    lVar30 = *(longlong *)&pTVar40->field_0x10;
    uVar31 = *(undefined8 *)&pTVar40->field_0x18;
    uVar23 = *(undefined8 *)&pTVar40->field_0x20;
    plVar24 = *(longlong **)&pTVar40->field_0x28;
    *(code **)pTVar40 = local_9f8;
    *(undefined8 *)&pTVar40->field_0x8 = uStack_9f0;
    *(undefined4 *)&pTVar40->field_0x10 = (undefined4)local_9e8;
    *(undefined4 *)&pTVar40->field_0x14 = local_9e8._4_4_;
    *(undefined4 *)&pTVar40->field_0x18 = (undefined4)uStack_9e0;
    *(undefined4 *)&pTVar40->field_0x1c = uStack_9e0._4_4_;
    *(undefined4 *)&pTVar40->field_0x20 = (undefined4)local_9d8;
    *(undefined4 *)&pTVar40->field_0x24 = local_9d8._4_4_;
    *(undefined4 *)&pTVar40->field_0x28 = (undefined4)uStack_9d0;
    *(undefined4 *)&pTVar40->field_0x2c = uStack_9d0._4_4_;
    local_9f8 = (code *)lVar46;
    uStack_9f0 = uVar29;
    local_9e8 = (undefined **)lVar30;
    uStack_9e0 = (FXPBDAnisotropicSpringConstraints *)uVar31;
    local_9d8 = (FEvolution *)uVar23;
    uStack_9d0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_9e8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    if (((this->XAnisoSpringConstraints).Object == (FXPBDAnisotropicSpringConstraints *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_7d8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A___CBVFXPBDAnisotropicEdgeSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEBVFXPBDAnisotropicEdgeSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_7d0 = (this->XAnisoSpringConstraints).Object;
    local_7e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints_const_>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_7c0 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_7e8;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_7e0;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_7d8;
    *(undefined4 *)&pTVar36->field_0x14 = local_7d8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_7d0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_7d0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_7c8;
    *(undefined4 *)&pTVar36->field_0x24 = local_7c8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_7c0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_7c0._4_4_;
    local_7e8 = (code *)lVar46;
    uStack_7e0 = uVar29;
    local_7d8 = (undefined **)lVar30;
    uStack_7d0 = (FXPBDAnisotropicSpringConstraints *)uVar31;
    local_7c8 = uVar23;
    uStack_7c0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_7d8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    lVar46 = (longlong)local_b88.UpdateLinearSystemRulesIndex;
    local_7a8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`32'::<lambda_3>,0,0>
                 ::_vftable_;
    local_7b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l32::<lambda_3>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
                ::Call;
    uVar33 = local_b88.UpdateLinearSystemRulesIndex + 1;
    uStack_790 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.UpdateLinearSystemRulesIndex < local_b88.UpdateLinearSystemRules.ArrayNum) {
      uVar34 = (uint)~local_b88.UpdateLinearSystemRulesIndex >> 0x1f;
    }
    local_b88.UpdateLinearSystemRulesIndex = uVar33;
    uStack_7a0 = this;
    if ((uVar34 == 0) &&
       (local_b98 = lVar46, local_b90 = (longlong)local_b88.UpdateLinearSystemRules.ArrayNum,
       bVar32 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar32)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    pTVar39 = local_b88.UpdateLinearSystemRules.DataPtr + lVar46;
    lVar46 = *(longlong *)pTVar39;
    uVar29 = *(undefined8 *)&pTVar39->field_0x8;
    lVar30 = *(longlong *)&pTVar39->field_0x10;
    uVar31 = *(undefined8 *)&pTVar39->field_0x18;
    uVar23 = *(undefined8 *)&pTVar39->field_0x20;
    plVar24 = *(longlong **)&pTVar39->field_0x28;
    *(code **)pTVar39 = local_7b8;
    *(undefined8 *)&pTVar39->field_0x8 = uStack_7b0;
    *(undefined4 *)&pTVar39->field_0x10 = (undefined4)local_7a8;
    *(undefined4 *)&pTVar39->field_0x14 = local_7a8._4_4_;
    *(undefined4 *)&pTVar39->field_0x18 = (undefined4)uStack_7a0;
    *(undefined4 *)&pTVar39->field_0x1c = uStack_7a0._4_4_;
    *(undefined4 *)&pTVar39->field_0x20 = (undefined4)local_798;
    *(undefined4 *)&pTVar39->field_0x24 = local_798._4_4_;
    *(undefined4 *)&pTVar39->field_0x28 = (undefined4)uStack_790;
    *(undefined4 *)&pTVar39->field_0x2c = uStack_790._4_4_;
    local_7b8 = (code *)lVar46;
    uStack_7b0 = uVar29;
    local_7a8 = (undefined **)lVar30;
    uStack_7a0 = (FClothConstraints *)uVar31;
    local_798 = uVar23;
    uStack_790 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_7a8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar8 = (this->XBendingConstraints).Object;
  if (pFVar8 != (FXPBDBendingSpringConstraints *)0x0) {
    lVar46 = (longlong)local_b88.PostInitialGuessInitsIndex;
    local_9a8 = (local_b88.Constraints)->Evolution;
    local_9b8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__0A_VFXPBDBendingSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDBendingSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_9c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDBendingSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                ::Call;
    uVar33 = local_b88.PostInitialGuessInitsIndex + 1;
    uStack_9a0 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.PostInitialGuessInitsIndex < local_b88.PostInitialGuessParallelInits.ArrayNum) {
      uVar34 = (uint)~local_b88.PostInitialGuessInitsIndex >> 0x1f;
    }
    local_b88.PostInitialGuessInitsIndex = uVar33;
    uStack_9b0 = pFVar8;
    if (uVar34 == 0) {
      local_b90 = (longlong)local_b88.PostInitialGuessParallelInits.ArrayNum;
      local_b98 = lVar46;
      bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar32) {
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
    }
    local_b88.PostInitialGuessParallelInits.DataPtr =
         local_b88.PostInitialGuessParallelInits.DataPtr + lVar46;
    lVar46 = *(longlong *)local_b88.PostInitialGuessParallelInits.DataPtr;
    uVar29 = *(undefined8 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x8;
    lVar30 = *(longlong *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x10;
    uVar31 = *(undefined8 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x18;
    uVar23 = *(undefined8 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x20;
    plVar24 = *(longlong **)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x28;
    *(code **)local_b88.PostInitialGuessParallelInits.DataPtr = local_9c8;
    *(undefined8 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x8 = uStack_9c0;
    *(undefined4 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x10 =
         (undefined4)local_9b8;
    *(undefined4 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x14 = local_9b8._4_4_;
    *(undefined4 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x18 =
         (undefined4)uStack_9b0;
    *(undefined4 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x1c = uStack_9b0._4_4_
    ;
    *(undefined4 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x20 =
         (undefined4)local_9a8;
    *(undefined4 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x24 = local_9a8._4_4_;
    *(undefined4 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x28 =
         (undefined4)uStack_9a0;
    *(undefined4 *)&(local_b88.PostInitialGuessParallelInits.DataPtr)->field_0x2c = uStack_9a0._4_4_
    ;
    local_9c8 = (code *)lVar46;
    uStack_9c0 = uVar29;
    local_9b8 = (undefined **)lVar30;
    uStack_9b0 = (FXPBDBendingSpringConstraints *)uVar31;
    local_9a8 = (FEvolution *)uVar23;
    uStack_9a0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_9b8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_778 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFXPBDBendingSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDBendingSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_770 = (this->XBendingConstraints).Object;
    local_788 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDBendingSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_760 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_788;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_780;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_778;
    *(undefined4 *)&pTVar36->field_0x14 = local_778._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_770;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_770._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_768;
    *(undefined4 *)&pTVar36->field_0x24 = local_768._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_760;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_760._4_4_;
    local_788 = (code *)lVar46;
    uStack_780 = uVar29;
    local_778 = (undefined **)lVar30;
    uStack_770 = (FXPBDBendingSpringConstraints *)uVar31;
    local_768 = uVar23;
    uStack_760 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_778;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    lVar46 = (longlong)local_b88.UpdateLinearSystemRulesIndex;
    local_748 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddUpdateLinearSystemRule_UpdateLinearSystem_VFXPBDBendingSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDBendingSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_740 = (this->XBendingConstraints).Object;
    local_758 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemRule_UpdateLinearSystem<Chaos::Softs::FXPBDBendingSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
                ::Call;
    uVar33 = local_b88.UpdateLinearSystemRulesIndex + 1;
    uStack_730 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.UpdateLinearSystemRulesIndex < local_b88.UpdateLinearSystemRules.ArrayNum) {
      uVar34 = (uint)~local_b88.UpdateLinearSystemRulesIndex >> 0x1f;
    }
    local_b88.UpdateLinearSystemRulesIndex = uVar33;
    if ((uVar34 == 0) &&
       (local_b98 = lVar46, local_b90 = (longlong)local_b88.UpdateLinearSystemRules.ArrayNum,
       bVar32 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar32)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    local_b88.UpdateLinearSystemRules.DataPtr = local_b88.UpdateLinearSystemRules.DataPtr + lVar46;
    lVar46 = *(longlong *)local_b88.UpdateLinearSystemRules.DataPtr;
    uVar29 = *(undefined8 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x8;
    lVar30 = *(longlong *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x10;
    uVar31 = *(undefined8 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x18;
    uVar23 = *(undefined8 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x20;
    plVar24 = *(longlong **)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x28;
    *(code **)local_b88.UpdateLinearSystemRules.DataPtr = local_758;
    *(undefined8 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x8 = uStack_750;
    *(undefined4 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x10 = (undefined4)local_748;
    *(undefined4 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x14 = local_748._4_4_;
    *(undefined4 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x18 = (undefined4)uStack_740
    ;
    *(undefined4 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x1c = uStack_740._4_4_;
    *(undefined4 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x20 = (undefined4)local_738;
    *(undefined4 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x24 = local_738._4_4_;
    *(undefined4 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x28 = (undefined4)uStack_730
    ;
    *(undefined4 *)&(local_b88.UpdateLinearSystemRules.DataPtr)->field_0x2c = uStack_730._4_4_;
    local_758 = (code *)lVar46;
    uStack_750 = uVar29;
    local_748 = (undefined **)lVar30;
    uStack_740 = (FXPBDBendingSpringConstraints *)uVar31;
    local_738 = uVar23;
    uStack_730 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_748;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar9 = (this->BendingConstraints).Object;
  if (pFVar9 != (FPBDBendingSpringConstraints *)0x0) {
    local_198 = (local_b88.Constraints)->Evolution;
    local_1a8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddPBDParallelInitRule_VFPBDBendingSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDBendingSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_1b8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPBDParallelInitRule<Chaos::Softs::FPBDBendingSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_190 = (undefined ***)0x0;
    local_1a0 = pFVar9;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_1b8);
    if (local_1b8[0] != (code *)0x0) {
      pppuVar41 = &local_1a8;
      if (local_190 != (undefined ***)0x0) {
        pppuVar41 = local_190;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_718 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFPBDBendingSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDBendingSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_710 = (this->BendingConstraints).Object;
    local_728 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDBendingSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_700 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_728;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_720;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_718;
    *(undefined4 *)&pTVar36->field_0x14 = local_718._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_710;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_710._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_708;
    *(undefined4 *)&pTVar36->field_0x24 = local_708._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_700;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_700._4_4_;
    local_728 = (code *)lVar46;
    uStack_720 = uVar29;
    local_718 = (undefined **)lVar30;
    uStack_710 = (FPBDBendingSpringConstraints *)uVar31;
    local_708 = uVar23;
    uStack_700 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_718;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar10 = (this->BendingElementConstraints).Object;
  if (pFVar10 != (FPBDBendingConstraints *)0x0) {
    local_2b8 = (local_b88.Constraints)->Evolution;
    local_2c8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__00VFPBDBendingConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDBendingConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_2d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<1,Chaos::Softs::FPBDBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_2b0 = (undefined ***)0x0;
    local_2c0 = pFVar10;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_2d8);
    if (local_2d8[0] != (code *)0x0) {
      pppuVar41 = &local_2c8;
      if (local_2b0 != (undefined ***)0x0) {
        pppuVar41 = local_2b0;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_6e8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFPBDBendingConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDBendingConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_6e0 = (this->BendingElementConstraints).Object;
    local_6f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_6d0 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_6f8;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_6f0;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_6e8;
    *(undefined4 *)&pTVar36->field_0x14 = local_6e8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_6e0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_6e0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_6d8;
    *(undefined4 *)&pTVar36->field_0x24 = local_6d8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_6d0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_6d0._4_4_;
    local_6f8 = (code *)lVar46;
    uStack_6f0 = uVar29;
    local_6e8 = (undefined **)lVar30;
    uStack_6e0 = (FPBDBendingConstraints *)uVar31;
    local_6d8 = uVar23;
    uStack_6d0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_6e8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar11 = (this->XBendingElementConstraints).Object;
  if (pFVar11 != (FXPBDBendingConstraints *)0x0) {
    local_288 = (local_b88.Constraints)->Evolution;
    local_298 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__00VFXPBDBendingConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDBendingConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_2a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<1,Chaos::Softs::FXPBDBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_280 = (undefined ***)0x0;
    local_290 = pFVar11;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_2a8);
    if (local_2a8[0] != (code *)0x0) {
      pppuVar41 = &local_298;
      if (local_280 != (undefined ***)0x0) {
        pppuVar41 = local_280;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_6b8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFXPBDBendingConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDBendingConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_6b0 = (this->XBendingElementConstraints).Object;
    local_6c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_6a0 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_6c8;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_6c0;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_6b8;
    *(undefined4 *)&pTVar36->field_0x14 = local_6b8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_6b0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_6b0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_6a8;
    *(undefined4 *)&pTVar36->field_0x24 = local_6a8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_6a0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_6a0._4_4_;
    local_6c8 = (code *)lVar46;
    uStack_6c0 = uVar29;
    local_6b8 = (undefined **)lVar30;
    uStack_6b0 = (FXPBDBendingConstraints *)uVar31;
    local_6a8 = uVar23;
    uStack_6a0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_6b8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar12 = (this->XAnisoBendingElementConstraints).Object;
  if (pFVar12 != (FXPBDAnisotropicBendingConstraints *)0x0) {
    local_258 = (local_b88.Constraints)->Evolution;
    local_268 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__00VFXPBDAnisotropicBendingConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDAnisotropicBendingConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_278[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<1,Chaos::Softs::FXPBDAnisotropicBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_250 = (undefined ***)0x0;
    local_260 = pFVar12;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_278);
    if (local_278[0] != (code *)0x0) {
      pppuVar41 = &local_268;
      if (local_250 != (undefined ***)0x0) {
        pppuVar41 = local_250;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_688 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFXPBDAnisotropicBendingConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDAnisotropicBendingConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_680 = (this->XAnisoBendingElementConstraints).Object;
    local_698 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDAnisotropicBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_670 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_698;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_690;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_688;
    *(undefined4 *)&pTVar36->field_0x14 = local_688._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_680;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_680._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_678;
    *(undefined4 *)&pTVar36->field_0x24 = local_678._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_670;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_670._4_4_;
    local_698 = (code *)lVar46;
    uStack_690 = uVar29;
    local_688 = (undefined **)lVar30;
    uStack_680 = (FXPBDAnisotropicBendingConstraints *)uVar31;
    local_678 = uVar23;
    uStack_670 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_688;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar13 = (this->XAreaConstraints).Object;
  if (pFVar13 != (FXPBDAreaSpringConstraints *)0x0) {
    local_228 = (local_b88.Constraints)->Evolution;
    local_238 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__0A_VFXPBDAreaSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDAreaSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_248[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDAreaSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_220 = (undefined ***)0x0;
    local_230 = pFVar13;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_248);
    if (local_248[0] != (code *)0x0) {
      pppuVar41 = &local_238;
      if (local_220 != (undefined ***)0x0) {
        pppuVar41 = local_220;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_658 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFXPBDAreaSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDAreaSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_650 = (this->XAreaConstraints).Object;
    local_668 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDAreaSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_640 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_668;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_660;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_658;
    *(undefined4 *)&pTVar36->field_0x14 = local_658._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_650;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_650._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_648;
    *(undefined4 *)&pTVar36->field_0x24 = local_648._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_640;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_640._4_4_;
    local_668 = (code *)lVar46;
    uStack_660 = uVar29;
    local_658 = (undefined **)lVar30;
    uStack_650 = (FXPBDAreaSpringConstraints *)uVar31;
    local_648 = uVar23;
    uStack_640 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_658;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar14 = (this->AreaConstraints).Object;
  if (pFVar14 != (FPBDAreaSpringConstraints *)0x0) {
    local_1f8 = (local_b88.Constraints)->Evolution;
    local_208 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddPBDParallelInitRule_VFPBDAreaSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDAreaSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_218[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPBDParallelInitRule<Chaos::Softs::FPBDAreaSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_1f0 = (undefined ***)0x0;
    local_200 = pFVar14;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_218);
    if (local_218[0] != (code *)0x0) {
      pppuVar41 = &local_208;
      if (local_1f0 != (undefined ***)0x0) {
        pppuVar41 = local_1f0;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_628 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFPBDAreaSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDAreaSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_620 = (this->AreaConstraints).Object;
    local_638 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDAreaSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_610 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_638;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_630;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_628;
    *(undefined4 *)&pTVar36->field_0x14 = local_628._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_620;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_620._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_618;
    *(undefined4 *)&pTVar36->field_0x24 = local_618._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_610;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_610._4_4_;
    local_638 = (code *)lVar46;
    uStack_630 = uVar29;
    local_628 = (undefined **)lVar30;
    uStack_620 = (FPBDAreaSpringConstraints *)uVar31;
    local_618 = uVar23;
    uStack_610 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_628;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  if ((this->XAnisoSpringConstraints).Object != (FXPBDAnisotropicSpringConstraints *)0x0) {
    uStack_5e0 = (longlong *)0x0;
    local_5f8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A___CBVFXPBDAnisotropicAxialSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEBVFXPBDAnisotropicAxialSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    pFVar38 = TSharedPtr<Chaos::Softs::FXPBDAnisotropicSpringConstraints,1>::operator->
                        (&this->XAnisoSpringConstraints);
    iVar45 = local_b88.ConstraintRuleIndex;
    uStack_5f0 = &pFVar38->AxialConstraints;
    local_608 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints_const_>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_608;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_600;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_5f8;
    *(undefined4 *)&pTVar36->field_0x14 = local_5f8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_5f0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_5f0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_5e8;
    *(undefined4 *)&pTVar36->field_0x24 = local_5e8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_5e0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_5e0._4_4_;
    local_608 = (code *)lVar46;
    uStack_600 = uVar29;
    local_5f8 = (undefined **)lVar30;
    uStack_5f0 = (FXPBDAnisotropicAxialSpringConstraints *)uVar31;
    local_5e8 = uVar23;
    uStack_5e0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_5f8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  iVar45 = local_b88.ConstraintRuleIndex;
  pFVar15 = (this->MaximumDistanceConstraints).Object;
  if (pFVar15 != (FPBDSphericalConstraint *)0x0) {
    local_5d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDSphericalConstraint>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_5c8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFPBDSphericalConstraint_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDSphericalConstraint_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_5b0 = (longlong *)0x0;
    uStack_5c0 = pFVar15;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_5d8;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_5d0;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_5c8;
    *(undefined4 *)&pTVar36->field_0x14 = local_5c8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_5c0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_5c0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_5b8;
    *(undefined4 *)&pTVar36->field_0x24 = local_5b8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_5b0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_5b0._4_4_;
    local_5d8 = (code *)lVar46;
    uStack_5d0 = uVar29;
    local_5c8 = (undefined **)lVar30;
    uStack_5c0 = (FPBDSphericalConstraint *)uVar31;
    local_5b8 = uVar23;
    uStack_5b0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_5c8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  iVar45 = local_b88.ConstraintRuleIndex;
  pFVar16 = (this->BackstopConstraints).Object;
  if (pFVar16 != (FPBDSphericalBackstopConstraint *)0x0) {
    local_5a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDSphericalBackstopConstraint>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_598 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFPBDSphericalBackstopConstraint_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDSphericalBackstopConstraint_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_580 = (longlong *)0x0;
    uStack_590 = pFVar16;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_5a8;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_5a0;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_598;
    *(undefined4 *)&pTVar36->field_0x14 = local_598._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_590;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_590._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_588;
    *(undefined4 *)&pTVar36->field_0x24 = local_588._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_580;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_580._4_4_;
    local_5a8 = (code *)lVar46;
    uStack_5a0 = uVar29;
    local_598 = (undefined **)lVar30;
    uStack_590 = (FPBDSphericalBackstopConstraint *)uVar31;
    local_588 = uVar23;
    uStack_580 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_598;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar17 = (this->AnimDriveConstraints).Object;
  if (pFVar17 != (FPBDAnimDriveConstraint *)0x0) {
    local_1c8 = (local_b88.Constraints)->Evolution;
    local_1d8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddPBDParallelInitRule_VFPBDAnimDriveConstraint_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDAnimDriveConstraint_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_1e8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPBDParallelInitRule<Chaos::Softs::FPBDAnimDriveConstraint>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_1c0 = (undefined ***)0x0;
    local_1d0 = pFVar17;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_1e8);
    if (local_1e8[0] != (code *)0x0) {
      pppuVar41 = &local_1d8;
      if (local_1c0 != (undefined ***)0x0) {
        pppuVar41 = local_1c0;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_568 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFPBDAnimDriveConstraint_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDAnimDriveConstraint_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_560 = (this->AnimDriveConstraints).Object;
    local_578 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDAnimDriveConstraint>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_550 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_578;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_570;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_568;
    *(undefined4 *)&pTVar36->field_0x14 = local_568._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_560;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_560._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_558;
    *(undefined4 *)&pTVar36->field_0x24 = local_558._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_550;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_550._4_4_;
    local_578 = (code *)lVar46;
    uStack_570 = uVar29;
    local_568 = (undefined **)lVar30;
    uStack_560 = (FPBDAnimDriveConstraint *)uVar31;
    local_558 = uVar23;
    uStack_550 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_568;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar18 = (this->ClothVertexSpringConstraints).Object;
  if (pFVar18 != (FXPBDVertexConstraints *)0x0) {
    local_108 = (local_b88.Constraints)->Evolution;
    local_118 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__0A_VFXPBDVertexConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDVertexConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_128[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDVertexConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_100 = (undefined ***)0x0;
    local_110 = pFVar18;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_128);
    if (local_128[0] != (code *)0x0) {
      pppuVar41 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar41 = local_100;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_538 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFXPBDVertexConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDVertexConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_530 = (this->ClothVertexSpringConstraints).Object;
    local_548 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDVertexConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_520 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_548;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_540;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_538;
    *(undefined4 *)&pTVar36->field_0x14 = local_538._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_530;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_530._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_528;
    *(undefined4 *)&pTVar36->field_0x24 = local_528._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_520;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_520._4_4_;
    local_548 = (code *)lVar46;
    uStack_540 = uVar29;
    local_538 = (undefined **)lVar30;
    uStack_530 = (FXPBDVertexConstraints *)uVar31;
    local_528 = uVar23;
    uStack_520 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_538;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar19 = (this->ClothVertexFaceSpringConstraints).Object;
  if (pFVar19 != (FXPBDVertexFaceConstraints *)0x0) {
    local_168 = (local_b88.Constraints)->Evolution;
    local_178 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__0A_VFXPBDVertexFaceConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDVertexFaceConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_188[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDVertexFaceConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_160 = (undefined ***)0x0;
    local_170 = pFVar19;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_188);
    if (local_188[0] != (code *)0x0) {
      pppuVar41 = &local_178;
      if (local_160 != (undefined ***)0x0) {
        pppuVar41 = local_160;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_508 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFXPBDVertexFaceConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDVertexFaceConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_500 = (this->ClothVertexFaceSpringConstraints).Object;
    local_518 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDVertexFaceConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_4f0 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_518;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_510;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_508;
    *(undefined4 *)&pTVar36->field_0x14 = local_508._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_500;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_500._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_4f8;
    *(undefined4 *)&pTVar36->field_0x24 = local_4f8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_4f0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_4f0._4_4_;
    local_518 = (code *)lVar46;
    uStack_510 = uVar29;
    local_508 = (undefined **)lVar30;
    uStack_500 = (FXPBDVertexFaceConstraints *)uVar31;
    local_4f8 = uVar23;
    uStack_4f0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_508;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  pFVar20 = (this->ClothFaceSpringConstraints).Object;
  if (pFVar20 != (FXPBDFaceConstraints *)0x0) {
    local_138 = (local_b88.Constraints)->Evolution;
    local_148 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddXPBDParallelInitRule__0A_VFXPBDFaceConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDFaceConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_158[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDFaceConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                   ::Call;
    local_130 = (undefined ***)0x0;
    local_140 = pFVar20;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_158);
    if (local_158[0] != (code *)0x0) {
      pppuVar41 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar41 = local_130;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.ConstraintRuleIndex;
    local_4d8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__0A_VFXPBDFaceConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFXPBDFaceConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_4d0 = (this->ClothFaceSpringConstraints).Object;
    local_4e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDFaceConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.ConstraintRuleIndex = local_b88.ConstraintRuleIndex + 1;
    uStack_4c0 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_4e8;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_4e0;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_4d8;
    *(undefined4 *)&pTVar36->field_0x14 = local_4d8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_4d0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_4d0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_4c8;
    *(undefined4 *)&pTVar36->field_0x24 = local_4c8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_4c0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_4c0._4_4_;
    local_4e8 = (code *)lVar46;
    uStack_4e0 = uVar29;
    local_4d8 = (undefined **)lVar30;
    uStack_4d0 = (FXPBDFaceConstraints *)uVar31;
    local_4c8 = uVar23;
    uStack_4c0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_4d8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  if ((this->CollisionConstraint).Object != (FPBDSoftBodyCollisionConstraint *)0x0) {
    lVar46 = (longlong)local_b88.CollisionConstraintRulesIndex;
    local_4a8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`77'::<lambda_4>,0,0>
                 ::_vftable_;
    local_4b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l77::<lambda_4>,void,Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&>
                ::Call;
    uVar33 = local_b88.CollisionConstraintRulesIndex + 1;
    uStack_490 = (longlong *)0x0;
    uVar34 = uVar35;
    if (local_b88.CollisionConstraintRulesIndex <
        local_b88.PerIterationCollisionConstraintRules.ArrayNum) {
      uVar34 = (uint)~local_b88.CollisionConstraintRulesIndex >> 0x1f;
    }
    local_b88.CollisionConstraintRulesIndex = uVar33;
    uStack_4a0 = this;
    if ((uVar34 == 0) &&
       (local_b98 = lVar46,
       local_b90 = (longlong)local_b88.PerIterationCollisionConstraintRules.ArrayNum,
       bVar32 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar32)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    local_b88.PerIterationCollisionConstraintRules.DataPtr =
         local_b88.PerIterationCollisionConstraintRules.DataPtr + lVar46;
    lVar46 = *(longlong *)local_b88.PerIterationCollisionConstraintRules.DataPtr;
    uVar29 = *(undefined8 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x8;
    lVar30 = *(longlong *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x10;
    uVar31 = *(undefined8 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x18;
    uVar23 = *(undefined8 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x20;
    plVar24 = *(longlong **)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x28;
    *(code **)local_b88.PerIterationCollisionConstraintRules.DataPtr = local_4b8;
    *(undefined8 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x8 = uStack_4b0
    ;
    *(undefined4 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x10 =
         (undefined4)local_4a8;
    *(undefined4 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x14 =
         local_4a8._4_4_;
    *(undefined4 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x18 =
         (undefined4)uStack_4a0;
    *(undefined4 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x1c =
         uStack_4a0._4_4_;
    *(undefined4 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x20 =
         (undefined4)local_498;
    *(undefined4 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x24 =
         local_498._4_4_;
    *(undefined4 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x28 =
         (undefined4)uStack_490;
    *(undefined4 *)&(local_b88.PerIterationCollisionConstraintRules.DataPtr)->field_0x2c =
         uStack_490._4_4_;
    local_4b8 = (code *)lVar46;
    uStack_4b0 = uVar29;
    local_4a8 = (undefined **)lVar30;
    uStack_4a0 = (FClothConstraints *)uVar31;
    local_498 = uVar23;
    uStack_490 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_4a8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    lVar46 = (longlong)local_b88.UpdateLinearSystemCollisionsRulesIndex;
    local_478 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1____AddUpdateLinearSystemCollisionsRule_UpdateLinearSystem_VFPBDSoftBodyCollisionConstraint_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDSoftBodyCollisionConstraint_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_470 = (this->CollisionConstraint).Object;
    local_488 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemCollisionsRule_UpdateLinearSystem<Chaos::Softs::FPBDSoftBodyCollisionConstraint>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&>
                ::Call;
    uVar34 = local_b88.UpdateLinearSystemCollisionsRulesIndex + 1;
    uStack_460 = (longlong *)0x0;
    if (local_b88.UpdateLinearSystemCollisionsRulesIndex <
        local_b88.UpdateLinearSystemCollisionsRules.ArrayNum) {
      uVar35 = (uint)~local_b88.UpdateLinearSystemCollisionsRulesIndex >> 0x1f;
    }
    local_b88.UpdateLinearSystemCollisionsRulesIndex = uVar34;
    if ((uVar35 == 0) &&
       (local_b98 = lVar46,
       local_b90 = (longlong)local_b88.UpdateLinearSystemCollisionsRules.ArrayNum,
       bVar32 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar32)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    local_b88.UpdateLinearSystemCollisionsRules.DataPtr =
         local_b88.UpdateLinearSystemCollisionsRules.DataPtr + lVar46;
    lVar46 = *(longlong *)local_b88.UpdateLinearSystemCollisionsRules.DataPtr;
    uVar29 = *(undefined8 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x8;
    lVar30 = *(longlong *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x10;
    uVar31 = *(undefined8 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x18;
    uVar23 = *(undefined8 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x20;
    plVar24 = *(longlong **)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x28;
    *(code **)local_b88.UpdateLinearSystemCollisionsRules.DataPtr = local_488;
    *(undefined8 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x8 = uStack_480;
    *(undefined4 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x10 =
         (undefined4)local_478;
    *(undefined4 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x14 =
         local_478._4_4_;
    *(undefined4 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x18 =
         (undefined4)uStack_470;
    *(undefined4 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x1c =
         uStack_470._4_4_;
    *(undefined4 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x20 =
         (undefined4)local_468;
    *(undefined4 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x24 =
         local_468._4_4_;
    *(undefined4 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x28 =
         (undefined4)uStack_460;
    *(undefined4 *)&(local_b88.UpdateLinearSystemCollisionsRules.DataPtr)->field_0x2c =
         uStack_460._4_4_;
    local_488 = (code *)lVar46;
    uStack_480 = uVar29;
    local_478 = (undefined **)lVar30;
    uStack_470 = (FPBDSoftBodyCollisionConstraint *)uVar31;
    local_468 = uVar23;
    uStack_460 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_478;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  if ((this->SkinnedTriangleCollisionsConstraint).Object !=
      (FPBDSkinnedTriangleMeshCollisionConstraints *)0x0) {
    local_d0 = (undefined ***)0x0;
    local_e8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`80'::<lambda_5>,0,0>
                ::_vftable_;
    local_f8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l80::<lambda_5>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                  ::Call;
    local_e0 = this;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_f8);
    if (local_f8[0] != (code *)0x0) {
      pppuVar41 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar41 = local_d0;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.PostCollisionConstraintRulesIndex;
    local_448 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__00VFPBDSkinnedTriangleMeshCollisionConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDSkinnedTriangleMeshCollisionConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_440 = (this->SkinnedTriangleCollisionsConstraint).Object;
    local_458 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.PostCollisionConstraintRulesIndex = local_b88.PostCollisionConstraintRulesIndex + 1;
    uStack_430 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationPostCollisionsConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_458;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_450;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_448;
    *(undefined4 *)&pTVar36->field_0x14 = local_448._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_440;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_440._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_438;
    *(undefined4 *)&pTVar36->field_0x24 = local_438._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_430;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_430._4_4_;
    local_458 = (code *)lVar46;
    uStack_450 = uVar29;
    local_448 = (undefined **)lVar30;
    uStack_440 = (FPBDSkinnedTriangleMeshCollisionConstraints *)uVar31;
    local_438 = uVar23;
    uStack_430 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_448;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  if (((this->SelfCollisionInit).Object != (FPBDTriangleMeshCollisions *)0x0) &&
     ((this->SelfCollisionConstraints).Object != (FPBDCollisionSpringConstraints *)0x0)) {
    local_a0 = (undefined ***)0x0;
    local_b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`83'::<lambda_6>,0,0>
                ::_vftable_;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l83::<lambda_6>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                  ::Call;
    local_b0 = this;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_c8);
    if (local_c8[0] != (code *)0x0) {
      pppuVar41 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar41 = local_a0;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.PostCollisionConstraintRulesIndex;
    local_418 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__00VFPBDCollisionSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDCollisionSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_410 = (this->SelfCollisionConstraints).Object;
    local_428 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDCollisionSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.PostCollisionConstraintRulesIndex = local_b88.PostCollisionConstraintRulesIndex + 1;
    uStack_400 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationPostCollisionsConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_428;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_420;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_418;
    *(undefined4 *)&pTVar36->field_0x14 = local_418._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_410;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_410._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_408;
    *(undefined4 *)&pTVar36->field_0x24 = local_408._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_400;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_400._4_4_;
    local_428 = (code *)lVar46;
    uStack_420 = uVar29;
    local_418 = (undefined **)lVar30;
    uStack_410 = (FPBDCollisionSpringConstraints *)uVar31;
    local_408 = uVar23;
    uStack_400 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_418;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1____AddUpdateLinearSystemRule_UpdateLinearSystem_VFPBDCollisionSpringConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDCollisionSpringConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_80 = (this->SelfCollisionConstraints).Object;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemRule_UpdateLinearSystem<Chaos::Softs::FPBDCollisionSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
                  ::Call;
    FRuleCreator::AddUpdateLinearSystemRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>
                *)local_98);
    if (local_98[0] != (code *)0x0) {
      pppuVar41 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar41 = local_70;
      }
      (*(code *)(*pppuVar41)[2])();
    }
  }
  iVar45 = local_b88.PostCollisionConstraintRulesIndex;
  pFVar21 = (this->RepulsionConstraints).Object;
  if (pFVar21 != (FPBDVertexFaceRepulsionConstraints *)0x0) {
    local_3f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDVertexFaceRepulsionConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_3e8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__00VFPBDVertexFaceRepulsionConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDVertexFaceRepulsionConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_b88.PostCollisionConstraintRulesIndex = local_b88.PostCollisionConstraintRulesIndex + 1;
    uStack_3d0 = (longlong *)0x0;
    uStack_3e0 = pFVar21;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationPostCollisionsConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_3f8;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_3f0;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_3e8;
    *(undefined4 *)&pTVar36->field_0x14 = local_3e8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_3e0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_3e0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_3d8;
    *(undefined4 *)&pTVar36->field_0x24 = local_3d8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_3d0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_3d0._4_4_;
    local_3f8 = (code *)lVar46;
    uStack_3f0 = uVar29;
    local_3e8 = (undefined **)lVar30;
    uStack_3e0 = (FPBDVertexFaceRepulsionConstraints *)uVar31;
    local_3d8 = uVar23;
    uStack_3d0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_3e8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  if ((this->SelfCollisionSphereConstraints).Object != (FPBDSelfCollisionSphereConstraints *)0x0) {
    local_40 = (undefined ***)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`89'::<lambda_7>,0,0>
                ::_vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l89::<lambda_7>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
                  ::Call;
    local_50 = this;
    FRuleCreator::AddPostInitialGuessParallelInitRule
              (&local_b88,
               (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>
                *)local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar41 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar41 = local_40;
      }
      (*(code *)(*pppuVar41)[2])();
    }
    iVar45 = local_b88.PostCollisionConstraintRulesIndex;
    local_3b8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____AddPerIterationPBDConstraintRule_Apply__00VFPBDSelfCollisionSphereConstraints_Softs_Chaos___FRuleCreator_FClothConstraints_Chaos__QEAAXQEAVFPBDSelfCollisionSphereConstraints_Softs_4__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_3b0 = (this->SelfCollisionSphereConstraints).Object;
    local_3c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDSelfCollisionSphereConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
                ::Call;
    local_b88.PostCollisionConstraintRulesIndex = local_b88.PostCollisionConstraintRulesIndex + 1;
    uStack_3a0 = (longlong *)0x0;
    pTVar36 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::
              operator[](&local_b88.PerIterationPostCollisionsConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar36;
    uVar29 = *(undefined8 *)&pTVar36->field_0x8;
    lVar30 = *(longlong *)&pTVar36->field_0x10;
    uVar31 = *(undefined8 *)&pTVar36->field_0x18;
    uVar23 = *(undefined8 *)&pTVar36->field_0x20;
    plVar24 = *(longlong **)&pTVar36->field_0x28;
    *(code **)pTVar36 = local_3c8;
    *(undefined8 *)&pTVar36->field_0x8 = uStack_3c0;
    *(undefined4 *)&pTVar36->field_0x10 = (undefined4)local_3b8;
    *(undefined4 *)&pTVar36->field_0x14 = local_3b8._4_4_;
    *(undefined4 *)&pTVar36->field_0x18 = (undefined4)uStack_3b0;
    *(undefined4 *)&pTVar36->field_0x1c = uStack_3b0._4_4_;
    *(undefined4 *)&pTVar36->field_0x20 = (undefined4)local_3a8;
    *(undefined4 *)&pTVar36->field_0x24 = local_3a8._4_4_;
    *(undefined4 *)&pTVar36->field_0x28 = (undefined4)uStack_3a0;
    *(undefined4 *)&pTVar36->field_0x2c = uStack_3a0._4_4_;
    local_3c8 = (code *)lVar46;
    uStack_3c0 = uVar29;
    local_3b8 = (undefined **)lVar30;
    uStack_3b0 = (FPBDSelfCollisionSphereConstraints *)uVar31;
    local_3a8 = uVar23;
    uStack_3a0 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_3b8;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  iVar43 = local_b88.PreSubstepConstraintRulesIndex;
  iVar45 = local_b88.PreSubstepConstraintRulesIndex;
  if (((this->SelfCollisionInit).Object != (FPBDTriangleMeshCollisions *)0x0) &&
     ((this->SelfIntersectionConstraints).Object != (FPBDTriangleMeshIntersections *)0x0)) {
    local_388 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`92'::<lambda_8>,0,0>
                 ::_vftable_;
    uStack_370 = (longlong *)0x0;
    iVar45 = local_b88.PreSubstepConstraintRulesIndex + 1;
    local_398 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l92::<lambda_8>,void,Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode>
                ::Call;
    local_b88.PreSubstepConstraintRulesIndex = iVar45;
    uStack_380 = this;
    pTVar37 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ::operator[](&local_b88.PreSubstepConstraintRules,iVar43);
    lVar46 = *(longlong *)pTVar37;
    uVar29 = *(undefined8 *)&pTVar37->field_0x8;
    lVar30 = *(longlong *)&pTVar37->field_0x10;
    uVar31 = *(undefined8 *)&pTVar37->field_0x18;
    uVar23 = *(undefined8 *)&pTVar37->field_0x20;
    plVar24 = *(longlong **)&pTVar37->field_0x28;
    *(code **)pTVar37 = local_398;
    *(undefined8 *)&pTVar37->field_0x8 = uStack_390;
    *(undefined4 *)&pTVar37->field_0x10 = (undefined4)local_388;
    *(undefined4 *)&pTVar37->field_0x14 = local_388._4_4_;
    *(undefined4 *)&pTVar37->field_0x18 = (undefined4)uStack_380;
    *(undefined4 *)&pTVar37->field_0x1c = uStack_380._4_4_;
    *(undefined4 *)&pTVar37->field_0x20 = (undefined4)local_378;
    *(undefined4 *)&pTVar37->field_0x24 = local_378._4_4_;
    *(undefined4 *)&pTVar37->field_0x28 = (undefined4)uStack_370;
    *(undefined4 *)&pTVar37->field_0x2c = uStack_370._4_4_;
    local_398 = (code *)lVar46;
    uStack_390 = uVar29;
    local_388 = (undefined **)lVar30;
    uStack_380 = (FClothConstraints *)uVar31;
    local_378 = uVar23;
    uStack_370 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_388;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    iVar43 = local_b88.PostSubstepConstraintRulesIndex;
    local_358 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`92'::<lambda_9>,0,0>
                 ::_vftable_;
    uStack_340 = (longlong *)0x0;
    local_368 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l92::<lambda_9>,void,Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode>
                ::Call;
    local_b88.PostSubstepConstraintRulesIndex = local_b88.PostSubstepConstraintRulesIndex + 1;
    uStack_350 = this;
    pTVar37 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ::operator[](&local_b88.PostSubstepConstraintRules,iVar43);
    lVar46 = *(longlong *)pTVar37;
    uVar29 = *(undefined8 *)&pTVar37->field_0x8;
    lVar30 = *(longlong *)&pTVar37->field_0x10;
    uVar31 = *(undefined8 *)&pTVar37->field_0x18;
    uVar23 = *(undefined8 *)&pTVar37->field_0x20;
    plVar24 = *(longlong **)&pTVar37->field_0x28;
    *(code **)pTVar37 = local_368;
    *(undefined8 *)&pTVar37->field_0x8 = uStack_360;
    *(undefined4 *)&pTVar37->field_0x10 = (undefined4)local_358;
    *(undefined4 *)&pTVar37->field_0x14 = local_358._4_4_;
    *(undefined4 *)&pTVar37->field_0x18 = (undefined4)uStack_350;
    *(undefined4 *)&pTVar37->field_0x1c = uStack_350._4_4_;
    *(undefined4 *)&pTVar37->field_0x20 = (undefined4)local_348;
    *(undefined4 *)&pTVar37->field_0x24 = local_348._4_4_;
    *(undefined4 *)&pTVar37->field_0x28 = (undefined4)uStack_340;
    *(undefined4 *)&pTVar37->field_0x2c = uStack_340._4_4_;
    local_368 = (code *)lVar46;
    uStack_360 = uVar29;
    local_358 = (undefined **)lVar30;
    uStack_350 = (FClothConstraints *)uVar31;
    local_348 = uVar23;
    uStack_340 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_358;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  if ((this->LongRangeConstraints).Object != (FPBDLongRangeConstraints *)0x0) {
    uStack_310 = (longlong *)0x0;
    local_328 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothConstraints::CreateForceBasedRules'::`95'::<lambda_10>,0,0>
                 ::_vftable_;
    local_338 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l95::<lambda_10>,void,Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode>
                ::Call;
    local_b88.PreSubstepConstraintRulesIndex = iVar45 + 1;
    uStack_320 = this;
    pTVar37 = TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
              ::operator[](&local_b88.PreSubstepConstraintRules,iVar45);
    lVar46 = *(longlong *)pTVar37;
    uVar29 = *(undefined8 *)&pTVar37->field_0x8;
    lVar30 = *(longlong *)&pTVar37->field_0x10;
    uVar31 = *(undefined8 *)&pTVar37->field_0x18;
    uVar23 = *(undefined8 *)&pTVar37->field_0x20;
    plVar24 = *(longlong **)&pTVar37->field_0x28;
    *(code **)pTVar37 = local_338;
    *(undefined8 *)&pTVar37->field_0x8 = uStack_330;
    *(undefined4 *)&pTVar37->field_0x10 = (undefined4)local_328;
    *(undefined4 *)&pTVar37->field_0x14 = local_328._4_4_;
    *(undefined4 *)&pTVar37->field_0x18 = (undefined4)uStack_320;
    *(undefined4 *)&pTVar37->field_0x1c = uStack_320._4_4_;
    *(undefined4 *)&pTVar37->field_0x20 = (undefined4)local_318;
    *(undefined4 *)&pTVar37->field_0x24 = local_318._4_4_;
    *(undefined4 *)&pTVar37->field_0x28 = (undefined4)uStack_310;
    *(undefined4 *)&pTVar37->field_0x2c = uStack_310._4_4_;
    local_338 = (code *)lVar46;
    uStack_330 = uVar29;
    local_328 = (undefined **)lVar30;
    uStack_320 = (FClothConstraints *)uVar31;
    local_318 = uVar23;
    uStack_310 = plVar24;
    if (lVar46 != 0) {
      plVar42 = &local_328;
      if (plVar24 != (longlong *)0x0) {
        plVar42 = plVar24;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
  }
  FRuleCreator::~FRuleCreator(&local_b88);
  return;
}

// CreateGSRules @ 14dbcc950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Chaos::FClothConstraints::CreateGSRules(FClothConstraints *this)

{
  undefined4 uVar1;
  FPBDEvolution *pFVar2;
  longlong lVar3;
  FXPBDStretchBiasElementConstraints *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  TReferenceControllerBase<1> *pTVar21;
  TSharedRef<Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>,1>
  *pTVar22;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar23;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *pFVar24;
  IFileManager *pIVar25;
  FString *pFVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  ForAnyElementType FVar29;
  longlong *plVar30;
  longlong *plVar31;
  TReferenceControllerBase<1> *pTVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  undefined1 auStackY_578 [32];
  bool local_538 [8];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_530;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *local_520;
  FSharedReferencer<1> FStack_518;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_510;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_500;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_4f0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_4e0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_4d0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_4c0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_4b0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_4a0;
  FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> *local_490;
  FSharedReferencer<1> local_488;
  FDeformableXPBDCorotatedParams local_480;
  FString local_470;
  FScriptContainerElement *local_460;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_458;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_448;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_438;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_428;
  FScriptContainerElement *local_418;
  uint uStack_410;
  undefined4 uStack_40c;
  undefined2 local_3fb;
  undefined1 local_3f9;
  TSharedRef<Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>,1>
  local_3f8;
  TStringView<wchar_t> local_3e8;
  FString local_3d8;
  undefined4 local_3bc;
  undefined4 local_3ac;
  longlong local_3a8;
  longlong lStack_3a0;
  longlong local_398;
  longlong lStack_390;
  undefined8 local_388;
  longlong *plStack_380;
  longlong local_378;
  longlong lStack_370;
  longlong local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  longlong *plStack_350;
  longlong local_348;
  longlong lStack_340;
  longlong local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  longlong *plStack_320;
  longlong local_318;
  longlong lStack_310;
  longlong local_308;
  longlong lStack_300;
  longlong local_2f8;
  longlong *plStack_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  longlong local_2c8;
  longlong *plStack_2c0;
  longlong local_2b8;
  longlong lStack_2b0;
  longlong local_2a8;
  longlong lStack_2a0;
  longlong local_298;
  longlong *plStack_290;
  longlong local_288;
  longlong lStack_280;
  longlong local_278;
  longlong lStack_270;
  longlong local_268;
  longlong *plStack_260;
  longlong local_258;
  longlong lStack_250;
  longlong local_248;
  longlong lStack_240;
  longlong local_238;
  longlong *plStack_230;
  longlong local_228;
  longlong lStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  longlong *plStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  longlong *plStack_1d0;
  code *local_1c8;
  longlong lStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  longlong *plStack_1a0;
  code *local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong *plStack_170;
  code *local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  longlong *plStack_140;
  code *local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong *plStack_110;
  code *local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  code *local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  code *local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_578;
  if ((this->PBDEvolution == (FPBDEvolution *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("PBDEvolution",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                          ,0x200,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->ConstraintInitOffset != -1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintInitOffset == INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                          ,0x201,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->PBDEvolution == (FPBDEvolution *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("PBDEvolution",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                          ,0x1dc,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar32 = (TReferenceControllerBase<1> *)0x0;
  this->NumConstraintInits = 1;
  this->NumConstraintRules = 0;
  iVar16 = 1;
  iVar17 = 1;
  if ((this->XStretchBiasConstraints).Object != (FXPBDStretchBiasElementConstraints *)0x0) {
    iVar16 = 2;
    this->NumConstraintInits = 2;
    iVar17 = 2;
  }
  if ((this->XBendingElementConstraints).Object != (FXPBDBendingConstraints *)0x0) {
    iVar17 = iVar16 + 1;
    this->NumConstraintInits = iVar17;
    iVar16 = iVar17;
  }
  if ((this->XEdgeConstraints).Object != (FXPBDEdgeSpringConstraints *)0x0) {
    iVar17 = iVar16 + 1;
    this->NumConstraintInits = iVar17;
    iVar16 = iVar17;
  }
  if ((this->XAnisoBendingElementConstraints).Object != (FXPBDAnisotropicBendingConstraints *)0x0) {
    iVar17 = iVar16 + 1;
    this->NumConstraintInits = iVar17;
  }
  this->NumConstraintRules = (bMakeSandwich != false) + 1;
  iVar17 = Softs::FPBDEvolution::AddConstraintInitRange(this->PBDEvolution,iVar17,false);
  this->ConstraintInitOffset = iVar17;
  if ((this->ConstraintRuleOffset != -1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintRuleOffset == INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                          ,0x206,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar17 = Softs::FPBDEvolution::AddConstraintRuleRange
                     (this->PBDEvolution,this->NumConstraintRules,false);
  this->ConstraintRuleOffset = iVar17;
  if ((this->PostprocessingConstraintRuleOffset != -1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("PostprocessingConstraintRuleOffset == INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                          ,0x20a,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (bWriteFinalResiduals != false) {
    iVar17 = Softs::FPBDEvolution::AddConstraintPostprocessingsRange(this->PBDEvolution,1,false);
    this->PostprocessingConstraintRuleOffset = iVar17;
  }
  pFVar2 = this->PBDEvolution;
  pFVar35 = (pFVar2->MConstraintInits).AllocatorInstance.Data +
            (longlong)this->ConstraintInitOffset * 0x30;
  pFVar36 = (pFVar2->MConstraintRules).AllocatorInstance.Data +
            (longlong)this->ConstraintRuleOffset * 0x30;
  local_460 = (pFVar2->MConstraintPostprocessings).AllocatorInstance.Data +
              (longlong)this->PostprocessingConstraintRuleOffset * 0x30;
  pTVar21 = ::operator_new(0x270);
  fVar14 = __real_3f800000;
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    local_520 = ___xmm_00000000000000000000000000000010;
    pFVar24 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)&DAT_00000010;
    FStack_518.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar21->SharedReferenceCount = (atomic<int>)0x1;
    pTVar21->WeakReferenceCount = (atomic<int>)0x1;
    pTVar21->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__FGaussSeidelMainConstraint_MVFSolverParticles_Softs_Chaos___Softs_Chaos___00_SharedPointerInternals__6B_
    ;
    local_480.XPBDCorotatedBatchSize = 5;
    local_480.XPBDCorotatedBatchThreshold = 5;
    local_480.NumLogExtremeParticle = 0;
    Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
    FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>
              ((FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)(pTVar21 + 1),
               &pFVar2->MParticles,bClothDoQuasistatics,bUseSOR,SOROmega,100,fVar14,&local_480);
    pFVar24 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)(pTVar21 + 1);
    if ((pFVar24 == (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    FStack_518.ReferenceController = pTVar21;
    pTVar32 = pTVar21;
    local_520 = pFVar24;
  }
  if (&this->GSMainConstraint !=
      (TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
       *)&local_520) {
    (this->GSMainConstraint).Object = pFVar24;
    local_520 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GSMainConstraint).SharedReferenceCount,&FStack_518);
  }
  lVar28 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_518.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  if (bClothDoQuasistatics != false) {
    this->PBDEvolution->bDoQuasistatics = bClothDoQuasistatics;
    pFVar2 = this->PBDEvolution;
    if ((*(int *)&pFVar2->field_0x18 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("GroupId < TArrayCollection::Size()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                            ,0x8f,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(int *)&(pFVar2->MGroupGravityAccelerations).field_0x10 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)&(pFVar2->MGroupGravityAccelerations).field_0x8;
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)&((this->GSMainConstraint).Object)->ExternalAcceleration = 0;
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)&(((this->GSMainConstraint).Object)->ExternalAcceleration).field_0x4 = 0;
    uVar1 = *(undefined4 *)(lVar3 + 8);
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)&(((this->GSMainConstraint).Object)->ExternalAcceleration).field_0x8 = uVar1;
  }
  local_318 = *(longlong *)pFVar35;
  lVar7 = *(longlong *)(pFVar35 + 8);
  local_308 = *(longlong *)(pFVar35 + 0x10);
  lStack_300 = *(longlong *)(pFVar35 + 0x18);
  uVar33 = 1;
  lVar3 = *(longlong *)(pFVar35 + 0x20);
  plStack_2f0 = *(longlong **)(pFVar35 + 0x28);
  *(code **)pFVar35 =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float>
       ::Call;
  *(longlong *)(pFVar35 + 8) = lStack_310;
  *(undefined4 *)(pFVar35 + 0x10) = 0x52c9ee80;
  *(undefined4 *)(pFVar35 + 0x14) = 1;
  *(FClothConstraints **)(pFVar35 + 0x18) = this;
  *(longlong *)(pFVar35 + 0x20) = local_2f8;
  *(longlong *)(pFVar35 + 0x28) = 0;
  lStack_310 = lVar7;
  local_2f8 = lVar3;
  if (local_318 != 0) {
    plVar31 = &local_308;
    if (plStack_2f0 != (longlong *)0x0) {
      plVar31 = plStack_2f0;
    }
    (**(code **)(*plVar31 + 0x10))();
  }
  if ((this->XStretchBiasConstraints).Object != (FXPBDStretchBiasElementConstraints *)0x0) {
    local_2e8 = *(longlong *)(pFVar35 + 0x30);
    lVar7 = *(longlong *)(pFVar35 + 0x38);
    local_2d8 = *(longlong *)(pFVar35 + 0x40);
    lStack_2d0 = *(longlong *)(pFVar35 + 0x48);
    uVar33 = 2;
    lVar3 = *(longlong *)(pFVar35 + 0x50);
    plStack_2c0 = *(longlong **)(pFVar35 + 0x58);
    *(code **)(pFVar35 + 0x30) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l42::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar35 + 0x38) = lStack_2e0;
    *(undefined4 *)(pFVar35 + 0x40) = 0x52c9eea0;
    *(undefined4 *)(pFVar35 + 0x44) = 1;
    *(FClothConstraints **)(pFVar35 + 0x48) = this;
    *(longlong *)(pFVar35 + 0x50) = local_2c8;
    *(longlong *)(pFVar35 + 0x58) = 0;
    lStack_2e0 = lVar7;
    local_2c8 = lVar3;
    if (local_2e8 != 0) {
      plVar31 = &local_2d8;
      if (plStack_2c0 != (longlong *)0x0) {
        plVar31 = plStack_2c0;
      }
      (**(code **)(*plVar31 + 0x10))();
    }
  }
  uVar34 = uVar33;
  if ((this->XBendingElementConstraints).Object != (FXPBDBendingConstraints *)0x0) {
    uVar34 = (ulonglong)((int)uVar33 + 1);
    pFVar27 = pFVar35 + uVar33 * 0x30;
    local_2b8 = *(longlong *)pFVar27;
    lVar7 = *(longlong *)(pFVar27 + 8);
    local_2a8 = *(longlong *)(pFVar27 + 0x10);
    lStack_2a0 = *(longlong *)(pFVar27 + 0x18);
    lVar3 = *(longlong *)(pFVar27 + 0x20);
    plStack_290 = *(longlong **)(pFVar27 + 0x28);
    *(code **)pFVar27 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l45::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar27 + 8) = lStack_2b0;
    *(undefined4 *)(pFVar27 + 0x10) = 0x52c9eec0;
    *(undefined4 *)(pFVar27 + 0x14) = 1;
    *(FClothConstraints **)(pFVar27 + 0x18) = this;
    *(longlong *)(pFVar27 + 0x20) = local_298;
    *(longlong *)(pFVar27 + 0x28) = 0;
    lStack_2b0 = lVar7;
    local_298 = lVar3;
    if (local_2b8 != 0) {
      plVar31 = &local_2a8;
      if (plStack_290 != (longlong *)0x0) {
        plVar31 = plStack_290;
      }
      (**(code **)(*plVar31 + 0x10))();
    }
  }
  uVar33 = uVar34;
  if ((this->XAnisoBendingElementConstraints).Object != (FXPBDAnisotropicBendingConstraints *)0x0) {
    uVar33 = (ulonglong)((int)uVar34 + 1);
    pFVar27 = pFVar35 + uVar34 * 0x30;
    local_288 = *(longlong *)pFVar27;
    lVar7 = *(longlong *)(pFVar27 + 8);
    local_278 = *(longlong *)(pFVar27 + 0x10);
    lStack_270 = *(longlong *)(pFVar27 + 0x18);
    lVar3 = *(longlong *)(pFVar27 + 0x20);
    plStack_260 = *(longlong **)(pFVar27 + 0x28);
    *(code **)pFVar27 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l48::<lambda_4>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar27 + 8) = lStack_280;
    *(undefined4 *)(pFVar27 + 0x10) = 0x52c9eee0;
    *(undefined4 *)(pFVar27 + 0x14) = 1;
    *(FClothConstraints **)(pFVar27 + 0x18) = this;
    *(longlong *)(pFVar27 + 0x20) = local_268;
    *(longlong *)(pFVar27 + 0x28) = 0;
    lStack_280 = lVar7;
    local_268 = lVar3;
    if (local_288 != 0) {
      plVar31 = &local_278;
      if (plStack_260 != (longlong *)0x0) {
        plVar31 = plStack_260;
      }
      (**(code **)(*plVar31 + 0x10))();
    }
  }
  if ((this->XEdgeConstraints).Object != (FXPBDEdgeSpringConstraints *)0x0) {
    pFVar35 = pFVar35 + uVar33 * 0x30;
    local_258 = *(longlong *)pFVar35;
    lVar7 = *(longlong *)(pFVar35 + 8);
    local_248 = *(longlong *)(pFVar35 + 0x10);
    lStack_240 = *(longlong *)(pFVar35 + 0x18);
    lVar3 = *(longlong *)(pFVar35 + 0x20);
    plStack_230 = *(longlong **)(pFVar35 + 0x28);
    *(code **)pFVar35 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l51::<lambda_5>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar35 + 8) = lStack_250;
    *(undefined4 *)(pFVar35 + 0x10) = 0x52c9ef00;
    *(undefined4 *)(pFVar35 + 0x14) = 1;
    *(FClothConstraints **)(pFVar35 + 0x18) = this;
    *(longlong *)(pFVar35 + 0x20) = local_238;
    *(longlong *)(pFVar35 + 0x28) = 0;
    lStack_250 = lVar7;
    local_238 = lVar3;
    if (local_258 != 0) {
      plVar31 = &local_248;
      if (plStack_230 != (longlong *)0x0) {
        plVar31 = plStack_230;
      }
      (**(code **)(*plVar31 + 0x10))();
    }
  }
  bVar15 = bDisplayResidual;
  iVar17 = UpperBreadIters;
  if (bMakeSandwich == false) {
    lVar3 = *(longlong *)pFVar36;
    lVar7 = *(longlong *)(pFVar36 + 8);
    lVar12 = *(longlong *)(pFVar36 + 0x10);
    lVar8 = *(longlong *)(pFVar36 + 0x10);
    lVar13 = *(longlong *)(pFVar36 + 0x18);
    lVar10 = *(longlong *)(pFVar36 + 0x18);
    lVar28 = *(longlong *)(pFVar36 + 0x20);
    plVar31 = *(longlong **)(pFVar36 + 0x28);
    if (bEnableCG == false) {
      *(code **)pFVar36 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l69::<lambda_10>,void,Chaos::Softs::FSolverParticles_&,float>
           ::Call;
      *(longlong *)(pFVar36 + 8) = lStack_1f0;
      *(undefined4 *)(pFVar36 + 0x10) = 0x52c9efa0;
      *(undefined4 *)(pFVar36 + 0x14) = 1;
      *(FClothConstraints **)(pFVar36 + 0x18) = this;
      *(longlong *)(pFVar36 + 0x20) = local_1d8;
      *(longlong *)(pFVar36 + 0x28) = 0;
      local_1f8 = lVar3;
      lStack_1f0 = lVar7;
      local_1e8 = lVar12;
      lStack_1e0 = lVar13;
      local_1d8 = lVar28;
      plStack_1d0 = plVar31;
      if (lVar3 == 0) goto LAB_14dbcd49d;
      plVar30 = &local_1e8;
    }
    else {
      *(code **)pFVar36 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l67::<lambda_9>,void,Chaos::Softs::FSolverParticles_&,float>
           ::Call;
      *(longlong *)(pFVar36 + 8) = lStack_220;
      *(undefined4 *)(pFVar36 + 0x10) = 0x52c9ef80;
      *(undefined4 *)(pFVar36 + 0x14) = 1;
      *(FClothConstraints **)(pFVar36 + 0x18) = this;
      *(longlong *)(pFVar36 + 0x20) = local_208;
      *(longlong *)(pFVar36 + 0x28) = 0;
      local_228 = lVar3;
      lStack_220 = lVar7;
      local_218 = lVar8;
      lStack_210 = lVar10;
      local_208 = lVar28;
      plStack_200 = plVar31;
      if (lVar3 == 0) goto LAB_14dbcd49d;
      plVar30 = &local_218;
    }
  }
  else {
    if ((this->XStretchBiasConstraints).Object != (FXPBDStretchBiasElementConstraints *)0x0) {
      local_3a8 = *(longlong *)pFVar36;
      lVar7 = *(longlong *)(pFVar36 + 8);
      local_398 = *(longlong *)(pFVar36 + 0x10);
      lStack_390 = *(longlong *)(pFVar36 + 0x18);
      lVar3 = *(longlong *)(pFVar36 + 0x20);
      plStack_380 = *(longlong **)(pFVar36 + 0x28);
      *(code **)pFVar36 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l57::<lambda_6>,void,Chaos::Softs::FSolverParticles_&,float>
           ::Call;
      *(longlong *)(pFVar36 + 8) = lStack_3a0;
      local_388 = CONCAT35(CONCAT12(local_3f9,local_3fb),CONCAT14(bVar15,iVar17));
      lVar28 = 1;
      *(undefined4 *)(pFVar36 + 0x10) = 0x52c9ef20;
      *(undefined4 *)(pFVar36 + 0x14) = 1;
      *(FClothConstraints **)(pFVar36 + 0x18) = this;
      *(longlong *)(pFVar36 + 0x20) = local_388;
      *(longlong *)(pFVar36 + 0x28) = 0;
      local_388 = lVar3;
      lStack_3a0 = lVar7;
      if (local_3a8 != 0) {
        plVar31 = &local_398;
        if (plStack_380 != (longlong *)0x0) {
          plVar31 = plStack_380;
        }
        (**(code **)(*plVar31 + 0x10))();
        lVar28 = 1;
      }
    }
    lVar3 = *(longlong *)(pFVar36 + lVar28 * 0x30);
    lVar7 = *(longlong *)(pFVar36 + lVar28 * 0x30 + 8);
    pFVar35 = pFVar36 + (lVar28 * 6 + 2) * 8;
    lVar10 = *(longlong *)pFVar35;
    lVar8 = *(longlong *)pFVar35;
    uVar11 = *(undefined8 *)(pFVar35 + 8);
    uVar9 = *(undefined8 *)(pFVar35 + 8);
    uVar6 = *(undefined8 *)(pFVar36 + (lVar28 * 6 + 4) * 8);
    plVar31 = *(longlong **)(pFVar36 + (lVar28 * 6 + 4) * 8 + 8);
    if (bEnableCG == false) {
      local_328 = CONCAT44(local_3ac,MiddleBreadIters);
      *(code **)(pFVar36 + lVar28 * 0x30) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l62::<lambda_8>,void,Chaos::Softs::FSolverParticles_&,float>
           ::Call;
      *(longlong *)(pFVar36 + lVar28 * 0x30 + 8) = lStack_340;
      pFVar35 = pFVar36 + (lVar28 * 6 + 2) * 8;
      *(undefined4 *)pFVar35 = 0x52c9ef60;
      *(undefined4 *)(pFVar35 + 4) = 1;
      *(FClothConstraints **)(pFVar35 + 8) = this;
      *(undefined8 *)(pFVar36 + (lVar28 * 6 + 4) * 8) = local_328;
      *(undefined8 *)(pFVar36 + (lVar28 * 6 + 4) * 8 + 8) = 0;
      local_348 = lVar3;
      lStack_340 = lVar7;
      local_338 = lVar10;
      uStack_330 = uVar11;
      local_328 = uVar6;
      plStack_320 = plVar31;
      if (lVar3 == 0) goto LAB_14dbcd49d;
      plVar30 = &local_338;
    }
    else {
      local_358 = CONCAT44(local_3bc,MiddleBreadIters);
      *(code **)(pFVar36 + lVar28 * 0x30) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l60::<lambda_7>,void,Chaos::Softs::FSolverParticles_&,float>
           ::Call;
      *(longlong *)(pFVar36 + lVar28 * 0x30 + 8) = lStack_370;
      pFVar35 = pFVar36 + (lVar28 * 6 + 2) * 8;
      *(undefined4 *)pFVar35 = 0x52c9ef40;
      *(undefined4 *)(pFVar35 + 4) = 1;
      *(FClothConstraints **)(pFVar35 + 8) = this;
      *(undefined8 *)(pFVar36 + (lVar28 * 6 + 4) * 8) = local_358;
      *(undefined8 *)(pFVar36 + (lVar28 * 6 + 4) * 8 + 8) = 0;
      local_378 = lVar3;
      lStack_370 = lVar7;
      local_368 = lVar8;
      uStack_360 = uVar9;
      local_358 = uVar6;
      plStack_350 = plVar31;
      if (lVar3 == 0) goto LAB_14dbcd49d;
      plVar30 = &local_368;
    }
  }
  if (plVar31 != (longlong *)0x0) {
    plVar30 = plVar31;
  }
  (**(code **)(*plVar30 + 0x10))();
LAB_14dbcd49d:
  pFVar4 = (this->XStretchBiasConstraints).Object;
  uVar18 = 0;
  if (pFVar4 != (FXPBDStretchBiasElementConstraints *)0x0) {
    if (bReplaceBiasElementsWithCorotatedCod == false) {
      local_4e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e0.ArrayNum = 0;
      local_4e0.ArrayMax = 0;
      local_4f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4f0.ArrayNum = 0;
      local_4f0.ArrayMax = 0;
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar24 = (this->GSMainConstraint).Object;
      if (((this->XStretchBiasConstraints).Object == (FXPBDStretchBiasElementConstraints *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar23 = Softs::FXPBDStretchBiasElementConstraints::GetConstraintsArray
                          ((this->XStretchBiasConstraints).Object,&local_448);
      Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::AddStaticConstraints
                (pFVar24,pTVar23,&local_4e0,&local_4f0);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_448.AllocatorInstance.Data,
                 local_448.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_448.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_448.AllocatorInstance.Data);
      }
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar19 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
               AddStaticConstraintResidualAndHessianRange((this->GSMainConstraint).Object,1);
      local_188 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClothConstraints::CreateGSRules'::`77'::<lambda_12>,0,0>
                   ::_vftable_;
      local_198 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l77::<lambda_12>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
                  ::Call;
      plStack_170 = (longlong *)0x0;
      uStack_180 = this;
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar24 = (this->GSMainConstraint).Object;
      uVar20 = uVar18;
      if ((int)uVar19 < (pFVar24->AddStaticConstraintResidualAndHessian).ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar35 = (pFVar24->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data +
                (longlong)(int)uVar19 * 0x30;
      lVar3 = *(longlong *)pFVar35;
      lVar7 = *(longlong *)(pFVar35 + 8);
      lVar8 = *(longlong *)(pFVar35 + 0x10);
      lVar10 = *(longlong *)(pFVar35 + 0x18);
      lVar28 = *(longlong *)(pFVar35 + 0x20);
      plVar31 = *(longlong **)(pFVar35 + 0x28);
      *(code **)pFVar35 = local_198;
      *(longlong *)(pFVar35 + 8) = lStack_190;
      *(undefined4 *)(pFVar35 + 0x10) = (undefined4)local_188;
      *(undefined4 *)(pFVar35 + 0x14) = local_188._4_4_;
      *(undefined4 *)(pFVar35 + 0x18) = (undefined4)uStack_180;
      *(undefined4 *)(pFVar35 + 0x1c) = uStack_180._4_4_;
      *(longlong *)(pFVar35 + 0x20) = local_178;
      *(longlong **)(pFVar35 + 0x28) = plStack_170;
      local_198 = (code *)lVar3;
      lStack_190 = lVar7;
      local_188 = (undefined **)lVar8;
      uStack_180 = (FClothConstraints *)lVar10;
      local_178 = lVar28;
      plStack_170 = plVar31;
      if (lVar3 != 0) {
        plVar30 = &local_188;
        if (plVar31 != (longlong *)0x0) {
          plVar30 = plVar31;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
      if (bEnableCG != false) {
        pFVar24 = TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
                  ::operator->(&this->GSMainConstraint);
        uVar20 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
                 AddAddInternalForceDifferentialsRange(pFVar24,1);
        plStack_140 = (longlong *)0x0;
        local_158 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`Chaos::FClothConstraints::CreateGSRules'::`80'::<lambda_13>,0,0>
                     ::_vftable_;
        local_168 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l80::<lambda_13>,void,Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
                    ::Call;
        uStack_150 = this;
        pFVar24 = TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
                  ::operator->(&this->GSMainConstraint);
        uVar19 = uVar18;
        if ((int)uVar20 < (pFVar24->AddInternalForceDifferentials).ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar35 = (pFVar24->AddInternalForceDifferentials).AllocatorInstance.Data +
                  (longlong)(int)uVar20 * 0x30;
        lVar3 = *(longlong *)pFVar35;
        lVar7 = *(longlong *)(pFVar35 + 8);
        lVar8 = *(longlong *)(pFVar35 + 0x10);
        lVar10 = *(longlong *)(pFVar35 + 0x18);
        lVar28 = *(longlong *)(pFVar35 + 0x20);
        plVar31 = *(longlong **)(pFVar35 + 0x28);
        *(code **)pFVar35 = local_168;
        *(longlong *)(pFVar35 + 8) = lStack_160;
        *(undefined4 *)(pFVar35 + 0x10) = (undefined4)local_158;
        *(undefined4 *)(pFVar35 + 0x14) = local_158._4_4_;
        *(undefined4 *)(pFVar35 + 0x18) = (undefined4)uStack_150;
        *(undefined4 *)(pFVar35 + 0x1c) = uStack_150._4_4_;
        *(longlong *)(pFVar35 + 0x20) = local_148;
        *(longlong **)(pFVar35 + 0x28) = plStack_140;
        local_168 = (code *)lVar3;
        lStack_160 = lVar7;
        local_158 = (undefined **)lVar8;
        uStack_150 = (FClothConstraints *)lVar10;
        local_148 = lVar28;
        plStack_140 = plVar31;
        if (lVar3 != 0) {
          plVar30 = &local_158;
          if (plVar31 != (longlong *)0x0) {
            plVar30 = plVar31;
          }
          (**(code **)(*plVar30 + 0x10))();
        }
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4f0.AllocatorInstance.Data,
                 local_4f0.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4f0.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_4f0.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4e0.AllocatorInstance.Data,
                 local_4e0.ArrayNum);
      FVar29.Data = local_4e0.AllocatorInstance.Data;
    }
    else {
      local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_500.ArrayNum = 0;
      local_500.ArrayMax = 0;
      local_510.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_510.ArrayNum = 0;
      local_510.ArrayMax = 0;
      local_530.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_530.ArrayNum = (pFVar4->Constraints).ArrayNum;
      lVar28 = (longlong)local_530.ArrayNum;
      pFVar35 = (pFVar4->Constraints).AllocatorInstance.Data;
      if (local_530.ArrayNum == 0) {
        local_530.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_530.ArrayNum,0,&local_530.AllocatorInstance,local_530.ArrayNum,
                   &local_530.ArrayMax);
        memcpy(local_530.AllocatorInstance.Data,pFVar35,lVar28 * 0xc);
      }
      local_538[0] = false;
      pTVar22 = MakeShared<Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>,1,Chaos::Softs::FSolverParticles_&,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_const_&,bool,float_&>
                          (&local_3f8,&this->PBDEvolution->MParticles,&local_530,local_538,
                           &YoungsModulus);
      local_488.ReferenceController = (pTVar22->SharedReferenceCount).ReferenceController;
      local_490 = pTVar22->Object;
      if (local_488.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_488.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_488.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->GSCorotatedCodimensionalConstraint !=
          (TSharedPtr<Chaos::Softs::FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>,1>
           *)&local_490) {
        (this->GSCorotatedCodimensionalConstraint).Object = local_490;
        local_490 = (FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
                     *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->GSCorotatedCodimensionalConstraint).SharedReferenceCount,&local_488);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_488.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3f8.SharedReferenceCount.ReferenceController);
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar24 = (this->GSMainConstraint).Object;
      if (((this->XStretchBiasConstraints).Object == (FXPBDStretchBiasElementConstraints *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar23 = Softs::FXPBDStretchBiasElementConstraints::GetConstraintsArray
                          ((this->XStretchBiasConstraints).Object,&local_458);
      Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::AddStaticConstraints
                (pFVar24,pTVar23,&local_500,&local_510);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_458.AllocatorInstance.Data,
                 local_458.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_458.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_458.AllocatorInstance.Data);
      }
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar19 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
               AddStaticConstraintResidualAndHessianRange((this->GSMainConstraint).Object,1);
      local_1b8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClothConstraints::CreateGSRules'::`75'::<lambda_11>,0,0>
                   ::_vftable_;
      local_1c8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l75::<lambda_11>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
                  ::Call;
      plStack_1a0 = (longlong *)0x0;
      uStack_1b0 = this;
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar24 = (this->GSMainConstraint).Object;
      uVar20 = 0;
      if ((int)uVar19 < (pFVar24->AddStaticConstraintResidualAndHessian).ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar35 = (pFVar24->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data +
                (longlong)(int)uVar19 * 0x30;
      lVar3 = *(longlong *)pFVar35;
      lVar7 = *(longlong *)(pFVar35 + 8);
      lVar8 = *(longlong *)(pFVar35 + 0x10);
      lVar10 = *(longlong *)(pFVar35 + 0x18);
      lVar28 = *(longlong *)(pFVar35 + 0x20);
      plVar31 = *(longlong **)(pFVar35 + 0x28);
      *(code **)pFVar35 = local_1c8;
      *(longlong *)(pFVar35 + 8) = lStack_1c0;
      *(undefined4 *)(pFVar35 + 0x10) = (undefined4)local_1b8;
      *(undefined4 *)(pFVar35 + 0x14) = local_1b8._4_4_;
      *(undefined4 *)(pFVar35 + 0x18) = (undefined4)uStack_1b0;
      *(undefined4 *)(pFVar35 + 0x1c) = uStack_1b0._4_4_;
      *(longlong *)(pFVar35 + 0x20) = local_1a8;
      *(longlong **)(pFVar35 + 0x28) = plStack_1a0;
      local_1c8 = (code *)lVar3;
      lStack_1c0 = lVar7;
      local_1b8 = (undefined **)lVar8;
      uStack_1b0 = (FClothConstraints *)lVar10;
      local_1a8 = lVar28;
      plStack_1a0 = plVar31;
      if (lVar3 != 0) {
        plVar30 = &local_1b8;
        if (plVar31 != (longlong *)0x0) {
          plVar30 = plVar31;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
      if (local_530.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_510.AllocatorInstance.Data,
                 local_510.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_510.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_510.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_500.AllocatorInstance.Data,
                 local_500.ArrayNum);
      FVar29.Data = local_500.AllocatorInstance.Data;
    }
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar29.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(FVar29.Data);
    }
    if (((this->XStretchBiasConstraints).Object == (FXPBDStretchBiasElementConstraints *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    Softs::FXPBDStretchBiasElementConstraints::InitializeDmInvAndMeasures
              ((this->XStretchBiasConstraints).Object,&this->PBDEvolution->MParticles);
  }
  if ((this->XAnisoBendingElementConstraints).Object != (FXPBDAnisotropicBendingConstraints *)0x0) {
    local_4c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4c0.ArrayNum = 0;
    local_4c0.ArrayMax = 0;
    local_4d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4d0.ArrayNum = 0;
    local_4d0.ArrayMax = 0;
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar24 = (this->GSMainConstraint).Object;
    if (((this->XAnisoBendingElementConstraints).Object == (FXPBDAnisotropicBendingConstraints *)0x0
        ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar23 = Softs::FXPBDAnisotropicBendingConstraints::GetConstraintsArray
                        ((this->XAnisoBendingElementConstraints).Object,&local_438);
    Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::AddStaticConstraints
              (pFVar24,pTVar23,&local_4c0,&local_4d0);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_438.AllocatorInstance.Data,
               local_438.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_438.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_438.AllocatorInstance.Data);
    }
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar19 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
             AddStaticConstraintResidualAndHessianRange((this->GSMainConstraint).Object,1);
    local_128 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClothConstraints::CreateGSRules'::`83'::<lambda_14>,0,0>
                 ::_vftable_;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l83::<lambda_14>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
                ::Call;
    plStack_110 = (longlong *)0x0;
    uStack_120 = this;
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar24 = (this->GSMainConstraint).Object;
    uVar20 = uVar18;
    if ((int)uVar19 < (pFVar24->AddStaticConstraintResidualAndHessian).ArrayNum) {
      uVar20 = ~uVar19 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar35 = (pFVar24->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data +
              (longlong)(int)uVar19 * 0x30;
    lVar3 = *(longlong *)pFVar35;
    lVar7 = *(longlong *)(pFVar35 + 8);
    lVar8 = *(longlong *)(pFVar35 + 0x10);
    lVar10 = *(longlong *)(pFVar35 + 0x18);
    lVar28 = *(longlong *)(pFVar35 + 0x20);
    plVar31 = *(longlong **)(pFVar35 + 0x28);
    *(code **)pFVar35 = local_138;
    *(longlong *)(pFVar35 + 8) = lStack_130;
    *(undefined4 *)(pFVar35 + 0x10) = (undefined4)local_128;
    *(undefined4 *)(pFVar35 + 0x14) = local_128._4_4_;
    *(undefined4 *)(pFVar35 + 0x18) = (undefined4)uStack_120;
    *(undefined4 *)(pFVar35 + 0x1c) = uStack_120._4_4_;
    *(longlong *)(pFVar35 + 0x20) = local_118;
    *(longlong **)(pFVar35 + 0x28) = plStack_110;
    local_138 = (code *)lVar3;
    lStack_130 = lVar7;
    local_128 = (undefined **)lVar8;
    uStack_120 = (FClothConstraints *)lVar10;
    local_118 = lVar28;
    plStack_110 = plVar31;
    if (lVar3 != 0) {
      plVar30 = &local_128;
      if (plVar31 != (longlong *)0x0) {
        plVar30 = plVar31;
      }
      (**(code **)(*plVar30 + 0x10))();
    }
    if (bEnableCG != false) {
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar19 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
               AddAddInternalForceDifferentialsRange((this->GSMainConstraint).Object,1);
      local_f8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Chaos::FClothConstraints::CreateGSRules'::`86'::<lambda_15>,0,0>
                  ::_vftable_;
      local_108 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l86::<lambda_15>,void,Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      plStack_e0 = (longlong *)0x0;
      uStack_f0 = this;
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar24 = (this->GSMainConstraint).Object;
      uVar20 = uVar18;
      if ((int)uVar19 < (pFVar24->AddInternalForceDifferentials).ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar35 = (pFVar24->AddInternalForceDifferentials).AllocatorInstance.Data +
                (longlong)(int)uVar19 * 0x30;
      lVar3 = *(longlong *)pFVar35;
      lVar7 = *(longlong *)(pFVar35 + 8);
      lVar8 = *(longlong *)(pFVar35 + 0x10);
      lVar10 = *(longlong *)(pFVar35 + 0x18);
      lVar28 = *(longlong *)(pFVar35 + 0x20);
      plVar31 = *(longlong **)(pFVar35 + 0x28);
      *(code **)pFVar35 = local_108;
      *(longlong *)(pFVar35 + 8) = lStack_100;
      *(undefined4 *)(pFVar35 + 0x10) = (undefined4)local_f8;
      *(undefined4 *)(pFVar35 + 0x14) = local_f8._4_4_;
      *(undefined4 *)(pFVar35 + 0x18) = (undefined4)uStack_f0;
      *(undefined4 *)(pFVar35 + 0x1c) = uStack_f0._4_4_;
      *(longlong *)(pFVar35 + 0x20) = local_e8;
      *(longlong **)(pFVar35 + 0x28) = plStack_e0;
      local_108 = (code *)lVar3;
      lStack_100 = lVar7;
      local_f8 = (undefined **)lVar8;
      uStack_f0 = (FClothConstraints *)lVar10;
      local_e8 = lVar28;
      plStack_e0 = plVar31;
      if (lVar3 != 0) {
        plVar30 = &local_f8;
        if (plVar31 != (longlong *)0x0) {
          plVar30 = plVar31;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4d0.AllocatorInstance.Data,
               local_4d0.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4d0.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_4d0.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4c0.AllocatorInstance.Data,
               local_4c0.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4c0.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_4c0.AllocatorInstance.Data);
    }
  }
  if ((this->XBendingElementConstraints).Object != (FXPBDBendingConstraints *)0x0) {
    local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.ArrayNum = 0;
    local_4a0.ArrayMax = 0;
    local_4b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b0.ArrayNum = 0;
    local_4b0.ArrayMax = 0;
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar24 = (this->GSMainConstraint).Object;
    if (((this->XBendingElementConstraints).Object == (FXPBDBendingConstraints *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar23 = Softs::FXPBDBendingConstraints::GetConstraintsArray
                        ((this->XBendingElementConstraints).Object,&local_428);
    Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::AddStaticConstraints
              (pFVar24,pTVar23,&local_4a0,&local_4b0);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_428.AllocatorInstance.Data,
               local_428.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_428.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_428.AllocatorInstance.Data);
    }
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar19 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
             AddStaticConstraintResidualAndHessianRange((this->GSMainConstraint).Object,1);
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FClothConstraints::CreateGSRules'::`89'::<lambda_16>,0,0>
                ::_vftable_;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l89::<lambda_16>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
               ::Call;
    plStack_b0 = (longlong *)0x0;
    uStack_c0 = this;
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar24 = (this->GSMainConstraint).Object;
    uVar20 = uVar18;
    if ((int)uVar19 < (pFVar24->AddStaticConstraintResidualAndHessian).ArrayNum) {
      uVar20 = ~uVar19 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar35 = (pFVar24->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data +
              (longlong)(int)uVar19 * 0x30;
    lVar3 = *(longlong *)pFVar35;
    lVar7 = *(longlong *)(pFVar35 + 8);
    lVar8 = *(longlong *)(pFVar35 + 0x10);
    lVar10 = *(longlong *)(pFVar35 + 0x18);
    lVar28 = *(longlong *)(pFVar35 + 0x20);
    plVar31 = *(longlong **)(pFVar35 + 0x28);
    *(code **)pFVar35 = local_d8;
    *(longlong *)(pFVar35 + 8) = lStack_d0;
    *(undefined4 *)(pFVar35 + 0x10) = (undefined4)local_c8;
    *(undefined4 *)(pFVar35 + 0x14) = local_c8._4_4_;
    *(undefined4 *)(pFVar35 + 0x18) = (undefined4)uStack_c0;
    *(undefined4 *)(pFVar35 + 0x1c) = uStack_c0._4_4_;
    *(longlong *)(pFVar35 + 0x20) = local_b8;
    *(longlong **)(pFVar35 + 0x28) = plStack_b0;
    local_d8 = (code *)lVar3;
    lStack_d0 = lVar7;
    local_c8 = (undefined **)lVar8;
    uStack_c0 = (FClothConstraints *)lVar10;
    local_b8 = lVar28;
    plStack_b0 = plVar31;
    if (lVar3 != 0) {
      plVar30 = &local_c8;
      if (plVar31 != (longlong *)0x0) {
        plVar30 = plVar31;
      }
      (**(code **)(*plVar30 + 0x10))();
    }
    if (bEnableCG != false) {
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar19 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
               AddAddInternalForceDifferentialsRange((this->GSMainConstraint).Object,1);
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Chaos::FClothConstraints::CreateGSRules'::`92'::<lambda_17>,0,0>
                  ::_vftable_;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l92::<lambda_17>,void,Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
                 ::Call;
      plStack_80 = (longlong *)0x0;
      uStack_90 = this;
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar24 = (this->GSMainConstraint).Object;
      uVar20 = uVar18;
      if ((int)uVar19 < (pFVar24->AddInternalForceDifferentials).ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar35 = (pFVar24->AddInternalForceDifferentials).AllocatorInstance.Data +
                (longlong)(int)uVar19 * 0x30;
      lVar3 = *(longlong *)pFVar35;
      lVar7 = *(longlong *)(pFVar35 + 8);
      lVar8 = *(longlong *)(pFVar35 + 0x10);
      lVar10 = *(longlong *)(pFVar35 + 0x18);
      lVar28 = *(longlong *)(pFVar35 + 0x20);
      plVar31 = *(longlong **)(pFVar35 + 0x28);
      *(code **)pFVar35 = local_a8;
      *(longlong *)(pFVar35 + 8) = lStack_a0;
      *(undefined4 *)(pFVar35 + 0x10) = (undefined4)local_98;
      *(undefined4 *)(pFVar35 + 0x14) = local_98._4_4_;
      *(undefined4 *)(pFVar35 + 0x18) = (undefined4)uStack_90;
      *(undefined4 *)(pFVar35 + 0x1c) = uStack_90._4_4_;
      *(longlong *)(pFVar35 + 0x20) = local_88;
      *(longlong **)(pFVar35 + 0x28) = plStack_80;
      local_a8 = (code *)lVar3;
      lStack_a0 = lVar7;
      local_98 = (undefined **)lVar8;
      uStack_90 = (FClothConstraints *)lVar10;
      local_88 = lVar28;
      plStack_80 = plVar31;
      if (lVar3 != 0) {
        plVar30 = &local_98;
        if (plVar31 != (longlong *)0x0) {
          plVar30 = plVar31;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4b0.AllocatorInstance.Data,
               local_4b0.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4b0.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_4b0.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4a0.AllocatorInstance.Data,
               local_4a0.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4a0.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_4a0.AllocatorInstance.Data);
    }
  }
  if (((this->GSMainConstraint).Object ==
       (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitStaticColor
            ((this->GSMainConstraint).Object,&this->PBDEvolution->MParticles,
             (TPBDActiveView<Chaos::Softs::FSolverParticles> *)0x0);
  if (bWriteFinalResiduals != false) {
    FPaths::ProjectDir(&local_470);
    ::FString::AppendChars(&local_470,L"/DebugOutput/NewtonResidual.txt",0x1f);
    pIVar25 = IFileManager::Get();
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_470.Data.ArrayNum != 0) {
      FVar29.Data = local_470.Data.AllocatorInstance.Data;
    }
    pFVar26 = ::FString::FString(&local_3d8,L"Newton Norm\r\n");
    local_418 = (pFVar26->Data).AllocatorInstance.Data;
    iVar17 = (pFVar26->Data).ArrayNum;
    uStack_410 = iVar17 - 1;
    if (iVar17 == 0) {
      uStack_410 = uVar18;
    }
    local_3e8._12_4_ = uStack_40c;
    local_3e8.Size = uStack_410;
    local_3e8.DataPtr = (wchar_t *)local_418;
    FFileHelper::SaveStringToFile(&local_3e8,(wchar_t *)FVar29.Data,AutoDetect,pIVar25,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_78 = *(longlong *)local_460;
    lVar3 = *(longlong *)(local_460 + 8);
    local_68 = *(longlong *)(local_460 + 0x10);
    lStack_60 = *(longlong *)(local_460 + 0x18);
    lVar28 = *(longlong *)(local_460 + 0x20);
    plStack_50 = *(longlong **)(local_460 + 0x28);
    *(code **)local_460 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l95::<lambda_18>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(local_460 + 8) = lStack_70;
    *(undefined4 *)(local_460 + 0x10) = 0x52c9f0a0;
    *(undefined4 *)(local_460 + 0x14) = 1;
    *(FClothConstraints **)(local_460 + 0x18) = this;
    *(longlong *)(local_460 + 0x20) = local_58;
    *(longlong *)(local_460 + 0x28) = 0;
    lStack_70 = lVar3;
    local_58 = lVar28;
    if (local_78 != 0) {
      plVar31 = &local_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar31 = plStack_50;
      }
      (**(code **)(*plVar31 + 0x10))();
    }
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateLongRangeConstraints @ 14dbce570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateLongRangeConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_>
                   *param_3,float param_4)

{
  FPBDEvolution *pFVar1;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  int *piVar5;
  FSolverParticlesRange *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPBDLongRangeConstraints *pFVar8;
  FPBDLongRangeConstraints *local_38;
  FSharedReferencer<1> FStack_30;
  FPBDLongRangeConstraints *local_28;
  FSharedReferencer<1> FStack_20;
  
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,
                      Softs::FPBDLongRangeConstraints::TetherStiffnessName);
  if (((piVar5 != (int *)0x0) && (*piVar5 != -1)) &&
     (EVar3 = Softs::FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,*piVar5,&param_1->FlagsArray), (EVar3 & Enabled) != None)) {
    if (this->Evolution == (FEvolution *)0x0) {
      pFVar1 = this->PBDEvolution;
      pTVar7 = ::operator_new(0xb0);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_28 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDLongRangeConstraints *)&DAT_00000010;
        FStack_20.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDLongRangeConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FPBDLongRangeConstraints::FPBDLongRangeConstraints
                  ((FPBDLongRangeConstraints *)(pTVar7 + 1),&pFVar1->MParticles,this->ParticleOffset
                   ,this->NumParticles,param_3,param_2,param_1,param_4);
        pFVar8 = (FPBDLongRangeConstraints *)(pTVar7 + 1);
        if ((pFVar8 == (FPBDLongRangeConstraints *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FStack_20.ReferenceController = pTVar7;
        local_28 = pFVar8;
      }
      if (&this->LongRangeConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDLongRangeConstraints,1> *)&local_28) {
        (this->LongRangeConstraints).Object = pFVar8;
        local_28 = (FPBDLongRangeConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->LongRangeConstraints).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      this->NumConstraintInits = this->NumConstraintInits + 1;
    }
    else {
      pFVar6 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
      pTVar7 = ::operator_new(0xb0);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_38 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDLongRangeConstraints *)&DAT_00000010;
        FStack_30.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDLongRangeConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FPBDLongRangeConstraints::FPBDLongRangeConstraints
                  ((FPBDLongRangeConstraints *)(pTVar7 + 1),pFVar6,param_3,param_2,param_1,param_4);
        pFVar8 = (FPBDLongRangeConstraints *)(pTVar7 + 1);
        if ((pFVar8 == (FPBDLongRangeConstraints *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FStack_30.ReferenceController = pTVar7;
        local_38 = pFVar8;
      }
      if (&this->LongRangeConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDLongRangeConstraints,1> *)&local_38) {
        (this->LongRangeConstraints).Object = pFVar8;
        local_38 = (FPBDLongRangeConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->LongRangeConstraints).SharedReferenceCount,&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      this->NumPreSubstepConstraintRules = this->NumPreSubstepConstraintRules + 1;
    }
  }
  return;
}

// CreateMaxDistanceConstraints @ 14dbce830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateMaxDistanceConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,float param_3)

{
  longlong lVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  ECollectionPropertyFlags EVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForAnyElementType FVar10;
  TReferenceControllerBase<1> *pTVar11;
  int iVar12;
  FPBDSphericalConstraint *pFVar13;
  FCollectionPropertyConstFacade *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FPBDSphericalConstraint *local_60;
  FSharedReferencer<1> FStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,FClothingSimulationConfig::UseLegacyConfigName);
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (((piVar8 != (int *)0x0) && (*piVar8 != -1)) &&
     (bVar4 = Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                        (param_1,*piVar8,&param_1->LowValueArray), bVar4)) {
    ::FString::FString(&local_90,L"MaxDistance");
    FVar10.Data = local_90.Data.AllocatorInstance.Data;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = local_90.Data.ArrayNum;
    iVar12 = 0;
    if (local_90.Data.ArrayNum == 0) {
      local_80.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)&local_80,local_90.Data.ArrayNum,
                 &local_80.Data.ArrayMax);
      memcpy(local_80.Data.AllocatorInstance.Data,FVar10.Data,(longlong)local_90.Data.ArrayNum * 2);
    }
    local_98 = param_1;
    Softs::FCollectionPropertyConstFacade::
    SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
              (param_1,&local_70,&Softs::FPBDSphericalConstraint::MaxDistanceName,
               (<lambda_1> *)&local_98,&local_80,(int *)0x0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar10.Data = local_70.Data.AllocatorInstance.Data;
    }
    local_90.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = local_70.Data.ArrayNum + -1;
    if (local_70.Data.ArrayNum == 0) {
      iVar7 = iVar12;
    }
    local_90.Data.ArrayNum = local_70.Data.ArrayNum;
    local_90.Data.ArrayMax = local_70.Data.ArrayMax;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar10.Data);
    iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,uVar6,&local_90);
    if ((iVar7 == -1) || (lVar1 = *(longlong *)param_2 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
      uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    }
    else {
      local_50 = *(undefined8 *)(lVar1 + 0x10);
      uStack_48 = *(longlong *)(lVar1 + 0x18);
      iVar12 = *(int *)(lVar1 + 0x18);
    }
    if (iVar12 != this->NumParticles) {
      if (local_90.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
      return;
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,Softs::FPBDSphericalConstraint::MaxDistanceName);
  if (((piVar8 != (int *)0x0) && (*piVar8 != -1)) &&
     (EVar5 = Softs::FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,*piVar8,&param_1->FlagsArray), (EVar5 & Enabled) != None)) {
    pTVar2 = this->AnimationPositions;
    pTVar9 = ::operator_new(0x40);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      local_60 = ___xmm_00000000000000000000000000000010;
      pFVar13 = (FPBDSphericalConstraint *)&DAT_00000010;
      FStack_58.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPBDSphericalConstraint_Softs_Chaos___00_SharedPointerInternals__6B_
      ;
      Softs::FPBDSphericalConstraint::FPBDSphericalConstraint
                ((FPBDSphericalConstraint *)(pTVar9 + 1),this->ParticleOffset,this->NumParticles,
                 pTVar2,param_2,param_1,param_3);
      pFVar13 = (FPBDSphericalConstraint *)(pTVar9 + 1);
      if ((pFVar13 == (FPBDSphericalConstraint *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      FStack_58.ReferenceController = pTVar9;
      pTVar11 = pTVar9;
      local_60 = pFVar13;
    }
    if (&this->MaximumDistanceConstraints !=
        (TSharedPtr<Chaos::Softs::FPBDSphericalConstraint,1> *)&local_60) {
      (this->MaximumDistanceConstraints).Object = pFVar13;
      local_60 = (FPBDSphericalConstraint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MaximumDistanceConstraints).SharedReferenceCount,&FStack_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_58.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    this->NumConstraintRules = this->NumConstraintRules + 1;
  }
  return;
}

// CreateMultiresConstraint @ 14dbceb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateMultiresConstraint
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,FTriangleMesh *param_3,FTriangleMesh *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  FTriangleMesh *pFVar6;
  FClothConstraints *pFVar7;
  ECollectionPropertyFlags EVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulong64 uVar18;
  TReferenceControllerBase<1> *pTVar19;
  FScriptContainerElement *pFVar20;
  FMultiResConstraints *pFVar21;
  FScriptContainerElement *pFVar22;
  bool bVar23;
  undefined1 auStackY_698 [32];
  undefined1 local_648 [8];
  ForAnyElementType local_640;
  int local_638;
  int iStack_634;
  ForAnyElementType local_630;
  undefined8 local_628;
  undefined1 local_620;
  undefined1 local_61f [3];
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  uint local_610;
  uint local_60c;
  uint local_608 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_600;
  TArray<Chaos::TVector<float,4>,TSizedDefaultAllocator<32>_> local_5f0;
  int local_5e0;
  TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> local_5d8;
  TVector<float,3> *local_5c8;
  FTriangleMesh *local_5c0;
  TArrayView<float_const_,int> local_5b8;
  TArray<ClothingMeshUtils::FMeshToMeshFilterSet,TSizedDefaultAllocator<32>_> local_5a8;
  FMultiResConstraints *local_598;
  FSharedReferencer<1> FStack_590;
  FClothConstraints *local_588;
  FCollectionPropertyConstFacade *local_580;
  TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
  *local_578;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *local_570;
  FScriptContainerElement *local_568;
  int iStack_560;
  undefined4 uStack_55c;
  FScriptContainerElement *local_558;
  int iStack_550;
  undefined4 uStack_54c;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_548;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_538 [3];
  ClothMeshDesc local_508;
  ClothMeshDesc local_2b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_5c0 = param_4;
  local_5e0 = param_5;
  if ((((this->Evolution == (FEvolution *)0x0) || (param_4 == (FTriangleMesh *)0x0)) ||
      (param_5 == -1)) ||
     (((local_588 = this, local_580 = param_1, local_578 = param_2,
       piVar12 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&param_1->KeyNameIndices,
                        Softs::FMultiResConstraints::MultiResStiffnessName), piVar12 == (int *)0x0
       || (*piVar12 == -1)) ||
      (EVar8 = Softs::FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,*piVar12,&param_1->FlagsArray), (EVar8 & Enabled) == None)))) {
    return;
  }
  local_5f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5f0.ArrayNum = 0;
  local_5f0.ArrayMax = 0;
  local_600.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_600.ArrayNum = 0;
  local_600.ArrayMax = 0;
  pTVar13 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
            Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
  bVar23 = -1 < CpuChannel->Enabled;
  local_570 = pTVar13;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1575,"BuildMultiResTransitionData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
               ,0x627);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1575);
  }
  iVar16 = pTVar13->RangeSize;
  if ((pTVar13->Particles == (FSolverParticles *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
  GetConstArrayView<Chaos::TVector<float,3>_>
            (pTVar13,local_538,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &pTVar13->Particles->_padding_);
  local_5c8 = local_538[0].DataPtr;
  if ((iVar16 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_630.Data = (FScriptContainerElement *)0x0;
  local_628 = 0;
  uVar3 = (param_3->MElements).ArrayNum * 3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  local_628._0_4_ = 0;
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&local_630,0,(int *)((longlong)&local_628 + 4));
  }
  iVar11 = (param_3->MElements).ArrayNum;
  pFVar22 = (param_3->MElements).AllocatorInstance.Data;
  pFVar20 = pFVar22 + (longlong)iVar11 * 0xc;
  local_508.Indices.ArrayNum = (int)local_628;
  while( true ) {
    if ((param_3->MElements).ArrayNum != iVar11) {
      local_620 = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_620);
      local_508.Indices.ArrayNum = (int)local_628;
    }
    FVar5.Data = local_630.Data;
    if (pFVar22 == pFVar20) break;
    local_61c = *(undefined4 *)pFVar22;
    if ((local_630.Data <= (FScriptContainerElement *)&local_61c) &&
       ((FScriptContainerElement *)&local_61c < local_630.Data + (longlong)local_628._4_4_ * 4)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_508.Indices.ArrayNum = (int)local_628;
    }
    if (local_508.Indices.ArrayNum == local_628._4_4_) {
      local_508.Indices.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_630,(int *)((longlong)&local_628 + 4));
    }
    iVar15 = local_508.Indices.ArrayNum + 1;
    *(undefined4 *)(local_630.Data + (longlong)local_508.Indices.ArrayNum * 4) = local_61c;
    local_618 = *(undefined4 *)(pFVar22 + 4);
    local_628._0_4_ = iVar15;
    if (((local_630.Data <= (FScriptContainerElement *)&local_618) &&
        ((FScriptContainerElement *)&local_618 < local_630.Data + (longlong)local_628._4_4_ * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((int)local_628 == local_628._4_4_) {
      local_628._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_630,(int *)((longlong)&local_628 + 4));
    }
    iVar15 = (int)local_628 + 1;
    *(undefined4 *)(local_630.Data + (longlong)(int)local_628 * 4) = local_618;
    local_614 = *(undefined4 *)(pFVar22 + 8);
    local_628._0_4_ = iVar15;
    if (((local_630.Data <= (FScriptContainerElement *)&local_614) &&
        ((FScriptContainerElement *)&local_614 < local_630.Data + (longlong)local_628._4_4_ * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar15 = (int)local_628;
    if ((int)local_628 == local_628._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_630,(int *)((longlong)&local_628 + 4));
    }
    local_508.Indices.ArrayNum = iVar15 + 1;
    pFVar22 = pFVar22 + 0xc;
    local_628 = CONCAT44(local_628._4_4_,local_508.Indices.ArrayNum);
    *(undefined4 *)(local_630.Data + (longlong)iVar15 * 4) = local_614;
  }
  if ((local_508.Indices.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_508.Positions.DataPtr = (TVector<float> *)local_5c8;
  local_508.Positions._12_4_ = local_548._12_4_;
  local_508.Indices._12_4_ = local_538[1]._12_4_;
  local_508.Normals.DataPtr = (TVector<float> *)0x0;
  local_508.Normals._8_8_ = (ulonglong)(uint)local_508.Normals._12_4_ << 0x20;
  local_508.Tangents.DataPtr = (TVector<float> *)0x0;
  local_508.Tangents.ArrayNum = 0;
  local_508.Indices.DataPtr = (uint *)FVar5.Data;
  local_508.AveragedNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.AveragedNormals.ArrayNum = 0;
  local_508.AveragedNormals.ArrayMax = 0;
  local_508.bHasValidBVH = false;
  local_508.Positions.ArrayNum = iVar16;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (&local_508.BVH);
  local_508.MaxEdgeLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.MaxEdgeLengths.ArrayNum = 0;
  local_508.MaxEdgeLengths.ArrayMax = 0;
  local_508.FilteredTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.FilteredTriangles.ArrayNum = 0;
  local_508.FilteredTriangles.ArrayMax = 0;
  ClothingMeshUtils::ClothMeshDesc::ComputeAveragedNormals(&local_508);
  iStack_560 = local_508.AveragedNormals.ArrayNum;
  local_568 = local_508.AveragedNormals.AllocatorInstance.Data;
  if ((local_508.AveragedNormals.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_508.Normals._12_4_ = uStack_55c;
  local_508.Normals.ArrayNum = iStack_560;
  local_508.Normals.DataPtr = (TVector<float> *)local_568;
  pTVar13 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
            Softs::FEvolution::GetSoftBodyParticles(local_588->Evolution,local_5e0);
  iVar16 = pTVar13->RangeSize;
  local_5c8 = (TVector<float,3> *)CONCAT44(local_5c8._4_4_,iVar16);
  if ((pTVar13->Particles == (FSolverParticles *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
  GetConstArrayView<Chaos::TVector<float,3>_>
            (pTVar13,&local_548,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &pTVar13->Particles->_padding_);
  if ((iVar16 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pTVar13->Particles == (FSolverParticles *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<float>
            (pTVar13,&local_5b8,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&pTVar13->Particles->_padding_);
  local_640.Data = (FScriptContainerElement *)0x0;
  local_638 = 0;
  iStack_634 = 0;
  uVar3 = (local_5c0->MElements).ArrayNum * 3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&local_640,0,&iStack_634);
  }
  pFVar6 = local_5c0;
  iVar16 = (local_5c0->MElements).ArrayNum;
  pFVar22 = (local_5c0->MElements).AllocatorInstance.Data;
  pFVar20 = pFVar22 + (longlong)iVar16 * 0xc;
  do {
    if ((pFVar6->MElements).ArrayNum != iVar16) {
      local_61f[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_61f);
    }
    iVar11 = local_638;
    FVar5.Data = local_640.Data;
    if (pFVar22 == pFVar20) {
      iVar16 = (int)local_5c8;
      if (local_638 == 0) {
        if (local_640.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_640.Data);
        }
        if (local_508.FilteredTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.FilteredTriangles.AllocatorInstance.Data);
        }
        if (local_508.MaxEdgeLengths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.MaxEdgeLengths.AllocatorInstance.Data);
        }
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  (&local_508.BVH);
        if (local_508.AveragedNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.AveragedNormals.AllocatorInstance.Data);
        }
        if (local_630.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_630.Data);
        }
        if (bVar23) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else {
        if ((local_638 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2b8.Positions.DataPtr = (TVector<float> *)local_548.DataPtr;
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        local_2b8.Positions._12_4_ = local_538[1]._12_4_;
        local_2b8.Normals.DataPtr = (TVector<float> *)0x0;
        local_2b8.Normals._8_8_ = local_2b8.Normals._8_8_ & 0xffffffff00000000;
        local_2b8.Tangents.DataPtr = (TVector<float> *)0x0;
        local_2b8.Tangents.ArrayNum = 0;
        local_2b8.Indices._12_4_ = local_538[2]._12_4_;
        local_2b8.AveragedNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b8.AveragedNormals.ArrayNum = 0;
        local_2b8.AveragedNormals.ArrayMax = 0;
        local_2b8.bHasValidBVH = false;
        local_2b8.Positions.ArrayNum = iVar16;
        local_2b8.Indices.DataPtr = (uint *)FVar5.Data;
        local_2b8.Indices.ArrayNum = iVar11;
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  (&local_2b8.BVH);
        local_2b8.MaxEdgeLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b8.MaxEdgeLengths.ArrayNum = 0;
        local_2b8.MaxEdgeLengths.ArrayMax = 0;
        local_2b8.FilteredTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2b8.FilteredTriangles.ArrayNum = 0;
        local_2b8.FilteredTriangles.ArrayMax = 0;
        ClothingMeshUtils::ClothMeshDesc::ComputeAveragedNormals(&local_2b8);
        iStack_550 = local_2b8.AveragedNormals.ArrayNum;
        local_558 = local_2b8.AveragedNormals.AllocatorInstance.Data;
        if ((local_2b8.AveragedNormals.ArrayNum < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2b8.Normals._8_8_ = CONCAT44(uStack_54c,iStack_550);
        local_2b8.Normals.DataPtr = (TVector<float> *)local_558;
        local_5d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5d8.ArrayNum = 0;
        local_5d8.ArrayMax = 0;
        local_5a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5a8.ArrayNum = 0;
        local_5a8.ArrayMax = 0;
        ClothingMeshUtils::GenerateMeshToMeshVertData
                  (&local_5d8,&local_508,&local_2b8,(FPointWeightMap *)0x0,false,false,0.0,
                   &local_5a8);
        DestructItems<ClothingMeshUtils::FMeshToMeshFilterSet,int>
                  ((FMeshToMeshFilterSet *)local_5a8.AllocatorInstance.Data,local_5a8.ArrayNum);
        if ((FMeshToMeshFilterSet *)local_5a8.AllocatorInstance.Data != (FMeshToMeshFilterSet *)0x0)
        {
          FMemory::Free(local_5a8.AllocatorInstance.Data);
        }
        uVar18 = local_5d8._8_8_ & 0xffffffff;
        if (local_5d8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar18);
        }
        pFVar21 = (FMultiResConstraints *)&DAT_00000010;
        if (local_5f0.ArrayMax < local_5d8.ArrayNum) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,local_5d8.ArrayNum,&local_5f0.AllocatorInstance,local_5f0.ArrayNum,
                     &local_5f0.ArrayMax);
          uVar18 = local_5d8._8_8_ & 0xffffffff;
        }
        iVar16 = (int)uVar18;
        if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar18);
        }
        if (local_600.ArrayMax < iVar16) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar16,&local_600.AllocatorInstance,local_600.ArrayNum,
                     &local_600.ArrayMax);
          uVar18 = local_5d8._8_8_ & 0xffffffff;
        }
        iVar16 = (int)uVar18;
        pFVar22 = local_5d8.AllocatorInstance.Data + (longlong)iVar16 * 0x40;
        pFVar20 = local_5d8.AllocatorInstance.Data + 8;
        while( true ) {
          if ((int)uVar18 != iVar16) {
            local_648[0] = 0;
            `TCheckedPointerIterator<FMeshToMeshVertData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_648);
          }
          if (pFVar20 + -8 == pFVar22) break;
          iVar11 = local_5f0.ArrayNum;
          if (local_5f0.ArrayNum == local_5f0.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&local_5f0.AllocatorInstance,&local_5f0.ArrayMax);
          }
          lVar17 = (longlong)iVar11;
          local_5f0.ArrayNum = iVar11 + 1;
          *(undefined4 *)(local_5f0.AllocatorInstance.Data + lVar17 * 0x10) =
               *(undefined4 *)(pFVar20 + -8);
          *(undefined4 *)(local_5f0.AllocatorInstance.Data + lVar17 * 0x10 + 4) =
               *(undefined4 *)(pFVar20 + -4);
          *(undefined4 *)(local_5f0.AllocatorInstance.Data + lVar17 * 0x10 + 8) =
               *(undefined4 *)pFVar20;
          *(undefined4 *)(local_5f0.AllocatorInstance.Data + lVar17 * 0x10 + 0xc) =
               *(undefined4 *)(pFVar20 + 4);
          iVar11 = local_600.ArrayNum;
          if (local_600.ArrayNum == local_600.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_600.AllocatorInstance,&local_600.ArrayMax);
          }
          local_600.ArrayNum = iVar11 + 1;
          uVar1 = *(ushort *)(pFVar20 + 0x2a);
          uVar2 = *(ushort *)(pFVar20 + 0x2c);
          lVar17 = (longlong)iVar11;
          *(uint *)(local_600.AllocatorInstance.Data + lVar17 * 0xc) =
               (uint)*(ushort *)(pFVar20 + 0x28);
          pFVar20 = pFVar20 + 0x40;
          *(uint *)(local_600.AllocatorInstance.Data + lVar17 * 0xc + 4) = (uint)uVar1;
          *(uint *)(local_600.AllocatorInstance.Data + lVar17 * 0xc + 8) = (uint)uVar2;
          uVar18 = local_5d8._8_8_ & 0xffffffff;
        }
        if (local_5d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5d8.AllocatorInstance.Data);
        }
        if (local_2b8.FilteredTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.FilteredTriangles.AllocatorInstance.Data);
        }
        if (local_2b8.MaxEdgeLengths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.MaxEdgeLengths.AllocatorInstance.Data);
        }
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  (&local_2b8.BVH);
        if (local_2b8.AveragedNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.AveragedNormals.AllocatorInstance.Data);
        }
        if (local_640.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_640.Data);
        }
        if (local_508.FilteredTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.FilteredTriangles.AllocatorInstance.Data);
        }
        if (local_508.MaxEdgeLengths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.MaxEdgeLengths.AllocatorInstance.Data);
        }
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  (&local_508.BVH);
        if (local_508.AveragedNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.AveragedNormals.AllocatorInstance.Data);
        }
        if (local_630.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_630.Data);
        }
        if (bVar23) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        pTVar14 = ::operator_new(0x130);
        if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
          local_598 = ___xmm_00000000000000000000000000000010;
          FStack_590.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar14->SharedReferenceCount = (atomic<int>)0x1;
          pTVar14->WeakReferenceCount = (atomic<int>)0x1;
          pTVar14->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFMultiResConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
          ;
          Softs::FMultiResConstraints::FMultiResConstraints
                    ((FMultiResConstraints *)(pTVar14 + 1),(FSolverParticlesRange *)local_570,
                     local_5e0,local_5c0,&local_5f0,&local_600,local_578,local_580);
          pFVar21 = (FMultiResConstraints *)(pTVar14 + 1);
          if ((pFVar21 == (FMultiResConstraints *)0x0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar23)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
          FStack_590.ReferenceController = pTVar14;
          pTVar19 = pTVar14;
          local_598 = pFVar21;
        }
        pFVar7 = local_588;
        if (&local_588->MultiResConstraints !=
            (TSharedPtr<Chaos::Softs::FMultiResConstraints,1> *)&local_598) {
          (local_588->MultiResConstraints).Object = pFVar21;
          local_598 = (FMultiResConstraints *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(local_588->MultiResConstraints).SharedReferenceCount,&FStack_590);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_590.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19)
        ;
        piVar12 = &pFVar7->NumConstraintRules;
        *piVar12 = *piVar12 + 1;
        piVar12 = &pFVar7->NumConstraintInits;
        *piVar12 = *piVar12 + 1;
      }
      if (local_600.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_600.AllocatorInstance.Data);
      }
      if (local_5f0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_5f0.AllocatorInstance.Data);
      return;
    }
    uVar3 = *(uint *)pFVar22;
    uVar10 = 0;
    if ((int)uVar3 < local_5b8.ArrayNum) {
      uVar10 = ~uVar3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_5b8.DataPtr[(int)uVar3] == 0.0) {
      uVar3 = *(uint *)(pFVar22 + 4);
      uVar10 = 0;
      if ((int)uVar3 < local_5b8.ArrayNum) {
        uVar10 = ~uVar3 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_5b8.DataPtr[(int)uVar3] != 0.0) goto LAB_14dbcf2d3;
      uVar3 = *(uint *)(pFVar22 + 8);
      uVar10 = 0;
      if ((int)uVar3 < local_5b8.ArrayNum) {
        uVar10 = ~uVar3 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_5b8.DataPtr[(int)uVar3] != 0.0) goto LAB_14dbcf2d3;
    }
    else {
LAB_14dbcf2d3:
      local_610 = *(uint *)pFVar22;
      if (((local_640.Data <= (FScriptContainerElement *)&local_610) &&
          ((FScriptContainerElement *)&local_610 < local_640.Data + (longlong)iStack_634 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_638 == iStack_634) {
        local_638 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_640,&iStack_634);
      }
      lVar17 = (longlong)local_638;
      local_638 = local_638 + 1;
      *(uint *)(local_640.Data + lVar17 * 4) = local_610;
      local_60c = *(uint *)(pFVar22 + 4);
      if (((local_640.Data <= (FScriptContainerElement *)&local_60c) &&
          ((FScriptContainerElement *)&local_60c < local_640.Data + (longlong)iStack_634 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_638 == iStack_634) {
        local_638 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_640,&iStack_634);
      }
      iVar11 = local_638 + 1;
      *(uint *)(local_640.Data + (longlong)local_638 * 4) = local_60c;
      local_608[0] = *(uint *)(pFVar22 + 8);
      local_638 = iVar11;
      if (((local_640.Data <= (FScriptContainerElement *)local_608) &&
          ((FScriptContainerElement *)local_608 < local_640.Data + (longlong)iStack_634 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_638 == iStack_634) {
        local_638 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_640,&iStack_634);
      }
      *(uint *)(local_640.Data + (longlong)local_638 * 4) = local_608[0];
      local_638 = local_638 + 1;
    }
    pFVar22 = pFVar22 + 0xc;
  } while( true );
}

// CreatePBDRules @ 14dbcfa50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Chaos::FClothConstraints::CreatePBDRules(FClothConstraints *this)

{
  FPBDEvolution *pFVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar13;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *pFVar14;
  FXPBDBendingConstraints *this_00;
  IFileManager *pIVar15;
  FString *pFVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auStackY_908 [32];
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *local_8b8;
  FSharedReferencer<1> FStack_8b0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_8a8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_898;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_888;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_878;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_868;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_858;
  FScriptContainerElement *local_848;
  FDeformableXPBDCorotatedParams local_840;
  FString local_830;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_820;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_810;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_800;
  FScriptContainerElement *local_7e8;
  int iStack_7e0;
  undefined4 uStack_7dc;
  TStringView<wchar_t> local_7d8;
  FString local_7c8;
  longlong local_7b8;
  longlong lStack_7b0;
  longlong local_7a8;
  longlong lStack_7a0;
  longlong local_798;
  longlong *plStack_790;
  longlong local_788;
  longlong lStack_780;
  longlong local_778;
  longlong lStack_770;
  longlong local_768;
  longlong *plStack_760;
  code *local_758;
  longlong lStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  longlong local_738;
  longlong *plStack_730;
  code *local_728;
  longlong lStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  longlong local_708;
  longlong *plStack_700;
  code *local_6f8;
  longlong lStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  longlong local_6d8;
  longlong *plStack_6d0;
  longlong local_6c8;
  longlong lStack_6c0;
  longlong local_6b8;
  longlong lStack_6b0;
  longlong local_6a8;
  longlong *plStack_6a0;
  longlong local_698;
  longlong lStack_690;
  longlong local_688;
  longlong lStack_680;
  longlong local_678;
  longlong *plStack_670;
  longlong local_668;
  longlong lStack_660;
  longlong local_658;
  longlong lStack_650;
  longlong local_648;
  longlong *plStack_640;
  longlong local_638;
  longlong lStack_630;
  longlong local_628;
  longlong lStack_620;
  longlong local_618;
  longlong *plStack_610;
  longlong local_608;
  longlong lStack_600;
  longlong local_5f8;
  longlong lStack_5f0;
  longlong local_5e8;
  longlong *plStack_5e0;
  longlong local_5d8;
  longlong lStack_5d0;
  longlong local_5c8;
  longlong lStack_5c0;
  longlong local_5b8;
  longlong *plStack_5b0;
  longlong local_5a8;
  longlong lStack_5a0;
  longlong local_598;
  longlong lStack_590;
  longlong local_588;
  longlong *plStack_580;
  longlong local_578;
  longlong lStack_570;
  longlong local_568;
  longlong lStack_560;
  longlong local_558;
  longlong *plStack_550;
  longlong local_548;
  longlong lStack_540;
  longlong local_538;
  longlong lStack_530;
  longlong local_528;
  longlong *plStack_520;
  longlong local_518;
  longlong lStack_510;
  longlong local_508;
  longlong lStack_500;
  longlong local_4f8;
  longlong *plStack_4f0;
  longlong local_4e8;
  longlong lStack_4e0;
  longlong local_4d8;
  longlong lStack_4d0;
  longlong local_4c8;
  longlong *plStack_4c0;
  longlong local_4b8;
  longlong lStack_4b0;
  longlong local_4a8;
  longlong lStack_4a0;
  longlong local_498;
  longlong *plStack_490;
  longlong local_488;
  longlong lStack_480;
  longlong local_478;
  longlong lStack_470;
  longlong local_468;
  longlong *plStack_460;
  longlong local_458;
  longlong lStack_450;
  longlong local_448;
  longlong lStack_440;
  longlong local_438;
  longlong *plStack_430;
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  longlong lStack_410;
  longlong local_408;
  longlong *plStack_400;
  longlong local_3f8;
  longlong lStack_3f0;
  longlong local_3e8;
  longlong lStack_3e0;
  longlong local_3d8;
  longlong *plStack_3d0;
  longlong local_3c8;
  longlong lStack_3c0;
  longlong local_3b8;
  longlong lStack_3b0;
  longlong local_3a8;
  longlong *plStack_3a0;
  longlong local_398;
  longlong lStack_390;
  longlong local_388;
  longlong lStack_380;
  longlong local_378;
  longlong *plStack_370;
  longlong local_368;
  longlong lStack_360;
  longlong local_358;
  longlong lStack_350;
  longlong local_348;
  longlong *plStack_340;
  longlong local_338;
  longlong lStack_330;
  longlong local_328;
  longlong lStack_320;
  longlong local_318;
  longlong *plStack_310;
  longlong local_308;
  longlong lStack_300;
  longlong local_2f8;
  longlong lStack_2f0;
  longlong local_2e8;
  longlong *plStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  longlong local_2c8;
  longlong lStack_2c0;
  longlong local_2b8;
  longlong *plStack_2b0;
  longlong local_2a8;
  longlong lStack_2a0;
  longlong local_298;
  longlong lStack_290;
  longlong local_288;
  longlong *plStack_280;
  longlong local_278;
  longlong lStack_270;
  longlong local_268;
  longlong lStack_260;
  longlong local_258;
  longlong *plStack_250;
  longlong local_248;
  longlong lStack_240;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  longlong *plStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong *plStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong *plStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong *plStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_908;
  if ((this->PBDEvolution == (FPBDEvolution *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PBDEvolution",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x80f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->ConstraintInitOffset != -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstraintInitOffset == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x810,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (bDisplayResidual != false) {
    this->NumConstraintRules = this->NumConstraintRules + 1;
  }
  if ((bWriteFinalResiduals != false) || (bDisplayResidual != false)) {
    this->NumConstraintInits = this->NumConstraintInits + 1;
  }
  if (this->NumConstraintInits != 0) {
    iVar9 = Softs::FPBDEvolution::AddConstraintInitRange
                      (this->PBDEvolution,this->NumConstraintInits,false);
    this->ConstraintInitOffset = iVar9;
  }
  if ((this->ConstraintRuleOffset != -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstraintRuleOffset == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x81f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->NumConstraintRules != 0) {
    iVar9 = Softs::FPBDEvolution::AddConstraintRuleRange
                      (this->PBDEvolution,this->NumConstraintRules,false);
    this->ConstraintRuleOffset = iVar9;
  }
  if ((this->PostCollisionConstraintRuleOffset != -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostCollisionConstraintRuleOffset == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x825,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->NumPostCollisionConstraintRules != 0) {
    iVar9 = Softs::FPBDEvolution::AddPostCollisionConstraintRuleRange
                      (this->PBDEvolution,this->NumPostCollisionConstraintRules,false);
    this->PostCollisionConstraintRuleOffset = iVar9;
  }
  if ((this->PostprocessingConstraintRuleOffset != -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostprocessingConstraintRuleOffset == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x82a,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (bWriteFinalResiduals != false) {
    this->NumPostprocessingConstraintRules = this->NumPostprocessingConstraintRules + 1;
  }
  if (this->NumPostprocessingConstraintRules != 0) {
    iVar9 = Softs::FPBDEvolution::AddConstraintPostprocessingsRange
                      (this->PBDEvolution,this->NumPostprocessingConstraintRules,false);
    this->PostprocessingConstraintRuleOffset = iVar9;
  }
  pFVar1 = this->PBDEvolution;
  pFVar25 = (pFVar1->MConstraintInits).AllocatorInstance.Data +
            (longlong)this->ConstraintInitOffset * 0x30;
  pFVar24 = (pFVar1->MConstraintRules).AllocatorInstance.Data +
            (longlong)this->ConstraintRuleOffset * 0x30;
  pFVar18 = (pFVar1->MPostCollisionConstraintRules).AllocatorInstance.Data +
            (longlong)this->PostCollisionConstraintRuleOffset * 0x30;
  local_848 = (pFVar1->MConstraintPostprocessings).AllocatorInstance.Data +
              (longlong)this->PostprocessingConstraintRuleOffset * 0x30;
  uVar26 = 0;
  uVar29 = uVar26;
  if ((bDisplayResidual != false) || (lVar22 = 0, bWriteFinalResiduals != false)) {
    pTVar12 = ::operator_new(0x270);
    fVar7 = __real_3f99999a;
    fVar6 = __real_3f800000;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      local_8b8 = ___xmm_00000000000000000000000000000010;
      pFVar14 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)&DAT_00000010;
      FStack_8b0.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar12->SharedReferenceCount = (atomic<int>)0x1;
      pTVar12->WeakReferenceCount = (atomic<int>)0x1;
      local_840.XPBDCorotatedBatchSize = 5;
      pTVar12->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__FGaussSeidelMainConstraint_MVFSolverParticles_Softs_Chaos___Softs_Chaos___00_SharedPointerInternals__6B_
      ;
      local_840.XPBDCorotatedBatchThreshold = 5;
      local_840.NumLogExtremeParticle = 0;
      Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
      FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>
                ((FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)(pTVar12 + 1),
                 &pFVar1->MParticles,false,false,fVar7,100,fVar6,&local_840);
      pFVar14 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)(pTVar12 + 1);
      if ((pFVar14 == (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      FStack_8b0.ReferenceController = pTVar12;
      local_8b8 = pFVar14;
    }
    if (&this->GSMainConstraint !=
        (TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
         *)&local_8b8) {
      (this->GSMainConstraint).Object = pFVar14;
      local_8b8 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GSMainConstraint).SharedReferenceCount,&FStack_8b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_8b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    local_7b8 = *(longlong *)pFVar25;
    lVar17 = *(longlong *)(pFVar25 + 8);
    local_7a8 = *(longlong *)(pFVar25 + 0x10);
    lStack_7a0 = *(longlong *)(pFVar25 + 0x18);
    uVar26 = 1;
    lVar22 = *(longlong *)(pFVar25 + 0x20);
    plStack_790 = *(longlong **)(pFVar25 + 0x28);
    *(code **)pFVar25 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l61::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar25 + 8) = lStack_7b0;
    *(undefined4 *)(pFVar25 + 0x10) = 0x52c9f200;
    *(undefined4 *)(pFVar25 + 0x14) = 1;
    *(FClothConstraints **)(pFVar25 + 0x18) = this;
    *(longlong *)(pFVar25 + 0x20) = local_798;
    *(longlong *)(pFVar25 + 0x28) = 0;
    local_798 = lVar22;
    lStack_7b0 = lVar17;
    if (local_7b8 != 0) {
      plVar21 = &local_7a8;
      if (plStack_790 != (longlong *)0x0) {
        plVar21 = plStack_790;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (bDisplayResidual != false) {
      local_788 = *(longlong *)pFVar24;
      lVar17 = *(longlong *)(pFVar24 + 8);
      local_778 = *(longlong *)(pFVar24 + 0x10);
      lStack_770 = *(longlong *)(pFVar24 + 0x18);
      uVar29 = 1;
      lVar22 = *(longlong *)(pFVar24 + 0x20);
      plStack_760 = *(longlong **)(pFVar24 + 0x28);
      *(code **)pFVar24 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l64::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,float>
           ::Call;
      *(longlong *)(pFVar24 + 8) = lStack_780;
      *(undefined4 *)(pFVar24 + 0x10) = 0x52c9f220;
      *(undefined4 *)(pFVar24 + 0x14) = 1;
      *(FClothConstraints **)(pFVar24 + 0x18) = this;
      *(longlong *)(pFVar24 + 0x20) = local_768;
      *(longlong *)(pFVar24 + 0x28) = 0;
      lStack_780 = lVar17;
      local_768 = lVar22;
      if (local_788 != 0) {
        plVar21 = &local_778;
        if (plStack_760 != (longlong *)0x0) {
          plVar21 = plStack_760;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
    }
    if ((this->XStretchBiasConstraints).Object != (FXPBDStretchBiasElementConstraints *)0x0) {
      local_898.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_898.ArrayNum = 0;
      local_898.ArrayMax = 0;
      local_8a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8a8.ArrayNum = 0;
      local_8a8.ArrayMax = 0;
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar14 = (this->GSMainConstraint).Object;
      if (((this->XStretchBiasConstraints).Object == (FXPBDStretchBiasElementConstraints *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar13 = Softs::FXPBDStretchBiasElementConstraints::GetConstraintsArray
                          ((this->XStretchBiasConstraints).Object,&local_820);
      Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::AddStaticConstraints
                (pFVar14,pTVar13,&local_898,&local_8a8);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_820.AllocatorInstance.Data,
                 local_820.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_820.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_820.AllocatorInstance.Data);
      }
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
               AddStaticConstraintResidualAndHessianRange((this->GSMainConstraint).Object,1);
      local_748 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClothConstraints::CreatePBDRules'::`67'::<lambda_3>,0,0>
                   ::_vftable_;
      local_758 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l67::<lambda_3>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
                  ::Call;
      plStack_730 = (longlong *)0x0;
      uStack_740 = this;
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar14 = (this->GSMainConstraint).Object;
      uVar11 = 0;
      if ((int)uVar10 < (pFVar14->AddStaticConstraintResidualAndHessian).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar19 = (pFVar14->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data +
                (longlong)(int)uVar10 * 0x30;
      lVar17 = *(longlong *)pFVar19;
      lVar3 = *(longlong *)(pFVar19 + 8);
      lVar4 = *(longlong *)(pFVar19 + 0x10);
      lVar5 = *(longlong *)(pFVar19 + 0x18);
      lVar22 = *(longlong *)(pFVar19 + 0x20);
      plVar21 = *(longlong **)(pFVar19 + 0x28);
      *(code **)pFVar19 = local_758;
      *(longlong *)(pFVar19 + 8) = lStack_750;
      *(undefined4 *)(pFVar19 + 0x10) = (undefined4)local_748;
      *(undefined4 *)(pFVar19 + 0x14) = local_748._4_4_;
      *(undefined4 *)(pFVar19 + 0x18) = (undefined4)uStack_740;
      *(undefined4 *)(pFVar19 + 0x1c) = uStack_740._4_4_;
      *(longlong *)(pFVar19 + 0x20) = local_738;
      *(longlong **)(pFVar19 + 0x28) = plStack_730;
      local_758 = (code *)lVar17;
      lStack_750 = lVar3;
      local_748 = (undefined **)lVar4;
      uStack_740 = (FClothConstraints *)lVar5;
      local_738 = lVar22;
      plStack_730 = plVar21;
      if (lVar17 != 0) {
        plVar20 = &local_748;
        if (plVar21 != (longlong *)0x0) {
          plVar20 = plVar21;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_8a8.AllocatorInstance.Data,
                 local_8a8.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_8a8.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_8a8.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_898.AllocatorInstance.Data,
                 local_898.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_898.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_898.AllocatorInstance.Data);
      }
    }
    if ((this->XAnisoBendingElementConstraints).Object != (FXPBDAnisotropicBendingConstraints *)0x0)
    {
      local_878.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_878.ArrayNum = 0;
      local_878.ArrayMax = 0;
      local_888.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_888.ArrayNum = 0;
      local_888.ArrayMax = 0;
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar14 = (this->GSMainConstraint).Object;
      if (((this->XAnisoBendingElementConstraints).Object ==
           (FXPBDAnisotropicBendingConstraints *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar13 = Softs::FXPBDAnisotropicBendingConstraints::GetConstraintsArray
                          ((this->XAnisoBendingElementConstraints).Object,&local_810);
      Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::AddStaticConstraints
                (pFVar14,pTVar13,&local_878,&local_888);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_810.AllocatorInstance.Data,
                 local_810.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_810.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_810.AllocatorInstance.Data);
      }
      if (((this->GSMainConstraint).Object ==
           (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
               AddStaticConstraintResidualAndHessianRange((this->GSMainConstraint).Object,1);
      plStack_700 = (longlong *)0x0;
      local_718 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClothConstraints::CreatePBDRules'::`70'::<lambda_4>,0,0>
                   ::_vftable_;
      local_728 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l70::<lambda_4>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
                  ::Call;
      uStack_710 = this;
      pFVar14 = TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
                ::operator->(&this->GSMainConstraint);
      uVar10 = 0;
      if ((int)uVar11 < (pFVar14->AddStaticConstraintResidualAndHessian).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar19 = (pFVar14->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data +
                (longlong)(int)uVar11 * 0x30;
      lVar17 = *(longlong *)pFVar19;
      lVar3 = *(longlong *)(pFVar19 + 8);
      lVar4 = *(longlong *)(pFVar19 + 0x10);
      lVar5 = *(longlong *)(pFVar19 + 0x18);
      lVar22 = *(longlong *)(pFVar19 + 0x20);
      plVar21 = *(longlong **)(pFVar19 + 0x28);
      *(code **)pFVar19 = local_728;
      *(longlong *)(pFVar19 + 8) = lStack_720;
      *(undefined4 *)(pFVar19 + 0x10) = (undefined4)local_718;
      *(undefined4 *)(pFVar19 + 0x14) = local_718._4_4_;
      *(undefined4 *)(pFVar19 + 0x18) = (undefined4)uStack_710;
      *(undefined4 *)(pFVar19 + 0x1c) = uStack_710._4_4_;
      *(longlong *)(pFVar19 + 0x20) = local_708;
      *(longlong **)(pFVar19 + 0x28) = plStack_700;
      local_728 = (code *)lVar17;
      lStack_720 = lVar3;
      local_718 = (undefined **)lVar4;
      uStack_710 = (FClothConstraints *)lVar5;
      local_708 = lVar22;
      plStack_700 = plVar21;
      if (lVar17 != 0) {
        plVar20 = &local_718;
        if (plVar21 != (longlong *)0x0) {
          plVar20 = plVar21;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_888.AllocatorInstance.Data,
                 local_888.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_888.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_888.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_878.AllocatorInstance.Data,
                 local_878.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_878.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_878.AllocatorInstance.Data);
      }
    }
    if ((this->XBendingElementConstraints).Object != (FXPBDBendingConstraints *)0x0) {
      local_858.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_858.ArrayNum = 0;
      local_858.ArrayMax = 0;
      local_868.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_868.ArrayNum = 0;
      local_868.ArrayMax = 0;
      pFVar14 = TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
                ::operator->(&this->GSMainConstraint);
      this_00 = TSharedPtr<Chaos::Softs::FXPBDBendingConstraints,1>::operator->
                          (&this->XBendingElementConstraints);
      pTVar13 = Softs::FXPBDBendingConstraints::GetConstraintsArray(this_00,&local_800);
      Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::AddStaticConstraints
                (pFVar14,pTVar13,&local_858,&local_868);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_800.AllocatorInstance.Data,
                 local_800.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_800.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_800.AllocatorInstance.Data);
      }
      pFVar14 = TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
                ::operator->(&this->GSMainConstraint);
      uVar11 = Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
               AddStaticConstraintResidualAndHessianRange(pFVar14,1);
      plStack_6d0 = (longlong *)0x0;
      local_6e8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClothConstraints::CreatePBDRules'::`73'::<lambda_5>,0,0>
                   ::_vftable_;
      local_6f8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l73::<lambda_5>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
                  ::Call;
      uStack_6e0 = this;
      pFVar14 = TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
                ::operator->(&this->GSMainConstraint);
      uVar10 = 0;
      if ((int)uVar11 < (pFVar14->AddStaticConstraintResidualAndHessian).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar19 = (pFVar14->AddStaticConstraintResidualAndHessian).AllocatorInstance.Data +
                (longlong)(int)uVar11 * 0x30;
      lVar17 = *(longlong *)pFVar19;
      lVar3 = *(longlong *)(pFVar19 + 8);
      lVar4 = *(longlong *)(pFVar19 + 0x10);
      lVar5 = *(longlong *)(pFVar19 + 0x18);
      lVar22 = *(longlong *)(pFVar19 + 0x20);
      plVar21 = *(longlong **)(pFVar19 + 0x28);
      *(code **)pFVar19 = local_6f8;
      *(longlong *)(pFVar19 + 8) = lStack_6f0;
      *(undefined4 *)(pFVar19 + 0x10) = (undefined4)local_6e8;
      *(undefined4 *)(pFVar19 + 0x14) = local_6e8._4_4_;
      *(undefined4 *)(pFVar19 + 0x18) = (undefined4)uStack_6e0;
      *(undefined4 *)(pFVar19 + 0x1c) = uStack_6e0._4_4_;
      *(longlong *)(pFVar19 + 0x20) = local_6d8;
      *(longlong **)(pFVar19 + 0x28) = plStack_6d0;
      local_6f8 = (code *)lVar17;
      lStack_6f0 = lVar3;
      local_6e8 = (undefined **)lVar4;
      uStack_6e0 = (FClothConstraints *)lVar5;
      local_6d8 = lVar22;
      plStack_6d0 = plVar21;
      if (lVar17 != 0) {
        plVar20 = &local_6e8;
        if (plVar21 != (longlong *)0x0) {
          plVar20 = plVar21;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_868.AllocatorInstance.Data,
                 local_868.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_868.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_868.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_858.AllocatorInstance.Data,
                 local_858.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_858.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_858.AllocatorInstance.Data);
      }
    }
    if (((this->GSMainConstraint).Object ==
         (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitStaticColor
              ((this->GSMainConstraint).Object,&this->PBDEvolution->MParticles,
               (TPBDActiveView<Chaos::Softs::FSolverParticles> *)0x0);
    lVar22 = 0;
    if (bWriteFinalResiduals != false) {
      FPaths::ProjectDir(&local_830);
      ::FString::AppendChars(&local_830,L"/DebugOutput/NewtonResidual.txt",0x1f);
      pIVar15 = IFileManager::Get();
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_830.Data.ArrayNum != 0) {
        FVar23.Data = local_830.Data.AllocatorInstance.Data;
      }
      pFVar16 = ::FString::FString(&local_7c8,L"Newton Norm\r\n");
      local_7e8 = (pFVar16->Data).AllocatorInstance.Data;
      iVar9 = (pFVar16->Data).ArrayNum;
      iStack_7e0 = iVar9 + -1;
      if (iVar9 == 0) {
        iStack_7e0 = 0;
      }
      local_7d8._12_4_ = uStack_7dc;
      local_7d8.Size = iStack_7e0;
      local_7d8.DataPtr = (wchar_t *)local_7e8;
      FFileHelper::SaveStringToFile(&local_7d8,(wchar_t *)FVar23.Data,AutoDetect,pIVar15,0);
      if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
      }
      local_6c8 = *(longlong *)local_848;
      lVar17 = *(longlong *)(local_848 + 8);
      local_6b8 = *(longlong *)(local_848 + 0x10);
      lStack_6b0 = *(longlong *)(local_848 + 0x18);
      lVar22 = *(longlong *)(local_848 + 0x20);
      plStack_6a0 = *(longlong **)(local_848 + 0x28);
      *(code **)local_848 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l76::<lambda_6>,void,Chaos::Softs::FSolverParticles_&,float>
           ::Call;
      *(longlong *)(local_848 + 8) = lStack_6c0;
      *(undefined4 *)(local_848 + 0x10) = 0x52c9f2a0;
      *(undefined4 *)(local_848 + 0x14) = 1;
      *(FClothConstraints **)(local_848 + 0x18) = this;
      *(longlong *)(local_848 + 0x20) = local_6a8;
      *(longlong *)(local_848 + 0x28) = 0;
      lStack_6c0 = lVar17;
      local_6a8 = lVar22;
      if (local_6c8 != 0) {
        plVar21 = &local_6b8;
        if (plStack_6a0 != (longlong *)0x0) {
          plVar21 = plStack_6a0;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      lVar22 = 1;
      if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_830.Data.AllocatorInstance.Data);
      }
    }
  }
  uVar27 = uVar26;
  uVar30 = uVar29;
  if ((this->XStretchBiasConstraints).Object != (FXPBDStretchBiasElementConstraints *)0x0) {
    uVar27 = (ulonglong)((int)uVar26 + 1);
    pFVar19 = pFVar25 + uVar26 * 0x30;
    local_698 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_688 = *(longlong *)(pFVar19 + 0x10);
    lStack_680 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_670 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l79::<lambda_7>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_690;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f2c0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_678;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_690 = lVar3;
    local_678 = lVar17;
    if (local_698 != 0) {
      plVar21 = &local_688;
      if (plStack_670 != (longlong *)0x0) {
        plVar21 = plStack_670;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    uVar30 = (ulonglong)((int)uVar29 + 1);
    pFVar19 = pFVar24 + uVar29 * 0x30;
    local_668 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_658 = *(longlong *)(pFVar19 + 0x10);
    lStack_650 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_640 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l79::<lambda_8>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_660;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f2e0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_648;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_660 = lVar3;
    local_648 = lVar17;
    if (local_668 != 0) {
      plVar21 = &local_658;
      if (plStack_640 != (longlong *)0x0) {
        plVar21 = plStack_640;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  uVar26 = uVar27;
  uVar29 = uVar30;
  if ((this->XEdgeConstraints).Object != (FXPBDEdgeSpringConstraints *)0x0) {
    uVar26 = (ulonglong)((int)uVar27 + 1);
    pFVar19 = pFVar25 + uVar27 * 0x30;
    local_638 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_628 = *(longlong *)(pFVar19 + 0x10);
    lStack_620 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_610 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l82::<lambda_9>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_630;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f300;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_618;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_630 = lVar3;
    local_618 = lVar17;
    if (local_638 != 0) {
      plVar21 = &local_628;
      if (plStack_610 != (longlong *)0x0) {
        plVar21 = plStack_610;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    uVar29 = (ulonglong)((int)uVar30 + 1);
    pFVar19 = pFVar24 + uVar30 * 0x30;
    local_608 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_5f8 = *(longlong *)(pFVar19 + 0x10);
    lStack_5f0 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_5e0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l82::<lambda_10>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_600;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f320;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_5e8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_600 = lVar3;
    local_5e8 = lVar17;
    if (local_608 != 0) {
      plVar21 = &local_5f8;
      if (plStack_5e0 != (longlong *)0x0) {
        plVar21 = plStack_5e0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  uVar27 = uVar26;
  uVar30 = uVar29;
  if ((this->EdgeConstraints).Object != (FPBDEdgeSpringConstraints *)0x0) {
    uVar27 = (ulonglong)((int)uVar26 + 1);
    pFVar19 = pFVar25 + uVar26 * 0x30;
    local_5d8 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_5c8 = *(longlong *)(pFVar19 + 0x10);
    lStack_5c0 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_5b0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l85::<lambda_11>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_5d0;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f340;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_5b8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_5d0 = lVar3;
    local_5b8 = lVar17;
    if (local_5d8 != 0) {
      plVar21 = &local_5c8;
      if (plStack_5b0 != (longlong *)0x0) {
        plVar21 = plStack_5b0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    uVar30 = (ulonglong)((int)uVar29 + 1);
    pFVar19 = pFVar24 + uVar29 * 0x30;
    local_5a8 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_598 = *(longlong *)(pFVar19 + 0x10);
    lStack_590 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_580 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l85::<lambda_12>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_5a0;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f360;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_588;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_5a0 = lVar3;
    local_588 = lVar17;
    if (local_5a8 != 0) {
      plVar21 = &local_598;
      if (plStack_580 != (longlong *)0x0) {
        plVar21 = plStack_580;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  iVar9 = (int)uVar27;
  iVar28 = (int)uVar30;
  if ((this->XAnisoSpringConstraints).Object != (FXPBDAnisotropicSpringConstraints *)0x0) {
    iVar9 = iVar9 + 1;
    pFVar19 = pFVar25 + uVar27 * 0x30;
    local_578 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_568 = *(longlong *)(pFVar19 + 0x10);
    lStack_560 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_550 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l88::<lambda_13>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_570;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f380;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_558;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_570 = lVar3;
    local_558 = lVar17;
    if (local_578 != 0) {
      plVar21 = &local_568;
      if (plStack_550 != (longlong *)0x0) {
        plVar21 = plStack_550;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + uVar30 * 0x30;
    local_548 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_538 = *(longlong *)(pFVar19 + 0x10);
    lStack_530 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_520 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l88::<lambda_14>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_540;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f3a0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_528;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_540 = lVar3;
    local_528 = lVar17;
    if (local_548 != 0) {
      plVar21 = &local_538;
      if (plStack_520 != (longlong *)0x0) {
        plVar21 = plStack_520;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->XBendingConstraints).Object != (FXPBDBendingSpringConstraints *)0x0) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar19 = pFVar25 + lVar17 * 0x30;
    local_518 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_508 = *(longlong *)(pFVar19 + 0x10);
    lStack_500 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_4f0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l91::<lambda_15>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_510;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f3c0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_4f8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_510 = lVar3;
    local_4f8 = lVar17;
    if (local_518 != 0) {
      plVar21 = &local_508;
      if (plStack_4f0 != (longlong *)0x0) {
        plVar21 = plStack_4f0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_4e8 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_4d8 = *(longlong *)(pFVar19 + 0x10);
    lStack_4d0 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_4c0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l91::<lambda_16>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_4e0;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f3e0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_4c8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_4e0 = lVar3;
    local_4c8 = lVar17;
    if (local_4e8 != 0) {
      plVar21 = &local_4d8;
      if (plStack_4c0 != (longlong *)0x0) {
        plVar21 = plStack_4c0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->BendingConstraints).Object != (FPBDBendingSpringConstraints *)0x0) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar19 = pFVar25 + lVar17 * 0x30;
    local_4b8 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_4a8 = *(longlong *)(pFVar19 + 0x10);
    lStack_4a0 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_490 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l94::<lambda_17>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_4b0;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f400;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_498;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_4b0 = lVar3;
    local_498 = lVar17;
    if (local_4b8 != 0) {
      plVar21 = &local_4a8;
      if (plStack_490 != (longlong *)0x0) {
        plVar21 = plStack_490;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_488 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_478 = *(longlong *)(pFVar19 + 0x10);
    lStack_470 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_460 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l94::<lambda_18>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_480;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f420;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_468;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_480 = lVar3;
    local_468 = lVar17;
    if (local_488 != 0) {
      plVar21 = &local_478;
      if (plStack_460 != (longlong *)0x0) {
        plVar21 = plStack_460;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->BendingElementConstraints).Object != (FPBDBendingConstraints *)0x0) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar19 = pFVar25 + lVar17 * 0x30;
    local_458 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_448 = *(longlong *)(pFVar19 + 0x10);
    lStack_440 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_430 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l97::<lambda_19>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_450;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f440;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_438;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_450 = lVar3;
    local_438 = lVar17;
    if (local_458 != 0) {
      plVar21 = &local_448;
      if (plStack_430 != (longlong *)0x0) {
        plVar21 = plStack_430;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_428 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_418 = *(longlong *)(pFVar19 + 0x10);
    lStack_410 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_400 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l97::<lambda_20>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_420;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f460;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_408;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_420 = lVar3;
    local_408 = lVar17;
    if (local_428 != 0) {
      plVar21 = &local_418;
      if (plStack_400 != (longlong *)0x0) {
        plVar21 = plStack_400;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->XBendingElementConstraints).Object != (FXPBDBendingConstraints *)0x0) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar19 = pFVar25 + lVar17 * 0x30;
    local_3f8 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_3e8 = *(longlong *)(pFVar19 + 0x10);
    lStack_3e0 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_3d0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l100::<lambda_21>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_3f0;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f480;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_3d8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_3f0 = lVar3;
    local_3d8 = lVar17;
    if (local_3f8 != 0) {
      plVar21 = &local_3e8;
      if (plStack_3d0 != (longlong *)0x0) {
        plVar21 = plStack_3d0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_3c8 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_3b8 = *(longlong *)(pFVar19 + 0x10);
    lStack_3b0 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_3a0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l100::<lambda_22>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_3c0;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f4a0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_3a8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_3c0 = lVar3;
    local_3a8 = lVar17;
    if (local_3c8 != 0) {
      plVar21 = &local_3b8;
      if (plStack_3a0 != (longlong *)0x0) {
        plVar21 = plStack_3a0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->XAnisoBendingElementConstraints).Object != (FXPBDAnisotropicBendingConstraints *)0x0) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar19 = pFVar25 + lVar17 * 0x30;
    local_398 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_388 = *(longlong *)(pFVar19 + 0x10);
    lStack_380 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_370 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l103::<lambda_23>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_390;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f4c0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_378;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_390 = lVar3;
    local_378 = lVar17;
    if (local_398 != 0) {
      plVar21 = &local_388;
      if (plStack_370 != (longlong *)0x0) {
        plVar21 = plStack_370;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_368 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_358 = *(longlong *)(pFVar19 + 0x10);
    lStack_350 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_340 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l103::<lambda_24>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_360;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f4e0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_348;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_360 = lVar3;
    local_348 = lVar17;
    if (local_368 != 0) {
      plVar21 = &local_358;
      if (plStack_340 != (longlong *)0x0) {
        plVar21 = plStack_340;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->XAreaConstraints).Object != (FXPBDAreaSpringConstraints *)0x0) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar19 = pFVar25 + lVar17 * 0x30;
    local_338 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_328 = *(longlong *)(pFVar19 + 0x10);
    lStack_320 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_310 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l106::<lambda_25>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_330;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f500;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_318;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_330 = lVar3;
    local_318 = lVar17;
    if (local_338 != 0) {
      plVar21 = &local_328;
      if (plStack_310 != (longlong *)0x0) {
        plVar21 = plStack_310;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_308 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_2f8 = *(longlong *)(pFVar19 + 0x10);
    lStack_2f0 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_2e0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l106::<lambda_26>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_300;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f520;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_2e8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_300 = lVar3;
    local_2e8 = lVar17;
    if (local_308 != 0) {
      plVar21 = &local_2f8;
      if (plStack_2e0 != (longlong *)0x0) {
        plVar21 = plStack_2e0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->AreaConstraints).Object != (FPBDAreaSpringConstraints *)0x0) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar19 = pFVar25 + lVar17 * 0x30;
    local_2d8 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_2c8 = *(longlong *)(pFVar19 + 0x10);
    lStack_2c0 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_2b0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l109::<lambda_27>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_2d0;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f540;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_2b8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_2d0 = lVar3;
    local_2b8 = lVar17;
    if (local_2d8 != 0) {
      plVar21 = &local_2c8;
      if (plStack_2b0 != (longlong *)0x0) {
        plVar21 = plStack_2b0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_2a8 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_298 = *(longlong *)(pFVar19 + 0x10);
    lStack_290 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_280 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l109::<lambda_28>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_2a0;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f560;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_288;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_2a0 = lVar3;
    local_288 = lVar17;
    if (local_2a8 != 0) {
      plVar21 = &local_298;
      if (plStack_280 != (longlong *)0x0) {
        plVar21 = plStack_280;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->XAnisoSpringConstraints).Object != (FXPBDAnisotropicSpringConstraints *)0x0) {
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_278 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_268 = *(longlong *)(pFVar19 + 0x10);
    lStack_260 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_250 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l112::<lambda_29>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_270;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f580;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_258;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_270 = lVar3;
    local_258 = lVar17;
    if (local_278 != 0) {
      plVar21 = &local_268;
      if (plStack_250 != (longlong *)0x0) {
        plVar21 = plStack_250;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->MaximumDistanceConstraints).Object != (FPBDSphericalConstraint *)0x0) {
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_248 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_238 = *(longlong *)(pFVar19 + 0x10);
    lStack_230 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_220 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l115::<lambda_30>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_240;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f5a0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_228;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_240 = lVar3;
    local_228 = lVar17;
    if (local_248 != 0) {
      plVar21 = &local_238;
      if (plStack_220 != (longlong *)0x0) {
        plVar21 = plStack_220;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->BackstopConstraints).Object != (FPBDSphericalBackstopConstraint *)0x0) {
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar19 = pFVar24 + lVar17 * 0x30;
    local_218 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_208 = *(longlong *)(pFVar19 + 0x10);
    lStack_200 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_1f0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l118::<lambda_31>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_210;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f5c0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_1f8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_210 = lVar3;
    local_1f8 = lVar17;
    if (local_218 != 0) {
      plVar21 = &local_208;
      if (plStack_1f0 != (longlong *)0x0) {
        plVar21 = plStack_1f0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->AnimDriveConstraints).Object != (FPBDAnimDriveConstraint *)0x0) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar19 = pFVar25 + lVar17 * 0x30;
    local_1e8 = *(longlong *)pFVar19;
    lVar3 = *(longlong *)(pFVar19 + 8);
    local_1d8 = *(longlong *)(pFVar19 + 0x10);
    lStack_1d0 = *(longlong *)(pFVar19 + 0x18);
    lVar17 = *(longlong *)(pFVar19 + 0x20);
    plStack_1c0 = *(longlong **)(pFVar19 + 0x28);
    *(code **)pFVar19 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l121::<lambda_32>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar19 + 8) = lStack_1e0;
    *(undefined4 *)(pFVar19 + 0x10) = 0x52c9f5e0;
    *(undefined4 *)(pFVar19 + 0x14) = 1;
    *(FClothConstraints **)(pFVar19 + 0x18) = this;
    *(longlong *)(pFVar19 + 0x20) = local_1c8;
    *(longlong *)(pFVar19 + 0x28) = 0;
    lStack_1e0 = lVar3;
    local_1c8 = lVar17;
    if (local_1e8 != 0) {
      plVar21 = &local_1d8;
      if (plStack_1c0 != (longlong *)0x0) {
        plVar21 = plStack_1c0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    lVar17 = (longlong)iVar28;
    iVar28 = iVar28 + 1;
    pFVar24 = pFVar24 + lVar17 * 0x30;
    local_1b8 = *(longlong *)pFVar24;
    lVar3 = *(longlong *)(pFVar24 + 8);
    local_1a8 = *(longlong *)(pFVar24 + 0x10);
    lStack_1a0 = *(longlong *)(pFVar24 + 0x18);
    lVar17 = *(longlong *)(pFVar24 + 0x20);
    plStack_190 = *(longlong **)(pFVar24 + 0x28);
    *(code **)pFVar24 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l121::<lambda_33>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar24 + 8) = lStack_1b0;
    *(undefined4 *)(pFVar24 + 0x10) = 0x52c9f600;
    *(undefined4 *)(pFVar24 + 0x14) = 1;
    *(FClothConstraints **)(pFVar24 + 0x18) = this;
    *(longlong *)(pFVar24 + 0x20) = local_198;
    *(longlong *)(pFVar24 + 0x28) = 0;
    lStack_1b0 = lVar3;
    local_198 = lVar17;
    if (local_1b8 != 0) {
      plVar21 = &local_1a8;
      if (plStack_190 != (longlong *)0x0) {
        plVar21 = plStack_190;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if (((this->SelfCollisionInit).Object == (FPBDTriangleMeshCollisions *)0x0) ||
     ((this->SelfCollisionConstraints).Object == (FPBDCollisionSpringConstraints *)0x0)) {
    uVar10 = 0;
  }
  else {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar24 = pFVar25 + lVar17 * 0x30;
    local_188 = *(longlong *)pFVar24;
    lVar3 = *(longlong *)(pFVar24 + 8);
    local_178 = *(longlong *)(pFVar24 + 0x10);
    lStack_170 = *(longlong *)(pFVar24 + 0x18);
    lVar17 = *(longlong *)(pFVar24 + 0x20);
    plStack_160 = *(longlong **)(pFVar24 + 0x28);
    *(code **)pFVar24 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l124::<lambda_34>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar24 + 8) = lStack_180;
    *(undefined4 *)(pFVar24 + 0x10) = 0x52c9f620;
    *(undefined4 *)(pFVar24 + 0x14) = 1;
    *(FClothConstraints **)(pFVar24 + 0x18) = this;
    *(longlong *)(pFVar24 + 0x20) = local_168;
    *(longlong *)(pFVar24 + 0x28) = 0;
    lStack_180 = lVar3;
    local_168 = lVar17;
    if (local_188 != 0) {
      plVar21 = &local_178;
      if (plStack_160 != (longlong *)0x0) {
        plVar21 = plStack_160;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    uVar10 = 1;
    local_158 = *(longlong *)pFVar18;
    lVar3 = *(longlong *)(pFVar18 + 8);
    local_148 = *(longlong *)(pFVar18 + 0x10);
    lStack_140 = *(longlong *)(pFVar18 + 0x18);
    lVar17 = *(longlong *)(pFVar18 + 0x20);
    plStack_130 = *(longlong **)(pFVar18 + 0x28);
    *(code **)pFVar18 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l124::<lambda_35>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar18 + 8) = lStack_150;
    *(undefined4 *)(pFVar18 + 0x10) = 0x52c9f640;
    *(undefined4 *)(pFVar18 + 0x14) = 1;
    *(FClothConstraints **)(pFVar18 + 0x18) = this;
    *(longlong *)(pFVar18 + 0x20) = local_138;
    *(longlong *)(pFVar18 + 0x28) = 0;
    lStack_150 = lVar3;
    local_138 = lVar17;
    if (local_158 != 0) {
      plVar21 = &local_148;
      if (plStack_130 != (longlong *)0x0) {
        plVar21 = plStack_130;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->SelfCollisionSphereConstraints).Object != (FPBDSelfCollisionSphereConstraints *)0x0) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar24 = pFVar25 + lVar17 * 0x30;
    local_128 = *(longlong *)pFVar24;
    lVar3 = *(longlong *)(pFVar24 + 8);
    local_118 = *(longlong *)(pFVar24 + 0x10);
    lStack_110 = *(longlong *)(pFVar24 + 0x18);
    lVar17 = *(longlong *)(pFVar24 + 0x20);
    plStack_100 = *(longlong **)(pFVar24 + 0x28);
    *(code **)pFVar24 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l127::<lambda_36>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar24 + 8) = lStack_120;
    *(undefined4 *)(pFVar24 + 0x10) = 0x52c9f660;
    *(undefined4 *)(pFVar24 + 0x14) = 1;
    *(FClothConstraints **)(pFVar24 + 0x18) = this;
    *(longlong *)(pFVar24 + 0x20) = local_108;
    *(longlong *)(pFVar24 + 0x28) = 0;
    lStack_120 = lVar3;
    local_108 = lVar17;
    if (local_128 != 0) {
      plVar21 = &local_118;
      if (plStack_100 != (longlong *)0x0) {
        plVar21 = plStack_100;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    uVar26 = (ulonglong)uVar10;
    uVar10 = uVar10 + 1;
    pFVar18 = pFVar18 + uVar26 * 0x30;
    local_f8 = *(longlong *)pFVar18;
    lVar3 = *(longlong *)(pFVar18 + 8);
    local_e8 = *(longlong *)(pFVar18 + 0x10);
    lStack_e0 = *(longlong *)(pFVar18 + 0x18);
    lVar17 = *(longlong *)(pFVar18 + 0x20);
    plStack_d0 = *(longlong **)(pFVar18 + 0x28);
    *(code **)pFVar18 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l127::<lambda_37>,void,Chaos::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar18 + 8) = lStack_f0;
    *(undefined4 *)(pFVar18 + 0x10) = 0x52c9f680;
    *(undefined4 *)(pFVar18 + 0x14) = 1;
    *(FClothConstraints **)(pFVar18 + 0x18) = this;
    *(longlong *)(pFVar18 + 0x20) = local_d8;
    *(longlong *)(pFVar18 + 0x28) = 0;
    lStack_f0 = lVar3;
    local_d8 = lVar17;
    if (local_f8 != 0) {
      plVar21 = &local_e8;
      if (plStack_d0 != (longlong *)0x0) {
        plVar21 = plStack_d0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if (((this->SelfCollisionInit).Object != (FPBDTriangleMeshCollisions *)0x0) &&
     ((this->SelfIntersectionConstraints).Object != (FPBDTriangleMeshIntersections *)0x0)) {
    lVar17 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar24 = pFVar25 + lVar17 * 0x30;
    local_c8 = *(longlong *)pFVar24;
    lVar3 = *(longlong *)(pFVar24 + 8);
    local_b8 = *(longlong *)(pFVar24 + 0x10);
    lStack_b0 = *(longlong *)(pFVar24 + 0x18);
    lVar17 = *(longlong *)(pFVar24 + 0x20);
    plStack_a0 = *(longlong **)(pFVar24 + 0x28);
    *(code **)pFVar24 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'[::C]::<lambda_38>,void,FClothConstraints::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar24 + 8) = lStack_c0;
    *(undefined4 *)(pFVar24 + 0x10) = 0x52c9f6a0;
    *(undefined4 *)(pFVar24 + 0x14) = 1;
    *(FClothConstraints **)(pFVar24 + 0x18) = this;
    *(longlong *)(pFVar24 + 0x20) = local_a8;
    *(longlong *)(pFVar24 + 0x28) = 0;
    lStack_c0 = lVar3;
    local_a8 = lVar17;
    if (local_c8 != 0) {
      plVar21 = &local_b8;
      if (plStack_a0 != (longlong *)0x0) {
        plVar21 = plStack_a0;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    pFVar24 = local_848 + lVar22 * 0x30;
    local_98 = *(longlong *)pFVar24;
    lVar17 = *(longlong *)(pFVar24 + 8);
    local_88 = *(longlong *)(pFVar24 + 0x10);
    lStack_80 = *(longlong *)(pFVar24 + 0x18);
    lVar22 = *(longlong *)(pFVar24 + 0x20);
    plStack_70 = *(longlong **)(pFVar24 + 0x28);
    *(code **)pFVar24 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'[::C]::<lambda_39>,void,FClothConstraints::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar24 + 8) = lStack_90;
    *(undefined4 *)(pFVar24 + 0x10) = 0x52c9f6c0;
    *(undefined4 *)(pFVar24 + 0x14) = 1;
    *(FClothConstraints **)(pFVar24 + 0x18) = this;
    *(longlong *)(pFVar24 + 0x20) = local_78;
    *(longlong *)(pFVar24 + 0x28) = 0;
    lStack_90 = lVar17;
    local_78 = lVar22;
    if (local_98 != 0) {
      plVar21 = &local_88;
      if (plStack_70 != (longlong *)0x0) {
        plVar21 = plStack_70;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((this->LongRangeConstraints).Object != (FPBDLongRangeConstraints *)0x0) {
    lVar22 = (longlong)iVar9;
    iVar9 = iVar9 + 1;
    pFVar25 = pFVar25 + lVar22 * 0x30;
    local_68 = *(longlong *)pFVar25;
    lVar17 = *(longlong *)(pFVar25 + 8);
    local_58 = *(longlong *)(pFVar25 + 0x10);
    lStack_50 = *(longlong *)(pFVar25 + 0x18);
    lVar22 = *(longlong *)(pFVar25 + 0x20);
    plStack_40 = *(longlong **)(pFVar25 + 0x28);
    *(code **)pFVar25 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'[::F]::<lambda_40>,void,FClothConstraints::Softs::FSolverParticles_&,float>
         ::Call;
    *(longlong *)(pFVar25 + 8) = lStack_60;
    *(undefined4 *)(pFVar25 + 0x10) = 0x52c9f6e0;
    *(undefined4 *)(pFVar25 + 0x14) = 1;
    *(FClothConstraints **)(pFVar25 + 0x18) = this;
    *(longlong *)(pFVar25 + 0x20) = local_48;
    *(longlong *)(pFVar25 + 0x28) = 0;
    lStack_60 = lVar17;
    local_48 = lVar22;
    if (local_68 != 0) {
      plVar21 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar21 = plStack_40;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  if ((iVar9 != this->NumConstraintInits) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstraintInitIndex == NumConstraintInits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x9a3,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((iVar28 != this->NumConstraintRules) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstraintRuleIndex == NumConstraintRules",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x9a4,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uVar10 != this->NumPostCollisionConstraintRules) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostCollisionConstraintRuleIndex == NumPostCollisionConstraintRules",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x9a5,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// CreateSelfCollisionConstraints @ 14dbd1ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateSelfCollisionConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                   *param_3,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *param_4,TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
                   *param_5,FTriangleMesh *param_6)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  ECollectionPropertyFlags EVar5;
  int *piVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPBDTriangleMeshCollisions *pFVar8;
  FPBDTriangleMeshCollisions *pFVar9;
  FPBDTriangleMeshCollisions *local_68;
  FSharedReferencer<1> FStack_60;
  FPBDTriangleMeshCollisions *local_58;
  FSharedReferencer<1> FStack_50;
  FPBDTriangleMeshCollisions *local_48;
  FSharedReferencer<1> FStack_40;
  FPBDTriangleMeshCollisions *local_38;
  FSharedReferencer<1> FStack_30;
  
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,
                      Softs::FPBDCollisionSpringConstraints::UseSelfCollisionsName);
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    bVar4 = Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,*piVar6,&param_1->LowValueArray);
    if (bVar4) {
      pTVar7 = ::operator_new(0x560);
      pFVar9 = (FPBDTriangleMeshCollisions *)&DAT_00000010;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_68 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDTriangleMeshCollisions *)&DAT_00000010;
        FStack_60.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDTriangleMeshCollisions_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        Softs::FPBDTriangleMeshCollisions::FPBDTriangleMeshCollisions
                  ((FPBDTriangleMeshCollisions *)(pTVar7 + 1),this->ParticleOffset,
                   this->NumParticles,param_4,param_6,param_1);
        pFVar8 = (FPBDTriangleMeshCollisions *)(pTVar7 + 1);
        if (pFVar8 == (FPBDTriangleMeshCollisions *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FStack_60.ReferenceController = pTVar7;
        local_68 = pFVar8;
      }
      if (&this->SelfCollisionInit !=
          (TSharedPtr<Chaos::Softs::FPBDTriangleMeshCollisions,1> *)&local_68) {
        (this->SelfCollisionInit).Object = pFVar8;
        local_68 = (FPBDTriangleMeshCollisions *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SelfCollisionInit).SharedReferenceCount,&FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      this->NumConstraintInits = this->NumConstraintInits + 1;
      pTVar7 = ::operator_new(0x220);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_58 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FPBDTriangleMeshCollisions *)&DAT_00000010;
        FStack_50.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDCollisionSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        Softs::FPBDCollisionSpringConstraints::FPBDCollisionSpringConstraints
                  ((FPBDCollisionSpringConstraints *)(pTVar7 + 1),this->ParticleOffset,
                   this->NumParticles,param_6,this->AnimationPositions,param_2,param_5,param_1);
        pFVar8 = (FPBDTriangleMeshCollisions *)(pTVar7 + 1);
        if (pFVar8 == (FPBDTriangleMeshCollisions *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FStack_50.ReferenceController = pTVar7;
        local_58 = pFVar8;
      }
      if (&this->SelfCollisionConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDCollisionSpringConstraints,1> *)&local_58) {
        (this->SelfCollisionConstraints).Object = (FPBDCollisionSpringConstraints *)pFVar8;
        local_58 = (FPBDTriangleMeshCollisions *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SelfCollisionConstraints).SharedReferenceCount,&FStack_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_50.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      this->NumPostCollisionConstraintRules = this->NumPostCollisionConstraintRules + 1;
      pTVar7 = ::operator_new(0x20);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_48 = ___xmm_00000000000000000000000000000010;
        FStack_40.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pFVar9 = (FPBDTriangleMeshCollisions *)(pTVar7 + 1);
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDTriangleMeshIntersections_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        aVar1 = (atomic<int>)this->NumParticles;
        aVar2 = (atomic<int>)this->ParticleOffset;
        pTVar7[1]._padding_ = (longlong)param_6;
        pTVar7[1].SharedReferenceCount = aVar2;
        pTVar7[1].WeakReferenceCount = aVar1;
        if (pFVar9 == (FPBDTriangleMeshCollisions *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FStack_40.ReferenceController = pTVar7;
        local_48 = pFVar9;
      }
      if (&this->SelfIntersectionConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDTriangleMeshIntersections,1> *)&local_48) {
        (this->SelfIntersectionConstraints).Object = (FPBDTriangleMeshIntersections *)pFVar9;
        local_48 = (FPBDTriangleMeshCollisions *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SelfIntersectionConstraints).SharedReferenceCount,&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      this->NumPostprocessingConstraintRules = this->NumPostprocessingConstraintRules + 1;
      if (this->Evolution != (FEvolution *)0x0) {
        this->NumPreSubstepConstraintRules = this->NumPreSubstepConstraintRules + 1;
        this->NumUpdateLinearSystemRules = this->NumUpdateLinearSystemRules + 1;
        return;
      }
      this->NumConstraintInits = this->NumConstraintInits + 1;
      return;
    }
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,
                      Softs::FPBDSelfCollisionSphereConstraints::SelfCollisionSphereStiffnessName);
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    EVar5 = Softs::FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,*piVar6,&param_1->FlagsArray);
    if ((EVar5 & Enabled) != None) {
      pTVar7 = ::operator_new(0x50);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        local_38 = ___xmm_00000000000000000000000000000010;
        pFVar9 = (FPBDTriangleMeshCollisions *)&DAT_00000010;
        FStack_30.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPBDSelfCollisionSphereConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        Softs::FPBDSelfCollisionSphereConstraints::FPBDSelfCollisionSphereConstraints
                  ((FPBDSelfCollisionSphereConstraints *)(pTVar7 + 1),this->ParticleOffset,
                   this->NumParticles,param_3,param_1);
        pFVar9 = (FPBDTriangleMeshCollisions *)(pTVar7 + 1);
        if (pFVar9 == (FPBDTriangleMeshCollisions *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        FStack_30.ReferenceController = pTVar7;
        local_38 = pFVar9;
      }
      if (&this->SelfCollisionSphereConstraints !=
          (TSharedPtr<Chaos::Softs::FPBDSelfCollisionSphereConstraints,1> *)&local_38) {
        (this->SelfCollisionSphereConstraints).Object = (FPBDSelfCollisionSphereConstraints *)pFVar9
        ;
        local_38 = (FPBDTriangleMeshCollisions *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SelfCollisionSphereConstraints).SharedReferenceCount,&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      this->NumConstraintInits = this->NumConstraintInits + 1;
      this->NumPostCollisionConstraintRules = this->NumPostCollisionConstraintRules + 1;
    }
  }
  return;
}

// CreateStretchConstraints @ 14dbd23b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateStretchConstraints
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,FTriangleMesh *param_3,FClothingPatternData *param_4,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_5,float param_6)

{
  FEvolution *this_00;
  FManagedArrayCollection *pFVar1;
  FName FVar2;
  FPBDEvolution *pFVar3;
  code *pcVar4;
  ECollectionPropertyFlags EVar5;
  bool bVar6;
  int *piVar7;
  FSolverParticlesRange *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSharedReferencer<1> FVar10;
  FName *pFVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FXPBDAnisotropicSpringConstraints *pFVar15;
  FXPBDAnisotropicSpringConstraints *pFVar16;
  FXPBDAnisotropicSpringConstraints *local_108;
  FSharedReferencer<1> FStack_100;
  FXPBDAnisotropicSpringConstraints *local_f8;
  FSharedReferencer<1> FStack_f0;
  FXPBDAnisotropicSpringConstraints *local_e8;
  FSharedReferencer<1> FStack_e0;
  FXPBDAnisotropicSpringConstraints *local_d8;
  FSharedReferencer<1> FStack_d0;
  undefined1 local_c8 [24];
  FSharedReferencer<1> FStack_b0;
  FXPBDAnisotropicSpringConstraints *local_a8;
  FSharedReferencer<1> FStack_a0;
  FXPBDAnisotropicSpringConstraints *local_98;
  FSharedReferencer<1> FStack_90;
  FXPBDAnisotropicSpringConstraints *local_88;
  FSharedReferencer<1> FStack_80;
  ForAnyElementType local_78;
  FSharedReferencer<1> local_70;
  FName local_68;
  FName local_60;
  
  if ((((param_4 != (FClothingPatternData *)0x0) && ((param_4->PatternPositions).ArrayNum != 0)) &&
      (piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&param_1->KeyNameIndices,
                     Softs::FXPBDStretchBiasElementConstraints::XPBDAnisoStretchStiffnessWarpName),
      piVar7 != (int *)0x0)) &&
     ((*piVar7 != -1 &&
      (EVar5 = Softs::FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,*piVar7,&param_1->FlagsArray), (EVar5 & Enabled) != None)))) {
    if (this->Evolution == (FEvolution *)0x0) {
      pFVar3 = this->PBDEvolution;
      FVar10.ReferenceController = ::operator_new(0x268);
      pTVar13 = _UNK_150651568;
      pFVar16 = ___xmm_00000000000000000000000000000010;
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)&DAT_00000010;
        local_f8 = ___xmm_00000000000000000000000000000010;
        FVar10.ReferenceController = _UNK_150651568;
      }
      else {
        (FVar10.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (FVar10.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (FVar10.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFXPBDStretchBiasElementConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        Softs::FXPBDStretchBiasElementConstraints::FXPBDStretchBiasElementConstraints
                  ((FXPBDStretchBiasElementConstraints *)(FVar10.ReferenceController + 1),
                   &pFVar3->MParticles,this->ParticleOffset,this->NumParticles,param_3,
                   &param_4->WeldedFaceVertexPatternPositions,param_2,param_1,true);
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)(FVar10.ReferenceController + 1);
        if ((pFVar15 == (FXPBDAnisotropicSpringConstraints *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        (FVar10.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar14 = FVar10.ReferenceController;
        local_f8 = pFVar15;
      }
      FStack_f0.ReferenceController = FVar10.ReferenceController;
      if (&this->XStretchBiasConstraints !=
          (TSharedPtr<Chaos::Softs::FXPBDStretchBiasElementConstraints,1> *)&local_f8) {
        (this->XStretchBiasConstraints).Object = (FXPBDStretchBiasElementConstraints *)pFVar15;
        local_f8 = (FXPBDAnisotropicSpringConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->XStretchBiasConstraints).SharedReferenceCount,&FStack_f0);
        FVar10.ReferenceController = FStack_f0.ReferenceController;
      }
    }
    else {
      pFVar8 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
      pTVar9 = ::operator_new(0x268);
      pTVar13 = _UNK_150651568;
      pFVar16 = ___xmm_00000000000000000000000000000010;
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)&DAT_00000010;
        local_108 = ___xmm_00000000000000000000000000000010;
        FStack_100.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFXPBDStretchBiasElementConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        Softs::FXPBDStretchBiasElementConstraints::FXPBDStretchBiasElementConstraints
                  ((FXPBDStretchBiasElementConstraints *)(pTVar9 + 1),pFVar8,param_3,
                   &param_4->WeldedFaceVertexPatternPositions,param_2,param_1,true);
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)(pTVar9 + 1);
        if ((pFVar15 == (FXPBDAnisotropicSpringConstraints *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        pTVar14 = pTVar9;
        FStack_100.ReferenceController = pTVar9;
        local_108 = pFVar15;
      }
      FVar10.ReferenceController = FStack_100.ReferenceController;
      if (&this->XStretchBiasConstraints !=
          (TSharedPtr<Chaos::Softs::FXPBDStretchBiasElementConstraints,1> *)&local_108) {
        (this->XStretchBiasConstraints).Object = (FXPBDStretchBiasElementConstraints *)pFVar15;
        local_108 = (FXPBDAnisotropicSpringConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->XStretchBiasConstraints).SharedReferenceCount,&FStack_100);
        FVar10.ReferenceController = FStack_100.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    this->NumConstraintInits = this->NumConstraintInits + 1;
    this->NumConstraintRules = this->NumConstraintRules + 1;
    goto LAB_14dbd2c25;
  }
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->KeyNameIndices,
                      Softs::FXPBDEdgeSpringConstraints::XPBDEdgeSpringStiffnessName);
  pTVar13 = _UNK_150651568;
  pFVar16 = ___xmm_00000000000000000000000000000010;
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if ((piVar7 == (int *)0x0) ||
     ((*piVar7 == -1 ||
      (EVar5 = Softs::FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,*piVar7,&param_1->FlagsArray), (EVar5 & Enabled) == None)))) {
    piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_1->KeyNameIndices,
                  Softs::FPBDEdgeSpringConstraints::EdgeSpringStiffnessName);
    if ((piVar7 != (int *)0x0) &&
       ((*piVar7 != -1 &&
        (EVar5 = Softs::FCollectionPropertyConstFacade::
                 GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                           (param_1,*piVar7,&param_1->FlagsArray), (EVar5 & Enabled) != None)))) {
      this_00 = this->Evolution;
      if (this_00 == (FEvolution *)0x0) {
        pFVar3 = this->PBDEvolution;
        FVar10.ReferenceController = ::operator_new(0x140);
        if (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          pFVar15 = (FXPBDAnisotropicSpringConstraints *)&DAT_00000010;
          local_a8 = pFVar16;
          FVar10.ReferenceController = pTVar13;
        }
        else {
          (FVar10.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFPBDEdgeSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
          ;
          (FVar10.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          (FVar10.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          Softs::FPBDEdgeSpringConstraints::FPBDEdgeSpringConstraints
                    ((FPBDEdgeSpringConstraints *)(FVar10.ReferenceController + 1),
                     &pFVar3->MParticles,this->ParticleOffset,this->NumParticles,&param_3->MElements
                     ,param_2,param_1,true);
          pFVar15 = (FXPBDAnisotropicSpringConstraints *)(FVar10.ReferenceController + 1);
          if ((pFVar15 == (FXPBDAnisotropicSpringConstraints *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          LOCK();
          (FVar10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          pTVar14 = FVar10.ReferenceController;
          local_a8 = pFVar15;
        }
        FStack_a0.ReferenceController = FVar10.ReferenceController;
        if (this != (FClothConstraints *)&stack0xffffffffffffff58) {
          (this->EdgeConstraints).Object = (FPBDEdgeSpringConstraints *)pFVar15;
          local_a8 = (FXPBDAnisotropicSpringConstraints *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->EdgeConstraints).SharedReferenceCount,&stack0xffffffffffffff60);
          FVar10.ReferenceController = FStack_a0.ReferenceController;
        }
      }
      else if ((param_4 == (FClothingPatternData *)0x0) ||
              ((param_4->PatternPositions).ArrayNum == 0)) {
        pFVar8 = Softs::FEvolution::GetSoftBodyParticles(this_00,this->ParticleRangeId);
        FVar10.ReferenceController = ::operator_new(0x140);
        if (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          pFVar15 = (FXPBDAnisotropicSpringConstraints *)&DAT_00000010;
          local_c8._16_8_ = pFVar16;
          FVar10.ReferenceController = pTVar13;
        }
        else {
          (FVar10.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFPBDEdgeSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
          ;
          (FVar10.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          (FVar10.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          Softs::FPBDEdgeSpringConstraints::FPBDEdgeSpringConstraints
                    ((FPBDEdgeSpringConstraints *)(FVar10.ReferenceController + 1),pFVar8,
                     &param_3->MElements,param_2,param_1,true);
          pFVar15 = (FXPBDAnisotropicSpringConstraints *)(FVar10.ReferenceController + 1);
          if ((pFVar15 == (FXPBDAnisotropicSpringConstraints *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          LOCK();
          (FVar10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          pTVar14 = FVar10.ReferenceController;
          local_c8._16_8_ = pFVar15;
        }
        FStack_b0.ReferenceController = FVar10.ReferenceController;
        if (this != (FClothConstraints *)(local_c8 + 0x10)) {
          (this->EdgeConstraints).Object = (FPBDEdgeSpringConstraints *)pFVar15;
          local_c8._16_8_ = (FXPBDAnisotropicSpringConstraints *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->EdgeConstraints).SharedReferenceCount,&FStack_b0);
          FVar10.ReferenceController = FStack_b0.ReferenceController;
        }
      }
      else {
        pFVar8 = Softs::FEvolution::GetSoftBodyParticles(this_00,this->ParticleRangeId);
        FVar10.ReferenceController = ::operator_new(0x140);
        if (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          pFVar15 = (FXPBDAnisotropicSpringConstraints *)&DAT_00000010;
          local_c8._0_8_ = pFVar16;
          FVar10.ReferenceController = pTVar13;
        }
        else {
          (FVar10.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFPBDEdgeSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
          ;
          (FVar10.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          (FVar10.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          Softs::FPBDEdgeSpringConstraints::FPBDEdgeSpringConstraints
                    ((FPBDEdgeSpringConstraints *)(FVar10.ReferenceController + 1),pFVar8,param_3,
                     &param_4->WeldedFaceVertexPatternPositions,param_2,param_1,true);
          pFVar15 = (FXPBDAnisotropicSpringConstraints *)(FVar10.ReferenceController + 1);
          if ((pFVar15 == (FXPBDAnisotropicSpringConstraints *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          LOCK();
          (FVar10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          pTVar14 = FVar10.ReferenceController;
          local_c8._0_8_ = pFVar15;
        }
        local_c8._8_8_ = FVar10.ReferenceController;
        if (this != (FClothConstraints *)local_c8) {
          (this->EdgeConstraints).Object = (FPBDEdgeSpringConstraints *)pFVar15;
          local_c8._0_8_ = (FXPBDAnisotropicSpringConstraints *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->EdgeConstraints).SharedReferenceCount,
                     (FSharedReferencer<1> *)(local_c8 + 8));
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)local_c8._8_8_;
        }
      }
      goto LAB_14dbd2bf8;
    }
  }
  else {
    if (this->Evolution == (FEvolution *)0x0) {
      pFVar3 = this->PBDEvolution;
      pTVar9 = ::operator_new(0xf8);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)&DAT_00000010;
        local_d8 = pFVar16;
        FStack_d0.ReferenceController = pTVar13;
      }
      else {
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFXPBDEdgeSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FXPBDEdgeSpringConstraints::FXPBDEdgeSpringConstraints
                  ((FXPBDEdgeSpringConstraints *)(pTVar9 + 1),&pFVar3->MParticles,
                   this->ParticleOffset,this->NumParticles,&param_3->MElements,param_2,param_1);
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)(pTVar9 + 1);
        if ((pFVar15 == (FXPBDAnisotropicSpringConstraints *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        FStack_d0.ReferenceController = pTVar9;
        pTVar14 = pTVar9;
        local_d8 = pFVar15;
      }
      FVar10.ReferenceController = FStack_d0.ReferenceController;
      if (&this->XEdgeConstraints !=
          (TSharedPtr<Chaos::Softs::FXPBDEdgeSpringConstraints,1> *)&local_d8) {
        (this->XEdgeConstraints).Object = (FXPBDEdgeSpringConstraints *)pFVar15;
        local_d8 = (FXPBDAnisotropicSpringConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->XEdgeConstraints).SharedReferenceCount,&FStack_d0);
        FVar10.ReferenceController = FStack_d0.ReferenceController;
      }
LAB_14dbd2bf8:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    else {
      pFVar8 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
      pTVar9 = ::operator_new(0xf8);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)&DAT_00000010;
        local_e8 = pFVar16;
        FStack_e0.ReferenceController = pTVar13;
      }
      else {
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFXPBDEdgeSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FXPBDEdgeSpringConstraints::FXPBDEdgeSpringConstraints
                  ((FXPBDEdgeSpringConstraints *)(pTVar9 + 1),pFVar8,&param_3->MElements,param_2,
                   param_1);
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)(pTVar9 + 1);
        if ((pFVar15 == (FXPBDAnisotropicSpringConstraints *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        FStack_e0.ReferenceController = pTVar9;
        pTVar14 = pTVar9;
        local_e8 = pFVar15;
      }
      if (&this->XEdgeConstraints !=
          (TSharedPtr<Chaos::Softs::FXPBDEdgeSpringConstraints,1> *)&local_e8) {
        (this->XEdgeConstraints).Object = (FXPBDEdgeSpringConstraints *)pFVar15;
        local_e8 = (FXPBDAnisotropicSpringConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->XEdgeConstraints).SharedReferenceCount,&FStack_e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_e0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      this->NumUpdateLinearSystemRules = this->NumUpdateLinearSystemRules + 1;
    }
    this->NumConstraintInits = this->NumConstraintInits + 1;
    this->NumConstraintRules = this->NumConstraintRules + 1;
  }
  if (param_4 == (FClothingPatternData *)0x0) {
    return;
  }
LAB_14dbd2c25:
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  pFVar15 = (FXPBDAnisotropicSpringConstraints *)&DAT_00000010;
  if (((((param_4->PatternPositions).ArrayNum != 0) &&
       (piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&param_1->KeyNameIndices,
                        Softs::FXPBDAnisotropicSpringConstraints::XPBDAnisoSpringStiffnessWarpName),
       piVar7 != (int *)0x0)) && (*piVar7 != -1)) &&
     (EVar5 = Softs::FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,*piVar7,&param_1->FlagsArray), (EVar5 & Enabled) != None)) {
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar1 = param_5->Object;
    if (pFVar1 != (FManagedArrayCollection *)0x0) {
      pFVar11 = ::FName::FName((FName *)&stack0xffffffffffffffa8,L"SimVertices3D");
      FVar2 = *pFVar11;
      pFVar11 = ::FName::FName((FName *)&stack0xffffffffffffffb0,L"PreResizedSimPosition3D");
      local_68 = *pFVar11;
      local_60 = FVar2;
      pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&pFVar1->Map,(TTuple<FName,FName> *)&stack0xffffffffffffff98);
      pTVar9 = (TReferenceControllerBase<1> *)&pTVar12->field_0x10;
      if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pTVar9 = pTVar14;
      }
      if ((pTVar9 != (TReferenceControllerBase<1> *)0x0) && ((char)pTVar9->_padding_ == '\x01')) {
        if (pTVar9[2]._padding_ == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x306,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                     &stack0xffffffffffffff88,
                     (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                     (pTVar9[2]._padding_ + 0x10));
        }
      }
    }
    if (this->Evolution == (FEvolution *)0x0) {
      pFVar3 = this->PBDEvolution;
      pTVar9 = ::operator_new(0x450);
      local_88 = pFVar16;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFXPBDAnisotropicSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FXPBDAnisotropicSpringConstraints::FXPBDAnisotropicSpringConstraints
                  ((FXPBDAnisotropicSpringConstraints *)(pTVar9 + 1),&pFVar3->MParticles,
                   this->ParticleOffset,this->NumParticles,param_3,
                   &param_4->WeldedFaceVertexPatternPositions,param_2,param_1,
                   (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                   &stack0xffffffffffffff88,param_6);
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)(pTVar9 + 1);
        if ((pFVar15 == (FXPBDAnisotropicSpringConstraints *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        pTVar13 = pTVar9;
        pTVar14 = pTVar9;
        local_88 = pFVar15;
      }
      FStack_80.ReferenceController = pTVar13;
      if (&this->XAnisoSpringConstraints !=
          (TSharedPtr<Chaos::Softs::FXPBDAnisotropicSpringConstraints,1> *)&stack0xffffffffffffff78)
      {
        (this->XAnisoSpringConstraints).Object = pFVar15;
        local_88 = (FXPBDAnisotropicSpringConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->XAnisoSpringConstraints).SharedReferenceCount,&stack0xffffffffffffff80);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    else {
      pFVar8 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
      pTVar9 = ::operator_new(0x450);
      local_98 = pFVar16;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFXPBDAnisotropicSpringConstraints_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        Softs::FXPBDAnisotropicSpringConstraints::FXPBDAnisotropicSpringConstraints
                  ((FXPBDAnisotropicSpringConstraints *)(pTVar9 + 1),pFVar8,param_3,
                   &param_4->WeldedFaceVertexPatternPositions,param_2,param_1,
                   (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                   &stack0xffffffffffffff88,param_6);
        pFVar15 = (FXPBDAnisotropicSpringConstraints *)(pTVar9 + 1);
        if ((pFVar15 == (FXPBDAnisotropicSpringConstraints *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        pTVar13 = pTVar9;
        pTVar14 = pTVar9;
        local_98 = pFVar15;
      }
      FStack_90.ReferenceController = pTVar13;
      if (&this->XAnisoSpringConstraints !=
          (TSharedPtr<Chaos::Softs::FXPBDAnisotropicSpringConstraints,1> *)&stack0xffffffffffffff68)
      {
        (this->XAnisoSpringConstraints).Object = pFVar15;
        local_98 = (FXPBDAnisotropicSpringConstraints *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->XAnisoSpringConstraints).SharedReferenceCount,&stack0xffffffffffffff70);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_90.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      this->NumUpdateLinearSystemRules = this->NumUpdateLinearSystemRules + 1;
    }
    this->NumConstraintInits = this->NumConstraintInits + 1;
    this->NumConstraintRules = this->NumConstraintRules + 2;
    if ((FXPBDAnisotropicSpringConstraints *)local_78.Data !=
        (FXPBDAnisotropicSpringConstraints *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  return;
}

// CreateVelocityAndPressureField @ 14dbd2fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothConstraints::CreateVelocityAndPressureField
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,FTriangleMesh *param_3)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  FSolverParticlesRange *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FVelocityAndPressureField *pFVar6;
  FVelocityAndPressureField *local_28;
  FSharedReferencer<1> FStack_20;
  
  if (this->Evolution != (FEvolution *)0x0) {
    pFVar4 = Softs::FEvolution::GetSoftBodyParticles(this->Evolution,this->ParticleRangeId);
    pTVar5 = ::operator_new(0x1a8);
    fVar2 = __real_42c80000;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      local_28 = ___xmm_00000000000000000000000000000010;
      pFVar6 = (FVelocityAndPressureField *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFVelocityAndPressureField_Softs_Chaos___00_SharedPointerInternals__6B_
      ;
      Softs::FVelocityAndPressureField::FVelocityAndPressureField
                ((FVelocityAndPressureField *)(pTVar5 + 1),pFVar4,param_3,param_1,param_2,fVar2);
      pFVar6 = (FVelocityAndPressureField *)(pTVar5 + 1);
      if (pFVar6 == (FVelocityAndPressureField *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      FStack_20.ReferenceController = pTVar5;
      local_28 = pFVar6;
    }
    if (&this->VelocityAndPressureField !=
        (TSharedPtr<Chaos::Softs::FVelocityAndPressureField,1> *)&local_28) {
      (this->VelocityAndPressureField).Object = pFVar6;
      local_28 = (FVelocityAndPressureField *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VelocityAndPressureField).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    this->NumExternalForceRules = this->NumExternalForceRules + 1;
  }
  return;
}

// Enable @ 14dbef2c0

void __thiscall Chaos::FClothConstraints::Enable(FClothConstraints *this,bool param_1)

{
  FPBDEvolution **ppFVar1;
  code *pcVar2;
  bool bVar3;
  FPBDEvolution **ppFVar4;
  
  ppFVar1 = &this->PBDEvolution;
  if (this->ConstraintInitOffset != -1) {
    if (*ppFVar1 == (FPBDEvolution *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PBDEvolution",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x1b8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
    ::ActivateRange(&(*ppFVar1)->MConstraintInitsActiveView,this->ConstraintInitOffset,param_1);
  }
  if (this->ConstraintRuleOffset != -1) {
    if (*ppFVar1 == (FPBDEvolution *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PBDEvolution",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x1bd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
    ::ActivateRange(&(*ppFVar1)->MConstraintRulesActiveView,this->ConstraintRuleOffset,param_1);
  }
  ppFVar4 = &this->PBDEvolution;
  if (this->PostCollisionConstraintRuleOffset != -1) {
    if (*ppFVar1 == (FPBDEvolution *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PBDEvolution",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x1c2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
    ::ActivateRange(&(*ppFVar4)->MPostCollisionConstraintRulesActiveView,
                    this->PostCollisionConstraintRuleOffset,param_1);
  }
  if (this->PostprocessingConstraintRuleOffset != -1) {
    if (*ppFVar4 == (FPBDEvolution *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PBDEvolution",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                         ,0x1c7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
    ::ActivateRange(&(*ppFVar4)->MConstraintPostprocessingsActiveView,
                    this->PostprocessingConstraintRuleOffset,param_1);
  }
  return;
}

// GetGSNumRules @ 14dbfbed0

void __thiscall Chaos::FClothConstraints::GetGSNumRules(FClothConstraints *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->PBDEvolution == (FPBDEvolution *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PBDEvolution",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothConstraints.cpp"
                       ,0x1dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = 1;
  this->NumConstraintInits = 1;
  this->NumConstraintRules = 0;
  if ((this->XStretchBiasConstraints).Object != (FXPBDStretchBiasElementConstraints *)0x0) {
    iVar3 = 2;
    this->NumConstraintInits = 2;
  }
  if ((this->XBendingElementConstraints).Object != (FXPBDBendingConstraints *)0x0) {
    iVar3 = iVar3 + 1;
    this->NumConstraintInits = iVar3;
  }
  if ((this->XEdgeConstraints).Object != (FXPBDEdgeSpringConstraints *)0x0) {
    iVar3 = iVar3 + 1;
    this->NumConstraintInits = iVar3;
  }
  if ((this->XAnisoBendingElementConstraints).Object != (FXPBDAnisotropicBendingConstraints *)0x0) {
    this->NumConstraintInits = iVar3 + 1;
  }
  this->NumConstraintRules = (bMakeSandwich != false) + 1;
  return;
}

// Initialize @ 14dc026c0

void __thiscall
Chaos::FClothConstraints::Initialize
          (FClothConstraints *this,FEvolution *param_1,FPerSolverFieldSystem *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_8,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_9,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_10,
          TArray<float,TSizedDefaultAllocator<32>_> *param_11,int param_12)

{
  int iVar1;
  
  this->AnimationNormals = param_4;
  this->AnimationVelocities = param_5;
  this->Normals = param_6;
  this->LastSubframeCollisionTransformsCCD = param_7;
  this->CollisionParticleCollided = param_8;
  this->CollisionContacts = param_9;
  this->CollisionNormals = param_10;
  this->PBDEvolution = (FPBDEvolution *)0x0;
  this->Evolution = param_1;
  this->ParticleOffset = 0;
  this->CollisionPhis = param_11;
  this->PerSolverField = param_2;
  this->AnimationPositions = param_3;
  this->ParticleRangeId = param_12;
  iVar1 = Softs::FEvolution::GetSoftBodyParticleNum(param_1,param_12);
  this->NumParticles = iVar1;
  return;
}

// Initialize @ 14dc02780

void __thiscall
Chaos::FClothConstraints::Initialize
          (FClothConstraints *this,FPBDEvolution *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_5,int param_6,
          int param_7)

{
  this->AnimationNormals = param_4;
  this->AnimationVelocities = param_5;
  this->ParticleOffset = param_6;
  this->ParticleRangeId = param_6;
  this->NumParticles = param_7;
  this->Evolution = (FEvolution *)0x0;
  this->PBDEvolution = param_1;
  this->AnimationPositions = param_2;
  return;
}

// OnCollisionRangeRemoved @ 14dc074a0

void __thiscall
Chaos::FClothConstraints::OnCollisionRangeRemoved(FClothConstraints *this,int param_1)

{
  FPBDSoftBodyCollisionConstraint *pFVar1;
  FPBDSkinnedTriangleMeshCollisionConstraints *pFVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  TMap<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>_>
  *pTVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  pFVar1 = (this->CollisionConstraint).Object;
  iVar8 = 1;
  if (pFVar1 != (FPBDSoftBodyCollisionConstraint *)0x0) {
    plVar6 = &pFVar1->_padding_;
    TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
                *)plVar6);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar5 = local_78._24_8_ >> 0x20;
    uVar9 = local_78._28_4_;
    local_18 = (TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
                *)plVar6;
    if ((int)uVar9 < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        if (*(int *)((longlong)(int)uVar5 * 0x60 + *local_48) == param_1) {
          TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uVar9);
          local_10 = CONCAT11(local_10._1_1_,1);
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar5 = (ulonglong)uStack_2c;
        uVar9 = uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar4 = 1;
        }
        else {
          uVar5 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
          local_18->HashSize = iVar4;
          TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  pFVar2 = (this->SkinnedTriangleCollisionsConstraint).Object;
  if (pFVar2 != (FPBDSkinnedTriangleMeshCollisionConstraints *)0x0) {
    pTVar7 = &pFVar2->Collisions;
    TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
                *)pTVar7);
    local_10._0_1_ = '\0';
    local_10._1_1_ = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar5 = local_78._24_8_ >> 0x20;
    uVar9 = local_78._28_4_;
    local_18 = (TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
                *)pTVar7;
    if ((int)uVar9 < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        if (*(int *)((longlong)(int)uVar5 * 0xb0 + *local_48) == param_1) {
          TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
                           *)pTStack_20,uVar9);
          local_10._0_1_ = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar5 = (ulonglong)uStack_2c;
        uVar9 = uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar9 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)&local_18->Elements)->field_0x8 -
                *(int *)&((TSparseArray<TSparseSetElement<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)&local_18->Elements)->field_0x34;
        if (3 < uVar9) {
          uVar5 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_18->HashSize < iVar8)) || (iVar8 < local_18->HashSize)) {
          local_18->HashSize = iVar8;
          TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDSkinnedTriangleMeshCollisions,0>,FDefaultSetAllocator>
                    *)local_18);
        }
      }
    }
  }
  return;
}

// ResetRestLengths @ 14dc0f360

void __thiscall
Chaos::FClothConstraints::ResetRestLengths
          (FClothConstraints *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          FCollectionPropertyConstFacade *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3)

{
  FXPBDEdgeSpringConstraints *this_00;
  FPBDEdgeSpringConstraints *this_01;
  FXPBDAnisotropicSpringConstraints *this_02;
  FXPBDBendingSpringConstraints *this_03;
  FPBDBendingSpringConstraints *this_04;
  FPBDBendingConstraints *this_05;
  FXPBDBendingConstraints *this_06;
  FXPBDAnisotropicBendingConstraints *this_07;
  FXPBDAreaSpringConstraints *this_08;
  FPBDAreaSpringConstraints *this_09;
  code *pcVar1;
  bool bVar2;
  ERestAngleConstructionType EVar3;
  int *piVar5;
  TVector<float,2> TVar6;
  TArrayView<float_const_,int> *pTVar7;
  FName *local_80;
  int local_78;
  FScriptContainerElement *local_70;
  int local_68;
  int iVar4;
  
  this_00 = (this->XEdgeConstraints).Object;
  if (this_00 != (FXPBDEdgeSpringConstraints *)0x0) {
    Softs::FPBDSpringConstraintsBase::ResetRestLengths((FPBDSpringConstraintsBase *)this_00,param_1)
    ;
  }
  this_01 = (this->EdgeConstraints).Object;
  if (this_01 != (FPBDEdgeSpringConstraints *)0x0) {
    Softs::FPBDEdgeSpringConstraints::ResetRestLengths(this_01,param_1);
  }
  this_02 = (this->XAnisoSpringConstraints).Object;
  if (this_02 != (FXPBDAnisotropicSpringConstraints *)0x0) {
    local_80 = (FName *)(this_02->EdgeConstraints).BaseDists.AllocatorInstance.Data;
    iVar4 = (this_02->EdgeConstraints).BaseDists.ArrayNum;
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_78 = iVar4;
    Softs::FPBDSpringConstraintsBase::CalculateRestLengths
              ((FPBDSpringConstraintsBase *)this_02,param_1,
               (TArrayView<float,int> *)&stack0xffffffffffffff80);
    Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateDists(&this_02->EdgeConstraints);
    local_70 = (this_02->AxialConstraints).BaseDists.AllocatorInstance.Data;
    local_68 = (this_02->AxialConstraints).BaseDists.ArrayNum;
    if (local_68 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    Softs::FPBDAxialSpringConstraintsBase::CalculateRestLengths
              ((FPBDAxialSpringConstraintsBase *)&this_02->AxialConstraints,param_1,
               (TArrayView<float,int> *)&stack0xffffffffffffff90);
    Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateDists(&this_02->AxialConstraints);
  }
  this_03 = (this->XBendingConstraints).Object;
  if (this_03 != (FXPBDBendingSpringConstraints *)0x0) {
    Softs::FPBDSpringConstraintsBase::ResetRestLengths((FPBDSpringConstraintsBase *)this_03,param_1)
    ;
  }
  this_04 = (this->BendingConstraints).Object;
  if (this_04 != (FPBDBendingSpringConstraints *)0x0) {
    Softs::FPBDSpringConstraintsBase::ResetRestLengths((FPBDSpringConstraintsBase *)this_04,param_1)
    ;
  }
  this_05 = (this->BendingElementConstraints).Object;
  if (this_05 != (FPBDBendingConstraints *)0x0) {
    piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_2->KeyNameIndices,Softs::FPBDBendingConstraints::RestAngleTypeName);
    if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
      EVar3 = Use3DRestAngles;
    }
    else {
      iVar4 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                        (param_2,*piVar5,&param_2->LowValueArray);
      EVar3 = (ERestAngleConstructionType)iVar4;
    }
    TVar6 = Softs::FPBDBendingConstraints::GetRestAngleValueFromCollection
                      (this_05,(FCollectionPropertyConstFacade *)&stack0x00000008);
    pTVar7 = Softs::FPBDBendingConstraints::GetRestAngleMapFromCollection
                       (this_05,(TArrayView<float_const_,int> *)&stack0xffffffffffffffa0,param_3,
                        param_2);
    Softs::FPBDBendingConstraintsBase::CalculateRestAngles
              ((FPBDBendingConstraintsBase *)this_05,param_1,(int)this_05->_padding_,
               *(int *)((longlong)&this_05->_padding_ + 4),pTVar7,(TVector<float,2> *)TVar6,EVar3);
  }
  this_06 = (this->XBendingElementConstraints).Object;
  if (this_06 != (FXPBDBendingConstraints *)0x0) {
    piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_2->KeyNameIndices,Softs::FXPBDBendingConstraints::XPBDRestAngleTypeName)
    ;
    EVar3 = Use3DRestAngles;
    if ((piVar5 != (int *)0x0) && (EVar3 = Use3DRestAngles, *piVar5 != -1)) {
      iVar4 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                        (param_2,*piVar5,&param_2->LowValueArray);
      EVar3 = (ERestAngleConstructionType)iVar4;
    }
    TVar6 = Softs::FXPBDBendingConstraints::GetRestAngleValueFromCollection
                      (this_06,(FCollectionPropertyConstFacade *)&stack0xffffffffffffff78);
    pTVar7 = Softs::FXPBDBendingConstraints::GetRestAngleMapFromCollection
                       (this_06,(TArrayView<float_const_,int> *)&stack0xffffffffffffffb0,param_3,
                        param_2);
    Softs::FPBDBendingConstraintsBase::CalculateRestAngles
              ((FPBDBendingConstraintsBase *)this_06,param_1,(int)this_06->_padding_,
               *(int *)((longlong)&this_06->_padding_ + 4),pTVar7,(TVector<float,2> *)TVar6,EVar3);
  }
  this_07 = (this->XAnisoBendingElementConstraints).Object;
  if (this_07 != (FXPBDAnisotropicBendingConstraints *)0x0) {
    Softs::FXPBDAnisotropicBendingConstraints::ResetRestLengths(this_07,param_1,param_2,param_3);
  }
  this_08 = (this->XAreaConstraints).Object;
  if (this_08 != (FXPBDAreaSpringConstraints *)0x0) {
    Softs::FPBDAxialSpringConstraintsBase::ResetRestLengths
              ((FPBDAxialSpringConstraintsBase *)this_08,param_1);
  }
  this_09 = (this->AreaConstraints).Object;
  if (this_09 != (FPBDAreaSpringConstraints *)0x0) {
    Softs::FPBDAxialSpringConstraintsBase::ResetRestLengths
              ((FPBDAxialSpringConstraintsBase *)this_09,param_1);
  }
  return;
}

// Update @ 14dc1d500

void __thiscall
Chaos::FClothConstraints::Update
          (FClothConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                   *param_3,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *param_4,TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
                   *param_5,float param_6,float param_7,TRotation<double,3> *param_8,
          TRotation<double,3> *param_9)

{
  int iVar1;
  FPBDEdgeSpringConstraints *this_00;
  FXPBDEdgeSpringConstraints *this_01;
  FXPBDStretchBiasElementConstraints *this_02;
  FXPBDAnisotropicSpringConstraints *this_03;
  FPBDBendingSpringConstraints *this_04;
  FXPBDBendingSpringConstraints *this_05;
  FPBDBendingConstraints *this_06;
  FXPBDBendingConstraints *this_07;
  FXPBDAnisotropicBendingConstraints *this_08;
  FPBDExtremeDeformationConstraints *pFVar2;
  FPBDAreaSpringConstraints *this_09;
  FXPBDAreaSpringConstraints *this_10;
  FPBDLongRangeConstraints *this_11;
  FPBDSphericalConstraint *this_12;
  FPBDSphericalBackstopConstraint *this_13;
  FPBDAnimDriveConstraint *this_14;
  FXPBDVertexConstraints *this_15;
  FXPBDVertexFaceConstraints *this_16;
  FXPBDFaceConstraints *this_17;
  FPBDTriangleMeshCollisions *this_18;
  FPBDCollisionSpringConstraints *this_19;
  FPBDSelfCollisionSphereConstraints *this_20;
  FPBDVertexFaceRepulsionConstraints *this_21;
  FMultiResConstraints *this_22;
  FExternalForces *this_23;
  FPBDSkinnedTriangleMeshCollisionConstraints *this_24;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  ECollectionPropertyFlags EVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int *piVar9;
  longlong lVar10;
  IConsoleManager *pIVar11;
  char cVar12;
  float fVar13;
  
  this_00 = (this->EdgeConstraints).Object;
  if (this_00 != (FPBDEdgeSpringConstraints *)0x0) {
    Softs::FPBDEdgeSpringConstraints::SetProperties(this_00,param_1,param_2);
  }
  this_01 = (this->XEdgeConstraints).Object;
  if (this_01 != (FXPBDEdgeSpringConstraints *)0x0) {
    Softs::FXPBDEdgeSpringConstraints::SetProperties(this_01,param_1,param_2);
  }
  this_02 = (this->XStretchBiasConstraints).Object;
  if (this_02 != (FXPBDStretchBiasElementConstraints *)0x0) {
    Softs::FXPBDStretchBiasElementConstraints::SetProperties(this_02,param_1,param_2);
  }
  this_03 = (this->XAnisoSpringConstraints).Object;
  if (this_03 != (FXPBDAnisotropicSpringConstraints *)0x0) {
    Softs::FXPBDAnisotropicSpringConstraints::SetProperties(this_03,param_1,param_2);
  }
  this_04 = (this->BendingConstraints).Object;
  if (this_04 != (FPBDBendingSpringConstraints *)0x0) {
    Softs::FPBDBendingSpringConstraints::SetProperties(this_04,param_1,param_2);
  }
  this_05 = (this->XBendingConstraints).Object;
  if (this_05 != (FXPBDBendingSpringConstraints *)0x0) {
    Softs::FXPBDBendingSpringConstraints::SetProperties(this_05,param_1,param_2);
  }
  this_06 = (this->BendingElementConstraints).Object;
  if (this_06 != (FPBDBendingConstraints *)0x0) {
    Softs::FPBDBendingConstraints::SetProperties(this_06,param_1,param_2);
  }
  this_07 = (this->XBendingElementConstraints).Object;
  if (this_07 != (FXPBDBendingConstraints *)0x0) {
    Softs::FXPBDBendingConstraints::SetProperties(this_07,param_1,param_2);
  }
  this_08 = (this->XAnisoBendingElementConstraints).Object;
  if (this_08 != (FXPBDAnisotropicBendingConstraints *)0x0) {
    Softs::FXPBDAnisotropicBendingConstraints::SetProperties(this_08,param_1,param_2);
  }
  pFVar2 = (this->ExtremeDeformationConstraints).Object;
  if ((((pFVar2 != (FPBDExtremeDeformationConstraints *)0x0) &&
       (iVar1 = (pFVar2->ExtremeDeformationEdgeRatioThresholdIndex).Index, iVar1 != -1)) &&
      (EVar5 = Softs::FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,&param_1->FlagsArray), (EVar5 & Animatable) != None)) &&
     (EVar5 = Softs::FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(pFVar2->ExtremeDeformationEdgeRatioThresholdIndex).Index,
                         &param_1->FlagsArray), (char)EVar5 < '\0')) {
    piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_1->KeyNameIndices,
                  Softs::FPBDExtremeDeformationConstraints::ExtremeDeformationEdgeRatioThresholdName
                 );
    fVar13 = __real_7f7fffff;
    if ((piVar9 != (int *)0x0) && (*piVar9 != -1)) {
      fVar13 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,*piVar9,&param_1->LowValueArray);
    }
    pFVar2->ExtremeDeformationThreshold = fVar13;
  }
  this_09 = (this->AreaConstraints).Object;
  if (this_09 != (FPBDAreaSpringConstraints *)0x0) {
    Softs::FPBDAreaSpringConstraints::SetProperties(this_09,param_1,param_2);
  }
  this_10 = (this->XAreaConstraints).Object;
  if (this_10 != (FXPBDAreaSpringConstraints *)0x0) {
    Softs::FXPBDAreaSpringConstraints::SetProperties(this_10,param_1,param_2);
  }
  this_11 = (this->LongRangeConstraints).Object;
  if (this_11 != (FPBDLongRangeConstraints *)0x0) {
    Softs::FPBDLongRangeConstraints::SetProperties(this_11,param_1,param_2,param_6);
  }
  this_12 = (this->MaximumDistanceConstraints).Object;
  if (this_12 != (FPBDSphericalConstraint *)0x0) {
    Softs::FPBDSphericalConstraint::SetProperties(this_12,param_1,param_2,param_6 * param_7);
  }
  this_13 = (this->BackstopConstraints).Object;
  if (this_13 != (FPBDSphericalBackstopConstraint *)0x0) {
    Softs::FPBDSphericalBackstopConstraint::SetProperties(this_13,param_1,param_2,param_6);
  }
  this_14 = (this->AnimDriveConstraints).Object;
  if (this_14 != (FPBDAnimDriveConstraint *)0x0) {
    Softs::FPBDAnimDriveConstraint::SetProperties(this_14,param_1,param_2);
  }
  this_15 = (this->ClothVertexSpringConstraints).Object;
  if (this_15 != (FXPBDVertexConstraints *)0x0) {
    Softs::FXPBDVertexConstraints::SetProperties(this_15,param_1);
  }
  this_16 = (this->ClothVertexFaceSpringConstraints).Object;
  if (this_16 != (FXPBDVertexFaceConstraints *)0x0) {
    Softs::FXPBDVertexFaceConstraints::SetProperties(this_16,param_1);
  }
  this_17 = (this->ClothFaceSpringConstraints).Object;
  if (this_17 != (FXPBDFaceConstraints *)0x0) {
    Softs::FXPBDFaceConstraints::SetProperties(this_17,param_1);
  }
  this_18 = (this->SelfCollisionInit).Object;
  cVar12 = '\0';
  if (this_18 != (FPBDTriangleMeshCollisions *)0x0) {
    Softs::FPBDTriangleMeshCollisions::SetProperties(this_18,param_1,param_4);
    if (((this->SelfCollisionInit).Object == (FPBDTriangleMeshCollisions *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar12 = ((this->SelfCollisionInit).Object)->bCollidableSubMeshDirty;
  }
  this_19 = (this->SelfCollisionConstraints).Object;
  if ((this_19 != (FPBDCollisionSpringConstraints *)0x0) &&
     (Softs::FPBDCollisionSpringConstraints::SetProperties(this_19,param_1,param_2,param_5),
     cVar12 != '\0')) {
    if (((this->SelfCollisionConstraints).Object == (FPBDCollisionSpringConstraints *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    Softs::FPBDKinematicTriangleMeshCollisions::Reset
              ((FPBDKinematicTriangleMeshCollisions *)
               &((this->SelfCollisionConstraints).Object)->_padding_);
  }
  this_20 = (this->SelfCollisionSphereConstraints).Object;
  if (this_20 != (FPBDSelfCollisionSphereConstraints *)0x0) {
    Softs::FPBDSelfCollisionSphereConstraints::SetProperties(this_20,param_1,param_3);
  }
  this_21 = (this->RepulsionConstraints).Object;
  if (this_21 != (FPBDVertexFaceRepulsionConstraints *)0x0) {
    Softs::FPBDVertexFaceRepulsionConstraints::SetProperties(this_21,param_1);
  }
  this_22 = (this->MultiResConstraints).Object;
  if (this_22 != (FMultiResConstraints *)0x0) {
    Softs::FMultiResConstraints::SetProperties(this_22,param_1,param_2);
  }
  this_23 = (this->ExternalForces).Object;
  cVar12 = '\0';
  if (this_23 != (FExternalForces *)0x0) {
    Softs::FExternalForces::SetProperties(this_23,param_1,param_2);
    if (((this->ExternalForces).Object == (FExternalForces *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar12 = (char)((this->ExternalForces).Object)->_padding_;
  }
  pTVar4 = ClothingSimulationClothConsoleVariables::CVarLegacyDisablesAccurateWind.Ref;
  if ((this->VelocityAndPressureField).Object != (FVelocityAndPressureField *)0x0) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar10 = 0;
    }
    else {
      lVar10 = 1;
    }
    if ((cVar12 == '\0') || (pTVar4->ShadowedValue[lVar10] == false)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (((this->VelocityAndPressureField).Object == (FVelocityAndPressureField *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    Softs::FVelocityAndPressureField::SetPropertiesAndWind
              ((this->VelocityAndPressureField).Object,param_1,param_2,__real_42c80000,bVar6,
               &this->SolverWindVelocity,param_8,param_9);
  }
  if ((this->CollisionConstraint).Object != (FPBDSoftBodyCollisionConstraint *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar11 = IConsoleManager::Get();
      WriteCCDContacts =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar11 + 0xc0))
                     (pIVar11,L"p.Chaos.PBDEvolution.WriteCCDContacts",1);
      _Init_thread_footer(&::_TSS0);
    }
    if (WriteCCDContacts == (IConsoleVariable *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*(longlong *)WriteCCDContacts + 0xc0))();
    }
    if (((this->CollisionConstraint).Object == (FPBDSoftBodyCollisionConstraint *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    Softs::FPBDSoftBodyCollisionConstraint::SetProperties
              ((this->CollisionConstraint).Object,param_1);
    if (((this->CollisionConstraint).Object == (FPBDSoftBodyCollisionConstraint *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined1 *)&((this->CollisionConstraint).Object)->_padding_ = uVar8;
  }
  this_24 = (this->SkinnedTriangleCollisionsConstraint).Object;
  if (this_24 == (FPBDSkinnedTriangleMeshCollisionConstraints *)0x0) {
    return;
  }
  Softs::FPBDSkinnedTriangleMeshCollisionConstraints::SetProperties(this_24,param_1,param_2);
  return;
}

// UpdateFromSolver @ 14dc23330

void __thiscall
Chaos::FClothConstraints::UpdateFromSolver
          (FClothConstraints *this,TVector<float,3> *param_1,bool param_2,TVector<float,3> *param_3,
          TVector<float,3> *param_4,TVector<float,3> *param_5,float param_6)

{
  undefined4 uVar1;
  FExternalForces *pFVar2;
  code *pcVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  longlong lVar6;
  
  pTVar4 = ClothingSimulationClothConsoleVariables::CVarGravityMultiplier.Ref;
  pFVar2 = (this->ExternalForces).Object;
  if (pFVar2 == (FExternalForces *)0x0) goto LAB_14dc234ac;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_14dc2338f:
    lVar6 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    if (bVar5) goto LAB_14dc2338f;
    lVar6 = 4;
  }
  pFVar2->WorldGravityMultiplier = *(float *)((longlong)pTVar4->ShadowedValue + lVar6);
  if ((this->ExternalForces).Object == (FExternalForces *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ExternalForces).Object;
  *(undefined8 *)&pFVar2->SolverGravity = *(undefined8 *)param_1;
  *(undefined4 *)&(pFVar2->SolverGravity).field_0x8 = *(undefined4 *)&param_1->field_0x8;
  pFVar2->bPerSoftBodyGravityOverrideEnabled = param_2;
  if ((this->ExternalForces).Object == (FExternalForces *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ExternalForces).Object;
  *(undefined8 *)&pFVar2->FictitiousAngularVelocityNoScale = *(undefined8 *)param_3;
  *(undefined4 *)&(pFVar2->FictitiousAngularVelocityNoScale).field_0x8 =
       *(undefined4 *)&param_3->field_0x8;
  *(undefined8 *)((longlong)&pFVar2->_padding_ + 4) = *(undefined8 *)param_4;
  *(undefined4 *)((longlong)&pFVar2->_padding_ + 4) = *(undefined4 *)&param_4->field_0x8;
  if ((this->ExternalForces).Object == (FExternalForces *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ExternalForces).Object;
  *(undefined8 *)((longlong)&pFVar2->_padding_ + 4) = *(undefined8 *)param_5;
  uVar1 = *(undefined4 *)&param_5->field_0x8;
  *(float *)&pFVar2->_padding_ = param_6;
  *(undefined4 *)((longlong)&pFVar2->_padding_ + 4) = uVar1;
LAB_14dc234ac:
  *(undefined8 *)&this->SolverWindVelocity = *(undefined8 *)param_5;
  *(undefined4 *)&(this->SolverWindVelocity).field_0x8 = *(undefined4 *)&param_5->field_0x8;
  return;
}

