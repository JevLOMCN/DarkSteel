// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 62

// GetStatId @ 1438bcaa0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_FlushPendingOperations,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::FStat_STAT_FlushPendingOperations,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_FlushPendingOperations");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FClusterUnionManager::FlushPendingOperations","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143961760

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::Collisions::FStat_STAT_UpdateLevelsetAll,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::Collisions::FStat_STAT_UpdateLevelsetAll,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_UpdateLevelsetAll");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"TPBDCollisionConstraints::UpdateLevelsetAll","STATGROUP_ChaosWide",
                       "STATCAT_Advanced",L"ChaosWide",false,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143961810

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::Collisions::FStat_STAT_UpdateLevelsetFindParticles,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::Collisions::FStat_STAT_UpdateLevelsetFindParticles,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_UpdateLevelsetFindParticles");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"TPBDCollisionConstraints::UpdateLevelsetFindParticles",
                       "STATGROUP_ChaosWide","STATCAT_Advanced",L"ChaosWide",false,true,ST_int64,
                       true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1439618c0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::Collisions::FStat_STAT_UpdateLevelsetPartial,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::Collisions::FStat_STAT_UpdateLevelsetPartial,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_UpdateLevelsetPartial");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"TPBDCollisionConstraints::UpdateLevelsetPartial","STATGROUP_ChaosWide",
                       "STATCAT_Advanced",L"ChaosWide",false,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143961970

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::Collisions::FStat_STAT_UpdateLevelsetSignedDistance,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::Collisions::FStat_STAT_UpdateLevelsetSignedDistance,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_UpdateLevelsetSignedDistance");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"TPBDCollisionConstraints::UpdateLevelsetSignedDistance",
                       "STATGROUP_ChaosWide","STATCAT_Advanced",L"ChaosWide",false,true,ST_int64,
                       true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143a6ffa0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::Private::FStat_STAT_BuildConvexTriboxes,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::Private::FStat_STAT_BuildConvexTriboxes,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_BuildConvexTriboxes");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Collisions::BuildConvexTriboxes",
                       "STATGROUP_ChaosCollision","STATCAT_Advanced",L"ChaosCollision",true,true,
                       ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143a70050

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosDeformableSolver_InitializeSelfCollisionVariables,1>::
GetStatId(FThreadSafeStaticStatInner<FStat_STAT_ChaosDeformableSolver_InitializeSelfCollisionVariables,1>
          *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,
                            "STAT_ChaosDeformableSolver_InitializeSelfCollisionVariables");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Chaos.Deformable.Solver.InitializeSelfCollisionVariables","STATGROUP_Chaos"
                       ,"STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143a70100

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosDeformableSolver_InitializeTetrahedralOrTriangleConstraint,1>
::GetStatId(FThreadSafeStaticStatInner<FStat_STAT_ChaosDeformableSolver_InitializeTetrahedralOrTriangleConstraint,1>
            *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,
                            "STAT_ChaosDeformableSolver_InitializeTetrahedralOrTriangleConstraint");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Chaos.Deformable.Solver.InitializeTetrahedralOrTriangleConstraint",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143b22080

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_MinEvolution_Integrate,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::FStat_STAT_MinEvolution_Integrate,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_MinEvolution_Integrate");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"MinEvolution::Integrate",
                       "STATGROUP_ChaosMinEvolution","STATCAT_Advanced",L"ChaosMinEvolution",true,
                       true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143b68870

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_Evolution_Gather_Prepare,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_Evolution_Gather_Prepare,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_Gather_Prepare");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::Gather::Prepare","STATGROUP_ChaosConstraintDetails"
                       ,"STATCAT_Advanced",L"ChaosConstraintDetails",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143c698a0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_AABBTreeTimeSliceSetup");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"AABBTreeTimeSliceSetup",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143c69950

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDClearCollidedArray,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDClearCollidedArray,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosPBDClearCollidedArray");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Chaos PBD Clear Collided Array",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143c69a00

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDCollisionKinematicUpdate,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDCollisionKinematicUpdate,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosPBDCollisionKinematicUpdate");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Chaos PBD Collider Kinematic Update","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143c69ab0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDIterationLoop,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDIterationLoop,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosPBDIterationLoop");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Chaos PBD Iteration Loop",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143c69b60

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDPreIterationUpdates,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDPreIterationUpdates,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosPBDPreIterationUpdates");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Chaos PBD Pre Iteration Updates",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143c69c10

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDVAdvanceTime,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDVAdvanceTime,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosPBDVAdvanceTime");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Chaos PBD Advance Time",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143c69cc0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosXPBDConstraintsInit,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosXPBDConstraintsInit,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosXPBDConstraintsInit");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Chaos XPBD Constraints Init",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143ca02a0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_CreateClusterParticleFromClusterChildren,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::FStat_STAT_CreateClusterParticleFromClusterChildren,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_CreateClusterParticleFromClusterChildren");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"TPBDRigidClustering<>::CreateClusterParticleFromClusterChildren",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143ca0350

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_UpdateGeometry");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"TPBDRigidClustering<>::UpdateGeometry","STATGROUP_Chaos","STATCAT_Advanced"
                       ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143ca0400

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_CopyPoints,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_CopyPoints,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_UpdateGeometry_CopyPoints");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"TPBDRigidClustering<>::UpdateGeometry_CopyPoints","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143ca04b0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_GatherObjects,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_GatherObjects,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_UpdateGeometry_GatherObjects");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"TPBDRigidClustering<>::UpdateGeometry_GatherObjects","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143ca0560

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_GatherPoints,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_GatherPoints,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_UpdateGeometry_GatherPoints");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"TPBDRigidClustering<>::UpdateGeometry_GatherPoints","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143ca0610

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<`Chaos::UpdateGeometry'::__l41::FStat_SpatialBVH,1>::GetStatId
          (void *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"SpatialBVH");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      (this,*pFVar1,L"SpatialBVH","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                       ,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d566e0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_AccelerationStructureTimeSliceCopy,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::FStat_STAT_AccelerationStructureTimeSliceCopy,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_AccelerationStructureTimeSliceCopy");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"AccelerationStructureTimeSliceCopy","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56790

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_AdvanceOneTimeStep,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_AdvanceOneTimeStep,1> *this
          )

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_AdvanceOneTimeStep");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::AdvanceOneTimeStep","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56840

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_BuildGroups,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_BuildGroups,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_BuildGroups");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::BuildGroups","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d568f0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCD,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCD,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_CCD");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"FPBDRigidsEvolutionGBF::CCD",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d569a0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCDCorrection,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCDCorrection,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_CCDCorrection");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::CCDCorrection","STATGROUP_Chaos","STATCAT_Advanced"
                       ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56a50

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCDModifierCallback,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCDModifierCallback,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_CCDModifierCallback");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::CCDModifierCallback","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56b00

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CollisionModifierCallback,1>::
GetStatId(FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CollisionModifierCallback,1>
          *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_CollisionModifierCallback");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::CollisionModifierCallback","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56bb0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_ComputeIntermediateSpatialAcceleration,1>
::GetStatId(FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_ComputeIntermediateSpatialAcceleration,1>
            *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_ComputeIntermediateSpatialAcceleration");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::ComputeIntermediateSpatialAcceleration",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56c60

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CreateConstraintGraph,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CreateConstraintGraph,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_CreateConstraintGraph");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::CreateConstraintGraph","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56d10

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CreateIslands,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CreateIslands,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_CreateIslands");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::CreateIslands","STATGROUP_Chaos","STATCAT_Advanced"
                       ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56dc0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_DetectCollisions,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_DetectCollisions,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_DetectCollisions");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::DetectCollisions","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56e70

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_InertiaConditioning,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_InertiaConditioning,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_InertiaConditioning");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::InertiaConditioning","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56f20

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_MidPhaseModifierCallback,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_MidPhaseModifierCallback,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_MidPhaseModifierCallback");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::MidPhaseModifierCallback","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d56fd0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_ParallelSolve,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_ParallelSolve,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_ParallelSolve");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::ParallelSolve","STATGROUP_Chaos","STATCAT_Advanced"
                       ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d57080

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostDetectCollisionsCallback,1>::
GetStatId(FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostDetectCollisionsCallback,1>
          *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_PostDetectCollisionsCallback");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::PostDetectCollisionsCallback","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d57130

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostIntegrateCallback,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostIntegrateCallback,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_PostIntegrateCallback");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::PostIntegrateCallback","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d571e0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostSolveCallback,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostSolveCallback,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_PostSolveCallback");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::PostSolveCallback","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d57290

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PreIntegrateCallback,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PreIntegrateCallback,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_PreIntegrateCallback");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::PreIntegrateCallback","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d57340

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PreSolveCallback,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PreSolveCallback,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_PreSolveCallback");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::PreSolveCallback","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d573f0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PruneCollisions,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PruneCollisions,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_PruneCollisions");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::PruneCollisions","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d574a0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_SavePostSolve,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_SavePostSolve,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_SavePostSolve");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::SaveParticlePostSolve","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d57550

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<`Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl'::__l14::FStat_STAT_Evolution_StepSolver_IntegrateKinematicSpatial,1>
::GetStatId(void *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_StepSolver_IntegrateKinematicSpatial");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      (this,*pFVar1,L"STAT_Evolution_StepSolver_IntegrateKinematicSpatial",
                       "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 143d57600

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_TransferJointCollisions,1>::GetStatId
          (FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_TransferJointCollisions,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_Evolution_TransferJointCollisions");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FPBDRigidsEvolutionGBF::TransferJointCollisions","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408d7d0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumActiveConstraints,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumActiveConstraints,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumActiveConstraints");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumActiveConstraints",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408d880

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumBroadPhasePairs,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumBroadPhasePairs,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumBroadPhasePairs");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumBroadPhasePairs",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408d930

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumCharacterGroundConstraints,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumCharacterGroundConstraints,1> *this
          )

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumCharacterGroundConstraints");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumCharacterGroundConstraints",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408d9e0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumContacts,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumContacts,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumContacts");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumContacts",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408da90

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumGeometryCollectionBodies,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumGeometryCollectionBodies,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumGeometryCollectionBodies");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumGeomCollBodies",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408db40

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumIslands,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumIslands,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumIslands");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumIslands",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408dbf0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumJoints,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumJoints,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumJoints");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumJoints",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408dca0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumMidPhases,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumMidPhases,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumMidPhases");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumMidPhases",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408dd50

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumMovingBodies,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumMovingBodies,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumMovingBodies");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumMovingBodies",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408de00

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumPositionIterations,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumPositionIterations,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumPositionIterations");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumPositionIterations",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408deb0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumRestoredManifoldPoints,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumRestoredManifoldPoints,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumRestoredManifoldPoints");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumRestoredManifoldPoints",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408df60

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumStaticBodies,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumStaticBodies,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumStaticBodies");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumStaticBodies",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14408e010

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumVelocityIterations,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ChaosCounter_NumVelocityIterations,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ChaosCounter_NumVelocityIterations");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"NumVelocityIterations",
                       "STATGROUP_ChaosCounters","STATCAT_Advanced",L"ChaosCounters",true,true,
                       ST_int64,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1440e5b30

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<Chaos::FStat_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState,1>::
GetStatId(FThreadSafeStaticStatInner<Chaos::FStat_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState,1>
          *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ClusterUnionPhysicsProxyPullFromPhysicsState");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"FClusterUnionPhysicsProxy::PullFromPhysicsState","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1440e5be0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ForceUpdateField_AngularTorque,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ForceUpdateField_AngularTorque,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ForceUpdateField_AngularTorque");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"[Field Update] AngularTorque",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1440e5c90

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_ForceUpdateField_LinearForce,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_ForceUpdateField_LinearForce,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_ForceUpdateField_LinearForce");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"[Field Update] LinearForce",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

