// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 61

// LocalDampingAngularCoefficientName'' @ 140f660e0

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPerParticleDampVelocity::
LocalDampingAngularCoefficientName__(void)

{
  ::FName::FName(&Chaos::Softs::FPerParticleDampVelocity::LocalDampingAngularCoefficientName,
                 L"LocalDampingAngularCoefficient");
  return;
}

// LocalDampingCoefficientName'' @ 140f66100

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPerParticleDampVelocity::LocalDampingCoefficientName__
          (void)

{
  ::FName::FName(&Chaos::Softs::FPerParticleDampVelocity::LocalDampingCoefficientName,
                 L"LocalDampingCoefficient");
  return;
}

// LocalDampingLinearCoefficientName'' @ 140f66120

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPerParticleDampVelocity::
LocalDampingLinearCoefficientName__(void)

{
  ::FName::FName(&Chaos::Softs::FPerParticleDampVelocity::LocalDampingLinearCoefficientName,
                 L"LocalDampingLinearCoefficient");
  return;
}

// LocalDampingSpaceName'' @ 140f66140

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPerParticleDampVelocity::LocalDampingSpaceName__(void)

{
  ::FName::FName(&Chaos::Softs::FPerParticleDampVelocity::LocalDampingSpaceName,L"LocalDampingSpace"
                );
  return;
}

// `dynamic_initializer_for_'CVarChaosJointAngularVelocityThresholdToApplyRestitution'' @ 140f66160

void __cdecl
_dynamic_initializer_for__CVarChaosJointAngularVelocityThresholdToApplyRestitution__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosJointAngularVelocityThresholdToApplyRestitution,
             L"p.Chaos.Joint.AngularVelocityThresholdToApplyRestitution",
             &Chaos_Joint_AngularVelocityThresholdToApplyRestitution,
             L"Apply restitution only if initial velocity is higher than this threshold (used in Quasipbd)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosJointAngularVelocityThresholdToApplyRestitution__)
  ;
  return;
}

// `dynamic_initializer_for_'CVarChaosJointDegenerateRotationLimit'' @ 140f661b0

void __cdecl _dynamic_initializer_for__CVarChaosJointDegenerateRotationLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosJointDegenerateRotationLimit,L"p.Chaos.Joint.DegenerateRotationLimit",
             &Chaos_Joint_DegenerateRotationLimit,
             L"Cosine of the swing angle that is considered degerenerate (default Cos(176deg))",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosJointDegenerateRotationLimit__);
  return;
}

// `dynamic_initializer_for_'CVarChaosJointDisableSoftLimits'' @ 140f66200

void __cdecl _dynamic_initializer_for__CVarChaosJointDisableSoftLimits__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosJointDisableSoftLimits,L"p.Chaos.Joint.DisableSoftLimits",
             &bChaos_Joint_DisableSoftLimits,L"Disable soft limits (for debugging only)",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosJointDisableSoftLimits__);
  return;
}

// `dynamic_initializer_for_'CVarChaosJointISPCEnabled'' @ 140f66250

void __cdecl _dynamic_initializer_for__CVarChaosJointISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosJointISPCEnabled,L"p.Chaos.Joint.ISPC",&bChaos_Joint_ISPC_Enabled,
             L"Whether to use ISPC optimizations in the Joint Solver",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosJointISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaosJointLinearVelocityThresholdToApplyRestitution'' @ 140f662a0

void __cdecl
_dynamic_initializer_for__CVarChaosJointLinearVelocityThresholdToApplyRestitution__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosJointLinearVelocityThresholdToApplyRestitution,
             L"p.Chaos.Joint.LinearVelocityThresholdToApplyRestitution",
             &Chaos_Joint_LinearVelocityThresholdToApplyRestitution,
             L"Apply restitution only if initial velocity is higher than this threshold (used in Quasipbd)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosJointLinearVelocityThresholdToApplyRestitution__);
  return;
}

// `dynamic_initializer_for_'CVarChaosJointMultiDimension'' @ 140f662f0

void __cdecl _dynamic_initializer_for__CVarChaosJointMultiDimension__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosJointMultiDimension,L"p.Chaos.Joint.MultiDimension",
             &bChaos_Joint_MultiDimension,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosJointMultiDimension__);
  return;
}

// `dynamic_initializer_for_'CVarChaosJointPlasticityClampToLimits'' @ 140f66340

void __cdecl _dynamic_initializer_for__CVarChaosJointPlasticityClampToLimits__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosJointPlasticityClampToLimits,L"p.Chaos.Joint.Plasticity.ClampToLimits",
             &bChaos_Joint_Plasticity_ClampToLimits,
             L"Clamp drive position targets to defined limits after plasticity computation",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosJointPlasticityClampToLimits__);
  return;
}

// `dynamic_initializer_for_'CVarChaosJointVelProjectionScale'' @ 140f66390

void __cdecl _dynamic_initializer_for__CVarChaosJointVelProjectionScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosJointVelProjectionScale,L"p.Chaos.Joint.VelProjectionAlpha",
             &Chaos_Joint_VelProjectionAlpha,
             L"How much of the velocity correction to apply during projection. Equivalent to (1-damping) for projection velocity delta"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosJointVelProjectionScale__);
  return;
}

// `dynamic_initializer_for_'FIspcPerParticleDampVelocityAutomationTestInstance'' @ 140f663e0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIspcPerParticleDampVelocityAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIspcPerParticleDampVelocity");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FIspcPerParticleDampVelocityAutomationTestInstance,&local_18,
             false);
  FIspcPerParticleDampVelocityAutomationTestInstance._0_8_ = &___7FIspcPerParticleDampVelocity__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FIspcPerParticleDampVelocityAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'LogChaosJoint'' @ 140f66440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChaosJoint__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogChaosJoint,L"LogChaosJoint",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChaosJoint__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 140f66480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HandleViewParallelForImp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HandleViewParallelForImp ==
      (FThreadSafeStaticStat<FStat_STAT_HandleViewParallelForImp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HandleViewParallelForImp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleViewParallelForImp,*pFVar1,
               L"HandleViewParallelForImp","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 140f66510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleViewParallelForImp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleViewParallelForImp ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleViewParallelForImp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleViewParallelForImp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleViewParallelForImp,*pFVar1,
               L"ParticleViewParallelForImp","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 140f665a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesParallelFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesParallelFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesParallelFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesParallelFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesParallelFor,*pFVar1,
               L"ParticlesParallelFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 140f66630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesSequentialFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesSequentialFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesSequentialFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesSequentialFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesSequentialFor,*pFVar1,
               L"ParticlesSequentialFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 143b81660

void * __thiscall
FIspcPerParticleDampVelocity::_scalar_deleting_destructor_
          (FIspcPerParticleDampVelocity *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// AddBodiesImpl<Chaos::FPBDJointCachedSolver> @ 143b816a0

void __cdecl
Chaos::Private::AddBodiesImpl<Chaos::FPBDJointCachedSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FSolverBodyContainer *param_3,
          TArray<Chaos::FPBDJointCachedSolver,TSizedDefaultAllocator<32>_> *param_4)

{
  FGenericParticleHandle FVar1;
  FGenericParticleHandle FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FSolverBody *pFVar8;
  FSolverBody *pFVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar11 = param_2->ArrayNum;
  uVar10 = 0;
  if (0 < iVar11) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar11) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = *(int *)((param_2->AllocatorInstance).Data + lVar13);
      pTVar7 = FPBDJointConstraints::GetConstrainedParticles(param_1->ConstraintContainer,iVar11);
      FVar1.Imp.MHandle = (FGenericParticleHandleImp)pTVar7->V[1];
      pTVar7 = FPBDJointConstraints::GetConstrainedParticles(param_1->ConstraintContainer,iVar11);
      FVar2.Imp.MHandle = (FGenericParticleHandleImp)pTVar7->V[0];
      pFVar8 = FSolverBodyContainer::FindOrAdd(param_3,FVar1);
      pFVar9 = FSolverBodyContainer::FindOrAdd(param_3,FVar2);
      uVar6 = 0;
      if ((int)uVar10 < param_4->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_4->AllocatorInstance).Data;
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 4;
      *(FSolverBody **)(pFVar3 + lVar12) = pFVar8;
      *(undefined8 *)(pFVar3 + lVar12 + 8) = uStack_50;
      *(undefined8 *)(pFVar3 + lVar12 + 0x10) = local_48;
      *(FSolverBody **)(pFVar3 + lVar12 + 0x18) = pFVar9;
      *(undefined8 *)(pFVar3 + lVar12 + 0x18 + 8) = uStack_50;
      *(undefined8 *)(pFVar3 + lVar12 + 0x28) = local_48;
      lVar12 = lVar12 + 0xfd0;
      iVar11 = param_2->ArrayNum;
    } while ((int)uVar10 < iVar11);
  }
  return;
}

// AddBodiesImpl<Chaos::FPBDJointSolver> @ 143b81850

void __cdecl
Chaos::Private::AddBodiesImpl<Chaos::FPBDJointSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FSolverBodyContainer *param_3,
          TArray<Chaos::FPBDJointSolver,TSizedDefaultAllocator<32>_> *param_4)

{
  FGenericParticleHandle FVar1;
  FGenericParticleHandle FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FSolverBody *pFVar8;
  FSolverBody *pFVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar11 = param_2->ArrayNum;
  uVar10 = 0;
  if (0 < iVar11) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar11) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = *(int *)((param_2->AllocatorInstance).Data + lVar13);
      pTVar7 = FPBDJointConstraints::GetConstrainedParticles(param_1->ConstraintContainer,iVar11);
      FVar1.Imp.MHandle = (FGenericParticleHandleImp)pTVar7->V[1];
      pTVar7 = FPBDJointConstraints::GetConstrainedParticles(param_1->ConstraintContainer,iVar11);
      FVar2.Imp.MHandle = (FGenericParticleHandleImp)pTVar7->V[0];
      pFVar8 = FSolverBodyContainer::FindOrAdd(param_3,FVar1);
      pFVar9 = FSolverBodyContainer::FindOrAdd(param_3,FVar2);
      uVar6 = 0;
      if ((int)uVar10 < param_4->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_4->AllocatorInstance).Data;
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 4;
      *(FSolverBody **)(pFVar3 + lVar12) = pFVar8;
      *(undefined8 *)(pFVar3 + lVar12 + 8) = uStack_50;
      *(undefined8 *)(pFVar3 + lVar12 + 0x10) = local_48;
      *(FSolverBody **)(pFVar3 + lVar12 + 0x18) = pFVar9;
      *(undefined8 *)(pFVar3 + lVar12 + 0x18 + 8) = uStack_50;
      *(undefined8 *)(pFVar3 + lVar12 + 0x28) = local_48;
      lVar12 = lVar12 + 0x4b0;
      iVar11 = param_2->ArrayNum;
    } while ((int)uVar10 < iVar11);
  }
  return;
}

// ApplyPositionConstraintsImpl<Chaos::FPBDJointCachedSolver> @ 143b81a00

void __cdecl
Chaos::Private::ApplyPositionConstraintsImpl<Chaos::FPBDJointCachedSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *param_1,
          TArray<Chaos::FPBDJointCachedSolver,TSizedDefaultAllocator<32>_> *param_2,double param_3,
          int param_4,int param_5)

