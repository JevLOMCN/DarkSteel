// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 110

// DragName'' @ 140f72040

void __cdecl `dynamic_initializer_for_'Chaos::Softs::FVelocityAndPressureField::DragName__(void)

{
  ::FName::FName(&Chaos::Softs::FVelocityAndPressureField::DragName,L"Drag");
  return;
}

// FluidDensityName'' @ 140f72060

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FVelocityAndPressureField::FluidDensityName__(void)

{
  ::FName::FName(&Chaos::Softs::FVelocityAndPressureField::FluidDensityName,L"FluidDensity");
  return;
}

// LiftName'' @ 140f72080

void __cdecl `dynamic_initializer_for_'Chaos::Softs::FVelocityAndPressureField::LiftName__(void)

{
  ::FName::FName(&Chaos::Softs::FVelocityAndPressureField::LiftName,L"Lift");
  return;
}

// OuterDragName'' @ 140f720a0

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FVelocityAndPressureField::OuterDragName__(void)

{
  ::FName::FName(&Chaos::Softs::FVelocityAndPressureField::OuterDragName,L"OuterDrag");
  return;
}

// OuterLiftName'' @ 140f720c0

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FVelocityAndPressureField::OuterLiftName__(void)

{
  ::FName::FName(&Chaos::Softs::FVelocityAndPressureField::OuterLiftName,L"OuterLift");
  return;
}

// PressureName'' @ 140f720e0

void __cdecl `dynamic_initializer_for_'Chaos::Softs::FVelocityAndPressureField::PressureName__(void)

{
  ::FName::FName(&Chaos::Softs::FVelocityAndPressureField::PressureName,L"Pressure");
  return;
}

// TurbulenceRatioName'' @ 140f72100

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FVelocityAndPressureField::TurbulenceRatioName__(void)

{
  ::FName::FName(&Chaos::Softs::FVelocityAndPressureField::TurbulenceRatioName,L"TurbulenceRatio");
  return;
}

// WindVelocityName'' @ 140f72120

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FVelocityAndPressureField::WindVelocityName__(void)

{
  ::FName::FName(&Chaos::Softs::FVelocityAndPressureField::WindVelocityName,L"WindVelocity");
  return;
}

// WindVelocitySpaceName'' @ 140f72140

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FVelocityAndPressureField::WindVelocitySpaceName__(void)

{
  ::FName::FName(&Chaos::Softs::FVelocityAndPressureField::WindVelocitySpaceName,
                 L"WindVelocitySpace");
  return;
}

// `dynamic_initializer_for_'CVarChaosVelocityFieldISPCEnabled'' @ 140f72160

void __cdecl _dynamic_initializer_for__CVarChaosVelocityFieldISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosVelocityFieldISPCEnabled,L"p.Chaos.VelocityField.ISPC",
             &bChaos_VelocityField_ISPC_Enabled,
             L"Whether to use ISPC optimizations in velocity field calculations",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosVelocityFieldISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaosVelocityFieldMaxVelocity'' @ 140f721b0

void __cdecl
Chaos::Softs::Private::_dynamic_initializer_for__CVarChaosVelocityFieldMaxVelocity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosVelocityFieldMaxVelocity,L"p.Chaos.VelocityField.MaxVelocity",
             &VelocityFieldMaxVelocity,
             L"The maximum relative velocity to process the aerodynamics forces with.",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosVelocityFieldMaxVelocity__);
  return;
}

// `dynamic_initializer_for_'CVarChaosWeightedLatticePhiAndNormalBatchSize'' @ 140f72200

void __cdecl Chaos::_dynamic_initializer_for__CVarChaosWeightedLatticePhiAndNormalBatchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosWeightedLatticePhiAndNormalBatchSize,
             L"p.Chaos.WeightedLattice.PhiAndNormal.ParallelBatchSize",
             &Chaos_WeightedLattice_PhiAndNormalBatchSize,
             L"Parallel batch size PhiAndNormal queries",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosWeightedLatticePhiAndNormalBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarPerPolySupport'' @ 140f72250

void __cdecl Chaos::_dynamic_initializer_for__CVarPerPolySupport__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPerPolySupport,L"p.Chaos.TriMeshPerPolySupport",&TriMeshPerPolySupport,
             L"Disabling removes memory cost of vertex map on triangle mesh. Note: Changing at runtime will not work."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPerPolySupport__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 140f722a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 140f72330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 140f723c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 140f72450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AddConvexToTribox'' @ 140f724e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::Private::_dynamic_initializer_for__StatPtr_STAT_AddConvexToTribox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AddConvexToTribox ==
      (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_AddConvexToTribox>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AddConvexToTribox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddConvexToTribox,*pFVar1,
               L"Collisions::AddConvex","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 140f72570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 140f72600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 140f72690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 140f72720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 140f727b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 140f72840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 140f728d0

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

// `dynamic_initializer_for_'StatPtr_STAT_MakeTriboxConvex'' @ 140f72960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::Private::_dynamic_initializer_for__StatPtr_STAT_MakeTriboxConvex__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MakeTriboxConvex ==
      (FThreadSafeStaticStat<Chaos::Private::FStat_STAT_MakeTriboxConvex>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_MakeTriboxConvex");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MakeTriboxConvex,*pFVar1,
               L"Collisions::MakeConvex","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 140f729f0

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 140f72a80

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 140f72b10

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

// operator<<<unsigned_short,3> @ 143e64820

FArchive * __cdecl
Chaos::operator<<<unsigned_short,3>(FArchive *param_1,TVector<unsigned_short,3> *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)param_2);
    }
  }
  else {
    (param_2->field0_0x0)._s_0.X = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &(param_2->field0_0x0)._s_0.Y;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &(param_2->field0_0x0)._s_0.Z;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// TDefaultAABBTreeStorageTraits<int>_> @ 143e64950

FArchive * __cdecl
Chaos::operator<<<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::
TDefaultAABBTreeStorageTraits<int>_>
          (FChaosArchive *param_1,
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *param_2)

{
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  ::Serialize(param_2,param_1);
  return (FArchive *)param_1;
}

// TTransform<double>,TSizedDefaultAllocator<32>_> @ 143e64980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FChaosArchive * __cdecl
Chaos::operator<<<UE::Math::TTransform<double>_TSizedDefaultAllocator<32>_>
          (FChaosArchive *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FChaosArchive *pFVar5;
  uint uVar6;
  TQuat<double> *pTVar7;
  longlong lVar8;
  uint local_res8 [2];
  
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 0x60,(longlong)param_2->ArrayMax * 0x60);
  plVar1 = (longlong *)param_1->_padding_;
  local_res8[0] = param_2->ArrayNum;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
  }
  if (param_2->ArrayMax < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_res8[0],&param_2->AllocatorInstance,param_2->ArrayNum,
               &param_2->ArrayMax);
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar6 = 0;
  if (0 < (int)local_res8[0]) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FChaosArchive *)(*pcVar2)();
        return pFVar5;
      }
      pTVar7 = (TQuat<double> *)((param_2->AllocatorInstance).Data + lVar8);
      UE::Math::operator<<((FArchive *)param_1,pTVar7);
      UE::Math::operator<<((FArchive *)param_1,(TVector<double> *)(pTVar7 + 1));
      UE::Math::operator<<((FArchive *)param_1,(TVector<double> *)(pTVar7 + 2));
      if ((param_1->_padding_ & 1) != 0) {
        pTVar7[1].X = pTVar7[1].X;
        pTVar7[1].Y = pTVar7[1].Y;
        pTVar7[1].Z = pTVar7[1].Z;
        pTVar7[1].W = 0.0;
        pTVar7[2].X = pTVar7[2].X;
        pTVar7[2].Y = pTVar7[2].Y;
        pTVar7[2].Z = pTVar7[2].Z;
        pTVar7[2].W = 0.0;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x60;
    } while ((int)uVar6 < (int)local_res8[0]);
  }
  return param_1;
}

// FNode,TSizedDefaultAllocator<32>_> @ 143e64b50

FChaosArchive * __cdecl
Chaos::operator<<<Chaos::FTrimeshBVH::FNode_TSizedDefaultAllocator<32>_>
          (FChaosArchive *param_1,
          TArray<Chaos::FTrimeshBVH::FNode,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FChaosArchive *pFVar8;
  uint uVar9;
  ulong64 uVar10;
  FScriptContainerElement *_Dst;
  uint uVar11;
  uint uVar12;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  piVar2 = &param_2->ArrayNum;
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)*piVar2 * 0x50,(longlong)param_2->ArrayMax * 0x50);
  plVar3 = (longlong *)param_1->_padding_;
  local_res8[0] = *piVar2;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar10 = (ulong64)local_res8[0];
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  if (*piVar1 < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,local_res8[0],&param_2->AllocatorInstance,*piVar2,piVar1);
    uVar10 = (ulong64)local_res8[0];
  }
  iVar7 = *piVar2;
  uVar11 = (uint)uVar10;
  if (iVar7 < (int)uVar11) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,uVar11 - iVar7,&param_2->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<Chaos::FTrimeshBVH::FNode,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x50,uVar11 - iVar7);
    uVar9 = local_res8[0];
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    uVar9 = uVar11;
    if ((int)uVar11 < iVar7) {
      uVar12 = iVar7 - uVar11;
      if (((int)(uVar12 | uVar11) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), uVar9 = local_res8[0], bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FChaosArchive *)(*pcVar4)();
        return pFVar8;
      }
      if (uVar12 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x50;
        iVar7 = (*piVar2 - uVar12) - uVar11;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar12 * 0x50,(longlong)iVar7 * 0x50);
        }
        *piVar2 = *piVar2 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,&param_2->AllocatorInstance,*piVar2,piVar1);
        uVar9 = local_res8[0];
      }
    }
  }
  uVar11 = 0;
  if (0 < (int)uVar9) {
    do {
      uVar9 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FChaosArchive *)(*pcVar4)();
        return pFVar8;
      }
      Chaos::FTrimeshBVH::FChildData::Serialize
                ((FChildData *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x50),
                 (FArchive *)param_1);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_res8[0]);
  }
  return param_1;
}

// FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_> @ 143e64dc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FChaosArchive * __cdecl
Chaos::operator<<<Chaos::FWeightedLatticeInfluenceData_TSizedDefaultAllocator<32>_>
          (FChaosArchive *param_1,
          TArray<Chaos::FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FChaosArchive *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint local_res8 [2];
  
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 0x4c,(longlong)param_2->ArrayMax * 0x4c);
  plVar1 = (longlong *)param_1->_padding_;
  local_res8[0] = param_2->ArrayNum;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
  }
  if (param_2->ArrayMax < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,local_res8[0],&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax
              );
  }
  TArray<Chaos::FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar13 = 0;
  if (0 < (int)local_res8[0]) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FChaosArchive *)(*pcVar4)();
        return pFVar7;
      }
      pFVar12 = (param_2->AllocatorInstance).Data + lVar11;
      pFVar10 = *(FScriptContainerElement **)param_1->_padding_;
      if ((FScriptContainerElement *)((undefined8 *)param_1->_padding_)[1] < pFVar10 + 1) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar12,1);
      }
      else {
        *pFVar12 = *pFVar10;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
      }
      iVar8 = 0;
      if (*pFVar12 != (FScriptContainerElement)0x0) {
        pFVar10 = pFVar12 + 0x1c;
        pFVar9 = pFVar12;
        do {
          pFVar9 = pFVar9 + 2;
          puVar2 = *(undefined2 **)param_1->_padding_;
          if ((undefined2 *)((undefined8 *)param_1->_padding_)[1] < puVar2 + 1) {
            if ((param_1->_padding_ & 0x10000) == 0) {
              (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar9,2);
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ushort *)pFVar9);
            }
          }
          else {
            *(undefined2 *)pFVar9 = *puVar2;
            *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 2;
          }
          puVar3 = *(undefined4 **)param_1->_padding_;
          if ((undefined4 *)((undefined8 *)param_1->_padding_)[1] < puVar3 + 1) {
            if ((param_1->_padding_ & 0x10000) == 0) {
              (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar10,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar10);
            }
          }
          else {
            *(undefined4 *)pFVar10 = *puVar3;
            *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
          }
          iVar8 = iVar8 + 1;
          pFVar10 = pFVar10 + 4;
        } while (iVar8 < (int)(uint)(byte)*pFVar12);
      }
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x4c;
    } while ((int)uVar13 < (int)local_res8[0]);
  }
  return param_1;
}

// FWeightedLatticeInfluenceData,3> @ 143e65020

FArchive * __cdecl
Chaos::operator<<<Chaos::TArrayND<Chaos::FWeightedLatticeInfluenceData,3>,Chaos::
FWeightedLatticeInfluenceData_3>
          (FChaosArchive *param_1,
          TArrayNDBase<Chaos::TArrayND<Chaos::FWeightedLatticeInfluenceData,3>,Chaos::FWeightedLatticeInfluenceData,3>
          *param_2)

{
  operator<<<int,3>((FArchive *)param_1,&param_2->MCounts);
  FWeightedLatticeInfluenceData_TSizedDefaultAllocator<32>_>(param_1,&param_2->MArray);
  return (FArchive *)param_1;
}

// TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> @ 143e65060

FArchive * __cdecl
operator<<<Chaos::TVector<unsigned_short,3>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 6);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (6,2,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2aaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            Chaos::operator<<<unsigned_short,3>
                      (param_1,(TVector<unsigned_short,3> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 6));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x206,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          Chaos::operator<<<unsigned_short,3>
                    (param_1,(TVector<unsigned_short,3> *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 6));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FAABBVectorized,TSizedDefaultAllocator<32>_> @ 143e65070

FChaosArchive * __cdecl
Chaos::operator<<<Chaos::FAABBVectorized_TSizedDefaultAllocator<32>_>
          (FChaosArchive *param_1,
          TArray<Chaos::FAABBVectorized,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  int iVar10;
  FChaosArchive *pFVar11;
  uint uVar12;
  ulong64 uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint local_res8 [2];
  TAABB<float,3> local_58 [2];
  
  piVar1 = &param_2->ArrayMax;
  piVar2 = &param_2->ArrayNum;
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)*piVar2 << 5,(longlong)param_2->ArrayMax << 5);
  plVar3 = (longlong *)param_1->_padding_;
  local_res8[0] = *piVar2;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar13 = (ulong64)local_res8[0];
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13);
  }
  if (*piVar1 < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,local_res8[0],&param_2->AllocatorInstance,*piVar2,piVar1);
    uVar13 = (ulong64)local_res8[0];
  }
  iVar10 = *piVar2;
  uVar16 = (uint)uVar13;
  if (iVar10 < (int)uVar16) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,0x10,uVar16 - iVar10,&param_2->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<Chaos::FAABBVectorized,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x20,uVar16 - iVar10);
    uVar12 = local_res8[0];
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    uVar12 = uVar16;
    if ((int)uVar16 < iVar10) {
      uVar15 = iVar10 - uVar16;
      if (((int)(uVar15 | uVar16) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), uVar12 = local_res8[0], bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FChaosArchive *)(*pcVar5)();
        return pFVar11;
      }
      if (uVar15 != 0) {
        pFVar14 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x20;
        iVar10 = (*piVar2 - uVar15) - uVar16;
        if (iVar10 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x20,(longlong)iVar10 << 5);
        }
        *piVar2 = *piVar2 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,&param_2->AllocatorInstance,*piVar2,piVar1);
        uVar12 = local_res8[0];
      }
    }
  }
  uVar16 = 0;
  if (0 < (int)uVar12) {
    lVar17 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar16 < *piVar2) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FChaosArchive *)(*pcVar5)();
        return pFVar11;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      pFVar14 = pFVar4 + lVar17;
      local_58[0].MMin._0_4_ = *(undefined4 *)pFVar14;
      local_58[0].MMin._4_4_ = *(undefined4 *)(pFVar14 + 4);
      local_58[0].MMin._8_4_ = *(undefined4 *)(pFVar14 + 8);
      pFVar14 = pFVar4 + lVar17 + 0x10;
      local_58[0].MMax._0_4_ = *(undefined4 *)pFVar14;
      local_58[0].MMax._4_4_ = *(undefined4 *)(pFVar14 + 4);
      local_58[0].MMax._8_4_ = *(undefined4 *)(pFVar14 + 8);
      TBox<float,3>::SerializeAsAABB((FArchive *)param_1,local_58);
      uVar16 = uVar16 + 1;
      auVar7._4_4_ = local_58[0].MMax._4_4_;
      auVar7._0_4_ = local_58[0].MMax._0_4_;
      auVar7._8_4_ = local_58[0].MMax._8_4_;
      auVar6._4_4_ = local_58[0].MMin._4_4_;
      auVar6._0_4_ = local_58[0].MMin._0_4_;
      auVar6._8_4_ = local_58[0].MMin._8_4_;
      auVar6._12_4_ = 0;
      *(undefined1 (*) [16])(pFVar4 + lVar17) = auVar6;
      auVar7._12_4_ = 0;
      *(undefined1 (*) [16])(pFVar4 + lVar17 + 0x10) = auVar7;
      lVar17 = lVar17 + 0x20;
    } while ((int)uVar16 < (int)local_res8[0]);
  }
  return param_1;
}

// ComputeWorldSpaceBoundingBox<float,Chaos::FTriangleMeshImplicitObject::FBvEntry<1>_> @ 143e87220

TAABB<float,3> * __cdecl
Chaos::ComputeWorldSpaceBoundingBox<float,Chaos::FTriangleMeshImplicitObject::FBvEntry<1>_>
          (TAABB<float,3> *__return_storage_ptr__,FBvEntry<1> *param_1,bool param_2,float param_3)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  TAABB<float,3> *pTVar4;
  FBvEntry<1> *local_res8;
  
  if (param_2) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1833774039789731592>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\BoundingVolumeUtilities.h"
                       ,0xf8,"!bUseVelocity");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TAABB<float,3> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar1 = param_1->TmData;
  local_res8 = param_1;
  if ((pFVar1->MElements).bRequiresLargeIndices == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRequiresLargeIndices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                       ,0x19a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TAABB<float,3> *)(*pcVar2)();
      return pTVar4;
    }
  }
  `Chaos::FTriangleMeshImplicitObject::FBvEntry<1>::BoundingBox'::__l2::<lambda_1>::
  operator()<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
            (&local_res8,__return_storage_ptr__,&(pFVar1->MElements).LargeIdxBuffer);
  return __return_storage_ptr__;
}

// ComputeWorldSpaceBoundingBox<float,Chaos::FTriangleMeshImplicitObject::FBvEntry<0>_> @ 143e872c0

TAABB<float,3> * __cdecl
Chaos::ComputeWorldSpaceBoundingBox<float,Chaos::FTriangleMeshImplicitObject::FBvEntry<0>_>
          (TAABB<float,3> *__return_storage_ptr__,FBvEntry<0> *param_1,bool param_2,float param_3)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  TAABB<float,3> *pTVar4;
  FBvEntry<0> *local_res8;
  
  if (param_2) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1833774039789731592>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\BoundingVolumeUtilities.h"
                       ,0xf8,"!bUseVelocity");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TAABB<float,3> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar1 = param_1->TmData;
  local_res8 = param_1;
  if ((pFVar1->MElements).bRequiresLargeIndices != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRequiresLargeIndices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                       ,0x1a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TAABB<float,3> *)(*pcVar2)();
      return pTVar4;
    }
  }
  `Chaos::FTriangleMeshImplicitObject::FBvEntry<0>::BoundingBox'::__l2::<lambda_1>::
  operator()<TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>_>
            (&local_res8,__return_storage_ptr__,&(pFVar1->MElements).SmallIdxBuffer);
  return __return_storage_ptr__;
}

// ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 143e87360

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int *param_3,<lambda_1> *param_4)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  LARGE_INTEGER local_res8;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_4170000000000000;
  dVar5 = __real_3e45798ee2308c3a;
  iVar13 = 0;
  uVar15 = (ulonglong)param_2->ArrayNum;
  if (param_2->ArrayNum < param_1->ArrayNum) {
    lVar17 = uVar15 * 4;
    iVar13 = 0;
    do {
      iVar12 = *param_3;
      bVar9 = true;
      if (iVar12 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar12) && (iVar12 <= iVar13)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar2 = param_4->__this->StartSliceTimeStamp;
            if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar8,
                                         SUB84(dVar2,0) & uVar7)) {
              bVar9 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)
                      - dVar2 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar9) break;
          }
        }
      }
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar16 = (param_1->AllocatorInstance).Data + lVar17;
      if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar12 + 1;
      iVar13 = iVar13 + 4;
      uVar15 = (ulonglong)(uVar14 + 1);
      lVar17 = lVar17 + 4;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 4) =
           *(undefined4 *)pFVar16;
    } while ((int)(uVar14 + 1) < param_1->ArrayNum);
  }
  iVar12 = *param_3;
  if (0 < iVar12) {
    if (iVar12 < iVar13) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar12 - iVar13;
    }
  }
  return param_2->ArrayNum == param_1->ArrayNum;
}

// ContinueTimeSliceCopy<TArray<Chaos::TAABBTreeNode<float>,TSizedDefaultAllocator<32>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 143e875e0

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<TArray<Chaos::TAABBTreeNode<float>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArray<Chaos::TAABBTreeNode<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TAABBTreeNode<float>,TSizedDefaultAllocator<32>_> *param_2,int *param_3,
          <lambda_1> *param_4)

{
  double dVar1;
  TAABBTreeNode<float> *pTVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  TAABBTreeNode<float> *pTVar14;
  int iVar15;
  LARGE_INTEGER local_res8;
  
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar5 = __real_4170000000000000;
  dVar4 = __real_3e45798ee2308c3a;
  iVar15 = 0;
  uVar13 = param_2->ArrayNum;
  iVar11 = 0;
  if ((int)uVar13 < param_1->ArrayNum) {
    do {
      iVar15 = iVar11;
      iVar11 = *param_3;
      bVar8 = true;
      if (iVar11 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar11) && (iVar11 <= iVar15)) break;
        }
        else {
          piVar12 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar12 = *piVar12 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar1 = param_4->__this->StartSliceTimeStamp;
            if (dVar4 < (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar7,
                                         SUB84(dVar1,0) & uVar6)) {
              bVar8 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5)
                      - dVar1 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar8) break;
          }
        }
      }
      uVar10 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      piVar12 = &param_2->ArrayMax;
      pTVar2 = (TAABBTreeNode<float> *)(param_2->AllocatorInstance).Data;
      pTVar14 = (TAABBTreeNode<float> *)
                ((param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x40);
      if (((pTVar2 <= pTVar14) && (pTVar14 < pTVar2 + *piVar12)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      iVar11 = param_2->ArrayNum;
      if (iVar11 == *piVar12) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x440,&param_2->AllocatorInstance,piVar12);
      }
      param_2->ArrayNum = iVar11 + 1;
      TAABBTreeNode<float>::TAABBTreeNode<float>
                ((TAABBTreeNode<float> *)
                 ((param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x40),pTVar14);
      iVar15 = iVar15 + 0x40;
      uVar13 = uVar13 + 1;
      iVar11 = iVar15;
    } while ((int)uVar13 < param_1->ArrayNum);
  }
  iVar11 = *param_3;
  if (0 < iVar11) {
    if (iVar11 < iVar15) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar11 - iVar15;
    }
  }
  return param_2->ArrayNum == param_1->ArrayNum;
}

// ContinueTimeSliceCopy<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 143e878a0

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *param_2,int *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  LARGE_INTEGER local_res8;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_4170000000000000;
  dVar5 = __real_3e45798ee2308c3a;
  iVar13 = 0;
  uVar15 = (ulonglong)param_2->ArrayNum;
  if (param_2->ArrayNum < param_1->ArrayNum) {
    lVar17 = uVar15 * 8;
    iVar13 = 0;
    do {
      iVar12 = *param_3;
      bVar9 = true;
      if (iVar12 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar12) && (iVar12 <= iVar13)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar2 = param_4->__this->StartSliceTimeStamp;
            if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar8,
                                         SUB84(dVar2,0) & uVar7)) {
              bVar9 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)
                      - dVar2 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar9) break;
          }
        }
      }
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar16 = (param_1->AllocatorInstance).Data + lVar17;
      if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar12 + 1;
      iVar13 = iVar13 + 8;
      uVar15 = (ulonglong)(uVar14 + 1);
      lVar17 = lVar17 + 8;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 8) =
           *(undefined8 *)pFVar16;
    } while ((int)(uVar14 + 1) < param_1->ArrayNum);
  }
  iVar12 = *param_3;
  if (0 < iVar12) {
    if (iVar12 < iVar13) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar12 - iVar13;
    }
  }
  return param_2->ArrayNum == param_1->ArrayNum;
}

// ContinueTimeSliceCopy<TArray<Chaos::TPayloadBoundsElement<int,float>,TSizedDefaultAllocator<32>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 143e87b20

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<TArray<Chaos::TPayloadBoundsElement<int,float>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArray<Chaos::TPayloadBoundsElement<int,float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TPayloadBoundsElement<int,float>,TSizedDefaultAllocator<32>_> *param_2,
          int *param_3,<lambda_1> *param_4)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  LARGE_INTEGER local_res8;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_4170000000000000;
  dVar5 = __real_3e45798ee2308c3a;
  iVar15 = 0;
  uVar17 = (ulonglong)param_2->ArrayNum;
  if (param_2->ArrayNum < param_1->ArrayNum) {
    lVar18 = uVar17 * 0x1c;
    iVar15 = 0;
    do {
      iVar12 = *param_3;
      bVar9 = true;
      if (iVar12 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar12) && (iVar12 <= iVar15)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar2 = param_4->__this->StartSliceTimeStamp;
            if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar8,
                                         SUB84(dVar2,0) & uVar7)) {
              bVar9 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)
                      - dVar2 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar9) break;
          }
        }
      }
      uVar16 = (uint)uVar17;
      uVar11 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar14 = (param_1->AllocatorInstance).Data + lVar18;
      if (((pFVar3 <= pFVar14) && (pFVar14 < pFVar3 + (longlong)param_2->ArrayMax * 0x1c)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x41c,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      iVar15 = iVar15 + 0x1c;
      param_2->ArrayNum = iVar12 + 1;
      uVar17 = (ulonglong)(uVar16 + 1);
      pFVar3 = (param_2->AllocatorInstance).Data;
      lVar18 = lVar18 + 0x1c;
      lVar13 = (longlong)iVar12 * 0x1c;
      *(undefined4 *)(pFVar3 + lVar13) = *(undefined4 *)pFVar14;
      *(undefined8 *)(pFVar3 + lVar13 + 4) = *(undefined8 *)(pFVar14 + 4);
      *(undefined4 *)(pFVar3 + lVar13 + 0xc) = *(undefined4 *)(pFVar14 + 0xc);
      *(undefined8 *)(pFVar3 + lVar13 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
      *(undefined4 *)(pFVar3 + lVar13 + 0x18) = *(undefined4 *)(pFVar14 + 0x18);
    } while ((int)(uVar16 + 1) < param_1->ArrayNum);
  }
  iVar12 = *param_3;
  if (0 < iVar12) {
    if (iVar12 < iVar15) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar12 - iVar15;
    }
  }
  return param_2->ArrayNum == param_1->ArrayNum;
}

// ContinueTimeSliceCopy<Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 143e87dd0

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *param_1,
          TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *param_2,int *param_3,<lambda_1> *param_4)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  LARGE_INTEGER local_res8;
  
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_4170000000000000;
  dVar7 = __real_3e45798ee2308c3a;
  iVar15 = 0;
  iVar13 = (param_2->Entries).ArrayNum;
  uVar16 = (ulonglong)iVar13;
  if (iVar13 < (param_1->Entries).ArrayNum) {
    lVar17 = uVar16 * 0x18;
    iVar15 = 0;
    do {
      iVar13 = *param_3;
      bVar11 = true;
      if (iVar13 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar13) && (iVar13 <= iVar15)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar2 = param_4->__this->StartSliceTimeStamp;
            uVar18 = SUB84(dVar2,0) & uVar9;
            uVar19 = (uint)((ulonglong)dVar2 >> 0x20) & uVar10;
            if (dVar7 <= (double)CONCAT44(uVar19,uVar18) && (double)CONCAT44(uVar19,uVar18) != dVar7
               ) {
              bVar11 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8)
                       - dVar2 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar11) break;
          }
        }
      }
      uVar19 = (uint)uVar16;
      uVar18 = 0;
      if ((int)uVar19 < (param_1->Entries).ArrayNum) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      pFVar3 = (param_2->Entries).AllocatorInstance.Data;
      pFVar14 = (param_1->Entries).AllocatorInstance.Data + lVar17;
      if (((pFVar3 <= pFVar14) && (pFVar14 < pFVar3 + (longlong)(param_2->Entries).ArrayMax * 0x18))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      iVar13 = (param_2->Entries).ArrayNum;
      piVar1 = &(param_2->Entries).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,(ForAnyElementType *)param_2,piVar1);
      }
      iVar15 = iVar15 + 0x14;
      (param_2->Entries).ArrayNum = iVar13 + 1;
      uVar16 = (ulonglong)(uVar19 + 1);
      uVar6 = *(undefined8 *)(pFVar14 + 8);
      lVar17 = lVar17 + 0x18;
      pFVar4 = (param_2->Entries).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar13 * 0x18;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar14;
      *(undefined8 *)(pFVar3 + 8) = uVar6;
      *(undefined8 *)(pFVar4 + (longlong)iVar13 * 0x18 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
    } while ((int)(uVar19 + 1) < (param_1->Entries).ArrayNum);
  }
  iVar13 = *param_3;
  if (0 < iVar13) {
    if (iVar13 < iVar15) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar13 - iVar15;
    }
  }
  return (param_2->Entries).ArrayNum == (param_1->Entries).ArrayNum;
}

// ContinueTimeSliceCopy<Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_>,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced'::__l2::<lambda_1>_> @ 143e88060

bool __cdecl
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
ContinueTimeSliceCopy<Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
          (TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_> *param_1,
          TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,float>_> *param_2,int *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  TAABBTreeLeafArray<int,0,float> *pTVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  LARGE_INTEGER local_res8;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_4170000000000000;
  dVar5 = __real_3e45798ee2308c3a;
  iVar15 = 0;
  uVar14 = *(uint *)&param_2->field_0x8;
  iVar12 = 0;
  if ((int)uVar14 < *(int *)&param_1->field_0x8) {
    do {
      iVar15 = iVar12;
      iVar12 = *param_3;
      bVar9 = true;
      if (iVar12 != -1) {
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((-1 < iVar12) && (iVar12 <= iVar15)) break;
        }
        else {
          piVar1 = &param_4->__this->CurrentDataElementsCopiedSinceLastCheck;
          *piVar1 = *piVar1 + 1;
          if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
              param_4->__this->CurrentDataElementsCopiedSinceLastCheck) {
            param_4->__this->CurrentDataElementsCopiedSinceLastCheck = 0;
          }
          else {
            QueryPerformanceCounter(&local_res8);
            dVar3 = param_4->__this->StartSliceTimeStamp;
            if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar8,
                                         SUB84(dVar3,0) & uVar7)) {
              bVar9 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)
                      - dVar3 <= (double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds;
            }
            if (!bVar9) break;
          }
        }
      }
      uVar11 = 0;
      if ((int)uVar14 < *(int *)&param_1->field_0x8) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      puVar13 = &param_2->field_0xc;
      pTVar2 = (TAABBTreeLeafArray<int,0,float> *)
               (*(longlong *)param_1 + (longlong)(int)uVar14 * 0x18);
      if (((*(TAABBTreeLeafArray<int,0,float> **)param_2 <= pTVar2) &&
          (pTVar2 < *(TAABBTreeLeafArray<int,0,float> **)param_2 + *(int *)puVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar12 = *(int *)&param_2->field_0x8;
      if (iVar12 == *(int *)puVar13) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_2,(int *)puVar13);
      }
      *(int *)&param_2->field_0x8 = iVar12 + 1;
      TAABBTreeLeafArray<int,0,float>::TAABBTreeLeafArray<int,0,float>
                ((TAABBTreeLeafArray<int,0,float> *)(*(longlong *)param_2 + (longlong)iVar12 * 0x18)
                 ,pTVar2);
      iVar15 = iVar15 + 0x18;
      uVar14 = uVar14 + 1;
      iVar12 = iVar15;
    } while ((int)uVar14 < *(int *)&param_1->field_0x8);
  }
  iVar12 = *param_3;
  if (0 < iVar12) {
    if (iVar12 < iVar15) {
      *param_3 = 0;
    }
    else {
      *param_3 = iVar12 - iVar15;
    }
  }
  return *(int *)&param_2->field_0x8 == *(int *)&param_1->field_0x8;
}

// DefaultConstructItems<Chaos::FWeightedLatticeImplicitObjectBuilder::FInfluenceBuildData,int> @ 143e88c40

void __cdecl
DefaultConstructItems<Chaos::FWeightedLatticeImplicitObjectBuilder::FInfluenceBuildData,int>
          (void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),(ulonglong)(uint)param_2);
    return;
  }
  return;
}

// DefaultConstructItems<Chaos::FTrimeshBVH::FNode,int> @ 143e88c60

void __cdecl DefaultConstructItems<Chaos::FTrimeshBVH::FNode,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  __m128 *p_Var4;
  
  if (param_2 != 0) {
    p_Var4 = (__m128 *)((longlong)param_1 + 0x20);
    do {
      p_Var4[-2] = GlobalVectorConstants::BigNumber;
      fVar1 = GlobalVectorConstants::BigNumber.m128_f32[1];
      fVar2 = GlobalVectorConstants::BigNumber.m128_f32[2];
      fVar3 = GlobalVectorConstants::BigNumber.m128_f32[3];
      p_Var4[-1].m128_f32[0] = 0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
      *(float *)((longlong)p_Var4 + -0xc) = 0.0 - fVar1;
      *(float *)((longlong)p_Var4 + -8) = 0.0 - fVar2;
      *(float *)((longlong)p_Var4 + -4) = 0.0 - fVar3;
      *p_Var4 = GlobalVectorConstants::BigNumber;
      fVar1 = GlobalVectorConstants::BigNumber.m128_f32[1];
      fVar2 = GlobalVectorConstants::BigNumber.m128_f32[2];
      fVar3 = GlobalVectorConstants::BigNumber.m128_f32[3];
      p_Var4[1].m128_f32[0] = 0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
      *(float *)((longlong)p_Var4 + 0x14) = 0.0 - fVar1;
      *(float *)((longlong)p_Var4 + 0x18) = 0.0 - fVar2;
      *(float *)((longlong)p_Var4 + 0x1c) = 0.0 - fVar3;
      p_Var4[2].m128_u64[0] = 0xffffffffffffffff;
      *(undefined8 *)((longlong)p_Var4 + 0x28) = 0;
      p_Var4 = p_Var4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Chaos::FWeightedLatticeInfluenceData,int> @ 143e88cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
DefaultConstructItems<Chaos::FWeightedLatticeInfluenceData,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = _UNK_15060db28;
  uVar1 = ___xmm_ffffffffffffffffffffffffffffffff;
  if (param_2 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 0x1c);
    do {
      *(undefined1 *)((longlong)puVar3 + -0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + -0x1a) = uVar1;
      *(undefined8 *)((longlong)puVar3 + -0x12) = uVar2;
      *(undefined8 *)((longlong)puVar3 + -10) = uVar1;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 0x4c);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int> @ 143e88d00

void __cdecl
DefaultConstructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x5c);
    do {
      puVar1[-0x17] = 0;
      puVar1[-0x16] = 0x7f7fffff;
      puVar1[-0x15] = 0x7f7fffff;
      puVar1[-0x14] = 0x7f7fffff;
      puVar1[-0x13] = 0xff7fffff;
      puVar1[-0x12] = 0xff7fffff;
      puVar1[-0x11] = 0xff7fffff;
      *(undefined8 *)(puVar1 + -0xd) = 0;
      puVar1[-2] = 0x7f7fffff;
      puVar1[-1] = 0x7f7fffff;
      *puVar1 = 0x7f7fffff;
      puVar1[1] = 0xff7fffff;
      puVar1[2] = 0xff7fffff;
      puVar1[3] = 0xff7fffff;
      puVar1[5] = 0x7f7fffff;
      puVar1[6] = 0x7f7fffff;
      puVar1[7] = 0x7f7fffff;
      puVar1[8] = 0xff7fffff;
      puVar1[9] = 0xff7fffff;
      puVar1[10] = 0xff7fffff;
      *(undefined8 *)(puVar1 + -0xf) = 0;
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Chaos::TVector<unsigned_short,3>,int> @ 143e88db0

void __cdecl DefaultConstructItems<Chaos::TVector<unsigned_short,3>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<Chaos::FAABBVectorized,int> @ 143e88dc0

void __cdecl DefaultConstructItems<Chaos::FAABBVectorized,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(__m128 *)param_1 = GlobalVectorConstants::BigNumber;
    fVar1 = GlobalVectorConstants::BigNumber.m128_f32[1];
    fVar2 = GlobalVectorConstants::BigNumber.m128_f32[2];
    fVar3 = GlobalVectorConstants::BigNumber.m128_f32[3];
    ((__m128 *)((longlong)param_1 + 0x10))->m128_f32[0] =
         0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
    *(float *)((longlong)param_1 + 0x14) = 0.0 - fVar1;
    *(float *)((longlong)param_1 + 0x18) = 0.0 - fVar2;
    *(float *)((longlong)param_1 + 0x1c) = 0.0 - fVar3;
    param_1 = (void *)((longlong)param_1 + 0x20);
  }
  return;
}

// DestructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int> @ 143e88e00

void __cdecl
DestructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int>
          (FWorkSnapshot *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<Chaos::TPayloadBoundsElement<int,float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Elems;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DoForSweepIntersectCells<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l42::<lambda_3>_> @ 143e88e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::
DoForSweepIntersectCells<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l42::<lambda_3>_>
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          double param_4,double param_5,double param_6,<lambda_3> *param_7)

{
  double dVar1;
  double dVar2;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar3;
  undefined1 *puVar4;
  TArray<Chaos::DirtyGridHashEntry,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 *puVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  double dVar68;
  double dVar69;
  undefined8 in_XMM3_Qb;
  double dVar70;
  undefined1 auVar71 [16];
  uint uVar72;
  double dVar73;
  uint uVar76;
  double dVar74;
  double dVar75;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar84;
  double dVar83;
  double local_1a8;
  double local_1a0;
  longlong local_190;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_140;
  longlong local_128;
  longlong local_118;
  longlong local_f8;
  
  dVar2 = __real_3cb0000000000000;
  dVar45 = __real_7fefffffffffffff;
  uVar81 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar80 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  auVar49._8_4_ = (int)in_XMM3_Qb;
  auVar49._0_8_ = param_4;
  auVar49._12_4_ = (int)((ulonglong)in_XMM3_Qb >> 0x20);
  auVar71._8_8_ = auVar49._8_8_;
  auVar71._0_8_ = param_4 * *(double *)param_3;
  dVar67 = param_4 * *(double *)&param_3->field_0x8;
  uVar77 = SUB84(auVar71._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar78 = (uint)((ulonglong)auVar71._0_8_ >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar73 = (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((__real_3e45798ee0000000 <= (double)CONCAT44(uVar78,uVar77) &&
       (double)CONCAT44(uVar78,uVar77) != __real_3e45798ee0000000) ||
     (__real_3e45798ee0000000 < dVar73)) {
    uVar80 = (uint)__xmm_80000000000000008000000000000000;
    uVar81 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (dVar73 <= (double)CONCAT44(uVar78,uVar77)) {
      dVar47 = *(double *)param_2;
      lVar35 = 1;
      dVar68 = *(double *)&param_2->field_0x8;
      dVar1 = *(double *)&param_1->field_0x8;
      pTVar3 = param_7->__this;
      pTVar5 = param_7->HashEntryForOverlappedCells;
      dVar63 = *(double *)param_1;
      auVar51._0_8_ = dVar47 * param_6;
      auVar51._8_8_ = 0;
      bVar25 = (double)CONCAT44(uVar78,uVar77) != __real_3e45798ee0000000;
      bVar7 = __real_3e45798ee0000000 <= (double)CONCAT44(uVar78,uVar77);
      auVar50._8_8_ = 0;
      auVar50._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar51._0_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(auVar51._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + auVar51._0_8_;
      auVar49 = roundpd(auVar51,auVar50,1);
      lVar42 = (longlong)auVar49._0_8_;
      dVar70 = dVar68 * param_6;
      auVar52._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar70 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar70,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar70;
      auVar52._8_8_ = 0;
      auVar49 = roundpd(auVar49,auVar52,1);
      lVar44 = (longlong)auVar49._0_8_;
      dVar70 = (double)lVar44 * param_5;
      dVar46 = dVar47 - (double)lVar42 * param_5;
      bVar24 = dVar73 <= __real_3e45798ee0000000;
      if (bVar7 && bVar25) {
        lVar35 = -1;
        local_f8 = -1;
        if (0.0 <= auVar71._0_8_) {
          local_f8 = 1;
        }
        if (0.0 <= dVar67) {
          lVar35 = 1;
        }
      }
      else {
        local_f8 = 1;
      }
      dVar73 = (double)local_f8;
      dVar23 = __real_3ff0000000000000;
      if (!bVar24) {
        dVar23 = (dVar73 * auVar71._0_8_) / dVar67;
      }
      uVar72 = SUB84(dVar63,0);
      uVar76 = (uint)((ulonglong)dVar63 >> 0x20);
      uVar82 = uVar72 ^ uVar80;
      uVar84 = uVar76 ^ uVar81;
      dVar69 = (double)CONCAT44(uVar84,uVar82);
      uVar77 = uVar82;
      uVar78 = uVar84;
      if (-1 < local_f8) {
        uVar77 = uVar72;
        uVar78 = uVar76;
      }
      dVar74 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar81,SUB84(dVar1,0) ^ uVar80);
      dVar75 = dVar74;
      if (-1 < lVar35) {
        dVar75 = dVar1;
      }
      dVar83 = dVar69;
      if (local_f8 < 0) {
        dVar83 = dVar63;
      }
      dVar83 = dVar83 + dVar46;
      local_1a0 = dVar1;
      if (-1 < lVar35) {
        local_1a0 = dVar74;
      }
      local_1a0 = local_1a0 + (dVar68 - dVar70);
      if (-1 < local_f8) {
        dVar69 = dVar63;
      }
      dVar63 = ((double)lVar42 * param_5 + dVar83) * param_6;
      auVar53._0_8_ = (dVar69 + dVar46) * param_6;
      auVar53._8_8_ = 0;
      dVar47 = (dVar47 + auVar71._0_8_ + (double)CONCAT44(uVar78,uVar77)) * param_6;
      dVar68 = (dVar67 + dVar68 + dVar75) * param_6;
      auVar15._8_8_ = 0;
      auVar15._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar53._0_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(auVar53._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + auVar53._0_8_;
      auVar49 = roundpd(auVar53,auVar15,1);
      auVar54._0_8_ = (double)lVar35;
      auVar54._8_8_ = 0;
      auVar16._8_8_ = 0;
      auVar16._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar63 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar63,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar63;
      auVar50 = roundpd(auVar54,auVar16,1);
      lVar38 = (longlong)auVar50._0_8_;
      local_1a8 = (dVar1 + dVar1) * auVar54._0_8_ + local_1a0;
      dVar67 = (local_1a8 + dVar70) * param_6;
      auVar17._8_8_ = 0;
      auVar17._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar67;
      auVar50 = roundpd(auVar50,auVar17,1);
      dVar67 = (local_1a0 + dVar70) * param_6;
      lVar37 = (longlong)auVar50._0_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar67;
      auVar50 = roundpd(auVar50,auVar18,1);
      lVar29 = (longlong)auVar50._0_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar47,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar47;
      auVar50 = roundpd(auVar50,auVar19,1);
      auVar55._8_8_ = 0;
      auVar55._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar68 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar68,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar68;
      auVar51 = roundpd(auVar55,auVar55,1);
      lVar33 = (longlong)auVar51._0_8_;
      if ((!bVar7 || !bVar25) && (lVar33 < lVar37)) {
        lVar33 = lVar37;
      }
      lVar41 = lVar38 - lVar42;
      local_140 = lVar38 * local_f8;
      lVar28 = lVar37 * lVar35;
      local_158 = local_f8 * lVar41;
      lVar39 = lVar38;
      dVar67 = dVar83;
      uVar80 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar81 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_190 = lVar37;
      local_168 = lVar38;
      local_160 = lVar41;
      local_128 = lVar28;
      local_118 = lVar29;
      do {
        if (((lVar28 < lVar33 * lVar35) && (!bVar24)) &&
           (dVar47 = ((double)(longlong)(((ulonglong)(0 < lVar35) - lVar44) + lVar37) * param_5 -
                     local_1a8) * dVar23,
           dVar47 < ((double)(longlong)(((ulonglong)(0 < local_f8) - lVar42) + lVar39) * param_5 -
                    dVar83) * dVar73)) {
          lVar37 = lVar37 + lVar35;
          lVar28 = lVar28 + lVar35 * lVar35;
          local_1a8 = local_1a8 + dVar47 / dVar23;
          dVar83 = dVar83 + dVar47 / dVar73;
          local_190 = lVar37;
          local_128 = lVar28;
        }
        lVar34 = lVar29 * lVar35;
        lVar40 = lVar29;
        if (lVar34 - lVar28 == 0 || lVar34 < lVar28) {
          do {
            dVar47 = (double)lVar39 * param_5 * (double)pTVar3->DirtyElementGridCellSizeInv;
            auVar65._0_8_ = (double)lVar29 * param_5 * (double)pTVar3->DirtyElementGridCellSizeInv;
            auVar65._8_8_ = 0;
            auVar56._8_8_ = 0;
            auVar56._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) & uVar81,
                                  SUB84(dVar47,0) & uVar80) * dVar2 + dVar47;
            auVar71 = roundpd(auVar71,auVar56,1);
            uVar77 = (uint)(longlong)auVar71._0_8_ & 0xffff;
            uVar77 = (uVar77 << 8 ^ uVar77) & 0xff00ff;
            uVar77 = (uVar77 << 4 ^ uVar77) & 0xf0f0f0f;
            auVar20._8_8_ = 0;
            auVar20._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)auVar65._0_8_ >> 0x20) & uVar81,
                                  SUB84(auVar65._0_8_,0) & uVar80) * dVar2 + auVar65._0_8_;
            auVar51 = roundpd(auVar65,auVar20,1);
            uVar78 = (uVar77 * 4 ^ uVar77) & 0x33333333;
            uVar77 = (uint)(longlong)auVar51._0_8_ & 0xffff;
            uVar77 = (uVar77 << 8 ^ uVar77) & 0xff00ff;
            uVar77 = (uVar77 << 4 ^ uVar77) & 0xf0f0f0f;
            uVar78 = uVar78 * 2 ^ uVar78;
            uVar77 = (uVar77 * 4 ^ uVar77) & 0x33333333;
            uVar78 = ((uVar77 * 2 ^ uVar77) * 2 ^ uVar78) & 0xaaaaaaaa ^ uVar78;
            if (*(int *)&(pTVar3->CellHashToFlatArray).field_0x8 !=
                *(int *)&(pTVar3->CellHashToFlatArray).field_0x34) {
              puVar4 = *(undefined1 **)&(pTVar3->CellHashToFlatArray).field_0x40;
              puVar30 = &(pTVar3->CellHashToFlatArray).field_0x38;
              if (puVar4 != (undefined1 *)0x0) {
                puVar30 = puVar4;
              }
              iVar27 = *(int *)(puVar30 +
                               (ulonglong)
                               (*(int *)&(pTVar3->CellHashToFlatArray).field_0x48 - 1U & uVar78) * 4
                               );
              if (iVar27 != -1) {
                do {
                  lVar38 = *(longlong *)&pTVar3->CellHashToFlatArray + (longlong)iVar27 * 0x14;
                  if (*(uint *)(*(longlong *)&pTVar3->CellHashToFlatArray + (longlong)iVar27 * 0x14)
                      == uVar78) {
                    pFVar31 = (FScriptContainerElement *)(lVar38 + 4);
                    if (lVar38 == 0) {
                      pFVar31 = (FScriptContainerElement *)0x0;
                    }
                    if (pFVar31 != (FScriptContainerElement *)0x0) {
                      pFVar6 = (pTVar5->AllocatorInstance).Data;
                      if (((pFVar6 <= pFVar31) &&
                          (pFVar31 < pFVar6 + (longlong)pTVar5->ArrayMax * 8)) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar26)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar27 = pTVar5->ArrayNum;
                      if (iVar27 == pTVar5->ArrayMax) {
                        iVar27 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x408,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                      }
                      uVar81 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                      uVar80 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                      pTVar5->ArrayNum = iVar27 + 1;
                      pFVar6 = (pTVar5->AllocatorInstance).Data;
                      *(undefined4 *)(pFVar6 + (longlong)iVar27 * 8) = *(undefined4 *)pFVar31;
                      *(undefined4 *)(pFVar6 + (longlong)iVar27 * 8 + 4) =
                           *(undefined4 *)(pFVar31 + 4);
                    }
                    break;
                  }
                  iVar27 = *(int *)(lVar38 + 0xc);
                } while (iVar27 != -1);
              }
            }
            lVar29 = lVar29 + lVar35;
            lVar34 = lVar34 + lVar35 * lVar35;
            lVar28 = local_128;
            lVar40 = local_118;
            lVar38 = local_168;
            lVar37 = local_190;
            lVar41 = local_160;
          } while (lVar34 <= local_128);
        }
        if ((lVar37 == lVar33) || (bVar24)) {
          dVar47 = dVar73 * param_5;
        }
        else {
          dVar68 = ((double)(longlong)(((ulonglong)(0 < local_f8) - lVar42) + lVar39) * param_5 -
                   dVar83) * dVar73;
          dVar47 = dVar68 / dVar73;
          local_1a8 = local_1a8 + dVar68 / dVar23;
        }
        dVar83 = dVar83 + dVar47;
        lVar29 = lVar40;
        if (lVar38 != (longlong)auVar50._0_8_) {
          if (local_158 < (longlong)auVar49._0_8_ * local_f8) {
            dVar67 = dVar67 + dVar73 * param_5;
          }
          else {
            if (lVar41 == (longlong)auVar49._0_8_) {
              uVar77 = uVar82;
              uVar78 = uVar84;
              if (-1 < local_f8) {
                uVar77 = uVar72;
                uVar78 = uVar76;
              }
              dVar67 = (double)CONCAT44(uVar78,uVar77) + dVar46;
            }
            dVar47 = dVar45;
            if (bVar7 && bVar25) {
              dVar47 = ((double)(longlong)(((ulonglong)(0 < local_f8) - lVar42) + lVar38) * param_5
                       - dVar67) * dVar73;
            }
            dVar68 = dVar45;
            if (!bVar24) {
              dVar68 = ((double)(longlong)(((ulonglong)(0 < lVar35) - lVar44) + lVar40) * param_5 -
                       local_1a0) * dVar23;
            }
            lVar29 = lVar40 + lVar35;
            if (dVar47 <= dVar68) {
              lVar29 = lVar40;
            }
            if (bVar7 && bVar25) {
              dVar67 = dVar67 + dVar47 / dVar73;
            }
            local_118 = lVar29;
            if (!bVar24) {
              local_1a0 = local_1a0 + dVar47 / dVar23;
            }
          }
          lVar38 = lVar38 + local_f8;
          lVar41 = lVar41 + local_f8;
          local_158 = local_158 + local_f8 * local_f8;
          local_168 = lVar38;
          local_160 = lVar41;
        }
        lVar39 = lVar39 + local_f8;
        local_140 = local_140 + local_f8 * local_f8;
      } while ((lVar37 != lVar33) || (local_140 <= (longlong)auVar50._0_8_ * local_f8));
    }
    else {
      lVar35 = 1;
      dVar47 = *(double *)&param_1->field_0x8;
      uVar76 = (uint)((ulonglong)dVar47 >> 0x20);
      dVar2 = *(double *)param_1;
      uVar72 = (uint)((ulonglong)dVar2 >> 0x20);
      auVar57._0_8_ = *(double *)&param_2->field_0x8 * param_6;
      auVar57._8_8_ = 0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar57._0_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(auVar57._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + auVar57._0_8_;
      auVar49 = roundpd(auVar57,auVar21,1);
      lVar42 = (longlong)auVar49._0_8_;
      dVar68 = *(double *)param_2 * param_6;
      auVar66._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar68 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar68,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar68;
      auVar66._8_8_ = 0;
      auVar49 = roundpd(auVar49,auVar66,1);
      lVar44 = (longlong)auVar49._0_8_;
      bVar24 = dVar73 <= __real_3e45798ee0000000;
      bVar25 = (double)CONCAT44(uVar78,uVar77) == __real_3e45798ee0000000;
      bVar7 = (double)CONCAT44(uVar78,uVar77) < __real_3e45798ee0000000;
      dVar68 = (double)lVar44 * param_5;
      dVar73 = *(double *)&param_2->field_0x8 - (double)lVar42 * param_5;
      if (bVar24) {
        lVar29 = 1;
      }
      else {
        lVar35 = -1;
        lVar29 = -1;
        if (0.0 <= dVar67) {
          lVar29 = 1;
        }
        if (0.0 <= auVar71._0_8_) {
          lVar35 = 1;
        }
      }
      dVar1 = (double)lVar29;
      dVar63 = __real_3ff0000000000000;
      if (!bVar7 && !bVar25) {
        dVar63 = (dVar1 * dVar67) / auVar71._0_8_;
      }
      uVar82 = SUB84(dVar47,0) ^ uVar80;
      uVar84 = uVar76 ^ uVar81;
      uVar77 = uVar82;
      uVar78 = uVar84;
      if (-1 < lVar29) {
        uVar77 = SUB84(dVar47,0);
        uVar78 = uVar76;
      }
      uVar80 = SUB84(dVar2,0) ^ uVar80;
      uVar81 = uVar72 ^ uVar81;
      dVar70 = dVar2;
      if (lVar35 < 0) {
        dVar70 = (double)CONCAT44(uVar81,uVar80);
      }
      uVar76 = uVar82;
      uVar79 = uVar84;
      if (lVar29 < 0) {
        dVar47 = *(double *)&param_1->field_0x8;
        uVar76 = SUB84(dVar47,0);
        uVar79 = (uint)((ulonglong)dVar47 >> 0x20);
      }
      dVar46 = (double)CONCAT44(uVar79,uVar76) + dVar73;
      if (lVar35 < 0) {
        uVar80 = SUB84(dVar2,0);
        uVar81 = uVar72;
      }
      dVar23 = (double)CONCAT44(uVar81,uVar80) + (*(double *)param_2 - dVar68);
      if (lVar29 < 0) {
        dVar47 = (double)CONCAT44(uVar84,uVar82);
      }
      dVar47 = (dVar47 + dVar73) * param_6;
      dVar69 = (dVar67 + *(double *)&param_2->field_0x8 + (double)CONCAT44(uVar78,uVar77)) * param_6
      ;
      dVar70 = (auVar71._0_8_ + *(double *)param_2 + dVar70) * param_6;
      auVar58._8_8_ = 0;
      auVar58._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar47,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar47;
      auVar71 = roundpd(auVar58,auVar58,1);
      dVar2 = (dVar2 + dVar2) * (double)lVar35 + dVar23;
      dVar67 = (dVar46 + (double)lVar42 * param_5) * param_6;
      dVar47 = (dVar2 + dVar68) * param_6;
      auVar59._8_8_ = 0;
      auVar59._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar67;
      auVar49 = roundpd(auVar59,auVar59,1);
      lVar37 = (longlong)auVar49._0_8_;
      auVar22._8_8_ = 0;
      auVar22._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar47,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar47;
      auVar49 = roundpd(auVar49,auVar22,1);
      dVar67 = (dVar23 + dVar68) * param_6;
      lVar28 = (longlong)auVar49._0_8_;
      auVar60._8_8_ = 0;
      auVar60._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar67;
      auVar49 = roundpd(auVar60,auVar60,1);
      lVar33 = (longlong)auVar49._0_8_;
      auVar61._8_8_ = 0;
      auVar61._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar69 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar69,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar69;
      auVar49 = roundpd(auVar61,auVar61,1);
      auVar62._8_8_ = 0;
      auVar62._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar70 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar70,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3cb0000000000000 + dVar70;
      auVar50 = roundpd(auVar62,auVar62,1);
      lVar38 = (longlong)auVar50._0_8_;
      if ((bVar24) && (lVar38 < lVar28)) {
        lVar38 = lVar28;
      }
      lVar41 = lVar37 - lVar42;
      lVar34 = lVar37 * lVar29;
      lVar40 = lVar29 * lVar41;
      lVar43 = lVar28 * lVar35;
      lVar39 = lVar37;
      dVar67 = dVar46;
      local_178 = lVar40;
      local_170 = lVar41;
      local_168 = lVar37;
      do {
        if (((lVar43 < lVar38 * lVar35) && (!bVar7 && !bVar25)) &&
           (dVar47 = ((double)(longlong)(((ulonglong)(0 < lVar35) - lVar44) + lVar28) * param_5 -
                     dVar2) * dVar63,
           dVar47 < ((double)(longlong)(((ulonglong)(0 < lVar29) - lVar42) + lVar37) * param_5 -
                    dVar46) * dVar1)) {
          lVar28 = lVar28 + lVar35;
          lVar43 = lVar43 + lVar35 * lVar35;
          dVar46 = dVar46 + dVar47 / dVar1;
          dVar2 = dVar2 + dVar47 / dVar63;
        }
        lVar32 = lVar33 * lVar35;
        if (lVar32 - lVar43 == 0 || lVar32 < lVar43) {
          lVar36 = lVar33;
          do {
            `Chaos::
            TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            ::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l42::
            <lambda_3>::operator()(param_7,(double)lVar36 * param_5,(double)lVar37 * param_5);
            lVar36 = lVar36 + lVar35;
            lVar32 = lVar32 + lVar35 * lVar35;
            lVar39 = local_168;
            lVar41 = local_170;
            lVar40 = local_178;
          } while (lVar32 <= lVar43);
        }
        if ((lVar28 == lVar38) || (bVar7 || bVar25)) {
          dVar47 = dVar1 * param_5;
        }
        else {
          dVar68 = ((double)(longlong)(((ulonglong)(0 < lVar29) - lVar42) + lVar37) * param_5 -
                   dVar46) * dVar1;
          dVar47 = dVar68 / dVar1;
          dVar2 = dVar2 + dVar68 / dVar63;
        }
        dVar46 = dVar46 + dVar47;
        if (lVar39 != (longlong)auVar49._0_8_) {
          if (lVar40 < (longlong)auVar71._0_8_ * lVar29) {
            dVar67 = dVar67 + dVar1 * param_5;
            lVar32 = lVar33;
          }
          else {
            if (lVar41 == (longlong)auVar71._0_8_) {
              uVar80 = uVar82;
              uVar81 = uVar84;
              if (-1 < lVar29) {
                uVar80 = (uint)*(undefined8 *)&param_1->field_0x8;
                uVar81 = (uint)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20);
              }
              dVar67 = (double)CONCAT44(uVar81,uVar80) + dVar73;
            }
            dVar47 = dVar45;
            if (!bVar24) {
              dVar47 = ((double)(longlong)(((ulonglong)(0 < lVar29) - lVar42) + lVar39) * param_5 -
                       dVar67) * dVar1;
            }
            dVar68 = dVar45;
            if (!bVar7 && !bVar25) {
              dVar68 = ((double)(longlong)(((ulonglong)(0 < lVar35) - lVar44) + lVar33) * param_5 -
                       dVar23) * dVar63;
            }
            lVar32 = lVar33 + lVar35;
            if (dVar47 <= dVar68) {
              lVar32 = lVar33;
            }
            if (!bVar24) {
              dVar67 = dVar67 + dVar47 / dVar1;
            }
            if (!bVar7 && !bVar25) {
              dVar23 = dVar23 + dVar47 / dVar63;
            }
          }
          lVar39 = lVar39 + lVar29;
          lVar41 = lVar41 + lVar29;
          lVar40 = lVar40 + lVar29 * lVar29;
          lVar33 = lVar32;
          local_178 = lVar40;
          local_170 = lVar41;
          local_168 = lVar39;
        }
        lVar37 = lVar37 + lVar29;
        lVar34 = lVar34 + lVar29 * lVar29;
      } while ((lVar28 != lVar38) || (lVar34 <= lVar29 * (longlong)auVar49._0_8_));
    }
  }
  else {
    auVar48._0_8_ = (*(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8) * param_6;
    auVar48._8_8_ = 0;
    dVar73 = (*(double *)&param_2->field_0x8 + *(double *)&param_1->field_0x8) * param_6;
    dVar67 = (*(double *)param_2 + *(double *)param_1) * param_6;
    dVar45 = (*(double *)param_2 - *(double *)param_1) * param_6;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (double)CONCAT44((uint)((ulonglong)auVar48._0_8_ >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(auVar48._0_8_,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                   __real_3cb0000000000000 + auVar48._0_8_;
    auVar49 = roundpd(auVar48,auVar9,1);
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar67,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
         __real_3cb0000000000000 + dVar67;
    auVar50 = roundpd(auVar49,auVar10,1);
    auVar11._8_8_ = 0;
    auVar11._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
         __real_3cb0000000000000 + dVar73;
    auVar51 = roundpd(auVar50,auVar11,1);
    auVar12._8_8_ = 0;
    auVar12._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar45,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
         __real_3cb0000000000000 + dVar45;
    auVar52 = roundpd(auVar51,auVar12,1);
    for (lVar44 = (longlong)auVar52._0_8_; lVar44 <= (longlong)auVar50._0_8_; lVar44 = lVar44 + 1) {
      if ((longlong)auVar49._0_8_ <= (longlong)auVar51._0_8_) {
        lVar35 = (longlong)auVar49._0_8_;
        do {
          pTVar3 = param_7->__this;
          dVar45 = (double)pTVar3->DirtyElementGridCellSizeInv * (double)lVar44 * param_5;
          auVar64._0_8_ = (double)lVar35 * param_5 * (double)pTVar3->DirtyElementGridCellSizeInv;
          auVar64._8_8_ = 0;
          auVar13._8_8_ = 0;
          auVar13._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar81,SUB84(dVar45,0) & uVar80)
               * dVar2 + dVar45;
          auVar71 = roundpd(auVar71,auVar13,1);
          uVar77 = (uint)(longlong)auVar71._0_8_ & 0xffff;
          uVar77 = (uVar77 << 8 ^ uVar77) & 0xff00ff;
          uVar77 = (uVar77 << 4 ^ uVar77) & 0xf0f0f0f;
          auVar14._8_8_ = 0;
          auVar14._0_8_ =
               (double)CONCAT44((uint)((ulonglong)auVar64._0_8_ >> 0x20) & uVar81,
                                SUB84(auVar64._0_8_,0) & uVar80) * dVar2 + auVar64._0_8_;
          auVar52 = roundpd(auVar64,auVar14,1);
          uVar78 = (uVar77 * 4 ^ uVar77) & 0x33333333;
          uVar77 = (uint)(longlong)auVar52._0_8_ & 0xffff;
          uVar77 = (uVar77 << 8 ^ uVar77) & 0xff00ff;
          uVar77 = (uVar77 << 4 ^ uVar77) & 0xf0f0f0f;
          uVar78 = uVar78 * 2 ^ uVar78;
          uVar77 = (uVar77 * 4 ^ uVar77) & 0x33333333;
          uVar78 = ((uVar77 * 2 ^ uVar77) * 2 ^ uVar78) & 0xaaaaaaaa ^ uVar78;
          if (*(int *)&(pTVar3->CellHashToFlatArray).field_0x8 !=
              *(int *)&(pTVar3->CellHashToFlatArray).field_0x34) {
            puVar4 = *(undefined1 **)&(pTVar3->CellHashToFlatArray).field_0x40;
            puVar30 = &(pTVar3->CellHashToFlatArray).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar30 = puVar4;
            }
            iVar27 = *(int *)(puVar30 +
                             (ulonglong)
                             (*(int *)&(pTVar3->CellHashToFlatArray).field_0x48 - 1U & uVar78) * 4);
            if (iVar27 != -1) {
              do {
                lVar42 = *(longlong *)&pTVar3->CellHashToFlatArray + (longlong)iVar27 * 0x14;
                if (*(uint *)(*(longlong *)&pTVar3->CellHashToFlatArray + (longlong)iVar27 * 0x14)
                    == uVar78) {
                  pFVar31 = (FScriptContainerElement *)(lVar42 + 4);
                  if (lVar42 == 0) {
                    pFVar31 = (FScriptContainerElement *)0x0;
                  }
                  if (pFVar31 != (FScriptContainerElement *)0x0) {
                    pTVar5 = param_7->HashEntryForOverlappedCells;
                    pFVar6 = (pTVar5->AllocatorInstance).Data;
                    if (((pFVar6 <= pFVar31) && (pFVar31 < pFVar6 + (longlong)pTVar5->ArrayMax * 8))
                       && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar25)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar27 = pTVar5->ArrayNum;
                    if (iVar27 == pTVar5->ArrayMax) {
                      iVar27 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x408,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                    }
                    pTVar5->ArrayNum = iVar27 + 1;
                    pFVar6 = (pTVar5->AllocatorInstance).Data;
                    *(undefined4 *)(pFVar6 + (longlong)iVar27 * 8) = *(undefined4 *)pFVar31;
                    *(undefined4 *)(pFVar6 + (longlong)iVar27 * 8 + 4) =
                         *(undefined4 *)(pFVar31 + 4);
                  }
                  break;
                }
                iVar27 = *(int *)(lVar42 + 0xc);
              } while (iVar27 != -1);
            }
          }
          lVar35 = lVar35 + 1;
        } while (lVar35 <= (longlong)auVar51._0_8_);
      }
    }
  }
  return;
}

// GJKIntersectionSimd<Chaos::FTriangleRegister,Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143e93090

bool __cdecl
Chaos::GJKIntersectionSimd<Chaos::FTriangleRegister,Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (FTriangleRegister *param_1,TImplicitObjectScaled<Chaos::FConvex,1> *param_2,
          __m128 *param_3,__m128 *param_4,float param_5,__m128 *param_6)

{
  double dVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  FGeomGJKHelperSIMD local_68;
  FGeomGJKHelperSIMD local_50;
  double local_28;
  
  local_28 = (double)param_2->_padding_;
  dVar6 = local_28 - (double)param_2->_padding_;
  dVar1 = (double)param_2->_padding_ - (double)param_2->_padding_;
  dVar5 = (double)param_2->_padding_ - (double)param_2->_padding_;
  if (((dVar1 <= dVar5) || (dVar1 <= dVar6)) && (dVar1 = dVar5, dVar5 <= dVar6)) {
    dVar1 = dVar6;
  }
  auVar4 = minps((undefined1  [16])param_1->A,(undefined1  [16])param_1->B);
  auVar8 = maxps((undefined1  [16])param_1->A,(undefined1  [16])param_1->B);
  auVar4 = minps(auVar4,(undefined1  [16])param_1->C);
  auVar9 = maxps(auVar8,(undefined1  [16])param_1->C);
  auVar2._4_8_ = auVar4._8_8_;
  auVar2._0_4_ = (int)((ulonglong)(double)auVar4._0_4_ >> 0x20);
  auVar8._0_8_ = auVar2._0_8_ << 0x20;
  auVar8._8_4_ = SUB84((double)auVar4._4_4_,0);
  auVar8._12_4_ = (int)((ulonglong)(double)auVar4._4_4_ >> 0x20);
  dVar5 = (double)auVar9._0_4_ - (double)auVar4._0_4_;
  dVar6 = (double)auVar9._4_4_ - auVar8._8_8_;
  dVar7 = (double)auVar9._8_4_ - (double)auVar4._8_4_;
  if (((dVar5 <= dVar6) || (dVar5 <= dVar7)) && (dVar5 = dVar6, dVar6 <= dVar7)) {
    dVar5 = dVar7;
  }
  local_68.Margin = *(float *)&param_2->_padding_;
  if (dVar5 <= dVar1) {
    dVar5 = dVar1;
  }
  local_68.Func =
       FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
  local_50.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_68.Radius = 0.0;
  local_50.Margin = 0.0;
  local_50.Radius = 0.0;
  local_68.Geometry = param_2;
  local_50.Geometry = param_1;
  bVar3 = GJKIntersectionSimd(&local_50,&local_68,(float)dVar5,param_3,param_4,param_5,param_6);
  return bVar3;
}

// GJKIntersectionSimd<Chaos::FTriangleRegister,Chaos::FConvex> @ 143e931d0

bool __cdecl
Chaos::GJKIntersectionSimd<Chaos::FTriangleRegister,Chaos::FConvex>
          (FTriangleRegister *param_1,FConvex *param_2,__m128 *param_3,__m128 *param_4,float param_5
          ,__m128 *param_6)

{
  double dVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  FGeomGJKHelperSIMD local_48;
  FGeomGJKHelperSIMD local_30 [2];
  
  dVar5 = (double)*(float *)&(param_2->LocalBoundingBox).MMax.field_0x8 -
          (double)*(float *)&(param_2->LocalBoundingBox).MMin.field_0x8;
  dVar6 = (double)*(float *)&(param_2->LocalBoundingBox).MMax.field_0x4 -
          (double)*(float *)&(param_2->LocalBoundingBox).MMin.field_0x4;
  dVar1 = (double)*(float *)&(param_2->LocalBoundingBox).MMax -
          (double)*(float *)&(param_2->LocalBoundingBox).MMin;
  if (((dVar1 <= dVar6) || (dVar1 <= dVar5)) && (dVar1 = dVar5, dVar5 <= dVar6)) {
    dVar1 = dVar6;
  }
  auVar4 = minps((undefined1  [16])param_1->A,(undefined1  [16])param_1->B);
  auVar8 = maxps((undefined1  [16])param_1->A,(undefined1  [16])param_1->B);
  auVar4 = minps(auVar4,(undefined1  [16])param_1->C);
  auVar9 = maxps(auVar8,(undefined1  [16])param_1->C);
  auVar2._4_8_ = auVar4._8_8_;
  auVar2._0_4_ = (int)((ulonglong)(double)auVar4._0_4_ >> 0x20);
  auVar8._0_8_ = auVar2._0_8_ << 0x20;
  auVar8._8_4_ = SUB84((double)auVar4._4_4_,0);
  auVar8._12_4_ = (int)((ulonglong)(double)auVar4._4_4_ >> 0x20);
  dVar5 = (double)auVar9._0_4_ - (double)auVar4._0_4_;
  dVar6 = (double)auVar9._4_4_ - auVar8._8_8_;
  dVar7 = (double)auVar9._8_4_ - (double)auVar4._8_4_;
  if (((dVar5 <= dVar6) || (dVar5 <= dVar7)) && (dVar5 = dVar6, dVar6 <= dVar7)) {
    dVar5 = dVar7;
  }
  local_48.Margin = *(float *)&param_2->_padding_;
  local_48.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
  if (dVar5 <= dVar1) {
    dVar5 = dVar1;
  }
  local_30[0].Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_48.Radius = 0.0;
  local_30[0].Margin = 0.0;
  local_30[0].Radius = 0.0;
  local_48.Geometry = param_2;
  local_30[0].Geometry = param_1;
  bVar3 = GJKIntersectionSimd(local_30,&local_48,(float)dVar5,param_3,param_4,param_5,param_6);
  return bVar3;
}

// GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TBox<double,3>_> @ 143e93310

bool __cdecl
Chaos::GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TBox<double,3>_>
          (TTriangle<double> *param_1,TBox<double,3> *param_2,TRigidTransform<double,3> *param_3,
          double *param_4,TVector<double,3> *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,int *param_9,double param_10,double param_11,
          TVector<double,3> *param_12,double param_13)

{
  bool bVar1;
  FGeomGJKHelper local_38;
  FGeomGJKHelper local_20;
  
  local_38.Margin = *(float *)&param_2->_padding_;
  local_38.Func = FGeomGJKHelper::SupportCore<Chaos::TBox<double,3>_>;
  local_20.Func = FGeomGJKHelper::SupportCore<Chaos::TTriangle<double>_>;
  local_20.Margin = 0.0;
  local_38.Geometry = param_2;
  local_20.Geometry = param_1;
  bVar1 = GJKPenetrationImpl<1,double>
                    (&local_20,&local_38,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return bVar1;
}

// GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143e933e0

bool __cdecl
Chaos::
GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (TTriangle<double> *param_1,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_2,
          TRigidTransform<double,3> *param_3,double *param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,int *param_9,
          double param_10,double param_11,TVector<double,3> *param_12,double param_13)

{
  bool bVar1;
  FGeomGJKHelper local_38;
  FGeomGJKHelper local_20;
  
  local_38.Margin = *(float *)&param_2->_padding_;
  local_38.Func =
       FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>;
  local_20.Func = FGeomGJKHelper::SupportCore<Chaos::TTriangle<double>_>;
  local_20.Margin = 0.0;
  local_38.Geometry = param_2;
  local_20.Geometry = param_1;
  bVar1 = GJKPenetrationImpl<1,double>
                    (&local_20,&local_38,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return bVar1;
}

// GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143e934b0

bool __cdecl
Chaos::
GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (TTriangle<double> *param_1,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_2,
          TRigidTransform<double,3> *param_3,double *param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,int *param_9,
          double param_10,double param_11,TVector<double,3> *param_12,double param_13)

{
  bool bVar1;
  FGeomGJKHelper local_38;
  FGeomGJKHelper local_20;
  
  local_38.Margin = *(float *)&param_2->_padding_;
  local_38.Func =
       FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>;
  local_20.Func = FGeomGJKHelper::SupportCore<Chaos::TTriangle<double>_>;
  local_20.Margin = 0.0;
  local_38.Geometry = param_2;
  local_20.Geometry = param_1;
  bVar1 = GJKPenetrationImpl<1,double>
                    (&local_20,&local_38,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return bVar1;
}

// GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143e93580

bool __cdecl
Chaos::
GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (TTriangle<double> *param_1,TImplicitObjectScaled<Chaos::FCapsule,1> *param_2,
          TRigidTransform<double,3> *param_3,double *param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,int *param_9,
          double param_10,double param_11,TVector<double,3> *param_12,double param_13)

{
  bool bVar1;
  FGeomGJKHelper local_38;
  FGeomGJKHelper local_20;
  
  local_38.Margin = *(float *)&param_2->_padding_;
  local_38.Func = FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>;
  local_20.Func = FGeomGJKHelper::SupportCore<Chaos::TTriangle<double>_>;
  local_20.Margin = 0.0;
  local_38.Geometry = param_2;
  local_20.Geometry = param_1;
  bVar1 = GJKPenetrationImpl<1,double>
                    (&local_20,&local_38,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return bVar1;
}

// GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143e93650

bool __cdecl
Chaos::
GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (TTriangle<double> *param_1,TImplicitObjectScaled<Chaos::FConvex,1> *param_2,
          TRigidTransform<double,3> *param_3,double *param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,int *param_9,
          double param_10,double param_11,TVector<double,3> *param_12,double param_13)

{
  bool bVar1;
  FGeomGJKHelper local_38;
  FGeomGJKHelper local_20;
  
  local_38.Margin = *(float *)&param_2->_padding_;
  local_38.Func = FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
  local_20.Func = FGeomGJKHelper::SupportCore<Chaos::TTriangle<double>_>;
  local_20.Margin = 0.0;
  local_38.Geometry = param_2;
  local_20.Geometry = param_1;
  bVar1 = GJKPenetrationImpl<1,double>
                    (&local_20,&local_38,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return bVar1;
}

// GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TSphere<double,3>_> @ 143e93720

bool __cdecl
Chaos::GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::TSphere<double,3>_>
          (TTriangle<double> *param_1,TSphere<double,3> *param_2,TRigidTransform<double,3> *param_3,
          double *param_4,TVector<double,3> *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,int *param_9,double param_10,double param_11,
          TVector<double,3> *param_12,double param_13)

{
  bool bVar1;
  FGeomGJKHelper local_38;
  FGeomGJKHelper local_20;
  
  local_38.Margin = *(float *)&param_2->_padding_;
  local_38.Func = FGeomGJKHelper::SupportCore<Chaos::TSphere<double,3>_>;
  local_20.Func = FGeomGJKHelper::SupportCore<Chaos::TTriangle<double>_>;
  local_20.Margin = 0.0;
  local_38.Geometry = param_2;
  local_20.Geometry = param_1;
  bVar1 = GJKPenetrationImpl<1,double>
                    (&local_20,&local_38,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return bVar1;
}

// GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::FCapsule> @ 143e937f0

bool __cdecl
Chaos::GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::FCapsule>
          (TTriangle<double> *param_1,FCapsule *param_2,TRigidTransform<double,3> *param_3,
          double *param_4,TVector<double,3> *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,int *param_9,double param_10,double param_11,
          TVector<double,3> *param_12,double param_13)

{
  bool bVar1;
  FGeomGJKHelper local_38;
  FGeomGJKHelper local_20;
  
  local_38.Margin = *(float *)&param_2->_padding_;
  local_38.Func = FGeomGJKHelper::SupportCore<Chaos::FCapsule>;
  local_20.Func = FGeomGJKHelper::SupportCore<Chaos::TTriangle<double>_>;
  local_20.Margin = 0.0;
  local_38.Geometry = param_2;
  local_20.Geometry = param_1;
  bVar1 = GJKPenetrationImpl<1,double>
                    (&local_20,&local_38,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return bVar1;
}

// GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::FConvex> @ 143e938c0

bool __cdecl
Chaos::GJKPenetration<1,double,Chaos::TTriangle<double>,Chaos::FConvex>
          (TTriangle<double> *param_1,FConvex *param_2,TRigidTransform<double,3> *param_3,
          double *param_4,TVector<double,3> *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,int *param_9,double param_10,double param_11,
          TVector<double,3> *param_12,double param_13)

{
  bool bVar1;
  FGeomGJKHelper local_38;
  FGeomGJKHelper local_20;
  
  local_38.Margin = *(float *)&param_2->_padding_;
  local_38.Func = FGeomGJKHelper::SupportCore<Chaos::FConvex>;
  local_20.Func = FGeomGJKHelper::SupportCore<Chaos::TTriangle<double>_>;
  local_20.Margin = 0.0;
  local_38.Geometry = param_2;
  local_20.Geometry = param_1;
  bVar1 = GJKPenetrationImpl<1,double>
                    (&local_20,&local_38,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return bVar1;
}

// GJKRaycast2ImplSimd<VectorRegister4Double,1> @ 143e93990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Chaos::GJKRaycast2ImplSimd<VectorRegister4Double,1>
          (FGeomGJKHelperSIMD *param_1,FGeomGJKHelperSIMD *param_2,VectorRegister4Double *param_3,
          VectorRegister4Double *param_4,VectorRegister4Double *param_5,float param_6,float *param_7
          ,VectorRegister4Double *param_8,VectorRegister4Double *param_9,bool param_10,
          VectorRegister4Double *param_11)

{
  double *pdVar1;
  code *pcVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  bool bVar27;
  FGeomGJKHelperSIMD *pFVar28;
  FGeomGJKHelperSIMD *pFVar29;
  undefined8 uVar30;
  float *pfVar31;
  bool bVar32;
  undefined1 uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  EEPAResult EVar38;
  __m128 *p_Var39;
  undefined7 extraout_var;
  double *pdVar40;
  ulonglong uVar41;
  VectorRegister4Double *pVVar42;
  uint uVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  __m128 *p_Var47;
  atomic<unsigned_char> *paVar48;
  void *pvVar49;
  longlong lVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  float fVar56;
  float extraout_XMM0_Da;
  float fVar57;
  float extraout_XMM0_Da_00;
  double dVar58;
  float extraout_XMM0_Dc;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float extraout_XMM0_Db;
  float fVar196;
  float fVar197;
  float fVar198;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar199;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  float fVar200;
  uint uVar264;
  uint uVar265;
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  uint uVar266;
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  uint uVar301;
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined4 uVar302;
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  uint uVar303;
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  float fVar304;
  float fVar329;
  double dVar305;
  float fVar330;
  float fVar331;
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined4 uVar332;
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined4 uVar333;
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined4 uVar334;
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  float fVar335;
  float fVar363;
  double dVar336;
  undefined4 uVar364;
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined4 uVar365;
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined4 uVar366;
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  float fVar367;
  float fVar387;
  undefined1 auVar368 [16];
  double dVar388;
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined4 uVar389;
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  float fVar390;
  float fVar407;
  uint uVar409;
  undefined1 auVar391 [16];
  double dVar410;
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  uint uVar408;
  uint uVar411;
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  uint uVar412;
  double dVar413;
  uint uVar430;
  double dVar432;
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  uint uVar429;
  uint uVar433;
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [16];
  undefined1 auVar421 [16];
  undefined4 uVar431;
  undefined4 uVar434;
  undefined1 auVar422 [16];
  undefined1 auVar423 [16];
  undefined1 auVar424 [16];
  undefined1 auVar425 [16];
  undefined1 auVar426 [16];
  undefined1 auVar427 [16];
  undefined1 auVar428 [16];
  double dVar435;
  double dVar451;
  undefined1 auVar436 [16];
  undefined1 auVar437 [16];
  undefined1 auVar438 [16];
  undefined1 auVar439 [16];
  undefined1 auVar440 [16];
  undefined1 auVar441 [16];
  double dVar452;
  undefined1 auVar442 [16];
  undefined1 auVar443 [16];
  undefined1 auVar444 [16];
  undefined1 auVar445 [16];
  undefined1 auVar446 [16];
  undefined1 auVar447 [16];
  undefined1 auVar448 [16];
  undefined1 auVar449 [16];
  undefined1 auVar450 [16];
  undefined1 auVar453 [16];
  undefined1 auVar454 [16];
  undefined1 auVar455 [16];
  undefined1 auVar456 [16];
  undefined1 auVar457 [16];
  undefined1 auVar458 [16];
  undefined1 auVar459 [16];
  undefined1 auVar460 [16];
  undefined1 auVar461 [16];
  undefined1 auVar462 [16];
  undefined1 auVar463 [16];
  undefined1 auVar464 [16];
  double dVar465;
  undefined1 auVar466 [16];
  double dVar480;
  undefined1 auVar467 [16];
  undefined1 auVar468 [16];
  undefined1 auVar469 [16];
  undefined1 auVar470 [16];
  undefined1 auVar471 [16];
  undefined1 auVar472 [16];
  undefined1 auVar473 [16];
  undefined1 auVar474 [16];
  undefined1 auVar475 [16];
  undefined1 auVar476 [16];
  undefined1 auVar477 [16];
  undefined1 auVar478 [16];
  undefined1 auVar479 [16];
  double dVar481;
  undefined1 auVar482 [16];
  undefined1 auVar483 [16];
  undefined1 auVar484 [16];
  undefined1 auVar485 [16];
  double dVar491;
  undefined1 auVar486 [16];
  undefined1 auVar487 [16];
  undefined1 auVar488 [16];
  undefined1 auVar489 [16];
  undefined1 auVar490 [16];
  double dVar492;
  undefined1 auVar493 [16];
  undefined1 auVar494 [16];
  undefined1 auVar495 [16];
  undefined1 auVar496 [16];
  undefined1 auVar497 [16];
  undefined1 auVar498 [16];
  undefined1 auVar499 [16];
  double dVar500;
  double dVar508;
  undefined1 auVar501 [16];
  undefined1 auVar502 [16];
  undefined1 auVar503 [16];
  undefined1 auVar504 [16];
  undefined1 auVar505 [16];
  undefined1 auVar506 [16];
  undefined1 auVar507 [16];
  undefined1 auVar509 [16];
  undefined1 auVar510 [16];
  undefined1 auVar511 [16];
  undefined1 auVar512 [16];
  undefined1 auVar513 [16];
  undefined1 auVar514 [16];
  undefined1 auStackY_1ed8 [32];
  undefined1 local_1e88 [16];
  undefined1 local_1e78 [16];
  TArray<__m128,TSizedDefaultAllocator<32>_> local_1e68;
  undefined1 local_1e58 [16];
  TArray<__m128,TSizedDefaultAllocator<32>_> local_1e48;
  undefined1 local_1e38 [16];
  undefined1 local_1e28;
  undefined1 local_1e27;
  undefined1 local_1e26;
  undefined1 local_1e25;
  undefined1 local_1e24;
  undefined1 local_1e23;
  undefined1 local_1e22;
  undefined1 local_1e21;
  undefined1 local_1e20;
  undefined1 local_1e1f;
  undefined1 local_1e1e;
  undefined1 local_1e1d;
  undefined1 local_1e1c;
  undefined1 local_1e1b;
  undefined1 local_1e1a;
  undefined1 local_1e19;
  undefined1 local_1e18;
  undefined1 local_1e17;
  undefined1 local_1e16;
  undefined1 local_1e15;
  undefined1 local_1e14;
  undefined1 local_1e13;
  undefined1 local_1e12;
  undefined1 local_1e11;
  undefined1 local_1e10;
  undefined1 local_1e0f;
  undefined1 local_1e0e;
  undefined1 local_1e0d;
  undefined1 local_1e0c;
  undefined1 local_1e0b;
  undefined1 local_1e0a;
  undefined1 local_1e09;
  undefined1 local_1e08;
  undefined1 local_1e07;
  undefined1 local_1e06;
  undefined1 local_1e05;
  undefined1 local_1e04;
  undefined1 local_1e03;
  undefined1 local_1e02;
  undefined1 local_1e01;
  undefined1 local_1e00;
  undefined1 local_1dff;
  undefined1 local_1dfe;
  undefined1 local_1dfd;
  undefined1 local_1dfc;
  undefined1 local_1dfb;
  undefined1 local_1dfa;
  undefined1 local_1df9;
  undefined1 local_1df8;
  uint local_1df4;
  VectorRegister4Double *local_1df0;
  undefined1 local_1de8;
  undefined1 local_1de7;
  undefined1 local_1de6;
  undefined1 local_1de5;
  undefined1 local_1de4;
  undefined1 local_1dd8 [16];
  undefined1 local_1dc8 [16];
  undefined8 local_1db8;
  undefined8 uStack_1db0;
  undefined8 local_1da8;
  undefined8 uStack_1da0;
  undefined8 local_1d98;
  undefined8 uStack_1d90;
  undefined1 local_1d88 [16];
  undefined1 local_1d78 [12];
  uint uStack_1d6c;
  undefined1 local_1d68 [16];
  undefined1 local_1d58 [16];
  undefined1 local_1d48 [16];
  undefined1 local_1d38 [16];
  undefined1 auStack_1d28 [4];
  undefined1 auStack_1d24 [4];
  VectorRegister4Double *local_1d20;
  double local_1d18;
  double dStack_1d10;
  FGeomGJKHelperSIMD *local_1d08;
  undefined1 local_1cf8 [16];
  FGeomGJKHelperSIMD *local_1ce8;
  double local_1cd8;
  double dStack_1cd0;
  undefined1 local_1cc8 [16];
  double local_1cb8;
  double dStack_1cb0;
  double local_1ca8;
  double dStack_1ca0;
  undefined1 local_1c98 [16];
  undefined1 local_1c88 [16];
  VectorRegister4Double *local_1c78;
  float *local_1c70;
  double local_1c68;
  double dStack_1c60;
  double local_1c58;
  double dStack_1c50;
  double local_1c48;
  double dStack_1c40;
  double local_1c38;
  double dStack_1c30;
  undefined8 local_1c28;
  undefined8 uStack_1c20;
  undefined8 local_1c18;
  undefined8 uStack_1c10;
  undefined1 local_1c08 [16];
  undefined1 local_1bf8 [16];
  undefined1 local_1be8 [12];
  uint uStack_1bdc;
  undefined1 local_1bd8 [12];
  uint uStack_1bcc;
  undefined8 local_1bc8;
  undefined8 uStack_1bc0;
  undefined8 local_1bb8;
  undefined8 uStack_1bb0;
  double local_1ba8 [6];
  undefined1 local_1b78 [16];
  double local_1b68;
  double dStack_1b60;
  double local_1b58;
  double dStack_1b50;
  double local_1b48;
  double dStack_1b40;
  double local_1b38;
  double dStack_1b30;
  double local_1b28;
  double dStack_1b20;
  undefined1 local_1b18 [16];
  undefined1 local_1b08 [16];
  undefined1 local_1af8 [16];
  double local_1ae8;
  double dStack_1ae0;
  double local_1ad8;
  double dStack_1ad0;
  double local_1ac8;
  double dStack_1ac0;
  undefined1 local_1ab8 [16];
  undefined1 local_1aa8 [16];
  undefined1 local_1a98 [16];
  double local_1a88;
  double dStack_1a80;
  double local_1a78;
  double dStack_1a70;
  undefined1 local_1a68 [12];
  uint uStack_1a5c;
  undefined1 local_1a58 [12];
  uint uStack_1a4c;
  undefined8 local_1a48;
  undefined8 uStack_1a40;
  double local_1a38 [2];
  undefined1 local_1a28 [16];
  undefined1 local_1a18 [16];
  undefined1 local_1a08 [16];
  undefined1 local_19f8 [16];
  double local_19e8;
  double dStack_19e0;
  double local_19d8;
  double dStack_19d0;
  undefined1 local_19c8 [16];
  undefined1 local_19b8 [16];
  undefined1 local_19a8 [16];
  undefined1 local_1998 [16];
  undefined1 local_1988 [16];
  undefined1 local_1978 [16];
  undefined1 local_1968 [16];
  undefined1 local_1958 [16];
  undefined1 local_1948 [16];
  undefined1 local_1938 [16];
  undefined1 local_1928 [16];
  undefined1 local_1918 [16];
  double local_1908;
  double dStack_1900;
  double local_18f8;
  double dStack_18f0;
  double local_18e8;
  double dStack_18e0;
  double local_18d8;
  double dStack_18d0;
  undefined1 local_18c8 [16];
  double local_18b8;
  double dStack_18b0;
  double local_18a8;
  double dStack_18a0;
  double local_1898;
  double dStack_1890;
  double local_1888;
  double dStack_1880;
  double local_1878;
  double dStack_1870;
  double local_1868;
  double dStack_1860;
  double local_1858;
  double dStack_1850;
  double local_1848;
  double dStack_1840;
  double local_1838;
  double dStack_1830;
  double local_1828;
  double dStack_1820;
  double local_1818;
  double dStack_1810;
  __m128 local_1808;
  double local_17f8;
  double dStack_17f0;
  VectorRegister4Double local_17e8;
  double local_17c8;
  double dStack_17c0;
  double local_17b8;
  double dStack_17b0;
  double local_17a8;
  double dStack_17a0;
  double local_1798;
  double dStack_1790;
  double local_1788;
  double dStack_1780;
  __m128 local_1778;
  __m128 local_1768;
  VectorRegister4Double local_1758;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined8 local_1728;
  undefined8 uStack_1720;
  undefined8 local_1718;
  undefined8 uStack_1710;
  double local_1708 [9];
  double dStack_16c0;
  double local_16b8;
  double dStack_16b0;
  double local_16a8;
  double dStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  double local_1678;
  double dStack_1670;
  double local_1668;
  double dStack_1660;
  double local_1658;
  double dStack_1650;
  double local_1648;
  double dStack_1640;
  undefined8 local_1638;
  undefined8 uStack_1630;
  undefined8 local_1628;
  undefined8 uStack_1620;
  double local_1618;
  double dStack_1610;
  double local_1608;
  double dStack_1600;
  double local_15f8;
  double dStack_15f0;
  double local_15e8;
  double dStack_15e0;
  double local_15d8;
  double dStack_15d0;
  double local_15c8;
  double dStack_15c0;
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined8 local_1598;
  undefined8 uStack_1590;
  double local_1588 [9];
  double dStack_1540;
  double local_1538;
  double dStack_1530;
  double local_1528;
  double dStack_1520;
  undefined8 local_1518;
  undefined8 uStack_1510;
  undefined8 local_1508;
  undefined8 uStack_1500;
  double local_14f8;
  double dStack_14f0;
  double local_14e8;
  double dStack_14e0;
  double local_14d8;
  double dStack_14d0;
  double local_14c8;
  double dStack_14c0;
  undefined8 local_14b8;
  undefined8 uStack_14b0;
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  double local_1498;
  double dStack_1490;
  double local_1488;
  double dStack_1480;
  double local_1478;
  double dStack_1470;
  double local_1468;
  double dStack_1460;
  double local_1458;
  double dStack_1450;
  double local_1448;
  double dStack_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined1 local_1418 [12];
  uint uStack_140c;
  undefined1 local_1408 [16];
  double local_13f8 [7];
  double dStack_13c0;
  undefined1 local_13b8 [16];
  undefined1 local_13a8 [16];
  double local_1398;
  double dStack_1390;
  double local_1388;
  double dStack_1380;
  double local_1378;
  double dStack_1370;
  double local_1368;
  double dStack_1360;
  double local_1358;
  double dStack_1350;
  double local_1348;
  double dStack_1340;
  double local_1338;
  double dStack_1330;
  double local_1328;
  double dStack_1320;
  double local_1318;
  double dStack_1310;
  double local_1308;
  double dStack_1300;
  double local_12f8;
  double dStack_12f0;
  double local_12e8;
  double dStack_12e0;
  undefined1 local_12d8 [16];
  undefined1 local_12c8 [16];
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined1 local_1298 [12];
  uint uStack_128c;
  undefined1 local_1288 [16];
  double local_1278 [7];
  double dStack_1240;
  undefined1 local_1238 [16];
  undefined1 local_1228 [16];
  double local_1218;
  double dStack_1210;
  double local_1208;
  double dStack_1200;
  double local_11f8;
  double dStack_11f0;
  double local_11e8;
  double dStack_11e0;
  double local_11d8;
  double dStack_11d0;
  double local_11c8;
  double dStack_11c0;
  double local_11b8;
  double dStack_11b0;
  double local_11a8;
  double dStack_11a0;
  double local_1198;
  double dStack_1190;
  double local_1188;
  double dStack_1180;
  double local_1178;
  double dStack_1170;
  double local_1168;
  double dStack_1160;
  undefined1 local_1158 [16];
  undefined1 local_1148 [16];
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  double adStack_10b8 [2];
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  float local_1038;
  float fStack_1034;
  float fStack_1030;
  float fStack_102c;
  undefined8 local_1028;
  undefined8 uStack_1020;
  __m128 local_1018;
  undefined8 local_1008;
  undefined8 uStack_1000;
  double local_ff8;
  double dStack_ff0;
  undefined1 local_fe8 [16];
  double local_fd8 [2];
  double local_fc8 [5];
  double dStack_fa0;
  double local_f98;
  double dStack_f90;
  double local_f88;
  double dStack_f80;
  double local_f78;
  double dStack_f70;
  double local_f68;
  double dStack_f60;
  undefined1 local_f58 [16];
  undefined1 local_f48 [16];
  double local_f38;
  double dStack_f30;
  double local_f28;
  double dStack_f20;
  double local_f18;
  double dStack_f10;
  double local_f08;
  double dStack_f00;
  double local_ef8;
  double dStack_ef0;
  double local_ee8;
  double dStack_ee0;
  double local_ed8;
  double dStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  double local_eb8;
  double dStack_eb0;
  double local_ea8;
  double dStack_ea0;
  VectorRegister4Double local_e98;
  uint local_e78;
  uint uStack_e74;
  uint uStack_e70;
  uint uStack_e6c;
  undefined8 local_e68;
  undefined8 uStack_e60;
  uint local_e58;
  uint uStack_e54;
  uint uStack_e50;
  uint uStack_e4c;
  undefined8 local_e48;
  undefined8 uStack_e40;
  uint local_e38;
  uint uStack_e34;
  uint uStack_e30;
  uint uStack_e2c;
  undefined8 local_e28;
  undefined8 uStack_e20;
  double local_e18;
  double dStack_e10;
  double local_e08;
  double dStack_e00;
  double local_df8;
  double dStack_df0;
  double local_de8;
  double dStack_de0;
  uint local_dd8;
  uint uStack_dd4;
  uint uStack_dd0;
  uint uStack_dcc;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  uint local_db8;
  uint uStack_db4;
  uint uStack_db0;
  uint uStack_dac;
  undefined8 local_da8;
  undefined8 uStack_da0;
  uint local_d98;
  uint uStack_d94;
  uint uStack_d90;
  uint uStack_d8c;
  undefined8 local_d88;
  undefined8 uStack_d80;
  uint local_d78;
  uint uStack_d74;
  uint uStack_d70;
  uint uStack_d6c;
  undefined8 local_d68;
  undefined8 uStack_d60;
  uint local_d58;
  uint uStack_d54;
  uint uStack_d50;
  uint uStack_d4c;
  undefined8 local_d48;
  undefined8 uStack_d40;
  double local_d38 [7];
  double dStack_d00;
  double local_cf8;
  double dStack_cf0;
  double local_ce8;
  double dStack_ce0;
  double local_cd8;
  double dStack_cd0;
  double local_cc8;
  double dStack_cc0;
  uint local_cb8;
  uint uStack_cb4;
  uint uStack_cb0;
  uint uStack_cac;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  double local_c98;
  double dStack_c90;
  double local_c88;
  double dStack_c80;
  uint local_c78;
  uint uStack_c74;
  uint uStack_c70;
  uint uStack_c6c;
  undefined8 local_c68;
  undefined8 uStack_c60;
  uint local_c58;
  uint uStack_c54;
  uint uStack_c50;
  uint uStack_c4c;
  undefined8 local_c48;
  undefined8 uStack_c40;
  uint local_c38;
  uint uStack_c34;
  uint uStack_c30;
  uint uStack_c2c;
  undefined8 local_c28;
  undefined8 uStack_c20;
  double local_c18;
  double dStack_c10;
  double local_c08;
  double dStack_c00;
  double local_bf8;
  double dStack_bf0;
  double local_be8;
  double dStack_be0;
  double local_bd8;
  double dStack_bd0;
  double local_bc8;
  undefined8 uStack_bc0;
  double local_bb8;
  double dStack_bb0;
  double local_ba8;
  double dStack_ba0;
  double local_b98;
  double dStack_b90;
  double local_b88;
  double dStack_b80;
  double local_b78;
  double dStack_b70;
  double local_b68;
  double dStack_b60;
  double local_b58;
  double dStack_b50;
  double local_b48;
  double dStack_b40;
  uint local_b38;
  uint uStack_b34;
  uint uStack_b30;
  uint uStack_b2c;
  undefined1 local_b28 [16];
  uint local_b18;
  uint uStack_b14;
  uint uStack_b10;
  uint uStack_b0c;
  uint local_b08;
  uint uStack_b04;
  uint uStack_b00;
  uint uStack_afc;
  double local_af8;
  double dStack_af0;
  double local_ae8;
  undefined8 uStack_ae0;
  double local_ad8;
  double dStack_ad0;
  double local_ac8;
  undefined8 uStack_ac0;
  double local_ab8;
  double dStack_ab0;
  double local_aa8;
  double dStack_aa0;
  double local_a98;
  double dStack_a90;
  double local_a88;
  undefined8 uStack_a80;
  double local_a78;
  double dStack_a70;
  double local_a68;
  double dStack_a60;
  double local_a58;
  double dStack_a50;
  undefined1 local_a48 [16];
  double local_a38;
  double dStack_a30;
  double local_a28;
  double dStack_a20;
  double local_a18;
  double dStack_a10;
  undefined1 local_a08 [16];
  double local_9f8;
  double dStack_9f0;
  double local_9e8;
  undefined8 uStack_9e0;
  double local_9d8;
  double dStack_9d0;
  double local_9c8;
  double dStack_9c0;
  double local_9b8;
  double dStack_9b0;
  double local_9a8;
  double dStack_9a0;
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  __m128 local_978;
  double local_968;
  double dStack_960;
  double local_958;
  double dStack_950;
  double local_948;
  double dStack_940;
  double local_938;
  double dStack_930;
  double local_928;
  double dStack_920;
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  double local_8f8;
  undefined8 uStack_8f0;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  double dStack_8c0;
  double local_8b8;
  double dStack_8b0;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  double local_878;
  double dStack_870;
  uint local_868;
  uint uStack_864;
  uint uStack_860;
  uint uStack_85c;
  uint local_858;
  uint uStack_854;
  uint uStack_850;
  uint uStack_84c;
  uint local_848;
  uint uStack_844;
  uint uStack_840;
  uint uStack_83c;
  uint local_838;
  uint uStack_834;
  uint uStack_830;
  uint uStack_82c;
  double local_828;
  double dStack_820;
  double local_818;
  undefined8 uStack_810;
  double local_808;
  double dStack_800;
  double local_7f8;
  undefined8 uStack_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double dStack_7c0;
  double local_7b8;
  undefined8 uStack_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  double local_788;
  double dStack_780;
  undefined1 local_778 [16];
  double local_768;
  double dStack_760;
  double local_758;
  double dStack_750;
  double local_748;
  double dStack_740;
  undefined1 local_738 [16];
  double local_728;
  double dStack_720;
  double local_718;
  undefined8 uStack_710;
  double local_708;
  double dStack_700;
  double local_6f8;
  double dStack_6f0;
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double adStack_408 [3];
  double adStack_3f0 [13];
  double adStack_388 [3];
  double adStack_370 [13];
  VectorRegister4Double local_308;
  VectorRegister4Double local_2e8;
  VectorRegister4Double local_2c8;
  TSupportBAtOriginHelperSIMD<1> local_2a8;
  undefined1 local_268 [8];
  double dStack_260;
  undefined1 local_258 [8];
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1ed8;
  local_1df0 = param_8;
  local_1c70 = param_7;
  local_1d20 = param_3;
  local_1d08 = param_2;
  local_1ce8 = param_1;
  local_1c78 = param_4;
  if ((param_6 < 0.0) &&
     (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8635886429920033226>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\GJK.h"
                          ,0x636,"RayLength >= 0"), bVar32)) {
    pcVar2 = (code *)swi(3);
    uVar33 = (*pcVar2)();
    return (bool)uVar33;
  }
  if ((0.0 < param_1->Radius) || (0.0 < param_2->Radius)) {
    fVar56 = 0.0;
LAB_143e93af6:
    fVar200 = 0.0;
  }
  else {
    if (param_1->Margin < param_2->Margin) {
      fVar56 = param_1->Margin * __real_3d4ccccd;
      goto LAB_143e93af6;
    }
    fVar200 = param_2->Margin * __real_3d4ccccd;
    fVar56 = 0.0;
  }
  fVar200 = fVar200 + param_2->Radius;
  local_148 = 0.0;
  uStack_140 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0.0;
  local_1e88 = ZEXT816(0);
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_1e78 = ZEXT816(0);
  local_118 = 0.0;
  dStack_110 = 0.0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  param_1->Margin = fVar56 + param_1->Radius;
  param_2->Margin = fVar200;
  fVar56 = param_1->Margin;
  local_1c58 = (double)fVar56;
  dStack_1c50 = (double)fVar56;
  local_1c68 = (double)fVar56;
  dStack_1c60 = (double)fVar56;
  local_1798 = (double)fVar200;
  dStack_1790 = (double)fVar200;
  local_17b8 = local_1798 + local_1c58;
  dStack_17b0 = dStack_1790 + dStack_1c50;
  local_1788 = (double)fVar200;
  dStack_1780 = (double)fVar200;
  auVar493._8_4_ = SUB84(dStack_17b0,0);
  auVar493._0_8_ = local_17b8;
  auVar493._12_4_ = (int)((ulonglong)dStack_17b0 >> 0x20);
  auVar486._8_4_ = SUB84(dStack_1780,0);
  auVar486._0_8_ = local_1788;
  auVar486._12_4_ = (int)((ulonglong)dStack_1780 >> 0x20);
  dVar492 = local_17b8 * local_17b8 + ___xmm_3eb0c6f7a00000003eb0c6f7a0000000;
  local_17a8 = local_1788 + local_1c68;
  dStack_17a0 = auVar486._8_8_ + dStack_1c60;
  auVar202._8_4_ = SUB84(dStack_17a0,0);
  auVar202._0_8_ = local_17a8;
  auVar202._12_4_ = (int)((ulonglong)dStack_17a0 >> 0x20);
  _local_268 = ZEXT816(0);
  local_17c8 = local_17a8 * local_17a8 + ___xmm_3eb0c6f7a00000003eb0c6f7a0000000;
  dStack_17c0 = auVar202._8_8_ * dStack_17a0 + _UNK_150b28848;
  _local_258 = ZEXT816(0);
  local_248._0_4_ = 0;
  local_248._4_4_ = 0;
  uStack_240._0_4_ = 0;
  uStack_240._4_4_ = 0;
  local_238._0_4_ = 0;
  local_238._4_4_ = 0;
  uStack_230._0_4_ = 0;
  uStack_230._4_4_ = 0;
  local_228 = 0.0;
  dStack_220 = 0.0;
  local_218 = 0.0;
  dStack_210 = 0.0;
  local_208 = 0.0;
  dStack_200 = 0.0;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_1c8 = 0.0;
  uStack_1c0 = 0.0;
  local_1b8 = 0.0;
  uStack_1b0 = 0.0;
  local_1a8 = 0.0;
  dStack_1a0 = 0.0;
  local_198 = 0.0;
  dStack_190 = 0.0;
  local_188 = 0.0;
  dStack_180 = 0.0;
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_1d38._8_8_ = auVar493._8_8_ * dStack_17b0 + _UNK_150b28848;
  local_1d38._0_8_ = dVar492;
  TMakeVectorRegister<VectorRegister4Double>(&local_e98,param_6,param_6,param_6,param_6);
  p_Var39 = &local_1808;
  uVar53 = 0;
  uVar37 = 0;
  local_548 = (local_1d20->XY).m128d_f64[0];
  dStack_540 = (local_1d20->XY).m128d_f64[1];
  local_538 = (local_1d20->ZW).m128d_f64[0];
  dStack_530 = (local_1d20->ZW).m128d_f64[1];
  local_1808.m128_u64[0] =
       (ulong64)(local_548 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]);
  local_1808.m128_u64[1] =
       (ulong64)(dStack_540 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]);
  local_17f8 = local_538 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dStack_17f0 = dStack_530 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  TGJKSupportHelperSIMD<VectorRegister4Double,1>::Support
            (param_1,param_2,param_11,(VectorRegister4Double *)p_Var39,local_1d20,&local_1758,
             &local_17e8);
  uVar302 = SUB84(param_1,0);
  dVar199 = (double)CONCAT44(uStack_230._4_4_,(uint)uStack_230);
  dVar305 = (double)CONCAT44(local_238._4_4_,(uint)local_238);
  dVar451 = (double)CONCAT44(uStack_240._4_4_,(uint)uStack_240);
  dVar432 = (double)CONCAT44(local_248._4_4_,(uint)local_248);
  local_1868 = (param_4->XY).m128d_f64[0];
  dStack_1860 = (param_4->XY).m128d_f64[1];
  local_1858 = (param_4->ZW).m128d_f64[0];
  dStack_1850 = (param_4->ZW).m128d_f64[1];
  local_528 = local_1868;
  dStack_520 = dStack_1860;
  local_1c38 = (double)_UNK_150689538;
  dStack_1c30 = (double)_UNK_15068953c;
  local_518 = local_1858;
  dStack_510 = dStack_1850;
  local_168 = local_1758.XY.m128d_f64[0];
  uStack_160 = local_1758.XY.m128d_f64[1];
  local_158 = local_1758.ZW.m128d_f64[0];
  uStack_150 = local_1758.ZW.m128d_f64[1];
  local_1c08._0_8_ = local_1868 - (local_1758.XY.m128d_f64[0] - local_17e8.XY.m128d_f64[0]);
  local_1c08._8_8_ = dStack_1860 - (local_1758.XY.m128d_f64[1] - local_17e8.XY.m128d_f64[1]);
  local_1e8 = local_17e8.XY.m128d_f64[0];
  uStack_1e0 = local_17e8.XY.m128d_f64[1];
  auVar466._8_4_ = SUB84(local_1c08._8_8_,0);
  auVar466._0_8_ = local_1c08._0_8_;
  auVar466._12_4_ = (int)((ulonglong)local_1c08._8_8_ >> 0x20);
  local_1bf8._0_8_ = local_1858 - (local_1758.ZW.m128d_f64[0] - local_17e8.ZW.m128d_f64[0]);
  local_1bf8._8_8_ = dStack_1850 - (local_1758.ZW.m128d_f64[1] - local_17e8.ZW.m128d_f64[1]);
  local_1d8 = local_17e8.ZW.m128d_f64[0];
  uStack_1d0 = local_17e8.ZW.m128d_f64[1];
  local_1cd8 = 0.0;
  dStack_1cd0 = 0.0;
  local_1d18 = 0.0;
  dStack_1d10 = 0.0;
  dVar58 = local_1bf8._0_8_ * local_1bf8._0_8_ + local_1c08._0_8_ * local_1c08._0_8_ +
           auVar466._8_8_ * local_1c08._8_8_;
  fVar56 = (float)dVar58;
  auVar439._0_8_ = (double)CONCAT44((float)dVar58,fVar56);
  local_1c48 = 0.0;
  dStack_1c40 = 0.0;
  auVar439._8_8_ = auVar439._0_8_;
  if (((float)dVar492 <= fVar56) || ((param_10 && (__real_358637bd <= fVar56)))) {
    bVar32 = false;
  }
  else {
    bVar32 = true;
  }
  local_18a8 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_18a0 = _UNK_150b28868;
  local_1898 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_1890 = _UNK_150b28868;
  local_1c98._8_8_ = _UNK_150b28868;
  local_1c98._0_8_ = ___xmm_47efffffe000000047efffffe0000000;
  local_1c88._8_8_ = _UNK_150b28868;
  local_1c88._0_8_ = ___xmm_47efffffe000000047efffffe0000000;
  uVar35 = uVar37;
  if (!bVar32) {
    auVar448._4_4_ = _UNK_150689514;
    auVar448._0_4_ = ___xmm_00000000000000003ff0000000000000;
    auVar448._8_4_ = _UNK_150689518;
    auVar448._12_4_ = _UNK_15068951c;
    auVar496._8_8_ = _UNK_150689688;
    auVar496._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
    uVar41 = uVar53;
    uVar52 = uVar53;
    bVar27 = bVar32;
    while( true ) {
      dVar492 = dStack_1cd0;
      dVar58 = local_1cd8;
      uVar302 = SUB84(param_1,0);
      uVar37 = (uint)uVar52;
      local_1cc8._8_8_ = dStack_1d10;
      local_1cc8._0_8_ = local_1d18;
      local_1df4 = (int)uVar41 + 1;
      pvVar49 = (void *)(ulonglong)local_1df4;
      uVar35 = local_1df4;
      local_1c98 = local_1c88;
      if (0x1f < (int)uVar41) break;
      dVar465 = local_1c08._0_8_;
      dVar480 = local_1c08._8_8_;
      dVar500 = local_1bf8._0_8_;
      dVar508 = local_1bf8._8_8_;
      auVar201._0_8_ = dVar500 * dVar500 + dVar465 * dVar465;
      auVar201._8_8_ = dVar508 * dVar508 + dVar480 * dVar480;
      auVar59._8_4_ = SUB84(auVar201._8_8_,0);
      auVar59._0_8_ = auVar201._0_8_;
      auVar59._12_4_ = (int)((ulonglong)auVar201._8_8_ >> 0x20);
      auVar60._0_8_ = auVar59._8_8_ + auVar201._0_8_;
      auVar60._8_8_ = auVar201._0_8_ + auVar201._8_8_;
      auVar202 = sqrtpd(auVar201,auVar60);
      auVar466 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar202);
      dVar465 = auVar466._0_8_ * dVar465;
      dVar480 = auVar466._8_8_ * dVar480;
      auVar202 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar202);
      local_1028 = CONCAT44((float)dVar480,(float)dVar465);
      dVar500 = auVar202._0_8_ * dVar500;
      dVar508 = auVar202._8_8_ * dVar508;
      uStack_1020 = CONCAT44((float)dVar508,(float)dVar500);
      local_248 = dVar432;
      uStack_240 = dVar451;
      local_238 = dVar305;
      uStack_230 = dVar199;
      (*local_1ce8->Func)(local_1ce8->Geometry,pvVar49,auVar439._0_4_,p_Var39);
      fVar335 = (float)(double)local_1808.m128_u64[0];
      fVar363 = (float)(double)local_1808.m128_u64[1];
      dVar435 = (double)extraout_XMM0_Da;
      dVar451 = (double)extraout_XMM0_Db;
      dVar413 = (double)extraout_XMM0_Dc;
      dVar432 = (double)extraout_XMM0_Dd;
      fVar367 = (float)(0.0 - dVar465);
      fVar387 = (float)(0.0 - dVar480);
      fVar56 = (float)(0.0 - dVar500);
      fVar196 = (float)(0.0 - dVar508);
      local_508 = (local_1d20->XY).m128d_f64[0];
      dStack_500 = (local_1d20->XY).m128d_f64[1];
      local_4f8 = (local_1d20->ZW).m128d_f64[0];
      dStack_4f0 = (local_1d20->ZW).m128d_f64[1];
      fVar390 = (float)local_508;
      fVar407 = (float)dStack_500;
      fVar200 = (float)local_4f8;
      fVar197 = (float)dStack_4f0;
      fVar57 = (float)local_17f8;
      fVar198 = (float)dStack_17f0;
      fVar304 = fVar387 * fVar335 - fVar363 * fVar367;
      fVar329 = fVar56 * fVar363 - fVar57 * fVar387;
      fVar330 = fVar367 * fVar57 - fVar335 * fVar56;
      fVar331 = fVar196 * fVar198 - fVar198 * fVar196;
      fVar329 = fVar329 + fVar329;
      fVar330 = fVar330 + fVar330;
      fVar304 = fVar304 + fVar304;
      fVar331 = fVar331 + fVar331;
      local_1038 = fVar198 * fVar329 + fVar367 + (fVar304 * fVar363 - fVar330 * fVar57);
      fStack_1034 = fVar198 * fVar330 + fVar387 + (fVar329 * fVar57 - fVar304 * fVar335);
      fStack_1030 = fVar198 * fVar304 + fVar56 + (fVar330 * fVar335 - fVar329 * fVar363);
      fStack_102c = fVar198 * fVar331 + fVar196 + (fVar331 * fVar198 - fVar331 * fVar198);
      p_Var47 = local_1d08->Geometry;
      local_1758.XY.m128d_f64[0] = dVar435;
      local_1758.XY.m128d_f64[1] = dVar451;
      local_1758.ZW.m128d_f64[0] = dVar413;
      local_1758.ZW.m128d_f64[1] = dVar432;
      p_Var39 = (*local_1d08->Func)(p_Var47,pvVar49,fVar363,p_Var39);
      lVar50 = (longlong)(int)uVar37;
      auVar368._8_4_ = SUB84(dVar451,0);
      auVar368._0_8_ = dVar435;
      auVar368._12_4_ = (int)((ulonglong)dVar451 >> 0x20);
      lVar51 = lVar50 * 0x20;
      fVar56 = extraout_XMM0_Db_00 * fVar390 - fVar407 * extraout_XMM0_Da_00;
      fVar57 = extraout_XMM0_Dc_00 * fVar407 - fVar200 * extraout_XMM0_Db_00;
      fVar196 = extraout_XMM0_Da_00 * fVar200 - fVar390 * extraout_XMM0_Dc_00;
      fVar198 = extraout_XMM0_Dd_00 * fVar197 - fVar197 * extraout_XMM0_Dd_00;
      fVar57 = fVar57 + fVar57;
      fVar196 = fVar196 + fVar196;
      fVar56 = fVar56 + fVar56;
      fVar198 = fVar198 + fVar198;
      local_17e8.XY.m128d_f64[0] =
           (double)(fVar197 * fVar57 + extraout_XMM0_Da_00 + (fVar56 * fVar407 - fVar196 * fVar200))
      ;
      local_17e8.XY.m128d_f64[1] =
           (double)(fVar197 * fVar196 + extraout_XMM0_Db_00 + (fVar57 * fVar200 - fVar56 * fVar390))
      ;
      local_17e8.ZW.m128d_f64[0] =
           (double)(fVar197 * fVar56 + extraout_XMM0_Dc_00 + (fVar196 * fVar390 - fVar57 * fVar407))
      ;
      local_17e8.ZW.m128d_f64[1] =
           (double)(fVar197 * fVar198 + extraout_XMM0_Dd_00 +
                   (fVar198 * fVar197 - fVar198 * fVar197));
      dVar388 = auVar368._8_8_ - local_17e8.XY.m128d_f64[1];
      auVar391._8_4_ = SUB84(dVar432,0);
      auVar391._0_8_ = dVar413;
      auVar391._12_4_ = (int)((ulonglong)dVar432 >> 0x20);
      dVar410 = auVar391._8_8_ - local_17e8.ZW.m128d_f64[1];
      (&local_168)[lVar50 * 4] = dVar435;
      (&uStack_160)[lVar50 * 4] = dVar451;
      (&local_158)[lVar50 * 4] = dVar413;
      (&uStack_150)[lVar50 * 4] = dVar432;
      (&local_1e8)[lVar50 * 4] = local_17e8.XY.m128d_f64[0];
      (&uStack_1e0)[lVar50 * 4] = local_17e8.XY.m128d_f64[1];
      dVar305 = local_1858 - (dVar413 - local_17e8.ZW.m128d_f64[0]);
      dVar432 = local_1868 - (dVar435 - local_17e8.XY.m128d_f64[0]);
      dVar451 = dStack_1860 - dVar388;
      (&local_1d8)[lVar50 * 4] = local_17e8.ZW.m128d_f64[0];
      (&uStack_1d0)[lVar50 * 4] = local_17e8.ZW.m128d_f64[1];
      auVar61._8_4_ = SUB84(dVar451,0);
      auVar61._0_8_ = dVar432;
      auVar61._12_4_ = (int)((ulonglong)dVar451 >> 0x20);
      dVar336 = dVar305 * dVar500 + dVar432 * dVar465 + auVar61._8_8_ * dVar480;
      auVar203._8_8_ = -(ulonglong)(dStack_17a0 < dVar336);
      auVar203._0_8_ = -(ulonglong)(local_17a8 < dVar336);
      iVar34 = movmskpd((int)p_Var39,auVar203);
      auVar62._8_8_ = -(ulonglong)(dStack_17b0 < dVar336);
      auVar62._0_8_ = -(ulonglong)(local_17b8 < dVar336);
      uVar43 = movmskpd((int)p_Var47,auVar62);
      uVar35 = iVar34 * 4 | uVar43;
      if (uVar35 == 0) {
        *(double *)(local_268 + lVar51) = dVar432;
        *(double *)(local_268 + lVar51 + 8) = dVar451;
        uVar52 = (ulonglong)(uVar37 + 1);
        *(double *)(local_258 + lVar51) = dVar305;
        *(double *)(local_258 + lVar51 + 8) = dStack_1850 - dVar410;
        dVar432 = local_248;
        dVar451 = uStack_240;
        dVar305 = local_238;
        dVar199 = uStack_230;
LAB_143e94310:
        uVar35 = 0;
        paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar43;
        if (bVar27) {
          auVar76._8_8_ = -(ulonglong)(0.0 <= dVar336);
          auVar76._0_8_ = -(ulonglong)(0.0 <= dVar336);
          iVar34 = movmskpd(0,auVar76);
          uVar43 = movmskpd(uVar43,auVar76);
          paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar43;
          uVar37 = iVar34 * 4 | uVar43;
          uVar35 = 0;
          if (uVar37 != 0) {
            auVar205._8_8_ = -(ulonglong)((double)local_1c88._8_8_ <= _UNK_150b28848 + dVar336);
            auVar205._0_8_ =
                 -(ulonglong)
                  ((double)local_1c88._0_8_ <= ___xmm_3eb0c6f7a00000003eb0c6f7a0000000 + dVar336);
            iVar34 = movmskpd(uVar37,auVar205);
            auVar77._8_8_ = -(ulonglong)((double)local_1c98._8_8_ <= _UNK_150b28848 + dVar336);
            auVar77._0_8_ =
                 -(ulonglong)
                  ((double)local_1c98._0_8_ <= ___xmm_3eb0c6f7a00000003eb0c6f7a0000000 + dVar336);
            uVar35 = movmskpd(uVar43,auVar77);
            paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar35;
            uVar35 = iVar34 * 4 | uVar35;
            bVar32 = uVar35 != 0;
          }
        }
      }
      else {
        local_4e8 = (param_5->XY).m128d_f64[0];
        dStack_4e0 = (param_5->XY).m128d_f64[1];
        auVar267._8_4_ = SUB84(dVar480,0);
        auVar267._0_8_ = dVar465;
        auVar267._12_4_ = (int)((ulonglong)dVar480 >> 0x20);
        local_4d8 = (param_5->ZW).m128d_f64[0];
        auVar306._0_8_ = dVar500 * local_4d8 + dVar465 * local_4e8 + auVar267._8_8_ * dStack_4e0;
        dStack_4d0 = (param_5->ZW).m128d_f64[1];
        auVar306._8_8_ = auVar306._0_8_;
        auVar63._8_8_ = -(ulonglong)(0.0 <= auVar306._0_8_);
        auVar63._0_8_ = -(ulonglong)(0.0 <= auVar306._0_8_);
        uVar35 = movmskpd(uVar35,auVar63);
        iVar34 = movmskpd(uVar43,auVar63);
        if ((uVar35 & 0x3fffffff) != 0 || iVar34 != 0) {
          return false;
        }
        auVar64._8_4_ = SUB84(dVar336,0);
        auVar64._0_8_ = dVar336;
        uVar302 = (undefined4)((ulonglong)dVar336 >> 0x20);
        auVar64._12_4_ = uVar302;
        auVar65._0_8_ = dVar336 - local_17b8;
        auVar65._8_8_ = auVar64._8_8_ - dStack_17b0;
        auVar202 = divpd(auVar65,auVar306);
        local_1cd8 = local_1cd8 - auVar202._0_8_;
        dStack_1cd0 = dStack_1cd0 - auVar202._8_8_;
        auVar66._8_4_ = SUB84(dVar336,0);
        auVar66._0_8_ = dVar336;
        auVar66._12_4_ = uVar302;
        auVar67._0_8_ = dVar336 - local_17a8;
        auVar67._8_8_ = auVar66._8_8_ - dStack_17a0;
        auVar202 = divpd(auVar67,auVar306);
        auVar509._8_8_ = -(ulonglong)(dVar492 < dStack_1cd0);
        auVar509._0_8_ = -(ulonglong)(dVar58 < local_1cd8);
        local_1d18 = local_1d18 - auVar202._0_8_;
        dStack_1d10 = dStack_1d10 - auVar202._8_8_;
        auVar68._8_8_ = -(ulonglong)((double)local_1cc8._8_8_ < dStack_1d10);
        auVar68._0_8_ = -(ulonglong)((double)local_1cc8._0_8_ < local_1d18);
        iVar36 = movmskpd(0,auVar68);
        uVar43 = movmskpd(iVar34,auVar509);
        uVar35 = iVar36 * 4 | uVar43;
        dVar432 = local_248;
        dVar451 = uStack_240;
        dVar305 = local_238;
        dVar199 = uStack_230;
        if (uVar35 == 0) goto LAB_143e94310;
        auVar204._8_8_ = -(ulonglong)(local_e98.ZW.m128d_f64[1] < dStack_1d10);
        auVar204._0_8_ = -(ulonglong)(local_e98.ZW.m128d_f64[0] < local_1d18);
        uVar35 = movmskpd(uVar35,auVar204);
        auVar69._8_8_ = -(ulonglong)(local_e98.XY.m128d_f64[1] < dStack_1cd0);
        auVar69._0_8_ = -(ulonglong)(local_e98.XY.m128d_f64[0] < local_1cd8);
        uVar43 = movmskpd(uVar43,auVar69);
        paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar43;
        if ((uVar35 & 0x3fffffff) != 0 || uVar43 != 0) {
          return false;
        }
        local_4c8 = (param_5->XY).m128d_f64[0];
        dStack_4c0 = (param_5->XY).m128d_f64[1];
        auVar307._8_4_ = SUB84(dStack_1cd0,0);
        auVar307._0_8_ = local_1cd8;
        auVar307._12_4_ = (int)((ulonglong)dStack_1cd0 >> 0x20);
        local_4a8 = (param_4->XY).m128d_f64[0];
        dStack_4a0 = (param_4->XY).m128d_f64[1];
        uVar52 = (ulonglong)(uVar37 + 1);
        local_4b8 = (param_5->ZW).m128d_f64[0];
        dStack_4b0 = (param_5->ZW).m128d_f64[1];
        bVar27 = false;
        local_498 = (param_4->ZW).m128d_f64[0];
        dStack_490 = (param_4->ZW).m128d_f64[1];
        local_1868 = local_1cd8 * local_4c8 + local_4a8;
        dStack_1860 = auVar307._8_8_ * dStack_4c0 + dStack_4a0;
        uVar302 = SUB84(dStack_1860,0);
        auVar70._8_4_ = uVar302;
        auVar70._0_8_ = local_1868;
        uVar332 = (undefined4)((ulonglong)dStack_1860 >> 0x20);
        auVar70._12_4_ = uVar332;
        dStack_260 = auVar70._8_8_ - (uStack_160 - uStack_1e0);
        local_268 = (undefined1  [8])(local_1868 - (local_168 - local_1e8));
        local_1858 = local_4b8 * local_1d18 + local_498;
        dStack_1850 = dStack_4b0 * dStack_1d10 + dStack_490;
        uVar333 = SUB84(dStack_1850,0);
        auVar71._8_4_ = uVar333;
        auVar71._0_8_ = local_1858;
        uVar364 = (undefined4)((ulonglong)dStack_1850 >> 0x20);
        auVar71._12_4_ = uVar364;
        dStack_250 = auVar71._8_8_ - (uStack_150 - uStack_1d0);
        local_258 = (undefined1  [8])(local_1858 - (local_158 - local_1d8));
        auVar72._8_4_ = uVar302;
        auVar72._0_8_ = local_1868;
        auVar72._12_4_ = uVar332;
        dVar432 = local_1868 - (local_148 - local_1c8);
        dVar305 = auVar72._8_8_ - (uStack_140 - uStack_1c0);
        local_248._0_4_ = SUB84(dVar432,0);
        local_248._4_4_ = (uint)((ulonglong)dVar432 >> 0x20);
        uStack_240._0_4_ = SUB84(dVar305,0);
        uStack_240._4_4_ = (uint)((ulonglong)dVar305 >> 0x20);
        auVar73._8_4_ = uVar333;
        auVar73._0_8_ = local_1858;
        auVar73._12_4_ = uVar364;
        dVar451 = local_1858 - (local_138 - local_1b8);
        dVar199 = auVar73._8_8_ - (uStack_130 - uStack_1b0);
        local_238._0_4_ = SUB84(dVar451,0);
        local_238._4_4_ = (uint)((ulonglong)dVar451 >> 0x20);
        uStack_230._0_4_ = SUB84(dVar199,0);
        uStack_230._4_4_ = (uint)((ulonglong)dVar199 >> 0x20);
        auVar74._8_4_ = uVar302;
        auVar74._0_8_ = local_1868;
        auVar74._12_4_ = uVar332;
        local_228 = local_1868 - (local_128 - local_1a8);
        dStack_220 = auVar74._8_8_ - (dStack_120 - dStack_1a0);
        auVar75._8_4_ = uVar333;
        auVar75._0_8_ = local_1858;
        auVar75._12_4_ = uVar364;
        local_1c48 = dVar465;
        dStack_1c40 = dVar480;
        local_218 = local_1858 - (local_118 - local_198);
        dStack_210 = auVar75._8_8_ - (dStack_110 - dStack_190);
        local_1c38 = dVar500;
        dStack_1c30 = dVar508;
        auVar337._0_8_ = local_1858 - (dVar413 - local_17e8.ZW.m128d_f64[0]);
        auVar337._8_8_ = dStack_1850 - dVar410;
        local_248 = dVar432;
        uStack_240 = dVar305;
        local_238 = dVar451;
        uStack_230 = dVar199;
        *(double *)(local_268 + lVar51) = local_1868 - (dVar435 - local_17e8.XY.m128d_f64[0]);
        *(double *)(local_268 + lVar51 + 8) = dStack_1860 - dVar388;
        *(undefined1 (*) [16])(local_258 + lVar51) = auVar337;
        local_1c98._8_8_ = dStack_18a0;
        local_1c98._0_8_ = local_18a8;
        local_1c88._8_8_ = dStack_1890;
        local_1c88._0_8_ = local_1898;
        uVar35 = 0;
        dVar432 = local_248;
        dVar451 = uStack_240;
        dVar305 = local_238;
        dVar199 = uStack_230;
      }
      uStack_230._4_4_ = (uint)((ulonglong)dVar199 >> 0x20);
      uStack_230._0_4_ = SUB84(dVar199,0);
      local_238._4_4_ = (uint)((ulonglong)dVar305 >> 0x20);
      local_238._0_4_ = SUB84(dVar305,0);
      uStack_240._4_4_ = (uint)((ulonglong)dVar451 >> 0x20);
      uStack_240._0_4_ = SUB84(dVar451,0);
      local_248._4_4_ = (uint)((ulonglong)dVar432 >> 0x20);
      local_248._0_4_ = SUB84(dVar432,0);
      dVar465 = auVar496._8_8_;
      dVar492 = auVar496._0_8_;
      uVar37 = (uint)uVar52;
      dVar480 = local_268._8_8_;
      dVar58 = local_258;
      uVar43 = local_268._0_4_;
      uVar303 = local_268._4_4_;
      uVar301 = local_268._8_4_;
      uVar46 = local_268._12_4_;
      uVar45 = local_258._0_4_;
      uVar265 = local_258._4_4_;
      uVar266 = local_258._8_4_;
      uVar264 = local_258._12_4_;
      fVar56 = (float)GlobalVectorConstants::FloatOne._0_8_;
      fVar200 = (float)((ulonglong)GlobalVectorConstants::FloatOne._0_8_ >> 0x20);
      local_248 = dVar432;
      uStack_240 = dVar451;
      local_238 = dVar305;
      uStack_230 = dVar199;
      if (bVar32) {
        if (uVar37 == 1) {
          local_1df8 = 0;
        }
        else {
          uVar302 = SUB84(paVar48,0);
          if (uVar37 == 2) {
            local_1dfb = 0;
            local_1dfa = 0;
            local_1df9 = 0;
            dVar465 = dVar432 - (double)local_268;
            dVar500 = dVar451 - dVar480;
            dVar508 = dVar305 - dVar58;
            dVar336 = dVar199 - dStack_250;
            auVar498._0_8_ =
                 (0.0 - dVar58) * dVar508 + (0.0 - (double)local_268) * dVar465 +
                 (0.0 - dVar480) * dVar500;
            auVar498._8_8_ = auVar498._0_8_;
            auVar188._8_4_ = SUB84(dVar500,0);
            auVar188._0_8_ = dVar465;
            auVar188._12_4_ = (int)((ulonglong)dVar500 >> 0x20);
            auVar506._8_4_ = SUB84(auVar498._0_8_,0);
            auVar506._0_8_ = auVar498._0_8_;
            auVar506._12_4_ = (int)((ulonglong)auVar498._0_8_ >> 0x20);
            auVar384._0_8_ = dVar508 * dVar508 + dVar465 * dVar465 + auVar188._8_8_ * dVar500;
            lVar50 = -(ulonglong)(auVar498._0_8_ <= 0.0);
            lVar51 = -(ulonglong)(auVar506._8_8_ <= 0.0);
            auVar507._8_8_ = lVar51;
            auVar507._0_8_ = lVar50;
            auVar384._8_8_ = auVar384._0_8_;
            uVar332 = SUB84(auVar384._0_8_,0);
            auVar189._8_4_ = uVar332;
            auVar189._0_8_ = auVar384._0_8_;
            uVar333 = (undefined4)((ulonglong)auVar384._0_8_ >> 0x20);
            auVar189._12_4_ = uVar333;
            auVar462._8_4_ = uVar332;
            auVar462._0_8_ = auVar384._0_8_;
            auVar462._12_4_ = uVar333;
            auVar463._8_8_ = -(ulonglong)(auVar462._8_8_ <= _UNK_150b28838);
            auVar463._0_8_ = -(ulonglong)(auVar384._0_8_ <= ___xmm_38100000000000003810000000000000)
            ;
            auVar190._8_8_ = -(ulonglong)(auVar189._8_8_ <= auVar498._0_8_);
            auVar190._0_8_ = -(ulonglong)(auVar384._0_8_ <= auVar498._0_8_);
            auVar463 = auVar463 | auVar190;
            auVar489._8_4_ = uVar332;
            auVar489._0_8_ = auVar384._0_8_;
            auVar489._12_4_ = uVar333;
            auVar490._8_8_ = -(ulonglong)(auVar489._8_8_ <= _UNK_150b28838);
            auVar490._0_8_ = -(ulonglong)(auVar384._0_8_ <= ___xmm_38100000000000003810000000000000)
            ;
            auVar490 = auVar490 | auVar190;
            uVar408 = auVar463._0_4_;
            uVar409 = auVar463._4_4_;
            uVar411 = auVar463._12_4_;
            uVar35 = auVar463._8_4_;
            auVar427._0_4_ = ~uVar408 & uVar43;
            auVar427._4_4_ = ~uVar409 & uVar303;
            auVar427._8_4_ = ~uVar35 & uVar301;
            auVar427._12_4_ = ~uVar411 & uVar46;
            auVar202 = divpd(auVar498,auVar384);
            local_168 = (double)CONCAT44(uVar409 & local_148._4_4_ | ~uVar409 & local_168._4_4_,
                                         uVar408 & (uint)local_148 | ~uVar408 & (uint)local_168);
            uStack_160 = (double)CONCAT44(uVar411 & uStack_140._4_4_ | ~uVar411 & uStack_160._4_4_,
                                          uVar35 & (uint)uStack_140 | ~uVar35 & (uint)uStack_160);
            uVar303 = auVar490._0_4_;
            uVar301 = auVar490._4_4_;
            uVar412 = auVar490._12_4_;
            uVar46 = auVar490._8_4_;
            local_158 = (double)CONCAT44(uVar301 & local_138._4_4_ | ~uVar301 & local_158._4_4_,
                                         uVar303 & (uint)local_138 | ~uVar303 & (uint)local_158);
            uStack_150 = (double)CONCAT44(uVar412 & uStack_130._4_4_ | ~uVar412 & uStack_150._4_4_,
                                          uVar46 & (uint)uStack_130 | ~uVar46 & (uint)uStack_150);
            auVar466 = maxpd(auVar202,ZEXT816(0));
            local_1e8 = (double)CONCAT44(uVar409 & local_1c8._4_4_ | ~uVar409 & local_1e8._4_4_,
                                         uVar408 & (uint)local_1c8 | ~uVar408 & (uint)local_1e8);
            uStack_1e0 = (double)CONCAT44(uVar411 & uStack_1c0._4_4_ | ~uVar411 & uStack_1e0._4_4_,
                                          uVar35 & (uint)uStack_1c0 | ~uVar35 & (uint)uStack_1e0);
            auVar324._0_4_ = ~uVar303 & uVar45;
            auVar324._4_4_ = ~uVar301 & uVar265;
            auVar324._8_4_ = ~uVar46 & uVar266;
            auVar324._12_4_ = ~uVar412 & uVar264;
            auVar10._8_8_ = _UNK_150689688;
            auVar10._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
            local_1d8 = (double)CONCAT44(uVar301 & local_1b8._4_4_ | ~uVar301 & local_1d8._4_4_,
                                         uVar303 & (uint)local_1b8 | ~uVar303 & (uint)local_1d8);
            uStack_1d0 = (double)CONCAT44(uVar412 & uStack_1b0._4_4_ | ~uVar412 & uStack_1d0._4_4_,
                                          uVar46 & (uint)uStack_1b0 | ~uVar46 & (uint)uStack_1d0);
            auVar406._0_4_ = uVar408 & (uint)local_248;
            auVar406._4_4_ = uVar409 & local_248._4_4_;
            auVar406._8_4_ = uVar35 & (uint)uStack_240;
            auVar406._12_4_ = uVar411 & uStack_240._4_4_;
            auVar449._0_4_ = uVar303 & (uint)local_238;
            auVar449._4_4_ = uVar301 & local_238._4_4_;
            auVar449._8_4_ = uVar46 & (uint)uStack_230;
            auVar449._12_4_ = uVar412 & uStack_230._4_4_;
            _local_268 = auVar427 | auVar406;
            auVar202 = minpd(auVar466,auVar10);
            _local_258 = auVar324 | auVar449;
            dVar58 = ___xmm_3ff00000000000003ff0000000000000 - auVar202._0_8_;
            dVar492 = _UNK_150689688 - auVar202._8_8_;
            auVar466 = minpd(auVar466,auVar10);
            dVar465 = dVar465 * auVar202._0_8_ + local_268;
            dVar480 = dVar500 * auVar202._8_8_ + local_268._8_8_;
            uVar45 = (uint)lVar50;
            uVar264 = (uint)((ulonglong)lVar50 >> 0x20);
            uVar265 = (uint)lVar51;
            uVar266 = (uint)((ulonglong)lVar51 >> 0x20);
            auVar428._0_4_ = local_268._0_4_ & uVar45;
            auVar428._4_4_ = local_268._4_4_ & uVar264;
            auVar428._8_4_ = local_268._8_4_ & uVar265;
            auVar428._12_4_ = local_268._12_4_ & uVar266;
            auVar463 = auVar463 | auVar507;
            auVar191._0_4_ = ~uVar408 & SUB84(dVar465,0);
            auVar191._4_4_ = ~uVar409 & (uint)((ulonglong)dVar465 >> 0x20);
            auVar191._8_4_ = ~uVar35 & SUB84(dVar480,0);
            auVar191._12_4_ = ~uVar411 & (uint)((ulonglong)dVar480 >> 0x20);
            uVar43 = movmskpd(uVar302,auVar463);
            paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar43;
            auVar191 = auVar191 | auVar406;
            auVar385._0_4_ = ~uVar45 & auVar191._0_4_;
            auVar385._4_4_ = ~uVar264 & auVar191._4_4_;
            auVar385._8_4_ = ~uVar265 & auVar191._8_4_;
            auVar385._12_4_ = ~uVar266 & auVar191._12_4_;
            auVar490 = auVar490 | auVar507;
            local_1c08 = auVar385 | auVar428;
            uVar35 = movmskpd(0,auVar490);
            local_1cf8 = local_1c08;
            local_1e78._0_4_ = ~auVar490._0_4_ & SUB84(dVar492,0);
            local_1e78._4_4_ = ~auVar490._4_4_ & (uint)((ulonglong)dVar492 >> 0x20);
            local_1e78._8_4_ = ~auVar490._8_4_ & auVar202._8_4_;
            local_1e78._12_4_ = ~auVar490._12_4_ & auVar202._12_4_;
            dVar492 = auVar466._0_8_ * dVar508 + local_258;
            dVar465 = auVar466._8_8_ * dVar336 + local_258._8_8_;
            if ((uVar35 & 0x3fffffff) != 0 || uVar43 != 0) {
              uVar37 = 1;
            }
            auVar325._0_4_ = local_258._0_4_ & uVar45;
            auVar325._4_4_ = local_258._4_4_ & uVar264;
            auVar325._8_4_ = local_258._8_4_ & uVar265;
            auVar325._12_4_ = local_258._12_4_ & uVar266;
            auVar192._0_4_ = ~uVar303 & SUB84(dVar492,0);
            auVar192._4_4_ = ~uVar301 & (uint)((ulonglong)dVar492 >> 0x20);
            auVar192._8_4_ = ~uVar46 & SUB84(dVar465,0);
            auVar192._12_4_ = ~uVar412 & (uint)((ulonglong)dVar465 >> 0x20);
            auVar192 = auVar192 | auVar449;
            auVar464._0_4_ = auVar463._0_4_ & ___xmm_00000000000000003ff0000000000000;
            auVar464._4_4_ = auVar463._4_4_ & _UNK_150689514;
            auVar464._8_4_ = auVar463._8_4_ & _UNK_150689518;
            auVar464._12_4_ = auVar463._12_4_ & _UNK_15068951c;
            auVar361._0_4_ = ~uVar45 & auVar192._0_4_;
            auVar361._4_4_ = ~uVar264 & auVar192._4_4_;
            auVar361._8_4_ = ~uVar265 & auVar192._8_4_;
            auVar361._12_4_ = ~uVar266 & auVar192._12_4_;
            local_1bf8 = auVar361 | auVar325;
            auVar450._0_4_ = ~auVar463._0_4_ & SUB84(dVar58,0);
            auVar450._4_4_ = ~auVar463._4_4_ & (uint)((ulonglong)dVar58 >> 0x20);
            auVar450._8_4_ = ~auVar463._8_4_ & auVar202._0_4_;
            auVar450._12_4_ = ~auVar463._12_4_ & auVar202._4_4_;
            auVar448 = auVar450 | auVar464;
            local_1d38 = local_1bf8;
            goto LAB_143e98817;
          }
          if (uVar37 != 3) {
            if (uVar37 == 4) {
              auVar26._8_8_ = dStack_1f0;
              auVar26._0_8_ = local_1f8;
              local_1be8._8_4_ = (uint)uStack_240;
              local_1be8._0_8_ = dVar432;
              unique0x10008ab3 = uStack_240._4_4_;
              auVar25._8_8_ = dStack_200;
              auVar25._0_8_ = local_208;
              auVar22._8_8_ = dStack_220;
              auVar22._0_8_ = local_228;
              auVar24._8_8_ = dStack_210;
              auVar24._0_8_ = local_218;
              local_1bd8._8_4_ = (uint)uStack_230;
              local_1bd8._0_8_ = dVar305;
              unique0x10008c17 = uStack_230._4_4_;
              auVar439 = blendpd(auVar25,auVar26,2);
              auVar486 = blendpd(auVar22,auVar24,2);
              dVar500 = local_1be8._8_8_;
              dVar465 = dStack_220 * local_1f8 - dStack_200 * local_218;
              auVar285._8_4_ = SUB84(dVar465,0);
              auVar285._0_8_ = local_228 * dStack_200 - local_208 * dStack_220;
              auVar285._12_4_ = (int)((ulonglong)dVar465 >> 0x20);
              auVar237._0_8_ = local_218 * auVar439._0_8_ - local_1f8 * auVar486._0_8_;
              auVar237._8_8_ = dStack_210 * auVar439._8_8_ - dStack_1f0 * auVar486._8_8_;
              auVar202 = blendpd(auVar285,auVar237,2);
              dVar492 = dVar305 * auVar202._0_8_ + dVar432 * dVar465 + dVar500 * auVar237._0_8_;
              local_f38 = dVar58 * auVar202._0_8_ + (double)local_268 * dVar465 +
                          dVar480 * auVar237._0_8_;
              local_f58._0_8_ = 0.0 - dVar492;
              local_f58._8_8_ = 0.0 - dVar492;
              auVar286._0_8_ = dVar432 * dStack_200 - local_208 * dVar500;
              auVar286._8_8_ = dVar500 * local_1f8 - dStack_200 * dVar305;
              local_f48 = local_f58;
              auVar466 = blendpd(_local_1be8,_local_1bd8,2);
              dStack_f30 = local_f38;
              auVar238._0_8_ = dVar305 * auVar439._0_8_ - local_1f8 * auVar466._0_8_;
              auVar238._8_8_ = local_1bd8._8_8_ * auVar439._8_8_ - dStack_1f0 * auVar466._8_8_;
              auVar138._8_4_ = SUB84(auVar286._8_8_,0);
              auVar138._0_8_ = auVar286._0_8_;
              auVar138._12_4_ = (int)((ulonglong)auVar286._8_8_ >> 0x20);
              local_f28 = local_f38;
              dStack_f20 = local_f38;
              auVar202 = blendpd(auVar286,auVar238,2);
              dStack_f10 = auVar202._0_8_ * dVar58 + auVar138._8_8_ * (double)local_268 +
                           auVar238._0_8_ * dVar480;
              local_f18 = 0.0 - dStack_f10;
              dStack_f10 = 0.0 - dStack_f10;
              local_f08 = local_f18;
              dStack_f00 = dStack_f10;
              auVar473._0_8_ = dVar432 * dStack_220 - local_228 * dVar500;
              auVar473._8_8_ = dVar500 * local_218 - dStack_220 * dVar305;
              local_1bc8 = local_228;
              uStack_1bc0 = dStack_220;
              auVar239._0_8_ = dVar305 * auVar486._0_8_ - local_218 * auVar466._0_8_;
              auVar239._8_8_ = local_1bd8._8_8_ * auVar486._8_8_ - dStack_210 * auVar466._8_8_;
              auVar139._8_4_ = SUB84(auVar473._8_8_,0);
              auVar139._0_8_ = auVar473._0_8_;
              auVar139._12_4_ = (int)((ulonglong)auVar473._8_8_ >> 0x20);
              local_1bb8 = local_218;
              uStack_1bb0 = dStack_210;
              auVar202 = blendpd(auVar473,auVar239,2);
              local_1ba8[0] = local_208;
              local_1ba8[1] = dStack_200;
              local_ef8 = auVar202._0_8_ * dVar58 + auVar139._8_8_ * (double)local_268 +
                          auVar239._0_8_ * dVar480;
              dStack_ef0 = local_ef8;
              local_ee8 = local_ef8;
              dStack_ee0 = local_ef8;
              local_1e38._0_8_ = local_ef8 + local_f18 + local_f38 + (double)local_f58._0_8_;
              local_1e38._8_8_ = local_ef8 + dStack_f10 + local_f38 + local_f58._8_8_;
              local_1da8 = ___xmm_00000003000000030000000300000003;
              uStack_1da0 = _UNK_150ae9808;
              local_1ba8[2] = local_1f8;
              local_1ba8[3] = dStack_1f0;
              local_1b68 = local_228;
              dStack_1b60 = dStack_220;
              local_1b58 = local_218;
              dStack_1b50 = dStack_210;
              local_1b48 = local_208;
              dStack_1b40 = dStack_200;
              local_1b38 = local_1f8;
              dStack_1b30 = dStack_1f0;
              local_1ae8 = local_208;
              dStack_1ae0 = dStack_200;
              local_1ad8 = local_1f8;
              dStack_1ad0 = dStack_1f0;
              local_1a88 = local_228;
              dStack_1a80 = dStack_220;
              local_1a78 = local_218;
              dStack_1a70 = dStack_210;
              local_1ba8[4] = (double)local_268;
              local_1ba8[5] = dVar480;
              local_1b78 = _local_258;
              local_1b28 = (double)local_268;
              dStack_1b20 = dVar480;
              local_1b18 = _local_258;
              local_1b08 = _local_1be8;
              local_1af8 = _local_1bd8;
              local_1ac8 = (double)local_268;
              dStack_1ac0 = dVar480;
              local_1ab8 = _local_258;
              local_1aa8 = _local_1be8;
              local_1a98 = _local_1bd8;
              local_1738 = local_148;
              uStack_1730 = uStack_140;
              local_1728 = local_138;
              uStack_1720 = uStack_130;
              local_1718 = local_128;
              uStack_1710 = dStack_120;
              local_1708[0] = local_118;
              local_1708[1] = dStack_110;
              local_1708[2] = (double)local_108;
              local_1708[3] = (double)uStack_100;
              local_1708[4] = (double)local_f8;
              local_1708[5] = (double)uStack_f0;
              local_1708[6] = local_168;
              local_1708[7] = uStack_160;
              local_1708[8] = local_158;
              dStack_16c0 = uStack_150;
              local_16b8 = local_128;
              dStack_16b0 = dStack_120;
              local_16a8 = local_118;
              dStack_16a0 = dStack_110;
              local_1698 = local_108;
              uStack_1690 = uStack_100;
              local_1688 = local_f8;
              uStack_1680 = uStack_f0;
              local_1678 = local_168;
              dStack_1670 = uStack_160;
              local_1668 = local_158;
              dStack_1660 = uStack_150;
              local_1658 = local_148;
              dStack_1650 = uStack_140;
              local_1648 = local_138;
              dStack_1640 = uStack_130;
              local_1638 = local_108;
              uStack_1630 = uStack_100;
              local_1628 = local_f8;
              uStack_1620 = uStack_f0;
              local_1618 = local_168;
              dStack_1610 = uStack_160;
              local_1608 = local_158;
              dStack_1600 = uStack_150;
              local_15f8 = local_148;
              dStack_15f0 = uStack_140;
              local_15e8 = local_138;
              dStack_15e0 = uStack_130;
              bVar32 = true;
              iVar34 = -1;
              uVar43 = movmskpd(uVar35,local_1e38);
              uVar45 = movmskpd(uVar302,local_1e38);
              paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar45;
              local_15d8 = local_128;
              dStack_15d0 = dStack_120;
              unique0x10008de7 = dStack_1a0;
              local_1418._0_8_ = local_1a8;
              local_15c8 = local_118;
              dStack_15c0 = dStack_110;
              local_1408._8_8_ = dStack_190;
              local_1408._0_8_ = local_198;
              local_13f8[6] = local_1d8;
              dStack_13c0 = uStack_1d0;
              uVar35 = uVar43 * 4;
              local_1368 = local_1d8;
              dStack_1360 = uStack_1d0;
              local_1308 = local_1d8;
              dStack_1300 = uStack_1d0;
              local_1438 = local_1c8;
              uStack_1430 = uStack_1c0;
              local_1428 = local_1b8;
              uStack_1420 = uStack_1b0;
              local_13f8[0] = local_188;
              local_13f8[1] = dStack_180;
              local_13f8[2] = local_178;
              local_13f8[3] = dStack_170;
              local_13f8[4] = local_1e8;
              local_13f8[5] = uStack_1e0;
              local_13b8 = _local_1418;
              local_13a8 = local_1408;
              local_1398 = local_188;
              dStack_1390 = dStack_180;
              local_1388 = local_178;
              dStack_1380 = dStack_170;
              local_1378 = local_1e8;
              dStack_1370 = uStack_1e0;
              local_1358 = local_1c8;
              dStack_1350 = uStack_1c0;
              local_1348 = local_1b8;
              dStack_1340 = uStack_1b0;
              local_1338 = local_188;
              dStack_1330 = dStack_180;
              local_1328 = local_178;
              dStack_1320 = dStack_170;
              local_1318 = local_1e8;
              dStack_1310 = uStack_1e0;
              local_12f8 = local_1c8;
              dStack_12f0 = uStack_1c0;
              local_12e8 = local_1b8;
              dStack_12e0 = uStack_1b0;
              local_12d8 = _local_1418;
              local_12c8 = local_1408;
              local_18e8 = 0.0;
              dStack_18e0 = 0.0;
              local_18d8 = 0.0;
              dStack_18d0 = 0.0;
              local_1008 = __xmm_00000003000000020000000100000000;
              uStack_1000 = _UNK_150631e08;
              uVar41 = uVar53;
              uVar52 = uVar53;
              uVar54 = uVar53;
              goto LAB_143e96bf0;
            }
            paVar48 = &bGEnsureHasExecuted<_1419153191412432467>;
            bVar32 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_1419153191412432467>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimplexVectorized.h"
                                ,0x1ad,"false");
            if (bVar32) {
              pcVar2 = (code *)swi(3);
              uVar33 = (*pcVar2)();
              return (bool)uVar33;
            }
            auVar448 = local_1e88;
            local_1bf8 = ZEXT816(0);
            local_1c08 = ZEXT816(0);
            dVar432 = local_248;
            dVar451 = uStack_240;
            dVar305 = local_238;
            dVar199 = uStack_230;
            goto LAB_143e98817;
          }
          auVar18._8_4_ = (uint)uStack_240;
          auVar18._0_8_ = dVar432;
          auVar18._12_4_ = uStack_240._4_4_;
          auVar20._8_4_ = (uint)uStack_230;
          auVar20._0_8_ = dVar305;
          auVar20._12_4_ = uStack_230._4_4_;
          local_1d38._0_8_ = local_228 - (double)local_268;
          local_1d38._8_8_ = dStack_220 - dVar480;
          local_1e06 = 0;
          local_1e38._0_8_ = dVar305 - dVar58;
          local_1e38._8_8_ = auVar20._8_8_ - dStack_250;
          local_1e58._0_8_ = local_218 - dVar58;
          local_1e58._8_8_ = dStack_210 - dStack_250;
          dVar388 = dVar432 - (double)local_268;
          dVar410 = auVar18._8_8_ - dVar480;
          auVar477._8_4_ = (int)local_1d38._8_8_;
          auVar477._0_8_ = local_1d38._0_8_;
          uVar332 = (undefined4)((ulonglong)local_1d38._8_8_ >> 0x20);
          auVar477._12_4_ = uVar332;
          uVar333 = SUB84(dVar410,0);
          auVar171._8_4_ = uVar333;
          auVar171._0_8_ = dVar388;
          uVar364 = (undefined4)((ulonglong)dVar410 >> 0x20);
          auVar171._12_4_ = uVar364;
          auVar250._8_4_ = (int)local_1d38._8_8_;
          auVar250._0_8_ = local_1d38._0_8_;
          auVar250._12_4_ = uVar332;
          auVar466 = blendpd(auVar250,local_1e58,2);
          dVar336 = local_1e58._0_8_ * dVar410 - (double)local_1e38._0_8_ * (double)local_1d38._8_8_
          ;
          auVar172._8_4_ = uVar333;
          auVar172._0_8_ = dVar388;
          auVar172._12_4_ = uVar364;
          auVar202 = blendpd(auVar172,local_1e38,2);
          auVar424._8_4_ = SUB84(dVar336,0);
          auVar424._0_8_ = auVar477._8_8_ * dVar388 - auVar171._8_8_ * (double)local_1d38._0_8_;
          auVar424._12_4_ = (int)((ulonglong)dVar336 >> 0x20);
          auVar251._0_8_ =
               auVar466._0_8_ * (double)local_1e38._0_8_ - auVar202._0_8_ * local_1e58._0_8_;
          auVar251._8_8_ =
               auVar466._8_8_ * (double)local_1e38._8_8_ - auVar202._8_8_ * local_1e58._8_8_;
          local_18c8 = blendpd(auVar424,auVar251,2);
          dVar508 = local_18c8._0_8_;
          auVar173._8_4_ = SUB84(auVar251._0_8_,0);
          auVar173._0_8_ = dVar336;
          uVar332 = (undefined4)((ulonglong)auVar251._0_8_ >> 0x20);
          auVar173._12_4_ = uVar332;
          auVar202 = local_18c8;
          local_18b8 = dVar508 * dVar508 + dVar336 * dVar336 + auVar173._8_8_ * auVar251._0_8_;
          dStack_18b0 = local_18b8;
          dVar500 = dVar58 * ___xmm_38100000000000003810000000000000 *
                    dVar58 * ___xmm_38100000000000003810000000000000 +
                    (double)local_268 * ___xmm_38100000000000003810000000000000 *
                    (double)local_268 * ___xmm_38100000000000003810000000000000 +
                    dVar480 * _UNK_150b28838 * dVar480 * _UNK_150b28838;
          auVar174._8_4_ = SUB84(local_18b8,0);
          auVar174._0_8_ = local_18b8;
          auVar174._12_4_ = (int)((ulonglong)local_18b8 >> 0x20);
          auVar175._8_8_ = -(ulonglong)(auVar174._8_8_ <= dVar500);
          auVar175._0_8_ = -(ulonglong)(local_18b8 <= dVar500);
          uVar37 = movmskpd(0,auVar175);
          iVar34 = movmskpd(uVar302,auVar175);
          if ((uVar37 & 0x3fffffff) != 0 || iVar34 != 0) {
            local_1e05 = 0;
            local_1e04 = 0;
            local_1e03 = 0;
            auVar460._0_8_ =
                 (0.0 - dVar58) * (double)local_1e38._0_8_ + (0.0 - (double)local_268) * dVar388 +
                 (0.0 - dVar480) * dVar410;
            auVar176._8_4_ = uVar333;
            auVar176._0_8_ = dVar388;
            auVar176._12_4_ = uVar364;
            auVar460._8_8_ = auVar460._0_8_;
            auVar478._8_4_ = SUB84(auVar460._0_8_,0);
            auVar478._0_8_ = auVar460._0_8_;
            auVar478._12_4_ = (int)((ulonglong)auVar460._0_8_ >> 0x20);
            auVar321._0_8_ =
                 (double)local_1e38._0_8_ * (double)local_1e38._0_8_ + dVar388 * dVar388 +
                 auVar176._8_8_ * dVar410;
            lVar50 = -(ulonglong)(auVar460._0_8_ <= 0.0);
            lVar51 = -(ulonglong)(auVar478._8_8_ <= 0.0);
            auVar479._8_8_ = lVar51;
            auVar479._0_8_ = lVar50;
            auVar321._8_8_ = auVar321._0_8_;
            uVar302 = SUB84(auVar321._0_8_,0);
            auVar177._8_4_ = uVar302;
            auVar177._0_8_ = auVar321._0_8_;
            uVar332 = (undefined4)((ulonglong)auVar321._0_8_ >> 0x20);
            auVar177._12_4_ = uVar332;
            auVar445._8_4_ = uVar302;
            auVar445._0_8_ = auVar321._0_8_;
            auVar445._12_4_ = uVar332;
            auVar178._8_8_ = -(ulonglong)(auVar177._8_8_ <= auVar460._0_8_);
            auVar178._0_8_ = -(ulonglong)(auVar321._0_8_ <= auVar460._0_8_);
            auVar466 = divpd(auVar460,auVar321);
            auVar446._8_8_ = -(ulonglong)(auVar445._8_8_ <= _UNK_150b28838);
            auVar446._0_8_ = -(ulonglong)(auVar321._0_8_ <= ___xmm_38100000000000003810000000000000)
            ;
            auVar446 = auVar446 | auVar178;
            auVar425._8_4_ = uVar302;
            auVar425._0_8_ = auVar321._0_8_;
            auVar425._12_4_ = uVar332;
            auVar426._8_8_ = -(ulonglong)(auVar425._8_8_ <= _UNK_150b28838);
            auVar426._0_8_ = -(ulonglong)(auVar321._0_8_ <= ___xmm_38100000000000003810000000000000)
            ;
            auVar426 = auVar426 | auVar178;
            uVar35 = auVar446._0_4_;
            local_1d38._0_4_ = (uint)local_248 & uVar35;
            uVar412 = auVar446._4_4_;
            local_1d38._4_4_ = local_248._4_4_ & uVar412;
            uVar429 = auVar446._8_4_;
            local_1d38._8_4_ = (uint)uStack_240 & uVar429;
            uVar430 = auVar446._12_4_;
            local_1d38._12_4_ = uStack_240._4_4_ & uVar430;
            uVar37 = auVar426._0_4_;
            local_1cf8._0_4_ = (uint)local_238 & uVar37;
            uVar408 = auVar426._4_4_;
            local_1cf8._4_4_ = local_238._4_4_ & uVar408;
            uVar409 = auVar426._8_4_;
            local_1cf8._8_4_ = (uint)uStack_230 & uVar409;
            uVar411 = auVar426._12_4_;
            local_1cf8._12_4_ = uStack_230._4_4_ & uVar411;
            auVar381._0_4_ = ~uVar35 & uVar43;
            auVar381._4_4_ = ~uVar412 & uVar303;
            auVar381._8_4_ = ~uVar429 & uVar301;
            auVar381._12_4_ = ~uVar430 & uVar46;
            _local_268 = auVar381 | local_1d38;
            local_168 = (double)CONCAT44(local_148._4_4_ & uVar412 | ~uVar412 & local_168._4_4_,
                                         (uint)local_148 & uVar35 | ~uVar35 & (uint)local_168);
            uStack_160 = (double)CONCAT44(uStack_140._4_4_ & uVar430 | ~uVar430 & uStack_160._4_4_,
                                          (uint)uStack_140 & uVar429 | ~uVar429 & (uint)uStack_160);
            auVar402._0_4_ = ~uVar37 & uVar45;
            auVar402._4_4_ = ~uVar408 & uVar265;
            auVar402._8_4_ = ~uVar409 & uVar266;
            auVar402._12_4_ = ~uVar411 & uVar264;
            _local_258 = auVar402 | local_1cf8;
            local_158 = (double)CONCAT44(local_138._4_4_ & uVar408 | ~uVar408 & local_158._4_4_,
                                         (uint)local_138 & uVar37 | ~uVar37 & (uint)local_158);
            uStack_150 = (double)CONCAT44(uStack_130._4_4_ & uVar411 | ~uVar411 & uStack_150._4_4_,
                                          (uint)uStack_130 & uVar409 | ~uVar409 & (uint)uStack_150);
            auVar439 = maxpd(auVar466,ZEXT816(0));
            local_1e8 = (double)CONCAT44(local_1c8._4_4_ & uVar412 | ~uVar412 & local_1e8._4_4_,
                                         (uint)local_1c8 & uVar35 | ~uVar35 & (uint)local_1e8);
            uStack_1e0 = (double)CONCAT44(uStack_1c0._4_4_ & uVar430 | ~uVar430 & uStack_1e0._4_4_,
                                          (uint)uStack_1c0 & uVar429 | ~uVar429 & (uint)uStack_1e0);
            auVar466 = minpd(auVar439,auVar496);
            uVar43 = (uint)lVar50;
            uVar45 = (uint)((ulonglong)lVar50 >> 0x20);
            uVar46 = (uint)lVar51;
            uVar264 = (uint)((ulonglong)lVar51 >> 0x20);
            local_1d8 = (double)CONCAT44(local_1b8._4_4_ & uVar408 | ~uVar408 & local_1d8._4_4_,
                                         (uint)local_1b8 & uVar37 | ~uVar37 & (uint)local_1d8);
            uStack_1d0 = (double)CONCAT44(uStack_1b0._4_4_ & uVar411 | ~uVar411 & uStack_1d0._4_4_,
                                          (uint)uStack_1b0 & uVar409 | ~uVar409 & (uint)uStack_1d0);
            dVar58 = dVar388 * auVar466._0_8_ + local_268;
            dVar480 = dVar410 * auVar466._8_8_ + local_268._8_8_;
            dVar492 = dVar492 - auVar466._0_8_;
            dVar465 = dVar465 - auVar466._8_8_;
            auVar504._0_4_ = ~uVar43 & (~uVar35 & SUB84(dVar58,0) | local_1d38._0_4_);
            auVar504._4_4_ =
                 ~uVar45 & (~uVar412 & (uint)((ulonglong)dVar58 >> 0x20) | local_1d38._4_4_);
            auVar504._8_4_ = ~uVar46 & (~uVar429 & SUB84(dVar480,0) | local_1d38._8_4_);
            auVar504._12_4_ =
                 ~uVar264 & (~uVar430 & (uint)((ulonglong)dVar480 >> 0x20) | local_1d38._12_4_);
            auVar439 = minpd(auVar439,auVar496);
            auVar382._0_4_ = local_268._0_4_ & uVar43;
            auVar382._4_4_ = local_268._4_4_ & uVar45;
            auVar382._8_4_ = local_268._8_4_ & uVar46;
            auVar382._12_4_ = local_268._12_4_ & uVar264;
            auVar292._8_4_ = uVar46;
            auVar292._0_8_ = lVar50;
            auVar292._12_4_ = uVar264;
            auVar292 = auVar292 | auVar446;
            dVar58 = auVar439._0_8_ * (double)local_1e38._0_8_ + local_258;
            dVar480 = auVar439._8_8_ * (double)local_1e38._8_8_ + local_258._8_8_;
            auVar403._0_4_ = local_258._0_4_ & uVar43;
            auVar403._4_4_ = local_258._4_4_ & uVar45;
            auVar403._8_4_ = local_258._8_4_ & uVar46;
            auVar403._12_4_ = local_258._12_4_ & uVar264;
            uVar35 = movmskpd(iVar34,auVar292);
            paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar35;
            local_1d58 = auVar504 | auVar382;
            auVar479 = auVar479 | auVar426;
            auVar488._0_4_ = ~uVar43 & (~uVar37 & SUB84(dVar58,0) | local_1cf8._0_4_);
            auVar488._4_4_ =
                 ~uVar45 & (~uVar408 & (uint)((ulonglong)dVar58 >> 0x20) | local_1cf8._4_4_);
            auVar488._8_4_ = ~uVar46 & (~uVar409 & SUB84(dVar480,0) | local_1cf8._8_4_);
            auVar488._12_4_ =
                 ~uVar264 & (~uVar411 & (uint)((ulonglong)dVar480 >> 0x20) | local_1cf8._12_4_);
            uVar37 = movmskpd(0,auVar479);
            auVar293._0_4_ = auVar292._0_4_ & ___xmm_00000000000000003ff0000000000000;
            auVar293._4_4_ = auVar292._4_4_ & _UNK_150689514;
            auVar293._8_4_ = auVar292._8_4_ & _UNK_150689518;
            auVar293._12_4_ = auVar292._12_4_ & _UNK_15068951c;
            auVar447._0_4_ = ~auVar292._0_4_ & SUB84(dVar492,0);
            auVar447._4_4_ = ~auVar292._4_4_ & (uint)((ulonglong)dVar492 >> 0x20);
            auVar447._8_4_ = ~auVar292._8_4_ & auVar466._0_4_;
            auVar447._12_4_ = ~auVar292._12_4_ & auVar466._4_4_;
            auVar448 = auVar447 | auVar293;
            local_1d48 = auVar488 | auVar403;
            local_1e78._0_4_ = ~auVar479._0_4_ & SUB84(dVar465,0);
            local_1e78._4_4_ = ~auVar479._4_4_ & (uint)((ulonglong)dVar465 >> 0x20);
            local_1e78._8_4_ = ~auVar479._8_4_ & auVar466._8_4_;
            local_1e78._12_4_ = ~auVar479._12_4_ & auVar466._12_4_;
            uVar37 = 2 - ((uVar37 & 0x3fffffff) != 0 || uVar35 != 0);
            local_1bf8 = auVar488 | auVar403;
            local_1c08 = auVar504 | auVar382;
            local_18c8 = auVar202;
            goto LAB_143e98817;
          }
          dVar500 = 0.0 - (double)local_268;
          dVar413 = 0.0 - dVar480;
          auVar179._8_4_ = SUB84(dVar413,0);
          auVar179._0_8_ = dVar500;
          auVar179._12_4_ = (int)((ulonglong)dVar413 >> 0x20);
          auVar322._0_8_ =
               (0.0 - dVar58) * local_1e58._0_8_ + dVar500 * (double)local_1d38._0_8_ +
               dVar413 * (double)local_1d38._8_8_;
          auVar356._0_8_ =
               (0.0 - dVar58) * (double)local_1e38._0_8_ + dVar500 * dVar388 +
               auVar179._8_8_ * dVar410;
          auVar322._8_8_ = auVar322._0_8_;
          auVar356._8_8_ = auVar356._0_8_;
          uVar302 = SUB84(auVar322._0_8_,0);
          auVar252._8_4_ = uVar302;
          auVar252._0_8_ = auVar322._0_8_;
          uVar333 = (undefined4)((ulonglong)auVar322._0_8_ >> 0x20);
          auVar252._12_4_ = uVar333;
          uVar364 = SUB84(auVar356._0_8_,0);
          auVar180._8_4_ = uVar364;
          auVar180._0_8_ = auVar356._0_8_;
          uVar366 = (undefined4)((ulonglong)auVar356._0_8_ >> 0x20);
          auVar180._12_4_ = uVar366;
          auVar253._0_8_ = -(ulonglong)(auVar322._0_8_ <= 0.0 && auVar356._0_8_ <= 0.0);
          lVar50 = -(ulonglong)(auVar252._8_8_ <= 0.0 && auVar180._8_8_ <= 0.0);
          auVar253._8_4_ = (undefined4)lVar50;
          auVar253._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
          uVar37 = movmskpd(0,auVar253);
          uVar35 = movmskpd(iVar34,auVar253);
          paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar35;
          if ((uVar37 & 0x3fffffff) == 0 && uVar35 == 0) {
            dVar500 = 0.0 - dVar432;
            dVar413 = 0.0 - auVar18._8_8_;
            auVar181._8_4_ = SUB84(dVar413,0);
            auVar181._0_8_ = dVar500;
            auVar181._12_4_ = (int)((ulonglong)dVar413 >> 0x20);
            dVar413 = (0.0 - dVar305) * local_1e58._0_8_ + dVar500 * (double)local_1d38._0_8_ +
                      dVar413 * (double)local_1d38._8_8_;
            auVar254._8_4_ = SUB84(dVar413,0);
            auVar254._0_8_ = dVar413;
            auVar254._12_4_ = (int)((ulonglong)dVar413 >> 0x20);
            dVar500 = (0.0 - dVar305) * (double)local_1e38._0_8_ + dVar500 * dVar388 +
                      auVar181._8_8_ * dVar410;
            auVar255._0_8_ = -(ulonglong)(dVar413 <= dVar500 && 0.0 <= dVar500);
            lVar50 = -(ulonglong)(auVar254._8_8_ <= dVar500 && 0.0 <= dVar500);
            auVar255._8_4_ = (undefined4)lVar50;
            auVar255._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
            uVar37 = movmskpd(0,auVar255);
            uVar35 = movmskpd(uVar35,auVar255);
            if ((uVar37 & 0x3fffffff) == 0 && uVar35 == 0) {
              auVar256._8_4_ = uVar364;
              auVar256._0_8_ = auVar356._0_8_;
              auVar256._12_4_ = uVar366;
              auVar182._8_4_ = uVar302;
              auVar182._0_8_ = auVar322._0_8_;
              auVar182._12_4_ = uVar333;
              auVar404._8_4_ = uVar364;
              auVar404._0_8_ = auVar356._0_8_;
              auVar404._12_4_ = uVar366;
              auVar294._8_4_ = SUB84(dVar500,0);
              auVar294._0_8_ = dVar500;
              auVar294._12_4_ = (int)((ulonglong)dVar500 >> 0x20);
              local_1cf8._0_8_ = auVar356._0_8_ * dVar413 - auVar322._0_8_ * dVar500;
              local_1cf8._8_8_ = auVar256._8_8_ * dVar413 - auVar182._8_8_ * dVar500;
              auVar405._0_8_ = auVar356._0_8_ - dVar500;
              auVar405._8_8_ = auVar404._8_8_ - dVar500;
              auVar295._0_8_ =
                   -(ulonglong)
                    ((dVar500 <= 0.0 && 0.0 < auVar405._0_8_) &&
                    ((double)local_1cf8._0_8_ <= 0.0 && 0.0 <= auVar356._0_8_));
              lVar50 = -(ulonglong)
                        ((auVar294._8_8_ <= 0.0 && 0.0 < auVar405._8_8_) &&
                        ((double)local_1cf8._8_8_ <= 0.0 && 0.0 <= auVar356._0_8_));
              auVar295._8_4_ = (undefined4)lVar50;
              auVar295._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
              uVar37 = movmskpd(0,auVar295);
              uVar35 = movmskpd(uVar35,auVar295);
              paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar35;
              if ((uVar37 & 0x3fffffff) != 0 || uVar35 != 0) {
                auVar466 = divpd(auVar356,auVar405);
                uVar37 = 2;
                local_1e00 = 0;
                dVar500 = auVar466._0_8_;
                dVar508 = auVar466._8_8_;
                local_1e78._8_8_ = dVar508;
                local_1e78._0_8_ = dVar465 - dVar508;
                auVar448._8_8_ = dVar500;
                auVar448._0_8_ = dVar492 - dVar500;
                local_1d48._0_8_ = dVar500 * (double)local_1e38._0_8_ + dVar58;
                local_1d48._8_8_ = dVar508 * (double)local_1e38._8_8_ + dStack_250;
                local_1d58._0_8_ = dVar500 * dVar388 + (double)local_268;
                local_1d58._8_8_ = dVar508 * dVar410 + dVar480;
                local_1bf8._8_4_ = (int)local_1d48._8_8_;
                local_1bf8._0_8_ = (double)local_1d48._0_8_;
                local_1bf8._12_4_ = (int)((ulonglong)local_1d48._8_8_ >> 0x20);
                local_1c08._8_4_ = (int)local_1d58._8_8_;
                local_1c08._0_8_ = (double)local_1d58._0_8_;
                local_1c08._12_4_ = (int)((ulonglong)local_1d58._8_8_ >> 0x20);
                local_18c8 = auVar202;
                goto LAB_143e98817;
              }
              local_1d58._8_8_ = dStack_220;
              local_1d58._0_8_ = local_228;
              dVar435 = 0.0 - local_228;
              dVar452 = 0.0 - dStack_220;
              auVar183._8_4_ = SUB84(dVar452,0);
              auVar183._0_8_ = dVar435;
              auVar183._12_4_ = (int)((ulonglong)dVar452 >> 0x20);
              dVar452 = (0.0 - local_218) * local_1e58._0_8_ + dVar435 * (double)local_1d38._0_8_ +
                        dVar452 * (double)local_1d38._8_8_;
              dVar388 = (0.0 - local_218) * (double)local_1e38._0_8_ + dVar435 * dVar388 +
                        auVar183._8_8_ * dVar410;
              auVar257._8_4_ = SUB84(dVar388,0);
              auVar257._0_8_ = dVar388;
              uVar364 = (undefined4)((ulonglong)dVar388 >> 0x20);
              auVar257._12_4_ = uVar364;
              auVar258._0_8_ = -(ulonglong)(dVar388 <= dVar452 && 0.0 <= dVar452);
              lVar50 = -(ulonglong)(auVar257._8_8_ <= dVar452 && 0.0 <= dVar452);
              auVar258._8_4_ = (undefined4)lVar50;
              auVar258._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
              uVar37 = movmskpd(0,auVar258);
              uVar35 = movmskpd(uVar35,auVar258);
              if ((uVar37 & 0x3fffffff) == 0 && uVar35 == 0) {
                auVar461._8_4_ = uVar302;
                auVar461._0_8_ = auVar322._0_8_;
                auVar461._12_4_ = uVar333;
                auVar296._8_4_ = SUB84(dVar452,0);
                auVar296._0_8_ = dVar452;
                uVar366 = (undefined4)((ulonglong)dVar452 >> 0x20);
                auVar296._12_4_ = uVar366;
                dVar410 = auVar322._0_8_ * dVar388 - auVar356._0_8_ * dVar452;
                dVar435 = auVar461._8_8_ * dVar388 - auVar356._0_8_ * dVar452;
                auVar357._8_4_ = uVar302;
                auVar357._0_8_ = auVar322._0_8_;
                auVar357._12_4_ = uVar333;
                auVar358._0_8_ = auVar322._0_8_ - dVar452;
                auVar358._8_8_ = auVar357._8_8_ - dVar452;
                auVar184._8_4_ = SUB84(dVar435,0);
                auVar184._0_8_ = dVar410;
                uVar302 = (undefined4)((ulonglong)dVar435 >> 0x20);
                auVar184._12_4_ = uVar302;
                auVar297._0_8_ =
                     -(ulonglong)
                      ((dVar452 <= 0.0 && 0.0 < auVar358._0_8_) &&
                      (0.0 <= auVar322._0_8_ && dVar410 <= 0.0));
                lVar50 = -(ulonglong)
                          ((auVar296._8_8_ <= 0.0 && 0.0 < auVar358._8_8_) &&
                          (0.0 <= auVar322._0_8_ && auVar184._8_8_ <= 0.0));
                auVar297._8_4_ = (undefined4)lVar50;
                auVar297._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                uVar37 = movmskpd(0,auVar297);
                uVar35 = movmskpd(uVar35,auVar297);
                paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar35;
                if ((uVar37 & 0x3fffffff) == 0 && uVar35 == 0) {
                  auVar185._8_4_ = SUB84(dVar388,0);
                  auVar185._0_8_ = dVar388;
                  auVar185._12_4_ = uVar364;
                  auVar323._8_4_ = SUB84(dVar452,0);
                  auVar323._0_8_ = dVar452;
                  auVar323._12_4_ = uVar366;
                  dVar481 = dVar388 - dVar452;
                  dVar491 = dVar388 - dVar452;
                  auVar383._0_8_ = dVar413 - dVar500;
                  auVar383._8_8_ = dVar413 - dVar500;
                  auVar359._8_4_ = SUB84(dVar491,0);
                  auVar359._0_8_ = dVar481;
                  auVar359._12_4_ = (int)((ulonglong)dVar491 >> 0x20);
                  dVar388 = dVar452 * dVar500 - dVar388 * dVar413;
                  dVar500 = auVar323._8_8_ * dVar500 - auVar185._8_8_ * dVar413;
                  auVar360._0_8_ = dVar481 + auVar383._0_8_;
                  auVar360._8_8_ = auVar359._8_8_ + auVar383._8_8_;
                  auVar259._8_4_ = SUB84(dVar500,0);
                  auVar259._0_8_ = dVar388;
                  auVar259._12_4_ = (int)((ulonglong)dVar500 >> 0x20);
                  auVar298._0_8_ =
                       -(ulonglong)
                        ((0.0 < auVar360._0_8_ && 0.0 <= dVar481) &&
                        (dVar388 <= 0.0 && 0.0 <= auVar383._0_8_));
                  lVar50 = -(ulonglong)
                            ((auVar259._8_8_ <= 0.0 && 0.0 <= auVar383._8_8_) &&
                            (0.0 < auVar360._8_8_ && 0.0 <= dVar491));
                  auVar298._8_4_ = (undefined4)lVar50;
                  auVar298._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                  uVar37 = movmskpd(0,auVar298);
                  uVar35 = movmskpd(uVar35,auVar298);
                  paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar35;
                  if ((uVar37 & 0x3fffffff) == 0 && uVar35 == 0) {
                    auVar260._0_8_ = (double)fVar56;
                    auVar260._8_8_ = (double)fVar200;
                    uVar37 = 3;
                    local_1dfc = 0;
                    auVar186._8_4_ = SUB84(dVar435,0);
                    auVar186._0_8_ = dVar410;
                    auVar186._12_4_ = uVar302;
                    auVar187._0_8_ = dVar410 + (double)local_1cf8._0_8_ + dVar388;
                    auVar187._8_8_ = auVar186._8_8_ + (double)local_1cf8._8_8_ + dVar500;
                    auVar466 = divpd(auVar260,auVar187);
                    dVar465 = auVar466._0_8_ * (double)local_1cf8._0_8_;
                    dVar410 = auVar466._0_8_ * dVar410;
                    auVar261._8_4_ = SUB84(auVar251._0_8_,0);
                    auVar261._0_8_ = dVar336;
                    auVar261._12_4_ = uVar332;
                    auVar13._8_8_ = local_18b8;
                    auVar13._0_8_ = local_18b8;
                    auVar439 = divpd(auVar261,auVar13);
                    local_1e78._8_8_ = auVar466._8_8_ * dVar435;
                    local_1e78._0_8_ = dVar465;
                    auVar448._8_8_ = dVar410;
                    auVar448._0_8_ = (dVar492 - dVar410) - dVar465;
                    auVar14._8_8_ = local_18b8;
                    auVar14._0_8_ = local_18b8;
                    auVar466 = divpd(local_18c8,auVar14);
                    dVar58 = dVar58 * auVar466._0_8_ + auVar439._0_8_ * (double)local_268 +
                             auVar439._8_8_ * dVar480;
                    auVar505._8_4_ = SUB84(dVar58,0);
                    auVar505._0_8_ = dVar58;
                    auVar505._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
                    local_1bf8._0_8_ = dVar58 * dVar508;
                    local_1bf8._8_8_ = dVar58 * (double)local_18c8._8_8_;
                    local_1c08._0_8_ = dVar58 * dVar336;
                    local_1c08._8_8_ = auVar505._8_8_ * auVar251._0_8_;
                    local_1d48 = local_1bf8;
                    local_1d58 = local_1c08;
                    local_18c8 = auVar202;
                  }
                  else {
                    uVar37 = 2;
                    auVar466 = divpd(auVar383,auVar360);
                    local_1dfd = 0;
                    dStack_250 = dVar199;
                    local_258 = (undefined1  [8])dVar305;
                    local_158 = local_138;
                    uStack_150 = uStack_130;
                    dVar58 = auVar466._0_8_;
                    dVar480 = auVar466._8_8_;
                    local_1d8 = local_1b8;
                    uStack_1d0 = uStack_1b0;
                    local_1d48._0_8_ = (local_218 - dVar305) * dVar58 + dVar305;
                    local_1d48._8_8_ = (dStack_210 - dVar199) * dVar480 + dVar199;
                    local_168 = local_148;
                    uStack_160 = uStack_140;
                    local_1e8 = local_1c8;
                    uStack_1e0 = uStack_1c0;
                    local_1d58._0_8_ = (local_228 - dVar432) * dVar58 + dVar432;
                    local_1d58._8_8_ = (dStack_220 - dVar451) * dVar480 + dVar451;
                    local_148 = local_128;
                    uStack_140 = dStack_120;
                    local_138 = local_118;
                    uStack_130 = dStack_110;
                    auVar448._8_8_ = dVar58;
                    auVar448._0_8_ = dVar492 - dVar58;
                    local_1e78._8_8_ = dVar480;
                    local_1e78._0_8_ = dVar465 - dVar480;
                    local_1c8 = local_1a8;
                    uStack_1c0 = dStack_1a0;
                    dStack_260 = dVar451;
                    local_268 = (undefined1  [8])dVar432;
                    local_1b8 = local_198;
                    uStack_1b0 = dStack_190;
                    local_1bf8 = local_1d48;
                    local_1c08 = local_1d58;
                    local_18c8 = auVar202;
                    dVar432 = local_228;
                    dVar451 = dStack_220;
                    dVar305 = local_218;
                    dVar199 = dStack_210;
                  }
                }
                else {
                  auVar466 = divpd(auVar322,auVar358);
                  uVar37 = 2;
                  local_1dfe = 0;
                  dVar432 = auVar466._0_8_;
                  dVar451 = auVar466._8_8_;
                  local_148 = local_128;
                  uStack_140 = dStack_120;
                  local_1c8 = local_1a8;
                  uStack_1c0 = dStack_1a0;
                  auVar448._8_8_ = dVar432;
                  auVar448._0_8_ = dVar492 - dVar432;
                  local_1e78._8_8_ = dVar451;
                  local_1e78._0_8_ = dVar465 - dVar451;
                  local_1d48._0_8_ = dVar432 * local_1e58._0_8_ + dVar58;
                  local_1d48._8_8_ = dVar451 * local_1e58._8_8_ + dStack_250;
                  local_138 = local_118;
                  uStack_130 = dStack_110;
                  local_1bf8._8_4_ = (int)local_1d48._8_8_;
                  local_1bf8._0_8_ = (double)local_1d48._0_8_;
                  local_1bf8._12_4_ = (int)((ulonglong)local_1d48._8_8_ >> 0x20);
                  local_1d58._0_8_ = dVar432 * (double)local_1d38._0_8_ + (double)local_268;
                  local_1d58._8_8_ = dVar451 * (double)local_1d38._8_8_ + dVar480;
                  local_1c08._8_4_ = (int)local_1d58._8_8_;
                  local_1c08._0_8_ = (double)local_1d58._0_8_;
                  local_1c08._12_4_ = (int)((ulonglong)local_1d58._8_8_ >> 0x20);
                  local_1b8 = local_198;
                  uStack_1b0 = dStack_190;
                  local_18c8 = auVar202;
                  dVar432 = local_228;
                  dVar451 = dStack_220;
                  dVar305 = local_218;
                  dVar199 = dStack_210;
                }
                goto LAB_143e98817;
              }
              dStack_250 = dStack_210;
              local_258 = (undefined1  [8])local_218;
              local_168 = local_128;
              uStack_160 = dStack_120;
              local_158 = local_118;
              uStack_150 = dStack_110;
              local_1dff = 0;
              local_1e8 = local_1a8;
              uStack_1e0 = dStack_1a0;
              local_1d8 = local_198;
              uStack_1d0 = dStack_190;
            }
            else {
              local_1d58._8_4_ = (uint)uStack_240;
              local_1d58._0_8_ = dVar432;
              local_1d58._12_4_ = uStack_240._4_4_;
              unique0x10008c5b = (uint)uStack_230;
              local_258 = (undefined1  [8])dVar305;
              unique0x10008c5f = uStack_230._4_4_;
              local_168 = local_148;
              uStack_160 = uStack_140;
              local_158 = local_138;
              uStack_150 = uStack_130;
              local_1e01 = 0;
              local_1e8 = local_1c8;
              uStack_1e0 = uStack_1c0;
              local_1d8 = local_1b8;
              uStack_1d0 = uStack_1b0;
            }
            paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar35;
            uVar37 = 1;
            _local_268 = local_1d58;
            local_1d48 = _local_258;
          }
          else {
            local_1d58 = _local_268;
            local_1e02 = 0;
            uVar37 = 1;
            local_1d48 = _local_258;
          }
        }
        local_1e78 = ZEXT816(0);
        local_1bf8 = _local_258;
        local_1c08 = _local_268;
        goto LAB_143e98817;
      }
      if (uVar37 == 1) {
        local_1e13 = 0;
        uVar37 = 0;
LAB_143e9650c:
        iVar34 = 0;
        paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar37;
        local_1e78 = ZEXT816(0);
        local_1bf8 = _local_258;
        local_1c08 = _local_268;
        local_1e88 = auVar448;
        local_1dd8 = _local_268;
        local_1dc8 = _local_258;
      }
      else if (uVar37 == 2) {
        auVar17._8_4_ = (uint)uStack_240;
        auVar17._0_8_ = dVar432;
        auVar17._12_4_ = uStack_240._4_4_;
        auVar19._8_4_ = (uint)uStack_230;
        auVar19._0_8_ = dVar305;
        auVar19._12_4_ = uStack_230._4_4_;
        local_1e16 = 0;
        local_1e15 = 0;
        local_1e14 = 0;
        dVar465 = dVar432 - (double)local_268;
        dVar500 = auVar17._8_8_ - dVar480;
        dVar508 = dVar305 - dVar58;
        dVar336 = auVar19._8_8_ - dStack_250;
        auVar471._0_8_ =
             (0.0 - dVar58) * dVar508 + (0.0 - (double)local_268) * dVar465 +
             (0.0 - dVar480) * dVar500;
        auVar471._8_8_ = auVar471._0_8_;
        auVar130._8_4_ = SUB84(dVar500,0);
        auVar130._0_8_ = dVar465;
        auVar130._12_4_ = (int)((ulonglong)dVar500 >> 0x20);
        auVar502._8_4_ = SUB84(auVar471._0_8_,0);
        auVar502._0_8_ = auVar471._0_8_;
        auVar502._12_4_ = (int)((ulonglong)auVar471._0_8_ >> 0x20);
        auVar317._0_8_ = dVar508 * dVar508 + dVar465 * dVar465 + auVar130._8_8_ * dVar500;
        lVar50 = -(ulonglong)(auVar471._0_8_ <= 0.0);
        lVar51 = -(ulonglong)(auVar502._8_8_ <= 0.0);
        auVar503._8_8_ = lVar51;
        auVar503._0_8_ = lVar50;
        auVar317._8_8_ = auVar317._0_8_;
        uVar302 = SUB84(auVar317._0_8_,0);
        auVar131._8_4_ = uVar302;
        auVar131._0_8_ = auVar317._0_8_;
        uVar332 = (undefined4)((ulonglong)auVar317._0_8_ >> 0x20);
        auVar131._12_4_ = uVar332;
        auVar418._8_4_ = uVar302;
        auVar418._0_8_ = auVar317._0_8_;
        auVar418._12_4_ = uVar332;
        auVar419._8_8_ = -(ulonglong)(auVar418._8_8_ <= _UNK_150b28838);
        auVar419._0_8_ = -(ulonglong)(auVar317._0_8_ <= ___xmm_38100000000000003810000000000000);
        auVar132._8_8_ = -(ulonglong)(auVar131._8_8_ <= auVar471._0_8_);
        auVar132._0_8_ = -(ulonglong)(auVar317._0_8_ <= auVar471._0_8_);
        auVar419 = auVar419 | auVar132;
        auVar397._8_4_ = uVar302;
        auVar397._0_8_ = auVar317._0_8_;
        auVar397._12_4_ = uVar332;
        auVar398._8_8_ = -(ulonglong)(auVar397._8_8_ <= _UNK_150b28838);
        auVar398._0_8_ = -(ulonglong)(auVar317._0_8_ <= ___xmm_38100000000000003810000000000000);
        auVar398 = auVar398 | auVar132;
        uVar35 = auVar419._0_4_;
        uVar408 = auVar419._4_4_;
        uVar409 = auVar419._8_4_;
        uVar411 = auVar419._12_4_;
        auVar348._0_4_ = ~uVar35 & uVar43;
        auVar348._4_4_ = ~uVar408 & uVar303;
        auVar348._8_4_ = ~uVar409 & uVar301;
        auVar348._12_4_ = ~uVar411 & uVar46;
        uVar37 = auVar398._0_4_;
        uVar43 = auVar398._4_4_;
        uVar46 = auVar398._8_4_;
        uVar303 = auVar398._12_4_;
        auVar375._0_4_ = ~uVar37 & uVar45;
        auVar375._4_4_ = ~uVar43 & uVar265;
        auVar375._8_4_ = ~uVar46 & uVar266;
        auVar375._12_4_ = ~uVar303 & uVar264;
        auVar202 = divpd(auVar471,auVar317);
        local_168 = (double)CONCAT44(local_148._4_4_ & uVar408 | ~uVar408 & local_168._4_4_,
                                     (uint)local_148 & uVar35 | ~uVar35 & (uint)local_168);
        uStack_160 = (double)CONCAT44(uStack_140._4_4_ & uVar411 | ~uVar411 & uStack_160._4_4_,
                                      (uint)uStack_140 & uVar409 | ~uVar409 & (uint)uStack_160);
        auVar457._0_4_ = (uint)local_248 & uVar35;
        auVar457._4_4_ = local_248._4_4_ & uVar408;
        auVar457._8_4_ = (uint)uStack_240 & uVar409;
        auVar457._12_4_ = uStack_240._4_4_ & uVar411;
        local_158 = (double)CONCAT44(local_138._4_4_ & uVar43 | ~uVar43 & local_158._4_4_,
                                     (uint)local_138 & uVar37 | ~uVar37 & (uint)local_158);
        uStack_150 = (double)CONCAT44(uStack_130._4_4_ & uVar303 | ~uVar303 & uStack_150._4_4_,
                                      (uint)uStack_130 & uVar46 | ~uVar46 & (uint)uStack_150);
        auVar495._0_4_ = (uint)local_238 & uVar37;
        auVar495._4_4_ = local_238._4_4_ & uVar43;
        auVar495._8_4_ = (uint)uStack_230 & uVar46;
        auVar495._12_4_ = uStack_230._4_4_ & uVar303;
        auVar466 = maxpd(auVar202,ZEXT816(0));
        local_1e8 = (double)CONCAT44(local_1c8._4_4_ & uVar408 | ~uVar408 & local_1e8._4_4_,
                                     (uint)local_1c8 & uVar35 | ~uVar35 & (uint)local_1e8);
        uStack_1e0 = (double)CONCAT44(uStack_1c0._4_4_ & uVar411 | ~uVar411 & uStack_1e0._4_4_,
                                      (uint)uStack_1c0 & uVar409 | ~uVar409 & (uint)uStack_1e0);
        _local_268 = auVar348 | auVar457;
        auVar7._8_8_ = _UNK_150689688;
        auVar7._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
        auVar202 = minpd(auVar466,auVar7);
        _local_258 = auVar375 | auVar495;
        local_1d8 = (double)CONCAT44(local_1b8._4_4_ & uVar43 | ~uVar43 & local_1d8._4_4_,
                                     (uint)local_1b8 & uVar37 | ~uVar37 & (uint)local_1d8);
        uStack_1d0 = (double)CONCAT44(uStack_1b0._4_4_ & uVar303 | ~uVar303 & uStack_1d0._4_4_,
                                      (uint)uStack_1b0 & uVar46 | ~uVar46 & (uint)uStack_1d0);
        dVar58 = ___xmm_3ff00000000000003ff0000000000000 - auVar202._0_8_;
        dVar492 = _UNK_150689688 - auVar202._8_8_;
        auVar466 = minpd(auVar466,auVar7);
        dVar465 = dVar465 * auVar202._0_8_ + local_268;
        dVar480 = dVar500 * auVar202._8_8_ + local_268._8_8_;
        uVar45 = (uint)lVar50;
        uVar264 = (uint)((ulonglong)lVar50 >> 0x20);
        uVar265 = (uint)lVar51;
        uVar266 = (uint)((ulonglong)lVar51 >> 0x20);
        auVar349._0_4_ = local_268._0_4_ & uVar45;
        auVar349._4_4_ = local_268._4_4_ & uVar264;
        auVar349._8_4_ = local_268._8_4_ & uVar265;
        auVar349._12_4_ = local_268._12_4_ & uVar266;
        dVar500 = auVar466._0_8_ * dVar508 + local_258;
        dVar508 = auVar466._8_8_ * dVar336 + local_258._8_8_;
        auVar376._0_4_ = local_258._0_4_ & uVar45;
        auVar376._4_4_ = local_258._4_4_ & uVar264;
        auVar376._8_4_ = local_258._8_4_ & uVar265;
        auVar376._12_4_ = local_258._12_4_ & uVar266;
        auVar231._8_4_ = uVar265;
        auVar231._0_8_ = lVar50;
        auVar231._12_4_ = uVar266;
        auVar231 = auVar231 | auVar419;
        auVar133._0_4_ = ~uVar35 & SUB84(dVar465,0);
        auVar133._4_4_ = ~uVar408 & (uint)((ulonglong)dVar465 >> 0x20);
        auVar133._8_4_ = ~uVar409 & SUB84(dVar480,0);
        auVar133._12_4_ = ~uVar411 & (uint)((ulonglong)dVar480 >> 0x20);
        uVar35 = movmskpd(0,auVar231);
        paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar35;
        auVar133 = auVar133 | auVar457;
        auVar448._4_4_ = _UNK_150689514;
        auVar448._0_4_ = ___xmm_00000000000000003ff0000000000000;
        auVar448._8_4_ = _UNK_150689518;
        auVar448._12_4_ = _UNK_15068951c;
        auVar512._0_4_ = ~uVar45 & auVar133._0_4_;
        auVar512._4_4_ = ~uVar264 & auVar133._4_4_;
        auVar512._8_4_ = ~uVar265 & auVar133._8_4_;
        auVar512._12_4_ = ~uVar266 & auVar133._12_4_;
        auVar442._0_4_ = auVar231._0_4_ & ___xmm_00000000000000003ff0000000000000;
        auVar442._4_4_ = auVar231._4_4_ & _UNK_150689514;
        auVar442._8_4_ = auVar231._8_4_ & _UNK_150689518;
        auVar442._12_4_ = auVar231._12_4_ & _UNK_15068951c;
        auVar134._0_4_ = ~uVar37 & SUB84(dVar500,0);
        auVar134._4_4_ = ~uVar43 & (uint)((ulonglong)dVar500 >> 0x20);
        auVar134._8_4_ = ~uVar46 & SUB84(dVar508,0);
        auVar134._12_4_ = ~uVar303 & (uint)((ulonglong)dVar508 >> 0x20);
        auVar232._0_4_ = ~auVar231._0_4_ & SUB84(dVar58,0);
        auVar232._4_4_ = ~auVar231._4_4_ & (uint)((ulonglong)dVar58 >> 0x20);
        auVar232._8_4_ = ~auVar231._8_4_ & auVar202._0_4_;
        auVar232._12_4_ = ~auVar231._12_4_ & auVar202._4_4_;
        auVar134 = auVar134 | auVar495;
        auVar496._8_8_ = _UNK_150689688;
        auVar496._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
        auVar503 = auVar503 | auVar398;
        uVar37 = movmskpd(0,auVar503);
        auVar472._0_4_ = ~uVar45 & auVar134._0_4_;
        auVar472._4_4_ = ~uVar264 & auVar134._4_4_;
        auVar472._8_4_ = ~uVar265 & auVar134._8_4_;
        auVar472._12_4_ = ~uVar266 & auVar134._12_4_;
        local_1e88 = auVar442 | auVar232;
        local_1e78._4_4_ = ~auVar503._4_4_ & (uint)((ulonglong)dVar492 >> 0x20);
        local_1e78._0_4_ = ~auVar503._0_4_ & SUB84(dVar492,0);
        local_1c08 = auVar512 | auVar349;
        local_1bf8 = auVar472 | auVar376;
        local_1e78._8_4_ = ~auVar503._8_4_ & auVar202._8_4_;
        local_1e78._12_4_ = ~auVar503._12_4_ & auVar202._12_4_;
        iVar34 = 1;
        local_1dd8 = local_1c08;
        local_1dc8 = local_1bf8;
        if ((uVar37 & 0x3fffffff) != 0 || uVar35 != 0) {
          uVar52 = 1;
        }
      }
      else if (uVar37 == 3) {
        local_1e58._8_4_ = (uint)uStack_240;
        local_1e58._0_8_ = dVar432;
        local_1e58._12_4_ = uStack_240._4_4_;
        local_ed8 = local_228 - (double)local_268;
        dStack_ed0 = dStack_220 - dVar480;
        local_1e21 = 0;
        local_fe8._0_8_ = local_218 - dVar58;
        local_fe8._8_8_ = dStack_210 - dStack_250;
        dVar388 = local_1e58._8_8_;
        dVar336 = dVar432 - (double)local_268;
        dVar410 = dVar388 - dVar480;
        auVar485._0_8_ = dVar305 - dVar58;
        auVar485._8_8_ = dVar199 - dStack_250;
        uVar333 = SUB84(dVar410,0);
        auVar110._8_4_ = uVar333;
        auVar110._0_8_ = dVar336;
        uVar364 = (undefined4)((ulonglong)dVar410 >> 0x20);
        auVar110._12_4_ = uVar364;
        uVar302 = SUB84(dStack_ed0,0);
        auVar278._8_4_ = uVar302;
        auVar278._0_8_ = local_ed8;
        uVar332 = (undefined4)((ulonglong)dStack_ed0 >> 0x20);
        auVar278._12_4_ = uVar332;
        auVar220._8_4_ = uVar302;
        auVar220._0_8_ = local_ed8;
        auVar220._12_4_ = uVar332;
        auVar466 = blendpd(auVar220,local_fe8,2);
        local_18c8._0_8_ = local_fe8._0_8_ * dVar410 - auVar485._0_8_ * dStack_ed0;
        auVar111._8_4_ = uVar333;
        auVar111._0_8_ = dVar336;
        auVar111._12_4_ = uVar364;
        local_1e38._8_8_ = dVar199;
        local_1e38._0_8_ = dVar305;
        auVar202 = blendpd(auVar111,auVar485,2);
        auVar341._8_4_ = (int)local_18c8._0_8_;
        auVar341._0_8_ = auVar278._8_8_ * dVar336 - auVar110._8_8_ * local_ed8;
        auVar341._12_4_ = (int)((ulonglong)local_18c8._0_8_ >> 0x20);
        auVar221._0_8_ = auVar466._0_8_ * auVar485._0_8_ - auVar202._0_8_ * local_fe8._0_8_;
        auVar221._8_8_ = auVar466._8_8_ * auVar485._8_8_ - auVar202._8_8_ * local_fe8._8_8_;
        local_1cf8 = blendpd(auVar341,auVar221,2);
        auVar112._8_4_ = SUB84(auVar221._0_8_,0);
        auVar112._0_8_ = local_18c8._0_8_;
        auVar112._12_4_ = (int)((ulonglong)auVar221._0_8_ >> 0x20);
        local_18c8._8_8_ = auVar221._0_8_;
        dVar508 = local_1cf8._0_8_;
        auVar202 = local_1cf8;
        local_18b8 = dVar508 * dVar508 + (double)local_18c8._0_8_ * (double)local_18c8._0_8_ +
                     auVar112._8_8_ * auVar221._0_8_;
        dStack_18b0 = local_18b8;
        dVar500 = dVar58 * ___xmm_38100000000000003810000000000000 *
                  dVar58 * ___xmm_38100000000000003810000000000000 +
                  (double)local_268 * ___xmm_38100000000000003810000000000000 *
                  (double)local_268 * ___xmm_38100000000000003810000000000000 +
                  dVar480 * _UNK_150b28838 * dVar480 * _UNK_150b28838;
        auVar113._8_4_ = SUB84(local_18b8,0);
        auVar113._0_8_ = local_18b8;
        auVar113._12_4_ = (int)((ulonglong)local_18b8 >> 0x20);
        auVar114._8_8_ = -(ulonglong)(auVar113._8_8_ <= dVar500);
        auVar114._0_8_ = -(ulonglong)(local_18b8 <= dVar500);
        uVar37 = movmskpd(0,auVar114);
        iVar34 = movmskpd(0,auVar114);
        if ((uVar37 & 0x3fffffff) == 0 && iVar34 == 0) {
          auVar118._8_4_ = uVar333;
          auVar118._0_8_ = dVar336;
          auVar118._12_4_ = uVar364;
          auVar344._0_8_ =
               auVar485._0_8_ * (0.0 - dVar58) + dVar336 * (0.0 - (double)local_268) +
               auVar118._8_8_ * (0.0 - dVar480);
          auVar119._8_4_ = uVar302;
          auVar119._0_8_ = local_ed8;
          auVar119._12_4_ = uVar332;
          auVar344._8_8_ = auVar344._0_8_;
          auVar372._0_8_ =
               local_fe8._0_8_ * (0.0 - dVar58) + local_ed8 * (0.0 - (double)local_268) +
               auVar119._8_8_ * (0.0 - dVar480);
          auVar120._8_4_ = SUB84(auVar344._0_8_,0);
          auVar120._0_8_ = auVar344._0_8_;
          uVar366 = (undefined4)((ulonglong)auVar344._0_8_ >> 0x20);
          auVar120._12_4_ = uVar366;
          auVar372._8_8_ = auVar372._0_8_;
          auVar222._8_4_ = SUB84(auVar372._0_8_,0);
          auVar222._0_8_ = auVar372._0_8_;
          uVar365 = (undefined4)((ulonglong)auVar372._0_8_ >> 0x20);
          auVar222._12_4_ = uVar365;
          auVar223._0_8_ = -(ulonglong)(auVar372._0_8_ <= 0.0 && auVar344._0_8_ <= 0.0);
          lVar50 = -(ulonglong)(auVar222._8_8_ <= 0.0 && auVar120._8_8_ <= 0.0);
          auVar223._8_4_ = (undefined4)lVar50;
          auVar223._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
          uVar35 = movmskpd(0,auVar223);
          uVar37 = movmskpd(iVar34,auVar223);
          if ((uVar35 & 0x3fffffff) != 0 || uVar37 != 0) {
            uVar52 = 1;
            local_1e1d = 0;
            goto LAB_143e9650c;
          }
          auVar121._8_4_ = uVar333;
          auVar121._0_8_ = dVar336;
          auVar121._12_4_ = uVar364;
          dVar413 = auVar485._0_8_ * (0.0 - dVar305) + dVar336 * (0.0 - dVar432) +
                    auVar121._8_8_ * (0.0 - dVar388);
          auVar122._8_4_ = uVar302;
          auVar122._0_8_ = local_ed8;
          auVar122._12_4_ = uVar332;
          dVar500 = local_fe8._0_8_ * (0.0 - dVar305) + local_ed8 * (0.0 - dVar432) +
                    auVar122._8_8_ * (0.0 - dVar388);
          auVar224._8_4_ = SUB84(dVar500,0);
          auVar224._0_8_ = dVar500;
          uVar333 = (undefined4)((ulonglong)dVar500 >> 0x20);
          auVar224._12_4_ = uVar333;
          auVar225._0_8_ = -(ulonglong)(dVar500 <= dVar413 && 0.0 <= dVar413);
          lVar50 = -(ulonglong)(auVar224._8_8_ <= dVar413 && 0.0 <= dVar413);
          auVar225._8_4_ = (undefined4)lVar50;
          auVar225._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
          uVar35 = movmskpd(0,auVar225);
          uVar37 = movmskpd(uVar37,auVar225);
          paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar37;
          if ((uVar35 & 0x3fffffff) == 0 && uVar37 == 0) {
            auVar226._8_4_ = SUB84(dVar500,0);
            auVar226._0_8_ = dVar500;
            auVar226._12_4_ = uVar333;
            auVar123._8_4_ = SUB84(dVar413,0);
            auVar123._0_8_ = dVar413;
            uVar333 = (undefined4)((ulonglong)dVar413 >> 0x20);
            auVar123._12_4_ = uVar333;
            local_ff8 = dVar500 * auVar344._0_8_ - dVar413 * auVar372._0_8_;
            dStack_ff0 = auVar226._8_8_ * auVar344._0_8_ - auVar123._8_8_ * auVar372._0_8_;
            auVar124._8_4_ = SUB84(auVar344._0_8_,0);
            auVar124._0_8_ = auVar344._0_8_;
            auVar124._12_4_ = uVar366;
            local_1cc8._8_8_ = auVar124._8_8_ - dVar413;
            auVar279._8_4_ = SUB84(dStack_ff0,0);
            auVar279._0_8_ = local_ff8;
            auVar279._12_4_ = (int)((ulonglong)dStack_ff0 >> 0x20);
            local_1cc8._0_8_ = auVar344._0_8_ - dVar413;
            auVar125._8_4_ = SUB84(dVar413,0);
            auVar125._0_8_ = dVar413;
            auVar125._12_4_ = uVar333;
            auVar280._0_8_ =
                 -(ulonglong)
                  ((local_ff8 <= 0.0 && 0.0 <= auVar344._0_8_) &&
                  (0.0 < auVar344._0_8_ - dVar413 && dVar413 <= 0.0));
            lVar50 = -(ulonglong)
                      ((auVar279._8_8_ <= 0.0 && 0.0 <= auVar344._0_8_) &&
                      (0.0 < (double)local_1cc8._8_8_ && auVar125._8_8_ <= 0.0));
            auVar280._8_4_ = (undefined4)lVar50;
            auVar280._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
            uVar35 = movmskpd(0,auVar280);
            uVar37 = movmskpd(uVar37,auVar280);
            paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar37;
            if ((uVar35 & 0x3fffffff) == 0 && uVar37 == 0) {
              auVar126._8_4_ = uVar302;
              auVar126._0_8_ = local_ed8;
              auVar126._12_4_ = uVar332;
              dVar435 = local_fe8._0_8_ * (0.0 - local_218) + local_ed8 * (0.0 - local_228) +
                        auVar126._8_8_ * (0.0 - dStack_220);
              dVar336 = auVar485._0_8_ * (0.0 - local_218) + dVar336 * (0.0 - local_228) +
                        dVar410 * (0.0 - dStack_220);
              uVar302 = SUB84(dVar336,0);
              auVar227._8_4_ = uVar302;
              auVar227._0_8_ = dVar336;
              uVar332 = (undefined4)((ulonglong)dVar336 >> 0x20);
              auVar227._12_4_ = uVar332;
              auVar228._0_8_ = -(ulonglong)(dVar336 <= dVar435 && 0.0 <= dVar435);
              lVar50 = -(ulonglong)(auVar227._8_8_ <= dVar435 && 0.0 <= dVar435);
              auVar228._8_4_ = (undefined4)lVar50;
              auVar228._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
              uVar35 = movmskpd(0,auVar228);
              uVar37 = movmskpd(uVar37,auVar228);
              paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar37;
              if ((uVar35 & 0x3fffffff) == 0 && uVar37 == 0) {
                auVar441._8_4_ = uVar302;
                auVar441._0_8_ = dVar336;
                auVar441._12_4_ = uVar332;
                uVar333 = SUB84(dVar435,0);
                auVar127._8_4_ = uVar333;
                auVar127._0_8_ = dVar435;
                uVar364 = (undefined4)((ulonglong)dVar435 >> 0x20);
                auVar127._12_4_ = uVar364;
                auVar345._8_4_ = SUB84(auVar372._0_8_,0);
                auVar345._0_8_ = auVar372._0_8_;
                auVar345._12_4_ = uVar365;
                auVar281._8_4_ = uVar333;
                auVar281._0_8_ = dVar435;
                auVar281._12_4_ = uVar364;
                dVar410 = dVar336 * auVar372._0_8_ - dVar435 * auVar344._0_8_;
                dVar452 = auVar441._8_8_ * auVar372._0_8_ - auVar127._8_8_ * auVar344._0_8_;
                auVar346._0_8_ = auVar372._0_8_ - dVar435;
                auVar346._8_8_ = auVar345._8_8_ - dVar435;
                auVar229._8_4_ = SUB84(dVar452,0);
                auVar229._0_8_ = dVar410;
                auVar229._12_4_ = (int)((ulonglong)dVar452 >> 0x20);
                auVar282._0_8_ =
                     -(ulonglong)
                      ((dVar435 <= 0.0 && 0.0 < auVar346._0_8_) &&
                      (dVar410 <= 0.0 && 0.0 <= auVar372._0_8_));
                lVar50 = -(ulonglong)
                          ((auVar281._8_8_ <= 0.0 && 0.0 < auVar346._8_8_) &&
                          (auVar229._8_8_ <= 0.0 && 0.0 <= auVar372._0_8_));
                auVar282._8_4_ = (undefined4)lVar50;
                auVar282._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                uVar35 = movmskpd(0,auVar282);
                uVar37 = movmskpd(uVar37,auVar282);
                paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar37;
                if ((uVar35 & 0x3fffffff) == 0 && uVar37 == 0) {
                  auVar128._8_4_ = uVar302;
                  auVar128._0_8_ = dVar336;
                  auVar128._12_4_ = uVar332;
                  auVar347._8_4_ = uVar333;
                  auVar347._0_8_ = dVar435;
                  auVar347._12_4_ = uVar364;
                  auVar316._0_8_ = dVar500 - dVar413;
                  auVar316._8_8_ = dVar500 - dVar413;
                  dVar481 = dVar336 - dVar435;
                  dVar491 = dVar336 - dVar435;
                  dVar336 = dVar435 * dVar413 - dVar336 * dVar500;
                  dVar500 = auVar347._8_8_ * dVar413 - auVar128._8_8_ * dVar500;
                  auVar373._8_4_ = SUB84(dVar491,0);
                  auVar373._0_8_ = dVar481;
                  auVar373._12_4_ = (int)((ulonglong)dVar491 >> 0x20);
                  auVar283._8_4_ = SUB84(dVar500,0);
                  auVar283._0_8_ = dVar336;
                  auVar283._12_4_ = (int)((ulonglong)dVar500 >> 0x20);
                  auVar374._0_8_ = dVar481 + auVar316._0_8_;
                  auVar374._8_8_ = auVar373._8_8_ + auVar316._8_8_;
                  auVar284._0_8_ =
                       -(ulonglong)
                        ((0.0 <= auVar316._0_8_ && dVar336 <= 0.0) &&
                        (0.0 < auVar374._0_8_ && 0.0 <= dVar481));
                  lVar50 = -(ulonglong)
                            ((0.0 < auVar374._8_8_ && 0.0 <= dVar491) &&
                            (auVar283._8_8_ <= 0.0 && 0.0 <= auVar316._8_8_));
                  auVar284._8_4_ = (undefined4)lVar50;
                  auVar284._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                  uVar35 = movmskpd(0,auVar284);
                  uVar37 = movmskpd(uVar37,auVar284);
                  paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar37;
                  if ((uVar35 & 0x3fffffff) == 0 && uVar37 == 0) {
                    iVar34 = 0;
                    auVar230._0_8_ = (double)fVar56;
                    auVar230._8_8_ = (double)fVar200;
                    local_1e17 = 0;
                    uVar52 = 3;
                    auVar129._0_8_ = local_ff8 + dVar410 + dVar336;
                    auVar129._8_8_ = dStack_ff0 + dVar452 + dVar500;
                    auVar466 = divpd(auVar230,auVar129);
                    dVar465 = local_ff8 * auVar466._0_8_;
                    auVar11._8_8_ = local_18b8;
                    auVar11._0_8_ = local_18b8;
                    auVar439 = divpd(local_18c8,auVar11);
                    dVar410 = auVar466._0_8_ * dVar410;
                    local_1e78._8_8_ = auVar466._8_8_ * dVar452;
                    local_1e78._0_8_ = dVar465;
                    local_1e88._8_8_ = dVar410;
                    local_1e88._0_8_ = (dVar492 - dVar410) - dVar465;
                    auVar12._8_8_ = local_18b8;
                    auVar12._0_8_ = local_18b8;
                    auVar466 = divpd(local_1cf8,auVar12);
                    dVar58 = dVar58 * auVar466._0_8_ + auVar439._0_8_ * (double)local_268 +
                             auVar439._8_8_ * dVar480;
                    auVar511._8_4_ = SUB84(dVar58,0);
                    auVar511._0_8_ = dVar58;
                    auVar511._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
                    local_1c08._0_8_ = dVar58 * (double)local_18c8._0_8_;
                    local_1c08._8_8_ = auVar511._8_8_ * auVar221._0_8_;
                    local_1bf8._0_8_ = dVar58 * dVar508;
                    local_1bf8._8_8_ = dVar58 * (double)local_1cf8._8_8_;
                    local_1dd8 = local_1c08;
                    local_1dc8 = local_1bf8;
                    local_1cf8 = auVar202;
                  }
                  else {
                    iVar34 = 0;
                    uVar52 = 2;
                    auVar466 = divpd(auVar316,auVar374);
                    local_1e18 = 0;
                    dStack_260 = dVar388;
                    local_268 = (undefined1  [8])dVar432;
                    local_158 = local_138;
                    uStack_150 = uStack_130;
                    dVar451 = auVar466._0_8_;
                    dVar58 = auVar466._8_8_;
                    local_1d8 = local_1b8;
                    uStack_1d0 = uStack_1b0;
                    local_1c08._0_8_ = (local_228 - dVar432) * dVar451 + dVar432;
                    local_1c08._8_8_ = (dStack_220 - dVar388) * dVar58 + dVar388;
                    local_168 = local_148;
                    uStack_160 = uStack_140;
                    local_1e8 = local_1c8;
                    uStack_1e0 = uStack_1c0;
                    local_1bf8._0_8_ = (local_218 - dVar305) * dVar451 + dVar305;
                    local_1bf8._8_8_ = (dStack_210 - dVar199) * dVar58 + dVar199;
                    local_148 = local_128;
                    uStack_140 = dStack_120;
                    local_138 = local_118;
                    uStack_130 = dStack_110;
                    local_1e88._8_8_ = dVar451;
                    local_1e88._0_8_ = dVar492 - dVar451;
                    local_1e78._8_8_ = dVar58;
                    local_1e78._0_8_ = dVar465 - dVar58;
                    local_1c8 = local_1a8;
                    uStack_1c0 = dStack_1a0;
                    _local_258 = local_1e38;
                    local_1b8 = local_198;
                    uStack_1b0 = dStack_190;
                    local_1dd8 = local_1c08;
                    local_1dc8 = local_1bf8;
                    local_1cf8 = auVar202;
                    dVar432 = local_228;
                    dVar451 = dStack_220;
                    dVar305 = local_218;
                    dVar199 = dStack_210;
                  }
                }
                else {
                  iVar34 = 0;
                  uVar52 = 2;
                  auVar466 = divpd(auVar372,auVar346);
                  local_1e19 = 0;
                  local_148 = local_128;
                  uStack_140 = dStack_120;
                  local_1c8 = local_1a8;
                  uStack_1c0 = dStack_1a0;
                  dVar432 = auVar466._0_8_;
                  dVar451 = auVar466._8_8_;
                  local_1dd8._0_8_ = local_ed8 * dVar432 + (double)local_268;
                  local_1dd8._8_8_ = dStack_ed0 * dVar451 + dVar480;
                  local_138 = local_118;
                  uStack_130 = dStack_110;
                  local_1c08._8_4_ = (int)local_1dd8._8_8_;
                  local_1c08._0_8_ = (double)local_1dd8._0_8_;
                  local_1c08._12_4_ = (int)((ulonglong)local_1dd8._8_8_ >> 0x20);
                  local_1e88._8_8_ = dVar432;
                  local_1e88._0_8_ = dVar492 - dVar432;
                  local_1dc8._0_8_ = local_fe8._0_8_ * dVar432 + dVar58;
                  local_1dc8._8_8_ = local_fe8._8_8_ * dVar451 + dStack_250;
                  local_1bf8._8_4_ = (int)local_1dc8._8_8_;
                  local_1bf8._0_8_ = (double)local_1dc8._0_8_;
                  local_1bf8._12_4_ = (int)((ulonglong)local_1dc8._8_8_ >> 0x20);
                  local_1e78._8_8_ = dVar451;
                  local_1e78._0_8_ = dVar465 - dVar451;
                  local_1b8 = local_198;
                  uStack_1b0 = dStack_190;
                  local_1cf8 = auVar202;
                  dVar432 = local_228;
                  dVar451 = dStack_220;
                  dVar305 = local_218;
                  dVar199 = dStack_210;
                }
              }
              else {
                dStack_260 = dStack_220;
                local_268 = (undefined1  [8])local_228;
                iVar34 = 0;
                local_1bf8._8_8_ = dStack_210;
                local_1bf8._0_8_ = local_218;
                uVar52 = 1;
                local_1e78 = ZEXT816(0);
                local_168 = local_128;
                uStack_160 = dStack_120;
                local_158 = local_118;
                uStack_150 = dStack_110;
                local_1e8 = local_1a8;
                uStack_1e0 = dStack_1a0;
                local_1d8 = local_198;
                uStack_1d0 = dStack_190;
                local_1e1a = 0;
                _local_258 = local_1bf8;
                local_1c08 = _local_268;
                local_1e88 = auVar448;
                local_1dd8 = _local_268;
                local_1dc8 = local_1bf8;
                local_1cf8 = auVar202;
              }
            }
            else {
              auVar466 = divpd(auVar344,local_1cc8);
              iVar34 = 0;
              uVar52 = 2;
              local_1e1b = 0;
              dVar500 = auVar466._0_8_;
              dVar508 = auVar466._8_8_;
              local_1e78._8_8_ = dVar508;
              local_1e78._0_8_ = dVar465 - dVar508;
              local_1dd8._0_8_ = dVar336 * dVar500 + (double)local_268;
              local_1dd8._8_8_ = dVar410 * dVar508 + dVar480;
              local_1e88._8_8_ = dVar500;
              local_1e88._0_8_ = dVar492 - dVar500;
              local_1c08._8_4_ = (int)local_1dd8._8_8_;
              local_1c08._0_8_ = (double)local_1dd8._0_8_;
              local_1c08._12_4_ = (int)((ulonglong)local_1dd8._8_8_ >> 0x20);
              local_1dc8._0_8_ = auVar485._0_8_ * dVar500 + dVar58;
              local_1dc8._8_8_ = auVar485._8_8_ * dVar508 + dStack_250;
              local_1bf8._8_4_ = (int)local_1dc8._8_8_;
              local_1bf8._0_8_ = (double)local_1dc8._0_8_;
              local_1bf8._12_4_ = (int)((ulonglong)local_1dc8._8_8_ >> 0x20);
              local_1cf8 = auVar202;
            }
          }
          else {
            iVar34 = 0;
            uVar52 = 1;
            local_1e78 = ZEXT816(0);
            local_168 = local_148;
            uStack_160 = uStack_140;
            local_158 = local_138;
            uStack_150 = uStack_130;
            local_1e8 = local_1c8;
            uStack_1e0 = uStack_1c0;
            local_1d8 = local_1b8;
            uStack_1d0 = uStack_1b0;
            local_1e1c = 0;
            _local_268 = local_1e58;
            _local_258 = local_1e38;
            local_1dc8 = local_1e38;
            local_1bf8 = local_1e38;
            local_1c08 = local_1e58;
            local_1e88 = auVar448;
            local_1dd8 = local_1e58;
            local_1cf8 = auVar202;
          }
        }
        else {
          local_1e20 = 0;
          local_1e1f = 0;
          local_1e1e = 0;
          auVar438._0_8_ =
               (0.0 - dVar58) * auVar485._0_8_ + (0.0 - (double)local_268) * dVar336 +
               (0.0 - dVar480) * dVar410;
          auVar438._8_8_ = auVar438._0_8_;
          auVar115._8_4_ = uVar333;
          auVar115._0_8_ = dVar336;
          auVar115._12_4_ = uVar364;
          auVar455._8_4_ = SUB84(auVar438._0_8_,0);
          auVar455._0_8_ = auVar438._0_8_;
          auVar455._12_4_ = (int)((ulonglong)auVar438._0_8_ >> 0x20);
          auVar315._0_8_ =
               auVar485._0_8_ * auVar485._0_8_ + dVar336 * dVar336 + auVar115._8_8_ * dVar410;
          lVar50 = -(ulonglong)(auVar438._0_8_ <= 0.0);
          lVar51 = -(ulonglong)(auVar455._8_8_ <= 0.0);
          auVar456._8_8_ = lVar51;
          auVar456._0_8_ = lVar50;
          auVar315._8_8_ = auVar315._0_8_;
          uVar302 = SUB84(auVar315._0_8_,0);
          auVar116._8_4_ = uVar302;
          auVar116._0_8_ = auVar315._0_8_;
          uVar332 = (undefined4)((ulonglong)auVar315._0_8_ >> 0x20);
          auVar116._12_4_ = uVar332;
          auVar394._8_4_ = uVar302;
          auVar394._0_8_ = auVar315._0_8_;
          auVar394._12_4_ = uVar332;
          auVar117._8_8_ = -(ulonglong)(auVar116._8_8_ <= auVar438._0_8_);
          auVar117._0_8_ = -(ulonglong)(auVar315._0_8_ <= auVar438._0_8_);
          auVar466 = divpd(auVar438,auVar315);
          auVar395._8_8_ = -(ulonglong)(auVar394._8_8_ <= _UNK_150b28838);
          auVar395._0_8_ = -(ulonglong)(auVar315._0_8_ <= ___xmm_38100000000000003810000000000000);
          auVar395 = auVar395 | auVar117;
          auVar416._8_4_ = uVar302;
          auVar416._0_8_ = auVar315._0_8_;
          auVar416._12_4_ = uVar332;
          uVar35 = auVar395._0_4_;
          local_1e58._0_4_ = (uint)local_248 & uVar35;
          uVar408 = auVar395._4_4_;
          local_1e58._4_4_ = local_248._4_4_ & uVar408;
          uVar409 = auVar395._8_4_;
          local_1e58._8_4_ = (uint)uStack_240 & uVar409;
          uVar411 = auVar395._12_4_;
          local_1e58._12_4_ = uStack_240._4_4_ & uVar411;
          auVar417._8_8_ = -(ulonglong)(auVar416._8_8_ <= _UNK_150b28838);
          auVar417._0_8_ = -(ulonglong)(auVar315._0_8_ <= ___xmm_38100000000000003810000000000000);
          auVar417 = auVar417 | auVar117;
          uVar412 = auVar417._0_4_;
          local_1e38._0_4_ = (uint)local_238 & uVar412;
          uVar429 = auVar417._4_4_;
          local_1e38._4_4_ = local_238._4_4_ & uVar429;
          uVar430 = auVar417._8_4_;
          local_1e38._8_4_ = (uint)uStack_230 & uVar430;
          uVar433 = auVar417._12_4_;
          local_1e38._12_4_ = uStack_230._4_4_ & uVar433;
          auVar342._0_4_ = ~uVar35 & uVar43;
          auVar342._4_4_ = ~uVar408 & uVar303;
          auVar342._8_4_ = ~uVar409 & uVar301;
          auVar342._12_4_ = ~uVar411 & uVar46;
          _local_268 = auVar342 | local_1e58;
          auVar370._0_4_ = ~uVar412 & uVar45;
          auVar370._4_4_ = ~uVar429 & uVar265;
          auVar370._8_4_ = ~uVar430 & uVar266;
          auVar370._12_4_ = ~uVar433 & uVar264;
          _local_258 = auVar370 | local_1e38;
          local_168 = (double)CONCAT44(~uVar408 & local_168._4_4_ | local_148._4_4_ & uVar408,
                                       ~uVar35 & (uint)local_168 | (uint)local_148 & uVar35);
          uStack_160 = (double)CONCAT44(~uVar411 & uStack_160._4_4_ | uStack_140._4_4_ & uVar411,
                                        ~uVar409 & (uint)uStack_160 | (uint)uStack_140 & uVar409);
          local_158 = (double)CONCAT44(~uVar429 & local_158._4_4_ | local_138._4_4_ & uVar429,
                                       ~uVar412 & (uint)local_158 | (uint)local_138 & uVar412);
          uStack_150 = (double)CONCAT44(~uVar433 & uStack_150._4_4_ | uStack_130._4_4_ & uVar433,
                                        ~uVar430 & (uint)uStack_150 | (uint)uStack_130 & uVar430);
          local_1e8 = (double)CONCAT44(~uVar408 & local_1e8._4_4_ | local_1c8._4_4_ & uVar408,
                                       ~uVar35 & (uint)local_1e8 | (uint)local_1c8 & uVar35);
          uStack_1e0 = (double)CONCAT44(~uVar411 & uStack_1e0._4_4_ | uStack_1c0._4_4_ & uVar411,
                                        ~uVar409 & (uint)uStack_1e0 | (uint)uStack_1c0 & uVar409);
          auVar439 = maxpd(auVar466,ZEXT816(0));
          local_1d8 = (double)CONCAT44(~uVar429 & local_1d8._4_4_ | local_1b8._4_4_ & uVar429,
                                       ~uVar412 & (uint)local_1d8 | (uint)local_1b8 & uVar412);
          uStack_1d0 = (double)CONCAT44(~uVar433 & uStack_1d0._4_4_ | uStack_1b0._4_4_ & uVar433,
                                        ~uVar430 & (uint)uStack_1d0 | (uint)uStack_1b0 & uVar430);
          auVar466 = minpd(auVar439,auVar496);
          dVar492 = dVar492 - auVar466._0_8_;
          dVar465 = dVar465 - auVar466._8_8_;
          dVar58 = auVar466._0_8_ * dVar336 + local_268;
          dVar480 = auVar466._8_8_ * dVar410 + local_268._8_8_;
          auVar395 = auVar395 | auVar456;
          auVar439 = minpd(auVar439,auVar496);
          uVar37 = movmskpd(iVar34,auVar395);
          paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar37;
          auVar417 = auVar417 | auVar456;
          uVar43 = (uint)lVar50;
          uVar45 = (uint)((ulonglong)lVar50 >> 0x20);
          uVar46 = (uint)lVar51;
          uVar264 = (uint)((ulonglong)lVar51 >> 0x20);
          iVar34 = movmskpd(0,auVar417);
          dVar500 = auVar439._0_8_ * auVar485._0_8_ + local_258;
          dVar508 = auVar439._8_8_ * auVar485._8_8_ + local_258._8_8_;
          auVar343._0_4_ = local_268._0_4_ & uVar43;
          auVar343._4_4_ = local_268._4_4_ & uVar45;
          auVar343._8_4_ = local_268._8_4_ & uVar46;
          auVar343._12_4_ = local_268._12_4_ & uVar264;
          auVar470._0_4_ = ~uVar43 & (~uVar412 & SUB84(dVar500,0) | local_1e38._0_4_);
          auVar470._4_4_ =
               ~uVar45 & (~uVar429 & (uint)((ulonglong)dVar500 >> 0x20) | local_1e38._4_4_);
          auVar470._8_4_ = ~uVar46 & (~uVar430 & SUB84(dVar508,0) | local_1e38._8_4_);
          auVar470._12_4_ =
               ~uVar264 & (~uVar433 & (uint)((ulonglong)dVar508 >> 0x20) | local_1e38._12_4_);
          auVar371._0_4_ = local_258._0_4_ & uVar43;
          auVar371._4_4_ = local_258._4_4_ & uVar45;
          auVar371._8_4_ = local_258._8_4_ & uVar46;
          auVar371._12_4_ = local_258._12_4_ & uVar264;
          auVar448._4_4_ = _UNK_150689514;
          auVar448._0_4_ = ___xmm_00000000000000003ff0000000000000;
          auVar448._8_4_ = _UNK_150689518;
          auVar448._12_4_ = _UNK_15068951c;
          auVar396._0_4_ = auVar395._0_4_ & ___xmm_00000000000000003ff0000000000000;
          auVar396._4_4_ = auVar395._4_4_ & _UNK_150689514;
          auVar396._8_4_ = auVar395._8_4_ & _UNK_150689518;
          auVar396._12_4_ = auVar395._12_4_ & _UNK_15068951c;
          uVar37 = iVar34 * 4 | uVar37;
          iVar34 = -uVar37;
          auVar440._0_4_ = ~auVar395._0_4_ & SUB84(dVar492,0);
          auVar440._4_4_ = ~auVar395._4_4_ & (uint)((ulonglong)dVar492 >> 0x20);
          auVar440._8_4_ = ~auVar395._8_4_ & auVar466._0_4_;
          auVar440._12_4_ = ~auVar395._12_4_ & auVar466._4_4_;
          auVar510._0_4_ = ~uVar43 & (~uVar35 & SUB84(dVar58,0) | local_1e58._0_4_);
          auVar510._4_4_ =
               ~uVar45 & (~uVar408 & (uint)((ulonglong)dVar58 >> 0x20) | local_1e58._4_4_);
          auVar510._8_4_ = ~uVar46 & (~uVar409 & SUB84(dVar480,0) | local_1e58._8_4_);
          auVar510._12_4_ =
               ~uVar264 & (~uVar411 & (uint)((ulonglong)dVar480 >> 0x20) | local_1e58._12_4_);
          local_1e78._0_4_ = ~auVar417._0_4_ & SUB84(dVar465,0);
          local_1e78._4_4_ = ~auVar417._4_4_ & (uint)((ulonglong)dVar465 >> 0x20);
          local_1e78._8_4_ = ~auVar417._8_4_ & auVar466._8_4_;
          local_1e78._12_4_ = ~auVar417._12_4_ & auVar466._12_4_;
          local_1bf8 = auVar470 | auVar371;
          uVar52 = (ulonglong)(2 - (uVar37 != 0));
          local_1c08 = auVar510 | auVar343;
          local_1e88 = auVar440 | auVar396;
          local_1dd8 = auVar510 | auVar343;
          local_1dc8 = local_1bf8;
          local_1cf8 = auVar202;
        }
      }
      else if (uVar37 == 4) {
        local_1a28._8_8_ = dStack_200;
        local_1a28._0_8_ = local_208;
        auVar21._8_8_ = dStack_220;
        auVar21._0_8_ = local_228;
        local_1a18._8_8_ = dStack_1f0;
        local_1a18._0_8_ = local_1f8;
        auVar23._8_8_ = dStack_210;
        auVar23._0_8_ = local_218;
        local_1a68._8_4_ = (uint)uStack_240;
        local_1a68._0_8_ = dVar432;
        unique0x10008a47 = uStack_240._4_4_;
        local_1a58._8_4_ = (uint)uStack_230;
        local_1a58._0_8_ = dVar305;
        unique0x10008bcf = uStack_230._4_4_;
        auVar466 = blendpd(auVar21,auVar23,2);
        auVar202 = blendpd(local_1a28,local_1a18,2);
        auVar268._0_8_ = local_228 * dStack_200 - local_208 * dStack_220;
        auVar268._8_8_ = dStack_220 * local_1f8 - dStack_200 * local_218;
        dVar492 = auVar202._0_8_;
        dVar465 = auVar202._8_8_;
        dVar500 = auVar466._0_8_;
        dVar508 = auVar466._8_8_;
        auVar206._0_8_ = local_218 * dVar492 - local_1f8 * dVar500;
        auVar206._8_8_ = dStack_210 * dVar465 - dStack_1f0 * dVar508;
        auVar78._8_4_ = SUB84(auVar268._8_8_,0);
        auVar78._0_8_ = auVar268._0_8_;
        auVar78._12_4_ = (int)((ulonglong)auVar268._8_8_ >> 0x20);
        auVar202 = blendpd(auVar268,auVar206,2);
        dVar336 = local_1a68._8_8_;
        local_fd8[1] = auVar202._0_8_ * dVar305 + auVar78._8_8_ * dVar432 + auVar206._0_8_ * dVar336
        ;
        local_fd8[0] = 0.0 - local_fd8[1];
        local_fd8[1] = 0.0 - local_fd8[1];
        local_fc8[0] = local_fd8[0];
        local_fc8[1] = local_fd8[1];
        auVar269._0_8_ = local_228 * dStack_200 - local_208 * dStack_220;
        auVar269._8_8_ = dStack_220 * local_1f8 - dStack_200 * local_218;
        auVar466 = blendpd(_local_1a68,_local_1a58,2);
        auVar207._0_8_ = local_218 * dVar492 - local_1f8 * dVar500;
        auVar207._8_8_ = dStack_210 * dVar465 - dStack_1f0 * dVar508;
        auVar79._8_4_ = SUB84(auVar269._8_8_,0);
        auVar79._0_8_ = auVar269._0_8_;
        auVar79._12_4_ = (int)((ulonglong)auVar269._8_8_ >> 0x20);
        auVar202 = blendpd(auVar269,auVar207,2);
        local_fc8[2] = auVar202._0_8_ * dVar58 + auVar79._8_8_ * (double)local_268 +
                       auVar207._0_8_ * dVar480;
        local_fc8[3] = local_fc8[2];
        local_fc8[4] = local_fc8[2];
        dStack_fa0 = local_fc8[2];
        auVar270._0_8_ = dVar432 * dStack_200 - local_208 * dVar336;
        auVar270._8_8_ = dVar336 * local_1f8 - dStack_200 * dVar305;
        auVar208._0_8_ = dVar305 * dVar492 - local_1f8 * auVar466._0_8_;
        auVar208._8_8_ = local_1a58._8_8_ * dVar465 - dStack_1f0 * auVar466._8_8_;
        auVar80._8_4_ = SUB84(auVar270._8_8_,0);
        auVar80._0_8_ = auVar270._0_8_;
        auVar80._12_4_ = (int)((ulonglong)auVar270._8_8_ >> 0x20);
        auVar202 = blendpd(auVar270,auVar208,2);
        dStack_f90 = auVar202._0_8_ * dVar58 + auVar80._8_8_ * (double)local_268 +
                     auVar208._0_8_ * dVar480;
        local_1a48 = local_228;
        uStack_1a40 = dStack_220;
        local_f98 = 0.0 - dStack_f90;
        dStack_f90 = 0.0 - dStack_f90;
        auVar271._0_8_ = dVar432 * dStack_220 - local_228 * dVar336;
        auVar271._8_8_ = dVar336 * local_218 - dStack_220 * dVar305;
        local_f88 = local_f98;
        dStack_f80 = dStack_f90;
        auVar209._0_8_ = dVar305 * dVar500 - local_218 * auVar466._0_8_;
        auVar209._8_8_ = local_1a58._8_8_ * dVar508 - dStack_210 * auVar466._8_8_;
        auVar81._8_4_ = SUB84(auVar271._8_8_,0);
        auVar81._0_8_ = auVar271._0_8_;
        auVar81._12_4_ = (int)((ulonglong)auVar271._8_8_ >> 0x20);
        local_1a38[0] = local_218;
        local_1a38[1] = dStack_210;
        auVar202 = blendpd(auVar271,auVar209,2);
        local_f78 = auVar202._0_8_ * dVar58 + auVar81._8_8_ * (double)local_268 +
                    auVar209._0_8_ * dVar480;
        dStack_f70 = local_f78;
        local_1e58._0_8_ = local_fc8[2] + local_fd8[0] + local_f98 + local_f78;
        local_1e58._8_8_ = local_fc8[2] + local_fd8[1] + dStack_f90 + local_f78;
        local_f68 = local_f78;
        dStack_f60 = local_f78;
        local_1db8 = ___xmm_00000003000000030000000300000003;
        uStack_1db0 = _UNK_150ae9808;
        local_19e8 = local_228;
        dStack_19e0 = dStack_220;
        local_19d8 = local_218;
        dStack_19d0 = dStack_210;
        local_1908 = local_228;
        dStack_1900 = dStack_220;
        local_18f8 = local_218;
        dStack_18f0 = dStack_210;
        local_1a08 = _local_268;
        local_19f8 = _local_258;
        local_19c8 = local_1a28;
        local_19b8 = local_1a18;
        local_19a8 = _local_268;
        local_1998 = _local_258;
        local_1988 = _local_1a68;
        local_1978 = _local_1a58;
        local_1968 = local_1a28;
        local_1958 = local_1a18;
        local_1948 = _local_268;
        local_1938 = _local_258;
        local_1928 = _local_1a68;
        local_1918 = _local_1a58;
        local_15b8 = local_148;
        uStack_15b0 = uStack_140;
        local_15a8 = local_138;
        uStack_15a0 = uStack_130;
        local_1598 = local_128;
        uStack_1590 = dStack_120;
        local_1588[0] = local_118;
        local_1588[1] = dStack_110;
        local_1588[2] = (double)local_108;
        local_1588[3] = (double)uStack_100;
        local_1588[4] = (double)local_f8;
        local_1588[5] = (double)uStack_f0;
        local_1588[6] = local_168;
        local_1588[7] = uStack_160;
        local_1588[8] = local_158;
        dStack_1540 = uStack_150;
        local_1538 = local_128;
        dStack_1530 = dStack_120;
        local_1528 = local_118;
        dStack_1520 = dStack_110;
        local_1518 = local_108;
        uStack_1510 = uStack_100;
        local_1508 = local_f8;
        uStack_1500 = uStack_f0;
        local_14e8 = local_158;
        dStack_14e0 = uStack_150;
        local_1488 = local_158;
        dStack_1480 = uStack_150;
        iVar34 = -1;
        bVar32 = true;
        uVar35 = movmskpd(uVar35,local_1e58);
        uVar43 = movmskpd(1,local_1e58);
        paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar43;
        local_14f8 = local_168;
        dStack_14f0 = uStack_160;
        local_14d8 = local_148;
        dStack_14d0 = uStack_140;
        local_14c8 = local_138;
        dStack_14c0 = uStack_130;
        local_14b8 = local_108;
        uStack_14b0 = uStack_100;
        uVar37 = uVar35 * 4;
        local_14a8 = local_f8;
        uStack_14a0 = uStack_f0;
        local_1498 = local_168;
        dStack_1490 = uStack_160;
        local_1478 = local_148;
        dStack_1470 = uStack_140;
        local_1468 = local_138;
        dStack_1460 = uStack_130;
        local_1458 = local_128;
        dStack_1450 = dStack_120;
        unique0x10008dd7 = dStack_1a0;
        local_1298._0_8_ = local_1a8;
        local_1448 = local_118;
        dStack_1440 = dStack_110;
        local_1288._8_8_ = dStack_190;
        local_1288._0_8_ = local_198;
        local_1278[6] = local_1d8;
        dStack_1240 = uStack_1d0;
        local_11e8 = local_1d8;
        dStack_11e0 = uStack_1d0;
        local_1188 = local_1d8;
        dStack_1180 = uStack_1d0;
        local_12b8 = local_1c8;
        uStack_12b0 = uStack_1c0;
        local_12a8 = local_1b8;
        uStack_12a0 = uStack_1b0;
        local_1278[0] = local_188;
        local_1278[1] = dStack_180;
        local_1278[2] = local_178;
        local_1278[3] = dStack_170;
        local_1278[4] = local_1e8;
        local_1278[5] = uStack_1e0;
        local_1238 = _local_1298;
        local_1228 = local_1288;
        local_1218 = local_188;
        dStack_1210 = dStack_180;
        local_1208 = local_178;
        dStack_1200 = dStack_170;
        local_11f8 = local_1e8;
        dStack_11f0 = uStack_1e0;
        local_11d8 = local_1c8;
        dStack_11d0 = uStack_1c0;
        local_11c8 = local_1b8;
        dStack_11c0 = uStack_1b0;
        local_11b8 = local_188;
        dStack_11b0 = dStack_180;
        local_11a8 = local_178;
        dStack_11a0 = dStack_170;
        local_1198 = local_1e8;
        dStack_1190 = uStack_1e0;
        local_1178 = local_1c8;
        dStack_1170 = uStack_1c0;
        local_1168 = local_1b8;
        dStack_1160 = uStack_1b0;
        local_1158 = _local_1298;
        local_1148 = local_1288;
        local_1828 = 0.0;
        dStack_1820 = 0.0;
        local_1818 = 0.0;
        dStack_1810 = 0.0;
        local_ec8 = __xmm_00000003000000020000000100000000;
        uStack_ec0 = _UNK_150631e08;
        uVar41 = uVar53;
        uVar54 = uVar53;
        uVar55 = uVar53;
        do {
          dStack_470 = *(double *)((longlong)local_fc8 + uVar54 + 8);
          dStack_480 = *(double *)((longlong)local_fd8 + uVar54 + 8);
          local_478 = *(double *)((longlong)local_fc8 + uVar54);
          local_488 = *(double *)((longlong)local_fd8 + uVar54);
          auVar210._8_8_ = -(ulonglong)(dStack_470 * local_1e58._8_8_ == 0.0);
          auVar210._0_8_ =
               -(ulonglong)(*(double *)((longlong)local_fc8 + uVar54) * local_1e58._0_8_ == 0.0);
          uVar45 = movmskpd(uVar35,auVar210);
          auVar82._8_8_ = -(ulonglong)(dStack_480 * local_1e58._8_8_ == 0.0);
          auVar82._0_8_ =
               -(ulonglong)(*(double *)((longlong)local_fd8 + uVar54) * local_1e58._0_8_ == 0.0);
          iVar44 = movmskpd((int)paVar48,auVar82);
          local_468 = *(undefined1 (*) [16])((longlong)local_fd8 + uVar54);
          local_458 = *(undefined1 (*) [16])((longlong)local_fc8 + uVar54);
          iVar36 = movmskpd(uVar45,*(undefined1 (*) [16])((longlong)local_fc8 + uVar54));
          uVar46 = movmskpd(iVar44,*(undefined1 (*) [16])((longlong)local_fd8 + uVar54));
          paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar46;
          uVar35 = iVar36 * 4 | uVar46;
          if (((uVar37 | uVar43) == uVar35) && ((uVar45 & 0x3fffffff) == 0 && iVar44 == 0)) {
            auStack_1d24[uVar55] = 1;
          }
          else {
            local_448 = *(double *)(local_1a68 + uVar41);
            dStack_440 = *(double *)(local_1a68 + uVar41 + 8);
            local_438 = *(double *)(local_1a58 + uVar41);
            dStack_430 = *(double *)(local_1a58 + uVar41 + 8);
            bVar32 = false;
            local_bf8 = *(double *)(local_1a28 + uVar41);
            dStack_bf0 = *(double *)(local_1a28 + uVar41 + 8);
            local_418 = *(double *)((longlong)local_1a38 + uVar41);
            dStack_410 = *(double *)(local_1a28 + (uVar41 - 8));
            local_be8 = *(double *)(local_1a18 + uVar41);
            dStack_be0 = *(double *)(local_1a18 + uVar41 + 8);
            local_c18 = local_448;
            dStack_c10 = dStack_440;
            local_c08 = local_438;
            dStack_c00 = dStack_430;
            local_428 = *(double *)((longlong)&local_1a48 + uVar41);
            dStack_420 = *(double *)((longlong)&uStack_1a40 + uVar41);
            dVar500 = *(double *)((longlong)&local_1a48 + uVar41) - local_448;
            dVar508 = *(double *)((longlong)&uStack_1a40 + uVar41) - dStack_440;
            local_1de8 = 0;
            auStack_1d24[uVar55] = 0;
            dVar388 = local_bf8 - local_448;
            dVar410 = dStack_bf0 - dStack_440;
            uVar302 = SUB84(dVar508,0);
            auVar83._8_4_ = uVar302;
            auVar83._0_8_ = dVar500;
            uVar332 = (undefined4)((ulonglong)dVar508 >> 0x20);
            auVar83._12_4_ = uVar332;
            auVar392._0_8_ = local_418 - local_438;
            auVar392._8_8_ = dStack_410 - dStack_430;
            uVar364 = SUB84(dVar410,0);
            auVar482._8_4_ = uVar364;
            auVar482._0_8_ = dVar388;
            uVar366 = (undefined4)((ulonglong)dVar410 >> 0x20);
            auVar482._12_4_ = uVar366;
            local_1cc8._0_8_ = local_be8 - local_438;
            local_1cc8._8_8_ = dStack_be0 - dStack_430;
            auVar211._8_4_ = uVar364;
            auVar211._0_8_ = dVar388;
            auVar211._12_4_ = uVar366;
            auVar466 = blendpd(auVar211,local_1cc8,2);
            dVar336 = (double)local_1cc8._0_8_ * dVar508 - auVar392._0_8_ * dVar410;
            auVar84._8_4_ = uVar302;
            auVar84._0_8_ = dVar500;
            auVar84._12_4_ = uVar332;
            auVar202 = blendpd(auVar84,auVar392,2);
            auVar272._8_4_ = SUB84(dVar336,0);
            auVar272._0_8_ = auVar482._8_8_ * dVar500 - auVar83._8_8_ * dVar388;
            auVar272._12_4_ = (int)((ulonglong)dVar336 >> 0x20);
            auVar212._0_8_ =
                 auVar466._0_8_ * auVar392._0_8_ - auVar202._0_8_ * (double)local_1cc8._0_8_;
            auVar212._8_8_ =
                 auVar466._8_8_ * auVar392._8_8_ - auVar202._8_8_ * (double)local_1cc8._8_8_;
            local_1e38 = blendpd(auVar272,auVar212,2);
            dVar58 = local_1e38._0_8_;
            auVar85._8_4_ = SUB84(auVar212._0_8_,0);
            auVar85._0_8_ = dVar336;
            uVar333 = (undefined4)((ulonglong)auVar212._0_8_ >> 0x20);
            auVar85._12_4_ = uVar333;
            local_bc8 = *(double *)(local_1a58 + uVar41);
            uStack_bc0 = *(undefined8 *)(local_1a58 + uVar41 + 8);
            dVar480 = *(double *)(local_1a58 + uVar41) * ___xmm_38100000000000003810000000000000;
            auVar501._0_8_ = dVar58 * dVar58 + dVar336 * dVar336 + auVar85._8_8_ * auVar212._0_8_;
            local_bd8 = *(double *)(local_1a68 + uVar41);
            dStack_bd0 = *(double *)(local_1a68 + uVar41 + 8);
            dVar492 = *(double *)(local_1a68 + uVar41) * ___xmm_38100000000000003810000000000000;
            dVar465 = *(double *)(local_1a68 + uVar41 + 8) * _UNK_150b28838;
            auVar501._8_8_ = auVar501._0_8_;
            dVar492 = dVar480 * dVar480 + dVar492 * dVar492 + dVar465 * dVar465;
            auVar86._8_4_ = SUB84(auVar501._0_8_,0);
            auVar86._0_8_ = auVar501._0_8_;
            auVar86._12_4_ = (int)((ulonglong)auVar501._0_8_ >> 0x20);
            auVar87._8_8_ = -(ulonglong)(auVar86._8_8_ <= dVar492);
            auVar87._0_8_ = -(ulonglong)(auVar501._0_8_ <= dVar492);
            uVar35 = movmskpd(0,auVar87);
            iVar36 = movmskpd(uVar46,auVar87);
            local_248 = dVar432;
            uStack_240 = dVar451;
            local_238 = dVar305;
            uStack_230 = dVar199;
            if ((uVar35 & 0x3fffffff) == 0 && iVar36 == 0) {
              dVar432 = 0.0 - *(double *)(local_1a68 + uVar41);
              dVar451 = 0.0 - *(double *)(local_1a68 + uVar41 + 8);
              local_af8 = *(double *)(local_1a68 + uVar41);
              dStack_af0 = *(double *)(local_1a68 + uVar41 + 8);
              dVar305 = 0.0 - *(double *)(local_1a58 + uVar41);
              local_ae8 = *(double *)(local_1a58 + uVar41);
              uStack_ae0 = *(undefined8 *)(local_1a58 + uVar41 + 8);
              auVar92._8_4_ = uVar302;
              auVar92._0_8_ = dVar500;
              auVar92._12_4_ = uVar332;
              auVar339._0_8_ =
                   auVar392._0_8_ * dVar305 + dVar500 * dVar432 + auVar92._8_8_ * dVar451;
              auVar93._8_4_ = uVar364;
              auVar93._0_8_ = dVar388;
              auVar93._12_4_ = uVar366;
              auVar339._8_8_ = auVar339._0_8_;
              dVar432 = (double)local_1cc8._0_8_ * dVar305 + dVar388 * dVar432 +
                        auVar93._8_8_ * dVar451;
              auVar94._8_4_ = SUB84(auVar339._0_8_,0);
              auVar94._0_8_ = auVar339._0_8_;
              uVar365 = (undefined4)((ulonglong)auVar339._0_8_ >> 0x20);
              auVar94._12_4_ = uVar365;
              uVar334 = SUB84(dVar432,0);
              auVar214._8_4_ = uVar334;
              auVar214._0_8_ = dVar432;
              uVar389 = (undefined4)((ulonglong)dVar432 >> 0x20);
              auVar214._12_4_ = uVar389;
              auVar215._0_8_ = -(ulonglong)(dVar432 <= 0.0 && auVar339._0_8_ <= 0.0);
              lVar50 = -(ulonglong)(auVar214._8_8_ <= 0.0 && auVar94._8_8_ <= 0.0);
              auVar215._8_4_ = (undefined4)lVar50;
              auVar215._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
              uVar35 = movmskpd(0,auVar215);
              iVar36 = movmskpd(iVar36,auVar215);
              if ((uVar35 & 0x3fffffff) == 0 && iVar36 == 0) {
                dVar451 = 0.0 - *(double *)((longlong)&local_1a48 + uVar41);
                dVar305 = 0.0 - *(double *)((longlong)&uStack_1a40 + uVar41);
                local_ad8 = *(double *)((longlong)&local_1a48 + uVar41);
                dStack_ad0 = *(double *)((longlong)&uStack_1a40 + uVar41);
                dVar199 = 0.0 - *(double *)((longlong)local_1a38 + uVar41);
                local_ac8 = *(double *)((longlong)local_1a38 + uVar41);
                uStack_ac0 = *(undefined8 *)(local_1a28 + (uVar41 - 8));
                auVar95._8_4_ = uVar302;
                auVar95._0_8_ = dVar500;
                auVar95._12_4_ = uVar332;
                dVar492 = auVar392._0_8_ * dVar199 + dVar500 * dVar451 + auVar95._8_8_ * dVar305;
                auVar96._8_4_ = uVar364;
                auVar96._0_8_ = dVar388;
                auVar96._12_4_ = uVar366;
                dVar451 = (double)local_1cc8._0_8_ * dVar199 + dVar388 * dVar451 +
                          auVar96._8_8_ * dVar305;
                uVar302 = SUB84(dVar451,0);
                auVar97._8_4_ = uVar302;
                auVar97._0_8_ = dVar451;
                uVar332 = (undefined4)((ulonglong)dVar451 >> 0x20);
                auVar97._12_4_ = uVar332;
                auVar216._0_8_ = -(ulonglong)(0.0 <= dVar492 && dVar451 <= dVar492);
                lVar50 = -(ulonglong)(0.0 <= dVar492 && auVar97._8_8_ <= dVar492);
                auVar216._8_4_ = (undefined4)lVar50;
                auVar216._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                uVar35 = movmskpd(0,auVar216);
                iVar36 = movmskpd(iVar36,auVar216);
                if ((uVar35 & 0x3fffffff) == 0 && iVar36 == 0) {
                  auVar494._8_4_ = uVar302;
                  auVar494._0_8_ = dVar451;
                  auVar494._12_4_ = uVar332;
                  uVar431 = SUB84(dVar492,0);
                  auVar98._8_4_ = uVar431;
                  auVar98._0_8_ = dVar492;
                  uVar434 = (undefined4)((ulonglong)dVar492 >> 0x20);
                  auVar98._12_4_ = uVar434;
                  auVar308._8_4_ = SUB84(auVar339._0_8_,0);
                  auVar308._0_8_ = auVar339._0_8_;
                  auVar308._12_4_ = uVar365;
                  dVar305 = dVar451 * auVar339._0_8_ - dVar492 * dVar432;
                  dVar199 = auVar494._8_8_ * auVar339._0_8_ - auVar98._8_8_ * dVar432;
                  auVar309._0_8_ = auVar339._0_8_ - dVar492;
                  auVar309._8_8_ = auVar308._8_8_ - dVar492;
                  auVar273._8_4_ = SUB84(dVar199,0);
                  auVar273._0_8_ = dVar305;
                  auVar273._12_4_ = (int)((ulonglong)dVar199 >> 0x20);
                  auVar99._8_4_ = uVar431;
                  auVar99._0_8_ = dVar492;
                  auVar99._12_4_ = uVar434;
                  auVar274._0_8_ =
                       -(ulonglong)
                        ((0.0 <= auVar339._0_8_ && dVar305 <= 0.0) &&
                        (0.0 < auVar309._0_8_ && dVar492 <= 0.0));
                  lVar50 = -(ulonglong)
                            ((auVar273._8_8_ <= 0.0 && 0.0 <= auVar339._0_8_) &&
                            (0.0 < auVar309._8_8_ && auVar99._8_8_ <= 0.0));
                  auVar274._8_4_ = (undefined4)lVar50;
                  auVar274._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                  uVar35 = movmskpd(0,auVar274);
                  iVar36 = movmskpd(iVar36,auVar274);
                  if ((uVar35 & 0x3fffffff) == 0 && iVar36 == 0) {
                    dVar465 = 0.0 - *(double *)(local_1a28 + uVar41);
                    dVar480 = 0.0 - *(double *)(local_1a28 + uVar41 + 8);
                    dVar413 = 0.0 - *(double *)(local_1a18 + uVar41);
                    local_a98 = *(double *)(local_1a28 + uVar41);
                    dStack_a90 = *(double *)(local_1a28 + uVar41 + 8);
                    auVar100._8_4_ = uVar364;
                    auVar100._0_8_ = dVar388;
                    auVar100._12_4_ = uVar366;
                    local_a88 = *(double *)(local_1a18 + uVar41);
                    uStack_a80 = *(undefined8 *)(local_1a18 + uVar41 + 8);
                    dVar435 = (double)local_1cc8._0_8_ * dVar413 + dVar388 * dVar465 +
                              auVar100._8_8_ * dVar480;
                    dVar465 = auVar392._0_8_ * dVar413 + dVar500 * dVar465 + dVar508 * dVar480;
                    auVar101._8_4_ = SUB84(dVar465,0);
                    auVar101._0_8_ = dVar465;
                    auVar101._12_4_ = (int)((ulonglong)dVar465 >> 0x20);
                    auVar217._0_8_ = -(ulonglong)(0.0 <= dVar435 && dVar465 <= dVar435);
                    lVar50 = -(ulonglong)(0.0 <= dVar435 && auVar101._8_8_ <= dVar435);
                    auVar217._8_4_ = (undefined4)lVar50;
                    auVar217._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                    uVar35 = movmskpd(0,auVar217);
                    iVar36 = movmskpd(iVar36,auVar217);
                    if ((uVar35 & 0x3fffffff) != 0 || iVar36 != 0) {
                      *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4) = 1;
                      local_1e26 = 0;
                      *(ulonglong *)((longlong)adStack_10b8 + uVar54) =
                           CONCAT44(_UNK_150689514,___xmm_00000000000000003ff0000000000000);
                      *(ulonglong *)((longlong)adStack_10b8 + uVar54 + 8) =
                           CONCAT44(_UNK_15068951c,_UNK_150689518);
                      *(undefined8 *)((longlong)&uStack_10a8 + uVar54) = 0;
                      *(undefined8 *)((longlong)&uStack_10a0 + uVar54) = 0;
                      uVar5 = *(undefined8 *)(local_1a28 + uVar41 + 8);
                      *(undefined8 *)(local_1a68 + uVar41) = *(undefined8 *)(local_1a28 + uVar41);
                      *(undefined8 *)(local_1a68 + uVar41 + 8) = uVar5;
                      uVar5 = *(undefined8 *)(local_1a18 + uVar41 + 8);
                      *(undefined8 *)(local_1a58 + uVar41) = *(undefined8 *)(local_1a18 + uVar41);
                      *(undefined8 *)(local_1a58 + uVar41 + 8) = uVar5;
                      uVar5 = *(undefined8 *)((longlong)local_1588 + uVar41 + 0x18);
                      *(undefined8 *)((longlong)&local_15b8 + uVar41) =
                           *(undefined8 *)((longlong)local_1588 + uVar41 + 0x10);
                      *(undefined8 *)((longlong)&uStack_15b0 + uVar41) = uVar5;
                      uVar5 = *(undefined8 *)((longlong)local_1588 + uVar41 + 0x28);
                      *(undefined8 *)((longlong)&local_15a8 + uVar41) =
                           *(undefined8 *)((longlong)local_1588 + uVar41 + 0x20);
                      *(undefined8 *)((longlong)&uStack_15a0 + uVar41) = uVar5;
                      uVar5 = *(undefined8 *)((longlong)local_1278 + uVar41 + 8);
                      *(undefined8 *)((longlong)&local_12b8 + uVar41) =
                           *(undefined8 *)((longlong)local_1278 + uVar41);
                      *(undefined8 *)((longlong)&uStack_12b0 + uVar41) = uVar5;
                      uVar5 = *(undefined8 *)((longlong)local_1278 + uVar41 + 0x18);
                      *(undefined8 *)((longlong)&local_12a8 + uVar41) =
                           *(undefined8 *)((longlong)local_1278 + uVar41 + 0x10);
                      *(undefined8 *)(local_1298 + (uVar41 - 8)) = uVar5;
                      local_1d98 = *(double *)(local_1a28 + uVar41);
                      uStack_1d90 = *(double *)(local_1a28 + uVar41 + 8);
                      dVar58 = *(double *)(local_1a18 + uVar41);
                      dVar432 = *(double *)(local_1a18 + uVar41 + 8);
                      goto LAB_143e95667;
                    }
                    auVar414._8_4_ = uVar334;
                    auVar414._0_8_ = dVar432;
                    auVar414._12_4_ = uVar389;
                    auVar310._8_4_ = uVar334;
                    auVar310._0_8_ = dVar432;
                    auVar310._12_4_ = uVar389;
                    auVar311._0_8_ = dVar432 - dVar435;
                    auVar311._8_8_ = auVar310._8_8_ - dVar435;
                    dVar480 = dVar432 * dVar465 - auVar339._0_8_ * dVar435;
                    dVar500 = auVar414._8_8_ * dVar465 - auVar339._0_8_ * dVar435;
                    auVar102._8_4_ = SUB84(dVar500,0);
                    auVar102._0_8_ = dVar480;
                    uVar364 = (undefined4)((ulonglong)dVar500 >> 0x20);
                    auVar102._12_4_ = uVar364;
                    auVar103._8_4_ = SUB84(dVar435,0);
                    auVar103._0_8_ = dVar435;
                    auVar103._12_4_ = (int)((ulonglong)dVar435 >> 0x20);
                    auVar275._0_8_ =
                         -(ulonglong)
                          ((0.0 <= dVar432 && dVar480 <= 0.0) &&
                          (0.0 < auVar311._0_8_ && dVar435 <= 0.0));
                    lVar50 = -(ulonglong)
                              ((0.0 <= dVar432 && auVar102._8_8_ <= 0.0) &&
                              (0.0 < auVar311._8_8_ && auVar103._8_8_ <= 0.0));
                    auVar275._8_4_ = (undefined4)lVar50;
                    auVar275._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                    uVar35 = movmskpd(0,auVar275);
                    iVar36 = movmskpd(iVar36,auVar275);
                    if ((uVar35 & 0x3fffffff) == 0 && iVar36 == 0) {
                      auVar104._8_4_ = uVar302;
                      auVar104._0_8_ = dVar451;
                      auVar104._12_4_ = uVar332;
                      auVar340._8_4_ = uVar431;
                      auVar340._0_8_ = dVar492;
                      auVar340._12_4_ = uVar434;
                      dVar508 = dVar465 - dVar435;
                      dVar388 = dVar465 - dVar435;
                      auVar437._0_8_ = dVar451 - dVar492;
                      auVar437._8_8_ = dVar451 - dVar492;
                      auVar312._8_4_ = SUB84(dVar388,0);
                      auVar312._0_8_ = dVar508;
                      auVar312._12_4_ = (int)((ulonglong)dVar388 >> 0x20);
                      dVar432 = dVar492 * dVar435 - dVar451 * dVar465;
                      dVar451 = auVar340._8_8_ * dVar435 - auVar104._8_8_ * dVar465;
                      auVar313._0_8_ = dVar508 + auVar437._0_8_;
                      auVar313._8_8_ = auVar312._8_8_ + auVar437._8_8_;
                      auVar105._8_4_ = SUB84(dVar451,0);
                      auVar105._0_8_ = dVar432;
                      auVar105._12_4_ = (int)((ulonglong)dVar451 >> 0x20);
                      auVar276._0_8_ =
                           -(ulonglong)
                            ((0.0 <= dVar508 && 0.0 < auVar313._0_8_) &&
                            (0.0 <= auVar437._0_8_ && dVar432 <= 0.0));
                      lVar50 = -(ulonglong)
                                ((0.0 <= auVar437._8_8_ && auVar105._8_8_ <= 0.0) &&
                                (0.0 <= dVar388 && 0.0 < auVar313._8_8_));
                      auVar276._8_4_ = (undefined4)lVar50;
                      auVar276._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                      uVar35 = movmskpd(0,auVar276);
                      iVar36 = movmskpd(iVar36,auVar276);
                      if ((uVar35 & 0x3fffffff) == 0 && iVar36 == 0) {
                        auVar314._0_8_ = (double)fVar56;
                        auVar314._8_8_ = (double)fVar200;
                        *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4) = 3;
                        local_1e23 = 0;
                        auVar106._8_4_ = SUB84(dVar500,0);
                        auVar106._0_8_ = dVar480;
                        auVar106._12_4_ = uVar364;
                        auVar107._0_8_ = dVar480 + dVar305 + dVar432;
                        auVar107._8_8_ = auVar106._8_8_ + dVar199 + dVar451;
                        auVar202 = divpd(auVar314,auVar107);
                        dVar480 = auVar202._0_8_ * dVar480;
                        dVar305 = auVar202._0_8_ * dVar305;
                        auVar277._8_4_ = SUB84(auVar212._0_8_,0);
                        auVar277._0_8_ = dVar336;
                        auVar277._12_4_ = uVar333;
                        *(double *)((longlong)adStack_10b8 + uVar54) =
                             (___xmm_3ff00000000000003ff0000000000000 - dVar480) - dVar305;
                        *(double *)((longlong)adStack_10b8 + uVar54 + 8) = dVar480;
                        *(double *)((longlong)&uStack_10a8 + uVar54) = dVar305;
                        *(double *)((longlong)&uStack_10a0 + uVar54) = auVar202._8_8_ * dVar500;
                        auVar466 = divpd(local_1e38,auVar501);
                        auVar202 = divpd(auVar277,auVar501);
                        local_9f8 = *(double *)(local_1a68 + uVar41);
                        dStack_9f0 = *(double *)(local_1a68 + uVar41 + 8);
                        local_1d98 = auVar466._0_8_ * *(double *)(local_1a58 + uVar41) +
                                     auVar202._0_8_ * *(double *)(local_1a68 + uVar41) +
                                     auVar202._8_8_ * *(double *)(local_1a68 + uVar41 + 8);
                        local_9e8 = *(double *)(local_1a58 + uVar41);
                        uStack_9e0 = *(undefined8 *)(local_1a58 + uVar41 + 8);
                        auVar415._8_4_ = SUB84(local_1d98,0);
                        auVar415._0_8_ = local_1d98;
                        auVar415._12_4_ = (int)((ulonglong)local_1d98 >> 0x20);
                        dVar58 = local_1d98 * dVar58;
                        dVar432 = local_1d98 * (double)local_1e38._8_8_;
                        local_1d98 = local_1d98 * dVar336;
                        uStack_1d90 = auVar415._8_8_ * auVar212._0_8_;
                      }
                      else {
                        *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4) = 2;
                        auVar202 = divpd(auVar437,auVar313);
                        local_1e24 = 0;
                        dVar58 = auVar202._0_8_;
                        dVar492 = auVar202._8_8_;
                        *(double *)((longlong)adStack_10b8 + uVar54) =
                             ___xmm_3ff00000000000003ff0000000000000 - dVar58;
                        *(double *)((longlong)adStack_10b8 + uVar54 + 8) = dVar58;
                        *(double *)((longlong)&uStack_10a8 + uVar54) = _UNK_150689688 - dVar492;
                        *(double *)((longlong)&uStack_10a0 + uVar54) = dVar492;
                        local_1d98 = *(double *)((longlong)&local_1a48 + uVar41);
                        uStack_1d90 = *(double *)((longlong)&uStack_1a40 + uVar41);
                        auVar202 = *(undefined1 (*) [16])((longlong)local_1a38 + uVar41);
                        dVar432 = *(double *)(local_1a28 + uVar41);
                        dVar451 = *(double *)(local_1a28 + uVar41 + 8);
                        dVar305 = *(double *)(local_1a18 + uVar41);
                        dVar199 = *(double *)(local_1a18 + uVar41 + 8);
                        *(double *)(local_1a68 + uVar41) = local_1d98;
                        *(double *)(local_1a68 + uVar41 + 8) = uStack_1d90;
                        uVar5 = *(undefined8 *)(local_1a28 + (uVar41 - 8));
                        *(undefined8 *)(local_1a58 + uVar41) =
                             *(undefined8 *)((longlong)local_1a38 + uVar41);
                        *(undefined8 *)(local_1a58 + uVar41 + 8) = uVar5;
                        uVar5 = *(undefined8 *)(local_1a28 + uVar41 + 8);
                        *(undefined8 *)((longlong)&local_1a48 + uVar41) =
                             *(undefined8 *)(local_1a28 + uVar41);
                        *(undefined8 *)((longlong)&uStack_1a40 + uVar41) = uVar5;
                        uVar5 = *(undefined8 *)(local_1a18 + uVar41 + 8);
                        *(undefined8 *)((longlong)local_1a38 + uVar41) =
                             *(undefined8 *)(local_1a18 + uVar41);
                        *(undefined8 *)(local_1a28 + (uVar41 - 8)) = uVar5;
                        *(undefined8 *)((longlong)&local_15b8 + uVar41) =
                             *(undefined8 *)((longlong)&local_1598 + uVar41);
                        *(undefined8 *)((longlong)&uStack_15b0 + uVar41) =
                             *(undefined8 *)((longlong)&uStack_1590 + uVar41);
                        uVar5 = *(undefined8 *)((longlong)local_1588 + uVar41 + 8);
                        *(undefined8 *)((longlong)&local_15a8 + uVar41) =
                             *(undefined8 *)((longlong)local_1588 + uVar41);
                        *(undefined8 *)((longlong)&uStack_15a0 + uVar41) = uVar5;
                        uVar5 = *(undefined8 *)(local_1298 + uVar41 + 8);
                        *(undefined8 *)((longlong)&local_12b8 + uVar41) =
                             *(undefined8 *)(local_1298 + uVar41);
                        *(undefined8 *)((longlong)&uStack_12b0 + uVar41) = uVar5;
                        uVar5 = *(undefined8 *)(local_1288 + uVar41 + 8);
                        *(undefined8 *)((longlong)&local_12a8 + uVar41) =
                             *(undefined8 *)(local_1288 + uVar41);
                        *(undefined8 *)(local_1298 + (uVar41 - 8)) = uVar5;
                        uVar5 = *(undefined8 *)((longlong)local_1588 + uVar41 + 0x18);
                        *(undefined8 *)((longlong)&local_1598 + uVar41) =
                             *(undefined8 *)((longlong)local_1588 + uVar41 + 0x10);
                        *(undefined8 *)((longlong)&uStack_1590 + uVar41) = uVar5;
                        *(undefined8 *)((longlong)local_1588 + uVar41) =
                             *(undefined8 *)((longlong)local_1588 + uVar41 + 0x20);
                        *(undefined8 *)((longlong)local_1588 + uVar41 + 8) =
                             *(undefined8 *)((longlong)local_1588 + uVar41 + 0x28);
                        uVar5 = *(undefined8 *)((longlong)local_1278 + uVar41 + 8);
                        local_a38 = dVar432;
                        dStack_a30 = dVar451;
                        local_a28 = dVar305;
                        dStack_a20 = dVar199;
                        *(undefined8 *)(local_1298 + uVar41) =
                             *(undefined8 *)((longlong)local_1278 + uVar41);
                        *(undefined8 *)(local_1298 + uVar41 + 8) = uVar5;
                        uVar5 = *(undefined8 *)((longlong)local_1278 + uVar41 + 0x18);
                        *(undefined8 *)(local_1288 + uVar41) =
                             *(undefined8 *)((longlong)local_1278 + uVar41 + 0x10);
                        *(undefined8 *)(local_1288 + uVar41 + 8) = uVar5;
                        local_a58 = local_1d98;
                        dStack_a50 = uStack_1d90;
                        local_a48 = auVar202;
                        local_a18 = local_1d98;
                        dStack_a10 = uStack_1d90;
                        local_a08 = auVar202;
                        local_1d98 = (dVar432 - local_1d98) * dVar58 + local_1d98;
                        uStack_1d90 = (dVar451 - uStack_1d90) * dVar492 + uStack_1d90;
                        dVar58 = (dVar305 - auVar202._0_8_) * dVar58 + auVar202._0_8_;
                        dVar432 = (dVar199 - auVar202._8_8_) * dVar492 + auVar202._8_8_;
                      }
                    }
                    else {
                      auVar393._8_4_ = uVar334;
                      auVar393._0_8_ = dVar432;
                      auVar393._12_4_ = uVar389;
                      *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4) = 2;
                      auVar202 = divpd(auVar393,auVar311);
                      local_1e25 = 0;
                      dVar432 = auVar202._0_8_;
                      dVar451 = auVar202._8_8_;
                      *(double *)((longlong)adStack_10b8 + uVar54) =
                           ___xmm_3ff00000000000003ff0000000000000 - dVar432;
                      *(double *)((longlong)adStack_10b8 + uVar54 + 8) = dVar432;
                      *(double *)((longlong)&uStack_10a8 + uVar54) = _UNK_150689688 - dVar451;
                      *(double *)((longlong)&uStack_10a0 + uVar54) = dVar451;
                      uVar5 = *(undefined8 *)(local_1a28 + uVar41 + 8);
                      *(undefined8 *)((longlong)&local_1a48 + uVar41) =
                           *(undefined8 *)(local_1a28 + uVar41);
                      *(undefined8 *)((longlong)&uStack_1a40 + uVar41) = uVar5;
                      uVar5 = *(undefined8 *)(local_1a18 + uVar41 + 8);
                      *(undefined8 *)((longlong)local_1a38 + uVar41) =
                           *(undefined8 *)(local_1a18 + uVar41);
                      *(undefined8 *)(local_1a28 + (uVar41 - 8)) = uVar5;
                      uVar5 = *(undefined8 *)((longlong)local_1588 + uVar41 + 0x18);
                      *(undefined8 *)((longlong)&local_1598 + uVar41) =
                           *(undefined8 *)((longlong)local_1588 + uVar41 + 0x10);
                      *(undefined8 *)((longlong)&uStack_1590 + uVar41) = uVar5;
                      *(undefined8 *)((longlong)local_1588 + uVar41) =
                           *(undefined8 *)((longlong)local_1588 + uVar41 + 0x20);
                      *(undefined8 *)((longlong)local_1588 + uVar41 + 8) =
                           *(undefined8 *)((longlong)local_1588 + uVar41 + 0x28);
                      uVar5 = *(undefined8 *)((longlong)local_1278 + uVar41 + 8);
                      *(undefined8 *)(local_1298 + uVar41) =
                           *(undefined8 *)((longlong)local_1278 + uVar41);
                      *(undefined8 *)(local_1298 + uVar41 + 8) = uVar5;
                      uVar5 = *(undefined8 *)((longlong)local_1278 + uVar41 + 0x18);
                      *(undefined8 *)(local_1288 + uVar41) =
                           *(undefined8 *)((longlong)local_1278 + uVar41 + 0x10);
                      *(undefined8 *)(local_1288 + uVar41 + 8) = uVar5;
                      local_a78 = *(double *)(local_1a68 + uVar41);
                      dStack_a70 = *(double *)(local_1a68 + uVar41 + 8);
                      local_a68 = *(double *)(local_1a58 + uVar41);
                      dStack_a60 = *(double *)(local_1a58 + uVar41 + 8);
                      local_1d98 = dVar432 * dVar388 + *(double *)(local_1a68 + uVar41);
                      uStack_1d90 = dVar451 * dVar410 + *(double *)(local_1a68 + uVar41 + 8);
                      dVar58 = dVar432 * (double)local_1cc8._0_8_ + *(double *)(local_1a58 + uVar41)
                      ;
                      dVar432 = dVar451 * (double)local_1cc8._8_8_ +
                                *(double *)(local_1a58 + uVar41 + 8);
                    }
                  }
                  else {
                    auVar202 = divpd(auVar339,auVar309);
                    *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4) = 2;
                    local_1e27 = 0;
                    dVar432 = auVar202._0_8_;
                    dVar451 = auVar202._8_8_;
                    *(double *)((longlong)adStack_10b8 + uVar54) =
                         ___xmm_3ff00000000000003ff0000000000000 - dVar432;
                    *(double *)((longlong)adStack_10b8 + uVar54 + 8) = dVar432;
                    *(double *)((longlong)&uStack_10a8 + uVar54) = _UNK_150689688 - dVar451;
                    *(double *)((longlong)&uStack_10a0 + uVar54) = dVar451;
                    local_ab8 = *(double *)(local_1a68 + uVar41);
                    dStack_ab0 = *(double *)(local_1a68 + uVar41 + 8);
                    local_aa8 = *(double *)(local_1a58 + uVar41);
                    dStack_aa0 = *(double *)(local_1a58 + uVar41 + 8);
                    local_1d98 = dVar500 * dVar432 + *(double *)(local_1a68 + uVar41);
                    uStack_1d90 = dVar508 * dVar451 + *(double *)(local_1a68 + uVar41 + 8);
                    dVar58 = auVar392._0_8_ * dVar432 + *(double *)(local_1a58 + uVar41);
                    dVar432 = auVar392._8_8_ * dVar451 + *(double *)(local_1a58 + uVar41 + 8);
                  }
                }
                else {
                  *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4) = 1;
                  local_1e28 = 0;
                  *(ulonglong *)((longlong)adStack_10b8 + uVar54) =
                       CONCAT44(_UNK_150689514,___xmm_00000000000000003ff0000000000000);
                  *(ulonglong *)((longlong)adStack_10b8 + uVar54 + 8) =
                       CONCAT44(_UNK_15068951c,_UNK_150689518);
                  *(undefined8 *)((longlong)&uStack_10a8 + uVar54) = 0;
                  *(undefined8 *)((longlong)&uStack_10a0 + uVar54) = 0;
                  *(undefined8 *)(local_1a68 + uVar41) =
                       *(undefined8 *)((longlong)&local_1a48 + uVar41);
                  *(undefined8 *)(local_1a68 + uVar41 + 8) =
                       *(undefined8 *)((longlong)&uStack_1a40 + uVar41);
                  uVar5 = *(undefined8 *)(local_1a28 + (uVar41 - 8));
                  *(undefined8 *)(local_1a58 + uVar41) =
                       *(undefined8 *)((longlong)local_1a38 + uVar41);
                  *(undefined8 *)(local_1a58 + uVar41 + 8) = uVar5;
                  *(undefined8 *)((longlong)&local_15b8 + uVar41) =
                       *(undefined8 *)((longlong)&local_1598 + uVar41);
                  *(undefined8 *)((longlong)&uStack_15b0 + uVar41) =
                       *(undefined8 *)((longlong)&uStack_1590 + uVar41);
                  uVar5 = *(undefined8 *)((longlong)local_1588 + uVar41 + 8);
                  *(undefined8 *)((longlong)&local_15a8 + uVar41) =
                       *(undefined8 *)((longlong)local_1588 + uVar41);
                  *(undefined8 *)((longlong)&uStack_15a0 + uVar41) = uVar5;
                  uVar5 = *(undefined8 *)(local_1298 + uVar41 + 8);
                  *(undefined8 *)((longlong)&local_12b8 + uVar41) =
                       *(undefined8 *)(local_1298 + uVar41);
                  *(undefined8 *)((longlong)&uStack_12b0 + uVar41) = uVar5;
                  uVar5 = *(undefined8 *)(local_1288 + uVar41 + 8);
                  *(undefined8 *)((longlong)&local_12a8 + uVar41) =
                       *(undefined8 *)(local_1288 + uVar41);
                  *(undefined8 *)(local_1298 + (uVar41 - 8)) = uVar5;
                  local_1d98 = *(double *)((longlong)&local_1a48 + uVar41);
                  uStack_1d90 = *(double *)((longlong)&uStack_1a40 + uVar41);
                  dVar58 = *(double *)((longlong)local_1a38 + uVar41);
                  dVar432 = *(double *)(local_1a28 + (uVar41 - 8));
                }
LAB_143e95667:
                uVar302 = 0;
                local_1d88._8_8_ = dVar432;
                local_1d88._0_8_ = dVar58;
              }
              else {
                uVar302 = 0;
                *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4) = 1;
                local_1de4 = 0;
                *(ulonglong *)((longlong)adStack_10b8 + uVar54) =
                     CONCAT44(_UNK_150689514,___xmm_00000000000000003ff0000000000000);
                *(ulonglong *)((longlong)adStack_10b8 + uVar54 + 8) =
                     CONCAT44(_UNK_15068951c,_UNK_150689518);
                *(undefined8 *)((longlong)&uStack_10a8 + uVar54) = 0;
                *(undefined8 *)((longlong)&uStack_10a0 + uVar54) = 0;
                local_1d98 = *(double *)(local_1a68 + uVar41);
                uStack_1d90 = *(double *)(local_1a68 + uVar41 + 8);
                local_1d88._8_8_ = *(double *)(local_1a58 + uVar41 + 8);
                local_1d88._0_8_ = *(double *)(local_1a58 + uVar41);
                dVar58 = *(double *)(local_1a58 + uVar41);
                dVar432 = *(double *)(local_1a58 + uVar41 + 8);
              }
            }
            else {
              *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4) = 2;
              local_e48 = *(double *)(local_1a58 + uVar41);
              dVar432 = *(double *)(local_1a58 + uVar41 + 8);
              local_bb8 = *(double *)(local_1a68 + uVar41);
              dStack_bb0 = *(double *)(local_1a68 + uVar41 + 8);
              dVar451 = *(double *)(local_1a28 + (uVar41 - 8));
              local_1de7 = 0;
              local_b78 = local_bb8;
              dStack_b70 = dStack_bb0;
              uStack_e40 = dVar432;
              local_ba8 = local_e48;
              dStack_ba0 = dVar432;
              local_b68 = local_e48;
              dStack_b60 = dVar432;
              local_b98 = *(double *)((longlong)&local_1a48 + uVar41);
              dStack_b90 = *(double *)((longlong)&uStack_1a40 + uVar41);
              dVar305 = *(double *)((longlong)&local_1a48 + uVar41) - local_bb8;
              dVar199 = *(double *)((longlong)&uStack_1a40 + uVar41) - dStack_bb0;
              local_b88 = *(double *)((longlong)local_1a38 + uVar41);
              dStack_b80 = dVar451;
              dVar58 = *(double *)((longlong)local_1a38 + uVar41) - local_e48;
              auVar88._8_4_ = SUB84(dVar199,0);
              auVar88._0_8_ = dVar305;
              auVar88._12_4_ = (int)((ulonglong)dVar199 >> 0x20);
              auVar436._0_8_ =
                   (0.0 - local_e48) * dVar58 + (0.0 - local_bb8) * dVar305 +
                   (0.0 - dStack_bb0) * dVar199;
              auVar436._8_8_ = auVar436._0_8_;
              auVar453._8_4_ = SUB84(auVar436._0_8_,0);
              auVar453._0_8_ = auVar436._0_8_;
              auVar453._12_4_ = (int)((ulonglong)auVar436._0_8_ >> 0x20);
              auVar338._0_8_ = dVar58 * dVar58 + dVar305 * dVar305 + auVar88._8_8_ * dVar199;
              lVar50 = -(ulonglong)(auVar436._0_8_ <= 0.0);
              lVar51 = -(ulonglong)(auVar453._8_8_ <= 0.0);
              auVar454._8_8_ = lVar51;
              auVar454._0_8_ = lVar50;
              auVar338._8_8_ = auVar338._0_8_;
              uVar302 = SUB84(auVar338._0_8_,0);
              auVar89._8_4_ = uVar302;
              auVar89._0_8_ = auVar338._0_8_;
              uVar332 = (undefined4)((ulonglong)auVar338._0_8_ >> 0x20);
              auVar89._12_4_ = uVar332;
              auVar467._8_4_ = uVar302;
              auVar467._0_8_ = auVar338._0_8_;
              auVar467._12_4_ = uVar332;
              auVar90._8_8_ = -(ulonglong)(auVar89._8_8_ <= auVar436._0_8_);
              auVar90._0_8_ = -(ulonglong)(auVar338._0_8_ <= auVar436._0_8_);
              auVar468._8_8_ = -(ulonglong)(auVar467._8_8_ <= _UNK_150b28838);
              auVar468._0_8_ =
                   -(ulonglong)(auVar338._0_8_ <= ___xmm_38100000000000003810000000000000);
              auVar468 = auVar468 | auVar90;
              auVar483._8_4_ = uVar302;
              auVar483._0_8_ = auVar338._0_8_;
              auVar483._12_4_ = uVar332;
              auVar484._8_8_ = -(ulonglong)(auVar483._8_8_ <= _UNK_150b28838);
              auVar484._0_8_ =
                   -(ulonglong)(auVar338._0_8_ <= ___xmm_38100000000000003810000000000000);
              auVar484 = auVar484 | auVar90;
              local_e58 = *(uint *)(local_1a68 + uVar41);
              uStack_e54 = *(uint *)(local_1a68 + uVar41 + 4);
              uStack_e50 = *(uint *)(local_1a68 + uVar41 + 8);
              uStack_e4c = *(uint *)(local_1a68 + uVar41 + 0xc);
              uVar35 = *(uint *)((longlong)&local_1a48 + uVar41 + 4);
              uVar45 = *(uint *)((longlong)&uStack_1a40 + uVar41);
              uVar46 = *(uint *)((longlong)&uStack_1a40 + uVar41 + 4);
              uVar408 = auVar468._0_4_;
              uVar409 = auVar468._4_4_;
              uVar411 = auVar468._12_4_;
              uVar301 = auVar468._8_4_;
              local_e68 = *(undefined8 *)((longlong)local_1a38 + uVar41);
              uStack_e60 = *(undefined8 *)(local_1a28 + (uVar41 - 8));
              local_e78 = *(uint *)((longlong)&local_1a48 + uVar41);
              uStack_e74 = uVar35;
              uStack_e70 = uVar45;
              uStack_e6c = uVar46;
              uVar412 = auVar484._0_4_;
              uVar429 = auVar484._4_4_;
              uVar430 = auVar484._12_4_;
              *(uint *)(local_1a68 + uVar41) =
                   uVar408 & *(uint *)((longlong)&local_1a48 + uVar41) |
                   ~uVar408 & *(uint *)(local_1a68 + uVar41);
              *(uint *)(local_1a68 + uVar41 + 4) =
                   uVar409 & uVar35 | ~uVar409 & *(uint *)(local_1a68 + uVar41 + 4);
              *(uint *)(local_1a68 + uVar41 + 8) =
                   uVar301 & uVar45 | ~uVar301 & *(uint *)(local_1a68 + uVar41 + 8);
              *(uint *)(local_1a68 + uVar41 + 0xc) =
                   uVar411 & uVar46 | ~uVar411 & *(uint *)(local_1a68 + uVar41 + 0xc);
              uVar35 = ~uVar429 & local_e48._4_4_;
              uVar303 = auVar484._8_4_;
              uVar45 = ~uVar303 & (uint)uStack_e40;
              uVar46 = ~uVar430 & uStack_e40._4_4_;
              uVar264 = uVar429 & local_e68._4_4_;
              uVar265 = uVar303 & (uint)uStack_e60;
              uVar266 = uVar430 & uStack_e60._4_4_;
              *(uint *)(local_1a58 + uVar41) =
                   uVar412 & (uint)local_e68 | ~uVar412 & (uint)local_e48;
              *(uint *)(local_1a58 + uVar41 + 4) = uVar264 | uVar35;
              *(uint *)(local_1a58 + uVar41 + 8) = uVar265 | uVar45;
              *(uint *)(local_1a58 + uVar41 + 0xc) = uVar266 | uVar46;
              uVar35 = *(uint *)((longlong)&local_1598 + uVar41 + 4);
              uVar45 = *(uint *)((longlong)&uStack_1590 + uVar41);
              uVar46 = *(uint *)((longlong)&uStack_1590 + uVar41 + 4);
              uVar264 = *(uint *)((longlong)&local_15b8 + uVar41 + 4);
              uVar265 = *(uint *)((longlong)&uStack_15b0 + uVar41);
              uVar266 = *(uint *)((longlong)&uStack_15b0 + uVar41 + 4);
              local_c48 = *(undefined8 *)((longlong)&local_15a8 + uVar41);
              uStack_c40 = *(undefined8 *)((longlong)&uStack_15a0 + uVar41);
              local_e28 = *(undefined8 *)((longlong)local_1588 + uVar41);
              uStack_e20 = *(undefined8 *)((longlong)local_1588 + uVar41 + 8);
              local_e38 = *(uint *)((longlong)&local_1598 + uVar41);
              uStack_e34 = uVar35;
              uStack_e30 = uVar45;
              uStack_e2c = uVar46;
              local_c58 = *(uint *)((longlong)&local_15b8 + uVar41);
              uStack_c54 = uVar264;
              uStack_c50 = uVar265;
              uStack_c4c = uVar266;
              *(uint *)((longlong)&local_15b8 + uVar41) =
                   uVar408 & *(uint *)((longlong)&local_1598 + uVar41) |
                   ~uVar408 & *(uint *)((longlong)&local_15b8 + uVar41);
              *(uint *)((longlong)&local_15b8 + uVar41 + 4) = uVar409 & uVar35 | ~uVar409 & uVar264;
              *(uint *)((longlong)&uStack_15b0 + uVar41) = uVar301 & uVar45 | ~uVar301 & uVar265;
              *(uint *)((longlong)&uStack_15b0 + uVar41 + 4) = uVar411 & uVar46 | ~uVar411 & uVar266
              ;
              uVar35 = ~uVar429 & local_c48._4_4_;
              uVar45 = ~uVar303 & (uint)uStack_c40;
              uVar46 = ~uVar430 & uStack_c40._4_4_;
              uVar264 = uVar429 & local_e28._4_4_;
              uVar265 = uVar303 & (uint)uStack_e20;
              uVar266 = uVar430 & uStack_e20._4_4_;
              *(uint *)((longlong)&local_15a8 + uVar41) =
                   uVar412 & (uint)local_e28 | ~uVar412 & (uint)local_c48;
              *(uint *)((longlong)&local_15a8 + uVar41 + 4) = uVar264 | uVar35;
              *(uint *)((longlong)&uStack_15a0 + uVar41) = uVar265 | uVar45;
              *(uint *)((longlong)&uStack_15a0 + uVar41 + 4) = uVar266 | uVar46;
              uVar35 = *(uint *)((longlong)&local_12b8 + uVar41 + 4);
              uVar45 = *(uint *)((longlong)&uStack_12b0 + uVar41);
              uVar46 = *(uint *)((longlong)&uStack_12b0 + uVar41 + 4);
              uVar264 = *(uint *)(local_1298 + uVar41 + 4);
              uVar265 = *(uint *)(local_1298 + uVar41 + 8);
              uVar266 = *(uint *)(local_1298 + uVar41 + 0xc);
              local_d88 = *(undefined8 *)((longlong)&local_12a8 + uVar41);
              uStack_d80 = *(undefined8 *)(local_1298 + (uVar41 - 8));
              local_c68 = *(undefined8 *)(local_1288 + uVar41);
              uStack_c60 = *(undefined8 *)(local_1288 + uVar41 + 8);
              local_c78 = *(uint *)(local_1298 + uVar41);
              uStack_c74 = uVar264;
              uStack_c70 = uVar265;
              uStack_c6c = uVar266;
              local_d98 = *(uint *)((longlong)&local_12b8 + uVar41);
              uStack_d94 = uVar35;
              uStack_d90 = uVar45;
              uStack_d8c = uVar46;
              *(uint *)((longlong)&local_12b8 + uVar41) =
                   uVar408 & *(uint *)(local_1298 + uVar41) |
                   ~uVar408 & *(uint *)((longlong)&local_12b8 + uVar41);
              *(uint *)((longlong)&local_12b8 + uVar41 + 4) = uVar409 & uVar264 | ~uVar409 & uVar35;
              *(uint *)((longlong)&uStack_12b0 + uVar41) = uVar301 & uVar265 | ~uVar301 & uVar45;
              *(uint *)((longlong)&uStack_12b0 + uVar41 + 4) = uVar411 & uVar266 | ~uVar411 & uVar46
              ;
              uVar264 = uVar429 & local_c68._4_4_;
              uVar265 = uVar303 & (uint)uStack_c60;
              uVar266 = uVar430 & uStack_c60._4_4_;
              uVar35 = ~uVar429 & local_d88._4_4_;
              uVar45 = ~uVar303 & (uint)uStack_d80;
              uVar46 = ~uVar430 & uStack_d80._4_4_;
              *(uint *)((longlong)&local_12a8 + uVar41) =
                   uVar412 & (uint)local_c68 | ~uVar412 & (uint)local_d88;
              *(uint *)((longlong)&local_12a8 + uVar41 + 4) = uVar264 | uVar35;
              *(uint *)(local_1298 + (uVar41 - 8)) = uVar265 | uVar45;
              *(uint *)(local_1298 + (uVar41 - 4)) = uVar266 | uVar46;
              auVar6._8_8_ = _UNK_150689688;
              auVar6._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
              auVar202 = divpd(auVar436,auVar338);
              local_1de6 = 0;
              local_1de5 = 0;
              local_b48 = *(double *)(local_1a58 + uVar41);
              dStack_b40 = *(double *)(local_1a58 + uVar41 + 8);
              auVar466 = maxpd(auVar202,ZEXT816(0));
              local_b58 = *(double *)(local_1a68 + uVar41);
              dStack_b50 = *(double *)(local_1a68 + uVar41 + 8);
              auVar202 = minpd(auVar466,auVar6);
              auVar466 = minpd(auVar466,auVar6);
              local_1d88._0_8_ = auVar466._0_8_ * dVar58 + *(double *)(local_1a58 + uVar41);
              local_1d88._8_8_ =
                   auVar466._8_8_ * (dVar451 - dVar432) + *(double *)(local_1a58 + uVar41 + 8);
              local_1d98 = auVar202._0_8_ * dVar305 + *(double *)(local_1a68 + uVar41);
              uStack_1d90 = auVar202._8_8_ * dVar199 + *(double *)(local_1a68 + uVar41 + 8);
              dVar432 = ___xmm_3ff00000000000003ff0000000000000 - auVar202._0_8_;
              dVar451 = _UNK_150689688 - auVar202._8_8_;
              uVar45 = (uint)lVar50;
              uVar46 = (uint)((ulonglong)lVar50 >> 0x20);
              uVar264 = (uint)lVar51;
              uVar265 = (uint)((ulonglong)lVar51 >> 0x20);
              uStack_b34 = *(uint *)((longlong)&local_1a48 + uVar41 + 4);
              uStack_b2c = *(uint *)((longlong)&uStack_1a40 + uVar41 + 4);
              local_b28 = *(undefined1 (*) [16])((longlong)local_1a38 + uVar41);
              local_b38 = *(uint *)((longlong)&local_1a48 + uVar41);
              uStack_b30 = *(uint *)((longlong)&uStack_1a40 + uVar41);
              local_b18 = *(uint *)(local_1a68 + uVar41);
              uStack_b14 = *(uint *)(local_1a68 + uVar41 + 4);
              uStack_b10 = *(uint *)(local_1a68 + uVar41 + 8);
              uStack_b0c = *(uint *)(local_1a68 + uVar41 + 0xc);
              local_b08 = *(uint *)(local_1a58 + uVar41);
              uStack_b04 = *(uint *)(local_1a58 + uVar41 + 4);
              uStack_b00 = *(uint *)(local_1a58 + uVar41 + 8);
              uStack_afc = *(uint *)(local_1a58 + uVar41 + 0xc);
              auVar484 = auVar484 | auVar454;
              local_1d98 = (double)CONCAT44(~uVar46 & (uVar409 & uStack_b34 |
                                                      ~uVar409 &
                                                      (uint)((ulonglong)local_1d98 >> 0x20)) |
                                            *(uint *)(local_1a68 + uVar41 + 4) & uVar46,
                                            ~uVar45 & (uVar408 & *(uint *)((longlong)&local_1a48 +
                                                                          uVar41) |
                                                      ~uVar408 & SUB84(local_1d98,0)) |
                                            *(uint *)(local_1a68 + uVar41) & uVar45);
              uStack_1d90 = (double)CONCAT44(~uVar265 &
                                             (uVar411 & uStack_b2c |
                                             ~uVar411 & (uint)((ulonglong)uStack_1d90 >> 0x20)) |
                                             *(uint *)(local_1a68 + uVar41 + 0xc) & uVar265,
                                             ~uVar264 &
                                             (uVar301 & *(uint *)((longlong)&uStack_1a40 + uVar41) |
                                             ~uVar301 & SUB84(uStack_1d90,0)) |
                                             *(uint *)(local_1a68 + uVar41 + 8) & uVar264);
              uVar35 = movmskpd(0,auVar484);
              auVar468 = auVar468 | auVar454;
              iVar36 = movmskpd(iVar36,auVar468);
              auVar213._0_4_ =
                   ~uVar45 & (uVar412 & local_b28._0_4_ | ~uVar412 & (uint)local_1d88._0_8_);
              auVar213._4_4_ =
                   ~uVar46 & (uVar429 & local_b28._4_4_ |
                             ~uVar429 & (uint)((ulonglong)local_1d88._0_8_ >> 0x20));
              auVar213._8_4_ =
                   ~uVar264 & (uVar303 & local_b28._8_4_ | ~uVar303 & (uint)local_1d88._8_8_);
              auVar213._12_4_ =
                   ~uVar265 &
                   (uVar430 & local_b28._12_4_ |
                   ~uVar430 & (uint)((ulonglong)local_1d88._8_8_ >> 0x20));
              auVar369._0_4_ = *(uint *)(local_1a58 + uVar41) & uVar45;
              auVar369._4_4_ = *(uint *)(local_1a58 + uVar41 + 4) & uVar46;
              auVar369._8_4_ = *(uint *)(local_1a58 + uVar41 + 8) & uVar264;
              auVar369._12_4_ = *(uint *)(local_1a58 + uVar41 + 0xc) & uVar265;
              local_1d88 = auVar213 | auVar369;
              uVar302 = 1;
              if ((uVar35 & 0x3fffffff) == 0 && iVar36 == 0) {
                uVar302 = *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4);
              }
              *(undefined4 *)((longlong)&local_1db8 + uVar55 * 4) = uVar302;
              auVar469._0_4_ = auVar468._0_4_ & ___xmm_00000000000000003ff0000000000000;
              auVar469._4_4_ = auVar468._4_4_ & _UNK_150689514;
              auVar469._8_4_ = auVar468._8_4_ & _UNK_150689518;
              auVar469._12_4_ = auVar468._12_4_ & _UNK_15068951c;
              auVar91._0_4_ = ~auVar468._0_4_ & SUB84(dVar432,0);
              auVar91._4_4_ = ~auVar468._4_4_ & (uint)((ulonglong)dVar432 >> 0x20);
              auVar91._8_4_ = ~auVar468._8_4_ & auVar202._0_4_;
              auVar91._12_4_ = ~auVar468._12_4_ & auVar202._4_4_;
              *(undefined1 (*) [16])((longlong)adStack_10b8 + uVar54) = auVar91 | auVar469;
              *(uint *)((longlong)&uStack_10a8 + uVar54) = ~auVar484._0_4_ & SUB84(dVar451,0);
              *(uint *)((longlong)&uStack_10a8 + uVar54 + 4) =
                   ~auVar484._4_4_ & (uint)((ulonglong)dVar451 >> 0x20);
              *(uint *)((longlong)&uStack_10a0 + uVar54) = ~auVar484._8_4_ & auVar202._8_4_;
              *(uint *)((longlong)&uStack_10a0 + uVar54 + 4) = ~auVar484._12_4_ & auVar202._12_4_;
              dVar58 = (double)local_1d88._0_8_;
              dVar432 = (double)local_1d88._8_8_;
            }
            *(double *)((longlong)adStack_408 + uVar54) = local_1d98;
            *(double *)((longlong)adStack_408 + uVar54 + 8) = uStack_1d90;
            *(double *)((longlong)adStack_3f0 + (uVar54 - 8)) = dVar58;
            *(double *)((longlong)adStack_3f0 + uVar54) = dVar432;
            local_9d8 = dVar58 * dVar58 + local_1d98 * local_1d98 + uStack_1d90 * uStack_1d90;
            auVar218._8_4_ = SUB84(local_9d8,0);
            auVar218._0_8_ = local_9d8;
            uVar332 = (undefined4)((ulonglong)local_9d8 >> 0x20);
            auVar218._12_4_ = uVar332;
            dStack_9d0 = local_9d8;
            auVar219._8_8_ = -(ulonglong)(auVar218._8_8_ < dStack_1810);
            auVar219._0_8_ = -(ulonglong)(local_9d8 < local_1818);
            iVar44 = movmskpd(uVar302,auVar219);
            auVar108._8_4_ = SUB84(local_9d8,0);
            auVar108._0_8_ = local_9d8;
            auVar108._12_4_ = uVar332;
            auVar109._8_8_ = -(ulonglong)(auVar108._8_8_ < dStack_1820);
            auVar109._0_8_ = -(ulonglong)(local_9d8 < local_1828);
            uVar35 = movmskpd(iVar36,auVar109);
            paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar35;
            local_9c8 = local_9d8;
            dStack_9c0 = local_9d8;
            uVar35 = iVar44 * 4 | uVar35;
            dVar432 = local_248;
            dVar451 = uStack_240;
            dVar305 = local_238;
            dVar199 = uStack_230;
            if ((uVar35 == 0) && (iVar34 != -1)) {
            }
            else {
              iVar34 = *(int *)((longlong)&local_ec8 + uVar55 * 4);
              local_1828 = local_9d8;
              dStack_1820 = local_9d8;
              local_1818 = local_9d8;
              dStack_1810 = local_9d8;
            }
          }
          uVar55 = uVar55 + 1;
          uVar41 = uVar41 + 0x60;
          uVar54 = uVar54 + 0x20;
        } while ((longlong)uVar41 < 0x180);
        param_4 = local_1c78;
        if (bVar32) {
          auVar496._8_8_ = _UNK_150689688;
          auVar496._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
          iVar34 = 0;
          auVar448._4_4_ = _UNK_150689514;
          auVar448._0_4_ = ___xmm_00000000000000003ff0000000000000;
          auVar448._8_4_ = _UNK_150689518;
          auVar448._12_4_ = _UNK_15068951c;
          auVar202 = divpd(auVar496,local_1e58);
          local_1e22 = 0;
          local_1dd8 = ZEXT816(0);
          dVar58 = auVar202._0_8_;
          local_1dc8 = ZEXT816(0);
          local_1e88._0_8_ = dVar58 * local_fd8[0];
          local_1e78._0_8_ = dVar58 * local_f98;
          local_1e88._8_8_ = dVar58 * local_fc8[2];
          local_1e78._8_8_ = dVar58 * local_f78;
          local_1bf8 = ZEXT816(0);
          local_1c08 = ZEXT816(0);
        }
        else {
          auVar496._8_8_ = _UNK_150689688;
          auVar496._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
          auVar448._4_4_ = _UNK_150689514;
          auVar448._0_4_ = ___xmm_00000000000000003ff0000000000000;
          auVar448._8_4_ = _UNK_150689518;
          auVar448._12_4_ = _UNK_15068951c;
          lVar50 = (longlong)iVar34;
          uVar52 = (ulonglong)*(uint *)((longlong)&local_1db8 + lVar50 * 4);
          paVar48 = (atomic<unsigned_char> *)(lVar50 * 0x60);
          local_1e78 = *(undefined1 (*) [16])(&uStack_10a8 + lVar50 * 4);
          dStack_260 = (double)*(undefined8 *)(local_1a68 + (longlong)(paVar48 + 8));
          local_268 = (undefined1  [8])*(undefined8 *)(local_1a68 + (longlong)paVar48);
          dStack_250 = (double)*(undefined8 *)(local_1a58 + (longlong)(paVar48 + 8));
          local_258 = (undefined1  [8])*(undefined8 *)(local_1a58 + (longlong)paVar48);
          local_168 = (double)(&local_15b8)[lVar50 * 0xc];
          uStack_160 = (double)(&uStack_15b0)[lVar50 * 0xc];
          local_158 = (double)(&local_15a8)[lVar50 * 0xc];
          uStack_150 = (double)(&uStack_15a0)[lVar50 * 0xc];
          local_1e8 = (double)(&local_12b8)[lVar50 * 0xc];
          uStack_1e0 = (double)(&uStack_12b0)[lVar50 * 0xc];
          dVar432 = (double)(&local_1a48)[lVar50 * 0xc];
          dVar451 = (double)(&uStack_1a40)[lVar50 * 0xc];
          local_1d8 = (double)(&local_12a8)[lVar50 * 0xc];
          uStack_1d0 = *(double *)(local_1298 + (longlong)(paVar48 + -8));
          dVar305 = local_1a38[lVar50 * 0xc];
          dVar199 = *(double *)(local_1a28 + (longlong)(paVar48 + -8));
          local_248._0_4_ = SUB84(dVar432,0);
          local_248._4_4_ = (uint)((ulonglong)dVar432 >> 0x20);
          uStack_240._0_4_ = SUB84(dVar451,0);
          uStack_240._4_4_ = (uint)((ulonglong)dVar451 >> 0x20);
          local_238._0_4_ = SUB84(dVar305,0);
          local_238._4_4_ = (uint)((ulonglong)dVar305 >> 0x20);
          uStack_230._0_4_ = SUB84(dVar199,0);
          uStack_230._4_4_ = (uint)((ulonglong)dVar199 >> 0x20);
          local_148 = (double)(&local_1598)[lVar50 * 0xc];
          uStack_140 = (double)(&uStack_1590)[lVar50 * 0xc];
          local_138 = local_1588[lVar50 * 0xc];
          uStack_130 = local_1588[lVar50 * 0xc + 1];
          local_1c8 = *(double *)(local_1298 + (longlong)paVar48);
          uStack_1c0 = *(double *)(local_1298 + (longlong)(paVar48 + 8));
          local_1b8 = *(double *)(local_1288 + (longlong)paVar48);
          uStack_1b0 = *(double *)(local_1288 + (longlong)(paVar48 + 8));
          local_228 = *(double *)(local_1a28 + (longlong)paVar48);
          dStack_220 = *(double *)(local_1a28 + (longlong)(paVar48 + 8));
          local_218 = *(double *)(local_1a18 + (longlong)paVar48);
          dStack_210 = *(double *)(local_1a18 + (longlong)(paVar48 + 8));
          local_128 = local_1588[lVar50 * 0xc + 2];
          dStack_120 = local_1588[lVar50 * 0xc + 3];
          local_118 = local_1588[lVar50 * 0xc + 4];
          dStack_110 = local_1588[lVar50 * 0xc + 5];
          local_1a8 = local_1278[lVar50 * 0xc];
          dStack_1a0 = local_1278[lVar50 * 0xc + 1];
          local_198 = local_1278[lVar50 * 0xc + 2];
          dStack_190 = local_1278[lVar50 * 0xc + 3];
          local_1bf8 = *(undefined1 (*) [16])(adStack_3f0 + lVar50 * 4 + -1);
          local_1c08 = *(undefined1 (*) [16])(adStack_408 + lVar50 * 4);
          local_1e88 = *(undefined1 (*) [16])(adStack_10b8 + lVar50 * 4);
          local_1dd8 = *(undefined1 (*) [16])(adStack_408 + lVar50 * 4);
          local_1dc8 = *(undefined1 (*) [16])(adStack_3f0 + lVar50 * 4 + -1);
        }
      }
      else {
        paVar48 = &bGEnsureHasExecuted<_1419153191412432467>;
        bVar32 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1419153191412432467>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimplexVectorized.h"
                            ,0x1ad,"false");
        iVar34 = (int)CONCAT71(extraout_var,bVar32);
        if (bVar32) {
          pcVar2 = (code *)swi(3);
          uVar33 = (*pcVar2)();
          return (bool)uVar33;
        }
        local_1c08._0_12_ = ZEXT812(0);
        local_1c08._12_4_ = 0;
        local_1bf8._0_12_ = ZEXT812(0);
        local_1bf8._12_4_ = 0;
        local_1dd8 = ZEXT816(0);
        local_1dc8 = ZEXT816(0);
        dVar432 = local_248;
        dVar451 = uStack_240;
        dVar305 = local_238;
        dVar199 = uStack_230;
      }
      uVar37 = (uint)uVar52;
      auVar439._0_8_ =
           local_1bf8._0_8_ * local_1bf8._0_8_ + local_1c08._0_8_ * local_1c08._0_8_ +
           local_1c08._8_8_ * local_1c08._8_8_;
      auVar439._8_8_ = auVar439._0_8_;
      auVar233._8_4_ = SUB84(auVar439._0_8_,0);
      auVar233._0_8_ = auVar439._0_8_;
      uVar302 = (undefined4)((ulonglong)auVar439._0_8_ >> 0x20);
      auVar233._12_4_ = uVar302;
      auVar135._8_4_ = SUB84(auVar439._0_8_,0);
      auVar135._0_8_ = auVar439._0_8_;
      auVar135._12_4_ = uVar302;
      auVar234._8_8_ = -(ulonglong)(auVar233._8_8_ < dStack_17c0);
      auVar234._0_8_ = -(ulonglong)(auVar439._0_8_ < local_17c8);
      iVar34 = movmskpd(iVar34,auVar234);
      auVar136._8_8_ = -(ulonglong)(auVar135._8_8_ < local_1d38._8_8_);
      auVar136._0_8_ = -(ulonglong)(auVar439._0_8_ < local_1d38._0_8_);
      iVar36 = movmskpd((int)paVar48,auVar136);
      uVar5 = local_1c98._0_8_;
      uVar30 = local_1c98._8_8_;
      auVar235._8_8_ = -(ulonglong)((double)local_1c88._8_8_ <= auVar439._0_8_);
      auVar235._0_8_ = -(ulonglong)((double)local_1c88._0_8_ <= auVar439._0_8_);
      local_1c98 = auVar439;
      bVar32 = iVar34 * 4 != 0 || iVar36 != 0;
      uVar43 = movmskpd(iVar34,auVar235);
      auVar137._8_8_ = -(ulonglong)((double)uVar30 <= auVar439._0_8_);
      auVar137._0_8_ = -(ulonglong)((double)uVar5 <= auVar439._0_8_);
      uVar45 = movmskpd(iVar36,auVar137);
      param_1 = (FGeomGJKHelperSIMD *)(ulonglong)uVar45;
      local_1c88 = auVar439;
      if ((param_10) && (iVar34 * 4 != 0 || iVar36 != 0)) {
        bVar32 = _UNK_150b28848 < auVar439._0_8_;
        auVar236._0_8_ =
             -(ulonglong)
              (local_1cd8 == 0.0 &&
              (___xmm_3eb0c6f7a00000003eb0c6f7a0000000 < local_1d38._0_8_ &&
              ___xmm_3eb0c6f7a00000003eb0c6f7a0000000 < auVar439._0_8_));
        lVar50 = -(ulonglong)((_UNK_150b28848 < local_1d38._8_8_ && bVar32) && dStack_1cd0 == 0.0);
        auVar236._8_4_ = (undefined4)lVar50;
        auVar236._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
        uVar46 = movmskpd(uVar45,auVar236);
        param_1 = (FGeomGJKHelperSIMD *)(ulonglong)uVar46;
        auVar439._0_8_ =
             (double)-(ulonglong)
                      ((___xmm_3eb0c6f7a00000003eb0c6f7a0000000 < local_17c8 &&
                       ___xmm_3eb0c6f7a00000003eb0c6f7a0000000 < auVar439._0_8_) &&
                      local_1d18 == 0.0);
        lVar50 = -(ulonglong)((_UNK_150b28848 < dStack_17c0 && bVar32) && dStack_1d10 == 0.0);
        auVar439._8_4_ = (undefined4)lVar50;
        auVar439._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
        uVar35 = movmskpd(1,auVar439);
        if (((uVar35 & 0x3fffffff) == 0 && uVar46 == 0) || (3 < (int)uVar37)) {
          bVar27 = false;
        }
        else {
          bVar27 = true;
        }
        bVar32 = (bool)(bVar27 ^ 1);
      }
      uVar302 = SUB84(param_1,0);
      uVar35 = local_1df4;
      if (bVar32) break;
      if ((uVar43 & 0x3fffffff) != 0 || uVar45 != 0) break;
      uVar41 = (ulonglong)local_1df4;
      bVar32 = false;
      p_Var39 = (__m128 *)0x0;
    }
  }
LAB_143e9884c:
  dVar492 = dStack_1c40;
  dVar58 = local_1c48;
  pfVar31 = local_1c70;
  uVar41 = (ulonglong)param_10;
  *local_1c70 = (float)local_1cd8;
  fVar56 = __real_3f800000;
  dVar500 = local_1e88._0_8_;
  dVar465 = local_1e78._0_8_;
  dVar508 = local_1e88._8_8_;
  dVar480 = local_1e78._8_8_;
  if ((float)local_1cd8 <= 0.0) {
    local_248 = dVar432;
    uStack_240 = dVar451;
    local_238 = dVar305;
    uStack_230 = dVar199;
    if (param_10) {
      local_1888 = 0.0;
      dStack_1880 = 0.0;
      local_1878 = 0.0;
      dStack_1870 = 0.0;
      local_1848 = 0.0;
      dStack_1840 = 0.0;
      local_1838 = 0.0;
      dStack_1830 = 0.0;
      lVar51 = (longlong)(int)uVar37;
      auVar514._0_8_ =
           -(ulonglong)
            (((double)local_1c88._0_8_ < local_1898 &&
             ___xmm_3eb0c6f7a00000003eb0c6f7a0000000 < (double)local_1c88._0_8_) && 0.0 < local_17a8
            );
      lVar50 = -(ulonglong)
                (((double)local_1c88._8_8_ < dStack_1890 &&
                 _UNK_150b28848 < (double)local_1c88._8_8_) && 0.0 < dStack_17a0);
      auVar514._8_4_ = (undefined4)lVar50;
      auVar514._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
      auVar499._0_8_ =
           -(ulonglong)
            (((double)local_1c98._0_8_ < local_18a8 &&
             ___xmm_3eb0c6f7a00000003eb0c6f7a0000000 < (double)local_1c98._0_8_) && 0.0 < local_17b8
            );
      lVar50 = -(ulonglong)
                (((double)local_1c98._8_8_ < dStack_18a0 &&
                 _UNK_150b28848 < (double)local_1c98._8_8_) && 0.0 < dStack_17b0);
      auVar499._8_4_ = (undefined4)lVar50;
      auVar499._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
      if (uVar35 == 0) {
        local_1888 = local_168;
        dStack_1880 = uStack_160;
        local_1878 = local_158;
        dStack_1870 = uStack_150;
        local_1848 = local_1e8;
        dStack_1840 = uStack_1e0;
        local_1838 = local_1d8;
        dStack_1830 = uStack_1d0;
      }
      else {
        local_d38[0] = dVar500;
        local_d38[1] = dVar500;
        local_d38[2] = dVar500;
        local_d38[3] = dVar500;
        local_cd8 = dVar480;
        dStack_cd0 = dVar480;
        local_cc8 = dVar480;
        dStack_cc0 = dVar480;
        local_d38[4] = dVar508;
        local_d38[5] = dVar508;
        local_d38[6] = dVar508;
        dStack_d00 = dVar508;
        local_cf8 = dVar465;
        dStack_cf0 = dVar465;
        local_ce8 = dVar465;
        dStack_ce0 = dVar465;
        if (0 < lVar51) {
          auVar299 = ZEXT816(0);
          auVar326 = ZEXT816(0);
          auVar362 = ZEXT816(0);
          auVar386 = ZEXT816(0);
          uVar41 = uVar53;
          lVar50 = lVar51;
          do {
            local_688 = *(double *)((longlong)local_d38 + uVar41);
            dStack_680 = *(double *)((longlong)local_d38 + uVar41 + 8);
            local_678 = *(double *)((longlong)local_d38 + uVar41 + 0x10);
            dStack_670 = *(double *)((longlong)local_d38 + uVar41 + 0x18);
            local_568 = local_688;
            dStack_560 = dStack_680;
            local_658 = *(double *)((longlong)&local_158 + uVar41);
            dStack_650 = *(double *)((longlong)&uStack_150 + uVar41);
            local_668 = *(double *)((longlong)&local_168 + uVar41);
            dStack_660 = *(double *)((longlong)&uStack_160 + uVar41);
            local_1878 = *(double *)((longlong)&local_158 + uVar41) * local_678 + auVar299._0_8_;
            dStack_1870 = *(double *)((longlong)&uStack_150 + uVar41) * dStack_670 + auVar299._8_8_;
            pdVar40 = (double *)((longlong)&local_1d8 + uVar41);
            pdVar3 = (double *)((longlong)&uStack_1d0 + uVar41);
            local_618 = *pdVar40;
            dStack_610 = *pdVar3;
            local_1888 = *(double *)((longlong)&local_168 + uVar41) * local_688 + auVar326._0_8_;
            dStack_1880 = *(double *)((longlong)&uStack_160 + uVar41) * dStack_680 + auVar326._8_8_;
            local_558 = *(double *)((longlong)local_d38 + uVar41 + 0x10);
            dStack_550 = *(double *)((longlong)local_d38 + uVar41 + 0x18);
            pdVar1 = (double *)((longlong)&local_1e8 + uVar41);
            pdVar4 = (double *)((longlong)&uStack_1e0 + uVar41);
            uVar41 = uVar41 + 0x20;
            local_628 = *pdVar1;
            dStack_620 = *pdVar4;
            auVar326._8_4_ = SUB84(dStack_1880,0);
            auVar326._0_8_ = local_1888;
            auVar326._12_4_ = (int)((ulonglong)dStack_1880 >> 0x20);
            local_1838 = *pdVar40 * local_558 + auVar362._0_8_;
            dStack_1830 = *pdVar3 * dStack_550 + auVar362._8_8_;
            auVar362._8_4_ = SUB84(dStack_1830,0);
            auVar362._0_8_ = local_1838;
            auVar362._12_4_ = (int)((ulonglong)dStack_1830 >> 0x20);
            auVar299._8_4_ = SUB84(dStack_1870,0);
            auVar299._0_8_ = local_1878;
            auVar299._12_4_ = (int)((ulonglong)dStack_1870 >> 0x20);
            local_1848 = *pdVar1 * local_688 + auVar386._0_8_;
            dStack_1840 = *pdVar4 * dStack_680 + auVar386._8_8_;
            auVar386._8_4_ = SUB84(dStack_1840,0);
            auVar386._0_8_ = local_1848;
            auVar386._12_4_ = (int)((ulonglong)dStack_1840 >> 0x20);
            lVar50 = lVar50 + -1;
          } while (lVar50 != 0);
          uVar302 = 0;
        }
      }
      dVar199 = dStack_1870;
      dVar305 = local_1878;
      dVar451 = dStack_1880;
      dVar432 = local_1888;
      uVar37 = movmskpd((int)uVar41,auVar514);
      iVar34 = movmskpd(uVar302,auVar499);
      if ((uVar37 & 0x3fffffff) == 0 && iVar34 == 0) {
        if (uVar35 == 0) {
          *local_1c70 = (float)((uint)(local_1d08->Margin + local_1ce8->Margin) ^
                               __xmm_80000000800000008000000080000000);
          pVVar42 = TMakeVectorRegister<VectorRegister4Double>(&local_308,0.0,0.0,fVar56,0.0);
          dVar432 = (pVVar42->XY).m128d_f64[1];
          (param_9->XY).m128d_f64[0] = (pVVar42->XY).m128d_f64[0];
          (param_9->XY).m128d_f64[1] = dVar432;
          dVar432 = (pVVar42->ZW).m128d_f64[1];
          (param_9->ZW).m128d_f64[0] = (pVVar42->ZW).m128d_f64[0];
          (param_9->ZW).m128d_f64[1] = dVar432;
          dVar432 = (pVVar42->ZW).m128d_f64[0];
          dVar451 = (pVVar42->ZW).m128d_f64[1];
          dVar305 = (pVVar42->XY).m128d_f64[1];
          (local_1df0->XY).m128d_f64[0] = local_1c58 * (pVVar42->XY).m128d_f64[0] + local_168;
          (local_1df0->XY).m128d_f64[1] = dStack_1c50 * dVar305 + uStack_160;
          (local_1df0->ZW).m128d_f64[0] = local_1c68 * dVar432 + local_158;
          (local_1df0->ZW).m128d_f64[1] = dStack_1c60 * dVar451 + uStack_150;
        }
        else {
          local_1e48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e48.ArrayNum = 0;
          local_1e48.ArrayMax = 0;
          local_1e68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e68.ArrayNum = 0;
          local_1e68.ArrayMax = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,8,&local_1e48.AllocatorInstance,0,&local_1e48.ArrayMax);
          if (local_1e68.ArrayMax < 8) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,0x10,8,&local_1e68.AllocatorInstance,local_1e68.ArrayNum,
                       &local_1e68.ArrayMax);
          }
          if (0 < lVar51) {
            do {
              local_5a8 = *(double *)((longlong)&local_168 + uVar53);
              dStack_5a0 = *(double *)((longlong)&uStack_160 + uVar53);
              local_598 = *(double *)((longlong)&local_158 + uVar53);
              dStack_590 = *(double *)((longlong)&uStack_150 + uVar53);
              local_1c18 = CONCAT44((float)*(double *)((longlong)&uStack_160 + uVar53),
                                    (float)*(double *)((longlong)&local_168 + uVar53));
              uStack_1c10 = CONCAT44((float)*(double *)((longlong)&uStack_150 + uVar53),
                                     (float)*(double *)((longlong)&local_158 + uVar53));
              if ((local_1e48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1c18) &&
                 ((FScriptContainerElement *)&local_1c18 <
                  local_1e48.AllocatorInstance.Data + (longlong)local_1e48.ArrayMax * 0x10)) {
                bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar32) {
                  pcVar2 = (code *)swi(3);
                  uVar33 = (*pcVar2)();
                  return (bool)uVar33;
                }
              }
              iVar34 = local_1e48.ArrayNum;
              if (local_1e48.ArrayNum == local_1e48.ArrayMax) {
                iVar34 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1010,&local_1e48.AllocatorInstance,&local_1e48.ArrayMax);
              }
              local_588 = *(double *)((longlong)&local_1e8 + uVar53);
              dStack_580 = *(double *)((longlong)&uStack_1e0 + uVar53);
              local_578 = *(double *)((longlong)&local_1d8 + uVar53);
              dStack_570 = *(double *)((longlong)&uStack_1d0 + uVar53);
              local_1e48.ArrayNum = iVar34 + 1;
              *(undefined8 *)(local_1e48.AllocatorInstance.Data + (longlong)iVar34 * 0x10) =
                   local_1c18;
              *(undefined8 *)(local_1e48.AllocatorInstance.Data + (longlong)iVar34 * 0x10 + 8) =
                   uStack_1c10;
              local_1c28 = CONCAT44((float)(dStack_1860 + dStack_580),
                                    (float)(local_1868 + local_588));
              uStack_1c20 = CONCAT44((float)(dStack_1850 + dStack_570),
                                     (float)(local_1858 + local_578));
              if ((local_1e68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1c28) &&
                 ((FScriptContainerElement *)&local_1c28 <
                  local_1e68.AllocatorInstance.Data + (longlong)local_1e68.ArrayMax * 0x10)) {
                bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar32) {
                  pcVar2 = (code *)swi(3);
                  uVar33 = (*pcVar2)();
                  return (bool)uVar33;
                }
              }
              iVar34 = local_1e68.ArrayNum;
              if (local_1e68.ArrayNum == local_1e68.ArrayMax) {
                iVar34 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1010,&local_1e68.AllocatorInstance,&local_1e68.ArrayMax);
              }
              uVar53 = uVar53 + 0x20;
              local_1e68.ArrayNum = iVar34 + 1;
              *(undefined8 *)(local_1e68.AllocatorInstance.Data + (longlong)iVar34 * 0x10) =
                   local_1c28;
              *(undefined8 *)(local_1e68.AllocatorInstance.Data + (longlong)iVar34 * 0x10 + 8) =
                   uStack_1c20;
              lVar51 = lVar51 + -1;
              dVar432 = local_1888;
              dVar451 = dStack_1880;
              dVar305 = local_1878;
              dVar199 = dStack_1870;
              dVar58 = local_1c48;
              dVar492 = dStack_1c40;
            } while (lVar51 != 0);
          }
          pFVar29 = local_1ce8;
          pFVar28 = local_1d08;
          local_2a8.AToBRotation.m128_u64[0] =
               CONCAT44((float)(double)local_1808.m128_u64[1],(float)(double)local_1808.m128_u64[0])
          ;
          local_2a8.AToBRotation.m128_u64[1] = CONCAT44((float)dStack_17f0,(float)local_17f8);
          local_2a8.B = local_1d08;
          local_2a8.BToARotation.m128_u64[0] =
               CONCAT44((float)(local_1d20->XY).m128d_f64[1],(float)(local_1d20->XY).m128d_f64[0]);
          local_2a8.BToARotation.m128_u64[1] =
               CONCAT44((float)(local_1d20->ZW).m128d_f64[1],(float)(local_1d20->ZW).m128d_f64[0]);
          local_2a8.StartPoint.m128_u64[0] =
               CONCAT44((float)(param_4->XY).m128d_f64[1],(float)(param_4->XY).m128d_f64[0]);
          local_2a8.StartPoint.m128_u64[1] =
               CONCAT44((float)(param_4->ZW).m128d_f64[1],(float)(param_4->ZW).m128d_f64[0]);
          EVar38 = VectorEPA<Chaos::FGeomGJKHelperSIMD,Chaos::TSupportBAtOriginHelperSIMD<1>_>
                             (&local_1e48,&local_1e68,local_1ce8,&local_2a8,&local_1778,&local_1768,
                              &local_1018,&local_978);
          if (EVar38 < Degenerate) {
            (param_9->XY).m128d_f64[0] = (double)local_1768.m128_f32[0];
            (param_9->XY).m128d_f64[1] = (double)local_1768.m128_f32[1];
            (param_9->ZW).m128d_f64[0] = (double)local_1768.m128_f32[2];
            (param_9->ZW).m128d_f64[1] = (double)local_1768.m128_f32[3];
            *pfVar31 = local_1778.m128_f32[0];
            *pfVar31 = (float)(local_1778.m128_u32[0] ^ __xmm_80000000800000008000000080000000) -
                       (pFVar28->Margin + pFVar29->Margin);
            dVar305 = (double)local_1018.m128_f32[2] + local_1c68 * (param_9->ZW).m128d_f64[0];
            dVar199 = (double)local_1018.m128_f32[3] + dStack_1c60 * (param_9->ZW).m128d_f64[1];
            dVar432 = local_1c58 * (param_9->XY).m128d_f64[0] + (double)local_1018.m128_f32[0];
            dVar451 = dStack_1c50 * (param_9->XY).m128d_f64[1] + (double)local_1018.m128_f32[1];
          }
          else if (EVar38 == BadInitialSimplex) {
            (param_9->XY).m128d_f64[0] = (double)local_1768.m128_f32[0];
            (param_9->XY).m128d_f64[1] = (double)local_1768.m128_f32[1];
            (param_9->ZW).m128d_f64[0] = (double)local_1768.m128_f32[2];
            (param_9->ZW).m128d_f64[1] = (double)local_1768.m128_f32[3];
            *pfVar31 = local_1778.m128_f32[0];
            *pfVar31 = (float)(local_1778.m128_u32[0] ^ __xmm_80000000800000008000000080000000) -
                       (pFVar28->Margin + pFVar29->Margin);
            dVar305 = local_1c68 * (param_9->ZW).m128d_f64[0] + dVar305;
            dVar199 = dStack_1c60 * (param_9->ZW).m128d_f64[1] + dVar199;
            dVar432 = local_1c58 * (param_9->XY).m128d_f64[0] + dVar432;
            dVar451 = dStack_1c50 * (param_9->XY).m128d_f64[1] + dVar451;
          }
          else {
            if (EVar38 != Degenerate) {
              if (local_1e68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e68.AllocatorInstance.Data);
              }
              if (local_1e48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e48.AllocatorInstance.Data);
              }
              return false;
            }
            *pfVar31 = (float)((uint)(pFVar28->Margin + pFVar29->Margin) ^
                              __xmm_80000000800000008000000080000000);
            (param_9->XY).m128d_f64[0] = dVar58;
            (param_9->XY).m128d_f64[1] = dVar492;
            (param_9->ZW).m128d_f64[0] = local_1c38;
            (param_9->ZW).m128d_f64[1] = dStack_1c30;
            auVar263._8_4_ = SUB84(dVar492 * dStack_1c50,0);
            auVar263._0_8_ = dVar58 * local_1c58;
            auVar263._12_4_ = (int)((ulonglong)(dVar492 * dStack_1c50) >> 0x20);
            auVar328._8_4_ = SUB84(dStack_1c30 * dStack_1c60,0);
            auVar328._0_8_ = local_1c38 * local_1c68;
            auVar328._12_4_ = (int)((ulonglong)(dStack_1c30 * dStack_1c60) >> 0x20);
            dVar305 = local_1c38 * local_1c68 + dVar305;
            dVar199 = auVar328._8_8_ + dVar199;
            dVar432 = dVar58 * local_1c58 + dVar432;
            dVar451 = auVar263._8_8_ + dVar451;
          }
          (local_1df0->XY).m128d_f64[0] = dVar432;
          (local_1df0->XY).m128d_f64[1] = dVar451;
          (local_1df0->ZW).m128d_f64[0] = dVar305;
          (local_1df0->ZW).m128d_f64[1] = dVar199;
          if (local_1e68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e68.AllocatorInstance.Data);
          }
          if (local_1e48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e48.AllocatorInstance.Data);
          }
        }
      }
      else {
        dVar305 = local_1bf8._0_8_;
        dVar432 = local_1c08._0_8_;
        dVar451 = local_1c08._8_8_;
        dVar199 = local_1bf8._8_8_;
        auVar262._0_8_ = dVar305 * dVar305 + dVar432 * dVar432;
        auVar262._8_8_ = dVar199 * dVar199 + dVar451 * dVar451;
        auVar193._8_4_ = SUB84(auVar262._8_8_,0);
        auVar193._0_8_ = auVar262._0_8_;
        auVar193._12_4_ = (int)((ulonglong)auVar262._8_8_ >> 0x20);
        auVar194._0_8_ = auVar193._8_8_ + auVar262._0_8_;
        auVar194._8_8_ = auVar262._0_8_ + auVar262._8_8_;
        auVar466 = sqrtpd(auVar262,auVar194);
        auVar202 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar466);
        auVar466 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar466);
        auVar195._0_8_ = auVar202._0_8_ * dVar432;
        auVar195._8_8_ = auVar202._8_8_ * dVar451;
        *(undefined1 (*) [16])(param_9->XY).m128d_f64 = auVar195;
        (param_9->ZW).m128d_f64[0] = auVar466._0_8_ * dVar305;
        (param_9->ZW).m128d_f64[1] = auVar466._8_8_ * dVar199;
        auVar202 = sqrtpd(auVar195,local_1c98);
        dVar451 = (param_9->XY).m128d_f64[1];
        auVar327._0_8_ = (local_1798 + local_1c58) - auVar202._0_8_;
        auVar327._8_8_ = (dStack_1790 + dStack_1c50) - auVar202._8_8_;
        auVar202 = sqrtpd(auVar202,local_1c88);
        auVar15._8_8_ = dStack_18a0;
        auVar15._0_8_ = local_18a8;
        auVar466 = minpd(auVar327,auVar15);
        auVar300._0_8_ = (local_1788 + local_1c68) - auVar202._0_8_;
        auVar300._8_8_ = (dStack_1780 + dStack_1c60) - auVar202._8_8_;
        dVar199 = (param_9->ZW).m128d_f64[0];
        dVar58 = (param_9->ZW).m128d_f64[1];
        auVar16._8_8_ = dStack_1890;
        auVar16._0_8_ = local_1898;
        auVar202 = minpd(auVar300,auVar16);
        dVar492 = (param_4->ZW).m128d_f64[0];
        dVar465 = (param_4->ZW).m128d_f64[1];
        auVar466 = maxpd(auVar466,ZEXT816(0));
        auVar202 = maxpd(auVar202,ZEXT816(0));
        dVar305 = (param_9->XY).m128d_f64[1];
        dVar432 = (param_4->XY).m128d_f64[1];
        (local_1df0->XY).m128d_f64[0] =
             (local_1848 - local_1798 * (param_9->XY).m128d_f64[0]) +
             auVar466._0_8_ * (param_9->XY).m128d_f64[0] + (param_4->XY).m128d_f64[0];
        (local_1df0->XY).m128d_f64[1] =
             (dStack_1840 - dStack_1790 * dVar451) + auVar466._8_8_ * dVar305 + dVar432;
        (local_1df0->ZW).m128d_f64[0] =
             (local_1838 - local_1788 * dVar199) + auVar202._0_8_ * dVar199 + dVar492;
        (local_1df0->ZW).m128d_f64[1] =
             (dStack_1830 - dStack_1780 * dVar58) + auVar202._8_8_ * dVar58 + dVar465;
        *local_1c70 = (float)(0.0 - auVar466._0_8_);
      }
    }
    else {
      pVVar42 = TMakeVectorRegister<VectorRegister4Double>(&local_2e8,0.0,0.0,__real_3f800000,0.0);
      dVar432 = (pVVar42->XY).m128d_f64[1];
      (param_9->XY).m128d_f64[0] = (pVVar42->XY).m128d_f64[0];
      (param_9->XY).m128d_f64[1] = dVar432;
      dVar432 = (pVVar42->ZW).m128d_f64[1];
      (param_9->ZW).m128d_f64[0] = (pVVar42->ZW).m128d_f64[0];
      (param_9->ZW).m128d_f64[1] = dVar432;
      pVVar42 = TMakeVectorRegister<VectorRegister4Double>(&local_2c8,0.0,0.0,0.0,0.0);
      dVar432 = (pVVar42->XY).m128d_f64[1];
      (local_1df0->XY).m128d_f64[0] = (pVVar42->XY).m128d_f64[0];
      (local_1df0->XY).m128d_f64[1] = dVar432;
      dVar432 = (pVVar42->ZW).m128d_f64[1];
      (local_1df0->ZW).m128d_f64[0] = (pVVar42->ZW).m128d_f64[0];
      (local_1df0->ZW).m128d_f64[1] = dVar432;
    }
  }
  else {
    (param_9->XY).m128d_f64[0] = local_1c48;
    (param_9->XY).m128d_f64[1] = dStack_1c40;
    (param_9->ZW).m128d_f64[0] = local_1c38;
    (param_9->ZW).m128d_f64[1] = dStack_1c30;
    pdVar40 = &local_1cb8;
    if (uVar37 != 0) {
      pdVar40 = &local_c98;
    }
    local_1cb8 = 0.0;
    dStack_1cb0 = 0.0;
    local_1ca8 = 0.0;
    dStack_1ca0 = 0.0;
    local_e18 = local_1e8 * dVar500;
    dStack_e10 = uStack_1e0 * dVar500;
    local_e08 = local_1d8 * dVar500;
    dStack_e00 = uStack_1d0 * dVar500;
    local_df8 = local_1c8 * dVar508 + local_1e8 * dVar500;
    dStack_df0 = uStack_1c0 * dVar508 + uStack_1e0 * dVar500;
    local_de8 = local_1b8 * dVar508 + local_1d8 * dVar500;
    dStack_de0 = uStack_1b0 * dVar508 + uStack_1d0 * dVar500;
    local_eb8 = local_1a8 * dVar465 + local_df8;
    dStack_eb0 = dStack_1a0 * dVar465 + dStack_df0;
    local_ea8 = local_198 * dVar465 + local_de8;
    dStack_ea0 = dStack_190 * dVar465 + dStack_de0;
    local_c98 = local_188 * dVar480 + local_eb8;
    dStack_c90 = dStack_180 * dVar480 + dStack_eb0;
    local_c88 = local_178 * dVar480 + local_ea8;
    dStack_c80 = dStack_170 * dVar480 + dStack_ea0;
    local_1cb8 = *pdVar40;
    dStack_1cb0 = pdVar40[1];
    local_1ca8 = pdVar40[2];
    dStack_1ca0 = pdVar40[3];
    pdVar40 = &local_e18;
    if (uVar37 != 1) {
      pdVar40 = &local_1cb8;
    }
    local_1cb8 = *pdVar40;
    dStack_1cb0 = pdVar40[1];
    local_1ca8 = pdVar40[2];
    dStack_1ca0 = pdVar40[3];
    pdVar40 = &local_df8;
    if (uVar37 != 2) {
      pdVar40 = &local_1cb8;
    }
    local_1cb8 = *pdVar40;
    dStack_1cb0 = pdVar40[1];
    local_1ca8 = pdVar40[2];
    dStack_1ca0 = pdVar40[3];
    pdVar40 = &local_eb8;
    if (uVar37 != 3) {
      pdVar40 = &local_1cb8;
    }
    local_1cb8 = *pdVar40;
    dStack_1cb0 = pdVar40[1];
    local_1ca8 = pdVar40[2];
    dStack_1ca0 = pdVar40[3];
    dVar199 = pdVar40[2];
    dVar58 = pdVar40[3];
    dVar451 = pdVar40[1];
    dVar305 = (param_5->XY).m128d_f64[1];
    dVar492 = (param_5->ZW).m128d_f64[0];
    dVar465 = (param_5->ZW).m128d_f64[1];
    dVar480 = (param_4->ZW).m128d_f64[0];
    dVar500 = (param_4->ZW).m128d_f64[1];
    dVar432 = (param_4->XY).m128d_f64[1];
    (local_1df0->XY).m128d_f64[0] =
         (*pdVar40 - local_1c48 * local_1798) +
         (param_5->XY).m128d_f64[0] * local_1cd8 + (param_4->XY).m128d_f64[0];
    (local_1df0->XY).m128d_f64[1] =
         (dVar451 - dStack_1c40 * dStack_1790) + dVar305 * dStack_1cd0 + dVar432;
    (local_1df0->ZW).m128d_f64[0] =
         (dVar199 - local_1c38 * local_1788) + dVar492 * local_1d18 + dVar480;
    (local_1df0->ZW).m128d_f64[1] =
         (dVar58 - dStack_1c30 * dStack_1780) + dVar465 * dStack_1d10 + dVar500;
  }
  return true;
LAB_143e96bf0:
  do {
    local_9b8 = *(double *)(local_f58 + uVar52);
    dStack_9b0 = *(double *)(local_f58 + uVar52 + 8);
    local_9a8 = *(double *)(local_f48 + uVar52);
    dStack_9a0 = *(double *)(local_f48 + uVar52 + 8);
    auVar140._8_8_ =
         -(ulonglong)(*(double *)(local_f58 + uVar52 + 8) * (double)local_1e38._8_8_ == 0.0);
    auVar140._0_8_ = -(ulonglong)(*(double *)(local_f58 + uVar52) * (double)local_1e38._0_8_ == 0.0)
    ;
    iVar44 = movmskpd((int)paVar48,auVar140);
    auVar141._8_8_ =
         -(ulonglong)((double)local_1e38._8_8_ * *(double *)(local_f48 + uVar52 + 8) == 0.0);
    auVar141._0_8_ = -(ulonglong)((double)local_1e38._0_8_ * *(double *)(local_f48 + uVar52) == 0.0)
    ;
    uVar46 = movmskpd(uVar43,auVar141);
    local_998 = *(undefined1 (*) [16])(local_f58 + uVar52);
    local_988 = *(undefined1 (*) [16])(local_f48 + uVar52);
    iVar36 = movmskpd(uVar46,*(undefined1 (*) [16])(local_f48 + uVar52));
    uVar264 = movmskpd(iVar44,*(undefined1 (*) [16])(local_f58 + uVar52));
    uVar43 = iVar36 * 4 | uVar264;
    if (((uVar35 | uVar45) == uVar43) && ((uVar46 & 0x3fffffff) == 0 && iVar44 == 0)) {
      auStack_1d28[uVar54] = 1;
    }
    else {
      local_648 = *(double *)(local_1be8 + uVar41);
      dStack_640 = *(double *)(local_1be8 + uVar41 + 8);
      local_638 = *(double *)(local_1bd8 + uVar41);
      dStack_630 = *(double *)(local_1bd8 + uVar41 + 8);
      bVar32 = false;
      local_928 = *(double *)((longlong)local_1ba8 + uVar41);
      dStack_920 = *(double *)((longlong)local_1ba8 + uVar41 + 8);
      local_958 = *(double *)((longlong)&local_1bb8 + uVar41);
      dStack_950 = *(double *)((longlong)&uStack_1bb0 + uVar41);
      local_918 = *(double *)((longlong)local_1ba8 + uVar41 + 0x10);
      dStack_910 = *(double *)((longlong)local_1ba8 + uVar41 + 0x18);
      local_948 = local_648;
      dStack_940 = dStack_640;
      local_938 = local_638;
      dStack_930 = dStack_630;
      local_968 = *(double *)((longlong)&local_1bc8 + uVar41);
      dStack_960 = *(double *)((longlong)&uStack_1bc0 + uVar41);
      dVar500 = *(double *)((longlong)&local_1bc8 + uVar41) - local_648;
      dVar508 = *(double *)((longlong)&uStack_1bc0 + uVar41) - dStack_640;
      local_1e12 = 0;
      auStack_1d28[uVar54] = 0;
      dVar336 = local_928 - local_648;
      dVar58 = dStack_920 - dStack_640;
      uVar302 = SUB84(dVar508,0);
      auVar142._8_4_ = uVar302;
      auVar142._0_8_ = dVar500;
      uVar332 = (undefined4)((ulonglong)dVar508 >> 0x20);
      auVar142._12_4_ = uVar332;
      auVar399._0_8_ = local_958 - local_638;
      auVar399._8_8_ = dStack_950 - dStack_630;
      uVar366 = SUB84(dVar58,0);
      auVar487._8_4_ = uVar366;
      auVar487._0_8_ = dVar336;
      uVar365 = (undefined4)((ulonglong)dVar58 >> 0x20);
      auVar487._12_4_ = uVar365;
      auVar513._0_8_ = local_918 - local_638;
      auVar513._8_8_ = dStack_910 - dStack_630;
      auVar240._8_4_ = uVar366;
      auVar240._0_8_ = dVar336;
      auVar240._12_4_ = uVar365;
      auVar466 = blendpd(auVar240,auVar513,2);
      dVar58 = auVar513._0_8_ * dVar508 - auVar399._0_8_ * dVar58;
      auVar143._8_4_ = uVar302;
      auVar143._0_8_ = dVar500;
      auVar143._12_4_ = uVar332;
      auVar202 = blendpd(auVar143,auVar399,2);
      auVar287._8_4_ = SUB84(dVar58,0);
      auVar287._0_8_ = auVar487._8_8_ * dVar500 - auVar142._8_8_ * dVar336;
      auVar287._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
      auVar241._0_8_ = auVar466._0_8_ * auVar399._0_8_ - auVar202._0_8_ * auVar513._0_8_;
      auVar241._8_8_ = auVar466._8_8_ * auVar399._8_8_ - auVar202._8_8_ * auVar513._8_8_;
      local_1d38 = blendpd(auVar287,auVar241,2);
      uVar333 = SUB84(auVar241._0_8_,0);
      auVar144._8_4_ = uVar333;
      auVar144._0_8_ = dVar58;
      uVar364 = (undefined4)((ulonglong)auVar241._0_8_ >> 0x20);
      auVar144._12_4_ = uVar364;
      dVar480 = ___xmm_38100000000000003810000000000000 * *(double *)(local_1bd8 + uVar41);
      auVar497._0_8_ =
           local_1d38._0_8_ * local_1d38._0_8_ + dVar58 * dVar58 + auVar144._8_8_ * auVar241._0_8_;
      dVar492 = ___xmm_38100000000000003810000000000000 * *(double *)(local_1be8 + uVar41);
      dVar465 = _UNK_150b28838 * *(double *)(local_1be8 + uVar41 + 8);
      local_908 = *(double *)(local_1be8 + uVar41);
      dStack_900 = *(double *)(local_1be8 + uVar41 + 8);
      dVar492 = dVar480 * dVar480 + dVar492 * dVar492 + dVar465 * dVar465;
      auVar497._8_8_ = auVar497._0_8_;
      auVar145._8_4_ = SUB84(auVar497._0_8_,0);
      auVar145._0_8_ = auVar497._0_8_;
      auVar145._12_4_ = (int)((ulonglong)auVar497._0_8_ >> 0x20);
      auVar146._8_8_ = -(ulonglong)(auVar145._8_8_ <= dVar492);
      auVar146._0_8_ = -(ulonglong)(auVar497._0_8_ <= dVar492);
      uVar43 = movmskpd(0,auVar146);
      iVar36 = movmskpd(uVar264,auVar146);
      local_8f8 = *(double *)(local_1bd8 + uVar41);
      uStack_8f0 = *(undefined8 *)(local_1bd8 + uVar41 + 8);
      local_248 = dVar432;
      uStack_240 = dVar451;
      local_238 = dVar305;
      uStack_230 = dVar199;
      if ((uVar43 & 0x3fffffff) == 0 && iVar36 == 0) {
        dVar432 = 0.0 - *(double *)(local_1be8 + uVar41);
        dVar451 = 0.0 - *(double *)(local_1be8 + uVar41 + 8);
        local_828 = *(double *)(local_1be8 + uVar41);
        dStack_820 = *(double *)(local_1be8 + uVar41 + 8);
        dVar305 = 0.0 - *(double *)(local_1bd8 + uVar41);
        local_818 = *(double *)(local_1bd8 + uVar41);
        uStack_810 = *(undefined8 *)(local_1bd8 + uVar41 + 8);
        auVar151._8_4_ = uVar302;
        auVar151._0_8_ = dVar500;
        auVar151._12_4_ = uVar332;
        auVar352._0_8_ = auVar399._0_8_ * dVar305 + dVar500 * dVar432 + auVar151._8_8_ * dVar451;
        auVar152._8_4_ = uVar366;
        auVar152._0_8_ = dVar336;
        auVar152._12_4_ = uVar365;
        auVar352._8_8_ = auVar352._0_8_;
        auVar378._0_8_ = auVar513._0_8_ * dVar305 + dVar336 * dVar432 + auVar152._8_8_ * dVar451;
        auVar153._8_4_ = SUB84(auVar352._0_8_,0);
        auVar153._0_8_ = auVar352._0_8_;
        uVar334 = (undefined4)((ulonglong)auVar352._0_8_ >> 0x20);
        auVar153._12_4_ = uVar334;
        auVar378._8_8_ = auVar378._0_8_;
        auVar243._8_4_ = SUB84(auVar378._0_8_,0);
        auVar243._0_8_ = auVar378._0_8_;
        uVar389 = (undefined4)((ulonglong)auVar378._0_8_ >> 0x20);
        auVar243._12_4_ = uVar389;
        auVar244._0_8_ = -(ulonglong)(auVar378._0_8_ <= 0.0 && auVar352._0_8_ <= 0.0);
        lVar50 = -(ulonglong)(auVar243._8_8_ <= 0.0 && auVar153._8_8_ <= 0.0);
        auVar244._8_4_ = (undefined4)lVar50;
        auVar244._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
        uVar43 = movmskpd(0,auVar244);
        iVar36 = movmskpd(iVar36,auVar244);
        if ((uVar43 & 0x3fffffff) == 0 && iVar36 == 0) {
          dVar432 = 0.0 - *(double *)((longlong)&local_1bc8 + uVar41);
          dVar451 = 0.0 - *(double *)((longlong)&uStack_1bc0 + uVar41);
          local_808 = *(double *)((longlong)&local_1bc8 + uVar41);
          dStack_800 = *(double *)((longlong)&uStack_1bc0 + uVar41);
          dVar305 = 0.0 - *(double *)((longlong)&local_1bb8 + uVar41);
          local_7f8 = *(double *)((longlong)&local_1bb8 + uVar41);
          uStack_7f0 = *(undefined8 *)((longlong)&uStack_1bb0 + uVar41);
          auVar154._8_4_ = uVar302;
          auVar154._0_8_ = dVar500;
          auVar154._12_4_ = uVar332;
          dVar199 = auVar399._0_8_ * dVar305 + dVar500 * dVar432 + auVar154._8_8_ * dVar451;
          auVar155._8_4_ = uVar366;
          auVar155._0_8_ = dVar336;
          auVar155._12_4_ = uVar365;
          dVar432 = auVar513._0_8_ * dVar305 + dVar336 * dVar432 + auVar155._8_8_ * dVar451;
          auVar156._8_4_ = SUB84(dVar432,0);
          auVar156._0_8_ = dVar432;
          uVar302 = (undefined4)((ulonglong)dVar432 >> 0x20);
          auVar156._12_4_ = uVar302;
          auVar245._0_8_ = -(ulonglong)(0.0 <= dVar199 && dVar432 <= dVar199);
          lVar50 = -(ulonglong)(0.0 <= dVar199 && auVar156._8_8_ <= dVar199);
          auVar245._8_4_ = (undefined4)lVar50;
          auVar245._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
          uVar43 = movmskpd(0,auVar245);
          iVar36 = movmskpd(iVar36,auVar245);
          if ((uVar43 & 0x3fffffff) == 0 && iVar36 == 0) {
            auVar476._8_4_ = SUB84(dVar432,0);
            auVar476._0_8_ = dVar432;
            auVar476._12_4_ = uVar302;
            auVar157._8_4_ = SUB84(dVar199,0);
            auVar157._0_8_ = dVar199;
            uVar302 = (undefined4)((ulonglong)dVar199 >> 0x20);
            auVar157._12_4_ = uVar302;
            auVar318._8_4_ = SUB84(auVar352._0_8_,0);
            auVar318._0_8_ = auVar352._0_8_;
            auVar318._12_4_ = uVar334;
            dVar451 = dVar432 * auVar352._0_8_ - dVar199 * auVar378._0_8_;
            dVar305 = auVar476._8_8_ * auVar352._0_8_ - auVar157._8_8_ * auVar378._0_8_;
            auVar158._8_4_ = SUB84(dVar305,0);
            auVar158._0_8_ = dVar451;
            auVar158._12_4_ = (int)((ulonglong)dVar305 >> 0x20);
            auVar159._8_4_ = SUB84(dVar199,0);
            auVar159._0_8_ = dVar199;
            auVar159._12_4_ = uVar302;
            auVar319._0_8_ = auVar352._0_8_ - dVar199;
            auVar319._8_8_ = auVar318._8_8_ - dVar199;
            auVar288._0_8_ =
                 -(ulonglong)
                  ((0.0 <= auVar352._0_8_ && dVar451 <= 0.0) &&
                  (0.0 < auVar319._0_8_ && dVar199 <= 0.0));
            lVar50 = -(ulonglong)
                      ((0.0 <= auVar352._0_8_ && auVar158._8_8_ <= 0.0) &&
                      (0.0 < auVar319._8_8_ && auVar159._8_8_ <= 0.0));
            auVar288._8_4_ = (undefined4)lVar50;
            auVar288._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
            uVar43 = movmskpd(0,auVar288);
            iVar36 = movmskpd(iVar36,auVar288);
            if ((uVar43 & 0x3fffffff) == 0 && iVar36 == 0) {
              dStack_7c0 = *(double *)((longlong)local_1ba8 + uVar41 + 8);
              local_7b8 = *(double *)((longlong)local_1ba8 + uVar41 + 0x10);
              dVar492 = 0.0 - *(double *)((longlong)local_1ba8 + uVar41);
              dVar465 = 0.0 - dStack_7c0;
              dVar480 = 0.0 - local_7b8;
              local_7c8 = *(double *)((longlong)local_1ba8 + uVar41);
              auVar160._8_4_ = uVar366;
              auVar160._0_8_ = dVar336;
              auVar160._12_4_ = uVar365;
              uStack_7b0 = *(undefined8 *)((longlong)local_1ba8 + uVar41 + 0x18);
              dVar500 = auVar399._0_8_ * dVar480 + dVar500 * dVar492 + dVar508 * dVar465;
              dVar492 = auVar513._0_8_ * dVar480 + dVar336 * dVar492 + auVar160._8_8_ * dVar465;
              uVar302 = SUB84(dVar500,0);
              auVar161._8_4_ = uVar302;
              auVar161._0_8_ = dVar500;
              uVar332 = (undefined4)((ulonglong)dVar500 >> 0x20);
              auVar161._12_4_ = uVar332;
              auVar246._0_8_ = -(ulonglong)(0.0 <= dVar492 && dVar500 <= dVar492);
              lVar50 = -(ulonglong)(0.0 <= dVar492 && auVar161._8_8_ <= dVar492);
              auVar246._8_4_ = (undefined4)lVar50;
              auVar246._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
              uVar43 = movmskpd(0,auVar246);
              iVar36 = movmskpd(iVar36,auVar246);
              if ((uVar43 & 0x3fffffff) != 0 || iVar36 != 0) {
                *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4) = 1;
                local_1e0b = 0;
                *(ulonglong *)((longlong)&uStack_1138 + uVar52) =
                     CONCAT44(_UNK_150689514,___xmm_00000000000000003ff0000000000000);
                *(ulonglong *)((longlong)&uStack_1130 + uVar52) =
                     CONCAT44(_UNK_15068951c,_UNK_150689518);
                *(undefined8 *)((longlong)&uStack_1128 + uVar52) = 0;
                *(undefined8 *)((longlong)&uStack_1120 + uVar52) = 0;
                uVar5 = *(undefined8 *)((longlong)local_1ba8 + uVar41 + 8);
                *(undefined8 *)(local_1be8 + uVar41) =
                     *(undefined8 *)((longlong)local_1ba8 + uVar41);
                *(undefined8 *)(local_1be8 + uVar41 + 8) = uVar5;
                uVar5 = *(undefined8 *)((longlong)local_1ba8 + uVar41 + 0x18);
                *(undefined8 *)(local_1bd8 + uVar41) =
                     *(undefined8 *)((longlong)local_1ba8 + uVar41 + 0x10);
                *(undefined8 *)(local_1bd8 + uVar41 + 8) = uVar5;
                uVar5 = *(undefined8 *)((longlong)local_1708 + uVar41 + 0x18);
                *(undefined8 *)((longlong)&local_1738 + uVar41) =
                     *(undefined8 *)((longlong)local_1708 + uVar41 + 0x10);
                *(undefined8 *)((longlong)&uStack_1730 + uVar41) = uVar5;
                uVar5 = *(undefined8 *)((longlong)local_1708 + uVar41 + 0x28);
                *(undefined8 *)((longlong)&local_1728 + uVar41) =
                     *(undefined8 *)((longlong)local_1708 + uVar41 + 0x20);
                *(undefined8 *)((longlong)&uStack_1720 + uVar41) = uVar5;
                uVar5 = *(undefined8 *)((longlong)local_13f8 + uVar41 + 8);
                *(undefined8 *)((longlong)&local_1438 + uVar41) =
                     *(undefined8 *)((longlong)local_13f8 + uVar41);
                *(undefined8 *)((longlong)&uStack_1430 + uVar41) = uVar5;
                uVar5 = *(undefined8 *)((longlong)local_13f8 + uVar41 + 0x18);
                *(undefined8 *)((longlong)&local_1428 + uVar41) =
                     *(undefined8 *)((longlong)local_13f8 + uVar41 + 0x10);
                *(undefined8 *)(local_1418 + (uVar41 - 8)) = uVar5;
                dVar58 = *(double *)((longlong)local_1ba8 + uVar41);
                dVar432 = *(double *)((longlong)local_1ba8 + uVar41 + 8);
                stack0xffffffffffffe290 = dVar432;
                local_1d78._0_8_ = dVar58;
                dVar451 = *(double *)((longlong)local_1ba8 + uVar41 + 0x10);
                dVar305 = *(double *)((longlong)local_1ba8 + uVar41 + 0x18);
                goto LAB_143e97966;
              }
              auVar320._8_4_ = uVar302;
              auVar320._0_8_ = dVar500;
              auVar320._12_4_ = uVar332;
              uVar431 = SUB84(dVar492,0);
              auVar162._8_4_ = uVar431;
              auVar162._0_8_ = dVar492;
              uVar434 = (undefined4)((ulonglong)dVar492 >> 0x20);
              auVar162._12_4_ = uVar434;
              auVar353._8_4_ = SUB84(auVar378._0_8_,0);
              auVar353._0_8_ = auVar378._0_8_;
              auVar353._12_4_ = uVar389;
              dVar465 = dVar500 * auVar378._0_8_ - dVar492 * auVar352._0_8_;
              dVar480 = auVar320._8_8_ * auVar378._0_8_ - auVar162._8_8_ * auVar352._0_8_;
              auVar163._8_4_ = SUB84(dVar480,0);
              auVar163._0_8_ = dVar465;
              uVar334 = (undefined4)((ulonglong)dVar480 >> 0x20);
              auVar163._12_4_ = uVar334;
              auVar164._8_4_ = uVar431;
              auVar164._0_8_ = dVar492;
              auVar164._12_4_ = uVar434;
              auVar354._0_8_ = auVar378._0_8_ - dVar492;
              auVar354._8_8_ = auVar353._8_8_ - dVar492;
              auVar289._0_8_ =
                   -(ulonglong)
                    ((0.0 <= auVar378._0_8_ && dVar465 <= 0.0) &&
                    (0.0 < auVar354._0_8_ && dVar492 <= 0.0));
              lVar50 = -(ulonglong)
                        ((0.0 <= auVar378._0_8_ && auVar163._8_8_ <= 0.0) &&
                        (0.0 < auVar354._8_8_ && auVar164._8_8_ <= 0.0));
              auVar289._8_4_ = (undefined4)lVar50;
              auVar289._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
              uVar43 = movmskpd(0,auVar289);
              iVar36 = movmskpd(iVar36,auVar289);
              if ((uVar43 & 0x3fffffff) == 0 && iVar36 == 0) {
                auVar165._8_4_ = uVar302;
                auVar165._0_8_ = dVar500;
                auVar165._12_4_ = uVar332;
                auVar355._8_4_ = uVar431;
                auVar355._0_8_ = dVar492;
                auVar355._12_4_ = uVar434;
                dVar508 = dVar500 - dVar492;
                dVar336 = dVar500 - dVar492;
                auVar444._0_8_ = dVar432 - dVar199;
                auVar444._8_8_ = dVar432 - dVar199;
                auVar379._8_4_ = SUB84(dVar336,0);
                auVar379._0_8_ = dVar508;
                auVar379._12_4_ = (int)((ulonglong)dVar336 >> 0x20);
                dVar492 = dVar492 * dVar199 - dVar500 * dVar432;
                dVar432 = auVar355._8_8_ * dVar199 - auVar165._8_8_ * dVar432;
                auVar166._8_4_ = SUB84(dVar432,0);
                auVar166._0_8_ = dVar492;
                auVar166._12_4_ = (int)((ulonglong)dVar432 >> 0x20);
                auVar380._0_8_ = dVar508 + auVar444._0_8_;
                auVar380._8_8_ = auVar379._8_8_ + auVar444._8_8_;
                auVar290._0_8_ =
                     -(ulonglong)
                      ((0.0 <= auVar444._0_8_ && dVar492 <= 0.0) &&
                      (0.0 <= dVar508 && 0.0 < auVar380._0_8_));
                lVar50 = -(ulonglong)
                          ((0.0 <= dVar336 && 0.0 < auVar380._8_8_) &&
                          (0.0 <= auVar444._8_8_ && auVar166._8_8_ <= 0.0));
                auVar290._8_4_ = (undefined4)lVar50;
                auVar290._12_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
                uVar43 = movmskpd(0,auVar290);
                iVar36 = movmskpd(iVar36,auVar290);
                if ((uVar43 & 0x3fffffff) == 0 && iVar36 == 0) {
                  auVar247._0_8_ = (double)fVar56;
                  auVar247._8_8_ = (double)fVar200;
                  *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4) = 3;
                  local_1e08 = 0;
                  auVar167._8_4_ = SUB84(dVar480,0);
                  auVar167._0_8_ = dVar465;
                  auVar167._12_4_ = uVar334;
                  auVar291._8_4_ = uVar333;
                  auVar291._0_8_ = dVar58;
                  auVar291._12_4_ = uVar364;
                  auVar466 = divpd(auVar291,auVar497);
                  auVar168._0_8_ = dVar465 + dVar451 + dVar492;
                  auVar168._8_8_ = auVar167._8_8_ + dVar305 + dVar432;
                  auVar423._8_4_ = uVar333;
                  auVar423._0_8_ = dVar58;
                  auVar423._12_4_ = uVar364;
                  auVar202 = divpd(auVar247,auVar168);
                  dVar465 = dVar465 * auVar202._0_8_;
                  dVar451 = dVar451 * auVar202._0_8_;
                  *(double *)((longlong)&uStack_1138 + uVar52) =
                       (___xmm_3ff00000000000003ff0000000000000 - dVar465) - dVar451;
                  *(double *)((longlong)&uStack_1130 + uVar52) = dVar465;
                  *(double *)((longlong)&uStack_1128 + uVar52) = dVar451;
                  *(double *)((longlong)&uStack_1120 + uVar52) = dVar480 * auVar202._8_8_;
                  local_728 = *(double *)(local_1be8 + uVar41);
                  dStack_720 = *(double *)(local_1be8 + uVar41 + 8);
                  auVar202 = divpd(local_1d38,auVar497);
                  local_718 = *(double *)(local_1bd8 + uVar41);
                  uStack_710 = *(undefined8 *)(local_1bd8 + uVar41 + 8);
                  dVar305 = auVar202._0_8_ * *(double *)(local_1bd8 + uVar41) +
                            auVar466._0_8_ * *(double *)(local_1be8 + uVar41) +
                            auVar466._8_8_ * *(double *)(local_1be8 + uVar41 + 8);
                  dVar58 = dVar58 * dVar305;
                  dVar432 = auVar423._8_8_ * dVar305;
                  dVar451 = local_1d38._0_8_ * dVar305;
                  dVar305 = local_1d38._8_8_ * dVar305;
                }
                else {
                  *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4) = 2;
                  auVar202 = divpd(auVar444,auVar380);
                  local_1e09 = 0;
                  dVar465 = auVar202._0_8_;
                  dVar480 = auVar202._8_8_;
                  *(double *)((longlong)&uStack_1138 + uVar52) =
                       ___xmm_3ff00000000000003ff0000000000000 - dVar465;
                  *(double *)((longlong)&uStack_1130 + uVar52) = dVar465;
                  *(double *)((longlong)&uStack_1128 + uVar52) = _UNK_150689688 - dVar480;
                  *(double *)((longlong)&uStack_1120 + uVar52) = dVar480;
                  dVar58 = *(double *)((longlong)&local_1bc8 + uVar41);
                  dVar432 = *(double *)((longlong)&uStack_1bc0 + uVar41);
                  auVar202 = *(undefined1 (*) [16])((longlong)&local_1bb8 + uVar41);
                  dVar451 = *(double *)((longlong)local_1ba8 + uVar41);
                  dVar305 = *(double *)((longlong)local_1ba8 + uVar41 + 8);
                  dVar199 = *(double *)((longlong)local_1ba8 + uVar41 + 0x10);
                  dVar492 = *(double *)((longlong)local_1ba8 + uVar41 + 0x18);
                  *(double *)(local_1be8 + uVar41) = dVar58;
                  *(double *)(local_1be8 + uVar41 + 8) = dVar432;
                  *(undefined8 *)(local_1bd8 + uVar41) =
                       *(undefined8 *)((longlong)&local_1bb8 + uVar41);
                  *(undefined8 *)(local_1bd8 + uVar41 + 8) =
                       *(undefined8 *)((longlong)&uStack_1bb0 + uVar41);
                  uVar5 = *(undefined8 *)((longlong)local_1ba8 + uVar41 + 8);
                  *(undefined8 *)((longlong)&local_1bc8 + uVar41) =
                       *(undefined8 *)((longlong)local_1ba8 + uVar41);
                  *(undefined8 *)((longlong)&uStack_1bc0 + uVar41) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)local_1ba8 + uVar41 + 0x18);
                  *(undefined8 *)((longlong)&local_1bb8 + uVar41) =
                       *(undefined8 *)((longlong)local_1ba8 + uVar41 + 0x10);
                  *(undefined8 *)((longlong)&uStack_1bb0 + uVar41) = uVar5;
                  *(undefined8 *)((longlong)&local_1738 + uVar41) =
                       *(undefined8 *)((longlong)&local_1718 + uVar41);
                  *(undefined8 *)((longlong)&uStack_1730 + uVar41) =
                       *(undefined8 *)((longlong)&uStack_1710 + uVar41);
                  uVar5 = *(undefined8 *)((longlong)local_1708 + uVar41 + 8);
                  *(undefined8 *)((longlong)&local_1728 + uVar41) =
                       *(undefined8 *)((longlong)local_1708 + uVar41);
                  *(undefined8 *)((longlong)&uStack_1720 + uVar41) = uVar5;
                  uVar5 = *(undefined8 *)(local_1418 + uVar41 + 8);
                  *(undefined8 *)((longlong)&local_1438 + uVar41) =
                       *(undefined8 *)(local_1418 + uVar41);
                  *(undefined8 *)((longlong)&uStack_1430 + uVar41) = uVar5;
                  uVar5 = *(undefined8 *)(local_1408 + uVar41 + 8);
                  *(undefined8 *)((longlong)&local_1428 + uVar41) =
                       *(undefined8 *)(local_1408 + uVar41);
                  *(undefined8 *)(local_1418 + (uVar41 - 8)) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)local_1708 + uVar41 + 0x18);
                  *(undefined8 *)((longlong)&local_1718 + uVar41) =
                       *(undefined8 *)((longlong)local_1708 + uVar41 + 0x10);
                  *(undefined8 *)((longlong)&uStack_1710 + uVar41) = uVar5;
                  *(undefined8 *)((longlong)local_1708 + uVar41) =
                       *(undefined8 *)((longlong)local_1708 + uVar41 + 0x20);
                  *(undefined8 *)((longlong)local_1708 + uVar41 + 8) =
                       *(undefined8 *)((longlong)local_1708 + uVar41 + 0x28);
                  uVar5 = *(undefined8 *)((longlong)local_13f8 + uVar41 + 8);
                  local_768 = dVar451;
                  dStack_760 = dVar305;
                  local_758 = dVar199;
                  dStack_750 = dVar492;
                  *(undefined8 *)(local_1418 + uVar41) =
                       *(undefined8 *)((longlong)local_13f8 + uVar41);
                  *(undefined8 *)(local_1418 + uVar41 + 8) = uVar5;
                  uVar5 = *(undefined8 *)((longlong)local_13f8 + uVar41 + 0x18);
                  *(undefined8 *)(local_1408 + uVar41) =
                       *(undefined8 *)((longlong)local_13f8 + uVar41 + 0x10);
                  *(undefined8 *)(local_1408 + uVar41 + 8) = uVar5;
                  local_788 = dVar58;
                  dStack_780 = dVar432;
                  local_778 = auVar202;
                  local_748 = dVar58;
                  dStack_740 = dVar432;
                  local_738 = auVar202;
                  dVar58 = (dVar451 - dVar58) * dVar465 + dVar58;
                  dVar432 = (dVar305 - dVar432) * dVar480 + dVar432;
                  dVar451 = (dVar199 - auVar202._0_8_) * dVar465 + auVar202._0_8_;
                  dVar305 = (dVar492 - auVar202._8_8_) * dVar480 + auVar202._8_8_;
                }
              }
              else {
                *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4) = 2;
                auVar422._8_4_ = uVar366;
                auVar422._0_8_ = dVar336;
                auVar422._12_4_ = uVar365;
                auVar202 = divpd(auVar378,auVar354);
                local_1e0a = 0;
                auVar401._8_4_ = SUB84(auVar513._8_8_,0);
                auVar401._0_8_ = auVar513._0_8_;
                auVar401._12_4_ = (int)((ulonglong)auVar513._8_8_ >> 0x20);
                dVar451 = auVar202._0_8_;
                dVar305 = auVar202._8_8_;
                *(double *)((longlong)&uStack_1138 + uVar52) =
                     ___xmm_3ff00000000000003ff0000000000000 - dVar451;
                *(double *)((longlong)&uStack_1130 + uVar52) = dVar451;
                *(double *)((longlong)&uStack_1128 + uVar52) = _UNK_150689688 - dVar305;
                *(double *)((longlong)&uStack_1120 + uVar52) = dVar305;
                uVar5 = *(undefined8 *)((longlong)local_1ba8 + uVar41 + 8);
                *(undefined8 *)((longlong)&local_1bc8 + uVar41) =
                     *(undefined8 *)((longlong)local_1ba8 + uVar41);
                *(undefined8 *)((longlong)&uStack_1bc0 + uVar41) = uVar5;
                uVar5 = *(undefined8 *)((longlong)local_1ba8 + uVar41 + 0x18);
                *(undefined8 *)((longlong)&local_1bb8 + uVar41) =
                     *(undefined8 *)((longlong)local_1ba8 + uVar41 + 0x10);
                *(undefined8 *)((longlong)&uStack_1bb0 + uVar41) = uVar5;
                uVar5 = *(undefined8 *)((longlong)local_1708 + uVar41 + 0x18);
                *(undefined8 *)((longlong)&local_1718 + uVar41) =
                     *(undefined8 *)((longlong)local_1708 + uVar41 + 0x10);
                *(undefined8 *)((longlong)&uStack_1710 + uVar41) = uVar5;
                *(undefined8 *)((longlong)local_1708 + uVar41) =
                     *(undefined8 *)((longlong)local_1708 + uVar41 + 0x20);
                *(undefined8 *)((longlong)local_1708 + uVar41 + 8) =
                     *(undefined8 *)((longlong)local_1708 + uVar41 + 0x28);
                uVar5 = *(undefined8 *)((longlong)local_13f8 + uVar41 + 8);
                *(undefined8 *)(local_1418 + uVar41) =
                     *(undefined8 *)((longlong)local_13f8 + uVar41);
                *(undefined8 *)(local_1418 + uVar41 + 8) = uVar5;
                uVar5 = *(undefined8 *)((longlong)local_13f8 + uVar41 + 0x18);
                *(undefined8 *)(local_1408 + uVar41) =
                     *(undefined8 *)((longlong)local_13f8 + uVar41 + 0x10);
                *(undefined8 *)(local_1408 + uVar41 + 8) = uVar5;
                local_7a8 = *(double *)(local_1be8 + uVar41);
                dStack_7a0 = *(double *)(local_1be8 + uVar41 + 8);
                local_798 = *(double *)(local_1bd8 + uVar41);
                dStack_790 = *(double *)(local_1bd8 + uVar41 + 8);
                dVar58 = dVar336 * dVar451 + *(double *)(local_1be8 + uVar41);
                dVar432 = auVar422._8_8_ * dVar305 + *(double *)(local_1be8 + uVar41 + 8);
                dVar451 = auVar513._0_8_ * dVar451 + *(double *)(local_1bd8 + uVar41);
                dVar305 = auVar401._8_8_ * dVar305 + *(double *)(local_1bd8 + uVar41 + 8);
              }
            }
            else {
              auVar202 = divpd(auVar352,auVar319);
              *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4) = 2;
              local_1e0c = 0;
              dVar451 = auVar202._0_8_;
              dVar305 = auVar202._8_8_;
              *(double *)((longlong)&uStack_1138 + uVar52) =
                   ___xmm_3ff00000000000003ff0000000000000 - dVar451;
              *(double *)((longlong)&uStack_1130 + uVar52) = dVar451;
              *(double *)((longlong)&uStack_1128 + uVar52) = _UNK_150689688 - dVar305;
              *(double *)((longlong)&uStack_1120 + uVar52) = dVar305;
              local_7e8 = *(double *)(local_1be8 + uVar41);
              dStack_7e0 = *(double *)(local_1be8 + uVar41 + 8);
              local_7d8 = *(double *)(local_1bd8 + uVar41);
              dStack_7d0 = *(double *)(local_1bd8 + uVar41 + 8);
              dVar58 = dVar500 * dVar451 + *(double *)(local_1be8 + uVar41);
              dVar432 = dVar508 * dVar305 + *(double *)(local_1be8 + uVar41 + 8);
              dVar451 = auVar399._0_8_ * dVar451 + *(double *)(local_1bd8 + uVar41);
              dVar305 = auVar399._8_8_ * dVar305 + *(double *)(local_1bd8 + uVar41 + 8);
            }
            stack0xffffffffffffe290 = dVar432;
            local_1d78._0_8_ = dVar58;
          }
          else {
            *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4) = 1;
            local_1e0d = 0;
            *(ulonglong *)((longlong)&uStack_1138 + uVar52) =
                 CONCAT44(_UNK_150689514,___xmm_00000000000000003ff0000000000000);
            *(ulonglong *)((longlong)&uStack_1130 + uVar52) =
                 CONCAT44(_UNK_15068951c,_UNK_150689518);
            *(undefined8 *)((longlong)&uStack_1128 + uVar52) = 0;
            *(undefined8 *)((longlong)&uStack_1120 + uVar52) = 0;
            *(undefined8 *)(local_1be8 + uVar41) = *(undefined8 *)((longlong)&local_1bc8 + uVar41);
            *(undefined8 *)(local_1be8 + uVar41 + 8) =
                 *(undefined8 *)((longlong)&uStack_1bc0 + uVar41);
            *(undefined8 *)(local_1bd8 + uVar41) = *(undefined8 *)((longlong)&local_1bb8 + uVar41);
            *(undefined8 *)(local_1bd8 + uVar41 + 8) =
                 *(undefined8 *)((longlong)&uStack_1bb0 + uVar41);
            *(undefined8 *)((longlong)&local_1738 + uVar41) =
                 *(undefined8 *)((longlong)&local_1718 + uVar41);
            *(undefined8 *)((longlong)&uStack_1730 + uVar41) =
                 *(undefined8 *)((longlong)&uStack_1710 + uVar41);
            uVar5 = *(undefined8 *)((longlong)local_1708 + uVar41 + 8);
            *(undefined8 *)((longlong)&local_1728 + uVar41) =
                 *(undefined8 *)((longlong)local_1708 + uVar41);
            *(undefined8 *)((longlong)&uStack_1720 + uVar41) = uVar5;
            uVar5 = *(undefined8 *)(local_1418 + uVar41 + 8);
            *(undefined8 *)((longlong)&local_1438 + uVar41) = *(undefined8 *)(local_1418 + uVar41);
            *(undefined8 *)((longlong)&uStack_1430 + uVar41) = uVar5;
            uVar5 = *(undefined8 *)(local_1408 + uVar41 + 8);
            *(undefined8 *)((longlong)&local_1428 + uVar41) = *(undefined8 *)(local_1408 + uVar41);
            *(undefined8 *)(local_1418 + (uVar41 - 8)) = uVar5;
            dVar58 = *(double *)((longlong)&local_1bc8 + uVar41);
            dVar432 = *(double *)((longlong)&uStack_1bc0 + uVar41);
            stack0xffffffffffffe290 = dVar432;
            local_1d78._0_8_ = dVar58;
            dVar451 = *(double *)((longlong)&local_1bb8 + uVar41);
            dVar305 = *(double *)((longlong)&uStack_1bb0 + uVar41);
          }
        }
        else {
          *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4) = 1;
          local_1e0e = 0;
          *(ulonglong *)((longlong)&uStack_1138 + uVar52) =
               CONCAT44(_UNK_150689514,___xmm_00000000000000003ff0000000000000);
          *(ulonglong *)((longlong)&uStack_1130 + uVar52) = CONCAT44(_UNK_15068951c,_UNK_150689518);
          *(undefined8 *)((longlong)&uStack_1128 + uVar52) = 0;
          *(undefined8 *)((longlong)&uStack_1120 + uVar52) = 0;
          dVar58 = *(double *)(local_1be8 + uVar41);
          dVar432 = *(double *)(local_1be8 + uVar41 + 8);
          stack0xffffffffffffe290 = dVar432;
          local_1d78._0_8_ = dVar58;
          dVar451 = *(double *)(local_1bd8 + uVar41);
          dVar305 = *(double *)(local_1bd8 + uVar41 + 8);
        }
LAB_143e97966:
        uVar302 = 0;
        local_1d68._8_8_ = dVar305;
        local_1d68._0_8_ = dVar451;
      }
      else {
        *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4) = 2;
        local_da8 = *(double *)(local_1bd8 + uVar41);
        dVar432 = *(double *)(local_1bd8 + uVar41 + 8);
        local_8e8 = *(double *)(local_1be8 + uVar41);
        dStack_8e0 = *(double *)(local_1be8 + uVar41 + 8);
        dVar451 = *(double *)((longlong)&uStack_1bb0 + uVar41);
        uVar43 = *(uint *)((longlong)&local_1bc8 + uVar41 + 4);
        uVar46 = *(uint *)((longlong)&uStack_1bc0 + uVar41);
        uVar264 = *(uint *)((longlong)&uStack_1bc0 + uVar41 + 4);
        local_1e11 = 0;
        local_8a8 = local_8e8;
        dStack_8a0 = dStack_8e0;
        uStack_da0 = dVar432;
        local_8d8 = local_da8;
        dStack_8d0 = dVar432;
        local_898 = local_da8;
        dStack_890 = dVar432;
        local_dd8 = *(uint *)((longlong)&local_1bc8 + uVar41);
        uStack_dd4 = uVar43;
        uStack_dd0 = uVar46;
        uStack_dcc = uVar264;
        local_8c8 = *(double *)((longlong)&local_1bc8 + uVar41);
        dStack_8c0 = *(double *)((longlong)&uStack_1bc0 + uVar41);
        dVar199 = *(double *)((longlong)&local_1bc8 + uVar41) - local_8e8;
        dVar58 = *(double *)((longlong)&uStack_1bc0 + uVar41) - dStack_8e0;
        local_8b8 = *(double *)((longlong)&local_1bb8 + uVar41);
        dStack_8b0 = dVar451;
        dVar305 = *(double *)((longlong)&local_1bb8 + uVar41) - local_da8;
        auVar147._8_4_ = SUB84(dVar58,0);
        auVar147._0_8_ = dVar199;
        auVar147._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
        auVar400._0_8_ =
             (0.0 - local_da8) * dVar305 + (0.0 - local_8e8) * dVar199 + (0.0 - dStack_8e0) * dVar58
        ;
        local_db8 = *(uint *)(local_1be8 + uVar41);
        uStack_db4 = *(uint *)(local_1be8 + uVar41 + 4);
        uStack_db0 = *(uint *)(local_1be8 + uVar41 + 8);
        uStack_dac = *(uint *)(local_1be8 + uVar41 + 0xc);
        auVar400._8_8_ = auVar400._0_8_;
        auVar420._8_4_ = SUB84(auVar400._0_8_,0);
        auVar420._0_8_ = auVar400._0_8_;
        auVar420._12_4_ = (int)((ulonglong)auVar400._0_8_ >> 0x20);
        auVar350._0_8_ = dVar305 * dVar305 + dVar199 * dVar199 + auVar147._8_8_ * dVar58;
        lVar50 = -(ulonglong)(auVar400._0_8_ <= 0.0);
        lVar51 = -(ulonglong)(auVar420._8_8_ <= 0.0);
        auVar421._8_8_ = lVar51;
        auVar421._0_8_ = lVar50;
        auVar350._8_8_ = auVar350._0_8_;
        uVar302 = SUB84(auVar350._0_8_,0);
        auVar458._8_4_ = uVar302;
        auVar458._0_8_ = auVar350._0_8_;
        uVar332 = (undefined4)((ulonglong)auVar350._0_8_ >> 0x20);
        auVar458._12_4_ = uVar332;
        auVar148._8_4_ = uVar302;
        auVar148._0_8_ = auVar350._0_8_;
        auVar148._12_4_ = uVar332;
        auVar149._8_8_ = -(ulonglong)(auVar148._8_8_ <= auVar400._0_8_);
        auVar149._0_8_ = -(ulonglong)(auVar350._0_8_ <= auVar400._0_8_);
        auVar459._8_8_ = -(ulonglong)(auVar458._8_8_ <= _UNK_150b28838);
        auVar459._0_8_ = -(ulonglong)(auVar350._0_8_ <= ___xmm_38100000000000003810000000000000);
        auVar459 = auVar459 | auVar149;
        auVar474._8_4_ = uVar302;
        auVar474._0_8_ = auVar350._0_8_;
        auVar474._12_4_ = uVar332;
        auVar475._8_8_ = -(ulonglong)(auVar474._8_8_ <= _UNK_150b28838);
        auVar475._0_8_ = -(ulonglong)(auVar350._0_8_ <= ___xmm_38100000000000003810000000000000);
        auVar475 = auVar475 | auVar149;
        uVar301 = auVar459._0_4_;
        uVar408 = auVar459._4_4_;
        uVar409 = auVar459._8_4_;
        uVar411 = auVar459._12_4_;
        local_dc8 = *(undefined8 *)((longlong)&local_1bb8 + uVar41);
        uStack_dc0 = *(undefined8 *)((longlong)&uStack_1bb0 + uVar41);
        *(uint *)(local_1be8 + uVar41) =
             ~uVar301 & *(uint *)(local_1be8 + uVar41) |
             *(uint *)((longlong)&local_1bc8 + uVar41) & uVar301;
        *(uint *)(local_1be8 + uVar41 + 4) =
             ~uVar408 & *(uint *)(local_1be8 + uVar41 + 4) | uVar43 & uVar408;
        *(uint *)(local_1be8 + uVar41 + 8) =
             ~uVar409 & *(uint *)(local_1be8 + uVar41 + 8) | uVar46 & uVar409;
        *(uint *)(local_1be8 + uVar41 + 0xc) =
             ~uVar411 & *(uint *)(local_1be8 + uVar41 + 0xc) | uVar264 & uVar411;
        uVar412 = auVar475._0_4_;
        uVar429 = auVar475._4_4_;
        uVar430 = auVar475._8_4_;
        uVar433 = auVar475._12_4_;
        uVar265 = ~uVar429 & local_da8._4_4_;
        uVar266 = ~uVar430 & (uint)uStack_da0;
        uVar303 = ~uVar433 & uStack_da0._4_4_;
        uVar43 = local_dc8._4_4_ & uVar429;
        uVar46 = (uint)uStack_dc0 & uVar430;
        uVar264 = uStack_dc0._4_4_ & uVar433;
        *(uint *)(local_1bd8 + uVar41) = ~uVar412 & (uint)local_da8 | (uint)local_dc8 & uVar412;
        *(uint *)(local_1bd8 + uVar41 + 4) = uVar265 | uVar43;
        *(uint *)(local_1bd8 + uVar41 + 8) = uVar266 | uVar46;
        *(uint *)(local_1bd8 + uVar41 + 0xc) = uVar303 | uVar264;
        uVar43 = *(uint *)((longlong)&local_1738 + uVar41 + 4);
        uVar46 = *(uint *)((longlong)&uStack_1730 + uVar41);
        uVar264 = *(uint *)((longlong)&uStack_1730 + uVar41 + 4);
        uVar265 = *(uint *)((longlong)&local_1718 + uVar41 + 4);
        uVar266 = *(uint *)((longlong)&uStack_1710 + uVar41);
        uVar303 = *(uint *)((longlong)&uStack_1710 + uVar41 + 4);
        local_c28 = *(undefined8 *)((longlong)&local_1728 + uVar41);
        uStack_c20 = *(undefined8 *)((longlong)&uStack_1720 + uVar41);
        local_c38 = *(uint *)((longlong)&local_1738 + uVar41);
        uStack_c34 = uVar43;
        uStack_c30 = uVar46;
        uStack_c2c = uVar264;
        local_d68 = *(undefined8 *)((longlong)local_1708 + uVar41);
        uStack_d60 = *(undefined8 *)((longlong)local_1708 + uVar41 + 8);
        local_d78 = *(uint *)((longlong)&local_1718 + uVar41);
        uStack_d74 = uVar265;
        uStack_d70 = uVar266;
        uStack_d6c = uVar303;
        *(uint *)((longlong)&local_1738 + uVar41) =
             ~uVar301 & *(uint *)((longlong)&local_1738 + uVar41) |
             *(uint *)((longlong)&local_1718 + uVar41) & uVar301;
        *(uint *)((longlong)&local_1738 + uVar41 + 4) = ~uVar408 & uVar43 | uVar265 & uVar408;
        *(uint *)((longlong)&uStack_1730 + uVar41) = ~uVar409 & uVar46 | uVar266 & uVar409;
        *(uint *)((longlong)&uStack_1730 + uVar41 + 4) = ~uVar411 & uVar264 | uVar303 & uVar411;
        uVar265 = ~uVar429 & local_c28._4_4_;
        uVar266 = ~uVar430 & (uint)uStack_c20;
        uVar303 = ~uVar433 & uStack_c20._4_4_;
        uVar43 = local_d68._4_4_ & uVar429;
        uVar46 = (uint)uStack_d60 & uVar430;
        uVar264 = uStack_d60._4_4_ & uVar433;
        *(uint *)((longlong)&local_1728 + uVar41) =
             ~uVar412 & (uint)local_c28 | (uint)local_d68 & uVar412;
        *(uint *)((longlong)&local_1728 + uVar41 + 4) = uVar265 | uVar43;
        *(uint *)((longlong)&uStack_1720 + uVar41) = uVar266 | uVar46;
        *(uint *)((longlong)&uStack_1720 + uVar41 + 4) = uVar303 | uVar264;
        uVar43 = *(uint *)((longlong)&local_1438 + uVar41 + 4);
        uVar46 = *(uint *)((longlong)&uStack_1430 + uVar41);
        uVar264 = *(uint *)((longlong)&uStack_1430 + uVar41 + 4);
        uVar265 = *(uint *)(local_1418 + uVar41 + 4);
        uVar266 = *(uint *)(local_1418 + uVar41 + 8);
        uVar303 = *(uint *)(local_1418 + uVar41 + 0xc);
        local_d48 = *(undefined8 *)((longlong)&local_1428 + uVar41);
        uStack_d40 = *(undefined8 *)(local_1418 + (uVar41 - 8));
        auVar202 = divpd(auVar400,auVar350);
        local_d58 = *(uint *)((longlong)&local_1438 + uVar41);
        uStack_d54 = uVar43;
        uStack_d50 = uVar46;
        uStack_d4c = uVar264;
        local_ca8 = *(undefined8 *)(local_1408 + uVar41);
        uStack_ca0 = *(undefined8 *)(local_1408 + uVar41 + 8);
        local_cb8 = *(uint *)(local_1418 + uVar41);
        uStack_cb4 = uVar265;
        uStack_cb0 = uVar266;
        uStack_cac = uVar303;
        *(uint *)((longlong)&local_1438 + uVar41) =
             ~uVar301 & *(uint *)((longlong)&local_1438 + uVar41) |
             *(uint *)(local_1418 + uVar41) & uVar301;
        *(uint *)((longlong)&local_1438 + uVar41 + 4) = ~uVar408 & uVar43 | uVar265 & uVar408;
        *(uint *)((longlong)&uStack_1430 + uVar41) = ~uVar409 & uVar46 | uVar266 & uVar409;
        *(uint *)((longlong)&uStack_1430 + uVar41 + 4) = ~uVar411 & uVar264 | uVar303 & uVar411;
        uVar265 = ~uVar429 & local_d48._4_4_;
        uVar266 = ~uVar430 & (uint)uStack_d40;
        uVar303 = ~uVar433 & uStack_d40._4_4_;
        uVar43 = local_ca8._4_4_ & uVar429;
        uVar46 = (uint)uStack_ca0 & uVar430;
        uVar264 = uStack_ca0._4_4_ & uVar433;
        *(uint *)((longlong)&local_1428 + uVar41) =
             ~uVar412 & (uint)local_d48 | (uint)local_ca8 & uVar412;
        *(uint *)((longlong)&local_1428 + uVar41 + 4) = uVar265 | uVar43;
        *(uint *)(local_1418 + (uVar41 - 8)) = uVar266 | uVar46;
        *(uint *)(local_1418 + (uVar41 - 4)) = uVar303 | uVar264;
        auVar9._8_8_ = _UNK_150689688;
        auVar9._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
        local_878 = *(double *)(local_1bd8 + uVar41);
        dStack_870 = *(double *)(local_1bd8 + uVar41 + 8);
        auVar466 = maxpd(auVar202,ZEXT816(0));
        local_1e10 = 0;
        local_1e0f = 0;
        local_888 = *(double *)(local_1be8 + uVar41);
        dStack_880 = *(double *)(local_1be8 + uVar41 + 8);
        auVar202 = minpd(auVar466,auVar9);
        auVar466 = minpd(auVar466,auVar9);
        dVar492 = ___xmm_3ff00000000000003ff0000000000000 - auVar202._0_8_;
        dVar465 = _UNK_150689688 - auVar202._8_8_;
        local_1d68._0_8_ = auVar466._0_8_ * dVar305 + *(double *)(local_1bd8 + uVar41);
        local_1d68._8_8_ =
             auVar466._8_8_ * (dVar451 - dVar432) + *(double *)(local_1bd8 + uVar41 + 8);
        auVar443._0_8_ = dVar199 * auVar202._0_8_ + *(double *)(local_1be8 + uVar41);
        auVar443._8_8_ = dVar58 * auVar202._8_8_ + *(double *)(local_1be8 + uVar41 + 8);
        _local_1d78 = auVar443;
        uStack_864 = *(uint *)((longlong)&local_1bc8 + uVar41 + 4);
        uStack_85c = *(uint *)((longlong)&uStack_1bc0 + uVar41 + 4);
        uStack_854 = *(uint *)((longlong)&local_1bb8 + uVar41 + 4);
        uStack_84c = *(uint *)((longlong)&uStack_1bb0 + uVar41 + 4);
        uVar46 = (uint)lVar50;
        uVar264 = (uint)((ulonglong)lVar50 >> 0x20);
        uVar265 = (uint)lVar51;
        uVar266 = (uint)((ulonglong)lVar51 >> 0x20);
        local_868 = *(uint *)((longlong)&local_1bc8 + uVar41);
        uStack_860 = *(uint *)((longlong)&uStack_1bc0 + uVar41);
        local_858 = *(uint *)((longlong)&local_1bb8 + uVar41);
        uStack_850 = *(uint *)((longlong)&uStack_1bb0 + uVar41);
        auVar150._0_4_ = ~uVar412 & (uint)local_1d68._0_8_;
        auVar150._4_4_ = ~uVar429 & (uint)((ulonglong)local_1d68._0_8_ >> 0x20);
        auVar150._8_4_ = ~uVar430 & (uint)local_1d68._8_8_;
        auVar150._12_4_ = ~uVar433 & (uint)((ulonglong)local_1d68._8_8_ >> 0x20);
        auVar377._0_4_ = *(uint *)((longlong)&local_1bb8 + uVar41) & uVar412;
        auVar377._4_4_ = uStack_854 & uVar429;
        auVar377._8_4_ = *(uint *)((longlong)&uStack_1bb0 + uVar41) & uVar430;
        auVar377._12_4_ = uStack_84c & uVar433;
        local_848 = *(uint *)(local_1be8 + uVar41);
        uStack_844 = *(uint *)(local_1be8 + uVar41 + 4);
        uStack_840 = *(uint *)(local_1be8 + uVar41 + 8);
        uStack_83c = *(uint *)(local_1be8 + uVar41 + 0xc);
        auVar475 = auVar475 | auVar421;
        local_838 = *(uint *)(local_1bd8 + uVar41);
        uStack_834 = *(uint *)(local_1bd8 + uVar41 + 4);
        uStack_830 = *(uint *)(local_1bd8 + uVar41 + 8);
        uStack_82c = *(uint *)(local_1bd8 + uVar41 + 0xc);
        uVar43 = movmskpd(0,auVar475);
        auVar459 = auVar459 | auVar421;
        local_1d78._4_4_ =
             ~uVar264 &
             (uStack_864 & uVar408 | ~uVar408 & (uint)((ulonglong)auVar443._0_8_ >> 0x20)) |
             *(uint *)(local_1be8 + uVar41 + 4) & uVar264;
        local_1d78._0_4_ =
             ~uVar46 & (*(uint *)((longlong)&local_1bc8 + uVar41) & uVar301 |
                       ~uVar301 & SUB84(auVar443._0_8_,0)) | *(uint *)(local_1be8 + uVar41) & uVar46
        ;
        local_1d78._8_4_ =
             ~uVar265 &
             (*(uint *)((longlong)&uStack_1bc0 + uVar41) & uVar409 |
             ~uVar409 & SUB84(auVar443._8_8_,0)) | *(uint *)(local_1be8 + uVar41 + 8) & uVar265;
        uStack_1d6c = ~uVar266 &
                      (uStack_85c & uVar411 | ~uVar411 & (uint)((ulonglong)auVar443._8_8_ >> 0x20))
                      | *(uint *)(local_1be8 + uVar41 + 0xc) & uVar266;
        auVar377 = auVar377 | auVar150;
        iVar36 = movmskpd(iVar36,auVar459);
        auVar242._0_4_ = ~uVar46 & auVar377._0_4_;
        auVar242._4_4_ = ~uVar264 & auVar377._4_4_;
        auVar242._8_4_ = ~uVar265 & auVar377._8_4_;
        auVar242._12_4_ = ~uVar266 & auVar377._12_4_;
        auVar351._0_4_ = *(uint *)(local_1bd8 + uVar41) & uVar46;
        auVar351._4_4_ = *(uint *)(local_1bd8 + uVar41 + 4) & uVar264;
        auVar351._8_4_ = *(uint *)(local_1bd8 + uVar41 + 8) & uVar265;
        auVar351._12_4_ = *(uint *)(local_1bd8 + uVar41 + 0xc) & uVar266;
        local_1d68 = auVar242 | auVar351;
        uVar302 = 1;
        if ((uVar43 & 0x3fffffff) == 0 && iVar36 == 0) {
          uVar302 = *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4);
        }
        *(undefined4 *)((longlong)&local_1da8 + uVar54 * 4) = uVar302;
        *(uint *)((longlong)&uStack_1138 + uVar52) =
             ~auVar459._0_4_ & SUB84(dVar492,0) |
             ___xmm_00000000000000003ff0000000000000 & auVar459._0_4_;
        *(uint *)((longlong)&uStack_1138 + uVar52 + 4) =
             ~auVar459._4_4_ & (uint)((ulonglong)dVar492 >> 0x20) | _UNK_150689514 & auVar459._4_4_;
        *(uint *)((longlong)&uStack_1130 + uVar52) =
             ~auVar459._8_4_ & auVar202._0_4_ | _UNK_150689518 & auVar459._8_4_;
        *(uint *)((longlong)&uStack_1130 + uVar52 + 4) =
             ~auVar459._12_4_ & auVar202._4_4_ | _UNK_15068951c & auVar459._12_4_;
        *(uint *)((longlong)&uStack_1128 + uVar52) = ~auVar475._0_4_ & SUB84(dVar465,0);
        *(uint *)((longlong)&uStack_1128 + uVar52 + 4) =
             ~auVar475._4_4_ & (uint)((ulonglong)dVar465 >> 0x20);
        *(uint *)((longlong)&uStack_1120 + uVar52) = ~auVar475._8_4_ & auVar202._8_4_;
        *(uint *)((longlong)&uStack_1120 + uVar52 + 4) = ~auVar475._12_4_ & auVar202._12_4_;
        dVar451 = (double)local_1d68._0_8_;
        dVar305 = (double)local_1d68._8_8_;
        dVar58 = (double)local_1d78._0_8_;
        dVar432 = stack0xffffffffffffe290;
      }
      *(double *)((longlong)adStack_388 + uVar52) = dVar58;
      *(double *)((longlong)adStack_388 + uVar52 + 8) = dVar432;
      *(double *)((longlong)adStack_370 + (uVar52 - 8)) = dVar451;
      *(double *)((longlong)adStack_370 + uVar52) = dVar305;
      local_708 = dVar451 * dVar451 + dVar58 * dVar58 + dVar432 * dVar432;
      auVar248._8_4_ = SUB84(local_708,0);
      auVar248._0_8_ = local_708;
      uVar332 = (undefined4)((ulonglong)local_708 >> 0x20);
      auVar248._12_4_ = uVar332;
      dStack_700 = local_708;
      auVar249._8_8_ = -(ulonglong)(auVar248._8_8_ < dStack_18d0);
      auVar249._0_8_ = -(ulonglong)(local_708 < local_18d8);
      iVar44 = movmskpd(uVar302,auVar249);
      auVar169._8_4_ = SUB84(local_708,0);
      auVar169._0_8_ = local_708;
      auVar169._12_4_ = uVar332;
      auVar170._8_8_ = -(ulonglong)(auVar169._8_8_ < dStack_18e0);
      auVar170._0_8_ = -(ulonglong)(local_708 < local_18e8);
      uVar264 = movmskpd(iVar36,auVar170);
      local_6f8 = local_708;
      dStack_6f0 = local_708;
      uVar43 = iVar44 * 4 | uVar264;
      dVar432 = local_248;
      dVar451 = uStack_240;
      dVar305 = local_238;
      dVar199 = uStack_230;
      if ((uVar43 == 0) && (iVar34 != -1)) {
      }
      else {
        iVar34 = *(int *)((longlong)&local_1008 + uVar54 * 4);
        local_18e8 = local_708;
        dStack_18e0 = local_708;
        local_18d8 = local_708;
        dStack_18d0 = local_708;
      }
    }
    paVar48 = (atomic<unsigned_char> *)(ulonglong)uVar264;
    uVar54 = uVar54 + 1;
    uVar41 = uVar41 + 0x60;
    uVar52 = uVar52 + 0x20;
  } while ((longlong)uVar41 < 0x180);
  param_4 = local_1c78;
  if (bVar32) {
    auVar8._8_8_ = _UNK_150689688;
    auVar8._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
    auVar202 = divpd(auVar8,local_1e38);
    local_1e07 = 0;
    local_1d58 = ZEXT816(0);
    dVar58 = auVar202._0_8_;
    auVar448._0_8_ = (double)local_f58._0_8_ * dVar58;
    local_1e78._0_8_ = local_f18 * dVar58;
    auVar448._8_8_ = local_f38 * dVar58;
    local_1e78._8_8_ = local_ef8 * dVar58;
    local_1d48 = ZEXT816(0);
    local_1bf8 = ZEXT816(0);
    local_1c08 = ZEXT816(0);
  }
  else {
    lVar50 = (longlong)iVar34;
    uVar37 = *(uint *)((longlong)&local_1da8 + lVar50 * 4);
    paVar48 = (atomic<unsigned_char> *)(lVar50 * 0x60);
    auVar448 = *(undefined1 (*) [16])(&uStack_1138 + lVar50 * 4);
    local_1e78 = *(undefined1 (*) [16])(&uStack_1128 + lVar50 * 4);
    dStack_260 = (double)*(undefined8 *)(local_1be8 + (longlong)(paVar48 + 8));
    local_268 = (undefined1  [8])*(undefined8 *)(local_1be8 + (longlong)paVar48);
    dStack_250 = (double)*(undefined8 *)(local_1bd8 + (longlong)(paVar48 + 8));
    local_258 = (undefined1  [8])*(undefined8 *)(local_1bd8 + (longlong)paVar48);
    local_168 = (double)(&local_1738)[lVar50 * 0xc];
    uStack_160 = (double)(&uStack_1730)[lVar50 * 0xc];
    local_158 = (double)(&local_1728)[lVar50 * 0xc];
    uStack_150 = (double)(&uStack_1720)[lVar50 * 0xc];
    local_1e8 = (double)(&local_1438)[lVar50 * 0xc];
    uStack_1e0 = (double)(&uStack_1430)[lVar50 * 0xc];
    dVar432 = (double)(&local_1bc8)[lVar50 * 0xc];
    dVar451 = (double)(&uStack_1bc0)[lVar50 * 0xc];
    local_1d8 = (double)(&local_1428)[lVar50 * 0xc];
    uStack_1d0 = *(double *)(local_1418 + (longlong)(paVar48 + -8));
    dVar305 = (double)(&local_1bb8)[lVar50 * 0xc];
    dVar199 = (double)(&uStack_1bb0)[lVar50 * 0xc];
    local_248._0_4_ = SUB84(dVar432,0);
    local_248._4_4_ = (uint)((ulonglong)dVar432 >> 0x20);
    uStack_240._0_4_ = SUB84(dVar451,0);
    uStack_240._4_4_ = (uint)((ulonglong)dVar451 >> 0x20);
    local_238._0_4_ = SUB84(dVar305,0);
    local_238._4_4_ = (uint)((ulonglong)dVar305 >> 0x20);
    uStack_230._0_4_ = SUB84(dVar199,0);
    uStack_230._4_4_ = (uint)((ulonglong)dVar199 >> 0x20);
    local_148 = (double)(&local_1718)[lVar50 * 0xc];
    uStack_140 = (double)(&uStack_1710)[lVar50 * 0xc];
    local_138 = local_1708[lVar50 * 0xc];
    uStack_130 = local_1708[lVar50 * 0xc + 1];
    local_1c8 = *(double *)(local_1418 + (longlong)paVar48);
    uStack_1c0 = *(double *)(local_1418 + (longlong)(paVar48 + 8));
    local_1b8 = *(double *)(local_1408 + (longlong)paVar48);
    uStack_1b0 = *(double *)(local_1408 + (longlong)(paVar48 + 8));
    local_228 = local_1ba8[lVar50 * 0xc];
    dStack_220 = local_1ba8[lVar50 * 0xc + 1];
    local_218 = local_1ba8[lVar50 * 0xc + 2];
    dStack_210 = local_1ba8[lVar50 * 0xc + 3];
    local_128 = local_1708[lVar50 * 0xc + 2];
    dStack_120 = local_1708[lVar50 * 0xc + 3];
    local_118 = local_1708[lVar50 * 0xc + 4];
    dStack_110 = local_1708[lVar50 * 0xc + 5];
    local_1a8 = local_13f8[lVar50 * 0xc];
    dStack_1a0 = local_13f8[lVar50 * 0xc + 1];
    local_198 = local_13f8[lVar50 * 0xc + 2];
    dStack_190 = local_13f8[lVar50 * 0xc + 3];
    local_1d58 = *(undefined1 (*) [16])(adStack_388 + lVar50 * 4);
    local_1d48 = *(undefined1 (*) [16])(adStack_370 + lVar50 * 4 + -1);
    local_1bf8 = *(undefined1 (*) [16])(adStack_370 + lVar50 * 4 + -1);
    local_1c08 = *(undefined1 (*) [16])(adStack_388 + lVar50 * 4);
  }
LAB_143e98817:
  uVar302 = SUB84(paVar48,0);
  local_1e88 = auVar448;
  uVar35 = local_1df4;
  goto LAB_143e9884c;
}

// HasBoundingBox<Chaos::FTriangleMeshImplicitObject::FBvEntry<1>_> @ 143e9c0a0

bool __cdecl
Chaos::HasBoundingBox<Chaos::FTriangleMeshImplicitObject::FBvEntry<1>_>(FBvEntry<1> *param_1)

{
  return true;
}

// HasBoundingBox<Chaos::FTriangleMeshImplicitObject::FBvEntry<0>_> @ 143e9c0b0

bool __cdecl
Chaos::HasBoundingBox<Chaos::FTriangleMeshImplicitObject::FBvEntry<0>_>(FBvEntry<0> *param_1)

{
  return true;
}

// LinearlyInterpolate1D<double,double> @ 143e9c550

double __cdecl
Chaos::LinearlyInterpolate1D<double,double>(double *param_1,double *param_2,double param_3)

{
  return (*param_2 - *param_1) * param_3 + *param_1;
}

// LinearlyInterpolate1D<Chaos::TVector<double,3>,double> @ 143e9c570

TVector<double,3> * __cdecl
Chaos::LinearlyInterpolate1D<Chaos::TVector<double,3>,double>
          (TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar1 = *(double *)&param_2->field_0x10;
  dVar2 = *(double *)&param_1->field_0x10;
  dVar4 = (*(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8) * param_3 +
          *(double *)&param_1->field_0x8;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (*(double *)param_2 - *(double *)param_1) * param_3 + *(double *)param_1;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar3;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (dVar1 - dVar2) * param_3 + *(double *)&param_1->field_0x10;
  return __return_storage_ptr__;
}

// LinearlyInterpolateHelper<double,double> @ 143e9cac0

double __cdecl
Chaos::LinearlyInterpolateHelper<double,double>
          (TArrayND<double,3> *param_1,TVector<int,3> *param_2,TVector<double,3> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  dVar13 = *(double *)param_3;
  uVar11 = (((param_2->field0_0x0)._s_0.X + 1) * *(int *)&param_1->field_0x4 +
           (param_2->field0_0x0)._s_0.Y) * *(int *)&param_1->field_0x8 +
           (param_2->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if ((int)uVar11 < *(int *)&param_1->field_0x18) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  lVar7 = *(longlong *)&param_1->field_0x10;
  uVar12 = (*(int *)&param_1->field_0x4 * (param_2->field0_0x0)._s_0.X +
           (param_2->field0_0x0)._s_0.Y) * *(int *)&param_1->field_0x8 +
           (param_2->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if ((int)uVar12 < *(int *)&param_1->field_0x18) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  dVar1 = *(double *)param_3;
  dVar13 = (*(double *)(lVar7 + (longlong)(int)uVar11 * 8) -
           *(double *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar12 * 8)) * dVar13 +
           *(double *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar12 * 8);
  uVar11 = ((param_2->field0_0x0)._s_0.Y + 1 +
           ((param_2->field0_0x0)._s_0.X + 1) * *(int *)&param_1->field_0x4) *
           *(int *)&param_1->field_0x8 + (param_2->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if ((int)uVar11 < *(int *)&param_1->field_0x18) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  lVar7 = *(longlong *)&param_1->field_0x10;
  uVar12 = ((param_2->field0_0x0)._s_0.Y + 1 +
           *(int *)&param_1->field_0x4 * (param_2->field0_0x0)._s_0.X) * *(int *)&param_1->field_0x8
           + (param_2->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if ((int)uVar12 < *(int *)&param_1->field_0x18) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  dVar2 = *(double *)(lVar7 + (longlong)(int)uVar11 * 8);
  dVar3 = *(double *)param_3;
  dVar4 = *(double *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar12 * 8);
  dVar5 = *(double *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar12 * 8);
  uVar11 = (param_2->field0_0x0)._s_0.Z + 1 +
           (((param_2->field0_0x0)._s_0.X + 1) * *(int *)&param_1->field_0x4 +
           (param_2->field0_0x0)._s_0.Y) * *(int *)&param_1->field_0x8;
  uVar10 = 0;
  if ((int)uVar11 < *(int *)&param_1->field_0x18) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  lVar7 = *(longlong *)&param_1->field_0x10;
  uVar12 = (param_2->field0_0x0)._s_0.Z + 1 +
           (*(int *)&param_1->field_0x4 * (param_2->field0_0x0)._s_0.X +
           (param_2->field0_0x0)._s_0.Y) * *(int *)&param_1->field_0x8;
  uVar10 = 0;
  if ((int)uVar12 < *(int *)&param_1->field_0x18) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  dVar6 = *(double *)param_3;
  dVar3 = (*(double *)(lVar7 + (longlong)(int)uVar11 * 8) -
          *(double *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar12 * 8)) * dVar3 +
          *(double *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar12 * 8);
  uVar11 = (param_2->field0_0x0)._s_0.Z + 1 +
           (((param_2->field0_0x0)._s_0.X + 1) * *(int *)&param_1->field_0x4 +
           (param_2->field0_0x0)._s_0.Y + 1) * *(int *)&param_1->field_0x8;
  uVar10 = 0;
  if ((int)uVar11 < *(int *)&param_1->field_0x18) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  lVar7 = *(longlong *)&param_1->field_0x10;
  uVar12 = (param_2->field0_0x0)._s_0.Z + 1 +
           ((param_2->field0_0x0)._s_0.Y + 1 +
           *(int *)&param_1->field_0x4 * (param_2->field0_0x0)._s_0.X) * *(int *)&param_1->field_0x8
  ;
  uVar10 = 0;
  if ((int)uVar12 < *(int *)&param_1->field_0x18) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  dVar13 = (((dVar2 - dVar4) * dVar1 + dVar5) - dVar13) * *(double *)&param_3->field_0x8 + dVar13;
  return (((((*(double *)(lVar7 + (longlong)(int)uVar11 * 8) -
             *(double *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar12 * 8)) * dVar6 +
            *(double *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar12 * 8)) - dVar3) *
           *(double *)&param_3->field_0x8 + dVar3) - dVar13) * *(double *)&param_3->field_0x10 +
         dVar13;
}

// LinearlyInterpolateHelper<Chaos::TVector<double,3>,double> @ 143e9cf00

TVector<double,3> * __cdecl
Chaos::LinearlyInterpolateHelper<Chaos::TVector<double,3>,double>
          (TVector<double,3> *__return_storage_ptr__,TArrayND<Chaos::TVector<double,3>,3> *param_1,
          TVector<int,3> *param_2,TVector<double,3> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  longlong lVar17;
  code *pcVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  TVector<double,3> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  double dVar28;
  
  dVar1 = *(double *)param_3;
  uVar27 = (((param_2->field0_0x0)._s_0.X + 1) * *(int *)&param_1->field_0x4 +
           (param_2->field0_0x0)._s_0.Y) * *(int *)&param_1->field_0x8 +
           (param_2->field0_0x0)._s_0.Z;
  uVar26 = 0;
  if ((int)uVar27 < *(int *)&param_1->field_0x18) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar18 = (code *)swi(3);
      pTVar23 = (TVector<double,3> *)(*pcVar18)();
      return pTVar23;
    }
  }
  lVar16 = *(longlong *)&param_1->field_0x10;
  lVar24 = (longlong)(int)uVar27;
  uVar27 = (*(int *)&param_1->field_0x4 * (param_2->field0_0x0)._s_0.X +
           (param_2->field0_0x0)._s_0.Y) * *(int *)&param_1->field_0x8 +
           (param_2->field0_0x0)._s_0.Z;
  uVar26 = 0;
  if ((int)uVar27 < *(int *)&param_1->field_0x18) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar18 = (code *)swi(3);
      pTVar23 = (TVector<double,3> *)(*pcVar18)();
      return pTVar23;
    }
  }
  lVar25 = (longlong)(int)uVar27;
  lVar17 = *(longlong *)&param_1->field_0x10;
  dVar21 = (*(double *)(lVar16 + 0x10 + lVar24 * 0x18) - *(double *)(lVar17 + 0x10 + lVar25 * 0x18))
           * dVar1 + *(double *)(lVar17 + 0x10 + lVar25 * 0x18);
  dVar28 = (*(double *)(lVar16 + 8 + lVar24 * 0x18) - *(double *)(lVar17 + 8 + lVar25 * 0x18)) *
           dVar1 + *(double *)(lVar17 + 8 + lVar25 * 0x18);
  dVar2 = *(double *)param_3;
  dVar1 = (*(double *)(lVar16 + lVar24 * 0x18) - *(double *)(lVar17 + lVar25 * 0x18)) * dVar1 +
          *(double *)(lVar17 + lVar25 * 0x18);
  uVar27 = ((param_2->field0_0x0)._s_0.Y + 1 +
           ((param_2->field0_0x0)._s_0.X + 1) * *(int *)&param_1->field_0x4) *
           *(int *)&param_1->field_0x8 + (param_2->field0_0x0)._s_0.Z;
  uVar26 = 0;
  if ((int)uVar27 < *(int *)&param_1->field_0x18) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar18 = (code *)swi(3);
      pTVar23 = (TVector<double,3> *)(*pcVar18)();
      return pTVar23;
    }
  }
  lVar16 = *(longlong *)&param_1->field_0x10;
  lVar24 = (longlong)(int)uVar27;
  uVar27 = ((param_2->field0_0x0)._s_0.Y + 1 +
           *(int *)&param_1->field_0x4 * (param_2->field0_0x0)._s_0.X) * *(int *)&param_1->field_0x8
           + (param_2->field0_0x0)._s_0.Z;
  uVar26 = 0;
  if ((int)uVar27 < *(int *)&param_1->field_0x18) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar18 = (code *)swi(3);
      pTVar23 = (TVector<double,3> *)(*pcVar18)();
      return pTVar23;
    }
  }
  dVar3 = *(double *)(lVar16 + 0x10 + lVar24 * 0x18);
  dVar4 = *(double *)(lVar16 + 8 + lVar24 * 0x18);
  dVar5 = *(double *)(lVar16 + lVar24 * 0x18);
  lVar24 = (longlong)(int)uVar27;
  lVar16 = *(longlong *)&param_1->field_0x10;
  dVar6 = *(double *)(lVar16 + 0x10 + lVar24 * 0x18);
  dVar7 = *(double *)(lVar16 + 8 + lVar24 * 0x18);
  dVar8 = *(double *)(lVar16 + lVar24 * 0x18);
  dVar9 = *(double *)(lVar16 + 0x10 + lVar24 * 0x18);
  dVar10 = *(double *)(lVar16 + 8 + lVar24 * 0x18);
  dVar11 = *(double *)param_3;
  dVar12 = *(double *)(lVar16 + lVar24 * 0x18);
  uVar27 = (param_2->field0_0x0)._s_0.Z + 1 +
           (((param_2->field0_0x0)._s_0.X + 1) * *(int *)&param_1->field_0x4 +
           (param_2->field0_0x0)._s_0.Y) * *(int *)&param_1->field_0x8;
  uVar26 = 0;
  if ((int)uVar27 < *(int *)&param_1->field_0x18) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar18 = (code *)swi(3);
      pTVar23 = (TVector<double,3> *)(*pcVar18)();
      return pTVar23;
    }
  }
  lVar16 = *(longlong *)&param_1->field_0x10;
  lVar24 = (longlong)(int)uVar27;
  uVar27 = (param_2->field0_0x0)._s_0.Z + 1 +
           (*(int *)&param_1->field_0x4 * (param_2->field0_0x0)._s_0.X +
           (param_2->field0_0x0)._s_0.Y) * *(int *)&param_1->field_0x8;
  uVar26 = 0;
  if ((int)uVar27 < *(int *)&param_1->field_0x18) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar18 = (code *)swi(3);
      pTVar23 = (TVector<double,3> *)(*pcVar18)();
      return pTVar23;
    }
  }
  dVar13 = *(double *)param_3;
  lVar25 = (longlong)(int)uVar27;
  lVar17 = *(longlong *)&param_1->field_0x10;
  dVar19 = (*(double *)(lVar16 + 0x10 + lVar24 * 0x18) - *(double *)(lVar17 + 0x10 + lVar25 * 0x18))
           * dVar11 + *(double *)(lVar17 + 0x10 + lVar25 * 0x18);
  dVar20 = (*(double *)(lVar16 + 8 + lVar24 * 0x18) - *(double *)(lVar17 + 8 + lVar25 * 0x18)) *
           dVar11 + *(double *)(lVar17 + 8 + lVar25 * 0x18);
  dVar11 = (*(double *)(lVar16 + lVar24 * 0x18) - *(double *)(lVar17 + lVar25 * 0x18)) * dVar11 +
           *(double *)(lVar17 + lVar25 * 0x18);
  uVar27 = (param_2->field0_0x0)._s_0.Z + 1 +
           (((param_2->field0_0x0)._s_0.X + 1) * *(int *)&param_1->field_0x4 +
           (param_2->field0_0x0)._s_0.Y + 1) * *(int *)&param_1->field_0x8;
  uVar26 = 0;
  if ((int)uVar27 < *(int *)&param_1->field_0x18) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar18 = (code *)swi(3);
      pTVar23 = (TVector<double,3> *)(*pcVar18)();
      return pTVar23;
    }
  }
  lVar16 = *(longlong *)&param_1->field_0x10;
  lVar24 = (longlong)(int)uVar27;
  uVar27 = (param_2->field0_0x0)._s_0.Z + 1 +
           ((param_2->field0_0x0)._s_0.Y + 1 +
           *(int *)&param_1->field_0x4 * (param_2->field0_0x0)._s_0.X) * *(int *)&param_1->field_0x8
  ;
  uVar26 = 0;
  if ((int)uVar27 < *(int *)&param_1->field_0x18) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar18 = (code *)swi(3);
      pTVar23 = (TVector<double,3> *)(*pcVar18)();
      return pTVar23;
    }
  }
  dVar14 = *(double *)&param_3->field_0x8;
  dVar15 = *(double *)(lVar16 + 0x10 + lVar24 * 0x18);
  lVar25 = (longlong)(int)uVar27;
  lVar17 = *(longlong *)&param_1->field_0x10;
  dVar21 = (((dVar3 - dVar6) * dVar2 + dVar9) - dVar21) * dVar14 + dVar21;
  dVar3 = *(double *)(lVar17 + 0x10 + lVar25 * 0x18);
  dVar1 = (((dVar5 - dVar8) * dVar2 + dVar12) - dVar1) * dVar14 + dVar1;
  dVar28 = dVar14 * (((dVar4 - dVar7) * dVar2 + dVar10) - dVar28) + dVar28;
  dVar2 = *(double *)(lVar17 + 0x10 + lVar25 * 0x18);
  dVar4 = *(double *)(lVar16 + lVar24 * 0x18);
  dVar5 = *(double *)(lVar17 + lVar25 * 0x18);
  dVar6 = *(double *)&param_3->field_0x10;
  dVar7 = *(double *)(lVar17 + lVar25 * 0x18);
  *(double *)&__return_storage_ptr__->field_0x8 =
       ((dVar14 * (((*(double *)(lVar16 + 8 + lVar24 * 0x18) -
                    *(double *)(lVar17 + 8 + lVar25 * 0x18)) * dVar13 +
                   *(double *)(lVar17 + 8 + lVar25 * 0x18)) - dVar20) + dVar20) - dVar28) * dVar6 +
       dVar28;
  *(double *)&__return_storage_ptr__->field_0x10 =
       ((dVar14 * (((dVar15 - dVar3) * dVar13 + dVar2) - dVar19) + dVar19) - dVar21) * dVar6 +
       dVar21;
  *(double *)__return_storage_ptr__ =
       (((((dVar4 - dVar5) * dVar13 + dVar7) - dVar11) * dVar14 + dVar11) - dVar1) * dVar6 + dVar1;
  return __return_storage_ptr__;
}

// OverlapFast<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor> @ 143e9d780

bool __thiscall
Chaos::TAABBTreeLeafArray<int,0,float>::
OverlapFast<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
          (TAABBTreeLeafArray<int,0,float> *this,TAABB<double,3> *param_1,FSimpleVisitor *param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FScriptContainerElement *pFVar18;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar19;
  code *pcVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  bool bVar29;
  undefined1 uVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  uint uVar34;
  TAABB<double,3> *pTVar35;
  int iVar36;
  int iVar37;
  longlong lVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  longlong lVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int local_288;
  int local_284;
  longlong local_268;
  longlong local_260;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined4 local_210;
  undefined1 local_20c;
  undefined1 local_208 [16];
  double local_1f8;
  undefined1 local_1f0 [16];
  double local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined1 local_1d0 [16];
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_130 [16];
  double local_120;
  double local_f0;
  
  iVar32 = (this->Elems).ArrayNum;
  iVar31 = (int)(iVar32 + (iVar32 >> 0x1f & 3U)) >> 2;
  if (0 < iVar31) {
    lVar38 = 0;
    local_228 = (longlong)iVar31;
    uVar41 = 3;
    local_230 = 0x38;
    local_220 = 0x54;
    local_288 = 2;
    iVar43 = 1;
    local_268 = 0x1c;
    local_284 = 0;
    local_260 = 0;
    do {
      uVar39 = ~uVar41 >> 0x1f;
      uVar34 = 0;
      if ((int)uVar41 < (this->Elems).ArrayNum) {
        uVar34 = uVar39;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      uVar40 = ~(uVar41 - 3) >> 0x1f;
      dVar28 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_220 + 4);
      uVar34 = 0;
      if (local_288 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      dVar49 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_230 + 4);
      uVar34 = 0;
      if (iVar43 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      dVar27 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_268 + 4);
      uVar34 = 0;
      if (local_284 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      local_198 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_260 + 4);
      uVar34 = 0;
      if ((int)uVar41 < (this->Elems).ArrayNum) {
        uVar34 = uVar39;
      }
      dStack_190 = dVar27;
      local_178 = dVar49;
      dStack_170 = dVar28;
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      iVar36 = uVar41 - 1;
      dVar28 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_230 + 0x2c);
      uVar34 = 0;
      if (iVar36 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      iVar37 = uVar41 - 2;
      dVar49 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_230 + 0x10);
      uVar34 = 0;
      if (iVar37 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      iVar42 = uVar41 - 3;
      dVar27 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_230 + -0xc);
      uVar34 = 0;
      if (iVar42 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      local_188 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_230 + -0x28);
      uVar34 = 0;
      if ((int)uVar41 < (this->Elems).ArrayNum) {
        uVar34 = uVar39;
      }
      dStack_180 = dVar27;
      local_168 = dVar49;
      dStack_160 = dVar28;
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      dVar28 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_230 + 0x24);
      uVar34 = 0;
      if (iVar36 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      dVar49 = (double)*(float *)((this->Elems).AllocatorInstance.Data + local_230 + 8);
      uVar34 = 0;
      if (iVar37 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar2 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + -0x14);
      uVar34 = 0;
      if (iVar42 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar3 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + -0x30);
      uVar34 = 0;
      if ((int)uVar41 < (this->Elems).ArrayNum) {
        uVar34 = uVar39;
      }
      local_158 = dVar49;
      dStack_150 = dVar28;
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar4 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + 0x30);
      uVar34 = 0;
      if (iVar36 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar5 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + 0x14);
      uVar34 = 0;
      if (iVar37 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar6 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + -8);
      uVar34 = 0;
      if (iVar42 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar7 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + -0x24);
      uVar34 = 0;
      if ((int)uVar41 < (this->Elems).ArrayNum) {
        uVar34 = uVar39;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar8 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + 0x28);
      uVar34 = 0;
      if (iVar36 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar9 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + 0xc);
      uVar34 = 0;
      if (iVar37 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar10 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + -0x10);
      uVar34 = 0;
      if (iVar42 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar11 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + -0x2c);
      uVar34 = 0;
      if ((int)uVar41 < (this->Elems).ArrayNum) {
        uVar34 = uVar39;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar12 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + 0x34);
      uVar34 = 0;
      if (iVar36 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar13 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + 0x18);
      uVar34 = 0;
      if (iVar37 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      fVar14 = *(float *)((this->Elems).AllocatorInstance.Data + local_230 + -4);
      uVar34 = 0;
      if (iVar42 < (this->Elems).ArrayNum) {
        uVar34 = uVar40;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      dVar28 = *(double *)&(param_1->MMax).field_0x8;
      dVar49 = *(double *)&param_1->MMax;
      dVar27 = *(double *)&(param_1->MMin).field_0x8;
      dVar15 = *(double *)&param_1->MMin;
      dVar16 = *(double *)&(param_1->MMax).field_0x10;
      dVar17 = *(double *)&(param_1->MMin).field_0x10;
      pFVar18 = (this->Elems).AllocatorInstance.Data;
      auVar45._8_4_ = SUB84(dVar49,0);
      auVar45._0_8_ = dVar49;
      auVar45._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < dStack_190);
      auVar46._0_8_ = -(ulonglong)(dVar49 < local_198);
      auVar50._8_8_ = -(ulonglong)(dVar49 < dStack_170);
      auVar50._0_8_ = -(ulonglong)(dVar49 < local_178);
      lVar44 = -(ulonglong)(dVar28 < (double)fVar2);
      auVar51._8_8_ = -(ulonglong)((double)fVar6 < dVar27);
      auVar51._0_8_ = -(ulonglong)((double)fVar7 < dVar27);
      auVar21._8_4_ = (int)lVar44;
      auVar21._0_8_ = -(ulonglong)(dVar28 < (double)fVar3);
      auVar21._12_4_ = (int)((ulonglong)lVar44 >> 0x20);
      auVar22._8_4_ = (int)-(ulonglong)(dStack_180 < dVar15);
      auVar22._0_8_ = -(ulonglong)(local_188 < dVar15);
      auVar22._12_4_ = (int)(-(ulonglong)(dStack_180 < dVar15) >> 0x20);
      auVar52._8_8_ = -(ulonglong)((double)fVar4 < dVar27);
      auVar52._0_8_ = -(ulonglong)((double)fVar5 < dVar27);
      auVar25._8_4_ = (int)-(ulonglong)(dVar28 < dStack_150);
      auVar25._0_8_ = -(ulonglong)(dVar28 < local_158);
      auVar25._12_4_ = (int)(-(ulonglong)(dVar28 < dStack_150) >> 0x20);
      auVar47._8_8_ = -(ulonglong)((double)fVar14 < dVar17);
      auVar47._0_8_ = -(ulonglong)((double)*(float *)(pFVar18 + local_230 + -0x20) < dVar17);
      lVar44 = -(ulonglong)(dVar16 < (double)fVar10);
      auVar23._8_4_ = (int)lVar44;
      auVar23._0_8_ = -(ulonglong)(dVar16 < (double)fVar11);
      auVar23._12_4_ = (int)((ulonglong)lVar44 >> 0x20);
      auVar24._8_4_ = (int)-(ulonglong)(dStack_160 < dVar15);
      auVar24._0_8_ = -(ulonglong)(local_168 < dVar15);
      auVar24._12_4_ = (int)(-(ulonglong)(dStack_160 < dVar15) >> 0x20);
      uVar34 = movmskpd((int)param_1,auVar51 | auVar21 | auVar46 | auVar22 | auVar47 | auVar23);
      auVar48._8_8_ = -(ulonglong)((double)fVar12 < dVar17);
      auVar48._0_8_ = -(ulonglong)((double)fVar13 < dVar17);
      lVar44 = -(ulonglong)(dVar16 < (double)fVar8);
      auVar26._8_4_ = (int)lVar44;
      auVar26._0_8_ = -(ulonglong)(dVar16 < (double)fVar9);
      auVar26._12_4_ = (int)((ulonglong)lVar44 >> 0x20);
      iVar36 = movmskpd((int)pFVar18,auVar50 | auVar24 | auVar52 | auVar25 | auVar48 | auVar26);
      uVar39 = 0;
      do {
        if (((uVar34 | iVar36 << 2) >> (uVar39 & 0x1f) & 1) == 0) {
          uVar40 = 0;
          if ((int)(iVar42 + uVar39) < (this->Elems).ArrayNum) {
            uVar40 = ~(uVar39 + (uVar41 - 3)) >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar20 = (code *)swi(3);
            uVar30 = (*pcVar20)();
            return (bool)uVar30;
          }
          pFVar18 = (this->Elems).AllocatorInstance.Data;
          pTVar19 = param_2->CollectedResults;
          local_210 = *(undefined4 *)(pFVar18 + lVar38);
          local_1e0 = (double)*(float *)(pFVar18 + lVar38 + 0x18);
          local_20c = 1;
          local_1f8 = (double)*(float *)(pFVar18 + lVar38 + 0xc);
          dVar28 = (double)(float)((ulonglong)*(undefined8 *)(pFVar18 + lVar38 + 4) >> 0x20);
          local_1f0._8_4_ = SUB84((double)*(float *)(pFVar18 + lVar38 + 0x14),0);
          local_1f0._0_8_ = (double)*(float *)(pFVar18 + lVar38 + 0x10);
          local_1f0._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar18 + lVar38 + 0x14) >> 0x20);
          local_208._8_4_ = SUB84(dVar28,0);
          local_208._0_8_ = (double)(float)*(undefined8 *)(pFVar18 + lVar38 + 4);
          local_208._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
          pFVar18 = (pTVar19->AllocatorInstance).Data;
          local_f0 = local_1e0;
          if (((pFVar18 <= (FScriptContainerElement *)&local_210) &&
              ((FScriptContainerElement *)&local_210 < pFVar18 + (longlong)pTVar19->ArrayMax * 4))
             && (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar29)) {
            pcVar20 = (code *)swi(3);
            uVar30 = (*pcVar20)();
            return (bool)uVar30;
          }
          iVar37 = pTVar19->ArrayNum;
          if (iVar37 == pTVar19->ArrayMax) {
            iVar37 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
          }
          pTVar19->ArrayNum = iVar37 + 1;
          *(undefined4 *)((pTVar19->AllocatorInstance).Data + (longlong)iVar37 * 4) = local_210;
        }
        uVar39 = uVar39 + 1;
        lVar38 = lVar38 + 0x1c;
      } while ((int)uVar39 < 4);
      local_268 = local_268 + 0x70;
      local_220 = local_220 + 0x70;
      local_288 = local_288 + 4;
      iVar43 = iVar43 + 4;
      local_260 = local_260 + 0x70;
      uVar41 = uVar41 + 4;
      local_230 = local_230 + 0x70;
      local_228 = local_228 + -1;
      local_284 = local_284 + 4;
    } while (local_228 != 0);
  }
  uVar41 = iVar31 * 4;
  if ((int)uVar41 < iVar32) {
    lVar38 = (longlong)(int)uVar41 * 0x1c;
    lVar44 = (longlong)iVar32 - (longlong)(int)uVar41;
    do {
      uVar34 = 0;
      if ((int)uVar41 < (this->Elems).ArrayNum) {
        uVar34 = ~uVar41 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      pFVar18 = (this->Elems).AllocatorInstance.Data;
      lVar33 = 0;
      pTVar35 = param_1;
      do {
        pdVar1 = (double *)(((longlong)&param_1->MMax - (longlong)param_1) + (longlong)pTVar35);
        if ((*pdVar1 <= (double)*(float *)(pFVar18 + lVar33 + lVar38 + 4) &&
             (double)*(float *)(pFVar18 + lVar33 + lVar38 + 4) != *pdVar1) ||
           ((double)*(float *)(pFVar18 + lVar33 + lVar38 + 0x10) < *(double *)&pTVar35->MMin))
        goto LAB_143e9e739;
        lVar33 = lVar33 + 4;
        pTVar35 = (TAABB<double,3> *)&(pTVar35->MMin).field_0x8;
      } while (lVar33 < 0xc);
      dVar28 = (double)(float)((ulonglong)*(undefined8 *)(pFVar18 + lVar38 + 4) >> 0x20);
      local_1d8 = *(undefined4 *)(pFVar18 + lVar38);
      pTVar19 = param_2->CollectedResults;
      local_1d4 = 1;
      local_1d0._8_4_ = SUB84(dVar28,0);
      local_1d0._0_8_ = (double)(float)*(undefined8 *)(pFVar18 + lVar38 + 4);
      local_1d0._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      local_1a8 = (double)*(float *)(pFVar18 + lVar38 + 0x18);
      local_1b8._0_8_ = (double)*(float *)(pFVar18 + lVar38 + 0x10);
      local_1c0 = (double)*(float *)(pFVar18 + lVar38 + 0xc);
      local_1b8._8_8_ = (double)*(float *)(pFVar18 + lVar38 + 0x14);
      pFVar18 = (pTVar19->AllocatorInstance).Data;
      local_130 = local_1b8;
      local_120 = local_1a8;
      if (((pFVar18 <= (FScriptContainerElement *)&local_1d8) &&
          ((FScriptContainerElement *)&local_1d8 < pFVar18 + (longlong)pTVar19->ArrayMax * 4)) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar29)) {
        pcVar20 = (code *)swi(3);
        uVar30 = (*pcVar20)();
        return (bool)uVar30;
      }
      iVar32 = pTVar19->ArrayNum;
      if (iVar32 == pTVar19->ArrayMax) {
        iVar32 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
      }
      pTVar19->ArrayNum = iVar32 + 1;
      *(undefined4 *)((pTVar19->AllocatorInstance).Data + (longlong)iVar32 * 4) = local_1d8;
LAB_143e9e739:
      uVar41 = uVar41 + 1;
      lVar38 = lVar38 + 0x1c;
      lVar44 = lVar44 + -1;
    } while (lVar44 != 0);
  }
  return true;
}

// QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor> @ 143ea4e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TVector<double,3> *param_1,FQueryFastDataVoid *param_2,TVector<double,3> *param_3,
          TAABB<double,3> *param_4,FSimpleVisitor *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,bool *param_8)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double dVar4;
  float fVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  code *pcVar7;
  FSimpleVisitor *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  FVar16;
  void *_Dst;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  undefined1 auStackY_11a8 [32];
  undefined1 local_1158 [8];
  undefined8 local_1150;
  undefined8 uStack_1148;
  FSimpleVisitor *local_1140;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *local_1138;
  TVector<double,3> *local_1130;
  FQueryFastDataVoid *local_1128;
  bool *local_1120;
  TVector<double,3> *local_1118;
  TVector<double,3> *local_1110;
  undefined4 local_1108;
  undefined1 local_1104;
  double local_1100;
  double dStack_10f8;
  double local_10f0;
  double local_10e8;
  double dStack_10e0;
  double local_10d8;
  double local_10d0 [6];
  undefined1 local_10a0 [16];
  undefined1 local_1090 [8];
  double adStack_1088 [3];
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  local_1070;
  int local_78;
  int local_74;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x143ea4eaf;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_11a8;
  iVar14 = (this->GlobalPayloads).ArrayNum;
  pFVar17 = (this->GlobalPayloads).AllocatorInstance.Data;
  local_1110 = param_6;
  local_1118 = param_7;
  pFVar19 = pFVar17 + (longlong)iVar14 * 0x1c;
  local_1140 = param_5;
  local_1120 = param_8;
  local_1150 = param_3;
  local_1138 = this;
  local_1130 = param_1;
  local_1128 = param_2;
  while( true ) {
    if ((this->GlobalPayloads).ArrayNum != iVar14) {
      local_1158[0] = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,float>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1158);
    }
    pFVar8 = local_1140;
    if (pFVar17 == pFVar19) break;
    local_10d0[0] = (double)(float)*(undefined8 *)(pFVar17 + 4);
    local_10d0[1] = (double)(float)((ulonglong)*(undefined8 *)(pFVar17 + 4) >> 0x20);
    lVar15 = 0;
    local_10d0[2] = (double)(float)*(undefined8 *)(pFVar17 + 0xc);
    local_10d0[3] = (double)(float)((ulonglong)*(undefined8 *)(pFVar17 + 0xc) >> 0x20);
    local_10d0[4] = (double)(float)*(undefined8 *)(pFVar17 + 0x14);
    local_10d0[5] = (double)(float)((ulonglong)*(undefined8 *)(pFVar17 + 0x14) >> 0x20);
    do {
      dVar4 = *(double *)(&(param_4->MMin).field_0x0 + lVar15);
      pdVar3 = (double *)((longlong)local_10d0 + lVar15 + 0x18);
      if ((*pdVar3 <= dVar4 && dVar4 != *pdVar3) ||
         (*(double *)(&(param_4->MMax).field_0x0 + lVar15) <
          *(double *)((longlong)local_10d0 + lVar15))) goto LAB_143ea5047;
      lVar15 = lVar15 + 8;
    } while (lVar15 < 0x18);
    local_1108 = *(undefined4 *)pFVar17;
    pTVar6 = param_5->CollectedResults;
    local_1104 = 1;
    pFVar18 = (pTVar6->AllocatorInstance).Data;
    local_1100 = local_10d0[0];
    dStack_10f8 = local_10d0[1];
    local_10f0 = local_10d0[2];
    local_10e8 = local_10d0[3];
    dStack_10e0 = local_10d0[4];
    local_10d8 = local_10d0[5];
    if (((pFVar18 <= (FScriptContainerElement *)&local_1108) &&
        ((FScriptContainerElement *)&local_1108 < pFVar18 + (longlong)pTVar6->ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    iVar11 = pTVar6->ArrayNum;
    if (iVar11 == pTVar6->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar11 + 1;
    *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_1108;
LAB_143ea5047:
    pFVar17 = pFVar17 + 0x1c;
  }
  this_00 = (this->DirtyElementTree).Ptr;
  if ((this_00 !=
       (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        *)0x0) &&
     (bVar9 = QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
                        (this_00,local_1130,local_1128,local_1150,param_4,local_1140,local_1110,
                         local_1118,local_1120), !bVar9)) {
    return bVar9;
  }
  local_1070.SecondaryData =
       (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
        )0x0;
  local_78 = 0;
  local_74 = 0xff;
  if (this->bDynamicTree == false) {
    if ((this->Nodes).ArrayNum == 0) goto LAB_143ea5387;
    local_1150 = (TVector<double,3> *)((ulonglong)local_1150._4_4_ << 0x20);
  }
  else {
    if (this->RootNode == -1) goto LAB_143ea5387;
    local_1150 = (TVector<double,3> *)CONCAT44(local_1150._4_4_,this->RootNode);
  }
  iVar14 = 1;
  local_78 = 1;
  bVar9 = false;
  bVar20 = false;
  local_1070.InlineData._0_8_ = local_1150;
  local_1070.InlineData[8] = '\0';
  local_1070.InlineData[9] = '\0';
  local_1070.InlineData[10] = '\0';
  local_1070.InlineData[0xb] = '\0';
  local_1070.InlineData[0xc] = '\0';
  local_1070.InlineData[0xd] = '\0';
  local_1070.InlineData[0xe] = '\0';
  local_1070.InlineData[0xf] = '\0';
  uStack_1148 = 0;
  do {
    if ((bVar20 || bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar14 = local_78, bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    FVar16 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_1070;
    if (local_1070.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar16 = local_1070.SecondaryData;
    }
    lVar15 = (longlong)(iVar14 + -1) * 0x10;
    uVar13 = *(uint *)((longlong)FVar16 + lVar15);
    FVar16 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_1070;
    if (local_1070.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar16 = local_1070.SecondaryData;
    }
    _Dst = (void *)(lVar15 + (longlong)FVar16);
    iVar11 = (iVar14 - (iVar14 + -1)) + -1;
    if (iVar11 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar11 << 4);
      iVar14 = local_78;
    }
    local_78 = iVar14 + -1;
    uVar12 = 0;
    if ((int)uVar13 < (this->Nodes).ArrayNum) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pFVar19 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x40;
    pFVar17 = pFVar19 + 0x30;
    if (((byte)pFVar19[0x3c] & 1) == 0) {
      iVar14 = local_78;
      if (pFVar19 != pFVar17) {
        pFVar18 = pFVar17;
        pFVar19 = pFVar19 + 0x10;
        do {
          dVar4 = (double)(float)((ulonglong)*(undefined8 *)(pFVar19 + -0x10) >> 0x20);
          local_10a0._8_4_ = SUB84(dVar4,0);
          local_10a0._0_8_ = (double)(float)*(undefined8 *)(pFVar19 + -0x10);
          local_10a0._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)(float)((ulonglong)*(undefined8 *)(pFVar19 + -8) >> 0x20);
          unique0x100001d6 = SUB84(dVar4,0);
          local_1090 = (double)(float)*(undefined8 *)(pFVar19 + -8);
          unique0x100001da = (int)((ulonglong)dVar4 >> 0x20);
          adStack_1088[2] = (double)*(float *)(pFVar19 + 4);
          adStack_1088[1] = (double)*(float *)pFVar19;
          lVar15 = 0;
          do {
            dVar4 = *(double *)(&(param_4->MMin).field_0x0 + lVar15);
            if ((*(double *)(local_1090 + lVar15 + 8) <= dVar4 &&
                 dVar4 != *(double *)(local_1090 + lVar15 + 8)) ||
               (*(double *)(&(param_4->MMax).field_0x0 + lVar15) < *(double *)(local_10a0 + lVar15))
               ) goto LAB_143ea5364;
            lVar15 = lVar15 + 8;
          } while (lVar15 < 0x18);
          local_1150 = (TVector<double,3> *)CONCAT44(local_1150._4_4_,*(float *)pFVar18);
          uStack_1148 = 0;
          if (iVar14 == local_74) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>_::__l2::FNodeQueueEntry>_>
                               (0x810,&local_1070,&local_74);
          }
          local_78 = iVar14 + 1;
          FVar16 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                    )&local_1070;
          if (local_1070.SecondaryData !=
              (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
               )0x0) {
            FVar16 = local_1070.SecondaryData;
          }
          puVar2 = (undefined8 *)((longlong)FVar16 + (longlong)iVar14 * 0x10);
          *puVar2 = local_1150;
          puVar2[1] = uStack_1148;
          iVar14 = local_78;
LAB_143ea5364:
          pFVar18 = pFVar18 + 4;
          pFVar1 = pFVar19 + 8;
          this = local_1138;
          pFVar19 = pFVar19 + 0x18;
        } while (pFVar1 != pFVar17);
      }
    }
    else {
      fVar5 = *(float *)pFVar17;
      uVar13 = 0;
      if ((int)fVar5 < *(int *)&(this->Leaves).field_0x8) {
        uVar13 = ~(uint)fVar5 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      bVar9 = TAABBTreeLeafArray<int,0,float>::
              OverlapFast<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
                        ((TAABBTreeLeafArray<int,0,float> *)
                         (*(longlong *)&this->Leaves + (longlong)(int)fVar5 * 0x18),param_4,pFVar8);
      iVar14 = local_78;
      if (!bVar9) {
        bVar9 = false;
        goto LAB_143ea5389;
      }
    }
    bVar9 = iVar14 < 0;
    bVar20 = iVar14 == 0;
  } while (!bVar20);
LAB_143ea5387:
  bVar9 = true;
LAB_143ea5389:
  if (local_1070.SecondaryData !=
      (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
       )0x0) {
    FMemory::Free((void *)local_1070.SecondaryData);
  }
  return bVar9;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 143ea8400

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (ushort param_1,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0xff;
    uVar7 = (ulonglong)(byte)param_1;
    if (0xff < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x100) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>_> @ 143ea84d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>_::__l2::FNodeQueueEntry>_>
          (ushort param_1,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0xff;
    uVar7 = (ulonglong)(byte)param_1;
    if (0xff < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x100) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 143ea85a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (ushort param_1,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0xff;
    uVar7 = (ulonglong)(byte)param_1;
    if (0xff < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x100) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 143ea8670

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (ushort param_1,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0xff;
    uVar7 = (ulonglong)(byte)param_1;
    if (0xff < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x100) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 143ea8800

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0xff;
  if (0xff < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>_> @ 143ea88c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>_::__l2::FNodeQueueEntry>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,_private:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp(Chaos::TAABB<double,3>_const_&)const_::_2_::FSimpleVisitor_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0xff;
  if (0xff < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp'::__l2::FSimpleVisitor>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 143ea8980

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0xff;
  if (0xff < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>_> @ 143ea8a40

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0xff;
  if (0xff < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l2::FNodeQueueEntry>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// RowMaj3x3RobustSolveLinearSystem<double,Chaos::TVector<double,3>_> @ 143ea8e40

TVector<double,3> * __cdecl
Chaos::RowMaj3x3RobustSolveLinearSystem<double,Chaos::TVector<double,3>_>
          (TVector<double,3> *__return_storage_ptr__,double *param_1,TVector<double,3> *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  double *pdVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double local_108 [4];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  
  dVar16 = param_1[2];
  dVar15 = param_1[6];
  dVar3 = param_1[8];
  dVar4 = param_1[3];
  dVar5 = *param_1;
  dVar6 = param_1[5];
  dVar7 = param_1[1];
  dVar8 = param_1[7];
  dVar9 = param_1[4];
  local_e8 = dVar9 * dVar3 - dVar6 * dVar8;
  local_e0 = dVar16 * dVar8 - dVar7 * dVar3;
  local_d8 = dVar7 * dVar6 - dVar16 * dVar9;
  dVar10 = local_e0 * dVar4 + local_e8 * dVar5 + local_d8 * dVar15;
  local_d0 = dVar15 * dVar6 - dVar4 * dVar3;
  local_c8 = dVar5 * dVar3 - dVar15 * dVar16;
  local_c0 = dVar4 * dVar16 - dVar5 * dVar6;
  local_b8 = dVar4 * dVar8 - dVar15 * dVar9;
  local_108[0] = 0.0;
  local_108[1] = 0.0;
  local_b0 = dVar15 * dVar7 - dVar5 * dVar8;
  local_a8 = dVar5 * dVar9 - dVar4 * dVar7;
  dVar16 = *(double *)param_2;
  pdVar12 = &local_e0;
  dVar15 = *(double *)&param_2->field_0x8;
  lVar11 = 0;
  dVar3 = *(double *)&param_2->field_0x10;
  local_108[2] = 0.0;
  do {
    pdVar1 = pdVar12 + 1;
    dVar4 = *pdVar12;
    pdVar2 = pdVar12 + -1;
    pdVar12 = pdVar12 + 3;
    local_108[lVar11] = dVar3 * *pdVar1 + dVar15 * dVar4 + dVar16 * *pdVar2 + local_108[lVar11];
    lVar11 = lVar11 + 1;
  } while (lVar11 < 3);
  dVar16 = (double)CONCAT44((uint)((ulonglong)local_108[0] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_108[0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar13 = SUB84(local_108[1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)local_108[1] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (dVar16 <= (double)CONCAT44(uVar14,uVar13)) {
    dVar16 = (double)CONCAT44(uVar14,uVar13);
  }
  dVar15 = (double)CONCAT44((uint)((ulonglong)local_108[2] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_108[2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar13 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (dVar16 <= dVar15) {
    dVar16 = dVar15;
  }
  dVar16 = dVar16 * __real_3810000000000000;
  dVar15 = dVar10;
  if ((double)CONCAT44(uVar14,uVar13) < dVar16 || (double)CONCAT44(uVar14,uVar13) == dVar16) {
    dVar15 = dVar16;
    if (dVar16 <= __real_3810000000000000) {
      dVar15 = __real_3810000000000000;
    }
    if (dVar10 < 0.0) {
      dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar15,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
  }
  dVar15 = __real_3ff0000000000000 / dVar15;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar15 * local_108[1];
  *(double *)&__return_storage_ptr__->field_0x10 = dVar15 * local_108[2];
  *(double *)__return_storage_ptr__ = dVar15 * local_108[0];
  return __return_storage_ptr__;
}

// ScaleGeomIntoWorldHelper<Chaos::TBox<double,3>_> @ 143ea90f0

TImplicitObjectScaled<Chaos::TBox<double,3>,1> * __cdecl
Chaos::ScaleGeomIntoWorldHelper<Chaos::TBox<double,3>_>
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *__return_storage_ptr__,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,TVector<double,3> *param_2)

{
  TBox<double,3> *local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_28 = (param_1->MObject).Reference;
  local_20 = (double)*(float *)&param_1->_padding_ * *(double *)param_2;
  local_18 = (double)*(float *)((longlong)&param_1->_padding_ + 4) * *(double *)&param_2->field_0x8;
  local_10 = (double)*(float *)&param_1->_padding_ * *(double *)&param_2->field_0x10;
  if (local_28 != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&local_28->_padding_ = (int)local_28->_padding_ + 1;
    UNLOCK();
  }
  TImplicitObjectScaled<Chaos::TBox<double,3>,1>::TImplicitObjectScaled<Chaos::TBox<double,3>,1>
            (__return_storage_ptr__,(TBox<double,3> *)&local_28,(TVector<double,3> *)&local_20,0.0);
  return __return_storage_ptr__;
}

// ScaleGeomIntoWorldHelper<Chaos::TBox<double,3>_> @ 143ea9170

TBox<double,3> * __cdecl
Chaos::ScaleGeomIntoWorldHelper<Chaos::TBox<double,3>_>
          (TBox<double,3> *param_1,TVector<double,3> *param_2)

{
  return param_1;
}

// ScaleGeomIntoWorldHelper<Chaos::TSphere<double,3>_> @ 143ea9180

TImplicitObjectScaled<Chaos::TSphere<double,3>,1> * __cdecl
Chaos::ScaleGeomIntoWorldHelper<Chaos::TSphere<double,3>_>
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *__return_storage_ptr__,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,TVector<double,3> *param_2)

{
  TSphere<double,3> *local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_28 = (param_1->MObject).Reference;
  local_20 = (double)*(float *)&param_1->_padding_ * *(double *)param_2;
  local_18 = (double)*(float *)((longlong)&param_1->_padding_ + 4) * *(double *)&param_2->field_0x8;
  local_10 = (double)*(float *)&param_1->_padding_ * *(double *)&param_2->field_0x10;
  if (local_28 != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&local_28->_padding_ = (int)local_28->_padding_ + 1;
    UNLOCK();
  }
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1>::
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1>
            (__return_storage_ptr__,(TSphere<double,3> *)&local_28,(TVector<double,3> *)&local_20,
             0.0);
  return __return_storage_ptr__;
}

// ScaleGeomIntoWorldHelper<Chaos::TSphere<double,3>_> @ 143ea9200

TSphere<double,3> * __cdecl
Chaos::ScaleGeomIntoWorldHelper<Chaos::TSphere<double,3>_>
          (TSphere<double,3> *param_1,TVector<double,3> *param_2)

{
  return param_1;
}

// ScaleGeomIntoWorldHelper<Chaos::FCapsule> @ 143ea9210

TImplicitObjectScaled<Chaos::FCapsule,1> * __cdecl
Chaos::ScaleGeomIntoWorldHelper<Chaos::FCapsule>
          (TImplicitObjectScaled<Chaos::FCapsule,1> *__return_storage_ptr__,
          TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,TVector<double,3> *param_2)

{
  FCapsule *local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_28 = (param_1->MObject).Reference;
  local_20 = (double)*(float *)&param_1->_padding_ * *(double *)param_2;
  local_18 = (double)*(float *)((longlong)&param_1->_padding_ + 4) * *(double *)&param_2->field_0x8;
  local_10 = (double)*(float *)&param_1->_padding_ * *(double *)&param_2->field_0x10;
  if (local_28 != (FCapsule *)0x0) {
    LOCK();
    *(int *)&local_28->_padding_ = (int)local_28->_padding_ + 1;
    UNLOCK();
  }
  TImplicitObjectScaled<Chaos::FCapsule,1>::TImplicitObjectScaled<Chaos::FCapsule,1>
            (__return_storage_ptr__,(FCapsule *)&local_28,(TVector<double,3> *)&local_20,0.0);
  return __return_storage_ptr__;
}

// ScaleGeomIntoWorldHelper<Chaos::FCapsule> @ 143ea9290

FCapsule * __cdecl
Chaos::ScaleGeomIntoWorldHelper<Chaos::FCapsule>(FCapsule *param_1,TVector<double,3> *param_2)

{
  return param_1;
}

// ScaleGeomIntoWorldHelper<Chaos::FConvex> @ 143ea92a0

TImplicitObjectScaled<Chaos::FConvex,1> * __cdecl
Chaos::ScaleGeomIntoWorldHelper<Chaos::FConvex>
          (TImplicitObjectScaled<Chaos::FConvex,1> *__return_storage_ptr__,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_1,TVector<double,3> *param_2)

{
  FConvex *local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_28 = (param_1->MObject).Reference;
  local_20 = (double)*(float *)&param_1->_padding_ * *(double *)param_2;
  local_18 = (double)*(float *)((longlong)&param_1->_padding_ + 4) * *(double *)&param_2->field_0x8;
  local_10 = (double)*(float *)&param_1->_padding_ * *(double *)&param_2->field_0x10;
  if (local_28 != (FConvex *)0x0) {
    LOCK();
    *(int *)&local_28->_padding_ = (int)local_28->_padding_ + 1;
    UNLOCK();
  }
  TImplicitObjectScaled<Chaos::FConvex,1>::TImplicitObjectScaled<Chaos::FConvex,1>
            (__return_storage_ptr__,(FConvex *)&local_28,(TVector<double,3> *)&local_20,0.0);
  return __return_storage_ptr__;
}

// ScaleGeomIntoWorldHelper<Chaos::FConvex> @ 143ea9320

FConvex * __cdecl
Chaos::ScaleGeomIntoWorldHelper<Chaos::FConvex>(FConvex *param_1,TVector<double,3> *param_2)

{
  return param_1;
}

// TMakeVectorRegister<VectorRegister4Double> @ 143eabab0

VectorRegister4Double * __cdecl
TMakeVectorRegister<VectorRegister4Double>
          (VectorRegister4Double *__return_storage_ptr__,float param_1,float param_2,float param_3,
          float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2._8_4_ = SUB84((double)param_2,0);
  auVar2._0_8_ = (double)param_1;
  auVar2._12_4_ = (int)((ulonglong)(double)param_2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->XY).m128d_f64 = auVar2;
  auVar1._8_4_ = SUB84((double)param_4,0);
  auVar1._0_8_ = (double)param_3;
  auVar1._12_4_ = (int)((ulonglong)(double)param_4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->ZW).m128d_f64 = auVar1;
  return __return_storage_ptr__;
}

// TriangleMeshTransformVertsHelper<unsigned_short,Chaos::TParticles<float,3>_> @ 143eabaf0

void __cdecl
Chaos::TriangleMeshTransformVertsHelper<unsigned_short,Chaos::TParticles<float,3>_>
          (TVector<double,3> *param_1,int param_2,TParticles<float,3> *param_3,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_4,
          TVector<double,3> *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7)

{
  float fVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_2;
  uVar11 = (uint)~param_2 >> 0x1f;
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,(uint)*(ushort *)((param_4->AllocatorInstance).Data + lVar12 * 6));
  dVar2 = *(double *)&param_1->field_0x10;
  fVar1 = *(float *)&pTVar10->field_0x8;
  dVar7 = (double)((float)*(double *)&param_1->field_0x8 *
                  (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20));
  auVar4._8_4_ = SUB84(dVar7,0);
  auVar4._0_8_ = (double)((float)*(double *)param_1 * (float)*(undefined8 *)pTVar10);
  auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])param_5 = auVar4;
  *(double *)&param_5->field_0x10 = (double)((float)dVar2 * fVar1);
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,(uint)*(ushort *)((param_4->AllocatorInstance).Data + lVar12 * 6 + 2)
                      );
  dVar2 = *(double *)&param_1->field_0x10;
  fVar1 = *(float *)&pTVar10->field_0x8;
  dVar7 = (double)((float)*(double *)&param_1->field_0x8 *
                  (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20));
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = (double)((float)*(double *)param_1 * (float)*(undefined8 *)pTVar10);
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])param_6 = auVar5;
  *(double *)&param_6->field_0x10 = (double)((float)dVar2 * fVar1);
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,(uint)*(ushort *)((param_4->AllocatorInstance).Data + lVar12 * 6 + 4)
                      );
  dVar2 = *(double *)&param_1->field_0x10;
  fVar1 = *(float *)&pTVar10->field_0x8;
  dVar7 = (double)((float)*(double *)&param_1->field_0x8 *
                  (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20));
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (double)((float)*(double *)param_1 * (float)*(undefined8 *)pTVar10);
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])param_7 = auVar6;
  *(double *)&param_7->field_0x10 = (double)((float)dVar2 * fVar1);
  return;
}

// TriangleMeshTransformVertsHelper<int,Chaos::TParticles<float,3>_> @ 143eabce0

void __cdecl
Chaos::TriangleMeshTransformVertsHelper<int,Chaos::TParticles<float,3>_>
          (TVector<double,3> *param_1,int param_2,TParticles<float,3> *param_3,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_4,
          TVector<double,3> *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7)

{
  float fVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_2;
  uVar11 = (uint)~param_2 >> 0x1f;
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,*(int *)((param_4->AllocatorInstance).Data + lVar12 * 0xc));
  dVar2 = *(double *)&param_1->field_0x10;
  fVar1 = *(float *)&pTVar10->field_0x8;
  dVar7 = (double)((float)*(double *)&param_1->field_0x8 *
                  (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20));
  auVar4._8_4_ = SUB84(dVar7,0);
  auVar4._0_8_ = (double)((float)*(double *)param_1 * (float)*(undefined8 *)pTVar10);
  auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])param_5 = auVar4;
  *(double *)&param_5->field_0x10 = (double)((float)dVar2 * fVar1);
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,*(int *)((param_4->AllocatorInstance).Data + lVar12 * 0xc + 4));
  dVar2 = *(double *)&param_1->field_0x10;
  fVar1 = *(float *)&pTVar10->field_0x8;
  dVar7 = (double)((float)*(double *)&param_1->field_0x8 *
                  (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20));
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = (double)((float)*(double *)param_1 * (float)*(undefined8 *)pTVar10);
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])param_6 = auVar5;
  *(double *)&param_6->field_0x10 = (double)((float)dVar2 * fVar1);
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,*(int *)((param_4->AllocatorInstance).Data + lVar12 * 0xc + 8));
  dVar2 = *(double *)&param_1->field_0x10;
  fVar1 = *(float *)&pTVar10->field_0x8;
  dVar7 = (double)((float)*(double *)&param_1->field_0x8 *
                  (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20));
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (double)((float)*(double *)param_1 * (float)*(undefined8 *)pTVar10);
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])param_7 = auVar6;
  *(double *)&param_7->field_0x10 = (double)((float)dVar2 * fVar1);
  return;
}

// TriangleMeshTransformVertsHelperSimd<unsigned_short,Chaos::TParticles<float,3>_> @ 143eabec0

void __cdecl
Chaos::`anonymous_namespace'::
TriangleMeshTransformVertsHelperSimd<unsigned_short,Chaos::TParticles<float,3>_>
          (__m128 *param_1,int param_2,TParticles<float,3> *param_3,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_4,
          __m128 *param_5,__m128 *param_6,__m128 *param_7)

{
  code *pcVar1;
  __m128 _Var2;
  __m128 _Var3;
  __m128 _Var4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_2;
  uVar11 = (uint)~param_2 >> 0x1f;
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,(uint)*(ushort *)((param_4->AllocatorInstance).Data + lVar12 * 6));
  _Var2.m128_f32[3] = 0.0;
  _Var2._0_12_ = (undefined1  [12])*pTVar10;
  *param_5 = _Var2;
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,(uint)*(ushort *)((param_4->AllocatorInstance).Data + lVar12 * 6 + 2)
                      );
  _Var3.m128_f32[3] = 0.0;
  _Var3._0_12_ = (undefined1  [12])*pTVar10;
  *param_6 = _Var3;
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,(uint)*(ushort *)((param_4->AllocatorInstance).Data + lVar12 * 6 + 4)
                      );
  _Var4.m128_f32[3] = 0.0;
  _Var4._0_12_ = (undefined1  [12])*pTVar10;
  *param_7 = _Var4;
  fVar5 = param_1->m128_f32[1];
  fVar6 = param_1->m128_f32[2];
  fVar7 = param_1->m128_f32[3];
  param_5->m128_f32[0] = param_1->m128_f32[0] * param_5->m128_f32[0];
  param_5->m128_f32[1] = fVar5 * param_5->m128_f32[1];
  param_5->m128_f32[2] = fVar6 * param_5->m128_f32[2];
  param_5->m128_f32[3] = fVar7 * param_5->m128_f32[3];
  fVar5 = param_1->m128_f32[1];
  fVar6 = param_1->m128_f32[2];
  fVar7 = param_1->m128_f32[3];
  param_6->m128_f32[0] = param_1->m128_f32[0] * param_6->m128_f32[0];
  param_6->m128_f32[1] = fVar5 * param_6->m128_f32[1];
  param_6->m128_f32[2] = fVar6 * param_6->m128_f32[2];
  param_6->m128_f32[3] = fVar7 * param_6->m128_f32[3];
  fVar5 = param_1->m128_f32[1];
  fVar6 = param_1->m128_f32[2];
  fVar7 = param_1->m128_f32[3];
  param_7->m128_f32[0] = param_1->m128_f32[0] * param_7->m128_f32[0];
  param_7->m128_f32[1] = fVar5 * param_7->m128_f32[1];
  param_7->m128_f32[2] = fVar6 * param_7->m128_f32[2];
  param_7->m128_f32[3] = fVar7 * param_7->m128_f32[3];
  return;
}

// TriangleMeshTransformVertsHelperSimd<int,Chaos::TParticles<float,3>_> @ 143eac090

void __cdecl
Chaos::`anonymous_namespace'::TriangleMeshTransformVertsHelperSimd<int,Chaos::TParticles<float,3>_>
          (__m128 *param_1,int param_2,TParticles<float,3> *param_3,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_4,__m128 *param_5,
          __m128 *param_6,__m128 *param_7)

{
  code *pcVar1;
  __m128 _Var2;
  __m128 _Var3;
  __m128 _Var4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_2;
  uVar11 = (uint)~param_2 >> 0x1f;
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,*(int *)((param_4->AllocatorInstance).Data + lVar12 * 0xc));
  _Var2.m128_f32[3] = 0.0;
  _Var2._0_12_ = (undefined1  [12])*pTVar10;
  *param_5 = _Var2;
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,*(int *)((param_4->AllocatorInstance).Data + lVar12 * 0xc + 4));
  _Var3.m128_f32[3] = 0.0;
  _Var3._0_12_ = (undefined1  [12])*pTVar10;
  *param_6 = _Var3;
  uVar9 = 0;
  if (param_2 < param_4->ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar10 = TParticles<float,3>::GetX
                      (param_3,*(int *)((param_4->AllocatorInstance).Data + lVar12 * 0xc + 8));
  _Var4.m128_f32[3] = 0.0;
  _Var4._0_12_ = (undefined1  [12])*pTVar10;
  *param_7 = _Var4;
  fVar5 = param_1->m128_f32[1];
  fVar6 = param_1->m128_f32[2];
  fVar7 = param_1->m128_f32[3];
  param_5->m128_f32[0] = param_1->m128_f32[0] * param_5->m128_f32[0];
  param_5->m128_f32[1] = fVar5 * param_5->m128_f32[1];
  param_5->m128_f32[2] = fVar6 * param_5->m128_f32[2];
  param_5->m128_f32[3] = fVar7 * param_5->m128_f32[3];
  fVar5 = param_1->m128_f32[1];
  fVar6 = param_1->m128_f32[2];
  fVar7 = param_1->m128_f32[3];
  param_6->m128_f32[0] = param_1->m128_f32[0] * param_6->m128_f32[0];
  param_6->m128_f32[1] = fVar5 * param_6->m128_f32[1];
  param_6->m128_f32[2] = fVar6 * param_6->m128_f32[2];
  param_6->m128_f32[3] = fVar7 * param_6->m128_f32[3];
  fVar5 = param_1->m128_f32[1];
  fVar6 = param_1->m128_f32[2];
  fVar7 = param_1->m128_f32[3];
  param_7->m128_f32[0] = param_1->m128_f32[0] * param_7->m128_f32[0];
  param_7->m128_f32[1] = fVar5 * param_7->m128_f32[1];
  param_7->m128_f32[2] = fVar6 * param_7->m128_f32[2];
  param_7->m128_f32[3] = fVar7 * param_7->m128_f32[3];
  return;
}

// `scalar_deleting_destructor' @ 143eb3d30

void * __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::_scalar_deleting_destructor_
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,uint param_1)

{
  ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,0,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143eb3d70

void * __thiscall
Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::_scalar_deleting_destructor_
          (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *this,uint param_1)

{
  longlong *plVar1;
  FLevelSet *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Object).Reference;
  if (pFVar2 != (FLevelSet *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FWeightedLatticeImplicitObject::~FWeightedLatticeImplicitObject
            ((FWeightedLatticeImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143eb3de0

void * __thiscall
Chaos::FWeightedLatticeImplicitObject::_scalar_deleting_destructor_
          (FWeightedLatticeImplicitObject *this,uint param_1)

{
  ~FWeightedLatticeImplicitObject(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// AddTriangles @ 143eb5240

void __cdecl
Chaos::`anonymous_namespace'::AddTriangles
          (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2,
          FTrimeshIndexBuffer *param_3,int param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  uVar11 = (uint)~param_4 >> 0x1f;
  if (param_3->bRequiresLargeIndices == false) {
    uVar9 = 0;
    if (param_4 < (param_3->SmallIdxBuffer).ArrayNum) {
      uVar9 = uVar11;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar1 = (longlong)param_4 * 6;
    uVar2 = *(undefined2 *)((param_3->SmallIdxBuffer).AllocatorInstance.Data + lVar1);
    if (param_3->bRequiresLargeIndices != false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x1a0,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar9 = 0;
    if (param_4 < (param_3->SmallIdxBuffer).ArrayNum) {
      uVar9 = uVar11;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar3 = *(undefined2 *)((param_3->SmallIdxBuffer).AllocatorInstance.Data + lVar1 + 2);
    if (param_3->bRequiresLargeIndices != false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x1a0,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar9 = 0;
    if (param_4 < (param_3->SmallIdxBuffer).ArrayNum) {
      uVar9 = uVar11;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    local_48 = CONCAT22(uVar3,uVar2);
    local_44 = *(undefined2 *)((param_3->SmallIdxBuffer).AllocatorInstance.Data + lVar1 + 4);
    if ((pFVar6 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)param_2->ArrayMax * 6)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x206,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar10 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar10 * 6;
    *(undefined4 *)pFVar6 = local_48;
    *(undefined2 *)(pFVar6 + 4) = local_44;
  }
  else {
    uVar9 = 0;
    if (param_4 < (param_3->LargeIdxBuffer).ArrayNum) {
      uVar9 = uVar11;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar1 = (longlong)param_4 * 0xc;
    uVar4 = *(undefined4 *)((param_3->LargeIdxBuffer).AllocatorInstance.Data + lVar1);
    if (param_3->bRequiresLargeIndices == false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x19a,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar9 = 0;
    if (param_4 < (param_3->LargeIdxBuffer).ArrayNum) {
      uVar9 = uVar11;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar5 = *(undefined4 *)((param_3->LargeIdxBuffer).AllocatorInstance.Data + lVar1 + 4);
    if (param_3->bRequiresLargeIndices == false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x19a,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar9 = 0;
    if (param_4 < (param_3->LargeIdxBuffer).ArrayNum) {
      uVar9 = uVar11;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = (param_1->AllocatorInstance).Data;
    local_38 = *(undefined4 *)((param_3->LargeIdxBuffer).AllocatorInstance.Data + lVar1 + 8);
    local_40 = uVar4;
    uStack_3c = uVar5;
    if ((pFVar6 <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 < pFVar6 + (longlong)param_1->ArrayMax * 0xc)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = param_1->ArrayNum;
    if (iVar10 == param_1->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar10 + 1;
    pFVar6 = (param_1->AllocatorInstance).Data;
    *(ulonglong *)(pFVar6 + (longlong)iVar10 * 0xc) = CONCAT44(uStack_3c,local_40);
    *(undefined4 *)(pFVar6 + (longlong)iVar10 * 0xc + 8) = local_38;
  }
  return;
}

// ComputeScaledSweepInputs @ 143eba010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::ComputeScaledSweepInputs
          (TVector<double,3> *param_1,TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,
          double param_4,TVector<double,3> *param_5,double *param_6,
          TRigidTransform<double,3> *param_7)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar12 [16];
  
  dVar2 = *(double *)&param_3->field_0x8 * *(double *)&param_1->field_0x8;
  dVar9 = *(double *)param_3 * *(double *)param_1;
  dVar11 = *(double *)&param_3->field_0x10 * *(double *)&param_1->field_0x10;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar9 * dVar9 + dVar2 * dVar2 + dVar11 * dVar11;
  auVar12 = sqrtpd(unaff_XMM7,auVar12);
  dVar10 = auVar12._0_8_;
  if (dVar10 <= __real_0010000000000000) {
    dVar11 = 0.0;
    dVar2 = 0.0;
    dVar9 = __real_3ff0000000000000;
  }
  else {
    dVar8 = __real_3ff0000000000000 / dVar10;
    dVar11 = dVar8 * dVar11;
    dVar2 = dVar8 * dVar2;
    dVar9 = dVar8 * dVar9;
  }
  *(double *)param_5 = dVar9;
  *(double *)&param_5->field_0x8 = dVar2;
  *(double *)&param_5->field_0x10 = dVar11;
  uVar7 = _UNK_150689688;
  uVar6 = ___xmm_3ff00000000000003ff0000000000000;
  *param_6 = dVar10;
  dVar9 = *(double *)&param_2->field_0x20;
  dVar10 = *(double *)&param_2->field_0x28;
  dVar8 = *(double *)&param_2->field_0x30;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  uVar4 = *(undefined8 *)&param_2->field_0x10;
  uVar5 = *(undefined8 *)&param_2->field_0x18;
  dVar2 = *(double *)param_1;
  dVar11 = *(double *)&param_1->field_0x10;
  *(undefined8 *)param_7 = *(undefined8 *)param_2;
  *(undefined8 *)&param_7->field_0x8 = uVar3;
  dVar10 = dVar10 * *(double *)&param_1->field_0x8;
  *(undefined8 *)&param_7->field_0x10 = uVar4;
  *(undefined8 *)&param_7->field_0x18 = uVar5;
  auVar1._8_4_ = SUB84(dVar10,0);
  auVar1._0_8_ = dVar9 * dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&param_7->field_0x20 = auVar1;
  uVar4 = _UNK_150689518;
  uVar3 = ___xmm_00000000000000003ff0000000000000;
  *(double *)&param_7->field_0x30 = dVar8 * dVar11;
  *(undefined8 *)&param_7->field_0x38 = 0;
  *(undefined8 *)&param_7->field_0x40 = uVar6;
  *(undefined8 *)&param_7->field_0x48 = uVar7;
  *(undefined8 *)&param_7->field_0x50 = uVar3;
  *(undefined8 *)&param_7->field_0x58 = uVar4;
  return;
}

// GetAngularVelocityAdjustedForGyroscopicTorques @ 143ec0220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double,3> * __cdecl
Chaos::Utilities::GetAngularVelocityAdjustedForGyroscopicTorques
          (TVector<double,3> *__return_storage_ptr__,TRotation<double,3> *param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  TVector<double> *pTVar13;
  PMatrix<double,3,3> *pPVar14;
  uint uVar15;
  uint uVar17;
  double dVar16;
  double dVar18;
  double dVar19;
  double dVar20;
  TVector<double>_u_0 local_298;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  TVector<double> local_248;
  double local_228 [6];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [24];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  double local_178;
  undefined8 local_170;
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  PMatrix<double,3,3> local_128 [2];
  
  uVar12 = *(undefined8 *)&param_3->field_0x8;
  local_298._0_16_ = *(undefined1 (*) [16])param_3;
  if (__real_0000000000000000 < param_4) {
    local_298._s_0.Z = (double)*(undefined8 *)&param_3->field_0x10;
    pTVar13 = UE::Math::TQuat<double>::UnrotateVector
                        ((TQuat<double> *)param_1,&local_248,(TVector<double> *)&local_298._s_0);
    dVar1 = *(double *)&param_2->field_0x8;
    dVar2 = *(double *)&param_2->field_0x10;
    auVar4 = *(undefined1 (*) [16])&pTVar13->field0_0x0;
    dVar11 = auVar4._0_8_;
    dVar5 = auVar4._8_8_;
    dVar3 = (pTVar13->field0_0x0)._s_0.Z;
    dVar19 = *(double *)param_2;
    local_1c8 = 0;
    uStack_1c0 = 0;
    dVar10 = dVar1 * dVar5;
    dVar6 = dVar3 * dVar2;
    dVar7 = dVar19 * dVar11;
    local_228[4] = 0.0;
    local_1e8 = 0;
    local_260 = (dVar6 * dVar5 - dVar10 * dVar3) * param_4;
    local_228[1] = 0.0;
    uVar15 = (uint)__xmm_80000000000000008000000000000000;
    local_1a8._16_4_ = auVar4._8_4_ ^ uVar15;
    uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_1a8._20_4_ = auVar4._12_4_ ^ uVar17;
    local_1e0 = 0;
    local_228[2] = 0.0;
    local_1f8 = 0;
    local_228[3] = 0.0;
    local_188._4_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar17;
    local_188._0_4_ = SUB84(dVar3,0) ^ uVar15;
    local_1f0 = 0;
    local_160._4_4_ = auVar4._4_4_ ^ uVar17;
    local_160._0_4_ = auVar4._0_4_ ^ uVar15;
    local_1d0 = 0;
    local_1a8._0_8_ = 0;
    local_180 = 0;
    local_1b8 = ___xmm_3ff00000000000000000000000000000;
    uStack_1b0 = _UNK_15061cbc8;
    local_298._8_4_ = auVar4._8_4_;
    local_298._s_0.X = dVar5;
    local_298._12_4_ = auVar4._12_4_;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    local_190 = 0;
    local_170 = 0;
    local_150 = 0;
    local_138 = ___xmm_3ff00000000000000000000000000000;
    uStack_130 = _UNK_15061cbc8;
    local_248.field0_0x0._s_0.Z = dVar3;
    local_228[0] = dVar19;
    local_228[5] = dVar1;
    local_1d8 = dVar2;
    local_1a8._8_8_ = dVar3;
    local_178 = dVar11;
    local_168 = dVar5;
    pPVar14 = Multiply(local_128,(PMatrix<double,3,3> *)local_1a8,(PMatrix<double,3,3> *)local_228);
    local_270 = (dVar6 + *(double *)&pPVar14->field_0x20) * param_4;
    local_278 = (*(double *)&pPVar14->field_0x8 - dVar6) * param_4;
    local_268 = (*(double *)&pPVar14->field_0x40 - dVar10) * param_4;
    local_250 = param_4 * *(double *)&pPVar14->field_0x28 + dVar1;
    local_258 = (*(double *)&pPVar14->field_0x30 - dVar7) * param_4;
    dVar19 = param_4 * *(double *)pPVar14 + dVar19;
    dVar20 = (dVar7 + *(double *)&pPVar14->field_0x48) * param_4;
    dVar1 = (dVar10 + *(double *)&pPVar14->field_0x10) * param_4;
    dVar2 = param_4 * *(double *)&pPVar14->field_0x50 + dVar2;
    dVar18 = ((local_250 * dVar2 - local_258 * dVar20) * dVar19 -
             (local_270 * dVar2 - local_258 * local_268) * local_278) +
             (dVar20 * local_270 - local_250 * local_268) * dVar1;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar19 = __real_3ff0000000000000 / dVar19;
      dVar18 = local_270 * dVar19;
      dVar8 = local_268 * dVar19;
      dVar19 = local_260 * dVar19;
      dVar9 = local_258 - dVar1 * dVar18;
      dVar16 = __real_3ff0000000000000 / (local_250 - local_278 * dVar18);
      dVar6 = ((dVar7 * dVar3 - dVar6 * dVar11) * param_4 - local_278 * dVar19) * dVar16;
      dVar16 = (dVar20 - local_278 * dVar8) * dVar16;
      dVar1 = (((dVar10 * dVar11 - dVar7 * dVar5) * param_4 - dVar1 * dVar19) - dVar6 * dVar9) /
              ((dVar2 - dVar1 * dVar8) - dVar16 * dVar9);
      dVar3 = dVar3 - dVar1;
      dVar6 = dVar6 - dVar1 * dVar16;
      dVar5 = local_298._s_0.X - dVar6;
      dVar11 = dVar11 - (dVar19 - (dVar1 * dVar8 + dVar6 * dVar18));
      local_248.field0_0x0._s_0.Z = dVar3;
    }
    local_298._8_4_ = SUB84(dVar5,0);
    local_298._s_0.X = dVar11;
    local_298._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_298._s_0.Z = dVar3;
    pTVar13 = UE::Math::TQuat<double>::RotateVector
                        ((TQuat<double> *)param_1,&local_248,(TVector<double> *)&local_298._s_0);
    dVar1 = (pTVar13->field0_0x0)._s_0.Y;
    *(double *)__return_storage_ptr__ = (pTVar13->field0_0x0)._s_0.X;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar1;
    *(double *)&__return_storage_ptr__->field_0x10 = (pTVar13->field0_0x0)._s_0.Z;
  }
  else {
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar12;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// GetSolverPhysicsResultsTime @ 143ec3800

double __cdecl Chaos::Utilities::GetSolverPhysicsResultsTime(FPhysicsSolverBase *param_1)

{
  double dVar1;
  
  dVar1 = (double)(param_1->MarshallingManager).ExternalTime_External + param_1->AccumulatedTime;
  if (((ForceDisableAsyncPhysics == 0) && (0.0 <= param_1->AsyncDt)) && (UseAsyncInterpolation != 0)
     ) {
    dVar1 = dVar1 - (double)param_1->AsyncMultiplier * param_1->AsyncDt;
  }
  return dVar1;
}

// GetWindingOrder @ 143ec40f0

double __cdecl Chaos::GetWindingOrder(TVector<double,3> *param_1)

{
  undefined4 uVar2;
  double dVar1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar3 = SUB84(__real_bff0000000000000,0);
  uVar4 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar5 = uVar3;
  uVar6 = uVar4;
  if (0.0 < *(double *)&param_1->field_0x10 || *(double *)&param_1->field_0x10 == 0.0) {
    uVar5 = SUB84(__real_3ff0000000000000,0);
    uVar6 = uVar2;
  }
  if (0.0 < *(double *)&param_1->field_0x8 || *(double *)&param_1->field_0x8 == 0.0) {
    uVar3 = SUB84(__real_3ff0000000000000,0);
    uVar4 = uVar2;
  }
  dVar1 = __real_3ff0000000000000;
  if (*(double *)param_1 <= 0.0 && *(double *)param_1 != 0.0) {
    dVar1 = __real_bff0000000000000;
  }
  return dVar1 * (double)CONCAT44(uVar4,uVar3) * (double)CONCAT44(uVar6,uVar5);
}

// Multiply @ 143ec69d0

PMatrix<double,3,3> * __cdecl
Chaos::Utilities::Multiply
          (PMatrix<double,3,3> *__return_storage_ptr__,PMatrix<double,3,3> *param_1,
          PMatrix<double,3,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar1 = *(double *)&param_1->field_0x20;
  dVar2 = *(double *)param_1;
  dVar3 = *(double *)&param_1->field_0x40;
  dVar4 = *(double *)&param_1->field_0x8;
  dVar5 = *(double *)&param_2->field_0x28;
  dVar6 = *(double *)&param_2->field_0x30;
  *(double *)__return_storage_ptr__ =
       *(double *)param_2 * dVar2 + *(double *)&param_2->field_0x8 * dVar1 +
       *(double *)&param_2->field_0x10 * dVar3;
  dVar7 = *(double *)&param_2->field_0x48;
  dVar8 = *(double *)&param_1->field_0x28;
  dVar9 = *(double *)&param_2->field_0x50;
  dVar10 = *(double *)&param_1->field_0x48;
  *(double *)&__return_storage_ptr__->field_0x20 =
       *(double *)&param_2->field_0x20 * dVar2 + dVar5 * dVar1 + dVar6 * dVar3;
  dVar5 = *(double *)&param_2->field_0x20;
  dVar6 = *(double *)&param_2->field_0x8;
  dVar11 = *(double *)&param_2->field_0x10;
  *(double *)&__return_storage_ptr__->field_0x40 =
       *(double *)&param_2->field_0x40 * dVar2 + dVar7 * dVar1 + dVar9 * dVar3;
  dVar1 = *(double *)&param_2->field_0x40;
  dVar2 = *(double *)&param_2->field_0x28;
  dVar3 = *(double *)&param_2->field_0x48;
  dVar7 = *(double *)&param_2->field_0x30;
  dVar9 = *(double *)&param_2->field_0x50;
  dVar12 = *(double *)&param_1->field_0x30;
  *(double *)&__return_storage_ptr__->field_0x8 =
       dVar4 * *(double *)param_2 + dVar8 * dVar6 + dVar10 * dVar11;
  dVar6 = *(double *)&param_2->field_0x8;
  dVar11 = *(double *)&param_1->field_0x50;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar4 * dVar5 + dVar8 * dVar2 + dVar10 * dVar7;
  dVar2 = *(double *)&param_2->field_0x10;
  *(double *)&__return_storage_ptr__->field_0x48 = dVar4 * dVar1 + dVar8 * dVar3 + dVar10 * dVar9;
  dVar1 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)&param_2->field_0x20;
  dVar4 = *(double *)&param_2->field_0x40;
  dVar5 = *(double *)&param_2->field_0x28;
  dVar7 = *(double *)&param_2->field_0x48;
  dVar8 = *(double *)&param_2->field_0x30;
  *(double *)&__return_storage_ptr__->field_0x10 =
       dVar1 * *(double *)param_2 + dVar12 * dVar6 + dVar11 * dVar2;
  *(double *)&__return_storage_ptr__->field_0x30 = dVar1 * dVar3 + dVar12 * dVar5 + dVar11 * dVar8;
  dVar2 = *(double *)&param_2->field_0x50;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0x3ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(double *)&__return_storage_ptr__->field_0x50 = dVar1 * dVar4 + dVar12 * dVar7 + dVar11 * dVar2;
  return __return_storage_ptr__;
}

// SafeInvScale @ 143ecb9f0

TVector<double,3> * __cdecl
Chaos::SafeInvScale(TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = __real_412e8480014aeccc;
  dVar5 = __real_3eb0c6f7a0000000;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3ff0000000000000;
  dVar1 = *(double *)param_1;
  dVar7 = __real_412e8480014aeccc;
  if (__real_3eb0c6f7a0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar7 = __real_3ff0000000000000 / dVar1;
  }
  *(double *)__return_storage_ptr__ = dVar7;
  dVar1 = *(double *)&param_1->field_0x8;
  dVar7 = dVar6;
  if (dVar5 <= (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar4,SUB84(dVar1,0) & uVar3)) {
    dVar7 = dVar2 / dVar1;
  }
  *(double *)&__return_storage_ptr__->field_0x8 = dVar7;
  dVar1 = *(double *)&param_1->field_0x10;
  if (dVar5 <= (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar4,SUB84(dVar1,0) & uVar3)) {
    *(double *)&__return_storage_ptr__->field_0x10 = dVar2 / dVar1;
    return __return_storage_ptr__;
  }
  *(double *)&__return_storage_ptr__->field_0x10 = dVar6;
  return __return_storage_ptr__;
}

// ScaleTransformHelper @ 143ecbac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::ScaleTransformHelper
          (TVector<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TRigidTransform<double,3> *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  
  uVar10 = _UNK_150689688;
  uVar9 = ___xmm_3ff00000000000003ff0000000000000;
  dVar4 = *(double *)&param_2->field_0x20;
  dVar5 = *(double *)&param_2->field_0x30;
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x10;
  uVar6 = *(undefined8 *)&param_2->field_0x8;
  uVar7 = *(undefined8 *)&param_2->field_0x10;
  uVar8 = *(undefined8 *)&param_2->field_0x18;
  dVar11 = *(double *)&param_2->field_0x28 * *(double *)&param_1->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)param_2;
  *(undefined8 *)&param_3->field_0x8 = uVar6;
  *(undefined8 *)&param_3->field_0x10 = uVar7;
  *(undefined8 *)&param_3->field_0x18 = uVar8;
  auVar3._8_4_ = SUB84(dVar11,0);
  auVar3._0_8_ = dVar4 * dVar1;
  auVar3._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])&param_3->field_0x20 = auVar3;
  uVar7 = _UNK_150689518;
  uVar6 = ___xmm_00000000000000003ff0000000000000;
  *(double *)&param_3->field_0x30 = dVar5 * dVar2;
  *(undefined8 *)&param_3->field_0x38 = 0;
  *(undefined8 *)&param_3->field_0x40 = uVar9;
  *(undefined8 *)&param_3->field_0x48 = uVar10;
  *(undefined8 *)&param_3->field_0x50 = uVar6;
  *(undefined8 *)&param_3->field_0x58 = uVar7;
  return;
}

// TransformSweepOutputsHelper @ 143ed4970

void __cdecl
Chaos::TransformSweepOutputsHelper
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          float param_4,float param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,
          float *param_8)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = *(double *)param_1;
  if (((dVar1 == 0.0) && (*(double *)&param_1->field_0x8 == 0.0)) &&
     (*(double *)&param_1->field_0x10 == 0.0)) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7531043991815454795>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\TriangleMeshImplicitObject.cpp"
                       ,0x4b,"TriMeshScale != FVec3(0.0f)");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    dVar10 = *(double *)&param_1->field_0x10;
    dVar2 = *(double *)&param_1->field_0x8;
    *param_8 = param_5 / param_4;
    dVar2 = dVar2 * *(double *)&param_2->field_0x8;
    dVar11 = dVar1 * *(double *)param_2;
    dVar10 = dVar10 * *(double *)&param_2->field_0x10;
    dVar8 = dVar11 * dVar11 + dVar2 * dVar2 + dVar10 * dVar10;
    uVar9 = dVar10;
    uVar5 = dVar2;
    uVar6 = dVar11;
    if ((dVar8 != __real_3ff0000000000000) &&
       (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar8)) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar9 = dVar8 * dVar10;
      uVar5 = dVar8 * dVar2;
      uVar6 = dVar11 * dVar8;
    }
    auVar4._8_4_ = (int)uVar5;
    auVar4._0_8_ = uVar6;
    auVar4._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
    *(undefined1 (*) [16])param_6 = auVar4;
    *(undefined8 *)&param_6->field_0x10 = uVar9;
    dVar10 = *(double *)&param_3->field_0x8;
    dVar2 = *(double *)&param_3->field_0x10;
    dVar8 = *(double *)&param_1->field_0x8;
    dVar11 = *(double *)&param_1->field_0x10;
    *(double *)param_7 = *(double *)param_3 / dVar1;
    *(double *)&param_7->field_0x8 = dVar10 / dVar8;
    *(double *)&param_7->field_0x10 = dVar2 / dVar11;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosVelocityFieldISPCEnabled'' @ 150366a50

void __cdecl _dynamic_atexit_destructor_for__CVarChaosVelocityFieldISPCEnabled__(void)

{
  CVarChaosVelocityFieldISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosVelocityFieldISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosVelocityFieldMaxVelocity'' @ 150366a70

void __cdecl
Chaos::Softs::Private::_dynamic_atexit_destructor_for__CVarChaosVelocityFieldMaxVelocity__(void)

{
  CVarChaosVelocityFieldMaxVelocity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosVelocityFieldMaxVelocity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosWeightedLatticePhiAndNormalBatchSize'' @ 150366a90

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarChaosWeightedLatticePhiAndNormalBatchSize__(void)

{
  CVarChaosWeightedLatticePhiAndNormalBatchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosWeightedLatticePhiAndNormalBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPerPolySupport'' @ 150366ab0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarPerPolySupport__(void)

{
  CVarPerPolySupport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPerPolySupport);
  return;
}

