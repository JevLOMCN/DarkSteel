// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 118

// BakedResourcePrefix'' @ 1411dafb0

void __cdecl `dynamic_initializer_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ::FString::FString(&FBakingConfiguration::BakedResourcePrefix,L"BAKE_");
  atexit(`dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__);
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 1411dafe0

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE__
          (void)

{
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.XY =
       UE::Math::TTransform<double>::Identity.Rotation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.ZW =
       UE::Math::TTransform<double>::Identity.Rotation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.XY =
       UE::Math::TTransform<double>::Identity.Translation.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.ZW =
       UE::Math::TTransform<double>::Identity.Translation.ZW;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY =
       UE::Math::TTransform<double>::Identity.Scale3D.XY;
  FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  return;
}

// DEFAULT_PARAMETER_VALUE'' @ 1411db040

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE__(void)

{
  FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE = FLinearColor::Black;
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 1411db060

void __cdecl
`dynamic_initializer_for_'FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
         DEFAULT_PARAMETER_VALUE_NAME__);
  return;
}

// Mutex'' @ 1411db080

void __cdecl `dynamic_initializer_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex,4000);
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__);
  return;
}

// `dynamic_initializer_for_'CVarStreamPriority'' @ 1411db0b0

void __cdecl _dynamic_initializer_for__CVarStreamPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamPriority,L"Mutable.StreamPriority",&StreamPriority,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamPriority__);
  return;
}