{
  FPBDJointConstraints *this;
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  FPBDJointSolverSettings *pFVar9;
  FPBDJointSettings *pFVar10;
  TVector<double,3> *pTVar11;
  TVector<double,3> *pTVar12;
  int iVar13;
  uint uVar14;
  FPBDJointCachedSolver *this_00;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  TVector<double,3> local_e8;
  TVector<double,3> local_d0 [6];
  
  pFVar9 = FPBDJointConstraints::GetSettings(param_1->ConstraintContainer);
  dVar17 = GetJointIterationStiffness(pFVar9,param_4,param_5);
  dVar6 = __real_c04ca5dc1a63c1f8;
  fVar5 = __real_00800000;
  dVar4 = __real_47efffffe0000000;
  dVar3 = __real_bff0000000000000;
  dVar2 = __real_3ff0000000000000;
  iVar13 = param_2->ArrayNum;
  uVar14 = 0;
  if (0 < iVar13) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar14 < iVar13) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FPBDJointCachedSolver *)((param_2->AllocatorInstance).Data + lVar16);
      if ((this_00->bIsBroken == false) && ((0.0 < this_00->InvMs[0] || (0.0 < this_00->InvMs[1]))))
      {
        this = param_1->ConstraintContainer;
        uVar8 = 0;
        if ((int)uVar14 < (param_1->ContainerIndices).ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar10 = FPBDJointConstraints::GetConstraintSettings
                            (this,*(int *)((param_1->ContainerIndices).AllocatorInstance.Data +
                                          lVar15 * 4));
        dVar18 = dVar2;
        if ((((pFVar10->bShockPropagationEnabled != false) &&
             (param_5 - pFVar9->NumShockPropagationIterations <= param_4)) &&
            (fVar5 < this_00->SolverBodies[0].State.ShockPropagationScale *
                     this_00->SolverBodies[0].State.InvMScale *
                     ((this_00->SolverBodies[0].Body)->State).InvM)) &&
           (fVar5 < this_00->SolverBodies[1].State.ShockPropagationScale *
                    this_00->SolverBodies[1].State.InvMScale *
                    ((this_00->SolverBodies[1].Body)->State).InvM)) {
          dVar18 = FPBDJointUtilities::GetShockPropagationInvMassScale(pFVar9,pFVar10);
        }
        FPBDJointCachedSolver::SetShockPropagationScales(this_00,dVar18,dVar2,param_3);
        this_00->SolverStiffness = dVar17;
        this_00->NumActiveConstraints = 0;
        if (pFVar9->bSolvePositionLast == false) {
          FPBDJointCachedSolver::ApplyPositionConstraints(this_00,param_3);
          FPBDJointCachedSolver::ApplyRotationConstraints(this_00,param_3);
          FPBDJointCachedSolver::ApplyPositionDrives(this_00,param_3);
          FPBDJointCachedSolver::ApplyRotationDrives(this_00,param_3);
        }
        else {
          FPBDJointCachedSolver::ApplyRotationConstraints(this_00,param_3);
          FPBDJointCachedSolver::ApplyPositionConstraints(this_00,param_3);
          FPBDJointCachedSolver::ApplyRotationDrives(this_00,param_3);
          FPBDJointCachedSolver::ApplyPositionDrives(this_00,param_3);
        }
        pTVar11 = FPBDJointCachedSolver::GetNetAngularImpulse(this_00,&local_e8);
        pTVar12 = FPBDJointCachedSolver::GetNetLinearImpulse(this_00,local_d0);
        bVar7 = GetJointShouldBreak(pFVar10,param_3,pTVar12,pTVar11);
        if (bVar7) {
          this_00->bIsBroken = true;
        }
        bVar7 = false;
        if (((param_4 == param_5 + -1) &&
            ((dVar18 = pFVar10->LinearViolationCallbackThreshold, dVar18 == dVar4 ||
             (bVar7 = dVar18 * dVar18 < dVar3, !bVar7)))) &&
           (pFVar10->AngularViolationCallbackThreshold != dVar4)) {
          bVar7 = pFVar10->AngularViolationCallbackThreshold < dVar6;
        }
        this_00->bIsViolating = bVar7;
      }
      iVar13 = param_2->ArrayNum;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0xfd0;
    } while ((int)uVar14 < iVar13);
  }
  return;
}

// ApplyPositionConstraintsImpl<Chaos::FPBDJointSolver> @ 143b81db0

void __cdecl
Chaos::Private::ApplyPositionConstraintsImpl<Chaos::FPBDJointSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *param_1,
          TArray<Chaos::FPBDJointSolver,TSizedDefaultAllocator<32>_> *param_2,double param_3,
          int param_4,int param_5)

{
  FPBDJointConstraints *this;
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  FPBDJointSolverSettings *pFVar8;
  FPBDJointSettings *pFVar9;
  int iVar10;
  FPBDJointSolver *this_00;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  
  pFVar8 = FPBDJointConstraints::GetSettings(param_1->ConstraintContainer);
  dVar14 = GetJointIterationStiffness(pFVar8,param_4,param_5);
  fVar5 = __real_00800000;
  dVar4 = __real_47efffffe0000000;
  dVar3 = __real_404ca5dc1a63c1f8;
  dVar2 = __real_3ff0000000000000;
  iVar10 = param_2->ArrayNum;
  uVar11 = 0;
  if (0 < iVar10) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < iVar10) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FPBDJointSolver *)((param_2->AllocatorInstance).Data + lVar13);
      if ((this_00->bIsBroken == false) && ((0.0 < this_00->InvMs[0] || (0.0 < this_00->InvMs[1]))))
      {
        this = param_1->ConstraintContainer;
        uVar7 = 0;
        if ((int)uVar11 < (param_1->ContainerIndices).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar9 = FPBDJointConstraints::GetConstraintSettings
                           (this,*(int *)((param_1->ContainerIndices).AllocatorInstance.Data +
                                         lVar12 * 4));
        FPBDJointSolver::UpdateDerivedState(this_00);
        dVar15 = dVar2;
        if ((((pFVar9->bShockPropagationEnabled != false) &&
             (param_5 - pFVar8->NumShockPropagationIterations <= param_4)) &&
            (fVar5 < this_00->SolverBodies[0].State.ShockPropagationScale *
                     this_00->SolverBodies[0].State.InvMScale *
                     ((this_00->SolverBodies[0].Body)->State).InvM)) &&
           (fVar5 < this_00->SolverBodies[1].State.ShockPropagationScale *
                    this_00->SolverBodies[1].State.InvMScale *
                    ((this_00->SolverBodies[1].Body)->State).InvM)) {
          dVar15 = FPBDJointUtilities::GetShockPropagationInvMassScale(pFVar8,pFVar9);
        }
        if (dVar15 != this_00->InvMScales[0]) {
          this_00->InvMScales[0] = dVar15;
          FPBDJointSolver::UpdateMass0(this_00);
        }
        if (dVar2 != this_00->InvMScales[1]) {
          this_00->InvMScales[1] = 1.0;
          FPBDJointSolver::UpdateMass1(this_00);
        }
        this_00->SolverStiffness = dVar14;
        this_00->LinearViolationSq = 0.0;
        this_00->AngularViolation = 0.0;
        if (pFVar8->bSolvePositionLast == false) {
          FPBDJointSolver::ApplyPositionConstraints(this_00,param_3,pFVar8,pFVar9);
          FPBDJointSolver::ApplyRotationConstraints(this_00,param_3,pFVar8,pFVar9);
          FPBDJointSolver::ApplyPositionDrives(this_00,param_3,pFVar8,pFVar9);
          FPBDJointSolver::ApplyRotationDrives(this_00,param_3,pFVar8,pFVar9);
        }
        else {
          FPBDJointSolver::ApplyRotationConstraints(this_00,param_3,pFVar8,pFVar9);
          FPBDJointSolver::ApplyPositionConstraints(this_00,param_3,pFVar8,pFVar9);
          FPBDJointSolver::ApplyRotationDrives(this_00,param_3,pFVar8,pFVar9);
          FPBDJointSolver::ApplyPositionDrives(this_00,param_3,pFVar8,pFVar9);
        }
        bVar6 = GetJointShouldBreak(pFVar9,param_3,&this_00->NetLinearImpulse,
                                    &this_00->NetAngularImpulse);
        if (bVar6) {
          this_00->bIsBroken = true;
        }
        bVar6 = false;
        if (((param_4 == param_5 + -1) &&
            ((dVar15 = pFVar9->LinearViolationCallbackThreshold, dVar15 == dVar4 ||
             (bVar6 = dVar15 * dVar15 < this_00->LinearViolationSq, !bVar6)))) &&
           (pFVar9->AngularViolationCallbackThreshold != dVar4)) {
          bVar6 = pFVar9->AngularViolationCallbackThreshold < this_00->AngularViolation * dVar3;
        }
        this_00->bIsViolating = bVar6;
      }
      iVar10 = param_2->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x4b0;
    } while ((int)uVar11 < iVar10);
  }
  return;
}

// ApplyVelocityConstraintsImpl<Chaos::FPBDJointCachedSolver> @ 143b82190

void __cdecl
Chaos::Private::ApplyVelocityConstraintsImpl<Chaos::FPBDJointCachedSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *param_1,
          TArray<Chaos::FPBDJointCachedSolver,TSizedDefaultAllocator<32>_> *param_2,double param_3,
          int param_4,int param_5)

{
  FPBDJointConstraints *this;
  code *pcVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  FPBDJointSolverSettings *pFVar6;
  FPBDJointSettings *pFVar7;
  int iVar8;
  FPBDJointCachedSolver *this_00;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  
  pFVar6 = FPBDJointConstraints::GetSettings(param_1->ConstraintContainer);
  dVar12 = GetJointIterationStiffness(pFVar6,param_4,param_5);
  fVar3 = __real_00800000;
  dVar2 = __real_3ff0000000000000;
  iVar8 = param_2->ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FPBDJointCachedSolver *)((param_2->AllocatorInstance).Data + lVar11);
      if ((this_00->bIsBroken == false) && ((0.0 < this_00->InvMs[0] || (0.0 < this_00->InvMs[1]))))
      {
        this = param_1->ConstraintContainer;
        uVar5 = 0;
        if ((int)uVar9 < (param_1->ContainerIndices).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar7 = FPBDJointConstraints::GetConstraintSettings
                           (this,*(int *)((param_1->ContainerIndices).AllocatorInstance.Data +
                                         lVar10 * 4));
        dVar13 = dVar2;
        if ((((pFVar7->bShockPropagationEnabled != false) &&
             (param_5 - pFVar6->NumShockPropagationIterations <= param_4)) &&
            (fVar3 < this_00->SolverBodies[0].State.ShockPropagationScale *
                     this_00->SolverBodies[0].State.InvMScale *
                     ((this_00->SolverBodies[0].Body)->State).InvM)) &&
           (fVar3 < this_00->SolverBodies[1].State.ShockPropagationScale *
                    this_00->SolverBodies[1].State.InvMScale *
                    ((this_00->SolverBodies[1].Body)->State).InvM)) {
          dVar13 = FPBDJointUtilities::GetShockPropagationInvMassScale(pFVar6,pFVar7);
        }
        FPBDJointCachedSolver::SetShockPropagationScales(this_00,dVar13,dVar2,param_3);
        this_00->SolverStiffness = dVar12;
        if (pFVar6->bSolvePositionLast == false) {
          FPBDJointCachedSolver::ApplyLinearVelocityConstraints(this_00);
          FPBDJointCachedSolver::ApplyAngularVelocityConstraints(this_00);
          FPBDJointCachedSolver::ApplyPositionVelocityDrives(this_00,param_3);
          FPBDJointCachedSolver::ApplyRotationVelocityDrives(this_00,param_3);
        }
        else {
          FPBDJointCachedSolver::ApplyAngularVelocityConstraints(this_00);
          FPBDJointCachedSolver::ApplyLinearVelocityConstraints(this_00);
          FPBDJointCachedSolver::ApplyRotationVelocityDrives(this_00,param_3);
          FPBDJointCachedSolver::ApplyPositionVelocityDrives(this_00,param_3);
        }
      }
      iVar8 = param_2->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0xfd0;
    } while ((int)uVar9 < iVar8);
  }
  return;
}

