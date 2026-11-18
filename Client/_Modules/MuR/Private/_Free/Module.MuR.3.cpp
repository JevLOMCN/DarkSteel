// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 53

// Mutex'' @ 1411d4d00

void __cdecl `dynamic_initializer_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex,4000);
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__);
  return;
}

// `dynamic_initializer_for_'CVarEnableCompressedMipGenerationMemoryOptimizations'' @ 1411d4d30

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__CVarEnableCompressedMipGenerationMemoryOptimizations__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableCompressedMipGenerationMemoryOptimizations,
             L"mutable.EnableCompressedMipGenerationMemoryOptimizations",
             &bEnableCompressedMipGenerationMemoryOptimizations,
             L"If set to true, enables memory optimizations for mip generation on compressed images."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableCompressedMipGenerationMemoryOptimizations__);
  return;
}

// `dynamic_initializer_for_'CVarEnableImageResizeMemoryOptimizations'' @ 1411d4d80

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVarEnableImageResizeMemoryOptimizations__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableImageResizeMemoryOptimizations,
             L"mutable.EnableImageResizeMemoryOptimizations",&bEnableImageResizeMemoryOptimizations,
             L"If set to true, enables image resize optimizations form small resizes and block compressed images."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableImageResizeMemoryOptimizations__);
  return;
}

// `dynamic_initializer_for_'CVarEnableVectorImplementationForSmallResizes'' @ 1411d4dd0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVarEnableVectorImplementationForSmallResizes__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableVectorImplementationForSmallResizes,
             L"mutable.EnableVectorImplementationForSmallResizes",
             &bEnableVectorImplementationForSmallResizes,
             L"If set to true, enables image resize vector optimizations form small resizes. Will only have effect if mutable.EnableImageResizeMemoryOptimizations is enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableVectorImplementationForSmallResizes__);
  return;
}

// `dynamic_initializer_for_'LogMuscleActivationConstraint'' @ 1411d4e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMuscleActivationConstraint,L"LogMuscleActivationConstraint",Log
             ,All);
  atexit(_dynamic_atexit_destructor_for__LogMuscleActivationConstraint__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1411d4e60

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1411d4ef0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1411d4f80

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1411d5010

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1411d50a0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1411d5130

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1411d51c0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1411d5250

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1411d52e0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1411d5370

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

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotated'' @ 1411d5400

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

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedDet'' @ 1411d5490

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

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedPolar'' @ 1411d5520

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

// `dynamic_initializer_for_'StatPtr_STAT_PBD_StiffnessApplyValues'' @ 1411d55b0

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

// `dynamic_initializer_for_'StatPtr_STAT_PBD_WeightMapApplyValues'' @ 1411d5640

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

// DefaultConstructItems<UE::Mutable::Private::AdjacentFaces,int> @ 14aafdff0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::AdjacentFaces,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      puVar1[1] = 0xffffffffffffffff;
      *(undefined2 *)(puVar1 + 2) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x1c);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FPackLayoutBlock,int> @ 14aafe040

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FPackLayoutBlock,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = 0xffffffff;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined2 *)(lVar1 + 8) = 0;
      lVar1 = lVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::PROJECTED_VERTEX,int> @ 14aafe080

void __cdecl
DefaultConstructItems<UE::Mutable::Private::PROJECTED_VERTEX,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::UntypedMeshBufferIterator,int> @ 14aafe0b0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::UntypedMeshBufferIterator,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x14;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + -0x14) = 0;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::UntypedMeshBufferIteratorConst,int> @ 14aafe0e0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::UntypedMeshBufferIteratorConst,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::SparseIndexMapSet::FRange,int> @ 14aafe110