// `dynamic_initializer_for_'LogMuscleActivationConstraint'' @ 1411db100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMuscleActivationConstraint,L"LogMuscleActivationConstraint",Log
             ,All);
  atexit(_dynamic_atexit_destructor_for__LogMuscleActivationConstraint__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1411db140

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1411db1d0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1411db260

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1411db2f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1411db380

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1411db410

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1411db4a0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1411db530

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1411db5c0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1411db650

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

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotated'' @ 1411db6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosXPBDCorotated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosXPBDCorotated == (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotated>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosXPBDCorotated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotated,*pFVar1,
               L"Chaos XPBD Corotated Constraint","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedDet'' @ 1411db770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosXPBDCorotatedDet__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosXPBDCorotatedDet ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedDet>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosXPBDCorotatedDet");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotatedDet,*pFVar1,
               L"Chaos XPBD Corotated Constraint Det Compute","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedPolar'' @ 1411db800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosXPBDCorotatedPolar__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosXPBDCorotatedPolar ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedPolar>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosXPBDCorotatedPolar");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotatedPolar,*pFVar1,
               L"Chaos XPBD Corotated Constraint Polar Compute","STATGROUP_Chaos","STATCAT_Advanced"
               ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableInstanceBuildTimeAvrg'' @ 1411db890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableInstanceBuildTimeAvrg__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableInstanceBuildTimeAvrg ==
      (FThreadSafeStaticStat<FStat_STAT_MutableInstanceBuildTimeAvrg>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableInstanceBuildTimeAvrg");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableInstanceBuildTimeAvrg,*pFVar1,
               L"Avrg Instance Build Time","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableNumAllocatedSkeletalMeshes'' @ 1411db920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableNumAllocatedSkeletalMeshes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableNumAllocatedSkeletalMeshes ==
      (FThreadSafeStaticStat<FStat_STAT_MutableNumAllocatedSkeletalMeshes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableNumAllocatedSkeletalMeshes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumAllocatedSkeletalMeshes,*pFVar1,
               L"Num Allocated Mutable Skeletal Meshes","STATGROUP_Mutable","STATCAT_Advanced",
               L"Mutable",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableNumAllocatedTextures'' @ 1411db9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableNumAllocatedTextures__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableNumAllocatedTextures ==
      (FThreadSafeStaticStat<FStat_STAT_MutableNumAllocatedTextures>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableNumAllocatedTextures");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumAllocatedTextures,*pFVar1,
               L"Num Allocated Mutable Textures","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableNumBuiltInstances'' @ 1411dba40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableNumBuiltInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableNumBuiltInstances ==
      (FThreadSafeStaticStat<FStat_STAT_MutableNumBuiltInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableNumBuiltInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumBuiltInstances,*pFVar1,
               L"Num Built Instances","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableNumInstances'' @ 1411dbad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableNumInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableNumInstances == (FThreadSafeStaticStat<FStat_STAT_MutableNumInstances>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableNumInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumInstances,*pFVar1,
               L"Num Instances","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableNumInstancesLOD0'' @ 1411dbb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableNumInstancesLOD0__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableNumInstancesLOD0 ==
      (FThreadSafeStaticStat<FStat_STAT_MutableNumInstancesLOD0>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableNumInstancesLOD0");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumInstancesLOD0,*pFVar1,
               L"Num Instances at LOD 0","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableNumInstancesLOD1'' @ 1411dbbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableNumInstancesLOD1__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableNumInstancesLOD1 ==
      (FThreadSafeStaticStat<FStat_STAT_MutableNumInstancesLOD1>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableNumInstancesLOD1");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumInstancesLOD1,*pFVar1,
               L"Num Instances at LOD 1","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableNumInstancesLOD2'' @ 1411dbc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableNumInstancesLOD2__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableNumInstancesLOD2 ==
      (FThreadSafeStaticStat<FStat_STAT_MutableNumInstancesLOD2>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableNumInstancesLOD2");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumInstancesLOD2,*pFVar1,
               L"Num Instances at LOD 2 or more","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableNumPendingInstanceUpdates'' @ 1411dbd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableNumPendingInstanceUpdates__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableNumPendingInstanceUpdates ==
      (FThreadSafeStaticStat<FStat_STAT_MutableNumPendingInstanceUpdates>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableNumPendingInstanceUpdates");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumPendingInstanceUpdates,*pFVar1,
               L"Num Pending Instance Updates","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableStreamingOps'' @ 1411dbda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableStreamingOps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableStreamingOps == (FThreadSafeStaticStat<FStat_STAT_MutableStreamingOps>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableStreamingOps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableStreamingOps,*pFVar1,
               L"Streaming Ops","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableTextureGPUSize'' @ 1411dbe30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableTextureGPUSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableTextureGPUSize ==
      (FThreadSafeStaticStat<FStat_STAT_MutableTextureGPUSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableTextureGPUSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableTextureGPUSize,*pFVar1,
               L"Size of the Mutable Texture mips that are resident on the GPU","STATGROUP_Mutable",
               "STATCAT_Advanced",L"Mutable",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBD_StiffnessApplyValues'' @ 1411dbec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBD_StiffnessApplyValues__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBD_StiffnessApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBD_StiffnessApplyValues");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_StiffnessApplyValues,*pFVar1,
               L"Chaos PBD Stiffness Apply Values","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBD_WeightMapApplyValues'' @ 1411dbf50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBD_WeightMapApplyValues__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBD_WeightMapApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_WeightMapApplyValues>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBD_WeightMapApplyValues");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_WeightMapApplyValues,*pFVar1,
               L"Chaos PBD WeightMap Apply Values","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_MultilayerProjector_h__Script_CustomizableObject_4004793925'' @ 1411dbfe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_MultilayerProjector_h__Script_CustomizableObject_4004793925__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CustomizableObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_MultilayerProjector_h__Script_CustomizableObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// NewStructOps @ 14ac4ed90

void * __cdecl Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMultilayerProjectorLayer,&UE::CoreUObject::Private::Construct<FMultilayerProjectorLayer>,&UE::CoreUObject::Private::ConstructForTests<FMultilayerProjectorLayer>,&UE::CoreUObject::Private::Destruct<FMultilayerProjectorLayer>,&UE::CoreUObject::Private::Copy<FMultilayerProjectorLayer>,&UE::CoreUObject::Private::GetStructTypeHash<FMultilayerProjectorLayer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// <lambda_invoker_cdecl> @ 14ac4ef70

void __cdecl
``FUnrealMutableResourceProvider::GetImageAsync'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 14ac4ef80

void __cdecl
``FUnrealMutableResourceProvider::GetMeshAsync'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 14ac4ef90

void __cdecl
``FUnrealMutableResourceProvider::GetReferencedImageAsync'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// ConstructItems<TSharedPtr<IAsyncReadFileHandle,1>,TSharedPtr<IAsyncReadFileHandle,1>,int> @ 14ac4f050

void __cdecl
ConstructItems<TSharedPtr<IAsyncReadFileHandle,1>,TSharedPtr<IAsyncReadFileHandle,1>,int>
          (void *param_1,TSharedPtr<IAsyncReadFileHandle,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IAsyncReadFileHandle **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FUnrealMutableModelBulkReader::FObjectData,int> @ 14ac4f090

void __cdecl
DestructItems<FUnrealMutableModelBulkReader::FObjectData,int>(FObjectData *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)&(param_1->ReadFileHandles).field_0x40;
    do {
      plVar3 = (longlong *)puVar4[3];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(undefined4 *)(puVar4 + 1) = 0;
      if ((void *)*puVar4 != (void *)0x0) {
        FMemory::Free((void *)*puVar4);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar4 + -8));
      *(undefined4 *)(puVar4 + -9) = 0;
      if ((void *)puVar4[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar4 + -0x12));
      if ((void *)puVar4[-0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-0x14]);
      }
      plVar3 = (longlong *)puVar4[-0x15];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      puVar4 = puVar4 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<IAsyncReadRequest,1>,int> @ 14ac4f170

void __cdecl
DestructItems<TSharedPtr<IAsyncReadRequest,1>,int>
          (TSharedPtr<IAsyncReadRequest,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<IBulkDataIORequest,1>,int> @ 14ac4f1b0

void __cdecl
DestructItems<TSharedPtr<IBulkDataIORequest,1>,int>
          (TSharedPtr<IBulkDataIORequest,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Launch<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_>'::__l2::<lambda_1>_> @ 14ac4fb40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_> __cdecl
UE::Tasks::
Launch<_UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_>_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1>_conflict *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &___7__TTaskWithResult_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr_VFMesh_Private_Mutable_UE___00____V_Tasks_UE__YA_AV__TTask_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___23_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_>)param_1;
}

// <lambda_1> @ 14ac50120

<lambda_1> * __thiscall
``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::
<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  FTaskEvent FVar1;
  UObjectBase *this_00;
  TReferenceControllerBase<1> *pTVar2;
  
  *(undefined8 *)this = 0;
  FVar1 = param_1->LoadedEvent;
  *(FTaskEvent *)this = FVar1;
  if (FVar1 != (FTaskEvent)0x0) {
    LOCK();
    *(int *)((longlong)FVar1 + 0x30) = *(int *)((longlong)FVar1 + 0x30) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  this_00 = (UObjectBase *)(param_1->SkeletalMesh).Object;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    *(UObjectBase **)((longlong)this + 8) = this_00;
  }
  *(FMeshConversionContext **)((longlong)this + 0x10) = (param_1->Context).Object;
  pTVar2 = (param_1->Context).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)((longlong)this + 0x20) = param_1->LODIndex;
  return this;
}

// ~TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::<lambda_1>,0,1> @ 14ac50700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData_::__l2::<lambda_1>::operator()_::__l29::<lambda_1>,0,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::`2'::<lambda_1>::operator()'::`29'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if (*(UObject **)((longlong)this + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)this + 0x10));
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ac50757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>,0,0> @ 14ac50770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FMutableStreamRequest::Stream_::__l2::<lambda_1>::operator()_::__l15::<lambda_1>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FMutableStreamRequest::Stream'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ac5079a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,0,0> @ 14ac507b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__FMutableStreamRequest::Stream_::__l2::<lambda_1>::operator()_::__l26::<lambda_2>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FMutableStreamRequest::Stream'::`2'::<lambda_1>::operator()'::`26'::<lambda_2>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ac507da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l87::<lambda_2>,0,1> @ 14ac507f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l87::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FUnrealMutableModelBulkReader::BeginReadBlock_::__l87::<lambda_2>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::`87'::<lambda_2>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ac50813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>,0,1> @ 14ac50820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FUnrealMutableResourceProvider::GetImageAsync_::__l115::<lambda_2>,0,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::`115'::<lambda_2>,0,1>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 0x70);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar4 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  return;
}

// ~TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l93::<lambda_3>,0,1> @ 14ac50890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l93::<lambda_3>,0,1>::
~TFunction_OwnedObject<_FUnrealMutableModelBulkReader::BeginReadBlock_::__l93::<lambda_3>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::`93'::<lambda_3>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ac508b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l124::<lambda_3>,0,0> @ 14ac508c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l124::<lambda_3>,0,0>::
~TFunction_OwnedObject<_FUnrealMutableResourceProvider::GetImageAsync_::__l124::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::`124'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 14ac50e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()
          (void *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  UObjectBase *this_00;
  code *pcVar7;
  IBulkDataIORequest *pIVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  longlong *plVar12;
  FTaskBase *this_01;
  FTaskBase *pFVar13;
  FMeshConversionContext *pFVar14;
  IBulkDataIORequest *pIVar15;
  USkeletalMesh *pUVar16;
  code **ppcVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  FName local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((*(longlong *)((longlong)this + 0x10) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  plVar12 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x398))();
  iVar3 = *(int *)((longlong)this + 0x18);
  if ((iVar3 < 0) || ((int)plVar12[1] <= iVar3)) {
    if (2 < (byte)LogMutable._0_1_) {
      lVar6 = plVar12[1];
      if ((*(longlong *)((longlong)this + 0x10) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                              ,0x67,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_90 = *(FName *)(*(longlong *)((longlong)this + 0x10) + 0x18);
      ::FName::ToString(&local_90,&local_78);
      local_a8 = CONCAT44(local_a8._4_4_,(int)lVar6);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((iVar3 < 0) &&
       (local_a8 = (longlong)iVar3, local_a0 = (longlong)(int)plVar12[1],
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar6 = *(longlong *)(*plVar12 + (longlong)iVar3 * 8);
    if ((*(int *)((longlong)this + 0x1c) < 0) ||
       (*(int *)(lVar6 + 0x18) <= *(int *)((longlong)this + 0x1c))) {
      if (2 < (byte)LogMutable._0_1_) {
        uVar4 = *(undefined4 *)(lVar6 + 0x18);
        uVar5 = *(undefined4 *)((longlong)this + 0x18);
        pUVar16 = TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  ::operator->((TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                                *)((longlong)this + 0x10));
        local_98 = (FName)pUVar16->_padding_;
        ::FName::ToString(&local_98,&local_88);
        local_a0 = CONCAT44(local_a0._4_4_,uVar4);
        local_a8 = CONCAT44(local_a8._4_4_,uVar5);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((*(longlong *)this == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(longlong *)(*(longlong *)this + 0x768) = lVar6;
      if ((*(longlong *)this == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(longlong *)(*(longlong *)this + 0x770) = lVar6;
      if ((*(byte *)(lVar6 + 0x658) & 1) == 0) {
        bVar10 = -1 < CpuChannel->Enabled;
        if (bVar10) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId964,"Mutable_MeshStreaming",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                     ,0x3c4);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId964);
        }
        this_01 = (FTaskBase *)
                  UE::Tasks::Private::FTaskEventBase::Create(L"MutableMeshParamLoadCompleted");
        pFVar13 = UE::Tasks::Private::GetCurrentTask();
        if ((pFVar13 == (FTaskBase *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Parent != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                                ,0x1ff,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        LOCK();
        paVar1 = &pFVar13->NumLocks;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0xfffffffe) {
          local_a8 = CONCAT44(local_a8._4_4_,0x7fffffff);
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0x1c2,L"Max number of nested tasks reached: %d");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if ((uint)aVar2 < 0x80000001) {
          local_a8 = CONCAT44(local_a8._4_4_,aVar2);
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks > ExecutionFlag",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0x1c3,
                              L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                             );
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        bVar11 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_01,pFVar13);
        if (bVar11) {
          LOCK();
          this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::
          FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                    (&pFVar13->Prerequisites,this_01);
        }
        else {
          LOCK();
          pFVar13->NumLocks = (atomic<unsigned_int>)((int)pFVar13->NumLocks + -1);
          UNLOCK();
        }
        if (this_01 != (FTaskBase *)0x0) {
          LOCK();
          this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
          UNLOCK();
        }
        this_00 = *(UObjectBase **)((longlong)this + 0x10);
        if (this_00 != (UObjectBase *)0x0) {
          UObjectBase::AddRef(this_00);
        }
        pcVar9 = *(code **)((longlong)this + 8);
        pcVar7 = *(code **)this;
        if (pcVar9 != (code *)0x0) {
          LOCK();
          *(int *)(pcVar9 + 8) = *(int *)(pcVar9 + 8) + 1;
          UNLOCK();
        }
        uVar4 = *(undefined4 *)((longlong)this + 0x18);
        local_68[0] = (code *)0x0;
        local_40 = FMemory::Malloc(0x30,8);
        local_40[1] = (code *)this_01;
        local_40[2] = (code *)this_00;
        *local_40 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::`2'::<lambda_1>::operator()'::`29'::<lambda_1>,0,1>
                             ::_vftable_;
        local_40[3] = pcVar7;
        local_40[4] = pcVar9;
        *(undefined4 *)(local_40 + 5) = uVar4;
        if (local_40 != (code **)&DAT_fffffffffffffff8) {
          local_68[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::<lambda_1>,void,bool,IBulkDataIORequest_*>
                        ::Call;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pFVar14 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
                  ::operator->(this);
        pIVar15 = FBulkData::CreateStreamingRequest
                            ((FBulkData *)(lVar6 + 0x630),AIOP_High,
                             (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)local_68,
                             (uchar *)0x0);
        pIVar8 = (pFVar14->Request).Ptr;
        if ((pIVar8 != pIVar15) &&
           ((pFVar14->Request).Ptr = pIVar15, pIVar8 != (IBulkDataIORequest *)0x0)) {
          (**(code **)*pIVar8)(pIVar8,1);
        }
        if (local_68[0] != (code *)0x0) {
          ppcVar17 = local_68 + 2;
          if (local_40 != (code **)0x0) {
            ppcVar17 = local_40;
          }
          (**(code **)(*ppcVar17 + 0x10))();
        }
        if (this_01 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &this_01->RefCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_01->_padding_)(this_01,1);
          }
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
    }
  }
  return;
}

// operator() @ 14ac51b20

void __thiscall
``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::
<lambda_1>::operator()(void *this,bool param_1,IBulkDataIORequest *param_2)

{
  atomic<bool> aVar1;
  FTaskBase *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined7 in_register_00000011;
  char *pcVar7;
  undefined7 uVar8;
  FArchiveState local_b8;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  pcVar7 = (char *)CONCAT71(in_register_00000011,param_1);
  if (param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                       ,0x3e0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    lVar6 = (**(code **)((longlong)*param_2 + 0x18))(param_2);
    if (lVar6 == 0) {
      pcVar7 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
      ;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BulkData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                         ,0x3ce,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      pcVar7 = "Mutable_MeshStreamingSerialization";
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId977,"Mutable_MeshStreamingSerialization",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                 ,0x3d1);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId977);
    }
    iVar5 = (**(code **)((longlong)*param_2 + 0x20))(param_2);
    if (iVar5 < 0) {
      pcVar7 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h";
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_b8._padding_ = 0;
    local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_b8._40_8_ = 0;
    local_b8.ArSerializingDefaults = 0;
    local_b8.ArPortFlags = 0;
    local_b8.ArMaxSerializeSize = 0;
    local_b8.ArUEVer.FileVersionUE4 = 0;
    local_b8.ArUEVer.FileVersionUE5 = 0;
    local_b8.ArLicenseeUEVer = 0;
    local_b8.ArEngineVer.Major = 0;
    local_b8.ArEngineVer.Minor = 0;
    local_b8.ArEngineVer.Patch = 0;
    local_b8.ArEngineVer._6_2_ = 0;
    local_b8.ArEngineVer.Changelist = 0;
    local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_b8.SerializedProperty = (FProperty *)0x0;
    local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_b8.bCustomVersionsAreReset = false;
    local_b8._129_7_ = 0;
    local_b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_b8);
    local_18 = (longlong)iVar5;
    local_28 = 0;
    uVar8 = (undefined7)((ulonglong)pcVar7 >> 8);
    local_10 = 0x7fffffffffffffff;
    local_b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_20 = lVar6;
    FArchiveState::SetIsLoading(&local_b8,true);
    (**(code **)(local_b8._padding_ + 0x108))(&local_b8,CONCAT71(uVar8,1));
    local_b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    if ((*(longlong *)((longlong)this + 0x10) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FSkeletalMeshLODRenderData::SerializeStreamedData
              (*(FSkeletalMeshLODRenderData **)((longlong)this + 0x10),(FArchive *)&local_b8,
               *(USkinnedAsset **)((longlong)this + 8),*(int *)((longlong)this + 0x20),'\0',true,
               true);
    if ((*(longlong *)((longlong)this + 0x10) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar6 = *(longlong *)((longlong)this + 0x10);
    if ((lVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x770) = lVar6;
    FArchive::~FArchive((FArchive *)&local_b8);
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0xd0) == '\0')) {
    this_00 = *(FTaskBase **)this;
    LOCK();
    aVar1 = this_00->TaskTriggered;
    this_00->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
    }
  }
  return;
}

// operator() @ 14ac51e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_2>::operator()'::__l149
::<lambda_1>::operator()
          (void *this,int param_1,int param_2,FDeltaBatchHeader *param_3,
          TArrayView<unsigned_int_const_,int> *param_4,TArrayView<unsigned_int,int> *param_5)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta> _Dst;
  ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta> FVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta> FVar10;
  uint uVar11;
  undefined1 auStackY_7f8 [32];
  undefined4 uStack_7ac;
  undefined4 uStack_79c;
  TArrayView<UE::MorphTargetVertexCodec::FQuantizedDelta_const_,int> local_798;
  TArrayView<unsigned_int_const_,int> local_788;
  TArrayView<UE::MorphTargetVertexCodec::FQuantizedDelta,int> local_778;
  TArrayView<unsigned_int,int> local_768;
  ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta> local_758;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  uVar5 = UE::MorphTargetVertexCodec::CalculateBatchDwords(param_3);
  uVar11 = param_3->DataOffset;
  puVar1 = param_4->DataPtr;
  if (((int)uVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_50[1] = 0x40;
  local_758.SecondaryData = (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0;
  local_50[0] = 0;
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>_>
            (0x1c,4,0x40,&local_758,local_50,local_50 + 1);
  iVar3 = local_50[0];
  local_778.DataPtr = (FQuantizedDelta *)&local_758;
  if (local_758.SecondaryData != (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0) {
    local_778.DataPtr = (FQuantizedDelta *)local_758.SecondaryData;
  }
  if ((local_50[0] < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_788._12_4_ = local_798._12_4_;
  local_788.ArrayNum = uVar5;
  local_778._12_4_ = uStack_7ac;
  local_778.ArrayNum = iVar3;
  local_788.DataPtr = puVar1 + (uVar11 >> 2);
  UE::MorphTargetVertexCodec::ReadQuantizedDeltas(&local_778,param_3,&local_788);
  uVar11 = param_3->IndexMin;
  uVar9 = 0;
  FVar10 = local_758.SecondaryData;
  uVar5 = uVar11;
  if (param_3->NumElements == 0) {
LAB_14ac51fff:
    uVar11 = uVar5;
    uVar5 = uVar9;
    if (uVar9 < param_3->NumElements) {
      do {
        uVar6 = 0;
        if ((int)uVar5 < local_50[0]) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , FVar10 = local_758.SecondaryData, bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar7 = (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)&local_758;
        if (FVar10 != (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0) {
          FVar7 = FVar10;
        }
      } while ((*(int *)((longlong)(int)uVar5 * 0x1c + 0x18 + (longlong)FVar7) < param_2) &&
              (uVar5 = uVar5 + 1, uVar5 < param_3->NumElements));
    }
  }
  else {
    do {
      uVar5 = 0;
      if ((int)uVar9 < local_50[0]) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar10 = local_758.SecondaryData, bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar7 = (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)&local_758;
      if (FVar10 != (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0) {
        FVar7 = FVar10;
      }
      uVar5 = *(uint *)((longlong)(int)uVar9 * 0x1c + 0x18 + (longlong)FVar7);
      if (param_1 <= (int)uVar5) goto LAB_14ac51fff;
      uVar9 = uVar9 + 1;
      uVar5 = uVar9;
    } while (uVar9 < param_3->NumElements);
  }
  param_3->IndexMin = uVar11;
  uVar8 = (ulonglong)(uVar5 - uVar9) * 0x1c;
  param_3->NumElements = uVar5 - uVar9;
  if (((ulonglong)((longlong)local_50[0] * 0x1c) <= uVar8 &&
       uVar8 + (longlong)local_50[0] * -0x1c != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutBatchHeader.NumElements * sizeof(FQuantizedDelta) <= QuantizedDeltas.NumBytes()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                         ,0x60a,L""), FVar10 = local_758.SecondaryData, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar7 = (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)&local_758;
  if (FVar10 != (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0) {
    FVar7 = FVar10;
  }
  _Dst = (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)&local_758;
  if (FVar10 != (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0) {
    _Dst = FVar10;
  }
  memmove((void *)_Dst,(void *)((longlong)FVar7 + (longlong)(int)uVar9 * 0x1c),
          (ulonglong)param_3->NumElements * 0x1c);
  iVar3 = local_50[0];
  local_768.DataPtr = param_5->DataPtr;
  local_768.ArrayNum = param_5->ArrayNum;
  local_768._12_4_ = *(undefined4 *)&param_5->field_0xc;
  local_798.DataPtr = (FQuantizedDelta *)&local_758;
  if (local_758.SecondaryData != (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0) {
    local_798.DataPtr = (FQuantizedDelta *)local_758.SecondaryData;
  }
  if ((local_50[0] < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_798._12_4_ = uStack_79c;
  local_798.ArrayNum = iVar3;
  UE::MorphTargetVertexCodec::WriteQuantizedDeltas(&local_798,param_3,&local_768);
  if (local_758.SecondaryData != (ForElementType<UE::MorphTargetVertexCodec::FQuantizedDelta>)0x0) {
    FMemory::Free((void *)local_758.SecondaryData);
  }
  return;
}

// operator() @ 14ac521c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_2>::operator()
          (void *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  void *pvVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  code *pcVar7;
  EBoneUsageFlags EVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  FScriptContainerElement *pFVar12;
  FBoneName FVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  EBoneUsageFlags EVar19;
  uint uVar20;
  int iVar21;
  FMeshConversionContext *pFVar22;
  FMesh *pFVar23;
  USkeletalMesh *pUVar24;
  longlong lVar25;
  TReferenceControllerBase<1> *pTVar26;
  longlong lVar27;
  TMatrix<double> *pTVar28;
  FMeshBufferSet *pFVar29;
  uchar *puVar30;
  uchar *puVar31;
  FRawStaticIndexBuffer16or32Interface *pFVar32;
  uint *puVar33;
  longlong *plVar34;
  longlong *plVar35;
  ulonglong uVar36;
  ForElementType<unsigned_int> FVar37;
  uint uVar38;
  FSkeletalMeshLODRenderData *pFVar39;
  uint uVar40;
  longlong *plVar41;
  FScriptContainerElement *pFVar42;
  int *piVar43;
  EMeshBufferFormat *pEVar44;
  EMeshBufferSemantic *pEVar45;
  FSkinWeightVertexBuffer *pFVar46;
  ForAnyElementType *pFVar47;
  FSkeleton *pFVar48;
  int iVar49;
  int iVar50;
  FSharedReferencer<1> FVar51;
  float *pfVar52;
  ulonglong uVar53;
  uint uVar54;
  ulonglong uVar55;
  ForAnyElementType FVar56;
  undefined8 *puVar57;
  FDeltaBatchHeader *pFVar58;
  FSkeleton *pFVar59;
  bool bVar60;
  float fVar61;
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  float fVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  float fVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  float fVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  float fVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  float fVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  float fVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined1 auStackY_1048 [32];
  uint local_fe8;
  undefined2 local_fe4 [2];
  FSkeletalMeshLODRenderData *local_fe0;
  undefined1 local_fd8;
  undefined1 local_fd7;
  undefined1 local_fd6;
  undefined1 local_fd5;
  undefined1 local_fd4;
  undefined1 local_fd3 [3];
  ulonglong local_fd0;
  uint local_fc8;
  FSkeleton *local_fb8;
  ForAnyElementType local_fa8;
  undefined8 local_fa0;
  ushort local_f98 [2];
  int local_f94;
  FScriptContainerElement *local_f90;
  FSkeleton *local_f88;
  undefined8 local_f80;
  FSkeleton *local_f78;
  EMeshBufferFormat local_f68 [2];
  ForAnyElementType local_f60;
  undefined8 local_f58;
  ForAnyElementType local_f50;
  int local_f48 [2];
  ForAnyElementType local_f40;
  int local_f38 [2];
  longlong *local_f30;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_f28;
  TArray<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_> local_f18;
  TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> local_f08;
  EMeshBufferFormat local_ef8 [2];
  undefined8 local_ef0;
  FSkeleton local_ee8;
  int local_eb8 [4];
  float local_ea8;
  float fStack_ea4;
  float fStack_ea0;
  float fStack_e9c;
  int local_e98 [4];
  float local_e88;
  float fStack_e84;
  float fStack_e80;
  float fStack_e7c;
  int local_e78 [2];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_e70;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_e60;
  int local_e50;
  int local_e4c;
  int local_e48;
  int local_e44;
  int local_e40 [10];
  TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> local_e18;
  FScriptContainerElement *local_e08;
  int iStack_e00;
  undefined4 uStack_dfc;
  FDeltaBatchHeader local_df8;
  FScriptContainerElement *local_dc8;
  undefined4 uStack_dc0;
  undefined4 uStack_dbc;
  FMorphTargetDelta *local_db8;
  int iStack_db0;
  undefined4 uStack_dac;
  uint *local_da8;
  undefined4 uStack_da0;
  undefined4 uStack_d9c;
  FScriptContainerElement *local_d98;
  undefined4 uStack_d90;
  undefined4 uStack_d8c;
  ForElementType<unsigned_int> local_d88;
  int iStack_d80;
  undefined4 uStack_d7c;
  uint *local_d78;
  undefined4 uStack_d70;
  undefined4 uStack_d6c;
  uint *local_d68;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  uint *local_d58;
  undefined4 uStack_d50;
  undefined4 uStack_d4c;
  uint *local_d48;
  undefined4 uStack_d40;
  undefined4 uStack_d3c;
  FSkeleton *local_d38;
  int iStack_d30;
  uint *local_d28;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  ForElementType<unsigned_int> local_d18;
  int iStack_d10;
  undefined4 uStack_d0c;
  uint *local_d08;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  uint *local_cf8;
  undefined4 uStack_cf0;
  undefined4 uStack_cec;
  uint *local_ce8;
  int iStack_ce0;
  undefined4 uStack_cdc;
  FDeltaBatchHeader local_cd8;
  __m128 local_ca8;
  __m128 local_c98;
  __m128 local_c88;
  FDeltaBatchHeader local_c78;
  TArrayView<unsigned_int_const_,int> local_c48;
  TArrayView<unsigned_int_const_,int> local_c38;
  TArrayView<unsigned_int_const_,int> local_c28;
  TArrayView<unsigned_int_const_,int> local_c18;
  TArrayView<FMorphTargetDelta_const_,int> local_c08;
  TArrayView<unsigned_int,int> local_bf8;
  TArrayView<unsigned_int_const_,int> local_be8;
  TArrayView<unsigned_int_const_,int> local_bd8;
  TArrayView<unsigned_int_const_,int> local_bc8;
  TArrayView<unsigned_int,int> local_bb8;
  TArrayView<unsigned_int_const_,int> local_ba8;
  TArrayView<unsigned_int,int> local_b98;
  TArrayView<unsigned_int,int> local_b88;
  TArrayView<unsigned_int_const_,int> local_b78;
  TArrayView<unsigned_int,int> local_b68;
  TArrayView<unsigned_int,int> local_b58;
  __m128 local_b48;
  ulong64 local_b38;
  ulong64 uStack_b30;
  ulong64 local_b28;
  ulong64 uStack_b20;
  TMatrix<float> local_b18;
  FDeltaBatchHeader local_ad8;
  FDeltaBatchHeader local_aa8;
  FDeltaBatchHeader local_a78;
  FDeltaBatchHeader local_a48;
  undefined8 local_a18;
  undefined4 local_a10;
  TBitArray<FDefaultBitArrayAllocator> local_a08;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  TMatrix<double> local_9b8;
  ForElementType<unsigned_int> local_938;
  int local_230 [2];
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  int local_128 [4];
  int local_118 [4];
  EMeshBufferSemantic local_108 [4];
  EMeshBufferFormat local_f8 [4];
  int local_e8 [4];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1048;
  bVar60 = -1 < CpuChannel->Enabled;
  if (bVar60) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1007,"Mutable_MeshConversion",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0x3ef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1007);
  }
  pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
            ::operator->(this);
  if (pFVar22->OriginalLOD == (FSkeletalMeshLODRenderData *)0x0) goto LAB_14ac56209;
  pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                      ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
  TArray<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TSizedDefaultAllocator<32>_>
  ::
  AddUniqueImpl<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_const_&>
            (&pFVar23->SkeletalMeshes,
             (TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)((longlong)this + 0x10));
  pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
            ::operator->(this);
  uVar40 = *(uint *)((longlong)this + 0x1c);
  pFVar39 = pFVar22->OriginalLOD;
  uVar38 = 0;
  if ((int)uVar40 < (pFVar39->RenderSections).ArrayNum) {
    uVar38 = ~uVar40 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar14 = false;
  local_f90 = (pFVar39->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar40 * 0x118;
  local_e70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e70.ArrayNum = 0;
  local_e70.ArrayMax = 0;
  local_f60.Data = (FScriptContainerElement *)0x0;
  local_f58 = 0;
  pUVar24 = TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
            ::operator->((TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                          *)((longlong)this + 0x10));
  lVar25 = (**(code **)(pUVar24->_padding_ + 0x408))(pUVar24);
  if (lVar25 == 0) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3504799828724941829>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                        ,0x405,"false");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    pFVar39 = pFVar22->OriginalLOD;
    local_f28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f28.ArrayNum = 0;
    local_f28.ArrayMax = 0;
    uVar40 = (pFVar39->RequiredBones).ArrayNum;
    if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
    }
    if (0 < (int)uVar40) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar40,&local_f28.AllocatorInstance,0,&local_f28.ArrayMax);
    }
    pFVar42 = (pFVar39->RequiredBones).AllocatorInstance.Data;
    iVar21 = (pFVar39->RequiredBones).ArrayNum;
    pFVar1 = pFVar42 + (longlong)iVar21 * 2;
    while( true ) {
      if ((pFVar39->RequiredBones).ArrayNum != iVar21) {
        local_fd8 = 0;
        `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_fd8);
      }
      pFVar12 = local_f90;
      if (pFVar42 == pFVar1) break;
      TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short_const_&>
                (&local_f28,(ushort *)pFVar42);
      pFVar42 = pFVar42 + 2;
    }
    uVar36 = 0;
    iVar21 = *(int *)(local_f90 + 0x40);
    uVar55 = uVar36;
    if (0 < (longlong)iVar21) {
      do {
        uVar38 = (uint)uVar36;
        uVar40 = 0;
        if ((int)uVar38 < *(int *)(pFVar12 + 0x40)) {
          uVar40 = ~uVar38 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_f98[0] = *(ushort *)(*(longlong *)(pFVar12 + 0x38) + uVar55 * 2);
        iVar16 = TArray<unsigned_short,TSizedDefaultAllocator<32>_>::
                 AddUniqueImpl<unsigned_short_const_&>(&local_e70,local_f98);
        local_fe4[0] = (undefined2)iVar16;
        if (((local_f60.Data <= (FScriptContainerElement *)local_fe4) &&
            ((FScriptContainerElement *)local_fe4 < local_f60.Data + (longlong)local_f58._4_4_ * 2))
           && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar16 = (int)local_f58;
        if ((int)local_f58 == local_f58._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f60,(int *)((longlong)&local_f58 + 4));
        }
        local_f58 = CONCAT44(local_f58._4_4_,iVar16 + 1);
        *(undefined2 *)(local_f60.Data + (longlong)iVar16 * 2) = local_fe4[0];
        if (bVar14) {
LAB_14ac525ce:
          bVar14 = true;
        }
        else {
          uVar40 = 0;
          if ((int)uVar38 < *(int *)(pFVar12 + 0x40)) {
            uVar40 = ~uVar38 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(ushort *)(*(longlong *)(pFVar12 + 0x38) + uVar55 * 2) != local_f98[0])
          goto LAB_14ac525ce;
          bVar14 = false;
        }
        uVar36 = (ulonglong)(uVar38 + 1);
        uVar55 = uVar55 + 1;
      } while ((longlong)uVar55 < (longlong)iVar21);
    }
    pTVar26 = ::operator_new(0x40);
    if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
      local_fe0 = (FSkeletalMeshLODRenderData *)0x0;
      local_fb8 = (FSkeleton *)&DAT_00000010;
      local_f78 = (FSkeleton *)&DAT_00000010;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                          ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
      local_e18.Object = (FSkeleton *)&DAT_00000010;
      local_e18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar26->SharedReferenceCount = (atomic<int>)0x1;
      pFVar48 = (FSkeleton *)(pTVar26 + 1);
      pTVar26->WeakReferenceCount = (atomic<int>)0x1;
      pTVar26->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFSkeleton_Private_Mutable_UE___00_SharedPointerInternals__6B_
      ;
      pTVar26[1]._padding_ = 0;
      pTVar26[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar26[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar26[2]._padding_ = 0;
      pTVar26[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar26[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar26[3]._padding_ = 0;
      pTVar26[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar26[3].WeakReferenceCount = (atomic<int>)0x0;
      local_fe0 = (FSkeletalMeshLODRenderData *)pTVar26;
      local_fb8 = pFVar48;
      if ((pFVar48 == (FSkeleton *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
      pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                          ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      local_f78 = pFVar48;
      local_e18.Object = pFVar48;
      local_e18.SharedReferenceCount.ReferenceController = pTVar26;
    }
    FVar51.ReferenceController = local_e18.SharedReferenceCount.ReferenceController;
    pFVar48 = local_e18.Object;
    uVar55 = 0;
    UE::Mutable::Private::FMesh::SetSkeleton(pFVar23,&local_e18);
    uVar9 = local_f28._8_8_;
    iVar21 = local_f28.ArrayNum;
    lVar25 = (longlong)local_f28.ArrayNum;
    pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                        ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
    UE::Mutable::Private::FMesh::SetBonePoseCount(pFVar23,iVar21);
    if ((pFVar48 == (FSkeleton *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    UE::Mutable::Private::FSkeleton::SetBoneCount(pFVar48,iVar21);
    iVar16 = local_e70.ArrayNum;
    local_f08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f08.ArrayNum = 0;
    local_f08.ArrayMax = 0;
    if (local_e70.ArrayNum < 1) {
      if (local_e70.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_e70._8_8_ & 0xffffffff);
      }
    }
    else {
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,local_e70.ArrayNum,&local_f08.AllocatorInstance,&local_f08.ArrayNum,
                          &local_f08.ArrayMax);
      DefaultConstructItems<UE::Mutable::Private::FBoneName,int>
                (local_f08.AllocatorInstance.Data + (longlong)iVar17 * 4,iVar16);
    }
    local_f40.Data = (FScriptContainerElement *)0x0;
    local_f38[0] = 0;
    local_f38[1] = 0;
    if (iVar21 < 1) {
      if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar21,&local_f40,local_f38,local_f38 + 1);
    }
    pUVar24 = TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              ::operator->((TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                            *)((longlong)this + 0x10));
    lVar27 = (**(code **)(pUVar24->_padding_ + 800))(pUVar24);
    pFVar48 = local_fb8;
    local_f30 = (longlong *)(lVar27 + 0x20);
    local_f88 = (FSkeleton *)lVar25;
    if (0 < iVar21) {
      local_fd0 = 0;
      uVar36 = uVar55;
      do {
        plVar35 = local_f30;
        uVar53 = local_fd0;
        uVar38 = (uint)uVar36;
        local_fc8 = ~uVar38 >> 0x1f;
        uVar40 = 0;
        if ((int)uVar38 < local_f28.ArrayNum) {
          uVar40 = local_fc8;
        }
        if ((uVar40 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar5 = *(ushort *)(local_f28.AllocatorInstance.Data + uVar53 * 2);
        if (((int)plVar35[1] <= (int)(uint)uVar5) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar25 = *plVar35;
        for (FVar56.Data = local_f28.AllocatorInstance.Data;
            FVar56.Data != local_f28.AllocatorInstance.Data + (longlong)local_f28.ArrayNum * 2;
            FVar56.Data = FVar56.Data + 2) {
          if (*(short *)FVar56.Data == *(short *)(lVar25 + 8 + (ulonglong)uVar5 * 0xc)) {
            uVar40 = (uint)((longlong)FVar56.Data - (longlong)local_f28.AllocatorInstance.Data >> 1)
            ;
            goto LAB_14ac528e5;
          }
        }
        uVar40 = 0xffffffff;
LAB_14ac528e5:
        FBoneNames::FindOrAdd(*(FBoneNames **)((longlong)this + 0x30),(FName *)&local_f80);
        if ((pFVar48 == (FSkeleton *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        UE::Mutable::Private::FSkeleton::SetBoneName(pFVar48,uVar38,(FBoneName *)&local_f80);
        if ((pFVar48 == (FSkeleton *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        UE::Mutable::Private::FSkeleton::SetBoneParent(pFVar48,uVar38,uVar40);
        if ((pFVar48 == (FSkeleton *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        UE::Mutable::Private::FSkeleton::SetDebugName
                  (pFVar48,uVar38,*(FName *)(lVar25 + (ulonglong)uVar5 * 0xc));
        FVar13.Id = local_f80._0_4_;
        for (FVar56.Data = local_e70.AllocatorInstance.Data;
            FVar56.Data != local_e70.AllocatorInstance.Data + (longlong)local_e70.ArrayNum * 2;
            FVar56.Data = FVar56.Data + 2) {
          if (*(ushort *)FVar56.Data == uVar5) {
            uVar54 = (uint)((longlong)FVar56.Data - (longlong)local_e70.AllocatorInstance.Data >> 1)
            ;
            if (uVar54 != 0xffffffff) {
              uVar20 = 0;
              if ((int)uVar54 < local_f08.ArrayNum) {
                uVar20 = ~uVar54 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(uint *)(local_f08.AllocatorInstance.Data + (longlong)(int)uVar54 * 4) = FVar13.Id;
            }
            goto LAB_14ac52a19;
          }
        }
        uVar54 = 0xffffffff;
LAB_14ac52a19:
        if ((int)uVar40 < 0) {
          if ((*(longlong *)((longlong)this + 0x10) == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                  ,0x67,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar28 = USkeletalMesh::GetRefPoseMatrix
                              (*(USkeletalMesh **)((longlong)this + 0x10),&local_1a8,(uint)uVar5);
          uVar20 = local_fc8;
          uVar63 = *(undefined4 *)pTVar28->M[0];
          uVar65 = *(undefined4 *)((longlong)pTVar28->M[0] + 4);
          uVar66 = *(undefined4 *)(pTVar28->M[0] + 1);
          uVar67 = *(undefined4 *)((longlong)pTVar28->M[0] + 0xc);
          uVar68 = *(undefined4 *)(pTVar28->M[0] + 2);
          uVar70 = *(undefined4 *)((longlong)pTVar28->M[0] + 0x14);
          uVar71 = *(undefined4 *)(pTVar28->M[0] + 3);
          uVar72 = *(undefined4 *)((longlong)pTVar28->M[0] + 0x1c);
          uVar73 = *(undefined4 *)pTVar28->M[1];
          uVar75 = *(undefined4 *)((longlong)pTVar28->M[1] + 4);
          uVar76 = *(undefined4 *)(pTVar28->M[1] + 1);
          uVar77 = *(undefined4 *)((longlong)pTVar28->M[1] + 0xc);
          uVar78 = *(undefined4 *)(pTVar28->M[1] + 2);
          uVar80 = *(undefined4 *)((longlong)pTVar28->M[1] + 0x14);
          uVar81 = *(undefined4 *)(pTVar28->M[1] + 3);
          uVar82 = *(undefined4 *)((longlong)pTVar28->M[1] + 0x1c);
          uVar83 = *(undefined4 *)pTVar28->M[2];
          uVar85 = *(undefined4 *)((longlong)pTVar28->M[2] + 4);
          uVar86 = *(undefined4 *)(pTVar28->M[2] + 1);
          uVar87 = *(undefined4 *)((longlong)pTVar28->M[2] + 0xc);
          uVar88 = *(undefined4 *)(pTVar28->M[2] + 2);
          uVar90 = *(undefined4 *)((longlong)pTVar28->M[2] + 0x14);
          uVar91 = *(undefined4 *)(pTVar28->M[2] + 3);
          uVar92 = *(undefined4 *)((longlong)pTVar28->M[2] + 0x1c);
          uVar93 = *(undefined4 *)pTVar28->M[3];
          uVar95 = *(undefined4 *)((longlong)pTVar28->M[3] + 4);
          uVar96 = *(undefined4 *)(pTVar28->M[3] + 1);
          uVar97 = *(undefined4 *)((longlong)pTVar28->M[3] + 0xc);
          uVar98 = *(undefined4 *)(pTVar28->M[3] + 2);
          uVar100 = *(undefined4 *)((longlong)pTVar28->M[3] + 0x14);
          uVar101 = *(undefined4 *)(pTVar28->M[3] + 3);
          uVar102 = *(undefined4 *)((longlong)pTVar28->M[3] + 0x1c);
          uVar18 = 0;
          if ((int)uVar38 < local_f38[0]) {
            uVar18 = local_fc8;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          if ((*(longlong *)((longlong)this + 0x10) == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                  ,0x67,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar28 = USkeletalMesh::GetRefPoseMatrix
                              (*(USkeletalMesh **)((longlong)this + 0x10),&local_228,(uint)uVar5);
          uVar20 = 0;
          if ((int)uVar40 < local_f38[0]) {
            uVar20 = ~uVar40 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          VectorMatrixMultiply
                    (&local_9b8,pTVar28,
                     (TMatrix<double> *)(local_f40.Data + (longlong)(int)uVar40 * 0x80));
          uVar102 = local_9b8.M[3][3]._4_4_;
          uVar101 = local_9b8.M[3][3]._0_4_;
          uVar100 = local_9b8.M[3][2]._4_4_;
          uVar98 = local_9b8.M[3][2]._0_4_;
          uVar97 = local_9b8.M[3][1]._4_4_;
          uVar96 = local_9b8.M[3][1]._0_4_;
          uVar95 = local_9b8.M[3][0]._4_4_;
          uVar93 = local_9b8.M[3][0]._0_4_;
          uVar92 = local_9b8.M[2][3]._4_4_;
          uVar91 = local_9b8.M[2][3]._0_4_;
          uVar90 = local_9b8.M[2][2]._4_4_;
          uVar88 = local_9b8.M[2][2]._0_4_;
          uVar87 = local_9b8.M[2][1]._4_4_;
          uVar86 = local_9b8.M[2][1]._0_4_;
          uVar85 = local_9b8.M[2][0]._4_4_;
          uVar83 = local_9b8.M[2][0]._0_4_;
          uVar82 = local_9b8.M[1][3]._4_4_;
          uVar81 = local_9b8.M[1][3]._0_4_;
          uVar80 = local_9b8.M[1][2]._4_4_;
          uVar78 = local_9b8.M[1][2]._0_4_;
          uVar77 = local_9b8.M[1][1]._4_4_;
          uVar76 = local_9b8.M[1][1]._0_4_;
          uVar75 = local_9b8.M[1][0]._4_4_;
          uVar73 = local_9b8.M[1][0]._0_4_;
          uVar72 = local_9b8.M[0][3]._4_4_;
          uVar71 = local_9b8.M[0][3]._0_4_;
          uVar70 = local_9b8.M[0][2]._4_4_;
          uVar68 = local_9b8.M[0][2]._0_4_;
          uVar67 = local_9b8.M[0][1]._4_4_;
          uVar66 = local_9b8.M[0][1]._0_4_;
          uVar65 = local_9b8.M[0][0]._4_4_;
          uVar63 = local_9b8.M[0][0]._0_4_;
          uVar20 = local_fc8;
          uVar18 = 0;
          if ((int)uVar38 < local_f38[0]) {
            uVar18 = local_fc8;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar1 = local_f40.Data + uVar55;
        *(undefined4 *)pFVar1 = uVar63;
        *(undefined4 *)(pFVar1 + 4) = uVar65;
        *(undefined4 *)(pFVar1 + 8) = uVar66;
        *(undefined4 *)(pFVar1 + 0xc) = uVar67;
        pFVar1 = local_f40.Data + uVar55 + 0x10;
        *(undefined4 *)pFVar1 = uVar68;
        *(undefined4 *)(pFVar1 + 4) = uVar70;
        *(undefined4 *)(pFVar1 + 8) = uVar71;
        *(undefined4 *)(pFVar1 + 0xc) = uVar72;
        pFVar1 = local_f40.Data + uVar55 + 0x20;
        *(undefined4 *)pFVar1 = uVar73;
        *(undefined4 *)(pFVar1 + 4) = uVar75;
        *(undefined4 *)(pFVar1 + 8) = uVar76;
        *(undefined4 *)(pFVar1 + 0xc) = uVar77;
        pFVar1 = local_f40.Data + uVar55 + 0x30;
        *(undefined4 *)pFVar1 = uVar78;
        *(undefined4 *)(pFVar1 + 4) = uVar80;
        *(undefined4 *)(pFVar1 + 8) = uVar81;
        *(undefined4 *)(pFVar1 + 0xc) = uVar82;
        pFVar1 = local_f40.Data + uVar55 + 0x40;
        *(undefined4 *)pFVar1 = uVar83;
        *(undefined4 *)(pFVar1 + 4) = uVar85;
        *(undefined4 *)(pFVar1 + 8) = uVar86;
        *(undefined4 *)(pFVar1 + 0xc) = uVar87;
        pFVar1 = local_f40.Data + uVar55 + 0x50;
        *(undefined4 *)pFVar1 = uVar88;
        *(undefined4 *)(pFVar1 + 4) = uVar90;
        *(undefined4 *)(pFVar1 + 8) = uVar91;
        *(undefined4 *)(pFVar1 + 0xc) = uVar92;
        pFVar1 = local_f40.Data + uVar55 + 0x60;
        *(undefined4 *)pFVar1 = uVar93;
        *(undefined4 *)(pFVar1 + 4) = uVar95;
        *(undefined4 *)(pFVar1 + 8) = uVar96;
        *(undefined4 *)(pFVar1 + 0xc) = uVar97;
        pFVar1 = local_f40.Data + uVar55 + 0x70;
        *(undefined4 *)pFVar1 = uVar98;
        *(undefined4 *)(pFVar1 + 4) = uVar100;
        *(undefined4 *)(pFVar1 + 8) = uVar101;
        *(undefined4 *)(pFVar1 + 0xc) = uVar102;
        local_ca8 = GlobalVectorConstants::Float0001;
        uVar18 = 0;
        if ((int)uVar38 < local_f38[0]) {
          uVar18 = uVar20;
        }
        local_c98 = GlobalVectorConstants::FloatZero;
        local_c88 = GlobalVectorConstants::Float1110;
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_b18.M[0][2] = (float)*(double *)(local_f40.Data + uVar55 + 0x10);
        local_b18.M[0][3] = (float)*(double *)(local_f40.Data + uVar55 + 0x10 + 8);
        local_b18.M[0][0] = (float)*(double *)(local_f40.Data + uVar55);
        local_b18.M[0][1] = (float)*(double *)(local_f40.Data + uVar55 + 8);
        local_b18.M[1][0] = (float)*(double *)(local_f40.Data + uVar55 + 0x20);
        local_b18.M[1][1] = (float)*(double *)(local_f40.Data + uVar55 + 0x20 + 8);
        local_b18.M[1][2] = (float)*(double *)(local_f40.Data + uVar55 + 0x30);
        local_b18.M[1][3] = (float)*(double *)(local_f40.Data + uVar55 + 0x30 + 8);
        local_b18.M[2][0] = (float)*(double *)(local_f40.Data + uVar55 + 0x40);
        local_b18.M[2][1] = (float)*(double *)(local_f40.Data + uVar55 + 0x40 + 8);
        local_b18.M[2][2] = (float)*(double *)(local_f40.Data + uVar55 + 0x50);
        local_b18.M[2][3] = (float)*(double *)(local_f40.Data + uVar55 + 0x50 + 8);
        local_b18.M[3][0] = (float)*(double *)(local_f40.Data + uVar55 + 0x60);
        local_b18.M[3][1] = (float)*(double *)(local_f40.Data + uVar55 + 0x60 + 8);
        local_b18.M[3][2] = (float)*(double *)(local_f40.Data + uVar55 + 0x70);
        local_b18.M[3][3] = (float)*(double *)(local_f40.Data + uVar55 + 0x70 + 8);
        UE::Math::TTransform<float>::SetFromMatrix((TTransform<float> *)&local_ca8,&local_b18);
        EVar8 = None;
        if (uVar40 == 0xffffffff) {
          EVar8 = Root;
        }
        EVar19 = None;
        if (uVar54 != 0xffffffff) {
          EVar19 = Skinning;
        }
        if ((*(longlong *)((longlong)this + 0x20) == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_b48.m128_u64[0] = local_ca8.m128_u64[0];
        local_b48.m128_u64[1] = local_ca8.m128_u64[1];
        local_b28 = local_c88.m128_u64[0];
        uStack_b20 = local_c88.m128_u64[1];
        local_b38 = local_c98.m128_u64[0];
        uStack_b30 = local_c98.m128_u64[1];
        UE::Mutable::Private::FMesh::SetBonePose
                  (*(FMesh **)((longlong)this + 0x20),uVar38,(FBoneName *)&local_f80,
                   (TTransform<float> *)&local_b48,EVar8 | EVar19);
        uVar36 = (ulonglong)(uVar38 + 1);
        local_fd0 = local_fd0 + 1;
        uVar55 = uVar55 + 0x80;
        FVar51.ReferenceController = (TReferenceControllerBase<1> *)local_fe0;
      } while ((longlong)local_fd0 < (longlong)local_f88);
    }
    pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                        ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
    UE::Mutable::Private::FMesh::SetBoneMap(pFVar23,&local_f08);
    if (local_f40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f40.Data);
    }
    if (local_f08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f08.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar51.ReferenceController);
    if (local_f28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f28.AllocatorInstance.Data);
    }
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    uVar40 = *(uint *)((longlong)this + 0x1c);
    pFVar39 = pFVar22->OriginalLOD;
    uVar38 = 0;
    if ((int)uVar40 < (pFVar39->RenderSections).ArrayNum) {
      uVar38 = ~uVar40 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar40 = *(uint *)((pFVar39->RenderSections).AllocatorInstance.Data +
                      (longlong)(int)uVar40 * 0x118 + 0x10);
    iVar21 = *(int *)(local_f90 + 0x48);
    pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                        ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
    pFVar29 = UE::Mutable::Private::FMesh::GetVertexBuffers(pFVar23);
    UE::Mutable::Private::FMeshBufferSet::SetElementCount(pFVar29,iVar21,Zeroed);
    UE::Mutable::Private::FMeshBufferSet::SetBufferCount(pFVar29,5);
    local_eb8[1] = 2;
    local_eb8[2] = 2;
    local_e98[2] = 0;
    local_e98[0] = 3;
    local_e98[1] = 0;
    UE::Mutable::Private::FMeshBufferSet::SetBuffer
              (pFVar29,0,0xc,1,(EMeshBufferSemantic *)(local_eb8 + 1),local_e98 + 2,
               (EMeshBufferFormat *)(local_eb8 + 2),local_e98,local_e98 + 1,Uninitialized);
    if (((pFVar29->Buffers).ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar16 = *(int *)((pFVar29->Buffers).AllocatorInstance.Data + 0x28);
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    puVar31 = (pFVar22->DataLOD->StaticVertexBuffers).PositionVertexBuffer.Data;
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    pFVar39 = pFVar22->DataLOD;
    if ((pFVar39->StaticVertexBuffers).PositionVertexBuffer.Data == (uchar *)0x0) {
      uVar55 = 0;
    }
    else {
      uVar55 = (ulonglong)
               ((pFVar39->StaticVertexBuffers).PositionVertexBuffer.NumVertices *
               (pFVar39->StaticVertexBuffers).PositionVertexBuffer.Stride);
    }
    if ((uVar55 < (ulonglong)(longlong)(int)((uVar40 + iVar21) * iVar16)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize * (FirstVertexIndex + VertexCount) <= Context->DataLOD->StaticVertexBuffers.PositionVertexBuffer.GetAllocatedSize()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                            ,0x473,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar30 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar29,0);
    memcpy(puVar30,puVar31 + (int)(iVar16 * uVar40),(longlong)(iVar16 * iVar21));
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    iVar16 = 8;
    local_e40[4] = 4;
    local_e40[5] = 3;
    local_e40[8] = 0;
    local_e40[9] = 0;
    local_e40[6] = 4;
    local_e40[7] = 4;
    local_ef8[0] = PackedDirS8;
    local_ef8[1] = 0x12;
    local_ee8.BoneParents.ArrayNum = 0;
    local_ee8.BoneParents.ArrayMax = 4;
    if ((pFVar22->DataLOD->StaticVertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis
        != false) {
      bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3504799828724941959>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                          ,0x487,"false");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_ee8.BoneParents.ArrayMax = 8;
      iVar16 = 0x10;
      local_ef8[0] = Int16;
      local_ef8[1] = 7;
    }
    UE::Mutable::Private::FMeshBufferSet::SetBuffer
              (pFVar29,1,iVar16,2,(EMeshBufferSemantic *)(local_e40 + 4),local_e40 + 8,local_ef8,
               local_e40 + 6,&local_ee8.BoneParents.ArrayNum,Uninitialized);
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    puVar31 = (pFVar22->DataLOD->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    iVar17 = FStaticMeshVertexBuffer::GetTangentSize
                       (&(pFVar22->DataLOD->StaticVertexBuffers).StaticMeshVertexBuffer);
    if ((iVar17 < (int)((uVar40 + iVar21) * iVar16)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(int32)ElementSize * (FirstVertexIndex + VertexCount) <= Context->DataLOD->StaticVertexBuffers.StaticMeshVertexBuffer.GetTangentSize()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                            ,0x491,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar30 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar29,1);
    memcpy(puVar30,puVar31 + (int)(iVar16 * uVar40),(longlong)(iVar16 * iVar21));
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    uVar38 = (pFVar22->OriginalLOD->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
    uVar55 = (ulonglong)uVar38;
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    bVar14 = (pFVar22->DataLOD->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs;
    iVar16 = 4;
    if (bVar14 != false) {
      iVar16 = 8;
    }
    iVar17 = uVar38 * iVar16;
    iVar49 = 0;
    local_fd0 = CONCAT44(local_fd0._4_4_,iVar17);
    if (0 < (int)uVar38) {
      iVar50 = 0;
      piVar43 = local_e8;
      for (uVar36 = uVar55; uVar36 != 0; uVar36 = uVar36 - 1) {
        *piVar43 = 2;
        piVar43 = piVar43 + 1;
      }
      pEVar44 = local_f8;
      for (uVar36 = uVar55; uVar36 != 0; uVar36 = uVar36 - 1) {
        *pEVar44 = (bVar14 != false) + Float16;
        pEVar44 = pEVar44 + 1;
      }
      pEVar45 = local_108;
      for (; uVar55 != 0; uVar55 = uVar55 - 1) {
        *pEVar45 = TexCoords;
        pEVar45 = pEVar45 + 1;
      }
      lVar25 = 0;
      do {
        *(int *)((longlong)local_118 + lVar25) = iVar49;
        iVar49 = iVar49 + 1;
        *(int *)((longlong)local_128 + lVar25) = iVar50;
        lVar25 = lVar25 + 4;
        iVar50 = iVar50 + iVar16;
      } while (iVar49 < (int)uVar38);
    }
    UE::Mutable::Private::FMeshBufferSet::SetBuffer
              (pFVar29,2,iVar17,uVar38,local_108,local_118,local_f8,local_e8,local_128,Uninitialized
              );
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    local_f88 = (FSkeleton *)
                ((pFVar22->DataLOD->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr +
                (int)(iVar17 * uVar40));
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    iVar17 = FStaticMeshVertexBuffer::GetTexCoordSize
                       (&(pFVar22->DataLOD->StaticVertexBuffers).StaticMeshVertexBuffer);
    if ((iVar17 < (int)((iVar21 + uVar40) * iVar16 * uVar38)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("UVSize * NumTexCoords * (FirstVertexIndex + VertexCount) <= Context->DataLOD->StaticVertexBuffers.StaticMeshVertexBuffer.GetTexCoordSize()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                            ,0x4b0,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((pFVar29->Buffers).ArrayNum < 3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar16 = *(int *)((pFVar29->Buffers).AllocatorInstance.Data + 0x88);
    puVar31 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar29,2);
    memcpy(puVar31,local_f88,(ulonglong)(uint)(iVar21 * iVar16));
    uVar38 = 3;
    if (0 < *(int *)(local_f90 + 0x4c)) {
      pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
                ::operator->(this);
      local_e40[2] = 9;
      pFVar46 = (pFVar22->DataLOD->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
      if (pFVar46 == (FSkinWeightVertexBuffer *)0x0) {
        pFVar46 = &pFVar22->DataLOD->SkinWeightVertexBuffer;
      }
      local_e40[0] = 0;
      local_e40[1] = 0;
      local_fd0 = CONCAT44(local_fd0._4_4_,(pFVar46->DataVertexBuffer).MaxBoneInfluences);
      uVar54 = (uint)((pFVar46->DataVertexBuffer).bUse16BitBoneIndex != false);
      iVar17 = uVar54 + 1;
      local_e40[3] = 8;
      uVar38 = (uint)((pFVar46->DataVertexBuffer).bUse16BitBoneWeight != false);
      iVar16 = uVar38 + 1;
      if ((iVar17 == 0) || (uVar54 == 0)) {
        local_f68[0] = UInt8;
      }
      else if (iVar17 == 2) {
        local_f68[0] = UInt16;
      }
      else if (iVar17 == 4) {
        local_f68[0] = UInt32;
      }
      else {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableMeshBufferUtils.cpp"
                            ,0x67,L"");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_f68[0] = None;
      }
      if ((iVar16 == 0) || (uVar38 == 0)) {
        local_f68[1] = 9;
      }
      else if (iVar16 == 2) {
        local_f68[1] = 10;
      }
      else if (iVar16 == 4) {
        local_f68[1] = 0xb;
      }
      else {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableMeshBufferUtils.cpp"
                            ,0x77,L"");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_f68[1] = 0;
      }
      local_e4c = (int)(float)local_fd0 * iVar17;
      local_e44 = (int)(float)local_fd0;
      local_e48 = (int)(float)local_fd0;
      local_e50 = 0;
      UE::Mutable::Private::FMeshBufferSet::SetBuffer
                (pFVar29,3,(iVar16 + iVar17) * (int)(float)local_fd0,2,
                 (EMeshBufferSemantic *)(local_e40 + 2),local_e40,local_f68,&local_e48,&local_e50,
                 Uninitialized);
      if (((pFVar29->Buffers).ArrayNum < 4) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = *(int *)((pFVar29->Buffers).AllocatorInstance.Data + 0xb8);
      puVar31 = (pFVar46->DataVertexBuffer).Data;
      if (((int)(((uint)((pFVar46->DataVertexBuffer).bUse16BitBoneWeight != false) +
                 ((pFVar46->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
                 (pFVar46->DataVertexBuffer).NumBoneWeights +
                (pFVar46->LookupVertexBuffer).NumVertices * 4) < (int)(iVar16 * (iVar21 + uVar40)))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize * (FirstVertexIndex + VertexCount) <= (int32)SkinBuffer->GetVertexDataSize()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                                 ,0x4c3,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar30 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar29,3);
      memcpy(puVar30,puVar31 + (int)(iVar16 * uVar40),(longlong)(iVar16 * iVar21));
      uVar38 = 4;
    }
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    if ((pFVar22->DataLOD->StaticVertexBuffers).ColorVertexBuffer.NumVertices != 0) {
      pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
                ::operator->(this);
      local_ee8.BoneParents.AllocatorInstance.Data._0_4_ = 4;
      local_ee8.BoneIds.AllocatorInstance.Data._4_4_ = 7;
      pFVar39 = pFVar22->DataLOD;
      local_ee8.BoneIds.ArrayNum = 0;
      local_ee8.BoneIds.ArrayMax = 9;
      local_eb8[0] = 0;
      UE::Mutable::Private::FMeshBufferSet::SetBuffer
                (pFVar29,uVar38,4,1,
                 (EMeshBufferSemantic *)((longlong)&local_ee8.BoneIds.AllocatorInstance.Data + 4),
                 &local_ee8.BoneIds.ArrayNum,(EMeshBufferFormat *)&local_ee8.BoneIds.ArrayMax,
                 (int *)&local_ee8.BoneParents,local_eb8,Uninitialized);
      if (((pFVar29->Buffers).ArrayNum <= (int)uVar38) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar54 = *(uint *)((pFVar29->Buffers).AllocatorInstance.Data + (ulonglong)uVar38 * 0x30 + 0x28
                        );
      puVar31 = (pFVar39->StaticVertexBuffers).ColorVertexBuffer.Data;
      uVar20 = FColorVertexBuffer::GetAllocatedSize
                         (&(pFVar39->StaticVertexBuffers).ColorVertexBuffer);
      if (((int)uVar20 < (int)((iVar21 + uVar40) * uVar54)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize * (FirstVertexIndex + VertexCount) <= (int32)ColorBuffer.GetAllocatedSize()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                              ,0x4d4,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((uVar54 != (pFVar39->StaticVertexBuffers).ColorVertexBuffer.Stride) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize == ColorBuffer.GetStride()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                              ,0x4d5,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar30 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar29,uVar38);
      memcpy(puVar30,puVar31 + (int)(uVar54 * uVar40),(longlong)(int)(uVar54 * iVar21));
    }
    iVar21 = *(int *)(local_f90 + 8) * 3;
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    bVar4 = (pFVar22->DataLOD->MultiSizeIndexContainer).DataTypeSize;
    pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                        ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
    pFVar29 = UE::Mutable::Private::FMesh::GetIndexBuffers(pFVar23);
    UE::Mutable::Private::FMeshBufferSet::SetBufferCount(pFVar29,1);
    UE::Mutable::Private::FMeshBufferSet::SetElementCount(pFVar29,iVar21,Uninitialized);
    local_ee8.BoneIds.AllocatorInstance.Data._0_4_ = 1;
    local_ee8.DebugBoneNames.ArrayMax = 0;
    local_e98[3] = 0;
    local_e78[0] = 1;
    local_ee8.DebugBoneNames.ArrayNum = (bVar4 == 4) + 4;
    UE::Mutable::Private::FMeshBufferSet::SetBuffer
              (pFVar29,0,(uint)bVar4,1,(EMeshBufferSemantic *)&local_ee8.BoneIds,
               &local_ee8.DebugBoneNames.ArrayMax,
               (EMeshBufferFormat *)&local_ee8.DebugBoneNames.ArrayNum,local_e78,local_e98 + 3,
               Uninitialized);
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    pFVar32 = FMultiSizeIndexContainer::GetIndexBuffer(&pFVar22->DataLOD->MultiSizeIndexContainer);
    puVar33 = (uint *)(**(code **)(pFVar32->_padding_ + 0x68))(pFVar32);
    puVar31 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar29,0);
    uVar38 = (uint)bVar4;
    if (uVar40 == 0) {
      memcpy(puVar31,puVar33,(longlong)(int)(uVar38 * iVar21));
    }
    else {
      lVar25 = (longlong)iVar21;
      if (uVar38 == 2) {
        if (0 < iVar21) {
          lVar27 = (longlong)puVar31 - (longlong)puVar33;
          do {
            if (((int)(uint)(ushort)*puVar33 < (int)uVar40) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("*Source >= FirstVertexIndex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                                    ,0x4ff,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(ushort *)(lVar27 + (longlong)puVar33) = (ushort)*puVar33 - (short)uVar40;
            puVar33 = (uint *)((longlong)puVar33 + 2);
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
      }
      else if ((uVar38 == 4) && (0 < iVar21)) {
        lVar27 = (longlong)puVar31 - (longlong)puVar33;
        do {
          if ((*puVar33 < uVar40) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("*Source >= uint32(FirstVertexIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                                  ,0x508,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(uint *)(lVar27 + (longlong)puVar33) = *puVar33 - uVar40;
          puVar33 = puVar33 + 1;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
    }
    pUVar24 = TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              ::operator->((TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                            *)((longlong)this + 0x10));
    local_f88 = (FSkeleton *)
                (**(code **)(pUVar24->_padding_ + 0x330))
                          (pUVar24,*(undefined4 *)((longlong)this + 0x18));
    pUVar24 = TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              ::operator->((TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                            *)((longlong)this + 0x10));
    plVar34 = (longlong *)(**(code **)(pUVar24->_padding_ + 0x458))(pUVar24);
    plVar41 = (longlong *)*plVar34;
    lVar25 = plVar34[1];
    plVar35 = plVar41 + (int)lVar25;
    while( true ) {
      if ((int)plVar34[1] != (int)lVar25) {
        local_fd7 = 0;
        `TCheckedPointerIterator<TObjectPtr<UMorphTarget>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_fd7);
      }
      if (plVar41 == plVar35) break;
      lVar27 = *plVar41;
      if ((*(longlong *)((longlong)this + 0x20) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_ef0 = *(undefined8 *)(lVar27 + 0x18);
      lVar27 = *(longlong *)((longlong)this + 0x20);
      pFVar47 = (ForAnyElementType *)(lVar27 + 0xa0);
      if (((pFVar47->Data <= (FScriptContainerElement *)&local_ef0) &&
          ((FScriptContainerElement *)&local_ef0 <
           pFVar47->Data + (longlong)*(int *)(lVar27 + 0xac) * 8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar21 = *(int *)(lVar27 + 0xa8);
      if (iVar21 == *(int *)(lVar27 + 0xac)) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,pFVar47,(int *)(lVar27 + 0xac));
      }
      *(int *)(lVar27 + 0xa8) = iVar21 + 1;
      plVar41 = plVar41 + 1;
      *(undefined8 *)(pFVar47->Data + (longlong)iVar21 * 8) = local_ef0;
    }
    pFVar22 = TSharedPtr<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
              ::operator->(this);
    local_fe0 = pFVar22->DataLOD;
    local_f50.Data = (FScriptContainerElement *)0x0;
    local_f48[0] = 0;
    local_f48[1] = 0;
    if (((longlong)(int)(local_fe0->MorphTargetVertexInfoBuffers).MorphData._padding_ &
        0x3fffffffffffffffU) == 0) {
      bVar14 = -1 < CpuChannel->Enabled;
      if (bVar14) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1314,"Mutable_CompressMorphs",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                   ,0x522);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1314);
      }
      uVar40 = *(uint *)(plVar34 + 1);
      local_fa8.Data = (FScriptContainerElement *)0x0;
      local_fa0 = 0;
      if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
      }
      if (0 < (int)uVar40) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar40,&local_fa8,0,(int *)((longlong)&local_fa0 + 4));
      }
      puVar57 = (undefined8 *)*plVar34;
      lVar25 = plVar34[1];
      puVar2 = puVar57 + (int)lVar25;
      while( true ) {
        if ((int)plVar34[1] != (int)lVar25) {
          local_fd6 = 0;
          `TCheckedPointerIterator<TObjectPtr<UMorphTarget>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_fd6);
        }
        if (puVar57 == puVar2) break;
        plVar35 = (longlong *)(**(code **)(*(longlong *)*puVar57 + 0x2b0))();
        iVar21 = *(int *)((longlong)this + 0x18);
        if ((iVar21 < 0) || ((int)plVar35[1] <= iVar21)) {
          local_ee8.DebugBoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        else {
          if ((iVar21 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_ee8.DebugBoneNames.AllocatorInstance.Data =
               (FScriptContainerElement *)((longlong)iVar21 * 0x40 + *plVar35);
        }
        if (((local_fa8.Data <= &local_ee8) &&
            (&local_ee8 < (FSkeleton *)(local_fa8.Data + (longlong)local_fa0._4_4_ * 8))) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar21 = (int)local_fa0;
        if ((int)local_fa0 == local_fa0._4_4_) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_fa8,(int *)((longlong)&local_fa0 + 4));
        }
        puVar57 = puVar57 + 1;
        local_fa0 = CONCAT44(local_fa0._4_4_,iVar21 + 1);
        *(FScriptContainerElement **)(local_fa8.Data + (longlong)iVar21 * 8) =
             local_ee8.DebugBoneNames.AllocatorInstance.Data;
      }
      pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                          ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
      if (((int)local_fa0 != (pFVar23->Morph).Names.ArrayNum) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("MorphTargetLODs.Num() == Result->Morph.Names.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                              ,0x532,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                          ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
      if ((int)local_fa0 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_fa0 & 0xffffffff);
      }
      piVar43 = &(pFVar23->Morph).BatchStartOffsetPerMorph.ArrayMax;
      (pFVar23->Morph).BatchStartOffsetPerMorph.ArrayNum = 0;
      if (*piVar43 != (int)local_fa0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_fa0,&(pFVar23->Morph).BatchStartOffsetPerMorph.AllocatorInstance,0
                   ,piVar43);
      }
      pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                          ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
      if ((int)local_fa0 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_fa0 & 0xffffffff);
      }
      piVar43 = &(pFVar23->Morph).BatchesPerMorph.ArrayMax;
      (pFVar23->Morph).BatchesPerMorph.ArrayNum = 0;
      if (*piVar43 != (int)local_fa0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_fa0,&(pFVar23->Morph).BatchesPerMorph.AllocatorInstance,0,piVar43)
        ;
      }
      pFVar23 = TSharedPtr<UE::Mutable::Private::FMesh,1>::operator->
                          ((TSharedPtr<UE::Mutable::Private::FMesh,1> *)((longlong)this + 0x20));
      if ((int)local_fa0 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_fa0 & 0xffffffff);
      }
      piVar43 = &(pFVar23->Morph).MaximumValuePerMorph.ArrayMax;
      (pFVar23->Morph).MaximumValuePerMorph.ArrayNum = 0;
      if (*piVar43 != (int)local_fa0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,(int)local_fa0,&(pFVar23->Morph).MaximumValuePerMorph.AllocatorInstance
                   ,0,piVar43);
      }
      if ((*(longlong *)((longlong)this + 0x20) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar25 = *(longlong *)((longlong)this + 0x20);
      if ((int)local_fa0 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_fa0 & 0xffffffff);
      }
      *(undefined4 *)(lVar25 + 200) = 0;
      if (*(int *)(lVar25 + 0xcc) != (int)local_fa0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,(int)local_fa0,(ForAnyElementType *)(lVar25 + 0xc0),0,
                   (int *)(lVar25 + 0xcc));
      }
      if ((*(longlong *)this == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar25 = *(longlong *)(*(longlong *)this + 0x768);
      if ((*(longlong *)this == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar27 = *(longlong *)(*(longlong *)this + 0x768);
      uVar38 = *(int *)(lVar27 + 0x18) - 1;
      uVar40 = 0;
      if ((int)uVar38 < *(int *)(lVar27 + 0x18)) {
        uVar40 = ~uVar38 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)(lVar27 + 0x10);
      iVar21 = *(int *)(lVar27 + 0x18);
      uVar38 = *(int *)(lVar25 + 0x18) - 1;
      uVar40 = 0;
      if ((int)uVar38 < *(int *)(lVar25 + 0x18)) {
        uVar40 = ~uVar38 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_a08.NumBits =
           *(int *)(((longlong)iVar21 + -1) * 0x118 + 0x48 + lVar6) +
           *(int *)((longlong)*(int *)(lVar25 + 0x18) * 0x118 + -0x108 +
                   *(longlong *)(lVar25 + 0x10));
      local_a08.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_a08.MaxBits = 0x80;
      uVar40 = local_a08.NumBits + 0x1fU >> 5;
      if (local_a08.NumBits + 0x1fU >> 5 != 0) {
        if (4 < uVar40) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_a08.AllocatorInstance,0,uVar40,4);
          local_a08.MaxBits = uVar40 << 5;
        }
        FVar37 = (ForElementType<unsigned_int>)&local_a08;
        if (local_a08.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar37 = local_a08.AllocatorInstance.SecondaryData;
        }
        if (uVar40 < 9) {
          iVar21 = -1;
        }
        else {
          iVar21 = 0xff;
        }
        memset((void *)FVar37,iVar21,(ulonglong)uVar40 << 2);
        uVar40 = local_a08.NumBits & 0x8000001f;
        if ((int)uVar40 < 0) {
          uVar40 = (uVar40 - 1 | 0xffffffe0) + 1;
        }
        if (uVar40 != 0) {
          FVar37 = (ForElementType<unsigned_int>)&local_a08;
          if (local_a08.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar37 = local_a08.AllocatorInstance.SecondaryData;
          }
          puVar33 = (uint *)((longlong)FVar37 +
                            (longlong)
                            ((int)(local_a08.NumBits + (local_a08.NumBits >> 0x1f & 0x1fU)) >> 5) *
                            4);
          *puVar33 = *puVar33 & 0xffffffffU >> (0x20U - (char)uVar40 & 0x1f);
        }
      }
      fVar11 = __real_ff7fffff;
      iVar21 = (int)local_fa0;
      fVar64 = (float)local_f88[3].BoneParents.ArrayMax * __real_3951b717;
      pFVar48 = (FSkeleton *)(local_fa8.Data + (longlong)(int)local_fa0 * 8);
      local_f18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f18.ArrayNum = 0;
      local_f18.ArrayMax = 0;
      local_e60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_fd0 = CONCAT44(local_fd0._4_4_,fVar64);
      local_e60.ArrayNum = 0;
      local_e60.ArrayMax = 0;
      FVar56.Data = local_fa8.Data;
      local_f88 = pFVar48;
      while( true ) {
        local_fb8 = (FSkeleton *)FVar56.Data;
        if ((int)local_fa0 != iVar21) {
          local_fd5 = 0;
          `TCheckedPointerIterator<FMorphTargetLODModel_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_fd5);
        }
        fVar84 = __real_7f7fffff;
        if ((FSkeleton *)FVar56.Data == pFVar48) break;
        pFVar1 = (((FSkeleton *)FVar56.Data)->DebugBoneNames).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          iVar16 = *(int *)(pFVar1 + 8);
          lVar27 = (longlong)iVar16;
          lVar25 = *(longlong *)pFVar1;
          local_f94 = local_f18.ArrayNum;
          if ((iVar16 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar69 = fVar11;
          fVar74 = fVar11;
          fVar79 = fVar11;
          fVar89 = fVar84;
          fVar94 = fVar84;
          fVar99 = fVar11;
          fVar62 = fVar84;
          if (0 < iVar16) {
            pfVar52 = (float *)(lVar25 + 4);
            fVar64 = fVar84;
            uVar40 = 0;
            do {
              uVar38 = 0;
              if ((int)uVar40 < iVar16) {
                uVar38 = ~uVar40 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_f78 = *(FSkeleton **)(pfVar52 + 2);
              uVar40 = uVar40 + 1;
              if (fVar69 <= pfVar52[-1]) {
                fVar69 = pfVar52[-1];
              }
              if (fVar74 <= *pfVar52) {
                fVar74 = *pfVar52;
              }
              if (fVar79 <= pfVar52[1]) {
                fVar79 = pfVar52[1];
              }
              if (pfVar52[-1] <= fVar84) {
                fVar84 = pfVar52[-1];
              }
              if (*pfVar52 <= fVar89) {
                fVar89 = *pfVar52;
              }
              if (pfVar52[1] <= fVar94) {
                fVar94 = pfVar52[1];
              }
              fVar62 = (float)((ulonglong)local_f78 >> 0x20);
              fVar61 = fVar62;
              if (fVar62 <= pfVar52[4]) {
                fVar61 = pfVar52[4];
              }
              if (pfVar52[4] <= fVar62) {
                fVar62 = pfVar52[4];
              }
              pfVar52 = pfVar52 + 7;
              if (fVar61 <= local_f78._0_4_) {
                fVar61 = local_f78._0_4_;
              }
              if (local_f78._0_4_ <= fVar62) {
                fVar62 = local_f78._0_4_;
              }
              if (fVar61 <= fVar99) {
                fVar61 = fVar99;
              }
              fVar99 = fVar61;
              if (fVar64 <= fVar62) {
                fVar62 = fVar64;
              }
              lVar27 = lVar27 + -1;
              fVar64 = fVar62;
            } while (lVar27 != 0);
            fVar64 = (float)local_fd0;
          }
          local_db8 = *(FMorphTargetDelta **)pFVar1;
          iVar16 = *(int *)(pFVar1 + 8);
          if ((iVar16 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_c08._12_4_ = uStack_dac;
          local_c08.ArrayNum = iVar16;
          local_c08.DataPtr = local_db8;
          iStack_db0 = iVar16;
          UE::MorphTargetVertexCodec::Encode
                    (&local_c08,&local_a08,fVar64,__real_3a000000,&local_f18,&local_e60);
          local_f80._4_4_ = local_f18.ArrayNum - local_f94;
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)((longlong)this + 0x20);
          pFVar47 = (ForAnyElementType *)(lVar25 + 0xd0);
          if (((pFVar47->Data <= (FScriptContainerElement *)&local_f94) &&
              ((FScriptContainerElement *)&local_f94 <
               pFVar47->Data + (longlong)*(int *)(lVar25 + 0xdc) * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = *(int *)(lVar25 + 0xd8);
          if (iVar16 == *(int *)(lVar25 + 0xdc)) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar47,(int *)(lVar25 + 0xdc));
          }
          *(int *)(lVar25 + 0xd8) = iVar16 + 1;
          *(int *)(pFVar47->Data + (longlong)iVar16 * 4) = local_f94;
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)((longlong)this + 0x20);
          pFVar47 = (ForAnyElementType *)(lVar25 + 0xe0);
          if (((pFVar47->Data <= (FScriptContainerElement *)((longlong)&local_f80 + 4U)) &&
              ((FScriptContainerElement *)((longlong)&local_f80 + 4U) <
               pFVar47->Data + (longlong)*(int *)(lVar25 + 0xec) * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = *(int *)(lVar25 + 0xe8);
          if (iVar16 == *(int *)(lVar25 + 0xec)) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar47,(int *)(lVar25 + 0xec));
          }
          *(int *)(lVar25 + 0xe8) = iVar16 + 1;
          *(uint *)(pFVar47->Data + (longlong)iVar16 * 4) = local_f80._4_4_;
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)((longlong)this + 0x20);
          pFVar47 = (ForAnyElementType *)(lVar25 + 0xb0);
          local_ea8 = fVar69;
          fStack_ea4 = fVar74;
          fStack_ea0 = fVar79;
          fStack_e9c = fVar99;
          if (((pFVar47->Data <= (FScriptContainerElement *)&local_ea8) &&
              ((FScriptContainerElement *)&local_ea8 <
               pFVar47->Data + (longlong)*(int *)(lVar25 + 0xbc) * 0x10)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = *(int *)(lVar25 + 0xb8);
          if (iVar16 == *(int *)(lVar25 + 0xbc)) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1010,pFVar47,(int *)(lVar25 + 0xbc));
          }
          *(int *)(lVar25 + 0xb8) = iVar16 + 1;
          pFVar1 = pFVar47->Data;
          *(ulonglong *)(pFVar1 + (longlong)iVar16 * 0x10) = CONCAT44(fStack_ea4,local_ea8);
          *(ulonglong *)(pFVar1 + (longlong)iVar16 * 0x10 + 8) = CONCAT44(fStack_e9c,fStack_ea0);
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)((longlong)this + 0x20);
          pFVar47 = (ForAnyElementType *)(lVar25 + 0xc0);
          local_e88 = fVar84;
          fStack_e84 = fVar89;
          fStack_e80 = fVar94;
          fStack_e7c = fVar62;
          if (((pFVar47->Data <= (FScriptContainerElement *)&local_e88) &&
              ((FScriptContainerElement *)&local_e88 <
               pFVar47->Data + (longlong)*(int *)(lVar25 + 0xcc) * 0x10)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = *(int *)(lVar25 + 200);
          if (iVar16 == *(int *)(lVar25 + 0xcc)) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1010,pFVar47,(int *)(lVar25 + 0xcc));
          }
          *(int *)(lVar25 + 200) = iVar16 + 1;
          pFVar1 = pFVar47->Data;
          *(ulonglong *)(pFVar1 + (longlong)iVar16 * 0x10) = CONCAT44(fStack_e84,local_e88);
          *(ulonglong *)(pFVar1 + (longlong)iVar16 * 0x10 + 8) = CONCAT44(fStack_e7c,fStack_e80);
          FVar56.Data = (FScriptContainerElement *)local_fb8;
          pFVar48 = local_f88;
        }
        FVar56.Data = (FScriptContainerElement *)
                      &(((FSkeleton *)FVar56.Data)->DebugBoneNames).ArrayNum;
      }
      if ((*(longlong *)((longlong)this + 0x20) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(float *)(*(longlong *)((longlong)this + 0x20) + 0xf4) = fVar64;
      if ((*(longlong *)((longlong)this + 0x20) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(*(longlong *)((longlong)this + 0x20) + 0xf8) = 0x3a000000;
      iVar21 = local_f18.ArrayNum;
      if ((*(longlong *)((longlong)this + 0x20) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(int *)(*(longlong *)((longlong)this + 0x20) + 0xf0) = iVar21;
      iVar21 = local_f18.ArrayNum;
      uVar55 = (ulonglong)local_f18.ArrayNum;
      pFVar58 = (FDeltaBatchHeader *)(local_f18.AllocatorInstance.Data + uVar55 * 0x2c);
      FVar56.Data = local_f18.AllocatorInstance.Data;
      while( true ) {
        iVar16 = (int)uVar55;
        if ((int)uVar55 != iVar21) {
          local_fd4 = 0;
          `TCheckedPointerIterator<UE::MorphTargetVertexCodec::FDeltaBatchHeader,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_fd4);
          iVar16 = local_f18.ArrayNum;
        }
        if ((FDeltaBatchHeader *)FVar56.Data == pFVar58) break;
        uStack_da0 = 10;
        ((FDeltaBatchHeader *)FVar56.Data)->DataOffset =
             ((FDeltaBatchHeader *)FVar56.Data)->DataOffset + iVar16 * 0x28;
        local_da8 = (uint *)&local_9e8;
        local_bf8._12_4_ = uStack_d9c;
        local_bf8.ArrayNum = 10;
        local_bf8.DataPtr = local_da8;
        UE::MorphTargetVertexCodec::WriteHeader((FDeltaBatchHeader *)FVar56.Data,&local_bf8);
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,10,&local_f50,local_f48,local_f48 + 1);
        lVar25 = (longlong)iVar16;
        FVar56.Data = FVar56.Data + 0x2c;
        *(undefined8 *)(local_f50.Data + lVar25 * 4) = local_9e8;
        *(undefined8 *)(local_f50.Data + lVar25 * 4 + 8) = uStack_9e0;
        *(undefined8 *)(local_f50.Data + lVar25 * 4 + 0x10) = local_9d8;
        *(undefined8 *)(local_f50.Data + lVar25 * 4 + 0x10 + 8) = uStack_9d0;
        *(undefined8 *)(local_f50.Data + lVar25 * 4 + 0x20) = local_9c8;
        uVar55 = local_f18._8_8_ & 0xffffffff;
      }
      lVar25 = (longlong)local_e60.ArrayNum;
      if (local_e60.ArrayNum != 0) {
        iVar21 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,local_e60.ArrayNum,&local_f50,local_f48,local_f48 + 1);
        memcpy(local_f50.Data + (longlong)iVar21 * 4,local_e60.AllocatorInstance.Data,lVar25 << 2);
      }
      if (local_e60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e60.AllocatorInstance.Data);
      }
      if ((FDeltaBatchHeader *)local_f18.AllocatorInstance.Data != (FDeltaBatchHeader *)0x0) {
        FMemory::Free(local_f18.AllocatorInstance.Data);
      }
      if (local_a08.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_a08.AllocatorInstance.SecondaryData);
      }
      if ((FSkeleton *)local_fa8.Data != (FSkeleton *)0x0) {
        FMemory::Free(local_fa8.Data);
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      iVar21 = local_f48[0];
      if (local_f48[0] == 0) goto LAB_14ac54997;
      local_f78 = (FSkeleton *)local_f50.Data;
      local_e08 = local_f50.Data;
      if ((local_f48[0] < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iStack_e00 = iVar21;
      pFVar39 = local_fe0;
      pFVar48 = local_f78;
    }
    else {
LAB_14ac54997:
      pFVar39 = local_fe0;
      iStack_e00 = (int)(local_fe0->MorphTargetVertexInfoBuffers).MorphData._padding_;
      plVar35 = &(local_fe0->MorphTargetVertexInfoBuffers).MorphData._padding_;
      pFVar48 = (FSkeleton *)*plVar35;
      if (((ulonglong)pFVar48 & 1) != 0) {
        pFVar48 = (FSkeleton *)(((longlong)pFVar48 >> 0x18) + (longlong)plVar35);
      }
      local_f78 = pFVar48;
      local_e08 = (FScriptContainerElement *)pFVar48;
      if ((iStack_e00 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (pFVar48 != (FSkeleton *)0x0) {
      bVar14 = -1 < CpuChannel->Enabled;
      if (bVar14) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1419,"Mutable_ExtractSectionMorphs",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                   ,0x58b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1419);
      }
      if ((*(longlong *)((longlong)this + 0x20) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar48 = *(FSkeleton **)((longlong)this + 0x20);
      pFVar59 = pFVar48;
      local_fb8 = pFVar48;
      if (local_f48[0] == 0) {
        iVar21 = (pFVar39->MorphTargetVertexInfoBuffers).BatchesPerMorph.ArrayNum;
        local_fd0 = CONCAT44(local_fd0._4_4_,iVar21);
        TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  ((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                   &pFVar48[3].BoneParents,iVar21,Default);
        TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  ((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(pFVar48 + 4),
                   iVar21,Default);
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&pFVar48[4].BoneIds,iVar21,
                   Default);
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&pFVar48[4].BoneParents,
                   iVar21,Default);
        pFVar39 = local_fe0;
        uVar55 = 0;
        if (0 < iVar21) {
          uVar36 = uVar55;
          uVar53 = uVar55;
          do {
            uVar40 = (uint)uVar55;
            if (((uint)(pFVar39->MorphTargetVertexInfoBuffers).MaximumValuePerMorph.ArrayNum <=
                 uVar40) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < (uint32)MaximumValuePerMorph.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MorphTargetVertexInfoBuffers.h"
                                    ,0x37,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar38 = 0;
            if ((int)uVar40 < (pFVar39->MorphTargetVertexInfoBuffers).MaximumValuePerMorph.ArrayNum)
            {
              uVar38 = ~uVar40 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = (pFVar39->MorphTargetVertexInfoBuffers).MaximumValuePerMorph.AllocatorInstance.
                     Data + uVar36;
            uVar9 = *(undefined8 *)pFVar1;
            uVar10 = *(undefined8 *)(pFVar1 + 8);
            uVar38 = 0;
            if ((int)uVar40 < pFVar59[3].BoneParents.ArrayNum) {
              uVar38 = ~uVar40 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = pFVar59[3].BoneParents.AllocatorInstance.Data + uVar36;
            *(undefined8 *)pFVar1 = uVar9;
            *(undefined8 *)(pFVar1 + 8) = uVar10;
            if (((uint)(pFVar39->MorphTargetVertexInfoBuffers).MinimumValuePerMorph.ArrayNum <=
                 uVar40) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < (uint32)MinimumValuePerMorph.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MorphTargetVertexInfoBuffers.h"
                                    ,0x3d,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar54 = 0;
            uVar38 = uVar54;
            if ((int)uVar40 < (pFVar39->MorphTargetVertexInfoBuffers).MinimumValuePerMorph.ArrayNum)
            {
              uVar38 = ~uVar40 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = (pFVar39->MorphTargetVertexInfoBuffers).MinimumValuePerMorph.AllocatorInstance.
                     Data + uVar36;
            uVar9 = *(undefined8 *)pFVar1;
            uVar10 = *(undefined8 *)(pFVar1 + 8);
            uVar38 = uVar54;
            if ((int)uVar40 < pFVar59[4].DebugBoneNames.ArrayNum) {
              uVar38 = ~uVar40 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar1 = pFVar59[4].DebugBoneNames.AllocatorInstance.Data + uVar36;
            *(undefined8 *)pFVar1 = uVar9;
            *(undefined8 *)(pFVar1 + 8) = uVar10;
            if (((uint)(pFVar39->MorphTargetVertexInfoBuffers).BatchStartOffsetPerMorph.ArrayNum <=
                 uVar40) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < (uint32)BatchStartOffsetPerMorph.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MorphTargetVertexInfoBuffers.h"
                                    ,0x31,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((int)uVar40 <
                (pFVar39->MorphTargetVertexInfoBuffers).BatchStartOffsetPerMorph.ArrayNum) {
              uVar54 = ~uVar40 >> 0x1f;
            }
            if ((uVar54 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar63 = *(undefined4 *)
                      ((pFVar39->MorphTargetVertexInfoBuffers).BatchStartOffsetPerMorph.
                       AllocatorInstance.Data + uVar53);
            uVar38 = 0;
            if ((int)uVar40 < pFVar59[4].BoneIds.ArrayNum) {
              uVar38 = ~uVar40 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined4 *)(pFVar59[4].BoneIds.AllocatorInstance.Data + uVar53) = uVar63;
            if (((uint)(pFVar39->MorphTargetVertexInfoBuffers).BatchesPerMorph.ArrayNum <= uVar40)
               && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                      ("index == 0xffffffff || index < (uint32)BatchesPerMorph.Num()"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MorphTargetVertexInfoBuffers.h"
                                       ,0x26,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar38 = 0;
            if ((int)uVar40 < (pFVar39->MorphTargetVertexInfoBuffers).BatchesPerMorph.ArrayNum) {
              uVar38 = ~uVar40 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar63 = *(undefined4 *)
                      ((pFVar39->MorphTargetVertexInfoBuffers).BatchesPerMorph.AllocatorInstance.
                       Data + uVar53);
            uVar38 = 0;
            if ((int)uVar40 < local_fb8[4].BoneParents.ArrayNum) {
              uVar38 = ~uVar40 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar55 = (ulonglong)(uVar40 + 1);
            uVar36 = uVar36 + 0x10;
            *(undefined4 *)(pFVar48[4].BoneParents.AllocatorInstance.Data + uVar53) = uVar63;
            uVar53 = uVar53 + 4;
            *(uint *)&local_fb8[5].DebugBoneNames.AllocatorInstance.Data =
                 (pFVar39->MorphTargetVertexInfoBuffers).NumTotalBatches;
            *(float *)((longlong)&local_fb8[5].DebugBoneNames.AllocatorInstance.Data + 4) =
                 (pFVar39->MorphTargetVertexInfoBuffers).PositionPrecision;
            local_fb8[5].DebugBoneNames.ArrayNum =
                 (int)(pFVar39->MorphTargetVertexInfoBuffers).TangentZPrecision;
            pFVar59 = local_fb8;
          } while ((int)(uVar40 + 1) < (int)(float)local_fd0);
        }
      }
      uVar40 = 0;
      local_fe8 = 0;
      local_fc8 = *(int *)(local_f90 + 0x48) + *(int *)(local_f90 + 0x10);
      local_f30 = (longlong *)CONCAT44(local_f30._4_4_,*(int *)(local_f90 + 0x10));
      iVar21 = pFVar59[4].BoneIds.ArrayNum;
      local_f88 = (FSkeleton *)(longlong)iVar21;
      local_f90 = (FScriptContainerElement *)CONCAT44(local_f90._4_4_,iVar21);
      if (0 < iVar21) {
        uVar55 = 0;
        local_fe0 = (FSkeletalMeshLODRenderData *)0x0;
        do {
          pFVar39 = local_fe0;
          iVar21 = 0;
          uVar38 = 0;
          if ((int)uVar40 < pFVar59[4].BoneParents.ArrayNum) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = *(int *)(pFVar59[4].BoneParents.AllocatorInstance.Data + (longlong)pFVar39 * 4);
          uVar38 = 0;
          if ((int)uVar40 < pFVar59[4].BoneIds.ArrayNum) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar48 = local_f78;
          iVar17 = *(int *)(pFVar59[4].BoneIds.AllocatorInstance.Data + (longlong)pFVar39 * 4);
          if (0 < iVar16) {
            uVar38 = (uint)local_f30;
            do {
              uStack_d90 = 10;
              local_d98 = (FScriptContainerElement *)
                          ((longlong)pFVar48 + (ulonglong)(uint)((iVar21 + iVar17) * 10) * 4);
              local_c38._12_4_ = uStack_d8c;
              local_c38.ArrayNum = 10;
              local_c38.DataPtr = (uint *)local_d98;
              UE::MorphTargetVertexCodec::ReadHeader(&local_a78,&local_c38);
              if (uVar38 <= local_a78.IndexMin) break;
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar16);
            uVar55 = (ulonglong)local_fe8;
            pFVar39 = local_fe0;
          }
          pFVar48 = local_f78;
          uVar38 = local_fc8;
          iVar49 = iVar21 + -1;
          if (iVar21 + -1 < 0) {
            iVar49 = 0;
          }
          if (iVar21 < iVar16) {
            do {
              uStack_dc0 = 10;
              local_dc8 = (FScriptContainerElement *)
                          ((longlong)pFVar48 + (ulonglong)(uint)((iVar21 + iVar17) * 10) * 4);
              local_c18._12_4_ = uStack_dbc;
              local_c18.ArrayNum = 10;
              local_c18.DataPtr = (uint *)local_dc8;
              UE::MorphTargetVertexCodec::ReadHeader(&local_a48,&local_c18);
              if (uVar38 <= local_a48.IndexMin) break;
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar16);
            uVar55 = (ulonglong)local_fe8;
            pFVar39 = local_fe0;
          }
          iVar21 = iVar21 + -1;
          if (iVar21 < 0) {
            iVar21 = 0;
          }
          iVar21 = (iVar21 - iVar49) + 1;
          local_fd0 = CONCAT44(local_fd0._4_4_,iVar21);
          iVar21 = iVar21 * 10;
          pFVar1 = (FScriptContainerElement *)
                   ((longlong)local_f78 + (ulonglong)(uint)((iVar17 + iVar49) * 10) * 4);
          if ((iVar21 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)((longlong)this + 0x20);
          if (iVar21 < 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar15) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
LAB_14ac5516d:
            iVar16 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar21,(ForAnyElementType *)(lVar25 + 0x70),
                                (int *)(lVar25 + 0x78),(int *)(lVar25 + 0x7c));
            memcpy((void *)(*(longlong *)(lVar25 + 0x70) + (longlong)iVar16 * 4),pFVar1,
                   (longlong)iVar21 << 2);
          }
          else if (iVar21 != 0) goto LAB_14ac5516d;
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)((longlong)this + 0x20);
          uVar38 = 0;
          if ((int)uVar40 < *(int *)(lVar25 + 0xd8)) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)(*(longlong *)(lVar25 + 0xd0) + (longlong)pFVar39 * 4) = (int)(uVar55 / 10);
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)((longlong)this + 0x20);
          uVar38 = 0;
          if ((int)uVar40 < *(int *)(lVar25 + 0xe8)) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_fe8 = (int)uVar55 + iVar21;
          uVar55 = (ulonglong)local_fe8;
          uVar40 = uVar40 + 1;
          *(float *)(*(longlong *)(lVar25 + 0xe0) + (longlong)pFVar39 * 4) = (float)local_fd0;
          local_fe0 = (FSkeletalMeshLODRenderData *)((longlong)&pFVar39->_padding_ + 1);
          pFVar59 = local_fb8;
        } while ((longlong)local_fe0 < (longlong)local_f88);
        iVar21 = (int)local_f90;
      }
      pFVar1 = local_e08;
      uVar40 = 0;
      local_fd0 = local_fd0 & 0xffffffff00000000;
      if (0 < iVar21) {
        uVar9._4_4_ = uStack_dfc;
        uVar9._0_4_ = iStack_e00;
        local_fe0 = (FSkeletalMeshLODRenderData *)0x0;
        do {
          pFVar39 = local_fe0;
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)((longlong)this + 0x20);
          uVar38 = 0;
          if ((int)uVar40 < *(int *)(lVar25 + 0xe8)) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar21 = *(int *)(*(longlong *)(lVar25 + 0xe0) + (longlong)pFVar39 * 4);
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)((longlong)this + 0x20);
          uVar38 = 0;
          if ((int)uVar40 < *(int *)(lVar25 + 0xd8)) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = *(int *)(*(longlong *)(lVar25 + 0xd0) + (longlong)local_fe0 * 4);
          local_f90 = (FScriptContainerElement *)CONCAT44(local_f90._4_4_,iVar16);
          if (iVar21 != 0) {
            if ((*(longlong *)((longlong)this + 0x20) == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar33 = (uint *)(*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x70) +
                              (ulonglong)(uint)(iVar16 * 10) * 4);
            if ((iVar21 * 10 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uStack_d70 = 10;
            local_c28._12_4_ = uStack_d6c;
            local_c28.ArrayNum = 10;
            local_d78 = puVar33;
            local_c28.DataPtr = puVar33;
            UE::MorphTargetVertexCodec::ReadHeader(&local_c78,&local_c28);
            uStack_d60 = 10;
            local_d68 = puVar33 + (uint)((iVar21 + -1) * 10);
            local_be8._12_4_ = uStack_d5c;
            local_be8.ArrayNum = 10;
            local_be8.DataPtr = local_d68;
            UE::MorphTargetVertexCodec::ReadHeader(&local_cd8,&local_be8);
            local_fb8 = (FSkeleton *)0x0;
            iVar16 = 0;
            if (2 < iVar21) {
              local_d58 = puVar33 + 10;
              uStack_d50 = 10;
              local_bd8._12_4_ = uStack_d4c;
              local_bd8.ArrayNum = 10;
              local_bd8.DataPtr = local_d58;
              UE::MorphTargetVertexCodec::ReadHeader(&local_aa8,&local_bd8);
              uStack_d40 = 10;
              local_d48 = puVar33 + (uint)((iVar21 + -2) * 10);
              local_bc8._12_4_ = uStack_d3c;
              local_bc8.ArrayNum = 10;
              local_bc8.DataPtr = local_d48;
              UE::MorphTargetVertexCodec::ReadHeader(&local_ad8,&local_bc8);
              uVar38 = local_ad8.DataOffset - local_aa8.DataOffset;
              uVar40 = UE::MorphTargetVertexCodec::CalculateBatchDwords(&local_ad8);
              iStack_d30 = uVar40 + (uVar38 >> 2);
              local_d38 = (FSkeleton *)
                          ((longlong)local_f78 + (ulonglong)(local_aa8.DataOffset >> 2) * 4);
              if ((iStack_d30 < 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_fb8 = local_d38;
              iVar16 = iStack_d30;
            }
            local_938.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_230[0] = 0;
            local_230[1] = 0x1c0;
            uVar40 = UE::MorphTargetVertexCodec::CalculateBatchDwords(&local_cd8);
            uVar38 = UE::MorphTargetVertexCodec::CalculateBatchDwords(&local_c78);
            if (uVar40 < uVar38) {
              uVar40 = uVar38;
            }
            if (local_230[0] < (int)uVar40) {
              UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                        (4,4,uVar40 - local_230[0],&local_938,local_230,local_230 + 1);
            }
            else {
              if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
              }
              if ((int)uVar40 < local_230[0]) {
                uVar38 = local_230[0] - uVar40;
                if (((int)(uVar40 | uVar38) < 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (uVar38 != 0) {
                  FVar37 = (ForElementType<unsigned_int>)&local_938;
                  if (local_938.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                    FVar37 = local_938.SecondaryData;
                  }
                  pvVar3 = (void *)((longlong)FVar37 + (longlong)(int)uVar40 * 4);
                  iVar17 = (local_230[0] - uVar40) - uVar38;
                  if (iVar17 != 0) {
                    memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)(int)uVar38 * 4),
                            (longlong)iVar17 << 2);
                  }
                  local_230[0] = local_230[0] - uVar38;
                  UE::Core::Private::
                  ReallocShrink<2,TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                            (4,4,&local_938,local_230[0],local_230 + 1);
                }
              }
            }
            if ((*(longlong *)((longlong)this + 0x20) == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar25 = *(longlong *)((longlong)this + 0x20);
            uVar40 = UE::MorphTargetVertexCodec::CalculateBatchDwords(&local_cd8);
            uVar38 = UE::MorphTargetVertexCodec::CalculateBatchDwords(&local_c78);
            uVar40 = iVar16 + uVar40 + uVar38 + iVar21 * 10;
            if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
            }
            if (*(int *)(lVar25 + 0x7c) < (int)uVar40) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar40,(ForAnyElementType *)(lVar25 + 0x70),*(int *)(lVar25 + 0x78),
                         (int *)(lVar25 + 0x7c));
            }
            iVar17 = local_230[0];
            local_d88 = (ForElementType<unsigned_int>)&local_938;
            if (local_938.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              local_d88 = local_938.SecondaryData;
            }
            if ((local_230[0] < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iStack_d80 = iVar17;
            local_bb8._12_4_ = uStack_d7c;
            local_bb8.ArrayNum = iVar17;
            local_bb8.DataPtr = (uint *)local_d88;
            local_ba8.DataPtr = (uint *)pFVar1;
            local_ba8._8_8_ = uVar9;
            ``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_2>::
            operator()'::__l149::<lambda_1>::operator()
                      (local_fd3,(uint)local_f30,local_fc8,&local_c78,&local_ba8,&local_bb8);
            if ((*(longlong *)((longlong)this + 0x20) == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uStack_d20 = 10;
            local_d28 = (uint *)(*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x70) +
                                (ulonglong)(uint)((int)local_f90 * 10) * 4);
            local_b58._12_4_ = uStack_d1c;
            local_b58.ArrayNum = 10;
            local_b58.DataPtr = local_d28;
            UE::MorphTargetVertexCodec::WriteHeader(&local_c78,&local_b58);
            if ((*(longlong *)((longlong)this + 0x20) == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar25 = *(longlong *)((longlong)this + 0x20);
            uVar40 = UE::MorphTargetVertexCodec::CalculateBatchDwords(&local_c78);
            FVar37 = (ForElementType<unsigned_int>)&local_938;
            if (local_938.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar37 = local_938.SecondaryData;
            }
            if ((int)uVar40 < 0) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L"");
              if (bVar15) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x9a9,L"Invalid range size: %lld");
              if (bVar15) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
LAB_14ac559d9:
              iVar17 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,uVar40,(ForAnyElementType *)(lVar25 + 0x70),
                                  (int *)(lVar25 + 0x78),(int *)(lVar25 + 0x7c));
              memcpy((void *)(*(longlong *)(lVar25 + 0x70) + (longlong)iVar17 * 4),(void *)FVar37,
                     (longlong)(int)uVar40 << 2);
            }
            else if (uVar40 != 0) goto LAB_14ac559d9;
            if ((*(longlong *)((longlong)this + 0x20) == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar25 = *(longlong *)((longlong)this + 0x20);
            if ((iVar16 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x9a9,L"Invalid range size: %lld"), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (iVar16 != 0) {
              iVar17 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,iVar16,(ForAnyElementType *)(lVar25 + 0x70),
                                  (int *)(lVar25 + 0x78),(int *)(lVar25 + 0x7c));
              memcpy((void *)(*(longlong *)(lVar25 + 0x70) + (longlong)iVar17 * 4),local_fb8,
                     (longlong)iVar16 << 2);
            }
            if (1 < iVar21) {
              uVar40 = UE::MorphTargetVertexCodec::CalculateBatchDwords(&local_cd8);
              if (local_230[0] < (int)uVar40) {
                UE::Core::Private::
                ReallocGrow<2,TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                          (4,4,uVar40 - local_230[0],&local_938,local_230,local_230 + 1);
              }
              else {
                if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
                }
                if ((int)uVar40 < local_230[0]) {
                  uVar38 = local_230[0] - uVar40;
                  if (((int)(uVar40 | uVar38) < 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if (uVar38 != 0) {
                    FVar37 = (ForElementType<unsigned_int>)&local_938;
                    if (local_938.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                      FVar37 = local_938.SecondaryData;
                    }
                    pvVar3 = (void *)((longlong)FVar37 + (longlong)(int)uVar40 * 4);
                    iVar16 = (local_230[0] - uVar40) - uVar38;
                    if (iVar16 != 0) {
                      memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)(int)uVar38 * 4),
                              (longlong)iVar16 << 2);
                    }
                    local_230[0] = local_230[0] - uVar38;
                  }
                }
              }
              iVar16 = local_230[0];
              local_d18 = (ForElementType<unsigned_int>)&local_938;
              if (local_938.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                local_d18 = local_938.SecondaryData;
              }
              if ((local_230[0] < 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_b88._12_4_ = uStack_d0c;
              local_b88.ArrayNum = iVar16;
              local_b88.DataPtr = (uint *)local_d18;
              local_b78.DataPtr = (uint *)pFVar1;
              iStack_d10 = iVar16;
              local_b78._8_8_ = uVar9;
              ``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_2>::
              operator()'::__l149::<lambda_1>::operator()
                        (local_fd3,(uint)local_f30,local_fc8,&local_cd8,&local_b78,&local_b88);
              if ((*(longlong *)((longlong)this + 0x20) == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uStack_d00 = 10;
              local_d08 = (uint *)(*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x70) +
                                  (ulonglong)(((int)local_f90 + iVar21) * 10 - 10) * 4);
              local_b68._12_4_ = uStack_cfc;
              local_b68.ArrayNum = 10;
              local_b68.DataPtr = local_d08;
              UE::MorphTargetVertexCodec::WriteHeader(&local_cd8,&local_b68);
              if ((*(longlong *)((longlong)this + 0x20) == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar25 = *(longlong *)((longlong)this + 0x20);
              uVar40 = UE::MorphTargetVertexCodec::CalculateBatchDwords(&local_cd8);
              FVar37 = (ForElementType<unsigned_int>)&local_938;
              if (local_938.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar37 = local_938.SecondaryData;
              }
              if ((int)uVar40 < 0) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L"");
                if (bVar15) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x9a9,L"Invalid range size: %lld");
                if (bVar15) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              else if (uVar40 == 0) goto LAB_14ac55e07;
              iVar21 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,uVar40,(ForAnyElementType *)(lVar25 + 0x70),
                                  (int *)(lVar25 + 0x78),(int *)(lVar25 + 0x7c));
              memcpy((void *)(*(longlong *)(lVar25 + 0x70) + (longlong)iVar21 * 4),(void *)FVar37,
                     (longlong)(int)uVar40 << 2);
            }
LAB_14ac55e07:
            if ((*(longlong *)((longlong)this + 0x20) == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar40 = (uint)(float)local_fd0;
            lVar25 = *(longlong *)((longlong)this + 0x20);
            uVar38 = 0;
            if ((int)(float)local_fd0 < *(int *)(lVar25 + 0xe8)) {
              uVar38 = ~(uint)(float)local_fd0 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar21 = *(int *)(*(longlong *)(lVar25 + 0xe0) + (longlong)local_fe0 * 4);
            if ((*(longlong *)((longlong)this + 0x20) == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar25 = *(longlong *)((longlong)this + 0x20);
            if ((lVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar27 = *(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x70);
            uVar38 = 0;
            if ((int)uVar40 < *(int *)(lVar25 + 0xd8)) {
              uVar38 = ~uVar40 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar16 = *(int *)(*(longlong *)(lVar25 + 0xd0) + (longlong)local_fe0 * 4);
            if ((iVar21 * 10 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar17 = 0;
            if (0 < iVar21) {
              uVar38 = (uint)local_f30;
              do {
                uStack_cf0 = 10;
                iStack_ce0 = 10;
                local_cf8 = (uint *)(lVar27 + (ulonglong)(uint)(iVar16 * 10) * 4 +
                                    (ulonglong)(uint)(iVar17 * 10) * 4);
                local_c48._12_4_ = uStack_cec;
                local_c48.ArrayNum = 10;
                local_ce8 = local_cf8;
                local_c48.DataPtr = local_cf8;
                UE::MorphTargetVertexCodec::ReadHeader(&local_df8,&local_c48);
                if (local_df8.NumElements == 0) {
                  local_df8.IndexMin = 0;
                  local_df8.DataOffset = local_fe8;
                }
                else {
                  if ((local_df8.IndexMin < uVar38) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("BatchHeader.IndexMin >= (uint32)SectionVertexRangeBegin",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                                          ,0x679,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_df8.IndexMin = local_df8.IndexMin - uVar38;
                  local_df8.DataOffset = local_fe8 * 4;
                  uVar54 = UE::MorphTargetVertexCodec::CalculateBatchDwords(&local_df8);
                  local_fe8 = local_fe8 + uVar54;
                }
                local_b98._12_4_ = uStack_cdc;
                local_b98.ArrayNum = iStack_ce0;
                local_b98.DataPtr = local_ce8;
                UE::MorphTargetVertexCodec::WriteHeader(&local_df8,&local_b98);
                iVar17 = iVar17 + 1;
              } while (iVar17 < iVar21);
            }
            if (local_938.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_938.SecondaryData);
            }
          }
          uVar40 = uVar40 + 1;
          local_fe0 = (FSkeletalMeshLODRenderData *)((longlong)&local_fe0->_padding_ + 1);
          local_fd0 = CONCAT44(local_fd0._4_4_,uVar40);
        } while ((longlong)local_fe0 < (longlong)local_f88);
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if ((*(longlong *)((longlong)this + 0x20) == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(int *)(*(longlong *)((longlong)this + 0x20) + 0x78) != 0) {
      if ((*(longlong *)((longlong)this + 0x20) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar25 = *(longlong *)((longlong)this + 0x20);
      local_a18 = 0;
      local_a10 = 0;
      iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,3,(ForAnyElementType *)(lVar25 + 0x70),(int *)(lVar25 + 0x78),
                          (int *)(lVar25 + 0x7c));
      lVar25 = *(longlong *)(lVar25 + 0x70);
      *(undefined8 *)(lVar25 + (longlong)iVar21 * 4) = local_a18;
      *(undefined4 *)(lVar25 + 8 + (longlong)iVar21 * 4) = local_a10;
    }
    if ((*(longlong *)((longlong)this + 0x20) == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    UE::Mutable::Private::FMesh::EnsureSurfaceData(*(FMesh **)((longlong)this + 0x20));
    if (local_f50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f50.Data);
    }
  }
  if (local_f60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f60.Data);
  }
  if (local_e70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e70.AllocatorInstance.Data);
  }
LAB_14ac56209:
  if (bVar60) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// `scalar_deleting_destructor' @ 14ac567e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56860

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac568c0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMutableStreamRequest::Stream'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56920

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56980

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FUnrealMutableResourceProvider::GetMeshAsync'::__l2::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac569e0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMutableStreamRequest::Stream'::__l2::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56a50

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_>'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMesh,1>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56ab0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56af0

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FMutableStreamRequest::Stream'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56b30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56b70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FUnrealMutableResourceProvider::GetMeshAsync'::__l2::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56bb0

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FMutableStreamRequest::Stream'::__l2::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::`2'::<lambda_1>::operator()'::`29'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if (*(UObject **)((longlong)this + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)this + 0x10));
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FMutableStreamRequest::Stream'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FMutableStreamRequest::Stream'::`2'::<lambda_1>::operator()'::`26'::<lambda_2>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l87::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::`87'::<lambda_2>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::`115'::<lambda_2>,0,1>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 0x70);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar4 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l93::<lambda_3>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::`93'::<lambda_3>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l124::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::`124'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56ef0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMutableStreamRequest::FHeapMemory,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMutableStreamRequest::FHeapMemory,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56f30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x790);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56f70

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFunction<void___cdecl(bool,IAsyncReadRequest_*)>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFunction<void___cdecl(bool,IAsyncReadRequest_*)>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56fb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IBulkDataIORequest,SharedPointerInternals::DefaultDeleter<IBulkDataIORequest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IBulkDataIORequest,SharedPointerInternals::DefaultDeleter<IBulkDataIORequest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac56ff0

void * __thiscall
UE::Tasks::Private::TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh,1>_>::
_scalar_deleting_destructor_
          (TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh,1>_> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TTaskWithResult_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ResultStorage).Pad + 8));
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac57050

void * __thiscall
UE::Mutable::Private::FExternalResourceProvider::_scalar_deleting_destructor_
          (FExternalResourceProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac57080

void * __thiscall
FUnrealMutableInputStream::_scalar_deleting_destructor_
          (FUnrealMutableInputStream *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FInputStream_Private_Mutable_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac570c0

void * __thiscall
FUnrealMutableResourceProvider::_scalar_deleting_destructor_
          (FUnrealMutableResourceProvider *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BoneNames).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// ClothVertexBuffers @ 14ac58290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UnrealConversionUtils::ClothVertexBuffers
          (FSkeletalMeshLODRenderData *param_1,FMesh *param_2,
          TMap<unsigned_int,FClothingMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FClothingMeshData,0>_>
          *param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  FSectionClothData *pFVar11;
  int iVar12;
  ulong64 uVar13;
  longlong lVar14;
  undefined1 local_68;
  undefined1 local_67 [3];
  int local_64;
  TArray<UnrealConversionUtils::FSectionClothData,TSizedDefaultAllocator<32>_> local_60;
  TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> local_50;
  TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_> local_40;
  
  uVar13 = 0;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,8,0x20,&local_60.AllocatorInstance,0,&local_60.ArrayMax);
  local_64 = 0;
  GetSectionClothData(param_2,param_4,param_3,&local_60,&local_64);
  if ((0 < local_64) && (1 < (byte)LogMutable._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  if (local_60.ArrayNum != 0) {
    CopyMeshToMeshClothData(&local_60);
    iVar3 = local_60.ArrayNum;
    uVar8 = (ulonglong)local_60.ArrayNum;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    pFVar11 = (FSectionClothData *)(local_60.AllocatorInstance.Data + uVar8 * 0x60);
    FVar9.Data = local_60.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar3) {
        local_68 = 0;
        `TCheckedPointerIterator<UnrealConversionUtils::FSectionClothData_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_68);
        uVar8 = local_60._8_8_ & 0xffffffff;
      }
      iVar12 = (int)uVar13;
      if ((FSectionClothData *)FVar9.Data == pFVar11) break;
      uVar13 = (ulong64)(uint)(iVar12 + (((FSectionClothData *)FVar9.Data)->MappingData).ArrayNum);
      FVar9.Data = FVar9.Data + 0x60;
    }
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    if (local_50.ArrayMax < iVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar12,&local_50.AllocatorInstance,local_50.ArrayNum,&local_50.ArrayMax);
    }
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_40,(param_1->RenderSections).ArrayNum,Default);
    iVar3 = local_60.ArrayNum;
    uVar8 = (ulonglong)local_60.ArrayNum;
    pFVar10 = local_60.AllocatorInstance.Data + 8;
    pFVar11 = (FSectionClothData *)(local_60.AllocatorInstance.Data + uVar8 * 0x60);
    while( true ) {
      if ((int)uVar8 != iVar3) {
        local_67[0] = 0;
        `TCheckedPointerIterator<UnrealConversionUtils::FSectionClothData,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_67);
      }
      if ((FSectionClothData *)(pFVar10 + -8) == pFVar11) break;
      uVar1 = ((FSectionClothData *)(pFVar10 + -8))->SectionIndex;
      lVar14 = (longlong)(int)uVar1;
      iVar12 = *(int *)pFVar10;
      iVar4 = local_50.ArrayNum;
      iVar7 = *(int *)(pFVar10 + 0x50);
      uVar6 = 0;
      if ((int)uVar1 < local_40.ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(int *)(local_40.AllocatorInstance.Data + lVar14 * 0xc) = iVar12;
      *(int *)(local_40.AllocatorInstance.Data + lVar14 * 0xc + 4) = iVar4;
      *(int *)(local_40.AllocatorInstance.Data + lVar14 * 0xc + 8) = iVar7;
      if (&local_50 == (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)(pFVar10 + 0x48))
      {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar12 = *(int *)(pFVar10 + 0x50);
      if (iVar12 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,0x10,iVar12,&local_50.AllocatorInstance,&local_50.ArrayNum,
                           &local_50.ArrayMax);
        memcpy(local_50.AllocatorInstance.Data + (longlong)iVar7 * 0x40,
               (((TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)(pFVar10 + 0x48))->
               AllocatorInstance).Data,(longlong)iVar12 << 6);
      }
      uVar8 = local_60._8_8_ & 0xffffffff;
      pFVar10 = pFVar10 + 0x60;
    }
    FSkeletalMeshVertexClothBuffer::Init(&param_1->ClothVertexBuffer,&local_50,&local_40);
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  DestructItems<UnrealConversionUtils::FSectionClothData,int>
            ((FSectionClothData *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
  if ((FSectionClothData *)local_60.AllocatorInstance.Data != (FSectionClothData *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return;
}

// ConvertSkeletalMeshFromRuntimeData @ 14ac58590

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __cdecl
UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData
          (USkeletalMesh *param_1,int param_2,int param_3,
          TSharedPtr<UE::Mutable::Private::FMesh,1> *param_4,TSharedRef<FBoneNames,1> *param_5)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned___int64> *paVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  FTaskBase *this;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  FBoneNames *pFVar8;
  FPipe *pFVar9;
  code *pcVar10;
  bool bVar11;
  FTaskBase *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FTaskHandle FVar14;
  TTask<void> TVar15;
  FTaskBase *pFVar16;
  FTaskBase *this_00;
  undefined4 in_register_00000014;
  FTaskBase *this_01;
  FTaskBase *this_02;
  bool bVar17;
  TReferenceControllerBase<1> *local_res10;
  longlong *in_stack_00000030;
  FTaskBase *local_78;
  TReferenceControllerBase<1> *local_70;
  TReferenceControllerBase<1> *local_68;
  undefined8 *local_60;
  
  pFVar12 = (FTaskBase *)CONCAT44(in_register_00000014,param_2);
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId896,"Mutable_ConvertSkeletalMeshFromRuntimeData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0x380);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId896);
  }
  if (pFVar12 == (FTaskBase *)0x0) {
    pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar12 == (FTaskBase *)0x0) {
      pFVar12 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TTaskWithResult_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
      ;
      UE::Tasks::Private::FTaskBase::Init
                (pFVar12,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h(552)"
                 ,Default,Inline,None);
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr_VFMesh_Private_Mutable_UE___00____V_Tasks_UE__YA_AV__TTask_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___23_XZ__Private_Tasks_UE__6B_
      ;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar12,0x100);
    param_1->_padding_ = (longlong)pFVar12;
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
  }
  else {
    pTVar13 = ::operator_new(0x790);
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      local_res10 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar13->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13->WeakReferenceCount = (atomic<int>)0x1;
      pTVar13->_padding_ =
           (longlong)
           &SharedPointerInternals::
            TIntrusiveReferenceController<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::`2'::FMeshConversionContext,1>
            ::_vftable_;
      FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData
                ((FSkeletalMeshLODRenderData *)(pTVar13 + 1),false);
      local_res10 = pTVar13 + 1;
      pTVar13[0x77].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[0x77].WeakReferenceCount = (atomic<int>)0x0;
      pTVar13[0x78]._padding_ = 0;
      pTVar13[0x78].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[0x78].WeakReferenceCount = (atomic<int>)0x0;
      if ((local_res10 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        FVar14.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar10)();
        return (FTaskHandle)FVar14.Pimpl.Reference;
      }
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_01 = (FTaskBase *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    TVar15 = UE::Tasks::MakeCompletedTask<void>();
    this = *(FTaskBase **)TVar15;
    *(undefined8 *)TVar15 = 0;
    if (local_60 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_60 + 6);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*local_60)(local_60,1);
      }
    }
    UObjectBase::AddRef((UObjectBase *)pFVar12);
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar6 = *in_stack_00000030;
    pTVar7 = (TReferenceControllerBase<1> *)in_stack_00000030[1];
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16 = FMemory::Malloc(0x140,0x40);
    this_02 = this_01;
    local_78 = pFVar12;
    local_70 = pTVar13;
    if (pFVar16 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar16,2,true);
      pFVar16->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::`2'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init(pFVar16,L"ConversionTask",Default,None,None);
      pFVar16[1]._padding_ = (longlong)local_res10;
      *(int *)((longlong)&pFVar16[1]._padding_ + 4) = (int)param_4;
      pFVar16[1]._padding_ = lVar6;
      pFVar16[1]._padding_ = (longlong)pTVar13;
      pFVar16[1]._padding_ = (longlong)pFVar12;
      *(int *)&pFVar16[1]._padding_ = param_3;
      pFVar16[1]._padding_ = (longlong)pTVar7;
      local_70 = (TReferenceControllerBase<1> *)0x0;
      local_78 = (FTaskBase *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar16->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::`2'::<lambda_1>_>
            ::_vftable_;
      this_02 = pFVar16;
    }
    if (this != (FTaskBase *)0x0) {
      if (((this_02->NumLocks == (atomic<unsigned_int>)0x0) ||
          (0x7fffffff < (uint)this_02->NumLocks)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0xe3,L"Prerequisites can be added only before the task is launched"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        FVar14.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar10)();
        return (FTaskHandle)FVar14.Pimpl.Reference;
      }
      LOCK();
      paVar2 = &this_02->NumLocks;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + 1);
      UNLOCK();
      if ((0x7fffffff < (int)aVar5 + 1U) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks + 1 < ExecutionFlag",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0xea,L"Max number of task prerequisites reached: %d"), bVar11)) {
        pcVar10 = (code *)swi(3);
        FVar14.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar10)();
        return (FTaskHandle)FVar14.Pimpl.Reference;
      }
      bVar11 = UE::Tasks::Private::FTaskBase::AddSubsequent(this,this_02);
      if (bVar11) {
        LOCK();
        this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::
        FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                  (&this_02->Prerequisites,this);
      }
      else {
        LOCK();
        this_02->NumLocks = (atomic<unsigned_int>)((int)this_02->NumLocks + -1);
        UNLOCK();
      }
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x140);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (local_78 != (FTaskBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    UObjectBase::AddRef((UObjectBase *)pFVar12);
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = param_5->Object;
    pFVar16 = (FTaskBase *)(param_5->SharedReferenceCount).ReferenceController;
    if (pFVar16 != (FTaskBase *)0x0) {
      LOCK();
      *(EObjectFlags *)&pFVar16->_padding_ = *(EObjectFlags *)&pFVar16->_padding_ + RF_Public;
      UNLOCK();
    }
    lVar6 = *in_stack_00000030;
    pFVar9 = (FPipe *)in_stack_00000030[1];
    paVar3 = &pFVar9->TaskCount;
    if (pFVar9 != (FPipe *)0x0) {
      LOCK();
      *(int *)paVar3 = (int)*(atomic<int> *)paVar3 + 1;
      UNLOCK();
    }
    this_00 = FMemory::Malloc(0x140,0x40);
    local_68 = pTVar13;
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::`2'::<lambda_2>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (this_00,L"MutableRuntimeMeshConversionFinal",Default,None,None);
      this_00[1]._padding_ = (longlong)local_res10;
      *(int *)&this_00[1]._padding_ = param_3;
      *(int *)((longlong)&this_00[1]._padding_ + 4) = (int)param_4;
      this_00[1]._padding_ = (longlong)pFVar8;
      this_00[1]._padding_ = (longlong)pFVar16;
      this_00[1].RefCount = (atomic<unsigned_int>)(int)lVar6;
      this_00[1].NumLocks = (atomic<unsigned_int>)(int)((ulonglong)lVar6 >> 0x20);
      this_00[1]._padding_ = (longlong)pFVar12;
      this_00[1]._padding_ = (longlong)pTVar13;
      local_68 = (TReferenceControllerBase<1> *)0x0;
      this_00[1].Pipe = pFVar9;
      if (pFVar9 != (FPipe *)0x0) {
        LOCK();
        *(int *)paVar3 = (int)*(atomic<int> *)paVar3 + 1;
        UNLOCK();
      }
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::`2'::<lambda_2>_>
            ::_vftable_;
      pFVar16 = this_01;
      pFVar12 = this_01;
      this_01 = this_00;
    }
    if (this_02 != (FTaskBase *)0x0) {
      if (((this_01->NumLocks == (atomic<unsigned_int>)0x0) ||
          (0x7fffffff < (uint)this_01->NumLocks)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0xe3,L"Prerequisites can be added only before the task is launched"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        FVar14.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar10)();
        return (FTaskHandle)FVar14.Pimpl.Reference;
      }
      LOCK();
      paVar2 = &this_01->NumLocks;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + 1);
      UNLOCK();
      if ((0x7fffffff < (int)aVar5 + 1U) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks + 1 < ExecutionFlag",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0xea,L"Max number of task prerequisites reached: %d"), bVar11)) {
        pcVar10 = (code *)swi(3);
        FVar14.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar10)();
        return (FTaskHandle)FVar14.Pimpl.Reference;
      }
      bVar11 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_02,this_01);
      if (bVar11) {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::
        FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                  (&this_01->Prerequisites,this_02);
      }
      else {
        LOCK();
        this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + -1);
        UNLOCK();
      }
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x140);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar16);
    if (pFVar12 != (FTaskBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pFVar12);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
    param_1->_padding_ = (longlong)this_01;
    if (this_02 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &this_02->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_02->_padding_)(this_02,1);
      }
    }
    if (this != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &this->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)this->_padding_)(this,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
  }
  return (FTaskHandle)param_1;
}

// CopyMeshToMeshClothData @ 14ac58c20

void __cdecl
UnrealConversionUtils::CopyMeshToMeshClothData
          (TArray<UnrealConversionUtils::FSectionClothData,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  void *_Dst;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  longlong local_58;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1777,"Mutable_ClothCopyMeshToMeshData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0x6f1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1777);
  }
  local_res18 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)local_res18;
  pFVar15 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar15 + 0x58;
  pFVar13 = pFVar15 + uVar11 * 0x60;
  do {
    local_res20 = pFVar15;
    if (param_1->ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UnrealConversionUtils::FSectionClothData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar13) {
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar2 = *(uint *)(pFVar17 + -0x20);
    iVar8 = *(int *)pFVar17;
    if (iVar8 < (int)uVar2) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,uVar2 - iVar8,(ForAnyElementType *)(pFVar17 + -8),(int *)pFVar17,
                         (int *)(pFVar17 + 4));
      DefaultConstructItems<FMeshToMeshVertData,int>
                ((void *)((longlong)iVar7 * 0x40 + *(longlong *)(pFVar17 + -8)),uVar2 - iVar8);
      pFVar15 = local_res20;
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar8) {
        uVar12 = iVar8 - uVar2;
        if (((int)(uVar12 | uVar2) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = local_res20;
        if (uVar12 != 0) {
          _Dst = (void *)((longlong)(int)uVar2 * 0x40 + *(longlong *)(pFVar17 + -8));
          iVar8 = (*(int *)pFVar17 - uVar12) - uVar2;
          if (iVar8 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar12 * 0x40 + (longlong)_Dst),
                    (longlong)iVar8 << 6);
          }
          *(uint *)pFVar17 = *(int *)pFVar17 - uVar12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,(ForAnyElementType *)(pFVar17 + -8),*(int *)pFVar17,
                     (int *)(pFVar17 + 4));
          pFVar15 = local_res20;
        }
      }
    }
    uVar12 = 0;
    if (0 < (int)uVar2) {
      local_58 = 0;
      lVar16 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar12 < *(int *)(pFVar17 + -0x20)) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = *(uint *)(*(longlong *)(pFVar17 + -0x28) + lVar16);
        if (((int)uVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("VertexDataIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                               ,0x707,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar9 < *(int *)(pFVar17 + -0x10)) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar14 = (undefined8 *)((longlong)(int)uVar9 * 0x40 + *(longlong *)(pFVar17 + -0x18));
        uVar9 = 0;
        if ((int)uVar12 < *(int *)pFVar17) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar12 = uVar12 + 1;
        uVar5 = puVar14[1];
        lVar3 = *(longlong *)(pFVar17 + -8);
        lVar16 = lVar16 + 4;
        *(undefined8 *)(local_58 + lVar3) = *puVar14;
        ((undefined8 *)(local_58 + lVar3))[1] = uVar5;
        uVar5 = puVar14[3];
        puVar1 = (undefined8 *)(local_58 + 0x10 + lVar3);
        *puVar1 = puVar14[2];
        puVar1[1] = uVar5;
        uVar5 = puVar14[5];
        puVar1 = (undefined8 *)(local_58 + 0x20 + lVar3);
        *puVar1 = puVar14[4];
        puVar1[1] = uVar5;
        uVar5 = puVar14[7];
        puVar1 = (undefined8 *)(local_58 + 0x30 + lVar3);
        *puVar1 = puVar14[6];
        puVar1[1] = uVar5;
        local_58 = local_58 + 0x40;
        pFVar15 = local_res20;
      } while ((int)uVar12 < (int)uVar2);
    }
    pFVar15 = pFVar15 + 0x60;
    pFVar17 = pFVar17 + 0x60;
    uVar11 = (ulonglong)local_res18;
  } while( true );
}

// CopyMutableIndexBuffers @ 14ac58f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UnrealConversionUtils::CopyMutableIndexBuffers
          (FSkeletalMeshLODRenderData *param_1,FMesh *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,bool *param_4)

{
  FRawStaticIndexBuffer16or32Interface *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FMeshBufferSet *pFVar9;
  uchar *_Src;
  void *_Dst;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  bool bVar17;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId475,"Mutable_CopyMutableIndexBuffers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0x1db);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId475);
  }
  pFVar9 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_2);
  iVar6 = UE::Mutable::Private::FMeshBufferSet::GetElementCount(pFVar9);
  if (iVar6 == 0) {
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      bVar4 = false;
      goto LAB_14ac592e4;
    }
  }
  else {
    pFVar9 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_2);
    bVar4 = UE::Mutable::Private::FMeshBufferSet::IsDescriptor(pFVar9);
    if (!bVar4) {
      pFVar9 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_2);
      _Src = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar9,0);
      pFVar9 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_2);
      uVar7 = UE::Mutable::Private::FMeshBufferSet::GetElementSize(pFVar9,0);
      if ((param_1->MultiSizeIndexContainer).IndexBuffer ==
          (FRawStaticIndexBuffer16or32Interface *)0x0) {
        FMultiSizeIndexContainer::CreateIndexBuffer(&param_1->MultiSizeIndexContainer,(uchar)uVar7);
      }
      if (((param_1->MultiSizeIndexContainer).DataTypeSize != uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODResource.MultiSizeIndexContainer.GetDataTypeSize() == ElementSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                             ,500,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (((param_1->MultiSizeIndexContainer).IndexBuffer ==
           (FRawStaticIndexBuffer16or32Interface *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x51,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (param_1->MultiSizeIndexContainer).IndexBuffer;
      (**(code **)(pFVar1->_padding_ + 0x80))(pFVar1,iVar6);
      if (((param_1->MultiSizeIndexContainer).IndexBuffer ==
           (FRawStaticIndexBuffer16or32Interface *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x51,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (param_1->MultiSizeIndexContainer).IndexBuffer;
      (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,0,iVar6);
      if (((param_1->MultiSizeIndexContainer).IndexBuffer ==
           (FRawStaticIndexBuffer16or32Interface *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x51,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (param_1->MultiSizeIndexContainer).IndexBuffer;
      _Dst = (void *)(**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,0);
      memcpy(_Dst,_Src,(longlong)(int)(uVar7 * iVar6));
      uVar7 = 0;
      if (0 < (param_1->RenderSections).ArrayNum) {
        lVar16 = 0;
        lVar14 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar7 < (param_1->RenderSections).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (param_1->RenderSections).AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar7 < param_3->ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar15 = (param_2->Surfaces).AllocatorInstance.Data;
          pFVar10 = pFVar15 + (longlong)(param_2->Surfaces).ArrayNum * 0x38;
          for (; pFVar15 != pFVar10; pFVar15 = pFVar15 + 0x38) {
            if (*(int *)(pFVar15 + 0x30) == *(int *)((param_3->AllocatorInstance).Data + lVar16 * 4)
               ) {
              if ((*(int *)(pFVar15 + 0x20) < 1) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              pFVar10 = pFVar15;
              if (*(FScriptContainerElement **)(pFVar15 + 0x18) != (FScriptContainerElement *)0x0) {
                pFVar10 = *(FScriptContainerElement **)(pFVar15 + 0x18);
              }
              uVar11 = *(int *)(pFVar15 + 0x20) - 1;
              uVar8 = 0;
              if ((int)uVar11 < *(int *)(pFVar15 + 0x20)) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              pFVar13 = pFVar15;
              if (*(FScriptContainerElement **)(pFVar15 + 0x18) != (FScriptContainerElement *)0x0) {
                pFVar13 = *(FScriptContainerElement **)(pFVar15 + 0x18);
              }
              iVar6 = *(int *)(pFVar13 + ((longlong)*(int *)(pFVar15 + 0x20) * 5 + -4) * 4);
              iVar12 = *(int *)pFVar10;
              *param_4 = (bool)(*param_4 | *(int *)(pFVar2 + lVar14 + 0x48) != iVar6 - iVar12);
              *(int *)(pFVar2 + lVar14 + 0x48) = iVar6 - iVar12;
              if ((*(int *)(pFVar15 + 0x20) < 1) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              pFVar10 = pFVar15;
              if (*(FScriptContainerElement **)(pFVar15 + 0x18) != (FScriptContainerElement *)0x0) {
                pFVar10 = *(FScriptContainerElement **)(pFVar15 + 0x18);
              }
              uVar11 = *(int *)(pFVar15 + 0x20) - 1;
              iVar6 = *(int *)(pFVar10 + 8);
              uVar8 = 0;
              if ((int)uVar11 < *(int *)(pFVar15 + 0x20)) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              pFVar10 = pFVar15;
              if (*(FScriptContainerElement **)(pFVar15 + 0x18) != (FScriptContainerElement *)0x0) {
                pFVar10 = *(FScriptContainerElement **)(pFVar15 + 0x18);
              }
              iVar12 = *(int *)(pFVar10 + ((longlong)*(int *)(pFVar15 + 0x20) * 5 + -2) * 4) - iVar6
              ;
              iVar12 = iVar12 / 3 + (iVar12 >> 0x1f) +
                       (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                            0x1f);
              *param_4 = (bool)(*param_4 | *(int *)(pFVar2 + lVar14 + 8) != iVar12);
              *(int *)(pFVar2 + lVar14 + 8) = iVar12;
              *param_4 = (bool)(*param_4 | *(int *)(pFVar2 + lVar14 + 4) != iVar6);
              *(int *)(pFVar2 + lVar14 + 4) = iVar6;
              if ((*(int *)(pFVar15 + 0x20) < 1) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              if (*(FScriptContainerElement **)(pFVar15 + 0x18) != (FScriptContainerElement *)0x0) {
                pFVar15 = *(FScriptContainerElement **)(pFVar15 + 0x18);
              }
              iVar6 = *(int *)pFVar15;
              *param_4 = (bool)(*param_4 | *(int *)(pFVar2 + lVar14 + 0x10) != iVar6);
              *(int *)(pFVar2 + lVar14 + 0x10) = iVar6;
              goto LAB_14ac592b7;
            }
          }
          pFVar2[lVar14 + 0x110] = (FScriptContainerElement)0x1;
          *(undefined8 *)(pFVar2 + lVar14 + 4) = 0;
          *(undefined4 *)(pFVar2 + lVar14 + 0x48) = 0;
          *(undefined4 *)(pFVar2 + lVar14 + 0x10) = 0;
          *param_4 = true;
LAB_14ac592b7:
          uVar7 = uVar7 + 1;
          lVar16 = lVar16 + 1;
          lVar14 = lVar14 + 0x118;
        } while ((int)uVar7 < (param_1->RenderSections).ArrayNum);
      }
      bVar4 = true;
      goto LAB_14ac592e4;
    }
    if (1 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
  }
  bVar4 = false;
LAB_14ac592e4:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// CopyMutableSkinWeightProfilesBuffers @ 14ac59520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UnrealConversionUtils::CopyMutableSkinWeightProfilesBuffers
          (FSkeletalMeshLODRenderData *param_1,USkeletalMesh *param_2,int param_3,FMesh *param_4,
          TArray<TTuple<unsigned_int,FName>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  byte bVar5;
  FMeshBufferSet *this;
  FRuntimeSkinWeightProfileData *pFVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStackY_1b8 [32];
  int local_174;
  undefined1 local_170;
  byte local_16f;
  bool local_16e;
  int local_16c;
  uint local_168;
  uint local_164;
  EMeshBufferFormat local_160;
  byte local_15c [4];
  uint local_158;
  int local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  uint local_138;
  uint local_134;
  int local_130;
  FScriptContainerElement *local_128;
  int local_120;
  undefined1 local_11c [8];
  undefined1 local_114 [20];
  FSkeletalMeshLODRenderData *local_100;
  FScriptContainerElement *local_f8;
  USkeletalMesh *local_f0;
  uint *local_e8;
  byte local_e0;
  uint local_dc;
  int *local_d8;
  undefined4 *local_d0;
  int *local_c8;
  int *local_c0;
  uint **local_b8;
  int *local_b0;
  TSet<TTuple<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey,int>,TDefaultMapHashableKeyFuncs<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey,int,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar19 = -1 < CpuChannel->Enabled;
  local_130 = param_3;
  local_100 = param_1;
  local_f0 = param_2;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId587,"Mutable_CopyMutableSkinWeightProfilesBuffers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0x24b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId587);
  }
  local_16f = (byte)(param_1->SkinWeightVertexBuffer).DataVertexBuffer.MaxBoneInfluences;
  local_16e = (param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex;
  local_a8.Elements._0_8_ = 0;
  local_158 = (local_16e != false) + 1;
  local_a8.Elements._8_8_ = 0;
  local_168 = local_158 * local_16f;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  uVar18 = ((param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneWeight != false) + 1;
  local_a8.Elements._44_4_ = 0x80;
  uVar17 = uVar18 * local_16f;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_164 = uVar17;
  local_138 = uVar18;
  this = UE::Mutable::Private::FMesh::GetVertexBuffers(param_4);
  local_134 = param_5->ArrayNum;
  uVar16 = (ulonglong)(int)local_134;
  pFVar15 = (param_5->AllocatorInstance).Data;
  pFVar10 = pFVar15 + uVar16 * 0xc;
  local_114._12_8_ = this;
  local_f8 = pFVar10;
  do {
    local_128 = pFVar15;
    if (param_5->ArrayNum != (int)uVar16) {
      local_170 = 0;
      `TCheckedPointerIterator<TTuple<unsigned_int,FName>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_170);
    }
    if (pFVar15 == pFVar10) {
      FSkinWeightProfilesData::Init
                (&param_1->SkinWeightProfilesData,&param_1->SkinWeightVertexBuffer);
      (**(code **)(local_f0->_padding_ + 0x488))
                (local_f0,local_130,&param_1->SkinWeightProfilesData);
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    UE::Mutable::Private::FMeshBufferSet::FindChannel
              (this,AltSkinWeight,*(int *)pFVar15,&local_16c,&local_120);
    if (local_16c != -1) {
      pFVar6 = FSkinWeightProfilesData::AddOverrideData
                         (&param_1->SkinWeightProfilesData,(FName *)(pFVar15 + 4));
      pFVar6->NumWeightsPerVertex = local_16f;
      pFVar6->b16BitBoneIndices = local_16e;
      UE::Mutable::Private::FMeshBufferSet::GetChannel
                (this,local_16c,1,(EMeshBufferSemantic *)0x0,(int *)0x0,&local_160,(int *)local_15c,
                 (int *)0x0);
      uVar9 = (uint)(byte)((local_160 == UInt16) + 1);
      iVar12 = local_15c[0] * uVar9;
      local_144 = iVar12;
      if ((local_158 != uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoneIndexTypeByteSize == MutBoneIndexTypeByteSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                             ,0x26f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Mutable::Private::FMeshBufferSet::GetChannel
                (this,local_16c,2,(EMeshBufferSemantic *)0x0,(int *)0x0,&local_160,(int *)local_15c,
                 (int *)0x0);
      uVar9 = (uint)(byte)((local_160 == NUInt16) + 1);
      iVar13 = local_15c[0] * uVar9;
      local_140 = iVar13;
      if ((uVar18 != uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoneWeightTypeByteSize == MutBoneWeightTypeByteSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                             ,0x275,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar5 = (char)iVar12 + (char)iVar13;
      iVar12 = UE::Mutable::Private::FMeshBufferSet::GetElementCount(this);
      uVar18 = (local_168 & 0xff) * iVar12;
      local_13c = iVar12;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if ((pFVar6->BoneIDs).ArrayMax < (int)uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar18,(ForAnyElementType *)pFVar6,(pFVar6->BoneIDs).ArrayNum,
                   &(pFVar6->BoneIDs).ArrayMax);
      }
      uVar18 = (uVar17 & 0xff) * iVar12;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      local_114._4_8_ = &(pFVar6->BoneWeights).ArrayMax;
      if (*(int *)local_114._4_8_ < (int)uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar18,&(pFVar6->BoneWeights).AllocatorInstance,
                   (pFVar6->BoneWeights).ArrayNum,(int *)local_114._4_8_);
      }
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                 *)&pFVar6->VertexIndexToInfluenceOffset,iVar12);
      TSet<TTuple<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey,int>,TDefaultMapHashableKeyFuncs<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey,int,0>,FDefaultSetAllocator>
      ::Empty(&local_a8,iVar12);
      iVar13 = 0;
      local_174 = 0;
      puVar7 = (uint *)UE::Mutable::Private::FMeshBufferSet::GetBufferData(this,local_16c);
      if (0 < iVar12) {
        do {
          uVar3 = local_a8.Elements._0_8_;
          uVar18 = *puVar7;
          puVar7 = puVar7 + 1;
          if (uVar18 == 0) {
LAB_14ac599d2:
            puVar7 = (uint *)((longlong)puVar7 + (ulonglong)bVar5);
          }
          else {
            if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
              FVar11 = (ForElementType<FSetElementId>)&local_a8.Hash;
              if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar11 = local_a8.Hash.SecondaryData;
              }
              iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(local_a8.HashSize - 1U & uVar18) * 4)
              ;
              while (iVar12 != -1) {
                puVar14 = (undefined8 *)((longlong)iVar12 * 0x20 + uVar3);
                iVar12 = memcmp(puVar7,(void *)*puVar14,(ulonglong)*(byte *)(puVar14 + 1));
                if (iVar12 == 0) {
                  puVar8 = puVar14 + 2;
                  if (puVar14 == (undefined8 *)0x0) {
                    puVar8 = (undefined8 *)0x0;
                  }
                  if (puVar8 != (undefined8 *)0x0) {
                    local_150 = *(undefined4 *)puVar8;
                    local_d8 = &local_154;
                    local_d0 = &local_150;
                    local_154 = iVar13;
                    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<unsigned_int_&&,unsigned_int_&&>_>
                              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                                *)&pFVar6->VertexIndexToInfluenceOffset,
                               (TPairInitializer<unsigned_int_&&,unsigned_int_&&> *)local_11c,
                               (bool *)&local_d8);
                    goto LAB_14ac599d2;
                  }
                  break;
                }
                iVar12 = *(int *)(puVar14 + 3);
              }
            }
            local_148 = local_174;
            local_c8 = &local_14c;
            local_c0 = &local_148;
            local_14c = iVar13;
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned_int_&&,unsigned_int_&&>_>
                      ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                        *)&pFVar6->VertexIndexToInfluenceOffset,
                       (TPairInitializer<unsigned_int_&&,unsigned_int_&&> *)(local_11c + 4),
                       (bool *)&local_c8);
            local_b8 = &local_e8;
            local_b0 = &local_174;
            local_e8 = puVar7;
            local_e0 = bVar5;
            local_dc = uVar18;
            TSet<TTuple<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey,int>,TDefaultMapHashableKeyFuncs<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey,int,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey_&&,int_const_&>_>
                      (&local_a8,
                       (TPairInitializer<UnrealConversionUtils::FAuxMutableSkinWeightVertexKey_&&,int_const_&>
                        *)local_114,(bool *)&local_b8);
            piVar1 = &(pFVar6->BoneIDs).ArrayNum;
            iVar12 = *piVar1;
            uVar18 = (local_174 + 1) * (local_168 & 0xff);
            if (iVar12 < (int)uVar18) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar18 - iVar12,(ForAnyElementType *)pFVar6,piVar1,
                         &(pFVar6->BoneIDs).ArrayMax);
            }
            else {
              if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
              }
              if ((int)uVar18 < iVar12) {
                uVar17 = iVar12 - uVar18;
                if (((int)(uVar17 | uVar18) < 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (uVar17 != 0) {
                  pFVar10 = (pFVar6->BoneIDs).AllocatorInstance.Data + (int)uVar18;
                  iVar12 = (*piVar1 - uVar18) - uVar17;
                  if (iVar12 != 0) {
                    memmove(pFVar10,pFVar10 + (int)uVar17,(longlong)iVar12);
                  }
                  *piVar1 = *piVar1 - uVar17;
                }
              }
            }
            uVar17 = (local_168 & 0xff) * local_174;
            uVar18 = 0;
            if ((int)uVar17 < *piVar1) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            memcpy((pFVar6->BoneIDs).AllocatorInstance.Data + (int)uVar17,puVar7,
                   (ulonglong)(byte)local_168);
            uVar16 = (ulonglong)(byte)local_144;
            piVar1 = &(pFVar6->BoneWeights).ArrayNum;
            iVar12 = *piVar1;
            uVar18 = (local_174 + 1) * (local_164 & 0xff);
            if (iVar12 < (int)uVar18) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar18 - iVar12,&(pFVar6->BoneWeights).AllocatorInstance,piVar1,
                         &(pFVar6->BoneWeights).ArrayMax);
            }
            else {
              if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
              }
              if ((int)uVar18 < iVar12) {
                uVar17 = iVar12 - uVar18;
                if (((int)(uVar17 | uVar18) < 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (uVar17 != 0) {
                  pFVar10 = (pFVar6->BoneWeights).AllocatorInstance.Data + (int)uVar18;
                  iVar12 = (*piVar1 - uVar17) - uVar18;
                  if (iVar12 != 0) {
                    memmove(pFVar10,pFVar10 + (int)uVar17,(longlong)iVar12);
                  }
                  *piVar1 = *piVar1 - uVar17;
                }
              }
            }
            uVar17 = (local_164 & 0xff) * local_174;
            uVar18 = 0;
            if ((int)uVar17 < *piVar1) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            memcpy((pFVar6->BoneWeights).AllocatorInstance.Data + (int)uVar17,
                   (void *)((longlong)puVar7 + uVar16),(ulonglong)(byte)local_164);
            puVar7 = (uint *)((longlong)((longlong)puVar7 + uVar16) + (ulonglong)(byte)local_140);
            local_174 = local_174 + 1;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_13c);
      }
      iVar12 = (pFVar6->BoneIDs).ArrayNum;
      piVar1 = &(pFVar6->BoneIDs).ArrayMax;
      if (*piVar1 != iVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar12,(ForAnyElementType *)pFVar6,iVar12,piVar1);
      }
      iVar12 = (pFVar6->BoneWeights).ArrayNum;
      if ((pFVar6->BoneWeights).ArrayMax != iVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar12,&(pFVar6->BoneWeights).AllocatorInstance,iVar12,(int *)local_114._4_8_
                  );
      }
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Shrink((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                *)&pFVar6->VertexIndexToInfluenceOffset);
      param_1 = local_100;
      pFVar15 = local_128;
      pFVar10 = local_f8;
      this = (FMeshBufferSet *)local_114._12_8_;
      uVar18 = local_138;
      uVar17 = local_164;
    }
    pFVar15 = pFVar15 + 0xc;
    uVar16 = (ulonglong)local_134;
  } while( true );
}

// CopyMutableVertexBuffers @ 14ac59d30

void __cdecl
UnrealConversionUtils::CopyMutableVertexBuffers
          (FSkeletalMeshLODRenderData *param_1,FMesh *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FMeshBufferSet *this;
  uchar *puVar5;
  uchar *_Src;
  uchar *_Src_00;
  FScriptContainerElement *pFVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  FStaticMeshVertexBuffers *this_00;
  bool bVar10;
  bool local_res10;
  uint local_res20;
  int local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  EMeshBufferFormat local_70;
  EMeshBufferFormat local_6c;
  int local_68;
  EMeshBufferSemantic local_64;
  int local_60;
  int local_5c;
  EMeshBufferFormat local_58;
  int local_54 [5];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId356,"Mutable_CopyMutableVertexBuffers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0x164);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId356);
  }
  this = UE::Mutable::Private::FMesh::GetVertexBuffers(param_2);
  bVar2 = UE::Mutable::Private::FMeshBufferSet::IsDescriptor(this);
  if (bVar2) {
    local_res20 = 0;
  }
  else {
    local_res20 = UE::Mutable::Private::FMeshBufferSet::GetElementCount(this);
  }
  local_res10 = true;
  local_80 = 0xffffffff;
  local_84 = 0xffffffff;
  UE::Mutable::Private::FMeshBufferSet::FindChannel
            (&param_2->VertexBuffers,TexCoords,0,(int *)&local_80,(int *)&local_84);
  lVar8 = (longlong)(int)local_80;
  if ((-1 < (int)local_80) && (-1 < (int)local_84)) {
    uVar3 = 0;
    if ((int)local_80 < (param_2->VertexBuffers).Buffers.ArrayNum) {
      uVar3 = ~local_80 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar9 = (longlong)(int)local_84;
    pFVar6 = (param_2->VertexBuffers).Buffers.AllocatorInstance.Data + lVar8 * 0x30;
    uVar3 = 0;
    if ((int)local_84 < *(int *)(pFVar6 + 8)) {
      uVar3 = ~local_84 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res10 = *(int *)(*(longlong *)pFVar6 + 4 + lVar9 * 0x10) == 2;
  }
  uVar3 = UE::Mutable::Private::FMeshBufferSet::GetBufferChannelCount(this,2);
  puVar5 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(this,2);
  _Src = UE::Mutable::Private::FMeshBufferSet::GetBufferData(this,1);
  _Src_00 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(this,0);
  this_00 = &param_1->StaticVertexBuffers;
  FPositionVertexBuffer::Init
            (&(param_1->StaticVertexBuffers).PositionVertexBuffer,local_res20,param_3);
  memcpy((param_1->StaticVertexBuffers).PositionVertexBuffer.Data,_Src_00,
         (ulonglong)(local_res20 * (param_1->StaticVertexBuffers).PositionVertexBuffer.Stride));
  (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs = local_res10;
  (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis = false;
  FStaticMeshVertexBuffer::Init(&this_00->StaticMeshVertexBuffer,local_res20,uVar3,param_3);
  iVar4 = FStaticMeshVertexBuffer::GetTangentSize(&this_00->StaticMeshVertexBuffer);
  memcpy((param_1->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr,_Src,(longlong)iVar4)
  ;
  iVar4 = FStaticMeshVertexBuffer::GetTexCoordSize(&this_00->StaticMeshVertexBuffer);
  memcpy((param_1->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr,puVar5,
         (longlong)iVar4);
  local_88 = -1;
  local_70 = None;
  local_68 = 0;
  local_7c = -1;
  UE::Mutable::Private::FMeshBufferSet::FindChannel(this,BoneIndices,0,&local_88,&local_7c);
  if ((-1 < local_88) || (-1 < local_7c)) {
    UE::Mutable::Private::FMeshBufferSet::GetChannel
              (this,local_88,local_7c,(EMeshBufferSemantic *)0x0,(int *)0x0,&local_70,&local_68,
               (int *)0x0);
  }
  local_6c = None;
  local_74 = -1;
  local_78 = -1;
  UE::Mutable::Private::FMeshBufferSet::FindChannel(this,BoneWeights,0,&local_74,&local_78);
  if ((-1 < local_74) || (-1 < local_78)) {
    UE::Mutable::Private::FMeshBufferSet::GetChannel
              (this,local_74,local_78,(EMeshBufferSemantic *)0x0,(int *)0x0,&local_6c,(int *)0x0,
               (int *)0x0);
  }
  if (local_70 == UInt16) {
    (param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = true;
  }
  if (local_6c == NUInt16) {
    (param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneWeight = true;
  }
  uVar3 = UE::Mutable::Private::FMeshBufferSet::GetBufferDataSize(this,local_88);
  puVar5 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(this,local_88);
  `anonymous_namespace'::FSkinWeightVertexBuffer_InitWithMutableData
            (&param_1->SkinWeightVertexBuffer,local_res20,local_68 * local_res20,local_68,param_3,
             puVar5,uVar3);
  iVar7 = 3;
  iVar4 = UE::Mutable::Private::FMeshBufferSet::GetBufferCount(this);
  if (3 < iVar4) {
    do {
      iVar4 = UE::Mutable::Private::FMeshBufferSet::GetBufferChannelCount(this,iVar7);
      if ((0 < iVar4) &&
         (UE::Mutable::Private::FMeshBufferSet::GetChannel
                    (this,iVar7,0,&local_64,local_54,&local_58,&local_5c,&local_60),
         local_64 == Color)) {
        puVar5 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(this,iVar7);
        FColorVertexBuffer::Init(&(param_1->StaticVertexBuffers).ColorVertexBuffer,local_res20,true)
        ;
        memcpy((param_1->StaticVertexBuffers).ColorVertexBuffer.Data,puVar5,
               (ulonglong)(local_res20 * (param_1->StaticVertexBuffers).ColorVertexBuffer.Stride));
        uVar3 = UE::Mutable::Private::FMeshBufferSet::GetElementSize(this,iVar7);
        if (((param_1->StaticVertexBuffers).ColorVertexBuffer.Stride != uVar3) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODResource.StaticVertexBuffers.ColorVertexBuffer.GetStride() == MutableMeshVertexBuffers.GetElementSize(Buffer)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                               ,0x1c0,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = UE::Mutable::Private::FMeshBufferSet::GetBufferCount(this);
    } while (iVar7 < iVar4);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CopySkeletalMeshLODRenderData @ 14ac5a1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UnrealConversionUtils::CopySkeletalMeshLODRenderData
          (FSkeletalMeshLODRenderData *param_1,FSkeletalMeshLODRenderData *param_2,
          USkeletalMesh *param_3,int param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *this;
  undefined1 *puVar2;
  undefined1 *this_00;
  FSkinWeightVertexBuffer *this_01;
  FScriptContainerElement FVar3;
  byte bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType _Src;
  uchar *_Src_00;
  uchar *_Dst;
  FRawStaticIndexBuffer16or32Interface *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FRuntimeSkinWeightProfileData *pFVar12;
  FRuntimeSkinWeightProfileData *this_02;
  void *_Src_01;
  void *_Dst_00;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FName *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStackY_128 [32];
  uint local_e4;
  longlong local_e0;
  undefined1 local_a8 [64];
  void *local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId694,"Mutable_CopySkeletalMeshLODRenderData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0x2b6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId694);
  }
  local_e0 = (longlong)(param_2->RenderSections).ArrayNum;
  uVar20 = 0;
  local_e4 = 0;
  if (0 < local_e0) {
    uVar21 = uVar20;
    do {
      pFVar17 = (FScriptContainerElement *)0x0;
      piVar15 = &(param_1->RenderSections).ArrayMax;
      uVar19 = (uint)uVar20;
      uVar10 = 0;
      if ((int)uVar19 < (param_2->RenderSections).ArrayNum) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (param_2->RenderSections).AllocatorInstance.Data;
      uVar10 = (param_1->RenderSections).ArrayNum;
      if (uVar10 == *piVar15) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&(param_1->RenderSections).AllocatorInstance,piVar15);
      }
      (param_1->RenderSections).ArrayNum = uVar10 + 1;
      uVar13 = 0;
      if ((int)uVar10 < (int)(uVar10 + 1)) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar16 = (param_1->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x118;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        *(undefined2 *)pFVar16 = 0;
        *(undefined2 *)(pFVar16 + 0x50) = 0xffff;
        *(undefined4 *)(pFVar16 + 100) = 0xffffffff;
        *(undefined8 *)(pFVar16 + 4) = 0;
        *(undefined8 *)(pFVar16 + 0xc) = 0x3010100;
        *(undefined8 *)(pFVar16 + 0x18) = 0;
        *(undefined8 *)(pFVar16 + 0x20) = 0;
        *(undefined8 *)(pFVar16 + 0x28) = 0;
        *(undefined8 *)(pFVar16 + 0x30) = 0;
        *(undefined8 *)(pFVar16 + 0x38) = 0;
        *(undefined8 *)(pFVar16 + 0x40) = 0;
        *(undefined4 *)(pFVar16 + 0x48) = 0;
        *(undefined4 *)(pFVar16 + 0x4c) = 4;
        *(undefined8 *)(pFVar16 + 0x54) = 0;
        *(undefined8 *)(pFVar16 + 0x5c) = 0;
        FRenderResource::FRenderResource((FRenderResource *)(pFVar16 + 0x68));
        pFVar16[0x108] = (FScriptContainerElement)0x0;
        *(undefined ***)(pFVar16 + 0x68) = &___7FDuplicatedVerticesBuffer__6B_;
        *(undefined ***)(pFVar16 + 0xb8) =
             &TSkeletalMeshVertexData<unsigned_int>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar16 + 0xc0) =
             &TSkeletalMeshVertexData<unsigned_int>::_vftable__for__TResourceArray<unsigned_int,0>__
        ;
        *(undefined ***)(pFVar16 + 0xe0) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar16 + 0xe8) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__TResourceArray<FIndexLengthPair,0>__;
        *(undefined8 *)(pFVar16 + 0x88) = 0;
        *(undefined8 *)(pFVar16 + 0x90) = 0;
        *(undefined4 *)(pFVar16 + 0x98) = 0;
        *(undefined8 *)(pFVar16 + 0xa0) = 0;
        *(undefined8 *)(pFVar16 + 0xa8) = 0;
        *(undefined4 *)(pFVar16 + 0xb0) = 0;
        *(undefined8 *)(pFVar16 + 200) = 0;
        *(undefined8 *)(pFVar16 + 0xd0) = 0;
        pFVar16[0xd8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar16 + 0xf0) = 0;
        *(undefined8 *)(pFVar16 + 0xf8) = 0;
        pFVar16[0x100] = (FScriptContainerElement)0x0;
        pFVar16[0x110] = (FScriptContainerElement)0x0;
        pFVar17 = pFVar16;
      }
      local_a8._56_8_ = 0;
      local_a8._16_8_ = 0;
      local_a8._24_8_ = 0;
      local_a8._48_4_ = 0xffffffff;
      local_60 = 0;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      local_a8._32_8_ = 0;
      local_a8._40_4_ = 0;
      local_a8._44_4_ = 0x80;
      local_a8._52_4_ = 0;
      local_68 = (void *)0x0;
      FDuplicatedVerticesBuffer::Init
                ((FDuplicatedVerticesBuffer *)(pFVar17 + 0x68),1,
                 (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                  *)local_a8);
      local_60 = local_60 & 0xffffffff00000000;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      FVar3 = pFVar6[uVar21 + 0x110];
      pFVar17[0x110] = FVar3;
      if (FVar3 == (FScriptContainerElement)0x0) {
        *(undefined4 *)(pFVar17 + 4) = *(undefined4 *)(pFVar6 + uVar21 + 4);
        pFVar16 = pFVar17 + 0x38;
        *(undefined4 *)(pFVar17 + 8) = *(undefined4 *)(pFVar6 + uVar21 + 8);
        *(undefined4 *)(pFVar17 + 0x10) = *(undefined4 *)(pFVar6 + uVar21 + 0x10);
        *(undefined4 *)(pFVar17 + 0x4c) = *(undefined4 *)(pFVar6 + uVar21 + 0x4c);
        *(undefined4 *)(pFVar17 + 0x48) = *(undefined4 *)(pFVar6 + uVar21 + 0x48);
        if (pFVar16 != pFVar6 + uVar21 + 0x38) {
          iVar11 = *(int *)(pFVar6 + uVar21 + 0x40);
          pFVar1 = pFVar17 + 0x44;
                    /* WARNING: Load size is inaccurate */
          _Src.Data = pFVar6[uVar21 + 0x38];
          *(int *)(pFVar17 + 0x40) = iVar11;
          uVar19 = local_e4;
          if ((iVar11 == 0) && (*(int *)pFVar1 == 0)) {
            *(int *)pFVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar11,*(int *)pFVar1,(ForAnyElementType *)pFVar16,iVar11,(int *)pFVar1);
            if (iVar11 != 0) {
                    /* WARNING: Load size is inaccurate */
              memcpy(*pFVar16,_Src.Data,(longlong)iVar11 * 2);
            }
          }
        }
        pFVar17[0xd] = pFVar6[uVar21 + 0xd];
      }
      local_e4 = uVar19 + 1;
      uVar20 = (ulonglong)local_e4;
      uVar21 = uVar21 + 0x118;
      local_e0 = local_e0 + -1;
    } while (local_e0 != 0);
  }
  uVar10 = (param_2->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
  uVar19 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  FPositionVertexBuffer::Init(&(param_1->StaticVertexBuffers).PositionVertexBuffer,uVar10,param_5);
  memcpy((param_1->StaticVertexBuffers).PositionVertexBuffer.Data,
         (param_2->StaticVertexBuffers).PositionVertexBuffer.Data,
         (ulonglong)(uVar10 * (param_1->StaticVertexBuffers).PositionVertexBuffer.Stride));
  (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs = true;
  (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis = false;
  FStaticMeshVertexBuffer::Init
            (&(param_1->StaticVertexBuffers).StaticMeshVertexBuffer,uVar10,uVar19,param_5);
  iVar11 = FStaticMeshVertexBuffer::GetTangentSize
                     (&(param_1->StaticVertexBuffers).StaticMeshVertexBuffer);
  memcpy((param_1->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr,
         (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr,(longlong)iVar11);
  iVar11 = FStaticMeshVertexBuffer::GetTexCoordSize
                     (&(param_1->StaticVertexBuffers).StaticMeshVertexBuffer);
  memcpy((param_1->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr,
         (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr,(longlong)iVar11);
  if ((param_1->StaticVertexBuffers).ColorVertexBuffer.NumVertices != 0) {
    FColorVertexBuffer::Init(&(param_1->StaticVertexBuffers).ColorVertexBuffer,uVar10,true);
    memcpy((param_1->StaticVertexBuffers).ColorVertexBuffer.Data,
           (param_2->StaticVertexBuffers).ColorVertexBuffer.Data,
           (ulonglong)(uVar10 * (param_1->StaticVertexBuffers).ColorVertexBuffer.Stride));
  }
  this_01 = &param_1->SkinWeightVertexBuffer;
  uVar19 = (param_2->SkinWeightVertexBuffer).DataVertexBuffer.MaxBoneInfluences;
  uVar13 = (param_2->SkinWeightVertexBuffer).DataVertexBuffer.NumBoneWeights;
  (param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex =
       (param_2->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex;
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences(&this_01->DataVertexBuffer,uVar19);
  FSkinWeightDataVertexBuffer::Init(&this_01->DataVertexBuffer,uVar13,uVar10);
  if (uVar10 != 0) {
    (param_1->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = param_5;
    (param_1->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = param_5;
    _Src_00 = (param_2->SkinWeightVertexBuffer).DataVertexBuffer.Data;
    _Dst = (param_1->SkinWeightVertexBuffer).DataVertexBuffer.Data;
    if ((_Src_00 == (uchar *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SrcData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                           ,0x2fe,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((_Dst == (uchar *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                           ,0x2ff,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    memcpy(_Dst,_Src_00,
           (ulonglong)
           (((uint)((param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneWeight != false)
            + ((param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex != false) + 2)
            * (param_1->SkinWeightVertexBuffer).DataVertexBuffer.NumBoneWeights +
           (param_1->SkinWeightVertexBuffer).LookupVertexBuffer.NumVertices * 4));
  }
  USkeletalMesh::WaitUntilAsyncPropertyReleased(param_3,SkinWeightProfiles,ReadWrite);
  iVar11 = (param_3->SkinWeightProfiles).ArrayNum;
  uVar10 = 0;
  if (0 < iVar11) {
    lVar14 = 0;
    do {
      USkeletalMesh::WaitUntilAsyncPropertyReleased(param_3,SkinWeightProfiles,ReadWrite);
      uVar19 = 0;
      if ((int)uVar10 < (param_3->SkinWeightProfiles).ArrayNum) {
        uVar19 = ~uVar10 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar18 = (FName *)((param_3->SkinWeightProfiles).AllocatorInstance.Data + lVar14);
      pFVar12 = FSkinWeightProfilesData::GetOverrideData(&param_2->SkinWeightProfilesData,pFVar18);
      this_02 = FSkinWeightProfilesData::AddOverrideData(&param_1->SkinWeightProfilesData,pFVar18);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                (&this_02->BoneIDs,&pFVar12->BoneIDs);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                (&this_02->BoneWeights,&pFVar12->BoneWeights);
      this = &this_02->VertexIndexToInfluenceOffset;
      if (this != &pFVar12->VertexIndexToInfluenceOffset) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)
                   &(this_02->VertexIndexToInfluenceOffset).field_0x38,
                   (int *)&(this_02->VertexIndexToInfluenceOffset).field_0x48,
                   (ForElementType<FSetElementId> *)
                   &(pFVar12->VertexIndexToInfluenceOffset).field_0x38,
                   *(int *)&(pFVar12->VertexIndexToInfluenceOffset).field_0x48);
        iVar5 = *(int *)&(pFVar12->VertexIndexToInfluenceOffset).field_0x8;
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,iVar5);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar5,(ForAnyElementType *)this,
                   (int *)&(this_02->VertexIndexToInfluenceOffset).field_0x8,
                   (int *)&(this_02->VertexIndexToInfluenceOffset).field_0xc);
        puVar2 = &(pFVar12->VertexIndexToInfluenceOffset).field_0x10;
        this_00 = &(this_02->VertexIndexToInfluenceOffset).field_0x10;
        *(undefined4 *)&(this_02->VertexIndexToInfluenceOffset).field_0x30 =
             *(undefined4 *)&(pFVar12->VertexIndexToInfluenceOffset).field_0x30;
        *(undefined4 *)&(this_02->VertexIndexToInfluenceOffset).field_0x34 =
             *(undefined4 *)&(pFVar12->VertexIndexToInfluenceOffset).field_0x34;
        if (this_00 != puVar2) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                     (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
        }
        if (iVar5 != 0) {
          memcpy(*(void **)this,*(void **)&pFVar12->VertexIndexToInfluenceOffset,
                 (longlong)iVar5 << 4);
        }
      }
      uVar10 = uVar10 + 1;
      this_02->NumWeightsPerVertex = pFVar12->NumWeightsPerVertex;
      lVar14 = lVar14 + 0x10;
      this_02->b16BitBoneIndices = pFVar12->b16BitBoneIndices;
    } while ((int)uVar10 < iVar11);
  }
  FSkinWeightProfilesData::Init(&param_1->SkinWeightProfilesData,this_01);
  (**(code **)(param_3->_padding_ + 0x488))(param_3,param_4,&param_1->SkinWeightProfilesData);
  pFVar7 = (param_2->MultiSizeIndexContainer).IndexBuffer;
  if (pFVar7 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    iVar11 = (**(code **)(pFVar7->_padding_ + 0x50))();
    bVar4 = (param_2->MultiSizeIndexContainer).DataTypeSize;
    if (((param_2->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x51,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (param_2->MultiSizeIndexContainer).IndexBuffer;
    _Src_01 = (void *)(**(code **)(pFVar7->_padding_ + 0x68))(pFVar7,0);
    FMultiSizeIndexContainer::CreateIndexBuffer(&param_1->MultiSizeIndexContainer,bVar4);
    if (((param_1->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x51,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (param_1->MultiSizeIndexContainer).IndexBuffer;
    (**(code **)(pFVar7->_padding_ + 0x70))(pFVar7,0,iVar11);
    if (((param_1->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x51,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (param_1->MultiSizeIndexContainer).IndexBuffer;
    _Dst_00 = (void *)(**(code **)(pFVar7->_padding_ + 0x68))(pFVar7,0);
    memcpy(_Dst_00,_Src_01,(longlong)(int)((uint)bVar4 * iVar11));
  }
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::
  Append<unsigned_short,TSizedDefaultAllocator<32>_>
            (&param_1->ActiveBoneIndices,&param_2->ActiveBoneIndices);
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::
  Append<unsigned_short,TSizedDefaultAllocator<32>_>
            (&param_1->RequiredBones,&param_2->RequiredBones);
  uVar10 = (*(uint *)&param_1->field_0x658 ^ *(uint *)&param_2->field_0x658) & 2 ^
           *(uint *)&param_1->field_0x658;
  *(uint *)&param_1->field_0x658 = uVar10;
  *(uint *)&param_1->field_0x658 = (uVar10 ^ param_2->bStreamedDataInlined) & 1 ^ uVar10;
  param_1->BuffersSize = param_2->BuffersSize;
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateClothMapping @ 14ac5ab40

void __cdecl
UnrealConversionUtils::CreateClothMapping
          (FSectionClothData *param_1,
          TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  uVar1 = param_1->SectionIndex;
  lVar9 = (longlong)(int)uVar1;
  iVar2 = param_1->BaseVertex;
  iVar8 = (param_1->MappingData).ArrayNum;
  iVar3 = param_2->ArrayNum;
  uVar7 = 0;
  if ((int)uVar1 < param_3->ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(int *)(pFVar4 + lVar9 * 0xc) = iVar2;
  *(int *)(pFVar4 + lVar9 * 0xc + 4) = iVar3;
  *(int *)(pFVar4 + lVar9 * 0xc + 8) = iVar8;
  if (param_2 == &param_1->MappingData) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (param_1->MappingData).ArrayNum;
  if (iVar2 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,0x10,iVar2,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    memcpy((param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x40,
           (param_1->MappingData).AllocatorInstance.Data,(longlong)iVar2 << 6);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeMultilayerProjector @ 14ac5b710

void __cdecl EmptyLinkFunctionForGeneratedCodeMultilayerProjector(void)

{
  return;
}

// FSkinWeightVertexBuffer_InitWithMutableData @ 14ac5bf70

void __cdecl
UnrealConversionUtils::`anonymous_namespace'::FSkinWeightVertexBuffer_InitWithMutableData
          (FSkinWeightVertexBuffer *param_1,int param_2,int param_3,int param_4,bool param_5,
          void *param_6,uint param_7)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  void *_Src;
  int iVar5;
  size_t _Size;
  uchar *_Dst;
  uint uVar6;
  size_t _Size_00;
  int iVar7;
  ulonglong uVar8;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_38;
  
  uVar8 = (ulonglong)(uint)param_2;
  (param_1->DataVertexBuffer).bNeedsCPUAccess = param_5;
  (param_1->LookupVertexBuffer).bNeedsCPUAccess = param_5;
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences(&param_1->DataVertexBuffer,param_4);
  if (param_2 != 0) {
    uVar4 = (param_1->DataVertexBuffer).MaxBoneInfluences;
    if (uVar4 == param_4) {
      FSkinWeightDataVertexBuffer::Init(&param_1->DataVertexBuffer,param_3,param_2);
      uVar4 = ((uint)((param_1->DataVertexBuffer).bUse16BitBoneWeight != false) +
              ((param_1->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
              (param_1->DataVertexBuffer).NumBoneWeights;
      if ((param_7 != uVar4) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3504799828724940917>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                             ,0x75,"MutableDataSize == OutVertexWeightBufferSize"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      memcpy((param_1->DataVertexBuffer).Data,param_6,(ulonglong)uVar4);
    }
    else if (0 < param_3) {
      FSkinWeightDataVertexBuffer::Init(&param_1->DataVertexBuffer,uVar4 * param_2,param_2);
      uVar6 = ((uint)((param_1->DataVertexBuffer).bUse16BitBoneWeight != false) +
              ((param_1->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
              (param_1->DataVertexBuffer).NumBoneWeights;
      if (((param_7 / (uint)param_3) * uVar4 * param_2 != uVar6) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3504799828724940928>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                             ,0x80,"FinalVertexDataSize*NumVertices == OutVertexWeightBufferSize"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (param_1->DataVertexBuffer).Data;
      iVar5 = ((param_1->DataVertexBuffer).bUse16BitBoneIndex != false) + 1;
      iVar7 = ((param_1->DataVertexBuffer).bUse16BitBoneWeight != false) + 1;
      memset(_Dst,0,(ulonglong)uVar6);
      if (0 < param_2) {
        _Size_00 = (size_t)(iVar5 * param_4);
        _Size = (size_t)(iVar7 * param_4);
        do {
          memcpy(_Dst,param_6,_Size_00);
          _Src = (void *)((longlong)param_6 + _Size_00);
          memcpy(_Dst + (int)(iVar5 * uVar4),_Src,_Size);
          param_6 = (void *)((longlong)_Src + _Size);
          _Dst = _Dst + (int)(iVar5 * uVar4) + (int)(iVar7 * uVar4);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    bVar2 = (param_1->DataVertexBuffer).bVariableBonesPerVertex;
    bVar3 = FGPUBaseSkinVertexFactory::UseUnlimitedBoneInfluences(param_4,(ITargetPlatform *)0x0);
    if (bVar3) {
      if (bVar2 == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FGPUBaseSkinVertexFactory::UseUnlimitedBoneInfluences(NumBoneInfluences) || bIsVariableBonesPerVertex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                           ,0x97,L"");
        if (!bVar2) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (bVar2 == false) {
      return;
    }
    FSkinWeightVertexBuffer::RebuildLookupVertexBuffer(param_1);
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`UnrealConversionUtils::FSkinWeightVertexBuffer_InitWithMutableData'::`25'::
                  __CpuProfilerEventSpecId157,"Mutable_OptimizeVertexAndLookupBuffers",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                 ,0x9d);
      FCpuProfilerTrace::OutputBeginEvent
                (`UnrealConversionUtils::FSkinWeightVertexBuffer_InitWithMutableData'::`25'::
                 __CpuProfilerEventSpecId157);
    }
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    FSkinWeightVertexBuffer::GetSkinWeights(param_1,&local_38);
    FSkinWeightVertexBuffer::operator=(param_1,&local_38);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// GetEquivalentProjectorType @ 14ac5c350

ECustomizableObjectProjectorType __cdecl
ProjectorUtils::GetEquivalentProjectorType(EProjectorType param_1)

{
  code *pcVar1;
  bool bVar2;
  ECustomizableObjectProjectorType EVar3;
  
  if (param_1 != Planar) {
    if (param_1 == Cylindrical) {
      return Cylindrical;
    }
    if (param_1 == Wrapping) {
      return Wrapping;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableProjectorTypeUtils.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return Planar;
}

// GetEquivalentProjectorType @ 14ac5c3b0

EProjectorType __cdecl
ProjectorUtils::GetEquivalentProjectorType(ECustomizableObjectProjectorType param_1)

{
  code *pcVar1;
  bool bVar2;
  EProjectorType EVar3;
  
  if (param_1 == Planar) {
    return Planar;
  }
  if (param_1 == Wrapping) {
    return Wrapping;
  }
  if (param_1 == Cylindrical) {
    return Cylindrical;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableProjectorTypeUtils.cpp"
                     ,0x2d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Count;
}

// GetMutablePixelFormat @ 14ac5d600

EImageFormat __cdecl GetMutablePixelFormat(EPixelFormat param_1)

{
  switch(param_1) {
  case PF_B8G8R8A8:
    return BGRA_UByte;
  case PF_G8:
    return L_UByte;
  default:
    return None;
  case PF_DXT1:
    return BC1;
  case PF_DXT3:
    return BC2;
  case PF_DXT5:
    return BC3;
  case PF_BC5:
    return BC5;
  case PF_R8G8B8A8:
    return RGBA_UByte;
  case PF_BC4:
    return BC4;
  case PF_ASTC_4x4:
    return ASTC_4x4_RGBA_LDR;
  case PF_ASTC_6x6:
    return ASTC_6x6_RGBA_LDR;
  case PF_ASTC_8x8:
    return ASTC_8x8_RGBA_LDR;
  case PF_ASTC_10x10:
    return ASTC_10x10_RGBA_LDR;
  case PF_ASTC_12x12:
    return ASTC_12x12_RGBA_LDR;
  }
}

// GetSectionClothData @ 14ac5d890

/* WARNING: Removing unreachable block (ram,0x00014ac5de66) */

void __cdecl
UnrealConversionUtils::GetSectionClothData
          (FMesh *param_1,int param_2,
          TMap<unsigned_int,FClothingMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FClothingMeshData,0>_>
          *param_3,TArray<UnrealConversionUtils::FSectionClothData,TSizedDefaultAllocator<32>_>
                   *param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FMeshBufferSet *pFVar8;
  uchar *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  bool bVar14;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130 [2];
  uchar *local_128;
  int local_120;
  int local_11c;
  uchar *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  uchar *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  uchar *local_d8;
  undefined8 uStack_d0;
  uchar *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uchar *local_88;
  uchar *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 local_64;
  undefined4 local_54;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1689,"Mutable_GetSectionClothData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0x699);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1689);
  }
  pFVar8 = UE::Mutable::Private::FMesh::GetVertexBuffers(param_1);
  UE::Mutable::Private::FMeshBufferSet::FindChannel(pFVar8,Other,2,&local_120,&local_98);
  UE::Mutable::Private::FMeshBufferSet::FindChannel(pFVar8,Other,3,&local_134,&local_94);
  if ((-1 < local_120) && (-1 < local_134)) {
    puVar9 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar8,local_120);
    local_128 = puVar9;
    local_88 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar8,local_134);
    local_11c = UE::Mutable::Private::FMesh::GetSurfaceCount(param_1);
    local_138 = 0;
    if (0 < local_11c) {
      do {
        iVar6 = local_138;
        UE::Mutable::Private::FMesh::GetSurface
                  (param_1,local_138,&local_13c,&local_144,local_130,&local_140,&local_8c,&local_90)
        ;
        if ((local_144 != 0) && (local_140 != 0)) {
          iStack_78 = local_144;
          local_80 = puVar9 + (longlong)local_13c * 4;
          if ((local_144 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = local_144;
          puVar1 = (uint *)(local_88 + (longlong)local_13c * 4);
          if ((local_144 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_118 = (uchar *)0x0;
          iStack_110 = 0;
          local_108 = (uchar *)0x0;
          iStack_100 = 0;
          pFVar8 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_1);
          iVar5 = UE::Mutable::Private::FMeshBufferSet::GetElementCount(pFVar8);
          if (iVar5 != 0) {
            pFVar8 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_1);
            iVar6 = UE::Mutable::Private::FMeshBufferSet::GetElementSize(pFVar8,0);
            if (iVar6 == 2) {
              pFVar8 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_1);
              puVar9 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar8,0);
              iVar6 = local_140;
              lVar10 = (longlong)local_130[0];
              if ((local_140 < 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iStack_110 = iVar6;
              uStack_10c = local_64;
              iVar6 = local_138;
              local_118 = puVar9 + lVar10 * 2;
            }
            else {
              pFVar8 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_1);
              puVar9 = UE::Mutable::Private::FMeshBufferSet::GetBufferData(pFVar8,0);
              iVar6 = local_140;
              lVar10 = (longlong)local_130[0];
              if ((local_140 < 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iStack_100 = iVar6;
              uStack_fc = local_54;
              iVar6 = local_138;
              local_108 = puVar9 + lVar10 * 4;
            }
          }
          puVar9 = local_128;
          if (iStack_78 != 0) {
            if ((iVar7 < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar2 = *puVar1;
            puVar9 = local_128;
            if (uVar2 != 0) {
              if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
                puVar11 = &param_3->field_0x38;
                if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
                  puVar11 = *(undefined1 **)&param_3->field_0x40;
                }
                iVar7 = *(int *)(puVar11 +
                                (ulonglong)(*(int *)&param_3->field_0x48 - 1U & uVar2) * 4);
                if (iVar7 != -1) {
                  do {
                    lVar10 = *(longlong *)param_3 + (longlong)iVar7 * 0x28;
                    if (*(uint *)(*(longlong *)param_3 + (longlong)iVar7 * 0x28) == uVar2) {
                      lVar13 = lVar10 + 8;
                      if (lVar10 == 0) {
                        lVar13 = 0;
                      }
                      if (lVar13 != 0) {
                        if ((*(int *)(lVar13 + 0x10) == 0) &&
                           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                              ("SectionClothingData->Data.Num()",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                                               ,0x6df,L""), bVar4)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        uStack_e0 = CONCAT44(uStack_10c,iStack_110);
                        uStack_d0 = CONCAT44(uStack_fc,iStack_100);
                        local_f0 = local_13c;
                        local_b8 = *(undefined8 *)(lVar13 + 8);
                        local_e8 = local_118;
                        iStack_b0 = *(int *)(lVar13 + 0x10);
                        uStack_c0 = CONCAT44(uStack_74,iStack_78);
                        local_d8 = local_108;
                        local_c8 = local_80;
                        local_f8 = iVar6;
                        local_f4 = param_2;
                        if ((iStack_b0 < 0) &&
                           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                              ("ArrayNum >= 0",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                               ,0xfe,L""), bVar4)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        pFVar12 = (param_4->AllocatorInstance).Data;
                        local_a8 = 0;
                        local_a0 = 0;
                        if (((pFVar12 <= (FScriptContainerElement *)&local_f8) &&
                            ((FScriptContainerElement *)&local_f8 <
                             pFVar12 + (longlong)param_4->ArrayMax * 0x60)) &&
                           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar4)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        iVar7 = param_4->ArrayNum;
                        if (iVar7 == param_4->ArrayMax) {
                          iVar7 = UE::Core::Private::
                                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x860,&param_4->AllocatorInstance,&param_4->ArrayMax);
                        }
                        param_4->ArrayNum = iVar7 + 1;
                        pFVar12 = (param_4->AllocatorInstance).Data + (longlong)iVar7 * 0x60;
                        *(int *)pFVar12 = local_f8;
                        *(int *)(pFVar12 + 4) = local_f4;
                        *(int *)(pFVar12 + 8) = local_f0;
                        *(uchar **)(pFVar12 + 0x10) = local_e8;
                        *(undefined8 *)(pFVar12 + 0x18) = uStack_e0;
                        *(uchar **)(pFVar12 + 0x20) = local_d8;
                        *(undefined8 *)(pFVar12 + 0x28) = uStack_d0;
                        *(uchar **)(pFVar12 + 0x30) = local_c8;
                        *(undefined8 *)(pFVar12 + 0x38) = uStack_c0;
                        *(undefined8 *)(pFVar12 + 0x40) = local_b8;
                        *(ulonglong *)(pFVar12 + 0x48) = CONCAT44(uStack_ac,iStack_b0);
                        *(undefined8 *)(pFVar12 + 0x50) = 0;
                        *(undefined8 *)(pFVar12 + 0x50) = local_a8;
                        local_a8 = 0;
                        *(undefined4 *)(pFVar12 + 0x58) = (undefined4)local_a0;
                        *(undefined4 *)(pFVar12 + 0x5c) = local_a0._4_4_;
                        local_a0 = 0;
                        puVar9 = local_128;
                        goto LAB_14ac5dc56;
                      }
                      break;
                    }
                    iVar7 = *(int *)(lVar10 + 0x20);
                  } while (iVar7 != -1);
                }
              }
              *param_5 = *param_5 + 1;
            }
          }
        }
LAB_14ac5dc56:
        local_138 = iVar6 + 1;
      } while (local_138 < local_11c);
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTypeHash @ 14ac5de80

uint __cdecl GetTypeHash(FMultilayerProjectorLayer *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = FCrc::MemCrc_DEPRECATED(param_1,0x18,0);
  uVar4 = FCrc::MemCrc_DEPRECATED(&param_1->Direction,0x18,0);
  uVar7 = uVar3 - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar4 ^ uVar7 << 8;
  uVar4 = (uVar4 - uVar3) - uVar7 ^ uVar3 >> 0xd;
  uVar8 = (uVar7 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar8) - uVar4 ^ uVar8 << 0x10;
  uVar7 = (uVar4 - uVar3) - uVar8 ^ uVar3 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar3 ^ uVar7 >> 3;
  uVar4 = (uVar3 - uVar8) - uVar7 ^ uVar8 << 10;
  uVar3 = FCrc::MemCrc_DEPRECATED(&param_1->Up,0x18,0);
  uVar8 = ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar3 ^ uVar8 << 8;
  uVar7 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar3 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar3) - uVar8 ^ uVar3 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar3 ^ uVar7 >> 3;
  uVar4 = (uVar3 - uVar8) - uVar7 ^ uVar8 << 10;
  uVar3 = FCrc::MemCrc_DEPRECATED(&param_1->Scale,0x18,0);
  fVar1 = param_1->Angle;
  uVar8 = ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar3 ^ uVar8 << 8;
  uVar7 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar3 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar4 = (uVar7 - uVar3) - uVar8 ^ uVar3 >> 5;
  uVar7 = (uVar8 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar4 ^ uVar7 << 10;
  uVar4 = ((uVar4 - uVar3) - uVar7 ^ uVar3 >> 0xf) - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - (int)fVar1 ^ uVar4 << 8;
  uVar7 = ((int)fVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar7) - uVar3 ^ uVar7 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar7 ^ uVar4 << 0x10;
  uVar7 = (uVar7 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar7) - uVar3 ^ uVar7 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar7 ^ uVar4 << 10;
  iVar2 = (param_1->Image).Data.ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Image).Data.AllocatorInstance.Data;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  uVar4 = ((uVar7 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar8 ^ uVar8 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar8 ^ uVar4 << 8;
  uVar7 = (uVar8 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar7) - uVar3 ^ uVar7 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar7 ^ uVar4 << 0x10;
  uVar7 = (uVar7 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar7) - uVar3 ^ uVar7 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar7 ^ uVar4 << 10;
  fVar1 = param_1->Opacity;
  uVar4 = ((uVar7 - uVar3) - uVar4 ^ uVar3 >> 0xf) - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar7 = (-0x61c88647 - uVar4) - (int)fVar1 ^ uVar4 << 8;
  uVar3 = ((int)fVar1 - uVar7) - uVar4 ^ uVar7 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar7 ^ uVar3 >> 0xc;
  uVar7 = (uVar7 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar7) - uVar4 ^ uVar7 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar7 ^ uVar3 >> 3;
  uVar7 = (uVar7 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar7) - uVar4 ^ uVar7 >> 0xf;
}

// InitIndexBuffersWithDummyData @ 14ac5e540

void __cdecl
UnrealConversionUtils::InitIndexBuffersWithDummyData
          (FSkeletalMeshLODRenderData *param_1,FMesh *param_2)

{
  FRawStaticIndexBuffer16or32Interface *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FMeshBufferSet *pFVar6;
  bool bVar7;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId457,"Mutable_InitIndexBuffersWithDummyData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0x1c9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId457);
  }
  pFVar6 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_2);
  iVar4 = UE::Mutable::Private::FMeshBufferSet::GetElementCount(pFVar6);
  if ((iVar4 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMutableMesh->GetIndexBuffers().GetElementCount() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                         ,0x1cb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_2);
  iVar4 = UE::Mutable::Private::FMeshBufferSet::GetElementCount(pFVar6);
  pFVar6 = UE::Mutable::Private::FMesh::GetIndexBuffers(param_2);
  iVar5 = UE::Mutable::Private::FMeshBufferSet::GetElementSize(pFVar6,0);
  FMultiSizeIndexContainer::CreateIndexBuffer(&param_1->MultiSizeIndexContainer,(uchar)iVar5);
  if (((param_1->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IndexBuffer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                               ,0x51,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->MultiSizeIndexContainer).IndexBuffer;
  (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1,iVar4);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitVertexBuffersWithDummyData @ 14ac5e670

void __cdecl
UnrealConversionUtils::InitVertexBuffersWithDummyData
          (FSkeletalMeshLODRenderData *param_1,FMesh *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FMeshBufferSet *this;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint local_res18 [2];
  int local_res20 [2];
  int local_68;
  int local_64;
  int local_60;
  EMeshBufferFormat local_5c;
  EMeshBufferFormat local_58;
  EMeshBufferSemantic local_54;
  int local_50;
  int local_4c;
  EMeshBufferFormat local_48;
  int local_44 [3];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId254,"Mutable_InitVertexBuffersWithDummyData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
               ,0xfe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId254);
  }
  this = UE::Mutable::Private::FMesh::GetVertexBuffers(param_2);
  iVar3 = UE::Mutable::Private::FMeshBufferSet::GetElementCount(this);
  if ((iVar3 < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MutableMeshVertexBuffers.GetElementCount() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                         ,0x101,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = UE::Mutable::Private::FMeshBufferSet::GetElementCount(this);
  uVar5 = UE::Mutable::Private::FMeshBufferSet::GetBufferChannelCount(this,2);
  FPositionVertexBuffer::Init(&(param_1->StaticVertexBuffers).PositionVertexBuffer,1,param_3);
  FPositionVertexBuffer::SetMetaData
            (&(param_1->StaticVertexBuffers).PositionVertexBuffer,
             (param_1->StaticVertexBuffers).PositionVertexBuffer.Stride,uVar4);
  (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs = true;
  (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis = false;
  FStaticMeshVertexBuffer::Init
            (&(param_1->StaticVertexBuffers).StaticMeshVertexBuffer,1,uVar5,param_3);
  FStaticMeshVertexBuffer::SetMetaData
            (&(param_1->StaticVertexBuffers).StaticMeshVertexBuffer,uVar5,uVar4,true,false);
  local_68 = -1;
  local_5c = None;
  local_res18[0] = 0;
  local_res20[0] = -1;
  UE::Mutable::Private::FMeshBufferSet::FindChannel(this,BoneIndices,0,&local_68,local_res20);
  if ((-1 < local_68) || (-1 < local_res20[0])) {
    UE::Mutable::Private::FMeshBufferSet::GetChannel
              (this,local_68,local_res20[0],(EMeshBufferSemantic *)0x0,(int *)0x0,&local_5c,
               (int *)local_res18,(int *)0x0);
  }
  local_58 = None;
  local_60 = -1;
  local_64 = -1;
  UE::Mutable::Private::FMeshBufferSet::FindChannel(this,BoneWeights,0,&local_60,&local_64);
  if ((-1 < local_60) || (-1 < local_64)) {
    UE::Mutable::Private::FMeshBufferSet::GetChannel
              (this,local_60,local_64,(EMeshBufferSemantic *)0x0,(int *)0x0,&local_58,(int *)0x0,
               (int *)0x0);
  }
  bVar2 = local_5c == UInt16;
  (param_1->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = param_3;
  bVar8 = local_58 == NUInt16;
  (param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = bVar2;
  (param_1->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = param_3;
  (param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneWeight = bVar8;
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&(param_1->SkinWeightVertexBuffer).DataVertexBuffer,local_res18[0]);
  local_res18[0] = (param_1->SkinWeightVertexBuffer).DataVertexBuffer.MaxBoneInfluences;
  FSkinWeightDataVertexBuffer::Init
            (&(param_1->SkinWeightVertexBuffer).DataVertexBuffer,local_res18[0],1);
  FSkinWeightDataVertexBuffer::SetMetaData
            (&(param_1->SkinWeightVertexBuffer).DataVertexBuffer,uVar4,local_res18[0],bVar2,bVar8);
  if ((param_1->SkinWeightVertexBuffer).DataVertexBuffer.bVariableBonesPerVertex != false) {
    FSkinWeightLookupVertexBuffer::SetMetaData
              (&(param_1->SkinWeightVertexBuffer).LookupVertexBuffer,uVar4);
  }
  iVar6 = 3;
  iVar3 = UE::Mutable::Private::FMeshBufferSet::GetBufferCount(this);
  if (3 < iVar3) {
    do {
      iVar3 = UE::Mutable::Private::FMeshBufferSet::GetBufferChannelCount(this,iVar6);
      if ((0 < iVar3) &&
         (UE::Mutable::Private::FMeshBufferSet::GetChannel
                    (this,iVar6,0,&local_54,local_44,&local_48,&local_4c,&local_50),
         local_54 == Color)) {
        FColorVertexBuffer::Init(&(param_1->StaticVertexBuffers).ColorVertexBuffer,1,param_3);
        FColorVertexBuffer::SetMetaData
                  (&(param_1->StaticVertexBuffers).ColorVertexBuffer,
                   (param_1->StaticVertexBuffers).ColorVertexBuffer.Stride,uVar4);
        uVar5 = UE::Mutable::Private::FMeshBufferSet::GetElementSize(this,iVar6);
        if (((param_1->StaticVertexBuffers).ColorVertexBuffer.Stride != uVar5) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODResource.StaticVertexBuffers.ColorVertexBuffer.GetStride() == MutableMeshVertexBuffers.GetElementSize(Buffer)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                               ,0x157,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar6 = iVar6 + 1;
      iVar3 = UE::Mutable::Private::FMeshBufferSet::GetBufferCount(this);
    } while (iVar6 < iVar3);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// MorphTargetVertexInfoBuffers @ 14ac5eba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UnrealConversionUtils::MorphTargetVertexInfoBuffers
          (FSkeletalMeshLODRenderData *param_1,USkeletalMesh *param_2,FMesh *param_3,
          TMap<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
          *param_4,int param_5)

{
  ForAnyElementType *pFVar1;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar2;
  int *piVar3;
  undefined8 uVar4;
  code *pcVar5;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar6;
  TMap<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  FMorphTargetLODModel *pFVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  TMap<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
  *pTVar26;
  longlong lVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  uint *puVar29;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288;
  undefined1 local_287;
  undefined1 local_286;
  undefined1 local_285 [5];
  TArray<FMorphTargetLODModel_const_*,TSizedDefaultAllocator<32>_> local_280;
  undefined8 local_270;
  TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> local_268;
  FMorphTargetLODModel *local_258;
  TArray<FName,TSizedDefaultAllocator<32>_> local_250;
  int local_240;
  int local_23c;
  TMap<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
  *local_238;
  uint uStack_230;
  uint uStack_22c;
  undefined1 *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  uint local_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  TMap<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
  *local_208;
  USkeletalMesh *local_200;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  undefined1 *local_1e8;
  undefined4 uStack_1e0;
  int iStack_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  uint *local_1b0;
  TBitArray<FDefaultBitArrayAllocator> *local_1a8;
  FMesh *local_1a0;
  FSkeletalMeshLODRenderData *local_198;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  TMap<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  undefined4 local_e4;
  undefined4 local_c4;
  ForElementType<unsigned_int> local_c0;
  uint local_a8;
  int local_a4;
  TSet<TTuple<unsigned_int,FMappedMorphTargetMeshData>,TDefaultMapHashableKeyFuncs<unsigned_int,FMappedMorphTargetMeshData,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_23c = param_5;
  local_208 = param_4;
  local_200 = param_2;
  local_1a0 = param_3;
  local_198 = param_1;
  lVar10 = (**(code **)(param_2->_padding_ + 0x450))(param_2);
  if (*(int *)(lVar10 + 8) != 0) {
    local_270 = 1;
    USkeletalMesh::WaitUntilAsyncPropertyReleased(param_2,MorphTargetIndexMap,ReadOnly);
    puVar25 = &(param_2->MorphTargetIndexMap).field_0x10;
    iVar15 = *(int *)&(param_2->MorphTargetIndexMap).field_0x28;
    pTVar2 = &param_2->MorphTargetIndexMap;
    iStack_1f0 = 0;
    local_1d8 = 0;
    iVar19 = 0;
    uStack_1ec = 1;
    iStack_1dc = 0;
    if (iVar15 != 0) {
      puVar29 = *(uint **)&(param_2->MorphTargetIndexMap).field_0x20;
      if (puVar29 == (uint *)0x0) {
        puVar29 = (uint *)puVar25;
      }
      uStack_1ec = *puVar29;
      while (uStack_1ec == 0) {
        lVar10 = (longlong)iStack_1f0;
        local_1d8 = local_1d8 + 0x20;
        iStack_1f0 = iStack_1f0 + 1;
        uStack_1ec = 1;
        iStack_1dc = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f0)
        goto LAB_14ac5eccd;
        uStack_1ec = puVar29[lVar10 + 1];
      }
      uStack_1ec = -uStack_1ec & uStack_1ec;
      uVar11 = (ulonglong)uStack_1ec * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1c8 = (int)lVar10;
      iStack_1dc = local_1d8 + -1 + local_1c8;
      if (iVar15 < iStack_1dc) {
        iStack_1dc = iVar15;
      }
    }
LAB_14ac5eccd:
    uVar22 = *(uint *)&(param_2->MorphTargetIndexMap).field_0x28;
    uStack_1d4 = local_e4;
    iStack_1d0 = *(int *)&(param_2->MorphTargetIndexMap).field_0x8 -
                 *(int *)&(param_2->MorphTargetIndexMap).field_0x34;
    uVar18 = uVar22 & 0xffffffe0;
    TStack_188._padding_ = CONCAT44(uStack_1ec,iStack_1f0);
    uStack_1e0 = 0xffffffff;
    TStack_188.CurrentBitIndex = iStack_1dc;
    TStack_188.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar22 >> 5;
    TStack_188._28_4_ = local_e4;
    TStack_188.BaseBitIndex = local_1d8;
    uStack_168 = CONCAT44(uStack_1cc,iStack_1d0);
    local_1f8 = pTVar2;
    local_1e8 = puVar25;
    local_190 = pTVar2;
    TStack_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar25;
    if ((((int)uVar22 < 0) || (iVar15 < (int)uVar22)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar20 = *(uint *)&(param_2->MorphTargetIndexMap).field_0x28;
    iVar15 = 0;
    if (uVar22 != uVar20) {
      puVar24 = *(undefined1 **)&(param_2->MorphTargetIndexMap).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar25;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar14 * 4);
      while (iVar15 = iVar19, uVar22 == 0) {
        lVar10 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar22 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14ac5edd0;
        uVar22 = *(uint *)(puVar24 + lVar10 * 4 + 4);
      }
      uVar11 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1c4 = (int)lVar10;
      uVar22 = local_1c4 + -1 + uVar18;
      if ((int)uVar20 < (int)uVar22) {
        uVar22 = uVar20;
      }
    }
LAB_14ac5edd0:
    while( true ) {
      pTVar6 = local_190;
      if (*(int *)&local_190->field_0x8 - *(int *)&local_190->field_0x34 != (int)uStack_168) {
        local_288 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_288);
      }
      if (((TStack_188.CurrentBitIndex == uVar22) &&
          (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar25)) &&
         (pTVar6 == pTVar2)) break;
      iVar19 = *(int *)(*(longlong *)pTVar6 + 8 + (longlong)TStack_188.CurrentBitIndex * 0x14);
      if (iVar19 < iVar15) {
        iVar19 = iVar15;
      }
      TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
      iVar15 = iVar19;
    }
    iVar19 = 0;
    local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.ArrayNum = 0;
    local_250.ArrayMax = 0;
    TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(&local_250,iVar15 + 1,Default);
    iVar15 = *(int *)&(param_2->MorphTargetIndexMap).field_0x28;
    uVar22 = (uint)local_270;
    uStack_21c = iVar19;
    local_218 = iVar19;
    uStack_22c = uVar22;
    if (iVar15 != 0) {
      puVar29 = *(uint **)&(param_2->MorphTargetIndexMap).field_0x20;
      if (puVar29 == (uint *)0x0) {
        puVar29 = (uint *)puVar25;
      }
      uVar18 = *puVar29;
      while (uVar18 == 0) {
        lVar10 = (longlong)iVar19;
        local_218 = local_218 + 0x20;
        iVar19 = iVar19 + 1;
        uStack_21c = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14ac5eebd;
        uVar18 = puVar29[lVar10 + 1];
      }
      uStack_22c = -uVar18 & uVar18;
      uVar11 = (ulonglong)uStack_22c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1c0 = (int)lVar10;
      uStack_21c = local_218 + -1 + local_1c0;
      if (iVar15 < (int)uStack_21c) {
        uStack_21c = iVar15;
      }
    }
LAB_14ac5eebd:
    iStack_214 = local_c4;
    uVar18 = *(uint *)&(local_200->MorphTargetIndexMap).field_0x28;
    uVar20 = uVar18 & 0xffffffe0;
    iStack_210 = *(int *)&(local_200->MorphTargetIndexMap).field_0x8 -
                 *(int *)&(local_200->MorphTargetIndexMap).field_0x34;
    uStack_220 = 0xffffffff;
    TStack_158._padding_ = CONCAT44(uStack_22c,iVar19);
    TStack_158.CurrentBitIndex = uStack_21c;
    TStack_158.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar18 >> 5;
    TStack_158._28_4_ = local_c4;
    TStack_158.BaseBitIndex = local_218;
    uStack_138 = CONCAT44(uStack_20c,iStack_210);
    local_238 = (TMap<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
                 *)pTVar2;
    uStack_230 = iVar19;
    local_228 = puVar25;
    local_160 = pTVar2;
    TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar25;
    if ((((int)uVar18 < 0) || (iVar15 < (int)uVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = *(uint *)&(param_2->MorphTargetIndexMap).field_0x28;
    if (uVar18 != uVar9) {
      puVar24 = *(undefined1 **)&(param_2->MorphTargetIndexMap).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar25;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar14 * 4);
      while (uVar18 == 0) {
        lVar10 = (longlong)iVar14;
        uVar20 = uVar20 + 0x20;
        iVar14 = iVar14 + 1;
        uVar18 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14ac5efcd;
        uVar18 = *(uint *)(puVar24 + lVar10 * 4 + 4);
      }
      uVar11 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1bc = (int)lVar10;
      uVar18 = local_1bc + -1 + uVar20;
      if ((int)uVar9 < (int)uVar18) {
        uVar18 = uVar9;
      }
    }
LAB_14ac5efcd:
    uVar20 = 0;
    while( true ) {
      pTVar6 = local_160;
      if (*(int *)&local_160->field_0x8 - *(int *)&local_160->field_0x34 != (int)uStack_138) {
        local_287 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_287);
      }
      pTVar26 = local_208;
      if (((TStack_158.CurrentBitIndex == uVar18) &&
          (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar25)) &&
         (pTVar6 == pTVar2)) break;
      lVar10 = *(longlong *)pTVar6;
      uVar9 = *(uint *)(lVar10 + 8 + (longlong)TStack_158.CurrentBitIndex * 0x14);
      uVar4 = *(undefined8 *)(lVar10 + (longlong)TStack_158.CurrentBitIndex * 0x14);
      uVar21 = uVar20;
      if ((int)uVar9 < local_250.ArrayNum) {
        uVar21 = ~uVar9 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(local_250.AllocatorInstance.Data + (longlong)(int)uVar9 * 8) = uVar4;
      TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
    }
    pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&local_208->field_0x10;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    uVar18 = *(uint *)&local_208->field_0x28;
    uStack_21c = uVar20;
    local_218 = uVar20;
    if (uVar18 != 0) {
      puVar29 = *(uint **)&local_208->field_0x20;
      if (*(uint **)&local_208->field_0x20 == (uint *)0x0) {
        puVar29 = (uint *)pTVar28;
      }
      uVar9 = *puVar29;
      local_218 = 0;
      uVar20 = 0;
      while (uVar9 == 0) {
        lVar10 = (longlong)(int)uVar20;
        local_218 = local_218 + 0x20;
        uVar20 = uVar20 + 1;
        uStack_21c = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
        goto LAB_14ac5f14e;
        uVar9 = puVar29[lVar10 + 1];
      }
      uVar22 = -uVar9 & uVar9;
      uVar11 = (ulonglong)uVar22 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1b8 = (int)lVar10;
      uStack_21c = (local_218 - 1) + local_1b8;
      if ((int)uVar18 < (int)uStack_21c) {
        uStack_21c = uVar18;
      }
    }
LAB_14ac5f14e:
    uVar9 = *(uint *)&local_208->field_0x28;
    iStack_214 = iStack_1dc;
    iStack_210 = *(int *)&local_208->field_0x8 - *(int *)&local_208->field_0x34;
    uVar21 = uVar9 & 0xffffffe0;
    local_238 = local_208;
    TStack_128._padding_ = CONCAT44(uVar22,uVar20);
    uStack_220 = 0xffffffff;
    TStack_128.CurrentBitIndex = uStack_21c;
    TStack_128.UnvisitedBitMask = 0xffffffff;
    local_130 = local_208;
    iVar15 = (int)uVar9 >> 5;
    TStack_128._28_4_ = iStack_1dc;
    TStack_128.BaseBitIndex = local_218;
    uStack_108 = CONCAT44(uStack_20c,iStack_210);
    uStack_22c = uVar22;
    uStack_230 = uVar20;
    local_228 = (undefined1 *)pTVar28;
    local_1a8 = pTVar28;
    TStack_128.Array = pTVar28;
    local_270._0_4_ = uVar9;
    if ((((int)uVar9 < 0) || ((int)uVar18 < (int)uVar9)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar22 = *(uint *)&pTVar26->field_0x28;
    if (uVar9 != uVar22) {
      puVar25 = *(undefined1 **)&pTVar26->field_0x20;
      if (*(undefined1 **)&pTVar26->field_0x20 == (undefined1 *)0x0) {
        puVar25 = (undefined1 *)pTVar28;
      }
      uVar18 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        lVar10 = (longlong)iVar15;
        uVar21 = uVar21 + 0x20;
        iVar15 = iVar15 + 1;
        uVar9 = uVar22;
        local_270._0_4_ = uVar22;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14ac5f261;
        uVar18 = *(uint *)(puVar25 + lVar10 * 4 + 4);
      }
      uVar11 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1b4 = (int)lVar10;
      uVar9 = (uVar21 - 1) + local_1b4;
      local_270._0_4_ = uVar9;
      if ((int)uVar22 < (int)uVar9) {
        uVar9 = uVar22;
        local_270._0_4_ = uVar22;
      }
    }
LAB_14ac5f261:
    while( true ) {
      pTVar7 = local_130;
      if (*(int *)&local_130->field_0x8 - *(int *)&local_130->field_0x34 != (int)uStack_108) {
        local_286 = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMorphTargetMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_286);
      }
      if (((TStack_128.CurrentBitIndex == uVar9) && (TStack_128.Array == pTVar28)) &&
         (pTVar7 == pTVar26)) break;
      puVar29 = (uint *)((longlong)TStack_128.CurrentBitIndex * 0x30 + *(longlong *)pTVar7);
      uVar22 = *puVar29;
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar13 = local_98.Hash.SecondaryData;
        }
        iVar15 = *(int *)((longlong)FVar13 + (ulonglong)(local_98.HashSize - 1U & uVar22) * 4);
        while (iVar15 != -1) {
          lVar10 = local_98.Elements._0_8_ + (longlong)iVar15 * 0x28;
          if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar15 * 0x28) == uVar22) {
            if (lVar10 != 0) goto LAB_14ac5f348;
            break;
          }
          iVar15 = *(int *)(lVar10 + 0x20);
        }
      }
      local_1b0 = puVar29;
      TSet<TTuple<unsigned_int,FMappedMorphTargetMeshData>,TDefaultMapHashableKeyFuncs<unsigned_int,FMappedMorphTargetMeshData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                (&local_98,(uint)&local_240,
                 (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)uVar22,(bool *)&local_1b0);
      lVar10 = local_98.Elements._0_8_ + (longlong)local_240 * 0x28;
LAB_14ac5f348:
      uVar22 = puVar29[4];
      pFVar1 = (ForAnyElementType *)(lVar10 + 8);
      iVar15 = *(int *)(lVar10 + 0x10);
      piVar3 = (int *)(lVar10 + 0x10);
      if (iVar15 < (int)uVar22) {
        iVar19 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar22 - iVar15,pFVar1,piVar3,(int *)(lVar10 + 0x14));
        memset(pFVar1->Data + (longlong)iVar19 * 4,0,(longlong)(int)(uVar22 - iVar15) << 2);
      }
      else {
        if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
        }
        if ((int)uVar22 < iVar15) {
          uVar18 = iVar15 - uVar22;
          if (((int)(uVar22 | uVar18) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (uVar18 != 0) {
            iVar15 = (*piVar3 - uVar18) - uVar22;
            if (iVar15 != 0) {
              memmove(pFVar1->Data + (longlong)(int)uVar22 * 4,
                      pFVar1->Data + (longlong)(int)uVar22 * 4 + (longlong)(int)uVar18 * 4,
                      (longlong)iVar15 << 2);
            }
            *piVar3 = *piVar3 - uVar18;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,pFVar1,*piVar3,(int *)(lVar10 + 0x14));
          }
        }
      }
      uVar22 = 0;
      lVar27 = 0;
      if (0 < (int)puVar29[4]) {
        do {
          uVar18 = 0;
          if ((int)uVar22 < (int)puVar29[4]) {
            uVar18 = ~uVar22 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_250.AllocatorInstance.Data !=
              local_250.AllocatorInstance.Data + (longlong)local_250.ArrayNum * 8) {
            FVar17.Data = local_250.AllocatorInstance.Data;
            do {
              if (*(longlong *)FVar17.Data == *(longlong *)(*(longlong *)(puVar29 + 2) + lVar27 * 8)
                 ) {
                uVar16 = (undefined4)
                         ((longlong)FVar17.Data - (longlong)local_250.AllocatorInstance.Data >> 3);
                goto LAB_14ac5f4e7;
              }
              FVar17.Data = FVar17.Data + 8;
            } while (FVar17.Data !=
                     local_250.AllocatorInstance.Data + (longlong)local_250.ArrayNum * 8);
          }
          uVar16 = 0xffffffff;
LAB_14ac5f4e7:
          uVar18 = 0;
          if ((int)uVar22 < *piVar3) {
            uVar18 = ~uVar22 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar22 = uVar22 + 1;
          *(undefined4 *)(pFVar1->Data + lVar27 * 4) = uVar16;
          lVar27 = lVar27 + 1;
        } while ((int)uVar22 < (int)puVar29[4]);
      }
      *(uint **)(lVar10 + 0x18) = puVar29 + 6;
      TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      pTVar26 = local_208;
      pTVar28 = local_1a8;
      uVar9 = (uint)local_270;
    }
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    ReconstructMorphTargets
              (local_1a0,&local_250,
               (TMap<unsigned_int,FMappedMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMappedMorphTargetMeshData,0>_>
                *)&local_98,&local_268);
    uVar11 = local_268._8_8_ & 0xffffffff;
    local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_280.ArrayNum = 0;
    local_280.ArrayMax = 0;
    if (local_268.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    if (0 < local_268.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_268.ArrayNum,&local_280.AllocatorInstance,0,&local_280.ArrayMax);
      uVar11 = local_268._8_8_ & 0xffffffff;
    }
    uVar22 = (uint)uVar11;
    pFVar23 = (FMorphTargetLODModel *)
              (local_268.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x40);
    FVar17.Data = local_268.AllocatorInstance.Data;
    while( true ) {
      local_a8 = (uint)uVar11;
      if ((uint)uVar11 != uVar22) {
        local_285[0] = 0;
        `TCheckedPointerIterator<FMorphTargetLODModel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_285);
        local_a8 = local_268.ArrayNum;
      }
      if ((FMorphTargetLODModel *)FVar17.Data == pFVar23) break;
      local_258 = (FMorphTargetLODModel *)FVar17.Data;
      if (((local_280.AllocatorInstance.Data <= (FScriptContainerElement *)&local_258) &&
          ((FScriptContainerElement *)&local_258 <
           local_280.AllocatorInstance.Data + (longlong)local_280.ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_280.ArrayNum == local_280.ArrayMax) {
        local_280.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_280.AllocatorInstance,&local_280.ArrayMax);
      }
      lVar10 = (longlong)local_280.ArrayNum;
      FVar17.Data = FVar17.Data + 0x40;
      local_280.ArrayNum = local_280.ArrayNum + 1;
      *(FMorphTargetLODModel **)(local_280.AllocatorInstance.Data + lVar10 * 8) = local_258;
      uVar11 = local_268._8_8_ & 0xffffffff;
    }
    local_a4 = 0x80;
    uVar22 = local_a8 + 0x1f >> 5;
    local_c0.SecondaryData = (ForElementType<unsigned_int>)0x0;
    if (local_a8 + 0x1f >> 5 != 0) {
      if (4 < uVar22) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_c0,0,uVar22,4);
        local_a4 = uVar22 << 5;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_c0;
      if (local_c0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_c0.SecondaryData;
      }
      if (uVar22 < 9) {
        memset((void *)FVar12,-1,(ulonglong)uVar22 << 2);
      }
      else {
        memset((void *)FVar12,0xff,(ulonglong)uVar22 << 2);
      }
      uVar22 = local_a8 & 0x8000001f;
      if ((int)uVar22 < 0) {
        uVar22 = (uVar22 - 1 | 0xffffffe0) + 1;
      }
      if (uVar22 != 0) {
        FVar12 = (ForElementType<unsigned_int>)&local_c0;
        if (local_c0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_c0.SecondaryData;
        }
        puVar29 = (uint *)((longlong)FVar12 +
                          (longlong)((int)(local_a8 + ((int)local_a8 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar29 = *puVar29 & 0xffffffffU >> (0x20U - (char)uVar22 & 0x1f);
      }
    }
    lVar10 = (**(code **)(local_200->_padding_ + 0x328))(local_200,local_23c);
    FMorphTargetVertexInfoBuffers::InitMorphResourcesStreaming
              (&local_198->MorphTargetVertexInfoBuffers,&local_198->RenderSections,&local_280,
               (local_198->StaticVertexBuffers).StaticMeshVertexBuffer.NumVertices,
               *(float *)(lVar10 + 0xbc));
    if (local_c0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c0.SecondaryData);
    }
    if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.AllocatorInstance.Data);
    }
    DestructItems<FMorphTargetLODModel,int>
              ((FMorphTargetLODModel *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
    if ((FMorphTargetLODModel *)local_268.AllocatorInstance.Data != (FMorphTargetLODModel *)0x0) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMappedMorphTargetMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMappedMorphTargetMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupIndexBuffer @ 14ac60dc0

void __cdecl MutableMeshBufferUtils::SetupIndexBuffer(FMeshBufferSet *param_1)

{
  int local_res10 [2];
  int local_res18 [2];
  EMeshBufferFormat local_res20 [2];
  int local_18 [4];
  
  UE::Mutable::Private::FMeshBufferSet::SetBufferCount(param_1,1);
  local_18[1] = 1;
  local_18[0] = 0;
  local_res10[0] = 0;
  local_res20[0] = UInt32;
  local_res18[0] = 1;
  UE::Mutable::Private::FMeshBufferSet::SetBuffer
            (param_1,0,4,1,(EMeshBufferSemantic *)(local_18 + 1),local_18,local_res20,local_res18,
             local_res10,Uninitialized);
  return;
}

// SetupRenderSections @ 14ac60e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UnrealConversionUtils::SetupRenderSections
          (FSkeletalMeshLODRenderData *param_1,FMesh *param_2,
          TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> *param_3,
          TMap<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,0>_>
          *param_4,int param_5,
          TArray<FMutableSurfaceMetadata_const_*,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FMeshBufferSet *this;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 auStackY_158 [32];
  uint local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8 [2];
  TArray<FMutableSurfaceMetadata_const_*,TSizedDefaultAllocator<32>_> *local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  FSkeletalMeshLODRenderData *local_c8;
  longlong local_c0;
  FMesh *local_b8;
  longlong local_b0;
  undefined1 local_a8 [24];
  undefined8 uStack_90;
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  void *local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e0 = param_6;
  local_c8 = param_1;
  local_b8 = param_2;
  if ((param_2 == (FMesh *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMutableMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                         ,0xb5,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this = UE::Mutable::Private::FMesh::GetVertexBuffers(param_2);
  local_f4 = -1;
  local_f8 = -1;
  local_ec = 0;
  UE::Mutable::Private::FMeshBufferSet::FindChannel(this,BoneIndices,0,&local_f4,&local_f8);
  if ((-1 < local_f4) || (-1 < local_f8)) {
    UE::Mutable::Private::FMeshBufferSet::GetChannel
              (this,local_f4,local_f8,(EMeshBufferSemantic *)0x0,(int *)0x0,(EMeshBufferFormat *)0x0
               ,&local_ec,(int *)0x0);
  }
  iVar9 = UE::Mutable::Private::FMesh::GetSurfaceCount(param_2);
  local_fc = 0;
  if (0 < iVar9) {
    local_b0 = (longlong)iVar9;
    local_d0 = 0;
    local_c0 = 0;
    do {
      lVar6 = local_c0;
      lVar15 = local_d0;
      uVar11 = local_fc;
      bVar7 = -1 < CpuChannel->Enabled;
      if (bVar7) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId199,"Mutable_SetupRenderSections",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                   ,199);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId199);
      }
      UE::Mutable::Private::FMesh::GetSurface
                (param_2,uVar11,&local_d4,local_e8,&local_d8,&local_f0,(int *)&local_104,
                 (int *)&local_100);
      uVar14 = ~uVar11 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar11 < (local_c8->RenderSections).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_7c = 0x80;
      local_a8._16_8_ = 0;
      uStack_90 = 0;
      local_78 = 0xffffffff;
      pFVar4 = (local_c8->RenderSections).AllocatorInstance.Data;
      local_70 = 0;
      local_60 = 0;
      local_a8._0_8_ = (FScriptContainerElement *)0x0;
      local_a8._8_8_ = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_74 = 0;
      local_68 = (void *)0x0;
      FDuplicatedVerticesBuffer::Init
                ((FDuplicatedVerticesBuffer *)(pFVar4 + lVar6 + 0x68),1,
                 (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                  *)local_a8);
      local_60 = local_60 & 0xffffffff00000000;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_a8,0,local_a8._8_4_);
      iVar9 = SUB84(local_a8._8_8_,4);
      local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
      if (iVar9 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      local_80 = 0;
      if (0x80 < local_7c) {
        local_7c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      if ((local_e8[0] == 0) || (local_f0 == 0)) {
        pFVar4[lVar6 + 0x110] = (FScriptContainerElement)0x1;
      }
      else {
        *(int *)(pFVar4 + lVar6 + 4) = local_d8;
        *(int *)(pFVar4 + lVar6 + 8) =
             local_f0 / 3 + (local_f0 >> 0x1f) +
             (int)(((longlong)local_f0 / 3 + ((longlong)local_f0 >> 0x3f) & 0xffffffffU) >> 0x1f);
        *(int *)(pFVar4 + lVar6 + 0x10) = local_d4;
        *(int *)(pFVar4 + lVar6 + 0x4c) = local_ec;
        *(int *)(pFVar4 + lVar6 + 0x48) = local_e8[0];
        if ((local_e0->ArrayNum != (local_b8->Surfaces).ArrayNum) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("SurfacesMetadata.Num() == InMutableMesh->Surfaces.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealConversionUtils.cpp"
                               ,0xe0,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar11 < local_e0->ArrayNum) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)((local_e0->AllocatorInstance).Data + lVar15 * 8) != 0) {
          uVar10 = 0;
          if ((int)uVar11 < local_e0->ArrayNum) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4[lVar6 + 0xd] =
               *(FScriptContainerElement *)
                (*(longlong *)((local_e0->AllocatorInstance).Data + lVar15 * 8) + 8);
        }
        pFVar1 = pFVar4 + lVar6 + 0x38;
        local_104 = local_104 + param_5;
        if ((int)local_100 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_100);
        }
        pFVar2 = pFVar4 + lVar6 + 0x44;
        if (*(int *)(pFVar4 + lVar6 + 0x44) < (int)local_100) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_100,(ForAnyElementType *)pFVar1,*(int *)(pFVar4 + lVar6 + 0x40),
                     (int *)pFVar2);
        }
        iVar9 = 0;
        uVar11 = local_fc;
        lVar15 = local_d0;
        if (0 < (int)local_100) {
          do {
            if ((-1 < (int)local_104) && ((int)local_104 < param_3->ArrayNum)) {
              lVar15 = (longlong)(int)local_104;
              uVar11 = 0;
              if ((int)local_104 < param_3->ArrayNum) {
                uVar11 = ~local_104 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar11 = *(uint *)((param_3->AllocatorInstance).Data + lVar15 * 4);
              if (*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34) {
                puVar16 = &param_4->field_0x38;
                if (*(undefined1 **)&param_4->field_0x40 != (undefined1 *)0x0) {
                  puVar16 = *(undefined1 **)&param_4->field_0x40;
                }
                iVar12 = *(int *)(puVar16 +
                                 (ulonglong)(*(int *)&param_4->field_0x48 - 1U & uVar11) * 4);
                if (iVar12 != -1) {
                  do {
                    lVar15 = *(longlong *)param_4 + (longlong)iVar12 * 0x18;
                    if (*(uint *)(*(longlong *)param_4 + (longlong)iVar12 * 0x18) == uVar11) {
                      lVar13 = lVar15 + 4;
                      if (lVar15 == 0) {
                        lVar13 = 0;
                      }
                      if (lVar13 != 0) {
                        pFVar3 = (FScriptContainerElement *)(lVar13 + 8);
                        if (((*(FScriptContainerElement **)&pFVar1->field_0x0 <= pFVar3) &&
                            (pFVar3 < *(FScriptContainerElement **)&pFVar1->field_0x0 +
                                      (longlong)*(int *)pFVar2 * 2)) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar8)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        iVar12 = *(int *)(pFVar4 + lVar6 + 0x40);
                        if (iVar12 == *(int *)pFVar2) {
                          iVar12 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x202,(ForAnyElementType *)pFVar1,(int *)pFVar2);
                        }
                        *(int *)(pFVar4 + lVar6 + 0x40) = iVar12 + 1;
                        *(undefined2 *)
                         (*(FScriptContainerElement **)&pFVar1->field_0x0 + (longlong)iVar12 * 2) =
                             *(undefined2 *)pFVar3;
                      }
                      break;
                    }
                    iVar12 = *(int *)(lVar15 + 0x10);
                  } while (iVar12 != -1);
                }
              }
            }
            local_104 = local_104 + 1;
            iVar9 = iVar9 + 1;
            uVar11 = local_fc;
            lVar15 = local_d0;
          } while (iVar9 < (int)local_100);
        }
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      local_fc = uVar11 + 1;
      local_c0 = local_c0 + 0x118;
      local_d0 = lVar15 + 1;
      param_2 = local_b8;
    } while (local_d0 < local_b0);
  }
  return;
}

// SetupSkinBuffer @ 14ac614e0

void __cdecl
MutableMeshBufferUtils::SetupSkinBuffer
          (int *param_1,int *param_2,int *param_3,int *param_4,FMeshBufferSet *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  EMeshBufferFormat local_res10 [4];
  int local_res20;
  int local_res24;
  int local_48 [4];
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  iVar3 = *param_4;
  local_48[2] = 9;
  local_48[3] = 8;
  local_48[0] = 0;
  local_48[1] = 0;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    local_res10[0] = UInt8;
  }
  else if (iVar1 == 2) {
    local_res10[0] = UInt16;
  }
  else if (iVar1 == 4) {
    local_res10[0] = UInt32;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableMeshBufferUtils.cpp"
                       ,0x67,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res10[0] = None;
  }
  iVar4 = *param_3;
  if ((iVar4 == 0) || (iVar4 == 1)) {
    local_res10[1] = 9;
  }
  else if (iVar4 == 2) {
    local_res10[1] = 10;
  }
  else if (iVar4 == 4) {
    local_res10[1] = 0xb;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableMeshBufferUtils.cpp"
                       ,0x77,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res10[1] = 0;
  }
  local_res20 = *param_4;
  local_res10[3] = local_res20 * *param_2;
  local_res10[2] = 0;
  local_res24 = local_res20;
  UE::Mutable::Private::FMeshBufferSet::SetBuffer
            (param_5,*param_1,(iVar1 + iVar2) * iVar3,2,(EMeshBufferSemantic *)(local_48 + 2),
             local_48,local_res10,&local_res20,(int *)(local_res10 + 2),Uninitialized);
  return;
}

// SetupSkinWeightProfileBuffer @ 14ac616a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
MutableMeshBufferUtils::SetupSkinWeightProfileBuffer
          (int *param_1,int *param_2,int *param_3,int *param_4,int param_5,FMeshBufferSet *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auStackY_e8 [32];
  EMeshBufferFormat local_98 [4];
  int local_88 [4];
  int local_78;
  int local_74;
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  EMeshBufferSemantic local_58 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  iVar1 = *param_2;
  iVar2 = *param_4;
  local_58[0] = AltSkinWeight;
  local_58[1] = 9;
  local_58[2] = 8;
  local_68 = param_5;
  local_64 = param_5;
  local_60 = param_5;
  local_98[0] = Int32;
  if (iVar1 == 1) {
    local_98[1] = 3;
  }
  else if (iVar1 == 2) {
    local_98[1] = 4;
  }
  else if (iVar1 == 4) {
    local_98[1] = 5;
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableMeshBufferUtils.cpp"
                       ,200,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_98[1] = 0;
  }
  iVar3 = *param_3;
  if (iVar3 == 1) {
    local_98[2] = 9;
  }
  else if (iVar3 == 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableMeshBufferUtils.cpp"
                       ,0xd3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_98[2] = 10;
  }
  else if (iVar3 == 4) {
    local_98[2] = 0xb;
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableMeshBufferUtils.cpp"
                       ,0xdb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_98[2] = 0;
  }
  local_74 = *param_4;
  local_78 = 1;
  local_88[0] = 0;
  local_88[2] = local_74 * *param_2 + 4;
  local_88[1] = 4;
  local_70 = local_74;
  UE::Mutable::Private::FMeshBufferSet::SetBuffer
            (param_6,*param_1,(iVar1 + 1) * iVar2 + 4,3,local_58,&local_68,local_98,&local_78,
             local_88,Uninitialized);
  return;
}

// SetupTangentBuffer @ 14ac61890

void __cdecl MutableMeshBufferUtils::SetupTangentBuffer(int *param_1,FMeshBufferSet *param_2)

{
  int local_res18 [4];
  EMeshBufferFormat local_28 [4];
  EMeshBufferSemantic local_18 [6];
  
  local_18[0] = Tangent;
  local_18[1] = 3;
  local_28[2] = None;
  local_28[3] = None;
  local_res18[0] = 0;
  local_28[0] = PackedDirS8;
  local_28[1] = 0x12;
  local_res18[2] = 4;
  local_res18[3] = 4;
  local_res18[1] = 4;
  UE::Mutable::Private::FMeshBufferSet::SetBuffer
            (param_2,*param_1,8,2,local_18,(int *)(local_28 + 2),local_28,local_res18 + 2,
             local_res18,Uninitialized);
  return;
}

// SetupTexCoordinatesBuffer @ 14ac61930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
MutableMeshBufferUtils::SetupTexCoordinatesBuffer
          (int *param_1,int *param_2,bool param_3,FMeshBufferSet *param_4,int *param_5)

{
  int *piVar1;
  EMeshBufferFormat *pEVar2;
  undefined1 auStackY_d8 [32];
  EMeshBufferFormat local_88 [10];
  int local_60;
  int local_5c;
  EMeshBufferSemantic local_58 [4];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_88[9] = (uint)param_3 * 4 + 4;
  local_60 = local_88[9] * 2;
  local_58[0] = TexCoords;
  local_5c = local_88[9] * 3;
  pEVar2 = local_88;
  if (!param_3) {
    pEVar2 = local_88 + 4;
  }
  local_58[1] = 6;
  local_58[2] = 6;
  local_38 = ___xmm_00000002000000020000000200000002;
  uStack_30 = _UNK_15066df68;
  local_58[3] = 6;
  piVar1 = (int *)&local_48;
  if (param_5 != (int *)0x0) {
    piVar1 = param_5;
  }
  local_88[8] = 0;
  local_48 = __xmm_00000003000000020000000100000000;
  uStack_40 = _UNK_150631e08;
  local_88[0] = Float32;
  local_88[1] = 2;
  local_88[2] = 2;
  local_88[3] = 2;
  local_88[4] = 1;
  local_88[5] = 1;
  local_88[6] = 1;
  local_88[7] = 1;
  UE::Mutable::Private::FMeshBufferSet::SetBuffer
            (param_4,*param_1,*param_2 * local_88[9],*param_2,local_58,piVar1,pEVar2,
             (int *)&local_38,(int *)(local_88 + 8),Uninitialized);
  return;
}

// SetupVertexColorBuffer @ 14ac61a70

void __cdecl MutableMeshBufferUtils::SetupVertexColorBuffer(int *param_1,FMeshBufferSet *param_2)

{
  int local_res18 [2];
  int local_res20 [2];
  EMeshBufferFormat local_18 [2];
  EMeshBufferSemantic local_10 [4];
  
  local_10[0] = Color;
  local_18[0] = NUInt8;
  local_18[1] = 0;
  local_res18[0] = 0;
  local_res20[0] = 4;
  UE::Mutable::Private::FMeshBufferSet::SetBuffer
            (param_2,*param_1,4,1,local_10,(int *)(local_18 + 1),local_18,local_res20,local_res18,
             Uninitialized);
  return;
}

// SetupVertexPositionsBuffer @ 14ac61af0

void __cdecl
MutableMeshBufferUtils::SetupVertexPositionsBuffer(int *param_1,FMeshBufferSet *param_2)

{
  int local_res18 [2];
  int local_res20 [2];
  EMeshBufferFormat local_18 [2];
  EMeshBufferSemantic local_10 [4];
  
  local_10[0] = Position;
  local_18[0] = Float32;
  local_18[1] = 0;
  local_res18[0] = 0;
  local_res20[0] = 3;
  UE::Mutable::Private::FMeshBufferSet::SetBuffer
            (param_2,*param_1,0xc,1,local_10,(int *)(local_18 + 1),local_18,local_res20,local_res18,
             Uninitialized);
  return;
}

// UpdateSkeletalMeshLODRenderDataBuffersSize @ 14ac62a50

void __cdecl
UnrealConversionUtils::UpdateSkeletalMeshLODRenderDataBuffersSize
          (FSkeletalMeshLODRenderData *param_1)

{
  FRawStaticIndexBuffer16or32Interface *pFVar1;
  uint uVar2;
  ulong64 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_1->StaticVertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0) {
    iVar4 = (param_1->StaticVertexBuffers).PositionVertexBuffer.NumVertices *
            (param_1->StaticVertexBuffers).PositionVertexBuffer.Stride;
  }
  param_1->BuffersSize =
       ((param_1->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
        (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordStride +
       (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsStride) *
       (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.NumVertices + iVar4;
  uVar2 = FColorVertexBuffer::GetAllocatedSize(&(param_1->StaticVertexBuffers).ColorVertexBuffer);
  param_1->BuffersSize =
       param_1->BuffersSize +
       (param_1->ClothVertexBuffer).NumVertices * (param_1->ClothVertexBuffer).Stride + uVar2 +
       ((uint)((param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneWeight != false) +
       ((param_1->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex != false) + 2) *
       (param_1->SkinWeightVertexBuffer).DataVertexBuffer.NumBoneWeights +
       (param_1->SkinWeightVertexBuffer).LookupVertexBuffer.NumVertices * 4;
  uVar3 = FSkinWeightProfilesData::GetResourcesSize(&param_1->SkinWeightProfilesData);
  pFVar1 = (param_1->MultiSizeIndexContainer).IndexBuffer;
  param_1->BuffersSize =
       param_1->BuffersSize +
       (int)uVar3 + (int)(param_1->MorphTargetVertexInfoBuffers).MorphData._padding_ * 4;
  if (pFVar1 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    iVar4 = (**(code **)(pFVar1->_padding_ + 0x88))();
    param_1->BuffersSize = param_1->BuffersSize + iVar4;
  }
  return;
}

// Z_Construct_UScriptStruct_FMultilayerProjectorLayer @ 14ac62ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMultilayerProjectorLayer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMultilayerProjectorLayer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMultilayerProjectorLayer.InnerSingleton,
               &Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMultilayerProjectorLayer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMultilayerProjectorLayer.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// BakedResourcePrefix'' @ 1504228a0

void __cdecl `dynamic_atexit_destructor_for_'FBakingConfiguration::BakedResourcePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data;
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FBakingConfiguration::BakedResourcePrefix.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// DEFAULT_PARAMETER_VALUE_NAME'' @ 1504228c0

void __cdecl
`dynamic_atexit_destructor_for_'FCustomizableObjectBoolParameterValue::
DEFAULT_PARAMETER_VALUE_NAME__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.
               AllocatorInstance.Data;
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FCustomizableObjectBoolParameterValue::DEFAULT_PARAMETER_VALUE_NAME.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Mutex'' @ 1504228e0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504228e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamPriority'' @ 150422900

void __cdecl _dynamic_atexit_destructor_for__CVarStreamPriority__(void)

{
  CVarStreamPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamPriority);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150422920

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150422950

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150422980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<FIndexLengthPair,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_155245c18)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'LogMuscleActivationConstraint'' @ 1504229b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMuscleActivationConstraint);
  return;
}