// ApplyVelocityConstraintsImpl<Chaos::FPBDJointSolver> @ 143b82450

void __cdecl
Chaos::Private::ApplyVelocityConstraintsImpl<Chaos::FPBDJointSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *param_1,
          TArray<Chaos::FPBDJointSolver,TSizedDefaultAllocator<32>_> *param_2,double param_3,
          int param_4,int param_5)

{
  FPBDJointConstraints *this;
  code *pcVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  FPBDJointSolverSettings *pFVar6;
  FPBDJointSettings *pFVar7;
  int iVar8;
  FPBDJointSolver *this_00;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  
  pFVar6 = FPBDJointConstraints::GetSettings(param_1->ConstraintContainer);
  dVar12 = GetJointIterationStiffness(pFVar6,param_4,param_5);
  fVar3 = __real_00800000;
  dVar2 = __real_3ff0000000000000;
  iVar8 = param_2->ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FPBDJointSolver *)((param_2->AllocatorInstance).Data + lVar10);
      if ((this_00->bIsBroken == false) && ((0.0 < this_00->InvMs[0] || (0.0 < this_00->InvMs[1]))))
      {
        this = param_1->ConstraintContainer;
        uVar5 = 0;
        if ((int)uVar9 < (param_1->ContainerIndices).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar7 = FPBDJointConstraints::GetConstraintSettings
                           (this,*(int *)((param_1->ContainerIndices).AllocatorInstance.Data +
                                         lVar11 * 4));
        FPBDJointSolver::UpdateDerivedState(this_00);
        dVar13 = dVar2;
        if ((((pFVar7->bShockPropagationEnabled != false) &&
             (param_5 - pFVar6->NumShockPropagationIterations <= param_4)) &&
            (fVar3 < this_00->SolverBodies[0].State.ShockPropagationScale *
                     this_00->SolverBodies[0].State.InvMScale *
                     ((this_00->SolverBodies[0].Body)->State).InvM)) &&
           (fVar3 < this_00->SolverBodies[1].State.ShockPropagationScale *
                    this_00->SolverBodies[1].State.InvMScale *
                    ((this_00->SolverBodies[1].Body)->State).InvM)) {
          dVar13 = FPBDJointUtilities::GetShockPropagationInvMassScale(pFVar6,pFVar7);
        }
        if (dVar13 != this_00->InvMScales[0]) {
          this_00->InvMScales[0] = dVar13;
          FPBDJointSolver::UpdateMass0(this_00);
        }
        if (dVar2 != this_00->InvMScales[1]) {
          this_00->InvMScales[1] = 1.0;
          FPBDJointSolver::UpdateMass1(this_00);
        }
        this_00->SolverStiffness = dVar12;
        if (pFVar6->bSolvePositionLast == false) {
          FPBDJointSolver::ApplyLinearVelocityConstraints(this_00,param_3,pFVar6,pFVar7);
          FPBDJointSolver::ApplyAngularVelocityConstraints(this_00,param_3,pFVar6,pFVar7);
        }
        else {
          FPBDJointSolver::ApplyAngularVelocityConstraints(this_00,param_3,pFVar6,pFVar7);
          FPBDJointSolver::ApplyLinearVelocityConstraints(this_00,param_3,pFVar6,pFVar7);
        }
      }
      iVar8 = param_2->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x4b0;
    } while ((int)uVar9 < iVar8);
  }
  return;
}

// ComputeJointFactorMatrix<double> @ 143b828c0

PMatrix<double,3,3> * __cdecl
Chaos::Utilities::ComputeJointFactorMatrix<double>
          (PMatrix<double,3,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          PMatrix<double,3,3> *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  PMatrix<double,3,3> *pPVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (*param_3 <= __real_3810000000000000) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Im > 1.175494351e-38F",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Utilities.h"
                        ,0x161,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pPVar13 = (PMatrix<double,3,3> *)(*pcVar9)();
      return pPVar13;
    }
  }
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  dVar4 = *(double *)&param_2->field_0x40;
  dVar5 = *(double *)&param_2->field_0x20;
  dVar15 = *(double *)&param_2->field_0x48;
  dVar6 = *(double *)param_2;
  dVar7 = *param_3;
  dVar8 = *(double *)&param_2->field_0x50;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  dVar11 = dVar3 * dVar6 - dVar4 * dVar1;
  dVar16 = dVar4 * dVar2 - dVar3 * dVar5;
  dVar14 = dVar8 * dVar2 - dVar15 * dVar3;
  dVar10 = (dVar3 * dVar5 - dVar15 * dVar1) * dVar1 - dVar11 * dVar2;
  dVar17 = *(double *)&param_2->field_0x28;
  *(double *)&__return_storage_ptr__->field_0x48 = dVar10;
  dVar17 = dVar15 * dVar2 - dVar3 * dVar17;
  *(double *)&__return_storage_ptr__->field_0x30 = dVar10;
  dVar15 = dVar17 * dVar1 - dVar16 * dVar2;
  *(double *)&__return_storage_ptr__->field_0x40 = dVar15;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar15;
  dVar15 = dVar16 * dVar3 - dVar14 * dVar1;
  *(double *)&__return_storage_ptr__->field_0x20 = dVar15;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar15;
  *(double *)&__return_storage_ptr__->field_0x28 =
       (dVar11 * dVar3 - (dVar4 * dVar3 - dVar8 * dVar1) * dVar1) + dVar7;
  *(double *)__return_storage_ptr__ = (dVar14 * dVar2 - dVar17 * dVar3) + dVar7;
  *(double *)&__return_storage_ptr__->field_0x50 =
       ((*(double *)&param_2->field_0x28 * dVar1 - dVar5 * dVar2) * dVar1 -
       (dVar5 * dVar1 - dVar6 * dVar2) * dVar2) + dVar7;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0x3ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  return __return_storage_ptr__;
}

// DefaultConstructItems<Chaos::FColoringGraph::FIsland,int> @ 143b82b40

void __cdecl DefaultConstructItems<Chaos::FColoringGraph::FIsland,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int> @ 143b82b70

void __cdecl
DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = 0;
      *(undefined8 *)(lVar1 + -4) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined2 *)(lVar1 + 0x20) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Chaos::FPBDJointCachedSolver,int> @ 143b82bb0