void __cdecl
DestructItems<UE::Mutable::Private::SparseIndexMapSet::FRange,int>(FRange *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Map).Blocks;
    do {
      DestructItems<TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>,int>
                ((TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>
                  *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>,int> @ 14aafe160

void __cdecl
DestructItems<TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>,int>
          (TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    operator_delete(param_1->Ptr,0x1000);
    param_1 = param_1 + 1;
  }
  return;
}

// HeapSortInternal<UE::Mutable::Private::FPackLayoutBlock,int,FIdentityFunctor,TDereferenceWrapper<UE::Mutable::Private::FPackLayoutBlock,bool___cdecl(UE::Mutable::Private::FPackLayoutBlock_const_&,UE::Mutable::Private::FPackLayoutBlock_const_&)>_> @ 14ab011d0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Mutable::Private::FPackLayoutBlock,int,FIdentityFunctor,TDereferenceWrapper<UE::Mutable::Private::FPackLayoutBlock,bool___cdecl(UE::Mutable::Private::FPackLayoutBlock_const_&,UE::Mutable::Private::FPackLayoutBlock_const_&)>_>
          (FPackLayoutBlock *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Mutable::Private::FPackLayoutBlock,bool___cdecl(UE::Mutable::Private::FPackLayoutBlock_const_&,UE::Mutable::Private::FPackLayoutBlock_const_&)>
          param_4)

{
  FPackLayoutBlock *pFVar1;
  FPackLayoutBlock *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  bool bVar11;
  bool bVar12;
  undefined2 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  FPackLayoutBlock *pFVar21;
  int iVar22;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar18 = iVar16;
  iVar19 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14ab012fe:
      if (iVar19 == 0) {
        iVar16 = param_2 + -1;
        lVar20 = (longlong)iVar16;
        if (0 < iVar16) {
          pFVar21 = param_1 + lVar20;
          do {
            iVar18 = (pFVar21->size).field0_0x0._s_0.X;
            iVar15 = (pFVar21->size).field0_0x0._s_0.Y;
            iVar19 = pFVar21->priority;
            bVar11 = param_1->bReduceBothAxes;
            bVar12 = param_1->bReduceByTwo;
            uVar13 = *(undefined2 *)&param_1->field_0x12;
            iVar22 = 0;
            iVar17 = param_1->Index;
            iVar4 = (param_1->size).field0_0x0._s_0.X;
            iVar5 = (param_1->size).field0_0x0._s_0.Y;
            iVar6 = param_1->priority;
            param_1->Index = pFVar21->Index;
            (param_1->size).field0_0x0._s_0.X = iVar18;
            (param_1->size).field0_0x0._s_0.Y = iVar15;
            param_1->priority = iVar19;
            bVar14 = pFVar21->bReduceByTwo;
            uVar10 = *(undefined2 *)&pFVar21->field_0x12;
            param_1->bReduceBothAxes = pFVar21->bReduceBothAxes;
            param_1->bReduceByTwo = bVar14;
            *(undefined2 *)&param_1->field_0x12 = uVar10;
            pFVar21->Index = iVar17;
            (pFVar21->size).field0_0x0._s_0.X = iVar4;
            (pFVar21->size).field0_0x0._s_0.Y = iVar5;
            pFVar21->priority = iVar6;
            pFVar21->bReduceBothAxes = bVar11;
            pFVar21->bReduceByTwo = bVar12;
            *(undefined2 *)&pFVar21->field_0x12 = uVar13;
            if (1 < iVar16) {
              do {
                iVar15 = iVar22 * 2;
                iVar18 = iVar15 + 1;
                if (iVar15 + 2 < iVar16) {
                  bVar14 = (*param_4.Predicate)(param_1 + (iVar15 + 2),param_1 + iVar18);
                  if (bVar14) {
                    iVar18 = iVar15;
                  }
                  iVar18 = iVar18 + 1;
                }
                pFVar1 = param_1 + iVar18;
                pFVar2 = param_1 + iVar22;
                bVar14 = (*param_4.Predicate)(pFVar2,pFVar1);
                if (!bVar14) break;
                iVar15 = pFVar2->Index;
                iVar19 = (pFVar2->size).field0_0x0._s_0.X;
                iVar17 = (pFVar2->size).field0_0x0._s_0.Y;
                iVar4 = pFVar2->priority;
                bVar11 = pFVar2->bReduceBothAxes;
                bVar12 = pFVar2->bReduceByTwo;
                uVar13 = *(undefined2 *)&pFVar2->field_0x12;
                iVar5 = (pFVar1->size).field0_0x0._s_0.X;
                iVar6 = (pFVar1->size).field0_0x0._s_0.Y;
                iVar22 = pFVar1->priority;
                pFVar2->Index = pFVar1->Index;
                (pFVar2->size).field0_0x0._s_0.X = iVar5;
                (pFVar2->size).field0_0x0._s_0.Y = iVar6;
                pFVar2->priority = iVar22;
                bVar14 = pFVar1->bReduceByTwo;
                uVar10 = *(undefined2 *)&pFVar1->field_0x12;
                pFVar2->bReduceBothAxes = pFVar1->bReduceBothAxes;
                pFVar2->bReduceByTwo = bVar14;
                *(undefined2 *)&pFVar2->field_0x12 = uVar10;
                pFVar1->Index = iVar15;
                (pFVar1->size).field0_0x0._s_0.X = iVar19;
                (pFVar1->size).field0_0x0._s_0.Y = iVar17;
                pFVar1->priority = iVar4;
                pFVar1->bReduceBothAxes = bVar11;
                pFVar1->bReduceByTwo = bVar12;
                *(undefined2 *)&pFVar1->field_0x12 = uVar13;
                iVar22 = iVar18;
              } while (iVar18 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar20 = lVar20 + -1;
            pFVar21 = pFVar21 + -1;
          } while (0 < lVar20);
        }
        return;
      }
      iVar15 = iVar19 + -1;
      iVar16 = iVar18 + -2;
      iVar18 = iVar16;
      iVar19 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar17 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      bVar14 = (*param_4.Predicate)(param_1 + (iVar16 + 2),param_1 + iVar17);
      if (bVar14) {
        iVar17 = iVar16;
      }
      iVar17 = iVar17 + 1;
    }
    pFVar21 = param_1 + iVar17;
    pFVar1 = param_1 + iVar15;
    bVar14 = (*param_4.Predicate)(pFVar1,pFVar21);
    if (!bVar14) goto LAB_14ab012fe;
    uVar7 = *(undefined8 *)pFVar1;
    uVar8 = *(undefined8 *)((longlong)&(pFVar1->size).field0_0x0 + 4);
    bVar11 = pFVar1->bReduceBothAxes;
    bVar12 = pFVar1->bReduceByTwo;
    uVar13 = *(undefined2 *)&pFVar1->field_0x12;
    uVar9 = *(undefined8 *)((longlong)&(pFVar21->size).field0_0x0 + 4);
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar21;
    *(undefined8 *)((longlong)&(pFVar1->size).field0_0x0 + 4) = uVar9;
    bVar14 = pFVar21->bReduceByTwo;
    uVar10 = *(undefined2 *)&pFVar21->field_0x12;
    pFVar1->bReduceBothAxes = pFVar21->bReduceBothAxes;
    pFVar1->bReduceByTwo = bVar14;
    *(undefined2 *)&pFVar1->field_0x12 = uVar10;
    iVar16 = iVar17 * 2 + 1;
    *(undefined8 *)pFVar21 = uVar7;
    *(undefined8 *)((longlong)&(pFVar21->size).field0_0x0 + 4) = uVar8;
    pFVar21->bReduceBothAxes = bVar11;
    pFVar21->bReduceByTwo = bVar12;
    *(undefined2 *)&pFVar21->field_0x12 = uVar13;
    iVar15 = iVar17;
  } while( true );
}

// IntroSortInternal<UE::Mutable::Private::FPackLayoutBlock,int,FIdentityFunctor,TDereferenceWrapper<UE::Mutable::Private::FPackLayoutBlock,bool___cdecl(UE::Mutable::Private::FPackLayoutBlock_const_&,UE::Mutable::Private::FPackLayoutBlock_const_&)>_> @ 14ab09870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Mutable::Private::FPackLayoutBlock,int,FIdentityFunctor,TDereferenceWrapper<UE::Mutable::Private::FPackLayoutBlock,bool___cdecl(UE::Mutable::Private::FPackLayoutBlock_const_&,UE::Mutable::Private::FPackLayoutBlock_const_&)>_>
          (FPackLayoutBlock *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Mutable::Private::FPackLayoutBlock,bool___cdecl(UE::Mutable::Private::FPackLayoutBlock_const_&,UE::Mutable::Private::FPackLayoutBlock_const_&)>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  FPackLayoutBlock *pFVar10;
  FPackLayoutBlock *pFVar11;
  FPackLayoutBlock *pFVar12;
  FPackLayoutBlock **ppFVar13;
  int iVar14;
  FPackLayoutBlock *pFVar15;
  FPackLayoutBlock *pFVar16;
  FPackLayoutBlock *pFVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  FPackLayoutBlock *local_358;
  FPackLayoutBlock *local_348;
  FPackLayoutBlock *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    ppFVar13 = &local_348;
    do {
      pFVar17 = ppFVar13[1];
      pFVar16 = *ppFVar13;
      local_358 = ppFVar13[2];
      iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0x14) + 1;
      pFVar15 = pFVar16;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14ab09950:
        if (8 < iVar9) {
          uVar1 = *(undefined8 *)((longlong)&(pFVar15->size).field0_0x0 + 4);
          pFVar10 = pFVar17 + 1;
          iVar9 = iVar9 / 2;
          uVar2 = *(undefined8 *)(pFVar15 + iVar9);
          uVar3 = *(undefined8 *)((longlong)&pFVar15[iVar9].size.field0_0x0 + 4);
          pFVar16 = pFVar15 + iVar9;
          bVar5 = pFVar16->bReduceBothAxes;
          bVar6 = pFVar16->bReduceByTwo;
          uVar7 = *(undefined2 *)&pFVar16->field_0x12;
          *(undefined8 *)(pFVar15 + iVar9) = *(undefined8 *)pFVar15;
          *(undefined8 *)((longlong)&pFVar15[iVar9].size.field0_0x0 + 4) = uVar1;
          bVar8 = pFVar15->bReduceByTwo;
          uVar4 = *(undefined2 *)&pFVar15->field_0x12;
          pFVar16 = pFVar15 + iVar9;
          pFVar16->bReduceBothAxes = pFVar15->bReduceBothAxes;
          pFVar16->bReduceByTwo = bVar8;
          *(undefined2 *)&pFVar16->field_0x12 = uVar4;
          *(undefined8 *)pFVar15 = uVar2;
          *(undefined8 *)((longlong)&(pFVar15->size).field0_0x0 + 4) = uVar3;
          pFVar15->bReduceBothAxes = bVar5;
          pFVar15->bReduceByTwo = bVar6;
          *(undefined2 *)&pFVar15->field_0x12 = uVar7;
          pFVar16 = pFVar15;
LAB_14ab09992:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar17) goto code_r0x00014ab0999b;
          goto LAB_14ab099a7;
        }
        for (; pFVar10 = pFVar15, pFVar16 = pFVar15, pFVar15 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar12 = pFVar10, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar17) {
            bVar8 = (*param_4.Predicate)(pFVar12,pFVar16);
            pFVar10 = pFVar16;
            if (!bVar8) {
              pFVar10 = pFVar12;
            }
          }
          uVar1 = *(undefined8 *)pFVar12;
          uVar2 = *(undefined8 *)((longlong)&(pFVar12->size).field0_0x0 + 4);
          bVar5 = pFVar12->bReduceBothAxes;
          bVar6 = pFVar12->bReduceByTwo;
          uVar7 = *(undefined2 *)&pFVar12->field_0x12;
          uVar3 = *(undefined8 *)((longlong)&(pFVar17->size).field0_0x0 + 4);
          *(undefined8 *)pFVar12 = *(undefined8 *)pFVar17;
          *(undefined8 *)((longlong)&(pFVar12->size).field0_0x0 + 4) = uVar3;
          bVar8 = pFVar17->bReduceByTwo;
          uVar4 = *(undefined2 *)&pFVar17->field_0x12;
          pFVar12->bReduceBothAxes = pFVar17->bReduceBothAxes;
          pFVar12->bReduceByTwo = bVar8;
          *(undefined2 *)&pFVar12->field_0x12 = uVar4;
          *(undefined8 *)pFVar17 = uVar1;
          *(undefined8 *)((longlong)&(pFVar17->size).field0_0x0 + 4) = uVar2;
          pFVar17->bReduceBothAxes = bVar5;
          pFVar17->bReduceByTwo = bVar6;
          *(undefined2 *)&pFVar17->field_0x12 = uVar7;
        }
        goto LAB_14ab09acf;
      }
