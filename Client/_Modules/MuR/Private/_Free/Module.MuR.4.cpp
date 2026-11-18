// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 173

// Mutex'' @ 1411d56d0

void __cdecl `dynamic_initializer_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex,4000);
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__);
  return;
}

// `dynamic_initializer_for_'CVarClearImageDescCache'' @ 1411d5700

void __cdecl UE::Mutable::Private::_dynamic_initializer_for__CVarClearImageDescCache__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarClearImageDescCache,L"mutable.ClearImageDescCache",local_res8,
             L"If different than 0, clear the image desc cache at every image.",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarClearImageDescCache__);
  return;
}

// `dynamic_initializer_for_'CVarEnableDetailedMemoryBudgetExceededLogging'' @ 1411d5750

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVarEnableDetailedMemoryBudgetExceededLogging__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableDetailedMemoryBudgetExceededLogging,
             L"mutable.EnableDetailedMemoryBudgetExceededLogging",
             &bEnableDetailedMemoryBudgetExceededLogging,
             L"If set to true, enables a more detailed logging when memory budget is exceeded. Only for Debug and Development builds."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableDetailedMemoryBudgetExceededLogging__);
  return;
}

// `dynamic_initializer_for_'LogMuscleActivationConstraint'' @ 1411d57a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMuscleActivationConstraint,L"LogMuscleActivationConstraint",Log
             ,All);
  atexit(_dynamic_atexit_destructor_for__LogMuscleActivationConstraint__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1411d57e0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1411d5870

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1411d5900

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1411d5990

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1411d5a20

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1411d5ab0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1411d5b40

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1411d5bd0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1411d5c60

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1411d5cf0

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

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotated'' @ 1411d5d80

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

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedDet'' @ 1411d5e10

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

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedPolar'' @ 1411d5ea0

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

// `dynamic_initializer_for_'StatPtr_STAT_MutableCurrentMemory'' @ 1411d5f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableCurrentMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableCurrentMemory ==
      (FThreadSafeStaticStat<FStat_STAT_MutableCurrentMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableCurrentMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableCurrentMemory,*pFVar1,
               L"Current Memory","STATGROUP_MutableCore","STATCAT_Advanced",L"MutableCore",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableWorkingMemory'' @ 1411d5fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableWorkingMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableWorkingMemory ==
      (FThreadSafeStaticStat<FStat_STAT_MutableWorkingMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableWorkingMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableWorkingMemory,*pFVar1,
               L"Working Memory","STATGROUP_MutableCore","STATCAT_Advanced",L"MutableCore",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableWorkingMemoryExcess'' @ 1411d6050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableWorkingMemoryExcess__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableWorkingMemoryExcess ==
      (FThreadSafeStaticStat<FStat_STAT_MutableWorkingMemoryExcess>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableWorkingMemoryExcess");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableWorkingMemoryExcess,*pFVar1,
               L"Working Memory Excess","STATGROUP_MutableCore","STATCAT_Advanced",L"MutableCore",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBD_StiffnessApplyValues'' @ 1411d60e0

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

// `dynamic_initializer_for_'StatPtr_STAT_PBD_WeightMapApplyValues'' @ 1411d6170

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Mutable_Source_MutableRuntime_Internal_MuR_System_h__Script_MutableRuntime_3577708678'' @ 1411d6200

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Mutable_Source_MutableRuntime_Internal_MuR_System_h__Script_MutableRuntime_3577708678__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MutableRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Mutable_Source_MutableRuntime_Internal_MuR_System_h__Script_MutableRuntime_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_LiveInstances'' @ 1411d6250

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_LiveInstances__(void)

{
  __GTraceCounterMutableRuntime_LiveInstances.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/LiveInstances",TraceCounterType_Int,TraceCounterDisplayHint_None)
  ;
  LOCK();
  __GTraceCounterMutableRuntime_LiveInstances.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_LiveInstances__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemBudget'' @ 1411d6290

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemBudget__(void)

{
  __GTraceCounterMutableRuntime_MemBudget.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemBudget",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemBudget.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemBudget__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemCache'' @ 1411d62d0

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemCache__(void)

{
  __GTraceCounterMutableRuntime_MemCache.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemCache",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemCache.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemCache__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemImage'' @ 1411d6310

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemImage__(void)

{
  __GTraceCounterMutableRuntime_MemImage.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemImage",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemImage.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemImage__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemInternal'' @ 1411d6350

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemInternal__(void)

{
  __GTraceCounterMutableRuntime_MemInternal.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemInternal",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemInternal.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemInternal__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemMesh'' @ 1411d6390

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemMesh__(void)

{
  __GTraceCounterMutableRuntime_MemMesh.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemMesh",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemMesh.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemMesh__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemPool'' @ 1411d63d0

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemPool__(void)

{
  __GTraceCounterMutableRuntime_MemPool.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemPool",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemPool.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemPool__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemRom'' @ 1411d6410

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemRom__(void)

{
  __GTraceCounterMutableRuntime_MemRom.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemRom",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemRom.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemRom__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemStream'' @ 1411d6450

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemStream__(void)

{
  __GTraceCounterMutableRuntime_MemStream.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemStream",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemStream.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemStream__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemTemp'' @ 1411d6490

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemTemp__(void)

{
  __GTraceCounterMutableRuntime_MemTemp.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemTemp",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemTemp.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemTemp__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_MemTotal'' @ 1411d64d0

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_MemTotal__(void)

{
  __GTraceCounterMutableRuntime_MemTotal.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/MemTotal",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_MemTotal.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemTotal__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_Updates'' @ 1411d6510

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_Updates__(void)

{
  __GTraceCounterMutableRuntime_Updates.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/Updates",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_Updates.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_Updates__);
  return;
}

// ETextureCompressionStrategy_StaticEnum @ 14ab55b10

UEnum * __cdecl ETextureCompressionStrategy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureCompressionStrategy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MutableRuntime();
    Z_Registration_Info_UEnum_ETextureCompressionStrategy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy,
                       (UObject *)pUVar1,L"ETextureCompressionStrategy");
  }
  return Z_Registration_Info_UEnum_ETextureCompressionStrategy.OuterSingleton;
}

// TVector<float>,TSizedDefaultAllocator<32>_> @ 14ab55d70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Math::TVector<float>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar6 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xc;
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 4,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 8,4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res8[0]);
  }
  return;
}

// FBoxBody> @ 14ab55e80

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FBoxBody>
          (FInputArchive *param_1,FBoxBody *param_2)

{
  Private::operator>>(param_1,(FString *)param_2);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->_padding_,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Position,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Position).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Position).field0_0x0 + 8),4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Orientation,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&(param_2->Orientation).Y,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&(param_2->Orientation).Z,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&(param_2->Orientation).W,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Size,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Size).field0_0x0 + 4),4);
                    /* WARNING: Could not recover jumptable at 0x00014ab55f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Size).field0_0x0 + 8),4);
  return;
}

// FBoxBody,TSizedDefaultAllocator<32>_> @ 14ab55f90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FBoxBody_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50;
      Private::operator>>(param_1,(FString *)pFVar6);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x10,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x18,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x1c,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x20,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x30,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x34,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x38,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x3c,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x40,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x44,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x48,4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FConvexBody> @ 14ab56150

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FConvexBody>
          (FInputArchive *param_1,FConvexBody *param_2)

{
  FConvexBody::Unserialise(param_2,param_1);
  return;
}

// FConvexBody,TSizedDefaultAllocator<32>_> @ 14ab56170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FConvexBody_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FConvexBody::Unserialise
                ((FConvexBody *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x70),
                 param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FPhysicsBodyAggregate> @ 14ab56230

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FPhysicsBodyAggregate>
          (FInputArchive *param_1,FPhysicsBodyAggregate *param_2)

{
  FPhysicsBodyAggregate::Unserialise(param_2,param_1);
  return;
}

// FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> @ 14ab56250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::
FPhysicsBodyAggregate_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FPhysicsBodyAggregate::Unserialise
                ((FPhysicsBodyAggregate *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50),param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FSphereBody> @ 14ab56320

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FSphereBody>
          (FInputArchive *param_1,FSphereBody *param_2)

{
  Private::operator>>(param_1,(FString *)param_2);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->_padding_,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Position,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Position).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Position).field0_0x0 + 8),4);
                    /* WARNING: Could not recover jumptable at 0x00014ab563aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Radius,4);
  return;
}

// FSphereBody,TSizedDefaultAllocator<32>_> @ 14ab563c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FSphereBody_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar6 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x28;
      Private::operator>>(param_1,(FString *)pFVar1);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x10,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x18,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x1c,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x20,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x24,4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res8[0]);
  }
  return;
}

// FSphylBody> @ 14ab56500

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FSphylBody>
          (FInputArchive *param_1,FSphylBody *param_2)

{
  Private::operator>>(param_1,(FString *)param_2);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->field_0x10,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Position,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Position).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Position).field0_0x0 + 8),4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Orientation,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&(param_2->Orientation).Y,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&(param_2->Orientation).Z,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&(param_2->Orientation).W,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Radius,4);
                    /* WARNING: Could not recover jumptable at 0x00014ab565ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Length,4);
  return;
}

// FSphylBody,TSizedDefaultAllocator<32>_> @ 14ab56600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FSphylBody_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50;
      Private::operator>>(param_1,(FString *)pFVar6);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x10,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x18,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x1c,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x20,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x30,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x34,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x38,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x3c,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x40,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x44,4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FTaperedCapsuleBody> @ 14ab567b0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FTaperedCapsuleBody>
          (FInputArchive *param_1,FTaperedCapsuleBody *param_2)

{
  Private::operator>>(param_1,(FString *)param_2);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->_padding_,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Position,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Position).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(param_2->Position).field0_0x0 + 8),4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Orientation,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&(param_2->Orientation).Y,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&(param_2->Orientation).Z,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&(param_2->Orientation).W,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Radius0,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Radius1,4);
                    /* WARNING: Could not recover jumptable at 0x00014ab568b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&param_2->Length,4);
  return;
}

// FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> @ 14ab568c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::
FTaperedCapsuleBody_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50;
      Private::operator>>(param_1,(FString *)pFVar6);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x10,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x18,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x1c,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x20,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x30,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x34,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x38,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x3c,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x40,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x44,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar6 + 0x48,4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_> @ 14ab56dd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::
operator>><TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE
::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_0>_>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(param_2,local_res8[0],Default);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      operator>><TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::
      TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
      FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
      ::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
      TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
      TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>_>_>
                (param_1,(TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
                          *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_> @ 14ab571c0

void __cdecl
UE::Mutable::Private::operator>><TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::
Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar5 = local_res8[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res8[0]) {
    iVar6 = local_res8[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,0x10,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x20,iVar6);
  }
  else {
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    if ((int)local_res8[0] < iVar6) {
      uVar8 = iVar6 - local_res8[0];
      if (((int)(uVar8 | local_res8[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      operator>><bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE
      ::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
      ::
      FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE
      ::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>_>
                (param_1,(TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                          *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x20));
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res8[0]);
  }
  return;
}

// FPhysicsBody> @ 14ab57360

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FPhysicsBody>
          (FInputArchive *param_1,FPhysicsBody *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  char local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,param_2,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_>::SetNum
            (&param_2->Bodies,local_res10[0],Default);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (param_2->Bodies).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FPhysicsBodyAggregate::Unserialise
                ((FPhysicsBodyAggregate *)
                 ((param_2->Bodies).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50),param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  FBoneName_TSizedDefaultAllocator<32>_>(param_1,&param_2->BoneIds);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&param_2->BodiesCustomIds,local_res18[0],Default);
  if (local_res18[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(param_2->BodiesCustomIds).AllocatorInstance.Data,
               (ulonglong)local_res18[0] << 2);
  }
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,1);
  param_2->bBodiesModified = local_res8[0] != '\0';
  return;
}

// FSkeleton> @ 14ab574a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FSkeleton>
          (FInputArchive *param_1,FSkeleton *param_2)

{
  uint local_res8 [2];
  
  FBoneName_TSizedDefaultAllocator<32>_>(param_1,&param_2->BoneIds);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<short,TSizedDefaultAllocator<32>_>::SetNum(&param_2->BoneParents,local_res8[0],Default);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(param_2->BoneParents).AllocatorInstance.Data,
               (ulonglong)local_res8[0] * 2);
  }
  return;
}

// Private> @ 14ab57510

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FParameters::Private>
          (FInputArchive *param_1,Private *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  operator>><TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::
  TIndirectObject<UE::Mutable::Private::
  FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
  FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
  ::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
  TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
  TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
  FInternalReferenceCollectorReferencerNameProvider>_>_TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Values);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&param_2->MultiValues,local_res8[0],Default);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (param_2->MultiValues).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      operator>><TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::
      TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
      FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
      ::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
      TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
      TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>_>_>
                (param_1,(TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
                          *)((param_2->MultiValues).AllocatorInstance.Data +
                            (longlong)(int)uVar4 * 0x50));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// TVector<float>,TSizedDefaultAllocator<32>_> @ 14ab575f0

void __cdecl
UE::Mutable::Private::operator<<<UE::Math::TVector<float>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  local_res8[0] = param_2->ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar6 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xc;
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 4,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 8,4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res8[0]);
  }
  return;
}

// FBoxBody,TSizedDefaultAllocator<32>_> @ 14ab57710

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FBoxBody_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  local_res8[0] = param_2->ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      FBoxBody::Serialise((FBoxBody *)
                          ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50),param_1)
      ;
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FConvexBody,TSizedDefaultAllocator<32>_> @ 14ab57800

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FConvexBody_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  local_res8[0] = param_2->ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      FConvexBody::Serialise
                ((FConvexBody *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x70),
                 param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> @ 14ab578e0

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::
FPhysicsBodyAggregate_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  local_res8[0] = param_2->ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      FPhysicsBodyAggregate::Serialise
                ((FPhysicsBodyAggregate *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50),param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FSphereBody,TSizedDefaultAllocator<32>_> @ 14ab57a70

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FSphereBody_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  
  local_res8[0] = param_2->ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar6 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x28;
      local_res10[0] = *(uint *)(pFVar1 + 8);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
      if (local_res10[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)pFVar1,(ulonglong)local_res10[0] * 2);
      }
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x10,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x18,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x1c,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x20,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 0x24,4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res8[0]);
  }
  return;
}

// FSphylBody,TSizedDefaultAllocator<32>_> @ 14ab57bf0

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FSphylBody_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  local_res8[0] = param_2->ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      FSphylBody::Serialise
                ((FSphylBody *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50),
                 param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> @ 14ab57ce0

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::
FTaperedCapsuleBody_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  local_res8[0] = param_2->ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      FTaperedCapsuleBody::Serialise
                ((FTaperedCapsuleBody *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50),param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_> @ 14ab58060

void __cdecl
UE::Mutable::Private::
operator<<<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE
::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_0>_>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  local_res8[0] = param_2->ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      operator<<<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::
      TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
      FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
      ::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
      TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
      TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>_>_>
                (param_1,(TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
                          *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x50));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_> @ 14ab58250

void __cdecl
UE::Mutable::Private::operator<<<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::
Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar6;
  FScriptContainerElement local_res8 [8];
  uint local_res10 [2];
  <lambda_1> local_res18 [2];
  
  local_res10[0] = param_2->ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      pTVar6 = (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x20);
      local_res8[0] = (FScriptContainerElement)pTVar6->TypeIndex;
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,1);
      local_res18[0].Ar = param_1;
      (*switchD_14aa91dff::switchdataD_152295830[pTVar6->TypeIndex])(local_res18,pTVar6);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// operator<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_> @ 14ab58530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>
* __thiscall
TKeyInitializer<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::
operator<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>
          (TKeyInitializer<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this,
          TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>
  *pTVar5;
  ulonglong uVar6;
  undefined1 auStackY_78 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_38[0] = 0;
  local_28 = 0;
  pTVar2 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  iVar1 = pTVar2->ArrayNum;
  _Src = (pTVar2->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
               (int *)&__return_storage_ptr__->field_0xc);
    memcpy(*(void **)__return_storage_ptr__,_Src,(longlong)iVar1 << 2);
  }
  uVar6 = (ulonglong)local_28;
  __return_storage_ptr__->field_0x20 = local_28;
  if (9 < local_28) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar6] ==
      UE::Core::Private::TMoveConstructorCaller<bool>::Construct) {
    __return_storage_ptr__->field_0x10 = local_38[0];
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar6])(&__return_storage_ptr__->field_0x10,local_38);
  }
  uVar6 = (ulonglong)local_28;
  if (9 < uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  if (`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar6] != UE::Core::Private::TDestructorCaller<bool>::Destruct) {
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar6])(local_38);
  }
  return __return_storage_ptr__;
}

// ConstructItems<UE::Mutable::Private::FPhysicsBodyAggregate,UE::Mutable::Private::FPhysicsBodyAggregate,int> @ 14ab59c30

void __cdecl
ConstructItems<UE::Mutable::Private::FPhysicsBodyAggregate,UE::Mutable::Private::FPhysicsBodyAggregate,int>
          (void *param_1,FPhysicsBodyAggregate *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FSphereBody *pFVar3;
  FBoxBody *pFVar4;
  FConvexBody *pFVar5;
  FSphylBody *pFVar6;
  FTaperedCapsuleBody *pFVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    piVar8 = (int *)((longlong)param_1 + 0x28);
    lVar10 = (longlong)param_1 + (-0x28 - (longlong)param_2);
    piVar9 = &(param_2->Convex).ArrayNum;
    do {
      *(undefined8 *)(lVar10 + (longlong)piVar9) = 0;
      pFVar1 = (ForAnyElementType *)(lVar10 + (longlong)piVar9);
      iVar2 = piVar9[-8];
      pFVar3 = *(FSphereBody **)(piVar9 + -10);
      piVar8[-8] = iVar2;
      if (iVar2 == 0) {
        piVar8[-7] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar2,0,pFVar1,iVar2,piVar8 + -7);
        ConstructItems<UE::Mutable::Private::FSphereBody,UE::Mutable::Private::FSphereBody,int>
                  (pFVar1->Data,pFVar3,iVar2);
      }
      piVar8[-6] = 0;
      piVar8[-5] = 0;
      iVar2 = piVar9[-4];
      pFVar4 = *(FBoxBody **)(piVar9 + -6);
      piVar8[-4] = iVar2;
      if (iVar2 == 0) {
        piVar8[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,iVar2,0,(ForAnyElementType *)(piVar8 + -6),iVar2,piVar8 + -3);
        ConstructItems<UE::Mutable::Private::FBoxBody,UE::Mutable::Private::FBoxBody,int>
                  (((ForAnyElementType *)(piVar8 + -6))->Data,pFVar4,iVar2);
      }
      piVar8[-2] = 0;
      piVar8[-1] = 0;
      iVar2 = *piVar9;
      pFVar5 = (FConvexBody *)
               (((TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *)
                (piVar9 + -2))->AllocatorInstance).Data;
      *piVar8 = iVar2;
      if (iVar2 == 0) {
        piVar8[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,iVar2,0,(ForAnyElementType *)(piVar8 + -2),iVar2,piVar8 + 1);
        ConstructItems<UE::Mutable::Private::FConvexBody,UE::Mutable::Private::FConvexBody,int>
                  (((ForAnyElementType *)(piVar8 + -2))->Data,pFVar5,iVar2);
      }
      piVar8[2] = 0;
      piVar8[3] = 0;
      iVar2 = piVar9[4];
      pFVar6 = *(FSphylBody **)(piVar9 + 2);
      piVar8[4] = iVar2;
      if (iVar2 == 0) {
        piVar8[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,iVar2,0,(ForAnyElementType *)(piVar8 + 2),iVar2,piVar8 + 5);
        ConstructItems<UE::Mutable::Private::FSphylBody,UE::Mutable::Private::FSphylBody,int>
                  (((ForAnyElementType *)(piVar8 + 2))->Data,pFVar6,iVar2);
      }
      piVar8[6] = 0;
      piVar8[7] = 0;
      iVar2 = piVar9[8];
      pFVar7 = *(FTaperedCapsuleBody **)(piVar9 + 6);
      piVar8[8] = iVar2;
      if (iVar2 == 0) {
        piVar8[9] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,iVar2,0,(ForAnyElementType *)(piVar8 + 6),iVar2,piVar8 + 9);
        ConstructItems<UE::Mutable::Private::FTaperedCapsuleBody,UE::Mutable::Private::FTaperedCapsuleBody,int>
                  (((ForAnyElementType *)(piVar8 + 6))->Data,pFVar7,iVar2);
      }
      piVar8 = piVar8 + 0x14;
      piVar9 = piVar9 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// FUN_14ab59e50 @ 14ab59e50

void __cdecl
FUN_14ab59e50(void *param_1,
             TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
             *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(int *)(lVar1 + 0x3c) = 0;
      if ((TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
           *)(lVar1 + -0xc) != param_2) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(lVar1 + 0x2c),(int *)(lVar1 + 0x3c),
                   (ForElementType<FSetElementId> *)&param_2->field_0x38,
                   *(int *)&param_2->field_0x48);
        TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(lVar1 + -0xc),
                    (TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)param_2);
      }
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,int> @ 14ab59f00

void __cdecl
ConstructItems<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,int>
          (void *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar2 = param_2->TypeIndex;
      lVar1 = lVar5 + (longlong)param_2;
      *(byte *)(lVar1 + 0x10) = bVar2;
      if ((9 < bVar2) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                  ::__l2::CopyConstructors)[bVar2])(lVar1,param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FBoxBody,int> @ 14ab59fb0

void __cdecl DefaultConstructItems<UE::Mutable::Private::FBoxBody,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(lVar1 + 0x14) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(TQuat<float> *)(lVar1 + 0x24) = UE::Math::TQuat<float>::Identity;
      *(undefined8 *)(lVar1 + 0x34) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(lVar1 + 0x3c) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      param_2 = param_2 + -1;
      lVar1 = lVar1 + 0x50;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FConvexBody,int> @ 14ab5a020

void __cdecl DefaultConstructItems<UE::Mutable::Private::FConvexBody,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(__m128 *)(lVar1 + 0x34) = UE::Math::TTransform<float>::Identity.Rotation;
      *(__m128 *)(lVar1 + 0x44) = UE::Math::TTransform<float>::Identity.Translation;
      *(__m128 *)(lVar1 + 0x54) = UE::Math::TTransform<float>::Identity.Scale3D;
      param_2 = param_2 + -1;
      lVar1 = lVar1 + 0x70;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FPhysicsBodyAggregate,int> @ 14ab5a080

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FPhysicsBodyAggregate,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FSphereBody,int> @ 14ab5a0d0

void __cdecl DefaultConstructItems<UE::Mutable::Private::FSphereBody,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(lVar1 + 0x14) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined4 *)(lVar1 + 0x18) = 0;
      param_2 = param_2 + -1;
      lVar1 = lVar1 + 0x28;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FSphylBody,int> @ 14ab5a120

void __cdecl DefaultConstructItems<UE::Mutable::Private::FSphylBody,int>(void *param_1,int param_2)

{
  TQuat<float> TVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined4 *)(lVar2 + 4) = 0;
      *(undefined8 *)(lVar2 + 0xc) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(lVar2 + 0x14) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      TVar1 = UE::Math::TQuat<float>::Identity;
      *(undefined8 *)(lVar2 + 0x34) = 0;
      *(TQuat<float> *)(lVar2 + 0x24) = TVar1;
      param_2 = param_2 + -1;
      lVar2 = lVar2 + 0x50;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FTaperedCapsuleBody,int> @ 14ab5a180

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FTaperedCapsuleBody,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,int> @ 14ab5a1c0

void __cdecl
DefaultConstructItems<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int> @ 14ab5a210

void __cdecl
DestructItems<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int>
          (TResourceResult<UE::Mutable::Private::FImage> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Value).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int> @ 14ab5a250

void __cdecl
DestructItems<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int>
          (TResourceResult<UE::Mutable::Private::FMesh> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Value).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FBoxBody,int> @ 14ab5a290

void __cdecl DestructItems<UE::Mutable::Private::FBoxBody,int>(FBoxBody *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Mutable::Private::FConvexBody,int> @ 14ab5a2d0

void __cdecl DestructItems<UE::Mutable::Private::FConvexBody,int>(FConvexBody *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Vertices;
    do {
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      pTVar2 = pTVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FLiveInstance,int> @ 14ab5a330

void __cdecl
DestructItems<UE::Mutable::Private::FLiveInstance,int>(FLiveInstance *param_1,int param_2)

{
  FSharedReferencer<1> *this;
  bool bVar1;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<UE::Mutable::Private::FParameters_const_,1> local_38;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (param_2 != 0) {
    this = &(param_1->OldParameters).SharedReferenceCount;
    do {
      bVar1 = -1 < CpuChannel->Enabled;
      if (bVar1) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:___cdecl_UE::Mutable::Private::FLiveInstance::~FLiveInstance(void)___ptr64'
                    ::__l2::__CpuProfilerEventSpecId1209,"Mutable_LiveInstanceDestructor",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                   ,0x4b9);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:___cdecl_UE::Mutable::Private::FLiveInstance::~FLiveInstance(void)___ptr64'
                   ::__l2::__CpuProfilerEventSpecId1209);
      }
      local_48 = 0;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (this + 2 != (FSharedReferencer<1> *)&local_48) {
        this[2] = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(this + 3,&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      local_38.Object = (FParameters *)0x0;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if ((TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *)(this + -1) != &local_38) {
        ((TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *)(this + -1))->Object =
             (FParameters *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(this,&local_38.SharedReferenceCount)
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (this + -5 != (FSharedReferencer<1> *)&local_28) {
        this[-5] = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(this + -4,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (this + -3 != (FSharedReferencer<1> *)&local_18) {
        this[-3] = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(this + -2,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
      if (bVar1) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (this[5].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (this[3].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (this->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (this[-2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (this[-4].ReferenceController);
      this = this + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,int> @ 14ab5a4d0

void __cdecl
DestructItems<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,int>
          (FModelCacheEntry *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  long64 *plVar5;
  
  if (param_2 != 0) {
    plVar5 = &(param_1->PendingOpsPerRom).AllocatorInstance.AllocSize;
    do {
      LOCK();
      Counter = (atomic<__int64>)((longlong)Counter - *plVar5);
      UNLOCK();
      UE::Mutable::Private::FGlobalMemoryCounter::Update(-*plVar5);
      pvVar3 = (void *)((ForAnyElementType *)(plVar5 + -1))->_padding_;
      *plVar5 = 0;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      LOCK();
      Counter = (atomic<__int64>)((longlong)Counter - plVar5[-3]);
      UNLOCK();
      UE::Mutable::Private::FGlobalMemoryCounter::Update(-plVar5[-3]);
      plVar5[-3] = 0;
      if ((void *)plVar5[-4] != (void *)0x0) {
        FMemory::Free((void *)plVar5[-4]);
      }
      plVar4 = (longlong *)plVar5[-5];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5 = plVar5 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FPhysicsBodyAggregate,int> @ 14ab5a590

void __cdecl
DestructItems<UE::Mutable::Private::FPhysicsBodyAggregate,int>
          (FPhysicsBodyAggregate *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->TaperedCapsules;
    do {
      DestructItems<UE::Mutable::Private::FTaperedCapsuleBody,int>
                ((FTaperedCapsuleBody *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<UE::Mutable::Private::FSphylBody,int>
                ((FSphylBody *)
                 (((TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *)
                  (pTVar2 + -1))->AllocatorInstance).Data,
                 ((TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *)
                 (pTVar2 + -1))->ArrayNum);
      pFVar1 = (((TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<UE::Mutable::Private::FConvexBody,int>
                ((FConvexBody *)
                 (((TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *)
                  (pTVar2 + -2))->AllocatorInstance).Data,
                 ((TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *)
                 (pTVar2 + -2))->ArrayNum);
      pFVar1 = (((TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -2))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<UE::Mutable::Private::FBoxBody,int>
                ((FBoxBody *)
                 (((TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *)
                  (pTVar2 + -3))->AllocatorInstance).Data,
                 ((TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *)
                 (pTVar2 + -3))->ArrayNum);
      pFVar1 = (((TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3)
                )->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<UE::Mutable::Private::FSphereBody,int>
                ((FSphereBody *)
                 (((FPhysicsBodyAggregate *)(pTVar2 + -4))->Spheres).AllocatorInstance.Data,
                 (((FPhysicsBodyAggregate *)(pTVar2 + -4))->Spheres).ArrayNum);
      pFVar1 = (((FPhysicsBodyAggregate *)(pTVar2 + -4))->Spheres).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FSphereBody,int> @ 14ab5a650

void __cdecl DestructItems<UE::Mutable::Private::FSphereBody,int>(FSphereBody *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Mutable::Private::FSphylBody,int> @ 14ab5a690

void __cdecl DestructItems<UE::Mutable::Private::FSphylBody,int>(FSphylBody *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Mutable::Private::FTaperedCapsuleBody,int> @ 14ab5a6d0

void __cdecl
DestructItems<UE::Mutable::Private::FTaperedCapsuleBody,int>
          (FTaperedCapsuleBody *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,int> @ 14ab5a710

void __cdecl
DestructItems<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,int>
          (TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,int> @ 14ab5a770

void __cdecl
DestructItems<TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,int>
          (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<UE::Mutable::Private::FInstance_const_,1>,int> @ 14ab5a7b0

void __cdecl
DestructItems<TSharedPtr<UE::Mutable::Private::FInstance_const_,1>,int>
          (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<UE::Mutable::Private::String_const_,1>,int> @ 14ab5a7f0

void __cdecl
DestructItems<TSharedPtr<UE::Mutable::Private::String_const_,1>,int>
          (TSharedPtr<UE::Mutable::Private::String_const_,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<UE::Mutable::Private::FImage,1>,int> @ 14ab5a830

void __cdecl
DestructItems<TSharedPtr<UE::Mutable::Private::FImage,1>,int>
          (TSharedPtr<UE::Mutable::Private::FImage,1> *param_1,int param_2)

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

// DestructItems<TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>,int> @ 14ab5a870

void __cdecl
DestructItems<TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>,int>
          (TVariant<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
           *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    bVar1 = param_1->TypeIndex;
    if ((5 < (ulonglong)bVar1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) break;
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[bVar1])(param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// DestructItems<UE::Mutable::Private::ExecutionIndex,int> @ 14ab5a900

void __cdecl
DestructItems<UE::Mutable::Private::ExecutionIndex,int>(ExecutionIndex *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// GetTypeHash<int> @ 14ab5c850

uint __cdecl GetTypeHash<int>(TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  uVar3 = 0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar4 = *(uint *)pFVar5;
    uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
    uVar6 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
    uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 0xd;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 0xc;
    uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 << 0x10;
    uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 3;
    uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 << 10;
    uVar3 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 0xf;
    pFVar5 = pFVar5 + 4;
  }
  return uVar3;
}

// HeapPop<`UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l13::<lambda_1>_> @ 14ab5c930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<float,`UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l13::FRomRef>,TSizedDefaultAllocator<32>_>
::HeapPop<_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow_::__l13::<lambda_1>_>
          (void *this,
          TTuple<float,_public:_bool___cdecl_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow(unsigned___int64)_::_13_::FRomRef>
          *param_1,<lambda_1> *param_2,EAllowShrinking param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar15 = 0;
  if ((*(int *)((longlong)this + 8) < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar5 = *(undefined8 **)this;
  uVar4 = puVar5[1];
  *(undefined8 *)param_1 = *puVar5;
  *(undefined8 *)&param_1->field_0x8 = uVar4;
  *(undefined8 *)&param_1->field_0x10 = puVar5[2];
  if ((*(int *)((longlong)this + 8) < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar17 = *(int *)((longlong)this + 8) + -1;
  if (1 < iVar17) {
    iVar17 = 1;
  }
  if (iVar17 != 0) {
    memmove(*(void **)this,
            (void *)((longlong)*(void **)this +
                    (longlong)(*(int *)((longlong)this + 8) - iVar17) * 0x18),
            (longlong)iVar17 * 0x18);
  }
  iVar17 = *(int *)((longlong)this + 8) + -1;
  *(int *)((longlong)this + 8) = iVar17;
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,this,iVar17,(int *)((longlong)this + 0xc));
  }
  iVar17 = *(int *)((longlong)this + 8);
  lVar6 = *(longlong *)this;
  if (1 < iVar17) {
    do {
      iVar8 = iVar15 * 2;
      iVar16 = iVar8 + 1;
      if (iVar8 + 2 < iVar17) {
        fVar3 = *(float *)(lVar6 + ((longlong)iVar8 + 2) * 0x18);
        pfVar1 = (float *)(lVar6 + (longlong)iVar16 * 0x18);
        if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) {
          iVar16 = iVar8;
        }
        iVar16 = iVar16 + 1;
      }
      lVar13 = (longlong)iVar16;
      lVar14 = (longlong)iVar15;
      fVar3 = *(float *)(lVar6 + lVar14 * 0x18);
      pfVar1 = (float *)(lVar6 + lVar13 * 0x18);
      if (fVar3 < *pfVar1 || fVar3 == *pfVar1) {
        return;
      }
      puVar5 = (undefined8 *)(lVar6 + lVar13 * 0x18);
      uVar9 = puVar5[1];
      uVar4 = *(undefined8 *)(lVar6 + 0x10 + lVar14 * 0x18);
      puVar2 = (undefined8 *)(lVar6 + lVar14 * 0x18);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar6 + lVar14 * 0x18);
      *puVar2 = *puVar5;
      puVar2[1] = uVar9;
      *(undefined8 *)(lVar6 + 0x10 + lVar14 * 0x18) = *(undefined8 *)(lVar6 + 0x10 + lVar13 * 0x18);
      puVar5 = (undefined8 *)(lVar6 + lVar13 * 0x18);
      *puVar5 = uVar10;
      puVar5[1] = uVar11;
      *(undefined8 *)(lVar6 + 0x10 + lVar13 * 0x18) = uVar4;
      iVar15 = iVar16;
    } while (iVar16 * 2 + 1 < iVar17);
  }
  return;
}

// HeapifyInternal<TTuple<float,`UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l13::FRomRef>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,`UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l13::FRomRef>,`UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow'::__l13::<lambda_1>_>_> @ 14ab5cb00

void __cdecl
AlgoImpl::
HeapifyInternal<TTuple<float,_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow_::__l13::FRomRef>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow_::__l13::FRomRef>,_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow_::__l13::<lambda_1>_>_>
          (TTuple<float,_public:_bool___cdecl_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow(unsigned___int64)_::_13_::FRomRef>
           *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,_public:_bool___cdecl_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow(unsigned___int64)_::_13_::FRomRef>,_public:_bool___cdecl_UE::Mutable::Private::FWorkingMemoryManager::EnsureBudgetBelow(unsigned___int64)_::_13_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar3 = iVar9;
  iVar11 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_14ab5cbf6:
      if (iVar11 == 0) {
        return;
      }
      iVar8 = iVar11 + -1;
      iVar9 = iVar3 + -2;
      iVar3 = iVar9;
      iVar11 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (*(float *)(param_1 + iVar10) <= *(float *)(param_1 + (longlong)iVar9 + 2) &&
          *(float *)(param_1 + (longlong)iVar9 + 2) != *(float *)(param_1 + iVar10)) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    if (*(float *)(param_1 + iVar8) < *(float *)(param_1 + iVar10) ||
        *(float *)(param_1 + iVar8) == *(float *)(param_1 + iVar10)) goto LAB_14ab5cbf6;
    uVar4 = *(undefined8 *)&param_1[iVar10].field_0x8;
    iVar9 = iVar10 * 2 + 1;
    uVar1 = *(undefined8 *)&param_1[iVar8].field_0x10;
    uVar5 = *(undefined8 *)(param_1 + iVar8);
    uVar6 = *(undefined8 *)&param_1[iVar8].field_0x8;
    *(undefined8 *)(param_1 + iVar8) = *(undefined8 *)(param_1 + iVar10);
    *(undefined8 *)&param_1[iVar8].field_0x8 = uVar4;
    *(undefined8 *)&param_1[iVar8].field_0x10 = *(undefined8 *)&param_1[iVar10].field_0x10;
    *(undefined8 *)(param_1 + iVar10) = uVar5;
    *(undefined8 *)&param_1[iVar10].field_0x8 = uVar6;
    *(undefined8 *)&param_1[iVar10].field_0x10 = uVar1;
    iVar8 = iVar10;
  } while( true );
}

// Launch<`UE::Tasks::MakeCompletedTask<UE::Mutable::Private::FExtendedImageDesc>'::__l2::<lambda_1>_> @ 14ab5cc20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<UE::Mutable::Private::FExtendedImageDesc> __cdecl
UE::Tasks::
Launch<_UE::Tasks::MakeCompletedTask<UE::Mutable::Private::FExtendedImageDesc>_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

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
         &___7__TTaskWithResult_UFExtendedImageDesc_Private_Mutable_UE___Private_Tasks_UE__6B_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_UFExtendedImageDesc_Private_Mutable_UE____V_Tasks_UE__YA_AV__TTask_UFExtendedImageDesc_Private_Mutable_UE___23_XZ__Private_Tasks_UE__6B_
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
  return (TTask<UE::Mutable::Private::FExtendedImageDesc>)param_1;
}

// Launch<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedRef<UE::Mutable::Private::FImage,1>_>'::__l2::<lambda_1>_> @ 14ab5cd00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> __cdecl
UE::Tasks::
Launch<_UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedRef<UE::Mutable::Private::FImage,1>_>_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
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
         &
         ___7__TTaskWithResult_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00__V__TSharedRef_VFImage_Private_Mutable_UE___00___Tasks_UE__YA_AV__TTask_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___23___QEAV__TSharedRef_VFImage_Private_Mutable_UE___00___Z_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00__X_Private_Tasks_UE__6B_
    ;
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00__V__TSharedRef_VFImage_Private_Mutable_UE___00___Tasks_UE__YA_AV__TTask_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___23___QEAV__TSharedRef_VFImage_Private_Mutable_UE___00___Z__Private_Tasks_UE__6B_
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
  return (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)param_1;
}

// Launch<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::FMaterial_*>'::__l2::<lambda_1>_> @ 14ab5ce00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_> __cdecl
UE::Tasks::
Launch<_UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::FMaterial_*>_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
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
         &
         ___7__TTaskWithResult_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00__PEAVFMaterial_Private_Mutable_UE___Tasks_UE__YA_AV__TTask_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___23___QEAPEAVFMaterial_Private_Mutable_3__Z_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00__X_Private_Tasks_UE__6B_
    ;
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00__PEAVFMaterial_Private_Mutable_UE___Tasks_UE__YA_AV__TTask_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___23___QEAPEAVFMaterial_Private_Mutable_3__Z__Private_Tasks_UE__6B_
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
  return (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)param_1;
}

// Launch<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::FMesh_*>'::__l2::<lambda_1>_> @ 14ab5cf00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_> __cdecl
UE::Tasks::
Launch<_UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::FMesh_*>_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
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
         &
         ___7__TTaskWithResult_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00__PEAVFMesh_Private_Mutable_UE___Tasks_UE__YA_AV__TTask_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___23___QEAPEAVFMesh_Private_Mutable_3__Z_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00__X_Private_Tasks_UE__6B_
    ;
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00__PEAVFMesh_Private_Mutable_UE___Tasks_UE__YA_AV__TTask_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___23___QEAPEAVFMesh_Private_Mutable_3__Z__Private_Tasks_UE__6B_
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
  return (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)param_1;
}

// MakeShared<UE::Mutable::Private::FMesh,1> @ 14ab5d630

TSharedRef<UE::Mutable::Private::FMesh,1> * __cdecl
MakeShared<UE::Mutable::Private::FMesh,1>
          (TSharedRef<UE::Mutable::Private::FMesh,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Mutable::Private::FMesh,1> *pTVar4;
  
  pTVar3 = operator_new(0x1a8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FMesh *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMesh_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x198);
    UE::Mutable::Private::FMesh::FMesh((FMesh *)(pTVar3 + 1));
    __return_storage_ptr__->Object = (FMesh *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FMesh *)(pTVar3 + 1) == (FMesh *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Mutable::Private::FMesh,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Mutable::Private::FParameters,1> @ 14ab5d700

TSharedRef<UE::Mutable::Private::FParameters,1> * __cdecl
MakeShared<UE::Mutable::Private::FParameters,1>
          (TSharedRef<UE::Mutable::Private::FParameters,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  pTVar1 = operator_new(0x28);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFParameters_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    pTVar1[1]._padding_ = 0;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    puVar2 = operator_new(0x30);
    if (puVar2 == (undefined8 *)0x0) {
      pTVar1[2]._padding_ = 0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      pTVar1[2]._padding_ = (longlong)puVar2;
    }
  }
  TSharedRef<UE::Mutable::Private::FParameters,1>::TSharedRef<UE::Mutable::Private::FParameters,1>
            (__return_storage_ptr__,(FParameters *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// MakeShared<UE::Mutable::Private::FPhysicsBody,1> @ 14ab5d7b0

TSharedRef<UE::Mutable::Private::FPhysicsBody,1> * __cdecl
MakeShared<UE::Mutable::Private::FPhysicsBody,1>
          (TSharedRef<UE::Mutable::Private::FPhysicsBody,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Mutable::Private::FPhysicsBody,1> *pTVar4;
  
  pTVar3 = operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FPhysicsBody *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPhysicsBody_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar3[1]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[4].SharedReferenceCount.field_0x1 = 0;
    *(undefined2 *)&pTVar3[4].WeakReferenceCount.field_0x1 = 0;
    pTVar3[4].WeakReferenceCount.field_0x3 = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    *(undefined1 *)&pTVar3[4].SharedReferenceCount = 0;
    *(undefined4 *)&pTVar3[1]._padding_ = 0xffffffff;
    __return_storage_ptr__->Object = (FPhysicsBody *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FPhysicsBody *)(pTVar3 + 1) == (FPhysicsBody *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Mutable::Private::FPhysicsBody,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Mutable::Private::FSkeleton,1> @ 14ab5d880

TSharedRef<UE::Mutable::Private::FSkeleton,1> * __cdecl
MakeShared<UE::Mutable::Private::FSkeleton,1>
          (TSharedRef<UE::Mutable::Private::FSkeleton,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Mutable::Private::FSkeleton,1> *pTVar4;
  
  pTVar3 = operator_new(0x40);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSkeleton *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSkeleton_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FSkeleton *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FSkeleton *)(pTVar3 + 1) == (FSkeleton *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Mutable::Private::FSkeleton,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// StaticEnum<enum_ETextureCompressionStrategy> @ 14ab5dff0

UEnum * __cdecl StaticEnum<enum_ETextureCompressionStrategy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureCompressionStrategy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MutableRuntime();
    Z_Registration_Info_UEnum_ETextureCompressionStrategy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy,
                       (UObject *)pUVar1,L"ETextureCompressionStrategy");
  }
  return Z_Registration_Info_UEnum_ETextureCompressionStrategy.OuterSingleton;
}

// Visit<`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e030

bool __cdecl
Visit<_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  undefined1 extraout_AL_02;
  undefined1 extraout_AL_03;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  
  bVar8 = SUB81(param_1,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    pTVar6 = param_1->ValueB;
    cVar1 = *(char *)param_2;
    if (pTVar6->TypeIndex != '\0') {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    return cVar1 == *(char *)pTVar6;
  case '\x01':
    pTVar6 = param_1->ValueB;
    if (pTVar6->TypeIndex != '\x01') {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    return *(int *)param_2 == *(int *)pTVar6;
  case '\x03':
    pTVar6 = param_1->ValueB;
    if (pTVar6->TypeIndex != '\x03') {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    if (((*(float *)pTVar6 == *(float *)param_2) &&
        (*(float *)&pTVar6->field_0x4 == *(float *)&param_2->field_0x4)) &&
       ((*(float *)&pTVar6->field_0x8 == *(float *)&param_2->field_0x8 &&
        (*(float *)&pTVar6->field_0xc == *(float *)&param_2->field_0xc)))) {
      return true;
    }
    return false;
  case '\x04':
    pTVar6 = param_1->ValueB;
    if (pTVar6->TypeIndex != '\x04') {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    piVar3 = *(int **)param_2;
    piVar4 = *(int **)pTVar6;
    if (((((((*piVar4 == *piVar3) && ((float)piVar3[1] == (float)piVar4[1])) &&
           ((float)piVar3[2] == (float)piVar4[2])) &&
          (((float)piVar3[3] == (float)piVar4[3] && ((float)piVar3[7] == (float)piVar4[7])))) &&
         (((float)piVar3[8] == (float)piVar4[8] &&
          (((float)piVar3[9] == (float)piVar4[9] && ((float)piVar3[4] == (float)piVar4[4])))))) &&
        ((float)piVar3[5] == (float)piVar4[5])) &&
       (((((float)piVar3[6] == (float)piVar4[6] && ((float)piVar3[10] == (float)piVar4[10])) &&
         ((float)piVar3[0xb] == (float)piVar4[0xb])) &&
        (((float)piVar3[0xc] == (float)piVar4[0xc] && ((float)piVar3[0xd] == (float)piVar4[0xd])))))
       ) {
      return true;
    }
    return false;
  case '\x05':
    pTVar6 = param_1->ValueB;
    if (pTVar6->TypeIndex != '\x05') {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    return *(longlong *)param_2 == *(longlong *)pTVar6;
  case '\x06':
    pTVar6 = param_1->ValueB;
    if (pTVar6->TypeIndex != '\x06') {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    return *(longlong *)param_2 == *(longlong *)pTVar6;
  case '\a':
    pTVar6 = param_1->ValueB;
    if (pTVar6->TypeIndex != '\a') {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    puVar5 = *(undefined8 **)pTVar6;
    iVar10 = *(int *)(*(undefined8 **)param_2 + 1);
    iVar2 = *(int *)(puVar5 + 1);
    if (iVar2 != iVar10) {
      return iVar2 + iVar10 == 1;
    }
    if (1 < iVar2) {
      iVar10 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)*puVar5,(wchar_t *)**(undefined8 **)param_2);
      return iVar10 == 0;
    }
    return true;
  case '\b':
    pTVar6 = param_1->ValueB;
    if (pTVar6->TypeIndex != '\b') {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    pfVar15 = *(float **)param_2;
    lVar14 = 0;
    lVar13 = *(longlong *)pTVar6 - (longlong)pfVar15;
    do {
      lVar12 = 0;
      pfVar11 = pfVar15;
      do {
        if (*pfVar11 != *(float *)(lVar13 + (longlong)pfVar11)) {
          return false;
        }
        lVar12 = lVar12 + 1;
        pfVar11 = pfVar11 + 1;
      } while (lVar12 < 4);
      lVar14 = lVar14 + 1;
      pfVar15 = pfVar15 + 4;
    } while (lVar14 < 4);
    return true;
  case '\t':
    pTVar6 = param_1->ValueB;
    if (pTVar6->TypeIndex != '\t') {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    return *(longlong *)param_2 == *(longlong *)pTVar6;
  case '\n':
    if (param_1[5].ValueB !=
        (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
         *)0x0) {
      FMemory::Free(param_1[5].ValueB);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)param_1[3].ValueB);
    return (bool)extraout_AL_03;
  case '\v':
    param_1->ValueB =
         (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *)SharedPointerInternals::TReferenceControllerBase<1>::vftable;
    if (((ulonglong)param_2 & 1) != 0) {
      operator_delete(param_1,0x38);
    }
    return bVar8;
  case '\f':
    if (param_1[7].ValueB !=
        (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
         *)0x0) {
      FMemory::Free(param_1[7].ValueB);
    }
    DestructItems<UE::Mutable::Private::FPhysicsBodyAggregate,int>
              ((FPhysicsBodyAggregate *)param_1[5].ValueB,*(int *)&param_1[6].ValueB);
    uVar9 = extraout_AL;
    if (param_1[5].ValueB !=
        (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
         *)0x0) {
      FMemory::Free(param_1[5].ValueB);
      uVar9 = extraout_AL_00;
    }
    if (param_1[3].ValueB !=
        (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
         *)0x0) {
      FMemory::Free(param_1[3].ValueB);
      return (bool)extraout_AL_01;
    }
    return (bool)uVar9;
  case '\r':
    param_1->ValueB =
         (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *)SharedPointerInternals::TReferenceControllerBase<1>::vftable;
    if (((ulonglong)param_2 & 1) != 0) {
      operator_delete(param_1,0x50);
    }
    return bVar8;
  case '\x0e':
    UE::Mutable::Private::FProgramCache::~FProgramCache((FProgramCache *)(param_1 + 2));
    return (bool)extraout_AL_02;
  case '\x0f':
    param_1->ValueB =
         (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *)SharedPointerInternals::TReferenceControllerBase<1>::vftable;
    if (((ulonglong)param_2 & 1) != 0) {
      operator_delete(param_1,0x1d8);
    }
    return bVar8;
  }
  pTVar6 = param_1->ValueB;
  if (pTVar6->TypeIndex != '\x02') {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  if (*(float *)pTVar6 == *(float *)param_2) {
    return true;
  }
  return false;
}

// VisitApplyEncoded<1,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e050

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\x01') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(int *)param_2 == *(int *)pTVar1;
}

// VisitApplyEncoded<2,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e0b0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  if (*(float *)pTVar1 == *(float *)param_2) {
    return true;
  }
  return false;
}

// VisitApplyEncoded<3,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e120

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\x03') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  if ((((*(float *)pTVar1 == *(float *)param_2) &&
       (*(float *)&pTVar1->field_0x4 == *(float *)&param_2->field_0x4)) &&
      (*(float *)&pTVar1->field_0x8 == *(float *)&param_2->field_0x8)) &&
     (*(float *)&pTVar1->field_0xc == *(float *)&param_2->field_0xc)) {
    return true;
  }
  return false;
}

// VisitApplyEncoded<4,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e1b0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\x04') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  piVar2 = *(int **)param_2;
  piVar3 = *(int **)pTVar1;
  if (((((*piVar3 == *piVar2) && ((float)piVar2[1] == (float)piVar3[1])) &&
       ((float)piVar2[2] == (float)piVar3[2])) &&
      (((((float)piVar2[3] == (float)piVar3[3] && ((float)piVar2[7] == (float)piVar3[7])) &&
        (((float)piVar2[8] == (float)piVar3[8] &&
         (((float)piVar2[9] == (float)piVar3[9] && ((float)piVar2[4] == (float)piVar3[4])))))) &&
       ((float)piVar2[5] == (float)piVar3[5])))) &&
     (((((float)piVar2[6] == (float)piVar3[6] && ((float)piVar2[10] == (float)piVar3[10])) &&
       ((float)piVar2[0xb] == (float)piVar3[0xb])) &&
      (((float)piVar2[0xc] == (float)piVar3[0xc] && ((float)piVar2[0xd] == (float)piVar3[0xd]))))))
  {
    return true;
  }
  return false;
}

// VisitApplyEncoded<5,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e2c0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\x05') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(longlong *)param_2 == *(longlong *)pTVar1;
}

// VisitApplyEncoded<6,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e320

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\x06') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(longlong *)param_2 == *(longlong *)pTVar1;
}

// VisitApplyEncoded<7,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e380

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  int iVar1;
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  
  pTVar2 = param_1->ValueB;
  if (pTVar2->TypeIndex != '\a') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  puVar3 = *(undefined8 **)pTVar2;
  iVar7 = *(int *)(*(undefined8 **)param_2 + 1);
  iVar1 = *(int *)(puVar3 + 1);
  if (iVar1 != iVar7) {
    return iVar1 + iVar7 == 1;
  }
  if (1 < iVar1) {
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar3,(wchar_t *)**(undefined8 **)param_2)
    ;
    return iVar7 == 0;
  }
  return true;
}

// VisitApplyEncoded<8,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e420

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\b') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pfVar9 = *(float **)param_2;
  lVar8 = 0;
  lVar7 = *(longlong *)pTVar1 - (longlong)pfVar9;
  do {
    lVar6 = 0;
    pfVar5 = pfVar9;
    do {
      if (*pfVar5 != *(float *)(lVar7 + (longlong)pfVar5)) {
        return false;
      }
      lVar6 = lVar6 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar6 < 4);
    lVar8 = lVar8 + 1;
    pfVar9 = pfVar9 + 4;
  } while (lVar8 < 4);
  return true;
}

// VisitApplyEncoded<9,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e4c0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\t') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(longlong *)param_2 == *(longlong *)pTVar1;
}

// VisitApplyEncoded<0,0,`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e520

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  char cVar1;
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar2 = param_1->ValueB;
  cVar1 = *(char *)param_2;
  if (pTVar2->TypeIndex != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      bVar4 = (bool)(*pcVar3)();
      return bVar4;
    }
  }
  return cVar1 == *(char *)pTVar2;
}

// VisitImpl<`UE::Mutable::Private::operator==<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,0,1,2,3,4,5,6,7,8,9,0,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14ab5e580

bool __cdecl
UE::Core::Private::
VisitImpl<_UE::Mutable::Private::operator__<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_::__l2::<lambda_1>,0,1,2,3,4,5,6,7,8,9,0,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_const_&>
          (ulong64 param_1,<lambda_1> *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ab5e596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*switchD_14ab5e03f::switchdataD_15229bd80[param_1])(param_2,param_5);
  return bVar1;
}

// atomic_fetch_add_explicit<int> @ 14ab5e5a0

/* WARNING: Enum "memory_order": Some values do not have unique names */

int __cdecl
std::atomic_fetch_add_explicit<int>(atomic<int> *param_1,int param_2,memory_order param_3)

{
  atomic<int> aVar1;
  
  LOCK();
  aVar1 = *param_1;
  *param_1 = (atomic<int>)((int)*param_1 + param_2);
  UNLOCK();
  return (int)aVar1;
}

// TMatrix<float>_& @ 14ab61a00

TMatrix<float> * __thiscall
UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>::operator_UE::Math::
TMatrix<float>__(void *this)

{
  code *pcVar1;
  bool bVar2;
  TMatrix<float> *pTVar3;
  
  if (*(longlong *)this != 0) {
    return *(TMatrix<float> **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StoragePtr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                     ,0x55,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TMatrix<float> *)(*pcVar1)();
    return pTVar3;
  }
  return *(TMatrix<float> **)this;
}

// TMatrix<float>_const_& @ 14ab61a50

TMatrix<float> * __thiscall
UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>::operator_UE::Math::
TMatrix<float>_const__(void *this)

{
  code *pcVar1;
  bool bVar2;
  TMatrix<float> *pTVar3;
  
  if (*(longlong *)this != 0) {
    return *(TMatrix<float> **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StoragePtr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                     ,0x4f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TMatrix<float> *)(*pcVar1)();
    return pTVar3;
  }
  return *(TMatrix<float> **)this;
}

// FProjector_const_& @ 14ab61aa0

FProjector * __thiscall
UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>::operator_UE::
Mutable::Private::FProjector_const__(void *this)

{
  code *pcVar1;
  bool bVar2;
  FProjector *pFVar3;
  
  if (*(longlong *)this != 0) {
    return *(FProjector **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StoragePtr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                     ,0x4f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FProjector *)(*pcVar1)();
    return pFVar3;
  }
  return *(FProjector **)this;
}

// operator_FString_& @ 14ab61af0

FString * __thiscall
UE::Mutable::Private::Private::TIndirectObject<FString>::operator_FString__
          (TIndirectObject<FString> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->StoragePtr).Ptr != (FString *)0x0) {
    return (this->StoragePtr).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StoragePtr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                     ,0x55,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  return (this->StoragePtr).Ptr;
}

// operator_FString_const_& @ 14ab61b40

FString * __thiscall
UE::Mutable::Private::Private::TIndirectObject<FString>::operator_FString_const__
          (TIndirectObject<FString> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->StoragePtr).Ptr != (FString *)0x0) {
    return (this->StoragePtr).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StoragePtr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                     ,0x4f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  return (this->StoragePtr).Ptr;
}

// `scalar_deleting_destructor' @ 14ab652a0

void * __thiscall
UE::Mutable::Private::
DiscreteCoveredCodeVisitorBase<UE::Mutable::Private::UniqueConstCodeVisitorIterative<UE::Mutable::Private::COVERED_CODE_VISITOR_STATE>,UE::Mutable::Private::COVERED_CODE_VISITOR_STATE>
::_scalar_deleting_destructor_
          (DiscreteCoveredCodeVisitorBase<UE::Mutable::Private::UniqueConstCodeVisitorIterative<UE::Mutable::Private::COVERED_CODE_VISITOR_STATE>,UE::Mutable::Private::COVERED_CODE_VISITOR_STATE>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Model).SharedReferenceCount.ReferenceController);
  this->_padding_ =
       (longlong)
       &
       ___7__UniqueConstCodeVisitorIterative_UCOVERED_CODE_VISITOR_STATE_Private_Mutable_UE___Private_Mutable_UE__6B_
  ;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65320

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::MakeCompletedTask<UE::Mutable::Private::FExtendedImageDesc>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_UFExtendedImageDesc_Private_Mutable_UE___Private_Tasks_UE__6B_;
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
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

// `scalar_deleting_destructor' @ 14ab653b0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedRef<UE::Mutable::Private::FImage,1>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
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

// `scalar_deleting_destructor' @ 14ab65430

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::FMaterial_*>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
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

// `scalar_deleting_destructor' @ 14ab654b0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::FMesh_*>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
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

// `scalar_deleting_destructor' @ 14ab65530

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::Mutable::Private::FSystem::GetImage'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
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

// `scalar_deleting_destructor' @ 14ab655b0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Mutable::Private::FSystem::GetImageDesc'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_UFExtendedImageDesc_Private_Mutable_UE___Private_Tasks_UE__6B_;
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
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

// `scalar_deleting_destructor' @ 14ab65630

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::Mutable::Private::FSystem::GetMaterial'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
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

// `scalar_deleting_destructor' @ 14ab656b0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::Mutable::Private::FSystem::GetMesh'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
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

// `scalar_deleting_destructor' @ 14ab65730

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<UE::Mutable::Private::FExtendedImageDesc>'::__l2::<lambda_1>,UE::Mutable::Private::FExtendedImageDesc,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_UFExtendedImageDesc_Private_Mutable_UE___Private_Tasks_UE__6B_;
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65790

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedRef<UE::Mutable::Private::FImage,1>_>'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab657f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::FMaterial_*>'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65850

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::FMesh_*>'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab658b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetImage'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65910

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetImageDesc'::__l2::<lambda_1>,UE::Mutable::Private::FExtendedImageDesc,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_UFExtendedImageDesc_Private_Mutable_UE___Private_Tasks_UE__6B_;
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65970

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetMaterial'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab659d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetMesh'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65a30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FGeneratedImageKey,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FGeneratedImageKey,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65a70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FGeneratedMaterialKey,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FGeneratedMaterialKey,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65ab0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FGeneratedMeshKey,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FGeneratedMeshKey,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65af0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FPhysicsBody,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FPhysicsBody,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65b30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65b70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FRangeIndex,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FRangeIndex,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65bb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Mutable::Private::FMaterial,SharedPointerInternals::DefaultDeleter<UE::Mutable::Private::FMaterial>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<UE::Mutable::Private::FMaterial,SharedPointerInternals::DefaultDeleter<UE::Mutable::Private::FMaterial>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65bf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Mutable::Private::FMesh,SharedPointerInternals::DefaultDeleter<UE::Mutable::Private::FMesh>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<UE::Mutable::Private::FMesh,SharedPointerInternals::DefaultDeleter<UE::Mutable::Private::FMesh>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65c30

void * __thiscall
UE::Tasks::Private::TTaskWithResult<UE::Mutable::Private::FExtendedImageDesc>::
_scalar_deleting_destructor_
          (TTaskWithResult<UE::Mutable::Private::FExtendedImageDesc> *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TTaskWithResult_UFExtendedImageDesc_Private_Mutable_UE___Private_Tasks_UE__6B_;
  pvVar1 = *(void **)((this->ResultStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65c90

void * __thiscall
UE::Tasks::Private::TTaskWithResult<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::
_scalar_deleting_destructor_
          (TTaskWithResult<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ResultStorage).Pad + 8));
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65cf0

void * __thiscall
UE::Tasks::Private::TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>::
_scalar_deleting_destructor_
          (TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_> *this,uint param_1
          )

{
  this->_padding_ =
       (longlong)
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ResultStorage).Pad + 8));
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65d50