void __cdecl DefaultConstructItems<Chaos::FPBDJointCachedSolver,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 (*pauVar15) [16];
  
  if (param_2 != 0) {
    pauVar15 = (undefined1 (*) [16])((longlong)param_1 + 0x50);
    do {
      *(undefined8 *)pauVar15[-5] = 0;
      *(undefined8 *)(pauVar15[-4] + 8) = 0;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      pauVar15[-2] = auVar3;
      auVar4._8_4_ = SUB84((double)fVar2,0);
      auVar4._0_8_ = (double)fVar1;
      auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[-1] = auVar4;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
      ;
      *pauVar15 = auVar5;
      auVar6._8_4_ = SUB84((double)fVar2,0);
      auVar6._0_8_ = (double)fVar1;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[1] = auVar6;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      pauVar15[2] = auVar7;
      auVar8._8_4_ = SUB84((double)fVar2,0);
      auVar8._0_8_ = (double)fVar1;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[3] = auVar8;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      pauVar15[4] = auVar9;
      auVar10._8_4_ = SUB84((double)fVar2,0);
      auVar10._0_8_ = (double)fVar1;
      auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[5] = auVar10;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar11._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      pauVar15[6] = auVar11;
      auVar12._8_4_ = SUB84((double)fVar2,0);
      auVar12._0_8_ = (double)fVar1;
      auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[7] = auVar12;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar13._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      pauVar15[8] = auVar13;
      auVar14._8_4_ = SUB84((double)fVar2,0);
      auVar14._0_8_ = (double)fVar1;
      auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[9] = auVar14;
      *(undefined8 *)pauVar15[0xd] = 0;
      *(undefined8 *)(pauVar15[0xd] + 8) = 0;
      *(undefined8 *)pauVar15[0xe] = 0;
      *(undefined8 *)(pauVar15[0xe] + 8) = 0;
      *(undefined8 *)pauVar15[0xf] = 0;
      *(undefined8 *)(pauVar15[0xf] + 8) = 0;
      *(undefined8 *)pauVar15[0x10] = 0;
      *(undefined8 *)(pauVar15[0x10] + 8) = 0;
      *(undefined8 *)pauVar15[0x19] = 0;
      *(undefined8 *)(pauVar15[0x19] + 8) = 0;
      *(undefined8 *)pauVar15[0x1a] = 0;
      *(undefined8 *)(pauVar15[0x1a] + 8) = 0;
      *(undefined8 *)pauVar15[0x1b] = 0;
      *(undefined8 *)(pauVar15[0x1b] + 8) = 0;
      *(undefined8 *)pauVar15[0x1c] = 0;
      *(undefined8 *)(pauVar15[0x1c] + 8) = 0;
      *(undefined8 *)pauVar15[0x20] = 0;
      *(undefined8 *)(pauVar15[0x20] + 8) = 0;
      *(undefined8 *)pauVar15[0x21] = 0;
      *(undefined8 *)(pauVar15[0x21] + 8) = 0;
      *(undefined8 *)pauVar15[0x22] = 0;
      *(undefined8 *)(pauVar15[0x22] + 8) = 0;
      *(undefined8 *)pauVar15[0x23] = 0;
      *(undefined8 *)(pauVar15[0x23] + 8) = 0;
      *(undefined8 *)pauVar15[0x24] = 0;
      *(undefined8 *)(pauVar15[0x24] + 8) = 0;
      *(undefined8 *)pauVar15[0x25] = 0;
      *(undefined8 *)(pauVar15[0x25] + 8) = 0;
      *(undefined8 *)pauVar15[0x26] = 0;
      *(undefined8 *)(pauVar15[0x26] + 8) = 0;
      *(undefined8 *)pauVar15[0x27] = 0;
      *(undefined8 *)(pauVar15[0x27] + 8) = 0;
      *(undefined8 *)pauVar15[0x28] = 0;
      *(undefined8 *)(pauVar15[0x28] + 8) = 0;
      *(undefined8 *)pauVar15[0x29] = 0;
      *(undefined8 *)(pauVar15[0x29] + 8) = 0;
      *(undefined8 *)pauVar15[0x2a] = 0;
      *(undefined8 *)(pauVar15[0x2a] + 8) = 0;
      *(undefined8 *)pauVar15[0x2b] = 0;
      *(undefined8 *)(pauVar15[0x2b] + 8) = 0;
      *(undefined8 *)pauVar15[0x2c] = 0;
      *(undefined8 *)(pauVar15[0x2c] + 8) = 0;
      *(undefined8 *)pauVar15[0x2d] = 0;
      *(undefined8 *)(pauVar15[0x2d] + 8) = 0;
      *(undefined8 *)pauVar15[0x2e] = 0;
      *(undefined8 *)(pauVar15[0x2e] + 8) = 0;
      *(undefined8 *)pauVar15[0x2f] = 0;
      *(undefined8 *)(pauVar15[0x2f] + 8) = 0;
      *(undefined8 *)pauVar15[0x3b] = 0;
      *(undefined8 *)(pauVar15[0x3b] + 8) = 0;
      *(undefined8 *)pauVar15[0x3c] = 0;
      *(undefined8 *)(pauVar15[0x3c] + 8) = 0;
      *(undefined8 *)pauVar15[0x3d] = 0;
      *(undefined8 *)(pauVar15[0x3d] + 8) = 0;
      *(undefined8 *)pauVar15[0x3e] = 0;
      *(undefined8 *)(pauVar15[0x3e] + 8) = 0;
      param_2 = param_2 + -1;
      pauVar15 = pauVar15 + 0xfd;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Chaos::FPBDJointSolver,int> @ 143b82d60

void __cdecl DefaultConstructItems<Chaos::FPBDJointSolver,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 (*pauVar15) [16];
  
  if (param_2 != 0) {
    pauVar15 = (undefined1 (*) [16])((longlong)param_1 + 0x50);
    do {
      *(undefined8 *)pauVar15[-5] = 0;
      *(undefined8 *)(pauVar15[-4] + 8) = 0;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      pauVar15[-2] = auVar3;
      auVar4._8_4_ = SUB84((double)fVar2,0);
      auVar4._0_8_ = (double)fVar1;
      auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[-1] = auVar4;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
      ;
      *pauVar15 = auVar5;
      auVar6._8_4_ = SUB84((double)fVar2,0);
      auVar6._0_8_ = (double)fVar1;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[1] = auVar6;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      pauVar15[2] = auVar7;
      auVar8._8_4_ = SUB84((double)fVar2,0);
      auVar8._0_8_ = (double)fVar1;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[3] = auVar8;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      pauVar15[4] = auVar9;
      auVar10._8_4_ = SUB84((double)fVar2,0);
      auVar10._0_8_ = (double)fVar1;
      auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[5] = auVar10;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar11._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      pauVar15[6] = auVar11;
      auVar12._8_4_ = SUB84((double)fVar2,0);
      auVar12._0_8_ = (double)fVar1;
      auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[7] = auVar12;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar13._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      pauVar15[8] = auVar13;
      auVar14._8_4_ = SUB84((double)fVar2,0);
      auVar14._0_8_ = (double)fVar1;
      auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[9] = auVar14;
      *(undefined8 *)pauVar15[0xd] = 0;
      *(undefined8 *)(pauVar15[0xd] + 8) = 0;
      *(undefined8 *)pauVar15[0xe] = 0;
      *(undefined8 *)(pauVar15[0xe] + 8) = 0;
      *(undefined8 *)pauVar15[0xf] = 0;
      *(undefined8 *)(pauVar15[0xf] + 8) = 0;
      *(undefined8 *)pauVar15[0x10] = 0;
      *(undefined8 *)(pauVar15[0x10] + 8) = 0;
      *(undefined8 *)pauVar15[0x14] = 0;
      *(undefined8 *)(pauVar15[0x14] + 8) = 0;
      *(undefined8 *)pauVar15[0x15] = 0;
      *(undefined8 *)(pauVar15[0x15] + 8) = 0;
      *(undefined8 *)pauVar15[0x16] = 0;
      *(undefined8 *)(pauVar15[0x16] + 8) = 0;
      *(undefined8 *)pauVar15[0x17] = 0;
      *(undefined8 *)(pauVar15[0x17] + 8) = 0;
      *(undefined8 *)pauVar15[0x1e] = 0;
      *(undefined8 *)(pauVar15[0x1e] + 8) = 0;
      *(undefined8 *)pauVar15[0x1f] = 0;
      *(undefined8 *)(pauVar15[0x1f] + 8) = 0;
      *(undefined8 *)pauVar15[0x20] = 0;
      *(undefined8 *)(pauVar15[0x20] + 8) = 0;
      *(undefined8 *)pauVar15[0x21] = 0;
      *(undefined8 *)(pauVar15[0x21] + 8) = 0;
      *(undefined8 *)pauVar15[0x22] = 0;
      *(undefined8 *)(pauVar15[0x22] + 8) = 0;
      *(undefined8 *)pauVar15[0x23] = 0;
      *(undefined8 *)(pauVar15[0x23] + 8) = 0;
      *(undefined8 *)pauVar15[0x24] = 0;
      *(undefined8 *)(pauVar15[0x24] + 8) = 0;
      *(undefined8 *)pauVar15[0x25] = 0;
      *(undefined8 *)(pauVar15[0x25] + 8) = 0;
      *(undefined8 *)pauVar15[0x26] = 0;
      *(undefined8 *)(pauVar15[0x26] + 8) = 0;
      *(undefined8 *)pauVar15[0x27] = 0;
      *(undefined8 *)(pauVar15[0x27] + 8) = 0;
      *(undefined8 *)pauVar15[0x28] = 0;
      *(undefined8 *)(pauVar15[0x28] + 8) = 0;
      *(undefined8 *)pauVar15[0x29] = 0;
      *(undefined8 *)(pauVar15[0x29] + 8) = 0;
      *(undefined8 *)pauVar15[0x2a] = 0;
      *(undefined8 *)(pauVar15[0x2a] + 8) = 0;
      *(undefined8 *)pauVar15[0x2b] = 0;
      *(undefined8 *)(pauVar15[0x2b] + 8) = 0;
      *(undefined8 *)pauVar15[0x2c] = 0;
      *(undefined8 *)(pauVar15[0x2c] + 8) = 0;
      *(undefined8 *)pauVar15[0x2d] = 0;
      *(undefined8 *)(pauVar15[0x2d] + 8) = 0;
      *(undefined8 *)pauVar15[0x3e] = 0;
      *(undefined8 *)(pauVar15[0x3e] + 8) = 0;
      *(undefined8 *)pauVar15[0x3f] = 0;
      *(undefined8 *)(pauVar15[0x3f] + 8) = 0;
      *(undefined8 *)pauVar15[0x40] = 0;
      *(undefined8 *)(pauVar15[0x40] + 8) = 0;
      *(undefined8 *)pauVar15[0x41] = 0;
      *(undefined8 *)(pauVar15[0x41] + 8) = 0;
      param_2 = param_2 + -1;
      pauVar15 = pauVar15 + 0x4b;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Chaos::FColoringGraph::FIsland,int> @ 143b82f10

void __cdecl DestructItems<Chaos::FColoringGraph::FIsland,int>(FIsland *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->VertexIndices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// GatherInputImpl<Chaos::FPBDJointCachedSolver> @ 143b82f50

void __cdecl
Chaos::Private::GatherInputImpl<Chaos::FPBDJointCachedSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *param_1,
          TArray<Chaos::FPBDJointCachedSolver,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,double param_4,int param_5,int param_6,
          bool param_7)

{
  FPBDJointConstraints *this;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPBDJointSettings *pFVar5;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar6;
  FPBDJointSettings *pFVar7;
  FPBDJointSettings *pFVar8;
  TRigidTransform<double,3> *pTVar9;
  TRigidTransform<double,3> *pTVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FGenericParticleHandleImp local_130;
  FGenericParticleHandleImp local_128;
  FPBDJointSolverSettings *local_120;
  TArray<int,TSizedDefaultAllocator<32>_> *local_118;
  TRigidTransform<double,3> local_108;
  TRigidTransform<double,3> local_a8;
  
  local_118 = param_3;
  local_120 = FPBDJointConstraints::GetSettings(param_1->ConstraintContainer);
  if (param_5 < 0) {
    param_5 = 0;
  }
  iVar11 = param_3->ArrayNum;
  if (param_6 < param_3->ArrayNum) {
    iVar11 = param_6;
  }
  if (param_5 < iVar11) {
    lVar13 = (longlong)param_5 * 4;
    do {
      this = param_1->ConstraintContainer;
      uVar12 = (uint)~param_5 >> 0x1f;
      uVar4 = 0;
      if (param_5 < (param_1->ContainerIndices).ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FPBDJointConstraints::GetConstraintSettings
                         (this,*(int *)((param_1->ContainerIndices).AllocatorInstance.Data + lVar13)
                         );
      uVar4 = 0;
      if (param_5 < (param_1->ContainerIndices).ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = *(int *)((param_1->ContainerIndices).AllocatorInstance.Data + lVar13);
      pTVar6 = FPBDJointConstraints::GetConstrainedParticles(param_1->ConstraintContainer,iVar11);
      local_128.MHandle = pTVar6->V[1];
      pTVar6 = FPBDJointConstraints::GetConstrainedParticles(param_1->ConstraintContainer,iVar11);
      local_130.MHandle = pTVar6->V[0];
      pFVar7 = FPBDJointConstraints::GetConstraintSettings(param_1->ConstraintContainer,iVar11);
      pFVar8 = FPBDJointConstraints::GetConstraintSettings(param_1->ConstraintContainer,iVar11);
      uVar4 = 0;
      if (param_5 < param_2->ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      pTVar9 = FGenericParticleHandleImp::GetComRelativeTransform
                         (&local_130,&local_108,(TRigidTransform<double,3> *)pFVar8);
      pTVar10 = FGenericParticleHandleImp::GetComRelativeTransform
                          (&local_128,&local_a8,(pFVar7->ConnectorTransforms).V + 1);
      FPBDJointCachedSolver::Init
                ((FPBDJointCachedSolver *)(pFVar1 + (longlong)param_5 * 0xfd0),param_4,local_120,
                 pFVar5,pTVar10,pTVar9);
      param_5 = param_5 + 1;
      lVar13 = lVar13 + 4;
      iVar11 = local_118->ArrayNum;
      if (param_6 < local_118->ArrayNum) {
        iVar11 = param_6;
      }
    } while (param_5 < iVar11);
  }
  return;
}

// GatherInputImpl<Chaos::FPBDJointSolver> @ 143b831d0

void __cdecl
Chaos::Private::GatherInputImpl<Chaos::FPBDJointSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *param_1,
          TArray<Chaos::FPBDJointSolver,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,double param_4,int param_5,int param_6,
          bool param_7)

{
  FPBDJointConstraints *this;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPBDJointSettings *pFVar5;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar6;
  FPBDJointSettings *pFVar7;
  FPBDJointSettings *pFVar8;
  TRigidTransform<double,3> *pTVar9;
  TRigidTransform<double,3> *pTVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FGenericParticleHandleImp local_130;
  FGenericParticleHandleImp local_128;
  FPBDJointSolverSettings *local_120;
  TArray<int,TSizedDefaultAllocator<32>_> *local_118;
  TRigidTransform<double,3> local_108;
  TRigidTransform<double,3> local_a8;
  
  local_118 = param_3;
  local_120 = FPBDJointConstraints::GetSettings(param_1->ConstraintContainer);
  if (param_5 < 0) {
    param_5 = 0;
  }
  iVar11 = param_3->ArrayNum;
  if (param_6 < param_3->ArrayNum) {
    iVar11 = param_6;
  }
  if (param_5 < iVar11) {
    lVar13 = (longlong)param_5 * 4;
    do {
      this = param_1->ConstraintContainer;
      uVar12 = (uint)~param_5 >> 0x1f;
      uVar4 = 0;
      if (param_5 < (param_1->ContainerIndices).ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FPBDJointConstraints::GetConstraintSettings
                         (this,*(int *)((param_1->ContainerIndices).AllocatorInstance.Data + lVar13)
                         );
      uVar4 = 0;
      if (param_5 < (param_1->ContainerIndices).ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = *(int *)((param_1->ContainerIndices).AllocatorInstance.Data + lVar13);
      pTVar6 = FPBDJointConstraints::GetConstrainedParticles(param_1->ConstraintContainer,iVar11);
      local_128.MHandle = pTVar6->V[1];
      pTVar6 = FPBDJointConstraints::GetConstrainedParticles(param_1->ConstraintContainer,iVar11);
      local_130.MHandle = pTVar6->V[0];
      pFVar7 = FPBDJointConstraints::GetConstraintSettings(param_1->ConstraintContainer,iVar11);
      pFVar8 = FPBDJointConstraints::GetConstraintSettings(param_1->ConstraintContainer,iVar11);
      uVar4 = 0;
      if (param_5 < param_2->ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      pTVar9 = FGenericParticleHandleImp::GetComRelativeTransform
                         (&local_130,&local_108,(TRigidTransform<double,3> *)pFVar8);
      pTVar10 = FGenericParticleHandleImp::GetComRelativeTransform
                          (&local_128,&local_a8,(pFVar7->ConnectorTransforms).V + 1);
      FPBDJointSolver::Init
                ((FPBDJointSolver *)(pFVar1 + (longlong)param_5 * 0x4b0),param_4,local_120,pFVar5,
                 pTVar10,pTVar9);
      param_5 = param_5 + 1;
      lVar13 = lVar13 + 4;
      iVar11 = local_118->ArrayNum;
      if (param_6 < local_118->ArrayNum) {
        iVar11 = param_6;
      }
    } while (param_5 < iVar11);
  }
  return;
}

// HeapSortInternal<Chaos::FColoringGraph::FIsland,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FColoringGraph::FIsland,`Chaos::FColoringGraph::PackIslands'::__l2::<lambda_1>_>_> @ 143b83450

void __cdecl
AlgoImpl::
HeapSortInternal<Chaos::FColoringGraph::FIsland,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FColoringGraph::FIsland,_Chaos::FColoringGraph::PackIslands_::__l2::<lambda_1>_>_>
          (FIsland *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::FColoringGraph::FIsland,_private:_void___cdecl_Chaos::FColoringGraph::PackIslands(void)_::_2_::<lambda_1>_>
          param_4)

{
  FIsland *pFVar1;
  FIsland *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FIsland *pFVar17;
  longlong lVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar19 = iVar14;
  iVar15 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_143b8355d:
      if (iVar15 == 0) {
        iVar14 = param_2 + -1;
        lVar18 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar17 = param_1 + lVar18;
          do {
            iVar19 = (pFVar17->VertexIndices).ArrayNum;
            iVar13 = (pFVar17->VertexIndices).ArrayMax;
            iVar5 = param_1->NextColorIndex;
            uVar11 = *(undefined4 *)&param_1->field_0x14;
            pFVar4 = (param_1->VertexIndices).AllocatorInstance.Data;
            iVar15 = (param_1->VertexIndices).ArrayNum;
            iVar16 = (param_1->VertexIndices).ArrayMax;
            (param_1->VertexIndices).AllocatorInstance.Data =
                 (pFVar17->VertexIndices).AllocatorInstance.Data;
            (param_1->VertexIndices).ArrayNum = iVar19;
            (param_1->VertexIndices).ArrayMax = iVar13;
            uVar7 = *(undefined4 *)&pFVar17->field_0x14;
            param_1->NextColorIndex = pFVar17->NextColorIndex;
            *(undefined4 *)&param_1->field_0x14 = uVar7;
            (pFVar17->VertexIndices).AllocatorInstance.Data = pFVar4;
            (pFVar17->VertexIndices).ArrayNum = iVar15;
            (pFVar17->VertexIndices).ArrayMax = iVar16;
            pFVar17->NextColorIndex = iVar5;
            *(undefined4 *)&pFVar17->field_0x14 = uVar11;
            iVar19 = 0;
            if (1 < iVar14) {
              do {
                iVar13 = iVar19 * 2;
                iVar15 = iVar13 + 1;
                if (iVar13 + 2 < iVar14) {
                  if (param_1[iVar15].VertexIndices.ArrayNum <
                      param_1[(longlong)iVar13 + 2].VertexIndices.ArrayNum) {
                    iVar15 = iVar13;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar1 = param_1 + iVar15;
                if (param_1[iVar19].VertexIndices.ArrayNum <= (pFVar1->VertexIndices).ArrayNum)
                break;
                iVar13 = (pFVar1->VertexIndices).ArrayNum;
                iVar16 = (pFVar1->VertexIndices).ArrayMax;
                iVar8 = param_1[iVar19].NextColorIndex;
                uVar11 = *(undefined4 *)&param_1[iVar19].field_0x14;
                pFVar2 = param_1 + iVar19;
                pFVar4 = (pFVar2->VertexIndices).AllocatorInstance.Data;
                iVar5 = (pFVar2->VertexIndices).ArrayNum;
                iVar6 = (pFVar2->VertexIndices).ArrayMax;
                pFVar2 = param_1 + iVar19;
                (pFVar2->VertexIndices).AllocatorInstance.Data =
                     (pFVar1->VertexIndices).AllocatorInstance.Data;
                (pFVar2->VertexIndices).ArrayNum = iVar13;
                (pFVar2->VertexIndices).ArrayMax = iVar16;
                uVar7 = *(undefined4 *)&pFVar1->field_0x14;
                param_1[iVar19].NextColorIndex = pFVar1->NextColorIndex;
                *(undefined4 *)&param_1[iVar19].field_0x14 = uVar7;
                (pFVar1->VertexIndices).AllocatorInstance.Data = pFVar4;
                (pFVar1->VertexIndices).ArrayNum = iVar5;
                (pFVar1->VertexIndices).ArrayMax = iVar6;
                pFVar1->NextColorIndex = iVar8;
                *(undefined4 *)&pFVar1->field_0x14 = uVar11;
                iVar19 = iVar15;
              } while (iVar15 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar18 = lVar18 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar13 = iVar15 + -1;
      iVar14 = iVar19 + -2;
      iVar19 = iVar14;
      iVar15 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar16 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[iVar16].VertexIndices.ArrayNum <
          param_1[(longlong)iVar14 + 2].VertexIndices.ArrayNum) {
        iVar16 = iVar14;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar17 = param_1 + iVar16;
    if (param_1[iVar13].VertexIndices.ArrayNum <= (pFVar17->VertexIndices).ArrayNum)
    goto LAB_143b8355d;
    iVar5 = (pFVar17->VertexIndices).ArrayNum;
    iVar6 = (pFVar17->VertexIndices).ArrayMax;
    iVar14 = iVar16 * 2 + 1;
    iVar10 = param_1[iVar13].NextColorIndex;
    uVar11 = *(undefined4 *)&param_1[iVar13].field_0x14;
    pFVar1 = param_1 + iVar13;
    pFVar4 = (pFVar1->VertexIndices).AllocatorInstance.Data;
    iVar8 = (pFVar1->VertexIndices).ArrayNum;
    iVar9 = (pFVar1->VertexIndices).ArrayMax;
    pFVar1 = param_1 + iVar13;
    (pFVar1->VertexIndices).AllocatorInstance.Data = (pFVar17->VertexIndices).AllocatorInstance.Data
    ;
    (pFVar1->VertexIndices).ArrayNum = iVar5;
    (pFVar1->VertexIndices).ArrayMax = iVar6;
    uVar7 = *(undefined4 *)&pFVar17->field_0x14;
    param_1[iVar13].NextColorIndex = pFVar17->NextColorIndex;
    *(undefined4 *)&param_1[iVar13].field_0x14 = uVar7;
    (pFVar17->VertexIndices).AllocatorInstance.Data = pFVar4;
    (pFVar17->VertexIndices).ArrayNum = iVar8;
    (pFVar17->VertexIndices).ArrayMax = iVar9;
    pFVar17->NextColorIndex = iVar10;
    *(undefined4 *)&pFVar17->field_0x14 = uVar11;
    iVar13 = iVar16;
  } while( true );
}

// IntroSortInternal<Chaos::FColoringGraph::FIsland,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FColoringGraph::FIsland,`Chaos::FColoringGraph::PackIslands'::__l2::<lambda_1>_>_> @ 143b83670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Chaos::FColoringGraph::FIsland,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FColoringGraph::FIsland,_Chaos::FColoringGraph::PackIslands_::__l2::<lambda_1>_>_>
          (FIsland *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::FColoringGraph::FIsland,_private:_void___cdecl_Chaos::FColoringGraph::PackIslands(void)_::_2_::<lambda_1>_>
          param_4)

{
  FIsland *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  FIsland *pFVar15;
  FIsland *pFVar16;
  FIsland *pFVar17;
  FIsland *pFVar18;
  FIsland *pFVar19;
  FIsland *pFVar20;
  FIsland **ppFVar21;
  float fVar22;
  undefined1 auStack_378 [48];
  FIsland *local_348;
  FIsland *local_338;
  FIsland *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar22;
    memset(local_320,0,0x2e8);
    ppFVar21 = &local_338;
    do {
      pFVar15 = ppFVar21[1];
      pFVar20 = *ppFVar21;
      pFVar1 = ppFVar21[2];
      local_348._0_4_ = (int)pFVar1;
      iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar20) / 0x18) + 1;
      pFVar19 = pFVar20;
      if ((int)local_348 != 0) {
LAB_143b83740:
        if (8 < iVar14) {
          iVar6 = (pFVar19->VertexIndices).ArrayNum;
          iVar7 = (pFVar19->VertexIndices).ArrayMax;
          pFVar17 = pFVar15 + 1;
          iVar14 = iVar14 / 2;
          pFVar20 = pFVar19 + iVar14;
          pFVar2 = (pFVar20->VertexIndices).AllocatorInstance.Data;
          iVar9 = (pFVar20->VertexIndices).ArrayNum;
          iVar10 = (pFVar20->VertexIndices).ArrayMax;
          iVar11 = pFVar19[iVar14].NextColorIndex;
          uVar12 = *(undefined4 *)&pFVar19[iVar14].field_0x14;
          pFVar20 = pFVar19 + iVar14;
          (pFVar20->VertexIndices).AllocatorInstance.Data =
               (pFVar19->VertexIndices).AllocatorInstance.Data;
          (pFVar20->VertexIndices).ArrayNum = iVar6;
          (pFVar20->VertexIndices).ArrayMax = iVar7;
          uVar8 = *(undefined4 *)&pFVar19->field_0x14;
          pFVar19[iVar14].NextColorIndex = pFVar19->NextColorIndex;
          *(undefined4 *)&pFVar19[iVar14].field_0x14 = uVar8;
          (pFVar19->VertexIndices).AllocatorInstance.Data = pFVar2;
          (pFVar19->VertexIndices).ArrayNum = iVar9;
          (pFVar19->VertexIndices).ArrayMax = iVar10;
          pFVar19->NextColorIndex = iVar11;
          *(undefined4 *)&pFVar19->field_0x14 = uVar12;
          pFVar20 = pFVar19;
LAB_143b83790:
          pFVar16 = pFVar20;
          pFVar20 = pFVar16 + 1;
          if (pFVar20 <= pFVar15) goto code_r0x000143b83799;
          goto LAB_143b837a3;
        }
        for (; pFVar20 = pFVar19, pFVar1 = pFVar19, pFVar19 < pFVar15; pFVar15 = pFVar15 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar15) {
            if ((pFVar1->VertexIndices).ArrayNum < (pFVar20->VertexIndices).ArrayNum) {
              pFVar20 = pFVar1;
            }
          }
          pFVar2 = (pFVar20->VertexIndices).AllocatorInstance.Data;
          iVar7 = (pFVar20->VertexIndices).ArrayNum;
          iVar9 = (pFVar20->VertexIndices).ArrayMax;
          iVar10 = pFVar20->NextColorIndex;
          uVar12 = *(undefined4 *)&pFVar20->field_0x14;
          iVar14 = (pFVar15->VertexIndices).ArrayNum;
          iVar6 = (pFVar15->VertexIndices).ArrayMax;
          (pFVar20->VertexIndices).AllocatorInstance.Data =
               (pFVar15->VertexIndices).AllocatorInstance.Data;
          (pFVar20->VertexIndices).ArrayNum = iVar14;
          (pFVar20->VertexIndices).ArrayMax = iVar6;
          uVar8 = *(undefined4 *)&pFVar15->field_0x14;
          pFVar20->NextColorIndex = pFVar15->NextColorIndex;
          *(undefined4 *)&pFVar20->field_0x14 = uVar8;
          (pFVar15->VertexIndices).AllocatorInstance.Data = pFVar2;
          (pFVar15->VertexIndices).ArrayNum = iVar7;
          (pFVar15->VertexIndices).ArrayMax = iVar9;
          pFVar15->NextColorIndex = iVar10;
          *(undefined4 *)&pFVar15->field_0x14 = uVar12;
        }
        goto LAB_143b838c5;
      }
LAB_143b838b6:
      local_348 = pFVar1;
      HeapSortInternal<Chaos::FColoringGraph::FIsland,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FColoringGraph::FIsland,_Chaos::FColoringGraph::PackIslands_::__l2::<lambda_1>_>_>
                (pFVar20,iVar14,param_3,param_4);
LAB_143b838c5:
      ppFVar21 = ppFVar21 + -3;
    } while (&local_338 <= ppFVar21);
  }
  return;
code_r0x000143b83799:
  if ((pFVar19->VertexIndices).ArrayNum <= pFVar16[1].VertexIndices.ArrayNum) goto LAB_143b83790;
LAB_143b837a3:
  do {
    pFVar18 = pFVar17;
    pFVar17 = pFVar18 + -1;
    if (pFVar17 <= pFVar19) break;
  } while (pFVar18[-1].VertexIndices.ArrayNum <= (pFVar19->VertexIndices).ArrayNum);
  pFVar2 = (pFVar17->VertexIndices).AllocatorInstance.Data;
  uVar3 = pFVar18[-1].VertexIndices.ArrayNum;
  uVar4 = pFVar18[-1].VertexIndices.ArrayMax;
  if (pFVar20 <= pFVar17) {
    pFVar5 = (pFVar20->VertexIndices).AllocatorInstance.Data;
    iVar14 = pFVar16[1].VertexIndices.ArrayNum;
    iVar6 = pFVar16[1].VertexIndices.ArrayMax;
    iVar7 = pFVar16[1].NextColorIndex;
    uVar12 = *(undefined4 *)&pFVar16[1].field_0x14;
    (pFVar20->VertexIndices).AllocatorInstance.Data = pFVar2;
    pFVar16[1].VertexIndices.ArrayNum = uVar3;
    pFVar16[1].VertexIndices.ArrayMax = uVar4;
    uVar8 = *(undefined4 *)&pFVar18[-1].field_0x14;
    pFVar16[1].NextColorIndex = pFVar18[-1].NextColorIndex;
    *(undefined4 *)&pFVar16[1].field_0x14 = uVar8;
    (pFVar17->VertexIndices).AllocatorInstance.Data = pFVar5;
    pFVar18[-1].VertexIndices.ArrayNum = iVar14;
    pFVar18[-1].VertexIndices.ArrayMax = iVar6;
    pFVar18[-1].NextColorIndex = iVar7;
    *(undefined4 *)&pFVar18[-1].field_0x14 = uVar12;
    goto LAB_143b83790;
  }
  pFVar5 = (pFVar19->VertexIndices).AllocatorInstance.Data;
  iVar14 = (pFVar19->VertexIndices).ArrayNum;
  iVar6 = (pFVar19->VertexIndices).ArrayMax;
  iVar7 = pFVar19->NextColorIndex;
  uVar12 = *(undefined4 *)&pFVar19->field_0x14;
  lVar13 = (longlong)pFVar17 + (-0x18 - (longlong)pFVar19);
  local_348._0_4_ = (int)local_348 + -1;
  lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
  (pFVar19->VertexIndices).AllocatorInstance.Data = pFVar2;
  (pFVar19->VertexIndices).ArrayNum = uVar3;
  (pFVar19->VertexIndices).ArrayMax = uVar4;
  uVar8 = *(undefined4 *)&pFVar18[-1].field_0x14;
  pFVar19->NextColorIndex = pFVar18[-1].NextColorIndex;
  *(undefined4 *)&pFVar19->field_0x14 = uVar8;
  (pFVar17->VertexIndices).AllocatorInstance.Data = pFVar5;
  pFVar18[-1].VertexIndices.ArrayNum = iVar14;
  pFVar18[-1].VertexIndices.ArrayMax = iVar6;
  pFVar18[-1].NextColorIndex = iVar7;
  *(undefined4 *)&pFVar18[-1].field_0x14 = uVar12;
  if ((lVar13 >> 2) - (lVar13 >> 0x3f) < ((longlong)pFVar15 - (longlong)pFVar20) / 0x18) {
    if (pFVar20 < pFVar15) {
      *ppFVar21 = pFVar20;
      ppFVar21[1] = pFVar15;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar17 <= pFVar19 + 1) goto LAB_143b838c5;
    pFVar15 = pFVar18 + -2;
    pFVar20 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar17) {
      *ppFVar21 = pFVar19;
      ppFVar21[1] = pFVar18 + -2;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar15 <= pFVar20) goto LAB_143b838c5;
  }
  iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar20) / 0x18) + 1;
  pFVar19 = pFVar20;
  if ((int)local_348 == 0) goto LAB_143b838b6;
  goto LAB_143b83740;
}

// Merge<int,FIdentityFunctor,TDereferenceWrapper<int,`Chaos::FColoringGraph::Colorize'::__l2::<lambda_1>_>_> @ 143b83980

void __cdecl
AlgoImpl::
Merge<int,FIdentityFunctor,TDereferenceWrapper<int,_Chaos::FColoringGraph::Colorize_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<int,_public:_void___cdecl_Chaos::FColoringGraph::Colorize(void)_::_2_::<lambda_1>_>
          param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int local_58;
  int *piVar5;
  
  if (0 < param_2) {
    local_58 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar3 = 0;
      if (0 < param_2 - local_58) {
        uVar11 = param_2 - local_58;
        do {
          iVar8 = (uVar11 >> 1) + iVar3;
          bVar2 = `Chaos::FColoringGraph::Colorize'::__l2::<lambda_1>::operator()
                            (param_5.Predicate,param_1[param_2],
                             param_1[(longlong)iVar8 + (longlong)local_58]);
          if (!bVar2) {
            iVar3 = iVar8 + (uVar11 & 1);
          }
          uVar12 = uVar11 >> 1;
          uVar11 = uVar11 >> 1;
        } while (uVar12 != 0);
      }
      local_58 = local_58 + iVar3;
      if (param_2 <= local_58) {
        return;
      }
      uVar11 = param_3 - param_2;
      iVar3 = 0;
      iVar8 = 0;
      piVar1 = param_1 + local_58;
      if (0 < (int)uVar11) {
        do {
          uVar12 = uVar11 >> 1;
          bVar2 = `Chaos::FColoringGraph::Colorize'::__l2::<lambda_1>::operator()
                            (param_5.Predicate,
                             param_1[(longlong)(int)(uVar12 + iVar3) + (longlong)param_2],*piVar1);
          iVar8 = iVar3;
          if (bVar2) {
            iVar8 = uVar12 + iVar3 + (uVar11 & 1);
          }
          uVar11 = uVar12;
          iVar3 = iVar8;
        } while (uVar12 != 0);
      }
      iVar7 = (iVar8 - local_58) + param_2;
      iVar3 = param_2 - local_58;
      if ((iVar3 != 0) && (iVar3 < iVar7)) {
        piVar4 = piVar1 + iVar3;
        piVar9 = piVar1;
        piVar5 = piVar1 + iVar3;
        do {
          while( true ) {
            piVar6 = piVar4 + 1;
            piVar10 = piVar9 + 1;
            iVar3 = *piVar9;
            *piVar9 = *piVar4;
            *piVar4 = iVar3;
            piVar9 = piVar10;
            if (piVar6 == piVar1 + iVar7) break;
            piVar4 = piVar6;
            if (piVar10 == piVar5) {
              piVar5 = piVar6;
            }
          }
          piVar4 = piVar5;
        } while (piVar10 != piVar5);
      }
      local_58 = local_58 + 1 + iVar8;
      param_2 = param_2 + iVar8;
    } while (local_58 < param_2);
  }
  return;
}

// RotateInternal<int> @ 143b83b80

int __cdecl AlgoImpl::RotateInternal<int>(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    piVar2 = param_1 + param_3;
    piVar5 = param_1;
    piVar3 = param_1 + param_3;
    do {
      while( true ) {
        piVar4 = piVar2 + 1;
        piVar6 = piVar5 + 1;
        iVar1 = *piVar5;
        *piVar5 = *piVar2;
        *piVar2 = iVar1;
        piVar5 = piVar6;
        if (piVar4 == param_1 + param_2) break;
        piVar2 = piVar4;
        if (piVar6 == piVar3) {
          piVar3 = piVar4;
        }
      }
      piVar2 = piVar3;
    } while (piVar6 != piVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// ScatterOutputImpl<Chaos::FPBDJointCachedSolver> @ 143b83c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::Private::ScatterOutputImpl<Chaos::FPBDJointCachedSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *param_1,
          TArray<Chaos::FPBDJointCachedSolver,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,double param_4,int param_5,int param_6,
          bool param_7)

{
  FSolverBody *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  TVector<double,3> *pTVar17;
  FPBDJointCachedSolver *this;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  TVector<double,3> local_138;
  TVector<double,3> local_120;
  TVector<double,3> local_108;
  TVector<double,3> local_f0 [7];
  
  fVar13 = __real_ffc00000;
  uVar12 = _UNK_15066df7c;
  uVar11 = _UNK_15066df78;
  uVar10 = __xmm_80000000000000008000000000000000._4_4_;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  fVar8 = __real_bf800000;
  dVar7 = __real_3e45798ee0000000;
  dVar6 = __real_3ff0000000000000;
  if (param_5 < 0) {
    param_5 = 0;
  }
  iVar15 = param_3->ArrayNum;
  if (param_6 < param_3->ArrayNum) {
    iVar15 = param_6;
  }
  if (param_5 < iVar15) {
    lVar18 = (longlong)param_5 * 0xfd0;
    lVar19 = (longlong)param_5 * 4;
    do {
      uVar16 = 0;
      if (param_5 < (param_1->ContainerIndices).ArrayNum) {
        uVar16 = (uint)~param_5 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar15 = *(int *)((param_1->ContainerIndices).AllocatorInstance.Data + lVar19);
      if (param_4 <= dVar7) {
        local_138._16_8_ = 0;
        local_120._16_8_ = 0;
        local_138._0_8_ = 0;
        local_138._8_8_ = 0;
        local_120._0_8_ = 0;
        local_120._8_8_ = 0;
        FPBDJointConstraints::SetSolverResults
                  (param_1->ConstraintContainer,iVar15,&local_120,&local_138,0.0,0.0,false,false,
                   (FSolverBody *)0x0,(FSolverBody *)0x0);
      }
      else {
        uVar16 = 0;
        if (param_5 < param_2->ArrayNum) {
          uVar16 = (uint)~param_5 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this = (FPBDJointCachedSolver *)((param_2->AllocatorInstance).Data + lVar18);
        pTVar17 = FPBDJointCachedSolver::GetNetLinearImpulse(this,&local_108);
        dVar5 = dVar6 / param_4;
        dVar3 = (double)CONCAT44(*(uint *)&pTVar17->field_0xc ^ uVar12,
                                 *(uint *)&pTVar17->field_0x8 ^ uVar11) * dVar5;
        local_150._8_4_ = SUB84(dVar3,0);
        local_150._0_8_ =
             (double)CONCAT44(*(uint *)&pTVar17->field_0x4 ^ uVar10,*(uint *)pTVar17 ^ uVar9) *
             dVar5;
        local_150._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        dVar3 = dVar5 * *(double *)&pTVar17->field_0x10;
        local_140._4_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar10;
        local_140._0_4_ = SUB84(dVar3,0) ^ uVar9;
        pTVar17 = FPBDJointCachedSolver::GetNetAngularImpulse(this,local_f0);
        dVar4 = *(double *)&pTVar17->field_0x10 * dVar5;
        dVar3 = (double)CONCAT44(*(uint *)&pTVar17->field_0xc ^ uVar12,
                                 *(uint *)&pTVar17->field_0x8 ^ uVar11) * dVar5;
        local_168._8_4_ = SUB84(dVar3,0);
        local_168._0_8_ =
             (double)CONCAT44(*(uint *)&pTVar17->field_0x4 ^ uVar10,*(uint *)pTVar17 ^ uVar9) *
             dVar5;
        local_168._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_158._4_4_ = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar10;
        local_158._0_4_ = SUB84(dVar4,0) ^ uVar9;
        if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                ,0x246,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = this->SolverBodies[0].Body;
        if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                ,0x246,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar20 = fVar13;
        fVar21 = fVar8;
        if (this->bIsViolating == false) {
          fVar20 = 0.0;
          fVar21 = 0.0;
        }
        FPBDJointConstraints::SetSolverResults
                  (param_1->ConstraintContainer,iVar15,(TVector<double,3> *)local_150,
                   (TVector<double,3> *)local_168,fVar20,fVar21,this->bIsBroken,this->bIsViolating,
                   pFVar1,this->SolverBodies[1].Body);
        this->SolverBodies[0].Body = (FSolverBody *)0x0;
        this->SolverBodies[1].Body = (FSolverBody *)0x0;
      }
      param_5 = param_5 + 1;
      lVar19 = lVar19 + 4;
      lVar18 = lVar18 + 0xfd0;
      iVar15 = param_3->ArrayNum;
      if (param_6 < param_3->ArrayNum) {
        iVar15 = param_6;
      }
    } while (param_5 < iVar15);
  }
  return;
}

// ScatterOutputImpl<Chaos::FPBDJointSolver> @ 143b84000

void __cdecl
Chaos::Private::ScatterOutputImpl<Chaos::FPBDJointSolver>
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *param_1,
          TArray<Chaos::FPBDJointSolver,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,double param_4,int param_5,int param_6,
          bool param_7)

{
  FScriptContainerElement *pFVar1;
  FSolverBody *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_108 [24];
  TVector<double,3> local_f0;
  TVector<double,3> local_d8;
  TVector<double,3> local_c0 [5];
  
  dVar6 = __real_bff0000000000000;
  dVar5 = __real_3e45798ee0000000;
  dVar4 = __real_3ff0000000000000;
  if (param_5 < 0) {
    param_5 = 0;
  }
  iVar8 = param_3->ArrayNum;
  if (param_6 < param_3->ArrayNum) {
    iVar8 = param_6;
  }
  if (param_5 < iVar8) {
    uVar15 = (uint)__xmm_80000000000000008000000000000000;
    uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    lVar11 = (longlong)param_5 * 4;
    lVar10 = (longlong)param_5 * 0x4b0;
    do {
      uVar9 = 0;
      if (param_5 < (param_1->ContainerIndices).ArrayNum) {
        uVar9 = (uint)~param_5 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = *(int *)((param_1->ContainerIndices).AllocatorInstance.Data + lVar11);
      if (param_4 <= dVar5) {
        local_d8._16_8_ = 0;
        local_c0[0]._16_8_ = 0;
        local_d8._0_8_ = 0;
        local_d8._8_8_ = 0;
        local_c0[0]._0_8_ = 0;
        local_c0[0]._8_8_ = 0;
        FPBDJointConstraints::SetSolverResults
                  (param_1->ConstraintContainer,iVar8,local_c0,&local_d8,0.0,0.0,false,false,
                   (FSolverBody *)0x0,(FSolverBody *)0x0);
      }
      else {
        uVar9 = 0;
        if (param_5 < param_2->ArrayNum) {
          uVar9 = (uint)~param_5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        dVar14 = dVar4 / param_4;
        local_f0._4_4_ =
             (uint)((ulonglong)(dVar14 * *(double *)(pFVar1 + lVar10 + 0x330)) >> 0x20) ^ uVar16;
        local_f0._0_4_ = SUB84(dVar14 * *(double *)(pFVar1 + lVar10 + 0x330),0) ^ uVar15;
        local_f0._12_4_ =
             (uint)((ulonglong)(dVar14 * *(double *)(pFVar1 + lVar10 + 0x338)) >> 0x20) ^ uVar16;
        local_f0._8_4_ = SUB84(dVar14 * *(double *)(pFVar1 + lVar10 + 0x338),0) ^ uVar15;
        local_f0._20_4_ =
             (uint)((ulonglong)(dVar14 * *(double *)(pFVar1 + lVar10 + 0x340)) >> 0x20) ^ uVar16;
        local_f0._16_4_ = SUB84(dVar14 * *(double *)(pFVar1 + lVar10 + 0x340),0) ^ uVar15;
        local_108._4_4_ =
             (uint)((ulonglong)(dVar14 * *(double *)(pFVar1 + lVar10 + 0x348)) >> 0x20) ^ uVar16;
        local_108._0_4_ = SUB84(dVar14 * *(double *)(pFVar1 + lVar10 + 0x348),0) ^ uVar15;
        local_108._16_8_ = (dVar6 / param_4) * *(double *)(pFVar1 + lVar10 + 0x358);
        local_108._12_4_ =
             (uint)((ulonglong)(*(double *)(pFVar1 + lVar10 + 0x350) * dVar14) >> 0x20) ^ uVar16;
        local_108._8_4_ = SUB84(*(double *)(pFVar1 + lVar10 + 0x350) * dVar14,0) ^ uVar15;
        if ((*(longlong *)(pFVar1 + lVar10) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                               ,0x246,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FSolverBody **)(pFVar1 + lVar10);
        if ((*(longlong *)(pFVar1 + lVar10 + 0x18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                               ,0x246,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (pFVar1[lVar10 + 0x4a1] == (FScriptContainerElement)0x0) {
          fVar12 = 0.0;
          fVar13 = 0.0;
        }
        else {
          fVar13 = (float)*(double *)(pFVar1 + lVar10 + 0x368);
          fVar12 = SQRT((float)*(double *)(pFVar1 + lVar10 + 0x360));
        }
        FPBDJointConstraints::SetSolverResults
                  (param_1->ConstraintContainer,iVar8,&local_f0,(TVector<double,3> *)local_108,
                   fVar12,fVar13,(bool)pFVar1[lVar10 + 0x4a0],(bool)pFVar1[lVar10 + 0x4a1],pFVar2,
                   *(FSolverBody **)(pFVar1 + lVar10 + 0x18));
        *(undefined8 *)(pFVar1 + lVar10) = 0;
        *(undefined8 *)(pFVar1 + lVar10 + 0x18) = 0;
      }
      param_5 = param_5 + 1;
      lVar11 = lVar11 + 4;
      lVar10 = lVar10 + 0x4b0;
      iVar8 = param_3->ArrayNum;
      if (param_6 < param_3->ArrayNum) {
        iVar8 = param_6;
      }
    } while (param_5 < iVar8);
  }
  return;
}

// StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,`Chaos::FColoringGraph::Colorize'::__l2::<lambda_1>_>_> @ 143b843f0

void __cdecl
AlgoImpl::
StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,_Chaos::FColoringGraph::Colorize_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_void___cdecl_Chaos::FColoringGraph::Colorize(void)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (0 < param_2) {
    lVar6 = 0;
    iVar3 = 1;
    do {
      if ((iVar3 < param_2) &&
         (bVar2 = `Chaos::FColoringGraph::Colorize'::__l2::<lambda_1>::operator()
                            (param_4.Predicate,param_1[lVar6 + 1],param_1[lVar6]), bVar2)) {
        iVar1 = param_1[lVar6];
        param_1[lVar6] = param_1[lVar6 + 1];
        param_1[lVar6 + 1] = iVar1;
      }
      iVar3 = iVar3 + 2;
      lVar6 = lVar6 + 2;
    } while (lVar6 < param_2);
  }
  iVar3 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar3 * 2;
      iVar4 = 0;
      iVar5 = param_2;
      do {
        iVar7 = iVar5;
        if (iVar1 <= iVar5) {
          iVar7 = iVar1;
        }
        Merge<int,FIdentityFunctor,TDereferenceWrapper<int,_Chaos::FColoringGraph::Colorize_::__l2::<lambda_1>_>_>
                  (param_1 + iVar4,iVar3,iVar7,param_3,param_4);
        iVar4 = iVar4 + iVar1;
        iVar5 = iVar5 + iVar3 * -2;
      } while (iVar4 < param_2);
      iVar3 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// PMatrix<double,3,3> @ 143b844e0

PMatrix<double,3,3> * __thiscall
Chaos::PMatrix<double,3,3>::PMatrix<double,3,3>(PMatrix<double,3,3> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  return this;
}

// `scalar_deleting_destructor' @ 143b84760

void * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver>::_scalar_deleting_destructor_
          (TPBDJointContainerSolver<Chaos::FPBDJointCachedSolver> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TPBDJointContainerSolver_VFPBDJointCachedSolver_Chaos___Private_Chaos__6B_;
  pFVar1 = (this->ContainerIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b847d0

void * __thiscall
Chaos::Private::TPBDJointContainerSolver<Chaos::FPBDJointSolver>::_scalar_deleting_destructor_
          (TPBDJointContainerSolver<Chaos::FPBDJointSolver> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TPBDJointContainerSolver_VFPBDJointSolver_Chaos___Private_Chaos__6B_;
  pFVar1 = (this->ContainerIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// ExtractAngularMotion @ 143ba1a20

bool __cdecl
Chaos::ExtractAngularMotion
          (FPBDJointSettings *param_1,TVector<bool,3> *param_2,TVector<bool,3> *param_3,
          TVector<bool,3> *param_4)

{
  EJointMotionType EVar1;
  EJointMotionType EVar2;
  EJointMotionType EVar3;
  
  EVar1 = (param_1->AngularMotionTypes).field0_0x0._s_0.X;
  if (((EVar1 == Free) && ((param_1->AngularMotionTypes).field0_0x0._s_0.Y == Free)) &&
     ((param_1->AngularMotionTypes).field0_0x0._s_0.Z == Free)) {
    return false;
  }
  EVar2 = (param_1->AngularMotionTypes).field0_0x0._s_0.Y;
  EVar3 = (param_1->AngularMotionTypes).field0_0x0._s_0.Z;
  (param_2->field0_0x0)._s_0.X = EVar1 == Locked;
  (param_2->field0_0x0)._s_0.Y = EVar2 == Locked;
  (param_2->field0_0x0)._s_0.Z = EVar3 == Locked;
  EVar1 = (param_1->AngularMotionTypes).field0_0x0._s_0.Y;
  EVar2 = (param_1->AngularMotionTypes).field0_0x0._s_0.Z;
  (param_3->field0_0x0)._s_0.X = (param_1->AngularMotionTypes).field0_0x0._s_0.X == Limited;
  (param_3->field0_0x0)._s_0.Y = EVar1 == Limited;
  (param_3->field0_0x0)._s_0.Z = EVar2 == Limited;
  EVar1 = (param_1->AngularMotionTypes).field0_0x0._s_0.Y;
  EVar2 = (param_1->AngularMotionTypes).field0_0x0._s_0.Z;
  (param_4->field0_0x0)._s_0.X = (param_1->AngularMotionTypes).field0_0x0._s_0.X == Free;
  (param_4->field0_0x0)._s_0.Y = EVar1 == Free;
  (param_4->field0_0x0)._s_0.Z = EVar2 == Free;
  return true;
}

// GetJointFrame @ 143ba2250

TRigidTransform<double,3> * __cdecl
Chaos::Private::GetJointFrame(FPBDJointConstraints *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FPBDJointSettings *pFVar3;
  TRigidTransform<double,3> *pTVar4;
  int iVar5;
  
  if (param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                       ,0x1b,L"");
    if (bVar2) {
code_r0x000143ba22c1:
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRigidTransform<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  else if ((1 < param_3) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleIndex < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                              ,0x1c,L""), bVar2)) goto code_r0x000143ba22c1;
  iVar5 = 1 - param_3;
  pFVar3 = FPBDJointConstraints::GetConstraintSettings(param_1,param_2);
  if (iVar5 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x90,L"");
    if (bVar2) {
code_r0x000143ba232a:
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRigidTransform<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  else if ((1 < iVar5) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < NumElements",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                              ,0x91,L""), bVar2)) goto code_r0x000143ba232a;
  return (pFVar3->ConnectorTransforms).V + iVar5;
}

// GetJointIsViolating @ 143ba2360

bool __cdecl
Chaos::Private::GetJointIsViolating
          (FPBDJointSettings *param_1,double param_2,double param_3,int param_4,int param_5)

{
  double dVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_4 == param_5 + -1) {
    dVar1 = param_1->LinearViolationCallbackThreshold;
    if (((dVar1 == __real_47efffffe0000000) || (bVar2 = dVar1 * dVar1 < param_2, !bVar2)) &&
       (param_1->AngularViolationCallbackThreshold != __real_47efffffe0000000)) {
      return param_1->AngularViolationCallbackThreshold < param_3 * __real_404ca5dc1a63c1f8;
    }
  }
  return bVar2;
}

// GetJointIterationStiffness @ 143ba23c0

double __cdecl
Chaos::Private::GetJointIterationStiffness(FPBDJointSolverSettings *param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = param_1->MaxSolverStiffness;
  if (param_1->NumIterationsAtMaxSolverStiffness < param_3) {
    dVar1 = (double)param_2 / (double)(param_3 - param_1->NumIterationsAtMaxSolverStiffness);
    if (__real_3ff0000000000000 <= dVar1) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    dVar2 = dVar1 * (dVar2 - param_1->MinSolverStiffness) + param_1->MinSolverStiffness;
  }
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return dVar2;
}

// GetJointParticle @ 143ba2430

TGeometryParticleHandleImp<double,3,1> * __cdecl
Chaos::Private::GetJointParticle(FPBDJointConstraints *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  int iVar5;
  
  if (param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                       ,0x12,L"");
    if (bVar2) {
code_r0x000143ba24a1:
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  else if ((1 < param_3) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleIndex < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointContainerSolver.cpp"
                              ,0x13,L""), bVar2)) goto code_r0x000143ba24a1;
  iVar5 = 1 - param_3;
  pTVar3 = FPBDJointConstraints::GetConstrainedParticles(param_1,param_2);
  if (iVar5 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x90,L"");
    if (bVar2) {
code_r0x000143ba250a:
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  else if ((1 < iVar5) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < NumElements",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                              ,0x91,L""), bVar2)) goto code_r0x000143ba250a;
  return pTVar3->V[iVar5];
}

// GetJointShockPropagationInvMassScale @ 143ba2530

double __cdecl
Chaos::Private::GetJointShockPropagationInvMassScale
          (FConstraintSolverBody *param_1,FConstraintSolverBody *param_2,
          FPBDJointSolverSettings *param_3,FPBDJointSettings *param_4,int param_5,int param_6)

{
  double dVar1;
  
  if ((((param_4->bShockPropagationEnabled != false) &&
       (param_6 - param_3->NumShockPropagationIterations <= param_5)) &&
      (__real_00800000 <
       (param_1->State).ShockPropagationScale * (param_1->State).InvMScale *
       (param_1->Body->State).InvM)) &&
     (__real_00800000 <
      (param_2->State).ShockPropagationScale * (param_2->State).InvMScale *
      (param_2->Body->State).InvM)) {
    dVar1 = FPBDJointUtilities::GetShockPropagationInvMassScale(param_3,param_4);
    return dVar1;
  }
  return __real_3ff0000000000000;
}

// GetJointShouldBreak @ 143ba25a0

bool __cdecl
Chaos::Private::GetJointShouldBreak
          (FPBDJointSettings *param_1,double param_2,TVector<double,3> *param_3,
          TVector<double,3> *param_4)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_1->LinearBreakForce;
  bVar2 = false;
  if (((dVar1 == __real_47efffffe0000000) ||
      (bVar2 = dVar1 * dVar1 <
               (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
                *(double *)param_3 * *(double *)param_3 +
               *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) /
               (param_2 * param_2 * param_2 * param_2), !bVar2)) &&
     (dVar1 = param_1->AngularBreakTorque, dVar1 != __real_47efffffe0000000)) {
    bVar2 = dVar1 * dVar1 <
            (*(double *)&param_4->field_0x8 * *(double *)&param_4->field_0x8 +
             *(double *)param_4 * *(double *)param_4 +
            *(double *)&param_4->field_0x10 * *(double *)&param_4->field_0x10) /
            (param_2 * param_2 * param_2 * param_2);
  }
  return bVar2;
}

// NormalizeSafe @ 143bab8d0

bool __cdecl Chaos::Utilities::NormalizeSafe(TVector<double,3> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  dVar4 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (param_2 < dVar4) {
    dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
    *(double *)param_1 = dVar1 * dVar4;
    *(double *)&param_1->field_0x8 = dVar2 * dVar4;
    *(double *)&param_1->field_0x10 = dVar3 * dVar4;
    return true;
  }
  return false;
}

// `dynamic_atexit_destructor_for_'CVarChaosJointAngularVelocityThresholdToApplyRestitution'' @ 1503651e0

void __cdecl
_dynamic_atexit_destructor_for__CVarChaosJointAngularVelocityThresholdToApplyRestitution__(void)

{
  CVarChaosJointAngularVelocityThresholdToApplyRestitution._0_8_ = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosJointAngularVelocityThresholdToApplyRestitution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosJointDegenerateRotationLimit'' @ 150365200

void __cdecl _dynamic_atexit_destructor_for__CVarChaosJointDegenerateRotationLimit__(void)

{
  CVarChaosJointDegenerateRotationLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosJointDegenerateRotationLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosJointDisableSoftLimits'' @ 150365220

void __cdecl _dynamic_atexit_destructor_for__CVarChaosJointDisableSoftLimits__(void)

{
  CVarChaosJointDisableSoftLimits._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosJointDisableSoftLimits);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosJointISPCEnabled'' @ 150365240

void __cdecl _dynamic_atexit_destructor_for__CVarChaosJointISPCEnabled__(void)

{
  CVarChaosJointISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosJointISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosJointLinearVelocityThresholdToApplyRestitution'' @ 150365260

void __cdecl
_dynamic_atexit_destructor_for__CVarChaosJointLinearVelocityThresholdToApplyRestitution__(void)

{
  CVarChaosJointLinearVelocityThresholdToApplyRestitution._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosJointLinearVelocityThresholdToApplyRestitution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosJointMultiDimension'' @ 150365280

void __cdecl _dynamic_atexit_destructor_for__CVarChaosJointMultiDimension__(void)

{
  CVarChaosJointMultiDimension._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosJointMultiDimension);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosJointPlasticityClampToLimits'' @ 1503652a0

void __cdecl _dynamic_atexit_destructor_for__CVarChaosJointPlasticityClampToLimits__(void)

{
  CVarChaosJointPlasticityClampToLimits._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosJointPlasticityClampToLimits);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosJointVelProjectionScale'' @ 1503652c0

void __cdecl _dynamic_atexit_destructor_for__CVarChaosJointVelProjectionScale__(void)

{
  CVarChaosJointVelProjectionScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosJointVelProjectionScale);
  return;
}

// `dynamic_atexit_destructor_for_'FIspcPerParticleDampVelocityAutomationTestInstance'' @ 1503652e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIspcPerParticleDampVelocityAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FIspcPerParticleDampVelocityAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogChaosJoint'' @ 150365300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChaosJoint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChaosJoint);
  return;
}