LAB_14ab09ab6:
      HeapSortInternal<UE::Mutable::Private::FPackLayoutBlock,int,FIdentityFunctor,TDereferenceWrapper<UE::Mutable::Private::FPackLayoutBlock,bool___cdecl(UE::Mutable::Private::FPackLayoutBlock_const_&,UE::Mutable::Private::FPackLayoutBlock_const_&)>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ab09acf:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_348 <= ppFVar13);
  }
  return;
code_r0x00014ab0999b:
  bVar8 = (*param_4.Predicate)(pFVar15,pFVar16);
  if (!bVar8) goto LAB_14ab09992;
LAB_14ab099a7:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar15) break;
    bVar8 = (*param_4.Predicate)(pFVar10,pFVar15);
  } while (!bVar8);
  uVar1 = *(undefined8 *)((longlong)&pFVar11[-1].size.field0_0x0 + 4);
  if (pFVar16 <= pFVar10) {
    uVar2 = *(undefined8 *)pFVar16;
    uVar3 = *(undefined8 *)((longlong)&pFVar12[1].size.field0_0x0 + 4);
    bVar5 = pFVar12[1].bReduceBothAxes;
    bVar6 = pFVar12[1].bReduceByTwo;
    uVar7 = *(undefined2 *)&pFVar12[1].field_0x12;
    *(undefined8 *)pFVar16 = *(undefined8 *)pFVar10;
    *(undefined8 *)((longlong)&pFVar12[1].size.field0_0x0 + 4) = uVar1;
    bVar8 = pFVar11[-1].bReduceByTwo;
    uVar4 = *(undefined2 *)&pFVar11[-1].field_0x12;
    pFVar12[1].bReduceBothAxes = pFVar11[-1].bReduceBothAxes;
    pFVar12[1].bReduceByTwo = bVar8;
    *(undefined2 *)&pFVar12[1].field_0x12 = uVar4;
    *(undefined8 *)pFVar10 = uVar2;
    *(undefined8 *)((longlong)&pFVar11[-1].size.field0_0x0 + 4) = uVar3;
    pFVar11[-1].bReduceBothAxes = bVar5;
    pFVar11[-1].bReduceByTwo = bVar6;
    *(undefined2 *)&pFVar11[-1].field_0x12 = uVar7;
    goto LAB_14ab09992;
  }
  bVar5 = pFVar15->bReduceBothAxes;
  bVar6 = pFVar15->bReduceByTwo;
  uVar7 = *(undefined2 *)&pFVar15->field_0x12;
  uVar2 = *(undefined8 *)pFVar15;
  uVar3 = *(undefined8 *)((longlong)&(pFVar15->size).field0_0x0 + 4);
  iVar14 = iVar14 + -1;
  *(undefined8 *)pFVar15 = *(undefined8 *)pFVar10;
  *(undefined8 *)((longlong)&(pFVar15->size).field0_0x0 + 4) = uVar1;
  bVar8 = pFVar11[-1].bReduceByTwo;
  uVar4 = *(undefined2 *)&pFVar11[-1].field_0x12;
  pFVar15->bReduceBothAxes = pFVar11[-1].bReduceBothAxes;
  pFVar15->bReduceByTwo = bVar8;
  *(undefined2 *)&pFVar15->field_0x12 = uVar4;
  *(undefined8 *)pFVar10 = uVar2;
  *(undefined8 *)((longlong)&pFVar11[-1].size.field0_0x0 + 4) = uVar3;
  pFVar11[-1].bReduceBothAxes = bVar5;
  pFVar11[-1].bReduceByTwo = bVar6;
  *(undefined2 *)&pFVar11[-1].field_0x12 = uVar7;
  if (((longlong)pFVar10 + (-0x14 - (longlong)pFVar15)) / 0x14 <
      ((longlong)pFVar17 - (longlong)pFVar16) / 0x14) {
    if (pFVar16 < pFVar17) {
      *ppFVar13 = pFVar16;
      ppFVar13[1] = pFVar17;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar10 <= pFVar15 + 1) goto LAB_14ab09acf;
    pFVar17 = pFVar11 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar10) {
      *ppFVar13 = pFVar15;
      ppFVar13[1] = pFVar11 + -2;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar17 <= pFVar16) goto LAB_14ab09acf;
  }
  iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0x14) + 1;
  pFVar15 = pFVar16;
  if (iVar14 == 0) goto LAB_14ab09ab6;
  goto LAB_14ab09950;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l177::<lambda_10>_> @ 14ab0e3d0

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l177::<lambda_10>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_10> *param_8)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar4 = FImage::GetLODCount(param_1);
  if ((iVar4 < param_7 + param_5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_6 + param_7;
  iVar5 = FImage::GetLODCount(param_2);
  if ((iVar5 < iVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar6 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar4);
  if ((iVar5 != iVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar6,0x8000,param_4,param_6,iVar4);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar6,0x8000,param_3,param_5,param_7 + param_5);
      uVar9 = local_48.ArrayNum >> 0x1f;
      iVar7 = (int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((iVar7 != local_58.ArrayNum / param_4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = 0;
      if (0 < iVar7) {
        lVar10 = 0;
        do {
          local_48.DataPtr[lVar10] = local_58.DataPtr[lVar8 * 4];
          local_48.DataPtr[lVar10 + 1] = local_58.DataPtr[lVar8 * 4 + 1];
          lVar1 = lVar8 * 4;
          lVar8 = lVar8 + 1;
          local_48.DataPtr[lVar10 + 2] = local_58.DataPtr[lVar1 + 2];
          lVar10 = lVar10 + 3;
        } while (lVar8 < iVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l178::<lambda_11>_> @ 14ab0e640

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l178::<lambda_11>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_11> *param_8)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar4 = FImage::GetLODCount(param_1);
  if ((iVar4 < param_7 + param_5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_6 + param_7;
  iVar5 = FImage::GetLODCount(param_2);
  if ((iVar5 < iVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar6 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar4);
  if ((iVar5 != iVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar6,0x8000,param_4,param_6,iVar4);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar6,0x8000,param_3,param_5,param_7 + param_5);
      uVar9 = local_48.ArrayNum >> 0x1f;
      iVar7 = (int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((iVar7 != local_58.ArrayNum / param_4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = 0;
      if (0 < iVar7) {
        lVar10 = 0;
        do {
          local_48.DataPtr[lVar10] = local_58.DataPtr[lVar8 * 4 + 2];
          local_48.DataPtr[lVar10 + 1] = local_58.DataPtr[lVar8 * 4 + 1];
          lVar1 = lVar8 * 4;
          lVar8 = lVar8 + 1;
          local_48.DataPtr[lVar10 + 2] = local_58.DataPtr[lVar1];
          lVar10 = lVar10 + 3;
        } while (lVar8 < iVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l180::<lambda_12>_> @ 14ab0e8b0

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l180::<lambda_12>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_12> *param_8)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar4 = FImage::GetLODCount(param_1);
  if ((iVar4 < param_7 + param_5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_6 + param_7;
  iVar5 = FImage::GetLODCount(param_2);
  if ((iVar5 < iVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar6 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar4);
  if ((iVar5 != iVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar6,0x8000,param_4,param_6,iVar4);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar6,0x8000,param_3,param_5,param_7 + param_5);
      uVar9 = local_48.ArrayNum >> 0x1f;
      iVar7 = (int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((iVar7 != local_58.ArrayNum / param_4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = 0;
      if (0 < iVar7) {
        lVar10 = 0;
        do {
          local_48.DataPtr[lVar10] = local_58.DataPtr[lVar8 * 4 + 2];
          local_48.DataPtr[lVar10 + 1] = local_58.DataPtr[lVar8 * 4 + 1];
          lVar1 = lVar8 * 4;
          lVar8 = lVar8 + 1;
          local_48.DataPtr[lVar10 + 2] = local_58.DataPtr[lVar1];
          lVar10 = lVar10 + 3;
        } while (lVar8 < iVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l234::<lambda_14>_> @ 14ab0eb20

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l234::<lambda_14>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_14> *param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar3 = FImage::GetLODCount(param_1);
  if ((iVar3 < param_7 + param_5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_6 + param_7;
  iVar4 = FImage::GetLODCount(param_2);
  if ((iVar4 < iVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar3);
  if ((iVar4 != iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar5,0x8000,param_4,param_6,iVar3);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar5,0x8000,param_3,param_5,param_7 + param_5);
      uVar8 = local_48.ArrayNum >> 0x1f;
      iVar6 = (int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar6 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = 0;
      if (0 < iVar6) {
        lVar9 = 0;
        do {
          local_48.DataPtr[lVar7 * 4] = local_58.DataPtr[lVar7];
          local_48.DataPtr[lVar9 + 1] = local_58.DataPtr[lVar7];
          local_48.DataPtr[lVar7 * 4 + 2] = local_58.DataPtr[lVar7];
          local_48.DataPtr[lVar7 * 4 + 3] = 0xff;
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + 4;
        } while (lVar7 < iVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l235::<lambda_15>_> @ 14ab0ed90

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l235::<lambda_15>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_15> *param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar3 = FImage::GetLODCount(param_1);
  if ((iVar3 < param_7 + param_5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_6 + param_7;
  iVar4 = FImage::GetLODCount(param_2);
  if ((iVar4 < iVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar3);
  if ((iVar4 != iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar5,0x8000,param_4,param_6,iVar3);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar5,0x8000,param_3,param_5,param_7 + param_5);
      uVar8 = local_48.ArrayNum >> 0x1f;
      iVar6 = (int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar6 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = 0;
      if (0 < iVar6) {
        lVar9 = 0;
        lVar10 = 0;
        do {
          local_48.DataPtr[lVar7 * 4] = local_58.DataPtr[lVar9];
          local_48.DataPtr[lVar10 + 1] = local_58.DataPtr[lVar9 + 1];
          local_48.DataPtr[lVar7 * 4 + 2] = local_58.DataPtr[lVar9 + 2];
          local_48.DataPtr[lVar7 * 4 + 3] = 0xff;
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + 3;
          lVar10 = lVar10 + 4;
        } while (lVar7 < iVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l236::<lambda_16>_> @ 14ab0f010

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l236::<lambda_16>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_16> *param_8)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar4 = FImage::GetLODCount(param_1);
  if ((iVar4 < param_7 + param_5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_6 + param_7;
  iVar5 = FImage::GetLODCount(param_2);
  if ((iVar5 < iVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar6 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar4);
  if ((iVar5 != iVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar6,0x8000,param_4,param_6,iVar4);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar6,0x8000,param_3,param_5,param_7 + param_5);
      uVar7 = local_48.ArrayNum >> 0x1f;
      uVar1 = local_48._8_8_ & 0xffffffff;
      if (((int)((longlong)((ulonglong)uVar7 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar8 = (int)((longlong)((ulonglong)uVar7 << 0x20 | uVar1) / (longlong)param_3);
      if ((iVar8 != local_58.ArrayNum / param_4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memcpy(local_48.DataPtr,local_58.DataPtr,(longlong)(iVar8 * 4));
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l237::<lambda_17>_> @ 14ab0f250

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l237::<lambda_17>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_17> *param_8)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar4 = FImage::GetLODCount(param_1);
  if ((iVar4 < param_7 + param_5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = param_6 + param_7;
  iVar5 = FImage::GetLODCount(param_2);
  if ((iVar5 < iVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar6 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar4);
  if ((iVar5 != iVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar6,0x8000,param_4,param_6,iVar4);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar6,0x8000,param_3,param_5,param_7 + param_5);
      uVar9 = local_48.ArrayNum >> 0x1f;
      iVar7 = (int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar7 != local_58.ArrayNum / param_4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar8 = 0;
      if (0 < iVar7) {
        lVar10 = 0;
        do {
          lVar2 = lVar10 + 2;
          lVar10 = lVar10 + 4;
          local_48.DataPtr[lVar8 * 4] = local_58.DataPtr[lVar2];
          local_48.DataPtr[lVar8 * 4 + 1] = local_58.DataPtr[lVar8 * 4 + 1];
          local_48.DataPtr[lVar8 * 4 + 2] = local_58.DataPtr[lVar8 * 4];
          local_48.DataPtr[lVar8 * 4 + 3] = local_58.DataPtr[lVar8 * 4 + 3];
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l258::<lambda_18>_> @ 14ab0f4d0

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l258::<lambda_18>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_18> *param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar3 = FImage::GetLODCount(param_1);
  if ((iVar3 < param_7 + param_5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_6 + param_7;
  iVar4 = FImage::GetLODCount(param_2);
  if ((iVar4 < iVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar3);
  if ((iVar4 != iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar5,0x8000,param_4,param_6,iVar3);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar5,0x8000,param_3,param_5,param_7 + param_5);
      uVar8 = local_48.ArrayNum >> 0x1f;
      iVar6 = (int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar6 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = 0;
      if (0 < iVar6) {
        lVar9 = 0;
        lVar10 = 0;
        do {
          local_48.DataPtr[lVar7 * 4] = local_58.DataPtr[lVar9];
          local_48.DataPtr[lVar10 + 1] = local_58.DataPtr[lVar9 + 1];
          local_48.DataPtr[lVar7 * 4 + 2] = local_58.DataPtr[lVar9 + 2];
          local_48.DataPtr[lVar7 * 4 + 3] = 0xff;
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + 3;
          lVar10 = lVar10 + 4;
        } while (lVar7 < iVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l266::<lambda_19>_> @ 14ab0f750

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l266::<lambda_19>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_19> *param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar3 = FImage::GetLODCount(param_1);
  if ((iVar3 < param_7 + param_5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_6 + param_7;
  iVar4 = FImage::GetLODCount(param_2);
  if ((iVar4 < iVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar3);
  if ((iVar4 != iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar5,0x8000,param_4,param_6,iVar3);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar5,0x8000,param_3,param_5,param_7 + param_5);
      uVar8 = local_48.ArrayNum >> 0x1f;
      iVar6 = (int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar6 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = 0;
      if (0 < iVar6) {
        lVar9 = 0;
        do {
          local_48.DataPtr[lVar7 * 4] = local_58.DataPtr[lVar7];
          local_48.DataPtr[lVar9 + 1] = local_58.DataPtr[lVar7];
          local_48.DataPtr[lVar7 * 4 + 2] = local_58.DataPtr[lVar7];
          local_48.DataPtr[lVar7 * 4 + 3] = 0xff;
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + 4;
        } while (lVar7 < iVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l41::<lambda_1>_> @ 14ab0f9c0

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l41::<lambda_1>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_1> *param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar3 = FImage::GetLODCount(param_1);
  if ((iVar3 < param_7 + param_5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_6 + param_7;
  iVar4 = FImage::GetLODCount(param_2);
  if ((iVar4 < iVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar3);
  if ((iVar4 != iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar5,0x8000,param_4,param_6,iVar3);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar5,0x8000,param_3,param_5,param_7 + param_5);
      uVar7 = local_48.ArrayNum >> 0x1f;
      iVar6 = (int)((longlong)((ulonglong)uVar7 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar7 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar6 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      memcpy(local_48.DataPtr,local_58.DataPtr,(longlong)iVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l68::<lambda_2>_> @ 14ab0fc00

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l68::<lambda_2>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_2> *param_8)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar9 = param_5 + param_7;
  iVar4 = FImage::GetLODCount(param_1);
  if ((iVar4 < iVar9) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = param_6 + param_7;
  iVar5 = FImage::GetLODCount(param_2);
  if ((iVar5 < iVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,iVar9);
  iVar6 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar4);
  if ((iVar5 != iVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar6,0x8000,param_4,param_6,iVar4);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar6,0x8000,param_3,param_5,iVar9);
      uVar8 = local_48.ArrayNum >> 0x1f;
      iVar7 = (int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar7 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar10 = 0;
      if (0 < iVar7) {
        lVar11 = 0;
        do {
          uVar8 = (uint)local_58.DataPtr[lVar11 + 1] * 0x96 +
                  (uint)local_58.DataPtr[lVar11 + 2] * 0x1d + (uint)local_58.DataPtr[lVar11] * 0x4d;
          uVar3 = (uchar)(uVar8 >> 8);
          if (0xff < uVar8 >> 8) {
            uVar3 = 0xff;
          }
          local_48.DataPtr[lVar10] = uVar3;
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 3;
        } while (lVar10 < iVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l69::<lambda_3>_> @ 14ab0fe90

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l69::<lambda_3>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_3> *param_8)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar9 = param_5 + param_7;
  iVar4 = FImage::GetLODCount(param_1);
  if ((iVar4 < iVar9) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = param_6 + param_7;
  iVar5 = FImage::GetLODCount(param_2);
  if ((iVar5 < iVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,iVar9);
  iVar6 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar4);
  if ((iVar5 != iVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar6,0x8000,param_4,param_6,iVar4);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar6,0x8000,param_3,param_5,iVar9);
      uVar8 = local_48.ArrayNum >> 0x1f;
      iVar7 = (int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar7 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar10 = 0;
      if (0 < iVar7) {
        lVar11 = 0;
        do {
          uVar8 = (uint)local_58.DataPtr[lVar11 + 1] * 0x96 +
                  (uint)local_58.DataPtr[lVar11 + 2] * 0x1d + (uint)local_58.DataPtr[lVar11] * 0x4d;
          uVar3 = (uchar)(uVar8 >> 8);
          if (0xff < uVar8 >> 8) {
            uVar3 = 0xff;
          }
          local_48.DataPtr[lVar10] = uVar3;
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 3;
        } while (lVar10 < iVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l70::<lambda_4>_> @ 14ab10120

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l70::<lambda_4>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_4> *param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uchar uVar8;
  uint uVar9;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar3 = FImage::GetLODCount(param_1);
  if ((iVar3 < param_7 + param_5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_6 + param_7;
  iVar4 = FImage::GetLODCount(param_2);
  if ((iVar4 < iVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar3);
  if ((iVar4 != iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar5,0x8000,param_4,param_6,iVar3);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar5,0x8000,param_3,param_5,param_7 + param_5);
      uVar9 = local_48.ArrayNum >> 0x1f;
      iVar6 = (int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar6 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = 0;
      if (0 < iVar6) {
        do {
          uVar9 = (uint)local_58.DataPtr[lVar7 * 4 + 1] * 0x96 +
                  (uint)local_58.DataPtr[lVar7 * 4 + 2] * 0x1d +
                  (uint)local_58.DataPtr[lVar7 * 4] * 0x4d;
          uVar8 = (uchar)(uVar9 >> 8);
          if (0xff < uVar9 >> 8) {
            uVar8 = 0xff;
          }
          local_48.DataPtr[lVar7] = uVar8;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l71::<lambda_5>_> @ 14ab103b0

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l71::<lambda_5>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_5> *param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar3 = FImage::GetLODCount(param_1);
  if ((iVar3 < param_7 + param_5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_6 + param_7;
  iVar4 = FImage::GetLODCount(param_2);
  if ((iVar4 < iVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar3);
  if ((iVar4 != iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar5,0x8000,param_4,param_6,iVar3);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar5,0x8000,param_3,param_5,param_7 + param_5);
      uVar8 = local_48.ArrayNum >> 0x1f;
      iVar6 = (int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar6 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = 0;
      if (0 < iVar6) {
        do {
          local_48.DataPtr[lVar7] =
               (uchar)((uint)local_58.DataPtr[lVar7 * 4 + 1] * 0x96 +
                       (uint)local_58.DataPtr[lVar7 * 4 + 2] * 0x1d +
                       (uint)local_58.DataPtr[lVar7 * 4] * 0x4d >> 8);
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l72::<lambda_6>_> @ 14ab10620

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l72::<lambda_6>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_6> *param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar3 = FImage::GetLODCount(param_1);
  if ((iVar3 < param_7 + param_5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_6 + param_7;
  iVar4 = FImage::GetLODCount(param_2);
  if ((iVar4 < iVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar3);
  if ((iVar4 != iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar5,0x8000,param_4,param_6,iVar3);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar5,0x8000,param_3,param_5,param_7 + param_5);
      uVar8 = local_48.ArrayNum >> 0x1f;
      iVar6 = (int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar6 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = 0;
      if (0 < iVar6) {
        do {
          local_48.DataPtr[lVar7] =
               (uchar)((uint)local_58.DataPtr[lVar7 * 4 + 1] * 0x96 +
                       (uint)local_58.DataPtr[lVar7 * 4 + 2] * 0x4d +
                       (uint)local_58.DataPtr[lVar7 * 4] * 0x1d >> 8);
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l73::<lambda_7>_> @ 14ab10890

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l73::<lambda_7>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_7> *param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar9 = param_5 + param_7;
  iVar3 = FImage::GetLODCount(param_1);
  if ((iVar3 < iVar9) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_6 + param_7;
  iVar4 = FImage::GetLODCount(param_2);
  if ((iVar4 < iVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,iVar9);
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar3);
  if ((iVar4 != iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar5,0x8000,param_4,param_6,iVar3);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar5,0x8000,param_3,param_5,iVar9);
      uVar8 = local_48.ArrayNum >> 0x1f;
      iVar6 = (int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar8 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((iVar6 != local_58.ArrayNum / param_4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = 0;
      if (0 < iVar6) {
        lVar10 = 0;
        do {
          local_48.DataPtr[lVar7] =
               (uchar)((uint)local_58.DataPtr[lVar10 + 1] * 0x96 +
                       (uint)local_58.DataPtr[lVar10 + 2] * 0x1d +
                       (uint)local_58.DataPtr[lVar10] * 0x4d >> 8);
          lVar7 = lVar7 + 1;
          lVar10 = lVar10 + 3;
        } while (lVar7 < iVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l175::<lambda_8>_> @ 14ab10b10

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l175::<lambda_8>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_8> *param_8)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar4 = FImage::GetLODCount(param_1);
  if ((iVar4 < param_7 + param_5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_6 + param_7;
  iVar5 = FImage::GetLODCount(param_2);
  if ((iVar5 < iVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar6 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar4);
  if ((iVar5 != iVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar6,0x8000,param_4,param_6,iVar4);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar6,0x8000,param_3,param_5,param_7 + param_5);
      uVar9 = local_48.ArrayNum >> 0x1f;
      iVar7 = (int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) /
                   (longlong)param_3);
      if (((int)((longlong)((ulonglong)uVar9 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((iVar7 != local_58.ArrayNum / param_4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = 0;
      if (0 < iVar7) {
        lVar10 = 0;
        do {
          local_48.DataPtr[lVar10] = local_58.DataPtr[lVar8];
          local_48.DataPtr[lVar10 + 1] = local_58.DataPtr[lVar8];
          puVar1 = local_58.DataPtr + lVar8;
          lVar8 = lVar8 + 1;
          local_48.DataPtr[lVar10 + 2] = *puVar1;
          lVar10 = lVar10 + 3;
        } while (lVar8 < iVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// ProcessBatchedHelper<`UE::Mutable::Private::FImageOperator::ImagePixelFormat'::__l176::<lambda_9>_> @ 14ab10d80

void __cdecl
UE::Mutable::Private::ImagePixelFormatInternal::
ProcessBatchedHelper<_UE::Mutable::Private::FImageOperator::ImagePixelFormat_::__l176::<lambda_9>_>
          (FImage *param_1,FImage *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,<lambda_9> *param_8)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char,int> local_48;
  
  iVar4 = FImage::GetLODCount(param_1);
  if ((iVar4 < param_7 + param_5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest->GetLODCount() >= DestLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x42,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_6 + param_7;
  iVar5 = FImage::GetLODCount(param_2);
  if ((iVar5 < iVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src->GetLODCount() >= SrcLODBegin + NumLODs",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_1->DataStorage,0x8000,param_3,param_5,param_7 + param_5);
  iVar6 = FImageDataStorage::GetNumBatchesLODRange
                    (&param_2->DataStorage,0x8000,param_4,param_6,iVar4);
  if ((iVar5 != iVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBatches == Src->DataStorage.GetNumBatchesLODRange(NumBatchElems, SrcElemSizeInBytes, SrcLODBegin, SrcLODEnd)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FImageDataStorage::GetBatchLODRange
                (&param_2->DataStorage,&local_58,iVar6,0x8000,param_4,param_6,iVar4);
      FImageDataStorage::GetBatchLODRange
                (&param_1->DataStorage,&local_48,iVar6,0x8000,param_3,param_5,param_7 + param_5);
      uVar7 = local_48.ArrayNum >> 0x1f;
      uVar1 = local_48._8_8_ & 0xffffffff;
      if (((int)((longlong)((ulonglong)uVar7 << 0x20 | local_48._8_8_ & 0xffffffff) %
                (longlong)param_3) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestView.Num() % DestElemSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x53,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar8 = (int)((longlong)((ulonglong)uVar7 << 0x20 | uVar1) / (longlong)param_3);
      if ((iVar8 != local_58.ArrayNum / param_4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElems == SrcView.Num() / SrcElemSizeInBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImagePixelFormat.cpp"
                             ,0x54,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memcpy(local_48.DataPtr,local_58.DataPtr,(longlong)(iVar8 * 3));
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

// `vector_deleting_destructor' @ 14ab22310

void * __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::_vector_deleting_destructor_
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((param_1 & 2) == 0) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x10);
    }
    return this;
  }
  lVar2 = *(longlong *)&this[-1].ArrayNum;
  pTVar3 = this + lVar2;
  while (lVar2 != 0) {
    pFVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  if ((param_1 & 1) != 0) {
    operator_delete__(&this[-1].ArrayNum,*(longlong *)&this[-1].ArrayNum * 0x10 + 8);
  }
  return &this[-1].ArrayNum;
}

// Mutex'' @ 150421cf0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150421cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableCompressedMipGenerationMemoryOptimizations'' @ 150421d10

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__CVarEnableCompressedMipGenerationMemoryOptimizations__(void)

{
  CVarEnableCompressedMipGenerationMemoryOptimizations._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableCompressedMipGenerationMemoryOptimizations);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableImageResizeMemoryOptimizations'' @ 150421d30

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVarEnableImageResizeMemoryOptimizations__
          (void)

{
  CVarEnableImageResizeMemoryOptimizations._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableImageResizeMemoryOptimizations);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableVectorImplementationForSmallResizes'' @ 150421d50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__CVarEnableVectorImplementationForSmallResizes__(void)

{
  CVarEnableVectorImplementationForSmallResizes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableVectorImplementationForSmallResizes);
  return;
}

// `dynamic_atexit_destructor_for_'LogMuscleActivationConstraint'' @ 150421d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMuscleActivationConstraint);
  return;
}