void * __thiscall
UE::Tasks::Private::TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>::
_scalar_deleting_destructor_
          (TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ResultStorage).Pad + 8));
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65db0

void * __thiscall
UE::Mutable::Private::
UniqueConstCodeVisitorIterative<UE::Mutable::Private::COVERED_CODE_VISITOR_STATE>::
_scalar_deleting_destructor_
          (UniqueConstCodeVisitorIterative<UE::Mutable::Private::COVERED_CODE_VISITOR_STATE> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__UniqueConstCodeVisitorIterative_UCOVERED_CODE_VISITOR_STATE_Private_Mutable_UE___Private_Mutable_UE__6B_
  ;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->Visited).AllocatorInstance.Data,
             (this->Visited).ArrayNum);
  pFVar1 = (this->Visited).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->States).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pending).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65e30

void * __thiscall
UE::Mutable::Private::
UniqueDiscreteCoveredCodeVisitor<UE::Mutable::Private::COVERED_CODE_VISITOR_STATE>::
_scalar_deleting_destructor_
          (UniqueDiscreteCoveredCodeVisitor<UE::Mutable::Private::COVERED_CODE_VISITOR_STATE> *this,
          uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x50);
  *(undefined ***)this =
       &
       ___7__UniqueConstCodeVisitorIterative_UCOVERED_CODE_VISITOR_STATE_Private_Mutable_UE___Private_Mutable_UE__6B_
  ;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&this->field_0x30,
             *(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65eb0

void * __thiscall
UE::Mutable::Private::FInputMemoryStream::_scalar_deleting_destructor_
          (FInputMemoryStream *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FInputStream_Private_Mutable_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65ef0

void * __thiscall
UE::Mutable::Private::FOutputMemoryStream::_scalar_deleting_destructor_
          (FOutputMemoryStream *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FOutputStream_Private_Mutable_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ab65f40

void * __thiscall
UE::Mutable::Private::RelevantParameterVisitor::_scalar_deleting_destructor_
          (RelevantParameterVisitor *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  this->_padding_ =
       (longlong)
       &
       ___7__UniqueConstCodeVisitorIterative_UCOVERED_CODE_VISITOR_STATE_Private_Mutable_UE___Private_Mutable_UE__6B_
  ;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeSystem @ 14ab6cf20

void __cdecl EmptyLinkFunctionForGeneratedCodeSystem(void)

{
  return;
}

// Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy @ 14ab8e680

UEnum * __cdecl Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy(void)

{
  if (Z_Registration_Info_UEnum_ETextureCompressionStrategy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureCompressionStrategy.InnerSingleton,
               &Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextureCompressionStrategy.InnerSingleton;
}

// Mutex'' @ 150421d90

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150421d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClearImageDescCache'' @ 150421db0

void __cdecl UE::Mutable::Private::_dynamic_atexit_destructor_for__CVarClearImageDescCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarClearImageDescCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableDetailedMemoryBudgetExceededLogging'' @ 150421dd0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__CVarEnableDetailedMemoryBudgetExceededLogging__(void)

{
  CVarEnableDetailedMemoryBudgetExceededLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableDetailedMemoryBudgetExceededLogging);
  return;
}

// `dynamic_atexit_destructor_for_'LogMuscleActivationConstraint'' @ 150421df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMuscleActivationConstraint);
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_LiveInstances'' @ 150421e10

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_LiveInstances__
          (void)

{
  if ((__GTraceCounterMutableRuntime_LiveInstances.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_LiveInstances.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemBudget'' @ 150421e30

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemBudget__
          (void)

{
  if ((__GTraceCounterMutableRuntime_MemBudget.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemBudget.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemCache'' @ 150421e50

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemCache__(void)

{
  if ((__GTraceCounterMutableRuntime_MemCache.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemCache.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemImage'' @ 150421e70

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemImage__(void)

{
  if ((__GTraceCounterMutableRuntime_MemImage.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemImage.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemInternal'' @ 150421e90

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemInternal__
          (void)

{
  if ((__GTraceCounterMutableRuntime_MemInternal.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemInternal.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemMesh'' @ 150421eb0

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemMesh__(void)

{
  if ((__GTraceCounterMutableRuntime_MemMesh.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemMesh.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemPool'' @ 150421ed0

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemPool__(void)

{
  if ((__GTraceCounterMutableRuntime_MemPool.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemPool.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemRom'' @ 150421ef0

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemRom__(void)

{
  if ((__GTraceCounterMutableRuntime_MemRom.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemRom.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemStream'' @ 150421f10

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemStream__
          (void)

{
  if ((__GTraceCounterMutableRuntime_MemStream.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemStream.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemTemp'' @ 150421f30

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemTemp__(void)

{
  if ((__GTraceCounterMutableRuntime_MemTemp.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemTemp.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_MemTotal'' @ 150421f50

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_MemTotal__(void)

{
  if ((__GTraceCounterMutableRuntime_MemTotal.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_MemTotal.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_Updates'' @ 150421f70

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_Updates__(void)

{
  if ((__GTraceCounterMutableRuntime_Updates.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_Updates.CounterName);
    return;
  }
  return;
}

